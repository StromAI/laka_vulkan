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
	static auto vk_module_handle = load_module_must("vulkan-1.dll");
	Module_handle get_module()
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

	PFN_vkVoidFunction return_vk_api(const char* function_name_)
	{
		return return_vk_api(function_name_, []() {});
	}
	PFN_vkVoidFunction return_vk_api(VkInstance instance_, const char* function_name_)
	{
		return return_vk_api(instance_, function_name_, []() {});
	}

	PFN_vkVoidFunction return_vk_api_must(const char* function_name_)
	{
		return return_vk_api(function_name_, []() {abort(); });
	}
	PFN_vkVoidFunction return_vk_api_must(VkInstance instance_, const char* function_name_)
	{
		return return_vk_api(instance_, function_name_, []() {abort(); });
	}

#define static_declare_load_vk_api(api_name__) \
    static auto api_name__ = \
    (PFN_ ## api_name__)return_vk_api_must(#api_name__);

	table_vk_api_global(static_declare_load_vk_api ZK, , , YK);

#define assert_ret(show_some_thing__) \
    show_debug("{0}:{1}",mean(ret)->c_str(),#show_some_thing__);\
    assert(ret>=0 && #show_some_thing__);

	uint32_t get_instance_version()
	{
		init_show;

		uint32_t version;
		auto ret = vkEnumerateInstanceVersion(&version);
		if (ret < 0)
		{
			show_debug("�޷���ȡʵ���汾");
			return 0;
		}
		return version;
	}

	VkAllocationCallbacks* default_allocation_cb()
	{
		static VkAllocationCallbacks cb;
		return &cb;
	}

	class Layer_properties {
	public:
		Layer_properties()
		{
			init_show;

			uint32_t count;
			auto ret = vkEnumerateInstanceLayerProperties(&count, nullptr);
			show_result(ret);
			if_show(count >= 0, "vulkan֧�ֵĲ������Ϊ:{}", count);

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
				if_show(count >= 0, "{0}����չ��������:{1}",
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

				show_debug("{0}��������չ:", layer_properties.properties[i].layerName);

				for (auto& x : layer_properties.layer_extension_properties[i])
				{
					show_debug("\t{}", x.extensionName);
				}
			}

			uint32_t count = 0;
			auto ret = vkEnumerateInstanceExtensionProperties(
				nullptr, &count, nullptr);
			show_result(ret);
			if_show(count >= 0, "����չ��������:{}", count);

			properties.resize(count);
			if (count > 0)
			{
				ret = vkEnumerateInstanceExtensionProperties(
					nullptr, &count, &properties[0]);
				show_result(ret);
			}

			show_debug("������չ����:");
			for (auto& itr : properties)
			{
				show_debug("\t����:{} �汾:{}", itr.extensionName, itr.specVersion);
			}
		}

		vector<VkExtensionProperties> properties;
	};

	static Extension_properties extension_properties;

	Instance::Instance(
		VkInstance handle_, VkAllocationCallbacks* allocator_callbacks_ptr_)
		:handle(handle_)
	{
		init_show;

		if (allocator_callbacks_ptr_ != nullptr)
		{
			allocator_callbacks = *allocator_callbacks_ptr_;
			allocator_callbacks_ptr = &allocator_callbacks;
		}
		else
		{
			allocator_callbacks_ptr = nullptr;
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
		show_debug("�����豸����:{}", count);
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
					"�豸{0}  api�汾:{1} �����汾:{2}",
					pd_info->deviceName,
					version_str(pd_info->apiVersion),
					version_str(pd_info->driverVersion)
				);
			}
		}
		else
		{
			show_wrn("û��ö�ٵ������豸");
		}

		count = 0;
		ret = api.vkEnumeratePhysicalDeviceGroups(handle, &count, nullptr);
		show_result(ret);
		show_debug("�豸������:{}", count);

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

				for (int j = 0; j < current_pg_ppt.physicalDeviceCount; j++)
				{
					auto& handle_temp = current_pg_ppt.physicalDevices[j];
					show_debug("�����豸���� ������ֵ:{}", (void*)handle_temp);

					Physical_device* physical_device_ptr = nullptr;
					int x = 0;
					for (auto&& current_physical_device : physical_devices)
					{
						if (current_physical_device.handle == handle_temp)
						{
							physical_device_ptr = &physical_devices[x];
							break;
						}
						x++;
					}

					if (physical_device_ptr != nullptr)
					{
						current_group.physical_devices[i] = physical_device_ptr;
					}
					else
					{
						show_err("!!!!!!!!!!!���豸���е������豸�ľ�� ��ö��ȫ���豸�ľ����һ��");
					}
				}
				++i;
			}
		}
		else {
			show_wrn("û��ö�ٳ��豸��");
		}
	}

	Instance::Sptr Instance::get_new(
		Array_value<const char*> enabled_extension_names_ /* = {}*/,
		uint32_t api_version_/* = VK_MAKE_VERSION(1, 1, 82)*/,
		const void* next_/* = nullptr*/,
		VkAllocationCallbacks* allocator_/* = nullptr*/,
		Array_value<const char*> enabled_layer_names_ /* = {}*/,
		const char* app_name_/* = "laka::vk"*/,
		uint32_t app_version_/* = VK_MAKE_VERSION(0, 0, 1)*/,
		const char* engine_name_/* = "laka::vk::engine"*/,
		uint32_t engine_version_/* = VK_MAKE_VERSION(0, 0, 1)*/)
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
		auto ret = vkCreateInstance(&info, allocator_, &this_handle);
		show_result(ret);
		if (ret < 0)
		{
			init_show;
			show_wrn("����Instanceʧ��");
			return sptr;
		}

		sptr.reset(new Instance(this_handle, allocator_));

		return sptr;
	}

	Instance::~Instance()
	{
		init_show;
		show_function_name;
		api.vkDestroyInstance(handle, allocator_callbacks_ptr);
	}

#define load_vk_array_ret(handle__,function__,array__,...) \
    count = 0; \
    ret = function__(handle__,&count,nullptr);\
    show_result(ret);if_show(count>0,__VA_ARGS__);\
	array__.resize(count);\
    if(count>0)\
    {\
        ret = function__(handle__,&count,&array__[0]);\
        show_result(ret);\
    }

#define load_vk_array(handle__,function__,array__,...) \
    count = 0; \
    function__(handle__,&count,nullptr);\
    if_show(count>0,__VA_ARGS__);\
	array__.resize(count);\
    if(count>0)\
    {\
        function__(handle__,&count,&array__[0]);\
    }\

	shared_ptr<vector<VkLayerProperties>>
		Physical_device::get_layer_propertiess()
	{
		init_show;
		uint32_t count; VkResult ret;
		auto& array_ref = *new vector<VkLayerProperties>;
		shared_ptr<vector<VkLayerProperties>> sptr(&array_ref);

		load_vk_array_ret(
			handle,
			instance->api.vkEnumerateDeviceLayerProperties,
			array_ref,
			"�����豸 {0} �Ĳ���Ϊ {1}", (void*)handle, count
		);

		return sptr;
	}

	shared_ptr<vector<VkSparseImageFormatProperties2>>
		Physical_device::get_sparse_image_format_properties(
			const VkPhysicalDeviceSparseImageFormatInfo2* format_info_)
	{
		init_show;
		
		shared_ptr<vector<VkSparseImageFormatProperties2>> sptr(new vector<VkSparseImageFormatProperties2>);
		uint32_t count = 0;
		load_vk_array(
			handle DH format_info_,
			instance->api.vkGetPhysicalDeviceSparseImageFormatProperties2,
			(*sptr),
			"�����豸 {0} ��ϡ��ͼ���ʽ���� ����Ϊ:{1}", (void*)handle, count
		);

		return sptr;
	}

	shared_ptr<vector<VkQueueFamilyProperties>>
		Physical_device::get_queue_family_properties()
	{
		init_show;
		auto& array = *new vector<VkQueueFamilyProperties>;
		shared_ptr<vector<VkQueueFamilyProperties>> sptr(&array);
		uint32_t count = 0;
		load_vk_array(
			handle,
			instance->api.vkGetPhysicalDeviceQueueFamilyProperties,
			array,
			"�����豸 {0} �Ķ���������Ϊ {1}", (void*)handle, count
		);
		return sptr;
	}

	shared_ptr<vector<VkExtensionProperties>>
		Physical_device::get_extension_properties(const char* layer_name_)
	{
		init_show;
		auto& array = *new vector<VkExtensionProperties>;
		shared_ptr<vector<VkExtensionProperties>> sptr(&array);
		uint32_t count = 0;
		VkResult ret;

		load_vk_array_ret(
			handle DH layer_name_,
			instance->api.vkEnumerateDeviceExtensionProperties,
			array,
			"�����豸 {0} ����չ������Ϊ {1}", (void*)handle, count
		);

		return sptr;
	}

	shared_ptr<VkPhysicalDeviceFeatures>
		Physical_device::get_features()
	{
		auto& array = *new VkPhysicalDeviceFeatures;
		shared_ptr<VkPhysicalDeviceFeatures> sptr(&array);

		instance->api.vkGetPhysicalDeviceFeatures(handle, &array);

		return sptr;
	}

	shared_ptr<VkPhysicalDeviceProperties>
		Physical_device::get_properties()
	{
		shared_ptr<VkPhysicalDeviceProperties> sptr(new VkPhysicalDeviceProperties);

		instance->api.vkGetPhysicalDeviceProperties(handle, sptr.get() );

		return sptr;
	}

	shared_ptr<VkPhysicalDeviceMemoryProperties>
		Physical_device::get_memory_properties()
	{
		shared_ptr<VkPhysicalDeviceMemoryProperties> sptr(new VkPhysicalDeviceMemoryProperties);

		instance->api.vkGetPhysicalDeviceMemoryProperties(handle, sptr.get() );

		return sptr;
	}

	shared_ptr<VkFormatProperties>
		Physical_device::get_format_properties(VkFormat format_)
	{
		auto& array = *new VkFormatProperties;
		shared_ptr<VkFormatProperties> sptr(&array);

		instance->api.vkGetPhysicalDeviceFormatProperties(
			handle,
			format_,
			&array
		);

		return sptr;
	}

	shared_ptr<VkExternalBufferProperties>
        Physical_device::get_external_buffer_properties(
            F_buffer_create c_flags_,
            F_buffer_usage	u_flags_,
            F_external_memory_handle_type	handle_type_)
	{
		shared_ptr<VkExternalBufferProperties> sptr(new VkExternalBufferProperties);

		VkPhysicalDeviceExternalBufferInfo external_buffer_info_{
			VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,
			nullptr,
			c_flags_,
			u_flags_,
			handle_type_.get()
		};

		instance->api.vkGetPhysicalDeviceExternalBufferProperties(
			handle,
			&external_buffer_info_,
			sptr.get()
		);
		return sptr;
	}

	shared_ptr<VkExternalFenceProperties>
		Physical_device::get_external_fence_properties(
			VkExternalFenceHandleTypeFlagBits    handle_type_)
	{
		shared_ptr<VkExternalFenceProperties> sptr(new VkExternalFenceProperties);

		VkPhysicalDeviceExternalFenceInfo external_fence_info{
			VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,
			nullptr,
			handle_type_
		};

		instance->api.vkGetPhysicalDeviceExternalFenceProperties(
			handle,
			&external_fence_info,
			sptr.get()
		);

		return sptr;
	}

	shared_ptr<VkExternalSemaphoreProperties>
		Physical_device::get_external_semphore_properties(
			VkExternalSemaphoreHandleTypeFlagBits    handle_type_)
	{
		shared_ptr<VkExternalSemaphoreProperties> sptr(new VkExternalSemaphoreProperties);

		VkPhysicalDeviceExternalSemaphoreInfo external_semaphore_info{
			VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,
			nullptr,
			handle_type_
		};

		instance->api.vkGetPhysicalDeviceExternalSemaphoreProperties(
			handle,
			&external_semaphore_info,
			sptr.get()
		);

		return sptr;
	}

	shared_ptr<VkImageFormatProperties2>
		Physical_device::get_image_format_properties(
			VkFormat                                    format_,
			VkImageType                                 type_,
			VkImageTiling                               tiling_,
			VkImageUsageFlags                           usage_,
			VkImageCreateFlags                          flags_,
			void*										next_)
	{
		shared_ptr<VkImageFormatProperties2> sptr(new VkImageFormatProperties2);

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
			sptr.get()
		);

		return sptr;
	}

	shared_ptr<Device_creator> Instance::get_a_device_creator(
		bool(*choose_physical_device_)(Pramater_choose_physical_device& pramater_),
		bool(*choose_queue_family_)(Pramater_choose_queue_family& pramater_),
		VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		if (allocator_ == default_allocation_cb()) allocator_ = &allocator_callbacks;

		shared_ptr<Device_creator> sptr(
			new Device_creator(
				shared_from_this(),
				choose_physical_device_,
				choose_queue_family_,
				allocator_)
		);

		return sptr;
	}

	Device_creator::Device_creator(
		shared_ptr<Instance> instance_,
		bool(*choose_physical_device_)(Pramater_choose_physical_device& physical_device_),
		bool(*choose_queue_family_)(Pramater_choose_queue_family& parmatwr_),
		const VkAllocationCallbacks* allocator_)
		:instance(instance_)
		, choose_physical_device_function(choose_physical_device_)
		, choose_queue_family_function(choose_queue_family_)
		, allocation_callbacks(allocator_ == nullptr ? instance_->allocator_callbacks_ptr : allocator_)
	{   }

	PFN_vkVoidFunction Device::return_api(const char* api_name_)
	{
		init_show;
		//show_function_name;
		auto ret = instance->api.vkGetDeviceProcAddr(handle, api_name_);

		if (ret == nullptr)
		{
			show_wrn("����{}ʧ��", api_name_);
		}
		else
		{
			show_debug("����{}�ɹ�", api_name_);
		}
		return ret;
	}

	Device::Device(
		shared_ptr<Instance> instance_,
		shared_ptr<Device_creator> device_creator_,
		vector<Physical_device*>& physical_devices_,
		vector<User_choose_queue_info>& queue_infos_,
		vector<VkQueueFamilyProperties>& qf_properties_,
		VkDevice handle_,
		const VkAllocationCallbacks* allocation_callbacks_)
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
			show_wrn("�û�û�и���������Ϣ");
			return;
		}

		//��дqueue_familys	������������Ϊi ��ô����д��queue_familys[i].
			//û���õ���qf���� ��Ӧ��λ��queues.size()Ϊ0

		for (size_t i = 0; i < qf_properties_.size(); ++i)
		{
			queue_familys[i].properties = qf_properties_[i];
			queue_familys[i].qf_index = static_cast<uint32_t>(i);
		}

		//����queue_infos_�е�Ԫ�� �������index�����ظ� ��Ļ�Ҳ��֪��vk����ô����.������.
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
		api.vkDestroyDevice(handle, allocation_callbacks);
	}

	//Ҫ����������Ϣ�����豸������.

	shared_ptr<Device> Device_creator::get_a_device(
		Physical_device& physical_device_,
		VkDeviceCreateInfo& create_info_)
	{
		init_show;
		shared_ptr<Device> device_sptr;

		Pramater_choose_physical_device p1{ physical_device_ };
		if (choose_physical_device_function(p1) == false)
			return device_sptr;

		VkDevice device_handle;
		auto ret = instance->api.vkCreateDevice(
			physical_device_.handle,
			&create_info_,
			allocation_callbacks,
			&device_handle
		);
		show_result(ret);
		if (ret < 0) return device_sptr;

		vector<Physical_device*> pds;
		//�������pnext �ҳ����������豸ָ��Ž�ȥ.
			//������:���pNext�ظ�������ͬ���͵���չ�ṹ vk����δ���?

		//����������Ϣ �Ž�ȥ.
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
		VkPhysicalDeviceFeatures* features_ /* = nullptr */)
	{
		init_show;
		shared_ptr<Device> device_sptr;

		Pramater_choose_physical_device p1{ physical_device_ };
		if (choose_physical_device_function(p1) == false)
		{
			show_wrn("���豸������");
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
			show_wrn("���豸û�к��ʵĶ�����");
			return device_sptr;
		}

		show_debug("��������create_info");
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
				user_choosed_q_create_infos[i].create_flags,
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
			features_
		};
		auto ret = instance->api.vkCreateDevice(
			physical_device_.handle,
			&device_create_info,
			allocation_callbacks,
			&device_handle
		);
		show_result(ret);
		if (ret < 0)
		{
			show_wrn("�����豸ʧ��");
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
		VkPhysicalDeviceFeatures* features_ /* = nullptr */)
	{
		init_show;
		show_debug("���豸�鴴���߼��豸");

		shared_ptr<Device> device_sptr;

		list<Physical_device*> ok_physical_device_list;
		for (auto&& physical_device : physica_device_group_.physical_devices)
		{
			Pramater_choose_physical_device p1{ *physical_device };
			if (choose_physical_device_function(p1) == false)
			{
				show_wrn("һ���豸������:{}", (void*)p1.if_you_feel_the_physical_device_not_ok_so_return_false.handle);
				continue;
			}
			ok_physical_device_list.push_back(physical_device);
		}
		if (ok_physical_device_list.size() <= 0)
		{
			show_wrn("û�к��ʵ��豸");
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
			show_wrn("�û�û��ѡ�������");
			return device_sptr;
		}

		VkDeviceGroupDeviceCreateInfo device_group_create_info = {
			VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,
			nullptr,
			static_cast<uint32_t>(ok_physical_devices_handle.size()),
			&ok_physical_devices_handle[0]
		};

		show_debug("��������create_info");
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
				user_choosed_q_create_infos[i].create_flags,
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
			features_
		};

		auto ret = instance->api.vkCreateDevice(
			ok_physical_device_list.front()->handle,
			&device_create_info,
			allocation_callbacks,
			&device_handle
		);
		show_result(ret);
		if (ret < 0)
		{
			show_wrn("�����豸ʧ��");
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

	shared_ptr <Semaphore> Device::get_a_semaphore(
		const void* next_/* = nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Semaphore> semaphore_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkSemaphoreCreateInfo info{
			VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO,
			next_,
			0
		};

		VkSemaphore semaphore_handle;
		auto ret = api.vkCreateSemaphore(handle, &info, allocator_, &semaphore_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("����Semaphoreʧ��");
			return semaphore_sptr;
		}

		semaphore_sptr.reset(new Semaphore(shared_from_this(), semaphore_handle, allocator_));

		return semaphore_sptr;
	}

	Semaphore::Semaphore(shared_ptr<Device> device_, VkSemaphore handle_, const VkAllocationCallbacks* allocator_)
		:device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Semaphore::~Semaphore()
	{
		init_show;
		show_function_name;
		device->api.vkDestroySemaphore(device->handle, handle, allocation_callbacks);
	}

	shared_ptr <Fence> Device::get_a_fence(
		const void* next_/* = nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Fence> fence_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkFenceCreateInfo info{
			VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
			next_,
			0
		};

		VkFence fence_handle;
		auto ret = api.vkCreateFence(handle, &info, allocator_, &fence_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("����Fenceʧ��");
			return fence_sptr;
		}

		fence_sptr.reset(new Fence(shared_from_this(), fence_handle, allocator_));

		return fence_sptr;
	}

	Fence::Fence(shared_ptr<Device> device_, VkFence handle_, const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{    }

	Fence::~Fence()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyFence(device->handle, handle, allocation_callbacks);
	}

	shared_ptr <Event> Device::get_a_event(
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Event> event_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkEventCreateInfo info{
			VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
			nullptr,
			0
		};

		VkEvent event_handle;
		auto ret = api.vkCreateEvent(handle, &info, allocator_, &event_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("����Eventʧ��");
			return event_sptr;
		}

		event_sptr.reset(new Event(shared_from_this(), event_handle, allocator_));

		return event_sptr;
	}

	Event::Event(Device::Sptr device_, VkEvent handle_, const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Event::~Event()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyEvent(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Shader_module> Device::get_a_shader_module(
		const uint32_t*     code_ptr_,
		size_t              code_size_,
		const void* next_ /*= nullptr*/,
		const VkAllocationCallbacks* allocator_ /*= default_allocation_cb*/)
	{
		shared_ptr<Shader_module> shader_module_sptr;

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		init_show;
		if (code_size_ <= 0)
		{
			show_wrn("code size ������0");
			return shader_module_sptr;
		}

		VkShaderModuleCreateInfo info{
			VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,
			next_,
			0,
			code_size_,
			code_ptr_
		};

		VkShaderModule shader_module_handle;

		auto ret = api.vkCreateShaderModule(
			handle,
			&info,
			allocator_,
			&shader_module_handle
		);
		show_result(ret);
		if (ret < 0)
		{
			show_wrn("����shader moudle ʧ��");
			return shader_module_sptr;
		}

		shader_module_sptr.reset(
			new Shader_module(
				shared_from_this(),
				shader_module_handle,
				allocator_)
		);

		return shader_module_sptr;
	}

	Shader_module::Shader_module(
		Device::Sptr device_,
		VkShaderModule handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Shader_module::~Shader_module()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyShaderModule(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Device_memory> Device::get_a_device_memory(
		VkDeviceSize memory_size_,
		bool(*choose_memory_type_index_)(
			Pramater_choose_memory_type& pramater_choose_,
			Pramater_choose_result& choose_result_),
		void* create_info_ /* = nullptr */,
		const VkAllocationCallbacks* allocator_ /* = default_allocation_cb */)
	{
		shared_ptr<Device_memory> device_memroy_sptr;

		init_show;
		if (physical_devices.size() == 0)
		{
			show_err("���߼��豸û�б��洴��ʱ���õ������豸");
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

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkMemoryAllocateInfo a_info{
			VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,
			create_info_,
			memory_size_,
			choose_result.memory_type_index
		};

		VkDeviceMemory device_memory_handle;
		auto ret = api.vkAllocateMemory(
			handle, &a_info, allocator_, &device_memory_handle);
		show_result(ret);
		if (ret < 0)
		{
			show_wrn("����device memory ʧ��");
			return device_memroy_sptr;
		}

		device_memroy_sptr.reset(new Device_memory(
			shared_from_this(), device_memory_handle, allocator_));

		return device_memroy_sptr;
	}

	Device_memory::Device_memory(
		Device::Sptr device_,
		VkDeviceMemory handle_,
		const VkAllocationCallbacks* allocation_callbacks_)
		:device(device_)
		, handle(handle_)
		, allocation_callbacks(allocation_callbacks_)
	{   }

	Device_memory::~Device_memory()
	{
		init_show;
		show_function_name;
		device->api.vkFreeMemory(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Buffer> Device::get_a_buffer(
		VkDeviceSize		buffer_size_,
		Buffer::E_Create    create_flags_,
		Buffer::E_Usage	    usage_flags_,
		VkSharingMode		sharing_mode_,
		Array_value<uint32_t> queue_family_indices_,
		const void* next_/* = nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocator_cb*/)
	{
		shared_ptr<Buffer> buffer_sptr;

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkBufferCreateInfo info{
			VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,
			next_,
			create_flags_.flag,
			buffer_size_,
			usage_flags_.flag,
			sharing_mode_,
			static_cast<uint32_t>(queue_family_indices_.size()),
			queue_family_indices_.data()
		};

		VkBuffer buffer_handle;

		auto ret = api.vkCreateBuffer(
			handle,
			&info,
			allocator_,
			&buffer_handle
		);
		show_result(ret);
		if (ret < 0) return buffer_sptr;

		buffer_sptr.reset(new Buffer(
			shared_from_this(),
			buffer_handle,
			allocator_
		));

		return buffer_sptr;
	}

	Buffer::Buffer(Device::Sptr device_, VkBuffer handle_, const VkAllocationCallbacks* allocator_)
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
			allocation_callbacks
		);
	}

	shared_ptr<Buffer_view> Buffer::get_a_buffer_view(
		VkFormat		format_,
		VkDeviceSize	offset_,
		VkDeviceSize	range_,
		const VkAllocationCallbacks* allocator_/* =default_allocation_cb()*/)
	{
		shared_ptr<Buffer_view> buffer_view_sptr;

		VkBufferViewCreateInfo info{
			VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,
			NULL,
			0,
			handle,
			format_,
			offset_,
			range_
		};

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkBufferView buffer_view_handle;

		auto ret = device->api.vkCreateBufferView(
			device->handle,
			&info,
			allocator_,
			&buffer_view_handle
		);

		show_result(ret);
		if (ret < 0)
		{
			init_show;
			show_wrn("���� buffer view ʧ��");
			return buffer_view_sptr;
		}

		buffer_view_sptr.reset(new Buffer_view(
			shared_from_this(), buffer_view_handle, allocator_));

		return buffer_view_sptr;
	}

	Buffer_view::Buffer_view(
		shared_ptr<Buffer> buffer_,
		VkBufferView handle_,
		const VkAllocationCallbacks* allocator_)
		: buffer(buffer_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Buffer_view::~Buffer_view()
	{
		init_show;
		show_function_name;
		buffer->device->api.vkDestroyBufferView(buffer->device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Image> Device::get_a_image(
		Image::E_Create         create_fb_,
		VkImageType             imageType_,
		VkFormat                format_,
		VkExtent3D              extent_,
		uint32_t                mipLevels_,
		uint32_t                arrayLayers_,
		VkSampleCountFlagBits   samples_,
		Image::E_Usage          usage_fb_,
		VkSharingMode           sharingMode_,
		VkImageTiling           tiling_,
		Array_value<uint32_t>	queue_family_indices_,
		VkImageLayout           initialLayout_,
		const void* next_ /*= nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Image> image_sptr;

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkImageCreateInfo	info{
			VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,
			next_,
			create_fb_.flag,
			imageType_,
			format_,
			extent_,
			mipLevels_,
			arrayLayers_,
			samples_,
			tiling_,
			usage_fb_.flag,
			sharingMode_,
			static_cast<uint32_t>(queue_family_indices_.size()),
			queue_family_indices_.data(),
			initialLayout_
		};

		VkImage image_handle;
		auto ret = api.vkCreateImage(handle, &info, allocator_, &image_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("����Image ʧ��");
			return image_sptr;
		}

		image_sptr.reset(new Image(shared_from_this(), image_handle, initialLayout_, allocator_));

		return image_sptr;
	}

	Image::Image(
		Device::Sptr device_, VkImage handle_, VkImageLayout layout_, const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, layout(layout_)
		, allocation_callbacks(allocator_)
	{   }

	Image::~Image()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyImage(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Image_view> Image::get_a_image_view(
		VkImageViewType			view_type_,
		VkFormat				format_,
		VkComponentMapping		components_,
		VkImageSubresourceRange subresourceRange_,
		const void* next_ /*= nullptr*/,
		const VkAllocationCallbacks* allocator_ /*= default_allocation_cb()*/)
	{
		shared_ptr<Image_view> image_view_sptr;

		if(allocator_ == default_allocation_cb() ) allocator_ = allocation_callbacks;

		VkImageViewCreateInfo info{
			VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,
			next_,
			0,
			handle,
			view_type_,
			format_,
			components_,
			subresourceRange_
		};

		VkImageView image_view_handle;
		auto ret = device->api.vkCreateImageView(
			device->handle,
			&info,
			allocator_,
			&image_view_handle
		);

		show_result(ret);
		if (ret < 0)
		{
			init_show;
			show_wrn("���� image view ʧ��");
			return image_view_sptr;
		}

		image_view_sptr.reset(new Image_view(
			shared_from_this(), image_view_handle, allocator_));

		return image_view_sptr;
	}

	Image_view::Image_view(
		shared_ptr<Image> image_,
		VkImageView handle_,
		const VkAllocationCallbacks* allocator_)
		: image(image_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{ }

	Image_view::~Image_view()
	{
		init_show;
		show_function_name;
		image->device->api.vkDestroyImageView(image->device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Sampler> Device::get_a_sampler(
		VkFilter                magFilter,
		VkFilter                minFilter,
		VkSamplerMipmapMode     mipmapMode,
		VkSamplerAddressMode    addressModeU,
		VkSamplerAddressMode    addressModeV,
		VkSamplerAddressMode    addressModeW,
		float                   mipLodBias,
		VkBool32                anisotropyEnable,
		float                   maxAnisotropy,
		VkBool32                compareEnable,
		VkCompareOp             compareOp,
		float                   minLod,
		float                   maxLod,
		VkBorderColor           borderColor,
		VkBool32                unnormalizedCoordinates,
		const void* next_/* = nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Sampler> sampler_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkSamplerCreateInfo info{
			VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,
			next_,
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

		VkSampler sampler_handle;
		auto ret = api.vkCreateSampler(handle, &info, allocator_, &sampler_handle);
		show_result(ret);

		if (ret < 0) return sampler_sptr;

		sampler_sptr.reset(new Sampler(shared_from_this(), sampler_handle, allocator_));

		return sampler_sptr;
	}

	Sampler::Sampler(
		Device::Sptr device_,
		VkSampler handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Sampler::~Sampler()
	{
		init_show;
		show_function_name;
		device->api.vkDestroySampler(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Sampler_Ycbcr_conversion> Device::get_a_sampler_ycbcr_conversion(
		VkFormat                        format_,
		VkSamplerYcbcrModelConversion   ycbcrModel,
		VkSamplerYcbcrRange             ycbcrRange,
		VkComponentMapping              components,
		VkChromaLocation                xChromaOffset,
		VkChromaLocation                yChromaOffset,
		VkFilter                        chromaFilter,
		VkBool32                        forceExplicitReconstruction,
		const void*                     next_/* = nullptr*/,
		const VkAllocationCallbacks*    allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Sampler_Ycbcr_conversion> sampler_ycbcr_conversion_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkSamplerYcbcrConversionCreateInfo info{
			VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO,
			next_,
			format_,
			ycbcrModel,
			ycbcrRange,
			components,
			xChromaOffset,
			yChromaOffset,
			chromaFilter,
			forceExplicitReconstruction
		};

		VkSamplerYcbcrConversion sampler_handle;
		auto ret = api.vkCreateSamplerYcbcrConversion(handle, &info, allocator_, &sampler_handle);
		show_result(ret);

		if (ret < 0) return sampler_ycbcr_conversion_sptr;

		sampler_ycbcr_conversion_sptr.reset(new Sampler_Ycbcr_conversion(
			shared_from_this(), sampler_handle, allocator_));

		return sampler_ycbcr_conversion_sptr;
	}

	Sampler_Ycbcr_conversion::Sampler_Ycbcr_conversion(
		shared_ptr<Device> device_,
		VkSamplerYcbcrConversion handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Sampler_Ycbcr_conversion::~Sampler_Ycbcr_conversion()
	{
		init_show;
		show_function_name;
		device->api.vkDestroySamplerYcbcrConversion(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Command_pool> Device::get_a_command_pool(
		uint32_t                    queueFamilyIndex,
		Command_pool::E_Create      flags_,
		const VkAllocationCallbacks* allocator_ /*= default_allocation_cb*/)
	{
		shared_ptr<Command_pool> command_pool_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkCommandPoolCreateInfo info{
			VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
			NULL,
			flags_.flag,
			queueFamilyIndex
		};

		VkCommandPool command_pool_handle;
		auto ret = api.vkCreateCommandPool(
			handle, &info, allocator_, &command_pool_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("����Command pool ʧ��");
			return command_pool_sptr;
		}

		command_pool_sptr.reset(
			new Command_pool(shared_from_this(), command_pool_handle, allocator_));

		return command_pool_sptr;
	}

	Command_pool::Command_pool(
		shared_ptr<Device>device_,
		VkCommandPool handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Command_pool::~Command_pool()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyCommandPool(device->handle, handle, allocation_callbacks);
	}

	Command_buffer_base::Command_buffer_base() {}

	shared_ptr<Command_buffer> Command_pool::get_a_command_buffer(
		VkCommandPool           commandPool,
		VkCommandBufferLevel    level)
	{
		shared_ptr<Command_buffer> command_buffer_sptr;

		VkCommandBufferAllocateInfo info{
			VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
			NULL,
			handle,
			level,
			1
		};

		VkCommandBuffer command_buffer_handle;
		auto ret = device->api.vkAllocateCommandBuffers(
			device->handle, &info, &command_buffer_handle);
		show_result(ret);

		if (ret < 0) return command_buffer_sptr;

		command_buffer_sptr.reset(
			new Command_buffer(shared_from_this(), command_buffer_handle));

		return command_buffer_sptr;
	}

	Command_buffer::Command_buffer(
		shared_ptr<Command_pool> command_pool_, VkCommandBuffer handle_)
		:command_pool(command_pool_)
	{
		handle = handle_;
		api = &(command_pool->device->api);
	}

	Command_buffer::~Command_buffer()
	{
		init_show;
		show_function_name;
		command_pool->device->api.vkFreeCommandBuffers(
			command_pool->device->handle,
			command_pool->handle,
			1,
			&handle
		);
	}

	shared_ptr<Command_buffer_s> Command_pool::get_a_command_buffers(
		VkCommandPool commandPool,
		uint32_t command_buffer_count_,
		VkCommandBufferLevel level)
	{
		shared_ptr<Command_buffer_s> sptr;

		VkCommandBufferAllocateInfo info{
			VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
			NULL,
			handle,
			level,
			command_buffer_count_
		};

		vector<VkCommandBuffer> buffer_handles(command_buffer_count_);

		auto ret = device->api.vkAllocateCommandBuffers(
			device->handle, &info, &buffer_handles[0]);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_err("���� command buffer ʧ��");

			for (size_t i = 0; i < buffer_handles.size(); ++i)
			{
				//�Ƿ�Ӧ����������???
				if (buffer_handles[i] != VK_NULL_HANDLE)
				{
					show_err("�����Ѵ�����command buffer,����ͷŵ�.");
					device->api.vkFreeCommandBuffers(
						device->handle, handle, 1, &buffer_handles[i]);
				}
			}
			return sptr;
		}

		sptr.reset(
			new Command_buffer_s(shared_from_this(), buffer_handles));

		return sptr;
	}
	Command_buffer_s::Command_buffer_s(
		shared_ptr<Command_pool> comman_pool_, vector<VkCommandBuffer> handles_)
		:elements(handles_.size())
	{
		size_t count = 0;
		for (auto&& command_buffer : elements)
		{
			command_buffer.handle = handles_[count];
			command_buffer.api = &(command_pool->device->api);
			count++;
		}
	}
	Command_buffer_s::~Command_buffer_s()
	{
		init_show;
		show_function_name;

		vector<VkCommandBuffer> buffer_handles(elements.size());

		size_t count = 0;
		for (auto&& command_buffer : elements)
		{
			buffer_handles[count] = command_buffer.handle;
			count++;
		}

		command_pool->device->api.vkFreeCommandBuffers(
			command_pool->device->handle,
			command_pool->handle,
			static_cast<uint32_t>(buffer_handles.size()),
			&buffer_handles[0]
		);
	}

	shared_ptr<Descriptor_pool> Device::get_a_descriptor_pool(
		uint32_t                                max_sets_,
		Array_value<VkDescriptorPoolSize>       pool_sizes_,
		Descriptor_pool::E_Create               flags_,
		const VkAllocationCallbacks*            allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Descriptor_pool> descriptor_pool_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkDescriptorPoolCreateInfo info{
			VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,
			NULL,
			flags_.flag,
			max_sets_,
			static_cast<uint32_t>(pool_sizes_.size()),
			pool_sizes_.data()
		};

		VkDescriptorPool descriptor_pool_handle;
		auto ret = api.vkCreateDescriptorPool(
			handle, &info, allocator_, &descriptor_pool_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("���� descriptor pool ʧ��");
			return descriptor_pool_sptr;
		}

		descriptor_pool_sptr.reset(
			new Descriptor_pool(shared_from_this(), descriptor_pool_handle, allocator_));

		return descriptor_pool_sptr;
	}

	Descriptor_pool::Descriptor_pool(
		shared_ptr<Device> device_,
		VkDescriptorPool handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Descriptor_pool::~Descriptor_pool()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyDescriptorPool(device->handle, handle, allocation_callbacks);
	}

	Descriptor_set_base::Descriptor_set_base() {}

	Descriptor_set::Descriptor_set(
		shared_ptr<Descriptor_pool> descriptor_pool_,
		VkDescriptorSet handle_)
		:descriptor_pool(descriptor_pool_)
	{
		handle = handle_;
	}
	Descriptor_set::~Descriptor_set()
	{
		init_show;
		show_function_name;
		descriptor_pool->device->api.vkFreeDescriptorSets(
			descriptor_pool->device->handle,
			descriptor_pool->handle,
			1,
			&handle
		);
	}

	shared_ptr<Descriptor_set> Descriptor_pool::get_a_descriptor_set(
		VkDescriptorSetLayout set_layout,
		const void* next_ /* = nullptr */)
	{
		shared_ptr<Descriptor_set> descriptor_sets_sptr;

		VkDescriptorSetAllocateInfo info{
			VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,
			next_,
			handle,
			1,
			&set_layout,
		};

		VkDescriptorSet descriptor_sets_handle;
		auto ret = device->api.vkAllocateDescriptorSets(
			device->handle, &info, &descriptor_sets_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_err("���� descriptor set ʧ��");
			return descriptor_sets_sptr;
		}

		descriptor_sets_sptr.reset(
			new Descriptor_set(shared_from_this(), descriptor_sets_handle)
		);

		return descriptor_sets_sptr;
	}

	Descriptor_set_s::Descriptor_set_s(
		shared_ptr<Descriptor_pool> descriptor_pool_,
		vector<VkDescriptorSet>& handles_)
		:descriptor_pool(descriptor_pool_)
		, elements(handles_.size())
	{
		for (size_t i = 0; i < elements.size(); ++i)
		{
			elements[i].handle = handles_[i];
		}
	}

	Descriptor_set_s::~Descriptor_set_s()
	{
		vector<VkDescriptorSet> handles(elements.size());
		for (size_t i = 0; i < elements.size(); ++i)
		{
			handles[i] = elements[i].handle;
		}

		if (handles.size() <= 0)
		{
			return;
		}

		descriptor_pool->device->api.vkFreeDescriptorSets(
			descriptor_pool->device->handle,
			descriptor_pool->handle,
			static_cast<uint32_t>(elements.size()),
			&handles[0]
		);
	}

	shared_ptr<Descriptor_set_s> Descriptor_pool::get_descriptor_sets(
		vector<VkDescriptorSetLayout>& set_layouts,
		const void* next_ /* = nullptr */)
	{
		shared_ptr<Descriptor_set_s> descriptor_sets_sptr;

		VkDescriptorSetAllocateInfo info{
			VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,
			next_,
			handle,
			1,
			&set_layouts[0],
		};

		vector<VkDescriptorSet> descriptor_sets_handles(set_layouts.size());

		auto ret = device->api.vkAllocateDescriptorSets(
			device->handle, &info, &descriptor_sets_handles[0]);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_err("���� descriptor set ʧ��");

			for (size_t i = 0; i < descriptor_sets_handles.size(); ++i)
			{
				if (descriptor_sets_handles[i] != VK_NULL_HANDLE)
				{
					//��ȷ����ʽ???
					show_err("�����������descriptor set ����ͷ�...");
					device->api.vkFreeDescriptorSets(
						device->handle,
						handle,
						1,
						&descriptor_sets_handles[i]
					);
				}
			}

			return descriptor_sets_sptr;
		}

		descriptor_sets_sptr.reset(
			new Descriptor_set_s(shared_from_this(), descriptor_sets_handles)
		);

		return descriptor_sets_sptr;
	}

	shared_ptr<Query_pool> Device::get_a_query_pool(
		VkQueryType query_type,
		uint32_t    query_count,
		Query_pool::E_Pipeline_statistic queue_pipeline_statistic_flags_,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Query_pool> query_pool_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkQueryPoolCreateInfo info{
			VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO,
			NULL,
			0,
			query_type,
			query_count,
			queue_pipeline_statistic_flags_.flag
		};

		VkQueryPool query_pool_handle;
		auto ret = api.vkCreateQueryPool(
			handle, &info, allocator_, &query_pool_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("���� Query pool ʧ��");
			return query_pool_sptr;
		}

		query_pool_sptr.reset(
			new Query_pool(shared_from_this(), query_pool_handle, allocator_));

		return query_pool_sptr;
	}

	Query_pool::Query_pool(
		shared_ptr<Device> device_, VkQueryPool handle_, const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Query_pool::~Query_pool()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyQueryPool(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Descriptor_set_layout> Device::get_a_descriptor_set_layout(
		Descriptor_set_layout::E_Create				flags_,
		Array_value<VkDescriptorSetLayoutBinding> bindings_,
		const void* next_,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Descriptor_set_layout> descriptor_set_layout_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		uint32_t size = bindings_.size();

		const VkDescriptorSetLayoutBinding* point_temp = bindings_.data();

		VkDescriptorSetLayoutCreateInfo info{
			VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,
			next_,
			flags_.flag,
			size,
			point_temp
		};

		/*
		�˴�����ʹ��vkGetDescriptorSetLayoutSupport ����Ƿ��ܹ�����
		*/

		VkDescriptorSetLayout descriptor_set_layout_handle;
		auto ret = api.vkCreateDescriptorSetLayout(
			handle, &info, allocator_, &descriptor_set_layout_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("���� descriptor setlayout ʧ��");
			return descriptor_set_layout_sptr;
		}

		descriptor_set_layout_sptr.reset(
			new Descriptor_set_layout(shared_from_this(), descriptor_set_layout_handle, allocator_));

		return descriptor_set_layout_sptr;
	}

	Descriptor_set_layout::Descriptor_set_layout(
		shared_ptr<Device> device_,
		VkDescriptorSetLayout handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Descriptor_set_layout::~Descriptor_set_layout()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyDescriptorSetLayout(
			device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Descriptor_update_template> Descriptor_set_layout::get_a_descriptor_update_template(
		Array_value<VkDescriptorUpdateTemplateEntry> entrys_,
		const VkAllocationCallbacks* allocator_)
	{
		shared_ptr<Descriptor_update_template> descriptor_update_template_sptr;

		if(allocator_ == default_allocation_cb() ) allocator_ = allocation_callbacks;

		if (entrys_.size() <= 0)  return descriptor_update_template_sptr;

		VkDescriptorUpdateTemplateCreateInfo info{
			VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,
			NULL,
			0,
			static_cast<uint32_t>(entrys_.size()),
			entrys_.data(),
			VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,
			handle,
			/*...*/
		};

		VkDescriptorUpdateTemplate descriptor_update_template_handle;
		auto ret = device->api.vkCreateDescriptorUpdateTemplate(
			device->handle, &info, allocator_, &descriptor_update_template_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("���� descriptor update template ʧ��");
			return descriptor_update_template_sptr;
		}

		descriptor_update_template_sptr.reset(new Descriptor_update_template(
			shared_from_this(), descriptor_update_template_handle, allocator_
		));

		return descriptor_update_template_sptr;
	}

	Descriptor_update_template::Descriptor_update_template(
		shared_ptr<Descriptor_set_layout> descriptor_set_layout_,
		VkDescriptorUpdateTemplate handle_,
		const VkAllocationCallbacks* allocator_)
		: descriptor_set_layout(descriptor_set_layout_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }
	Descriptor_update_template::Descriptor_update_template(
		shared_ptr< Pipeline_layout> pipeline_layout_,
		VkDescriptorUpdateTemplate handle_,
		const VkAllocationCallbacks* allocator_)
		: pipeline_layout(pipeline_layout_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{	}

	Descriptor_update_template::~Descriptor_update_template()
	{
		init_show;
		show_function_name;
		descriptor_set_layout->device->api.vkDestroyDescriptorUpdateTemplate(
			descriptor_set_layout->device->handle,
			handle,
			allocation_callbacks
		);
	}

	shared_ptr<Render_pass> Device::get_a_render_pass(
		Array_value<VkAttachmentDescription> attachments,
		Array_value<VkSubpassDescription> subpasses,
		Array_value<VkSubpassDependency> dependencies,
		const void* next_/* = nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Render_pass> render_pass_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkRenderPassCreateInfo info{
			VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,
			next_,
			0,
			static_cast<uint32_t>(attachments.size()),
			attachments.data(),

			static_cast<uint32_t>(subpasses.size()),
			subpasses.data(),

			static_cast<uint32_t>(dependencies.size()),
			dependencies.data(),
		};

		VkRenderPass render_pass_handle;
		auto ret = api.vkCreateRenderPass(
			handle, &info, allocator_, &render_pass_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("���� render pass ʧ��");
			return render_pass_sptr;
		}

		render_pass_sptr.reset(
			new Render_pass(shared_from_this(), render_pass_handle, allocator_));

		return render_pass_sptr;
	}

	Render_pass::Render_pass(
		shared_ptr<Device> device_,
		VkRenderPass handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Render_pass::~Render_pass()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyRenderPass(device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Frame_buffer> Render_pass::get_a_frame_buffer(
		Array_value<VkImageView> attachments,
		uint32_t width,
		uint32_t height,
		uint32_t layers,
		const VkAllocationCallbacks* allocator_ /* = default_allocation_cb() */)
	{
		shared_ptr<Frame_buffer> frame_buffer_sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		auto attachments_count = attachments.size();

		auto attachments_ptr = attachments.data();

		VkFramebufferCreateInfo info{
			VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,
			NULL,
			0,
			handle,
			attachments_count,
			attachments_ptr,
			width,
			height,
			layers
		};

		VkFramebuffer frame_buffer_handle;
		auto ret = device->api.vkCreateFramebuffer(
			device->handle, &info, allocator_, &frame_buffer_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("���� frame buffer ʧ��");
			return frame_buffer_sptr;
		}

		frame_buffer_sptr.reset(
			new Frame_buffer(shared_from_this(), frame_buffer_handle, allocator_));

		return frame_buffer_sptr;
	}

	Frame_buffer::Frame_buffer(
		shared_ptr<Render_pass> render_pass_,
		VkFramebuffer handle_,
		const VkAllocationCallbacks* allocator_)
		: render_pass(render_pass_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Frame_buffer::~Frame_buffer()
	{
		init_show;
		show_function_name;
		render_pass->device->api.vkDestroyFramebuffer(
			render_pass->device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Pipeline_layout> Device::get_a_pipeline_layout(
		Array_value<VkPushConstantRange> push_constant_ranges_,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Pipeline_layout> pipeline_layout_sptr;

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		auto ranges_count = static_cast<uint32_t>(push_constant_ranges_.size());

		auto ranges_ptr = push_constant_ranges_.data();

		VkPipelineLayoutCreateInfo info{
			VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,
			NULL,
			0,
			0,
			NULL,
			ranges_count,
			ranges_ptr
		};

		VkPipelineLayout pipeline_layout_handle;
		auto ret = api.vkCreatePipelineLayout(
			handle, &info, allocator_, &pipeline_layout_handle
		);
		show_result(ret);
		if (ret < 0) return pipeline_layout_sptr;

		pipeline_layout_sptr.reset(new Pipeline_layout(
			shared_from_this(), pipeline_layout_handle, allocator_)
		);

		return pipeline_layout_sptr;
	}

	Pipeline_layout::Pipeline_layout(
		shared_ptr<Device> device_,
		VkPipelineLayout handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{ }

	Pipeline_layout::~Pipeline_layout()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyPipelineLayout(
			device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Pipeline_cache> Device::get_a_pipeline_cache(
		size_t      initial_data_size /*= 0*/,
		const void* initial_data_/* = nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Pipeline_cache> pipeline_cache_sptr;

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkPipelineCacheCreateInfo info{
			VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,
			NULL,
			0,
			initial_data_size,
			initial_data_
		};

		VkPipelineCache pipeline_cache_handle;
		auto ret = api.vkCreatePipelineCache(
			handle, &info, allocator_, &pipeline_cache_handle);
		show_result(ret);
		if (ret < 0) return pipeline_cache_sptr;

		pipeline_cache_sptr.reset(new Pipeline_cache(
			shared_from_this(), pipeline_cache_handle, allocator_));

		pipeline_cache_sptr->device = shared_from_this();

		return pipeline_cache_sptr;
	}

	Pipeline_cache::Pipeline_cache(
		shared_ptr<Device> device_,
		VkPipelineCache handle_,
		const VkAllocationCallbacks* allocator_)
		: device(device_)
		, handle(handle_)
		, allocation_callbacks(allocator_)
	{   }

	Pipeline_cache::~Pipeline_cache()
	{
		init_show;
		show_function_name;
		device->api.vkDestroyPipelineCache(
			device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Descriptor_update_template> Pipeline_layout::get_a_descriptor_update_template(
		Array_value<VkDescriptorUpdateTemplateEntry> entrys_,
		VkPipelineBindPoint bind_point_,
		uint32_t set_,
		const VkAllocationCallbacks* allocator_)
	{
		shared_ptr<Descriptor_update_template> descriptor_update_template_sptr;

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		if (entrys_.size() <= 0)  return descriptor_update_template_sptr;

		VkDescriptorUpdateTemplateCreateInfo info{
			VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,
			NULL,
			0,
			static_cast<uint32_t>(entrys_.size()),
			entrys_.data(),
			VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR,
			VK_NULL_HANDLE,
			bind_point_,
			handle,
			set_
		};

		VkDescriptorUpdateTemplate descriptor_update_template_handle;
		auto ret = device->api.vkCreateDescriptorUpdateTemplate(
			device->handle, &info, allocator_, &descriptor_update_template_handle);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("���� descriptor update template ʧ��");
			return descriptor_update_template_sptr;
		}

		descriptor_update_template_sptr.reset(new Descriptor_update_template(
			shared_from_this(), descriptor_update_template_handle, allocator_
		));

		return descriptor_update_template_sptr;
	}

	//��Ҫע��:base_index
	shared_ptr<Compute_pipeline> Compute_pipeline::get_a_compute_pipeline(
		VkPipelineCreateFlags flags,
		shared_ptr<Pipeline_cache> pipeline_cache_,
		shared_ptr<Shader_module> module_,
		const char* rukou_name_,
		VkShaderStageFlagBits stage_flags,
		shared_ptr<Pipeline_layout> pipeline_layout_,
		const VkSpecializationInfo* pSpecializationInfo /* = nullptr */,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb */)
	{
		shared_ptr<Compute_pipeline> sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkComputePipelineCreateInfo info
		{
			VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,
			nullptr,
			flags,
			{
				VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,
				nullptr,
				0,
				stage_flags,
				module_->handle,
				rukou_name_,
				pSpecializationInfo
			},
			pipeline_layout_ ? pipeline_layout_->handle : pipeline_layout->handle,
			handle,
			index + 1
		};

		VkPipeline pipeline_handle;

		auto ret = pipeline_layout->device->api.vkCreateComputePipelines(
			pipeline_layout->device->handle,
			pipeline_cache_->handle,
			index,
			&info,
			allocator_,
			&pipeline_handle
		);

		show_result(ret);
		if (ret < 0)
		{
			init_show;
			show_wrn("���� compute pipelines ʧ��");
			return sptr;
		}

		sptr.reset(new Compute_pipeline(
			pipeline_layout_,
			pipeline_cache_,
			module_,
			pipeline_handle,
			allocator_,
			index + 1,
			shared_from_this()
		));

		return sptr;
	}

	shared_ptr<Compute_pipeline> Pipeline_layout::get_a_compute_pipeline(
		VkPipelineCreateFlags               flags,
		shared_ptr<Pipeline_cache>			pipeline_cache_,
		shared_ptr<Shader_module>			module_,
		const char*                         rukou_name_,
		VkShaderStageFlagBits               stage_flags,
		const VkSpecializationInfo* pSpecializationInfo /* = nullptr */,
		const VkAllocationCallbacks* allocator_ /* = default_allocation_cb */)
	{
		shared_ptr<Compute_pipeline> sptr;
		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkComputePipelineCreateInfo info
		{
			VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,
			nullptr,
			flags,
			{
				VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,
				nullptr,
				0,
				stage_flags,
				module_->handle,
				rukou_name_,
				pSpecializationInfo
			},
			handle,
			VK_NULL_HANDLE,
			-1
		};

		VkPipeline pipeline_handle;

		auto ret = device->api.vkCreateComputePipelines(
			device->handle,
			pipeline_cache_->handle,
			1,
			&info,
			allocator_,
			&pipeline_handle
		);

		show_result(ret);
		if (ret < 0)
		{
			init_show;
			show_wrn("���� compute pipelines ʧ��");
			return sptr;
		}

		sptr.reset(new Compute_pipeline(
			shared_from_this(),
			pipeline_cache_,
			module_,
			pipeline_handle,
			allocator_
		));

		return sptr;
	}

	Compute_pipeline::Compute_pipeline(
		shared_ptr<Pipeline_layout> pipeline_layout_,
		shared_ptr<Pipeline_cache> pipeline_cache_,
		shared_ptr<Shader_module> shader_module_,
		VkPipeline handle_,
		const VkAllocationCallbacks* allocation_callbacks_,
		int32_t base_index_ /*= -1*/,
		shared_ptr<Compute_pipeline>	base_pipeline_ /*= nullptr*/)
		: pipeline_layout(pipeline_layout_)
		, pipeline_cache(pipeline_cache_)
		, shader_module(shader_module_)
		, handle(handle_)
		, allocation_callbacks(allocation_callbacks_)
		, index(base_index_)
		, base_pipeline(base_pipeline_)
	{   }

	Compute_pipeline::~Compute_pipeline()
	{
		init_show;
		show_function_name;
		pipeline_layout->device->api.vkDestroyPipeline(
			pipeline_layout->device->handle, handle, allocation_callbacks);
	}

	shared_ptr<Graphics_pipeline> Pipeline_layout::get_a_graphics_pipeline(
		VkPipelineCreateFlags							flag_,
		Render_pass&									render_pass_,
		uint32_t										subpass,
		Pipeline_cache*									cache_,
		Array_value<VkPipelineShaderStageCreateInfo>	stages_,
		const VkPipelineVertexInputStateCreateInfo*		vertex_input_state_,
		const VkPipelineInputAssemblyStateCreateInfo*	input_assembly_state_,
		const VkPipelineTessellationStateCreateInfo*	tessellation_state_,
		const VkPipelineViewportStateCreateInfo*		view_port_state_,
		const VkPipelineRasterizationStateCreateInfo*	rasterization_state_,
		const VkPipelineMultisampleStateCreateInfo*		multi_sample_state_,
		const VkPipelineDepthStencilStateCreateInfo*	depth_stencil_state_,
		const VkPipelineColorBlendStateCreateInfo*		color_blend_state_,
		const VkPipelineDynamicStateCreateInfo*			dynamic_satate_,
		void* next_/* = nullptr*/,
		const VkAllocationCallbacks* allocator_/* = default_allocation_cb*/)
	{
		shared_ptr<Graphics_pipeline> sptr;

		if (allocator_ == default_allocation_cb()) allocator_ = allocation_callbacks;

		VkGraphicsPipelineCreateInfo info{
			VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
			next_,
			flag_,
			static_cast<uint32_t>(stages_.size()),
			stages_.data(),
			vertex_input_state_,
			input_assembly_state_,
			tessellation_state_,
			view_port_state_,
			rasterization_state_,
			multi_sample_state_,
			depth_stencil_state_,
			color_blend_state_,
			dynamic_satate_,
			handle,
			render_pass_.handle,
			subpass,
			VK_NULL_HANDLE,
			-1
		};

		VkPipeline pipeline_handle;

		auto ret = device->api.vkCreateGraphicsPipelines(
			device->handle,
			cache_->handle,
			1,
			&info,
			allocator_,
			&pipeline_handle
		);
		show_result(ret);

		if (ret < 0)
		{
			init_show;
			show_wrn("����Graphics pipeline ʧ��");
			return sptr;
		}

		//sptr.reset()

		return sptr;
	}

	//========================================================================
	VkResult Device::invalidate_mapped_memory_ranges(
		Array_value<VkMappedMemoryRange> mapped_memory_ranges_)
	{
		auto ret = api.vkInvalidateMappedMemoryRanges(
			handle,
			static_cast<uint32_t>(mapped_memory_ranges_.size()),
			mapped_memory_ranges_.data()
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

	VkPeerMemoryFeatureFlags Device::get_peer_memory_feature(
		uint32_t                                    heapIndex_,
		uint32_t                                    localDeviceIndex_,
		uint32_t                                    remoteDeviceIndex_)
	{
		VkPeerMemoryFeatureFlags result;
		api.vkGetDeviceGroupPeerMemoryFeatures(
			handle, heapIndex_, localDeviceIndex_, remoteDeviceIndex_, &result
		);

		return result;
	}

	VkResult Device::wait_for_fences(
		Array_value<VkFence> fences_,
		uint64_t timeout_,
		bool wait_all_)
	{
		auto ret = api.vkWaitForFences(
			handle, fences_.size(), fences_.data(), wait_all_?VK_TRUE:VK_FALSE, timeout_
		);
		return ret;
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
			show_err("map memoryʧ��");
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

	VkMemoryRequirements Buffer::get_memory_requirements()
	{
		VkMemoryRequirements sult;

		device->api.vkGetBufferMemoryRequirements(device->handle, handle, &sult);

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

	shared_ptr<vector<VkSparseImageMemoryRequirements>>
		Image::get_sparse_memory_requirements()
	{
		shared_ptr<vector<VkSparseImageMemoryRequirements>> sult(
			new vector<VkSparseImageMemoryRequirements>);

		uint32_t count;
		device->api.vkGetImageSparseMemoryRequirements(
			device->handle, handle, &count, nullptr);

		sult->resize(count);

		device->api.vkGetImageSparseMemoryRequirements(
			device->handle, handle, &count, &(*sult)[0]
		);

		return sult;
	}

	VkSubresourceLayout Image::get_subresource_layout(const VkImageSubresource* subresource_)
	{
		VkSubresourceLayout sult;
		device->api.vkGetImageSubresourceLayout(device->handle, handle, subresource_, &sult);
		return sult;
	}

	VkMemoryRequirements Image::get_image_memory_requirements()
	{
		VkMemoryRequirements sult;
		device->api.vkGetImageMemoryRequirements(device->handle, handle, &sult);
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

	VkResult Command_pool::reset(VkCommandPoolResetFlags flags)
	{
		auto ret = device->api.vkResetCommandPool(device->handle, handle, flags);
		show_result(ret);
		if (ret < 0)
		{
			init_show;
			show_err("reset command pool ʧ��");
		}
		return ret;
	}

	void Command_pool::trim(VkCommandPoolTrimFlags flags)
	{
		device->api.vkTrimCommandPool(device->handle, handle, flags);
	}

	VkResult Command_buffer_base::reset(VkCommandBufferResetFlags flags_)
	{
		auto ret = api->vkResetCommandBuffer(handle, flags_);
		show_result(ret);

		return ret;
	}

	VkResult Command_buffer_base::end()
	{
		auto ret = api->vkEndCommandBuffer(handle);
		show_result(ret);

		return ret;
	}

	VkResult Descriptor_pool::reset(VkDescriptorPoolResetFlags flags)
	{
		auto ret = device->api.vkResetDescriptorPool(device->handle, handle, flags);
		show_result(ret);

		return ret;
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

	VkExtent2D Render_pass::get_area_granularity()
	{
		VkExtent2D sult;
		device->api.vkGetRenderAreaGranularity(device->handle, handle, &sult);
		return sult;
	}

	VkResult Queue::wait_idle()
	{
		auto ret = api->vkQueueWaitIdle(handle);
		show_result(ret);
		return ret;
	}

	VkResult Queue::bind_sparse(
		vector<VkBindSparseInfo>&              pBindInfo,
		Fence&                                     fence)
	{
		auto ret = api->vkQueueBindSparse(
			handle,
			static_cast<uint32_t>(pBindInfo.size()),
			&pBindInfo[0],
			fence.handle
		);
		show_result(ret);

		return ret;
	}

	VkResult Queue::submit(
		vector<VkSubmitInfo>& pSubmitInfo,
		Fence&	fence)
	{
		auto ret = api->vkQueueSubmit(
			handle,
			static_cast<uint32_t>(pSubmitInfo.size()),
			&pSubmitInfo[0],
			fence.handle
		);
		show_result(ret);

		return ret;
	}

	VkResult  Command_buffer_base::begin(
		VkCommandBufferUsageFlags                flags,
		const VkCommandBufferInheritanceInfo*    pInheritanceInfo,
		void*                         pNext)
	{
		VkCommandBufferBeginInfo info{
			VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,
			pNext,
			flags,
			pInheritanceInfo
		};

		auto ret = api->vkBeginCommandBuffer(
			handle,
			&info
		);
		show_result(ret);

		return ret;
	}

	void Command_buffer_base::bind_pipeline(shared_ptr<Compute_pipeline> pipeline_sptr_)
	{
		api->vkCmdBindPipeline(
			handle, VkPipelineBindPoint::VK_PIPELINE_BIND_POINT_COMPUTE, pipeline_sptr_->handle);
	}
	void Command_buffer_base::bind_pipeline(shared_ptr<Graphics_pipeline> pipeline_sptr_)
	{
		api->vkCmdBindPipeline(
			handle, VkPipelineBindPoint::VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline_sptr_->handle);
	}

	void Command_buffer_base::bind_buffer(
		shared_ptr<Buffer> buffer_sptr_,
		VkDeviceSize offset_,
		VkIndexType index_type)
	{
		api->vkCmdBindIndexBuffer(handle, buffer_sptr_->handle, offset_, index_type);
	}

	void Command_buffer_base::bind_buffers(
		Array_value<shared_ptr<Buffer>> buffer_sptrs_,
		Array_value<VkDeviceSize> offsets_,
		uint32_t first_binding_)
	{
		vector<VkBuffer> buffer_handles(buffer_sptrs_.size());
		for (size_t i = 0; i < buffer_sptrs_.size(); ++i)
		{
			buffer_handles[i] = (*(buffer_sptrs_.data()+i))->handle;
		}

		api->vkCmdBindVertexBuffers(
			handle,
			first_binding_,
			static_cast<uint32_t>(buffer_handles.size()),
			&buffer_handles[0],
			offsets_.data()
		);
	}

	void Command_buffer_base::bind_descriptor_sets(
		VkPipelineBindPoint                         pipelineBindPoint,
		Pipeline_layout&                            layout,
		uint32_t                                    firstSet,
		Descriptor_set_s&							descriptor_sets,
		Array_value<uint32_t>                       dynamic_offsets)
	{
		vector<VkDescriptorSet> d_set_handles(descriptor_sets.elements.size());
		for (size_t i = 0; i < descriptor_sets.elements.size(); i++)
		{
			d_set_handles[i] = descriptor_sets.elements[i].handle;
		}

		api->vkCmdBindDescriptorSets(
			handle,
			pipelineBindPoint,
			layout.handle,
			firstSet,
			static_cast<uint32_t>(d_set_handles.size()),
			&d_set_handles[0],
			dynamic_offsets.size(),
			dynamic_offsets.data()
		);
	}

	void Command_buffer_base::set_blend_constants(const float blend_[4])
	{
		api->vkCmdSetBlendConstants(handle, blend_);
	}

	void Command_buffer_base::set_depth_bias(
		float depthBiasConstantFactor,
		float depthBiasClamp,
		float depthBiasSlopeFactor)
	{
		api->vkCmdSetDepthBias(handle, depthBiasSlopeFactor, depthBiasClamp, depthBiasSlopeFactor);
	}

	void Command_buffer_base::set_depth_bounds(float minDepthBounds, float maxDepthBounds)
	{
		api->vkCmdSetDepthBounds(handle, minDepthBounds, maxDepthBounds);
	}

	void Command_buffer_base::set_device_mask(uint32_t mask_)
	{
		api->vkCmdSetDeviceMask(handle, mask_);
	}

	void Command_buffer_base::set_line_width(float line_width_)
	{
		api->vkCmdSetLineWidth(handle, line_width_);
	}

	void Command_buffer_base::set_scissor(
		uint32_t firstScissor,
		uint32_t scissorCount,
		const VkRect2D* pScissors)
	{
		api->vkCmdSetScissor(handle, firstScissor, scissorCount, pScissors);
	}

	void Command_buffer_base::set_stencil_compare_mask(VkStencilFaceFlags faceMask, uint32_t compareMask)
	{
		api->vkCmdSetStencilCompareMask(handle, faceMask, compareMask);
	}

	void Command_buffer_base::set_stencil_reference(VkStencilFaceFlags faceMask, uint32_t reference)
	{
		api->vkCmdSetStencilReference(handle, faceMask, reference);
	}

	void Command_buffer_base::set_stencil_write_mask(
		VkStencilFaceFlags faceMask,
		uint32_t writeMask)
	{
		api->vkCmdSetStencilWriteMask(handle, faceMask, writeMask);
	}

	void Command_buffer_base::set_viewport(
		uint32_t firstViewport,
		Array_value<VkViewport> viewports_)
	{
		api->vkCmdSetViewport(
			handle,
			firstViewport,
			viewports_.size(),
			viewports_.data()
		);
	}

	void Command_buffer_base::event_set(Event& event_, VkPipelineStageFlags stageMask)
	{
		api->vkCmdSetEvent(handle, event_.handle, stageMask);
	}

	void Command_buffer_base::event_reset(Event& event_, VkPipelineStageFlags stageMask)
	{
		api->vkCmdSetEvent(handle, event_.handle, stageMask);
	}

	void Command_buffer_base::query_begin(Query_pool& queryPool, uint32_t query, VkQueryControlFlags flags)
	{
		api->vkCmdBeginQuery(handle, queryPool.handle, query, flags);
	}

	void Command_buffer_base::query_reset(
		Query_pool&                                 queryPool,
		uint32_t                                    firstQuery,
		uint32_t                                    queryCount)
	{
		api->vkCmdResetQueryPool(handle, queryPool.handle, firstQuery, queryCount);
	}

	void Command_buffer_base::query_end(
		Query_pool&	queryPool,
		uint32_t	query)
	{
		api->vkCmdEndQuery(handle, queryPool.handle, query);
	}

	void Command_buffer_base::query_copy_results(
		Query_pool&                                 queryPool,
		uint32_t                                    firstQuery,
		uint32_t                                    queryCount,
		Buffer&                                     dstBuffer,
		VkDeviceSize                                dstOffset,
		VkDeviceSize                                stride,
		VkQueryResultFlags                          flags)
	{
		api->vkCmdCopyQueryPoolResults(
			handle,
			queryPool.handle,
			firstQuery,
			queryCount,
			dstBuffer.handle,
			dstOffset,
			stride,
			flags
		);
	}

	void Command_buffer_base::commands_execute(Command_buffer_s& pCommandBuffers)
	{
		vector<VkCommandBuffer> buffer_handles(pCommandBuffers.elements.size());

		for (size_t i = 0; i < pCommandBuffers.elements.size(); ++i)
		{
			buffer_handles[i] = pCommandBuffers.elements[i].handle;
		}

		api->vkCmdExecuteCommands(
			handle,
			static_cast<uint32_t>(pCommandBuffers.elements.size()),
			&buffer_handles[0]
		);
	}

	void Command_buffer_base::buffer_update(
		Buffer&                                     dstBuffer,
		VkDeviceSize                                dstOffset,
		VkDeviceSize                                dataSize,
		const void*                                 pData)
	{
		api->vkCmdUpdateBuffer(handle, dstBuffer.handle, dstOffset, dataSize, pData);
	}

	void Command_buffer_base::buffer_fill(
		Buffer&                                    dstBuffer,
		VkDeviceSize                                dstOffset,
		VkDeviceSize                                size,
		uint32_t                                    data)
	{
		api->vkCmdFillBuffer(handle, dstBuffer.handle, dstOffset, size, data);
	}

	void Command_buffer_base::buffer_copy_to_buffer(
		Buffer&                                    srcBuffer,
		Buffer&                                    dstBuffer,
		Array_value<VkBufferCopy>                  regions)
	{
		api->vkCmdCopyBuffer(
			handle,
			srcBuffer.handle,
			dstBuffer.handle,
			static_cast<uint32_t>(regions.size()),
			regions.data()
		);
	}

	void Command_buffer_base::buffer_copy_to_image(
		Buffer&										srcBuffer,
		Image&										dstImage,
		VkImageLayout								dstImage_layout,
		Array_value<VkBufferImageCopy> 				pRegions)
	{
		api->vkCmdCopyBufferToImage(
			handle,
			srcBuffer.handle,
			dstImage.handle,
			dstImage_layout,
			static_cast<uint32_t>(pRegions.size()),
			pRegions.data()
		);
	}

	void Command_buffer_base::clear_attachments(
		Array_value<VkClearAttachment>              pAttachments,
		Array_value<VkClearRect>                    pRects)
	{
		api->vkCmdClearAttachments(
			handle,
			static_cast<uint32_t>(pAttachments.size()),
			pAttachments.data(),
			static_cast<uint32_t>(pRects.size()),
			pRects.data()
		);
	}

	void Command_buffer_base::image_clear_color(
		Image&                                      image,
		VkImageLayout                               imageLayout,
		const VkClearColorValue*                    pColor,
		Array_value<VkImageSubresourceRange>        pRanges)
	{
		api->vkCmdClearColorImage(
			handle,
			image.handle,
			imageLayout,
			pColor,
			static_cast<uint32_t>(pRanges.size()),
			pRanges.data()
		);
	}

	void Command_buffer_base::image_clear_depth_stencil(
		Image&                                      image,
		VkImageLayout                               imageLayout,
		const VkClearDepthStencilValue*             pDepthStencil,
		Array_value<VkImageSubresourceRange>        pRanges)
	{
		api->vkCmdClearDepthStencilImage(
			handle,
			image.handle,
			imageLayout,
			pDepthStencil,
			static_cast<uint32_t>(pRanges.size()),
			pRanges.data()
		);
	}

	void Command_buffer_base::image_blit(
		Image&                                      srcImage,
		VkImageLayout                               srcImageLayout,
		Image&                                      dstImage,
		VkImageLayout                               dstImageLayout,
		Array_value<VkImageBlit>                    pRegions,
		VkFilter                                    filter)
	{
		api->vkCmdBlitImage(
			handle,
			srcImage.handle,
			srcImageLayout,
			dstImage.handle,
			dstImageLayout,
			static_cast<uint32_t>(pRegions.size()),
			pRegions.data(),
			filter
		);
	}

	void Command_buffer_base::image_copy(
		Image&                                     srcImage,
		VkImageLayout                              srcImageLayout,
		Image&                                     dstImage,
		VkImageLayout                              dstImageLayout,
		Array_value<VkImageCopy>                   pRegions)
	{
		api->vkCmdCopyImage(
			handle,
			srcImage.handle,
			srcImageLayout,
			dstImage.handle,
			dstImageLayout,
			static_cast<uint32_t>(pRegions.size()),
			pRegions.data()
		);
	}

	void Command_buffer_base::image_copy_to_buffer(
		Image&                                      srcImage,
		VkImageLayout                               srcImageLayout,
		Buffer&                                     dstBuffer,
		Array_value<VkBufferImageCopy>            pRegions)
	{
		api->vkCmdCopyImageToBuffer(
			handle,
			srcImage.handle,
			srcImageLayout,
			dstBuffer.handle,
			static_cast<uint32_t>(pRegions.size()),
			pRegions.data()
		);
	}

	void Command_buffer_base::dispatch(
		uint32_t                                    groupCountX,
		uint32_t                                    groupCountY,
		uint32_t                                    groupCountZ)
	{
		api->vkCmdDispatch(handle, groupCountX, groupCountY, groupCountZ);
	}

	void Command_buffer_base::dispatch_base(
		uint32_t                                    baseGroupX,
		uint32_t                                    baseGroupY,
		uint32_t                                    baseGroupZ,
		uint32_t                                    groupCountX,
		uint32_t                                    groupCountY,
		uint32_t                                    groupCountZ)
	{
		api->vkCmdDispatchBase(
			handle, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
	}

	void Command_buffer_base::dispatch_indirect(
		Buffer&                                    buffer,
		VkDeviceSize                                offset)
	{
		api->vkCmdDispatchIndirect(handle, buffer.handle, offset);
	}

	void Command_buffer_base::write_timestamp(
		VkPipelineStageFlagBits                     pipelineStage,
		Query_pool&                                 queryPool,
		uint32_t                                    query)
	{
		api->vkCmdWriteTimestamp(handle, pipelineStage, queryPool.handle, query);
	}

	void Command_buffer_base::push_constants(
		Pipeline_layout&                            layout,
		VkShaderStageFlags                          stageFlags,
		uint32_t                                    offset,
		uint32_t                                    size,
		const void*                                 pValues)
	{
		api->vkCmdPushConstants(handle, layout.handle, stageFlags, offset, size, pValues);
	}

	void Command_buffer_base::image_resolve(
		Image&                                      srcImage,
		VkImageLayout                               srcImageLayout,
		Image&                                      dstImage,
		VkImageLayout                               dstImageLayout,
		Array_value<VkImageResolve>                 pRegions)
	{
		api->vkCmdResolveImage(
			handle,
			srcImage.handle,
			srcImageLayout,
			dstImage.handle,
			dstImageLayout,
			static_cast<uint32_t>(pRegions.size()),
			pRegions.data()
		);
	}

	void Command_buffer_base::render_pass_begin(
		Render_pass&			render_pass,
		Frame_buffer&			framebuffer,
		VkRect2D				renderArea,
		uint32_t				clearValueCount,
		const VkClearValue*		pClearValues,
		VkSubpassContents       contents,
		const void*				pNext/* = nullptr*/)
	{
		VkRenderPassBeginInfo info{
			VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,
			pNext,
			render_pass.handle,
			framebuffer.handle,
			renderArea,
			clearValueCount,
			pClearValues
		};

		api->vkCmdBeginRenderPass(handle, &info, contents);
	}

	void Command_buffer_base::next_subpass(VkSubpassContents contents)
	{
		api->vkCmdNextSubpass(handle, contents);
	}

	void Command_buffer_base::render_pass_end()
	{
		api->vkCmdEndRenderPass(handle);
	}

#define cast_u32(...) static_cast<uint32_t>(__VA_ARGS__)

	void Command_buffer_base::wait_events(
		Array_value<std::shared_ptr<Event>>			events_,
		VkPipelineStageFlags                        srcStageMask,
		VkPipelineStageFlags                        dstStageMask,
		Array_value<VkMemoryBarrier> 				memory_barriers_,
		Array_value<VkBufferMemoryBarrier> 			buffer_memory_barriers_,
		Array_value<VkImageMemoryBarrier> 			image_memory_barriers_)
	{
		vector<VkEvent> event_handels(events_.size());
		for (size_t i = 0; i < events_.size(); i++)
		{
			event_handels[i] = (*(events_.data()+i))->handle;
		}

		api->vkCmdWaitEvents(
			handle,
			cast_u32(events_.size()),
			&event_handels[0],
			srcStageMask,
			dstStageMask,
			memory_barriers_.size(),
			memory_barriers_.data(),
			buffer_memory_barriers_.size(),
			buffer_memory_barriers_.data(),
			image_memory_barriers_.size(),
			image_memory_barriers_.data()
		);
	}

	void Command_buffer_base::pipeline_barrier(
		VkCommandBuffer                             commandBuffer,
		VkPipelineStageFlags                        srcStageMask,
		VkPipelineStageFlags                        dstStageMask,
		VkDependencyFlags                           dependencyFlags,
		Array_value<VkMemoryBarrier>				memory_barriers_,
		Array_value<VkBufferMemoryBarrier> 			buffer_memory_barriers_,
		Array_value<VkImageMemoryBarrier>			image_memory_barriers_)
	{
		api->vkCmdPipelineBarrier(
			handle,
			srcStageMask,
			dstStageMask,
			dependencyFlags,
			memory_barriers_.size(),
			memory_barriers_.data(),
			buffer_memory_barriers_.size(),
			buffer_memory_barriers_.data(),
			image_memory_barriers_.size(),
			image_memory_barriers_.data()
		);
	}

	void Command_buffer_base::draw(
		uint32_t                                    vertexCount,
		uint32_t                                    instanceCount,
		uint32_t                                    firstVertex,
		uint32_t                                    firstInstance)
	{
		api->vkCmdDraw(
			handle, vertexCount, instanceCount, firstVertex, firstInstance);
	}

	void Command_buffer_base::draw_indexed(
		uint32_t                                    indexCount,
		uint32_t                                    instanceCount,
		uint32_t                                    firstIndex,
		int32_t                                     vertexOffset,
		uint32_t                                    firstInstance)
	{
		api->vkCmdDrawIndexed(
			handle,
			indexCount,
			instanceCount,
			firstIndex,
			vertexOffset,
			firstInstance
		);
	}

	void Command_buffer_base::draw_indexed_indirect(
		Buffer&                                    buffer,
		VkDeviceSize                                offset,
		uint32_t                                    drawCount,
		uint32_t                                    stride)
	{
		api->vkCmdDrawIndexedIndirect(
			handle,
			buffer.handle,
			offset,
			drawCount,
			stride
		);
	}

	void Command_buffer_base::draw_indirect(
		Buffer&                                     buffer,
		VkDeviceSize                                offset,
		uint32_t                                    drawCount,
		uint32_t                                    stride)
	{
		api->vkCmdDrawIndirect(
			handle,
			buffer.handle,
			offset,
			drawCount,
			stride
		);
	}

	VkResult Query_pool::get_results(
		uint32_t                                    firstQuery,
		uint32_t                                    queryCount,
		size_t                                      dataSize,
		void*                                       pData,
		VkDeviceSize                                stride,
		VkQueryResultFlags                          flags)
	{
		auto ret = device->api.vkGetQueryPoolResults(
			device->handle, handle, firstQuery, queryCount, dataSize, pData, stride, flags);
		show_result(ret);

		return ret;
	}

	VkResult Pipeline_cache::get_data(
		size_t*                                     pDataSize,
		void*                                       pData)
	{
		auto ret = device->api.vkGetPipelineCacheData(
			device->handle,
			handle,
			pDataSize,
			pData
		);
		show_result(ret);

		return ret;
	}

	VkResult Pipeline_cache::merge(
		Pipeline_cache&                             srcCache)
	{
		auto ret = device->api.vkMergePipelineCaches(device->handle, handle, 1, &srcCache.handle);
		show_result(ret);
		return ret;
	}

	void Descriptor_set::update_with_template(
		Descriptor_update_template&                 descriptorUpdateTemplate,
		const void*                                 pData)
	{
		descriptor_pool->device->api.vkUpdateDescriptorSetWithTemplate(
			descriptor_pool->device->handle,
			handle,
			descriptorUpdateTemplate.handle,
			pData
		);
	}

	void Descriptor_set::update(
		VkWriteDescriptorSet&          pDescriptorWrites,
		VkCopyDescriptorSet&           pDescriptorCopies)
	{
		descriptor_pool->device->api.vkUpdateDescriptorSets(
			descriptor_pool->device->handle,
			1,
			&pDescriptorWrites,
			1,
			&pDescriptorCopies
		);
	}

	void Descriptor_set_s::update(
		Array_value<VkWriteDescriptorSet>           pDescriptorWrites,
		Array_value<VkCopyDescriptorSet>            pDescriptorCopies)
	{
		descriptor_pool->device->api.vkUpdateDescriptorSets(
			descriptor_pool->device->handle,
			pDescriptorWrites.size(),
			pDescriptorWrites.data(),
			pDescriptorCopies.size(),
			pDescriptorCopies.data()
		);
	}


	//������ôд
	Graphics_pipeline::Graphics_pipeline(
		std::shared_ptr<Pipeline_cache> pipeline_cache_, 
		std::shared_ptr<Pipeline_layout> pipeline_layout_, 
		std::shared_ptr<std::shared_ptr<Shader_module>> shader_modules_, 
		std::shared_ptr<Render_pass> render_pass_)
		:pipeline_cache(pipeline_cache_)
		,pipeline_layout(pipeline_layout_)
		,render_pass(render_pass_)
	{

	}

	Graphics_pipeline::~Graphics_pipeline()
	{

	}



#define table_laka_vk_sobjs(a, aa,bb,b)\
a aa##Buffer##bb b \
a aa##Image_view##bb b \
a aa##Image##bb b \
a aa##Sampler##bb b \
a aa##Sampler_Ycbcr_conversion##bb b \
a aa##Command_buffer##bb b \
a aa##Command_pool##bb b \
a aa##Descriptor_set##bb b \
a aa##Descriptor_pool##bb b \
a aa##Descriptor_update_template##bb b \
a aa##Descriptor_set_layout##bb b \
a aa##Query_pool##bb b \
a aa##Frame_buffer##bb b \
a aa##Render_pass##bb b \
a aa##Pipeline_layout##bb b \
a aa##Pipeline_cache##bb b \
a aa##Compute_pipeline##bb b \
a aa##Graphics_pipeline##bb b \

#define def_sobjs(name__) \
name__##s::name__##s(){};\
name__##s::name__##s(initializer_list<name__> p_)\
	:handles(p_.size())\
{\
	size_t count = 0;\
	for(auto&& itor:p_){	handles[count++]=itor.handle;	}\
}

		table_laka_vk_sobjs(def_sobjs ZK, , , YK)

#undef def_sobjs
	}
}