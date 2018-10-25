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

#include "common.h"
#include "laka_vk_define.h"
#include "types.h"



namespace laka { namespace vk {
#include "classes.h"

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
            Array_value<const char*> enabled_extension_names_ = {},
            uint32_t                api_version_ = VK_MAKE_VERSION(1, 1, 82),
            N_instance_create_info  next_ = {},
            S_allocation_callbacks*const allocator_ = nullptr,
            Array_value<const char*>enabled_layer_names_ = {},
            const char*             app_name_ = "laka::vk",
            uint32_t                app_version_ = VK_MAKE_VERSION(0, 0, 1),
            const char*             engine_name_ = "laka::vk::engine",
            uint32_t                engine_version_ = VK_MAKE_VERSION(0, 0, 1));

        std::shared_ptr<Device_creator> get_a_device_creator(
            bool(*choose_physical_device_)(Pramater_choose_physical_device& pramater_),
            bool(*choose_queue_family_)(Pramater_choose_queue_family& pramater_),
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        const VkInstance                    handle;
        S_allocation_callbacks*const        allocator_callbacks_ptr;
        std::vector<Physical_device_group>  physical_device_groups;
        std::vector<Physical_device>        physical_devices;

        struct Api {
            table_vk_api_instance(vk_fun ZK, , , YK FH);
            table_vk_api_physical_device(vk_fun ZK, , , YK FH);
            table_vk_api_physical_device_khr(vk_fun ZK, , , YK FH);
        }api;
    private:
        Instance(
            VkInstance              handle_,
            S_allocation_callbacks*const allocator_callbacks_ptr_);

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
            get_external_buffer_properties(
                F_buffer_create c_flags_,
                F_buffer_usage    u_flags_,
                F_external_memory_handle_type handle_type_);

        std::shared_ptr<S_external_fence_properties>
            get_external_fence_properties(
                F_external_fence_handle_type    handle_type_);

        std::shared_ptr<S_external_semaphore_properties>
            get_external_semphore_properties(
                F_external_semaphore_handle_type    handle_type_);

        std::shared_ptr<S_image_format_properties2>
            get_image_format_properties(
                const S_physical_device_image_format_info2& info_);

        std::shared_ptr<S_image_format_properties2>
            get_image_format_properties(
                E_format        format_,
                E_image_type    type_,
                E_image_tiling  tiling_,
                F_image_usage   usage_,
                F_image_create  flags_,
                N_physical_device_image_format_info2  next_);

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

    class Queue {
    public:
        VkResult wait_idle();
        //...
        VkResult submit(
            Array_value<S_submit_info>& pSubmitInfo_,
            Fence&                      fence_);
        //...
        VkResult bind_sparse(
            Array_value<S_bind_sparse_info>&    pBindInfo_,
            Fence&                              fence_);

        //VkDevice device_handle;
        VkQueue handle;
        uint32_t index;
        uint32_t family_index;

        Device_api* api;
    };

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



}}