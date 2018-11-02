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
        /* 如果移动或大小调整更改客户区的高度，则重绘整个窗口。 */
        b_v_redraw = CS_VREDRAW,
        /* 如果移动或大小调整更改客户区的宽度，则重绘整个窗口。 */
        b_h_redraw = CS_HREDRAW,
        /* 当用户在属于该类的窗口内双击鼠标时，向窗口过程发送双击消息。 */
        b_dbl_clks = CS_DBLCLKS,
        /* 为类中的每个窗口分配唯一的设备上下文。 */
        b_one_window_one_dc = CS_OWNDC,
        /*
            将子窗口的剪切矩形设置为父窗口的剪切矩形，以便子窗口可以在父窗口上绘制。
            具有CS_PARENTDC样式位的窗口从系统的设备上下文缓存中接收常规设备上下文。
            它不会向子项提供父项的设备上下文或设备上下文设置。
            指定CS_PARENTDC可增强应用程序的性能。
        */
        b_parent_dc = CS_PARENTDC,
        /* 禁用窗口菜单上的关闭。 */
        b_no_close = CS_NOCLOSE,
        /*
        以位图的形式保存由此类窗口遮挡的屏幕图像部分。
        删除窗口后，系统将使用保存的位图恢复屏幕图像，包括其他被遮挡的窗口。
        因此，如果位图使用的内存尚未被丢弃，并且其他屏幕操作未使存储的图像无效，则系统不会向被遮挡的窗口发送WM_PAINT消息。
        此样式对于短暂显示然后在其他屏幕活动发生之前被删除的小窗口（例如，菜单或对话框）非常有用。
        这种样式增加了显示窗口所需的时间，因为系统必须首先分配内存来存储位图。
        */
        b_save_bits = CS_SAVEBITS,
        /* 在窗口边界（x方向）上对齐窗口的客户区域。此样式会影响窗口的宽度及其在显示屏上的水平位置。 */
        b_byte_align_client = CS_BYTEALIGNCLIENT,
        /* 在窗口边界（x方向）上对齐窗口。此样式会影响窗口的宽度及其在显示屏上的水平位置。 */
        b_byte_align_window = CS_BYTEALIGNWINDOW,
        /* 指示窗口类是应用程序全局类。 */
        b_global_class = CS_GLOBALCLASS,
        /* 
            分配一个设备上下文以供类中的所有窗口共享。
            由于窗口类是特定于进程的，因此应用程序的多个线程可以创建同一类的窗口。
            线程也可以尝试同时使用设备上下文。发生这种情况时，系统只允许一个线程成功完成其绘图操作。 
        */
        b_class_dc = CS_CLASSDC,
        b_ime = CS_IME,
#if(_WIN32_WINNT >= 0x0501)
        /*
            在窗口上启用阴影效果。
            通过SPI_SETDROPSHADOW打开和关闭效果。
            通常，这对于诸如菜单之类的小的短寿命窗口是有效的，以强调它们与其他窗口的Z顺序关系。
            从具有此样式的类创建的Windows必须是顶级窗口;他们可能不是儿童窗口。
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
        /* 窗口是重叠的窗口。 重叠窗口具有标题栏和边框。 与b_tiled样式相同。 */
        b_overlapped = WS_OVERLAPPED,
        /* 这个窗口是一个重叠的窗口。重叠窗口具有标题栏和边框。与b_overlapped样式相同。 */
        b_tiled = WS_TILED,
        /* 这个窗口是一个重叠的窗口。与b_overlapped_window风格相同。 */
        b_tiled_window = WS_TILEDWINDOW,
        /* 这个窗口是一个重叠的窗口。与b_tiled_window风格相同。*/
        b_overlapped_window = WS_OVERLAPPEDWINDOW,
        /* 这个窗口是一个子窗口。具有此样式的窗口不能有菜单栏。控件不能使用此样式。WS弹出风格。 */
        b_child = WS_CHILD,
        /* 是一个弹出窗口。 此样式不能与b_child样式一起使用 */
        b_popup = WS_POPUP,
        /* 是一个弹出窗口。 必须组合b_caption和b_popup_window样式才能使窗口菜单可见。 */
        b_popup_window = WS_POPUPWINDOW,
        /*
            该窗口是一组控件的第一个控件。
            该组由第一个控件和在其后定义的所有控件组成，直到具有b_group样式的下一个控件。
            每个组中的第一个控件通常具有b_tab_stop样式，以便用户可以从一个组移动到另一个组。
            用户随后可以通过使用方向键将键盘焦点从组中的一个控件更改为组中的下一个控件。
            您可以打开和关闭此样式以更改对话框导航。
            要在创建窗口后更改此样式，请使用SetWindowLong函数。
        */
        b_group = WS_GROUP,
        /*
            该窗口是一个控件，当用户按下TAB键时，该控件可以接收键盘焦点。
            按TAB键可将键盘焦点更改为b_tab_stop样式的下一个控件。
            您可以打开和关闭此样式以更改对话框导航。
            要在创建窗口后更改此样式，请使用SetWindowLong函数。
            对于用户创建的窗口和无模式对话框以使用制表位，请更改消息循环以调用IsDialogMessage函数。
        */
        b_tab_stop = WS_TABSTOP,

        /* 当绘图发生在父窗口中时，不包括子窗口占用的区域。创建父窗口时使用此样式。 */
        b_clipchildren = WS_CLIPCHILDREN,
        /*
            剪辑子窗口相对于彼此;
            也就是说，当特定子窗口收到WM_PAINT消息时，
            b_clip_siblings样式会剪切要更新的子窗口区域之外的所有其他重叠子窗口。
            如果未指定b_clip_siblings并且子窗口重叠，
            则在子窗口的客户区域内绘制时，可以在相邻子窗口的客户区域内绘制。
        */
        b_clip_siblings = WS_CLIPSIBLINGS,

        /* 这个窗口有一个细边框. */
        b_border = WS_BORDER,
        /* 窗口有一个标题栏(包括WS边界风格)。*/
        b_caption = WS_CAPTION,
        /* 窗口有一个标题栏(包括WS边界风格)。*/
        b_child_window = WS_CHILDWINDOW,
        /* 标题栏上有一个窗口菜单。 还必须指定b_caption样式。 */
        b_system_menu = WS_SYSMENU,
        /* 窗口有一个水平滚动条。 */
        b_h_scroll = WS_HSCROLL,
        /* 窗口有一个垂直滚动条 */
        b_v_scroll = WS_VSCROLL,
        /* 窗口有一个最小化按钮。无法与WS_EX_CONTEXTHELP样式组合。还必须指定b_system_menu样式。*/
        b_minimize_box = WS_MINIMIZEBOX,
        /* 窗口有一个尺寸边框。 与b_thick_frame样式相同。 */
        b_size_box = WS_SIZEBOX,
        /* 窗口有一个尺寸边框。 与b_size_box样式相同。 */
        b_thick_frame = WS_THICKFRAME,
        /* 窗口有一个最大化按钮。无法与WS_EX_CONTEXTHELP样式组合。还必须指定b_system_menu样式。*/
        b_maximize_box = WS_MAXIMIZEBOX,
        /* 窗口具有通常与对话框一起使用的样式的边框。 具有此样式的窗口不能有标题栏。 */
        b_dialog_frame = WS_DLGFRAME,

        /* 
            该窗口最初被禁用。 
            禁用的窗口无法接收用户的输入。 
            要在创建窗口后更改此设置，请使用EnableWindow功能。 
        */
        b_disabled = WS_DISABLED,
        /* 窗口最初被最小化。 与b_minimize样式相同。 */
        b_iconic = WS_ICONIC,
        /* 窗口最初被最小化。 与b_iconic样式相同。 */
        b_minimize = WS_MINIMIZE,
        /* 窗口最初是最大化的 */
        b_maximize = WS_MAXIMIZE,
        /* 窗口最初是可见的。通过使用ShowWindow或SetWindowPos函数，可以打开或关闭此样式。 */
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
            窗口是一个分层窗口。
            如果窗口具有CS_OWNDC或CS_CLASSDC的类样式，则不能使用此样式。
            Windows 8：顶级窗口和子窗口支持WS_EX_LAYERED样式。
            以前的Windows版本仅支持顶级窗口的WS_EX_LAYERED。
        */
        b_layered = WS_EX_LAYERED,

        /* 这个窗口是一个重叠的窗口。 */
        b_overlapped_window = WS_EX_OVERLAPPEDWINDOW,

        /* 该窗口是一个MDI子窗口。 */
        b_mdi_child = WS_EX_MDICHILD,

        /* 窗口是调色板窗口，它是一个无模式对话框，显示一系列命令。 */
        b_palette_window = WS_EX_PALETTEWINDOW,

        /*
            该窗口旨在用作浮动工具栏。
            工具窗口的标题栏比普通标题栏短，窗口标题使用较小的字体绘制。
            当用户按下ALT + TAB时，工具窗口不会出现在任务栏或对话框中。
            如果工具窗口具有系统菜单，则其图标不会显示在标题栏上。
            但是，您可以通过右键单击或键入ALT + SPACE来显示系统菜单。
        */
        b_tool_window = WS_EX_TOOLWINDOW,

        /*
            窗口应放在所有非最顶层的窗口上方，并且应该保持在它们之上，即使窗口被停用也是如此。
            要添加或删除此样式，请使用SetWindowPos函数。
        */
        b_topmost = WS_EX_TOPMOST,

        /*
            使用此样式创建的顶级窗口在用户单击时不会成为前台窗口。
            当用户最小化或关闭前景窗口时，系统不会将此窗口置于前台。
            不应通过程序访问或通过可访问技术（例如讲述人）通过键盘导航来激活窗口。
            要激活窗口，请使用SetActiveWindow或SetForegroundWindow函数。
            默认情况下，窗口不会出现在任务栏上。
            要强制窗口显示在任务栏上，请使用WS_EX_APPWINDOW样式。
        */
        b_no_activete = WS_EX_NOACTIVATE,

        /* 窗口不会将其窗口布局传递给其子窗口 */
        b_no_inherit_layout = WS_EX_NOINHERITLAYOUT,

        /* 使用此样式创建的子窗口在创建或销毁时不会将WM_PARENTNOTIFY消息发送到其父窗口。 */
        b_no_parent_notify = WS_EX_NOPARENTNOTIFY,

        /* 窗口不会渲染到重定向表面。 这适用于没有可见内容或使用表面以外的机制来提供视觉效果的窗口。 */
        b_no_rediction_bitmap = WS_EX_NOREDIRECTIONBITMAP,

        /* 当窗口可见时，将顶层窗口强制到任务栏上. */
        b_app_window = WS_EX_APPWINDOW,

        /* 该窗口接受拖放文件。 */
        b_accept_files = WS_EX_ACCEPTFILES,

        /* 该窗口有一个双边框；可以选择使用标题栏在dwStyle参数中指定WS_caption样式来创建该窗口。 */
        b_dialog_modal_frame = WS_EX_DLGMODALFRAME,

        /* 该窗口具有通用的左对齐属性。这是默认的。 */
        b_left = WS_EX_LEFT,

        /* 窗口文本使用从左到右的读取顺序属性显示。这是默认的。 */
        b_ltr_reading = WS_EX_LTRREADING,

        /*
            使用双缓冲以底部到顶部绘制顺序绘制窗口的所有后代。
            如果窗口具有CS_OWNDC或CS_CLASSDC的类样式，则不能使用此方法。
            Windows 2000：不支持此样式。
        */
        b_composited = WS_EX_COMPOSITED,

        /*
            在窗口下方的兄弟姐妹（由同一个线程创建）被涂上之后，不应该对窗口进行绘制。
            窗口显示为透明，因为底层兄弟窗口的位已经被绘制。
            要在没有这些限制的情况下实现透明度，请使用SetWindowRgn函数。
        */
        b_transparent = WS_EX_TRANSPARENT,

        /* 该窗口具有三维边框样式，旨在用于不接受用户输入的项目。 */
        b_static_edge = WS_EX_STATICEDGE,

        /* 垂直滚动条（如果存在）位于客户区右侧。 这是默认值。 */
        b_right_scroll_bar = WS_EX_RIGHTSCROLLBAR,

        /*
            窗口本身包含应该参与对话框导航的子窗口。
            如果指定了此样式，则对话管理器在执行导航操作
            （例如处理TAB键，箭头键或键盘助记符）时会递归到此窗口的子项中。
        */
        b_control_parent = WS_EX_CONTROLPARENT,

        /* 窗户的边框有凹陷的边缘。 */
        b_client_edge = WS_EX_CLIENTEDGE,

        /* 窗户有一个带凸起边缘的边框。 */
        b_window_edge = WS_EX_WINDOWEDGE,

        /*
            窗口的标题栏包含问号。
            当用户单击问号时，光标将变为带有指针的问号。
            如果用户然后单击子窗口，则子项将收到WM_HELP消息。
            子窗口应该将消息传递给父窗口过程，该过程应该使用HELP_WM_HELP命令调用WinHelp函数。
            “帮助”应用程序显示一个弹出窗口，该窗口通常包含子窗口的帮助。
            WS_EX_CONTEXTHELP不能与WS_MAXIMIZEBOX或WS_MINIMIZEBOX样式一起使用。
        */
        b_context_hlep = WS_EX_CONTEXTHELP,

        /*
            该窗口具有通用的“右对齐”属性。 这取决于窗口类。
            仅当shell语言是希伯来语，阿拉伯语或支持阅读顺序对齐的其他语言时，此样式才有效; 否则，风格被忽略。
            对静态或编辑控件使用WS_EX_RIGHT样式分别与使用SS_RIGHT或ES_RIGHT样式具有相同的效果。
            使用带有按钮控件的此样式与使用BS_RIGHT和BS_RIGHTBUTTON样式具有相同的效果。
        */
        b_right = WS_EX_RIGHT,
        /*
            如果shell语言是希伯来语，阿拉伯语或支持阅读顺序对齐的其他语言，
            则垂直滚动条（如果存在）位于客户区左侧。 对于其他语言，将忽略该样式。
        */
        b_left_scroll_bar = WS_EX_LEFTSCROLLBAR,
        /*
            如果shell语言是希伯来语，阿拉伯语或支持阅读顺序对齐的其他语言，
            则使用从右到左的阅读顺序属性显示窗口文本。 对于其他语言，将忽略该样式。
        */
        b_rtl_reading = WS_EX_RTLREADING,
        /*
            如果shell语言是希伯来语，阿拉伯语或支持阅读顺序对齐的其他语言，
            则窗口的水平原点位于右边缘。 增加水平值向左前进。
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


