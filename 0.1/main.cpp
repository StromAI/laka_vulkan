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
    show_info("����VkResult::VK_NOT_READY�Ľ��� �������");
    VkResult test_r = VkResult::VK_NOT_READY;
    show_result(test_r);
    
    // ����windows������
    S_wnd_class wc{ GetModuleHandle(0),"fuck",WndProc };
    
    // ��������
    auto wnd = wc.create_a_window("shit");
    std::string err_temp("��������ʧ��");
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

    // ����Vulkanʵ��
    auto vk_instance = Instance::get_new({ VK_KHR_SURFACE_EXTENSION_NAME,surface_extension_name });
    
    // �����豸������
    auto vk_dc = vk_instance->get_a_device_creator(
        // ��ѡ�豸�Ļص�����. 
        // �㽫ͨ������,�õ�һ�������豸����,�ú��������ж�һ���豸�Ƿ����Ҫ��.
        [](Pramater_choose_physical_device& p_)->bool{
            auto phsical_device = p_.if_you_feel_the_physical_device_not_ok_so_return_false;
            
            // �ҳ�ͨ���豸������ ����:
            auto p1 = phsical_device.get_properties();
            init_show;
            show_info("discreteQueuePriorities:{}",p1->limits.discreteQueuePriorities);

            // �趨��ѡ�豸������ ����:
            if (p1->limits.maxCullDistances == 0)
            {
                return false;
            }
            return true;
        },
        // �����߼��豸���еĻص�����
        // �㽫ͨ������,�õ�����ѡ�豸�����ж�����Ϣ,�粻�����򷵻�false.laka���������豸
        // ����Ļ�,����дwaiting_for_your_filled_info_,���ҷ���true;
        [](Pramater_choose_queue_family& pramater_)->bool{
            init_show;
            bool is_ok = false;

            for (auto&& qf_info : pramater_.give_you_queue_family_info_)
            {
                auto qf_index = qf_info.index;
                // �ж��Ƿ���һ����ͼ�ι��ܵĶ�����
                if (qf_info.properties.queueFlags & F_queue::b_graphics)
                {
                    continue;
                }
                pramater_.waiting_for_your_filled_info_.push_back(User_choose_queue_info{
                    qf_info.index,
                    {1.0f,1.0f,1.0f,1.0f},      // ���ٸ�Ԫ�ؾʹ�����ٸ����� ÿ��Ԫ�ؾ�����Ӧλ�õĶ��е����ȼ�
                    (F_device_queue_create)0,   // ���°汾�������ú�˵�� ��ʱ��Ϊ0
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





