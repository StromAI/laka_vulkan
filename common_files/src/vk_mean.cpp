#include "vk_mean.h"
using namespace std;


shared_ptr<string> mean(VkResult e_)
{
    static const char* mean0[] = {
        "VK_SUCCESS: 命令成功完成",
        "VK_NOT_READY: 栅栏或查询尚未完成",
        "VK_TIMEOUT: 等待操作在指定的时间内没有完成",
        "VK_EVENT_SET: 事件发出信号",
        "VK_EVENT_RESET: 事件无信号",
    };

    static const char* mean1[] = {
        "VK_INCOMPLETE: 返回数组对于结果来说太小了",
        "VK_ERROR_OUT_OF_HOST_MEMORY: 主机内存分配失败。",
        "VK_ERROR_OUT_OF_DEVICE_MEMORY: 设备内存分配失败。",
        "VK_ERROR_INITIALIZATION_FAILED: 对于实现特定的原因，无法完成对象的初始化。",
        "VK_ERROR_DEVICE_LOST: 逻辑或物理设备已经丢失。",
        "VK_ERROR_MEMORY_MAP_FAILED: 内存对象映射失败。",
        "VK_ERROR_LAYER_NOT_PRESENT: 请求的图层不存在或无法加载。",
        "VK_ERROR_EXTENSION_NOT_PRESENT: 请求的扩展不受支持。",
        "VK_ERROR_FEATURE_NOT_PRESENT: 所请求的特性不受支持。",
        "VK_ERROR_INCOMPATIBLE_DRIVER: 所请求的Vulkan版本不受驱动程序支持，或者由于特定于实现的原因而不兼容。",
        "VK_ERROR_TOO_MANY_OBJECTS: 类型太多的对象已经被创建。",
        "VK_ERROR_FORMAT_NOT_SUPPORTED: 此设备不支持请求的格式。",
        "VK_ERROR_FRAGMENTED_POOL: 由于池的内存碎片，池分配失败。如果不尝试分配主机或设备内存以适应新的分配，则只能返回这个值。这应优先于VK_ERROR_OUT_OF_POOL_MEMORY_KHR返回，但前提是该实现确定池分配失败是由于碎片造成的。",
    };

    static const char* mean2[] = {
        "VK_ERROR_SURFACE_LOST_KHR: 表面不再可用。",
        "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: 请求的窗口已被Vulkan或其他API使用，防止再次使用该窗口。",
        "VK_SUBOPTIMAL_KHR: 交换链不再精确匹配表面属性，但仍可用于成功呈现到表面。",
        "VK_ERROR_OUT_OF_DATE_KHR: 一个表面已经改变，它不再与交换链兼容，使用交换链的进一步的表示请求将失败。应用程序必须查询新的表面属性，并在他们希望继续呈现到表面时重新创建交换链。",
        "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR: 交换链使用的显示器不使用相同的可呈现图像布局，或以防止共享图像的方式不兼容。",
        "VK_ERROR_VALIDATION_FAILED_EXT: ",
        "VK_ERROR_INVALID_SHADER_NV: 一个或多个着色器未能编译或链接。如果启用，更多细节会通过VK_EXT_debug_report报告给应用程序。",
        "VK_ERROR_OUT_OF_POOL_MEMORY_KHR: 池内存分配失败。如果不尝试分配主机或设备内存以适应新的分配，则只能返回这个值。如果失败肯定是由于池的碎片造成的，则应该返回VK_ERROR_FRAGMENTED_POOL。",
        "VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR: 外部句柄不是指定类型的有效句柄。",
        "VK_ERROR_NOT_PERMITTED_EXT: ",
    };

    shared_ptr<string> ret;

    if (e_ >= 0 && e_ <= 5)
    {
        ret.reset(new string(mean0[e_]));
        return ret;
    }
    if (e_ <= -1 && e_ >= -12)
    {
        return shared_ptr<string>(new string(mean1[e_*-1]));
    }

    switch (e_)
    {
    case(VK_ERROR_SURFACE_LOST_KHR):return shared_ptr<string>(new string(mean2[0]));
    case (VK_ERROR_NATIVE_WINDOW_IN_USE_KHR): return shared_ptr<string>(new string(mean2[1]));
    case (VK_SUBOPTIMAL_KHR):return shared_ptr<string>(new string(mean2[2]));
    case(VK_ERROR_OUT_OF_DATE_KHR): return shared_ptr<string>(new string(mean2[3]));
    case (VK_ERROR_INCOMPATIBLE_DISPLAY_KHR):return shared_ptr<string>(new string(mean2[4]));
    case(VK_ERROR_VALIDATION_FAILED_EXT):return shared_ptr<string>(new string(mean2[5]));
    case (VK_ERROR_INVALID_SHADER_NV):return shared_ptr<string>(new string(mean2[6]));
    case(VK_ERROR_OUT_OF_POOL_MEMORY_KHR):return shared_ptr<string>(new string(mean2[7]));
    case (VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR):return shared_ptr<string>(new string(mean2[8]));
    case(VK_ERROR_NOT_PERMITTED_EXT):return shared_ptr<string>(new string(mean2[9]));
    default:
        return shared_ptr<string>(new string("Unknow_mean"));
        break;
    }
}
