/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#include "vk.h"

using namespace std;

namespace laka { namespace vk {
    
    static Module_handle vk_module_handle = load_module_must("vulkan-1.dll");
    Module_handle get_vk_module()
    {
        return vk_module_handle;
    }
    static auto vkGetInstanceProcAddr = 
        (PFN_vkGetInstanceProcAddr)load_module_function_must(
            vk_module_handle,
            "vkGetInstanceProcAddr"
        );
    PFN_vkVoidFunction get_instance_proc_address(
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

    S_allocation_callbacks* default_allocation_cb()
    {
        return &acb;
    }

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

    Instance::Instance(
        VkInstance handle_, 
        S_allocation_callbacks* allocator_callbacks_ptr_)
        :handle(handle_)
        ,allocator_callbacks_ptr(&allocator_callbacks)
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


    Instance::Sptr Instance::get_new(
        Array_value<const char*> enabled_extension_names_ /*= {}*/,
        uint32_t                api_version_ /*= VK_MAKE_VERSION(1, 1, 82)*/,
        N_instance_create_info  next_ /*= {}*/,
        S_allocation_callbacks*const allocator_ /*= nullptr*/,
        Array_value<const char*>enabled_layer_names_ /*= {}*/,
        const char*             app_name_ /*= "laka::vk"*/,
        uint32_t                app_version_ /*= VK_MAKE_VERSION(0, 0, 1)*/,
        const char*             engine_name_ /*= "laka::vk::engine"*/,
        uint32_t                engine_version_ /*= VK_MAKE_VERSION(0, 0, 1)*/ )
    {
        Sptr sptr;

        VkApplicationInfo app_info{
            VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
            nullptr,
            app_name_,
            app_version_,
            engine_name_,
            engine_version_,
            api_version_
        };

        VkInstanceCreateInfo info{
            VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
            next_,
            0,
            &app_info,
            static_cast<uint32_t>(enabled_layer_names_.size()),
            enabled_layer_names_.data(),
            static_cast<uint32_t>(enabled_extension_names_.size()),
            enabled_extension_names_.data()
        };

        VkInstance this_handle;
        auto ret = vkCreateInstance(&info, *allocator_, &this_handle);
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

    Instance::~Instance()
    {
        init_show;
        show_function_name;
        api.vkDestroyInstance(handle, *allocator_callbacks_ptr);
    }

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
                allocator_ == &acb? &allocator_callbacks: allocator_)
        );
        return sptr;
    }


#define static_declare_load_vk_api(api_name__) \
    static auto api_name__ = \
    (PFN_ ## api_name__)return_vk_api_must(#api_name__);

    table_vk_api_global(static_declare_load_vk_api ZK, , , YK);

#define assert_ret(show_some_thing__) \
    show_debug("{0}:{1}",mean(ret)->c_str(),#show_some_thing__);\
    assert(ret>=0 && #show_some_thing__);

#define load_vk_array_ret(handle__,function__,type__,array__,...) \
    count = 0; \
    ret = function__(handle__,&count,nullptr);\
    show_result(ret);if_show(count>0,__VA_ARGS__);\
    array__.resize(count);\
    if(count>0)\
    {\
        ret = function__(handle__,&count,(type__*)(&array__[0]) );\
        show_result(ret);\
    }

#define load_vk_array(handle__,function__,type__,array__,...) \
    count = 0; \
    function__(handle__,&count,nullptr);\
    if_show(count>0,__VA_ARGS__);\
    array__.resize(count);\
    if(count>0)\
    {\
        function__(handle__,&count,(type__*)(&array__[0]) );\
    }\

    shared_ptr<vector<S_layer_properties>> Physical_device::get_layer_propertiess()
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
    S_allocation_callbacks ssss{nullptr,nullptr ,nullptr ,nullptr ,nullptr ,nullptr };


    shared_ptr<S_physical_device_features>  Physical_device::get_features()
    {

        shared_ptr<S_physical_device_features> sptr(new S_physical_device_features);
        instance->api.vkGetPhysicalDeviceFeatures(
            handle, (VkPhysicalDeviceFeatures*)sptr.get() );
        return sptr;
    }

    shared_ptr<S_physical_device_properties>    Physical_device::get_properties()
    {
        shared_ptr<S_physical_device_properties> sptr(new S_physical_device_properties);
        instance->api.vkGetPhysicalDeviceProperties(
            handle, (VkPhysicalDeviceProperties*)sptr.get());
        return sptr;
    }

    shared_ptr<S_physical_device_memory_properties> Physical_device::get_memory_properties()
    {
        shared_ptr<S_physical_device_memory_properties> sptr(new S_physical_device_memory_properties);
        instance->api.vkGetPhysicalDeviceMemoryProperties(
            handle, (VkPhysicalDeviceMemoryProperties*)sptr.get());
        return sptr;
    }

    shared_ptr<vector<S_queue_family_properties>>   Physical_device::get_queue_family_properties()
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

    shared_ptr<S_format_properties>  Physical_device::get_format_properties(E_format format_)
    {
        shared_ptr<S_format_properties> sptr(new S_format_properties);
        instance->api.vkGetPhysicalDeviceFormatProperties(
            handle,
            (VkFormat)format_,
            (VkFormatProperties*)sptr.get()
        );
        return sptr;
    }

    shared_ptr<S_external_buffer_properties>  Physical_device::get_external_buffer_properties(
            F_buffer_create c_flags_,
            F_buffer_usage    u_flags_,
            F_external_memory_handle_type    handle_type_)
    {
        shared_ptr<S_external_buffer_properties> sptr(new S_external_buffer_properties);

        VkPhysicalDeviceExternalBufferInfo external_buffer_info_{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,
            nullptr,
            c_flags_,
            u_flags_,
            handle_type_.get_vkfb()
        };
        instance->api.vkGetPhysicalDeviceExternalBufferProperties(
            handle,
            &external_buffer_info_,
            (VkExternalBufferProperties*)sptr.get()
        );
        return sptr;
    }

    shared_ptr<S_external_fence_properties>
        Physical_device::get_external_fence_properties(
            F_external_fence_handle_type    handle_type_)
    {
        shared_ptr<S_external_fence_properties> sptr(new S_external_fence_properties);

        VkPhysicalDeviceExternalFenceInfo external_fence_info{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,
            nullptr,
            handle_type_.get_vkfb()
        };
        instance->api.vkGetPhysicalDeviceExternalFenceProperties(
            handle,
            &external_fence_info,
            *sptr
        );
        return sptr;
    }

    shared_ptr<S_external_semaphore_properties>
        Physical_device::get_external_semphore_properties(
            F_external_semaphore_handle_type    handle_type_)
    {
        shared_ptr<S_external_semaphore_properties> sptr(new S_external_semaphore_properties);

        VkPhysicalDeviceExternalSemaphoreInfo external_semaphore_info{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,
            nullptr,
            handle_type_.get_vkfb()
        };
        instance->api.vkGetPhysicalDeviceExternalSemaphoreProperties(
            handle,
            &external_semaphore_info,
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
            N_image_format_properties2  next_)
    {
        shared_ptr<S_image_format_properties2> sptr(new S_image_format_properties2);

        VkPhysicalDeviceImageFormatInfo2 image_format_info{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2,
            next_,
            format_,
            type_,
            tiling_,
            usage_,
            flags_
        };
        instance->api.vkGetPhysicalDeviceImageFormatProperties2(
            handle,
            &image_format_info,
            *sptr
        );
        return sptr;
    }



}}