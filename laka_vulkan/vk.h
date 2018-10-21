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


/*
todo:
    很多Vk对象都会有放在一个数组中处理的情况 需要有一种新方式来处理

*/

table_vk_flag(std::shared_ptr<std::string> mean ZK, , s, YK FH);
table_vk_flag(std::shared_ptr<std::string> mean ZK, , Bits, YK FH);
table_vk_enum(std::shared_ptr<std::string> mean ZK, , , YK FH);

namespace laka {namespace vk {
#include "classes.h"

    Module_handle get_vk_module();

    PFN_vkVoidFunction get_instance_proc_address(
        VkInstance instance_, const char* function_name_);
    
    void show_result(VkResult ret_);
    void show_result_assert(VkResult ret_);

    std::string version_str(uint32_t version);

    uint32_t get_instance_version();

    //默认的S_allocation_callbacks指针
    //使用它作为实参时,vk的子对象创建时就使用父对象的S_allocation_callbacks
    //有更好的建议?
    S_allocation_callbacks* default_allocation_cb();

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
            Array_value<const char*> enabled_extension_names_   = {},
            uint32_t                api_version_        = VK_MAKE_VERSION(1, 1, 82),
            N_instance_create_info  next_               = {},
            S_allocation_callbacks*const allocator_     = nullptr,
            Array_value<const char*>enabled_layer_names_= {},
            const char*             app_name_           = "laka::vk",
            uint32_t                app_version_        = VK_MAKE_VERSION(0, 0, 1),
            const char*             engine_name_        = "laka::vk::engine",
            uint32_t                engine_version_     = VK_MAKE_VERSION(0, 0, 1));

        std::shared_ptr<Device_creator> get_a_device_creator(
            bool(*choose_physical_device_)(Pramater_choose_physical_device& pramater_),
            bool(*choose_queue_family_)(Pramater_choose_queue_family& pramater_),
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        const VkInstance                    handle;
        S_allocation_callbacks*const        allocator_callbacks_ptr;
        std::vector<Physical_device_group>  physical_device_groups;
        std::vector<Physical_device>        physical_devices;

        struct {
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
            Fence&                      fence);
        //...
        VkResult bind_sparse(
            std::vector<S_bind_sparse_info>&    pBindInfo,
            Fence&                              fence);
    };

    class Device_creator : public std::enable_shared_from_this<Device_creator> {
    public:
        using Sptr = std::shared_ptr<Device_creator>;

        std::shared_ptr<Device> get_a_device(
            Physical_device& physical_device_,
            S_device_create_info& create_info_);

        std::shared_ptr<Device> get_a_device(
            Physical_device& physical_device_,
            Array_value<char*> enabled_extensions_  = {},
            S_physical_device_features* features_   = nullptr);//todo:这里可以接收匿名函数回调

        std::shared_ptr<Device> get_a_device(
            Physical_device_group& physica_device_group_,
            Array_value<char*> enabled_extensions_  = {},
            S_physical_device_features* features_    = nullptr);//todo:这里可以接收匿名函数回调

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

    //提供复数形式的对象 尽量不涉及生命周期
    //(因为有些api执行时需要暂时hold住,所以肯定会有涉及 修正生命周期时再处理
    //class Buffer_views
    //    :public std::shared_ptr<Buffer_views>{
    //public:
    //    using Sptr = std::shared_ptr<Buffer_views>;
    //    Buffer_views();
    //    Buffer_views(std::initializer_list<Buffer_view>);
    //    Buffer_views& operator+(std::initializer_list<Buffer>);
    //    std::vector<VkBuffer> handles;
    //};

#if 1

#define dclr_sclass( name__, handle_type__) \
    class name__##s : public std::enable_shared_from_this<name__##s>    {\
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
    public:
        using Sptr = std::shared_ptr<Semaphore>;
        ~Semaphore();

        const VkSemaphore handle;
        std::shared_ptr<Device> device;
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
        ~Fence();

        VkResult reset();
        VkResult reset(Array_value<VkFence> fences_);
        VkResult get_status();
        VkResult wait(uint64_t timeout_);
        VkResult wait(bool wait_all_, uint64_t timeout_, Array_value<VkFence> fences_);

        const VkFence handle;
        std::shared_ptr<Device> device;
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
        ~Event();

        VkResult set();
        VkResult get_event_status();
        void reset();

        const VkEvent handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Event(
            std::shared_ptr<Device>         device_,
            VkEvent                         handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Shader_module:public std::enable_shared_from_this<Shader_module> {
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
        ~Device_memory();

        VkDeviceSize get_commitment();

        void* map_memory(
            VkDeviceSize        offset_,
            VkDeviceSize        size_,
            VkMemoryMapFlags    flags_ = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        void unmap_memory();

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

    class Buffer_view : public std::enable_shared_from_this<Buffer_view> {
    public:
        using Sptr = std::shared_ptr<Buffer_view>;
        ~Buffer_view();

        const VkBufferView handle;
        std::shared_ptr<Buffer> buffer;
    private:
        friend class Buffer;
        Buffer_view(
            std::shared_ptr<Buffer>         buffer_,
            VkBufferView                    handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Buffer :public std::enable_shared_from_this<Buffer> {
    public:
        using Sptr = std::shared_ptr<Buffer>;
        ~Buffer();

        S_memory_requirements get_memory_requirements();

        std::shared_ptr<Buffer_view> get_a_buffer_view(
            E_format        format_,
            VkDeviceSize    offset_,
            VkDeviceSize    range_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb() );

        VkResult bind(
            std::shared_ptr<Device_memory> device_memroy_,
            VkDeviceSize memory_offset_);//绑定后是否会影响生命周期? 待查待提问.

        const VkBuffer handle;
        std::shared_ptr<Device> device;
    private:
        friend class Device;
        Buffer(
            std::shared_ptr<Device>         device_,
            VkBuffer                        handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

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

    class Image : public std::enable_shared_from_this<Image> {
    public:
        using Sptr = std::shared_ptr<Image>;
        ~Image();

        std::shared_ptr<Image_view> get_a_image_view(
            E_image_view_type                view_type_,
            E_format                    format_,
            S_component_mapping         components_,
            S_image_subresource_range   subresourceRange_,
            N_image_view_create_info         next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb() );

        S_memory_requirements get_image_memory_requirements();

        S_subresource_layout get_subresource_layout(const S_image_subresource*);
        //...
        std::shared_ptr<std::vector<S_sparse_image_memory_requirements>> 
            get_sparse_memory_requirements();

        VkResult bind(
            std::shared_ptr<Device_memory> device_memory_,
            VkDeviceSize memory_offset_);

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

    class Sampler_Ycbcr_conversion : public std::enable_shared_from_this<Sampler_Ycbcr_conversion>{
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

    //Command_buffer,Descriptor_set
        //是否应当只做成Command_buffers Descriptor_sets.
    class Command_buffer_base {
    public:
        VkResult begin(
            F_command_buffer_usage                  flags_,
            const S_command_buffer_inheritance_info*pInheritanceInfo_ = nullptr,
            N_command_buffer_begin_info   pNext_ = {} );

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
            E_pipeline_bind_point   pipelineBindPoint,
            Pipeline_layout&        layout,
            uint32_t                firstSet,
            Descriptor_set_s&       descriptor_sets,
            Array_value<uint32_t>   dynamic_offsets);

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

        void commands_execute(Command_buffer_s& pCommandBuffers_);

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
            Array_value<S_buffer_copy>  pRegions_);

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
            N_render_pass_begin_info    pNext_ = {} );

        void next_subpass(E_subpass_contents contents_);

        void render_pass_end();

        void wait_events(
            Array_value<std::shared_ptr<Event>> events_,
            F_pipeline_stage                    srcStageMask_,
            F_pipeline_stage                    dstStageMask_,
            Array_value<S_memory_barrier>       memory_barriers_,
            Array_value<S_buffer_memory_barrier>buffer_memory_barriers_,
            Array_value<S_image_memory_barrier> image_memory_barriers_);

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
        const VkCommandBuffer handle;
        Device_api* api;
    protected:
        Command_buffer_base();
    };

    class Command_buffer:   public Command_buffer_base, 
                            public std::enable_shared_from_this<Command_buffer> {
    public:
        using Sptr = std::shared_ptr<Command_buffer>;
        ~Command_buffer();

        std::shared_ptr<Command_pool>   command_pool;
    private:
        friend class Command_pool;
        Command_buffer(
            std::shared_ptr<Command_pool>   command_pool_, 
            VkCommandBuffer                 handle_);
    };

    class Command_buffer_s : public std::enable_shared_from_this<Command_buffer_s> {
    public:
        using Sptr = std::shared_ptr<Command_buffer_s>;
        using Command_buffer = Command_buffer_base;

        ~Command_buffer_s();

        std::vector<Command_buffer> elements;
        std::shared_ptr<Command_pool> command_pool;
    private:
        friend class Command_pool;
        Command_buffer_s(
            std::shared_ptr<Command_pool>   comman_pool_,
            std::vector<VkCommandBuffer>    handles_);
    };

    class Command_pool : public std::enable_shared_from_this<Command_pool> {
    public:
        using Sptr = std::shared_ptr<Command_pool>;
        ~Command_pool();

        std::shared_ptr<Command_buffer> get_a_command_buffer(E_command_buffer_level  level);
        /*
            vkAllocateCommandBuffers可用于创建多个命令缓冲区。
            如果任何这些命令缓冲区的创建失败，
            则实现必须从此命令中销毁所有成功创建的命令缓冲区对象，
            将pCommandBuffers阵列的所有条目设置为NULL并返回错误。
        */
        std::shared_ptr<Command_buffer_s> get_a_command_buffers(
            uint32_t                command_buffer_count_,
            E_command_buffer_level  level);

        VkResult reset(F_command_pool_reset flags);

        void trim(VkCommandPoolTrimFlags flags = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

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

    class Descriptor_set_base {
    public:
        const VkDescriptorSet handle;
    protected:
        Descriptor_set_base();
    };

    class Descriptor_set : public Descriptor_set_base
                         , public std::enable_shared_from_this<Descriptor_set> {
    public:
        using Sptr = std::shared_ptr<Descriptor_set>;
        ~Descriptor_set();

        void update_with_template(
            Descriptor_update_template& descriptorUpdateTemplate,
            const void*                 pData);

        void update(
            S_write_descriptor_set&     pDescriptorWrites,
            S_copy_descriptor_set&      pDescriptorCopies);

        std::shared_ptr<Descriptor_pool> descriptor_pool;
    private:
        friend Descriptor_pool;
        Descriptor_set(
            std::shared_ptr<Descriptor_pool>    descriptor_pool_,
            VkDescriptorSet                     handle_);
    };

    class Descriptor_set_s :public std::enable_shared_from_this<Descriptor_set_s> {
    public:
        using Sptr = std::shared_ptr<Descriptor_set_s>;
        using Descriptor_set = Descriptor_set_base;
        ~Descriptor_set_s();

        void update(
            Array_value<S_write_descriptor_set> pDescriptorWrites,
            Array_value<S_copy_descriptor_set>  pDescriptorCopies);

        std::vector<Descriptor_set> elements;
        std::shared_ptr<Descriptor_pool> descriptor_pool;
    private:
        friend class Descriptor_pool;
        Descriptor_set_s(
            std::shared_ptr<Descriptor_pool>    descriptor_pool_,
            std::vector<VkDescriptorSet>&       handles_);
    };

    class Descriptor_pool : public std::enable_shared_from_this<Descriptor_pool> {
    public:
        using Sptr = std::shared_ptr<Descriptor_pool>;
        ~Descriptor_pool();

        std::shared_ptr<Descriptor_set> get_a_descriptor_set(
            VkDescriptorSetLayout set_layout,
            N_descriptor_set_allocate_info next_ = {} );

        std::shared_ptr<Descriptor_set_s> get_descriptor_sets(
            //...
            std::vector<VkDescriptorSetLayout>& set_layouts,
            N_descriptor_set_allocate_info next_ = {});

        VkResult reset( VkDescriptorPoolResetFlags flags = 0);//is a bitmask type for setting a mask, but is currently reserved for future use.

        std::shared_ptr<Device> device;
        const VkDescriptorPool handle;
    private:
        friend class Device;
        Descriptor_pool(
            std::shared_ptr<Device>         device_,
            VkDescriptorPool                handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
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
    class Descriptor_update_template : public std::enable_shared_from_this<Descriptor_update_template> {
    public:
        using Sptr = std::shared_ptr<Descriptor_update_template>;
        ~Descriptor_update_template();

        std::shared_ptr<Descriptor_set_layout> descriptor_set_layout;
        std::shared_ptr<Pipeline_layout> pipeline_layout;

        const VkDescriptorUpdateTemplate handle;
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

    class Descriptor_set_layout : public std::enable_shared_from_this<Descriptor_set_layout> {
    public:
        using Sptr = std::shared_ptr<Descriptor_set_layout>;
        ~Descriptor_set_layout();

        std::shared_ptr<Descriptor_update_template> get_a_descriptor_update_template(
            Array_value<VkDescriptorUpdateTemplateEntry> entrys_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb()  );

        std::shared_ptr<Device> device;
        const VkDescriptorSetLayout handle;
    private:
        friend class Device;
        Descriptor_set_layout(
            std::shared_ptr<Device>         device_,
            VkDescriptorSetLayout           handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Query_pool : public std::enable_shared_from_this<Query_pool> {
    public:
        using Sptr = std::shared_ptr<Query_pool>;
        ~Query_pool();

        VkResult get_results(
            uint32_t        firstQuery_,
            uint32_t        queryCount_,
            size_t          dataSize_,
            void*           pData_,
            VkDeviceSize    stride_,
            F_query_result  flags_);

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

    class Frame_buffer : public std::enable_shared_from_this<Frame_buffer> {
    public:
        using Sptr = std::shared_ptr<Frame_buffer>;
        ~Frame_buffer();

        const VkFramebuffer handle;
        std::shared_ptr<Render_pass> render_pass;
    private:
        friend class Render_pass;
        Frame_buffer(
            std::shared_ptr<Render_pass>    render_pass_,
            VkFramebuffer                   handle_,
            S_allocation_callbacks*const   allocator_);

        S_allocation_callbacks*const allocation_callbacks;
    };

    class Render_pass :public std::enable_shared_from_this<Render_pass> {
    public:
        using Sptr = std::shared_ptr<Render_pass>;
        ~Render_pass();

        S_extent_2d get_area_granularity();

        std::shared_ptr<Frame_buffer> get_a_frame_buffer(
            Array_value<VkImageView> attachments,
            uint32_t width,
            uint32_t height,
            uint32_t layers,
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
            const VkSpecializationInfo*         pSpecializationInfo_ = nullptr,
            S_allocation_callbacks*const       allocator_ = default_allocation_cb());

        std::shared_ptr<Graphics_pipeline> get_a_graphics_pipeline(
            F_pipeline_create                                   flag_,
            Render_pass&                                        render_pass_,
            uint32_t                                            subpass,
            Pipeline_cache*                                     cache_,
            Array_value<S_pipeline_shader_stage_create_info>    stages_,
            const S_pipeline_vertex_input_state_create_info*    vertex_input_state_,
            const S_pipeline_input_assembly_state_create_info*  input_assembly_state_,
            const S_pipeline_tessellation_domain_origin_state_create_info*    tessellation_state_,
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
        ~Pipeline_cache();
        //std::shared_ptr<std::vector<char>> get_data();
        //对pData这种,大概得用vector<uchar>
        VkResult get_data(size_t* pDataSize, void* pData);
        VkResult merge(Pipeline_cache&  srcCache);

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
            S_allocation_callbacks*const       allocation_callbacks_,
            int32_t base_index_ = -1,
            std::shared_ptr<Compute_pipeline>   compute_pipeline_ = nullptr);

        S_allocation_callbacks*const allocation_callbacks;
        int32_t index;
    };

    //还要做批量创建pipeline
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

    class Surface {
        //顺序上放最后边做 暂时不给直接的画面了.
    };

    struct Pramater_choose_memory_type {
        uint32_t        memory_type_count;
        S_memory_type*   memory_types;
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
    public:
        using Sptr = std::shared_ptr<Device>;
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
            N_sampler_create_info   next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb() );

        std::shared_ptr<Sampler_Ycbcr_conversion> get_a_sampler_ycbcr_conversion(
            E_format                            format_,
            E_sampler_ycbcr_model_conversion    ycbcrModel,
            E_sampler_ycbcr_range               ycbcrRange,
            S_component_mapping             components,
            E_chroma_location               xChromaOffset,
            E_chroma_location               yChromaOffset,
            E_filter                        chromaFilter,
            VkBool32                        forceExplicitReconstruction,
            N_sampler_ycbcr_conversion_create_info next_ = {},
            S_allocation_callbacks*const    allocator_ = default_allocation_cb());

        std::shared_ptr<Command_pool> get_a_command_pool(
            uint32_t                        queueFamilyIndex_,
            F_command_pool_create           flags_,
            S_allocation_callbacks*const   allocator_ = default_allocation_cb());

        std::shared_ptr<Descriptor_pool> get_a_descriptor_pool(
            uint32_t                                maxSets_,
            Array_value<S_descriptor_pool_size>     poolSizes_,
            F_command_pool_create                   flags_,
            S_allocation_callbacks*const           allocator_ = default_allocation_cb());

        std::shared_ptr<Query_pool> get_a_query_pool(
            E_query_type                query_type,
            uint32_t                    query_count,
            F_query_pipeline_statistic  queue_pipeline_statistic_flags_,
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Descriptor_set_layout> get_a_descriptor_set_layout(
            F_descriptor_set_layout_create                  flags_,//手册中有但vk.xml中没有
            Array_value<S_descriptor_set_layout_binding>    bindings_ = {},
            N_descriptor_set_allocate_info                  next_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Render_pass> get_a_render_pass(
            Array_value<S_attachment_description>   attachments = {},
            Array_value<S_subpass_description>      subpasses = {},
            Array_value<S_subpass_dependency>       dependencies = {},
            N_render_pass_create_info               next_ = {},
            S_allocation_callbacks*const allocator_ =default_allocation_cb());

        std::shared_ptr<Pipeline_layout> get_a_pipeline_layout(
            Array_value<S_push_constant_range>  push_constant_ranges_ = {},
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

        std::shared_ptr<Pipeline_cache> get_a_pipeline_cache(
            size_t      initial_data_size = 0,
            const void* initial_data_ = nullptr,
            S_allocation_callbacks*const allocator_ = default_allocation_cb());

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

        Device_api api;

        const VkDevice handle;
        S_allocation_callbacks*const allocation_callbacks;
        //std::vector<Queue> queues;
        std::vector<Queue_family> queue_familys;

        std::shared_ptr<Instance> instance;
        std::shared_ptr<Device_creator> device_creator;
        std::vector<Physical_device*> physical_devices;
    private:
        friend class Device_creator;
        friend class Instance;
        Device(
            std::shared_ptr<Instance>               instance_,
            std::shared_ptr<Device_creator>         device_creator_,
            std::vector<Physical_device*>&          physical_devices_,
            std::vector<User_choose_queue_info>&    queue_infos_,
            std::vector<S_queue_family_properties>&   qf_properties_,
            VkDevice                                handle_,
            S_allocation_callbacks*const allocation_callbacks_);

        PFN_vkVoidFunction return_api(const char* api_name_);
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
