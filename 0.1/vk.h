/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#pragma once

#include <memory>
#include <array>
#include <type_traits>

#include "laka_vk_define.h"
#include "types.h"

//如何为使用者提供生命周期管理?

namespace laka { namespace vk {

#if 1   /*  global  */
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
        F_wnd_class_style(int i_) :flag(static_cast<UINT>(i_)) {}
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

#endif

    void show_result(VkResult ret_);
    void show_result_assert(VkResult ret_);
    std::string version_str(uint32_t version);
    uint32_t get_instance_version();
    S_allocation_callbacks* default_allocation_cb();

    template <typename Laka_vk_class__, typename Handle_type__, typename Api_ptr_type__>
    class Group_base {
    public:
        std::vector<Handle_type__> handles;
        Api_ptr_type__ api;

        Group_base() :api(nullptr), handles(0) {}
        Group_base(Api_ptr_type__ api_) :api(api_), handles(0) {}
        Group_base(Api_ptr_type__ api_, const Handle_type__ handle_)
            : api(api_), handles(1, const_cast<Handle_type__>(handle_))
        {}
        Group_base(
            Api_ptr_type__ api_,
            Array_value<const Handle_type__> handles_)
            :handles(handles_.size())
            , api(api_)
        {
            handles.resize(handles_.size());
            memcpy(
                &handles[0],
                handles_.data(),
                handles_.size() * sizeof(Handle_type__)
            );
        }
        Group_base& operator << (Group_base& group_)
        {
            handles.insert(
                handles.end(),
                group_.handles.begin(),
                group_.handles.end()
            );
            return *this;
        }
        Group_base& operator << (Laka_vk_class__& obj_)
        {
            handles.push_back(const_cast<Handle_type__>(obj_.handle));
            return *this;
        }
        Group_base& operator << (const Handle_type__ handle_)
        {
            handles.push_back(const_cast<Handle_type__>(handle_));
            return *this;
        }
        operator Handle_type__*()
        {
            if (handles.size() == 0) return nullptr;

            return &handles[0];
        }
        operator std::vector<Handle_type__>&()
        {
            return handles;
        }
        operator Array_value<const Handle_type__>()
        {
            Array_value<const Handle_type__> nothing;
            if (handles.size() == 0)
            {
                return nothing;
            }

            Array_value<const Handle_type__> array_obj(
                static_cast<uint32_t>(handles.size()),
                &handles[0]
            );
            return array_obj;
        }
    };

#define laka_vk_can_use_group(class_type__,api_ptr_name__)                                  \
class Group;                                                                                \
Group get_group() { Group g(&api_ptr_name__, { handle }); return g; }                       \
class Group                                                                                 \
    :public Group_base<                                                                     \
        class_type__,                                                                       \
        std::remove_cv<decltype(class_type__::handle)>::type,                               \
        decltype(&api_ptr_name__)>{                                                         \
public:                                                                                     \
    Group() :Group_base() {}                                                                \
    Group(decltype(&api_ptr_name__) api_) : Group_base(api_) {}                             \
    Group(decltype(&api_ptr_name__) api_,                                                   \
        Array_value<const std::remove_cv<decltype(class_type__::handle)>::type> handles_)   \
        :Group_base(api_, handles_)                                                         \
    {}                                                                                      \

#define laka_vk_over_group  }

    //用于免除使用者填写参数时 手动写共享指针到原始指针的显示转换
    template <typename T__>
    class Aptr {
    public:
        T__* ptr;

        Aptr(std::shared_ptr<T__> sptr_) :ptr(sptr_.get()) {}
        Aptr(T__* ptr_) :ptr(ptr_) {}
        constexpr Aptr(std::nullptr_t) noexcept : ptr(nullptr) {}

        operator T__*() { return const_cast<T__*>(ptr); }
        operator const T__*() { return const_cast<const T__*>(ptr); }

        T__* operator ->() { return ptr; }

        bool operator == (std::nullptr_t) { return ptr == nullptr; }
        bool operator != (std::nullptr_t) { return ptr != nullptr; }
        bool operator == (T__* p_) { return ptr == p_; }
        bool operator != (T__* p_) { return ptr != p_; }
        bool operator == (std::shared_ptr<T__> p_) { return ptr == p_.get(); }
        bool operator != (std::shared_ptr<T__> p_) { return ptr != p_.get(); }
    };

    template <typename T__>
    class Aref {
    public:
        T__& ref;

        Aref(std::shared_ptr<T__> sptr_) : ref( *(sptr_.get()) ) {}
        Aref(T__* ptr_) : ref(*ptr_) {}

        operator T__*() { return &ref; }
        operator const T__*() { return &ref; }
        operator T__&() { return ref; }
        operator const T__&() { return ref; }

        T__* operator ->() { return &ref; }
        T__& operator *() { return ref; }

        bool operator == (T__* p_) { return &ref == p_; }
        bool operator != (T__* p_) { return &ref != p_; }
        bool operator == (std::shared_ptr<T__> p_) { return &ref == p_.get(); }
        bool operator != (std::shared_ptr<T__> p_) { return &ref != p_.get(); }
    };

    template <typename T__>
    class Ahandle {
    public:
        using Handle_type = std::remove_cv_t<decltype(T__::handle)>;
        Handle_type handle;

        Ahandle(std::shared_ptr<T__> sptr_) :handle(sptr_->handle) {}
        Ahandle(T__& ref_) :handle(ref_.ref.handle) {}
        Ahandle(const Handle_type handle_) :handle(handle_) {}

        operator Handle_type(){ return handle;  }
    };


#endif  /*  global  */

    struct User_choose_queue_info {
        uint32_t queue_family_index;//想要从index队列族创建队列
        std::vector<float> queue_priorities;//每个队列各自的优先级
        F_device_queue_create create_flags;
        E_queue_global_priority_EXT global_priority;
    };

    struct Pramater_choose_physical_device {
        Physical_device& if_you_feel_the_physical_device_not_ok_so_return_false;
    };
    
    struct Pramater_choose_queue_family {
        std::vector<Queue_family_info> const& give_you_queue_family_info_;
        std::vector<User_choose_queue_info>& waiting_for_your_filled_info_;
    };
    
    class Instance : public std::enable_shared_from_this<Instance> {
    public:
        using Sptr = std::shared_ptr<Instance>;

        ~Instance();

        static Sptr get_new(
            Array_value<const char*>        enabled_extension_names_ = {},
            uint32_t                        api_version_ = VK_MAKE_VERSION(1, 1, 82),
            N_instance_create_info          next_ = {},
            S_allocation_callbacks*const    allocator_ = nullptr,
            Array_value<const char*>        enabled_layer_names_ = {},
            const char*                     app_name_ = "laka::vk",
            uint32_t                        app_version_ = VK_MAKE_VERSION(0, 0, 1),
            const char*                     engine_name_ = "laka::vk::engine",
            uint32_t                        engine_version_ = VK_MAKE_VERSION(0, 0, 1));

        std::shared_ptr<Device_creator> get_a_device_creator(
            bool(*choose_physical_device_)(Pramater_choose_physical_device& pramater_),
            bool(*choose_queue_family_)(Pramater_choose_queue_family& pramater_),
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Surface> get_a_surface(
            surface_create_info&            create_info_,
            S_allocation_callbacks*const    allocator_ = default_allocation_cb());

        const VkInstance                    handle;
        S_allocation_callbacks*const        allocator_callbacks_ptr;
        std::vector<Physical_device_group>  physical_device_groups;
        std::vector<Physical_device>        physical_devices;

        struct Api {
            table_vk_api_instance(vk_fun ZK, , , YK FH)
                table_vk_api_physical_device(vk_fun ZK, , , YK FH)
                table_vk_api_physical_device_khr(vk_fun ZK, , , YK FH)
                table_vk_api_platform(vk_fun ZK, , , YK FH)
        }api;
    private:
        Instance(
            VkInstance                      handle_,
            S_allocation_callbacks*const    allocator_callbacks_ptr_);

        S_allocation_callbacks allocator_callbacks;
    };

    class Physical_device {
    public:
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

        VkPhysicalDevice                handle;
        Instance*                       instance;
        std::vector<Queue_family_info>  queue_familys;

        class Group :public Group_base<Physical_device, VkPhysicalDevice, Instance::Api*> {
        public:
            Group(Instance::Api* api_, VkPhysicalDevice handle_)
                :Group_base(api_, handle_)
            {}
        };

        Group get_group()
        {
            Group group_temp(&(instance->api), handle);
        }
    };

    class Physical_device_group {
    public:
        Instance* instance;
        S_physical_device_group_properties properties;
        std::vector<Physical_device*> physical_devices;
    };

    struct Queue_family_info {
        uint32_t index;
        S_queue_family_properties properties;
    };

    class Queue_family {
    public:
        uint32_t qf_index;
        S_queue_family_properties properties;
        std::vector<Queue> queues;
    };

    class Surface : public std::enable_shared_from_this<Surface> {
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
        ~Surface();

        const VkSurfaceKHR handle;
        Instance::Sptr instance;
        Instance::Api& api;
    private:
        friend Instance;
        Surface(
            Instance::Sptr  instance_,
            VkSurfaceKHR    handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const   allocation_callbacks;
    };

    //为帮助创建Device而存在
    class Device_creator : public std::enable_shared_from_this<Device_creator> {
    public:
        using Sptr = std::shared_ptr<Device_creator>;

        std::shared_ptr<Device> get_a_device(
            Physical_device& physical_device_,
            S_device_create_info& create_info_);

        std::shared_ptr<Device> get_a_device(
            Physical_device& physical_device_,
            Array_value<char*> enabled_extensions_ = {},
            S_physical_device_features* features_ = nullptr);//todo:这里可以接收匿名函数回调

        std::shared_ptr<Device> get_a_device(
            Physical_device_group& physica_device_group_,
            Array_value<char*> enabled_extensions_ = {},
            S_physical_device_features* features_ = nullptr);//todo:这里可以接收匿名函数回调

        //std::shared_ptr<Device> get_a_device(
        //    std::list<Physical_device>& physical_devices_,
        //    std::vector<char*>* enabled_extensions_ = nullptr,
        //    VkPhysicalDeviceFeatures* features_ = nullptr);

        std::shared_ptr<Instance> instance;

        bool(*choose_physical_device_function)(Pramater_choose_physical_device& physical_device_);
        bool(*choose_queue_family_function)(Pramater_choose_queue_family& parmatwr_);
    private:
        friend class Device;
        friend class Instance;
        Device_creator(
            std::shared_ptr<Instance>       instance_,
            bool(*choose_physical_device_)(Pramater_choose_physical_device&),
            bool(*choose_queue_family_)(Pramater_choose_queue_family&),
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const   allocation_callbacks;
    };

    struct Pramater_choose_memory_type {
        uint32_t        memory_type_count;
        S_memory_type*   memory_types;
    };
    struct Pramater_choose_result
    {
        uint32_t memory_type_index;
    };
    class Device : public std::enable_shared_from_this<Device> {
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
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr <Fence> get_a_fence(
            N_fence_create_info next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr <Event> get_a_event(
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Shader_module> get_a_shader_module(
            const uint32_t*     code_ptr_,
            size_t              code_size_,
            N_shader_module_create_info next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Device_memory> get_a_device_memory(
            VkDeviceSize memory_size_,
            bool(*choose_memory_type_index_)(
                Pramater_choose_memory_type& pramater_choose_,
                Pramater_choose_result& choose_result_),
            N_memory_allocate_info next_ = {},
            S_allocation_callbacks*const allocation_callbacks_ = default_allocation_cb());

        std::shared_ptr<Buffer> get_a_buffer(
            VkDeviceSize        buffer_size_,
            F_buffer_create     create_flags_,
            F_buffer_usage        usage_flags_,
            E_sharing_mode        sharing_mode_,
            Array_value<uint32_t> queue_family_indices_,
            N_buffer_create_info next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

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
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

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
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

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
            S_allocation_callbacks*const    allocator_ = default_allocation_cb());

        std::shared_ptr<Command_pool> get_a_command_pool(
            uint32_t                        queueFamilyIndex_,
            F_command_pool_create           flags_,
            S_allocation_callbacks*const    allocator_ = default_allocation_cb());

        std::shared_ptr<Descriptor_pool> get_a_descriptor_pool(
            uint32_t                            maxSets_,
            Array_value<S_descriptor_pool_size> poolSizes_,
            F_descriptor_pool_create            flags_,
            S_allocation_callbacks*const        allocator_ = default_allocation_cb());

        std::shared_ptr<Query_pool> get_a_query_pool(
            E_query_type                query_type_,
            uint32_t                    query_count_,
            F_query_pipeline_statistic  queue_pipeline_statistic_flags_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Descriptor_set_layout> get_a_descriptor_set_layout(
            F_descriptor_set_layout_create                  flags_,//手册中有但vk.xml中没有
            Array_value<S_descriptor_set_layout_binding>    bindings_ = {},
            N_descriptor_set_layout_create_info             next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Render_pass> get_a_render_pass(
            Array_value<S_attachment_description>   attachments = {},
            Array_value<S_subpass_description>      subpasses = {},
            Array_value<S_subpass_dependency>       dependencies = {},
            N_render_pass_create_info               next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Pipeline_layout> get_a_pipeline_layout(
            Array_value<S_push_constant_range>  push_constant_ranges_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Pipeline_cache> get_a_pipeline_cache(
            size_t      initial_data_size = 0,
            const void* initial_data_ = nullptr,
            S_allocation_callbacks*const allocator_ = default_allocation_cb());


        const VkDevice handle;
        S_allocation_callbacks*const allocation_callbacks;
        //std::vector<Queue> queues;
        std::vector<Queue_family> queue_familys;

        std::shared_ptr<Instance> instance;
        std::shared_ptr<Device_creator> device_creator;
        std::vector<Physical_device*> physical_devices;

        struct Api{
            table_vk_api_device(vk_fun ZK, , , YK FH)
            table_vk_api_cmd(vk_fun ZK, , , YK FH)
        }api;
    private:
        friend class Device_creator;
        friend class Instance;
        Device(
            std::shared_ptr<Instance>               instance_,
            std::shared_ptr<Device_creator>         device_creator_,
            std::vector<Physical_device*>&          physical_devices_,
            std::vector<User_choose_queue_info>&    queue_infos_,
            std::vector<S_queue_family_properties>& qf_properties_,
            VkDevice                                handle_,
            S_allocation_callbacks*const allocation_callbacks_);

        PFN_vkVoidFunction return_api(const char* api_name_);
    };

    class Queue {
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

        //VkDevice device_handle;
        VkQueue handle;
        uint32_t index;
        uint32_t family_index;

        Device::Api* api;

        class Group 
            :public Group_base<
                Queue,
                std::remove_cv<decltype(Queue::handle)>::type,
                decltype(Queue::api)>{
        public:
            Group() :Group_base() {}
            Group(decltype(api) api_) : Group_base(api_) {}
            Group(decltype(api) api_,
            Array_value<const std::remove_cv<decltype(Queue::handle)>::type> handles_)
                :Group_base(api_,handles_)
            {}
        }; 
        Group get_group() { Group g(api, {handle}); return g; }
    };

    //没有功能函数
    class Semaphore :public std::enable_shared_from_this<Semaphore> {
    public:
        using Sptr = std::shared_ptr<Semaphore>;

        ~Semaphore();

        const VkSemaphore handle;
        std::shared_ptr<Device> device;

        laka_vk_can_use_group(Semaphore, device->api)
        laka_vk_over_group;
    private:
        friend class Device;
        Semaphore(
            std::shared_ptr<Device>         device_,
            VkSemaphore                     handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const   allocation_callbacks;
    };

    class Fence :public std::enable_shared_from_this<Fence> {
    public:
        using Sptr = std::shared_ptr<Fence>;

        VkResult get_status();
        VkResult reset(Array_value<VkFence> fences_);
        VkResult wait(uint64_t timeout_);
        VkResult wait(bool wait_all_, uint64_t timeout_, Array_value<VkFence> fences_);

        ~Fence();

        const VkFence handle;
        std::shared_ptr<Device> device;

        laka_vk_can_use_group(Fence, device->api)
        laka_vk_over_group;
    private:
        friend class Device;
        Fence(
            std::shared_ptr<Device>         device_,
            VkFence                         handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Event :public std::enable_shared_from_this<Event> {
    public:
        using Sptr = std::shared_ptr<Event>;

        VkResult set();
        VkResult get_event_status();
        void reset();

        ~Event();

        const VkEvent handle;
        std::shared_ptr<Device> device;

        laka_vk_can_use_group(Event, device->api)
        laka_vk_over_group;
    private:
        friend class Device;
        Event(
            std::shared_ptr<Device>         device_,
            VkEvent                         handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Shader_module :public std::enable_shared_from_this<Shader_module> {
    public:
        using Sptr = std::shared_ptr<Shader_module>;
        ~Shader_module();

        const VkShaderModule handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Shader_module(
            std::shared_ptr<Device>         device_,
            VkShaderModule                  handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Device_memory : public std::enable_shared_from_this<Device_memory> {
    public:
        using Sptr = std::shared_ptr<Device_memory>;

        VkDeviceSize get_commitment();

        void* map_memory(
            VkDeviceSize        offset_,
            VkDeviceSize        size_,
            VkMemoryMapFlags    flags_ = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        void unmap_memory();

        ~Device_memory();

        const VkDeviceMemory handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Device_memory(
            std::shared_ptr<Device>         device_,
            VkDeviceMemory                  handle_,
            S_allocation_callbacks*const   allocation_callbacks_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Buffer :public std::enable_shared_from_this<Buffer> {
    public:
        using Sptr = std::shared_ptr<Buffer>;

        S_memory_requirements get_memory_requirements();

        VkResult bind(
            std::shared_ptr<Device_memory> device_memroy_,
            VkDeviceSize memory_offset_);//绑定后是否会影响生命周期? 待查待提问.

        ~Buffer();

        std::shared_ptr<Buffer_view> get_a_buffer_view(
            E_format        format_,
            VkDeviceSize    offset_,
            VkDeviceSize    range_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        const VkBuffer handle;
        std::shared_ptr<Device> device;

        laka_vk_can_use_group(Buffer, device->api)
        laka_vk_over_group;
    private:
        friend class Device;
        Buffer(
            std::shared_ptr<Device>         device_,
            VkBuffer                        handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    //没有功能函数
    class Buffer_view : public std::enable_shared_from_this<Buffer_view> {
    public:
        using Sptr = std::shared_ptr<Buffer_view>;

        ~Buffer_view();

        const VkBufferView handle;
        std::shared_ptr<Buffer> buffer;

        laka_vk_can_use_group(Buffer_view, buffer->device->api)
        laka_vk_over_group;
    private:
        friend class Buffer;
        Buffer_view(
            std::shared_ptr<Buffer>         buffer_,
            VkBufferView                    handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Image : public std::enable_shared_from_this<Image> {
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
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        const VkImage handle;
        std::shared_ptr<Device> device;
        E_image_layout layout;
    private:
        friend class Device;
        Image(
            std::shared_ptr<Device> device_,
            VkImage handle_,
            E_image_layout layout_,
            S_allocation_callbacks*const allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    //没有功能函数
    class Image_view : public std::enable_shared_from_this<Image_view> {
    public:
        using Sptr = std::shared_ptr<Image_view>;

        ~Image_view();

        const VkImageView handle;
        std::shared_ptr<Image> image;
    private:
        friend class Image;
        Image_view(
            std::shared_ptr<Image>          image_,
            VkImageView                     handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    //没有功能函数
    class Sampler : public std::enable_shared_from_this<Sampler> {
    public:
        using Sptr = std::shared_ptr<Sampler>;

        ~Sampler();

        const VkSampler handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Sampler(
            std::shared_ptr<Device>         device_,
            VkSampler                       handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    //没有功能函数
    class Sampler_Ycbcr_conversion : public std::enable_shared_from_this<Sampler_Ycbcr_conversion> {
    public:
        using Sptr = std::shared_ptr<Sampler_Ycbcr_conversion>;

        ~Sampler_Ycbcr_conversion();

        const VkSamplerYcbcrConversion handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Sampler_Ycbcr_conversion(
            std::shared_ptr<Device>         device_,
            VkSamplerYcbcrConversion        handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Query_pool : public std::enable_shared_from_this<Query_pool> {
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

        const VkQueryPool handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Query_pool(
            std::shared_ptr<Device>         device_,
            VkQueryPool                     handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Render_pass :public std::enable_shared_from_this<Render_pass> {
    public:
        using Sptr = std::shared_ptr<Render_pass>;

        S_extent_2d get_area_granularity();

        ~Render_pass();

        std::shared_ptr<Frame_buffer> get_a_frame_buffer(
            Array_value<VkImageView> attachments_,
            uint32_t width_,
            uint32_t height_,
            uint32_t layers_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        const VkRenderPass handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Render_pass(
            std::shared_ptr<Device>         device_,
            VkRenderPass                    handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    //没有功能函数
    class Frame_buffer : public std::enable_shared_from_this<Frame_buffer> {
    public:
        using Sptr = std::shared_ptr<Frame_buffer>;

        ~Frame_buffer();

        const VkFramebuffer handle;
        std::shared_ptr<Render_pass> render_pass;

        laka_vk_can_use_group(Frame_buffer, render_pass->device->api)
            laka_vk_over_group;
    private:
        friend class Render_pass;
        Frame_buffer(
            std::shared_ptr<Render_pass>    render_pass_,
            VkFramebuffer                   handle_,
            S_allocation_callbacks*const    allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Descriptor_pool : public std::enable_shared_from_this<Descriptor_pool> {
    public:
        using Sptr = std::shared_ptr<Descriptor_pool>;

        VkResult reset(VkDescriptorPoolResetFlags flags = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        ~Descriptor_pool();

        std::shared_ptr<Descriptor_set_group> get_a_descriptor_set_group(
            Aref<Descriptor_set_layout> set_layout_,
            uint32_t                    count_,
            N_descriptor_set_allocate_info next_ = {});

        const VkDescriptorPool handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Descriptor_pool(
            std::shared_ptr<Device>         device_,
            VkDescriptorPool                handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Descriptor_set_base {
    public:
        void update_with_template(
            Descriptor_update_template& descriptorUpdateTemplate,
            const void*                 pData);

        void update(
            S_write_descriptor_set&     pDescriptorWrites,
            S_copy_descriptor_set&      pDescriptorCopies);

        const VkDescriptorSet   handle;
        const VkDevice          device_handle;
        Device::Api& api;
        Descriptor_set_base(
            const VkDevice device_handle_,
            const VkDescriptorSet handle_, 
            Device::Api& api_)
            :handle(handle_)
            ,api(api_)
            ,device_handle(device_handle_)
        {}
    };

    class Descriptor_set_group : public std::enable_shared_from_this<Descriptor_set_group>{
    public:
        using Sptr = std::shared_ptr<Descriptor_set_group>;

        Descriptor_set_base operator[](size_t index_)
        {
            return Descriptor_set_base(device_handle,handles[index_], api);
        }
        std::shared_ptr<Descriptor_set> extract(uint32_t index_);

        ~Descriptor_set_group()
        {
            api.vkFreeDescriptorSets(descriptor_pool->device->handle,
                descriptor_pool->handle, static_cast<uint32_t>(handles.size()), &handles[0]
            );
        }
        std::vector<VkDescriptorSet>        handles;
        std::shared_ptr<Descriptor_pool>    descriptor_pool;
        const VkDevice                      device_handle;
        Device::Api& api;
    private:
        friend class Descriptor_pool;
        Descriptor_set_group(std::shared_ptr<Descriptor_pool> descriptor_pool_,
            std::vector<VkDescriptorSet>& handles_)
            :descriptor_pool(descriptor_pool_)
            ,api(descriptor_pool_->device->api)
            ,device_handle(descriptor_pool_->device->handle)
        {
            handles = std::move(handles_);
        }
    };

    class Descriptor_set : public std::enable_shared_from_this<Descriptor_set>
                         , public Descriptor_set_base{
    public:
        using Sptr = std::shared_ptr<Descriptor_set>;
        using Group = Descriptor_set_group;

        ~Descriptor_set()
        {
            api.vkFreeDescriptorSets(descriptor_pool->device->handle,
                descriptor_pool->handle, 1, &handle
            );
        }
        std::shared_ptr<Descriptor_pool>    descriptor_pool;
    private:
        friend class Descriptor_pool;
        friend class Descriptor_set_group;
        Descriptor_set(
            std::shared_ptr<Descriptor_pool>    descriptor_pool_,
            const VkDescriptorSet   handle_ )
            :Descriptor_set_base(
                descriptor_pool_->device->handle,
                handle_,
                descriptor_pool_->device->api)
        {}
    };

    //没有功能函数
    class Descriptor_set_layout : public std::enable_shared_from_this<Descriptor_set_layout> {
    public:
        using Sptr = std::shared_ptr<Descriptor_set_layout>;

        ~Descriptor_set_layout();

        std::shared_ptr<Descriptor_update_template> get_a_descriptor_update_template(
            Array_value<VkDescriptorUpdateTemplateEntry> entrys_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb()   );

        const VkDescriptorSetLayout handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Descriptor_set_layout(
            std::shared_ptr<Device>         device_,
            VkDescriptorSetLayout           handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    //没有功能函数
    /*
    typedef struct VkDescriptorUpdateTemplateCreateInfo {
    uint32_t                                  descriptorUpdateEntryCount;
    const VkDescriptorUpdateTemplateEntry*    pDescriptorUpdateEntries;

    VkDescriptorUpdateTemplateType            templateType;
        如果设置为VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET，
            则它只能用于使用固定的descriptorSetLayout更新描述符集。
        如果设置为VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR，
            则它只能用于使用提供的pipelineBindPoint，pipelineLayout和
            set number推送描述符集。

    VkDescriptorSetLayout                     descriptorSetLayout;
        如果templateType不是VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET，则忽略此参数。
        参数更新模板将使用的描述符集布局。
        必须使用此布局创建将通过新创建的描述符更新模板更新的所有描述符集。
        descriptorSetLayout是用于构建描述符更新模板的描述符集布局。
        将通过新创建的描述符更新模板更新的所有描述符集必须使用与
        此布局匹配（与其相同或定义相同）的布局来创建。

    VkPipelineBindPoint                       pipelineBindPoint;
        如果templateType不是VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR，则忽略此参数
        pipelineBindPoint是一个VkPipelineBindPoint，指示描述符是由图形管道还是计算管道使用。

    VkPipelineLayout                          pipelineLayout;
        如果templateType不是VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR，则忽略此参数
        pipelineLayout是一个VkPipelineLayout对象，用于对绑定进行编程。

    uint32_t                                  set;
        如果templateType不是VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR，则忽略此参数
        set是将更新的管道布局中设置的描述符的集合编号。
    } VkDescriptorUpdateTemplateCreateInfo;
*/
    class Descriptor_update_template : public std::enable_shared_from_this<Descriptor_update_template> {
    public:
        using Sptr = std::shared_ptr<Descriptor_update_template>;

        ~Descriptor_update_template();

        const VkDescriptorUpdateTemplate handle;
        std::shared_ptr<Descriptor_set_layout> descriptor_set_layout;
        std::shared_ptr<Pipeline_layout> pipeline_layout;
    private:
        friend class Descriptor_set_layout;
        friend class Pipeline_layout;
        Descriptor_update_template(
            std::shared_ptr<Descriptor_set_layout>  descriptor_set_layout_,
            VkDescriptorUpdateTemplate              handle_,
            S_allocation_callbacks*const           allocator_);

        Descriptor_update_template(
            std::shared_ptr< Pipeline_layout>   pipeline_layout_,
            VkDescriptorUpdateTemplate          handle_,
            S_allocation_callbacks*const       allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Command_pool : public std::enable_shared_from_this<Command_pool> {
    public:
        using Sptr = std::shared_ptr<Command_pool>;
        /*
            vkAllocateCommandBuffers可用于创建多个命令缓冲区。
            如果任何这些命令缓冲区的创建失败，
            则实现必须从此命令中销毁所有成功创建的命令缓冲区对象，
            将pCommandBuffers阵列的所有条目设置为NULL并返回错误。
        */

        VkResult reset(F_command_pool_reset flags_);

        void trim(VkCommandPoolTrimFlags flags_ = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        ~Command_pool();

        std::shared_ptr<Command_buffer_group>
            get_a_command_buffer_group(uint32_t count_, E_command_buffer_level level);

        const VkCommandPool handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Command_pool(
            std::shared_ptr<Device>         device_,
            VkCommandPool                   handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Command_buffer_base {
    public:
        VkResult begin(
            F_command_buffer_usage                  flags_,
            const S_command_buffer_inheritance_info*pInheritanceInfo_ = nullptr,
            N_command_buffer_begin_info             pNext_ = {});

        VkResult reset(F_command_buffer_reset flags_);
        VkResult end();

        //如果cmd的api都是void返回值 那么可以用它来返回Commd_buffer自身.设个语法糖.

        void bind_pipeline(std::shared_ptr<Compute_pipeline> pipeline_sptr_); //需要修正生命周期
        void bind_pipeline(std::shared_ptr<Graphics_pipeline> pipeline_sptr_);

        void bind_buffer(
            std::shared_ptr<Buffer> buffer_sptr_,
            VkDeviceSize offset_,
            E_index_type index_type);

        void bind_buffers(
            Array_value<std::shared_ptr<Buffer>> buffer_sptrs_, //todo:为一些对象提供vector版
            Array_value<VkDeviceSize> offsets_,
            uint32_t first_binding_);

        void set_blend_constants(const float blend_[4]);

        void set_depth_bias(
            float depthBiasConstantFactor_,
            float depthBiasClamp_,
            float depthBiasSlopeFactor_);

        void set_depth_bounds(
            float minDepthBounds_,
            float maxDepthBounds_);

        void set_device_mask(uint32_t mask_);

        void set_line_width(float line_width_);

        void set_scissor(
            uint32_t            firstScissor_,
            uint32_t            scissorCount_,
            const S_rect_2d&    pScissors_);

        void set_stencil_compare_mask(
            F_stencil_face  faceMask_,
            uint32_t        compareMask_);

        void set_stencil_reference(
            F_stencil_face  faceMask_,
            uint32_t        reference_);

        void set_stencil_write_mask(
            F_stencil_face  faceMask_,
            uint32_t        writeMask_);

        void set_viewport(
            uint32_t                firstViewport_,
            Array_value<S_viewport> viewports_);

        void event_set(
            Event&              event_,
            F_pipeline_stage    stageMask_);

        void event_reset(
            Event&              event_,
            F_pipeline_stage    stageMask_);

        void query_begin(
            Query_pool&     queryPool_,
            uint32_t        query_,
            F_query_control flags_);

        void query_reset(
            Query_pool& queryPool_,
            uint32_t    firstQuery_,
            uint32_t    queryCount_);

        void query_end(
            Query_pool& queryPool_,
            uint32_t    query_);

        void query_copy_results(
            Query_pool&     queryPool_,
            uint32_t        firstQuery_,
            uint32_t        queryCount_,
            Buffer&         dstBuffer_,
            VkDeviceSize    dstOffset_,
            VkDeviceSize    stride_,
            F_query_result  flags_);

        void buffer_update(
            Buffer&         dstBuffer_,
            VkDeviceSize    dstOffset_,
            VkDeviceSize    dataSize_,
            const void*     pData_);

        void buffer_fill(
            Buffer&         dstBuffer_,
            VkDeviceSize    dstOffset_,
            VkDeviceSize    size_,
            uint32_t        data_);

        void buffer_copy_to_buffer(
            Buffer&                     srcBuffer_,
            Buffer&                     dstBuffer_,
            Array_value<S_buffer_copy>   regions_);

        void buffer_copy_to_image(
            Buffer&                         srcBuffer_,
            Image&                          dstImage_,
            E_image_layout                  dstImage_layout_,
            Array_value<S_buffer_image_copy>  pRegions_);

        void clear_attachments(
            Array_value<S_clear_attachment>  pAttachments_,
            Array_value <S_clear_rect>       pRects_);

        void image_clear_color(
            Image&                                  image_,
            E_image_layout                          imageLayout_,//检查有没有可能多个布局能用在一种图上
            const VkClearColorValue*                pColor_,
            Array_value<S_image_subresource_range>  pRanges_);

        void image_clear_depth_stencil(
            Image&                                  image_,
            E_image_layout                          imageLayout_,
            const S_clear_depth_stencil_value*      pDepthStencil_,
            Array_value<S_image_subresource_range>  pRanges_);

        void image_blit(
            Image&                      srcImage_,
            E_image_layout              srcImageLayout_,
            Image&                      dstImage_,
            E_image_layout              dstImageLayout_,
            Array_value<S_image_blit>   pRegions_,
            E_filter                    filter_);

        void image_copy(
            Image&                      srcImage_,
            E_image_layout              srcImageLayout_,
            Image&                      dstImage_,
            E_image_layout              dstImageLayout_,
            Array_value<S_image_copy>   pRegions_);

        void image_copy_to_buffer(
            Image&                      srcImage_,
            E_image_layout              srcImageLayout_,
            Buffer&                     dstBuffer_,
            Array_value<S_buffer_image_copy>  pRegions_);

        void dispatch(
            uint32_t    groupCountX_,
            uint32_t    groupCountY_,
            uint32_t    groupCountZ_);

        void dispatch_base(
            uint32_t    baseGroupX_,
            uint32_t    baseGroupY_,
            uint32_t    baseGroupZ_,
            uint32_t    groupCountX_,
            uint32_t    groupCountY_,
            uint32_t    groupCountZ_);

        void dispatch_indirect(
            Buffer&         buffer_,
            VkDeviceSize    offset_);

        void write_timestamp(
            F_pipeline_stage    pipelineStage_,
            Query_pool&         queryPool_,
            uint32_t            query_);

        void push_constants(
            Pipeline_layout&    layout_,
            F_shader_stage      stageFlags_,
            uint32_t            offset_,
            uint32_t            size_,
            const void*         pValues_);

        void image_resolve(
            Image&                          srcImage_,
            E_image_layout                  srcImageLayout_,
            Image&                          dstImage_,
            E_image_layout                  dstImageLayout_,
            Array_value<S_image_resolve>    pRegions_);

        void render_pass_begin(
            Render_pass&        render_pass_,
            Frame_buffer&       framebuffer_,
            S_rect_2d           renderArea_,
            uint32_t            clearValueCount_,
            const VkClearValue* pClearValues_,
            E_subpass_contents  contents_,
            N_render_pass_begin_info    pNext_ = {});

        void next_subpass(E_subpass_contents contents_);

        void render_pass_end();

        void wait_events(
            Array_value<std::shared_ptr<Event>> events_,
            F_pipeline_stage                    srcStageMask_,
            F_pipeline_stage                    dstStageMask_,
            Array_value<S_memory_barrier>       memory_barriers_,
            Array_value<S_buffer_memory_barrier>buffer_memory_barriers_,
            Array_value<S_image_memory_barrier> image_memory_barriers_);

        void bind_descriptor_sets(
            E_pipeline_bind_point   pipelineBindPoint_,
            Pipeline_layout&        layout_,
            uint32_t                firstSet_,
            Descriptor_set_group&   descriptor_sets_,
            Array_value<uint32_t>   dynamic_offsets_);

        //屏障可以用更形象的方式来使用.

        void pipeline_barrier(
            F_pipeline_stage                    srcStageMask_,
            F_pipeline_stage                    dstStageMask_,
            F_dependency                        dependencyFlags_,
            Array_value<S_memory_barrier>       memory_barriers_,
            Array_value<S_buffer_memory_barrier>buffer_memory_barriers_,
            Array_value<S_image_memory_barrier> image_memory_barriers_);

        void draw(
            uint32_t    vertexCount_,
            uint32_t    instanceCount_,
            uint32_t    firstVertex_,
            uint32_t    firstInstance_);

        void draw_indexed(
            uint32_t    indexCount_,
            uint32_t    instanceCount_,
            uint32_t    firstIndex_,
            int32_t     vertexOffset_,
            uint32_t    firstInstance_);

        void draw_indexed_indirect(
            Buffer&         buffer_,
            VkDeviceSize    offset_,
            uint32_t        drawCount_,
            uint32_t        stride_);

        void draw_indirect(
            Buffer&         buffer_,
            VkDeviceSize    offset_,
            uint32_t        drawCount_,
            uint32_t        stride_);

        void commands_execute();

        const VkCommandBuffer handle;
        Device::Api& api;
        Command_buffer_base(const VkCommandBuffer handle_, Device::Api& api_)
            :handle(handle_)
            , api(api_)
        {}
    };

    class Command_buffer_group : public std::enable_shared_from_this<Command_buffer_group> {
    public:
        using Sptr = std::shared_ptr<Command_buffer_group>;

        Command_buffer_base operator[](size_t index_)
        {
            return Command_buffer_base(handles[index_], api);
        }
        std::shared_ptr<Command_buffer> extract(uint32_t index_);

        ~Command_buffer_group()
        {
            api.vkFreeCommandBuffers(command_pool->device->handle,
                command_pool->handle, static_cast<uint32_t>(handles.size()),
                &handles[0]);
        };
        std::vector<VkCommandBuffer> handles;
        std::shared_ptr<Command_pool>  command_pool;
        Device::Api& api;
    private:
        friend class Command_pool;
        Command_buffer_group(std::shared_ptr<Command_pool> command_pool_,
            std::vector<VkCommandBuffer>& command_buffer_handles)
            :command_pool(command_pool_)
            , api(command_pool_->device->api)
        {
            handles = std::move(command_buffer_handles);
        }
    };

    class Command_buffer :  public std::enable_shared_from_this<Command_buffer>
                         ,  public Command_buffer_base{
    public:
        using Sptr = std::shared_ptr<Command_buffer>;
        using Group = Command_buffer_group;

        ~Command_buffer()
        {
            api.vkFreeCommandBuffers(command_pool->device->handle,
                command_pool->handle, 1,&handle
            );
        }

        std::shared_ptr<Command_pool>  command_pool;
    private:
        friend class Command_buffer_group;
        Command_buffer(
            std::shared_ptr<Command_pool>      command_pool_,
            const VkCommandBuffer   handle_)
            :Command_buffer_base(handle_,command_pool_->device->api)
        {}
    };

    class Pipeline_layout : public std::enable_shared_from_this<Pipeline_layout> {
    public:
        using Sptr = std::shared_ptr<Pipeline_layout>;

        ~Pipeline_layout();

        std::shared_ptr<Descriptor_update_template> get_a_descriptor_update_template(
            Array_value<S_descriptor_update_template_entry> entrys_,
            E_pipeline_bind_point                           bind_point_,
            uint32_t                                        set_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Compute_pipeline> get_a_compute_pipeline(
            F_pipeline_create                   flags_,
            std::shared_ptr<Pipeline_cache>     pipeline_cache_,
            std::shared_ptr<Shader_module>      module_,
            const char*                         pName_,//shader 入口点名称
            F_shader_stage                      stage_flags_,
            const S_specialization_info*        pSpecializationInfo_ = nullptr,
            S_allocation_callbacks*const        allocator_ = default_allocation_cb());

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
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        const VkPipelineLayout handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        friend class Descriptor_set_layout;
        Pipeline_layout(
            std::shared_ptr<Device>         device_,
            VkPipelineLayout                handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Pipeline_cache : public std::enable_shared_from_this<Pipeline_cache> {
    public:
        using Sptr = std::shared_ptr<Pipeline_cache>;

        //std::shared_ptr<std::vector<char>> get_data();
        //对pData这种,大概得用vector<uchar>
        VkResult get_data(size_t* pDataSize, void* pData);
        VkResult merge(Aref<Pipeline_cache>  srcCache);

        ~Pipeline_cache();

        const VkPipelineCache handle;
        std::shared_ptr<Device> device;
    private:
        friend  class Device;
        Pipeline_cache(
            std::shared_ptr<Device>         device_,
            VkPipelineCache                 handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    //还要做批量创建pipeline
    class Compute_pipeline : public std::enable_shared_from_this<Compute_pipeline> {
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
            S_allocation_callbacks*const       allocator_ = default_allocation_cb());

        const VkPipeline  handle;

        std::shared_ptr<Pipeline_layout>    pipeline_layout;
        std::shared_ptr<Pipeline_cache>     pipeline_cache;
        std::shared_ptr<Shader_module>      shader_module;
        std::shared_ptr<Compute_pipeline>   base_pipeline;
    private:
        friend class Pipeline_layout;
        Compute_pipeline(
            std::shared_ptr<Pipeline_layout>    pipeline_layout_,
            std::shared_ptr<Pipeline_cache>     pipeline_cache,
            std::shared_ptr<Shader_module>      shader_module_,
            VkPipeline                          handle_,
            S_allocation_callbacks*const        allocation_callbacks_,
            int32_t                             base_index_ = -1,
            std::shared_ptr<Compute_pipeline>   compute_pipeline_ = nullptr);

        S_allocation_callbacks*const allocation_callbacks;
        int32_t index;
    };

    class Graphics_pipeline : public std::enable_shared_from_this<Graphics_pipeline> {
    public:
        using Sptr = std::shared_ptr<Graphics_pipeline>;
        ~Graphics_pipeline();

        const VkPipeline handle;

        std::shared_ptr<Pipeline_cache>                 pipeline_cache;
        std::shared_ptr<Pipeline_layout>                pipeline_layout;
        std::shared_ptr<Render_pass>                    render_pass;
        std::vector<std::shared_ptr<Shader_module>>     shader_modules;
    private:
        friend class Pipeline_layout;
        Graphics_pipeline(
            std::shared_ptr<Pipeline_cache>     pipeline_cache_,
            std::shared_ptr<Pipeline_layout>    pipeline_layout_,
            std::shared_ptr<std::shared_ptr<Shader_module>> shader_modules_,
            std::shared_ptr<Render_pass>        render_pass_);

        S_allocation_callbacks*const allocation_callbacks;
    };



#undef laka_vk_can_use_group
#undef laka_vk_over_group
}}