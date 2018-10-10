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
/*	VkImageLayout
*/
enum class E_image_layout{
e_undefined = VK_IMAGE_LAYOUT_UNDEFINED,
e_general = VK_IMAGE_LAYOUT_GENERAL,
e_color_attachment_optimal = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
e_depth_stencil_attachment_optimal = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL,
e_depth_stencil_read_only_optimal = VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL,
e_shader_read_only_optimal = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
e_transfer_src_optimal = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
e_transfer_dst_optimal = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
e_preinitialized = VK_IMAGE_LAYOUT_PREINITIALIZED,
};

/*	VkAttachmentLoadOp
*/
enum class E_attachment_load_op{
e_load = VK_ATTACHMENT_LOAD_OP_LOAD,
e_clear = VK_ATTACHMENT_LOAD_OP_CLEAR,
e_dont_care = VK_ATTACHMENT_LOAD_OP_DONT_CARE,
};

/*	VkAttachmentStoreOp
*/
enum class E_attachment_store_op{
e_store = VK_ATTACHMENT_STORE_OP_STORE,
e_dont_care = VK_ATTACHMENT_STORE_OP_DONT_CARE,
};

/*	VkImageType
*/
enum class E_image_type{
e_1d = VK_IMAGE_TYPE_1D,
e_2d = VK_IMAGE_TYPE_2D,
e_3d = VK_IMAGE_TYPE_3D,
};

/*	VkImageTiling
*/
enum class E_image_tiling{
e_optimal = VK_IMAGE_TILING_OPTIMAL,
e_linear = VK_IMAGE_TILING_LINEAR,
};

/*	VkImageViewType
*/
enum class E_image_view_type{
e_1d = VK_IMAGE_VIEW_TYPE_1D,
e_2d = VK_IMAGE_VIEW_TYPE_2D,
e_3d = VK_IMAGE_VIEW_TYPE_3D,
e_cube = VK_IMAGE_VIEW_TYPE_CUBE,
e_1d_array = VK_IMAGE_VIEW_TYPE_1D_ARRAY,
e_2d_array = VK_IMAGE_VIEW_TYPE_2D_ARRAY,
e_cube_array = VK_IMAGE_VIEW_TYPE_CUBE_ARRAY,
};

/*	VkCommandBufferLevel
*/
enum class E_command_buffer_level{
e_primary = VK_COMMAND_BUFFER_LEVEL_PRIMARY,
e_secondary = VK_COMMAND_BUFFER_LEVEL_SECONDARY,
};

/*	VkComponentSwizzle
*/
enum class E_component_swizzle{
e_identity = VK_COMPONENT_SWIZZLE_IDENTITY,
e_zero = VK_COMPONENT_SWIZZLE_ZERO,
e_one = VK_COMPONENT_SWIZZLE_ONE,
e_r = VK_COMPONENT_SWIZZLE_R,
e_g = VK_COMPONENT_SWIZZLE_G,
e_b = VK_COMPONENT_SWIZZLE_B,
e_a = VK_COMPONENT_SWIZZLE_A,
};

/*	VkDescriptorType
*/
enum class E_descriptor_type{
e_sampler = VK_DESCRIPTOR_TYPE_SAMPLER,
e_combined_image_sampler = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,
e_sampled_image = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,
e_storage_image = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE,
e_uniform_texel_buffer = VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER,
e_storage_texel_buffer = VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER,
e_uniform_buffer = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER,
e_storage_buffer = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER,
e_uniform_buffer_dynamic = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC,
e_storage_buffer_dynamic = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC,
e_input_attachment = VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT,
};

/*	VkQueryType
*/
enum class E_query_type{
e_occlusion = VK_QUERY_TYPE_OCCLUSION,
e_pipeline_statistics = VK_QUERY_TYPE_PIPELINE_STATISTICS,
e_timestamp = VK_QUERY_TYPE_TIMESTAMP,
};

/*	VkBorderColor
*/
enum class E_border_color{
e_float_transparent_black = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,
e_int_transparent_black = VK_BORDER_COLOR_INT_TRANSPARENT_BLACK,
e_float_opaque_black = VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK,
e_int_opaque_black = VK_BORDER_COLOR_INT_OPAQUE_BLACK,
e_float_opaque_white = VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE,
e_int_opaque_white = VK_BORDER_COLOR_INT_OPAQUE_WHITE,
};

/*	VkPipelineBindPoint
*/
enum class E_pipeline_bind_point{
e_graphics = VK_PIPELINE_BIND_POINT_GRAPHICS,
e_compute = VK_PIPELINE_BIND_POINT_COMPUTE,
};

/*	VkPipelineCacheHeaderVersion
*/
enum class E_pipeline_cache_header_version{
e_one = VK_PIPELINE_CACHE_HEADER_VERSION_ONE,
};

/*	VkPrimitiveTopology
*/
enum class E_primitive_topology{
e_point_list = VK_PRIMITIVE_TOPOLOGY_POINT_LIST,
e_line_list = VK_PRIMITIVE_TOPOLOGY_LINE_LIST,
e_line_strip = VK_PRIMITIVE_TOPOLOGY_LINE_STRIP,
e_triangle_list = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST,
e_triangle_strip = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP,
e_triangle_fan = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN,
e_line_list_with_adjacency = VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY,
e_line_strip_with_adjacency = VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY,
e_triangle_list_with_adjacency = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY,
e_triangle_strip_with_adjacency = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY,
e_patch_list = VK_PRIMITIVE_TOPOLOGY_PATCH_LIST,
};

/*	VkSharingMode
*/
enum class E_sharing_mode{
e_exclusive = VK_SHARING_MODE_EXCLUSIVE,
e_concurrent = VK_SHARING_MODE_CONCURRENT,
};

/*	VkIndexType
*/
enum class E_index_type{
e_uint16 = VK_INDEX_TYPE_UINT16,
e_uint32 = VK_INDEX_TYPE_UINT32,
};

/*	VkFilter
*/
enum class E_filter{
e_nearest = VK_FILTER_NEAREST,
e_linear = VK_FILTER_LINEAR,
};

/*	VkSamplerMipmapMode
*/
enum class E_sampler_mipmap_mode{
e_nearest = VK_SAMPLER_MIPMAP_MODE_NEAREST,
e_linear = VK_SAMPLER_MIPMAP_MODE_LINEAR,
};

/*	VkSamplerAddressMode
*/
enum class E_sampler_address_mode{
e_repeat = VK_SAMPLER_ADDRESS_MODE_REPEAT,
e_mirrored_repeat = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT,
e_clamp_to_edge = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,
e_clamp_to_border = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER,
};

/*	VkCompareOp
*/
enum class E_compare_op{
e_never = VK_COMPARE_OP_NEVER,
e_less = VK_COMPARE_OP_LESS,
e_equal = VK_COMPARE_OP_EQUAL,
e_less_or_equal = VK_COMPARE_OP_LESS_OR_EQUAL,
e_greater = VK_COMPARE_OP_GREATER,
e_not_equal = VK_COMPARE_OP_NOT_EQUAL,
e_greater_or_equal = VK_COMPARE_OP_GREATER_OR_EQUAL,
e_always = VK_COMPARE_OP_ALWAYS,
};

/*	VkPolygonMode
*/
enum class E_polygon_mode{
e_fill = VK_POLYGON_MODE_FILL,
e_line = VK_POLYGON_MODE_LINE,
e_point = VK_POLYGON_MODE_POINT,
};

/*	VkFrontFace
*/
enum class E_front_face{
e_counter_clockwise = VK_FRONT_FACE_COUNTER_CLOCKWISE,
e_clockwise = VK_FRONT_FACE_CLOCKWISE,
};

/*	VkBlendFactor
*/
enum class E_blend_factor{
e_zero = VK_BLEND_FACTOR_ZERO,
e_one = VK_BLEND_FACTOR_ONE,
e_src_color = VK_BLEND_FACTOR_SRC_COLOR,
e_one_minus_src_color = VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR,
e_dst_color = VK_BLEND_FACTOR_DST_COLOR,
e_one_minus_dst_color = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR,
e_src_alpha = VK_BLEND_FACTOR_SRC_ALPHA,
e_one_minus_src_alpha = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA,
e_dst_alpha = VK_BLEND_FACTOR_DST_ALPHA,
e_one_minus_dst_alpha = VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA,
e_constant_color = VK_BLEND_FACTOR_CONSTANT_COLOR,
e_one_minus_constant_color = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR,
e_constant_alpha = VK_BLEND_FACTOR_CONSTANT_ALPHA,
e_one_minus_constant_alpha = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA,
e_src_alpha_saturate = VK_BLEND_FACTOR_SRC_ALPHA_SATURATE,
e_src1_color = VK_BLEND_FACTOR_SRC1_COLOR,
e_one_minus_src1_color = VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR,
e_src1_alpha = VK_BLEND_FACTOR_SRC1_ALPHA,
e_one_minus_src1_alpha = VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA,
};

/*	VkBlendOp
*/
enum class E_blend_op{
e_add = VK_BLEND_OP_ADD,
e_subtract = VK_BLEND_OP_SUBTRACT,
e_reverse_subtract = VK_BLEND_OP_REVERSE_SUBTRACT,
e_min = VK_BLEND_OP_MIN,
e_max = VK_BLEND_OP_MAX,
};

/*	VkStencilOp
*/
enum class E_stencil_op{
e_keep = VK_STENCIL_OP_KEEP,
e_zero = VK_STENCIL_OP_ZERO,
e_replace = VK_STENCIL_OP_REPLACE,
e_increment_and_clamp = VK_STENCIL_OP_INCREMENT_AND_CLAMP,
e_decrement_and_clamp = VK_STENCIL_OP_DECREMENT_AND_CLAMP,
e_invert = VK_STENCIL_OP_INVERT,
e_increment_and_wrap = VK_STENCIL_OP_INCREMENT_AND_WRAP,
e_decrement_and_wrap = VK_STENCIL_OP_DECREMENT_AND_WRAP,
};

/*	VkLogicOp
*/
enum class E_logic_op{
e_clear = VK_LOGIC_OP_CLEAR,
e_and = VK_LOGIC_OP_AND,
e_and_reverse = VK_LOGIC_OP_AND_REVERSE,
e_copy = VK_LOGIC_OP_COPY,
e_and_inverted = VK_LOGIC_OP_AND_INVERTED,
e_no_op = VK_LOGIC_OP_NO_OP,
e_xor = VK_LOGIC_OP_XOR,
e_or = VK_LOGIC_OP_OR,
e_nor = VK_LOGIC_OP_NOR,
e_equivalent = VK_LOGIC_OP_EQUIVALENT,
e_invert = VK_LOGIC_OP_INVERT,
e_or_reverse = VK_LOGIC_OP_OR_REVERSE,
e_copy_inverted = VK_LOGIC_OP_COPY_INVERTED,
e_or_inverted = VK_LOGIC_OP_OR_INVERTED,
e_nand = VK_LOGIC_OP_NAND,
e_set = VK_LOGIC_OP_SET,
};

/*	VkInternalAllocationType
*/
enum class E_internal_allocation_type{
e_executable = VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE,
};

/*	VkSystemAllocationScope
*/
enum class E_system_allocation_scope{
e_command = VK_SYSTEM_ALLOCATION_SCOPE_COMMAND,
e_object = VK_SYSTEM_ALLOCATION_SCOPE_OBJECT,
e_cache = VK_SYSTEM_ALLOCATION_SCOPE_CACHE,
e_device = VK_SYSTEM_ALLOCATION_SCOPE_DEVICE,
e_instance = VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE,
};

/*	VkPhysicalDeviceType
*/
enum class E_physical_device_type{
e_other = VK_PHYSICAL_DEVICE_TYPE_OTHER,
e_integrated_gpu = VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU,
e_discrete_gpu = VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU,
e_virtual_gpu = VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU,
e_cpu = VK_PHYSICAL_DEVICE_TYPE_CPU,
};

/*	VkVertexInputRate
*/
enum class E_vertex_input_rate{
e_vertex = VK_VERTEX_INPUT_RATE_VERTEX,
e_instance = VK_VERTEX_INPUT_RATE_INSTANCE,
};

/*	VkFormat
Vulkan format definitions*/
enum class E_format{
e_undefined = VK_FORMAT_UNDEFINED,
e_r4g4_unorm_pack8 = VK_FORMAT_R4G4_UNORM_PACK8,
e_r4g4b4a4_unorm_pack16 = VK_FORMAT_R4G4B4A4_UNORM_PACK16,
e_b4g4r4a4_unorm_pack16 = VK_FORMAT_B4G4R4A4_UNORM_PACK16,
e_r5g6b5_unorm_pack16 = VK_FORMAT_R5G6B5_UNORM_PACK16,
e_b5g6r5_unorm_pack16 = VK_FORMAT_B5G6R5_UNORM_PACK16,
e_r5g5b5a1_unorm_pack16 = VK_FORMAT_R5G5B5A1_UNORM_PACK16,
e_b5g5r5a1_unorm_pack16 = VK_FORMAT_B5G5R5A1_UNORM_PACK16,
e_a1r5g5b5_unorm_pack16 = VK_FORMAT_A1R5G5B5_UNORM_PACK16,
e_r8_unorm = VK_FORMAT_R8_UNORM,
e_r8_snorm = VK_FORMAT_R8_SNORM,
e_r8_uscaled = VK_FORMAT_R8_USCALED,
e_r8_sscaled = VK_FORMAT_R8_SSCALED,
e_r8_uint = VK_FORMAT_R8_UINT,
e_r8_sint = VK_FORMAT_R8_SINT,
e_r8_srgb = VK_FORMAT_R8_SRGB,
e_r8g8_unorm = VK_FORMAT_R8G8_UNORM,
e_r8g8_snorm = VK_FORMAT_R8G8_SNORM,
e_r8g8_uscaled = VK_FORMAT_R8G8_USCALED,
e_r8g8_sscaled = VK_FORMAT_R8G8_SSCALED,
e_r8g8_uint = VK_FORMAT_R8G8_UINT,
e_r8g8_sint = VK_FORMAT_R8G8_SINT,
e_r8g8_srgb = VK_FORMAT_R8G8_SRGB,
e_r8g8b8_unorm = VK_FORMAT_R8G8B8_UNORM,
e_r8g8b8_snorm = VK_FORMAT_R8G8B8_SNORM,
e_r8g8b8_uscaled = VK_FORMAT_R8G8B8_USCALED,
e_r8g8b8_sscaled = VK_FORMAT_R8G8B8_SSCALED,
e_r8g8b8_uint = VK_FORMAT_R8G8B8_UINT,
e_r8g8b8_sint = VK_FORMAT_R8G8B8_SINT,
e_r8g8b8_srgb = VK_FORMAT_R8G8B8_SRGB,
e_b8g8r8_unorm = VK_FORMAT_B8G8R8_UNORM,
e_b8g8r8_snorm = VK_FORMAT_B8G8R8_SNORM,
e_b8g8r8_uscaled = VK_FORMAT_B8G8R8_USCALED,
e_b8g8r8_sscaled = VK_FORMAT_B8G8R8_SSCALED,
e_b8g8r8_uint = VK_FORMAT_B8G8R8_UINT,
e_b8g8r8_sint = VK_FORMAT_B8G8R8_SINT,
e_b8g8r8_srgb = VK_FORMAT_B8G8R8_SRGB,
e_r8g8b8a8_unorm = VK_FORMAT_R8G8B8A8_UNORM,
e_r8g8b8a8_snorm = VK_FORMAT_R8G8B8A8_SNORM,
e_r8g8b8a8_uscaled = VK_FORMAT_R8G8B8A8_USCALED,
e_r8g8b8a8_sscaled = VK_FORMAT_R8G8B8A8_SSCALED,
e_r8g8b8a8_uint = VK_FORMAT_R8G8B8A8_UINT,
e_r8g8b8a8_sint = VK_FORMAT_R8G8B8A8_SINT,
e_r8g8b8a8_srgb = VK_FORMAT_R8G8B8A8_SRGB,
e_b8g8r8a8_unorm = VK_FORMAT_B8G8R8A8_UNORM,
e_b8g8r8a8_snorm = VK_FORMAT_B8G8R8A8_SNORM,
e_b8g8r8a8_uscaled = VK_FORMAT_B8G8R8A8_USCALED,
e_b8g8r8a8_sscaled = VK_FORMAT_B8G8R8A8_SSCALED,
e_b8g8r8a8_uint = VK_FORMAT_B8G8R8A8_UINT,
e_b8g8r8a8_sint = VK_FORMAT_B8G8R8A8_SINT,
e_b8g8r8a8_srgb = VK_FORMAT_B8G8R8A8_SRGB,
e_a8b8g8r8_unorm_pack32 = VK_FORMAT_A8B8G8R8_UNORM_PACK32,
e_a8b8g8r8_snorm_pack32 = VK_FORMAT_A8B8G8R8_SNORM_PACK32,
e_a8b8g8r8_uscaled_pack32 = VK_FORMAT_A8B8G8R8_USCALED_PACK32,
e_a8b8g8r8_sscaled_pack32 = VK_FORMAT_A8B8G8R8_SSCALED_PACK32,
e_a8b8g8r8_uint_pack32 = VK_FORMAT_A8B8G8R8_UINT_PACK32,
e_a8b8g8r8_sint_pack32 = VK_FORMAT_A8B8G8R8_SINT_PACK32,
e_a8b8g8r8_srgb_pack32 = VK_FORMAT_A8B8G8R8_SRGB_PACK32,
e_a2r10g10b10_unorm_pack32 = VK_FORMAT_A2R10G10B10_UNORM_PACK32,
e_a2r10g10b10_snorm_pack32 = VK_FORMAT_A2R10G10B10_SNORM_PACK32,
e_a2r10g10b10_uscaled_pack32 = VK_FORMAT_A2R10G10B10_USCALED_PACK32,
e_a2r10g10b10_sscaled_pack32 = VK_FORMAT_A2R10G10B10_SSCALED_PACK32,
e_a2r10g10b10_uint_pack32 = VK_FORMAT_A2R10G10B10_UINT_PACK32,
e_a2r10g10b10_sint_pack32 = VK_FORMAT_A2R10G10B10_SINT_PACK32,
e_a2b10g10r10_unorm_pack32 = VK_FORMAT_A2B10G10R10_UNORM_PACK32,
e_a2b10g10r10_snorm_pack32 = VK_FORMAT_A2B10G10R10_SNORM_PACK32,
e_a2b10g10r10_uscaled_pack32 = VK_FORMAT_A2B10G10R10_USCALED_PACK32,
e_a2b10g10r10_sscaled_pack32 = VK_FORMAT_A2B10G10R10_SSCALED_PACK32,
e_a2b10g10r10_uint_pack32 = VK_FORMAT_A2B10G10R10_UINT_PACK32,
e_a2b10g10r10_sint_pack32 = VK_FORMAT_A2B10G10R10_SINT_PACK32,
e_r16_unorm = VK_FORMAT_R16_UNORM,
e_r16_snorm = VK_FORMAT_R16_SNORM,
e_r16_uscaled = VK_FORMAT_R16_USCALED,
e_r16_sscaled = VK_FORMAT_R16_SSCALED,
e_r16_uint = VK_FORMAT_R16_UINT,
e_r16_sint = VK_FORMAT_R16_SINT,
e_r16_sfloat = VK_FORMAT_R16_SFLOAT,
e_r16g16_unorm = VK_FORMAT_R16G16_UNORM,
e_r16g16_snorm = VK_FORMAT_R16G16_SNORM,
e_r16g16_uscaled = VK_FORMAT_R16G16_USCALED,
e_r16g16_sscaled = VK_FORMAT_R16G16_SSCALED,
e_r16g16_uint = VK_FORMAT_R16G16_UINT,
e_r16g16_sint = VK_FORMAT_R16G16_SINT,
e_r16g16_sfloat = VK_FORMAT_R16G16_SFLOAT,
e_r16g16b16_unorm = VK_FORMAT_R16G16B16_UNORM,
e_r16g16b16_snorm = VK_FORMAT_R16G16B16_SNORM,
e_r16g16b16_uscaled = VK_FORMAT_R16G16B16_USCALED,
e_r16g16b16_sscaled = VK_FORMAT_R16G16B16_SSCALED,
e_r16g16b16_uint = VK_FORMAT_R16G16B16_UINT,
e_r16g16b16_sint = VK_FORMAT_R16G16B16_SINT,
e_r16g16b16_sfloat = VK_FORMAT_R16G16B16_SFLOAT,
e_r16g16b16a16_unorm = VK_FORMAT_R16G16B16A16_UNORM,
e_r16g16b16a16_snorm = VK_FORMAT_R16G16B16A16_SNORM,
e_r16g16b16a16_uscaled = VK_FORMAT_R16G16B16A16_USCALED,
e_r16g16b16a16_sscaled = VK_FORMAT_R16G16B16A16_SSCALED,
e_r16g16b16a16_uint = VK_FORMAT_R16G16B16A16_UINT,
e_r16g16b16a16_sint = VK_FORMAT_R16G16B16A16_SINT,
e_r16g16b16a16_sfloat = VK_FORMAT_R16G16B16A16_SFLOAT,
e_r32_uint = VK_FORMAT_R32_UINT,
e_r32_sint = VK_FORMAT_R32_SINT,
e_r32_sfloat = VK_FORMAT_R32_SFLOAT,
e_r32g32_uint = VK_FORMAT_R32G32_UINT,
e_r32g32_sint = VK_FORMAT_R32G32_SINT,
e_r32g32_sfloat = VK_FORMAT_R32G32_SFLOAT,
e_r32g32b32_uint = VK_FORMAT_R32G32B32_UINT,
e_r32g32b32_sint = VK_FORMAT_R32G32B32_SINT,
e_r32g32b32_sfloat = VK_FORMAT_R32G32B32_SFLOAT,
e_r32g32b32a32_uint = VK_FORMAT_R32G32B32A32_UINT,
e_r32g32b32a32_sint = VK_FORMAT_R32G32B32A32_SINT,
e_r32g32b32a32_sfloat = VK_FORMAT_R32G32B32A32_SFLOAT,
e_r64_uint = VK_FORMAT_R64_UINT,
e_r64_sint = VK_FORMAT_R64_SINT,
e_r64_sfloat = VK_FORMAT_R64_SFLOAT,
e_r64g64_uint = VK_FORMAT_R64G64_UINT,
e_r64g64_sint = VK_FORMAT_R64G64_SINT,
e_r64g64_sfloat = VK_FORMAT_R64G64_SFLOAT,
e_r64g64b64_uint = VK_FORMAT_R64G64B64_UINT,
e_r64g64b64_sint = VK_FORMAT_R64G64B64_SINT,
e_r64g64b64_sfloat = VK_FORMAT_R64G64B64_SFLOAT,
e_r64g64b64a64_uint = VK_FORMAT_R64G64B64A64_UINT,
e_r64g64b64a64_sint = VK_FORMAT_R64G64B64A64_SINT,
e_r64g64b64a64_sfloat = VK_FORMAT_R64G64B64A64_SFLOAT,
e_b10g11r11_ufloat_pack32 = VK_FORMAT_B10G11R11_UFLOAT_PACK32,
e_e5b9g9r9_ufloat_pack32 = VK_FORMAT_E5B9G9R9_UFLOAT_PACK32,
e_d16_unorm = VK_FORMAT_D16_UNORM,
e_x8_d24_unorm_pack32 = VK_FORMAT_X8_D24_UNORM_PACK32,
e_d32_sfloat = VK_FORMAT_D32_SFLOAT,
e_s8_uint = VK_FORMAT_S8_UINT,
e_d16_unorm_s8_uint = VK_FORMAT_D16_UNORM_S8_UINT,
e_d24_unorm_s8_uint = VK_FORMAT_D24_UNORM_S8_UINT,
e_d32_sfloat_s8_uint = VK_FORMAT_D32_SFLOAT_S8_UINT,
e_bc1_rgb_unorm_block = VK_FORMAT_BC1_RGB_UNORM_BLOCK,
e_bc1_rgb_srgb_block = VK_FORMAT_BC1_RGB_SRGB_BLOCK,
e_bc1_rgba_unorm_block = VK_FORMAT_BC1_RGBA_UNORM_BLOCK,
e_bc1_rgba_srgb_block = VK_FORMAT_BC1_RGBA_SRGB_BLOCK,
e_bc2_unorm_block = VK_FORMAT_BC2_UNORM_BLOCK,
e_bc2_srgb_block = VK_FORMAT_BC2_SRGB_BLOCK,
e_bc3_unorm_block = VK_FORMAT_BC3_UNORM_BLOCK,
e_bc3_srgb_block = VK_FORMAT_BC3_SRGB_BLOCK,
e_bc4_unorm_block = VK_FORMAT_BC4_UNORM_BLOCK,
e_bc4_snorm_block = VK_FORMAT_BC4_SNORM_BLOCK,
e_bc5_unorm_block = VK_FORMAT_BC5_UNORM_BLOCK,
e_bc5_snorm_block = VK_FORMAT_BC5_SNORM_BLOCK,
e_bc6h_ufloat_block = VK_FORMAT_BC6H_UFLOAT_BLOCK,
e_bc6h_sfloat_block = VK_FORMAT_BC6H_SFLOAT_BLOCK,
e_bc7_unorm_block = VK_FORMAT_BC7_UNORM_BLOCK,
e_bc7_srgb_block = VK_FORMAT_BC7_SRGB_BLOCK,
e_etc2_r8g8b8_unorm_block = VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK,
e_etc2_r8g8b8_srgb_block = VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK,
e_etc2_r8g8b8a1_unorm_block = VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK,
e_etc2_r8g8b8a1_srgb_block = VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK,
e_etc2_r8g8b8a8_unorm_block = VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK,
e_etc2_r8g8b8a8_srgb_block = VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK,
e_eac_r11_unorm_block = VK_FORMAT_EAC_R11_UNORM_BLOCK,
e_eac_r11_snorm_block = VK_FORMAT_EAC_R11_SNORM_BLOCK,
e_eac_r11g11_unorm_block = VK_FORMAT_EAC_R11G11_UNORM_BLOCK,
e_eac_r11g11_snorm_block = VK_FORMAT_EAC_R11G11_SNORM_BLOCK,
e_astc_4x4_unorm_block = VK_FORMAT_ASTC_4x4_UNORM_BLOCK,
e_astc_4x4_srgb_block = VK_FORMAT_ASTC_4x4_SRGB_BLOCK,
e_astc_5x4_unorm_block = VK_FORMAT_ASTC_5x4_UNORM_BLOCK,
e_astc_5x4_srgb_block = VK_FORMAT_ASTC_5x4_SRGB_BLOCK,
e_astc_5x5_unorm_block = VK_FORMAT_ASTC_5x5_UNORM_BLOCK,
e_astc_5x5_srgb_block = VK_FORMAT_ASTC_5x5_SRGB_BLOCK,
e_astc_6x5_unorm_block = VK_FORMAT_ASTC_6x5_UNORM_BLOCK,
e_astc_6x5_srgb_block = VK_FORMAT_ASTC_6x5_SRGB_BLOCK,
e_astc_6x6_unorm_block = VK_FORMAT_ASTC_6x6_UNORM_BLOCK,
e_astc_6x6_srgb_block = VK_FORMAT_ASTC_6x6_SRGB_BLOCK,
e_astc_8x5_unorm_block = VK_FORMAT_ASTC_8x5_UNORM_BLOCK,
e_astc_8x5_srgb_block = VK_FORMAT_ASTC_8x5_SRGB_BLOCK,
e_astc_8x6_unorm_block = VK_FORMAT_ASTC_8x6_UNORM_BLOCK,
e_astc_8x6_srgb_block = VK_FORMAT_ASTC_8x6_SRGB_BLOCK,
e_astc_8x8_unorm_block = VK_FORMAT_ASTC_8x8_UNORM_BLOCK,
e_astc_8x8_srgb_block = VK_FORMAT_ASTC_8x8_SRGB_BLOCK,
e_astc_10x5_unorm_block = VK_FORMAT_ASTC_10x5_UNORM_BLOCK,
e_astc_10x5_srgb_block = VK_FORMAT_ASTC_10x5_SRGB_BLOCK,
e_astc_10x6_unorm_block = VK_FORMAT_ASTC_10x6_UNORM_BLOCK,
e_astc_10x6_srgb_block = VK_FORMAT_ASTC_10x6_SRGB_BLOCK,
e_astc_10x8_unorm_block = VK_FORMAT_ASTC_10x8_UNORM_BLOCK,
e_astc_10x8_srgb_block = VK_FORMAT_ASTC_10x8_SRGB_BLOCK,
e_astc_10x10_unorm_block = VK_FORMAT_ASTC_10x10_UNORM_BLOCK,
e_astc_10x10_srgb_block = VK_FORMAT_ASTC_10x10_SRGB_BLOCK,
e_astc_12x10_unorm_block = VK_FORMAT_ASTC_12x10_UNORM_BLOCK,
e_astc_12x10_srgb_block = VK_FORMAT_ASTC_12x10_SRGB_BLOCK,
e_astc_12x12_unorm_block = VK_FORMAT_ASTC_12x12_UNORM_BLOCK,
e_astc_12x12_srgb_block = VK_FORMAT_ASTC_12x12_SRGB_BLOCK,
};

/*	VkStructureType
Structure type enumerant*/
enum class E_structure_type{
e_application_info = VK_STRUCTURE_TYPE_APPLICATION_INFO,
e_instance_create_info = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
e_device_queue_create_info = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
e_device_create_info = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
e_submit_info = VK_STRUCTURE_TYPE_SUBMIT_INFO,
e_memory_allocate_info = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,
e_mapped_memory_range = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,
e_bind_sparse_info = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO,
e_fence_create_info = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
e_semaphore_create_info = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO,
e_event_create_info = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO,
e_query_pool_create_info = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO,
e_buffer_create_info = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,
e_buffer_view_create_info = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,
e_image_create_info = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,
e_image_view_create_info = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,
e_shader_module_create_info = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,
e_pipeline_cache_create_info = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,
e_pipeline_shader_stage_create_info = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,
e_pipeline_vertex_input_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,
e_pipeline_input_assembly_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,
e_pipeline_tessellation_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,
e_pipeline_viewport_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,
e_pipeline_rasterization_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,
e_pipeline_multisample_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,
e_pipeline_depth_stencil_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO,
e_pipeline_color_blend_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO,
e_pipeline_dynamic_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,
e_graphics_pipeline_create_info = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
e_compute_pipeline_create_info = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,
e_pipeline_layout_create_info = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,
e_sampler_create_info = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,
e_descriptor_set_layout_create_info = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,
e_descriptor_pool_create_info = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,
e_descriptor_set_allocate_info = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,
e_write_descriptor_set = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET,
e_copy_descriptor_set = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET,
e_framebuffer_create_info = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,
e_render_pass_create_info = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,
e_command_pool_create_info = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
e_command_buffer_allocate_info = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
e_command_buffer_inheritance_info = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO,
e_command_buffer_begin_info = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,
e_render_pass_begin_info = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,
e_buffer_memory_barrier = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER,
e_image_memory_barrier = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
e_memory_barrier = VK_STRUCTURE_TYPE_MEMORY_BARRIER,
e_loader_instance_create_info = VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO,
e_loader_device_create_info = VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO,
};

/*	VkSubpassContents
*/
enum class E_subpass_contents{
e_inline = VK_SUBPASS_CONTENTS_INLINE,
e_secondary_command_buffers = VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS,
};

/*	VkResult
API result codes*/
enum class E_result{
evk_success = VK_SUCCESS,
evk_not_ready = VK_NOT_READY,
evk_timeout = VK_TIMEOUT,
evk_event_set = VK_EVENT_SET,
evk_event_reset = VK_EVENT_RESET,
evk_incomplete = VK_INCOMPLETE,
evk_error_out_of_host_memory = VK_ERROR_OUT_OF_HOST_MEMORY,
evk_error_out_of_device_memory = VK_ERROR_OUT_OF_DEVICE_MEMORY,
evk_error_initialization_failed = VK_ERROR_INITIALIZATION_FAILED,
evk_error_device_lost = VK_ERROR_DEVICE_LOST,
evk_error_memory_map_failed = VK_ERROR_MEMORY_MAP_FAILED,
evk_error_layer_not_present = VK_ERROR_LAYER_NOT_PRESENT,
evk_error_extension_not_present = VK_ERROR_EXTENSION_NOT_PRESENT,
evk_error_feature_not_present = VK_ERROR_FEATURE_NOT_PRESENT,
evk_error_incompatible_driver = VK_ERROR_INCOMPATIBLE_DRIVER,
evk_error_too_many_objects = VK_ERROR_TOO_MANY_OBJECTS,
evk_error_format_not_supported = VK_ERROR_FORMAT_NOT_SUPPORTED,
evk_error_fragmented_pool = VK_ERROR_FRAGMENTED_POOL,
};

/*	VkDynamicState
*/
enum class E_dynamic_state{
e_viewport = VK_DYNAMIC_STATE_VIEWPORT,
e_scissor = VK_DYNAMIC_STATE_SCISSOR,
e_line_width = VK_DYNAMIC_STATE_LINE_WIDTH,
e_depth_bias = VK_DYNAMIC_STATE_DEPTH_BIAS,
e_blend_constants = VK_DYNAMIC_STATE_BLEND_CONSTANTS,
e_depth_bounds = VK_DYNAMIC_STATE_DEPTH_BOUNDS,
e_stencil_compare_mask = VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK,
e_stencil_write_mask = VK_DYNAMIC_STATE_STENCIL_WRITE_MASK,
e_stencil_reference = VK_DYNAMIC_STATE_STENCIL_REFERENCE,
};

/*	VkDescriptorUpdateTemplateType
*/
enum class E_descriptor_update_template_type{
e_descriptor_set = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,
};

/*	VkObjectType
Enums to track objects of various types*/
enum class E_object_type{
e_unknown = VK_OBJECT_TYPE_UNKNOWN,
e_instance = VK_OBJECT_TYPE_INSTANCE,
e_physical_device = VK_OBJECT_TYPE_PHYSICAL_DEVICE,
e_device = VK_OBJECT_TYPE_DEVICE,
e_queue = VK_OBJECT_TYPE_QUEUE,
e_semaphore = VK_OBJECT_TYPE_SEMAPHORE,
e_command_buffer = VK_OBJECT_TYPE_COMMAND_BUFFER,
e_fence = VK_OBJECT_TYPE_FENCE,
e_device_memory = VK_OBJECT_TYPE_DEVICE_MEMORY,
e_buffer = VK_OBJECT_TYPE_BUFFER,
e_image = VK_OBJECT_TYPE_IMAGE,
e_event = VK_OBJECT_TYPE_EVENT,
e_query_pool = VK_OBJECT_TYPE_QUERY_POOL,
e_buffer_view = VK_OBJECT_TYPE_BUFFER_VIEW,
e_image_view = VK_OBJECT_TYPE_IMAGE_VIEW,
e_shader_module = VK_OBJECT_TYPE_SHADER_MODULE,
e_pipeline_cache = VK_OBJECT_TYPE_PIPELINE_CACHE,
e_pipeline_layout = VK_OBJECT_TYPE_PIPELINE_LAYOUT,
e_render_pass = VK_OBJECT_TYPE_RENDER_PASS,
e_pipeline = VK_OBJECT_TYPE_PIPELINE,
e_descriptor_set_layout = VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT,
e_sampler = VK_OBJECT_TYPE_SAMPLER,
e_descriptor_pool = VK_OBJECT_TYPE_DESCRIPTOR_POOL,
e_descriptor_set = VK_OBJECT_TYPE_DESCRIPTOR_SET,
e_framebuffer = VK_OBJECT_TYPE_FRAMEBUFFER,
e_command_pool = VK_OBJECT_TYPE_COMMAND_POOL,
};

/*	VkPresentModeKHR
*/
enum class E_present_mode_KHR{
e_immediate_khr = VK_PRESENT_MODE_IMMEDIATE_KHR,
e_mailbox_khr = VK_PRESENT_MODE_MAILBOX_KHR,
e_fifo_khr = VK_PRESENT_MODE_FIFO_KHR,
e_fifo_relaxed_khr = VK_PRESENT_MODE_FIFO_RELAXED_KHR,
};

/*	VkColorSpaceKHR
*/
enum class E_color_space_KHR{
e_srgb_nonlinear_khr = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,
evk_colorspace_srgb_nonlinear_khr = VK_COLORSPACE_SRGB_NONLINEAR_KHR,
};

/*	VkDebugReportObjectTypeEXT
*/
enum class E_debug_report_object_type_EXT{
e_unknown_ext = VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT,
e_instance_ext = VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT,
e_physical_device_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT,
e_device_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT,
e_queue_ext = VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT,
e_semaphore_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT,
e_command_buffer_ext = VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT,
e_fence_ext = VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT,
e_device_memory_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT,
e_buffer_ext = VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT,
e_image_ext = VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT,
e_event_ext = VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT,
e_query_pool_ext = VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT,
e_buffer_view_ext = VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT,
e_image_view_ext = VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT,
e_shader_module_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT,
e_pipeline_cache_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT,
e_pipeline_layout_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT,
e_render_pass_ext = VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT,
e_pipeline_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT,
e_descriptor_set_layout_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT,
e_sampler_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT,
e_descriptor_pool_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT,
e_descriptor_set_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT,
e_framebuffer_ext = VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT,
e_command_pool_ext = VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT,
e_surface_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT,
e_swapchain_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT,
e_debug_report_callback_ext_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT,
e_debug_report_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT,
e_display_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT,
e_display_mode_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT,
e_object_table_nvx_ext = VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT,
e_indirect_commands_layout_nvx_ext = VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT,
e_validation_cache_ext_ext = VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT,
e_validation_cache_ext = VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT,
};

/*	VkRasterizationOrderAMD
*/
enum class E_rasterization_order_AMD{
e_strict_amd = VK_RASTERIZATION_ORDER_STRICT_AMD,
e_relaxed_amd = VK_RASTERIZATION_ORDER_RELAXED_AMD,
};

/*	VkValidationCheckEXT
*/
enum class E_validation_check_EXT{
e_all_ext = VK_VALIDATION_CHECK_ALL_EXT,
e_shaders_ext = VK_VALIDATION_CHECK_SHADERS_EXT,
};

/*	VkIndirectCommandsTokenTypeNVX
*/
enum class E_indirect_commands_token_type_NVX{
e_pipeline_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX,
e_descriptor_set_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX,
e_index_buffer_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX,
e_vertex_buffer_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX,
e_push_constant_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX,
e_draw_indexed_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX,
e_draw_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX,
e_dispatch_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX,
};

/*	VkObjectEntryTypeNVX
*/
enum class E_object_entry_type_NVX{
e_descriptor_set_nvx = VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX,
e_pipeline_nvx = VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX,
e_index_buffer_nvx = VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX,
e_vertex_buffer_nvx = VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX,
e_push_constant_nvx = VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX,
};

/*	VkDisplayPowerStateEXT
*/
enum class E_display_power_state_EXT{
e_off_ext = VK_DISPLAY_POWER_STATE_OFF_EXT,
e_suspend_ext = VK_DISPLAY_POWER_STATE_SUSPEND_EXT,
e_on_ext = VK_DISPLAY_POWER_STATE_ON_EXT,
};

/*	VkDeviceEventTypeEXT
*/
enum class E_device_event_type_EXT{
e_display_hotplug_ext = VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT,
};

/*	VkDisplayEventTypeEXT
*/
enum class E_display_event_type_EXT{
e_first_pixel_out_ext = VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT,
};

/*	VkViewportCoordinateSwizzleNV
*/
enum class E_viewport_coordinate_swizzle_NV{
e_positive_x_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV,
e_negative_x_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV,
e_positive_y_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV,
e_negative_y_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV,
e_positive_z_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV,
e_negative_z_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV,
e_positive_w_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV,
e_negative_w_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV,
};

/*	VkDiscardRectangleModeEXT
*/
enum class E_discard_rectangle_mode_EXT{
e_inclusive_ext = VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT,
e_exclusive_ext = VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT,
};

/*	VkPointClippingBehavior
*/
enum class E_point_clipping_behavior{
e_all_clip_planes = VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES,
e_user_clip_planes_only = VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY,
};

/*	VkSamplerReductionModeEXT
*/
enum class E_sampler_reduction_mode_EXT{
e_weighted_average_ext = VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT,
e_min_ext = VK_SAMPLER_REDUCTION_MODE_MIN_EXT,
e_max_ext = VK_SAMPLER_REDUCTION_MODE_MAX_EXT,
};

/*	VkTessellationDomainOrigin
*/
enum class E_tessellation_domain_origin{
e_upper_left = VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT,
e_lower_left = VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT,
};

/*	VkSamplerYcbcrModelConversion
*/
enum class E_sampler_ycbcr_model_conversion{
e_rgb_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY,
e_ycbcr_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY,
e_ycbcr_709 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709,
e_ycbcr_601 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601,
e_ycbcr_2020 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020,
};

/*	VkSamplerYcbcrRange
*/
enum class E_sampler_ycbcr_range{
e_itu_full = VK_SAMPLER_YCBCR_RANGE_ITU_FULL,
e_itu_narrow = VK_SAMPLER_YCBCR_RANGE_ITU_NARROW,
};

/*	VkChromaLocation
*/
enum class E_chroma_location{
e_cosited_even = VK_CHROMA_LOCATION_COSITED_EVEN,
e_midpoint = VK_CHROMA_LOCATION_MIDPOINT,
};

/*	VkBlendOverlapEXT
*/
enum class E_blend_overlap_EXT{
e_uncorrelated_ext = VK_BLEND_OVERLAP_UNCORRELATED_EXT,
e_disjoint_ext = VK_BLEND_OVERLAP_DISJOINT_EXT,
e_conjoint_ext = VK_BLEND_OVERLAP_CONJOINT_EXT,
};

/*	VkCoverageModulationModeNV
*/
enum class E_coverage_modulation_mode_NV{
e_none_nv = VK_COVERAGE_MODULATION_MODE_NONE_NV,
e_rgb_nv = VK_COVERAGE_MODULATION_MODE_RGB_NV,
e_alpha_nv = VK_COVERAGE_MODULATION_MODE_ALPHA_NV,
e_rgba_nv = VK_COVERAGE_MODULATION_MODE_RGBA_NV,
};

/*	VkValidationCacheHeaderVersionEXT
*/
enum class E_validation_cache_header_version_EXT{
e_one_ext = VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT,
};

/*	VkShaderInfoTypeAMD
*/
enum class E_shader_info_type_AMD{
e_statistics_amd = VK_SHADER_INFO_TYPE_STATISTICS_AMD,
e_binary_amd = VK_SHADER_INFO_TYPE_BINARY_AMD,
e_disassembly_amd = VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD,
};

/*	VkQueueGlobalPriorityEXT
*/
enum class E_queue_global_priority_EXT{
e_low_ext = VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT,
e_medium_ext = VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT,
e_high_ext = VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT,
e_realtime_ext = VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT,
};

/*	VkConservativeRasterizationModeEXT
*/
enum class E_conservative_rasterization_mode_EXT{
e_disabled_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT,
e_overestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT,
e_underestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT,
};

/*	VkVendorId
*/
enum class E_vendor_id{
e_viv = VK_VENDOR_ID_VIV,
e_vsi = VK_VENDOR_ID_VSI,
e_kazan = VK_VENDOR_ID_KAZAN,
};

/*	VkDriverIdKHR
*/
enum class E_driver_id_KHR{
#if 0
e_amd_proprietary_khr = VK_DRIVER_ID_AMD_PROPRIETARY_KHR,
e_amd_open_source_khr = VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR,
e_mesa_radv_khr = VK_DRIVER_ID_MESA_RADV_KHR,
e_nvidia_proprietary_khr = VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR,
e_intel_proprietary_windows_khr = VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR,
e_intel_open_source_mesa_khr = VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR,
e_imagination_proprietary_khr = VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR,
e_qualcomm_proprietary_khr = VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR,
e_arm_proprietary_khr = VK_DRIVER_ID_ARM_PROPRIETARY_KHR,
#endif 

};

/*	VkShadingRatePaletteEntryNV
*/
enum class E_shading_rate_palette_entry_NV{
e_no_invocations_nv = VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV,
e_16_invocations_per_pixel_nv = VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV,
e_8_invocations_per_pixel_nv = VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV,
e_4_invocations_per_pixel_nv = VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV,
e_2_invocations_per_pixel_nv = VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV,
e_1_invocation_per_pixel_nv = VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV,
e_1_invocation_per_2x1_pixels_nv = VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV,
e_1_invocation_per_1x2_pixels_nv = VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV,
e_1_invocation_per_2x2_pixels_nv = VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV,
e_1_invocation_per_4x2_pixels_nv = VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV,
e_1_invocation_per_2x4_pixels_nv = VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV,
e_1_invocation_per_4x4_pixels_nv = VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV,
};

/*	VkCoarseSampleOrderTypeNV
*/
enum class E_coarse_sample_order_type_NV{
e_default_nv = VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV,
e_custom_nv = VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV,
e_pixel_major_nv = VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV,
e_sample_major_nv = VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV,
};

/*	VkCopyAccelerationStructureModeNVX
*/
enum class E_copy_acceleration_structure_mode_NVX{
e_clone_nvx = VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NVX,
e_compact_nvx = VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NVX,
};

/*	VkAccelerationStructureTypeNVX
*/
enum class E_acceleration_structure_type_NVX{
e_top_level_nvx = VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NVX,
e_bottom_level_nvx = VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NVX,
};

/*	VkGeometryTypeNVX
*/
enum class E_geometry_type_NVX{
e_triangles_nvx = VK_GEOMETRY_TYPE_TRIANGLES_NVX,
e_aabbs_nvx = VK_GEOMETRY_TYPE_AABBS_NVX,
};


}}

