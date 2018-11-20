/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#include "vk.h"
#include "vk_mean.h"

using namespace std;

namespace laka { namespace vk {

#if 1   /*  global  */

    static Module_handle vk_module_handle = load_module_must("vulkan-1.dll");
    inline Module_handle get_vk_module() { return vk_module_handle; }
    static auto vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)
        load_module_function_must(vk_module_handle, "vkGetInstanceProcAddr");
    inline PFN_vkVoidFunction get_instance_proc_address(
        VkInstance instance_, const char* function_name_)
    {
        return vkGetInstanceProcAddr(instance_, function_name_);
    }
    template<typename Execute_function>
    PFN_vkVoidFunction return_vk_api(
        VkInstance instance_,
        const char* function_name_,
        Execute_function excute_)
    {
        init_show;
        show_debug("加载Vulkan函数:{0}", function_name_);
        auto fp = get_instance_proc_address(instance_, function_name_);
        if (fp != NULL)
        {
            show_debug("\t成功获得函数地址:{}", (size_t)fp);
        }
        else
        {
            show_err("\t获取函数地址失败");
            excute_();
        }
        return fp;
    }
    template <typename Execute_function>
    inline PFN_vkVoidFunction return_vk_api(const char* function_name_, Execute_function excute_)
    {
        return return_vk_api(nullptr, function_name_, excute_);
    }
    inline PFN_vkVoidFunction return_vk_api(const char* function_name_)
    {
        return return_vk_api(function_name_, []() {});
    }
    inline PFN_vkVoidFunction return_vk_api(VkInstance instance_, const char* function_name_)
    {
        return return_vk_api(instance_, function_name_, []() {});
    }
    inline PFN_vkVoidFunction return_vk_api_must(const char* function_name_)
    {
        return return_vk_api(function_name_, []() {abort(); });
    }
    inline PFN_vkVoidFunction return_vk_api_must(VkInstance instance_, const char* function_name_)
    {
        return return_vk_api(instance_, function_name_, []() {abort(); });
    }
    void show_result(VkResult ret_)
    {
        init_show;
        if (ret_ >= 0)
        {
            show_debug("{}", mean(ret_)->c_str());
        }
        else
        {
            show_err("{}", mean(ret_)->c_str());
        }
    }
    void show_result_assert(VkResult ret_)
    {
        init_show;
        if (ret_ > 0)
        {
            show_debug("{}", mean(ret_)->c_str());
        }
        else
        {
            show_err("{}", mean(ret_)->c_str());
            assert(ret_ >= 0);
        }
    }
    std::string version_str(uint32_t version)
    {
        std::string s(
            std::to_string(VK_VERSION_MAJOR(version)) + "." +
            std::to_string(VK_VERSION_MINOR(version)) + "." +
            std::to_string(VK_VERSION_PATCH(version))
        );
        return s;
    }

#define static_declare_load_vk_api(api_name__)                                  \
static auto api_name__ = (PFN_ ## api_name__)return_vk_api_must(#api_name__);

    table_vk_api_global(static_declare_load_vk_api ZK, , , YK);

    uint32_t get_instance_version()
    {
        init_show;

        uint32_t version;
        auto ret = vkEnumerateInstanceVersion(&version);
        if (ret < 0)
        {
            show_debug("无法获取实例版本");
            return 0;
        }
        return version;
    }

    static S_allocation_callbacks s_acb;
    Alloc_callbacks_ptr father_allocation_cb() { return &s_acb; }

    class Layer_properties {
    public:
        Layer_properties()
        {
            init_show;
            uint32_t count;
            auto ret = vkEnumerateInstanceLayerProperties(&count, nullptr);
            show_result(ret);
            if_show(count >= 0, "vulkan支持的层的数量为:{}", count);

            properties.resize(count);
            ret = vkEnumerateInstanceLayerProperties(&count, &properties[0]);
            show_result(ret);
        }
        vector<VkLayerProperties> properties;
        vector<vector<VkExtensionProperties>> layer_extension_properties;
    };
    static Layer_properties layer_properties;

    class Extension_properties {
    public:
        Extension_properties()
        {
            init_show;
            auto layer_count = layer_properties.properties.size();

            layer_properties.layer_extension_properties.resize(layer_count);

            for (size_t i = 0; i < layer_count; ++i)
            {
                uint32_t count = 0;
                auto ret = vkEnumerateInstanceExtensionProperties(
                    layer_properties.properties[i].layerName, &count, nullptr);
                show_result(ret);
                if_show(count >= 0, "{0}层扩展属性数量:{1}",
                    layer_properties.properties[i].layerName, count);

                if (count <= 0)
                {
                    continue;
                }

                layer_properties.layer_extension_properties[i].resize(count);
                ret = vkEnumerateInstanceExtensionProperties(
                    layer_properties.properties[i].layerName,
                    &count,
                    &(layer_properties.layer_extension_properties[i][0])
                );
                show_result(ret);

                show_debug("{0}层所有扩展:", layer_properties.properties[i].layerName);

                for (auto& x : layer_properties.layer_extension_properties[i])
                {
                    show_debug("\t{}", x.extensionName);
                }
            }

            uint32_t count = 0;
            auto ret = vkEnumerateInstanceExtensionProperties(
                nullptr, &count, nullptr);
            show_result(ret);
            if_show(count >= 0, "总扩展属性数量:{}", count);

            properties.resize(count);
            if (count > 0)
            {
                ret = vkEnumerateInstanceExtensionProperties(
                    nullptr, &count, &properties[0]);
                show_result(ret);
            }

            show_debug("所有扩展属性:");
            for (auto& itr : properties)
            {
                show_debug("\t名称:{} 版本:{}", itr.extensionName, itr.specVersion);
            }
        }
        vector<VkExtensionProperties> properties;
    };
    static Extension_properties extension_properties;

#endif  /*  global  */

#if 1   /*  macro  */
#define assert_ret(show_some_thing__)                               \
    show_debug("{0}:{1}",mean(ret)->c_str(),#show_some_thing__);    \
    assert(ret>=0 && #show_some_thing__);

//#define load_vk_array_ret(handle__,function__,type__,array__,...)   \
//    count = 0;                                                      \
//    ret = function__(handle__,&count,nullptr);                      \
//    show_result(ret);                                               \
//    if_show(count>0,__VA_ARGS__);                                   \
//    array__.resize(count);                                          \
//    if(count>0)                                                     \
//    {                                                               \
//        ret = function__(handle__,&count,(type__*)(&array__[0]) );  \
//        show_result(ret);                                           \
//    }
//#define load_vk_array(handle__,function__,type__,array__,...)       \
//    count = 0;                                                      \
//    function__(handle__,&count,nullptr);                            \
//    if_show(count>0,__VA_ARGS__);                                   \
//    array__.resize(count);                                          \
//    if(count>0)                                                     \
//    {                                                               \
//        function__(handle__,&count,(type__*)(&array__[0]) );        \
//    }

#define load_vk_sptr_vector(function__,handle__,sptr__,...)         \
    count = 0;                                                      \
    function__(handle__,&count,nullptr);                            \
    if_show(count>0,__VA_ARGS__);                                   \
    sptr__.reset( new (decltype(sptr__)::element_type) );           \
    if(count>0)                                                     \
    {                                                               \
        sptr__->resize(count);                                      \
        function__( handle__,&count,sptr__->data() );               \
    }

#define load_vk_sptr_vector_ret(function__,handle__,sptr__,...)     \
    count = 0;                                                      \
    ret = function__(handle__,&count,nullptr);                      \
    show_result(ret);                                               \
    if_show(count>0,__VA_ARGS__);                                   \
    sptr__->resize(count);                                          \
    if(ret>=0)                                                      \
    {                                                               \
        sptr__.reset( new (decltype(sptr__)::element_type) );       \
        if(count>0)                                                 \
        {                                                           \
            sptr__->resize(count);                                  \
            ret = function__( handle__,&count,sptr__->data() );     \
            show_result(ret);                                       \
            if(ret < 0) sptr.reset();                               \
        }                                                           \
    }

#endif  /*  macro  */

#if 1   /*  VkInstance  */

    Instance::Sptr Instance::get_new(
    Array_value<const char*>enabled_extension_names_ /*= {}*/,
    uint32_t                api_version_ /*= VK_MAKE_VERSION(1, 1, 82)*/,
    N_instance_create_info  next_ /*= {}*/,
    Alloc_callbacks_ptr     allocator_ /*= nullptr*/,
    Array_value<const char*>enabled_layer_names_ /*= {}*/,
    const char*             app_name_ /*= "laka::vk"*/,
    uint32_t                app_version_ /*= VK_MAKE_VERSION(0, 0, 1)*/,
    const char*             engine_name_ /*= "laka::vk::engine"*/,
    uint32_t                engine_version_ /*= VK_MAKE_VERSION(0, 0, 1)*/)
    {
        Sptr sptr;
        S_application_info app_info{
            app_name_,
            app_version_,
            engine_name_,
            engine_version_,
            api_version_
        };
        S_instance_create_info info{
            0,
            &app_info,
            enabled_layer_names_.size(),
            enabled_layer_names_.data(),
            enabled_extension_names_.size(),
            enabled_extension_names_.data()
        };
        info.set_pNext(next_);

        VkInstance this_handle;
        auto ret = vkCreateInstance(&info, allocator_, &this_handle);
        show_result(ret);
        if (ret < 0)
        {
            init_show;
            show_wrn("创建Instance失败");
            return sptr;
        }
        sptr.reset(new Instance(this_handle, allocator_));

        return sptr;
    }

    Instance::Instance(
        VkInstance handle_,
        Alloc_callbacks_ptr allocator_callbacks_ptr_)
        :alloc_cb_ptr(nullptr)
    {
        init_show;
        handle = handle_;
        if (allocator_callbacks_ptr_ != nullptr)
        {
            alloc_cb = *allocator_callbacks_ptr_.s;
            alloc_cb_ptr = &alloc_cb;
        }

#define load_instance_api(api_name__) \
api.api_name__ = \
    (PFN_##api_name__)return_vk_api_must(handle,#api_name__); \

        table_vk_api_instance(load_instance_api ZK, , , YK);
        table_vk_api_physical_device(load_instance_api ZK, , , YK);
        table_vk_api_platform(load_instance_api ZK, , , YK);
        table_vk_api_khr_surface(load_instance_api ZK, , , YK FH);
        table_vk_api_instance_khr_swapchain(load_instance_api ZK, , , YK FH);

        uint32_t count = 0;
        auto ret = api.vkEnumeratePhysicalDevices(handle, &count, nullptr);
        show_result(ret);
        show_debug("物理设备数量:{}", count);
        if (count != 0)
        {
            physical_devices.resize(count);

            vector<VkPhysicalDevice> physical_devices_temp;
            physical_devices_temp.resize(count);
            ret = api.vkEnumeratePhysicalDevices(handle, &count, &physical_devices_temp[0]);
            show_result_assert(ret);

            int i = 0;
            for (auto&& pd_handle : physical_devices_temp)
            {
                physical_devices[i].instance = this;
                physical_devices[i].handle = pd_handle;

                auto qf_sptr = physical_devices[i].get_queue_family_properties();
                physical_devices[i].queue_familys.resize(qf_sptr->size());

                uint32_t index = 0;
                for (auto&& qf : *qf_sptr)
                {
                    physical_devices[i].queue_familys[index].index = index;
                    physical_devices[i].queue_familys[index].properties = qf;
                    index++;
                }

                auto pd_info = physical_devices[i].get_properties();

                show_debug(
                    "设备{}  api版本:{} 驱动版本:{}",
                    pd_info->deviceName,
                    version_str(pd_info->apiVersion),
                    version_str(pd_info->driverVersion)
                );
                ++i;
            }
        }
        else
        {
            show_wrn("没有枚举到物理设备");
        }

        count = 0;
        ret = api.vkEnumeratePhysicalDeviceGroups(handle, &count, nullptr);
        show_result(ret);
        show_debug("设备组数量:{}", count);

        vector<VkPhysicalDeviceGroupProperties> physical_device_groups_temp(count);
        physical_device_groups.resize(count);

        if (count > 0)
        {
            ret = api.vkEnumeratePhysicalDeviceGroups(
                handle, &count, &physical_device_groups_temp[0]);
            show_result_assert(ret);

            int i = 0;
            for (auto&& current_pgp : physical_device_groups_temp)
            {
                auto& current_group = physical_device_groups[i];
                current_group.properties = current_pgp;
                current_group.physical_devices.resize(current_pgp.physicalDeviceCount);

                for (int j = 0; j < current_pgp.physicalDeviceCount; ++j)
                {
                    auto& handle_temp = current_pgp.physicalDevices[j];
                    show_debug("物理设备组中 物理句柄值:{}", (void*)handle_temp);

                    Physical_device* physical_device_ptr = nullptr;
                    int x = 0;
                    for (auto&& current_physical_device : physical_devices)
                    {
                        if (current_physical_device.handle == handle_temp)
                        {
                            physical_device_ptr = &physical_devices[x];
                            break;
                        }
                        ++x;
                    }

                    if (physical_device_ptr != nullptr)
                    {
                        current_group.physical_devices[j] = physical_device_ptr;
                    }
                    else
                    {
                        show_err("!!!!!!!!!!!在设备组中的物理设备的句柄 与枚举全部设备的句柄不一样");
                    }
                }
                ++i;
            }
        }
        else {
            show_wrn("没有枚举出设备组");
        }
    }

    Instance::~Instance()
    {
        init_show;
        show_function_name;
        api.vkDestroyInstance(
            handle,
            alloc_cb_ptr
        );
    }

#endif  /*  VkInstance  */

#if 1   /*  VkPhysicalDevice  */
    shared_ptr<vector<S_layer_properties>>
        Physical_device::get_layer_propertiess()
    {
        init_show;
        shared_ptr<vector<S_layer_properties>> sptr;
        uint32_t count;
        VkResult ret;
        load_vk_sptr_vector_ret(
            instance->api.vkEnumerateDeviceLayerProperties,
            handle,
            sptr,
            "物理设备 {} 的层数为 {}", (void*)handle, count
        );
        return sptr;
    }

    shared_ptr<vector<S_extension_properties>>
        Physical_device::get_extension_properties(const char* layer_name_)
    {
        init_show;
        shared_ptr<vector<S_extension_properties>> sptr;
        uint32_t count;
        VkResult ret;
        load_vk_sptr_vector(
            instance->api.vkEnumerateDeviceExtensionProperties,
            handle DH layer_name_,
            sptr,
            "物理设备 {0} 的扩展属性数为 {1}", (void*)handle, count
        );
        return sptr;
    }

    shared_ptr<S_physical_device_features>
        Physical_device::get_features()
    {

        shared_ptr<S_physical_device_features> sptr(new S_physical_device_features);
        instance->api.vkGetPhysicalDeviceFeatures(handle, sptr.get());
        return sptr;
    }

    shared_ptr<S_physical_device_properties>
        Physical_device::get_properties()
    {
        shared_ptr<S_physical_device_properties> sptr(new S_physical_device_properties);
        instance->api.vkGetPhysicalDeviceProperties(handle, sptr.get());
        return sptr;
    }

    shared_ptr<S_physical_device_memory_properties>
        Physical_device::get_memory_properties()
    {
        shared_ptr<S_physical_device_memory_properties> sptr(new S_physical_device_memory_properties);
        instance->api.vkGetPhysicalDeviceMemoryProperties(handle, sptr.get());
        return sptr;
    }

    shared_ptr<vector<S_queue_family_properties>>
        Physical_device::get_queue_family_properties()
    {
        init_show;
        shared_ptr<vector<S_queue_family_properties>> sptr;
        uint32_t count = 0;
        load_vk_sptr_vector(
            instance->api.vkGetPhysicalDeviceQueueFamilyProperties,
            handle,
            sptr,
            "物理设备 {} 的队列族数量为 {}", (void*)handle, count
        );
        return sptr;
    }

    shared_ptr<S_format_properties>
        Physical_device::get_format_properties(E_format format_)
    {
        shared_ptr<S_format_properties> sptr(new S_format_properties);
        instance->api.vkGetPhysicalDeviceFormatProperties(
            handle,
            format_,
            sptr.get()
        );
        return sptr;
    }

    shared_ptr<S_external_buffer_properties>
        Physical_device::get_external_buffer_properties(
            S_physical_device_external_buffer_info info_)
    {
        shared_ptr<S_external_buffer_properties> sptr(new S_external_buffer_properties);

        instance->api.vkGetPhysicalDeviceExternalBufferProperties(
            handle,
            info_,
            sptr.get()
        );
        return sptr;
    }

    shared_ptr<S_external_fence_properties>
        Physical_device::get_external_fence_properties(
            F_external_fence_handle_type    handle_type_)
    {
        shared_ptr<S_external_fence_properties> sptr(new S_external_fence_properties);

        S_physical_device_external_fence_info external_fence_info{
            handle_type_
        };
        instance->api.vkGetPhysicalDeviceExternalFenceProperties(
            handle,
            external_fence_info,
            sptr.get()
        );
        return sptr;
    }

    shared_ptr<S_external_semaphore_properties>
        Physical_device::get_external_semphore_properties(
            F_external_semaphore_handle_type    handle_type_)
    {
        shared_ptr<S_external_semaphore_properties> sptr(new S_external_semaphore_properties);
        S_physical_device_external_semaphore_info external_semaphore_info{
            handle_type_
        };
        instance->api.vkGetPhysicalDeviceExternalSemaphoreProperties(
            handle,
            external_semaphore_info,
            sptr.get()
        );
        return sptr;
    }

    shared_ptr<S_image_format_properties2>
        Physical_device::get_image_format_properties(
            const S_physical_device_image_format_info2& format_info_)
    {
        shared_ptr<S_image_format_properties2> sptr(new S_image_format_properties2);
        instance->api.vkGetPhysicalDeviceImageFormatProperties2(
            handle,
            format_info_,
            sptr.get()
        );
        return sptr;
    }

    shared_ptr<vector<VkSparseImageFormatProperties2>>
        Physical_device::get_sparse_image_format_properties(
            const S_physical_device_sparse_image_format_info2& format_info_)
    {
        init_show;
        shared_ptr<vector<VkSparseImageFormatProperties2>>sptr;
        uint32_t count = 0;

        load_vk_sptr_vector(
            instance->api.vkGetPhysicalDeviceSparseImageFormatProperties2,
            handle DH format_info_,
            sptr,
            "物理设备 {0} 的稀疏图像格式属性 数量为:{1}", (void*)handle, count
        );

        return sptr;
    }

#ifdef VK_KHR_surface
    bool Physical_device::get_surface_support(Ahandle<Surface> surface_, uint32_t queue_index_)
    {
        VkBool32 sult;
        auto ret = instance->api.vkGetPhysicalDeviceSurfaceSupportKHR(handle, queue_index_, surface_, &sult);
        show_result(ret);
        if (ret < 0)
        {
            return false;
        }
        return sult == VK_TRUE;
    }

    shared_ptr< std::vector<VkSurfaceFormatKHR> >
        Physical_device::get_surface_formats(Ahandle<Surface> surface_)
    {
        init_show;
        shared_ptr<vector<VkSurfaceFormatKHR>> sptr;
        uint32_t count;
        VkResult ret;
        load_vk_sptr_vector_ret(
            instance->api.vkGetPhysicalDeviceSurfaceFormatsKHR,
            handle DH surface_ ,
            sptr,
            "surface {}的VkSurfaceFormatKHR数量为:{}", (void*)handle, count
        );
        return sptr;
    }

    std::shared_ptr< VkSurfaceCapabilitiesKHR >
        Physical_device::get_surface_capabilities(Ahandle<Surface> surface_)
    {
        shared_ptr<VkSurfaceCapabilitiesKHR> sptr(new VkSurfaceCapabilitiesKHR);
        
        auto ret = instance->api.
            vkGetPhysicalDeviceSurfaceCapabilitiesKHR(handle, surface_, sptr.get());
        show_result(ret);
        if (ret < 0)
        {
            sptr.reset();
        }
        return sptr;
    }

    std::shared_ptr< std::vector< VkPresentModeKHR> >
        Physical_device::get_surface_present_modes(Ahandle<Surface> surface_)
    {
        init_show;
        shared_ptr< vector<VkPresentModeKHR> > sptr;
        uint32_t count;
        VkResult ret;
        load_vk_sptr_vector_ret(
            instance->api.vkGetPhysicalDeviceSurfacePresentModesKHR,
            handle DH surface_,
            sptr,
            "surface{}的 present mode 数量为{}", (void*)handle,count
        );
        return sptr;
    }

#endif

#ifdef VK_KHR_swapchain
    std::shared_ptr< std::vector<VkRect2D> >
        Physical_device::get_present_rectangles(Ahandle<Surface> surface_)
    {
        init_show;

        shared_ptr<vector<VkRect2D>> sptr;
        uint32_t count;
        VkResult ret;

        load_vk_sptr_vector_ret(
            instance->api.vkGetPhysicalDevicePresentRectanglesKHR,
            handle DH surface_,
            sptr,
            "物理设备{}present rectang les数量为{}",(void*)handle, count
        );
        return sptr;
    }
#endif 

#endif  /*  VkPhysicalDevice  */

#if 1   /*  VkQueue  */

    VkResult Queue::wait_idle()
    {
        auto ret = api->vkQueueWaitIdle(handle);
        show_result(ret);
        return ret;
    }

    VkResult Queue::bind_sparse(
        Array_value<S_bind_sparse_info>&    pBindInfo_,
        Aptr<Fence>                         fence_)
    {
        auto ret = api->vkQueueBindSparse(
            handle,
            pBindInfo_.size(),
            pBindInfo_.data(),
            fence_ == nullptr ? VK_NULL_HANDLE : fence_->handle
        );
        show_result(ret);

        return ret;
    }

    VkResult Queue::submit(
        Array_value<S_submit_info>& pSubmitInfo_,
        Aptr<Fence>                 fence_)
    {
        VkFence fence_handle =
            fence_ == nullptr ? VK_NULL_HANDLE : fence_->handle;
        auto ret = api->vkQueueSubmit(
            handle,
            pSubmitInfo_.size(),
            pSubmitInfo_.data(),
            fence_handle
        );
        show_result(ret);

        return ret;
    }

#ifdef VK_KHR_swapchain
    // 排队所有渲染命令并将图像转换为正确的布局后，排队图像以进行演示
    VkResult Queue::present(Aref<S_present_info_KHR> present_info_)
    {
        return api->vkQueuePresentKHR(handle, &present_info_.ref);
    }
#endif

#endif  /*  VkQueue  */

#if 1   /*  VkSurface  */

#if defined(VK_USE_PLATFORM_WIN32_KHR)

    bool Surface::get_physical_device_presentation_support(
        Ahandle<Physical_device>    physical_device_,
        uint32_t                    queuefamily_index_)
    {
        return VK_TRUE == api->vkGetPhysicalDeviceWin32PresentationSupportKHR(
            physical_device_,
            queuefamily_index_
        );
    }

    HANDLE Surface::get_memory_handle(
        Ahandle<Device>                            device_,
        Aref<S_memory_get_win32_handle_info_KHR>info_)
    {
        HANDLE result;
        auto ret = api->vkGetMemoryWin32HandleKHR(device_, *info_, &result);
        show_result(ret);

        return result;
    }

    shared_ptr<VkMemoryWin32HandlePropertiesKHR> Surface::get_memory_handle_proerties(
        Ahandle<Device>                 device_,
        F_external_memory_handle_type   handle_type_,
        HANDLE                          handle_)
    {
        shared_ptr<VkMemoryWin32HandlePropertiesKHR> result(new VkMemoryWin32HandlePropertiesKHR);
        auto ret = api->vkGetMemoryWin32HandlePropertiesKHR(
            device_,
            handle_type_.vk_flag,
            handle_,
            result.get()
        );
        show_result(ret);
        return result;
    }

    VkResult Surface::import_semaphore_handle(
        Ahandle<Device>                                 device_,
        Aref<S_import_semaphore_win32_handle_info_KHR>  pImportSemaphoreWin32HandleInfo_)
    {
        auto ret = api->vkImportSemaphoreWin32HandleKHR(
            device_,
            pImportSemaphoreWin32HandleInfo_
        );
        show_result(ret);
        return ret;
    }

    HANDLE Surface::get_Semaphore_handle(
        Ahandle<Device>                             device_,
        Aref<S_semaphore_get_win32_handle_info_KHR> semaphore_get_win32_handle_info_)
    {
        HANDLE result;
        auto ret = api->vkGetSemaphoreWin32HandleKHR(
            device_,
            semaphore_get_win32_handle_info_,
            &result
        );
        show_result(ret);
        return result;
    }

    VkResult Surface::import_fence_handle(
        Ahandle<Device>                             device_,
        Aref<S_import_fence_win32_handle_info_KHR>  info_)
    {
        auto ret = api->vkImportFenceWin32HandleKHR(
            device_,
            info_
        );
        show_result(ret);
        return ret;
    }

    HANDLE Surface::get_fence_handle(
        Ahandle<Device>                             device_,
        Aref<S_fence_get_win32_handle_info_KHR>     pGetWin32HandleInfo_)
    {
        HANDLE result;
        auto ret = api->vkGetFenceWin32HandleKHR(
            device_,
            pGetWin32HandleInfo_,
            &result
        );
        show_result(ret);
        return result;
    }

    S_wnd_class::S_wnd_class(
        HINSTANCE           hInstance_,
        LPCSTR              lpszClassName_,
        WNDPROC             wnd_process_,
        F_wnd_class_style   style_ /*= F_wnd_class_style::b_h_redraw | F_wnd_class_style::b_v_redraw*/,
        HBRUSH              hbrBackground_ /*= (HBRUSH)GetStockObject(BLACK_BRUSH)*/,
        HICON               hIcon_ /*= LoadIcon(NULL, IDI_APPLICATION)*/,
        HCURSOR             hCursor_ /*= LoadCursor(NULL, IDC_ARROW)*/,
        HICON               hIconSm_ /*= LoadIcon(NULL, IDI_WINLOGO)*/,
        LPCSTR              lpszMenuName_ /*= NULL*/,
        int                 cls_extra_ /*= 0*/,
        int                 wnd_extra_ /*= 0*/)
        :WNDCLASSEX{
            sizeof(WNDCLASSEX),
            style_,
            wnd_process_,
            cls_extra_,
            wnd_extra_,
            hInstance_,
            hIcon_,
            hCursor_,
            hbrBackground_,
            lpszMenuName_,
            lpszClassName_,
            hIconSm_ }
    {
        auto ret = RegisterClassEx(this);
        if (!ret)
        {
            init_show;
            show_err("注册窗口类失败");
        }
    }

#elif defined(VK_USE_PLATFORM_ANDROID_KHR)

    shared_ptr<S_android_hardware_buffer_format_properties_ANDROID>
        Surface::get_hardware_buffer_properties(
            Ahandle<Device>         device_,
            Aref<AHardwareBuffer>   buffer_)
    {
        shared_ptr<S_android_hardware_buffer_format_properties_ANDROID>
            result(new S_android_hardware_buffer_format_properties_ANDROID);
        auto ret = api->vkGetAndroidHardwareBufferPropertiesANDROID(
            device_,
            buffer_,
            result.get()
        );
        show_result(ret);
        return result;
    }

    struct AHardwareBuffer* Surface::get_memory_hardware_buffer(
        Ahandle<Device>                                         device_,
        Aref<S_memory_get_android_hardware_buffer_info_ANDROID> pInfo_)
    {
        struct AHardwareBuffer* result;
        auto ret = api->vkGetMemoryAndroidHardwareBufferANDROID(
            device_,
            pInfo_,
            &result
        );
        show_result(ret);
        return result;
    }

#elif defined(VK_USE_PLATFORM_IOS_MVK)

#elif defined(VK_USE_PLATFORM_MACOS_MVK)

#elif defined(VK_USE_PLATFORM_MIR_KHR)

    bool Surface::get_physical_device_presentation_support(
        Ahandle<Physical_device>    physical_device_,
        uint32_t                    queueFamilyIndex_,
        MirConnection*              connection_)
    {
        return VK_TRUE == api->vkGetPhysicalDeviceMirPresentationSupportKHR(
            physical_device_,
            queueFamilyIndex_,
            connection_
        );
    }

#elif defined(VK_USE_PLATFORM_VI_NN)

#elif defined(VK_USE_PLATFORM_WAYLAND_KHR)

    shared_ptr<struct wl_display> Surface::get_physical_device_presentation_support(
        Ahandle<Physical_device>    physical_device_,
        uint32_t                    queueFamilyIndex_,
        struct wl_display*          wl_display_)
    {
        return VK_TRUE == api->vkGetPhysicalDeviceWaylandPresentationSupportKHR(
            physical_device_,
            queueFamilyIndex_,
            wl_display_
        );
    }

#elif defined(VK_USE_PLATFORM_XCB_KHR)

    shared_ptr<xcb_connection_t> Surface::get_physical_device_presentation_support(
        Ahandle<Physical_device>    physical_device_,
        uint32_t                    queueFamilyIndex_,
        xcb_connection_t*           connection_,
        xcb_visualid_t              visual_id_)
    {
        return VK_TRUE == api->vkGetPhysicalDeviceXcbPresentationSupportKHR(
            physical_device_,
            queueFamilyIndex_,
            connection_,
            visual_id_
        );
    }

#elif defined(VK_USE_PLATFORM_XLIB_KHR)

    shared_ptr<Display> Surface::get_physical_device_presentation_support(
        Ahandle<Physical_device>    physical_device_,
        uint32_t                    queueFamilyIndex_,
        Display*                    display_,
        VisualID                    visualID_)
    {
        return VK_TRUE == api->vkGetPhysicalDeviceXlibPresentationSupportKHR(
            physical_device_,
            queueFamilyIndex_,
            display_,
            visualID_
        );
    }

#elif defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif

    shared_ptr<Surface> Instance::get_a_surface(
        surface_create_info&            create_info_,
        Alloc_callbacks_ptr              allocator_ /*= default_allocation_cb()*/)
    {
        shared_ptr<Surface> sptr;
        auto allocator = allocator_ == &s_acb ? alloc_cb_ptr : allocator_;

        VkSurfaceKHR surface_handle;
        auto ret = surface_create_fun(handle, create_info_, allocator, &surface_handle);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Surface失败");
            return sptr;
        }
        auto ptr = new Surface();
        sptr.reset(ptr);
        ptr->father = shared_from_this();
        ptr->handle = surface_handle;
        ptr->alloc_cb_ptr = allocator;
        ptr->api = &api;
        return sptr;
    }

    Surface::~Surface()
    {
        surface_destroy_fun(father->handle, handle, alloc_cb_ptr);
    }

#endif  /*  VkSurface  */

#if 1   /*  VkSwapchainKHR  */
#ifdef VK_KHR_swapchain

    uint32_t Swapchain::acquire_next_image(
        uint64_t            timeout_,
        Ahandle<Semaphore>  semaphore_,
        Ahandle<Fence>      fence_)
    {
        uint32_t index;
        auto ret = father->api.vkAcquireNextImageKHR(
            father->handle,
            handle,
            timeout_,
            semaphore_,
            fence_,
            &index
        );
        show_result(ret);
        if (ret < 0)
        {

        }
        return index;
    }

    std::shared_ptr<Swapchain> Device::get_a_swapchain(
        S_swapchain_create_info_KHR info_,
        Alloc_callbacks_ptr allocator_ /*= default_allocation_cb()*/)
    {
        init_show;
        shared_ptr<Swapchain> sptr;
        auto allocator = allocator_ == &s_acb ? alloc_cb_ptr : allocator_;
        VkSwapchainKHR swapchain;
        auto ret = api.vkCreateSwapchainKHR(handle, info_, allocator, &swapchain);
        show_result(ret);
        if (ret < 0)
        {
            show_err("创建 交换链 失败");
            return sptr;
        }
        sptr.reset(new Swapchain);
        sptr->alloc_cb_ptr = allocator;
        sptr->father = shared_from_this();
        sptr->handle = swapchain;

        return sptr;
    }

    Swapchain::~Swapchain()
    {
        father->api.vkDestroySwapchainKHR(father->handle, handle, alloc_cb_ptr);
    }

#endif 
#endif  /*  VkSwapchainKHR  */

#if 1   /*  VkDeviceCreatorInfo  */

    shared_ptr<Device_creator> Instance::get_a_device_creator(
        bool(*choose_physical_device_)(P_choose_physical_device& pramater_),
        bool(*choose_queue_family_)(P_choose_queue_family& pramater_),
        Alloc_callbacks_ptr allocator_ /*= default_allocation_cb*/)
    {
        shared_ptr<Device_creator> sptr(new Device_creator);

        sptr->instance = shared_from_this();
        sptr->choose_physical_device_function = choose_physical_device_;
        sptr->choose_queue_family_function = choose_queue_family_;
        sptr->alloc_cb_ptr == &s_acb ? alloc_cb_ptr : allocator_;

        return sptr;
    }

#endif  /*  VkDeviceCreatorInfo  */

#if 1   /*  VkDevice  */

    // 要将队列族信息存入设备对象中.
    shared_ptr<Device> Device_creator::get_a_device(
        Physical_device& physical_device_,
        S_device_create_info& create_info_)
    {
        init_show;
        shared_ptr<Device> device_sptr;

        P_choose_physical_device p1{ physical_device_ };
        if (choose_physical_device_function(p1) == false)
            return device_sptr;

        VkDevice device_handle;
        auto ret = instance->api.vkCreateDevice(
            physical_device_.handle,
            create_info_,
            alloc_cb_ptr,
            &device_handle
        );
        show_result(ret);
        if (ret < 0) return device_sptr;

        vector<Physical_device*> pds;
        // 还需遍历pnext 找出所有物理设备指针放进去.

        // 遍历队列信息 放进去.
        vector<User_choose_queue_info> queue_infos(create_info_.queueCreateInfoCount);
        for (size_t i = 0; i < queue_infos.size(); ++i)
        {
            queue_infos[i].queue_family_index = create_info_.pQueueCreateInfos[i].queueFamilyIndex;
            queue_infos[i].queue_priorities.resize(create_info_.pQueueCreateInfos[i].queueCount);
        }
        auto queue_familys = physical_device_.get_queue_family_properties();

        device_sptr.reset(
            new Device(
                instance,
                shared_from_this(),
                pds,
                queue_infos,
                *queue_familys,
                device_handle,
                alloc_cb_ptr
        ));

        return device_sptr;
    }

    shared_ptr<Device> Device_creator::get_a_device(
        Physical_device& physical_device_,
        Array_value<Ahandle<Surface>> surfaces_ /*= {}*/,
        Array_value<const char*> enabled_extensions_ /* = { } */,
        S_physical_device_features* features_ /* = nullptr */)
    {
        init_show;
        shared_ptr<Device> device_sptr;

        P_choose_physical_device p1{
            physical_device_
        };
        if (choose_physical_device_function(p1) == false)
        {
            show_wrn("此设备不合适");
            return device_sptr;
        }

        auto queue_familys = physical_device_.get_queue_family_properties();

        vector<Queue_family_info> my_queue_familys;
        my_queue_familys.resize(queue_familys->size());

        for (size_t i = 0; i < my_queue_familys.size(); ++i)
        {
            my_queue_familys[i].index = static_cast<uint32_t>(i);
            my_queue_familys[i].properties = (*queue_familys)[i];
            my_queue_familys[i].is_support_your_surface.resize(surfaces_.size());
            for (int j = 0; j < surfaces_.size(); ++j)
            {
                auto&& surface = surfaces_.data()[j];
                my_queue_familys[i].is_support_your_surface[j] =
                    physical_device_.get_surface_support(surface, static_cast<uint32_t>(i));
            }
        }
        vector<User_choose_queue_info> user_choosed_q_create_infos;

        P_choose_queue_family choose_qf_parmater{ my_queue_familys, user_choosed_q_create_infos };

        if (choose_queue_family_function(choose_qf_parmater) == false)
        {
            show_wrn("此设备没有合适的队列族");
            return device_sptr;
        }

        show_debug("构建队列create_info");
        vector<VkDeviceQueueCreateInfo> q_create_infos(user_choosed_q_create_infos.size());
        vector<VkDeviceQueueGlobalPriorityCreateInfoEXT> q_gpci_ext(user_choosed_q_create_infos.size());

        for (size_t i = 0; i < user_choosed_q_create_infos.size(); ++i)
        {
            void* pnext;
            if (user_choosed_q_create_infos[i].global_priority == 0)
            {
                pnext = nullptr;
            }
            else
            {
                pnext = &q_gpci_ext[i];
                q_gpci_ext[i] =
                {
                    VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT,
                    nullptr,
                    user_choosed_q_create_infos[i].global_priority
                };
            }

            q_create_infos[i] = {
                VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
                pnext,
                (VkFlags)(user_choosed_q_create_infos[i].create_flags),
                user_choosed_q_create_infos[i].queue_family_index,
                static_cast<uint32_t>(user_choosed_q_create_infos[i].queue_priorities.size()),
                &user_choosed_q_create_infos[i].queue_priorities[0]
            };
        }

        VkDevice device_handle;
        VkDeviceCreateInfo device_create_info = {
            VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
            nullptr,
            0,
            static_cast<uint32_t>(q_create_infos.size()),
            &q_create_infos[0],
            0,
            nullptr,
            enabled_extensions_.size() ,
            enabled_extensions_.data(),
            *features_
        };
        auto ret = instance->api.vkCreateDevice(
            physical_device_.handle,
            &device_create_info,
            alloc_cb_ptr,
            &device_handle
        );
        show_result(ret);
        if (ret < 0)
        {
            show_wrn("创建设备失败");
            return device_sptr;
        }

        vector<Physical_device*> pds{ &physical_device_ };

        device_sptr.reset(new Device(
            instance,
            shared_from_this(),
            pds,
            user_choosed_q_create_infos,
            *queue_familys,
            device_handle,
            alloc_cb_ptr
        ));

        return device_sptr;
    }

    shared_ptr<Device> Device_creator::get_a_device(
        Physical_device::Group& physica_device_group_,
        Array_value<Ahandle<Surface>> surfaces_/* = {}*/,
        Array_value<const char*> enabled_extensions_ /* = {} */,
        S_physical_device_features* features_ /* = nullptr */)
    {
        init_show;
        show_debug("从设备组创建逻辑设备");

        shared_ptr<Device> device_sptr;

        list<Physical_device*> ok_physical_device_list;
        for (auto&& physical_device : physica_device_group_.physical_devices)
        {
            P_choose_physical_device p1{ *physical_device };
            if (choose_physical_device_function(p1) == false)
            {
                show_wrn("一个设备不合适:{}", (void*)p1.if_you_feel_the_physical_device_not_ok_so_return_false.handle);
                continue;
            }
            ok_physical_device_list.push_back(physical_device);
        }
        if (ok_physical_device_list.size() <= 0)
        {
            show_wrn("没有合适的设备");
            return device_sptr;
        }

        vector<VkPhysicalDevice> ok_physical_devices_handle(ok_physical_device_list.size());
        int count = 0;
        for (auto&& physical_device : ok_physical_device_list)
        {
            ok_physical_devices_handle[count++] = physical_device->handle;
        }

        auto queue_familys = ok_physical_device_list.front()->get_queue_family_properties();

        vector<Queue_family_info> my_queue_familys;
        my_queue_familys.resize(queue_familys->size());

        for (size_t i = 0; i < my_queue_familys.size(); ++i)
        {
            my_queue_familys[i].index = static_cast<uint32_t>(i);
            my_queue_familys[i].properties = (*queue_familys)[i];

            my_queue_familys[i].is_support_your_surface.resize(surfaces_.size());
            for (int j = 0; j < surfaces_.size(); ++j)
            {
                auto&& surface = surfaces_.data()[j];
                my_queue_familys[i].is_support_your_surface[j] =
                    ok_physical_device_list.front()->get_surface_support(surface, static_cast<uint32_t>(i));
            }
        }
        vector<User_choose_queue_info> user_choosed_q_create_infos;

        P_choose_queue_family choose_qf_parmater{ my_queue_familys, user_choosed_q_create_infos };

        if (choose_queue_family_function(choose_qf_parmater) == false)
        {
            show_wrn("用户没有选择队列族");
            return device_sptr;
        }

        VkDeviceGroupDeviceCreateInfo device_group_create_info = {
            VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,
            nullptr,
            static_cast<uint32_t>(ok_physical_devices_handle.size()),
            &ok_physical_devices_handle[0]
        };

        show_debug("构建队列create_info");
        vector<VkDeviceQueueCreateInfo> q_create_infos(user_choosed_q_create_infos.size());
        vector<VkDeviceQueueGlobalPriorityCreateInfoEXT> q_gpci_ext(user_choosed_q_create_infos.size());

        for (size_t i = 0; i < user_choosed_q_create_infos.size(); ++i)
        {
            void* pnext;
            if (user_choosed_q_create_infos[i].global_priority == 0)
            {
                pnext = nullptr;
            }
            else
            {
                pnext = &q_gpci_ext[i];
                q_gpci_ext[i] =
                {
                    VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT,
                    nullptr,
                    user_choosed_q_create_infos[i].global_priority
                };
            }

            q_create_infos[i] = {
                VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
                pnext,
                (VkDeviceQueueCreateFlags)(user_choosed_q_create_infos[i].create_flags),
                user_choosed_q_create_infos[i].queue_family_index,
                static_cast<uint32_t>(user_choosed_q_create_infos[i].queue_priorities.size()),
                &user_choosed_q_create_infos[i].queue_priorities[0]
            };
        }

        VkDevice device_handle;
        VkDeviceCreateInfo device_create_info = {
            VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
            &device_group_create_info,
            0,
            static_cast<uint32_t>(q_create_infos.size()),
            &q_create_infos[0],
            0,
            nullptr,
            enabled_extensions_.size(),
            enabled_extensions_.data(),
            *features_
        };

        auto ret = instance->api.vkCreateDevice(
            ok_physical_device_list.front()->handle,
            &device_create_info,
            alloc_cb_ptr,
            &device_handle
        );
        show_result(ret);
        if (ret < 0)
        {
            show_wrn("创建设备失败");
            return device_sptr;
        }

        vector<Physical_device*> pds(ok_physical_device_list.size());
        size_t index_pd = 0;
        for (auto&& node : ok_physical_device_list)
        {
            pds[index_pd++] = node;
        }

        device_sptr.reset(new Device(
            instance,
            shared_from_this(),
            pds,
            user_choosed_q_create_infos,
            *queue_familys,
            device_handle,
            alloc_cb_ptr
        ));

        return device_sptr;
    }

    std::shared_ptr<Device> Device_creator::get_a_device(
        Array_value<Ahandle<Surface>> surfaces_ /*= nullptr*/,
        Array_value<const char*> enabled_extensions_/* = {}*/,
        S_physical_device_features* features_/* = nullptr*/)
    {
        init_show;
        show_debug("遍历所有设备 - 创建逻辑设备");

        shared_ptr<Device> device_sptr;
        for (auto&& phy : instance->physical_devices)
        {
            P_choose_physical_device p{ phy };
            if (choose_physical_device_function(p) == false)
            {
                show_wrn("一个设备不合适:{}", (void*)p.if_you_feel_the_physical_device_not_ok_so_return_false.handle);
                continue;
            }
            auto queue_familys = p.if_you_feel_the_physical_device_not_ok_so_return_false.get_queue_family_properties();

            vector<Queue_family_info> my_queue_familys(queue_familys->size());

            for (size_t i = 0; i < my_queue_familys.size(); ++i)
            {
                my_queue_familys[i].index = static_cast<uint32_t>(i);
                my_queue_familys[i].properties = (*queue_familys)[i];

                my_queue_familys[i].is_support_your_surface.resize(surfaces_.size());
                for (int j = 0; j < surfaces_.size(); ++j)
                {
                    auto&& surface = surfaces_.data()[j];
                    my_queue_familys[i].is_support_your_surface[j] =
                        phy.get_surface_support(surface, static_cast<uint32_t>(i));
                }
            }
            vector<User_choose_queue_info> user_choosed_q_create_infos;

            P_choose_queue_family choose_qf_parmater{ my_queue_familys, user_choosed_q_create_infos };

            if (choose_queue_family_function(choose_qf_parmater) == false)
            {
                show_wrn("设备的队列族均不合适");
                continue;
            }
            show_info("选取了合适的设备与队列");
            vector<VkDeviceQueueCreateInfo> q_create_infos(user_choosed_q_create_infos.size());
            vector<VkDeviceQueueGlobalPriorityCreateInfoEXT> q_gpci_ext(user_choosed_q_create_infos.size());
            for (size_t i = 0; i < user_choosed_q_create_infos.size(); ++i)
            {
                void* pnext;
                if (user_choosed_q_create_infos[i].global_priority == 0)
                {
                    pnext = nullptr;
                }
                else
                {
                    pnext = &q_gpci_ext[i];
                    q_gpci_ext[i] =
                    {
                        VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT,
                        nullptr,
                        user_choosed_q_create_infos[i].global_priority
                    };
                }
                q_create_infos[i] = {
                    VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
                    pnext,
                    (VkFlags)(user_choosed_q_create_infos[i].create_flags),
                    user_choosed_q_create_infos[i].queue_family_index,
                    static_cast<uint32_t>(user_choosed_q_create_infos[i].queue_priorities.size()),
                    &user_choosed_q_create_infos[i].queue_priorities[0]
                };
            }
            VkDevice device_handle;
            VkDeviceCreateInfo device_create_info = {
                VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
                nullptr,
                0,
                static_cast<uint32_t>(q_create_infos.size()),
                &q_create_infos[0],
                0,
                nullptr,
                enabled_extensions_.size() ,
                enabled_extensions_.data(),
                *features_
            };

            auto ret = instance->api.vkCreateDevice(
                phy.handle,
                &device_create_info,
                instance->alloc_cb_ptr,
                &device_handle
            );
            show_result(ret);
            if (ret < 0)
            {
                show_wrn("创建设备失败");
                return device_sptr;
            }
            vector<Physical_device*> pds{ &phy };
            device_sptr.reset(new Device(
                instance,
                shared_from_this(),
                pds,
                user_choosed_q_create_infos,
                *queue_familys,
                device_handle,
                alloc_cb_ptr
            ));
            break;
        }
        if (device_sptr.get() == nullptr)
        {
            show_wrn("此机器没有用户满意的设备");
        }
        return device_sptr;
    }

    VkResult Device::invalidate_mapped_memory_ranges(
        Array_value<S_mapped_memory_range> mapped_memory_ranges_)
    {
        auto ret = api.vkInvalidateMappedMemoryRanges(
            handle,
            mapped_memory_ranges_.size(),
            *mapped_memory_ranges_.data()
        );
        show_result(ret);

        return ret;
    }

    VkResult Device::wait_idle()
    {
        auto ret = api.vkDeviceWaitIdle(handle);
        show_result(ret);

        return ret;
    }

    F_peer_memory_feature Device::get_peer_memory_feature(
        uint32_t    heapIndex_,
        uint32_t    localDeviceIndex_,
        uint32_t    remoteDeviceIndex_)
    {
        VkPeerMemoryFeatureFlags result;
        api.vkGetDeviceGroupPeerMemoryFeatures(
            handle, heapIndex_, localDeviceIndex_, remoteDeviceIndex_, &result
        );
        F_peer_memory_feature f;
        f = result;
        return f;
    }

    VkResult Device::wait_for_fences(
        Array_value<VkFence>    fences_,
        uint64_t                timeout_,
        bool                    wait_all_)
    {
        auto ret = api.vkWaitForFences(
            handle,
            fences_.size(),
            fences_.data(),
            wait_all_ ? VK_TRUE : VK_FALSE,
            timeout_
        );
        return ret;
    }

#ifdef VK_KHR_swapchain

    VkDeviceGroupPresentModeFlagsKHR Device::get_present_modes(Ahandle<Surface> surface_)
    {
        VkDeviceGroupPresentModeFlagsKHR sult;
        auto ret = api.vkGetDeviceGroupSurfacePresentModesKHR(
            handle,
            surface_,
            &sult
        );
        show_result(ret);
        return sult;
    }

    std::shared_ptr<VkDeviceGroupPresentCapabilitiesKHR>
        Device::get_present_capabilities()
    {
        std::shared_ptr<VkDeviceGroupPresentCapabilitiesKHR>
            sptr(new VkDeviceGroupPresentCapabilitiesKHR);

        auto ret = api.vkGetDeviceGroupPresentCapabilitiesKHR(
            handle,
            sptr.get()
        );
        show_result(ret);
        if (ret < 0)
        {
            sptr.reset();
        }
        return sptr;
    }

#endif

    PFN_vkVoidFunction Device::return_api(const char* api_name_)
    {
        init_show;
        //show_function_name;
        auto ret = father->api.vkGetDeviceProcAddr(handle, api_name_);

        if (ret == nullptr)
        {
            show_wrn("加载{}失败", api_name_);
        }
        else
        {
            show_debug("加载{}成功", api_name_);
        }
        return ret;
    }

    Device::Device(
        shared_ptr<Instance>                instance_,
        shared_ptr<Device_creator>          device_creator_,
        vector<Physical_device*>&           physical_devices_,
        vector<User_choose_queue_info>&     queue_infos_,
        vector<S_queue_family_properties>&  qf_properties_,
        VkDevice                            handle_,
        Alloc_callbacks_ptr allocation_callbacks_)
        : physical_devices(physical_devices_)
        , queue_familys(qf_properties_.size())
    {
        father = instance_;
        handle = handle_;
        alloc_cb_ptr = allocation_callbacks_;

        init_show;

#define load_vk_device_api(api_name__) \
    api.api_name__ = (PFN_##api_name__)return_api(#api_name__);

        table_vk_api_device(load_vk_device_api ZK, , , YK FH);
        table_vk_api_cmd(load_vk_device_api ZK, , , YK FH);
        table_vk_api_khr_swapchain(load_vk_device_api ZK, , , YK FH);

        if (queue_infos_.size() < 0)
        {
            show_wrn("用户没有给出队列信息");
            return;
        }

        // 填写queue_familys    按队列族索引为i 那么就填写到queue_familys[i].
            // 没有用到的qf索引 相应的位置queues.size()为0

        for (size_t i = 0; i < qf_properties_.size(); ++i)
        {
            queue_familys[i].properties = qf_properties_[i];
            queue_familys[i].qf_index = static_cast<uint32_t>(i);
        }

        // 假设queue_infos_中的元素 其队列族index不会重复 会的话也不知道vk会怎么处理.待提问.
        for (auto&& qi : queue_infos_)
        {
            auto curr_qf_index = qi.queue_family_index;
            queue_familys[curr_qf_index].queues.resize(qi.queue_priorities.size());

            uint32_t index_temp = 0;
            for (auto&&curr_q : queue_familys[curr_qf_index].queues)
            {
                curr_q.api = &api;
                curr_q.index = index_temp;

                curr_q.family_index = qi.queue_family_index;
                api.vkGetDeviceQueue(handle, curr_q.family_index, curr_q.index, &curr_q.handle);
                ++index_temp;
            }
        }
    }

    Device::~Device()
    {
        init_show;
        show_function_name;
        api.vkDestroyDevice(handle, alloc_cb_ptr);
    }
#endif  /*  VkDevice  */

#if 1   /*  VkSemaphore  */

    shared_ptr <Semaphore> Device::get_a_semaphore(
        N_semaphore_create_info next_/* = nullptr*/,
        Alloc_callbacks_ptr      allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Semaphore> semaphore_sptr;
        auto allocator = allocator_ == &s_acb ? alloc_cb_ptr : allocator_;

        S_semaphore_create_info info{
            0
        };
        info.set_pNext(next_);
        VkSemaphore semaphore_handle;
        auto ret = api.vkCreateSemaphore(handle, info, allocator, &semaphore_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Semaphore失败");
            return semaphore_sptr;
        }
        semaphore_sptr.reset(new Semaphore);
        semaphore_sptr->father = shared_from_this();
        semaphore_sptr->handle = semaphore_handle;
        semaphore_sptr->alloc_cb_ptr = allocator;

        return semaphore_sptr;
    }

    Semaphore::~Semaphore()
    {
        init_show;
        show_function_name;
        father->api.vkDestroySemaphore(father->handle, handle, alloc_cb_ptr);
    }
#endif  /*  VkSemaphore  */

#if 1   /*  VkFence  */

    shared_ptr <Fence> Device::get_a_fence(
        N_fence_create_info next_/* = nullptr*/,
        Alloc_callbacks_ptr  allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Fence> fence_sptr;
        auto allocator = allocator_ == &s_acb ? alloc_cb_ptr : allocator_;
        S_fence_create_info info{
            F_fence_create::b_signaled
        };
        info.set_pNext(next_);
        VkFence fence_handle;
        auto ret = api.vkCreateFence(handle, info, allocator, &fence_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Fence失败");
            return fence_sptr;
        }
        fence_sptr.reset(new Fence);
        fence_sptr->father = shared_from_this();
        fence_sptr->handle = fence_handle;
        fence_sptr->alloc_cb_ptr = allocator;

        return fence_sptr;
    }

    Fence::~Fence()
    {
        init_show;
        show_function_name;
        father->api.vkDestroyFence(father->handle, handle, alloc_cb_ptr);
    }

    VkResult Fence::reset(Array_value<VkFence> fences_)
    {
        auto ret = father->api.vkResetFences(
            father->handle,
            fences_.size(),
            fences_.data()
        );
        show_result(ret);
        return ret;
    }

    VkResult Fence::get_status()
    {
        auto ret = father->api.vkGetFenceStatus(father->handle, handle);
        show_result(ret);
        return ret;
    }

    VkResult Fence::wait(uint64_t timeout_)
    {
        auto ret = father->api.vkWaitForFences(
            father->handle,
            1,
            &handle,
            VK_TRUE,
            timeout_
        );
        show_result(ret);
        return ret;
    }

    VkResult Fence::wait(
        bool wait_all_,
        uint64_t timeout_,
        Array_value<VkFence> fences_)
    {
        auto ret = father->api.vkWaitForFences(
            father->handle,
            fences_.size(),
            fences_.data(),
            wait_all_ ? VK_TRUE : VK_FALSE,
            timeout_
        );
        show_result(ret);
        return ret;
    }

#endif  /*  VkFence  */

#if 1   /*  VkEvent  */
    shared_ptr <Event> Device::get_a_event(
        Alloc_callbacks_ptr allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Event> event_sptr;
        auto allocator = allocator_ == &s_acb ? alloc_cb_ptr : allocator_;

        S_event_create_info info{
            0
        };

        VkEvent event_handle;
        auto ret = api.vkCreateEvent(handle, info, allocator, &event_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Event失败");
            return event_sptr;
        }

        event_sptr.reset(new Event);
        event_sptr->father = shared_from_this();
        event_sptr->handle = event_handle;
        event_sptr->alloc_cb_ptr = allocator;

        return event_sptr;
    }

    Event::~Event()
    {
        init_show;
        show_function_name;
        father->api.vkDestroyEvent(father->handle, handle, alloc_cb_ptr);
    }

    VkResult Event::set()
    {
        auto ret = father->api.vkSetEvent(father->handle, handle);
        show_result(ret);
        return ret;
    }

    VkResult Event::get_event_status()
    {
        auto ret = father->api.vkGetEventStatus(father->handle, handle);
        show_result(ret);
        return ret;
    }

    void Event::reset()
    {
        father->api.vkResetEvent(father->handle, handle);
    }
#endif  /*  VkEvent  */

#if 1   /*  VkShaderModule  */

#endif  /*  VkShaderModule  */

#if 1   /*  VkDeviceMemory  */

#endif  /*  VkDeviceMemory  */

#if 1   /*  VkBuffer  */

#endif  /*  VkBuffer  */

#if 1   /*  VkBufferView  */

#endif  /*  VkBufferView  */

#if 1   /*  VkImage  */

#endif  /*  VkImage  */

#if 1   /*  VkImageView  */

#endif  /*  VkImageView  */

#if 1   /*  VkSampler  */

#endif  /*  VkSampler  */

#if 1   /*  VkSamplerYcbcrConversion  */

#endif  /*  VkSamplerYcbcrConversion  */

#if 1   /*  VkQueryPool  */

#endif  /*  VkQueryPool  */

#if 1   /*  VkFrameBuffer  */

#endif  /*  VkFrameBuffer  */

#if 1   /*  VkRenderPass  */

#endif  /*  VkRenderPass  */

#if 1   /*  VkDescriptorPool  */

#endif  /*  VkDescriptorPool  */

#if 1   /*  VkDescriptorSetLayout  */

#endif  /*  VkDescriptorSetLayout  */

#if 1   /*  VkDescriptorSet  */

#endif  /*  VkDescriptorSet  */

#if 1   /*  VkDescriptorUpdateTemplate  */

#endif  /*  VkDescriptorUpdateTemplate  */

#if 1   /*  VkCommandPool  */

#endif  /*  VkCommandPool  */

#if 1   /*  VkCommandBuffer  */

#endif  /*  VkCommandBuffer  */

#if 1   /*  VkPipelineLayout  */

#endif  /*  VkPipelineLayout  */

#if 1   /*  VkPipelineCache  */

#endif  /*  VkPipelineCache  */



}}