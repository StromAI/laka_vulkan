#include <common.h>
#include "old_vk.h"
#include <ShellScalingAPI.h>

#include <iostream>

using namespace laka::vk;

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{ 
    return (DefWindowProc(hWnd, uMsg, wParam, lParam));
}

//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
int main()
{
    init_show;
    show_info("测试VkResult::VK_NOT_READY的解释 不是真的");
    VkResult test_r = VkResult::VK_NOT_READY;
    show_result(test_r);
    
    // 创建windows窗口类
    S_wnd_class wc{ GetModuleHandle(0),"fuck",WndProc };
    
    // 创建窗口
    auto wnd = wc.create_a_window("shit");
    std::string err_temp("创建窗口失败");
    expect_if(wnd == NULL, err_temp+std::to_string((int)wnd) );

    auto sh_core_moudle = load_module_must("Shcore.dll");

    using PFN_set_process_dpi_awareness = HRESULT(*)(PROCESS_DPI_AWARENESS);
    auto setProcessDpiAwareness =
        (PFN_set_process_dpi_awareness)load_module_function_must(sh_core_moudle, "SetProcessDpiAwareness");

    if (setProcessDpiAwareness != nullptr)
    {
        setProcessDpiAwareness(PROCESS_DPI_AWARENESS::PROCESS_PER_MONITOR_DPI_AWARE);
    }
    FreeLibrary(sh_core_moudle);

    // 创建Vulkan实例
    auto vk_instance = Instance::get_new({ VK_KHR_SURFACE_EXTENSION_NAME,surface_extension_name });

    surface_create_info s_ci{
        0,
        wc.hInstance,
        wnd
    };
    auto surface = vk_instance->get_a_surface(s_ci);

    // 创建设备创建器
    auto vk_dc = vk_instance->get_a_device_creator(
        // 挑选设备的回调函数. 
        // 你将通过参数,得到一个物理设备对象,该函数负责判断一个设备是否符合要求.
        [](P_choose_physical_device& p_)->bool{
            auto phsical_device = p_.if_you_feel_the_physical_device_not_ok_so_return_false;
            
            // 找出通过设备的条件 例如:
            auto p1 = phsical_device.get_properties();
            init_show;
            show_info("discreteQueuePriorities:{}",p1->limits.discreteQueuePriorities);

            // 设定挑选设备的条件 例如:
            if (p1->limits.maxCullDistances == 0)
            {
                return false;
            }
            return true;
        },
        // 设置逻辑设备队列的回调函数
        // 你将通过参数,得到所挑选设备的所有队列信息,如不满意则返回false.laka将跳过此设备
        // 满意的话,就填写waiting_for_your_filled_info_,并且返回true;
        [](P_choose_queue_family& pramater_)->bool{
            init_show;
            bool is_ok = false;

            for (auto&& qf_info : pramater_.give_you_queue_family_info_)
            {
                auto qf_index = qf_info.index;
                show_debug("判断是否是一个带图形功能的队列族");
                if (qf_info.properties.queueFlags & F_queue::b_graphics == 0)
                {
                    continue;
                }
                show_debug("判断是否支持本surface");
                if (qf_info.is_support_your_surface[0] == false)
                {
                    show_info("一个队列族不支持我的surface");
                    continue;
                }
                show_info("选择了一个既有图形功能 又支持我的surface的队列族");
                pramater_.waiting_for_your_filled_info_.push_back(User_choose_queue_info{
                    qf_info.index,
                    {1.0f,1.0f,1.0f,1.0f},      // 多少个元素就代表多少个队列 每个元素就是相应位置的队列的优先级
                    (F_device_queue_create)0,   // 最新版本才有作用和说明 暂时设为0
                    E_queue_global_priority_EXT::e_medium_ext
                });
                is_ok = true;
                break;
            }
            return is_ok;
        }
    );

    auto vk_dev = vk_dc->get_a_device({ surface }, { VK_KHR_SWAPCHAIN_EXTENSION_NAME });

    auto cmd_pool = vk_dev->get_a_command_pool(
        vk_dev->queue_familys[0].qf_index, 
        F_command_pool_create::b_reset_command_buffer
    );

    std::vector<E_format> depthFormats{
        E_format::e_d32_sfloat_s8_uint,
        E_format::e_d32_sfloat,
        E_format::e_d24_unorm_s8_uint,
        E_format::e_d16_unorm_s8_uint,
        E_format::e_d16_unorm,
    };

    bool finded_format = false;
    E_format format;
    for (auto&& f : depthFormats)
    {
        auto fmt_ppt = vk_dev->physical_devices[0]->get_format_properties(f);
        VkFormatFeatureFlagBits x = VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT;
        if (x & fmt_ppt->optimalTilingFeatures)
        {
            format = f;
            finded_format = true;
            break;
        }
    }

    auto semaphore_present = vk_dev->get_a_semaphore();
    auto semaphore_render = vk_dev->get_a_semaphore();
    F_pipeline_stage pipeline_stage = F_pipeline_stage::b_color_attachment_output;

    S_submit_info submit_info(
        1,
        *semaphore_present,
        &pipeline_stage,
        0,
        nullptr,
        1,
        *semaphore_render
    );
    
    E_format color_format;
    E_color_space_KHR color_space;
    bool found_B8G8R8A8_UNORM = false;
    auto surface_formats = vk_dev->physical_devices[0]->get_surface_formats(surface);
    for (auto&& sf:*surface_formats)
    {
        if (sf.format == E_format::e_b8g8r8a8_unorm) 
        {
            color_format = sf.format;
            color_space = sf.colorSpace;
            bool found_B8G8R8A8_UNORM = true;
            break;
        }
    }
    if (found_B8G8R8A8_UNORM == false)
    {
        color_format = (*surface_formats)[0].format;
        color_space = (*surface_formats)[0].colorSpace;
    }

    auto surface_capabilities = vk_dev->physical_devices[0]->get_surface_capabilities(surface);

    auto present_mode_temp = vk_dev->physical_devices[0]->get_surface_present_modes(surface);

    S_extent_2d swapchain_extent;
    swapchain_extent = surface_capabilities->currentExtent;

    auto width = swapchain_extent.width;
    auto height = swapchain_extent.height;

    auto present_mode = E_present_mode_KHR::e_fifo_khr;

    auto number_of_swapchain_images = surface_capabilities->minImageCount + 1;
    if (surface_capabilities->maxImageCount > 0 &&
        number_of_swapchain_images > surface_capabilities->maxImageCount)
    {
        number_of_swapchain_images = surface_capabilities->maxImageCount;
    }

    F_surface_transform_KHR pre_transform = F_surface_transform_KHR::b_identity_khr;
    if (surface_capabilities->supportedTransforms&F_surface_transform_KHR::b_identity_khr == 0)
    {
        pre_transform = surface_capabilities->currentTransform;
    }

    F_composite_alpha_KHR compsite_alpha;
    std::vector<F_composite_alpha_KHR> compsite_alphas{
        F_composite_alpha_KHR::b_opaque_khr,
        F_composite_alpha_KHR::b_pre_multiplied_khr,
        F_composite_alpha_KHR::b_post_multiplied_khr,
        F_composite_alpha_KHR::b_inherit_khr
    };
    for (auto&& compsite_temp : compsite_alphas)
    {
        if (surface_capabilities->supportedCompositeAlpha&compsite_temp)
        {
            compsite_alpha = compsite_temp;
            break;
        }
    }

    S_swapchain_create_info_KHR swapchain_ci(
        (F_swapchain_create_KHR)(0),
        surface->handle,
        number_of_swapchain_images,
        color_format,
        color_space,
        swapchain_extent,
        1,
        F_image_usage::b_color_attachment,
        E_sharing_mode::e_exclusive,
        0,
        nullptr,
        pre_transform,
        compsite_alpha,
        present_mode,
        VK_TRUE,
        VK_NULL_HANDLE
    );

    if (surface_capabilities->supportedUsageFlags&F_image_usage::b_transfer_dst)
    {
        swapchain_ci.imageUsage |= F_image_usage::b_transfer_dst;
    }
    if (surface_capabilities->supportedUsageFlags&F_image_usage::b_transfer_src)
    {
        swapchain_ci.imageUsage |= F_image_usage::b_transfer_src;
    }
    auto swapchain = vk_dev->get_a_swapchain(swapchain_ci);

    auto images = swapchain->get_images();

    std::vector<std::shared_ptr<Image_view::Group>> image_views;

    image_views.resize(images->handles.size());

    size_t count = 0;
    

    





}





