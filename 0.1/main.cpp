#include <common.h>
#include "vk.h"
#include <ShellScalingAPI.h>

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
    
    // 创建设备创建器
    auto vk_dc = vk_instance->get_a_device_creator(
        // 挑选设备的回调函数. 
        // 你将通过参数,得到一个物理设备对象,该函数负责判断一个设备是否符合要求.
        [](Pramater_choose_physical_device& p_)->bool{
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
        [](Pramater_choose_queue_family& pramater_)->bool{
            init_show;
            bool is_ok = false;

            for (auto&& qf_info : pramater_.give_you_queue_family_info_)
            {
                auto qf_index = qf_info.index;
                // 判断是否是一个带图形功能的队列族
                if (qf_info.properties.queueFlags & F_queue::b_graphics)
                {
                    continue;
                }
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
    surface_create_info s_ci{
        0,
        wc.hInstance,
        wnd
    };
    auto surface = vk_instance->get_a_surface(s_ci);

    auto vk_dev = vk_dc->get_a_device();

    auto cmd_pool = vk_dev->get_a_command_pool(
        vk_dev->queue_familys[0].qf_index,F_command_pool_create::b_reset_command_buffer);



}





