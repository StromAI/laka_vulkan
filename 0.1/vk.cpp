#include "vk.h"
#include "vk_mean.h"


using namespace std;

namespace laka { namespace vk {
#include "classes.h"

#if 1   /*  global  */
    static Module_handle vk_module_handle = load_module_must("vulkan-1.dll");
    inline Module_handle get_vk_module() { return vk_module_handle; }
    static auto vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)
        load_module_function_must( vk_module_handle, "vkGetInstanceProcAddr" );
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
        show_debug("加载vulkan函数:{0}", function_name_);
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
    PFN_vkVoidFunction return_vk_api(const char* function_name_, Execute_function excute_)
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

    static S_allocation_callbacks acb;
    S_allocation_callbacks* default_allocation_cb() { return &acb; }

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

    //PFN_vkVoidFunction Device::return_api(const char* api_name_)
    //{
    //    init_show;
    //    //show_function_name;
    //    auto ret = instance->api.vkGetDeviceProcAddr(handle, api_name_);

    //    if (ret == nullptr)
    //    {
    //        show_wrn("加载{}失败", api_name_);
    //    }
    //    else
    //    {
    //        show_debug("加载{}成功", api_name_);
    //    }
    //    return ret;
    //}

#endif  /*  global  */

#if 1   /*  macro  */
#define assert_ret(show_some_thing__)                               \
    show_debug("{0}:{1}",mean(ret)->c_str(),#show_some_thing__);    \
    assert(ret>=0 && #show_some_thing__);

#define load_vk_array_ret(handle__,function__,type__,array__,...)   \
    count = 0;                                                      \
    ret = function__(handle__,&count,nullptr);                      \
    show_result(ret);                                               \
    if_show(count>0,__VA_ARGS__);                                   \
    array__.resize(count);                                          \
    if(count>0)                                                     \
    {                                                               \
        ret = function__(handle__,&count,(type__*)(&array__[0]) );  \
        show_result(ret);                                           \
    }

#define load_vk_array(handle__,function__,type__,array__,...)       \
    count = 0;                                                      \
    function__(handle__,&count,nullptr);                            \
    if_show(count>0,__VA_ARGS__);                                   \
    array__.resize(count);                                          \
    if(count>0)                                                     \
    {                                                               \
        function__(handle__,&count,(type__*)(&array__[0]) );        \
    }

#endif  /*  macro  */

#if 1   /* VkInstance */
    Instance::Sptr Instance::get_new(
        Array_value<const char*> enabled_extension_names_ /*= {}*/,
        uint32_t                api_version_ /*= VK_MAKE_VERSION(1, 1, 82)*/,
        N_instance_create_info  next_ /*= {}*/,
        S_allocation_callbacks*const allocator_ /*= nullptr*/,
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
        auto ret = vkCreateInstance(info, *allocator_, &this_handle);
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
        S_allocation_callbacks* allocator_callbacks_ptr_)
        :handle(handle_)
        , allocator_callbacks_ptr(&allocator_callbacks)
    {
        init_show;

        if (allocator_callbacks_ptr_ != nullptr)
        {
            allocator_callbacks = *allocator_callbacks_ptr_;
        }

#define load_instance_api(api_name__) \
    api.api_name__ = \
        (PFN_##api_name__)return_vk_api_must(handle,#api_name__); \

        table_vk_api_instance(load_instance_api ZK, , , YK);
        table_vk_api_physical_device(load_instance_api ZK, , , YK);
        table_vk_api_physical_device_khr(load_instance_api ZK, , , YK);

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
                    "设备{0}  api版本:{1} 驱动版本:{2}",
                    pd_info->deviceName,
                    version_str(pd_info->apiVersion),
                    version_str(pd_info->driverVersion)
                );
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
            ret = api.vkEnumeratePhysicalDeviceGroups(handle, &count, &physical_device_groups_temp[0]);
            show_result(ret);

            int i = 0;
            for (auto&& current_pg_ppt : physical_device_groups_temp)
            {
                auto& current_group = physical_device_groups[i];
                current_group.properties = current_pg_ppt;
                current_group.physical_devices.resize(current_pg_ppt.physicalDeviceCount);

                for (int j = 0; j < current_pg_ppt.physicalDeviceCount; ++j)
                {
                    auto& handle_temp = current_pg_ppt.physicalDevices[j];
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
                        current_group.physical_devices[i] = physical_device_ptr;
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
        api.vkDestroyInstance(handle, *allocator_callbacks_ptr);
    }
#endif  /*  VkInstance  */

#if 1   /*  VkPhysicalDevice  */
    shared_ptr<vector<S_layer_properties>>
        Physical_device::get_layer_propertiess()
    {
        init_show;
        uint32_t count; VkResult ret;
        auto& array_ref = *new vector<S_layer_properties>;
        shared_ptr<vector<S_layer_properties>> sptr(&array_ref);

        load_vk_array_ret(
            handle,
            instance->api.vkEnumerateDeviceLayerProperties,
            VkLayerProperties,
            array_ref,
            "物理设备 {0} 的层数为 {1}", (void*)handle, count
        );
        return sptr;
    }

    shared_ptr<vector<S_extension_properties>>
        Physical_device::get_extension_properties(const char* layer_name_)
    {
        init_show;
        auto& array = *new vector<S_extension_properties>;
        shared_ptr<vector<S_extension_properties>> sptr(&array);
        uint32_t count = 0;
        VkResult ret;

        load_vk_array_ret(
            handle DH layer_name_,
            instance->api.vkEnumerateDeviceExtensionProperties,
            VkExtensionProperties,
            array,
            "物理设备 {0} 的扩展属性数为 {1}", (void*)handle, count
        );
        return sptr;
    }

    shared_ptr<S_physical_device_features>
        Physical_device::get_features()
    {

        shared_ptr<S_physical_device_features> sptr(new S_physical_device_features);
        instance->api.vkGetPhysicalDeviceFeatures(
            handle, (VkPhysicalDeviceFeatures*)sptr.get());
        return sptr;
    }

    shared_ptr<S_physical_device_properties>
        Physical_device::get_properties()
    {
        shared_ptr<S_physical_device_properties> sptr(new S_physical_device_properties);
        instance->api.vkGetPhysicalDeviceProperties(
            handle, (VkPhysicalDeviceProperties*)sptr.get());
        return sptr;
    }

    shared_ptr<S_physical_device_memory_properties>
        Physical_device::get_memory_properties()
    {
        shared_ptr<S_physical_device_memory_properties> sptr(new S_physical_device_memory_properties);
        instance->api.vkGetPhysicalDeviceMemoryProperties(
            handle, (VkPhysicalDeviceMemoryProperties*)sptr.get());
        return sptr;
    }

    shared_ptr<vector<S_queue_family_properties>>
        Physical_device::get_queue_family_properties()
    {
        init_show;
        auto& array = *new vector<S_queue_family_properties>;
        shared_ptr<vector<S_queue_family_properties>> sptr(&array);
        uint32_t count = 0;
        load_vk_array(
            handle,
            instance->api.vkGetPhysicalDeviceQueueFamilyProperties,
            VkQueueFamilyProperties,
            array,
            "物理设备 {0} 的队列族数量为 {1}", (void*)handle, count
        );
        return sptr;
    }

    shared_ptr<S_format_properties>
        Physical_device::get_format_properties(E_format format_)
    {
        shared_ptr<S_format_properties> sptr(new S_format_properties);
        instance->api.vkGetPhysicalDeviceFormatProperties(
            handle,
            (VkFormat)format_,
            (VkFormatProperties*)sptr.get()
        );
        return sptr;
    }

    shared_ptr<S_external_buffer_properties>
        Physical_device::get_external_buffer_properties(
            F_buffer_create c_flags_,
            F_buffer_usage    u_flags_,
            F_external_memory_handle_type    handle_type_)
    {
        shared_ptr<S_external_buffer_properties> sptr(new S_external_buffer_properties);

        S_physical_device_external_buffer_info external_buffer_info{
            c_flags_,
            u_flags_,
            handle_type_
        };

        instance->api.vkGetPhysicalDeviceExternalBufferProperties(
            handle,
            external_buffer_info,
            *sptr
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
            *sptr
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
            *sptr
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
            *sptr
        );
        return sptr;
    }

    shared_ptr<S_image_format_properties2>
        Physical_device::get_image_format_properties(
            E_format        format_,
            E_image_type    type_,
            E_image_tiling  tiling_,
            F_image_usage   usage_,
            F_image_create  flags_,
            N_physical_device_image_format_info2  next_)
    {
        shared_ptr<S_image_format_properties2> sptr(new S_image_format_properties2);

        S_physical_device_image_format_info2 image_format_info{
            format_,
            type_,
            tiling_,
            usage_,
            flags_
        };
        image_format_info.set_pNext(next_);

        instance->api.vkGetPhysicalDeviceImageFormatProperties2(
            handle,
            image_format_info,
            *sptr
        );
        return sptr;
    }

    shared_ptr<vector<VkSparseImageFormatProperties2>>
        Physical_device::get_sparse_image_format_properties(
            const S_physical_device_sparse_image_format_info2& format_info_)
    {
        init_show;

        shared_ptr<vector<VkSparseImageFormatProperties2>>
            sptr(new vector<VkSparseImageFormatProperties2>);

        uint32_t count = 0;
        load_vk_array(
            handle DH format_info_,
            instance->api.vkGetPhysicalDeviceSparseImageFormatProperties2,
            VkSparseImageFormatProperties2,
            (*sptr),
            "物理设备 {0} 的稀疏图像格式属性 数量为:{1}", (void*)handle, count
        );
        return sptr;
    }

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
        Fence&                              fence_)
    {
        auto ret = api->vkQueueBindSparse(
            handle,
            pBindInfo_.size(),
            *pBindInfo_.data(),
            fence_.handle
        );
        show_result(ret);

        return ret;
    }

    VkResult Queue::submit(
        Array_value<S_submit_info>& pSubmitInfo_,
        Fence&                      fence_)
    {
        auto ret = api->vkQueueSubmit(
            handle,
            pSubmitInfo_.size(),
            *pSubmitInfo_.data(),
            fence_.handle
        );
        show_result(ret);

        return ret;
    }


#endif  /*  VkQueue  */

#if 1   /* VkDeviceCreatorInfo  */
    shared_ptr<Device_creator> Instance::get_a_device_creator(
        bool(*choose_physical_device_)(Pramater_choose_physical_device& pramater_),
        bool(*choose_queue_family_)(Pramater_choose_queue_family& pramater_),
        S_allocation_callbacks*const allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Device_creator> sptr(
            new Device_creator(
                shared_from_this(),
                choose_physical_device_,
                choose_queue_family_,
                allocator_ == &acb ? &allocator_callbacks : allocator_)
        );
        return sptr;
    }

    Device_creator::Device_creator(
        shared_ptr<Instance> instance_,
        bool(*choose_physical_device_)(Pramater_choose_physical_device& physical_device_),
        bool(*choose_queue_family_)(Pramater_choose_queue_family& parmatwr_),
        S_allocation_callbacks*const allocator_)
        : instance(instance_)
        , choose_physical_device_function(choose_physical_device_)
        , choose_queue_family_function(choose_queue_family_)
        , allocation_callbacks(allocator_)
    {   }
#endif  /* VkDeviceCreatorInfo  */

#if 1   /*  VkDevice  */
    // 要将队列族信息存入设备对象中.
    shared_ptr<Device> Device_creator::get_a_device(
        Physical_device& physical_device_,
        S_device_create_info& create_info_)
    {
        init_show;
        shared_ptr<Device> device_sptr;

        Pramater_choose_physical_device p1{ physical_device_ };
        if (choose_physical_device_function(p1) == false)
            return device_sptr;

        VkDevice device_handle;
        auto ret = instance->api.vkCreateDevice(
            physical_device_.handle,
            create_info_,
            *allocation_callbacks,
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
                allocation_callbacks
            ));
        return device_sptr;
    }

    shared_ptr<Device> Device_creator::get_a_device(
        Physical_device& physical_device_,
        Array_value<char*> enabled_extensions_ /* = { } */,
        S_physical_device_features* features_ /* = nullptr */)
    {
        init_show;
        shared_ptr<Device> device_sptr;

        Pramater_choose_physical_device p1{
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
        }
        vector<User_choose_queue_info> user_choosed_q_create_infos;

        Pramater_choose_queue_family choose_qf_parmater{ my_queue_familys, user_choosed_q_create_infos };

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
            *allocation_callbacks,
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
            allocation_callbacks
        ));

        return device_sptr;
    }

    shared_ptr<Device> Device_creator::get_a_device(
        Physical_device_group& physica_device_group_,
        Array_value<char*> enabled_extensions_ /* = {} */,
        S_physical_device_features* features_ /* = nullptr */)
    {
        init_show;
        show_debug("从设备组创建逻辑设备");

        shared_ptr<Device> device_sptr;

        list<Physical_device*> ok_physical_device_list;
        for (auto&& physical_device : physica_device_group_.physical_devices)
        {
            Pramater_choose_physical_device p1{ *physical_device };
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
        }
        vector<User_choose_queue_info> user_choosed_q_create_infos;

        Pramater_choose_queue_family choose_qf_parmater{ my_queue_familys, user_choosed_q_create_infos };

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
            *allocation_callbacks,
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
            allocation_callbacks
        ));

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
        f.flag = result;
        return f;
    }

    VkResult Device::wait_for_fences(
        Array_value<VkFence> fences_,
        uint64_t timeout_,
        bool wait_all_)
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

    PFN_vkVoidFunction Device::return_api(const char* api_name_)
    {
        init_show;
        //show_function_name;
        auto ret = instance->api.vkGetDeviceProcAddr(handle, api_name_);

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
        shared_ptr<Instance> instance_,
        shared_ptr<Device_creator> device_creator_,
        vector<Physical_device*>& physical_devices_,
        vector<User_choose_queue_info>& queue_infos_,
        vector<S_queue_family_properties>& qf_properties_,
        VkDevice handle_,
        S_allocation_callbacks*const allocation_callbacks_)
        : instance(instance_)
        , handle(handle_)
        , device_creator(device_creator_)
        , physical_devices(physical_devices_)
        , allocation_callbacks(allocation_callbacks_)
        , queue_familys(qf_properties_.size())
    {
        init_show;

#define load_vk_device_api(api_name__) \
    api.api_name__ = (PFN_##api_name__)return_api(#api_name__);

        table_vk_api_device(load_vk_device_api ZK, , , YK FH);
        table_vk_api_cmd(load_vk_device_api ZK, , , YK FH);

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
        api.vkDestroyDevice(handle, *allocation_callbacks);
    }
#endif  /*  VkDevice  */

#if 1   /*  VkSurface  */

#endif  /*  VkSurface  */

#if 1   /*  VkSemaphore  */
    shared_ptr <Semaphore> Device::get_a_semaphore(
        N_semaphore_create_info next_/* = nullptr*/,
        S_allocation_callbacks*const  allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Semaphore> semaphore_sptr;
        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_semaphore_create_info info{
            0
        };
        info.set_pNext(next_);
        VkSemaphore semaphore_handle;
        auto ret = api.vkCreateSemaphore(handle, info, *allocator, &semaphore_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Semaphore失败");
            return semaphore_sptr;
        }
        semaphore_sptr.reset(new Semaphore(shared_from_this(), semaphore_handle, allocator));
        return semaphore_sptr;
    }

    Semaphore::Semaphore(
        shared_ptr<Device> device_,
        VkSemaphore handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Semaphore::~Semaphore()
    {
        init_show;
        show_function_name;
        device->api.vkDestroySemaphore(device->handle, handle, *allocation_callbacks);
    }
#endif  /*  VkSemaphore  */

#if 1   /*  VkFence  */
    shared_ptr <Fence> Device::get_a_fence(
        N_fence_create_info next_/* = nullptr*/,
        S_allocation_callbacks*const allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Fence> fence_sptr;
        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;
        S_fence_create_info info{
            F_fence_create::b_signaled
        };
        info.set_pNext(next_);
        VkFence fence_handle;
        auto ret = api.vkCreateFence(handle, info, *allocator, &fence_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Fence失败");
            return fence_sptr;
        }
        fence_sptr.reset(new Fence(shared_from_this(), fence_handle, allocator));

        return fence_sptr;
    }

    Fence::Fence(
        shared_ptr<Device> device_,
        VkFence handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {    }

    Fence::~Fence()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyFence(device->handle, handle, *allocation_callbacks);
    }

    VkResult Fence::reset()
    {
        auto ret = device->api.vkResetFences(device->handle, 1, &handle);
        show_result(ret);
        return ret;
    }
    VkResult Fence::reset(Array_value<VkFence> fences_)
    {
        auto ret = device->api.vkResetFences(
            device->handle,
            fences_.size(),
            fences_.data()
        );
        show_result(ret);
        return ret;
    }

    VkResult Fence::get_status()
    {
        auto ret = device->api.vkGetFenceStatus(device->handle, handle);
        show_result(ret);
        return ret;
    }

    VkResult Fence::wait(uint64_t timeout_)
    {
        auto ret = device->api.vkWaitForFences(
            device->handle,
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
        auto ret = device->api.vkWaitForFences(
            device->handle,
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
        S_allocation_callbacks*const allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Event> event_sptr;
        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_event_create_info info{
            0
        };

        VkEvent event_handle;
        auto ret = api.vkCreateEvent(handle, info, *allocator, &event_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Event失败");
            return event_sptr;
        }

        event_sptr.reset(new Event(shared_from_this(), event_handle, allocator));

        return event_sptr;
    }

    Event::Event(
        Device::Sptr device_,
        VkEvent handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Event::~Event()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyEvent(device->handle, handle, *allocation_callbacks);
    }

    VkResult Event::set()
    {
        auto ret = device->api.vkSetEvent(device->handle, handle);
        show_result(ret);
        return ret;
    }

    VkResult Event::get_event_status()
    {
        auto ret = device->api.vkGetEventStatus(device->handle, handle);
        show_result(ret);
        return ret;
    }

    void Event::reset()
    {
        device->api.vkResetEvent(device->handle, handle);
    }
#endif  /*  VkEvent  */

#if 1   /*  VkShaderModule  */
    shared_ptr<Shader_module> Device::get_a_shader_module(
        const uint32_t*     code_ptr_,
        size_t              code_size_,
        N_shader_module_create_info next_,
        S_allocation_callbacks*const allocator_)
    {
        shared_ptr<Shader_module> shader_module_sptr;
        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;
        init_show;
        if (code_size_ <= 0)
        {
            show_wrn("code size 不大于0");
            return shader_module_sptr;
        }
        S_shader_module_create_info info{
            0,
            code_size_,
            code_ptr_
        };
        info.set_pNext(next_);

        VkShaderModule shader_module_handle;

        auto ret = api.vkCreateShaderModule(
            handle,
            info,
            *allocator,
            &shader_module_handle
        );
        show_result(ret);
        if (ret < 0)
        {
            show_wrn("创建shader moudle 失败");
            return shader_module_sptr;
        }
        shader_module_sptr.reset(
            new Shader_module(
                shared_from_this(),
                shader_module_handle,
                allocator)
        );
        return shader_module_sptr;
    }

    Shader_module::Shader_module(
        Device::Sptr device_,
        VkShaderModule handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Shader_module::~Shader_module()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyShaderModule(device->handle, handle, *allocation_callbacks);
    }
#endif  /*  VkShaderModule  */

#if 1   /*  VkDeviceMemory  */
    shared_ptr<Device_memory> Device::get_a_device_memory(
        VkDeviceSize memory_size_,
        bool(*choose_memory_type_index_)(
            Pramater_choose_memory_type& pramater_choose_,
            Pramater_choose_result& choose_result_),
        N_memory_allocate_info next_ /* = nullptr */,
        S_allocation_callbacks*const allocator_ /* = default_allocation_cb */)
    {
        shared_ptr<Device_memory> device_memroy_sptr;

        init_show;
        if (physical_devices.size() == 0)
        {
            show_err("此逻辑设备没有保存创建时所用的物理设备");
            return device_memroy_sptr;
        }

        auto pdev_memory_properties = physical_devices[0]->get_memory_properties();
        Pramater_choose_memory_type memory_properties{
            pdev_memory_properties->memoryTypeCount,
            &pdev_memory_properties->memoryTypes[0]
        };
        Pramater_choose_result choose_result{ 0 };

        if (choose_memory_type_index_(memory_properties, choose_result) == false)
            return device_memroy_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_memory_allocate_info a_info{
            memory_size_,
            choose_result.memory_type_index
        };
        a_info.set_pNext(next_);
        VkDeviceMemory device_memory_handle;
        auto ret = api.vkAllocateMemory(
            handle, a_info, *allocator, &device_memory_handle);
        show_result(ret);
        if (ret < 0)
        {
            show_wrn("申请device memory 失败");
            return device_memroy_sptr;
        }
        device_memroy_sptr.reset(new Device_memory(
            shared_from_this(), device_memory_handle, allocator));

        return device_memroy_sptr;
    }

    Device_memory::Device_memory(
        Device::Sptr device_,
        VkDeviceMemory handle_,
        S_allocation_callbacks*const allocation_callbacks_)
        :device(device_)
        , handle(handle_)
        , allocation_callbacks(allocation_callbacks_)
    {   }

    Device_memory::~Device_memory()
    {
        init_show;
        show_function_name;
        device->api.vkFreeMemory(device->handle, handle, *allocation_callbacks);
    }

    VkDeviceSize Device_memory::get_commitment()
    {
        VkDeviceSize sult;

        device->api.vkGetDeviceMemoryCommitment(
            device->handle, handle, &sult);

        return sult;
    }

    void* Device_memory::map_memory(
        VkDeviceSize offset_,
        VkDeviceSize size_,
        VkMemoryMapFlags flags_)
    {
        void* p;
        auto ret = device->api.vkMapMemory(device->handle, handle, offset_, size_, flags_, &p);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_err("map memory失败");
            p = nullptr;
        }

        return p;
    }

    void Device_memory::unmap_memory()
    {
        init_show;
        show_function_name;
        device->api.vkUnmapMemory(device->handle, handle);
    }
#endif  /*  VkDeviceMemory  */

#if 1   /*  VkBuffer  */
    shared_ptr<Buffer> Device::get_a_buffer(
        VkDeviceSize        buffer_size_,
        F_buffer_create     create_flags_,
        F_buffer_usage        usage_flags_,
        E_sharing_mode        sharing_mode_,
        Array_value<uint32_t> queue_family_indices_,
        N_buffer_create_info next_ /*= {}*/,
        S_allocation_callbacks*const allocator_/* = default_allocator_cb*/)
    {
        shared_ptr<Buffer> buffer_sptr;
        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_buffer_create_info info{
            create_flags_,
            buffer_size_,
            usage_flags_,
            sharing_mode_,
            static_cast<uint32_t>(queue_family_indices_.size()),
            queue_family_indices_.data()
        };
        info.set_pNext(next_);

        VkBuffer buffer_handle;

        auto ret = api.vkCreateBuffer(
            handle,
            info,
            *allocator,
            &buffer_handle
        );
        show_result(ret);
        if (ret < 0) return buffer_sptr;

        buffer_sptr.reset(new Buffer(
            shared_from_this(),
            buffer_handle,
            allocator
        ));
        return buffer_sptr;
    }

    Buffer::Buffer(
        Device::Sptr device_,
        VkBuffer handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    { }

    Buffer::~Buffer()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyBuffer(
            device->handle,
            handle,
            *allocation_callbacks
        );
    }

    S_memory_requirements Buffer::get_memory_requirements()
    {
        S_memory_requirements sult;
        device->api.vkGetBufferMemoryRequirements(device->handle, handle, sult);
        return sult;
    }

    VkResult Buffer::bind(
        shared_ptr<Device_memory> device_memroy_,
        VkDeviceSize memory_offset_)
    {
        auto ret = device->api.vkBindBufferMemory(device->handle, handle, device_memroy_->handle, memory_offset_);
        show_result(ret);
        return ret;
    }

#endif  /*  VkBuffer  */

#if 1   /*  VkBufferView  */
    shared_ptr<Buffer_view> Buffer::get_a_buffer_view(
        E_format        format_,
        VkDeviceSize    offset_,
        VkDeviceSize    range_,
        S_allocation_callbacks*const allocator_/* =default_allocation_cb()*/)
    {
        shared_ptr<Buffer_view> buffer_view_sptr;

        S_buffer_view_create_info info{
            0,
            handle,
            format_,
            offset_,
            range_
        };
        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        VkBufferView buffer_view_handle;

        auto ret = device->api.vkCreateBufferView(
            device->handle,
            info,
            *allocator,
            &buffer_view_handle
        );

        show_result(ret);
        if (ret < 0)
        {
            init_show;
            show_wrn("创建 buffer view 失败");
            return buffer_view_sptr;
        }

        buffer_view_sptr.reset(new Buffer_view(
            shared_from_this(), buffer_view_handle, allocator));

        return buffer_view_sptr;
    }

    Buffer_view::Buffer_view(
        shared_ptr<Buffer> buffer_,
        VkBufferView handle_,
        S_allocation_callbacks*const allocator_)
        : buffer(buffer_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Buffer_view::~Buffer_view()
    {
        init_show;
        show_function_name;
        buffer->device->api.vkDestroyBufferView(
            buffer->device->handle, handle, *allocation_callbacks);
    }

#endif  /*  VkBufferView  */

#if 1   /*  VkImage  */
    shared_ptr<Image> Device::get_a_image(
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
        N_image_create_info     next_ /*= {}*/,
        S_allocation_callbacks*const allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Image> image_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_image_create_info info{
            create_fb_,
            imageType_,
            format_,
            extent_,
            mipLevels_,
            arrayLayers_,
            samples_,
            tiling_,
            usage_fb_,
            sharingMode_,
            static_cast<uint32_t>(queue_family_indices_.size()),
            queue_family_indices_.data(),
            initialLayout_
        };
        info.set_pNext(next_);

        VkImage image_handle;
        auto ret = api.vkCreateImage(handle, info, *allocator, &image_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建Image 失败");
            return image_sptr;
        }
        image_sptr.reset(
            new Image(shared_from_this(), image_handle, initialLayout_, allocator));

        return image_sptr;
    }

    Image::Image(
        Device::Sptr device_,
        VkImage handle_,
        E_image_layout layout_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , layout(layout_)
        , allocation_callbacks(allocator_)
    {   }

    Image::~Image()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyImage(device->handle, handle, *allocation_callbacks);
    }

    shared_ptr<vector<S_sparse_image_memory_requirements>>
        Image::get_sparse_memory_requirements()
    {
        shared_ptr<vector<S_sparse_image_memory_requirements>> sult(
            new vector<S_sparse_image_memory_requirements>);

        uint32_t count;
        device->api.vkGetImageSparseMemoryRequirements(
            device->handle, handle, &count, nullptr);

        sult->resize(count);

        device->api.vkGetImageSparseMemoryRequirements(
            device->handle, handle, &count, (*sult)[0]
        );

        return sult;
    }

    S_subresource_layout Image::get_subresource_layout(const S_image_subresource* subresource_)
    {
        S_subresource_layout sult;
        device->api.vkGetImageSubresourceLayout(device->handle, handle, *subresource_, sult);
        return sult;
    }

    S_memory_requirements Image::get_image_memory_requirements()
    {
        S_memory_requirements sult;
        device->api.vkGetImageMemoryRequirements(device->handle, handle, sult);
        return sult;
    }

    VkResult Image::bind(
        shared_ptr<Device_memory> device_memory_,
        VkDeviceSize memory_offset_)
    {
        auto ret = device->api.vkBindImageMemory(
            device->handle,
            handle,
            device_memory_->handle,
            memory_offset_
        );
        show_result(ret);
        return ret;
    }

#endif  /*  VkImage  */

#if 1   /*  VkImageView  */
    shared_ptr<Image_view> Image::get_a_image_view(
        E_image_view_type                view_type_,
        E_format                    format_,
        S_component_mapping         components_,
        S_image_subresource_range   subresourceRange_,
        N_image_view_create_info         next_ /*= {}*/,
        S_allocation_callbacks*const allocator_ /*= default_allocation_cb()*/)
    {
        shared_ptr<Image_view> image_view_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_image_view_create_info info{
            0,
            handle,
            view_type_,
            format_,
            components_,
            subresourceRange_
        };
        info.set_pNext(next_);

        VkImageView image_view_handle;
        auto ret = device->api.vkCreateImageView(
            device->handle,
            info,
            *allocator,
            &image_view_handle
        );
        show_result(ret);
        if (ret < 0)
        {
            init_show;
            show_wrn("创建 image view 失败");
            return image_view_sptr;
        }
        image_view_sptr.reset(new Image_view(
            shared_from_this(), image_view_handle, allocator));

        return image_view_sptr;
    }

    Image_view::Image_view(
        shared_ptr<Image> image_,
        VkImageView handle_,
        S_allocation_callbacks*const allocator_)
        : image(image_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    { }

    Image_view::~Image_view()
    {
        init_show;
        show_function_name;
        image->device->api.vkDestroyImageView(
            image->device->handle, handle, *allocation_callbacks);
    }

#endif  /*  VkImageView  */

#if 1   /*  VkSampler  */
    shared_ptr<Sampler> Device::get_a_sampler(
        E_filter                magFilter,
        E_filter                minFilter,
        E_sampler_mipmap_mode   mipmapMode,
        E_sampler_address_mode  addressModeU,
        E_sampler_address_mode  addressModeV,
        E_sampler_address_mode  addressModeW,
        float                   mipLodBias,
        VkBool32                anisotropyEnable,
        float                   maxAnisotropy,
        VkBool32                compareEnable,
        E_compare_op            compareOp,
        float                   minLod,
        float                   maxLod,
        E_border_color          borderColor,
        VkBool32                unnormalizedCoordinates,
        N_sampler_create_info   next_ /*= {}*/,
        S_allocation_callbacks*const allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Sampler> sampler_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_sampler_create_info info{
            0,
            magFilter,
            minFilter,
            mipmapMode,
            addressModeU,
            addressModeV,
            addressModeW,
            mipLodBias,
            anisotropyEnable,
            maxAnisotropy,
            compareEnable,
            compareOp,
            minLod,
            maxLod,
            borderColor,
            unnormalizedCoordinates
        };
        info.set_pNext(next_);

        VkSampler sampler_handle;
        auto ret = api.vkCreateSampler(handle, info, *allocator, &sampler_handle);
        show_result(ret);

        if (ret < 0) return sampler_sptr;

        sampler_sptr.reset(new Sampler(shared_from_this(), sampler_handle, allocator));

        return sampler_sptr;
    }

    Sampler::Sampler(
        Device::Sptr device_,
        VkSampler handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Sampler::~Sampler()
    {
        init_show;
        show_function_name;
        device->api.vkDestroySampler(device->handle, handle, *allocation_callbacks);
    }

#endif  /*  VkSampler  */

#if 1   /*  VkSamplerYcbcrConversion  */
    shared_ptr<Sampler_Ycbcr_conversion> Device::get_a_sampler_ycbcr_conversion(
        E_format                            format_,
        E_sampler_ycbcr_model_conversion    ycbcrModel,
        E_sampler_ycbcr_range               ycbcrRange,
        S_component_mapping             components,
        E_chroma_location               xChromaOffset,
        E_chroma_location               yChromaOffset,
        E_filter                        chromaFilter,
        VkBool32                        forceExplicitReconstruction,
        N_sampler_ycbcr_conversion_create_info next_ /*= {}*/,
        S_allocation_callbacks*const    allocator_/* = default_allocation_cb*/)
    {
        shared_ptr<Sampler_Ycbcr_conversion> sampler_ycbcr_conversion_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_sampler_ycbcr_conversion_create_info info{
            format_,
            ycbcrModel,
            ycbcrRange,
            components,
            xChromaOffset,
            yChromaOffset,
            chromaFilter,
            forceExplicitReconstruction
        };
        info.set_pNext(next_);

        VkSamplerYcbcrConversion sampler_handle;
        auto ret = api.vkCreateSamplerYcbcrConversion(
            handle, info, *allocator, &sampler_handle);
        show_result(ret);

        if (ret < 0) return sampler_ycbcr_conversion_sptr;

        sampler_ycbcr_conversion_sptr.reset(new Sampler_Ycbcr_conversion(
            shared_from_this(), sampler_handle, allocator));

        return sampler_ycbcr_conversion_sptr;
    }

    Sampler_Ycbcr_conversion::Sampler_Ycbcr_conversion(
        shared_ptr<Device> device_,
        VkSamplerYcbcrConversion handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Sampler_Ycbcr_conversion::~Sampler_Ycbcr_conversion()
    {
        init_show;
        show_function_name;
        device->api.vkDestroySamplerYcbcrConversion(device->handle, handle, *allocation_callbacks);
    }


#endif  /*  VkSamplerYcbcrConversion  */

#if 1   /*  VkDescriptorSetLayout  */
    shared_ptr<Descriptor_set_layout> Device::get_a_descriptor_set_layout(
        F_descriptor_set_layout_create                  flags_,
        Array_value<S_descriptor_set_layout_binding>    bindings_ /*= {}*/,
        N_descriptor_set_layout_create_info             next_ /*= {}*/,
        S_allocation_callbacks*const allocator_ /*= default_allocation_cb()*/)
    {
        shared_ptr<Descriptor_set_layout> descriptor_set_layout_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        uint32_t size = bindings_.size();

        S_descriptor_set_layout_create_info info{
            flags_,
            size,
            bindings_.data()
        };
        info.set_pNext(next_);
        /*
        此处可以使用vkGetDescriptorSetLayoutSupport 检查是否能够创建
        */

        VkDescriptorSetLayout descriptor_set_layout_handle;
        auto ret = api.vkCreateDescriptorSetLayout(
            handle, info, *allocator, &descriptor_set_layout_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建 descriptor setlayout 失败");
            return descriptor_set_layout_sptr;
        }
        descriptor_set_layout_sptr.reset(
            new Descriptor_set_layout(shared_from_this(), descriptor_set_layout_handle, allocator));
        return descriptor_set_layout_sptr;
    }

    Descriptor_set_layout::Descriptor_set_layout(
        shared_ptr<Device> device_,
        VkDescriptorSetLayout handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Descriptor_set_layout::~Descriptor_set_layout()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyDescriptorSetLayout(
            device->handle, handle, *allocation_callbacks);
    }

#endif  /*  VkDescriptorSetLayout  */

#if 1   /*  VkQueryPool  */
    shared_ptr<Query_pool> Device::get_a_query_pool(
        E_query_type                query_type,
        uint32_t                    query_count,
        F_query_pipeline_statistic  queue_pipeline_statistic_flags_,
        S_allocation_callbacks*const allocator_ /*= default_allocation_cb()*/)
    {
        shared_ptr<Query_pool> query_pool_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_query_pool_create_info info{
            0,
            query_type,
            query_count,
            queue_pipeline_statistic_flags_
        };

        VkQueryPool query_pool_handle;
        auto ret = api.vkCreateQueryPool(
            handle, info, *allocator, &query_pool_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建 Query pool 失败");
            return query_pool_sptr;
        }

        query_pool_sptr.reset(
            new Query_pool(shared_from_this(), query_pool_handle, allocator));

        return query_pool_sptr;
    }

    Query_pool::Query_pool(
        shared_ptr<Device> device_,
        VkQueryPool handle_,
        S_allocation_callbacks*const  allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Query_pool::~Query_pool()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyQueryPool(device->handle, handle, *allocation_callbacks);
    }

    VkResult Query_pool::get_results(
        uint32_t        firstQuery_,
        uint32_t        queryCount_,
        size_t          dataSize_,
        void*           pData_,
        VkDeviceSize    stride_,
        F_query_result  flags_)
    {
        auto ret = device->api.vkGetQueryPoolResults(
            device->handle,
            handle,
            firstQuery_, queryCount_, dataSize_, pData_, stride_, flags_);
        show_result(ret);

        return ret;
    }

#endif  /*  VkQueryPool  */

#if 1   /*  VkFrameBuffer  */
    shared_ptr<Frame_buffer> Render_pass::get_a_frame_buffer(
        Array_value<VkImageView> attachments_,
        uint32_t width_,
        uint32_t height_,
        uint32_t layers_,
        S_allocation_callbacks*const allocator_ /*= default_allocation_cb()*/)
    {
        shared_ptr<Frame_buffer> frame_buffer_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_framebuffer_create_info info{
            0,
            handle,
            attachments_.size(),
            attachments_.data(),
            width_,
            height_,
            layers_
        };

        VkFramebuffer frame_buffer_handle;
        auto ret = device->api.vkCreateFramebuffer(
            device->handle, info, *allocator, &frame_buffer_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建 frame buffer 失败");
            return frame_buffer_sptr;
        }
        frame_buffer_sptr.reset(
            new Frame_buffer(shared_from_this(), frame_buffer_handle, allocator));

        return frame_buffer_sptr;
    }

    Frame_buffer::Frame_buffer(
        shared_ptr<Render_pass> render_pass_,
        VkFramebuffer handle_,
        S_allocation_callbacks*const allocator_)
        : render_pass(render_pass_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Frame_buffer::~Frame_buffer()
    {
        init_show;
        show_function_name;
        render_pass->device->api.vkDestroyFramebuffer(
            render_pass->device->handle, handle, *allocation_callbacks);
    }

#endif  /*  VkFrameBuffer  */

#if 1   /*  VkRenderPass  */
    shared_ptr<Render_pass> Device::get_a_render_pass(
        Array_value<S_attachment_description>   attachments /*= {}*/,
        Array_value<S_subpass_description>      subpasses /*= {}*/,
        Array_value<S_subpass_dependency>       dependencies /*= {}*/,
        N_render_pass_create_info               next_ /*= {}*/,
        S_allocation_callbacks*const allocator_ /*= default_allocation_cb()*/)
    {
        shared_ptr<Render_pass> render_pass_sptr;

        auto allocator = allocator_ == default_allocation_cb() ?
            allocation_callbacks : allocator_;

        S_render_pass_create_info info{
            0,
            attachments.size(),
            attachments.data(),

            subpasses.size(),
            subpasses.data(),

            dependencies.size(),
            dependencies.data(),
        };
        info.set_pNext(next_);

        VkRenderPass render_pass_handle;
        auto ret = api.vkCreateRenderPass(
            handle, info, *allocator, &render_pass_handle);
        show_result(ret);

        if (ret < 0)
        {
            init_show;
            show_wrn("创建 render pass 失败");
            return render_pass_sptr;
        }
        render_pass_sptr.reset(
            new Render_pass(shared_from_this(), render_pass_handle, allocator));

        return render_pass_sptr;
    }

    Render_pass::Render_pass(
        shared_ptr<Device> device_,
        VkRenderPass handle_,
        S_allocation_callbacks*const allocator_)
        : device(device_)
        , handle(handle_)
        , allocation_callbacks(allocator_)
    {   }

    Render_pass::~Render_pass()
    {
        init_show;
        show_function_name;
        device->api.vkDestroyRenderPass(device->handle, handle, *allocation_callbacks);
    }

    S_extent_2d Render_pass::get_area_granularity()
    {
        S_extent_2d sult;
        device->api.vkGetRenderAreaGranularity(device->handle, handle, sult);
        return sult;
    }

#endif  /*  VkRenderPass  */










}}
