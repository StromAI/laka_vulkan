/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

//忽然觉得没必要将参数拍扁,使用官方封装好的结构体才更容易复用.
//但如果在调用函数时直接输入参数会更好

#pragma once
#include <memory>
#include <array>
#include <type_traits>

#include "common.h"
#include "laka_vk_define.h"
#include "types.h"

table_vk_flag(std::shared_ptr<std::string> mean ZK, , s, YK FH);
table_vk_flag(std::shared_ptr<std::string> mean ZK, , Bits, YK FH);
table_vk_enum(std::shared_ptr<std::string> mean ZK, , , YK FH);

namespace laka {namespace vk {
#include "classes.h"

	Module_handle get_module();
	PFN_vkVoidFunction get_instance_proc_address(
		VkInstance instance_, const char* function_name_);
    
	void show_result(VkResult ret_);
	void show_result_assert(VkResult ret_);

	std::string version_str(uint32_t version);

	//默认的S_allocation_callbacks指针
	//使用它作为实参,vk的子对象创建时就使用父对象的S_allocation_callbacks
	//有更好的建议吗?
	S_allocation_callbacks* default_allocation_cb();
    

	//不一定要暴露
#if 1
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
	PFN_vkVoidFunction return_vk_api(const char* function_name_);
	PFN_vkVoidFunction return_vk_api_must(const char* function_name_);
	PFN_vkVoidFunction return_vk_api(VkInstance instance_, const char* function_name_);
	PFN_vkVoidFunction return_vk_api_must(VkInstance instance_, const char* function_name_);

#endif

	uint32_t get_instance_version();

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

	class Instance
		:public std::enable_shared_from_this<Instance> {
	private:
		Instance(
			VkInstance handle_,
			S_allocation_callbacks* allocator_callbacks_ptr_);
		
		S_allocation_callbacks allocator_callbacks;
	public:
		using Sptr = std::shared_ptr<Instance>;

		~Instance();

		static Sptr get_new(
			Array_value<const char*> enabled_extension_names_   = {},
			uint32_t api_version_                           = VK_MAKE_VERSION(1, 1, 82),
			const void* next_                               = nullptr,
			S_allocation_callbacks* allocator_               = nullptr,
			Array_value<const char*> enabled_layer_names_   = {},
			const char* app_name_                           = "laka::vk",
			uint32_t app_version_                           = VK_MAKE_VERSION(0, 0, 1),
			const char* engine_name_                        = "laka::vk::engine",
			uint32_t engine_version_                        = VK_MAKE_VERSION(0, 0, 1));

		std::shared_ptr<Device_creator> get_a_device_creator(
			bool(*choose_physical_device_)(Pramater_choose_physical_device& pramater_),
			bool(*choose_queue_family_)(Pramater_choose_queue_family& pramater_),
			S_allocation_callbacks* allocator_ = default_allocation_cb());

		struct {
			table_vk_api_instance(vk_fun ZK, , , YK FH);
			table_vk_api_physical_device(vk_fun ZK, , , YK FH);
			table_vk_api_physical_device_khr(vk_fun ZK, , , YK FH);
		}api;

		const VkInstance handle;
		const S_allocation_callbacks* allocator_callbacks_ptr;
		std::vector<Physical_device_group> physical_device_groups;
		std::vector<Physical_device> physical_devices;
	};

	class Physical_device { 
	public:
		std::shared_ptr<std::vector<VkLayerProperties>>
			get_layer_propertiess();

		std::shared_ptr<std::vector<VkExtensionProperties>>
			get_extension_properties(const char* layer_name_);

		std::shared_ptr<VkPhysicalDeviceFeatures>
			get_features();

		std::shared_ptr<VkPhysicalDeviceProperties>
			get_properties();

		std::shared_ptr<VkPhysicalDeviceMemoryProperties>
			get_memory_properties();

		std::shared_ptr<std::vector<VkQueueFamilyProperties>>
			get_queue_family_properties();

		std::shared_ptr<VkFormatProperties>
			get_format_properties(VkFormat format_);

		std::shared_ptr<VkExternalBufferProperties>
			get_external_buffer_properties(
				F_buffer_create c_flags_,
				F_buffer_usage	u_flags_,
				F_external_memory_handle_type handle_type_);

		std::shared_ptr<VkExternalFenceProperties>
			get_external_fence_properties(
				F_external_fence_handle_type    handle_type_);

		std::shared_ptr<VkExternalSemaphoreProperties>
			get_external_semphore_properties(
				F_external_semaphore_handle_type    handle_type_);

		std::shared_ptr<VkImageFormatProperties2>
			get_image_format_properties(
				E_format                                    format_,
				E_image_type                                type_,
				E_image_tiling                              tiling_,
				F_image_usage                               usage_,
				F_image_create                              flags_,
				void*										next_ = nullptr);

		std::shared_ptr<std::vector<VkSparseImageFormatProperties2>>
			get_sparse_image_format_properties(
				const S_physical_device_sparse_image_format_info2& format_info_);

		Instance* instance;
		VkPhysicalDevice handle;
		std::vector<Queue_family_info> queue_familys;
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
		//VkDevice device_handle;
		VkQueue handle;
		uint32_t index;
		uint32_t family_index;

		Device_api* api;

		VkResult wait_idle();
		//...
		VkResult submit(
			std::vector<S_submit_info>& pSubmitInfo,
			Fence&	fence);
		//...
		VkResult bind_sparse(
			std::vector<S_bind_sparse_info>&              pBindInfo,
			Fence&                                      fence);
	};

	class Device_creator
		: public std::enable_shared_from_this<Device_creator> {
	private:
		friend class Device;
		friend class Instance;

		Device_creator(
			std::shared_ptr<Instance> instance_,
			bool(*choose_physical_device_)(Pramater_choose_physical_device& physical_device_),
			bool(*choose_queue_family_)(Pramater_choose_queue_family& parmater_),
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Device_creator>;

		std::shared_ptr<Device> get_a_device(
			Physical_device& physical_device_,
			S_device_create_info& create_info_);

		std::shared_ptr<Device> get_a_device(
			Physical_device& physical_device_,
			Array_value<char*> enabled_extensions_  = {},
			S_physical_device_features* features_	= nullptr);

		std::shared_ptr<Device> get_a_device(
			Physical_device_group& physica_device_group_,
			Array_value<char*> enabled_extensions_  = {},
			S_physical_device_features* features_	= nullptr);

		//std::shared_ptr<Device> get_a_device(
		//	std::list<Physical_device>& physical_devices_,
		//	std::vector<char*>* enabled_extensions_ = nullptr,
		//	VkPhysicalDeviceFeatures* features_ = nullptr);

		std::shared_ptr<Instance> instance;

		bool(*choose_physical_device_function)(Pramater_choose_physical_device& physical_device_);
		bool(*choose_queue_family_function)(Pramater_choose_queue_family& parmatwr_);
	};

	//提供复数形式的对象 尽量不涉及生命周期
	//(因为有些api执行时需要暂时hold住,所以肯定会有涉及 修正生命周期时再处理
	//class Buffer_views
	//	:public std::shared_ptr<Buffer_views>{
	//public:
	//	using Sptr = std::shared_ptr<Buffer_views>;
	//	Buffer_views();
	//	Buffer_views(std::initializer_list<Buffer_view>);
	//	Buffer_views& operator+(std::initializer_list<Buffer>);
	//	std::vector<VkBuffer> handles;
	//};

#if 1

#define dclr_sclass( name__, handle_type__) \
	class name__##s : public std::enable_shared_from_this<name__##s>	{\
		public:\
			using Sptr = std::shared_ptr<name__##s>;\
			\
			name__##s();\
			name__##s(std::initializer_list<name__>);\
			name__##s& operator+(std::initializer_list<name__>);\
			std::vector<handle_type__> handles;

	dclr_sclass(Buffer_view,VkBufferView)
		};

		dclr_sclass(Buffer, VkBuffer)
	};

	dclr_sclass(Image_view, VkImageView)
};

dclr_sclass(Image, VkImage)
	};

	dclr_sclass(Sampler, VkSampler)
	};

	dclr_sclass(Sampler_Ycbcr_conversion, VkSamplerYcbcrConversion)
	};

	dclr_sclass(Command_buffer, VkCommandBuffer)
	};

	dclr_sclass(Command_pool, VkCommandPool)
	};

	dclr_sclass(Descriptor_set_layout, VkDescriptorSetLayout)
	};

	dclr_sclass(Descriptor_set, VkDescriptorSet)
	};

	dclr_sclass(Descriptor_pool, VkDescriptorPool)
	};

	dclr_sclass(Descriptor_update_template, VkDescriptorUpdateTemplate)
	};

	dclr_sclass(Query_pool, VkQueryPool)
	};

	dclr_sclass(Frame_buffer, VkFramebuffer)
	};

	dclr_sclass(Render_pass, VkRenderPass)
	};

	dclr_sclass(Compute_pipeline, VkPipeline)
	};

	dclr_sclass(Graphics_pipeline, VkPipeline)
	};

	dclr_sclass(Pipeline_layout, VkPipelineLayout)
	};

	dclr_sclass(Pipeline_cache, VkPipelineCache)
	};

	dclr_sclass(Semaphore, VkSemaphore)
	};

	dclr_sclass(Fence, VkFence)
	};

	dclr_sclass(Event, VkEvent)
	};

	dclr_sclass(Shader_module, VkShaderModule)
	};

	dclr_sclass(Device_memory, VkDeviceMemory)
	};

#undef dclr_sclass

#endif

	class Semaphore :public std::enable_shared_from_this<Semaphore> {
	private:
		friend class Device;

		Semaphore(
			std::shared_ptr<Device> device_,
			VkSemaphore handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Semaphore>;

		~Semaphore();

		std::shared_ptr<Device> device;
		VkSemaphore handle;
	};

	class Fence :public std::enable_shared_from_this<Fence> {
	private:
		friend class Device;

		Fence(
			std::shared_ptr<Device> device_,
			VkFence handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Fence>;

		~Fence();

		VkResult reset();

		VkResult reset(Array_value<VkFence> fences_);

		VkResult get_status();

		VkResult wait(uint64_t timeout_);

		VkResult wait(bool wait_all_, uint64_t timeout_, Array_value<VkFence> fences_);

		std::shared_ptr<Device> device;
		VkFence handle;
	};

	class Event :public std::enable_shared_from_this<Event> {
	private:
		friend class Device;

		Event(
			std::shared_ptr<Device> device_,
			VkEvent handle_,
			const S_allocation_callbacks* allocator_);

		VkResult set();
		VkResult get_event_status();
		void reset();

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Event>;

		~Event();

		std::shared_ptr<Device> device;
		VkEvent handle;
	};

	class Shader_module
		:public std::enable_shared_from_this<Shader_module> {
	private:
		friend class Device;

		Shader_module(
			std::shared_ptr<Device>    device_,
			VkShaderModule handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Shader_module>;

		~Shader_module();

		std::shared_ptr<Device> device;
		VkShaderModule handle;
	};

	class Device_memory
		:public std::enable_shared_from_this<Device_memory> {
	private:
		friend class Device;

		const S_allocation_callbacks* allocation_callbacks;

		Device_memory(
			std::shared_ptr<Device> device_,
			VkDeviceMemory handle_,
			const S_allocation_callbacks* allocation_callbacks_
		);
	public:
		using Sptr = std::shared_ptr<Device_memory>;

		~Device_memory();

		VkDeviceSize get_commitment();

		void* map_memory(
			VkDeviceSize                                offset_,
			VkDeviceSize                                size_,
			VkMemoryMapFlags                            flags_ = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

		void unmap_memory();

		VkDeviceMemory handle;
		std::shared_ptr<Device> device;
	};

	class Buffer_view
		:public std::enable_shared_from_this<Buffer_view> {
	private:
		friend class Buffer;

		Buffer_view(
			std::shared_ptr<Buffer> buffer_,
			VkBufferView handle_,
			const S_allocation_callbacks* allocator_
		);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Buffer_view>;

		~Buffer_view();

		std::shared_ptr<Buffer> buffer;
		VkBufferView handle;
	};

	class Buffer :public std::enable_shared_from_this<Buffer> {
	private:
		friend class Device;

		Buffer(
			std::shared_ptr<Device> device_,
			VkBuffer handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Buffer>;

		~Buffer();

		std::shared_ptr<Buffer_view> get_a_buffer_view(
			E_format		format_,
			VkDeviceSize	offset_,
			VkDeviceSize	range_,
			const S_allocation_callbacks* allocator_ = default_allocation_cb()
		);

		VkMemoryRequirements get_memory_requirements();

		VkResult bind(
			std::shared_ptr<Device_memory> device_memroy_,
			VkDeviceSize memory_offset_);
		//绑定后是否会影响生命周期? 待查待提问.

		std::shared_ptr<Device> device;
		VkBuffer handle;
	};

	class Image_view
		:public std::enable_shared_from_this<Image_view> {
	private:
		friend class Image;

		Image_view(
			std::shared_ptr<Image> image_,
			VkImageView handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;

	public:
		using Sptr = std::shared_ptr<Image_view>;

		~Image_view();

		std::shared_ptr<Image> image;
		VkImageView handle;
	};

	class Image
		:public std::enable_shared_from_this<Image> {
	private:
		friend class Device;

		Image(
			std::shared_ptr<Device> device_,
			VkImage handle_,
			E_image_layout layout_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Image>;

		~Image();

		std::shared_ptr<Image_view> get_a_image_view(
			E_image_type			view_type_,
			E_format				format_,
			S_component_mapping		components_,
			S_image_subresource_range	subresourceRange_,
			const void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb() );

		VkMemoryRequirements get_image_memory_requirements();

		//...
		std::shared_ptr<std::vector<VkSparseImageMemoryRequirements>> get_sparse_memory_requirements();

		VkSubresourceLayout get_subresource_layout(const VkImageSubresource*);

		VkResult bind(
			std::shared_ptr<Device_memory> device_memory_,
			VkDeviceSize memory_offset_);

		E_image_layout layout;
		std::shared_ptr<Device> device;
		VkImage handle;
	};

	class Sampler
		:public std::enable_shared_from_this<Sampler> {
	private:
		friend class Device;

		Sampler(
			std::shared_ptr<Device> device_,
			VkSampler handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Sampler>;

		~Sampler();

		std::shared_ptr<Device> device;
		VkSampler handle;
	};

	class Sampler_Ycbcr_conversion
		:public std::enable_shared_from_this<Sampler_Ycbcr_conversion> {
	private:
		friend class Device;

		Sampler_Ycbcr_conversion(
			std::shared_ptr<Device> device_,
			VkSamplerYcbcrConversion handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Sampler_Ycbcr_conversion>;

		~Sampler_Ycbcr_conversion();

		std::shared_ptr<Device> device;
		VkSamplerYcbcrConversion handle;
	};

	//Command_buffer,Descriptor_set
		//是否应当只做成Command_buffers Descriptor_sets.

	class Command_buffer_base {
	protected:
		Command_buffer_base();
	public:

		VkCommandBuffer handle;
		Device_api* api;

		VkResult begin(
			F_command_buffer_usage                  flags,
			const VkCommandBufferInheritanceInfo*   pInheritanceInfo = nullptr,
			void*                         pNext = nullptr);

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

		void bind_descriptor_sets(
			E_pipeline_bind_point                       pipelineBindPoint,
			Pipeline_layout&                            layout,
			uint32_t                                    firstSet,
			Descriptor_set_s&							descriptor_sets,
			Array_value<uint32_t>                       dynamic_offsets);

		void set_blend_constants(const float blend_[4]);

		void set_depth_bias(
			float depthBiasConstantFactor,
			float depthBiasClamp,
			float depthBiasSlopeFactor);

		void set_depth_bounds(
			float minDepthBounds,
			float maxDepthBounds);

		void set_device_mask(uint32_t mask_);

		void set_line_width(float line_width_);

		void set_scissor(
			uint32_t firstScissor,
			uint32_t scissorCount,
			const S_rect_2d* pScissors);

		void set_stencil_compare_mask(
            F_stencil_face      faceMask,
			uint32_t			compareMask);

		void set_stencil_reference(
            F_stencil_face	    faceMask,
			uint32_t			reference);

		void set_stencil_write_mask(
			F_stencil_face      faceMask,
			uint32_t            writeMask);

		void set_viewport(
			uint32_t firstViewport,
			Array_value<VkViewport> viewports_);

		void event_set(Event&  event_, F_pipeline_stage	stageMask);

		void event_reset(Event& event_, F_pipeline_stage stageMask);

		void query_begin(
			Query_pool&	queryPool,
			uint32_t	query,
			F_query_control	flags);

		void query_reset(
			Query_pool&	queryPool,
			uint32_t	firstQuery,
			uint32_t	queryCount);

		void query_end(
			Query_pool&	queryPool,
			uint32_t	query);

		void query_copy_results(
			Query_pool&                                 queryPool,
			uint32_t                                    firstQuery,
			uint32_t                                    queryCount,
			Buffer&                                     dstBuffer,
			VkDeviceSize                                dstOffset,
			VkDeviceSize                                stride,
			F_query_result                              flags);

		void commands_execute(Command_buffer_s& pCommandBuffers);

		void buffer_update(
			Buffer&	                                    dstBuffer,
			VkDeviceSize                                dstOffset,
			VkDeviceSize                                dataSize,
			const void*								    pData);

		void buffer_fill(
			Buffer&                                    dstBuffer,
			VkDeviceSize                                dstOffset,
			VkDeviceSize                                size,
			uint32_t                                    data);

		void buffer_copy_to_buffer(
			Buffer&                                    srcBuffer,
			Buffer&                                    dstBuffer,
			Array_value<VkBufferCopy>                  regions);

		void buffer_copy_to_image(
			Buffer&										srcBuffer,
			Image&										dstImage,
			E_image_layout								dstImage_layout,
			Array_value<VkBufferImageCopy>				pRegions);

		void clear_attachments(
			Array_value<VkClearAttachment>              pAttachments,
			Array_value <VkClearRect>                   pRects);

		void image_clear_color(
			Image&                                      image,
			E_image_layout                               imageLayout,//检查有没有可能多个布局能用在一种图上
			const VkClearColorValue*                    pColor,
			Array_value<VkImageSubresourceRange>        pRanges);

		void image_clear_depth_stencil(
			Image&                                      image,
			E_image_layout                               imageLayout,
			const S_clear_depth_stencil_value*          pDepthStencil,
			Array_value<VkImageSubresourceRange>        pRanges);

		void image_blit(
			Image&                                      srcImage,
			E_image_layout                               srcImageLayout,
			Image&                                      dstImage,
			E_image_layout                               dstImageLayout,
			Array_value<VkImageBlit>                    pRegions,
			E_filter                                    filter);

		void image_copy(
			Image&										srcImage,
			E_image_layout                               srcImageLayout,
			Image&										dstImage,
			E_image_layout                               dstImageLayout,
			Array_value<VkImageCopy>                    pRegions);

		void image_copy_to_buffer(
			Image&                                     srcImage,
			E_image_layout                               srcImageLayout,
			Buffer&                                     dstBuffer,
			Array_value<VkBufferImageCopy>            pRegions);

		void dispatch(
			uint32_t                                    groupCountX,
			uint32_t                                    groupCountY,
			uint32_t                                    groupCountZ);

		void dispatch_base(
			uint32_t                                    baseGroupX,
			uint32_t                                    baseGroupY,
			uint32_t                                    baseGroupZ,
			uint32_t                                    groupCountX,
			uint32_t                                    groupCountY,
			uint32_t                                    groupCountZ);

		void dispatch_indirect(
			Buffer&                                    buffer,
			VkDeviceSize                                offset);

		void write_timestamp(
			F_pipeline_stage                            pipelineStage,
			Query_pool&                                 queryPool,
			uint32_t                                    query);

		void push_constants(
			Pipeline_layout&                            layout,
			F_shader_stage                              stageFlags,
			uint32_t                                    offset,
			uint32_t                                    size,
			const void*                                 pValues);

		void image_resolve(
			Image&                                      srcImage,
			E_image_layout                              srcImageLayout,
			Image&                                      dstImage,
			E_image_layout                              dstImageLayout,
			Array_value<VkImageResolve>                 pRegions);

		void render_pass_begin(
			Render_pass&			render_pass,
			Frame_buffer&			framebuffer,
			S_rect_2d				renderArea,
			uint32_t				clearValueCount,
			const VkClearValue*		pClearValues,
			VkSubpassContents       contents,
			const void*				pNext = nullptr);

		void next_subpass(VkSubpassContents contents);

		void render_pass_end();

		void wait_events(
			Array_value<std::shared_ptr<Event>>			events_,
            F_pipeline_stage                            srcStageMask,
            F_pipeline_stage                            dstStageMask,
			Array_value<VkMemoryBarrier> 				memory_barriers_,
			Array_value<VkBufferMemoryBarrier>  		buffer_memory_barriers_,
			Array_value<VkImageMemoryBarrier> 			image_memory_barriers_);

		//屏障可以用更形象的方式来使用.

		void pipeline_barrier(
			Command_buffer&                              commandBuffer,
            F_pipeline_stage                            srcStageMask,
            F_pipeline_stage                            dstStageMask,
			F_dependency                                dependencyFlags,
			Array_value<VkMemoryBarrier>				memory_barriers_,
			Array_value<VkBufferMemoryBarrier> 			buffer_memory_barriers_,
			Array_value<VkImageMemoryBarrier>			image_memory_barriers_);

		void draw(
			uint32_t                                    vertexCount,
			uint32_t                                    instanceCount,
			uint32_t                                    firstVertex,
			uint32_t                                    firstInstance);

		void draw_indexed(
			uint32_t                                    indexCount,
			uint32_t                                    instanceCount,
			uint32_t                                    firstIndex,
			int32_t                                     vertexOffset,
			uint32_t                                    firstInstance);

		void draw_indexed_indirect(
			Buffer&                                    buffer,
			VkDeviceSize                                offset,
			uint32_t                                    drawCount,
			uint32_t                                    stride);

		void draw_indirect(
			Buffer&                                     buffer,
			VkDeviceSize                                offset,
			uint32_t                                    drawCount,
			uint32_t                                    stride);
	};

	class Command_buffer
		:public Command_buffer_base
		, public std::enable_shared_from_this<Command_buffer> {
	private:
		friend class Command_pool;

		Command_buffer(
			std::shared_ptr<Command_pool> command_pool_, VkCommandBuffer handle_);

	public:
		using Sptr = std::shared_ptr<Command_buffer>;

		~Command_buffer();

		std::shared_ptr<Command_pool> command_pool;
	};

	class Command_buffer_s
		:public std::enable_shared_from_this<Command_buffer_s> {
	private:
		friend class Command_pool;

		Command_buffer_s(
			std::shared_ptr<Command_pool> comman_pool_,
			std::vector<VkCommandBuffer> handles_);
	public:
		using Sptr = std::shared_ptr<Command_buffer_s>;

		class Command_buffer :public Command_buffer_base {};

		~Command_buffer_s();

		std::vector<Command_buffer> elements;
		std::shared_ptr<Command_pool> command_pool;
	};

	class Command_pool
		:public std::enable_shared_from_this<Command_pool> {
	private:
		friend class Device;

		Command_pool(
			std::shared_ptr<Device> device_,
			VkCommandPool handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Command_pool>;

		~Command_pool();

		std::shared_ptr<Command_buffer> get_a_command_buffer(
			Command_pool           commandPool,
			E_command_buffer_level  level);

		/*
			vkAllocateCommandBuffers可用于创建多个命令缓冲区。
			如果任何这些命令缓冲区的创建失败，
			则实现必须从此命令中销毁所有成功创建的命令缓冲区对象，
			将pCommandBuffers阵列的所有条目设置为NULL并返回错误。
		*/
		std::shared_ptr<Command_buffer_s> get_a_command_buffers(
			VkCommandPool           commandPool,
			uint32_t                command_buffer_count_,
			E_command_buffer_level  level);

		VkResult reset(F_command_pool_reset flags);

		void trim(VkCommandPoolTrimFlags flags = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

		std::shared_ptr<Device> device;
		VkCommandPool handle;
	};

	class Descriptor_set_base {
	protected:
		Descriptor_set_base();
	public:

		VkDescriptorSet handle;
	};

	class Descriptor_set
		:public Descriptor_set_base
		, public std::enable_shared_from_this<Descriptor_set> {
	private:
		friend Descriptor_pool;

		Descriptor_set(
			std::shared_ptr<Descriptor_pool> descriptor_pool_,
			VkDescriptorSet handle_);
	public:
		using Sptr = std::shared_ptr<Descriptor_set>;

		~Descriptor_set();

		void update_with_template(
			Descriptor_update_template&                  descriptorUpdateTemplate,
			const void*                                 pData);

		void update(
			S_write_descriptor_set&          pDescriptorWrites,
			S_copy_descriptor_set&           pDescriptorCopies);

		std::shared_ptr<Descriptor_pool> descriptor_pool;
	};

	class Descriptor_set_s
		:public std::enable_shared_from_this<Descriptor_set_s> {
	private:
		friend class Descriptor_pool;

		Descriptor_set_s(
			std::shared_ptr<Descriptor_pool> descriptor_pool_,
			std::vector<VkDescriptorSet>& handles_);
	public:
		using Sptr = std::shared_ptr<Descriptor_set_s>;

		class Descriptor_set :public Descriptor_set_base {};

		~Descriptor_set_s();

		void update(
			Array_value<S_write_descriptor_set>           pDescriptorWrites,
			Array_value<S_copy_descriptor_set>            pDescriptorCopies);

		std::vector<Descriptor_set> elements;
		std::shared_ptr<Descriptor_pool> descriptor_pool;
	};

	class Descriptor_pool
		:public std::enable_shared_from_this<Descriptor_pool> {
	private:
		friend class Device;

		Descriptor_pool(
			std::shared_ptr<Device> device_,
			VkDescriptorPool handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Descriptor_pool>;

		~Descriptor_pool();

		std::shared_ptr<Descriptor_set> get_a_descriptor_set(
			VkDescriptorSetLayout set_layout,
			const void* next_ = nullptr);

		std::shared_ptr<Descriptor_set_s> get_descriptor_sets(
			//...
			std::vector<VkDescriptorSetLayout>& set_layouts,
			const void* next_ = nullptr);

		VkResult reset( VkDescriptorPoolResetFlags flags = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

		std::shared_ptr<Device> device;
		VkDescriptorPool handle;
	};

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
	class Descriptor_update_template
		:public std::enable_shared_from_this<Descriptor_update_template> {
	private:
		friend class Descriptor_set_layout;
		friend class Pipeline_layout;

		Descriptor_update_template(
			std::shared_ptr<Descriptor_set_layout> descriptor_set_layout_,
			VkDescriptorUpdateTemplate handle_,
			const S_allocation_callbacks* allocator_);

		Descriptor_update_template(
			std::shared_ptr< Pipeline_layout> pipeline_layout_,
			VkDescriptorUpdateTemplate handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Descriptor_update_template>;

		~Descriptor_update_template();

		std::shared_ptr<Descriptor_set_layout> descriptor_set_layout;
		std::shared_ptr<Pipeline_layout> pipeline_layout;

		VkDescriptorUpdateTemplate handle;
	};

	class Descriptor_set_layout
		:public std::enable_shared_from_this<Descriptor_set_layout> {
	private:
		friend class Device;

		Descriptor_set_layout(
			std::shared_ptr<Device> device_,
			VkDescriptorSetLayout handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Descriptor_set_layout>;

		~Descriptor_set_layout();

		std::shared_ptr<Descriptor_update_template> get_a_descriptor_update_template(
			Array_value<VkDescriptorUpdateTemplateEntry> entrys_,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Device> device;
		VkDescriptorSetLayout handle;
	};

	class Query_pool
		:public std::enable_shared_from_this<Query_pool> {
	private:
		friend class Device;

		Query_pool(
			std::shared_ptr<Device> device_,
			VkQueryPool handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Query_pool>;

		VkResult get_results(
			uint32_t                                    firstQuery,
			uint32_t                                    queryCount,
			size_t                                      dataSize,
			void*                                       pData,
			VkDeviceSize                                stride,
			F_query_result                              flags);

		~Query_pool();

		std::shared_ptr<Device> device;
		VkQueryPool handle;
	};

	class Frame_buffer
		:public std::enable_shared_from_this<Frame_buffer> {
	private:
		friend class Render_pass;

		Frame_buffer(
			std::shared_ptr<Render_pass> render_pass_,
			VkFramebuffer handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Frame_buffer>;

		~Frame_buffer();

		std::shared_ptr<Render_pass> render_pass;
		VkFramebuffer handle;
	};

	class Render_pass
		:public std::enable_shared_from_this<Render_pass> {
	private:
		friend class Device;

		Render_pass(
			std::shared_ptr<Device> device_,
			VkRenderPass handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Render_pass>;

		~Render_pass();

		std::shared_ptr<Frame_buffer> get_a_frame_buffer(
			Array_value<VkImageView> attachments,
			uint32_t width,
			uint32_t height,
			uint32_t layers,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		VkExtent2D get_area_granularity();

		std::shared_ptr<Device> device;
		VkRenderPass handle;
	};

	class Pipeline_layout
		:public std::enable_shared_from_this<Pipeline_layout> {
	private:
		friend class Device;
		friend class Descriptor_set_layout;

		Pipeline_layout(
			std::shared_ptr<Device> device_,
			VkPipelineLayout handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Pipeline_layout>;

		~Pipeline_layout();

		std::shared_ptr<Descriptor_update_template> get_a_descriptor_update_template(
			Array_value<VkDescriptorUpdateTemplateEntry> entrys_,
			VkPipelineBindPoint bind_point_,
			uint32_t set_,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Compute_pipeline> get_a_compute_pipeline(
			F_pipeline_create                   flags,
			std::shared_ptr<Pipeline_cache>		pipeline_cache_,
			std::shared_ptr<Shader_module>      module_,
			const char*                         pName,//shader 入口点名称
			F_shader_stage                      stage_flags,
			const VkSpecializationInfo*         pSpecializationInfo = nullptr,
			const S_allocation_callbacks*		allocator_ = default_allocation_cb());

		std::shared_ptr<Graphics_pipeline> get_a_graphics_pipeline(
            F_pipeline_create							    flag_,
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
			void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Device> device;
		VkPipelineLayout handle;
	};

	class Pipeline_cache
		:public std::enable_shared_from_this<Pipeline_cache> {
	private:
		friend  class Device;

		Pipeline_cache(
			std::shared_ptr<Device> device_,
			VkPipelineCache handle_,
			const S_allocation_callbacks* allocator_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Pipeline_cache>;

		~Pipeline_cache();

		//std::shared_ptr<std::vector<char>> get_data();
		//对pData这种,大概得用vector<uchar>

		VkResult get_data(
			size_t*                                     pDataSize,
			void*                                       pData);

		VkResult merge(
			Pipeline_cache&                             srcCache);
		//很多对象都会有放在一个数组中处理的情况 需要有一种新方式来处理

		std::shared_ptr<Device> device;
		VkPipelineCache handle;
	};

	class Compute_pipeline
		:public std::enable_shared_from_this<Compute_pipeline> {
	private:
		friend class Pipeline_layout;

		Compute_pipeline(
			std::shared_ptr<Pipeline_layout>    pipeline_layout_,
			std::shared_ptr<Pipeline_cache>     pipeline_cache,
			std::shared_ptr<Shader_module>      shader_module_,
			VkPipeline handle_,
			const S_allocation_callbacks*		allocation_callbacks_,
			int32_t base_index_ = -1,
			std::shared_ptr<Compute_pipeline>	compute_pipeline_ = nullptr);

		const S_allocation_callbacks* allocation_callbacks;

		int32_t index;
	public:
		using Sptr = std::shared_ptr<Compute_pipeline>;

		~Compute_pipeline();

		std::shared_ptr<Compute_pipeline> get_a_compute_pipeline(
			F_pipeline_create                   flags,
			std::shared_ptr<Pipeline_cache>		pipeline_cache_,
			std::shared_ptr<Shader_module>		module_,
			const char*                         rukou_name_,
			F_shader_stage                      stage_flags,
			std::shared_ptr< Pipeline_layout>	pipeline_layout_ = nullptr,
			const VkSpecializationInfo*			pSpecializationInfo = nullptr,
			const S_allocation_callbacks*		allocator_ = default_allocation_cb());

		std::shared_ptr<Pipeline_layout>    pipeline_layout;
		std::shared_ptr<Pipeline_cache>     pipeline_cache;
		std::shared_ptr<Shader_module>      shader_module;

		std::shared_ptr<Compute_pipeline>	base_pipeline;

		VkPipeline  handle;
	};

	//还要做批量创建pipeline
	class Graphics_pipeline
		:public std::enable_shared_from_this<Graphics_pipeline> {
	private:
		friend class Pipeline_layout;

		Graphics_pipeline(
			std::shared_ptr<Pipeline_cache> pipeline_cache_,
			std::shared_ptr<Pipeline_layout> pipeline_layout_,
			std::shared_ptr<std::shared_ptr<Shader_module>> shader_modules_,
			std::shared_ptr<Render_pass> render_pass_);

		const S_allocation_callbacks* allocation_callbacks;
	public:
		using Sptr = std::shared_ptr<Graphics_pipeline>;

		~Graphics_pipeline();

		std::shared_ptr<Pipeline_cache>					pipeline_cache;
		std::shared_ptr<Pipeline_layout>				pipeline_layout;
		std::shared_ptr<Render_pass>					render_pass;
		std::vector<std::shared_ptr<Shader_module>>     shader_modules;

		VkPipeline handle;
	};

	class Surface {
		//顺序上放最后边做 暂时不给直接的画面了.
	};

	struct Pramater_choose_memory_type {
		uint32_t memory_type_count;
		VkMemoryType* memory_types;
	};
	struct Pramater_choose_result
	{
		uint32_t memory_type_index;
	};
	struct Device_api {
		table_vk_api_device(vk_fun ZK, , , YK FH);
		table_vk_api_cmd(vk_fun ZK, , , YK FH);
	};

	class Device : public std::enable_shared_from_this<Device> {
	private:
		friend class Device_creator;
		friend class Instance;

		Device(
			std::shared_ptr<Instance> instance_,
			std::shared_ptr<Device_creator> device_creator_,
			std::vector<Physical_device*>& physical_devices_,
			std::vector<User_choose_queue_info>& queue_infos_,
			std::vector<VkQueueFamilyProperties>& qf_properties_,
			VkDevice handle_,
			const S_allocation_callbacks* allocation_callbacks_);

		PFN_vkVoidFunction return_api(const char* api_name_);
	public:
		using Sptr = std::shared_ptr<Device>;

		~Device();

		Device_api api;

		const S_allocation_callbacks* allocation_callbacks;

		//std::vector<Queue> queues;
		std::vector<Queue_family> queue_familys;

		std::shared_ptr<Instance> instance;
		std::shared_ptr<Device_creator> device_creator;
		std::vector<Physical_device*> physical_devices;
		VkDevice handle;

		std::shared_ptr <Semaphore> get_a_semaphore(
			const void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr <Fence> get_a_fence(
			const void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr <Event> get_a_event(
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Shader_module> get_a_shader_module(
			const uint32_t*     code_ptr_,
			size_t              code_size_,
			const void* next_	= nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Device_memory> get_a_device_memory(
			VkDeviceSize memory_size_,
			bool(*choose_memory_type_index_)(
				Pramater_choose_memory_type& pramater_choose_,
				Pramater_choose_result& choose_result_),
			void* next_ = nullptr,
			const S_allocation_callbacks* allocation_callbacks_ = default_allocation_cb());

		std::shared_ptr<Buffer> get_a_buffer(
			VkDeviceSize		buffer_size_,
			F_buffer_create     create_flags_,
			F_buffer_usage	    usage_flags_,
			E_sharing_mode		sharing_mode_,
			Array_value<uint32_t> queue_family_indices_,
			const void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Image> get_a_image(
			F_image_create          create_fb_,
			VkImageType             imageType_,
			VkFormat                format_,
			VkExtent3D              extent_,
			uint32_t                mipLevels_,
			uint32_t                arrayLayers_,
			F_sample_count          samples_,
			F_image_usage           usage_fb_,
			VkSharingMode           sharingMode_,
			VkImageTiling           tiling_,
			Array_value<uint32_t>	queue_family_indices_,
			E_image_layout           initialLayout_,
			const void*             next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Sampler> get_a_sampler(
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
			const void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb() );

		std::shared_ptr<Sampler_Ycbcr_conversion> get_a_sampler_ycbcr_conversion(
			VkFormat                        format_,
			VkSamplerYcbcrModelConversion   ycbcrModel,
			VkSamplerYcbcrRange             ycbcrRange,
			VkComponentMapping              components,
			VkChromaLocation                xChromaOffset,
			VkChromaLocation                yChromaOffset,
			VkFilter                        chromaFilter,
			VkBool32                        forceExplicitReconstruction,
			const void*                     next_ = nullptr,
			const S_allocation_callbacks*    allocator_ = default_allocation_cb());

		std::shared_ptr<Command_pool> get_a_command_pool(
			uint32_t                    queueFamilyIndex,
			F_command_pool_create       flags_,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Descriptor_pool> get_a_descriptor_pool(
			uint32_t                                maxSets,
			Array_value<VkDescriptorPoolSize>       poolSizes,
            F_command_pool_create                   flags_,
			const S_allocation_callbacks*            allocator_ = default_allocation_cb());

		std::shared_ptr<Query_pool> get_a_query_pool(
			VkQueryType query_type,
			uint32_t    query_count,
			F_query_pipeline_statistic queue_pipeline_statistic_flags_,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Descriptor_set_layout> get_a_descriptor_set_layout(
            VkDescriptorSetLayoutCreateFlags				flags_,//手册中有但vk.xml中没有
			Array_value<VkDescriptorSetLayoutBinding>	    bindings_ = {},
			const void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Render_pass> get_a_render_pass(
			Array_value<VkAttachmentDescription> attachments = {},
			Array_value<VkSubpassDescription> subpasses = {},
			Array_value<VkSubpassDependency> dependencies = {},
			const void* next_ = nullptr,
			const S_allocation_callbacks* allocator_ =default_allocation_cb());

		std::shared_ptr<Pipeline_layout> get_a_pipeline_layout(
			Array_value<VkPushConstantRange>  push_constant_ranges_ = {},
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		std::shared_ptr<Pipeline_cache> get_a_pipeline_cache(
			size_t      initial_data_size = 0,
			const void* initial_data_ = nullptr,
			const S_allocation_callbacks* allocator_ = default_allocation_cb());

		VkResult invalidate_mapped_memory_ranges(
			Array_value<VkMappedMemoryRange> mapped_memory_ranges_);

		F_peer_memory_feature get_peer_memory_feature(
			uint32_t                                    heapIndex_,
			uint32_t                                    localDeviceIndex_,
			uint32_t                                    remoteDeviceIndex_);

		VkResult wait_idle();
		VkResult wait_for_fences(
			Array_value<VkFence> fences_, 
			uint64_t timeout_,
			bool wait_all_ = true);
	};

#define table_laka_vk_objs(a,aa, bb, b) \
a aa##Instance##bb b \
a aa##Semaphore##bb b \
a aa##Fence##bb b \
a aa##Event##bb b \
a aa##Shader_module##bb b \
a aa##Device_memory##bb b \
a aa##Buffer_view##bb b \
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
a aa##Device##bb b \

	/**/
}}
