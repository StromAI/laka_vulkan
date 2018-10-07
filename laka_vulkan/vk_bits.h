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
enum B{
b_none = VK_CULL_MODE_NONE,
b_front = VK_CULL_MODE_FRONT_BIT,
b_back = VK_CULL_MODE_BACK_BIT,
b_front_and_back = VK_CULL_MODE_FRONT_AND_BACK,
};
F_cull_mode();
F_cull_mode(B bits_);
F_cull_mode(F_cull_mode const& flag_);
F_cull_mode(std::initializer_list<B> bit_list);
F_cull_mode& operator = (F_cull_mode flag_);
F_cull_mode operator | (B bit_);
F_cull_mode& operator |= (B bit_);
F_cull_mode operator | (F_cull_mode flag_);
F_cull_mode& operator |= (F_cull_mode flag_);
F_cull_mode operator & (F_cull_mode flag_);
F_cull_mode& operator &= (F_cull_mode flag_);
F_cull_mode operator ^ (F_cull_mode flag_);
F_cull_mode& operator ^= (F_cull_mode flag_);
F_cull_mode operator ~ ();
bool operator !();
bool operator == (F_cull_mode flag_);
bool operator == (B bit_);
bool operator != (F_cull_mode flag_);
bool operator != (B bit_);
operator bool();
F_cull_mode all_flags();
F_cull_mode& clear();
VkCullModeFlagBits get();
F_cull_mode& on_none();
F_cull_mode& off_none();
F_cull_mode& on_front();
F_cull_mode& off_front();
F_cull_mode& on_back();
F_cull_mode& off_back();
F_cull_mode& on_front_and_back();
F_cull_mode& off_front_and_back();
};
F_cull_mode operator|(F_cull_mode::B bit1_,F_cull_mode::B bit2_);


class F_queue {
private:
F_queue(int flag_);
public:
int flag;
enum B{
b_graphics = VK_QUEUE_GRAPHICS_BIT,
b_compute = VK_QUEUE_COMPUTE_BIT,
b_transfer = VK_QUEUE_TRANSFER_BIT,
b_sparse_binding = VK_QUEUE_SPARSE_BINDING_BIT,
};
F_queue();
F_queue(B bits_);
F_queue(F_queue const& flag_);
F_queue(std::initializer_list<B> bit_list);
F_queue& operator = (F_queue flag_);
F_queue operator | (B bit_);
F_queue& operator |= (B bit_);
F_queue operator | (F_queue flag_);
F_queue& operator |= (F_queue flag_);
F_queue operator & (F_queue flag_);
F_queue& operator &= (F_queue flag_);
F_queue operator ^ (F_queue flag_);
F_queue& operator ^= (F_queue flag_);
F_queue operator ~ ();
bool operator !();
bool operator == (F_queue flag_);
bool operator == (B bit_);
bool operator != (F_queue flag_);
bool operator != (B bit_);
operator bool();
F_queue all_flags();
F_queue& clear();
VkQueueFlagBits get();
F_queue& on_graphics();
F_queue& off_graphics();
F_queue& on_compute();
F_queue& off_compute();
F_queue& on_transfer();
F_queue& off_transfer();
F_queue& on_sparse_binding();
F_queue& off_sparse_binding();
};
F_queue operator|(F_queue::B bit1_,F_queue::B bit2_);


class F_memory_property {
private:
F_memory_property(int flag_);
public:
int flag;
enum B{
b_device_local = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
b_host_visible = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT,
b_host_coherent = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
b_host_cached = VK_MEMORY_PROPERTY_HOST_CACHED_BIT,
b_lazily_allocated = VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT,
};
F_memory_property();
F_memory_property(B bits_);
F_memory_property(F_memory_property const& flag_);
F_memory_property(std::initializer_list<B> bit_list);
F_memory_property& operator = (F_memory_property flag_);
F_memory_property operator | (B bit_);
F_memory_property& operator |= (B bit_);
F_memory_property operator | (F_memory_property flag_);
F_memory_property& operator |= (F_memory_property flag_);
F_memory_property operator & (F_memory_property flag_);
F_memory_property& operator &= (F_memory_property flag_);
F_memory_property operator ^ (F_memory_property flag_);
F_memory_property& operator ^= (F_memory_property flag_);
F_memory_property operator ~ ();
bool operator !();
bool operator == (F_memory_property flag_);
bool operator == (B bit_);
bool operator != (F_memory_property flag_);
bool operator != (B bit_);
operator bool();
F_memory_property all_flags();
F_memory_property& clear();
VkMemoryPropertyFlagBits get();
F_memory_property& on_device_local();
F_memory_property& off_device_local();
F_memory_property& on_host_visible();
F_memory_property& off_host_visible();
F_memory_property& on_host_coherent();
F_memory_property& off_host_coherent();
F_memory_property& on_host_cached();
F_memory_property& off_host_cached();
F_memory_property& on_lazily_allocated();
F_memory_property& off_lazily_allocated();
};
F_memory_property operator|(F_memory_property::B bit1_,F_memory_property::B bit2_);


class F_memory_heap {
private:
F_memory_heap(int flag_);
public:
int flag;
enum B{
b_device_local = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT,
};
F_memory_heap();
F_memory_heap(B bits_);
F_memory_heap(F_memory_heap const& flag_);
F_memory_heap(std::initializer_list<B> bit_list);
F_memory_heap& operator = (F_memory_heap flag_);
F_memory_heap operator | (B bit_);
F_memory_heap& operator |= (B bit_);
F_memory_heap operator | (F_memory_heap flag_);
F_memory_heap& operator |= (F_memory_heap flag_);
F_memory_heap operator & (F_memory_heap flag_);
F_memory_heap& operator &= (F_memory_heap flag_);
F_memory_heap operator ^ (F_memory_heap flag_);
F_memory_heap& operator ^= (F_memory_heap flag_);
F_memory_heap operator ~ ();
bool operator !();
bool operator == (F_memory_heap flag_);
bool operator == (B bit_);
bool operator != (F_memory_heap flag_);
bool operator != (B bit_);
operator bool();
F_memory_heap all_flags();
F_memory_heap& clear();
VkMemoryHeapFlagBits get();
F_memory_heap& on_device_local();
F_memory_heap& off_device_local();
};
F_memory_heap operator|(F_memory_heap::B bit1_,F_memory_heap::B bit2_);


class F_access {
private:
F_access(int flag_);
public:
int flag;
enum B{
b_indirect_command_read = VK_ACCESS_INDIRECT_COMMAND_READ_BIT,
b_index_read = VK_ACCESS_INDEX_READ_BIT,
b_vertex_attribute_read = VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT,
b_uniform_read = VK_ACCESS_UNIFORM_READ_BIT,
b_input_attachment_read = VK_ACCESS_INPUT_ATTACHMENT_READ_BIT,
b_shader_read = VK_ACCESS_SHADER_READ_BIT,
b_shader_write = VK_ACCESS_SHADER_WRITE_BIT,
b_color_attachment_read = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT,
b_color_attachment_write = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
b_depth_stencil_attachment_read = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT,
b_depth_stencil_attachment_write = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT,
b_transfer_read = VK_ACCESS_TRANSFER_READ_BIT,
b_transfer_write = VK_ACCESS_TRANSFER_WRITE_BIT,
b_host_read = VK_ACCESS_HOST_READ_BIT,
b_host_write = VK_ACCESS_HOST_WRITE_BIT,
b_memory_read = VK_ACCESS_MEMORY_READ_BIT,
b_memory_write = VK_ACCESS_MEMORY_WRITE_BIT,
};
F_access();
F_access(B bits_);
F_access(F_access const& flag_);
F_access(std::initializer_list<B> bit_list);
F_access& operator = (F_access flag_);
F_access operator | (B bit_);
F_access& operator |= (B bit_);
F_access operator | (F_access flag_);
F_access& operator |= (F_access flag_);
F_access operator & (F_access flag_);
F_access& operator &= (F_access flag_);
F_access operator ^ (F_access flag_);
F_access& operator ^= (F_access flag_);
F_access operator ~ ();
bool operator !();
bool operator == (F_access flag_);
bool operator == (B bit_);
bool operator != (F_access flag_);
bool operator != (B bit_);
operator bool();
F_access all_flags();
F_access& clear();
VkAccessFlagBits get();
F_access& on_indirect_command_read();
F_access& off_indirect_command_read();
F_access& on_index_read();
F_access& off_index_read();
F_access& on_vertex_attribute_read();
F_access& off_vertex_attribute_read();
F_access& on_uniform_read();
F_access& off_uniform_read();
F_access& on_input_attachment_read();
F_access& off_input_attachment_read();
F_access& on_shader_read();
F_access& off_shader_read();
F_access& on_shader_write();
F_access& off_shader_write();
F_access& on_color_attachment_read();
F_access& off_color_attachment_read();
F_access& on_color_attachment_write();
F_access& off_color_attachment_write();
F_access& on_depth_stencil_attachment_read();
F_access& off_depth_stencil_attachment_read();
F_access& on_depth_stencil_attachment_write();
F_access& off_depth_stencil_attachment_write();
F_access& on_transfer_read();
F_access& off_transfer_read();
F_access& on_transfer_write();
F_access& off_transfer_write();
F_access& on_host_read();
F_access& off_host_read();
F_access& on_host_write();
F_access& off_host_write();
F_access& on_memory_read();
F_access& off_memory_read();
F_access& on_memory_write();
F_access& off_memory_write();
};
F_access operator|(F_access::B bit1_,F_access::B bit2_);


class F_buffer_usage {
private:
F_buffer_usage(int flag_);
public:
int flag;
enum B{
b_transfer_src = VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
b_transfer_dst = VK_BUFFER_USAGE_TRANSFER_DST_BIT,
b_uniform_texel_buffer = VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT,
b_storage_texel_buffer = VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT,
b_uniform_buffer = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
b_storage_buffer = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,
b_index_buffer = VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
b_vertex_buffer = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
b_indirect_buffer = VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT,
};
F_buffer_usage();
F_buffer_usage(B bits_);
F_buffer_usage(F_buffer_usage const& flag_);
F_buffer_usage(std::initializer_list<B> bit_list);
F_buffer_usage& operator = (F_buffer_usage flag_);
F_buffer_usage operator | (B bit_);
F_buffer_usage& operator |= (B bit_);
F_buffer_usage operator | (F_buffer_usage flag_);
F_buffer_usage& operator |= (F_buffer_usage flag_);
F_buffer_usage operator & (F_buffer_usage flag_);
F_buffer_usage& operator &= (F_buffer_usage flag_);
F_buffer_usage operator ^ (F_buffer_usage flag_);
F_buffer_usage& operator ^= (F_buffer_usage flag_);
F_buffer_usage operator ~ ();
bool operator !();
bool operator == (F_buffer_usage flag_);
bool operator == (B bit_);
bool operator != (F_buffer_usage flag_);
bool operator != (B bit_);
operator bool();
F_buffer_usage all_flags();
F_buffer_usage& clear();
VkBufferUsageFlagBits get();
F_buffer_usage& on_transfer_src();
F_buffer_usage& off_transfer_src();
F_buffer_usage& on_transfer_dst();
F_buffer_usage& off_transfer_dst();
F_buffer_usage& on_uniform_texel_buffer();
F_buffer_usage& off_uniform_texel_buffer();
F_buffer_usage& on_storage_texel_buffer();
F_buffer_usage& off_storage_texel_buffer();
F_buffer_usage& on_uniform_buffer();
F_buffer_usage& off_uniform_buffer();
F_buffer_usage& on_storage_buffer();
F_buffer_usage& off_storage_buffer();
F_buffer_usage& on_index_buffer();
F_buffer_usage& off_index_buffer();
F_buffer_usage& on_vertex_buffer();
F_buffer_usage& off_vertex_buffer();
F_buffer_usage& on_indirect_buffer();
F_buffer_usage& off_indirect_buffer();
};
F_buffer_usage operator|(F_buffer_usage::B bit1_,F_buffer_usage::B bit2_);


class F_buffer_create {
private:
F_buffer_create(int flag_);
public:
int flag;
enum B{
b_sparse_binding = VK_BUFFER_CREATE_SPARSE_BINDING_BIT,
b_sparse_residency = VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT,
b_sparse_aliased = VK_BUFFER_CREATE_SPARSE_ALIASED_BIT,
};
F_buffer_create();
F_buffer_create(B bits_);
F_buffer_create(F_buffer_create const& flag_);
F_buffer_create(std::initializer_list<B> bit_list);
F_buffer_create& operator = (F_buffer_create flag_);
F_buffer_create operator | (B bit_);
F_buffer_create& operator |= (B bit_);
F_buffer_create operator | (F_buffer_create flag_);
F_buffer_create& operator |= (F_buffer_create flag_);
F_buffer_create operator & (F_buffer_create flag_);
F_buffer_create& operator &= (F_buffer_create flag_);
F_buffer_create operator ^ (F_buffer_create flag_);
F_buffer_create& operator ^= (F_buffer_create flag_);
F_buffer_create operator ~ ();
bool operator !();
bool operator == (F_buffer_create flag_);
bool operator == (B bit_);
bool operator != (F_buffer_create flag_);
bool operator != (B bit_);
operator bool();
F_buffer_create all_flags();
F_buffer_create& clear();
VkBufferCreateFlagBits get();
F_buffer_create& on_sparse_binding();
F_buffer_create& off_sparse_binding();
F_buffer_create& on_sparse_residency();
F_buffer_create& off_sparse_residency();
F_buffer_create& on_sparse_aliased();
F_buffer_create& off_sparse_aliased();
};
F_buffer_create operator|(F_buffer_create::B bit1_,F_buffer_create::B bit2_);


class F_shader_stage {
private:
F_shader_stage(int flag_);
public:
int flag;
enum B{
b_vertex = VK_SHADER_STAGE_VERTEX_BIT,
b_tessellation_control = VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT,
b_tessellation_evaluation = VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT,
b_geometry = VK_SHADER_STAGE_GEOMETRY_BIT,
b_fragment = VK_SHADER_STAGE_FRAGMENT_BIT,
b_compute = VK_SHADER_STAGE_COMPUTE_BIT,
b_all_graphics = VK_SHADER_STAGE_ALL_GRAPHICS,
b_all = VK_SHADER_STAGE_ALL,
};
F_shader_stage();
F_shader_stage(B bits_);
F_shader_stage(F_shader_stage const& flag_);
F_shader_stage(std::initializer_list<B> bit_list);
F_shader_stage& operator = (F_shader_stage flag_);
F_shader_stage operator | (B bit_);
F_shader_stage& operator |= (B bit_);
F_shader_stage operator | (F_shader_stage flag_);
F_shader_stage& operator |= (F_shader_stage flag_);
F_shader_stage operator & (F_shader_stage flag_);
F_shader_stage& operator &= (F_shader_stage flag_);
F_shader_stage operator ^ (F_shader_stage flag_);
F_shader_stage& operator ^= (F_shader_stage flag_);
F_shader_stage operator ~ ();
bool operator !();
bool operator == (F_shader_stage flag_);
bool operator == (B bit_);
bool operator != (F_shader_stage flag_);
bool operator != (B bit_);
operator bool();
F_shader_stage all_flags();
F_shader_stage& clear();
VkShaderStageFlagBits get();
F_shader_stage& on_vertex();
F_shader_stage& off_vertex();
F_shader_stage& on_tessellation_control();
F_shader_stage& off_tessellation_control();
F_shader_stage& on_tessellation_evaluation();
F_shader_stage& off_tessellation_evaluation();
F_shader_stage& on_geometry();
F_shader_stage& off_geometry();
F_shader_stage& on_fragment();
F_shader_stage& off_fragment();
F_shader_stage& on_compute();
F_shader_stage& off_compute();
F_shader_stage& on_all_graphics();
F_shader_stage& off_all_graphics();
F_shader_stage& on_all();
F_shader_stage& off_all();
};
F_shader_stage operator|(F_shader_stage::B bit1_,F_shader_stage::B bit2_);


class F_image_usage {
private:
F_image_usage(int flag_);
public:
int flag;
enum B{
b_transfer_src = VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
b_transfer_dst = VK_IMAGE_USAGE_TRANSFER_DST_BIT,
b_sampled = VK_IMAGE_USAGE_SAMPLED_BIT,
b_storage = VK_IMAGE_USAGE_STORAGE_BIT,
b_color_attachment = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT,
b_depth_stencil_attachment = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,
b_transient_attachment = VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT,
b_input_attachment = VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT,
};
F_image_usage();
F_image_usage(B bits_);
F_image_usage(F_image_usage const& flag_);
F_image_usage(std::initializer_list<B> bit_list);
F_image_usage& operator = (F_image_usage flag_);
F_image_usage operator | (B bit_);
F_image_usage& operator |= (B bit_);
F_image_usage operator | (F_image_usage flag_);
F_image_usage& operator |= (F_image_usage flag_);
F_image_usage operator & (F_image_usage flag_);
F_image_usage& operator &= (F_image_usage flag_);
F_image_usage operator ^ (F_image_usage flag_);
F_image_usage& operator ^= (F_image_usage flag_);
F_image_usage operator ~ ();
bool operator !();
bool operator == (F_image_usage flag_);
bool operator == (B bit_);
bool operator != (F_image_usage flag_);
bool operator != (B bit_);
operator bool();
F_image_usage all_flags();
F_image_usage& clear();
VkImageUsageFlagBits get();
F_image_usage& on_transfer_src();
F_image_usage& off_transfer_src();
F_image_usage& on_transfer_dst();
F_image_usage& off_transfer_dst();
F_image_usage& on_sampled();
F_image_usage& off_sampled();
F_image_usage& on_storage();
F_image_usage& off_storage();
F_image_usage& on_color_attachment();
F_image_usage& off_color_attachment();
F_image_usage& on_depth_stencil_attachment();
F_image_usage& off_depth_stencil_attachment();
F_image_usage& on_transient_attachment();
F_image_usage& off_transient_attachment();
F_image_usage& on_input_attachment();
F_image_usage& off_input_attachment();
};
F_image_usage operator|(F_image_usage::B bit1_,F_image_usage::B bit2_);


class F_image_create {
private:
F_image_create(int flag_);
public:
int flag;
enum B{
b_sparse_binding = VK_IMAGE_CREATE_SPARSE_BINDING_BIT,
b_sparse_residency = VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT,
b_sparse_aliased = VK_IMAGE_CREATE_SPARSE_ALIASED_BIT,
b_mutable_format = VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT,
b_cube_compatible = VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT,
};
F_image_create();
F_image_create(B bits_);
F_image_create(F_image_create const& flag_);
F_image_create(std::initializer_list<B> bit_list);
F_image_create& operator = (F_image_create flag_);
F_image_create operator | (B bit_);
F_image_create& operator |= (B bit_);
F_image_create operator | (F_image_create flag_);
F_image_create& operator |= (F_image_create flag_);
F_image_create operator & (F_image_create flag_);
F_image_create& operator &= (F_image_create flag_);
F_image_create operator ^ (F_image_create flag_);
F_image_create& operator ^= (F_image_create flag_);
F_image_create operator ~ ();
bool operator !();
bool operator == (F_image_create flag_);
bool operator == (B bit_);
bool operator != (F_image_create flag_);
bool operator != (B bit_);
operator bool();
F_image_create all_flags();
F_image_create& clear();
VkImageCreateFlagBits get();
F_image_create& on_sparse_binding();
F_image_create& off_sparse_binding();
F_image_create& on_sparse_residency();
F_image_create& off_sparse_residency();
F_image_create& on_sparse_aliased();
F_image_create& off_sparse_aliased();
F_image_create& on_mutable_format();
F_image_create& off_mutable_format();
F_image_create& on_cube_compatible();
F_image_create& off_cube_compatible();
};
F_image_create operator|(F_image_create::B bit1_,F_image_create::B bit2_);


class F_pipeline_create {
private:
F_pipeline_create(int flag_);
public:
int flag;
enum B{
b_disable_optimization = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT,
b_allow_derivatives = VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT,
b_derivative = VK_PIPELINE_CREATE_DERIVATIVE_BIT,
};
F_pipeline_create();
F_pipeline_create(B bits_);
F_pipeline_create(F_pipeline_create const& flag_);
F_pipeline_create(std::initializer_list<B> bit_list);
F_pipeline_create& operator = (F_pipeline_create flag_);
F_pipeline_create operator | (B bit_);
F_pipeline_create& operator |= (B bit_);
F_pipeline_create operator | (F_pipeline_create flag_);
F_pipeline_create& operator |= (F_pipeline_create flag_);
F_pipeline_create operator & (F_pipeline_create flag_);
F_pipeline_create& operator &= (F_pipeline_create flag_);
F_pipeline_create operator ^ (F_pipeline_create flag_);
F_pipeline_create& operator ^= (F_pipeline_create flag_);
F_pipeline_create operator ~ ();
bool operator !();
bool operator == (F_pipeline_create flag_);
bool operator == (B bit_);
bool operator != (F_pipeline_create flag_);
bool operator != (B bit_);
operator bool();
F_pipeline_create all_flags();
F_pipeline_create& clear();
VkPipelineCreateFlagBits get();
F_pipeline_create& on_disable_optimization();
F_pipeline_create& off_disable_optimization();
F_pipeline_create& on_allow_derivatives();
F_pipeline_create& off_allow_derivatives();
F_pipeline_create& on_derivative();
F_pipeline_create& off_derivative();
};
F_pipeline_create operator|(F_pipeline_create::B bit1_,F_pipeline_create::B bit2_);


class F_color_component {
private:
F_color_component(int flag_);
public:
int flag;
enum B{
b_r = VK_COLOR_COMPONENT_R_BIT,
b_g = VK_COLOR_COMPONENT_G_BIT,
b_b = VK_COLOR_COMPONENT_B_BIT,
b_a = VK_COLOR_COMPONENT_A_BIT,
};
F_color_component();
F_color_component(B bits_);
F_color_component(F_color_component const& flag_);
F_color_component(std::initializer_list<B> bit_list);
F_color_component& operator = (F_color_component flag_);
F_color_component operator | (B bit_);
F_color_component& operator |= (B bit_);
F_color_component operator | (F_color_component flag_);
F_color_component& operator |= (F_color_component flag_);
F_color_component operator & (F_color_component flag_);
F_color_component& operator &= (F_color_component flag_);
F_color_component operator ^ (F_color_component flag_);
F_color_component& operator ^= (F_color_component flag_);
F_color_component operator ~ ();
bool operator !();
bool operator == (F_color_component flag_);
bool operator == (B bit_);
bool operator != (F_color_component flag_);
bool operator != (B bit_);
operator bool();
F_color_component all_flags();
F_color_component& clear();
VkColorComponentFlagBits get();
F_color_component& on_r();
F_color_component& off_r();
F_color_component& on_g();
F_color_component& off_g();
F_color_component& on_b();
F_color_component& off_b();
F_color_component& on_a();
F_color_component& off_a();
};
F_color_component operator|(F_color_component::B bit1_,F_color_component::B bit2_);


class F_fence_create {
private:
F_fence_create(int flag_);
public:
int flag;
enum B{
b_signaled = VK_FENCE_CREATE_SIGNALED_BIT,
};
F_fence_create();
F_fence_create(B bits_);
F_fence_create(F_fence_create const& flag_);
F_fence_create(std::initializer_list<B> bit_list);
F_fence_create& operator = (F_fence_create flag_);
F_fence_create operator | (B bit_);
F_fence_create& operator |= (B bit_);
F_fence_create operator | (F_fence_create flag_);
F_fence_create& operator |= (F_fence_create flag_);
F_fence_create operator & (F_fence_create flag_);
F_fence_create& operator &= (F_fence_create flag_);
F_fence_create operator ^ (F_fence_create flag_);
F_fence_create& operator ^= (F_fence_create flag_);
F_fence_create operator ~ ();
bool operator !();
bool operator == (F_fence_create flag_);
bool operator == (B bit_);
bool operator != (F_fence_create flag_);
bool operator != (B bit_);
operator bool();
F_fence_create all_flags();
F_fence_create& clear();
VkFenceCreateFlagBits get();
F_fence_create& on_signaled();
F_fence_create& off_signaled();
};
F_fence_create operator|(F_fence_create::B bit1_,F_fence_create::B bit2_);


class F_format_feature {
private:
F_format_feature(int flag_);
public:
int flag;
enum B{
b_sampled_image = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT,
b_storage_image = VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT,
b_storage_image_atomic = VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT,
b_uniform_texel_buffer = VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT,
b_storage_texel_buffer = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT,
b_storage_texel_buffer_atomic = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT,
b_vertex_buffer = VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
b_color_attachment = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT,
b_color_attachment_blend = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT,
b_depth_stencil_attachment = VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT,
b_blit_src = VK_FORMAT_FEATURE_BLIT_SRC_BIT,
b_blit_dst = VK_FORMAT_FEATURE_BLIT_DST_BIT,
b_sampled_image_filter_linear = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT,
};
F_format_feature();
F_format_feature(B bits_);
F_format_feature(F_format_feature const& flag_);
F_format_feature(std::initializer_list<B> bit_list);
F_format_feature& operator = (F_format_feature flag_);
F_format_feature operator | (B bit_);
F_format_feature& operator |= (B bit_);
F_format_feature operator | (F_format_feature flag_);
F_format_feature& operator |= (F_format_feature flag_);
F_format_feature operator & (F_format_feature flag_);
F_format_feature& operator &= (F_format_feature flag_);
F_format_feature operator ^ (F_format_feature flag_);
F_format_feature& operator ^= (F_format_feature flag_);
F_format_feature operator ~ ();
bool operator !();
bool operator == (F_format_feature flag_);
bool operator == (B bit_);
bool operator != (F_format_feature flag_);
bool operator != (B bit_);
operator bool();
F_format_feature all_flags();
F_format_feature& clear();
VkFormatFeatureFlagBits get();
F_format_feature& on_sampled_image();
F_format_feature& off_sampled_image();
F_format_feature& on_storage_image();
F_format_feature& off_storage_image();
F_format_feature& on_storage_image_atomic();
F_format_feature& off_storage_image_atomic();
F_format_feature& on_uniform_texel_buffer();
F_format_feature& off_uniform_texel_buffer();
F_format_feature& on_storage_texel_buffer();
F_format_feature& off_storage_texel_buffer();
F_format_feature& on_storage_texel_buffer_atomic();
F_format_feature& off_storage_texel_buffer_atomic();
F_format_feature& on_vertex_buffer();
F_format_feature& off_vertex_buffer();
F_format_feature& on_color_attachment();
F_format_feature& off_color_attachment();
F_format_feature& on_color_attachment_blend();
F_format_feature& off_color_attachment_blend();
F_format_feature& on_depth_stencil_attachment();
F_format_feature& off_depth_stencil_attachment();
F_format_feature& on_blit_src();
F_format_feature& off_blit_src();
F_format_feature& on_blit_dst();
F_format_feature& off_blit_dst();
F_format_feature& on_sampled_image_filter_linear();
F_format_feature& off_sampled_image_filter_linear();
};
F_format_feature operator|(F_format_feature::B bit1_,F_format_feature::B bit2_);


class F_query_control {
private:
F_query_control(int flag_);
public:
int flag;
enum B{
b_precise = VK_QUERY_CONTROL_PRECISE_BIT,
};
F_query_control();
F_query_control(B bits_);
F_query_control(F_query_control const& flag_);
F_query_control(std::initializer_list<B> bit_list);
F_query_control& operator = (F_query_control flag_);
F_query_control operator | (B bit_);
F_query_control& operator |= (B bit_);
F_query_control operator | (F_query_control flag_);
F_query_control& operator |= (F_query_control flag_);
F_query_control operator & (F_query_control flag_);
F_query_control& operator &= (F_query_control flag_);
F_query_control operator ^ (F_query_control flag_);
F_query_control& operator ^= (F_query_control flag_);
F_query_control operator ~ ();
bool operator !();
bool operator == (F_query_control flag_);
bool operator == (B bit_);
bool operator != (F_query_control flag_);
bool operator != (B bit_);
operator bool();
F_query_control all_flags();
F_query_control& clear();
VkQueryControlFlagBits get();
F_query_control& on_precise();
F_query_control& off_precise();
};
F_query_control operator|(F_query_control::B bit1_,F_query_control::B bit2_);


class F_query_result {
private:
F_query_result(int flag_);
public:
int flag;
enum B{
b_64 = VK_QUERY_RESULT_64_BIT,
b_wait = VK_QUERY_RESULT_WAIT_BIT,
b_with_availability = VK_QUERY_RESULT_WITH_AVAILABILITY_BIT,
b_partial = VK_QUERY_RESULT_PARTIAL_BIT,
};
F_query_result();
F_query_result(B bits_);
F_query_result(F_query_result const& flag_);
F_query_result(std::initializer_list<B> bit_list);
F_query_result& operator = (F_query_result flag_);
F_query_result operator | (B bit_);
F_query_result& operator |= (B bit_);
F_query_result operator | (F_query_result flag_);
F_query_result& operator |= (F_query_result flag_);
F_query_result operator & (F_query_result flag_);
F_query_result& operator &= (F_query_result flag_);
F_query_result operator ^ (F_query_result flag_);
F_query_result& operator ^= (F_query_result flag_);
F_query_result operator ~ ();
bool operator !();
bool operator == (F_query_result flag_);
bool operator == (B bit_);
bool operator != (F_query_result flag_);
bool operator != (B bit_);
operator bool();
F_query_result all_flags();
F_query_result& clear();
VkQueryResultFlagBits get();
F_query_result& on_64();
F_query_result& off_64();
F_query_result& on_wait();
F_query_result& off_wait();
F_query_result& on_with_availability();
F_query_result& off_with_availability();
F_query_result& on_partial();
F_query_result& off_partial();
};
F_query_result operator|(F_query_result::B bit1_,F_query_result::B bit2_);


class F_command_buffer_usage {
private:
F_command_buffer_usage(int flag_);
public:
int flag;
enum B{
b_one_time_submit = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,
b_render_pass_continue = VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT,
b_simultaneous_use = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT,
};
F_command_buffer_usage();
F_command_buffer_usage(B bits_);
F_command_buffer_usage(F_command_buffer_usage const& flag_);
F_command_buffer_usage(std::initializer_list<B> bit_list);
F_command_buffer_usage& operator = (F_command_buffer_usage flag_);
F_command_buffer_usage operator | (B bit_);
F_command_buffer_usage& operator |= (B bit_);
F_command_buffer_usage operator | (F_command_buffer_usage flag_);
F_command_buffer_usage& operator |= (F_command_buffer_usage flag_);
F_command_buffer_usage operator & (F_command_buffer_usage flag_);
F_command_buffer_usage& operator &= (F_command_buffer_usage flag_);
F_command_buffer_usage operator ^ (F_command_buffer_usage flag_);
F_command_buffer_usage& operator ^= (F_command_buffer_usage flag_);
F_command_buffer_usage operator ~ ();
bool operator !();
bool operator == (F_command_buffer_usage flag_);
bool operator == (B bit_);
bool operator != (F_command_buffer_usage flag_);
bool operator != (B bit_);
operator bool();
F_command_buffer_usage all_flags();
F_command_buffer_usage& clear();
VkCommandBufferUsageFlagBits get();
F_command_buffer_usage& on_one_time_submit();
F_command_buffer_usage& off_one_time_submit();
F_command_buffer_usage& on_render_pass_continue();
F_command_buffer_usage& off_render_pass_continue();
F_command_buffer_usage& on_simultaneous_use();
F_command_buffer_usage& off_simultaneous_use();
};
F_command_buffer_usage operator|(F_command_buffer_usage::B bit1_,F_command_buffer_usage::B bit2_);


class F_query_pipeline_statistic {
private:
F_query_pipeline_statistic(int flag_);
public:
int flag;
enum B{
b_input_assembly_vertices = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT,
b_input_assembly_primitives = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT,
b_vertex_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT,
b_geometry_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT,
b_geometry_shader_primitives = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT,
b_clipping_invocations = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT,
b_clipping_primitives = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT,
b_fragment_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT,
b_tessellation_control_shader_patches = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT,
b_tessellation_evaluation_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT,
b_compute_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT,
};
F_query_pipeline_statistic();
F_query_pipeline_statistic(B bits_);
F_query_pipeline_statistic(F_query_pipeline_statistic const& flag_);
F_query_pipeline_statistic(std::initializer_list<B> bit_list);
F_query_pipeline_statistic& operator = (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator | (B bit_);
F_query_pipeline_statistic& operator |= (B bit_);
F_query_pipeline_statistic operator | (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic& operator |= (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator & (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic& operator &= (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator ^ (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic& operator ^= (F_query_pipeline_statistic flag_);
F_query_pipeline_statistic operator ~ ();
bool operator !();
bool operator == (F_query_pipeline_statistic flag_);
bool operator == (B bit_);
bool operator != (F_query_pipeline_statistic flag_);
bool operator != (B bit_);
operator bool();
F_query_pipeline_statistic all_flags();
F_query_pipeline_statistic& clear();
VkQueryPipelineStatisticFlagBits get();
F_query_pipeline_statistic& on_input_assembly_vertices();
F_query_pipeline_statistic& off_input_assembly_vertices();
F_query_pipeline_statistic& on_input_assembly_primitives();
F_query_pipeline_statistic& off_input_assembly_primitives();
F_query_pipeline_statistic& on_vertex_shader_invocations();
F_query_pipeline_statistic& off_vertex_shader_invocations();
F_query_pipeline_statistic& on_geometry_shader_invocations();
F_query_pipeline_statistic& off_geometry_shader_invocations();
F_query_pipeline_statistic& on_geometry_shader_primitives();
F_query_pipeline_statistic& off_geometry_shader_primitives();
F_query_pipeline_statistic& on_clipping_invocations();
F_query_pipeline_statistic& off_clipping_invocations();
F_query_pipeline_statistic& on_clipping_primitives();
F_query_pipeline_statistic& off_clipping_primitives();
F_query_pipeline_statistic& on_fragment_shader_invocations();
F_query_pipeline_statistic& off_fragment_shader_invocations();
F_query_pipeline_statistic& on_tessellation_control_shader_patches();
F_query_pipeline_statistic& off_tessellation_control_shader_patches();
F_query_pipeline_statistic& on_tessellation_evaluation_shader_invocations();
F_query_pipeline_statistic& off_tessellation_evaluation_shader_invocations();
F_query_pipeline_statistic& on_compute_shader_invocations();
F_query_pipeline_statistic& off_compute_shader_invocations();
};
F_query_pipeline_statistic operator|(F_query_pipeline_statistic::B bit1_,F_query_pipeline_statistic::B bit2_);


class F_image_aspect {
private:
F_image_aspect(int flag_);
public:
int flag;
enum B{
b_color = VK_IMAGE_ASPECT_COLOR_BIT,
b_depth = VK_IMAGE_ASPECT_DEPTH_BIT,
b_stencil = VK_IMAGE_ASPECT_STENCIL_BIT,
b_metadata = VK_IMAGE_ASPECT_METADATA_BIT,
};
F_image_aspect();
F_image_aspect(B bits_);
F_image_aspect(F_image_aspect const& flag_);
F_image_aspect(std::initializer_list<B> bit_list);
F_image_aspect& operator = (F_image_aspect flag_);
F_image_aspect operator | (B bit_);
F_image_aspect& operator |= (B bit_);
F_image_aspect operator | (F_image_aspect flag_);
F_image_aspect& operator |= (F_image_aspect flag_);
F_image_aspect operator & (F_image_aspect flag_);
F_image_aspect& operator &= (F_image_aspect flag_);
F_image_aspect operator ^ (F_image_aspect flag_);
F_image_aspect& operator ^= (F_image_aspect flag_);
F_image_aspect operator ~ ();
bool operator !();
bool operator == (F_image_aspect flag_);
bool operator == (B bit_);
bool operator != (F_image_aspect flag_);
bool operator != (B bit_);
operator bool();
F_image_aspect all_flags();
F_image_aspect& clear();
VkImageAspectFlagBits get();
F_image_aspect& on_color();
F_image_aspect& off_color();
F_image_aspect& on_depth();
F_image_aspect& off_depth();
F_image_aspect& on_stencil();
F_image_aspect& off_stencil();
F_image_aspect& on_metadata();
F_image_aspect& off_metadata();
};
F_image_aspect operator|(F_image_aspect::B bit1_,F_image_aspect::B bit2_);


class F_sparse_image_format {
private:
F_sparse_image_format(int flag_);
public:
int flag;
enum B{
b_single_miptail = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT,
b_aligned_mip_size = VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT,
b_nonstandard_block_size = VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT,
};
F_sparse_image_format();
F_sparse_image_format(B bits_);
F_sparse_image_format(F_sparse_image_format const& flag_);
F_sparse_image_format(std::initializer_list<B> bit_list);
F_sparse_image_format& operator = (F_sparse_image_format flag_);
F_sparse_image_format operator | (B bit_);
F_sparse_image_format& operator |= (B bit_);
F_sparse_image_format operator | (F_sparse_image_format flag_);
F_sparse_image_format& operator |= (F_sparse_image_format flag_);
F_sparse_image_format operator & (F_sparse_image_format flag_);
F_sparse_image_format& operator &= (F_sparse_image_format flag_);
F_sparse_image_format operator ^ (F_sparse_image_format flag_);
F_sparse_image_format& operator ^= (F_sparse_image_format flag_);
F_sparse_image_format operator ~ ();
bool operator !();
bool operator == (F_sparse_image_format flag_);
bool operator == (B bit_);
bool operator != (F_sparse_image_format flag_);
bool operator != (B bit_);
operator bool();
F_sparse_image_format all_flags();
F_sparse_image_format& clear();
VkSparseImageFormatFlagBits get();
F_sparse_image_format& on_single_miptail();
F_sparse_image_format& off_single_miptail();
F_sparse_image_format& on_aligned_mip_size();
F_sparse_image_format& off_aligned_mip_size();
F_sparse_image_format& on_nonstandard_block_size();
F_sparse_image_format& off_nonstandard_block_size();
};
F_sparse_image_format operator|(F_sparse_image_format::B bit1_,F_sparse_image_format::B bit2_);


class F_sparse_memory_bind {
private:
F_sparse_memory_bind(int flag_);
public:
int flag;
enum B{
b_metadata = VK_SPARSE_MEMORY_BIND_METADATA_BIT,
};
F_sparse_memory_bind();
F_sparse_memory_bind(B bits_);
F_sparse_memory_bind(F_sparse_memory_bind const& flag_);
F_sparse_memory_bind(std::initializer_list<B> bit_list);
F_sparse_memory_bind& operator = (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator | (B bit_);
F_sparse_memory_bind& operator |= (B bit_);
F_sparse_memory_bind operator | (F_sparse_memory_bind flag_);
F_sparse_memory_bind& operator |= (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator & (F_sparse_memory_bind flag_);
F_sparse_memory_bind& operator &= (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator ^ (F_sparse_memory_bind flag_);
F_sparse_memory_bind& operator ^= (F_sparse_memory_bind flag_);
F_sparse_memory_bind operator ~ ();
bool operator !();
bool operator == (F_sparse_memory_bind flag_);
bool operator == (B bit_);
bool operator != (F_sparse_memory_bind flag_);
bool operator != (B bit_);
operator bool();
F_sparse_memory_bind all_flags();
F_sparse_memory_bind& clear();
VkSparseMemoryBindFlagBits get();
F_sparse_memory_bind& on_metadata();
F_sparse_memory_bind& off_metadata();
};
F_sparse_memory_bind operator|(F_sparse_memory_bind::B bit1_,F_sparse_memory_bind::B bit2_);


class F_pipeline_stage {
private:
F_pipeline_stage(int flag_);
public:
int flag;
enum B{
b_top_of_pipe = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
b_draw_indirect = VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT,
b_vertex_input = VK_PIPELINE_STAGE_VERTEX_INPUT_BIT,
b_vertex_shader = VK_PIPELINE_STAGE_VERTEX_SHADER_BIT,
b_tessellation_control_shader = VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT,
b_tessellation_evaluation_shader = VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT,
b_geometry_shader = VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT,
b_fragment_shader = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
b_early_fragment_tests = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT,
b_late_fragment_tests = VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
b_color_attachment_output = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
b_compute_shader = VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
b_transfer = VK_PIPELINE_STAGE_TRANSFER_BIT,
b_bottom_of_pipe = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
b_host = VK_PIPELINE_STAGE_HOST_BIT,
b_all_graphics = VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT,
b_all_commands = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
};
F_pipeline_stage();
F_pipeline_stage(B bits_);
F_pipeline_stage(F_pipeline_stage const& flag_);
F_pipeline_stage(std::initializer_list<B> bit_list);
F_pipeline_stage& operator = (F_pipeline_stage flag_);
F_pipeline_stage operator | (B bit_);
F_pipeline_stage& operator |= (B bit_);
F_pipeline_stage operator | (F_pipeline_stage flag_);
F_pipeline_stage& operator |= (F_pipeline_stage flag_);
F_pipeline_stage operator & (F_pipeline_stage flag_);
F_pipeline_stage& operator &= (F_pipeline_stage flag_);
F_pipeline_stage operator ^ (F_pipeline_stage flag_);
F_pipeline_stage& operator ^= (F_pipeline_stage flag_);
F_pipeline_stage operator ~ ();
bool operator !();
bool operator == (F_pipeline_stage flag_);
bool operator == (B bit_);
bool operator != (F_pipeline_stage flag_);
bool operator != (B bit_);
operator bool();
F_pipeline_stage all_flags();
F_pipeline_stage& clear();
VkPipelineStageFlagBits get();
F_pipeline_stage& on_top_of_pipe();
F_pipeline_stage& off_top_of_pipe();
F_pipeline_stage& on_draw_indirect();
F_pipeline_stage& off_draw_indirect();
F_pipeline_stage& on_vertex_input();
F_pipeline_stage& off_vertex_input();
F_pipeline_stage& on_vertex_shader();
F_pipeline_stage& off_vertex_shader();
F_pipeline_stage& on_tessellation_control_shader();
F_pipeline_stage& off_tessellation_control_shader();
F_pipeline_stage& on_tessellation_evaluation_shader();
F_pipeline_stage& off_tessellation_evaluation_shader();
F_pipeline_stage& on_geometry_shader();
F_pipeline_stage& off_geometry_shader();
F_pipeline_stage& on_fragment_shader();
F_pipeline_stage& off_fragment_shader();
F_pipeline_stage& on_early_fragment_tests();
F_pipeline_stage& off_early_fragment_tests();
F_pipeline_stage& on_late_fragment_tests();
F_pipeline_stage& off_late_fragment_tests();
F_pipeline_stage& on_color_attachment_output();
F_pipeline_stage& off_color_attachment_output();
F_pipeline_stage& on_compute_shader();
F_pipeline_stage& off_compute_shader();
F_pipeline_stage& on_transfer();
F_pipeline_stage& off_transfer();
F_pipeline_stage& on_bottom_of_pipe();
F_pipeline_stage& off_bottom_of_pipe();
F_pipeline_stage& on_host();
F_pipeline_stage& off_host();
F_pipeline_stage& on_all_graphics();
F_pipeline_stage& off_all_graphics();
F_pipeline_stage& on_all_commands();
F_pipeline_stage& off_all_commands();
};
F_pipeline_stage operator|(F_pipeline_stage::B bit1_,F_pipeline_stage::B bit2_);


class F_command_pool_create {
private:
F_command_pool_create(int flag_);
public:
int flag;
enum B{
b_transient = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT,
b_reset_command_buffer = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
};
F_command_pool_create();
F_command_pool_create(B bits_);
F_command_pool_create(F_command_pool_create const& flag_);
F_command_pool_create(std::initializer_list<B> bit_list);
F_command_pool_create& operator = (F_command_pool_create flag_);
F_command_pool_create operator | (B bit_);
F_command_pool_create& operator |= (B bit_);
F_command_pool_create operator | (F_command_pool_create flag_);
F_command_pool_create& operator |= (F_command_pool_create flag_);
F_command_pool_create operator & (F_command_pool_create flag_);
F_command_pool_create& operator &= (F_command_pool_create flag_);
F_command_pool_create operator ^ (F_command_pool_create flag_);
F_command_pool_create& operator ^= (F_command_pool_create flag_);
F_command_pool_create operator ~ ();
bool operator !();
bool operator == (F_command_pool_create flag_);
bool operator == (B bit_);
bool operator != (F_command_pool_create flag_);
bool operator != (B bit_);
operator bool();
F_command_pool_create all_flags();
F_command_pool_create& clear();
VkCommandPoolCreateFlagBits get();
F_command_pool_create& on_transient();
F_command_pool_create& off_transient();
F_command_pool_create& on_reset_command_buffer();
F_command_pool_create& off_reset_command_buffer();
};
F_command_pool_create operator|(F_command_pool_create::B bit1_,F_command_pool_create::B bit2_);


class F_command_pool_reset {
private:
F_command_pool_reset(int flag_);
public:
int flag;
enum B{
b_release_resources = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT,
};
F_command_pool_reset();
F_command_pool_reset(B bits_);
F_command_pool_reset(F_command_pool_reset const& flag_);
F_command_pool_reset(std::initializer_list<B> bit_list);
F_command_pool_reset& operator = (F_command_pool_reset flag_);
F_command_pool_reset operator | (B bit_);
F_command_pool_reset& operator |= (B bit_);
F_command_pool_reset operator | (F_command_pool_reset flag_);
F_command_pool_reset& operator |= (F_command_pool_reset flag_);
F_command_pool_reset operator & (F_command_pool_reset flag_);
F_command_pool_reset& operator &= (F_command_pool_reset flag_);
F_command_pool_reset operator ^ (F_command_pool_reset flag_);
F_command_pool_reset& operator ^= (F_command_pool_reset flag_);
F_command_pool_reset operator ~ ();
bool operator !();
bool operator == (F_command_pool_reset flag_);
bool operator == (B bit_);
bool operator != (F_command_pool_reset flag_);
bool operator != (B bit_);
operator bool();
F_command_pool_reset all_flags();
F_command_pool_reset& clear();
VkCommandPoolResetFlagBits get();
F_command_pool_reset& on_release_resources();
F_command_pool_reset& off_release_resources();
};
F_command_pool_reset operator|(F_command_pool_reset::B bit1_,F_command_pool_reset::B bit2_);


class F_command_buffer_reset {
private:
F_command_buffer_reset(int flag_);
public:
int flag;
enum B{
b_release_resources = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT,
};
F_command_buffer_reset();
F_command_buffer_reset(B bits_);
F_command_buffer_reset(F_command_buffer_reset const& flag_);
F_command_buffer_reset(std::initializer_list<B> bit_list);
F_command_buffer_reset& operator = (F_command_buffer_reset flag_);
F_command_buffer_reset operator | (B bit_);
F_command_buffer_reset& operator |= (B bit_);
F_command_buffer_reset operator | (F_command_buffer_reset flag_);
F_command_buffer_reset& operator |= (F_command_buffer_reset flag_);
F_command_buffer_reset operator & (F_command_buffer_reset flag_);
F_command_buffer_reset& operator &= (F_command_buffer_reset flag_);
F_command_buffer_reset operator ^ (F_command_buffer_reset flag_);
F_command_buffer_reset& operator ^= (F_command_buffer_reset flag_);
F_command_buffer_reset operator ~ ();
bool operator !();
bool operator == (F_command_buffer_reset flag_);
bool operator == (B bit_);
bool operator != (F_command_buffer_reset flag_);
bool operator != (B bit_);
operator bool();
F_command_buffer_reset all_flags();
F_command_buffer_reset& clear();
VkCommandBufferResetFlagBits get();
F_command_buffer_reset& on_release_resources();
F_command_buffer_reset& off_release_resources();
};
F_command_buffer_reset operator|(F_command_buffer_reset::B bit1_,F_command_buffer_reset::B bit2_);


class F_sample_count {
private:
F_sample_count(int flag_);
public:
int flag;
enum B{
b_1 = VK_SAMPLE_COUNT_1_BIT,
b_2 = VK_SAMPLE_COUNT_2_BIT,
b_4 = VK_SAMPLE_COUNT_4_BIT,
b_8 = VK_SAMPLE_COUNT_8_BIT,
b_16 = VK_SAMPLE_COUNT_16_BIT,
b_32 = VK_SAMPLE_COUNT_32_BIT,
b_64 = VK_SAMPLE_COUNT_64_BIT,
};
F_sample_count();
F_sample_count(B bits_);
F_sample_count(F_sample_count const& flag_);
F_sample_count(std::initializer_list<B> bit_list);
F_sample_count& operator = (F_sample_count flag_);
F_sample_count operator | (B bit_);
F_sample_count& operator |= (B bit_);
F_sample_count operator | (F_sample_count flag_);
F_sample_count& operator |= (F_sample_count flag_);
F_sample_count operator & (F_sample_count flag_);
F_sample_count& operator &= (F_sample_count flag_);
F_sample_count operator ^ (F_sample_count flag_);
F_sample_count& operator ^= (F_sample_count flag_);
F_sample_count operator ~ ();
bool operator !();
bool operator == (F_sample_count flag_);
bool operator == (B bit_);
bool operator != (F_sample_count flag_);
bool operator != (B bit_);
operator bool();
F_sample_count all_flags();
F_sample_count& clear();
VkSampleCountFlagBits get();
F_sample_count& on_1();
F_sample_count& off_1();
F_sample_count& on_2();
F_sample_count& off_2();
F_sample_count& on_4();
F_sample_count& off_4();
F_sample_count& on_8();
F_sample_count& off_8();
F_sample_count& on_16();
F_sample_count& off_16();
F_sample_count& on_32();
F_sample_count& off_32();
F_sample_count& on_64();
F_sample_count& off_64();
};
F_sample_count operator|(F_sample_count::B bit1_,F_sample_count::B bit2_);


class F_attachment_description {
private:
F_attachment_description(int flag_);
public:
int flag;
enum B{
b_may_alias = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT,
};
F_attachment_description();
F_attachment_description(B bits_);
F_attachment_description(F_attachment_description const& flag_);
F_attachment_description(std::initializer_list<B> bit_list);
F_attachment_description& operator = (F_attachment_description flag_);
F_attachment_description operator | (B bit_);
F_attachment_description& operator |= (B bit_);
F_attachment_description operator | (F_attachment_description flag_);
F_attachment_description& operator |= (F_attachment_description flag_);
F_attachment_description operator & (F_attachment_description flag_);
F_attachment_description& operator &= (F_attachment_description flag_);
F_attachment_description operator ^ (F_attachment_description flag_);
F_attachment_description& operator ^= (F_attachment_description flag_);
F_attachment_description operator ~ ();
bool operator !();
bool operator == (F_attachment_description flag_);
bool operator == (B bit_);
bool operator != (F_attachment_description flag_);
bool operator != (B bit_);
operator bool();
F_attachment_description all_flags();
F_attachment_description& clear();
VkAttachmentDescriptionFlagBits get();
F_attachment_description& on_may_alias();
F_attachment_description& off_may_alias();
};
F_attachment_description operator|(F_attachment_description::B bit1_,F_attachment_description::B bit2_);


class F_stencil_face {
private:
F_stencil_face(int flag_);
public:
int flag;
enum B{
b_front = VK_STENCIL_FACE_FRONT_BIT,
b_back = VK_STENCIL_FACE_BACK_BIT,
b_vk_stencil_front_and_back = VK_STENCIL_FRONT_AND_BACK,
};
F_stencil_face();
F_stencil_face(B bits_);
F_stencil_face(F_stencil_face const& flag_);
F_stencil_face(std::initializer_list<B> bit_list);
F_stencil_face& operator = (F_stencil_face flag_);
F_stencil_face operator | (B bit_);
F_stencil_face& operator |= (B bit_);
F_stencil_face operator | (F_stencil_face flag_);
F_stencil_face& operator |= (F_stencil_face flag_);
F_stencil_face operator & (F_stencil_face flag_);
F_stencil_face& operator &= (F_stencil_face flag_);
F_stencil_face operator ^ (F_stencil_face flag_);
F_stencil_face& operator ^= (F_stencil_face flag_);
F_stencil_face operator ~ ();
bool operator !();
bool operator == (F_stencil_face flag_);
bool operator == (B bit_);
bool operator != (F_stencil_face flag_);
bool operator != (B bit_);
operator bool();
F_stencil_face all_flags();
F_stencil_face& clear();
VkStencilFaceFlagBits get();
F_stencil_face& on_front();
F_stencil_face& off_front();
F_stencil_face& on_back();
F_stencil_face& off_back();
F_stencil_face& on_vk_stencil_front_and_back();
F_stencil_face& off_vk_stencil_front_and_back();
};
F_stencil_face operator|(F_stencil_face::B bit1_,F_stencil_face::B bit2_);


class F_descriptor_pool_create {
private:
F_descriptor_pool_create(int flag_);
public:
int flag;
enum B{
b_free_descriptor_set = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT,
};
F_descriptor_pool_create();
F_descriptor_pool_create(B bits_);
F_descriptor_pool_create(F_descriptor_pool_create const& flag_);
F_descriptor_pool_create(std::initializer_list<B> bit_list);
F_descriptor_pool_create& operator = (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator | (B bit_);
F_descriptor_pool_create& operator |= (B bit_);
F_descriptor_pool_create operator | (F_descriptor_pool_create flag_);
F_descriptor_pool_create& operator |= (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator & (F_descriptor_pool_create flag_);
F_descriptor_pool_create& operator &= (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator ^ (F_descriptor_pool_create flag_);
F_descriptor_pool_create& operator ^= (F_descriptor_pool_create flag_);
F_descriptor_pool_create operator ~ ();
bool operator !();
bool operator == (F_descriptor_pool_create flag_);
bool operator == (B bit_);
bool operator != (F_descriptor_pool_create flag_);
bool operator != (B bit_);
operator bool();
F_descriptor_pool_create all_flags();
F_descriptor_pool_create& clear();
VkDescriptorPoolCreateFlagBits get();
F_descriptor_pool_create& on_free_descriptor_set();
F_descriptor_pool_create& off_free_descriptor_set();
};
F_descriptor_pool_create operator|(F_descriptor_pool_create::B bit1_,F_descriptor_pool_create::B bit2_);


class F_dependency {
private:
F_dependency(int flag_);
public:
int flag;
enum B{
b_by_region = VK_DEPENDENCY_BY_REGION_BIT,
};
F_dependency();
F_dependency(B bits_);
F_dependency(F_dependency const& flag_);
F_dependency(std::initializer_list<B> bit_list);
F_dependency& operator = (F_dependency flag_);
F_dependency operator | (B bit_);
F_dependency& operator |= (B bit_);
F_dependency operator | (F_dependency flag_);
F_dependency& operator |= (F_dependency flag_);
F_dependency operator & (F_dependency flag_);
F_dependency& operator &= (F_dependency flag_);
F_dependency operator ^ (F_dependency flag_);
F_dependency& operator ^= (F_dependency flag_);
F_dependency operator ~ ();
bool operator !();
bool operator == (F_dependency flag_);
bool operator == (B bit_);
bool operator != (F_dependency flag_);
bool operator != (B bit_);
operator bool();
F_dependency all_flags();
F_dependency& clear();
VkDependencyFlagBits get();
F_dependency& on_by_region();
F_dependency& off_by_region();
};
F_dependency operator|(F_dependency::B bit1_,F_dependency::B bit2_);


class F_display_plane_alpha_khr {
private:
F_display_plane_alpha_khr(int flag_);
public:
int flag;
enum B{
b_opaque_bit_khr = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR,
b_global_bit_khr = VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,
b_per_pixel_bit_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR,
b_per_pixel_premultiplied_bit_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR,
};
F_display_plane_alpha_khr();
F_display_plane_alpha_khr(B bits_);
F_display_plane_alpha_khr(F_display_plane_alpha_khr const& flag_);
F_display_plane_alpha_khr(std::initializer_list<B> bit_list);
F_display_plane_alpha_khr& operator = (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator | (B bit_);
F_display_plane_alpha_khr& operator |= (B bit_);
F_display_plane_alpha_khr operator | (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr& operator |= (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator & (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr& operator &= (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator ^ (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr& operator ^= (F_display_plane_alpha_khr flag_);
F_display_plane_alpha_khr operator ~ ();
bool operator !();
bool operator == (F_display_plane_alpha_khr flag_);
bool operator == (B bit_);
bool operator != (F_display_plane_alpha_khr flag_);
bool operator != (B bit_);
operator bool();
F_display_plane_alpha_khr all_flags();
F_display_plane_alpha_khr& clear();
VkDisplayPlaneAlphaFlagBitsKHR get();
F_display_plane_alpha_khr& on_opaque_bit_khr();
F_display_plane_alpha_khr& off_opaque_bit_khr();
F_display_plane_alpha_khr& on_global_bit_khr();
F_display_plane_alpha_khr& off_global_bit_khr();
F_display_plane_alpha_khr& on_per_pixel_bit_khr();
F_display_plane_alpha_khr& off_per_pixel_bit_khr();
F_display_plane_alpha_khr& on_per_pixel_premultiplied_bit_khr();
F_display_plane_alpha_khr& off_per_pixel_premultiplied_bit_khr();
};
F_display_plane_alpha_khr operator|(F_display_plane_alpha_khr::B bit1_,F_display_plane_alpha_khr::B bit2_);


class F_composite_alpha_khr {
private:
F_composite_alpha_khr(int flag_);
public:
int flag;
enum B{
b_opaque_bit_khr = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
b_pre_multiplied_bit_khr = VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
b_post_multiplied_bit_khr = VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
b_inherit_bit_khr = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
};
F_composite_alpha_khr();
F_composite_alpha_khr(B bits_);
F_composite_alpha_khr(F_composite_alpha_khr const& flag_);
F_composite_alpha_khr(std::initializer_list<B> bit_list);
F_composite_alpha_khr& operator = (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator | (B bit_);
F_composite_alpha_khr& operator |= (B bit_);
F_composite_alpha_khr operator | (F_composite_alpha_khr flag_);
F_composite_alpha_khr& operator |= (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator & (F_composite_alpha_khr flag_);
F_composite_alpha_khr& operator &= (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator ^ (F_composite_alpha_khr flag_);
F_composite_alpha_khr& operator ^= (F_composite_alpha_khr flag_);
F_composite_alpha_khr operator ~ ();
bool operator !();
bool operator == (F_composite_alpha_khr flag_);
bool operator == (B bit_);
bool operator != (F_composite_alpha_khr flag_);
bool operator != (B bit_);
operator bool();
F_composite_alpha_khr all_flags();
F_composite_alpha_khr& clear();
VkCompositeAlphaFlagBitsKHR get();
F_composite_alpha_khr& on_opaque_bit_khr();
F_composite_alpha_khr& off_opaque_bit_khr();
F_composite_alpha_khr& on_pre_multiplied_bit_khr();
F_composite_alpha_khr& off_pre_multiplied_bit_khr();
F_composite_alpha_khr& on_post_multiplied_bit_khr();
F_composite_alpha_khr& off_post_multiplied_bit_khr();
F_composite_alpha_khr& on_inherit_bit_khr();
F_composite_alpha_khr& off_inherit_bit_khr();
};
F_composite_alpha_khr operator|(F_composite_alpha_khr::B bit1_,F_composite_alpha_khr::B bit2_);


class F_surface_transform_khr {
private:
F_surface_transform_khr(int flag_);
public:
int flag;
enum B{
b_identity_bit_khr = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR,
b_rotate_90_bit_khr = VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR,
b_rotate_180_bit_khr = VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR,
b_rotate_270_bit_khr = VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR,
b_horizontal_mirror_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR,
b_horizontal_mirror_rotate_90_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR,
b_horizontal_mirror_rotate_180_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR,
b_horizontal_mirror_rotate_270_bit_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR,
b_inherit_bit_khr = VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR,
};
F_surface_transform_khr();
F_surface_transform_khr(B bits_);
F_surface_transform_khr(F_surface_transform_khr const& flag_);
F_surface_transform_khr(std::initializer_list<B> bit_list);
F_surface_transform_khr& operator = (F_surface_transform_khr flag_);
F_surface_transform_khr operator | (B bit_);
F_surface_transform_khr& operator |= (B bit_);
F_surface_transform_khr operator | (F_surface_transform_khr flag_);
F_surface_transform_khr& operator |= (F_surface_transform_khr flag_);
F_surface_transform_khr operator & (F_surface_transform_khr flag_);
F_surface_transform_khr& operator &= (F_surface_transform_khr flag_);
F_surface_transform_khr operator ^ (F_surface_transform_khr flag_);
F_surface_transform_khr& operator ^= (F_surface_transform_khr flag_);
F_surface_transform_khr operator ~ ();
bool operator !();
bool operator == (F_surface_transform_khr flag_);
bool operator == (B bit_);
bool operator != (F_surface_transform_khr flag_);
bool operator != (B bit_);
operator bool();
F_surface_transform_khr all_flags();
F_surface_transform_khr& clear();
VkSurfaceTransformFlagBitsKHR get();
F_surface_transform_khr& on_identity_bit_khr();
F_surface_transform_khr& off_identity_bit_khr();
F_surface_transform_khr& on_rotate_90_bit_khr();
F_surface_transform_khr& off_rotate_90_bit_khr();
F_surface_transform_khr& on_rotate_180_bit_khr();
F_surface_transform_khr& off_rotate_180_bit_khr();
F_surface_transform_khr& on_rotate_270_bit_khr();
F_surface_transform_khr& off_rotate_270_bit_khr();
F_surface_transform_khr& on_horizontal_mirror_bit_khr();
F_surface_transform_khr& off_horizontal_mirror_bit_khr();
F_surface_transform_khr& on_horizontal_mirror_rotate_90_bit_khr();
F_surface_transform_khr& off_horizontal_mirror_rotate_90_bit_khr();
F_surface_transform_khr& on_horizontal_mirror_rotate_180_bit_khr();
F_surface_transform_khr& off_horizontal_mirror_rotate_180_bit_khr();
F_surface_transform_khr& on_horizontal_mirror_rotate_270_bit_khr();
F_surface_transform_khr& off_horizontal_mirror_rotate_270_bit_khr();
F_surface_transform_khr& on_inherit_bit_khr();
F_surface_transform_khr& off_inherit_bit_khr();
};
F_surface_transform_khr operator|(F_surface_transform_khr::B bit1_,F_surface_transform_khr::B bit2_);


class F_debug_report_ext {
private:
F_debug_report_ext(int flag_);
public:
int flag;
enum B{
b_information_bit_ext = VK_DEBUG_REPORT_INFORMATION_BIT_EXT,
b_warning_bit_ext = VK_DEBUG_REPORT_WARNING_BIT_EXT,
b_performance_warning_bit_ext = VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT,
b_error_bit_ext = VK_DEBUG_REPORT_ERROR_BIT_EXT,
b_debug_bit_ext = VK_DEBUG_REPORT_DEBUG_BIT_EXT,
};
F_debug_report_ext();
F_debug_report_ext(B bits_);
F_debug_report_ext(F_debug_report_ext const& flag_);
F_debug_report_ext(std::initializer_list<B> bit_list);
F_debug_report_ext& operator = (F_debug_report_ext flag_);
F_debug_report_ext operator | (B bit_);
F_debug_report_ext& operator |= (B bit_);
F_debug_report_ext operator | (F_debug_report_ext flag_);
F_debug_report_ext& operator |= (F_debug_report_ext flag_);
F_debug_report_ext operator & (F_debug_report_ext flag_);
F_debug_report_ext& operator &= (F_debug_report_ext flag_);
F_debug_report_ext operator ^ (F_debug_report_ext flag_);
F_debug_report_ext& operator ^= (F_debug_report_ext flag_);
F_debug_report_ext operator ~ ();
bool operator !();
bool operator == (F_debug_report_ext flag_);
bool operator == (B bit_);
bool operator != (F_debug_report_ext flag_);
bool operator != (B bit_);
operator bool();
F_debug_report_ext all_flags();
F_debug_report_ext& clear();
VkDebugReportFlagBitsEXT get();
F_debug_report_ext& on_information_bit_ext();
F_debug_report_ext& off_information_bit_ext();
F_debug_report_ext& on_warning_bit_ext();
F_debug_report_ext& off_warning_bit_ext();
F_debug_report_ext& on_performance_warning_bit_ext();
F_debug_report_ext& off_performance_warning_bit_ext();
F_debug_report_ext& on_error_bit_ext();
F_debug_report_ext& off_error_bit_ext();
F_debug_report_ext& on_debug_bit_ext();
F_debug_report_ext& off_debug_bit_ext();
};
F_debug_report_ext operator|(F_debug_report_ext::B bit1_,F_debug_report_ext::B bit2_);


class F_external_memory_handle_type_nv {
private:
F_external_memory_handle_type_nv(int flag_);
public:
int flag;
enum B{
b_opaque_win32_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV,
b_opaque_win32_kmt_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV,
b_d3d11_image_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV,
b_d3d11_image_kmt_bit_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV,
};
F_external_memory_handle_type_nv();
F_external_memory_handle_type_nv(B bits_);
F_external_memory_handle_type_nv(F_external_memory_handle_type_nv const& flag_);
F_external_memory_handle_type_nv(std::initializer_list<B> bit_list);
F_external_memory_handle_type_nv& operator = (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator | (B bit_);
F_external_memory_handle_type_nv& operator |= (B bit_);
F_external_memory_handle_type_nv operator | (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv& operator |= (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator & (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv& operator &= (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator ^ (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv& operator ^= (F_external_memory_handle_type_nv flag_);
F_external_memory_handle_type_nv operator ~ ();
bool operator !();
bool operator == (F_external_memory_handle_type_nv flag_);
bool operator == (B bit_);
bool operator != (F_external_memory_handle_type_nv flag_);
bool operator != (B bit_);
operator bool();
F_external_memory_handle_type_nv all_flags();
F_external_memory_handle_type_nv& clear();
VkExternalMemoryHandleTypeFlagBitsNV get();
F_external_memory_handle_type_nv& on_opaque_win32_bit_nv();
F_external_memory_handle_type_nv& off_opaque_win32_bit_nv();
F_external_memory_handle_type_nv& on_opaque_win32_kmt_bit_nv();
F_external_memory_handle_type_nv& off_opaque_win32_kmt_bit_nv();
F_external_memory_handle_type_nv& on_d3d11_image_bit_nv();
F_external_memory_handle_type_nv& off_d3d11_image_bit_nv();
F_external_memory_handle_type_nv& on_d3d11_image_kmt_bit_nv();
F_external_memory_handle_type_nv& off_d3d11_image_kmt_bit_nv();
};
F_external_memory_handle_type_nv operator|(F_external_memory_handle_type_nv::B bit1_,F_external_memory_handle_type_nv::B bit2_);


class F_external_memory_feature_nv {
private:
F_external_memory_feature_nv(int flag_);
public:
int flag;
enum B{
b_dedicated_only_bit_nv = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV,
b_exportable_bit_nv = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV,
b_importable_bit_nv = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV,
};
F_external_memory_feature_nv();
F_external_memory_feature_nv(B bits_);
F_external_memory_feature_nv(F_external_memory_feature_nv const& flag_);
F_external_memory_feature_nv(std::initializer_list<B> bit_list);
F_external_memory_feature_nv& operator = (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator | (B bit_);
F_external_memory_feature_nv& operator |= (B bit_);
F_external_memory_feature_nv operator | (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv& operator |= (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator & (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv& operator &= (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator ^ (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv& operator ^= (F_external_memory_feature_nv flag_);
F_external_memory_feature_nv operator ~ ();
bool operator !();
bool operator == (F_external_memory_feature_nv flag_);
bool operator == (B bit_);
bool operator != (F_external_memory_feature_nv flag_);
bool operator != (B bit_);
operator bool();
F_external_memory_feature_nv all_flags();
F_external_memory_feature_nv& clear();
VkExternalMemoryFeatureFlagBitsNV get();
F_external_memory_feature_nv& on_dedicated_only_bit_nv();
F_external_memory_feature_nv& off_dedicated_only_bit_nv();
F_external_memory_feature_nv& on_exportable_bit_nv();
F_external_memory_feature_nv& off_exportable_bit_nv();
F_external_memory_feature_nv& on_importable_bit_nv();
F_external_memory_feature_nv& off_importable_bit_nv();
};
F_external_memory_feature_nv operator|(F_external_memory_feature_nv::B bit1_,F_external_memory_feature_nv::B bit2_);


class F_subgroup_feature {
private:
F_subgroup_feature(int flag_);
public:
int flag;
enum B{
b_basic = VK_SUBGROUP_FEATURE_BASIC_BIT,
b_vote = VK_SUBGROUP_FEATURE_VOTE_BIT,
b_arithmetic = VK_SUBGROUP_FEATURE_ARITHMETIC_BIT,
b_ballot = VK_SUBGROUP_FEATURE_BALLOT_BIT,
b_shuffle = VK_SUBGROUP_FEATURE_SHUFFLE_BIT,
b_shuffle_relative = VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT,
b_clustered = VK_SUBGROUP_FEATURE_CLUSTERED_BIT,
b_quad = VK_SUBGROUP_FEATURE_QUAD_BIT,
};
F_subgroup_feature();
F_subgroup_feature(B bits_);
F_subgroup_feature(F_subgroup_feature const& flag_);
F_subgroup_feature(std::initializer_list<B> bit_list);
F_subgroup_feature& operator = (F_subgroup_feature flag_);
F_subgroup_feature operator | (B bit_);
F_subgroup_feature& operator |= (B bit_);
F_subgroup_feature operator | (F_subgroup_feature flag_);
F_subgroup_feature& operator |= (F_subgroup_feature flag_);
F_subgroup_feature operator & (F_subgroup_feature flag_);
F_subgroup_feature& operator &= (F_subgroup_feature flag_);
F_subgroup_feature operator ^ (F_subgroup_feature flag_);
F_subgroup_feature& operator ^= (F_subgroup_feature flag_);
F_subgroup_feature operator ~ ();
bool operator !();
bool operator == (F_subgroup_feature flag_);
bool operator == (B bit_);
bool operator != (F_subgroup_feature flag_);
bool operator != (B bit_);
operator bool();
F_subgroup_feature all_flags();
F_subgroup_feature& clear();
VkSubgroupFeatureFlagBits get();
F_subgroup_feature& on_basic();
F_subgroup_feature& off_basic();
F_subgroup_feature& on_vote();
F_subgroup_feature& off_vote();
F_subgroup_feature& on_arithmetic();
F_subgroup_feature& off_arithmetic();
F_subgroup_feature& on_ballot();
F_subgroup_feature& off_ballot();
F_subgroup_feature& on_shuffle();
F_subgroup_feature& off_shuffle();
F_subgroup_feature& on_shuffle_relative();
F_subgroup_feature& off_shuffle_relative();
F_subgroup_feature& on_clustered();
F_subgroup_feature& off_clustered();
F_subgroup_feature& on_quad();
F_subgroup_feature& off_quad();
};
F_subgroup_feature operator|(F_subgroup_feature::B bit1_,F_subgroup_feature::B bit2_);


class F_indirect_commands_layout_usage_nvx {
private:
F_indirect_commands_layout_usage_nvx(int flag_);
public:
int flag;
enum B{
b_unordered_sequences_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX,
b_sparse_sequences_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX,
b_empty_executions_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX,
b_indexed_sequences_bit_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX,
};
F_indirect_commands_layout_usage_nvx();
F_indirect_commands_layout_usage_nvx(B bits_);
F_indirect_commands_layout_usage_nvx(F_indirect_commands_layout_usage_nvx const& flag_);
F_indirect_commands_layout_usage_nvx(std::initializer_list<B> bit_list);
F_indirect_commands_layout_usage_nvx& operator = (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator | (B bit_);
F_indirect_commands_layout_usage_nvx& operator |= (B bit_);
F_indirect_commands_layout_usage_nvx operator | (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx& operator |= (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator & (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx& operator &= (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator ^ (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx& operator ^= (F_indirect_commands_layout_usage_nvx flag_);
F_indirect_commands_layout_usage_nvx operator ~ ();
bool operator !();
bool operator == (F_indirect_commands_layout_usage_nvx flag_);
bool operator == (B bit_);
bool operator != (F_indirect_commands_layout_usage_nvx flag_);
bool operator != (B bit_);
operator bool();
F_indirect_commands_layout_usage_nvx all_flags();
F_indirect_commands_layout_usage_nvx& clear();
VkIndirectCommandsLayoutUsageFlagBitsNVX get();
F_indirect_commands_layout_usage_nvx& on_unordered_sequences_bit_nvx();
F_indirect_commands_layout_usage_nvx& off_unordered_sequences_bit_nvx();
F_indirect_commands_layout_usage_nvx& on_sparse_sequences_bit_nvx();
F_indirect_commands_layout_usage_nvx& off_sparse_sequences_bit_nvx();
F_indirect_commands_layout_usage_nvx& on_empty_executions_bit_nvx();
F_indirect_commands_layout_usage_nvx& off_empty_executions_bit_nvx();
F_indirect_commands_layout_usage_nvx& on_indexed_sequences_bit_nvx();
F_indirect_commands_layout_usage_nvx& off_indexed_sequences_bit_nvx();
};
F_indirect_commands_layout_usage_nvx operator|(F_indirect_commands_layout_usage_nvx::B bit1_,F_indirect_commands_layout_usage_nvx::B bit2_);


class F_object_entry_usage_nvx {
private:
F_object_entry_usage_nvx(int flag_);
public:
int flag;
enum B{
b_graphics_bit_nvx = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX,
b_compute_bit_nvx = VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX,
};
F_object_entry_usage_nvx();
F_object_entry_usage_nvx(B bits_);
F_object_entry_usage_nvx(F_object_entry_usage_nvx const& flag_);
F_object_entry_usage_nvx(std::initializer_list<B> bit_list);
F_object_entry_usage_nvx& operator = (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator | (B bit_);
F_object_entry_usage_nvx& operator |= (B bit_);
F_object_entry_usage_nvx operator | (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx& operator |= (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator & (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx& operator &= (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator ^ (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx& operator ^= (F_object_entry_usage_nvx flag_);
F_object_entry_usage_nvx operator ~ ();
bool operator !();
bool operator == (F_object_entry_usage_nvx flag_);
bool operator == (B bit_);
bool operator != (F_object_entry_usage_nvx flag_);
bool operator != (B bit_);
operator bool();
F_object_entry_usage_nvx all_flags();
F_object_entry_usage_nvx& clear();
VkObjectEntryUsageFlagBitsNVX get();
F_object_entry_usage_nvx& on_graphics_bit_nvx();
F_object_entry_usage_nvx& off_graphics_bit_nvx();
F_object_entry_usage_nvx& on_compute_bit_nvx();
F_object_entry_usage_nvx& off_compute_bit_nvx();
};
F_object_entry_usage_nvx operator|(F_object_entry_usage_nvx::B bit1_,F_object_entry_usage_nvx::B bit2_);


class F_external_memory_handle_type {
private:
F_external_memory_handle_type(int flag_);
public:
int flag;
enum B{
b_opaque_fd = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT,
b_opaque_win32 = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT,
b_opaque_win32_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
b_d3d11_texture = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT,
b_d3d11_texture_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT,
b_d3d12_heap = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT,
b_d3d12_resource = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT,
};
F_external_memory_handle_type();
F_external_memory_handle_type(B bits_);
F_external_memory_handle_type(F_external_memory_handle_type const& flag_);
F_external_memory_handle_type(std::initializer_list<B> bit_list);
F_external_memory_handle_type& operator = (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator | (B bit_);
F_external_memory_handle_type& operator |= (B bit_);
F_external_memory_handle_type operator | (F_external_memory_handle_type flag_);
F_external_memory_handle_type& operator |= (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator & (F_external_memory_handle_type flag_);
F_external_memory_handle_type& operator &= (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator ^ (F_external_memory_handle_type flag_);
F_external_memory_handle_type& operator ^= (F_external_memory_handle_type flag_);
F_external_memory_handle_type operator ~ ();
bool operator !();
bool operator == (F_external_memory_handle_type flag_);
bool operator == (B bit_);
bool operator != (F_external_memory_handle_type flag_);
bool operator != (B bit_);
operator bool();
F_external_memory_handle_type all_flags();
F_external_memory_handle_type& clear();
VkExternalMemoryHandleTypeFlagBits get();
F_external_memory_handle_type& on_opaque_fd();
F_external_memory_handle_type& off_opaque_fd();
F_external_memory_handle_type& on_opaque_win32();
F_external_memory_handle_type& off_opaque_win32();
F_external_memory_handle_type& on_opaque_win32_kmt();
F_external_memory_handle_type& off_opaque_win32_kmt();
F_external_memory_handle_type& on_d3d11_texture();
F_external_memory_handle_type& off_d3d11_texture();
F_external_memory_handle_type& on_d3d11_texture_kmt();
F_external_memory_handle_type& off_d3d11_texture_kmt();
F_external_memory_handle_type& on_d3d12_heap();
F_external_memory_handle_type& off_d3d12_heap();
F_external_memory_handle_type& on_d3d12_resource();
F_external_memory_handle_type& off_d3d12_resource();
};
F_external_memory_handle_type operator|(F_external_memory_handle_type::B bit1_,F_external_memory_handle_type::B bit2_);


class F_external_memory_feature {
private:
F_external_memory_feature(int flag_);
public:
int flag;
enum B{
b_dedicated_only = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT,
b_exportable = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT,
b_importable = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT,
};
F_external_memory_feature();
F_external_memory_feature(B bits_);
F_external_memory_feature(F_external_memory_feature const& flag_);
F_external_memory_feature(std::initializer_list<B> bit_list);
F_external_memory_feature& operator = (F_external_memory_feature flag_);
F_external_memory_feature operator | (B bit_);
F_external_memory_feature& operator |= (B bit_);
F_external_memory_feature operator | (F_external_memory_feature flag_);
F_external_memory_feature& operator |= (F_external_memory_feature flag_);
F_external_memory_feature operator & (F_external_memory_feature flag_);
F_external_memory_feature& operator &= (F_external_memory_feature flag_);
F_external_memory_feature operator ^ (F_external_memory_feature flag_);
F_external_memory_feature& operator ^= (F_external_memory_feature flag_);
F_external_memory_feature operator ~ ();
bool operator !();
bool operator == (F_external_memory_feature flag_);
bool operator == (B bit_);
bool operator != (F_external_memory_feature flag_);
bool operator != (B bit_);
operator bool();
F_external_memory_feature all_flags();
F_external_memory_feature& clear();
VkExternalMemoryFeatureFlagBits get();
F_external_memory_feature& on_dedicated_only();
F_external_memory_feature& off_dedicated_only();
F_external_memory_feature& on_exportable();
F_external_memory_feature& off_exportable();
F_external_memory_feature& on_importable();
F_external_memory_feature& off_importable();
};
F_external_memory_feature operator|(F_external_memory_feature::B bit1_,F_external_memory_feature::B bit2_);


class F_external_semaphore_handle_type {
private:
F_external_semaphore_handle_type(int flag_);
public:
int flag;
enum B{
b_opaque_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT,
b_opaque_win32 = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
b_opaque_win32_kmt = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
b_d3d12_fence = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,
b_sync_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT,
};
F_external_semaphore_handle_type();
F_external_semaphore_handle_type(B bits_);
F_external_semaphore_handle_type(F_external_semaphore_handle_type const& flag_);
F_external_semaphore_handle_type(std::initializer_list<B> bit_list);
F_external_semaphore_handle_type& operator = (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator | (B bit_);
F_external_semaphore_handle_type& operator |= (B bit_);
F_external_semaphore_handle_type operator | (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type& operator |= (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator & (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type& operator &= (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator ^ (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type& operator ^= (F_external_semaphore_handle_type flag_);
F_external_semaphore_handle_type operator ~ ();
bool operator !();
bool operator == (F_external_semaphore_handle_type flag_);
bool operator == (B bit_);
bool operator != (F_external_semaphore_handle_type flag_);
bool operator != (B bit_);
operator bool();
F_external_semaphore_handle_type all_flags();
F_external_semaphore_handle_type& clear();
VkExternalSemaphoreHandleTypeFlagBits get();
F_external_semaphore_handle_type& on_opaque_fd();
F_external_semaphore_handle_type& off_opaque_fd();
F_external_semaphore_handle_type& on_opaque_win32();
F_external_semaphore_handle_type& off_opaque_win32();
F_external_semaphore_handle_type& on_opaque_win32_kmt();
F_external_semaphore_handle_type& off_opaque_win32_kmt();
F_external_semaphore_handle_type& on_d3d12_fence();
F_external_semaphore_handle_type& off_d3d12_fence();
F_external_semaphore_handle_type& on_sync_fd();
F_external_semaphore_handle_type& off_sync_fd();
};
F_external_semaphore_handle_type operator|(F_external_semaphore_handle_type::B bit1_,F_external_semaphore_handle_type::B bit2_);


class F_external_semaphore_feature {
private:
F_external_semaphore_feature(int flag_);
public:
int flag;
enum B{
b_exportable = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,
b_importable = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,
};
F_external_semaphore_feature();
F_external_semaphore_feature(B bits_);
F_external_semaphore_feature(F_external_semaphore_feature const& flag_);
F_external_semaphore_feature(std::initializer_list<B> bit_list);
F_external_semaphore_feature& operator = (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator | (B bit_);
F_external_semaphore_feature& operator |= (B bit_);
F_external_semaphore_feature operator | (F_external_semaphore_feature flag_);
F_external_semaphore_feature& operator |= (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator & (F_external_semaphore_feature flag_);
F_external_semaphore_feature& operator &= (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator ^ (F_external_semaphore_feature flag_);
F_external_semaphore_feature& operator ^= (F_external_semaphore_feature flag_);
F_external_semaphore_feature operator ~ ();
bool operator !();
bool operator == (F_external_semaphore_feature flag_);
bool operator == (B bit_);
bool operator != (F_external_semaphore_feature flag_);
bool operator != (B bit_);
operator bool();
F_external_semaphore_feature all_flags();
F_external_semaphore_feature& clear();
VkExternalSemaphoreFeatureFlagBits get();
F_external_semaphore_feature& on_exportable();
F_external_semaphore_feature& off_exportable();
F_external_semaphore_feature& on_importable();
F_external_semaphore_feature& off_importable();
};
F_external_semaphore_feature operator|(F_external_semaphore_feature::B bit1_,F_external_semaphore_feature::B bit2_);


class F_semaphore_import {
private:
F_semaphore_import(int flag_);
public:
int flag;
enum B{
b_temporary = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
};
F_semaphore_import();
F_semaphore_import(B bits_);
F_semaphore_import(F_semaphore_import const& flag_);
F_semaphore_import(std::initializer_list<B> bit_list);
F_semaphore_import& operator = (F_semaphore_import flag_);
F_semaphore_import operator | (B bit_);
F_semaphore_import& operator |= (B bit_);
F_semaphore_import operator | (F_semaphore_import flag_);
F_semaphore_import& operator |= (F_semaphore_import flag_);
F_semaphore_import operator & (F_semaphore_import flag_);
F_semaphore_import& operator &= (F_semaphore_import flag_);
F_semaphore_import operator ^ (F_semaphore_import flag_);
F_semaphore_import& operator ^= (F_semaphore_import flag_);
F_semaphore_import operator ~ ();
bool operator !();
bool operator == (F_semaphore_import flag_);
bool operator == (B bit_);
bool operator != (F_semaphore_import flag_);
bool operator != (B bit_);
operator bool();
F_semaphore_import all_flags();
F_semaphore_import& clear();
VkSemaphoreImportFlagBits get();
F_semaphore_import& on_temporary();
F_semaphore_import& off_temporary();
};
F_semaphore_import operator|(F_semaphore_import::B bit1_,F_semaphore_import::B bit2_);


class F_external_fence_handle_type {
private:
F_external_fence_handle_type(int flag_);
public:
int flag;
enum B{
b_opaque_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT,
b_opaque_win32 = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
b_opaque_win32_kmt = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
b_sync_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT,
};
F_external_fence_handle_type();
F_external_fence_handle_type(B bits_);
F_external_fence_handle_type(F_external_fence_handle_type const& flag_);
F_external_fence_handle_type(std::initializer_list<B> bit_list);
F_external_fence_handle_type& operator = (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator | (B bit_);
F_external_fence_handle_type& operator |= (B bit_);
F_external_fence_handle_type operator | (F_external_fence_handle_type flag_);
F_external_fence_handle_type& operator |= (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator & (F_external_fence_handle_type flag_);
F_external_fence_handle_type& operator &= (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator ^ (F_external_fence_handle_type flag_);
F_external_fence_handle_type& operator ^= (F_external_fence_handle_type flag_);
F_external_fence_handle_type operator ~ ();
bool operator !();
bool operator == (F_external_fence_handle_type flag_);
bool operator == (B bit_);
bool operator != (F_external_fence_handle_type flag_);
bool operator != (B bit_);
operator bool();
F_external_fence_handle_type all_flags();
F_external_fence_handle_type& clear();
VkExternalFenceHandleTypeFlagBits get();
F_external_fence_handle_type& on_opaque_fd();
F_external_fence_handle_type& off_opaque_fd();
F_external_fence_handle_type& on_opaque_win32();
F_external_fence_handle_type& off_opaque_win32();
F_external_fence_handle_type& on_opaque_win32_kmt();
F_external_fence_handle_type& off_opaque_win32_kmt();
F_external_fence_handle_type& on_sync_fd();
F_external_fence_handle_type& off_sync_fd();
};
F_external_fence_handle_type operator|(F_external_fence_handle_type::B bit1_,F_external_fence_handle_type::B bit2_);


class F_external_fence_feature {
private:
F_external_fence_feature(int flag_);
public:
int flag;
enum B{
b_exportable = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,
b_importable = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,
};
F_external_fence_feature();
F_external_fence_feature(B bits_);
F_external_fence_feature(F_external_fence_feature const& flag_);
F_external_fence_feature(std::initializer_list<B> bit_list);
F_external_fence_feature& operator = (F_external_fence_feature flag_);
F_external_fence_feature operator | (B bit_);
F_external_fence_feature& operator |= (B bit_);
F_external_fence_feature operator | (F_external_fence_feature flag_);
F_external_fence_feature& operator |= (F_external_fence_feature flag_);
F_external_fence_feature operator & (F_external_fence_feature flag_);
F_external_fence_feature& operator &= (F_external_fence_feature flag_);
F_external_fence_feature operator ^ (F_external_fence_feature flag_);
F_external_fence_feature& operator ^= (F_external_fence_feature flag_);
F_external_fence_feature operator ~ ();
bool operator !();
bool operator == (F_external_fence_feature flag_);
bool operator == (B bit_);
bool operator != (F_external_fence_feature flag_);
bool operator != (B bit_);
operator bool();
F_external_fence_feature all_flags();
F_external_fence_feature& clear();
VkExternalFenceFeatureFlagBits get();
F_external_fence_feature& on_exportable();
F_external_fence_feature& off_exportable();
F_external_fence_feature& on_importable();
F_external_fence_feature& off_importable();
};
F_external_fence_feature operator|(F_external_fence_feature::B bit1_,F_external_fence_feature::B bit2_);


class F_fence_import {
private:
F_fence_import(int flag_);
public:
int flag;
enum B{
b_temporary = VK_FENCE_IMPORT_TEMPORARY_BIT,
};
F_fence_import();
F_fence_import(B bits_);
F_fence_import(F_fence_import const& flag_);
F_fence_import(std::initializer_list<B> bit_list);
F_fence_import& operator = (F_fence_import flag_);
F_fence_import operator | (B bit_);
F_fence_import& operator |= (B bit_);
F_fence_import operator | (F_fence_import flag_);
F_fence_import& operator |= (F_fence_import flag_);
F_fence_import operator & (F_fence_import flag_);
F_fence_import& operator &= (F_fence_import flag_);
F_fence_import operator ^ (F_fence_import flag_);
F_fence_import& operator ^= (F_fence_import flag_);
F_fence_import operator ~ ();
bool operator !();
bool operator == (F_fence_import flag_);
bool operator == (B bit_);
bool operator != (F_fence_import flag_);
bool operator != (B bit_);
operator bool();
F_fence_import all_flags();
F_fence_import& clear();
VkFenceImportFlagBits get();
F_fence_import& on_temporary();
F_fence_import& off_temporary();
};
F_fence_import operator|(F_fence_import::B bit1_,F_fence_import::B bit2_);


class F_surface_counter_ext {
private:
F_surface_counter_ext(int flag_);
public:
int flag;
enum B{
b_vblank_ext = VK_SURFACE_COUNTER_VBLANK_EXT,
};
F_surface_counter_ext();
F_surface_counter_ext(B bits_);
F_surface_counter_ext(F_surface_counter_ext const& flag_);
F_surface_counter_ext(std::initializer_list<B> bit_list);
F_surface_counter_ext& operator = (F_surface_counter_ext flag_);
F_surface_counter_ext operator | (B bit_);
F_surface_counter_ext& operator |= (B bit_);
F_surface_counter_ext operator | (F_surface_counter_ext flag_);
F_surface_counter_ext& operator |= (F_surface_counter_ext flag_);
F_surface_counter_ext operator & (F_surface_counter_ext flag_);
F_surface_counter_ext& operator &= (F_surface_counter_ext flag_);
F_surface_counter_ext operator ^ (F_surface_counter_ext flag_);
F_surface_counter_ext& operator ^= (F_surface_counter_ext flag_);
F_surface_counter_ext operator ~ ();
bool operator !();
bool operator == (F_surface_counter_ext flag_);
bool operator == (B bit_);
bool operator != (F_surface_counter_ext flag_);
bool operator != (B bit_);
operator bool();
F_surface_counter_ext all_flags();
F_surface_counter_ext& clear();
VkSurfaceCounterFlagBitsEXT get();
F_surface_counter_ext& on_vblank_ext();
F_surface_counter_ext& off_vblank_ext();
};
F_surface_counter_ext operator|(F_surface_counter_ext::B bit1_,F_surface_counter_ext::B bit2_);


class F_peer_memory_feature {
private:
F_peer_memory_feature(int flag_);
public:
int flag;
enum B{
b_copy_src = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,
b_copy_dst = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,
b_generic_src = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,
b_generic_dst = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,
};
F_peer_memory_feature();
F_peer_memory_feature(B bits_);
F_peer_memory_feature(F_peer_memory_feature const& flag_);
F_peer_memory_feature(std::initializer_list<B> bit_list);
F_peer_memory_feature& operator = (F_peer_memory_feature flag_);
F_peer_memory_feature operator | (B bit_);
F_peer_memory_feature& operator |= (B bit_);
F_peer_memory_feature operator | (F_peer_memory_feature flag_);
F_peer_memory_feature& operator |= (F_peer_memory_feature flag_);
F_peer_memory_feature operator & (F_peer_memory_feature flag_);
F_peer_memory_feature& operator &= (F_peer_memory_feature flag_);
F_peer_memory_feature operator ^ (F_peer_memory_feature flag_);
F_peer_memory_feature& operator ^= (F_peer_memory_feature flag_);
F_peer_memory_feature operator ~ ();
bool operator !();
bool operator == (F_peer_memory_feature flag_);
bool operator == (B bit_);
bool operator != (F_peer_memory_feature flag_);
bool operator != (B bit_);
operator bool();
F_peer_memory_feature all_flags();
F_peer_memory_feature& clear();
VkPeerMemoryFeatureFlagBits get();
F_peer_memory_feature& on_copy_src();
F_peer_memory_feature& off_copy_src();
F_peer_memory_feature& on_copy_dst();
F_peer_memory_feature& off_copy_dst();
F_peer_memory_feature& on_generic_src();
F_peer_memory_feature& off_generic_src();
F_peer_memory_feature& on_generic_dst();
F_peer_memory_feature& off_generic_dst();
};
F_peer_memory_feature operator|(F_peer_memory_feature::B bit1_,F_peer_memory_feature::B bit2_);


class F_memory_allocate {
private:
F_memory_allocate(int flag_);
public:
int flag;
enum B{
b_device_mask = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,
};
F_memory_allocate();
F_memory_allocate(B bits_);
F_memory_allocate(F_memory_allocate const& flag_);
F_memory_allocate(std::initializer_list<B> bit_list);
F_memory_allocate& operator = (F_memory_allocate flag_);
F_memory_allocate operator | (B bit_);
F_memory_allocate& operator |= (B bit_);
F_memory_allocate operator | (F_memory_allocate flag_);
F_memory_allocate& operator |= (F_memory_allocate flag_);
F_memory_allocate operator & (F_memory_allocate flag_);
F_memory_allocate& operator &= (F_memory_allocate flag_);
F_memory_allocate operator ^ (F_memory_allocate flag_);
F_memory_allocate& operator ^= (F_memory_allocate flag_);
F_memory_allocate operator ~ ();
bool operator !();
bool operator == (F_memory_allocate flag_);
bool operator == (B bit_);
bool operator != (F_memory_allocate flag_);
bool operator != (B bit_);
operator bool();
F_memory_allocate all_flags();
F_memory_allocate& clear();
VkMemoryAllocateFlagBits get();
F_memory_allocate& on_device_mask();
F_memory_allocate& off_device_mask();
};
F_memory_allocate operator|(F_memory_allocate::B bit1_,F_memory_allocate::B bit2_);


class F_device_group_present_mode_khr {
private:
F_device_group_present_mode_khr(int flag_);
public:
int flag;
enum B{
b_local_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR,
b_remote_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR,
b_sum_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR,
b_local_multi_device_bit_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR,
};
F_device_group_present_mode_khr();
F_device_group_present_mode_khr(B bits_);
F_device_group_present_mode_khr(F_device_group_present_mode_khr const& flag_);
F_device_group_present_mode_khr(std::initializer_list<B> bit_list);
F_device_group_present_mode_khr& operator = (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator | (B bit_);
F_device_group_present_mode_khr& operator |= (B bit_);
F_device_group_present_mode_khr operator | (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr& operator |= (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator & (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr& operator &= (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator ^ (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr& operator ^= (F_device_group_present_mode_khr flag_);
F_device_group_present_mode_khr operator ~ ();
bool operator !();
bool operator == (F_device_group_present_mode_khr flag_);
bool operator == (B bit_);
bool operator != (F_device_group_present_mode_khr flag_);
bool operator != (B bit_);
operator bool();
F_device_group_present_mode_khr all_flags();
F_device_group_present_mode_khr& clear();
VkDeviceGroupPresentModeFlagBitsKHR get();
F_device_group_present_mode_khr& on_local_bit_khr();
F_device_group_present_mode_khr& off_local_bit_khr();
F_device_group_present_mode_khr& on_remote_bit_khr();
F_device_group_present_mode_khr& off_remote_bit_khr();
F_device_group_present_mode_khr& on_sum_bit_khr();
F_device_group_present_mode_khr& off_sum_bit_khr();
F_device_group_present_mode_khr& on_local_multi_device_bit_khr();
F_device_group_present_mode_khr& off_local_multi_device_bit_khr();
};
F_device_group_present_mode_khr operator|(F_device_group_present_mode_khr::B bit1_,F_device_group_present_mode_khr::B bit2_);


class F_debug_utils_message_severity_ext {
private:
F_debug_utils_message_severity_ext(int flag_);
public:
int flag;
enum B{
b_verbose_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT,
b_info_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT,
b_warning_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT,
b_error_bit_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
};
F_debug_utils_message_severity_ext();
F_debug_utils_message_severity_ext(B bits_);
F_debug_utils_message_severity_ext(F_debug_utils_message_severity_ext const& flag_);
F_debug_utils_message_severity_ext(std::initializer_list<B> bit_list);
F_debug_utils_message_severity_ext& operator = (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator | (B bit_);
F_debug_utils_message_severity_ext& operator |= (B bit_);
F_debug_utils_message_severity_ext operator | (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext& operator |= (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator & (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext& operator &= (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator ^ (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext& operator ^= (F_debug_utils_message_severity_ext flag_);
F_debug_utils_message_severity_ext operator ~ ();
bool operator !();
bool operator == (F_debug_utils_message_severity_ext flag_);
bool operator == (B bit_);
bool operator != (F_debug_utils_message_severity_ext flag_);
bool operator != (B bit_);
operator bool();
F_debug_utils_message_severity_ext all_flags();
F_debug_utils_message_severity_ext& clear();
VkDebugUtilsMessageSeverityFlagBitsEXT get();
F_debug_utils_message_severity_ext& on_verbose_bit_ext();
F_debug_utils_message_severity_ext& off_verbose_bit_ext();
F_debug_utils_message_severity_ext& on_info_bit_ext();
F_debug_utils_message_severity_ext& off_info_bit_ext();
F_debug_utils_message_severity_ext& on_warning_bit_ext();
F_debug_utils_message_severity_ext& off_warning_bit_ext();
F_debug_utils_message_severity_ext& on_error_bit_ext();
F_debug_utils_message_severity_ext& off_error_bit_ext();
};
F_debug_utils_message_severity_ext operator|(F_debug_utils_message_severity_ext::B bit1_,F_debug_utils_message_severity_ext::B bit2_);


class F_debug_utils_message_type_ext {
private:
F_debug_utils_message_type_ext(int flag_);
public:
int flag;
enum B{
b_general_bit_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT,
b_validation_bit_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT,
b_performance_bit_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,
};
F_debug_utils_message_type_ext();
F_debug_utils_message_type_ext(B bits_);
F_debug_utils_message_type_ext(F_debug_utils_message_type_ext const& flag_);
F_debug_utils_message_type_ext(std::initializer_list<B> bit_list);
F_debug_utils_message_type_ext& operator = (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator | (B bit_);
F_debug_utils_message_type_ext& operator |= (B bit_);
F_debug_utils_message_type_ext operator | (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext& operator |= (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator & (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext& operator &= (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator ^ (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext& operator ^= (F_debug_utils_message_type_ext flag_);
F_debug_utils_message_type_ext operator ~ ();
bool operator !();
bool operator == (F_debug_utils_message_type_ext flag_);
bool operator == (B bit_);
bool operator != (F_debug_utils_message_type_ext flag_);
bool operator != (B bit_);
operator bool();
F_debug_utils_message_type_ext all_flags();
F_debug_utils_message_type_ext& clear();
VkDebugUtilsMessageTypeFlagBitsEXT get();
F_debug_utils_message_type_ext& on_general_bit_ext();
F_debug_utils_message_type_ext& off_general_bit_ext();
F_debug_utils_message_type_ext& on_validation_bit_ext();
F_debug_utils_message_type_ext& off_validation_bit_ext();
F_debug_utils_message_type_ext& on_performance_bit_ext();
F_debug_utils_message_type_ext& off_performance_bit_ext();
};
F_debug_utils_message_type_ext operator|(F_debug_utils_message_type_ext::B bit1_,F_debug_utils_message_type_ext::B bit2_);


class F_descriptor_binding_ext {
private:
F_descriptor_binding_ext(int flag_);
public:
int flag;
enum B{
b_update_after_bind_bit_ext = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT,
b_update_unused_while_pending_bit_ext = VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT,
b_partially_bound_bit_ext = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT,
b_variable_descriptor_count_bit_ext = VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT,
};
F_descriptor_binding_ext();
F_descriptor_binding_ext(B bits_);
F_descriptor_binding_ext(F_descriptor_binding_ext const& flag_);
F_descriptor_binding_ext(std::initializer_list<B> bit_list);
F_descriptor_binding_ext& operator = (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator | (B bit_);
F_descriptor_binding_ext& operator |= (B bit_);
F_descriptor_binding_ext operator | (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext& operator |= (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator & (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext& operator &= (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator ^ (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext& operator ^= (F_descriptor_binding_ext flag_);
F_descriptor_binding_ext operator ~ ();
bool operator !();
bool operator == (F_descriptor_binding_ext flag_);
bool operator == (B bit_);
bool operator != (F_descriptor_binding_ext flag_);
bool operator != (B bit_);
operator bool();
F_descriptor_binding_ext all_flags();
F_descriptor_binding_ext& clear();
VkDescriptorBindingFlagBitsEXT get();
F_descriptor_binding_ext& on_update_after_bind_bit_ext();
F_descriptor_binding_ext& off_update_after_bind_bit_ext();
F_descriptor_binding_ext& on_update_unused_while_pending_bit_ext();
F_descriptor_binding_ext& off_update_unused_while_pending_bit_ext();
F_descriptor_binding_ext& on_partially_bound_bit_ext();
F_descriptor_binding_ext& off_partially_bound_bit_ext();
F_descriptor_binding_ext& on_variable_descriptor_count_bit_ext();
F_descriptor_binding_ext& off_variable_descriptor_count_bit_ext();
};
F_descriptor_binding_ext operator|(F_descriptor_binding_ext::B bit1_,F_descriptor_binding_ext::B bit2_);


class F_conditional_rendering_ext {
private:
F_conditional_rendering_ext(int flag_);
public:
int flag;
enum B{
b_inverted_bit_ext = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,
};
F_conditional_rendering_ext();
F_conditional_rendering_ext(B bits_);
F_conditional_rendering_ext(F_conditional_rendering_ext const& flag_);
F_conditional_rendering_ext(std::initializer_list<B> bit_list);
F_conditional_rendering_ext& operator = (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator | (B bit_);
F_conditional_rendering_ext& operator |= (B bit_);
F_conditional_rendering_ext operator | (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext& operator |= (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator & (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext& operator &= (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator ^ (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext& operator ^= (F_conditional_rendering_ext flag_);
F_conditional_rendering_ext operator ~ ();
bool operator !();
bool operator == (F_conditional_rendering_ext flag_);
bool operator == (B bit_);
bool operator != (F_conditional_rendering_ext flag_);
bool operator != (B bit_);
operator bool();
F_conditional_rendering_ext all_flags();
F_conditional_rendering_ext& clear();
VkConditionalRenderingFlagBitsEXT get();
F_conditional_rendering_ext& on_inverted_bit_ext();
F_conditional_rendering_ext& off_inverted_bit_ext();
};
F_conditional_rendering_ext operator|(F_conditional_rendering_ext::B bit1_,F_conditional_rendering_ext::B bit2_);


class F_geometry_instance_nvx {
private:
F_geometry_instance_nvx(int flag_);
public:
int flag;
enum B{
b_triangle_cull_disable_bit_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX,
b_triangle_cull_flip_winding_bit_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX,
b_force_opaque_bit_nvx = VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX,
b_force_no_opaque_bit_nvx = VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX,
};
F_geometry_instance_nvx();
F_geometry_instance_nvx(B bits_);
F_geometry_instance_nvx(F_geometry_instance_nvx const& flag_);
F_geometry_instance_nvx(std::initializer_list<B> bit_list);
F_geometry_instance_nvx& operator = (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator | (B bit_);
F_geometry_instance_nvx& operator |= (B bit_);
F_geometry_instance_nvx operator | (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx& operator |= (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator & (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx& operator &= (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator ^ (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx& operator ^= (F_geometry_instance_nvx flag_);
F_geometry_instance_nvx operator ~ ();
bool operator !();
bool operator == (F_geometry_instance_nvx flag_);
bool operator == (B bit_);
bool operator != (F_geometry_instance_nvx flag_);
bool operator != (B bit_);
operator bool();
F_geometry_instance_nvx all_flags();
F_geometry_instance_nvx& clear();
VkGeometryInstanceFlagBitsNVX get();
F_geometry_instance_nvx& on_triangle_cull_disable_bit_nvx();
F_geometry_instance_nvx& off_triangle_cull_disable_bit_nvx();
F_geometry_instance_nvx& on_triangle_cull_flip_winding_bit_nvx();
F_geometry_instance_nvx& off_triangle_cull_flip_winding_bit_nvx();
F_geometry_instance_nvx& on_force_opaque_bit_nvx();
F_geometry_instance_nvx& off_force_opaque_bit_nvx();
F_geometry_instance_nvx& on_force_no_opaque_bit_nvx();
F_geometry_instance_nvx& off_force_no_opaque_bit_nvx();
};
F_geometry_instance_nvx operator|(F_geometry_instance_nvx::B bit1_,F_geometry_instance_nvx::B bit2_);


class F_geometry_nvx {
private:
F_geometry_nvx(int flag_);
public:
int flag;
enum B{
b_opaque_bit_nvx = VK_GEOMETRY_OPAQUE_BIT_NVX,
b_no_duplicate_any_hit_invocation_bit_nvx = VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX,
};
F_geometry_nvx();
F_geometry_nvx(B bits_);
F_geometry_nvx(F_geometry_nvx const& flag_);
F_geometry_nvx(std::initializer_list<B> bit_list);
F_geometry_nvx& operator = (F_geometry_nvx flag_);
F_geometry_nvx operator | (B bit_);
F_geometry_nvx& operator |= (B bit_);
F_geometry_nvx operator | (F_geometry_nvx flag_);
F_geometry_nvx& operator |= (F_geometry_nvx flag_);
F_geometry_nvx operator & (F_geometry_nvx flag_);
F_geometry_nvx& operator &= (F_geometry_nvx flag_);
F_geometry_nvx operator ^ (F_geometry_nvx flag_);
F_geometry_nvx& operator ^= (F_geometry_nvx flag_);
F_geometry_nvx operator ~ ();
bool operator !();
bool operator == (F_geometry_nvx flag_);
bool operator == (B bit_);
bool operator != (F_geometry_nvx flag_);
bool operator != (B bit_);
operator bool();
F_geometry_nvx all_flags();
F_geometry_nvx& clear();
VkGeometryFlagBitsNVX get();
F_geometry_nvx& on_opaque_bit_nvx();
F_geometry_nvx& off_opaque_bit_nvx();
F_geometry_nvx& on_no_duplicate_any_hit_invocation_bit_nvx();
F_geometry_nvx& off_no_duplicate_any_hit_invocation_bit_nvx();
};
F_geometry_nvx operator|(F_geometry_nvx::B bit1_,F_geometry_nvx::B bit2_);


class F_build_acceleration_structure_nvx {
private:
F_build_acceleration_structure_nvx(int flag_);
public:
int flag;
enum B{
b_allow_update_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX,
b_allow_compaction_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX,
b_prefer_fast_trace_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX,
b_prefer_fast_build_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX,
b_low_memory_bit_nvx = VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX,
};
F_build_acceleration_structure_nvx();
F_build_acceleration_structure_nvx(B bits_);
F_build_acceleration_structure_nvx(F_build_acceleration_structure_nvx const& flag_);
F_build_acceleration_structure_nvx(std::initializer_list<B> bit_list);
F_build_acceleration_structure_nvx& operator = (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator | (B bit_);
F_build_acceleration_structure_nvx& operator |= (B bit_);
F_build_acceleration_structure_nvx operator | (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx& operator |= (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator & (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx& operator &= (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator ^ (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx& operator ^= (F_build_acceleration_structure_nvx flag_);
F_build_acceleration_structure_nvx operator ~ ();
bool operator !();
bool operator == (F_build_acceleration_structure_nvx flag_);
bool operator == (B bit_);
bool operator != (F_build_acceleration_structure_nvx flag_);
bool operator != (B bit_);
operator bool();
F_build_acceleration_structure_nvx all_flags();
F_build_acceleration_structure_nvx& clear();
VkBuildAccelerationStructureFlagBitsNVX get();
F_build_acceleration_structure_nvx& on_allow_update_bit_nvx();
F_build_acceleration_structure_nvx& off_allow_update_bit_nvx();
F_build_acceleration_structure_nvx& on_allow_compaction_bit_nvx();
F_build_acceleration_structure_nvx& off_allow_compaction_bit_nvx();
F_build_acceleration_structure_nvx& on_prefer_fast_trace_bit_nvx();
F_build_acceleration_structure_nvx& off_prefer_fast_trace_bit_nvx();
F_build_acceleration_structure_nvx& on_prefer_fast_build_bit_nvx();
F_build_acceleration_structure_nvx& off_prefer_fast_build_bit_nvx();
F_build_acceleration_structure_nvx& on_low_memory_bit_nvx();
F_build_acceleration_structure_nvx& off_low_memory_bit_nvx();
};
F_build_acceleration_structure_nvx operator|(F_build_acceleration_structure_nvx::B bit1_,F_build_acceleration_structure_nvx::B bit2_);



}}

