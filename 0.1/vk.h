/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

/*
����:
��������,������̲��鷳,���Һܶ��������.
���÷�װ�õĽṹ��.
�漰�������ͽṹ���,�½��ṹ���Դ���.
*/

#pragma once
#include <memory>
#include <array>
#include <type_traits>

#include "laka_vk_define.h"
#include "types.h"

namespace laka {namespace vk {

#if 1   /*  global  */

#   if 1    /*  ǰ������  */
    class Instance;
    class Physical_device;
    class Physical_device_group;
    class Surface;
    class Swapchain;

    class Device_creator;
    struct Device_api;

    class Device;
    class Queue;
    class Device_memory;
    class Shader_module;
    class Buffer;
    class Image;
    class Sampler;
    class Sampler_Ycbcr_conversion;
    class Semaphore;
    class Fence;
    class Event;
    class Descriptor_pool;
    class Descriptor_set_layout;
    class Query_pool;
    class Command_pool;
    class Render_pass;
    class Pipeline_layout;
    class Pipeline_cache;
    class Compute_pipeline;
    class Compute_pipelines;
    class Graphics_pipeline;
    class Graphics_pipelines;
    class Buffer_view;
    class Image_view;

    class Descriptor_set_base;
    class Descriptor_set_group;
    class Descriptor_set;
    class Descriptor_update_template;

    class Command_buffer_base;
    class Command_buffer_group;
    class Command_buffer;
    class Frame_buffer;
    struct Queue_family_info;

    struct P_choose_physical_device;
    struct P_choose_queue_family;

    union Alloc_callbacks_ptr;
#   endif   /*  ǰ������  */

#if defined(VK_USE_PLATFORM_WIN32_KHR)  /*  ����  */

    union F_wnd_class_style
    {
        UINT flag;
        enum {
            /* ����ƶ����С�������Ŀͻ����ĸ߶ȣ����ػ��������ڡ� */
            b_v_redraw = CS_VREDRAW,
            /* ����ƶ����С�������Ŀͻ����Ŀ�ȣ����ػ��������ڡ� */
            b_h_redraw = CS_HREDRAW,
            /* ���û������ڸ���Ĵ�����˫�����ʱ���򴰿ڹ��̷���˫����Ϣ�� */
            b_dbl_clks = CS_DBLCLKS,
            /* Ϊ���е�ÿ�����ڷ���Ψһ���豸�����ġ� */
            b_one_window_one_dc = CS_OWNDC,
            /*
                ���Ӵ��ڵļ��о�������Ϊ�����ڵļ��о��Σ��Ա��Ӵ��ڿ����ڸ������ϻ��ơ�
                ����CS_PARENTDC��ʽλ�Ĵ��ڴ�ϵͳ���豸�����Ļ����н��ճ����豸�����ġ�
                �������������ṩ������豸�����Ļ��豸���������á�
                ָ��CS_PARENTDC����ǿӦ�ó�������ܡ�
            */
            b_parent_dc = CS_PARENTDC,
            /* ���ô��ڲ˵��ϵĹرա� */
            b_no_close = CS_NOCLOSE,
            /*
            ��λͼ����ʽ�����ɴ��ര���ڵ�����Ļͼ�񲿷֡�
            ɾ�����ں�ϵͳ��ʹ�ñ����λͼ�ָ���Ļͼ�񣬰����������ڵ��Ĵ��ڡ�
            ��ˣ����λͼʹ�õ��ڴ���δ������������������Ļ����δʹ�洢��ͼ����Ч����ϵͳ�������ڵ��Ĵ��ڷ���WM_PAINT��Ϣ��
            ����ʽ���ڶ�����ʾȻ����������Ļ�����֮ǰ��ɾ����С���ڣ����磬�˵���Ի��򣩷ǳ����á�
            ������ʽ��������ʾ���������ʱ�䣬��Ϊϵͳ�������ȷ����ڴ����洢λͼ��
            */
            b_save_bits = CS_SAVEBITS,
            /* �ڴ��ڱ߽磨x�����϶��봰�ڵĿͻ����򡣴���ʽ��Ӱ�촰�ڵĿ�ȼ�������ʾ���ϵ�ˮƽλ�á� */
            b_byte_align_client = CS_BYTEALIGNCLIENT,
            /* �ڴ��ڱ߽磨x�����϶��봰�ڡ�����ʽ��Ӱ�촰�ڵĿ�ȼ�������ʾ���ϵ�ˮƽλ�á� */
            b_byte_align_window = CS_BYTEALIGNWINDOW,
            /* ָʾ��������Ӧ�ó���ȫ���ࡣ */
            b_global_class = CS_GLOBALCLASS,
            /*
                ����һ���豸�������Թ����е����д��ڹ���
                ���ڴ��������ض��ڽ��̵ģ����Ӧ�ó���Ķ���߳̿��Դ���ͬһ��Ĵ��ڡ�
                �߳�Ҳ���Գ���ͬʱʹ���豸�����ġ������������ʱ��ϵͳֻ����һ���̳߳ɹ�������ͼ������
            */
            b_class_dc = CS_CLASSDC,
            b_ime = CS_IME,
#if(_WIN32_WINNT >= 0x0501)
            /*
                �ڴ�����������ӰЧ����
                ͨ��SPI_SETDROPSHADOW�򿪺͹ر�Ч����
                ͨ�������������˵�֮���С�Ķ�������������Ч�ģ���ǿ���������������ڵ�Z˳���ϵ��
                �Ӿ��д���ʽ���ഴ����Windows�����Ƕ�������;���ǿ��ܲ��Ƕ�ͯ���ڡ�
            */
            b_drop_shadow = CS_DROPSHADOW,
#endif /* _WIN32_WINNT >= 0x0501 */
        };
        F_wnd_class_style(int i_) :flag(static_cast<UINT>(i_)) {}
        operator UINT&() { return flag; }
    };

    union F_wnd_style
    {
        DWORD flag;
        enum {
            /* �������ص��Ĵ��ڡ� �ص����ھ��б������ͱ߿� ��b_tiled��ʽ��ͬ�� */
            b_overlapped = WS_OVERLAPPED,
            /* ���������һ���ص��Ĵ��ڡ��ص����ھ��б������ͱ߿���b_overlapped��ʽ��ͬ�� */
            b_tiled = WS_TILED,
            /* ���������һ���ص��Ĵ��ڡ���b_overlapped_window�����ͬ�� */
            b_tiled_window = WS_TILEDWINDOW,
            /* ���������һ���ص��Ĵ��ڡ���b_tiled_window�����ͬ��*/
            b_overlapped_window = WS_OVERLAPPEDWINDOW,
            /* ���������һ���Ӵ��ڡ����д���ʽ�Ĵ��ڲ����в˵������ؼ�����ʹ�ô���ʽ��WS������� */
            b_child = WS_CHILD,
            /* ��һ���������ڡ� ����ʽ������b_child��ʽһ��ʹ�� */
            b_popup = WS_POPUP,
            /* ��һ���������ڡ� �������b_caption��b_popup_window��ʽ����ʹ���ڲ˵��ɼ��� */
            b_popup_window = WS_POPUPWINDOW,
            /*
                �ô�����һ��ؼ��ĵ�һ���ؼ���
                �����ɵ�һ���ؼ��������������пؼ���ɣ�ֱ������b_group��ʽ����һ���ؼ���
                ÿ�����еĵ�һ���ؼ�ͨ������b_tab_stop��ʽ���Ա��û����Դ�һ�����ƶ�����һ���顣
                �û�������ͨ��ʹ�÷���������̽�������е�һ���ؼ�����Ϊ���е���һ���ؼ���
                �����Դ򿪺͹رմ���ʽ�Ը��ĶԻ��򵼺���
                Ҫ�ڴ������ں���Ĵ���ʽ����ʹ��SetWindowLong������
            */
            b_group = WS_GROUP,
            /*
                �ô�����һ���ؼ������û�����TAB��ʱ���ÿؼ����Խ��ռ��̽��㡣
                ��TAB���ɽ����̽������Ϊb_tab_stop��ʽ����һ���ؼ���
                �����Դ򿪺͹رմ���ʽ�Ը��ĶԻ��򵼺���
                Ҫ�ڴ������ں���Ĵ���ʽ����ʹ��SetWindowLong������
                �����û������Ĵ��ں���ģʽ�Ի�����ʹ���Ʊ�λ���������Ϣѭ���Ե���IsDialogMessage������
            */
            b_tab_stop = WS_TABSTOP,

            /* ����ͼ�����ڸ�������ʱ���������Ӵ���ռ�õ����򡣴���������ʱʹ�ô���ʽ�� */
            b_clipchildren = WS_CLIPCHILDREN,
            /*
                �����Ӵ�������ڱ˴�;
                Ҳ����˵�����ض��Ӵ����յ�WM_PAINT��Ϣʱ��
                b_clip_siblings��ʽ�����Ҫ���µ��Ӵ�������֮������������ص��Ӵ��ڡ�
                ���δָ��b_clip_siblings�����Ӵ����ص���
                �����Ӵ��ڵĿͻ������ڻ���ʱ�������������Ӵ��ڵĿͻ������ڻ��ơ�
            */
            b_clip_siblings = WS_CLIPSIBLINGS,

            /* ���������һ��ϸ�߿�. */
            b_border = WS_BORDER,
            /* ������һ��������(����WS�߽���)��*/
            b_caption = WS_CAPTION,
            /* ������һ��������(����WS�߽���)��*/
            b_child_window = WS_CHILDWINDOW,
            /* ����������һ�����ڲ˵��� ������ָ��b_caption��ʽ�� */
            b_system_menu = WS_SYSMENU,
            /* ������һ��ˮƽ�������� */
            b_h_scroll = WS_HSCROLL,
            /* ������һ����ֱ������ */
            b_v_scroll = WS_VSCROLL,
            /* ������һ����С����ť���޷���WS_EX_CONTEXTHELP��ʽ��ϡ�������ָ��b_system_menu��ʽ��*/
            b_minimize_box = WS_MINIMIZEBOX,
            /* ������һ���ߴ�߿� ��b_thick_frame��ʽ��ͬ�� */
            b_size_box = WS_SIZEBOX,
            /* ������һ���ߴ�߿� ��b_size_box��ʽ��ͬ�� */
            b_thick_frame = WS_THICKFRAME,
            /* ������һ����󻯰�ť���޷���WS_EX_CONTEXTHELP��ʽ��ϡ�������ָ��b_system_menu��ʽ��*/
            b_maximize_box = WS_MAXIMIZEBOX,
            /* ���ھ���ͨ����Ի���һ��ʹ�õ���ʽ�ı߿� ���д���ʽ�Ĵ��ڲ����б������� */
            b_dialog_frame = WS_DLGFRAME,

            /*
                �ô�����������á�
                ���õĴ����޷������û������롣
                Ҫ�ڴ������ں���Ĵ����ã���ʹ��EnableWindow���ܡ�
            */
            b_disabled = WS_DISABLED,
            /* �����������С���� ��b_minimize��ʽ��ͬ�� */
            b_iconic = WS_ICONIC,
            /* �����������С���� ��b_iconic��ʽ��ͬ�� */
            b_minimize = WS_MINIMIZE,
            /* �����������󻯵� */
            b_maximize = WS_MAXIMIZE,
            /* ��������ǿɼ��ġ�ͨ��ʹ��ShowWindow��SetWindowPos���������Դ򿪻�رմ���ʽ�� */
            b_visible = WS_VISIBLE,
        };
        F_wnd_style(int i_) :flag(static_cast<DWORD>(i_)) {}
        operator DWORD&() { return flag; }
    };

    union F_wnd_ex_style
    {
        DWORD flag;
        enum {
            /*
                ������һ���ֲ㴰�ڡ�
                ������ھ���CS_OWNDC��CS_CLASSDC������ʽ������ʹ�ô���ʽ��
                Windows 8���������ں��Ӵ���֧��WS_EX_LAYERED��ʽ��
                ��ǰ��Windows�汾��֧�ֶ������ڵ�WS_EX_LAYERED��
            */
            b_layered = WS_EX_LAYERED,

            /* ���������һ���ص��Ĵ��ڡ� */
            b_overlapped_window = WS_EX_OVERLAPPEDWINDOW,

            /* �ô�����һ��MDI�Ӵ��ڡ� */
            b_mdi_child = WS_EX_MDICHILD,

            /* �����ǵ�ɫ�崰�ڣ�����һ����ģʽ�Ի�����ʾһϵ����� */
            b_palette_window = WS_EX_PALETTEWINDOW,

            /*
                �ô���ּ������������������
                ���ߴ��ڵı���������ͨ�������̣����ڱ���ʹ�ý�С��������ơ�
                ���û�����ALT + TABʱ�����ߴ��ڲ����������������Ի����С�
                ������ߴ��ھ���ϵͳ�˵�������ͼ�겻����ʾ�ڱ������ϡ�
                ���ǣ�������ͨ���Ҽ����������ALT + SPACE����ʾϵͳ�˵���
            */
            b_tool_window = WS_EX_TOOLWINDOW,

            /*
                ����Ӧ�������з����Ĵ����Ϸ�������Ӧ�ñ���������֮�ϣ���ʹ���ڱ�ͣ��Ҳ����ˡ�
                Ҫ��ӻ�ɾ������ʽ����ʹ��SetWindowPos������
            */
            b_topmost = WS_EX_TOPMOST,

            /*
                ʹ�ô���ʽ�����Ķ����������û�����ʱ�����Ϊǰ̨���ڡ�
                ���û���С����ر�ǰ������ʱ��ϵͳ���Ὣ�˴�������ǰ̨��
                ��Ӧͨ��������ʻ�ͨ���ɷ��ʼ��������署���ˣ�ͨ�����̵���������ڡ�
                Ҫ����ڣ���ʹ��SetActiveWindow��SetForegroundWindow������
                Ĭ������£����ڲ���������������ϡ�
                Ҫǿ�ƴ�����ʾ���������ϣ���ʹ��WS_EX_APPWINDOW��ʽ��
            */
            b_no_activete = WS_EX_NOACTIVATE,

            /* ���ڲ��Ὣ�䴰�ڲ��ִ��ݸ����Ӵ��� */
            b_no_inherit_layout = WS_EX_NOINHERITLAYOUT,

            /* ʹ�ô���ʽ�������Ӵ����ڴ���������ʱ���ὫWM_PARENTNOTIFY��Ϣ���͵��丸���ڡ� */
            b_no_parent_notify = WS_EX_NOPARENTNOTIFY,

            /* ���ڲ�����Ⱦ���ض�����档 ��������û�пɼ����ݻ�ʹ�ñ�������Ļ������ṩ�Ӿ�Ч���Ĵ��ڡ� */
            b_no_rediction_bitmap = WS_EX_NOREDIRECTIONBITMAP,

            /* �����ڿɼ�ʱ�������㴰��ǿ�Ƶ���������. */
            b_app_window = WS_EX_APPWINDOW,

            /* �ô��ڽ����Ϸ��ļ��� */
            b_accept_files = WS_EX_ACCEPTFILES,

            /* �ô�����һ��˫�߿򣻿���ѡ��ʹ�ñ�������dwStyle������ָ��WS_caption��ʽ�������ô��ڡ� */
            b_dialog_modal_frame = WS_EX_DLGMODALFRAME,

            /* �ô��ھ���ͨ�õ���������ԡ�����Ĭ�ϵġ� */
            b_left = WS_EX_LEFT,

            /* �����ı�ʹ�ô����ҵĶ�ȡ˳��������ʾ������Ĭ�ϵġ� */
            b_ltr_reading = WS_EX_LTRREADING,

            /*
                ʹ��˫�����Եײ�����������˳����ƴ��ڵ����к����
                ������ھ���CS_OWNDC��CS_CLASSDC������ʽ������ʹ�ô˷�����
                Windows 2000����֧�ִ���ʽ��
            */
            b_composited = WS_EX_COMPOSITED,

            /*
                �ڴ����·����ֵܽ��ã���ͬһ���̴߳�������Ϳ��֮�󣬲�Ӧ�öԴ��ڽ��л��ơ�
                ������ʾΪ͸������Ϊ�ײ��ֵܴ��ڵ�λ�Ѿ������ơ�
                Ҫ��û����Щ���Ƶ������ʵ��͸���ȣ���ʹ��SetWindowRgn������
            */
            b_transparent = WS_EX_TRANSPARENT,

            /* �ô��ھ�����ά�߿���ʽ��ּ�����ڲ������û��������Ŀ�� */
            b_static_edge = WS_EX_STATICEDGE,

            /* ��ֱ��������������ڣ�λ�ڿͻ����Ҳࡣ ����Ĭ��ֵ�� */
            b_right_scroll_bar = WS_EX_RIGHTSCROLLBAR,

            /*
                ���ڱ������Ӧ�ò���Ի��򵼺����Ӵ��ڡ�
                ���ָ���˴���ʽ����Ի���������ִ�е�������
                �����紦��TAB������ͷ����������Ƿ���ʱ��ݹ鵽�˴��ڵ������С�
            */
            b_control_parent = WS_EX_CONTROLPARENT,

            /* �����ı߿��а��ݵı�Ե�� */
            b_client_edge = WS_EX_CLIENTEDGE,

            /* ������һ����͹���Ե�ı߿� */
            b_window_edge = WS_EX_WINDOWEDGE,

            /*
                ���ڵı����������ʺš�
                ���û������ʺ�ʱ����꽫��Ϊ����ָ����ʺš�
                ����û�Ȼ�󵥻��Ӵ��ڣ�������յ�WM_HELP��Ϣ��
                �Ӵ���Ӧ�ý���Ϣ���ݸ������ڹ��̣��ù���Ӧ��ʹ��HELP_WM_HELP�������WinHelp������
                ��������Ӧ�ó�����ʾһ���������ڣ��ô���ͨ�������Ӵ��ڵİ�����
                WS_EX_CONTEXTHELP������WS_MAXIMIZEBOX��WS_MINIMIZEBOX��ʽһ��ʹ�á�
            */
            b_context_hlep = WS_EX_CONTEXTHELP,

            /*
                �ô��ھ���ͨ�õġ��Ҷ��롱���ԡ� ��ȡ���ڴ����ࡣ
                ����shell������ϣ��������������֧���Ķ�˳��������������ʱ������ʽ����Ч; ���򣬷�񱻺��ԡ�
                �Ծ�̬��༭�ؼ�ʹ��WS_EX_RIGHT��ʽ�ֱ���ʹ��SS_RIGHT��ES_RIGHT��ʽ������ͬ��Ч����
                ʹ�ô��а�ť�ؼ��Ĵ���ʽ��ʹ��BS_RIGHT��BS_RIGHTBUTTON��ʽ������ͬ��Ч����
            */
            b_right = WS_EX_RIGHT,
            /*
                ���shell������ϣ��������������֧���Ķ�˳�������������ԣ�
                ��ֱ��������������ڣ�λ�ڿͻ�����ࡣ �����������ԣ������Ը���ʽ��
            */
            b_left_scroll_bar = WS_EX_LEFTSCROLLBAR,
            /*
                ���shell������ϣ��������������֧���Ķ�˳�������������ԣ�
                ��ʹ�ô��ҵ�����Ķ�˳��������ʾ�����ı��� �����������ԣ������Ը���ʽ��
            */
            b_rtl_reading = WS_EX_RTLREADING,
            /*
                ���shell������ϣ��������������֧���Ķ�˳�������������ԣ�
                �򴰿ڵ�ˮƽԭ��λ���ұ�Ե�� ����ˮƽֵ����ǰ����
            */
            b_layout_rtl = WS_EX_LAYOUTRTL,
        };
        F_wnd_ex_style(int i_) :flag(static_cast<DWORD>(i_)) {}
        operator DWORD&() { return flag; }
    };

    struct S_wnd_class :public WNDCLASSEX {
    public:
        S_wnd_class(
            HINSTANCE           hInstance_,
            LPCSTR              lpszClassName_,
            WNDPROC             wnd_process_,
            F_wnd_class_style   style_ = F_wnd_class_style::b_h_redraw | F_wnd_class_style::b_v_redraw,
            HBRUSH              hbrBackground_ = (HBRUSH)GetStockObject(BLACK_BRUSH),
            HICON               hIcon_ = LoadIcon(NULL, IDI_APPLICATION),
            HCURSOR             hCursor_ = LoadCursor(NULL, IDC_ARROW),
            HICON               hIconSm_ = LoadIcon(NULL, IDI_WINLOGO),
            LPCSTR              lpszMenuName_ = NULL,
            int                 cls_extra_ = 0,
            int                 wnd_extra_ = 0);

        HWND create_a_window(
            LPCSTR          window_name_,
            int             x_ = 0,
            int             y_ = 0,
            int             wdith_ = 1280,
            int             height_ = 768,
            F_wnd_style     style_ = F_wnd_style::b_clip_siblings |
            F_wnd_style::b_clipchildren |
            F_wnd_style::b_visible,
            F_wnd_ex_style  ex_style_ = 0,
            HWND            hWndParent_ = NULL,
            HMENU           hMenu_ = NULL,
            LPVOID          lpParam_ = NULL)
        {
            return CreateWindowEx(ex_style_, lpszClassName, window_name_,
                style_, x_, y_, wdith_, height_, hWndParent_, hMenu_, hInstance, lpParam_);
        }

    };

#   endif   /*  ����  */

#   if 1    /*  ȫ�ֺ���  */
    void show_result(VkResult ret_);
    void show_result_assert(VkResult ret_);

    std::string version_str(uint32_t version);
    uint32_t get_instance_version();

    Alloc_callbacks_ptr father_allocation_cb();
#   endif   /*  ȫ�ֺ���  */

#   if 1    /*  ����ģ��  */

    //  Ϊ���������
    template <typename T__>
    class Ahandle {
    public:
        using Handle_type = std::remove_cv_t<decltype(T__::handle)>;
        Handle_type handle;

        Ahandle(std::shared_ptr<T__> sptr_) :handle(sptr_->handle) {}
        Ahandle(T__& ref_) :handle(ref_.ref.handle) {}
        Ahandle(const Handle_type handle_) :handle(handle_) {}
        Ahandle(std::nullptr_t nullptr_) :handle(VK_NULL_HANDLE) {}
        Ahandle() :handle(VK_NULL_HANDLE) {}

        operator Handle_type() { return handle; }
    };

    union Alloc_callbacks_ptr {
    private:
        S_allocation_callbacks* s;
        VkAllocationCallbacks* vks;
        friend class Instance;
    public:
        Alloc_callbacks_ptr() :s(nullptr) {}
        Alloc_callbacks_ptr(std::nullptr_t n_) :s(n_) {}
        Alloc_callbacks_ptr(Alloc_callbacks_ptr& acb_) :s(acb_.s) {}
        Alloc_callbacks_ptr(S_allocation_callbacks* cb_) :s(cb_) {}

        operator S_allocation_callbacks*() { return s; }
        operator VkAllocationCallbacks*() { return vks; }

        //Alloc_callback_ptr& operator=(Alloc_callback_ptr& acb_) { s = acb_.s; }
        bool operator==(Alloc_callbacks_ptr& acb_) { return s == acb_.s; }
        bool operator!=(Alloc_callbacks_ptr& acb_) { return s != acb_.s; }
        bool operator==(S_allocation_callbacks* acb_) { return s == acb_; }
        bool operator!=(S_allocation_callbacks* acb_) { return s != acb_; }
        bool operator==(std::nullptr_t) { return s == nullptr; }
        bool operator!=(std::nullptr_t) { return s != nullptr; }
    };
    using Alloc_callbacks_ptr = union Alloc_callbacks_ptr;

    template<typename Handle_type__>
    class Have_handles {
    public:
        std::vector<Handle_type__> handles;

        operator Handle_type__*()
        {
            return &handles[0];
        }
        operator Array_value<Handle_type__>()
        {
            return Array_value<Handle_type__>(
                static_cast<uint32_t>(handles.size()),
                &handles[0]
            );
        }
        operator Array_value<const Handle_type__>()
        {
            return Array_value<const Handle_type__>(
                static_cast<uint32_t>(handles.size()),
                &handles[0]
            );
        }
    };

    //��ʱ������ͬһ���豸�ϵĶ�������.
    template<typename Vk_obj_type__>
    class Group_base : public Have_handles< std::remove_cv_t<decltype(Vk_obj_type__::handle)> >{
    public:
        using Handle_type = std::remove_cv_t<decltype(Vk_obj_type__::handle)>;

        decltype(Vk_obj_type__::father) father;

        Group_base& operator << (Aref<Group_base> group_)
        {
            Have_handles::handles.insert(
                Have_handles::handles.end(),
                group_.ref.handles.begin(),
                group_.ref.handles.end()
            );
        }
        Group_base& operator << (Ahandle<Vk_obj_type__> vk_obj_handle_)
        {
            operator<<(vk_obj_handle_);
            return *this;
        }

        virtual std::shared_ptr<Vk_obj_type__> detach(size_t index_) = 0;
    };

    template<typename Handle_type__>
    class Have_handle {
    public:
        Handle_type__ handle;

        operator Handle_type__() { return handle; }
        operator Handle_type__*() { return &handle; }
        operator Handle_type__*()const { return const_cast<Handle_type__*const>(&handle); }
    };

    template<typename Father_type__,typename Handle_type__>
    class Vk_obj : public Have_handle<Handle_type__>{
    public:
        std::shared_ptr<Father_type__> father;
    protected:
        Vk_obj<Father_type__, Handle_type__>() {}
        friend Father_type__;
        Alloc_callbacks_ptr alloc_cb_ptr;
    };

    
#   endif   /*  ����ģ��  */


#endif  /*  global  */

    class Physical_device : public Have_handle<VkPhysicalDevice> {
    public:
        Instance*                       instance;
        std::vector<Queue_family_info>  queue_familys;

        std::shared_ptr<std::vector<S_layer_properties>>
            get_layer_propertiess();

        std::shared_ptr<std::vector<S_extension_properties>>
            get_extension_properties(const char* layer_name_);

        std::shared_ptr <S_physical_device_features>
            get_features();

        std::shared_ptr<S_physical_device_properties>
            get_properties();

        std::shared_ptr<S_physical_device_memory_properties>
            get_memory_properties();

        std::shared_ptr<std::vector<S_queue_family_properties>>
            get_queue_family_properties();

        std::shared_ptr<S_format_properties>
            get_format_properties(E_format format_);

        std::shared_ptr<S_external_buffer_properties>
            get_external_buffer_properties(S_physical_device_external_buffer_info info_);

        std::shared_ptr<S_external_fence_properties>
            get_external_fence_properties(
                F_external_fence_handle_type    handle_type_);

        std::shared_ptr<S_external_semaphore_properties>
            get_external_semphore_properties(
                F_external_semaphore_handle_type    handle_type_);

        std::shared_ptr<S_image_format_properties2>
            get_image_format_properties(
                const S_physical_device_image_format_info2& info_);

        std::shared_ptr<std::vector<VkSparseImageFormatProperties2>>
            get_sparse_image_format_properties(
                const S_physical_device_sparse_image_format_info2& format_info_);

#ifdef VK_KHR_surface
        bool get_surface_support(Ahandle<Surface> surface_, uint32_t queue_index_);

        std::shared_ptr< std::vector<VkSurfaceFormatKHR> >
            get_surface_formats(Ahandle<Surface> surface_);

        std::shared_ptr< VkSurfaceCapabilitiesKHR >
            get_surface_capabilities(Ahandle<Surface> surface_);

        std::shared_ptr< std::vector< VkPresentModeKHR>>
            get_surface_present_modes(Ahandle<Surface> surface_);
#endif

#ifdef VK_KHR_swapchain
        std::shared_ptr< std::vector<VkRect2D> >
            get_present_rectangles(Ahandle<Surface> surface_);
#endif 

        struct Group {
        public:
            Instance* father;
            std::vector<Physical_device*> physical_devices;
            S_physical_device_group_properties properties;
        };
    };

#if 1   /*  Instance  */
    struct User_choose_queue_info {
        uint32_t queue_family_index;//��Ҫ�ĸ������Ķ������д�������
        std::vector<float> queue_priorities;//ÿ�����и��Ե����ȼ�
        F_device_queue_create create_flags;
        E_queue_global_priority_EXT global_priority;
    };
    struct P_choose_physical_device {
        Physical_device& if_you_feel_the_physical_device_not_ok_so_return_false;
    };
    struct P_choose_queue_family {
        std::vector<Queue_family_info> const& give_you_queue_family_info_;
        std::vector<User_choose_queue_info>& waiting_for_your_filled_info_;
    };

    class Instance 
        : public std::enable_shared_from_this<Instance> 
        , public Have_handle<VkInstance>{
    public:
        using Sptr = std::shared_ptr<Instance>;

        ~Instance();

        static Sptr get_new(
            Array_value<const char*>    enabled_extension_names_ = {},
            uint32_t                    api_version_ = VK_MAKE_VERSION(1, 1, 82),
            N_instance_create_info      next_ = {},
            Alloc_callbacks_ptr         allocator_ = nullptr,
            Array_value<const char*>    enabled_layer_names_ = {},
            const char*                 app_name_ = "laka::vk",
            uint32_t                    app_version_ = VK_MAKE_VERSION(0, 0, 1),
            const char*                 engine_name_ = "laka::vk::engine",
            uint32_t                    engine_version_ = VK_MAKE_VERSION(0, 0, 1));

        std::shared_ptr<Device_creator> get_a_device_creator(
            bool(*choose_physical_device_)(P_choose_physical_device& pramater_),
            bool(*choose_queue_family_)(P_choose_queue_family& pramater_),
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Surface> get_a_surface(
            surface_create_info&            create_info_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        struct Api {
            table_vk_api_instance(vk_fun ZK, , , YK FH)
                table_vk_api_physical_device(vk_fun ZK, , , YK FH)
                table_vk_api_platform(vk_fun ZK, , , YK FH)
                table_vk_api_khr_surface(vk_fun ZK, , , YK FH)
                table_vk_api_instance_khr_swapchain(vk_fun ZK, , , YK FH)
        }api;

        Instance(VkInstance handle_, Alloc_callbacks_ptr allocator_callbacks_ptr_);

        std::vector<Physical_device::Group>  physical_device_groups;
        std::vector<Physical_device>        physical_devices;
        Alloc_callbacks_ptr alloc_cb_ptr;
        
    private:
        S_allocation_callbacks alloc_cb;
    };

    struct Queue_family_info {
        uint32_t index;
        S_queue_family_properties properties;
        std::vector<bool> is_support_your_surface;
    };

#endif  /*  Instance  */

    class Surface 
        : public std::enable_shared_from_this<Surface> 
        , public Vk_obj<Instance,VkSurfaceKHR>{
    public:
        using Sptr = std::shared_ptr<Surface>;

#if defined(VK_USE_PLATFORM_WIN32_KHR)

        bool get_physical_device_presentation_support(
            Ahandle<Physical_device>    physical_device_,
            uint32_t                    queuefamily_index_);

        HANDLE get_memory_handle(
            Ahandle<Device>                             device_,
            Aref<S_memory_get_win32_handle_info_KHR>    info_);

        std::shared_ptr<VkMemoryWin32HandlePropertiesKHR> get_memory_handle_proerties(
            Ahandle<Device>                 device_,
            F_external_memory_handle_type   handle_type_,
            HANDLE                          handle_);

        VkResult import_semaphore_handle(
            Ahandle<Device>                                 device_,
            Aref<S_import_semaphore_win32_handle_info_KHR>  pImportSemaphoreWin32HandleInfo_);

        HANDLE get_Semaphore_handle(
            Ahandle<Device>                             device_,
            Aref<S_semaphore_get_win32_handle_info_KHR> semaphore_get_win32_handle_info_);

        VkResult import_fence_handle(
            Ahandle<Device>                             device_,
            Aref <S_import_fence_win32_handle_info_KHR> info_);

        HANDLE get_fence_handle(
            Ahandle<Device>                             device_,
            Aref<S_fence_get_win32_handle_info_KHR>     pGetWin32HandleInfo_);

#elif defined(VK_USE_PLATFORM_ANDROID_KHR)

        std::shared_ptr<S_android_hardware_buffer_format_properties_ANDROID>
            get_hardware_buffer_properties(
                Ahandle<Device>         device_,
                Aref<AHardwareBuffer>   buffer_);

        struct AHardwareBuffer* get_memory_hardware_buffer(
            Ahandle<Device>                                         device_,
            Aref<S_memory_get_android_hardware_buffer_info_ANDROID> pInfo_);

#elif defined(VK_USE_PLATFORM_IOS_MVK)

#elif defined(VK_USE_PLATFORM_MACOS_MVK)

#elif defined(VK_USE_PLATFORM_MIR_KHR)

        bool get_physical_device_presentation_support(
            Ahandle<Physical_device>    physical_device_,
            uint32_t                    queueFamilyIndex_,
            MirConnection*              connection_);

#elif defined(VK_USE_PLATFORM_VI_NN)

#elif defined(VK_USE_PLATFORM_WAYLAND_KHR)

        bool get_physical_device_presentation_support(
            Ahandle<Physical_device>    physical_device_,
            uint32_t                    queueFamilyIndex_,
            struct wl_display*          wl_display_);

#elif defined(VK_USE_PLATFORM_XCB_KHR)

        bool get_physical_device_presentation_support(
            Ahandle<Physical_device>    physical_device_,
            uint32_t                    queueFamilyIndex_,
            xcb_connection_t*           connection_,
            xcb_visualid_t              visual_id_);

#elif defined(VK_USE_PLATFORM_XLIB_KHR)

        bool get_physical_device_presentation_support(
            Ahandle<Physical_device>    physical_device_,
            uint32_t                    queueFamilyIndex_,
            Display*                    display_,
            VisualID                    visualID_);

#elif defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif
        Instance::Api* api;

        ~Surface();
    };

#if 1   /*  Device  */
    class Device_creator :public std::enable_shared_from_this<Device_creator> {
    public:
        using Sptr = std::shared_ptr<Device_creator>;

        std::shared_ptr<Device> get_a_device(
            Physical_device& physical_device_,
            S_device_create_info& create_info_);

        std::shared_ptr<Device> get_a_device(
            Physical_device& physical_device_,
            Array_value<Ahandle<Surface>> surfaces_ = {},
            Array_value<const char*> enabled_extensions_ = {},
            S_physical_device_features* features_ = nullptr);//todo:������Խ������������ص�

        std::shared_ptr<Device> get_a_device(
            Physical_device::Group& physica_device_group_,
            Array_value<Ahandle<Surface>> surfaces_ = {},
            Array_value<const char*> enabled_extensions_ = {},
            S_physical_device_features* features_ = nullptr);//todo:������Խ������������ص�

        std::shared_ptr<Device> get_a_device(
            Array_value<Ahandle<Surface>> surfaces_ = {},
            Array_value<const char*> enabled_extensions_ = {},
            S_physical_device_features* features_ = nullptr);

        //std::shared_ptr<Device> get_a_device(
        //    std::list<Physical_device>& physical_devices_,
        //    std::vector<char*>* enabled_extensions_ = nullptr,
        //    VkPhysicalDeviceFeatures* features_ = nullptr);

        std::shared_ptr<Instance> instance;

        bool(*choose_physical_device_function)(P_choose_physical_device& physical_device_);
        bool(*choose_queue_family_function)(P_choose_queue_family& parmatwr_);
    private:
        Alloc_callbacks_ptr alloc_cb_ptr;
        friend Device;
        friend Instance;
    };

    class Queue_family {
    public:
        uint32_t qf_index;
        S_queue_family_properties properties;
        std::vector<Queue> queues;
    };
    struct P_choose_memory_type {
        uint32_t memory_type_count;
        S_memory_type* memory_types;
    };
    struct P_choose_result {
        uint32_t memory_type_index;
    };
    class Device
        : public std::enable_shared_from_this<Device>
        , public Vk_obj<Instance, VkDevice> {
    public:
        using Sptr = std::shared_ptr<Device>;


        VkResult invalidate_mapped_memory_ranges(
            Array_value<S_mapped_memory_range> mapped_memory_ranges_);

        F_peer_memory_feature get_peer_memory_feature(
            uint32_t    heapIndex_,
            uint32_t    localDeviceIndex_,
            uint32_t    remoteDeviceIndex_);

        VkResult wait_idle();
        VkResult wait_for_fences(
            Array_value<VkFence>    fences_,
            uint64_t                timeout_,
            bool wait_all_ = true);

        ~Device();

        std::shared_ptr <Semaphore> get_a_semaphore(
            N_semaphore_create_info next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr <Fence> get_a_fence(
            N_fence_create_info next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr <Event> get_a_event(
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Shader_module> get_a_shader_module(
            const uint32_t*     code_ptr_,
            size_t              code_size_,
            N_shader_module_create_info next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Device_memory> get_a_device_memory(
            VkDeviceSize memory_size_,
            bool(*choose_memory_type_index_)(
                P_choose_memory_type& pramater_choose_,
                P_choose_result& choose_result_),
            N_memory_allocate_info next_ = {},
            Alloc_callbacks_ptr allocation_callbacks_ = father_allocation_cb());

        std::shared_ptr<Buffer> get_a_buffer(
            VkDeviceSize            buffer_size_,
            F_buffer_create         create_flags_,
            F_buffer_usage          usage_flags_,
            E_sharing_mode          sharing_mode_,
            Array_value<uint32_t>   queue_family_indices_,
            N_buffer_create_info    next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Image> get_a_image(
            F_image_create          create_fb_,
            E_image_type            imageType_,
            E_format                format_,
            S_extent_3d             extent_,
            uint32_t                mipLevels_,
            uint32_t                arrayLayers_,
            F_sample_count          samples_,
            F_image_usage           usage_fb_,
            E_sharing_mode          sharingMode_,
            E_image_tiling          tiling_,
            Array_value<uint32_t>   queue_family_indices_,
            E_image_layout          initialLayout_,
            N_image_create_info     next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Sampler> get_a_sampler(
            E_filter                magFilter_,
            E_filter                minFilter_,
            E_sampler_mipmap_mode   mipmapMode_,
            E_sampler_address_mode  addressModeU_,
            E_sampler_address_mode  addressModeV_,
            E_sampler_address_mode  addressModeW_,
            float                   mipLodBias_,
            VkBool32                anisotropyEnable_,
            float                   maxAnisotropy_,
            VkBool32                compareEnable_,
            E_compare_op            compareOp_,
            float                   minLod_,
            float                   maxLod_,
            E_border_color          borderColor_,
            VkBool32                unnormalizedCoordinates_,
            N_sampler_create_info   next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Sampler_Ycbcr_conversion> get_a_sampler_ycbcr_conversion(
            E_format                            format_,
            E_sampler_ycbcr_model_conversion    ycbcrModel_,
            E_sampler_ycbcr_range               ycbcrRange_,
            S_component_mapping             components_,
            E_chroma_location               xChromaOffset_,
            E_chroma_location               yChromaOffset_,
            E_filter                        chromaFilter_,
            VkBool32                        forceExplicitReconstruction_,
            N_sampler_ycbcr_conversion_create_info next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Command_pool> get_a_command_pool(
            uint32_t                        queueFamilyIndex_,
            F_command_pool_create           flags_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Descriptor_pool> get_a_descriptor_pool(
            uint32_t                            maxSets_,
            Array_value<S_descriptor_pool_size> poolSizes_,
            F_descriptor_pool_create            flags_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Query_pool> get_a_query_pool(
            E_query_type                query_type_,
            uint32_t                    query_count_,
            F_query_pipeline_statistic  queue_pipeline_statistic_flags_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Descriptor_set_layout> get_a_descriptor_set_layout(
            F_descriptor_set_layout_create                  flags_,//�ֲ����е�vk.xml��û��
            Array_value<S_descriptor_set_layout_binding>    bindings_ = {},
            N_descriptor_set_layout_create_info             next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Render_pass> get_a_render_pass(
            Array_value<S_attachment_description>   attachments = {},
            Array_value<S_subpass_description>      subpasses = {},
            Array_value<S_subpass_dependency>       dependencies = {},
            N_render_pass_create_info               next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Pipeline_layout> get_a_pipeline_layout(
            Array_value<S_push_constant_range>  push_constant_ranges_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Pipeline_cache> get_a_pipeline_cache(
            size_t      initial_data_size = 0,
            const void* initial_data_ = nullptr,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

#ifdef VK_KHR_swapchain

        std::shared_ptr<Swapchain> get_a_swapchain(
            S_swapchain_create_info_KHR info_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        VkDeviceGroupPresentModeFlagsKHR get_present_modes(Ahandle<Surface> surface_);

        std::shared_ptr<VkDeviceGroupPresentCapabilitiesKHR> get_present_capabilities();

#endif 
        std::vector<Queue_family> queue_familys;
        std::vector<Physical_device*> physical_devices;

        struct Api {
            table_vk_api_device(vk_fun ZK, , , YK FH)
                table_vk_api_cmd(vk_fun ZK, , , YK FH)
                table_vk_api_khr_swapchain(vk_fun ZK, , , YK FH)
                table_vk_api_device_khr_swapchain(vk_fun ZK, , , YK FH)
        }api;

    private:
        friend Device_creator;
        PFN_vkVoidFunction return_api(const char* api_name_);

        Device(
            std::shared_ptr<Instance>               instance_,
            std::shared_ptr<Device_creator>         device_creator_,
            std::vector<Physical_device*>&          physical_devices_,
            std::vector<User_choose_queue_info>&    queue_infos_,
            std::vector<S_queue_family_properties>& qf_properties_,
            VkDevice                                handle_,
            Alloc_callbacks_ptr allocation_callbacks_);
    };
#endif  /*  Device  */

    class Queue :public Have_handle<VkQueue> {
    public:
        VkResult wait_idle();
        //...
        VkResult submit(
            Array_value<S_submit_info>& pSubmitInfo_,
            Aptr<Fence>                 fence_ = nullptr);
        //...
        VkResult bind_sparse(
            Array_value<S_bind_sparse_info>&    pBindInfo_,
            Aptr < Fence >                      fence_ = nullptr);

#ifdef VK_KHR_swapchain
        // �Ŷ�������Ⱦ�����ͼ��ת��Ϊ��ȷ�Ĳ��ֺ��Ŷ�ͼ���Խ�����ʾ
        VkResult present(Aref<S_present_info_KHR> present_info_);
#endif
        uint32_t index;
        uint32_t family_index;

        Device::Api* api;
        class Group : Have_handles<VkQueue> {
            Device::Api* api;
        };
    };

    //  û���ܺ���
    class Semaphore
        : public std::enable_shared_from_this<Semaphore>
        , public Vk_obj<Device,VkSemaphore> {
    public:
        using Sptr = std::shared_ptr<Semaphore>;

        ~Semaphore();

        class Group :public Group_base<Semaphore> {
        public:
            std::shared_ptr<Semaphore> detach(size_t index_);
        };

    };

    class Fence
        : public std::enable_shared_from_this<Fence>
        , public Vk_obj<Device, VkFence> {
    public:
        using Sptr = std::shared_ptr<Fence>;

        VkResult get_status();
        VkResult reset(Array_value<VkFence> fences_);
        VkResult wait(uint64_t timeout_);
        VkResult wait(bool wait_all_, uint64_t timeout_, Array_value<VkFence> fences_);

        ~Fence();
        class Group :public Group_base<Fence> {
        public:
            std::shared_ptr<Fence> detach(size_t index_);
        };
    };

    class Event
        : public std::enable_shared_from_this<Event>
        , public Vk_obj<Device, VkEvent> {
    public:
        using Sptr = std::shared_ptr<Event>;

        VkResult set();
        VkResult get_event_status();
        void reset();

        ~Event();
        class Group :public Group_base<Event> {
        public:
            std::shared_ptr<Event> detach(size_t index_);
        };
    };

    //  û���ܺ���
    class Shader_module 
        : public std::enable_shared_from_this<Shader_module>
        , public Vk_obj<Device, VkShaderModule>{
    public:
        using Sptr = std::shared_ptr<Shader_module>;

        ~Shader_module();

        class Group :public Group_base<Shader_module> {
        public:
            std::shared_ptr<Shader_module> detach(size_t index_);
        };
    };

    class Device_memory
        : public std::enable_shared_from_this<Device_memory>
        , public Vk_obj<Device, VkDeviceMemory> {
    public:
        using Sptr = std::shared_ptr<Device_memory>;

        VkDeviceSize get_commitment();

        void* map_memory(
            VkDeviceSize        offset_,
            VkDeviceSize        size_,
            VkMemoryMapFlags    flags_ = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        void unmap_memory();

        ~Device_memory();

        class Group : public Group_base<Device_memory> {
        public:
            std::shared_ptr<Device_memory> detach(size_t index_);
        };
    };

    class Buffer
        : public std::enable_shared_from_this<Buffer>
        , public Vk_obj<Device, VkBuffer> {
    public:
        using Sptr = std::shared_ptr<Buffer>;

        S_memory_requirements get_memory_requirements();

        VkResult bind(
            std::shared_ptr<Device_memory> device_memroy_,
            VkDeviceSize memory_offset_);//�󶨺��Ƿ��Ӱ����������? ���������.

        ~Buffer();

        std::shared_ptr<Buffer_view> get_a_buffer_view(
            E_format        format_,
            VkDeviceSize    offset_,
            VkDeviceSize    range_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        class Group :public Group_base<Buffer> {
        public:
            std::shared_ptr<Buffer> detach(size_t index_);
        };
    };

    //  û�й��ܺ���
    class Buffer_view 
        : public std::enable_shared_from_this<Buffer_view> 
        , public Vk_obj<Buffer,VkBufferView>{
    public:
        using Sptr = std::shared_ptr<Buffer_view>;

        ~Buffer_view();

        class Group :public Group_base<Buffer_view> {
        public:
            std::shared_ptr<Buffer_view> detach(size_t index_);
        };
    };

    //  û�й��ܺ���
    class Image_view
        : public std::enable_shared_from_this<Image_view>
        , public Vk_obj<Image, VkImageView> {
    public:
        using Sptr = std::shared_ptr<Image_view>;

        ~Image_view();

        class Group :public Group_base<Image_view> {
        public:
            std::shared_ptr<Image_view> detach(size_t index_);
        };
    };

    class Image
        : public std::enable_shared_from_this<Image>
        , public Vk_obj<Device, VkImage> {
    public:
        using Sptr = std::shared_ptr<Image>;

        S_memory_requirements get_image_memory_requirements();

        S_subresource_layout get_subresource_layout(const S_image_subresource&);
        //...
        std::shared_ptr<std::vector<S_sparse_image_memory_requirements>>
            get_sparse_memory_requirements();

        VkResult bind(
            Aptr<Device_memory> device_memory_,
            VkDeviceSize        memory_offset_);

        ~Image();

        std::shared_ptr<Image_view> get_a_image_view(
            E_image_view_type           view_type_,
            E_format                    format_,
            S_component_mapping         components_,
            S_image_subresource_range   subresourceRange_,
            N_image_view_create_info    next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        class Group :public Group_base<Image> {
        public:
            std::shared_ptr<Image> detach(size_t index_);
        };
#ifdef VK_KHR_swapchain
        friend Swapchain;
#endif 
    };

#ifdef VK_KHR_swapchain

    class Swapchain
        : public std::enable_shared_from_this<Swapchain>
        , public Vk_obj<Device, VkSwapchainKHR> {
    public:
        using Sptr = std::shared_ptr<Swapchain>;

        // vkGetSwapchainImagesKHR 
        /*
            todo: �����������������Ķ���,������ʽ���е㲻һ��
            todo: �ṩ���غ������ڷ���VkResultֵ
            todo: ����,���Լ����õ��Զ�ת������ ��Ҫ�滮һ��
        */
        std::shared_ptr<Image::Group> get_images();

        // ��ȡҪʹ�õĿ��ÿɳ���ͼ�񣬲�������ͼ�������
        uint32_t acquire_next_image(
            uint64_t            timeout_,
            Ahandle<Semaphore>  semaphore_,
            Ahandle<Fence>      fence_);

        ~Swapchain();

    };

#endif  /*  Vk_KHR_swapchain  */

    //  û���ܺ���
    class Sampler
        : public std::enable_shared_from_this<Sampler>
        , public Vk_obj<Device, VkSampler> {
    public:
        using Sptr = std::shared_ptr<Sampler>;

        ~Sampler();

        class Group :public Group_base<Sampler> {
        public:
            std::shared_ptr<Sampler> detach(size_t index_);
        };
    };

    class Query_pool
        : public std::enable_shared_from_this<Query_pool>
        , public Vk_obj<Device, VkQueryPool> {
    public:
        using Sptr = std::shared_ptr<Query_pool>;

        VkResult get_results(
            uint32_t        firstQuery_,
            uint32_t        queryCount_,
            size_t          dataSize_,
            void*           pData_,
            VkDeviceSize    stride_,
            F_query_result  flags_);

        ~Query_pool();

        class Group :public Group_base<Query_pool> {
        public:
            std::shared_ptr<Query_pool> detach(size_t index_);
        };

    };

    class Render_pass
        : public std::enable_shared_from_this<Render_pass>
        , public Vk_obj<Device, VkRenderPass> {
    public:
        using Sptr = std::shared_ptr<Render_pass>;

        S_extent_2d get_area_granularity();

        ~Render_pass();

        std::shared_ptr<Frame_buffer> get_a_frame_buffer(
            Array_value<VkImageView> attachments_,
            uint32_t width_,
            uint32_t height_,
            uint32_t layers_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        class Group :public Group_base<Render_pass> {
        public:
            std::shared_ptr<Render_pass> detach(size_t index_);
        };
    };

    //  û���ܺ���
    class Frame_buffer
        : public std::enable_shared_from_this<Frame_buffer>
        , public Vk_obj<Render_pass, VkFramebuffer> {
    public:
        using Sptr = std::shared_ptr<Frame_buffer>;

        ~Frame_buffer();

        class Group :public Group_base<Frame_buffer> {
        public:
            std::shared_ptr<Frame_buffer> detach(size_t index_);
        };
    };

    class Descriptor_pool
        : public std::enable_shared_from_this<Descriptor_pool>
        , public Vk_obj<Device, VkDescriptorPool> {
    public:
        using Sptr = std::shared_ptr<Descriptor_pool>;

        VkResult reset(VkDescriptorPoolResetFlags flags = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        ~Descriptor_pool();

        std::shared_ptr<Descriptor_set_group> get_a_descriptor_set_group(
            Aref<Descriptor_set_layout> set_layout_,
            uint32_t                    count_,
            N_descriptor_set_allocate_info next_ = {});

        class Group :public Group_base<Descriptor_pool> {
        public:
            std::shared_ptr<Descriptor_pool> detach(size_t index_);
        };
    };

    class Descriptor_set
        : public std::enable_shared_from_this<Descriptor_set>
        , public Vk_obj<Device, VkDescriptorSet> {
    public:
        using Sptr = std::shared_ptr<Descriptor_set>;

        void update_with_template(
            Descriptor_update_template& descriptorUpdateTemplate,
            const void*                 pData);

        void update(
            S_write_descriptor_set&     pDescriptorWrites,
            S_copy_descriptor_set&      pDescriptorCopies);

        ~Descriptor_set();

        class Group : public Group_base<Descriptor_set> {
        public:
            std::shared_ptr<Descriptor_set> detach(size_t index_);
        };
    };

    //  û���ܺ���
    class Descriptor_set_layout
        : public std::enable_shared_from_this<Descriptor_set_layout>
        , public Vk_obj<Device, VkDescriptorSetLayout> {
    public:
        using Sptr = std::shared_ptr<Descriptor_set_layout>;

        ~Descriptor_set_layout();

        std::shared_ptr<Descriptor_update_template> get_a_descriptor_update_template(
            Array_value<VkDescriptorUpdateTemplateEntry> entrys_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        class Group :public Group_base<Descriptor_set_layout> {
            std::shared_ptr<Descriptor_set_layout> detach(size_t index_);
        };
    };

    /*
    typedef struct VkDescriptorUpdateTemplateCreateInfo {
    uint32_t                                  descriptorUpdateEntryCount;
    const VkDescriptorUpdateTemplateEntry*    pDescriptorUpdateEntries;

    VkDescriptorUpdateTemplateType            templateType;
        �������ΪVK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET��
            ����ֻ������ʹ�ù̶���descriptorSetLayout��������������
        �������ΪVK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR��
            ����ֻ������ʹ���ṩ��pipelineBindPoint��pipelineLayout��
            set number��������������

    VkDescriptorSetLayout                     descriptorSetLayout;
        ���templateType����VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET������Դ˲�����
        ��������ģ�彫ʹ�õ������������֡�
        ����ʹ�ô˲��ִ�����ͨ���´���������������ģ����µ���������������
        descriptorSetLayout�����ڹ�������������ģ��������������֡�
        ��ͨ���´���������������ģ����µ�����������������ʹ����
        �˲���ƥ�䣨������ͬ������ͬ���Ĳ�����������

    VkPipelineBindPoint                       pipelineBindPoint;
        ���templateType����VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR������Դ˲���
        pipelineBindPoint��һ��VkPipelineBindPoint��ָʾ����������ͼ�ιܵ����Ǽ���ܵ�ʹ�á�

    VkPipelineLayout                          pipelineLayout;
        ���templateType����VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR������Դ˲���
        pipelineLayout��һ��VkPipelineLayout�������ڶ԰󶨽��б�̡�

    uint32_t                                  set;
        ���templateType����VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR������Դ˲���
        set�ǽ����µĹܵ����������õ��������ļ��ϱ�š�
    } VkDescriptorUpdateTemplateCreateInfo;
    */
    //  û�й��ܺ���
    class Descriptor_update_template
        : public std::enable_shared_from_this<Descriptor_update_template>
        , public Vk_obj<Descriptor_set_layout, VkDescriptorUpdateTemplate> {
    public:
        using Sptr = std::shared_ptr<Descriptor_update_template>;

        ~Descriptor_update_template();

        std::shared_ptr<Pipeline_layout> father_pipeline_layout;

        class Group :public Group_base<Descriptor_update_template> {
            std::shared_ptr<Descriptor_update_template> detach(size_t index_);
        };
    };

    class Command_pool
        : public std::enable_shared_from_this<Command_pool>
        , public Vk_obj<Device, VkCommandPool> {
    public:
        using Sptr = std::shared_ptr<Command_pool>;

        VkResult reset(F_command_pool_reset flags_);

        void trim(VkCommandPoolTrimFlags flags_ = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        ~Command_pool();

        std::shared_ptr<Command_buffer_group>
            get_a_command_buffer_group(uint32_t count_, E_command_buffer_level level);

        class Group :public Group_base<Command_pool> {
            std::shared_ptr<Command_pool> detach(size_t index_);
        };
    };

    class Command_buffer
        : public std::enable_shared_from_this<Command_buffer>
        , public Vk_obj<Command_pool, VkCommandBuffer> {
    public:
        using Sptr = std::shared_ptr<Command_buffer>;

        ~Command_buffer();

        class Group :public Group_base<Command_buffer> {
        public:
            std::shared_ptr<Command_buffer> detach(size_t index_);
        };
    };

    //  û���ܺ���
    class Pipeline_layout
        : public std::enable_shared_from_this<Pipeline_layout>
        , public Vk_obj<Device, VkPipelineLayout> {
    public:
        using Sptr = std::shared_ptr<Pipeline_layout>;

        ~Pipeline_layout();

        std::shared_ptr<Descriptor_update_template> get_a_descriptor_update_template(
            Array_value<S_descriptor_update_template_entry> entrys_,
            E_pipeline_bind_point                           bind_point_,
            uint32_t                                        set_,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Compute_pipeline> get_a_compute_pipeline(
            F_pipeline_create                   flags_,
            std::shared_ptr<Pipeline_cache>     pipeline_cache_,
            std::shared_ptr<Shader_module>      module_,
            const char*                         pName_,//shader ��ڵ�����
            F_shader_stage                      stage_flags_,
            const S_specialization_info*        pSpecializationInfo_ = nullptr,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Graphics_pipeline> get_a_graphics_pipeline(
            F_pipeline_create                                   flag_,
            Render_pass&                                        render_pass_,
            uint32_t                                            subpass,
            Pipeline_cache*                                     cache_,
            Array_value<S_pipeline_shader_stage_create_info>    stages_,
            const S_pipeline_vertex_input_state_create_info*    vertex_input_state_,
            const S_pipeline_input_assembly_state_create_info*  input_assembly_state_,
            const S_pipeline_tessellation_state_create_info*    tessellation_state_,
            const S_pipeline_viewport_state_create_info*        view_port_state_,
            const S_pipeline_rasterization_state_create_info*   rasterization_state_,
            const S_pipeline_multisample_state_create_info*     multi_sample_state_,
            const S_pipeline_depth_stencil_state_create_info*   depth_stencil_state_,
            const S_pipeline_color_blend_state_create_info*     color_blend_state_,
            const S_pipeline_dynamic_state_create_info*         dynamic_satate_,
            N_graphics_pipeline_create_info                     next_ = {},
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        class Group :public Group_base<Pipeline_layout> {
        public:
            std::shared_ptr<Pipeline_layout> detach(size_t index_);
        };
    };

    class Pipeline_cache
        : public std::enable_shared_from_this<Pipeline_cache>
        , public Vk_obj<Device, VkPipelineLayout> {
    public:
        using Sptr = std::shared_ptr<Pipeline_cache>;

        //std::shared_ptr<std::vector<char>> get_data();
        //��pData����,��ŵ���vector<uchar>
        VkResult get_data(size_t* pDataSize, void* pData);
        VkResult merge(Aref<Pipeline_cache>  srcCache);

        ~Pipeline_cache();

        class Group :public Group_base<Pipeline_cache> {
        public:
            std::shared_ptr<Pipeline_cache> detach(size_t index_);
        };
    };

    class Compute_pipeline
        : public std::enable_shared_from_this<Compute_pipeline>
        , public Vk_obj<Pipeline_layout, VkPipeline> {
    public:
        using Sptr = std::shared_ptr<Compute_pipeline>;

        ~Compute_pipeline();

        std::shared_ptr<Compute_pipeline> get_a_compute_pipeline(
            F_pipeline_create                   flags,
            std::shared_ptr<Pipeline_cache>     pipeline_cache_,
            std::shared_ptr<Shader_module>      module_,
            const char*                         rukou_name_,
            F_shader_stage                      stage_flags,
            std::shared_ptr< Pipeline_layout>   pipeline_layout_ = nullptr,
            const S_specialization_info*        pSpecializationInfo = nullptr,
            Alloc_callbacks_ptr allocator_ = father_allocation_cb());

        std::shared_ptr<Pipeline_cache>     pipeline_cache;
        std::shared_ptr<Shader_module>      shader_module;
        std::shared_ptr<Compute_pipeline>   base_pipeline;

        class Group :public Group_base<Compute_pipeline> {
        public:
            std::shared_ptr<Compute_pipeline> detach(size_t index_);
        };

    private:
        int32_t index;
    };

    class Graphics_pipeline
        : public std::enable_shared_from_this<Graphics_pipeline>
        , public Vk_obj<Pipeline_layout, VkPipeline> {
    public:
        using Sptr = std::shared_ptr<Graphics_pipeline>;

        ~Graphics_pipeline();

        std::shared_ptr<Pipeline_cache>                 pipeline_cache;
        std::vector<std::shared_ptr<Shader_module>>     shader_modules;
        std::shared_ptr<Render_pass>                    render_pass;

        class Group : public Group_base<Graphics_pipeline> {
        public:
            std::shared_ptr<Graphics_pipeline> detach(size_t index_);
        };

    };




}}
