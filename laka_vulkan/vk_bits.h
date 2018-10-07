/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#pragma once
#include "vulkan/vulkan.h"
#include "common.h"
namespace laka { namespace vk {
class F_cull_mode {
private:
F_cull_mode(int flag_);
public:
int flag;
enum class Bits{
e_none = VK_CULL_MODE_NONE,
e_front = VK_CULL_MODE_FRONT_BIT,
e_back = VK_CULL_MODE_BACK_BIT,
e_front_and_back = VK_CULL_MODE_FRONT_AND_BACK,
};
F_cull_mode();
F_cull_mode(Bits bits_);
F_cull_mode(F_cull_mode const& flag_);
F_cull_mode(std::initializer_list<Bits> bit_list);
F_cull_mode& operator = (F_cull_mode flag_);
F_cull_mode operator | (Bits bit_);
F_cull_mode& operator |= (Bits bit_);
F_cull_mode operator | (F_cull_mode flag_);
F_cull_mode& operator |= (F_cull_mode flag_);
F_cull_mode operator & (F_cull_mode flag_);
F_cull_mode& operator &= (F_cull_mode flag_);
F_cull_mode operator ^ (F_cull_mode flag_);
F_cull_mode& operator ^= (F_cull_mode flag_);
F_cull_mode operator ~ ();
bool operator !();
bool operator == (F_cull_mode flag_);
bool operator == (Bits bit_);
bool operator != (F_cull_mode flag_);
bool operator != (Bits bit_);
operator bool();
F_cull_mode all_flags();
F_cull_mode& clear();
VkCullModeFlagBits get();
F_cull_mode& e_none_on();
F_cull_mode& e_none_off();
F_cull_mode& e_front_on();
F_cull_mode& e_front_off();
F_cull_mode& e_back_on();
F_cull_mode& e_back_off();
F_cull_mode& e_front_and_back_on();
F_cull_mode& e_front_and_back_off();
};
F_cull_mode operator|(F_cull_mode::Bits bit1_,F_cull_mode::Bits bit2_);


class F_queue {
private:
F_queue(int flag_);
public:
int flag;
enum class Bits{
e_graphics = VK_QUEUE_GRAPHICS_BIT,
e_compute = VK_QUEUE_COMPUTE_BIT,
e_transfer = VK_QUEUE_TRANSFER_BIT,
e_sparse_binding = VK_QUEUE_SPARSE_BINDING_BIT,
};
F_queue();
F_queue(Bits bits_);
F_queue(F_queue const& flag_);
F_queue(std::initializer_list<Bits> bit_list);
F_queue& operator = (F_queue flag_);
F_queue operator | (Bits bit_);
F_queue& operator |= (Bits bit_);
F_queue operator | (F_queue flag_);
F_queue& operator |= (F_queue flag_);
F_queue operator & (F_queue flag_);
F_queue& operator &= (F_queue flag_);
F_queue operator ^ (F_queue flag_);
F_queue& operator ^= (F_queue flag_);
F_queue operator ~ ();
bool operator !();
bool operator == (F_queue flag_);
bool operator == (Bits bit_);
bool operator != (F_queue flag_);
bool operator != (Bits bit_);
operator bool();
F_queue all_flags();
F_queue& clear();
VkQueueFlagBits get();
F_queue& e_graphics_on();
F_queue& e_graphics_off();
F_queue& e_compute_on();
F_queue& e_compute_off();
F_queue& e_transfer_on();
F_queue& e_transfer_off();
F_queue& e_sparse_binding_on();
F_queue& e_sparse_binding_off();
};
F_queue operator|(F_queue::Bits bit1_,F_queue::Bits bit2_);


class F_memory_property {
private:
F_memory_property(int flag_);
public:
int flag;
enum class Bits{
e_device_local = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
e_host_visible = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT,
e_host_coherent = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
e_host_cached = VK_MEMORY_PROPERTY_HOST_CACHED_BIT,
e_lazily_allocated = VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT,
};
F_memory_property();
F_memory_property(Bits bits_);
F_memory_property(F_memory_property const& flag_);
F_memory_property(std::initializer_list<Bits> bit_list);
F_memory_property& operator = (F_memory_property flag_);
F_memory_property operator | (Bits bit_);
F_memory_property& operator |= (Bits bit_);
F_memory_property operator | (F_memory_property flag_);
F_memory_property& operator |= (F_memory_property flag_);
F_memory_property operator & (F_memory_property flag_);
F_memory_property& operator &= (F_memory_property flag_);
F_memory_property operator ^ (F_memory_property flag_);
F_memory_property& operator ^= (F_memory_property flag_);
F_memory_property operator ~ ();
bool operator !();
bool operator == (F_memory_property flag_);
bool operator == (Bits bit_);
bool operator != (F_memory_property flag_);
bool operator != (Bits bit_);
operator bool();
F_memory_property all_flags();
F_memory_property& clear();
VkMemoryPropertyFlagBits get();
F_memory_property& e_device_local_on();
F_memory_property& e_device_local_off();
F_memory_property& e_host_visible_on();
F_memory_property& e_host_visible_off();
F_memory_property& e_host_coherent_on();
F_memory_property& e_host_coherent_off();
F_memory_property& e_host_cached_on();
F_memory_property& e_host_cached_off();
F_memory_property& e_lazily_allocated_on();
F_memory_property& e_lazily_allocated_off();
};
F_memory_property operator|(F_memory_property::Bits bit1_,F_memory_property::Bits bit2_);


class F_memory_heap {
private:
F_memory_heap(int flag_);
public:
int flag;
enum class Bits{
e_device_local = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT,
};
F_memory_heap();
F_memory_heap(Bits bits_);
F_memory_heap(F_memory_heap const& flag_);
F_memory_heap(std::initializer_list<Bits> bit_list);
F_memory_heap& operator = (F_memory_heap flag_);
F_memory_heap operator | (Bits bit_);
F_memory_heap& operator |= (Bits bit_);
F_memory_heap operator | (F_memory_heap flag_);
F_memory_heap& operator |= (F_memory_heap flag_);
F_memory_heap operator & (F_memory_heap flag_);
F_memory_heap& operator &= (F_memory_heap flag_);
F_memory_heap operator ^ (F_memory_heap flag_);
F_memory_heap& operator ^= (F_memory_heap flag_);
F_memory_heap operator ~ ();
bool operator !();
bool operator == (F_memory_heap flag_);
bool operator == (Bits bit_);
bool operator != (F_memory_heap flag_);
bool operator != (Bits bit_);
operator bool();
F_memory_heap all_flags();
F_memory_heap& clear();
VkMemoryHeapFlagBits get();
F_memory_heap& e_device_local_on();
F_memory_heap& e_device_local_off();
};
F_memory_heap operator|(F_memory_heap::Bits bit1_,F_memory_heap::Bits bit2_);


class F_access {
private:
F_access(int flag_);
public:
int flag;
enum class Bits{
e_indirect_command_read = VK_ACCESS_INDIRECT_COMMAND_READ_BIT,
e_index_read = VK_ACCESS_INDEX_READ_BIT,
e_vertex_attribute_read = VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT,
e_uniform_read = VK_ACCESS_UNIFORM_READ_BIT,
e_input_attachment_read = VK_ACCESS_INPUT_ATTACHMENT_READ_BIT,
e_shader_read = VK_ACCESS_SHADER_READ_BIT,
e_shader_write = VK_ACCESS_SHADER_WRITE_BIT,
e_color_attachment_read = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT,
e_color_attachment_write = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
e_depth_stencil_attachment_read = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT,
e_depth_stencil_attachment_write = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT,
e_transfer_read = VK_ACCESS_TRANSFER_READ_BIT,
e_transfer_write = VK_ACCESS_TRANSFER_WRITE_BIT,
e_host_read = VK_ACCESS_HOST_READ_BIT,
e_host_write = VK_ACCESS_HOST_WRITE_BIT,
e_memory_read = VK_ACCESS_MEMORY_READ_BIT,
e_memory_write = VK_ACCESS_MEMORY_WRITE_BIT,
};
F_access();
F_access(Bits bits_);
F_access(F_access const& flag_);
F_access(std::initializer_list<Bits> bit_list);
F_access& operator = (F_access flag_);
F_access operator | (Bits bit_);
F_access& operator |= (Bits bit_);
F_access operator | (F_access flag_);
F_access& operator |= (F_access flag_);
F_access operator & (F_access flag_);
F_access& operator &= (F_access flag_);
F_access operator ^ (F_access flag_);
F_access& operator ^= (F_access flag_);
F_access operator ~ ();
bool operator !();
bool operator == (F_access flag_);
bool operator == (Bits bit_);
bool operator != (F_access flag_);
bool operator != (Bits bit_);
operator bool();
F_access all_flags();
F_access& clear();
VkAccessFlagBits get();
F_access& e_indirect_command_read_on();
F_access& e_indirect_command_read_off();
F_access& e_index_read_on();
F_access& e_index_read_off();
F_access& e_vertex_attribute_read_on();
F_access& e_vertex_attribute_read_off();
F_access& e_uniform_read_on();
F_access& e_uniform_read_off();
F_access& e_input_attachment_read_on();
F_access& e_input_attachment_read_off();
F_access& e_shader_read_on();
F_access& e_shader_read_off();
F_access& e_shader_write_on();
F_access& e_shader_write_off();
F_access& e_color_attachment_read_on();
F_access& e_color_attachment_read_off();
F_access& e_color_attachment_write_on();
F_access& e_color_attachment_write_off();
F_access& e_depth_stencil_attachment_read_on();
F_access& e_depth_stencil_attachment_read_off();
F_access& e_depth_stencil_attachment_write_on();
F_access& e_depth_stencil_attachment_write_off();
F_access& e_transfer_read_on();
F_access& e_transfer_read_off();
F_access& e_transfer_write_on();
F_access& e_transfer_write_off();
F_access& e_host_read_on();
F_access& e_host_read_off();
F_access& e_host_write_on();
F_access& e_host_write_off();
F_access& e_memory_read_on();
F_access& e_memory_read_off();
F_access& e_memory_write_on();
F_access& e_memory_write_off();
};
F_access operator|(F_access::Bits bit1_,F_access::Bits bit2_);


class F_buffer_usage {
private:
F_buffer_usage(int flag_);
public:
int flag;
enum class Bits{
e_transfer_src = VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
e_transfer_dst = VK_BUFFER_USAGE_TRANSFER_DST_BIT,
e_uniform_texel_buffer = VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT,
e_storage_texel_buffer = VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT,
e_uniform_buffer = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
e_storage_buffer = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,
e_index_buffer = VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
e_vertex_buffer = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
e_indirect_buffer = VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT,
};
F_buffer_usage();
F_buffer_usage(Bits bits_);
F_buffer_usage(F_buffer_usage const& flag_);
F_buffer_usage(std::initializer_list<Bits> bit_list);
F_buffer_usage& operator = (F_buffer_usage flag_);
F_buffer_usage operator | (Bits bit_);
F_buffer_usage& operator |= (Bits bit_);
F_buffer_usage operator | (F_buffer_usage flag_);
F_buffer_usage& operator |= (F_buffer_usage flag_);
F_buffer_usage operator & (F_buffer_usage flag_);
F_buffer_usage& operator &= (F_buffer_usage flag_);
F_buffer_usage operator ^ (F_buffer_usage flag_);
F_buffer_usage& operator ^= (F_buffer_usage flag_);
F_buffer_usage operator ~ ();
bool operator !();
bool operator == (F_buffer_usage flag_);
bool operator == (Bits bit_);
bool operator != (F_buffer_usage flag_);
bool operator != (Bits bit_);
operator bool();
F_buffer_usage all_flags();
F_buffer_usage& clear();
VkBufferUsageFlagBits get();
F_buffer_usage& e_transfer_src_on();
F_buffer_usage& e_transfer_src_off();
F_buffer_usage& e_transfer_dst_on();
F_buffer_usage& e_transfer_dst_off();
F_buffer_usage& e_uniform_texel_buffer_on();
F_buffer_usage& e_uniform_texel_buffer_off();
F_buffer_usage& e_storage_texel_buffer_on();
F_buffer_usage& e_storage_texel_buffer_off();
F_buffer_usage& e_uniform_buffer_on();
F_buffer_usage& e_uniform_buffer_off();
F_buffer_usage& e_storage_buffer_on();
F_buffer_usage& e_storage_buffer_off();
F_buffer_usage& e_index_buffer_on();
F_buffer_usage& e_index_buffer_off();
F_buffer_usage& e_vertex_buffer_on();
F_buffer_usage& e_vertex_buffer_off();
F_buffer_usage& e_indirect_buffer_on();
F_buffer_usage& e_indirect_buffer_off();
};
F_buffer_usage operator|(F_buffer_usage::Bits bit1_,F_buffer_usage::Bits bit2_);


class F_buffer_create {
private:
F_buffer_create(int flag_);
public:
int flag;
enum class Bits{
e_sparse_binding = VK_BUFFER_CREATE_SPARSE_BINDING_BIT,
e_sparse_residency = VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT,
e_sparse_aliased = VK_BUFFER_CREATE_SPARSE_ALIASED_BIT,
};
F_buffer_create();
F_buffer_create(Bits bits_);
F_buffer_create(F_buffer_create const& flag_);
F_buffer_create(std::initializer_list<Bits> bit_list);
F_buffer_create& operator = (F_buffer_create flag_);
F_buffer_create operator | (Bits bit_);
F_buffer_create& operator |= (Bits bit_);
F_buffer_create operator | (F_buffer_create flag_);
F_buffer_create& operator |= (F_buffer_create flag_);
F_buffer_create operator & (F_buffer_create flag_);
F_buffer_create& operator &= (F_buffer_create flag_);
F_buffer_create operator ^ (F_buffer_create flag_);
F_buffer_create& operator ^= (F_buffer_create flag_);
F_buffer_create operator ~ ();
bool operator !();
bool operator == (F_buffer_create flag_);
bool operator == (Bits bit_);
bool operator != (F_buffer_create flag_);
bool operator != (Bits bit_);
operator bool();
F_buffer_create all_flags();
F_buffer_create& clear();
VkBufferCreateFlagBits get();
F_buffer_create& e_sparse_binding_on();
F_buffer_create& e_sparse_binding_off();
F_buffer_create& e_sparse_residency_on();
F_buffer_create& e_sparse_residency_off();
F_buffer_create& e_sparse_aliased_on();
F_buffer_create& e_sparse_aliased_off();
};
F_buffer_create operator|(F_buffer_create::Bits bit1_,F_buffer_create::Bits bit2_);


class F_shader_stage {
private:
F_shader_stage(int flag_);
public:
int flag;
enum class Bits{
e_vertex = VK_SHADER_STAGE_VERTEX_BIT,
e_tessellation_control = VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT,
e_tessellation_evaluation = VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT,
e_geometry = VK_SHADER_STAGE_GEOMETRY_BIT,
e_fragment = VK_SHADER_STAGE_FRAGMENT_BIT,
e_compute = VK_SHADER_STAGE_COMPUTE_BIT,
e_all_graphics = VK_SHADER_STAGE_ALL_GRAPHICS,
e_all = VK_SHADER_STAGE_ALL,
};
F_shader_stage();
F_shader_stage(Bits bits_);
F_shader_stage(F_shader_stage const& flag_);
F_shader_stage(std::initializer_list<Bits> bit_list);
F_shader_stage& operator = (F_shader_stage flag_);
F_shader_stage operator | (Bits bit_);
F_shader_stage& operator |= (Bits bit_);
F_shader_stage operator | (F_shader_stage flag_);
F_shader_stage& operator |= (F_shader_stage flag_);
F_shader_stage operator & (F_shader_stage flag_);
F_shader_stage& operator &= (F_shader_stage flag_);
F_shader_stage operator ^ (F_shader_stage flag_);
F_shader_stage& operator ^= (F_shader_stage flag_);
F_shader_stage operator ~ ();
bool operator !();
bool operator == (F_shader_stage flag_);
bool operator == (Bits bit_);
bool operator != (F_shader_stage flag_);
bool operator != (Bits bit_);
operator bool();
F_shader_stage all_flags();
F_shader_stage& clear();
VkShaderStageFlagBits get();
F_shader_stage& e_vertex_on();
F_shader_stage& e_vertex_off();
F_shader_stage& e_tessellation_control_on();
F_shader_stage& e_tessellation_control_off();
F_shader_stage& e_tessellation_evaluation_on();
F_shader_stage& e_tessellation_evaluation_off();
F_shader_stage& e_geometry_on();
F_shader_stage& e_geometry_off();
F_shader_stage& e_fragment_on();
F_shader_stage& e_fragment_off();
F_shader_stage& e_compute_on();
F_shader_stage& e_compute_off();
F_shader_stage& e_all_graphics_on();
F_shader_stage& e_all_graphics_off();
F_shader_stage& e_all_on();
F_shader_stage& e_all_off();
};
F_shader_stage operator|(F_shader_stage::Bits bit1_,F_shader_stage::Bits bit2_);


class F_image_usage {
private:
F_image_usage(int flag_);
public:
int flag;
enum class Bits{
e_transfer_src = VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
e_transfer_dst = VK_IMAGE_USAGE_TRANSFER_DST_BIT,
e_sampled = VK_IMAGE_USAGE_SAMPLED_BIT,
e_storage = VK_IMAGE_USAGE_STORAGE_BIT,
e_color_attachment = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT,
e_depth_stencil_attachment = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,
e_transient_attachment = VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT,
e_input_attachment = VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT,
};
F_image_usage();
F_image_usage(Bits bits_);
F_image_usage(F_image_usage const& flag_);
F_image_usage(std::initializer_list<Bits> bit_list);
F_image_usage& operator = (F_image_usage flag_);
F_image_usage operator | (Bits bit_);
F_image_usage& operator |= (Bits bit_);
F_image_usage operator | (F_image_usage flag_);
F_image_usage& operator |= (F_image_usage flag_);
F_image_usage operator & (F_image_usage flag_);
F_image_usage& operator &= (F_image_usage flag_);
F_image_usage operator ^ (F_image_usage flag_);
F_image_usage& operator ^= (F_image_usage flag_);
F_image_usage operator ~ ();
bool operator !();
bool operator == (F_image_usage flag_);
bool operator == (Bits bit_);
bool operator != (F_image_usage flag_);
bool operator != (Bits bit_);
operator bool();
F_image_usage all_flags();
F_image_usage& clear();
VkImageUsageFlagBits get();
F_image_usage& e_transfer_src_on();
F_image_usage& e_transfer_src_off();
F_image_usage& e_transfer_dst_on();
F_image_usage& e_transfer_dst_off();
F_image_usage& e_sampled_on();
F_image_usage& e_sampled_off();
F_image_usage& e_storage_on();
F_image_usage& e_storage_off();
F_image_usage& e_color_attachment_on();
F_image_usage& e_color_attachment_off();
F_image_usage& e_depth_stencil_attachment_on();
F_image_usage& e_depth_stencil_attachment_off();
F_image_usage& e_transient_attachment_on();
F_image_usage& e_transient_attachment_off();
F_image_usage& e_input_attachment_on();
F_image_usage& e_input_attachment_off();
};
F_image_usage operator|(F_image_usage::Bits bit1_,F_image_usage::Bits bit2_);


class F_image_create {
private:
F_image_create(int flag_);
public:
int flag;
enum class Bits{
e_sparse_binding = VK_IMAGE_CREATE_SPARSE_BINDING_BIT,
e_sparse_residency = VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT,
e_sparse_aliased = VK_IMAGE_CREATE_SPARSE_ALIASED_BIT,
e_mutable_format = VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT,
e_cube_compatible = VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT,
};
F_image_create();
F_image_create(Bits bits_);
F_image_create(F_image_create const& flag_);
F_image_create(std::initializer_list<Bits> bit_list);
F_image_create& operator = (F_image_create flag_);
F_image_create operator | (Bits bit_);
F_image_create& operator |= (Bits bit_);
F_image_create operator | (F_image_create flag_);
F_image_create& operator |= (F_image_create flag_);
F_image_create operator & (F_image_create flag_);
F_image_create& operator &= (F_image_create flag_);
F_image_create operator ^ (F_image_create flag_);
F_image_create& operator ^= (F_image_create flag_);
F_image_create operator ~ ();
bool operator !();
bool operator == (F_image_create flag_);
bool operator == (Bits bit_);
bool operator != (F_image_create flag_);
bool operator != (Bits bit_);
operator bool();
F_image_create all_flags();
F_image_create& clear();
VkImageCreateFlagBits get();
F_image_create& e_sparse_binding_on();
F_image_create& e_sparse_binding_off();
F_image_create& e_sparse_residency_on();
F_image_create& e_sparse_residency_off();
F_image_create& e_sparse_aliased_on();
F_image_create& e_sparse_aliased_off();
F_image_create& e_mutable_format_on();
F_image_create& e_mutable_format_off();
F_image_create& e_cube_compatible_on();
F_image_create& e_cube_compatible_off();
};
F_image_create operator|(F_image_create::Bits bit1_,F_image_create::Bits bit2_);


class F_pipeline_create {
private:
F_pipeline_create(int flag_);
public:
int flag;
enum class Bits{
e_disable_optimization = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT,
e_allow_derivatives = VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT,
e_derivative = VK_PIPELINE_CREATE_DERIVATIVE_BIT,
};
F_pipeline_create();
F_pipeline_create(Bits bits_);
F_pipeline_create(F_pipeline_create const& flag_);
F_pipeline_create(std::initializer_list<Bits> bit_list);
F_pipeline_create& operator = (F_pipeline_create flag_);
F_pipeline_create operator | (Bits bit_);
F_pipeline_create& operator |= (Bits bit_);
F_pipeline_create operator | (F_pipeline_create flag_);
F_pipeline_create& operator |= (F_pipeline_create flag_);
F_pipeline_create operator & (F_pipeline_create flag_);
F_pipeline_create& operator &= (F_pipeline_create flag_);
F_pipeline_create operator ^ (F_pipeline_create flag_);
F_pipeline_create& operator ^= (F_pipeline_create flag_);
F_pipeline_create operator ~ ();
bool operator !();
bool operator == (F_pipeline_create flag_);
bool operator == (Bits bit_);
bool operator != (F_pipeline_create flag_);
bool operator != (Bits bit_);
operator bool();
F_pipeline_create all_flags();
F_pipeline_create& clear();
VkPipelineCreateFlagBits get();
F_pipeline_create& e_disable_optimization_on();
F_pipeline_create& e_disable_optimization_off();
F_pipeline_create& e_allow_derivatives_on();
F_pipeline_create& e_allow_derivatives_off();
F_pipeline_create& e_derivative_on();
F_pipeline_create& e_derivative_off();
};
F_pipeline_create operator|(F_pipeline_create::Bits bit1_,F_pipeline_create::Bits bit2_);


class F_color_component {
private:
F_color_component(int flag_);
public:
int flag;
enum class Bits{
e_r = VK_COLOR_COMPONENT_R_BIT,
e_g = VK_COLOR_COMPONENT_G_BIT,
e_b = VK_COLOR_COMPONENT_B_BIT,
e_a = VK_COLOR_COMPONENT_A_BIT,
};
F_color_component();
F_color_component(Bits bits_);
F_color_component(F_color_component const& flag_);
F_color_component(std::initializer_list<Bits> bit_list);
F_color_component& operator = (F_color_component flag_);
F_color_component operator | (Bits bit_);
F_color_component& operator |= (Bits bit_);
F_color_component operator | (F_color_component flag_);
F_color_component& operator |= (F_color_component flag_);
F_color_component operator & (F_color_component flag_);
F_color_component& operator &= (F_color_component flag_);
F_color_component operator ^ (F_color_component flag_);
F_color_component& operator ^= (F_color_component flag_);
F_color_component operator ~ ();
bool operator !();
bool operator == (F_color_component flag_);
bool operator == (Bits bit_);
bool operator != (F_color_component flag_);
bool operator != (Bits bit_);
operator bool();
F_color_component all_flags();
F_color_component& clear();
VkColorComponentFlagBits get();
F_color_component& e_r_on();
F_color_component& e_r_off();
F_color_component& e_g_on();
F_color_component& e_g_off();
F_color_component& e_b_on();
F_color_component& e_b_off();
F_color_component& e_a_on();
F_color_component& e_a_off();
};
F_color_component operator|(F_color_component::Bits bit1_,F_color_component::Bits bit2_);


class F_fence_create {
private:
F_fence_create(int flag_);
public:
int flag;
enum class Bits{
e_signaled = VK_FENCE_CREATE_SIGNALED_BIT,
};
F_fence_create();
F_fence_create(Bits bits_);
F_fence_create(F_fence_create const& flag_);
F_fence_create(std::initializer_list<Bits> bit_list);
F_fence_create& operator = (F_fence_create flag_);
F_fence_create operator | (Bits bit_);
F_fence_create& operator |= (Bits bit_);
F_fence_create operator | (F_fence_create flag_);
F_fence_create& operator |= (F_fence_create flag_);
F_fence_create operator & (F_fence_create flag_);
F_fence_create& operator &= (F_fence_create flag_);
F_fence_create operator ^ (F_fence_create flag_);
F_fence_create& operator ^= (F_fence_create flag_);
F_fence_create operator ~ ();
bool operator !();
bool operator == (F_fence_create flag_);
bool operator == (Bits bit_);
bool operator != (F_fence_create flag_);
bool operator != (Bits bit_);
operator bool();
F_fence_create all_flags();
F_fence_create& clear();
VkFenceCreateFlagBits get();
F_fence_create& e_signaled_on();
F_fence_create& e_signaled_off();
};
F_fence_create operator|(F_fence_create::Bits bit1_,F_fence_create::Bits bit2_);


class F_format_feature {
private:
F_format_feature(int flag_);
public:
int flag;
enum class Bits{
e_sampled_image = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT,
e_storage_image = VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT,
e_storage_image_atomic = VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT,
e_uniform_texel_buffer = VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT,
e_storage_texel_buffer = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT,
e_storage_texel_buffer_atomic = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT,
e_vertex_buffer = VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
e_color_attachment = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT,
e_color_attachment_blend = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT,
e_depth_stencil_attachment = VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT,
e_blit_src = VK_FORMAT_FEATURE_BLIT_SRC_BIT,
e_blit_dst = VK_FORMAT_FEATURE_BLIT_DST_BIT,
e_sampled_image_filter_linear = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT,
};
F_format_feature();
F_format_feature(Bits bits_);
F_format_feature(F_format_feature const& flag_);
F_format_feature(std::initializer_list<Bits> bit_list);
F_format_feature& operator = (F_format_feature flag_);
F_format_feature operator | (Bits bit_);
F_format_feature& operator |= (Bits bit_);
F_format_feature operator | (F_format_feature flag_);
F_format_feature& operator |= (F_format_feature flag_);
F_format_feature operator & (F_format_feature flag_);
F_format_feature& operator &= (F_format_feature flag_);
F_format_feature operator ^ (F_format_feature flag_);
F_format_feature& operator ^= (F_format_feature flag_);
F_format_feature operator ~ ();
bool operator !();
bool operator == (F_format_feature flag_);
bool operator == (Bits bit_);
bool operator != (F_format_feature flag_);
bool operator != (Bits bit_);
operator bool();
F_format_feature all_flags();
F_format_feature& clear();
VkFormatFeatureFlagBits get();
F_format_feature& e_sampled_image_on();
F_format_feature& e_sampled_image_off();
F_format_feature& e_storage_image_on();
F_format_feature& e_storage_image_off();
F_format_feature& e_storage_image_atomic_on();
F_format_feature& e_storage_image_atomic_off();
F_format_feature& e_uniform_texel_buffer_on();
F_format_feature& e_uniform_texel_buffer_off();
F_format_feature& e_storage_texel_buffer_on();
F_format_feature& e_storage_texel_buffer_off();
F_format_feature& e_storage_texel_buffer_atomic_on();
F_format_feature& e_storage_texel_buffer_atomic_off();
F_format_feature& e_vertex_buffer_on();
F_format_feature& e_vertex_buffer_off();
F_format_feature& e_color_attachment_on();
F_format_feature& e_color_attachment_off();
F_format_feature& e_color_attachment_blend_on();
F_format_feature& e_color_attachment_blend_off();
F_format_feature& e_depth_stencil_attachment_on();
F_format_feature& e_depth_stencil_attachment_off();
F_format_feature& e_blit_src_on();
F_format_feature& e_blit_src_off();
F_format_feature& e_blit_dst_on();
F_format_feature& e_blit_dst_off();
F_format_feature& e_sampled_image_filter_linear_on();
F_format_feature& e_sampled_image_filter_linear_off();
};
F_format_feature operator|(F_format_feature::Bits bit1_,F_format_feature::Bits bit2_);


class F_query_control {
private:
F_query_control(int flag_);
public:
int flag;
enum class Bits{
e_precise = VK_QUERY_CONTROL_PRECISE_BIT,
};
F_query_control();
F_query_control(Bits bits_);
F_query_control(F_query_control const& flag_);
F_query_control(std::initializer_list<Bits> bit_list);
F_query_control& operator = (F_query_control flag_);
F_query_control operator | (Bits bit_);
F_query_control& operator |= (Bits bit_);
F_query_control operator | (F_query_control flag_);
F_query_control& operator |= (F_query_control flag_);
F_query_control operator & (F_query_control flag_);
F_query_control& operator &= (F_query_control flag_);
F_query_control operator ^ (F_query_control flag_);
F_query_control& operator ^= (F_query_control flag_);
F_query_control operator ~ ();
bool operator !();
bool operator == (F_query_control flag_);
bool operator == (Bits bit_);
bool operator != (F_query_control flag_);
bool operator != (Bits bit_);
operator bool();
F_query_control all_flags();
F_query_control& clear();
VkQueryControlFlagBits get();
F_query_control& e_precise_on();
F_query_control& e_precise_off();
};
F_query_control operator|(F_query_control::Bits bit1_,F_query_control::Bits bit2_);


class F_query_result {
private:
F_query_result(int flag_);
public:
int flag;
enum class Bits{
e_64 = VK_QUERY_RESULT_64_BIT,
e_wait = VK_QUERY_RESULT_WAIT_BIT,
e_with_availability = VK_QUERY_RESULT_WITH_AVAILABILITY_BIT,
e_partial = VK_QUERY_RESULT_PARTIAL_BIT,
};
F_query_result();
F_query_result(Bits bits_);
F_query_result(F_query_result const& flag_);
F_query_result(std::initializer_list<Bits> bit_list);
F_query_result& operator = (F_query_result flag_);
F_query_result operator | (Bits bit_);
F_query_result& operator |= (Bits bit_);
F_query_result operator | (F_query_result flag_);
F_query_result& operator |= (F_query_result flag_);
F_query_result operator & (F_query_result flag_);
F_query_result& operator &= (F_query_result flag_);
F_query_result operator ^ (F_query_result flag_);
F_query_result& operator ^= (F_query_result flag_);
F_query_result operator ~ ();
bool operator !();
bool operator == (F_query_result flag_);
bool operator == (Bits bit_);
bool operator != (F_query_result flag_);
bool operator != (Bits bit_);
operator bool();
F_query_result all_flags();
F_query_result& clear();
VkQueryResultFlagBits get();
F_query_result& e_64_on();
F_query_result& e_64_off();
F_query_result& e_wait_on();
F_query_result& e_wait_off();
F_query_result& e_with_availability_on();
F_query_result& e_with_availability_off();
F_query_result& e_partial_on();
F_query_result& e_partial_off();
};
F_query_result operator|(F_query_result::Bits bit1_,F_query_result::Bits bit2_);


class F_command_buffer_usage {
private:
F_command_buffer_usage(int flag_);
public:
int flag;
enum class Bits{
e_one_time_submit = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,
e_render_pass_continue = VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT,
e_simultaneous_use = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT,
};
F_command_buffer_usage();
F_command_buffer_usage(Bits bits_);
F_command_buffer_usage(F_command_buffer_usage const& flag_);
F_command_buffer_usage(std::initializer_list<Bits> bit_list);
F_command_buffer_usage& operator = (F_command_buffer_usage flag_);
F_command_buffer_usage operator | (Bits bit_);
F_command_buffer_usage& operator |= (Bits bit_);
F_command_buffer_usage operator | (F_command_buffer_usage flag_);
F_command_buffer_usage& operator |= (F_command_buffer_usage flag_);
F_command_buffer_usage operator & (F_command_buffer_usage flag_);
F_command_buffer_usage& operator &= (F_command_buffer_usage flag_);
F_command_buffer_usage operator ^ (F_command_buffer_usage flag_);
F_command_buffer_usage& operator ^= (F_command_buffer_usage flag_);
F_command_buffer_usage operator ~ ();
bool operator !();
bool operator == (F_command_buffer_usage flag_);
bool operator == (Bits bit_);
bool operator != (F_command_buffer_usage flag_);
bool operator != (Bits bit_);
operator bool();
F_command_buffer_usage all_flags();
F_command_buffer_usage& clear();
VkCommandBufferUsageFlagBits get();
F_command_buffer_usage& e_one_time_submit_on();
F_command_buffer_usage& e_one_time_submit_off();
F_command_buffer_usage& e_render_pass_continue_on();
F_command_buffer_usage& e_render_pass_continue_off();
F_command_buffer_usage& e_simultaneous_use_on();
F_command_buffer_usage& e_simultaneous_use_off();
};
F_command_buffer_usage operator|(F_command_buffer_usage::Bits bit1_,F_command_buffer_usage::Bits bit2_);


class F_query_pipeline_statistic {
private:
F_query_pipeline_statistic(int flag_);
public:
int flag;
enum class Bits{
e_input_assembly_vertices = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT,
e_input_assembly_primitives = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT,
e_vertex_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT,
e_geometry_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT,
e_geometry_shader_primitives = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT,
e_clipping_invocations = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT,
e_clipping_primitives = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT,
e_fragment_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT,
e_tessellation_control_shader_patches = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT,
e_tessellation_evaluation_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT,
e_compute_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT,
};
F_query_pipeline_statistic();
F_query_pipeline_statistic(Bits bits_);
F_query_pipeline_statistic(F_query_pipeline_statistic const& flag_);
F_query_pipeline_statistic(std::initializer_list<Bits> bit_list);
F_query_pipeline_statistic& operator = (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator | (Bits bit_);
F_query_pipeline_statistic& operator |= (Bits bit_);
F_query_pipeline_statistic operator | (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic& operator |= (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator & (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic& operator &= (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator ^ (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic& operator ^= (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator ~ ();
bool operator !();
bool operator == (F_query_pipeline_statistic flag_);
bool operator == (Bits bit_);
bool operator != (F_query_pipeline_statistic flag_);
bool operator != (Bits bit_);
operator bool();
F_query_pipeline_statistic all_flags();
F_query_pipeline_statistic& clear();
VkQueryPipelineStatisticFlagBits get();
F_query_pipeline_statistic& e_input_assembly_vertices_on();
F_query_pipeline_statistic& e_input_assembly_vertices_off();
F_query_pipeline_statistic& e_input_assembly_primitives_on();
F_query_pipeline_statistic& e_input_assembly_primitives_off();
F_query_pipeline_statistic& e_vertex_shader_invocations_on();
F_query_pipeline_statistic& e_vertex_shader_invocations_off();
F_query_pipeline_statistic& e_geometry_shader_invocations_on();
F_query_pipeline_statistic& e_geometry_shader_invocations_off();
F_query_pipeline_statistic& e_geometry_shader_primitives_on();
F_query_pipeline_statistic& e_geometry_shader_primitives_off();
F_query_pipeline_statistic& e_clipping_invocations_on();
F_query_pipeline_statistic& e_clipping_invocations_off();
F_query_pipeline_statistic& e_clipping_primitives_on();
F_query_pipeline_statistic& e_clipping_primitives_off();
F_query_pipeline_statistic& e_fragment_shader_invocations_on();
F_query_pipeline_statistic& e_fragment_shader_invocations_off();
F_query_pipeline_statistic& e_tessellation_control_shader_patches_on();
F_query_pipeline_statistic& e_tessellation_control_shader_patches_off();
F_query_pipeline_statistic& e_tessellation_evaluation_shader_invocations_on();
F_query_pipeline_statistic& e_tessellation_evaluation_shader_invocations_off();
F_query_pipeline_statistic& e_compute_shader_invocations_on();
F_query_pipeline_statistic& e_compute_shader_invocations_off();
};
F_query_pipeline_statistic operator|(F_query_pipeline_statistic::Bits bit1_,F_query_pipeline_statistic::Bits bit2_);


class F_image_aspect {
private:
F_image_aspect(int flag_);
public:
int flag;
enum class Bits{
e_color = VK_IMAGE_ASPECT_COLOR_BIT,
e_depth = VK_IMAGE_ASPECT_DEPTH_BIT,
e_stencil = VK_IMAGE_ASPECT_STENCIL_BIT,
e_metadata = VK_IMAGE_ASPECT_METADATA_BIT,
};
F_image_aspect();
F_image_aspect(Bits bits_);
F_image_aspect(F_image_aspect const& flag_);
F_image_aspect(std::initializer_list<Bits> bit_list);
F_image_aspect& operator = (F_image_aspect flag_);
F_image_aspect operator | (Bits bit_);
F_image_aspect& operator |= (Bits bit_);
F_image_aspect operator | (F_image_aspect flag_);
F_image_aspect& operator |= (F_image_aspect flag_);
F_image_aspect operator & (F_image_aspect flag_);
F_image_aspect& operator &= (F_image_aspect flag_);
F_image_aspect operator ^ (F_image_aspect flag_);
F_image_aspect& operator ^= (F_image_aspect flag_);
F_image_aspect operator ~ ();
bool operator !();
bool operator == (F_image_aspect flag_);
bool operator == (Bits bit_);
bool operator != (F_image_aspect flag_);
bool operator != (Bits bit_);
operator bool();
F_image_aspect all_flags();
F_image_aspect& clear();
VkImageAspectFlagBits get();
F_image_aspect& e_color_on();
F_image_aspect& e_color_off();
F_image_aspect& e_depth_on();
F_image_aspect& e_depth_off();
F_image_aspect& e_stencil_on();
F_image_aspect& e_stencil_off();
F_image_aspect& e_metadata_on();
F_image_aspect& e_metadata_off();
};
F_image_aspect operator|(F_image_aspect::Bits bit1_,F_image_aspect::Bits bit2_);


class F_sparse_image_format {
private:
F_sparse_image_format(int flag_);
public:
int flag;
enum class Bits{
e_single_miptail = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT,
e_aligned_mip_size = VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT,
e_nonstandard_block_size = VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT,
};
F_sparse_image_format();
F_sparse_image_format(Bits bits_);
F_sparse_image_format(F_sparse_image_format const& flag_);
F_sparse_image_format(std::initializer_list<Bits> bit_list);
F_sparse_image_format& operator = (F_sparse_image_format flag_);
F_sparse_image_format operator | (Bits bit_);
F_sparse_image_format& operator |= (Bits bit_);
F_sparse_image_format operator | (F_sparse_image_format flag_);
F_sparse_image_format& operator |= (F_sparse_image_format flag_);
F_sparse_image_format operator & (F_sparse_image_format flag_);
F_sparse_image_format& operator &= (F_sparse_image_format flag_);
F_sparse_image_format operator ^ (F_sparse_image_format flag_);
F_sparse_image_format& operator ^= (F_sparse_image_format flag_);
F_sparse_image_format operator ~ ();
bool operator !();
bool operator == (F_sparse_image_format flag_);
bool operator == (Bits bit_);
bool operator != (F_sparse_image_format flag_);
bool operator != (Bits bit_);
operator bool();
F_sparse_image_format all_flags();
F_sparse_image_format& clear();
VkSparseImageFormatFlagBits get();
F_sparse_image_format& e_single_miptail_on();
F_sparse_image_format& e_single_miptail_off();
F_sparse_image_format& e_aligned_mip_size_on();
F_sparse_image_format& e_aligned_mip_size_off();
F_sparse_image_format& e_nonstandard_block_size_on();
F_sparse_image_format& e_nonstandard_block_size_off();
};
F_sparse_image_format operator|(F_sparse_image_format::Bits bit1_,F_sparse_image_format::Bits bit2_);


class F_sparse_memory_bind {
private:
F_sparse_memory_bind(int flag_);
public:
int flag;
enum class Bits{
e_metadata = VK_SPARSE_MEMORY_BIND_METADATA_BIT,
};
F_sparse_memory_bind();
F_sparse_memory_bind(Bits bits_);
F_sparse_memory_bind(F_sparse_memory_bind const& flag_);
F_sparse_memory_bind(std::initializer_list<Bits> bit_list);
F_sparse_memory_bind& operator = (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator | (Bits bit_);
F_sparse_memory_bind& operator |= (Bits bit_);
F_sparse_memory_bind operator | (F_sparse_memory_bind flag_);
F_sparse_memory_bind& operator |= (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator & (F_sparse_memory_bind flag_);
F_sparse_memory_bind& operator &= (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator ^ (F_sparse_memory_bind flag_);
F_sparse_memory_bind& operator ^= (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator ~ ();
bool operator !();
bool operator == (F_sparse_memory_bind flag_);
bool operator == (Bits bit_);
bool operator != (F_sparse_memory_bind flag_);
bool operator != (Bits bit_);
operator bool();
F_sparse_memory_bind all_flags();
F_sparse_memory_bind& clear();
VkSparseMemoryBindFlagBits get();
F_sparse_memory_bind& e_metadata_on();
F_sparse_memory_bind& e_metadata_off();
};
F_sparse_memory_bind operator|(F_sparse_memory_bind::Bits bit1_,F_sparse_memory_bind::Bits bit2_);


class F_pipeline_stage {
private:
F_pipeline_stage(int flag_);
public:
int flag;
enum class Bits{
e_top_of_pipe = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
e_draw_indirect = VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT,
e_vertex_input = VK_PIPELINE_STAGE_VERTEX_INPUT_BIT,
e_vertex_shader = VK_PIPELINE_STAGE_VERTEX_SHADER_BIT,
e_tessellation_control_shader = VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT,
e_tessellation_evaluation_shader = VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT,
e_geometry_shader = VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT,
e_fragment_shader = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
e_early_fragment_tests = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT,
e_late_fragment_tests = VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
e_color_attachment_output = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
e_compute_shader = VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
e_transfer = VK_PIPELINE_STAGE_TRANSFER_BIT,
e_bottom_of_pipe = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
e_host = VK_PIPELINE_STAGE_HOST_BIT,
e_all_graphics = VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT,
e_all_commands = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
};
F_pipeline_stage();
F_pipeline_stage(Bits bits_);
F_pipeline_stage(F_pipeline_stage const& flag_);
F_pipeline_stage(std::initializer_list<Bits> bit_list);
F_pipeline_stage& operator = (F_pipeline_stage flag_);
F_pipeline_stage operator | (Bits bit_);
F_pipeline_stage& operator |= (Bits bit_);
F_pipeline_stage operator | (F_pipeline_stage flag_);
F_pipeline_stage& operator |= (F_pipeline_stage flag_);
F_pipeline_stage operator & (F_pipeline_stage flag_);
F_pipeline_stage& operator &= (F_pipeline_stage flag_);
F_pipeline_stage operator ^ (F_pipeline_stage flag_);
F_pipeline_stage& operator ^= (F_pipeline_stage flag_);
F_pipeline_stage operator ~ ();
bool operator !();
bool operator == (F_pipeline_stage flag_);
bool operator == (Bits bit_);
bool operator != (F_pipeline_stage flag_);
bool operator != (Bits bit_);
operator bool();
F_pipeline_stage all_flags();
F_pipeline_stage& clear();
VkPipelineStageFlagBits get();
F_pipeline_stage& e_top_of_pipe_on();
F_pipeline_stage& e_top_of_pipe_off();
F_pipeline_stage& e_draw_indirect_on();
F_pipeline_stage& e_draw_indirect_off();
F_pipeline_stage& e_vertex_input_on();
F_pipeline_stage& e_vertex_input_off();
F_pipeline_stage& e_vertex_shader_on();
F_pipeline_stage& e_vertex_shader_off();
F_pipeline_stage& e_tessellation_control_shader_on();
F_pipeline_stage& e_tessellation_control_shader_off();
F_pipeline_stage& e_tessellation_evaluation_shader_on();
F_pipeline_stage& e_tessellation_evaluation_shader_off();
F_pipeline_stage& e_geometry_shader_on();
F_pipeline_stage& e_geometry_shader_off();
F_pipeline_stage& e_fragment_shader_on();
F_pipeline_stage& e_fragment_shader_off();
F_pipeline_stage& e_early_fragment_tests_on();
F_pipeline_stage& e_early_fragment_tests_off();
F_pipeline_stage& e_late_fragment_tests_on();
F_pipeline_stage& e_late_fragment_tests_off();
F_pipeline_stage& e_color_attachment_output_on();
F_pipeline_stage& e_color_attachment_output_off();
F_pipeline_stage& e_compute_shader_on();
F_pipeline_stage& e_compute_shader_off();
F_pipeline_stage& e_transfer_on();
F_pipeline_stage& e_transfer_off();
F_pipeline_stage& e_bottom_of_pipe_on();
F_pipeline_stage& e_bottom_of_pipe_off();
F_pipeline_stage& e_host_on();
F_pipeline_stage& e_host_off();
F_pipeline_stage& e_all_graphics_on();
F_pipeline_stage& e_all_graphics_off();
F_pipeline_stage& e_all_commands_on();
F_pipeline_stage& e_all_commands_off();
};
F_pipeline_stage operator|(F_pipeline_stage::Bits bit1_,F_pipeline_stage::Bits bit2_);


class F_command_pool_create {
private:
F_command_pool_create(int flag_);
public:
int flag;
enum class Bits{
e_transient = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT,
e_reset_command_buffer = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
};
F_command_pool_create();
F_command_pool_create(Bits bits_);
F_command_pool_create(F_command_pool_create const& flag_);
F_command_pool_create(std::initializer_list<Bits> bit_list);
F_command_pool_create& operator = (F_command_pool_create flag_);
F_command_pool_create operator | (Bits bit_);
F_command_pool_create& operator |= (Bits bit_);
F_command_pool_create operator | (F_command_pool_create flag_);
F_command_pool_create& operator |= (F_command_pool_create flag_);
F_command_pool_create operator & (F_command_pool_create flag_);
F_command_pool_create& operator &= (F_command_pool_create flag_);
F_command_pool_create operator ^ (F_command_pool_create flag_);
F_command_pool_create& operator ^= (F_command_pool_create flag_);
F_command_pool_create operator ~ ();
bool operator !();
bool operator == (F_command_pool_create flag_);
bool operator == (Bits bit_);
bool operator != (F_command_pool_create flag_);
bool operator != (Bits bit_);
operator bool();
F_command_pool_create all_flags();
F_command_pool_create& clear();
VkCommandPoolCreateFlagBits get();
F_command_pool_create& e_transient_on();
F_command_pool_create& e_transient_off();
F_command_pool_create& e_reset_command_buffer_on();
F_command_pool_create& e_reset_command_buffer_off();
};
F_command_pool_create operator|(F_command_pool_create::Bits bit1_,F_command_pool_create::Bits bit2_);


class F_command_pool_reset {
private:
F_command_pool_reset(int flag_);
public:
int flag;
enum class Bits{
e_release_resources = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT,
};
F_command_pool_reset();
F_command_pool_reset(Bits bits_);
F_command_pool_reset(F_command_pool_reset const& flag_);
F_command_pool_reset(std::initializer_list<Bits> bit_list);
F_command_pool_reset& operator = (F_command_pool_reset flag_);
F_command_pool_reset operator | (Bits bit_);
F_command_pool_reset& operator |= (Bits bit_);
F_command_pool_reset operator | (F_command_pool_reset flag_);
F_command_pool_reset& operator |= (F_command_pool_reset flag_);
F_command_pool_reset operator & (F_command_pool_reset flag_);
F_command_pool_reset& operator &= (F_command_pool_reset flag_);
F_command_pool_reset operator ^ (F_command_pool_reset flag_);
F_command_pool_reset& operator ^= (F_command_pool_reset flag_);
F_command_pool_reset operator ~ ();
bool operator !();
bool operator == (F_command_pool_reset flag_);
bool operator == (Bits bit_);
bool operator != (F_command_pool_reset flag_);
bool operator != (Bits bit_);
operator bool();
F_command_pool_reset all_flags();
F_command_pool_reset& clear();
VkCommandPoolResetFlagBits get();
F_command_pool_reset& e_release_resources_on();
F_command_pool_reset& e_release_resources_off();
};
F_command_pool_reset operator|(F_command_pool_reset::Bits bit1_,F_command_pool_reset::Bits bit2_);


class F_command_buffer_reset {
private:
F_command_buffer_reset(int flag_);
public:
int flag;
enum class Bits{
e_release_resources = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT,
};
F_command_buffer_reset();
F_command_buffer_reset(Bits bits_);
F_command_buffer_reset(F_command_buffer_reset const& flag_);
F_command_buffer_reset(std::initializer_list<Bits> bit_list);
F_command_buffer_reset& operator = (F_command_buffer_reset flag_);
F_command_buffer_reset operator | (Bits bit_);
F_command_buffer_reset& operator |= (Bits bit_);
F_command_buffer_reset operator | (F_command_buffer_reset flag_);
F_command_buffer_reset& operator |= (F_command_buffer_reset flag_);
F_command_buffer_reset operator & (F_command_buffer_reset flag_);
F_command_buffer_reset& operator &= (F_command_buffer_reset flag_);
F_command_buffer_reset operator ^ (F_command_buffer_reset flag_);
F_command_buffer_reset& operator ^= (F_command_buffer_reset flag_);
F_command_buffer_reset operator ~ ();
bool operator !();
bool operator == (F_command_buffer_reset flag_);
bool operator == (Bits bit_);
bool operator != (F_command_buffer_reset flag_);
bool operator != (Bits bit_);
operator bool();
F_command_buffer_reset all_flags();
F_command_buffer_reset& clear();
VkCommandBufferResetFlagBits get();
F_command_buffer_reset& e_release_resources_on();
F_command_buffer_reset& e_release_resources_off();
};
F_command_buffer_reset operator|(F_command_buffer_reset::Bits bit1_,F_command_buffer_reset::Bits bit2_);


class F_sample_count {
private:
F_sample_count(int flag_);
public:
int flag;
enum class Bits{
e_1 = VK_SAMPLE_COUNT_1_BIT,
e_2 = VK_SAMPLE_COUNT_2_BIT,
e_4 = VK_SAMPLE_COUNT_4_BIT,
e_8 = VK_SAMPLE_COUNT_8_BIT,
e_16 = VK_SAMPLE_COUNT_16_BIT,
e_32 = VK_SAMPLE_COUNT_32_BIT,
e_64 = VK_SAMPLE_COUNT_64_BIT,
};
F_sample_count();
F_sample_count(Bits bits_);
F_sample_count(F_sample_count const& flag_);
F_sample_count(std::initializer_list<Bits> bit_list);
F_sample_count& operator = (F_sample_count flag_);
F_sample_count operator | (Bits bit_);
F_sample_count& operator |= (Bits bit_);
F_sample_count operator | (F_sample_count flag_);
F_sample_count& operator |= (F_sample_count flag_);
F_sample_count operator & (F_sample_count flag_);
F_sample_count& operator &= (F_sample_count flag_);
F_sample_count operator ^ (F_sample_count flag_);
F_sample_count& operator ^= (F_sample_count flag_);
F_sample_count operator ~ ();
bool operator !();
bool operator == (F_sample_count flag_);
bool operator == (Bits bit_);
bool operator != (F_sample_count flag_);
bool operator != (Bits bit_);
operator bool();
F_sample_count all_flags();
F_sample_count& clear();
VkSampleCountFlagBits get();
F_sample_count& e_1_on();
F_sample_count& e_1_off();
F_sample_count& e_2_on();
F_sample_count& e_2_off();
F_sample_count& e_4_on();
F_sample_count& e_4_off();
F_sample_count& e_8_on();
F_sample_count& e_8_off();
F_sample_count& e_16_on();
F_sample_count& e_16_off();
F_sample_count& e_32_on();
F_sample_count& e_32_off();
F_sample_count& e_64_on();
F_sample_count& e_64_off();
};
F_sample_count operator|(F_sample_count::Bits bit1_,F_sample_count::Bits bit2_);


class F_attachment_description {
private:
F_attachment_description(int flag_);
public:
int flag;
enum class Bits{
e_may_alias = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT,
};
F_attachment_description();
F_attachment_description(Bits bits_);
F_attachment_description(F_attachment_description const& flag_);
F_attachment_description(std::initializer_list<Bits> bit_list);
F_attachment_description& operator = (F_attachment_description flag_);
F_attachment_description operator | (Bits bit_);
F_attachment_description& operator |= (Bits bit_);
F_attachment_description operator | (F_attachment_description flag_);
F_attachment_description& operator |= (F_attachment_description flag_);
F_attachment_description operator & (F_attachment_description flag_);
F_attachment_description& operator &= (F_attachment_description flag_);
F_attachment_description operator ^ (F_attachment_description flag_);
F_attachment_description& operator ^= (F_attachment_description flag_);
F_attachment_description operator ~ ();
bool operator !();
bool operator == (F_attachment_description flag_);
bool operator == (Bits bit_);
bool operator != (F_attachment_description flag_);
bool operator != (Bits bit_);
operator bool();
F_attachment_description all_flags();
F_attachment_description& clear();
VkAttachmentDescriptionFlagBits get();
F_attachment_description& e_may_alias_on();
F_attachment_description& e_may_alias_off();
};
F_attachment_description operator|(F_attachment_description::Bits bit1_,F_attachment_description::Bits bit2_);


class F_stencil_face {
private:
F_stencil_face(int flag_);
public:
int flag;
enum class Bits{
e_front = VK_STENCIL_FACE_FRONT_BIT,
e_back = VK_STENCIL_FACE_BACK_BIT,
e_vk_stencil_front_and_back = VK_STENCIL_FRONT_AND_BACK,
};
F_stencil_face();
F_stencil_face(Bits bits_);
F_stencil_face(F_stencil_face const& flag_);
F_stencil_face(std::initializer_list<Bits> bit_list);
F_stencil_face& operator = (F_stencil_face flag_);
F_stencil_face operator | (Bits bit_);
F_stencil_face& operator |= (Bits bit_);
F_stencil_face operator | (F_stencil_face flag_);
F_stencil_face& operator |= (F_stencil_face flag_);
F_stencil_face operator & (F_stencil_face flag_);
F_stencil_face& operator &= (F_stencil_face flag_);
F_stencil_face operator ^ (F_stencil_face flag_);
F_stencil_face& operator ^= (F_stencil_face flag_);
F_stencil_face operator ~ ();
bool operator !();
bool operator == (F_stencil_face flag_);
bool operator == (Bits bit_);
bool operator != (F_stencil_face flag_);
bool operator != (Bits bit_);
operator bool();
F_stencil_face all_flags();
F_stencil_face& clear();
VkStencilFaceFlagBits get();
F_stencil_face& e_front_on();
F_stencil_face& e_front_off();
F_stencil_face& e_back_on();
F_stencil_face& e_back_off();
F_stencil_face& e_vk_stencil_front_and_back_on();
F_stencil_face& e_vk_stencil_front_and_back_off();
};
F_stencil_face operator|(F_stencil_face::Bits bit1_,F_stencil_face::Bits bit2_);


class F_descriptor_pool_create {
private:
F_descriptor_pool_create(int flag_);
public:
int flag;
enum class Bits{
e_free_descriptor_set = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT,
};
F_descriptor_pool_create();
F_descriptor_pool_create(Bits bits_);
F_descriptor_pool_create(F_descriptor_pool_create const& flag_);
F_descriptor_pool_create(std::initializer_list<Bits> bit_list);
F_descriptor_pool_create& operator = (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator | (Bits bit_);
F_descriptor_pool_create& operator |= (Bits bit_);
F_descriptor_pool_create operator | (F_descriptor_pool_create flag_);
F_descriptor_pool_create& operator |= (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator & (F_descriptor_pool_create flag_);
F_descriptor_pool_create& operator &= (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator ^ (F_descriptor_pool_create flag_);
F_descriptor_pool_create& operator ^= (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator ~ ();
bool operator !();
bool operator == (F_descriptor_pool_create flag_);
bool operator == (Bits bit_);
bool operator != (F_descriptor_pool_create flag_);
bool operator != (Bits bit_);
operator bool();
F_descriptor_pool_create all_flags();
F_descriptor_pool_create& clear();
VkDescriptorPoolCreateFlagBits get();
F_descriptor_pool_create& e_free_descriptor_set_on();
F_descriptor_pool_create& e_free_descriptor_set_off();
};
F_descriptor_pool_create operator|(F_descriptor_pool_create::Bits bit1_,F_descriptor_pool_create::Bits bit2_);


class F_dependency {
private:
F_dependency(int flag_);
public:
int flag;
enum class Bits{
e_by_region = VK_DEPENDENCY_BY_REGION_BIT,
};
F_dependency();
F_dependency(Bits bits_);
F_dependency(F_dependency const& flag_);
F_dependency(std::initializer_list<Bits> bit_list);
F_dependency& operator = (F_dependency flag_);
F_dependency operator | (Bits bit_);
F_dependency& operator |= (Bits bit_);
F_dependency operator | (F_dependency flag_);
F_dependency& operator |= (F_dependency flag_);
F_dependency operator & (F_dependency flag_);
F_dependency& operator &= (F_dependency flag_);
F_dependency operator ^ (F_dependency flag_);
F_dependency& operator ^= (F_dependency flag_);
F_dependency operator ~ ();
bool operator !();
bool operator == (F_dependency flag_);
bool operator == (Bits bit_);
bool operator != (F_dependency flag_);
bool operator != (Bits bit_);
operator bool();
F_dependency all_flags();
F_dependency& clear();
VkDependencyFlagBits get();
F_dependency& e_by_region_on();
F_dependency& e_by_region_off();
};
F_dependency operator|(F_dependency::Bits bit1_,F_dependency::Bits bit2_);


class F_display_plane_alpha_khr {
private:
F_display_plane_alpha_khr(int flag_);
public:
int flag;
enum class Bits{
e_opaque_bit_khr = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR,
e_global_bit_khr = VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,
e_per_pixel_bit_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR,
e_per_pixel_premultiplied_bit_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR,
};
F_display_plane_alpha_khr();
F_display_plane_alpha_khr(Bits bits_);
F_display_plane_alpha_khr(F_display_plane_alpha_khr const& flag_);
F_display_plane_alpha_khr(std::initializer_list<Bits> bit_list);
F_display_plane_alpha_khr& operator = (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator | (Bits bit_);
F_display_plane_alpha_khr& operator |= (Bits bit_);
F_display_plane_alpha_khr operator | (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr& operator |= (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator & (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr& operator &= (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator ^ (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr& operator ^= (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator ~ ();
bool operator !();
bool operator == (F_display_plane_alpha_khr flag_);
bool operator == (Bits bit_);
bool operator != (F_display_plane_alpha_khr flag_);
bool operator != (Bits bit_);
operator bool();
F_display_plane_alpha_khr all_flags();
F_display_plane_alpha_khr& clear();
VkDisplayPlaneAlphaFlagBitsKHR get();
F_display_plane_alpha_khr& e_opaque_bit_khr_on();
F_display_plane_alpha_khr& e_opaque_bit_khr_off();
F_display_plane_alpha_khr& e_global_bit_khr_on();
F_display_plane_alpha_khr& e_global_bit_khr_off();
F_display_plane_alpha_khr& e_per_pixel_bit_khr_on();
F_display_plane_alpha_khr& e_per_pixel_bit_khr_off();
F_display_plane_alpha_khr& e_per_pixel_premultiplied_bit_khr_on();
F_display_plane_alpha_khr& e_per_pixel_premultiplied_bit_khr_off();
};
F_display_plane_alpha_khr operator|(F_display_plane_alpha_khr::Bits bit1_,F_display_plane_alpha_khr::Bits bit2_);


class F_composite_alpha_khr {
private:
F_composite_alpha_khr(int flag_);
public:
int flag;
enum class Bits{
e_opaque_bit_khr = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
e_pre_multiplied_bit_khr = VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
e_post_multiplied_bit_khr = VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
e_inherit_bit_khr = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
};
F_composite_alpha_khr();
F_composite_alpha_khr(Bits bits_);
F_composite_alpha_khr(F_composite_alpha_khr const& flag_);
F_composite_alpha_khr(std::initializer_list<Bits> bit_list);
F_composite_alpha_khr& operator = (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator | (Bits bit_);
F_composite_alpha_khr& operator |= (Bits bit_);
F_composite_alpha_khr operator | (F_composite_alpha_khr flag_);
F_composite_alpha_khr& operator |= (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator & (F_composite_alpha_khr flag_);
F_composite_alpha_khr& operator &= (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator ^ (F_composite_alpha_khr flag_);
F_composite_alpha_khr& operator ^= (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator ~ ();
bool operator !();
bool operator == (F_composite_alpha_khr flag_);
bool operator == (Bits bit_);
bool operator != (F_composite_alpha_khr flag_);
bool operator != (Bits bit_);
operator bool();
F_composite_alpha_khr all_flags();
F_composite_alpha_khr& clear();
VkCompositeAlphaFlagBitsKHR get();
F_composite_alpha_khr& e_opaque_bit_khr_on();
F_composite_alpha_khr& e_opaque_bit_khr_off();
F_composite_alpha_khr& e_pre_multiplied_bit_khr_on();
F_composite_alpha_khr& e_pre_multiplied_bit_khr_off();
F_composite_alpha_khr& e_post_multiplied_bit_khr_on();
F_composite_alpha_khr& e_post_multiplied_bit_khr_off();
F_composite_alpha_khr& e_inherit_bit_khr_on();
F_composite_alpha_khr& e_inherit_bit_khr_off();
};
F_composite_alpha_khr operator|(F_composite_alpha_khr::Bits bit1_,F_composite_alpha_khr::Bits bit2_);


class F_surface_transform_khr {
private:
F_surface_transform_khr(int flag_);
public:
int flag;
enum class Bits{
e_identity_bit_khr = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR,
e_rotate_90_bit_khr = VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR,
e_rotate_180_bit_khr = VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR,
e_rotate_270_bit_khr = VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR,
e_horizontal_mirror_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR,
e_horizontal_mirror_rotate_90_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR,
e_horizontal_mirror_rotate_180_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR,
e_horizontal_mirror_rotate_270_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR,
e_inherit_bit_khr = VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR,
};
F_surface_transform_khr();
F_surface_transform_khr(Bits bits_);
F_surface_transform_khr(F_surface_transform_khr const& flag_);
F_surface_transform_khr(std::initializer_list<Bits> bit_list);
F_surface_transform_khr& operator = (F_surface_transform_khr flag_);
F_surface_transform_khr operator | (Bits bit_);
F_surface_transform_khr& operator |= (Bits bit_);
F_surface_transform_khr operator | (F_surface_transform_khr flag_);
F_surface_transform_khr& operator |= (F_surface_transform_khr flag_);
F_surface_transform_khr operator & (F_surface_transform_khr flag_);
F_surface_transform_khr& operator &= (F_surface_transform_khr flag_);
F_surface_transform_khr operator ^ (F_surface_transform_khr flag_);
F_surface_transform_khr& operator ^= (F_surface_transform_khr flag_);
F_surface_transform_khr operator ~ ();
bool operator !();
bool operator == (F_surface_transform_khr flag_);
bool operator == (Bits bit_);
bool operator != (F_surface_transform_khr flag_);
bool operator != (Bits bit_);
operator bool();
F_surface_transform_khr all_flags();
F_surface_transform_khr& clear();
VkSurfaceTransformFlagBitsKHR get();
F_surface_transform_khr& e_identity_bit_khr_on();
F_surface_transform_khr& e_identity_bit_khr_off();
F_surface_transform_khr& e_rotate_90_bit_khr_on();
F_surface_transform_khr& e_rotate_90_bit_khr_off();
F_surface_transform_khr& e_rotate_180_bit_khr_on();
F_surface_transform_khr& e_rotate_180_bit_khr_off();
F_surface_transform_khr& e_rotate_270_bit_khr_on();
F_surface_transform_khr& e_rotate_270_bit_khr_off();
F_surface_transform_khr& e_horizontal_mirror_bit_khr_on();
F_surface_transform_khr& e_horizontal_mirror_bit_khr_off();
F_surface_transform_khr& e_horizontal_mirror_rotate_90_bit_khr_on();
F_surface_transform_khr& e_horizontal_mirror_rotate_90_bit_khr_off();
F_surface_transform_khr& e_horizontal_mirror_rotate_180_bit_khr_on();
F_surface_transform_khr& e_horizontal_mirror_rotate_180_bit_khr_off();
F_surface_transform_khr& e_horizontal_mirror_rotate_270_bit_khr_on();
F_surface_transform_khr& e_horizontal_mirror_rotate_270_bit_khr_off();
F_surface_transform_khr& e_inherit_bit_khr_on();
F_surface_transform_khr& e_inherit_bit_khr_off();
};
F_surface_transform_khr operator|(F_surface_transform_khr::Bits bit1_,F_surface_transform_khr::Bits bit2_);


class F_debug_report_ext {
private:
F_debug_report_ext(int flag_);
public:
int flag;
enum class Bits{
e_information_bit_ext = VK_DEBUG_REPORT_INFORMATION_BIT_EXT,
e_warning_bit_ext = VK_DEBUG_REPORT_WARNING_BIT_EXT,
e_performance_warning_bit_ext = VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT,
e_error_bit_ext = VK_DEBUG_REPORT_ERROR_BIT_EXT,
e_debug_bit_ext = VK_DEBUG_REPORT_DEBUG_BIT_EXT,
};
F_debug_report_ext();
F_debug_report_ext(Bits bits_);
F_debug_report_ext(F_debug_report_ext const& flag_);
F_debug_report_ext(std::initializer_list<Bits> bit_list);
F_debug_report_ext& operator = (F_debug_report_ext flag_);
F_debug_report_ext operator | (Bits bit_);
F_debug_report_ext& operator |= (Bits bit_);
F_debug_report_ext operator | (F_debug_report_ext flag_);
F_debug_report_ext& operator |= (F_debug_report_ext flag_);
F_debug_report_ext operator & (F_debug_report_ext flag_);
F_debug_report_ext& operator &= (F_debug_report_ext flag_);
F_debug_report_ext operator ^ (F_debug_report_ext flag_);
F_debug_report_ext& operator ^= (F_debug_report_ext flag_);
F_debug_report_ext operator ~ ();
bool operator !();
bool operator == (F_debug_report_ext flag_);
bool operator == (Bits bit_);
bool operator != (F_debug_report_ext flag_);
bool operator != (Bits bit_);
operator bool();
F_debug_report_ext all_flags();
F_debug_report_ext& clear();
VkDebugReportFlagBitsEXT get();
F_debug_report_ext& e_information_bit_ext_on();
F_debug_report_ext& e_information_bit_ext_off();
F_debug_report_ext& e_warning_bit_ext_on();
F_debug_report_ext& e_warning_bit_ext_off();
F_debug_report_ext& e_performance_warning_bit_ext_on();
F_debug_report_ext& e_performance_warning_bit_ext_off();
F_debug_report_ext& e_error_bit_ext_on();
F_debug_report_ext& e_error_bit_ext_off();
F_debug_report_ext& e_debug_bit_ext_on();
F_debug_report_ext& e_debug_bit_ext_off();
};
F_debug_report_ext operator|(F_debug_report_ext::Bits bit1_,F_debug_report_ext::Bits bit2_);


class F_external_memory_handle_type_nv {
private:
F_external_memory_handle_type_nv(int flag_);
public:
int flag;
enum class Bits{
e_opaque_win32_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV,
e_opaque_win32_kmt_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV,
e_d3d11_image_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV,
e_d3d11_image_kmt_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV,
};
F_external_memory_handle_type_nv();
F_external_memory_handle_type_nv(Bits bits_);
F_external_memory_handle_type_nv(F_external_memory_handle_type_nv const& flag_);
F_external_memory_handle_type_nv(std::initializer_list<Bits> bit_list);
F_external_memory_handle_type_nv& operator = (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator | (Bits bit_);
F_external_memory_handle_type_nv& operator |= (Bits bit_);
F_external_memory_handle_type_nv operator | (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv& operator |= (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator & (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv& operator &= (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator ^ (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv& operator ^= (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator ~ ();
bool operator !();
bool operator == (F_external_memory_handle_type_nv flag_);
bool operator == (Bits bit_);
bool operator != (F_external_memory_handle_type_nv flag_);
bool operator != (Bits bit_);
operator bool();
F_external_memory_handle_type_nv all_flags();
F_external_memory_handle_type_nv& clear();
VkExternalMemoryHandleTypeFlagBitsNV get();
F_external_memory_handle_type_nv& e_opaque_win32_bit_nv_on();
F_external_memory_handle_type_nv& e_opaque_win32_bit_nv_off();
F_external_memory_handle_type_nv& e_opaque_win32_kmt_bit_nv_on();
F_external_memory_handle_type_nv& e_opaque_win32_kmt_bit_nv_off();
F_external_memory_handle_type_nv& e_d3d11_image_bit_nv_on();
F_external_memory_handle_type_nv& e_d3d11_image_bit_nv_off();
F_external_memory_handle_type_nv& e_d3d11_image_kmt_bit_nv_on();
F_external_memory_handle_type_nv& e_d3d11_image_kmt_bit_nv_off();
};
F_external_memory_handle_type_nv operator|(F_external_memory_handle_type_nv::Bits bit1_,F_external_memory_handle_type_nv::Bits bit2_);


class F_external_memory_feature_nv {
private:
F_external_memory_feature_nv(int flag_);
public:
int flag;
enum class Bits{
e_dedicated_only_bit_nv = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV,
e_exportable_bit_nv = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV,
e_importable_bit_nv = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV,
};
F_external_memory_feature_nv();
F_external_memory_feature_nv(Bits bits_);
F_external_memory_feature_nv(F_external_memory_feature_nv const& flag_);
F_external_memory_feature_nv(std::initializer_list<Bits> bit_list);
F_external_memory_feature_nv& operator = (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator | (Bits bit_);
F_external_memory_feature_nv& operator |= (Bits bit_);
F_external_memory_feature_nv operator | (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv& operator |= (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator & (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv& operator &= (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator ^ (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv& operator ^= (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator ~ ();
bool operator !();
bool operator == (F_external_memory_feature_nv flag_);
bool operator == (Bits bit_);
bool operator != (F_external_memory_feature_nv flag_);
bool operator != (Bits bit_);
operator bool();
F_external_memory_feature_nv all_flags();
F_external_memory_feature_nv& clear();
VkExternalMemoryFeatureFlagBitsNV get();
F_external_memory_feature_nv& e_dedicated_only_bit_nv_on();
F_external_memory_feature_nv& e_dedicated_only_bit_nv_off();
F_external_memory_feature_nv& e_exportable_bit_nv_on();
F_external_memory_feature_nv& e_exportable_bit_nv_off();
F_external_memory_feature_nv& e_importable_bit_nv_on();
F_external_memory_feature_nv& e_importable_bit_nv_off();
};
F_external_memory_feature_nv operator|(F_external_memory_feature_nv::Bits bit1_,F_external_memory_feature_nv::Bits bit2_);


class F_subgroup_feature {
private:
F_subgroup_feature(int flag_);
public:
int flag;
enum class Bits{
e_basic = VK_SUBGROUP_FEATURE_BASIC_BIT,
e_vote = VK_SUBGROUP_FEATURE_VOTE_BIT,
e_arithmetic = VK_SUBGROUP_FEATURE_ARITHMETIC_BIT,
e_ballot = VK_SUBGROUP_FEATURE_BALLOT_BIT,
e_shuffle = VK_SUBGROUP_FEATURE_SHUFFLE_BIT,
e_shuffle_relative = VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT,
e_clustered = VK_SUBGROUP_FEATURE_CLUSTERED_BIT,
e_quad = VK_SUBGROUP_FEATURE_QUAD_BIT,
};
F_subgroup_feature();
F_subgroup_feature(Bits bits_);
F_subgroup_feature(F_subgroup_feature const& flag_);
F_subgroup_feature(std::initializer_list<Bits> bit_list);
F_subgroup_feature& operator = (F_subgroup_feature flag_);
F_subgroup_feature operator | (Bits bit_);
F_subgroup_feature& operator |= (Bits bit_);
F_subgroup_feature operator | (F_subgroup_feature flag_);
F_subgroup_feature& operator |= (F_subgroup_feature flag_);
F_subgroup_feature operator & (F_subgroup_feature flag_);
F_subgroup_feature& operator &= (F_subgroup_feature flag_);
F_subgroup_feature operator ^ (F_subgroup_feature flag_);
F_subgroup_feature& operator ^= (F_subgroup_feature flag_);
F_subgroup_feature operator ~ ();
bool operator !();
bool operator == (F_subgroup_feature flag_);
bool operator == (Bits bit_);
bool operator != (F_subgroup_feature flag_);
bool operator != (Bits bit_);
operator bool();
F_subgroup_feature all_flags();
F_subgroup_feature& clear();
VkSubgroupFeatureFlagBits get();
F_subgroup_feature& e_basic_on();
F_subgroup_feature& e_basic_off();
F_subgroup_feature& e_vote_on();
F_subgroup_feature& e_vote_off();
F_subgroup_feature& e_arithmetic_on();
F_subgroup_feature& e_arithmetic_off();
F_subgroup_feature& e_ballot_on();
F_subgroup_feature& e_ballot_off();
F_subgroup_feature& e_shuffle_on();
F_subgroup_feature& e_shuffle_off();
F_subgroup_feature& e_shuffle_relative_on();
F_subgroup_feature& e_shuffle_relative_off();
F_subgroup_feature& e_clustered_on();
F_subgroup_feature& e_clustered_off();
F_subgroup_feature& e_quad_on();
F_subgroup_feature& e_quad_off();
};
F_subgroup_feature operator|(F_subgroup_feature::Bits bit1_,F_subgroup_feature::Bits bit2_);


class F_indirect_commands_layout_usage_nvx {
private:
F_indirect_commands_layout_usage_nvx(int flag_);
public:
int flag;
enum class Bits{
e_unordered_sequences_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX,
e_sparse_sequences_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX,
e_empty_executions_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX,
e_indexed_sequences_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX,
};
F_indirect_commands_layout_usage_nvx();
F_indirect_commands_layout_usage_nvx(Bits bits_);
F_indirect_commands_layout_usage_nvx(F_indirect_commands_layout_usage_nvx const& flag_);
F_indirect_commands_layout_usage_nvx(std::initializer_list<Bits> bit_list);
F_indirect_commands_layout_usage_nvx& operator = (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator | (Bits bit_);
F_indirect_commands_layout_usage_nvx& operator |= (Bits bit_);
F_indirect_commands_layout_usage_nvx operator | (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx& operator |= (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator & (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx& operator &= (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator ^ (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx& operator ^= (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator ~ ();
bool operator !();
bool operator == (F_indirect_commands_layout_usage_nvx flag_);
bool operator == (Bits bit_);
bool operator != (F_indirect_commands_layout_usage_nvx flag_);
bool operator != (Bits bit_);
operator bool();
F_indirect_commands_layout_usage_nvx all_flags();
F_indirect_commands_layout_usage_nvx& clear();
VkIndirectCommandsLayoutUsageFlagBitsNVX get();
F_indirect_commands_layout_usage_nvx& e_unordered_sequences_bit_nvx_on();
F_indirect_commands_layout_usage_nvx& e_unordered_sequences_bit_nvx_off();
F_indirect_commands_layout_usage_nvx& e_sparse_sequences_bit_nvx_on();
F_indirect_commands_layout_usage_nvx& e_sparse_sequences_bit_nvx_off();
F_indirect_commands_layout_usage_nvx& e_empty_executions_bit_nvx_on();
F_indirect_commands_layout_usage_nvx& e_empty_executions_bit_nvx_off();
F_indirect_commands_layout_usage_nvx& e_indexed_sequences_bit_nvx_on();
F_indirect_commands_layout_usage_nvx& e_indexed_sequences_bit_nvx_off();
};
F_indirect_commands_layout_usage_nvx operator|(F_indirect_commands_layout_usage_nvx::Bits bit1_,F_indirect_commands_layout_usage_nvx::Bits bit2_);


class F_object_entry_usage_nvx {
private:
F_object_entry_usage_nvx(int flag_);
public:
int flag;
enum class Bits{
e_graphics_bit_nvx = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX,
e_compute_bit_nvx = VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX,
};
F_object_entry_usage_nvx();
F_object_entry_usage_nvx(Bits bits_);
F_object_entry_usage_nvx(F_object_entry_usage_nvx const& flag_);
F_object_entry_usage_nvx(std::initializer_list<Bits> bit_list);
F_object_entry_usage_nvx& operator = (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator | (Bits bit_);
F_object_entry_usage_nvx& operator |= (Bits bit_);
F_object_entry_usage_nvx operator | (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx& operator |= (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator & (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx& operator &= (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator ^ (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx& operator ^= (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator ~ ();
bool operator !();
bool operator == (F_object_entry_usage_nvx flag_);
bool operator == (Bits bit_);
bool operator != (F_object_entry_usage_nvx flag_);
bool operator != (Bits bit_);
operator bool();
F_object_entry_usage_nvx all_flags();
F_object_entry_usage_nvx& clear();
VkObjectEntryUsageFlagBitsNVX get();
F_object_entry_usage_nvx& e_graphics_bit_nvx_on();
F_object_entry_usage_nvx& e_graphics_bit_nvx_off();
F_object_entry_usage_nvx& e_compute_bit_nvx_on();
F_object_entry_usage_nvx& e_compute_bit_nvx_off();
};
F_object_entry_usage_nvx operator|(F_object_entry_usage_nvx::Bits bit1_,F_object_entry_usage_nvx::Bits bit2_);


class F_external_memory_handle_type {
private:
F_external_memory_handle_type(int flag_);
public:
int flag;
enum class Bits{
e_opaque_fd = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT,
e_opaque_win32 = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT,
e_opaque_win32_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
e_d3d11_texture = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT,
e_d3d11_texture_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT,
e_d3d12_heap = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT,
e_d3d12_resource = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT,
};
F_external_memory_handle_type();
F_external_memory_handle_type(Bits bits_);
F_external_memory_handle_type(F_external_memory_handle_type const& flag_);
F_external_memory_handle_type(std::initializer_list<Bits> bit_list);
F_external_memory_handle_type& operator = (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator | (Bits bit_);
F_external_memory_handle_type& operator |= (Bits bit_);
F_external_memory_handle_type operator | (F_external_memory_handle_type flag_);
F_external_memory_handle_type& operator |= (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator & (F_external_memory_handle_type flag_);
F_external_memory_handle_type& operator &= (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator ^ (F_external_memory_handle_type flag_);
F_external_memory_handle_type& operator ^= (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator ~ ();
bool operator !();
bool operator == (F_external_memory_handle_type flag_);
bool operator == (Bits bit_);
bool operator != (F_external_memory_handle_type flag_);
bool operator != (Bits bit_);
operator bool();
F_external_memory_handle_type all_flags();
F_external_memory_handle_type& clear();
VkExternalMemoryHandleTypeFlagBits get();
F_external_memory_handle_type& e_opaque_fd_on();
F_external_memory_handle_type& e_opaque_fd_off();
F_external_memory_handle_type& e_opaque_win32_on();
F_external_memory_handle_type& e_opaque_win32_off();
F_external_memory_handle_type& e_opaque_win32_kmt_on();
F_external_memory_handle_type& e_opaque_win32_kmt_off();
F_external_memory_handle_type& e_d3d11_texture_on();
F_external_memory_handle_type& e_d3d11_texture_off();
F_external_memory_handle_type& e_d3d11_texture_kmt_on();
F_external_memory_handle_type& e_d3d11_texture_kmt_off();
F_external_memory_handle_type& e_d3d12_heap_on();
F_external_memory_handle_type& e_d3d12_heap_off();
F_external_memory_handle_type& e_d3d12_resource_on();
F_external_memory_handle_type& e_d3d12_resource_off();
};
F_external_memory_handle_type operator|(F_external_memory_handle_type::Bits bit1_,F_external_memory_handle_type::Bits bit2_);


class F_external_memory_feature {
private:
F_external_memory_feature(int flag_);
public:
int flag;
enum class Bits{
e_dedicated_only = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT,
e_exportable = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT,
e_importable = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT,
};
F_external_memory_feature();
F_external_memory_feature(Bits bits_);
F_external_memory_feature(F_external_memory_feature const& flag_);
F_external_memory_feature(std::initializer_list<Bits> bit_list);
F_external_memory_feature& operator = (F_external_memory_feature flag_);
F_external_memory_feature operator | (Bits bit_);
F_external_memory_feature& operator |= (Bits bit_);
F_external_memory_feature operator | (F_external_memory_feature flag_);
F_external_memory_feature& operator |= (F_external_memory_feature flag_);
F_external_memory_feature operator & (F_external_memory_feature flag_);
F_external_memory_feature& operator &= (F_external_memory_feature flag_);
F_external_memory_feature operator ^ (F_external_memory_feature flag_);
F_external_memory_feature& operator ^= (F_external_memory_feature flag_);
F_external_memory_feature operator ~ ();
bool operator !();
bool operator == (F_external_memory_feature flag_);
bool operator == (Bits bit_);
bool operator != (F_external_memory_feature flag_);
bool operator != (Bits bit_);
operator bool();
F_external_memory_feature all_flags();
F_external_memory_feature& clear();
VkExternalMemoryFeatureFlagBits get();
F_external_memory_feature& e_dedicated_only_on();
F_external_memory_feature& e_dedicated_only_off();
F_external_memory_feature& e_exportable_on();
F_external_memory_feature& e_exportable_off();
F_external_memory_feature& e_importable_on();
F_external_memory_feature& e_importable_off();
};
F_external_memory_feature operator|(F_external_memory_feature::Bits bit1_,F_external_memory_feature::Bits bit2_);


class F_external_semaphore_handle_type {
private:
F_external_semaphore_handle_type(int flag_);
public:
int flag;
enum class Bits{
e_opaque_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT,
e_opaque_win32 = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
e_opaque_win32_kmt = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
e_d3d12_fence = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,
e_sync_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT,
};
F_external_semaphore_handle_type();
F_external_semaphore_handle_type(Bits bits_);
F_external_semaphore_handle_type(F_external_semaphore_handle_type const& flag_);
F_external_semaphore_handle_type(std::initializer_list<Bits> bit_list);
F_external_semaphore_handle_type& operator = (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator | (Bits bit_);
F_external_semaphore_handle_type& operator |= (Bits bit_);
F_external_semaphore_handle_type operator | (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type& operator |= (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator & (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type& operator &= (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator ^ (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type& operator ^= (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator ~ ();
bool operator !();
bool operator == (F_external_semaphore_handle_type flag_);
bool operator == (Bits bit_);
bool operator != (F_external_semaphore_handle_type flag_);
bool operator != (Bits bit_);
operator bool();
F_external_semaphore_handle_type all_flags();
F_external_semaphore_handle_type& clear();
VkExternalSemaphoreHandleTypeFlagBits get();
F_external_semaphore_handle_type& e_opaque_fd_on();
F_external_semaphore_handle_type& e_opaque_fd_off();
F_external_semaphore_handle_type& e_opaque_win32_on();
F_external_semaphore_handle_type& e_opaque_win32_off();
F_external_semaphore_handle_type& e_opaque_win32_kmt_on();
F_external_semaphore_handle_type& e_opaque_win32_kmt_off();
F_external_semaphore_handle_type& e_d3d12_fence_on();
F_external_semaphore_handle_type& e_d3d12_fence_off();
F_external_semaphore_handle_type& e_sync_fd_on();
F_external_semaphore_handle_type& e_sync_fd_off();
};
F_external_semaphore_handle_type operator|(F_external_semaphore_handle_type::Bits bit1_,F_external_semaphore_handle_type::Bits bit2_);


class F_external_semaphore_feature {
private:
F_external_semaphore_feature(int flag_);
public:
int flag;
enum class Bits{
e_exportable = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,
e_importable = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,
};
F_external_semaphore_feature();
F_external_semaphore_feature(Bits bits_);
F_external_semaphore_feature(F_external_semaphore_feature const& flag_);
F_external_semaphore_feature(std::initializer_list<Bits> bit_list);
F_external_semaphore_feature& operator = (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator | (Bits bit_);
F_external_semaphore_feature& operator |= (Bits bit_);
F_external_semaphore_feature operator | (F_external_semaphore_feature flag_);
F_external_semaphore_feature& operator |= (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator & (F_external_semaphore_feature flag_);
F_external_semaphore_feature& operator &= (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator ^ (F_external_semaphore_feature flag_);
F_external_semaphore_feature& operator ^= (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator ~ ();
bool operator !();
bool operator == (F_external_semaphore_feature flag_);
bool operator == (Bits bit_);
bool operator != (F_external_semaphore_feature flag_);
bool operator != (Bits bit_);
operator bool();
F_external_semaphore_feature all_flags();
F_external_semaphore_feature& clear();
VkExternalSemaphoreFeatureFlagBits get();
F_external_semaphore_feature& e_exportable_on();
F_external_semaphore_feature& e_exportable_off();
F_external_semaphore_feature& e_importable_on();
F_external_semaphore_feature& e_importable_off();
};
F_external_semaphore_feature operator|(F_external_semaphore_feature::Bits bit1_,F_external_semaphore_feature::Bits bit2_);


class F_semaphore_import {
private:
F_semaphore_import(int flag_);
public:
int flag;
enum class Bits{
e_temporary = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
};
F_semaphore_import();
F_semaphore_import(Bits bits_);
F_semaphore_import(F_semaphore_import const& flag_);
F_semaphore_import(std::initializer_list<Bits> bit_list);
F_semaphore_import& operator = (F_semaphore_import flag_);
F_semaphore_import operator | (Bits bit_);
F_semaphore_import& operator |= (Bits bit_);
F_semaphore_import operator | (F_semaphore_import flag_);
F_semaphore_import& operator |= (F_semaphore_import flag_);
F_semaphore_import operator & (F_semaphore_import flag_);
F_semaphore_import& operator &= (F_semaphore_import flag_);
F_semaphore_import operator ^ (F_semaphore_import flag_);
F_semaphore_import& operator ^= (F_semaphore_import flag_);
F_semaphore_import operator ~ ();
bool operator !();
bool operator == (F_semaphore_import flag_);
bool operator == (Bits bit_);
bool operator != (F_semaphore_import flag_);
bool operator != (Bits bit_);
operator bool();
F_semaphore_import all_flags();
F_semaphore_import& clear();
VkSemaphoreImportFlagBits get();
F_semaphore_import& e_temporary_on();
F_semaphore_import& e_temporary_off();
};
F_semaphore_import operator|(F_semaphore_import::Bits bit1_,F_semaphore_import::Bits bit2_);


class F_external_fence_handle_type {
private:
F_external_fence_handle_type(int flag_);
public:
int flag;
enum class Bits{
e_opaque_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT,
e_opaque_win32 = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
e_opaque_win32_kmt = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
e_sync_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT,
};
F_external_fence_handle_type();
F_external_fence_handle_type(Bits bits_);
F_external_fence_handle_type(F_external_fence_handle_type const& flag_);
F_external_fence_handle_type(std::initializer_list<Bits> bit_list);
F_external_fence_handle_type& operator = (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator | (Bits bit_);
F_external_fence_handle_type& operator |= (Bits bit_);
F_external_fence_handle_type operator | (F_external_fence_handle_type flag_);
F_external_fence_handle_type& operator |= (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator & (F_external_fence_handle_type flag_);
F_external_fence_handle_type& operator &= (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator ^ (F_external_fence_handle_type flag_);
F_external_fence_handle_type& operator ^= (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator ~ ();
bool operator !();
bool operator == (F_external_fence_handle_type flag_);
bool operator == (Bits bit_);
bool operator != (F_external_fence_handle_type flag_);
bool operator != (Bits bit_);
operator bool();
F_external_fence_handle_type all_flags();
F_external_fence_handle_type& clear();
VkExternalFenceHandleTypeFlagBits get();
F_external_fence_handle_type& e_opaque_fd_on();
F_external_fence_handle_type& e_opaque_fd_off();
F_external_fence_handle_type& e_opaque_win32_on();
F_external_fence_handle_type& e_opaque_win32_off();
F_external_fence_handle_type& e_opaque_win32_kmt_on();
F_external_fence_handle_type& e_opaque_win32_kmt_off();
F_external_fence_handle_type& e_sync_fd_on();
F_external_fence_handle_type& e_sync_fd_off();
};
F_external_fence_handle_type operator|(F_external_fence_handle_type::Bits bit1_,F_external_fence_handle_type::Bits bit2_);


class F_external_fence_feature {
private:
F_external_fence_feature(int flag_);
public:
int flag;
enum class Bits{
e_exportable = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,
e_importable = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,
};
F_external_fence_feature();
F_external_fence_feature(Bits bits_);
F_external_fence_feature(F_external_fence_feature const& flag_);
F_external_fence_feature(std::initializer_list<Bits> bit_list);
F_external_fence_feature& operator = (F_external_fence_feature flag_);
F_external_fence_feature operator | (Bits bit_);
F_external_fence_feature& operator |= (Bits bit_);
F_external_fence_feature operator | (F_external_fence_feature flag_);
F_external_fence_feature& operator |= (F_external_fence_feature flag_);
F_external_fence_feature operator & (F_external_fence_feature flag_);
F_external_fence_feature& operator &= (F_external_fence_feature flag_);
F_external_fence_feature operator ^ (F_external_fence_feature flag_);
F_external_fence_feature& operator ^= (F_external_fence_feature flag_);
F_external_fence_feature operator ~ ();
bool operator !();
bool operator == (F_external_fence_feature flag_);
bool operator == (Bits bit_);
bool operator != (F_external_fence_feature flag_);
bool operator != (Bits bit_);
operator bool();
F_external_fence_feature all_flags();
F_external_fence_feature& clear();
VkExternalFenceFeatureFlagBits get();
F_external_fence_feature& e_exportable_on();
F_external_fence_feature& e_exportable_off();
F_external_fence_feature& e_importable_on();
F_external_fence_feature& e_importable_off();
};
F_external_fence_feature operator|(F_external_fence_feature::Bits bit1_,F_external_fence_feature::Bits bit2_);


class F_fence_import {
private:
F_fence_import(int flag_);
public:
int flag;
enum class Bits{
e_temporary = VK_FENCE_IMPORT_TEMPORARY_BIT,
};
F_fence_import();
F_fence_import(Bits bits_);
F_fence_import(F_fence_import const& flag_);
F_fence_import(std::initializer_list<Bits> bit_list);
F_fence_import& operator = (F_fence_import flag_);
F_fence_import operator | (Bits bit_);
F_fence_import& operator |= (Bits bit_);
F_fence_import operator | (F_fence_import flag_);
F_fence_import& operator |= (F_fence_import flag_);
F_fence_import operator & (F_fence_import flag_);
F_fence_import& operator &= (F_fence_import flag_);
F_fence_import operator ^ (F_fence_import flag_);
F_fence_import& operator ^= (F_fence_import flag_);
F_fence_import operator ~ ();
bool operator !();
bool operator == (F_fence_import flag_);
bool operator == (Bits bit_);
bool operator != (F_fence_import flag_);
bool operator != (Bits bit_);
operator bool();
F_fence_import all_flags();
F_fence_import& clear();
VkFenceImportFlagBits get();
F_fence_import& e_temporary_on();
F_fence_import& e_temporary_off();
};
F_fence_import operator|(F_fence_import::Bits bit1_,F_fence_import::Bits bit2_);


class F_surface_counter_ext {
private:
F_surface_counter_ext(int flag_);
public:
int flag;
enum class Bits{
e_vblank_ext = VK_SURFACE_COUNTER_VBLANK_EXT,
};
F_surface_counter_ext();
F_surface_counter_ext(Bits bits_);
F_surface_counter_ext(F_surface_counter_ext const& flag_);
F_surface_counter_ext(std::initializer_list<Bits> bit_list);
F_surface_counter_ext& operator = (F_surface_counter_ext flag_);
F_surface_counter_ext operator | (Bits bit_);
F_surface_counter_ext& operator |= (Bits bit_);
F_surface_counter_ext operator | (F_surface_counter_ext flag_);
F_surface_counter_ext& operator |= (F_surface_counter_ext flag_);
F_surface_counter_ext operator & (F_surface_counter_ext flag_);
F_surface_counter_ext& operator &= (F_surface_counter_ext flag_);
F_surface_counter_ext operator ^ (F_surface_counter_ext flag_);
F_surface_counter_ext& operator ^= (F_surface_counter_ext flag_);
F_surface_counter_ext operator ~ ();
bool operator !();
bool operator == (F_surface_counter_ext flag_);
bool operator == (Bits bit_);
bool operator != (F_surface_counter_ext flag_);
bool operator != (Bits bit_);
operator bool();
F_surface_counter_ext all_flags();
F_surface_counter_ext& clear();
VkSurfaceCounterFlagBitsEXT get();
F_surface_counter_ext& e_vblank_ext_on();
F_surface_counter_ext& e_vblank_ext_off();
};
F_surface_counter_ext operator|(F_surface_counter_ext::Bits bit1_,F_surface_counter_ext::Bits bit2_);


class F_peer_memory_feature {
private:
F_peer_memory_feature(int flag_);
public:
int flag;
enum class Bits{
e_copy_src = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,
e_copy_dst = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,
e_generic_src = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,
e_generic_dst = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,
};
F_peer_memory_feature();
F_peer_memory_feature(Bits bits_);
F_peer_memory_feature(F_peer_memory_feature const& flag_);
F_peer_memory_feature(std::initializer_list<Bits> bit_list);
F_peer_memory_feature& operator = (F_peer_memory_feature flag_);
F_peer_memory_feature operator | (Bits bit_);
F_peer_memory_feature& operator |= (Bits bit_);
F_peer_memory_feature operator | (F_peer_memory_feature flag_);
F_peer_memory_feature& operator |= (F_peer_memory_feature flag_);
F_peer_memory_feature operator & (F_peer_memory_feature flag_);
F_peer_memory_feature& operator &= (F_peer_memory_feature flag_);
F_peer_memory_feature operator ^ (F_peer_memory_feature flag_);
F_peer_memory_feature& operator ^= (F_peer_memory_feature flag_);
F_peer_memory_feature operator ~ ();
bool operator !();
bool operator == (F_peer_memory_feature flag_);
bool operator == (Bits bit_);
bool operator != (F_peer_memory_feature flag_);
bool operator != (Bits bit_);
operator bool();
F_peer_memory_feature all_flags();
F_peer_memory_feature& clear();
VkPeerMemoryFeatureFlagBits get();
F_peer_memory_feature& e_copy_src_on();
F_peer_memory_feature& e_copy_src_off();
F_peer_memory_feature& e_copy_dst_on();
F_peer_memory_feature& e_copy_dst_off();
F_peer_memory_feature& e_generic_src_on();
F_peer_memory_feature& e_generic_src_off();
F_peer_memory_feature& e_generic_dst_on();
F_peer_memory_feature& e_generic_dst_off();
};
F_peer_memory_feature operator|(F_peer_memory_feature::Bits bit1_,F_peer_memory_feature::Bits bit2_);


class F_memory_allocate {
private:
F_memory_allocate(int flag_);
public:
int flag;
enum class Bits{
e_device_mask = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,
};
F_memory_allocate();
F_memory_allocate(Bits bits_);
F_memory_allocate(F_memory_allocate const& flag_);
F_memory_allocate(std::initializer_list<Bits> bit_list);
F_memory_allocate& operator = (F_memory_allocate flag_);
F_memory_allocate operator | (Bits bit_);
F_memory_allocate& operator |= (Bits bit_);
F_memory_allocate operator | (F_memory_allocate flag_);
F_memory_allocate& operator |= (F_memory_allocate flag_);
F_memory_allocate operator & (F_memory_allocate flag_);
F_memory_allocate& operator &= (F_memory_allocate flag_);
F_memory_allocate operator ^ (F_memory_allocate flag_);
F_memory_allocate& operator ^= (F_memory_allocate flag_);
F_memory_allocate operator ~ ();
bool operator !();
bool operator == (F_memory_allocate flag_);
bool operator == (Bits bit_);
bool operator != (F_memory_allocate flag_);
bool operator != (Bits bit_);
operator bool();
F_memory_allocate all_flags();
F_memory_allocate& clear();
VkMemoryAllocateFlagBits get();
F_memory_allocate& e_device_mask_on();
F_memory_allocate& e_device_mask_off();
};
F_memory_allocate operator|(F_memory_allocate::Bits bit1_,F_memory_allocate::Bits bit2_);


class F_device_group_present_mode_khr {
private:
F_device_group_present_mode_khr(int flag_);
public:
int flag;
enum class Bits{
e_local_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR,
e_remote_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR,
e_sum_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR,
e_local_multi_device_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR,
};
F_device_group_present_mode_khr();
F_device_group_present_mode_khr(Bits bits_);
F_device_group_present_mode_khr(F_device_group_present_mode_khr const& flag_);
F_device_group_present_mode_khr(std::initializer_list<Bits> bit_list);
F_device_group_present_mode_khr& operator = (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator | (Bits bit_);
F_device_group_present_mode_khr& operator |= (Bits bit_);
F_device_group_present_mode_khr operator | (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr& operator |= (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator & (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr& operator &= (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator ^ (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr& operator ^= (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator ~ ();
bool operator !();
bool operator == (F_device_group_present_mode_khr flag_);
bool operator == (Bits bit_);
bool operator != (F_device_group_present_mode_khr flag_);
bool operator != (Bits bit_);
operator bool();
F_device_group_present_mode_khr all_flags();
F_device_group_present_mode_khr& clear();
VkDeviceGroupPresentModeFlagBitsKHR get();
F_device_group_present_mode_khr& e_local_bit_khr_on();
F_device_group_present_mode_khr& e_local_bit_khr_off();
F_device_group_present_mode_khr& e_remote_bit_khr_on();
F_device_group_present_mode_khr& e_remote_bit_khr_off();
F_device_group_present_mode_khr& e_sum_bit_khr_on();
F_device_group_present_mode_khr& e_sum_bit_khr_off();
F_device_group_present_mode_khr& e_local_multi_device_bit_khr_on();
F_device_group_present_mode_khr& e_local_multi_device_bit_khr_off();
};
F_device_group_present_mode_khr operator|(F_device_group_present_mode_khr::Bits bit1_,F_device_group_present_mode_khr::Bits bit2_);


class F_debug_utils_message_severity_ext {
private:
F_debug_utils_message_severity_ext(int flag_);
public:
int flag;
enum class Bits{
e_verbose_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT,
e_info_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT,
e_warning_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT,
e_error_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
};
F_debug_utils_message_severity_ext();
F_debug_utils_message_severity_ext(Bits bits_);
F_debug_utils_message_severity_ext(F_debug_utils_message_severity_ext const& flag_);
F_debug_utils_message_severity_ext(std::initializer_list<Bits> bit_list);
F_debug_utils_message_severity_ext& operator = (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator | (Bits bit_);
F_debug_utils_message_severity_ext& operator |= (Bits bit_);
F_debug_utils_message_severity_ext operator | (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext& operator |= (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator & (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext& operator &= (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator ^ (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext& operator ^= (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator ~ ();
bool operator !();
bool operator == (F_debug_utils_message_severity_ext flag_);
bool operator == (Bits bit_);
bool operator != (F_debug_utils_message_severity_ext flag_);
bool operator != (Bits bit_);
operator bool();
F_debug_utils_message_severity_ext all_flags();
F_debug_utils_message_severity_ext& clear();
VkDebugUtilsMessageSeverityFlagBitsEXT get();
F_debug_utils_message_severity_ext& e_verbose_bit_ext_on();
F_debug_utils_message_severity_ext& e_verbose_bit_ext_off();
F_debug_utils_message_severity_ext& e_info_bit_ext_on();
F_debug_utils_message_severity_ext& e_info_bit_ext_off();
F_debug_utils_message_severity_ext& e_warning_bit_ext_on();
F_debug_utils_message_severity_ext& e_warning_bit_ext_off();
F_debug_utils_message_severity_ext& e_error_bit_ext_on();
F_debug_utils_message_severity_ext& e_error_bit_ext_off();
};
F_debug_utils_message_severity_ext operator|(F_debug_utils_message_severity_ext::Bits bit1_,F_debug_utils_message_severity_ext::Bits bit2_);


class F_debug_utils_message_type_ext {
private:
F_debug_utils_message_type_ext(int flag_);
public:
int flag;
enum class Bits{
e_general_bit_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT,
e_validation_bit_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT,
e_performance_bit_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,
};
F_debug_utils_message_type_ext();
F_debug_utils_message_type_ext(Bits bits_);
F_debug_utils_message_type_ext(F_debug_utils_message_type_ext const& flag_);
F_debug_utils_message_type_ext(std::initializer_list<Bits> bit_list);
F_debug_utils_message_type_ext& operator = (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator | (Bits bit_);
F_debug_utils_message_type_ext& operator |= (Bits bit_);
F_debug_utils_message_type_ext operator | (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext& operator |= (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator & (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext& operator &= (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator ^ (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext& operator ^= (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator ~ ();
bool operator !();
bool operator == (F_debug_utils_message_type_ext flag_);
bool operator == (Bits bit_);
bool operator != (F_debug_utils_message_type_ext flag_);
bool operator != (Bits bit_);
operator bool();
F_debug_utils_message_type_ext all_flags();
F_debug_utils_message_type_ext& clear();
VkDebugUtilsMessageTypeFlagBitsEXT get();
F_debug_utils_message_type_ext& e_general_bit_ext_on();
F_debug_utils_message_type_ext& e_general_bit_ext_off();
F_debug_utils_message_type_ext& e_validation_bit_ext_on();
F_debug_utils_message_type_ext& e_validation_bit_ext_off();
F_debug_utils_message_type_ext& e_performance_bit_ext_on();
F_debug_utils_message_type_ext& e_performance_bit_ext_off();
};
F_debug_utils_message_type_ext operator|(F_debug_utils_message_type_ext::Bits bit1_,F_debug_utils_message_type_ext::Bits bit2_);


class F_descriptor_binding_ext {
private:
F_descriptor_binding_ext(int flag_);
public:
int flag;
enum class Bits{
e_update_after_bind_bit_ext = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT,
e_update_unused_while_pending_bit_ext = VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT,
e_partially_bound_bit_ext = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT,
e_variable_descriptor_count_bit_ext = VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT,
};
F_descriptor_binding_ext();
F_descriptor_binding_ext(Bits bits_);
F_descriptor_binding_ext(F_descriptor_binding_ext const& flag_);
F_descriptor_binding_ext(std::initializer_list<Bits> bit_list);
F_descriptor_binding_ext& operator = (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator | (Bits bit_);
F_descriptor_binding_ext& operator |= (Bits bit_);
F_descriptor_binding_ext operator | (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext& operator |= (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator & (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext& operator &= (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator ^ (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext& operator ^= (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator ~ ();
bool operator !();
bool operator == (F_descriptor_binding_ext flag_);
bool operator == (Bits bit_);
bool operator != (F_descriptor_binding_ext flag_);
bool operator != (Bits bit_);
operator bool();
F_descriptor_binding_ext all_flags();
F_descriptor_binding_ext& clear();
VkDescriptorBindingFlagBitsEXT get();
F_descriptor_binding_ext& e_update_after_bind_bit_ext_on();
F_descriptor_binding_ext& e_update_after_bind_bit_ext_off();
F_descriptor_binding_ext& e_update_unused_while_pending_bit_ext_on();
F_descriptor_binding_ext& e_update_unused_while_pending_bit_ext_off();
F_descriptor_binding_ext& e_partially_bound_bit_ext_on();
F_descriptor_binding_ext& e_partially_bound_bit_ext_off();
F_descriptor_binding_ext& e_variable_descriptor_count_bit_ext_on();
F_descriptor_binding_ext& e_variable_descriptor_count_bit_ext_off();
};
F_descriptor_binding_ext operator|(F_descriptor_binding_ext::Bits bit1_,F_descriptor_binding_ext::Bits bit2_);

#if 0
class F_conditional_rendering_ext {
private:
F_conditional_rendering_ext(int flag_);
public:
int flag;
enum class Bits{
e_inverted_bit_ext = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,
};
F_conditional_rendering_ext();
F_conditional_rendering_ext(Bits bits_);
F_conditional_rendering_ext(F_conditional_rendering_ext const& flag_);
F_conditional_rendering_ext(std::initializer_list<Bits> bit_list);
F_conditional_rendering_ext& operator = (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator | (Bits bit_);
F_conditional_rendering_ext& operator |= (Bits bit_);
F_conditional_rendering_ext operator | (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext& operator |= (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator & (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext& operator &= (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator ^ (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext& operator ^= (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator ~ ();
bool operator !();
bool operator == (F_conditional_rendering_ext flag_);
bool operator == (Bits bit_);
bool operator != (F_conditional_rendering_ext flag_);
bool operator != (Bits bit_);
operator bool();
F_conditional_rendering_ext all_flags();
F_conditional_rendering_ext& clear();
VkConditionalRenderingFlagBitsEXT get();
F_conditional_rendering_ext& e_inverted_bit_ext_on();
F_conditional_rendering_ext& e_inverted_bit_ext_off();
};
F_conditional_rendering_ext operator|(F_conditional_rendering_ext::Bits bit1_,F_conditional_rendering_ext::Bits bit2_);


class F_geometry_instance_nvx {
private:
F_geometry_instance_nvx(int flag_);
public:
int flag;
enum class Bits{
e_triangle_cull_disable_bit_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX,
e_triangle_cull_flip_winding_bit_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX,
e_force_opaque_bit_nvx = VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX,
e_force_no_opaque_bit_nvx = VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX,
};
F_geometry_instance_nvx();
F_geometry_instance_nvx(Bits bits_);
F_geometry_instance_nvx(F_geometry_instance_nvx const& flag_);
F_geometry_instance_nvx(std::initializer_list<Bits> bit_list);
F_geometry_instance_nvx& operator = (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator | (Bits bit_);
F_geometry_instance_nvx& operator |= (Bits bit_);
F_geometry_instance_nvx operator | (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx& operator |= (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator & (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx& operator &= (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator ^ (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx& operator ^= (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator ~ ();
bool operator !();
bool operator == (F_geometry_instance_nvx flag_);
bool operator == (Bits bit_);
bool operator != (F_geometry_instance_nvx flag_);
bool operator != (Bits bit_);
operator bool();
F_geometry_instance_nvx all_flags();
F_geometry_instance_nvx& clear();
VkGeometryInstanceFlagBitsNVX get();
F_geometry_instance_nvx& e_triangle_cull_disable_bit_nvx_on();
F_geometry_instance_nvx& e_triangle_cull_disable_bit_nvx_off();
F_geometry_instance_nvx& e_triangle_cull_flip_winding_bit_nvx_on();
F_geometry_instance_nvx& e_triangle_cull_flip_winding_bit_nvx_off();
F_geometry_instance_nvx& e_force_opaque_bit_nvx_on();
F_geometry_instance_nvx& e_force_opaque_bit_nvx_off();
F_geometry_instance_nvx& e_force_no_opaque_bit_nvx_on();
F_geometry_instance_nvx& e_force_no_opaque_bit_nvx_off();
};
F_geometry_instance_nvx operator|(F_geometry_instance_nvx::Bits bit1_,F_geometry_instance_nvx::Bits bit2_);


class F_geometry_nvx {
private:
F_geometry_nvx(int flag_);
public:
int flag;
enum class Bits{
e_opaque_bit_nvx = VK_GEOMETRY_OPAQUE_BIT_NVX,
e_no_duplicate_any_hit_invocation_bit_nvx = VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX,
};
F_geometry_nvx();
F_geometry_nvx(Bits bits_);
F_geometry_nvx(F_geometry_nvx const& flag_);
F_geometry_nvx(std::initializer_list<Bits> bit_list);
F_geometry_nvx& operator = (F_geometry_nvx flag_);
F_geometry_nvx operator | (Bits bit_);
F_geometry_nvx& operator |= (Bits bit_);
F_geometry_nvx operator | (F_geometry_nvx flag_);
F_geometry_nvx& operator |= (F_geometry_nvx flag_);
F_geometry_nvx operator & (F_geometry_nvx flag_);
F_geometry_nvx& operator &= (F_geometry_nvx flag_);
F_geometry_nvx operator ^ (F_geometry_nvx flag_);
F_geometry_nvx& operator ^= (F_geometry_nvx flag_);
F_geometry_nvx operator ~ ();
bool operator !();
bool operator == (F_geometry_nvx flag_);
bool operator == (Bits bit_);
bool operator != (F_geometry_nvx flag_);
bool operator != (Bits bit_);
operator bool();
F_geometry_nvx all_flags();
F_geometry_nvx& clear();
VkGeometryFlagBitsNVX get();
F_geometry_nvx& e_opaque_bit_nvx_on();
F_geometry_nvx& e_opaque_bit_nvx_off();
F_geometry_nvx& e_no_duplicate_any_hit_invocation_bit_nvx_on();
F_geometry_nvx& e_no_duplicate_any_hit_invocation_bit_nvx_off();
};
F_geometry_nvx operator|(F_geometry_nvx::Bits bit1_,F_geometry_nvx::Bits bit2_);


class F_build_acceleration_structure_nvx {
private:
F_build_acceleration_structure_nvx(int flag_);
public:
int flag;
enum class Bits{
e_allow_update_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX,
e_allow_compaction_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX,
e_prefer_fast_trace_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX,
e_prefer_fast_build_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX,
e_low_memory_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX,
};
F_build_acceleration_structure_nvx();
F_build_acceleration_structure_nvx(Bits bits_);
F_build_acceleration_structure_nvx(F_build_acceleration_structure_nvx const& flag_);
F_build_acceleration_structure_nvx(std::initializer_list<Bits> bit_list);
F_build_acceleration_structure_nvx& operator = (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator | (Bits bit_);
F_build_acceleration_structure_nvx& operator |= (Bits bit_);
F_build_acceleration_structure_nvx operator | (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx& operator |= (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator & (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx& operator &= (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator ^ (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx& operator ^= (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator ~ ();
bool operator !();
bool operator == (F_build_acceleration_structure_nvx flag_);
bool operator == (Bits bit_);
bool operator != (F_build_acceleration_structure_nvx flag_);
bool operator != (Bits bit_);
operator bool();
F_build_acceleration_structure_nvx all_flags();
F_build_acceleration_structure_nvx& clear();
VkBuildAccelerationStructureFlagBitsNVX get();
F_build_acceleration_structure_nvx& e_allow_update_bit_nvx_on();
F_build_acceleration_structure_nvx& e_allow_update_bit_nvx_off();
F_build_acceleration_structure_nvx& e_allow_compaction_bit_nvx_on();
F_build_acceleration_structure_nvx& e_allow_compaction_bit_nvx_off();
F_build_acceleration_structure_nvx& e_prefer_fast_trace_bit_nvx_on();
F_build_acceleration_structure_nvx& e_prefer_fast_trace_bit_nvx_off();
F_build_acceleration_structure_nvx& e_prefer_fast_build_bit_nvx_on();
F_build_acceleration_structure_nvx& e_prefer_fast_build_bit_nvx_off();
F_build_acceleration_structure_nvx& e_low_memory_bit_nvx_on();
F_build_acceleration_structure_nvx& e_low_memory_bit_nvx_off();
};
F_build_acceleration_structure_nvx operator|(F_build_acceleration_structure_nvx::Bits bit1_,F_build_acceleration_structure_nvx::Bits bit2_);

#endif

}}

