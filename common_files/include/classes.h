/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/
#pragma once

class Instance;
class Physical_device;
class Physical_device_group;
class Surface;

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

struct Pramater_choose_physical_device;
struct Pramater_choose_queue_family;


#if defined(VK_USE_PLATFORM_WIN32_KHR)

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
    F_wnd_class_style(int i_):flag(static_cast<UINT>(i_)) {}
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
        F_wnd_style     style_ =    F_wnd_style::b_clip_siblings|
                                    F_wnd_style::b_clipchildren|
                                    F_wnd_style::b_visible,
        F_wnd_ex_style  ex_style_ = 0,
        HWND            hWndParent_ = NULL,
        HMENU           hMenu_ = NULL,
        LPVOID          lpParam_ = NULL)
    {
        return CreateWindowExA(ex_style_, lpszClassName, window_name_, 
            style_, x_, y_, wdith_, height_, hWndParent_, hMenu_, hInstance, lpParam_);
    }

};



#endif


