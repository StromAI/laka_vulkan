#include <common.h>
#include "vk.h"

using namespace laka::vk;

void fun(VkInstance i_handle_)
{
    init_show;
    show_info("i_handle_ : {}\n", (uint64_t)i_handle_);
}

void fun1(Ahandle<Instance> i_)
{
    fun(i_);
}



int main()
{
    init_show;
    show_info("以下一条为测试信息 不是真的");
    VkResult test_r = VkResult::VK_NOT_READY;
    show_result(test_r);

    auto vk_ist = Instance::get_new({ VK_KHR_SURFACE_EXTENSION_NAME,surface_extension_name });

    VkPhysicalDeviceGroupProperties pd_properties;
    uint32_t count = 0;
    vk_ist->api.vkEnumeratePhysicalDeviceGroups(
        vk_ist->handle,
        &count,
        nullptr
    );

    show_info("vk_ist.handle:{}", (uint64_t)vk_ist->handle);

    fun1(vk_ist);

    show_info("physical device properties count: {}", count);


    system("pause");
}





