#pragma once
#include "vulkan/vulkan.h"
#include "common.h"
#include <array>

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

/*	VkCullModeFlagBits*/
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
F_cull_mode():flag(0){}
F_cull_mode(B bits_):flag(static_cast<int>(bits_)){}
F_cull_mode(F_cull_mode const& flag_):flag(flag_.flag){}
F_cull_mode(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_cull_mode& operator = (F_cull_mode flag_){flag = flag_.flag;return *this;}
F_cull_mode operator | (B bit_){return flag | static_cast<int>(bit_);}
F_cull_mode& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_cull_mode operator | (F_cull_mode flag_){return flag | flag_.flag;}
F_cull_mode& operator |= (F_cull_mode flag_){flag |= flag_.flag;return *this;}
F_cull_mode operator & (F_cull_mode flag_){return flag & flag_.flag;}
F_cull_mode& operator &= (F_cull_mode flag_){flag &= flag_.flag;return *this;}
F_cull_mode operator ^ (F_cull_mode flag_){return flag ^ flag_.flag;}
F_cull_mode& operator ^= (F_cull_mode flag_){flag ^= flag_.flag;return *this;}
F_cull_mode operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_cull_mode flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_cull_mode flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_cull_mode& clear(){flag = 0;return *this;}
F_cull_mode(int flags_):flag(flags_) {}
F_cull_mode all_flags(){
return b_none | b_front | b_back | b_front_and_back;
}
F_cull_mode& on_none(){ flag |= b_none; return *this; }
F_cull_mode& off_none(){ flag &= ~b_none; return *this; }
F_cull_mode& on_front(){ flag |= b_front; return *this; }
F_cull_mode& off_front(){ flag &= ~b_front; return *this; }
F_cull_mode& on_back(){ flag |= b_back; return *this; }
F_cull_mode& off_back(){ flag &= ~b_back; return *this; }
F_cull_mode& on_front_and_back(){ flag |= b_front_and_back; return *this; }
F_cull_mode& off_front_and_back(){ flag &= ~b_front_and_back; return *this; }
};
F_cull_mode inline operator|(F_cull_mode::B bit1_, F_cull_mode::B bit2_){F_cull_mode flags(bit1_);return flags | bit2_;}

/*	VkQueueFlagBits*/
class F_queue {
private:
F_queue(int flag_);
public:
int flag;
enum B{
/*Queue supports graphics operations*/
	b_graphics = VK_QUEUE_GRAPHICS_BIT,
/*Queue supports compute operations*/
	b_compute = VK_QUEUE_COMPUTE_BIT,
/*Queue supports transfer operations*/
	b_transfer = VK_QUEUE_TRANSFER_BIT,
/*Queue supports sparse resource memory management operations*/
	b_sparse_binding = VK_QUEUE_SPARSE_BINDING_BIT,
};
F_queue():flag(0){}
F_queue(B bits_):flag(static_cast<int>(bits_)){}
F_queue(F_queue const& flag_):flag(flag_.flag){}
F_queue(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_queue& operator = (F_queue flag_){flag = flag_.flag;return *this;}
F_queue operator | (B bit_){return flag | static_cast<int>(bit_);}
F_queue& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_queue operator | (F_queue flag_){return flag | flag_.flag;}
F_queue& operator |= (F_queue flag_){flag |= flag_.flag;return *this;}
F_queue operator & (F_queue flag_){return flag & flag_.flag;}
F_queue& operator &= (F_queue flag_){flag &= flag_.flag;return *this;}
F_queue operator ^ (F_queue flag_){return flag ^ flag_.flag;}
F_queue& operator ^= (F_queue flag_){flag ^= flag_.flag;return *this;}
F_queue operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_queue flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_queue flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_queue& clear(){flag = 0;return *this;}
F_queue(int flags_):flag(flags_) {}
F_queue all_flags(){
return b_graphics | b_compute | b_transfer | b_sparse_binding;
}
F_queue& on_graphics(){ flag |= b_graphics; return *this; }
F_queue& off_graphics(){ flag &= ~b_graphics; return *this; }
F_queue& on_compute(){ flag |= b_compute; return *this; }
F_queue& off_compute(){ flag &= ~b_compute; return *this; }
F_queue& on_transfer(){ flag |= b_transfer; return *this; }
F_queue& off_transfer(){ flag &= ~b_transfer; return *this; }
F_queue& on_sparse_binding(){ flag |= b_sparse_binding; return *this; }
F_queue& off_sparse_binding(){ flag &= ~b_sparse_binding; return *this; }
};
F_queue inline operator|(F_queue::B bit1_, F_queue::B bit2_){F_queue flags(bit1_);return flags | bit2_;}

/*	VkRenderPassCreateFlagBits*/
using F_render_pass_create = 
			VkRenderPassCreateFlagBits;

/*	VkDeviceQueueCreateFlagBits*/
using F_device_queue_create = 
			VkDeviceQueueCreateFlagBits;

/*	VkMemoryPropertyFlagBits*/
class F_memory_property {
private:
F_memory_property(int flag_);
public:
int flag;
enum B{
/*If otherwise stated, then allocate memory on device*/
	b_device_local = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
/*Memory is mappable by host*/
	b_host_visible = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT,
/*Memory will have i/o coherency. If not set, application may need to use vkFlushMappedMemoryRanges and vkInvalidateMappedMemoryRanges to flush/invalidate host cache*/
	b_host_coherent = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
/*Memory will be cached by the host*/
	b_host_cached = VK_MEMORY_PROPERTY_HOST_CACHED_BIT,
/*Memory may be allocated by the driver when it is required*/
	b_lazily_allocated = VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT,
};
F_memory_property():flag(0){}
F_memory_property(B bits_):flag(static_cast<int>(bits_)){}
F_memory_property(F_memory_property const& flag_):flag(flag_.flag){}
F_memory_property(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_property& operator = (F_memory_property flag_){flag = flag_.flag;return *this;}
F_memory_property operator | (B bit_){return flag | static_cast<int>(bit_);}
F_memory_property& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_property operator | (F_memory_property flag_){return flag | flag_.flag;}
F_memory_property& operator |= (F_memory_property flag_){flag |= flag_.flag;return *this;}
F_memory_property operator & (F_memory_property flag_){return flag & flag_.flag;}
F_memory_property& operator &= (F_memory_property flag_){flag &= flag_.flag;return *this;}
F_memory_property operator ^ (F_memory_property flag_){return flag ^ flag_.flag;}
F_memory_property& operator ^= (F_memory_property flag_){flag ^= flag_.flag;return *this;}
F_memory_property operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_memory_property flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_memory_property flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_memory_property& clear(){flag = 0;return *this;}
F_memory_property(int flags_):flag(flags_) {}
F_memory_property all_flags(){
return b_device_local | b_host_visible | b_host_coherent | b_host_cached | b_lazily_allocated;
}
F_memory_property& on_device_local(){ flag |= b_device_local; return *this; }
F_memory_property& off_device_local(){ flag &= ~b_device_local; return *this; }
F_memory_property& on_host_visible(){ flag |= b_host_visible; return *this; }
F_memory_property& off_host_visible(){ flag &= ~b_host_visible; return *this; }
F_memory_property& on_host_coherent(){ flag |= b_host_coherent; return *this; }
F_memory_property& off_host_coherent(){ flag &= ~b_host_coherent; return *this; }
F_memory_property& on_host_cached(){ flag |= b_host_cached; return *this; }
F_memory_property& off_host_cached(){ flag &= ~b_host_cached; return *this; }
F_memory_property& on_lazily_allocated(){ flag |= b_lazily_allocated; return *this; }
F_memory_property& off_lazily_allocated(){ flag &= ~b_lazily_allocated; return *this; }
};
F_memory_property inline operator|(F_memory_property::B bit1_, F_memory_property::B bit2_){F_memory_property flags(bit1_);return flags | bit2_;}

/*	VkMemoryHeapFlagBits*/
class F_memory_heap {
private:
F_memory_heap(int flag_);
public:
int flag;
enum B{
/*If set, heap represents device memory*/
	b_device_local = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT,
};
F_memory_heap():flag(0){}
F_memory_heap(B bits_):flag(static_cast<int>(bits_)){}
F_memory_heap(F_memory_heap const& flag_):flag(flag_.flag){}
F_memory_heap(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_heap& operator = (F_memory_heap flag_){flag = flag_.flag;return *this;}
F_memory_heap operator | (B bit_){return flag | static_cast<int>(bit_);}
F_memory_heap& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_heap operator | (F_memory_heap flag_){return flag | flag_.flag;}
F_memory_heap& operator |= (F_memory_heap flag_){flag |= flag_.flag;return *this;}
F_memory_heap operator & (F_memory_heap flag_){return flag & flag_.flag;}
F_memory_heap& operator &= (F_memory_heap flag_){flag &= flag_.flag;return *this;}
F_memory_heap operator ^ (F_memory_heap flag_){return flag ^ flag_.flag;}
F_memory_heap& operator ^= (F_memory_heap flag_){flag ^= flag_.flag;return *this;}
F_memory_heap operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_memory_heap flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_memory_heap flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_memory_heap& clear(){flag = 0;return *this;}
F_memory_heap(int flags_):flag(flags_) {}
F_memory_heap all_flags(){
return b_device_local;
}
F_memory_heap& on_device_local(){ flag |= b_device_local; return *this; }
F_memory_heap& off_device_local(){ flag &= ~b_device_local; return *this; }
};
F_memory_heap inline operator|(F_memory_heap::B bit1_, F_memory_heap::B bit2_){F_memory_heap flags(bit1_);return flags | bit2_;}

/*	VkAccessFlagBits*/
class F_access {
private:
F_access(int flag_);
public:
int flag;
enum B{
/*Controls coherency of indirect command reads*/
	b_indirect_command_read = VK_ACCESS_INDIRECT_COMMAND_READ_BIT,
/*Controls coherency of index reads*/
	b_index_read = VK_ACCESS_INDEX_READ_BIT,
/*Controls coherency of vertex attribute reads*/
	b_vertex_attribute_read = VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT,
/*Controls coherency of uniform buffer reads*/
	b_uniform_read = VK_ACCESS_UNIFORM_READ_BIT,
/*Controls coherency of input attachment reads*/
	b_input_attachment_read = VK_ACCESS_INPUT_ATTACHMENT_READ_BIT,
/*Controls coherency of shader reads*/
	b_shader_read = VK_ACCESS_SHADER_READ_BIT,
/*Controls coherency of shader writes*/
	b_shader_write = VK_ACCESS_SHADER_WRITE_BIT,
/*Controls coherency of color attachment reads*/
	b_color_attachment_read = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT,
/*Controls coherency of color attachment writes*/
	b_color_attachment_write = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
/*Controls coherency of depth/stencil attachment reads*/
	b_depth_stencil_attachment_read = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT,
/*Controls coherency of depth/stencil attachment writes*/
	b_depth_stencil_attachment_write = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT,
/*Controls coherency of transfer reads*/
	b_transfer_read = VK_ACCESS_TRANSFER_READ_BIT,
/*Controls coherency of transfer writes*/
	b_transfer_write = VK_ACCESS_TRANSFER_WRITE_BIT,
/*Controls coherency of host reads*/
	b_host_read = VK_ACCESS_HOST_READ_BIT,
/*Controls coherency of host writes*/
	b_host_write = VK_ACCESS_HOST_WRITE_BIT,
/*Controls coherency of memory reads*/
	b_memory_read = VK_ACCESS_MEMORY_READ_BIT,
/*Controls coherency of memory writes*/
	b_memory_write = VK_ACCESS_MEMORY_WRITE_BIT,
};
F_access():flag(0){}
F_access(B bits_):flag(static_cast<int>(bits_)){}
F_access(F_access const& flag_):flag(flag_.flag){}
F_access(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_access& operator = (F_access flag_){flag = flag_.flag;return *this;}
F_access operator | (B bit_){return flag | static_cast<int>(bit_);}
F_access& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_access operator | (F_access flag_){return flag | flag_.flag;}
F_access& operator |= (F_access flag_){flag |= flag_.flag;return *this;}
F_access operator & (F_access flag_){return flag & flag_.flag;}
F_access& operator &= (F_access flag_){flag &= flag_.flag;return *this;}
F_access operator ^ (F_access flag_){return flag ^ flag_.flag;}
F_access& operator ^= (F_access flag_){flag ^= flag_.flag;return *this;}
F_access operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_access flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_access flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_access& clear(){flag = 0;return *this;}
F_access(int flags_):flag(flags_) {}
F_access all_flags(){
return b_indirect_command_read | b_index_read | b_vertex_attribute_read | b_uniform_read | b_input_attachment_read | b_shader_read | b_shader_write | b_color_attachment_read | b_color_attachment_write | b_depth_stencil_attachment_read | b_depth_stencil_attachment_write | b_transfer_read | b_transfer_write | b_host_read | b_host_write | b_memory_read | b_memory_write;
}
F_access& on_indirect_command_read(){ flag |= b_indirect_command_read; return *this; }
F_access& off_indirect_command_read(){ flag &= ~b_indirect_command_read; return *this; }
F_access& on_index_read(){ flag |= b_index_read; return *this; }
F_access& off_index_read(){ flag &= ~b_index_read; return *this; }
F_access& on_vertex_attribute_read(){ flag |= b_vertex_attribute_read; return *this; }
F_access& off_vertex_attribute_read(){ flag &= ~b_vertex_attribute_read; return *this; }
F_access& on_uniform_read(){ flag |= b_uniform_read; return *this; }
F_access& off_uniform_read(){ flag &= ~b_uniform_read; return *this; }
F_access& on_input_attachment_read(){ flag |= b_input_attachment_read; return *this; }
F_access& off_input_attachment_read(){ flag &= ~b_input_attachment_read; return *this; }
F_access& on_shader_read(){ flag |= b_shader_read; return *this; }
F_access& off_shader_read(){ flag &= ~b_shader_read; return *this; }
F_access& on_shader_write(){ flag |= b_shader_write; return *this; }
F_access& off_shader_write(){ flag &= ~b_shader_write; return *this; }
F_access& on_color_attachment_read(){ flag |= b_color_attachment_read; return *this; }
F_access& off_color_attachment_read(){ flag &= ~b_color_attachment_read; return *this; }
F_access& on_color_attachment_write(){ flag |= b_color_attachment_write; return *this; }
F_access& off_color_attachment_write(){ flag &= ~b_color_attachment_write; return *this; }
F_access& on_depth_stencil_attachment_read(){ flag |= b_depth_stencil_attachment_read; return *this; }
F_access& off_depth_stencil_attachment_read(){ flag &= ~b_depth_stencil_attachment_read; return *this; }
F_access& on_depth_stencil_attachment_write(){ flag |= b_depth_stencil_attachment_write; return *this; }
F_access& off_depth_stencil_attachment_write(){ flag &= ~b_depth_stencil_attachment_write; return *this; }
F_access& on_transfer_read(){ flag |= b_transfer_read; return *this; }
F_access& off_transfer_read(){ flag &= ~b_transfer_read; return *this; }
F_access& on_transfer_write(){ flag |= b_transfer_write; return *this; }
F_access& off_transfer_write(){ flag &= ~b_transfer_write; return *this; }
F_access& on_host_read(){ flag |= b_host_read; return *this; }
F_access& off_host_read(){ flag &= ~b_host_read; return *this; }
F_access& on_host_write(){ flag |= b_host_write; return *this; }
F_access& off_host_write(){ flag &= ~b_host_write; return *this; }
F_access& on_memory_read(){ flag |= b_memory_read; return *this; }
F_access& off_memory_read(){ flag &= ~b_memory_read; return *this; }
F_access& on_memory_write(){ flag |= b_memory_write; return *this; }
F_access& off_memory_write(){ flag &= ~b_memory_write; return *this; }
};
F_access inline operator|(F_access::B bit1_, F_access::B bit2_){F_access flags(bit1_);return flags | bit2_;}

/*	VkBufferUsageFlagBits*/
class F_buffer_usage {
private:
F_buffer_usage(int flag_);
public:
int flag;
enum B{
/*Can be used as a source of transfer operations*/
	b_transfer_src = VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
/*Can be used as a destination of transfer operations*/
	b_transfer_dst = VK_BUFFER_USAGE_TRANSFER_DST_BIT,
/*Can be used as TBO*/
	b_uniform_texel_buffer = VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT,
/*Can be used as IBO*/
	b_storage_texel_buffer = VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT,
/*Can be used as UBO*/
	b_uniform_buffer = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
/*Can be used as SSBO*/
	b_storage_buffer = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,
/*Can be used as source of fixed-function index fetch (index buffer)*/
	b_index_buffer = VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
/*Can be used as source of fixed-function vertex fetch (VBO)*/
	b_vertex_buffer = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
/*Can be the source of indirect parameters (e.g. indirect buffer, parameter buffer)*/
	b_indirect_buffer = VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT,
};
F_buffer_usage():flag(0){}
F_buffer_usage(B bits_):flag(static_cast<int>(bits_)){}
F_buffer_usage(F_buffer_usage const& flag_):flag(flag_.flag){}
F_buffer_usage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_buffer_usage& operator = (F_buffer_usage flag_){flag = flag_.flag;return *this;}
F_buffer_usage operator | (B bit_){return flag | static_cast<int>(bit_);}
F_buffer_usage& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_buffer_usage operator | (F_buffer_usage flag_){return flag | flag_.flag;}
F_buffer_usage& operator |= (F_buffer_usage flag_){flag |= flag_.flag;return *this;}
F_buffer_usage operator & (F_buffer_usage flag_){return flag & flag_.flag;}
F_buffer_usage& operator &= (F_buffer_usage flag_){flag &= flag_.flag;return *this;}
F_buffer_usage operator ^ (F_buffer_usage flag_){return flag ^ flag_.flag;}
F_buffer_usage& operator ^= (F_buffer_usage flag_){flag ^= flag_.flag;return *this;}
F_buffer_usage operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_buffer_usage flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_buffer_usage flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_buffer_usage& clear(){flag = 0;return *this;}
F_buffer_usage(int flags_):flag(flags_) {}
F_buffer_usage all_flags(){
return b_transfer_src | b_transfer_dst | b_uniform_texel_buffer | b_storage_texel_buffer | b_uniform_buffer | b_storage_buffer | b_index_buffer | b_vertex_buffer | b_indirect_buffer;
}
F_buffer_usage& on_transfer_src(){ flag |= b_transfer_src; return *this; }
F_buffer_usage& off_transfer_src(){ flag &= ~b_transfer_src; return *this; }
F_buffer_usage& on_transfer_dst(){ flag |= b_transfer_dst; return *this; }
F_buffer_usage& off_transfer_dst(){ flag &= ~b_transfer_dst; return *this; }
F_buffer_usage& on_uniform_texel_buffer(){ flag |= b_uniform_texel_buffer; return *this; }
F_buffer_usage& off_uniform_texel_buffer(){ flag &= ~b_uniform_texel_buffer; return *this; }
F_buffer_usage& on_storage_texel_buffer(){ flag |= b_storage_texel_buffer; return *this; }
F_buffer_usage& off_storage_texel_buffer(){ flag &= ~b_storage_texel_buffer; return *this; }
F_buffer_usage& on_uniform_buffer(){ flag |= b_uniform_buffer; return *this; }
F_buffer_usage& off_uniform_buffer(){ flag &= ~b_uniform_buffer; return *this; }
F_buffer_usage& on_storage_buffer(){ flag |= b_storage_buffer; return *this; }
F_buffer_usage& off_storage_buffer(){ flag &= ~b_storage_buffer; return *this; }
F_buffer_usage& on_index_buffer(){ flag |= b_index_buffer; return *this; }
F_buffer_usage& off_index_buffer(){ flag &= ~b_index_buffer; return *this; }
F_buffer_usage& on_vertex_buffer(){ flag |= b_vertex_buffer; return *this; }
F_buffer_usage& off_vertex_buffer(){ flag &= ~b_vertex_buffer; return *this; }
F_buffer_usage& on_indirect_buffer(){ flag |= b_indirect_buffer; return *this; }
F_buffer_usage& off_indirect_buffer(){ flag &= ~b_indirect_buffer; return *this; }
};
F_buffer_usage inline operator|(F_buffer_usage::B bit1_, F_buffer_usage::B bit2_){F_buffer_usage flags(bit1_);return flags | bit2_;}

/*	VkBufferCreateFlagBits*/
class F_buffer_create {
private:
F_buffer_create(int flag_);
public:
int flag;
enum B{
/*Buffer should support sparse backing*/
	b_sparse_binding = VK_BUFFER_CREATE_SPARSE_BINDING_BIT,
/*Buffer should support sparse backing with partial residency*/
	b_sparse_residency = VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT,
/*Buffer should support constent data access to physical memory ranges mapped into multiple locations of sparse buffers*/
	b_sparse_aliased = VK_BUFFER_CREATE_SPARSE_ALIASED_BIT,
};
F_buffer_create():flag(0){}
F_buffer_create(B bits_):flag(static_cast<int>(bits_)){}
F_buffer_create(F_buffer_create const& flag_):flag(flag_.flag){}
F_buffer_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_buffer_create& operator = (F_buffer_create flag_){flag = flag_.flag;return *this;}
F_buffer_create operator | (B bit_){return flag | static_cast<int>(bit_);}
F_buffer_create& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_buffer_create operator | (F_buffer_create flag_){return flag | flag_.flag;}
F_buffer_create& operator |= (F_buffer_create flag_){flag |= flag_.flag;return *this;}
F_buffer_create operator & (F_buffer_create flag_){return flag & flag_.flag;}
F_buffer_create& operator &= (F_buffer_create flag_){flag &= flag_.flag;return *this;}
F_buffer_create operator ^ (F_buffer_create flag_){return flag ^ flag_.flag;}
F_buffer_create& operator ^= (F_buffer_create flag_){flag ^= flag_.flag;return *this;}
F_buffer_create operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_buffer_create flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_buffer_create flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_buffer_create& clear(){flag = 0;return *this;}
F_buffer_create(int flags_):flag(flags_) {}
F_buffer_create all_flags(){
return b_sparse_binding | b_sparse_residency | b_sparse_aliased;
}
F_buffer_create& on_sparse_binding(){ flag |= b_sparse_binding; return *this; }
F_buffer_create& off_sparse_binding(){ flag &= ~b_sparse_binding; return *this; }
F_buffer_create& on_sparse_residency(){ flag |= b_sparse_residency; return *this; }
F_buffer_create& off_sparse_residency(){ flag &= ~b_sparse_residency; return *this; }
F_buffer_create& on_sparse_aliased(){ flag |= b_sparse_aliased; return *this; }
F_buffer_create& off_sparse_aliased(){ flag &= ~b_sparse_aliased; return *this; }
};
F_buffer_create inline operator|(F_buffer_create::B bit1_, F_buffer_create::B bit2_){F_buffer_create flags(bit1_);return flags | bit2_;}

/*	VkShaderStageFlagBits*/
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
F_shader_stage():flag(0){}
F_shader_stage(B bits_):flag(static_cast<int>(bits_)){}
F_shader_stage(F_shader_stage const& flag_):flag(flag_.flag){}
F_shader_stage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_shader_stage& operator = (F_shader_stage flag_){flag = flag_.flag;return *this;}
F_shader_stage operator | (B bit_){return flag | static_cast<int>(bit_);}
F_shader_stage& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_shader_stage operator | (F_shader_stage flag_){return flag | flag_.flag;}
F_shader_stage& operator |= (F_shader_stage flag_){flag |= flag_.flag;return *this;}
F_shader_stage operator & (F_shader_stage flag_){return flag & flag_.flag;}
F_shader_stage& operator &= (F_shader_stage flag_){flag &= flag_.flag;return *this;}
F_shader_stage operator ^ (F_shader_stage flag_){return flag ^ flag_.flag;}
F_shader_stage& operator ^= (F_shader_stage flag_){flag ^= flag_.flag;return *this;}
F_shader_stage operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_shader_stage flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_shader_stage flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_shader_stage& clear(){flag = 0;return *this;}
F_shader_stage(int flags_):flag(flags_) {}
F_shader_stage all_flags(){
return b_vertex | b_tessellation_control | b_tessellation_evaluation | b_geometry | b_fragment | b_compute | b_all_graphics | b_all;
}
F_shader_stage& on_vertex(){ flag |= b_vertex; return *this; }
F_shader_stage& off_vertex(){ flag &= ~b_vertex; return *this; }
F_shader_stage& on_tessellation_control(){ flag |= b_tessellation_control; return *this; }
F_shader_stage& off_tessellation_control(){ flag &= ~b_tessellation_control; return *this; }
F_shader_stage& on_tessellation_evaluation(){ flag |= b_tessellation_evaluation; return *this; }
F_shader_stage& off_tessellation_evaluation(){ flag &= ~b_tessellation_evaluation; return *this; }
F_shader_stage& on_geometry(){ flag |= b_geometry; return *this; }
F_shader_stage& off_geometry(){ flag &= ~b_geometry; return *this; }
F_shader_stage& on_fragment(){ flag |= b_fragment; return *this; }
F_shader_stage& off_fragment(){ flag &= ~b_fragment; return *this; }
F_shader_stage& on_compute(){ flag |= b_compute; return *this; }
F_shader_stage& off_compute(){ flag &= ~b_compute; return *this; }
F_shader_stage& on_all_graphics(){ flag |= b_all_graphics; return *this; }
F_shader_stage& off_all_graphics(){ flag &= ~b_all_graphics; return *this; }
F_shader_stage& on_all(){ flag |= b_all; return *this; }
F_shader_stage& off_all(){ flag &= ~b_all; return *this; }
};
F_shader_stage inline operator|(F_shader_stage::B bit1_, F_shader_stage::B bit2_){F_shader_stage flags(bit1_);return flags | bit2_;}

/*	VkImageUsageFlagBits*/
class F_image_usage {
private:
F_image_usage(int flag_);
public:
int flag;
enum B{
/*Can be used as a source of transfer operations*/
	b_transfer_src = VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
/*Can be used as a destination of transfer operations*/
	b_transfer_dst = VK_IMAGE_USAGE_TRANSFER_DST_BIT,
/*Can be sampled from (SAMPLED_IMAGE and COMBINED_IMAGE_SAMPLER descriptor types)*/
	b_sampled = VK_IMAGE_USAGE_SAMPLED_BIT,
/*Can be used as storage image (STORAGE_IMAGE descriptor type)*/
	b_storage = VK_IMAGE_USAGE_STORAGE_BIT,
/*Can be used as framebuffer color attachment*/
	b_color_attachment = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT,
/*Can be used as framebuffer depth/stencil attachment*/
	b_depth_stencil_attachment = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,
/*Image data not needed outside of rendering*/
	b_transient_attachment = VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT,
/*Can be used as framebuffer input attachment*/
	b_input_attachment = VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT,
};
F_image_usage():flag(0){}
F_image_usage(B bits_):flag(static_cast<int>(bits_)){}
F_image_usage(F_image_usage const& flag_):flag(flag_.flag){}
F_image_usage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_usage& operator = (F_image_usage flag_){flag = flag_.flag;return *this;}
F_image_usage operator | (B bit_){return flag | static_cast<int>(bit_);}
F_image_usage& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_usage operator | (F_image_usage flag_){return flag | flag_.flag;}
F_image_usage& operator |= (F_image_usage flag_){flag |= flag_.flag;return *this;}
F_image_usage operator & (F_image_usage flag_){return flag & flag_.flag;}
F_image_usage& operator &= (F_image_usage flag_){flag &= flag_.flag;return *this;}
F_image_usage operator ^ (F_image_usage flag_){return flag ^ flag_.flag;}
F_image_usage& operator ^= (F_image_usage flag_){flag ^= flag_.flag;return *this;}
F_image_usage operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_image_usage flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_image_usage flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_image_usage& clear(){flag = 0;return *this;}
F_image_usage(int flags_):flag(flags_) {}
F_image_usage all_flags(){
return b_transfer_src | b_transfer_dst | b_sampled | b_storage | b_color_attachment | b_depth_stencil_attachment | b_transient_attachment | b_input_attachment;
}
F_image_usage& on_transfer_src(){ flag |= b_transfer_src; return *this; }
F_image_usage& off_transfer_src(){ flag &= ~b_transfer_src; return *this; }
F_image_usage& on_transfer_dst(){ flag |= b_transfer_dst; return *this; }
F_image_usage& off_transfer_dst(){ flag &= ~b_transfer_dst; return *this; }
F_image_usage& on_sampled(){ flag |= b_sampled; return *this; }
F_image_usage& off_sampled(){ flag &= ~b_sampled; return *this; }
F_image_usage& on_storage(){ flag |= b_storage; return *this; }
F_image_usage& off_storage(){ flag &= ~b_storage; return *this; }
F_image_usage& on_color_attachment(){ flag |= b_color_attachment; return *this; }
F_image_usage& off_color_attachment(){ flag &= ~b_color_attachment; return *this; }
F_image_usage& on_depth_stencil_attachment(){ flag |= b_depth_stencil_attachment; return *this; }
F_image_usage& off_depth_stencil_attachment(){ flag &= ~b_depth_stencil_attachment; return *this; }
F_image_usage& on_transient_attachment(){ flag |= b_transient_attachment; return *this; }
F_image_usage& off_transient_attachment(){ flag &= ~b_transient_attachment; return *this; }
F_image_usage& on_input_attachment(){ flag |= b_input_attachment; return *this; }
F_image_usage& off_input_attachment(){ flag &= ~b_input_attachment; return *this; }
};
F_image_usage inline operator|(F_image_usage::B bit1_, F_image_usage::B bit2_){F_image_usage flags(bit1_);return flags | bit2_;}

/*	VkImageCreateFlagBits*/
class F_image_create {
private:
F_image_create(int flag_);
public:
int flag;
enum B{
/*Image should support sparse backing*/
	b_sparse_binding = VK_IMAGE_CREATE_SPARSE_BINDING_BIT,
/*Image should support sparse backing with partial residency*/
	b_sparse_residency = VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT,
/*Image should support constent data access to physical memory ranges mapped into multiple locations of sparse images*/
	b_sparse_aliased = VK_IMAGE_CREATE_SPARSE_ALIASED_BIT,
/*Allows image views to have different format than the base image*/
	b_mutable_format = VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT,
/*Allows creating image views with cube type from the created image*/
	b_cube_compatible = VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT,
};
F_image_create():flag(0){}
F_image_create(B bits_):flag(static_cast<int>(bits_)){}
F_image_create(F_image_create const& flag_):flag(flag_.flag){}
F_image_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_create& operator = (F_image_create flag_){flag = flag_.flag;return *this;}
F_image_create operator | (B bit_){return flag | static_cast<int>(bit_);}
F_image_create& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_create operator | (F_image_create flag_){return flag | flag_.flag;}
F_image_create& operator |= (F_image_create flag_){flag |= flag_.flag;return *this;}
F_image_create operator & (F_image_create flag_){return flag & flag_.flag;}
F_image_create& operator &= (F_image_create flag_){flag &= flag_.flag;return *this;}
F_image_create operator ^ (F_image_create flag_){return flag ^ flag_.flag;}
F_image_create& operator ^= (F_image_create flag_){flag ^= flag_.flag;return *this;}
F_image_create operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_image_create flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_image_create flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_image_create& clear(){flag = 0;return *this;}
F_image_create(int flags_):flag(flags_) {}
F_image_create all_flags(){
return b_sparse_binding | b_sparse_residency | b_sparse_aliased | b_mutable_format | b_cube_compatible;
}
F_image_create& on_sparse_binding(){ flag |= b_sparse_binding; return *this; }
F_image_create& off_sparse_binding(){ flag &= ~b_sparse_binding; return *this; }
F_image_create& on_sparse_residency(){ flag |= b_sparse_residency; return *this; }
F_image_create& off_sparse_residency(){ flag &= ~b_sparse_residency; return *this; }
F_image_create& on_sparse_aliased(){ flag |= b_sparse_aliased; return *this; }
F_image_create& off_sparse_aliased(){ flag &= ~b_sparse_aliased; return *this; }
F_image_create& on_mutable_format(){ flag |= b_mutable_format; return *this; }
F_image_create& off_mutable_format(){ flag &= ~b_mutable_format; return *this; }
F_image_create& on_cube_compatible(){ flag |= b_cube_compatible; return *this; }
F_image_create& off_cube_compatible(){ flag &= ~b_cube_compatible; return *this; }
};
F_image_create inline operator|(F_image_create::B bit1_, F_image_create::B bit2_){F_image_create flags(bit1_);return flags | bit2_;}

/*	VkPipelineCreateFlagBits*/
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
F_pipeline_create():flag(0){}
F_pipeline_create(B bits_):flag(static_cast<int>(bits_)){}
F_pipeline_create(F_pipeline_create const& flag_):flag(flag_.flag){}
F_pipeline_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_pipeline_create& operator = (F_pipeline_create flag_){flag = flag_.flag;return *this;}
F_pipeline_create operator | (B bit_){return flag | static_cast<int>(bit_);}
F_pipeline_create& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_pipeline_create operator | (F_pipeline_create flag_){return flag | flag_.flag;}
F_pipeline_create& operator |= (F_pipeline_create flag_){flag |= flag_.flag;return *this;}
F_pipeline_create operator & (F_pipeline_create flag_){return flag & flag_.flag;}
F_pipeline_create& operator &= (F_pipeline_create flag_){flag &= flag_.flag;return *this;}
F_pipeline_create operator ^ (F_pipeline_create flag_){return flag ^ flag_.flag;}
F_pipeline_create& operator ^= (F_pipeline_create flag_){flag ^= flag_.flag;return *this;}
F_pipeline_create operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_pipeline_create flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_pipeline_create flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_pipeline_create& clear(){flag = 0;return *this;}
F_pipeline_create(int flags_):flag(flags_) {}
F_pipeline_create all_flags(){
return b_disable_optimization | b_allow_derivatives | b_derivative;
}
F_pipeline_create& on_disable_optimization(){ flag |= b_disable_optimization; return *this; }
F_pipeline_create& off_disable_optimization(){ flag &= ~b_disable_optimization; return *this; }
F_pipeline_create& on_allow_derivatives(){ flag |= b_allow_derivatives; return *this; }
F_pipeline_create& off_allow_derivatives(){ flag &= ~b_allow_derivatives; return *this; }
F_pipeline_create& on_derivative(){ flag |= b_derivative; return *this; }
F_pipeline_create& off_derivative(){ flag &= ~b_derivative; return *this; }
};
F_pipeline_create inline operator|(F_pipeline_create::B bit1_, F_pipeline_create::B bit2_){F_pipeline_create flags(bit1_);return flags | bit2_;}

/*	VkColorComponentFlagBits*/
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
F_color_component():flag(0){}
F_color_component(B bits_):flag(static_cast<int>(bits_)){}
F_color_component(F_color_component const& flag_):flag(flag_.flag){}
F_color_component(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_color_component& operator = (F_color_component flag_){flag = flag_.flag;return *this;}
F_color_component operator | (B bit_){return flag | static_cast<int>(bit_);}
F_color_component& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_color_component operator | (F_color_component flag_){return flag | flag_.flag;}
F_color_component& operator |= (F_color_component flag_){flag |= flag_.flag;return *this;}
F_color_component operator & (F_color_component flag_){return flag & flag_.flag;}
F_color_component& operator &= (F_color_component flag_){flag &= flag_.flag;return *this;}
F_color_component operator ^ (F_color_component flag_){return flag ^ flag_.flag;}
F_color_component& operator ^= (F_color_component flag_){flag ^= flag_.flag;return *this;}
F_color_component operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_color_component flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_color_component flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_color_component& clear(){flag = 0;return *this;}
F_color_component(int flags_):flag(flags_) {}
F_color_component all_flags(){
return b_r | b_g | b_b | b_a;
}
F_color_component& on_r(){ flag |= b_r; return *this; }
F_color_component& off_r(){ flag &= ~b_r; return *this; }
F_color_component& on_g(){ flag |= b_g; return *this; }
F_color_component& off_g(){ flag &= ~b_g; return *this; }
F_color_component& on_b(){ flag |= b_b; return *this; }
F_color_component& off_b(){ flag &= ~b_b; return *this; }
F_color_component& on_a(){ flag |= b_a; return *this; }
F_color_component& off_a(){ flag &= ~b_a; return *this; }
};
F_color_component inline operator|(F_color_component::B bit1_, F_color_component::B bit2_){F_color_component flags(bit1_);return flags | bit2_;}

/*	VkFenceCreateFlagBits*/
class F_fence_create {
private:
F_fence_create(int flag_);
public:
int flag;
enum B{
	b_signaled = VK_FENCE_CREATE_SIGNALED_BIT,
};
F_fence_create():flag(0){}
F_fence_create(B bits_):flag(static_cast<int>(bits_)){}
F_fence_create(F_fence_create const& flag_):flag(flag_.flag){}
F_fence_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_fence_create& operator = (F_fence_create flag_){flag = flag_.flag;return *this;}
F_fence_create operator | (B bit_){return flag | static_cast<int>(bit_);}
F_fence_create& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_fence_create operator | (F_fence_create flag_){return flag | flag_.flag;}
F_fence_create& operator |= (F_fence_create flag_){flag |= flag_.flag;return *this;}
F_fence_create operator & (F_fence_create flag_){return flag & flag_.flag;}
F_fence_create& operator &= (F_fence_create flag_){flag &= flag_.flag;return *this;}
F_fence_create operator ^ (F_fence_create flag_){return flag ^ flag_.flag;}
F_fence_create& operator ^= (F_fence_create flag_){flag ^= flag_.flag;return *this;}
F_fence_create operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_fence_create flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_fence_create flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_fence_create& clear(){flag = 0;return *this;}
F_fence_create(int flags_):flag(flags_) {}
F_fence_create all_flags(){
return b_signaled;
}
F_fence_create& on_signaled(){ flag |= b_signaled; return *this; }
F_fence_create& off_signaled(){ flag &= ~b_signaled; return *this; }
};
F_fence_create inline operator|(F_fence_create::B bit1_, F_fence_create::B bit2_){F_fence_create flags(bit1_);return flags | bit2_;}

/*	VkFormatFeatureFlagBits*/
class F_format_feature {
private:
F_format_feature(int flag_);
public:
int flag;
enum B{
/*Format can be used for sampled images (SAMPLED_IMAGE and COMBINED_IMAGE_SAMPLER descriptor types)*/
	b_sampled_image = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT,
/*Format can be used for storage images (STORAGE_IMAGE descriptor type)*/
	b_storage_image = VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT,
/*Format supports atomic operations in case it is used for storage images*/
	b_storage_image_atomic = VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT,
/*Format can be used for uniform texel buffers (TBOs)*/
	b_uniform_texel_buffer = VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT,
/*Format can be used for storage texel buffers (IBOs)*/
	b_storage_texel_buffer = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT,
/*Format supports atomic operations in case it is used for storage texel buffers*/
	b_storage_texel_buffer_atomic = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT,
/*Format can be used for vertex buffers (VBOs)*/
	b_vertex_buffer = VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
/*Format can be used for color attachment images*/
	b_color_attachment = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT,
/*Format supports blending in case it is used for color attachment images*/
	b_color_attachment_blend = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT,
/*Format can be used for depth/stencil attachment images*/
	b_depth_stencil_attachment = VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT,
/*Format can be used as the source image of blits with vkCmdBlitImage*/
	b_blit_src = VK_FORMAT_FEATURE_BLIT_SRC_BIT,
/*Format can be used as the destination image of blits with vkCmdBlitImage*/
	b_blit_dst = VK_FORMAT_FEATURE_BLIT_DST_BIT,
/*Format can be filtered with VK_FILTER_LINEAR when being sampled*/
	b_sampled_image_filter_linear = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT,
};
F_format_feature():flag(0){}
F_format_feature(B bits_):flag(static_cast<int>(bits_)){}
F_format_feature(F_format_feature const& flag_):flag(flag_.flag){}
F_format_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_format_feature& operator = (F_format_feature flag_){flag = flag_.flag;return *this;}
F_format_feature operator | (B bit_){return flag | static_cast<int>(bit_);}
F_format_feature& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_format_feature operator | (F_format_feature flag_){return flag | flag_.flag;}
F_format_feature& operator |= (F_format_feature flag_){flag |= flag_.flag;return *this;}
F_format_feature operator & (F_format_feature flag_){return flag & flag_.flag;}
F_format_feature& operator &= (F_format_feature flag_){flag &= flag_.flag;return *this;}
F_format_feature operator ^ (F_format_feature flag_){return flag ^ flag_.flag;}
F_format_feature& operator ^= (F_format_feature flag_){flag ^= flag_.flag;return *this;}
F_format_feature operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_format_feature flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_format_feature flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_format_feature& clear(){flag = 0;return *this;}
F_format_feature(int flags_):flag(flags_) {}
F_format_feature all_flags(){
return b_sampled_image | b_storage_image | b_storage_image_atomic | b_uniform_texel_buffer | b_storage_texel_buffer | b_storage_texel_buffer_atomic | b_vertex_buffer | b_color_attachment | b_color_attachment_blend | b_depth_stencil_attachment | b_blit_src | b_blit_dst | b_sampled_image_filter_linear;
}
F_format_feature& on_sampled_image(){ flag |= b_sampled_image; return *this; }
F_format_feature& off_sampled_image(){ flag &= ~b_sampled_image; return *this; }
F_format_feature& on_storage_image(){ flag |= b_storage_image; return *this; }
F_format_feature& off_storage_image(){ flag &= ~b_storage_image; return *this; }
F_format_feature& on_storage_image_atomic(){ flag |= b_storage_image_atomic; return *this; }
F_format_feature& off_storage_image_atomic(){ flag &= ~b_storage_image_atomic; return *this; }
F_format_feature& on_uniform_texel_buffer(){ flag |= b_uniform_texel_buffer; return *this; }
F_format_feature& off_uniform_texel_buffer(){ flag &= ~b_uniform_texel_buffer; return *this; }
F_format_feature& on_storage_texel_buffer(){ flag |= b_storage_texel_buffer; return *this; }
F_format_feature& off_storage_texel_buffer(){ flag &= ~b_storage_texel_buffer; return *this; }
F_format_feature& on_storage_texel_buffer_atomic(){ flag |= b_storage_texel_buffer_atomic; return *this; }
F_format_feature& off_storage_texel_buffer_atomic(){ flag &= ~b_storage_texel_buffer_atomic; return *this; }
F_format_feature& on_vertex_buffer(){ flag |= b_vertex_buffer; return *this; }
F_format_feature& off_vertex_buffer(){ flag &= ~b_vertex_buffer; return *this; }
F_format_feature& on_color_attachment(){ flag |= b_color_attachment; return *this; }
F_format_feature& off_color_attachment(){ flag &= ~b_color_attachment; return *this; }
F_format_feature& on_color_attachment_blend(){ flag |= b_color_attachment_blend; return *this; }
F_format_feature& off_color_attachment_blend(){ flag &= ~b_color_attachment_blend; return *this; }
F_format_feature& on_depth_stencil_attachment(){ flag |= b_depth_stencil_attachment; return *this; }
F_format_feature& off_depth_stencil_attachment(){ flag &= ~b_depth_stencil_attachment; return *this; }
F_format_feature& on_blit_src(){ flag |= b_blit_src; return *this; }
F_format_feature& off_blit_src(){ flag &= ~b_blit_src; return *this; }
F_format_feature& on_blit_dst(){ flag |= b_blit_dst; return *this; }
F_format_feature& off_blit_dst(){ flag &= ~b_blit_dst; return *this; }
F_format_feature& on_sampled_image_filter_linear(){ flag |= b_sampled_image_filter_linear; return *this; }
F_format_feature& off_sampled_image_filter_linear(){ flag &= ~b_sampled_image_filter_linear; return *this; }
};
F_format_feature inline operator|(F_format_feature::B bit1_, F_format_feature::B bit2_){F_format_feature flags(bit1_);return flags | bit2_;}

/*	VkQueryControlFlagBits*/
class F_query_control {
private:
F_query_control(int flag_);
public:
int flag;
enum B{
/*Require precise results to be collected by the query*/
	b_precise = VK_QUERY_CONTROL_PRECISE_BIT,
};
F_query_control():flag(0){}
F_query_control(B bits_):flag(static_cast<int>(bits_)){}
F_query_control(F_query_control const& flag_):flag(flag_.flag){}
F_query_control(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_control& operator = (F_query_control flag_){flag = flag_.flag;return *this;}
F_query_control operator | (B bit_){return flag | static_cast<int>(bit_);}
F_query_control& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_control operator | (F_query_control flag_){return flag | flag_.flag;}
F_query_control& operator |= (F_query_control flag_){flag |= flag_.flag;return *this;}
F_query_control operator & (F_query_control flag_){return flag & flag_.flag;}
F_query_control& operator &= (F_query_control flag_){flag &= flag_.flag;return *this;}
F_query_control operator ^ (F_query_control flag_){return flag ^ flag_.flag;}
F_query_control& operator ^= (F_query_control flag_){flag ^= flag_.flag;return *this;}
F_query_control operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_query_control flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_query_control flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_query_control& clear(){flag = 0;return *this;}
F_query_control(int flags_):flag(flags_) {}
F_query_control all_flags(){
return b_precise;
}
F_query_control& on_precise(){ flag |= b_precise; return *this; }
F_query_control& off_precise(){ flag &= ~b_precise; return *this; }
};
F_query_control inline operator|(F_query_control::B bit1_, F_query_control::B bit2_){F_query_control flags(bit1_);return flags | bit2_;}

/*	VkQueryResultFlagBits*/
class F_query_result {
private:
F_query_result(int flag_);
public:
int flag;
enum B{
/*Results of the queries are written to the destination buffer as 64-bit values*/
	b_64 = VK_QUERY_RESULT_64_BIT,
/*Results of the queries are waited on before proceeding with the result copy*/
	b_wait = VK_QUERY_RESULT_WAIT_BIT,
/*Besides the results of the query, the availability of the results is also written*/
	b_with_availability = VK_QUERY_RESULT_WITH_AVAILABILITY_BIT,
/*Copy the partial results of the query even if the final results are not available*/
	b_partial = VK_QUERY_RESULT_PARTIAL_BIT,
};
F_query_result():flag(0){}
F_query_result(B bits_):flag(static_cast<int>(bits_)){}
F_query_result(F_query_result const& flag_):flag(flag_.flag){}
F_query_result(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_result& operator = (F_query_result flag_){flag = flag_.flag;return *this;}
F_query_result operator | (B bit_){return flag | static_cast<int>(bit_);}
F_query_result& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_result operator | (F_query_result flag_){return flag | flag_.flag;}
F_query_result& operator |= (F_query_result flag_){flag |= flag_.flag;return *this;}
F_query_result operator & (F_query_result flag_){return flag & flag_.flag;}
F_query_result& operator &= (F_query_result flag_){flag &= flag_.flag;return *this;}
F_query_result operator ^ (F_query_result flag_){return flag ^ flag_.flag;}
F_query_result& operator ^= (F_query_result flag_){flag ^= flag_.flag;return *this;}
F_query_result operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_query_result flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_query_result flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_query_result& clear(){flag = 0;return *this;}
F_query_result(int flags_):flag(flags_) {}
F_query_result all_flags(){
return b_64 | b_wait | b_with_availability | b_partial;
}
F_query_result& on_64(){ flag |= b_64; return *this; }
F_query_result& off_64(){ flag &= ~b_64; return *this; }
F_query_result& on_wait(){ flag |= b_wait; return *this; }
F_query_result& off_wait(){ flag &= ~b_wait; return *this; }
F_query_result& on_with_availability(){ flag |= b_with_availability; return *this; }
F_query_result& off_with_availability(){ flag &= ~b_with_availability; return *this; }
F_query_result& on_partial(){ flag |= b_partial; return *this; }
F_query_result& off_partial(){ flag &= ~b_partial; return *this; }
};
F_query_result inline operator|(F_query_result::B bit1_, F_query_result::B bit2_){F_query_result flags(bit1_);return flags | bit2_;}

/*	VkCommandBufferUsageFlagBits*/
class F_command_buffer_usage {
private:
F_command_buffer_usage(int flag_);
public:
int flag;
enum B{
	b_one_time_submit = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,
	b_render_pass_continue = VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT,
/*Command buffer may be submitted/executed more than once simultaneously*/
	b_simultaneous_use = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT,
};
F_command_buffer_usage():flag(0){}
F_command_buffer_usage(B bits_):flag(static_cast<int>(bits_)){}
F_command_buffer_usage(F_command_buffer_usage const& flag_):flag(flag_.flag){}
F_command_buffer_usage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_buffer_usage& operator = (F_command_buffer_usage flag_){flag = flag_.flag;return *this;}
F_command_buffer_usage operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_buffer_usage& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_buffer_usage operator | (F_command_buffer_usage flag_){return flag | flag_.flag;}
F_command_buffer_usage& operator |= (F_command_buffer_usage flag_){flag |= flag_.flag;return *this;}
F_command_buffer_usage operator & (F_command_buffer_usage flag_){return flag & flag_.flag;}
F_command_buffer_usage& operator &= (F_command_buffer_usage flag_){flag &= flag_.flag;return *this;}
F_command_buffer_usage operator ^ (F_command_buffer_usage flag_){return flag ^ flag_.flag;}
F_command_buffer_usage& operator ^= (F_command_buffer_usage flag_){flag ^= flag_.flag;return *this;}
F_command_buffer_usage operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_command_buffer_usage flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_command_buffer_usage flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_command_buffer_usage& clear(){flag = 0;return *this;}
F_command_buffer_usage(int flags_):flag(flags_) {}
F_command_buffer_usage all_flags(){
return b_one_time_submit | b_render_pass_continue | b_simultaneous_use;
}
F_command_buffer_usage& on_one_time_submit(){ flag |= b_one_time_submit; return *this; }
F_command_buffer_usage& off_one_time_submit(){ flag &= ~b_one_time_submit; return *this; }
F_command_buffer_usage& on_render_pass_continue(){ flag |= b_render_pass_continue; return *this; }
F_command_buffer_usage& off_render_pass_continue(){ flag &= ~b_render_pass_continue; return *this; }
F_command_buffer_usage& on_simultaneous_use(){ flag |= b_simultaneous_use; return *this; }
F_command_buffer_usage& off_simultaneous_use(){ flag &= ~b_simultaneous_use; return *this; }
};
F_command_buffer_usage inline operator|(F_command_buffer_usage::B bit1_, F_command_buffer_usage::B bit2_){F_command_buffer_usage flags(bit1_);return flags | bit2_;}

/*	VkQueryPipelineStatisticFlagBits*/
class F_query_pipeline_statistic {
private:
F_query_pipeline_statistic(int flag_);
public:
int flag;
enum B{
/*Optional*/
	b_input_assembly_vertices = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT,
/*Optional*/
	b_input_assembly_primitives = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT,
/*Optional*/
	b_vertex_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT,
/*Optional*/
	b_geometry_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT,
/*Optional*/
	b_geometry_shader_primitives = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT,
/*Optional*/
	b_clipping_invocations = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT,
/*Optional*/
	b_clipping_primitives = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT,
/*Optional*/
	b_fragment_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT,
/*Optional*/
	b_tessellation_control_shader_patches = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT,
/*Optional*/
	b_tessellation_evaluation_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT,
/*Optional*/
	b_compute_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT,
};
F_query_pipeline_statistic():flag(0){}
F_query_pipeline_statistic(B bits_):flag(static_cast<int>(bits_)){}
F_query_pipeline_statistic(F_query_pipeline_statistic const& flag_):flag(flag_.flag){}
F_query_pipeline_statistic(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_pipeline_statistic& operator = (F_query_pipeline_statistic flag_){flag = flag_.flag;return *this;}
F_query_pipeline_statistic operator | (B bit_){return flag | static_cast<int>(bit_);}
F_query_pipeline_statistic& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_pipeline_statistic operator | (F_query_pipeline_statistic flag_){return flag | flag_.flag;}
F_query_pipeline_statistic& operator |= (F_query_pipeline_statistic flag_){flag |= flag_.flag;return *this;}
F_query_pipeline_statistic operator & (F_query_pipeline_statistic flag_){return flag & flag_.flag;}
F_query_pipeline_statistic& operator &= (F_query_pipeline_statistic flag_){flag &= flag_.flag;return *this;}
F_query_pipeline_statistic operator ^ (F_query_pipeline_statistic flag_){return flag ^ flag_.flag;}
F_query_pipeline_statistic& operator ^= (F_query_pipeline_statistic flag_){flag ^= flag_.flag;return *this;}
F_query_pipeline_statistic operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_query_pipeline_statistic flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_query_pipeline_statistic flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_query_pipeline_statistic& clear(){flag = 0;return *this;}
F_query_pipeline_statistic(int flags_):flag(flags_) {}
F_query_pipeline_statistic all_flags(){
return b_input_assembly_vertices | b_input_assembly_primitives | b_vertex_shader_invocations | b_geometry_shader_invocations | b_geometry_shader_primitives | b_clipping_invocations | b_clipping_primitives | b_fragment_shader_invocations | b_tessellation_control_shader_patches | b_tessellation_evaluation_shader_invocations | b_compute_shader_invocations;
}
F_query_pipeline_statistic& on_input_assembly_vertices(){ flag |= b_input_assembly_vertices; return *this; }
F_query_pipeline_statistic& off_input_assembly_vertices(){ flag &= ~b_input_assembly_vertices; return *this; }
F_query_pipeline_statistic& on_input_assembly_primitives(){ flag |= b_input_assembly_primitives; return *this; }
F_query_pipeline_statistic& off_input_assembly_primitives(){ flag &= ~b_input_assembly_primitives; return *this; }
F_query_pipeline_statistic& on_vertex_shader_invocations(){ flag |= b_vertex_shader_invocations; return *this; }
F_query_pipeline_statistic& off_vertex_shader_invocations(){ flag &= ~b_vertex_shader_invocations; return *this; }
F_query_pipeline_statistic& on_geometry_shader_invocations(){ flag |= b_geometry_shader_invocations; return *this; }
F_query_pipeline_statistic& off_geometry_shader_invocations(){ flag &= ~b_geometry_shader_invocations; return *this; }
F_query_pipeline_statistic& on_geometry_shader_primitives(){ flag |= b_geometry_shader_primitives; return *this; }
F_query_pipeline_statistic& off_geometry_shader_primitives(){ flag &= ~b_geometry_shader_primitives; return *this; }
F_query_pipeline_statistic& on_clipping_invocations(){ flag |= b_clipping_invocations; return *this; }
F_query_pipeline_statistic& off_clipping_invocations(){ flag &= ~b_clipping_invocations; return *this; }
F_query_pipeline_statistic& on_clipping_primitives(){ flag |= b_clipping_primitives; return *this; }
F_query_pipeline_statistic& off_clipping_primitives(){ flag &= ~b_clipping_primitives; return *this; }
F_query_pipeline_statistic& on_fragment_shader_invocations(){ flag |= b_fragment_shader_invocations; return *this; }
F_query_pipeline_statistic& off_fragment_shader_invocations(){ flag &= ~b_fragment_shader_invocations; return *this; }
F_query_pipeline_statistic& on_tessellation_control_shader_patches(){ flag |= b_tessellation_control_shader_patches; return *this; }
F_query_pipeline_statistic& off_tessellation_control_shader_patches(){ flag &= ~b_tessellation_control_shader_patches; return *this; }
F_query_pipeline_statistic& on_tessellation_evaluation_shader_invocations(){ flag |= b_tessellation_evaluation_shader_invocations; return *this; }
F_query_pipeline_statistic& off_tessellation_evaluation_shader_invocations(){ flag &= ~b_tessellation_evaluation_shader_invocations; return *this; }
F_query_pipeline_statistic& on_compute_shader_invocations(){ flag |= b_compute_shader_invocations; return *this; }
F_query_pipeline_statistic& off_compute_shader_invocations(){ flag &= ~b_compute_shader_invocations; return *this; }
};
F_query_pipeline_statistic inline operator|(F_query_pipeline_statistic::B bit1_, F_query_pipeline_statistic::B bit2_){F_query_pipeline_statistic flags(bit1_);return flags | bit2_;}

/*	VkImageAspectFlagBits*/
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
F_image_aspect():flag(0){}
F_image_aspect(B bits_):flag(static_cast<int>(bits_)){}
F_image_aspect(F_image_aspect const& flag_):flag(flag_.flag){}
F_image_aspect(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_aspect& operator = (F_image_aspect flag_){flag = flag_.flag;return *this;}
F_image_aspect operator | (B bit_){return flag | static_cast<int>(bit_);}
F_image_aspect& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_aspect operator | (F_image_aspect flag_){return flag | flag_.flag;}
F_image_aspect& operator |= (F_image_aspect flag_){flag |= flag_.flag;return *this;}
F_image_aspect operator & (F_image_aspect flag_){return flag & flag_.flag;}
F_image_aspect& operator &= (F_image_aspect flag_){flag &= flag_.flag;return *this;}
F_image_aspect operator ^ (F_image_aspect flag_){return flag ^ flag_.flag;}
F_image_aspect& operator ^= (F_image_aspect flag_){flag ^= flag_.flag;return *this;}
F_image_aspect operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_image_aspect flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_image_aspect flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_image_aspect& clear(){flag = 0;return *this;}
F_image_aspect(int flags_):flag(flags_) {}
F_image_aspect all_flags(){
return b_color | b_depth | b_stencil | b_metadata;
}
F_image_aspect& on_color(){ flag |= b_color; return *this; }
F_image_aspect& off_color(){ flag &= ~b_color; return *this; }
F_image_aspect& on_depth(){ flag |= b_depth; return *this; }
F_image_aspect& off_depth(){ flag &= ~b_depth; return *this; }
F_image_aspect& on_stencil(){ flag |= b_stencil; return *this; }
F_image_aspect& off_stencil(){ flag &= ~b_stencil; return *this; }
F_image_aspect& on_metadata(){ flag |= b_metadata; return *this; }
F_image_aspect& off_metadata(){ flag &= ~b_metadata; return *this; }
};
F_image_aspect inline operator|(F_image_aspect::B bit1_, F_image_aspect::B bit2_){F_image_aspect flags(bit1_);return flags | bit2_;}

/*	VkSparseImageFormatFlagBits*/
class F_sparse_image_format {
private:
F_sparse_image_format(int flag_);
public:
int flag;
enum B{
/*Image uses a single mip tail region for all array layers*/
	b_single_miptail = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT,
/*Image requires mip level dimensions to be an integer multiple of the sparse image block dimensions for non-tail mip levels.*/
	b_aligned_mip_size = VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT,
/*Image uses a non-standard sparse image block dimensions*/
	b_nonstandard_block_size = VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT,
};
F_sparse_image_format():flag(0){}
F_sparse_image_format(B bits_):flag(static_cast<int>(bits_)){}
F_sparse_image_format(F_sparse_image_format const& flag_):flag(flag_.flag){}
F_sparse_image_format(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sparse_image_format& operator = (F_sparse_image_format flag_){flag = flag_.flag;return *this;}
F_sparse_image_format operator | (B bit_){return flag | static_cast<int>(bit_);}
F_sparse_image_format& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_sparse_image_format operator | (F_sparse_image_format flag_){return flag | flag_.flag;}
F_sparse_image_format& operator |= (F_sparse_image_format flag_){flag |= flag_.flag;return *this;}
F_sparse_image_format operator & (F_sparse_image_format flag_){return flag & flag_.flag;}
F_sparse_image_format& operator &= (F_sparse_image_format flag_){flag &= flag_.flag;return *this;}
F_sparse_image_format operator ^ (F_sparse_image_format flag_){return flag ^ flag_.flag;}
F_sparse_image_format& operator ^= (F_sparse_image_format flag_){flag ^= flag_.flag;return *this;}
F_sparse_image_format operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_sparse_image_format flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_sparse_image_format flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_sparse_image_format& clear(){flag = 0;return *this;}
F_sparse_image_format(int flags_):flag(flags_) {}
F_sparse_image_format all_flags(){
return b_single_miptail | b_aligned_mip_size | b_nonstandard_block_size;
}
F_sparse_image_format& on_single_miptail(){ flag |= b_single_miptail; return *this; }
F_sparse_image_format& off_single_miptail(){ flag &= ~b_single_miptail; return *this; }
F_sparse_image_format& on_aligned_mip_size(){ flag |= b_aligned_mip_size; return *this; }
F_sparse_image_format& off_aligned_mip_size(){ flag &= ~b_aligned_mip_size; return *this; }
F_sparse_image_format& on_nonstandard_block_size(){ flag |= b_nonstandard_block_size; return *this; }
F_sparse_image_format& off_nonstandard_block_size(){ flag &= ~b_nonstandard_block_size; return *this; }
};
F_sparse_image_format inline operator|(F_sparse_image_format::B bit1_, F_sparse_image_format::B bit2_){F_sparse_image_format flags(bit1_);return flags | bit2_;}

/*	VkSparseMemoryBindFlagBits*/
class F_sparse_memory_bind {
private:
F_sparse_memory_bind(int flag_);
public:
int flag;
enum B{
/*Operation binds resource metadata to memory*/
	b_metadata = VK_SPARSE_MEMORY_BIND_METADATA_BIT,
};
F_sparse_memory_bind():flag(0){}
F_sparse_memory_bind(B bits_):flag(static_cast<int>(bits_)){}
F_sparse_memory_bind(F_sparse_memory_bind const& flag_):flag(flag_.flag){}
F_sparse_memory_bind(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sparse_memory_bind& operator = (F_sparse_memory_bind flag_){flag = flag_.flag;return *this;}
F_sparse_memory_bind operator | (B bit_){return flag | static_cast<int>(bit_);}
F_sparse_memory_bind& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_sparse_memory_bind operator | (F_sparse_memory_bind flag_){return flag | flag_.flag;}
F_sparse_memory_bind& operator |= (F_sparse_memory_bind flag_){flag |= flag_.flag;return *this;}
F_sparse_memory_bind operator & (F_sparse_memory_bind flag_){return flag & flag_.flag;}
F_sparse_memory_bind& operator &= (F_sparse_memory_bind flag_){flag &= flag_.flag;return *this;}
F_sparse_memory_bind operator ^ (F_sparse_memory_bind flag_){return flag ^ flag_.flag;}
F_sparse_memory_bind& operator ^= (F_sparse_memory_bind flag_){flag ^= flag_.flag;return *this;}
F_sparse_memory_bind operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_sparse_memory_bind flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_sparse_memory_bind flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_sparse_memory_bind& clear(){flag = 0;return *this;}
F_sparse_memory_bind(int flags_):flag(flags_) {}
F_sparse_memory_bind all_flags(){
return b_metadata;
}
F_sparse_memory_bind& on_metadata(){ flag |= b_metadata; return *this; }
F_sparse_memory_bind& off_metadata(){ flag &= ~b_metadata; return *this; }
};
F_sparse_memory_bind inline operator|(F_sparse_memory_bind::B bit1_, F_sparse_memory_bind::B bit2_){F_sparse_memory_bind flags(bit1_);return flags | bit2_;}

/*	VkPipelineStageFlagBits*/
class F_pipeline_stage {
private:
F_pipeline_stage(int flag_);
public:
int flag;
enum B{
/*Before subsequent commands are processed*/
	b_top_of_pipe = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
/*Draw/DispatchIndirect command fetch*/
	b_draw_indirect = VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT,
/*Vertex/index fetch*/
	b_vertex_input = VK_PIPELINE_STAGE_VERTEX_INPUT_BIT,
/*Vertex shading*/
	b_vertex_shader = VK_PIPELINE_STAGE_VERTEX_SHADER_BIT,
/*Tessellation control shading*/
	b_tessellation_control_shader = VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT,
/*Tessellation evaluation shading*/
	b_tessellation_evaluation_shader = VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT,
/*Geometry shading*/
	b_geometry_shader = VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT,
/*Fragment shading*/
	b_fragment_shader = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
/*Early fragment (depth and stencil) tests*/
	b_early_fragment_tests = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT,
/*Late fragment (depth and stencil) tests*/
	b_late_fragment_tests = VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
/*Color attachment writes*/
	b_color_attachment_output = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
/*Compute shading*/
	b_compute_shader = VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
/*Transfer/copy operations*/
	b_transfer = VK_PIPELINE_STAGE_TRANSFER_BIT,
/*After previous commands have completed*/
	b_bottom_of_pipe = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
/*Indicates host (CPU) is a source/sink of the dependency*/
	b_host = VK_PIPELINE_STAGE_HOST_BIT,
/*All stages of the graphics pipeline*/
	b_all_graphics = VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT,
/*All stages supported on the queue*/
	b_all_commands = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
};
F_pipeline_stage():flag(0){}
F_pipeline_stage(B bits_):flag(static_cast<int>(bits_)){}
F_pipeline_stage(F_pipeline_stage const& flag_):flag(flag_.flag){}
F_pipeline_stage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_pipeline_stage& operator = (F_pipeline_stage flag_){flag = flag_.flag;return *this;}
F_pipeline_stage operator | (B bit_){return flag | static_cast<int>(bit_);}
F_pipeline_stage& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_pipeline_stage operator | (F_pipeline_stage flag_){return flag | flag_.flag;}
F_pipeline_stage& operator |= (F_pipeline_stage flag_){flag |= flag_.flag;return *this;}
F_pipeline_stage operator & (F_pipeline_stage flag_){return flag & flag_.flag;}
F_pipeline_stage& operator &= (F_pipeline_stage flag_){flag &= flag_.flag;return *this;}
F_pipeline_stage operator ^ (F_pipeline_stage flag_){return flag ^ flag_.flag;}
F_pipeline_stage& operator ^= (F_pipeline_stage flag_){flag ^= flag_.flag;return *this;}
F_pipeline_stage operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_pipeline_stage flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_pipeline_stage flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_pipeline_stage& clear(){flag = 0;return *this;}
F_pipeline_stage(int flags_):flag(flags_) {}
F_pipeline_stage all_flags(){
return b_top_of_pipe | b_draw_indirect | b_vertex_input | b_vertex_shader | b_tessellation_control_shader | b_tessellation_evaluation_shader | b_geometry_shader | b_fragment_shader | b_early_fragment_tests | b_late_fragment_tests | b_color_attachment_output | b_compute_shader | b_transfer | b_bottom_of_pipe | b_host | b_all_graphics | b_all_commands;
}
F_pipeline_stage& on_top_of_pipe(){ flag |= b_top_of_pipe; return *this; }
F_pipeline_stage& off_top_of_pipe(){ flag &= ~b_top_of_pipe; return *this; }
F_pipeline_stage& on_draw_indirect(){ flag |= b_draw_indirect; return *this; }
F_pipeline_stage& off_draw_indirect(){ flag &= ~b_draw_indirect; return *this; }
F_pipeline_stage& on_vertex_input(){ flag |= b_vertex_input; return *this; }
F_pipeline_stage& off_vertex_input(){ flag &= ~b_vertex_input; return *this; }
F_pipeline_stage& on_vertex_shader(){ flag |= b_vertex_shader; return *this; }
F_pipeline_stage& off_vertex_shader(){ flag &= ~b_vertex_shader; return *this; }
F_pipeline_stage& on_tessellation_control_shader(){ flag |= b_tessellation_control_shader; return *this; }
F_pipeline_stage& off_tessellation_control_shader(){ flag &= ~b_tessellation_control_shader; return *this; }
F_pipeline_stage& on_tessellation_evaluation_shader(){ flag |= b_tessellation_evaluation_shader; return *this; }
F_pipeline_stage& off_tessellation_evaluation_shader(){ flag &= ~b_tessellation_evaluation_shader; return *this; }
F_pipeline_stage& on_geometry_shader(){ flag |= b_geometry_shader; return *this; }
F_pipeline_stage& off_geometry_shader(){ flag &= ~b_geometry_shader; return *this; }
F_pipeline_stage& on_fragment_shader(){ flag |= b_fragment_shader; return *this; }
F_pipeline_stage& off_fragment_shader(){ flag &= ~b_fragment_shader; return *this; }
F_pipeline_stage& on_early_fragment_tests(){ flag |= b_early_fragment_tests; return *this; }
F_pipeline_stage& off_early_fragment_tests(){ flag &= ~b_early_fragment_tests; return *this; }
F_pipeline_stage& on_late_fragment_tests(){ flag |= b_late_fragment_tests; return *this; }
F_pipeline_stage& off_late_fragment_tests(){ flag &= ~b_late_fragment_tests; return *this; }
F_pipeline_stage& on_color_attachment_output(){ flag |= b_color_attachment_output; return *this; }
F_pipeline_stage& off_color_attachment_output(){ flag &= ~b_color_attachment_output; return *this; }
F_pipeline_stage& on_compute_shader(){ flag |= b_compute_shader; return *this; }
F_pipeline_stage& off_compute_shader(){ flag &= ~b_compute_shader; return *this; }
F_pipeline_stage& on_transfer(){ flag |= b_transfer; return *this; }
F_pipeline_stage& off_transfer(){ flag &= ~b_transfer; return *this; }
F_pipeline_stage& on_bottom_of_pipe(){ flag |= b_bottom_of_pipe; return *this; }
F_pipeline_stage& off_bottom_of_pipe(){ flag &= ~b_bottom_of_pipe; return *this; }
F_pipeline_stage& on_host(){ flag |= b_host; return *this; }
F_pipeline_stage& off_host(){ flag &= ~b_host; return *this; }
F_pipeline_stage& on_all_graphics(){ flag |= b_all_graphics; return *this; }
F_pipeline_stage& off_all_graphics(){ flag &= ~b_all_graphics; return *this; }
F_pipeline_stage& on_all_commands(){ flag |= b_all_commands; return *this; }
F_pipeline_stage& off_all_commands(){ flag &= ~b_all_commands; return *this; }
};
F_pipeline_stage inline operator|(F_pipeline_stage::B bit1_, F_pipeline_stage::B bit2_){F_pipeline_stage flags(bit1_);return flags | bit2_;}

/*	VkCommandPoolCreateFlagBits*/
class F_command_pool_create {
private:
F_command_pool_create(int flag_);
public:
int flag;
enum B{
/*Command buffers have a short lifetime*/
	b_transient = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT,
/*Command buffers may release their memory individually*/
	b_reset_command_buffer = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
};
F_command_pool_create():flag(0){}
F_command_pool_create(B bits_):flag(static_cast<int>(bits_)){}
F_command_pool_create(F_command_pool_create const& flag_):flag(flag_.flag){}
F_command_pool_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_pool_create& operator = (F_command_pool_create flag_){flag = flag_.flag;return *this;}
F_command_pool_create operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_pool_create& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_pool_create operator | (F_command_pool_create flag_){return flag | flag_.flag;}
F_command_pool_create& operator |= (F_command_pool_create flag_){flag |= flag_.flag;return *this;}
F_command_pool_create operator & (F_command_pool_create flag_){return flag & flag_.flag;}
F_command_pool_create& operator &= (F_command_pool_create flag_){flag &= flag_.flag;return *this;}
F_command_pool_create operator ^ (F_command_pool_create flag_){return flag ^ flag_.flag;}
F_command_pool_create& operator ^= (F_command_pool_create flag_){flag ^= flag_.flag;return *this;}
F_command_pool_create operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_command_pool_create flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_command_pool_create flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_command_pool_create& clear(){flag = 0;return *this;}
F_command_pool_create(int flags_):flag(flags_) {}
F_command_pool_create all_flags(){
return b_transient | b_reset_command_buffer;
}
F_command_pool_create& on_transient(){ flag |= b_transient; return *this; }
F_command_pool_create& off_transient(){ flag &= ~b_transient; return *this; }
F_command_pool_create& on_reset_command_buffer(){ flag |= b_reset_command_buffer; return *this; }
F_command_pool_create& off_reset_command_buffer(){ flag &= ~b_reset_command_buffer; return *this; }
};
F_command_pool_create inline operator|(F_command_pool_create::B bit1_, F_command_pool_create::B bit2_){F_command_pool_create flags(bit1_);return flags | bit2_;}

/*	VkCommandPoolResetFlagBits*/
class F_command_pool_reset {
private:
F_command_pool_reset(int flag_);
public:
int flag;
enum B{
/*Release resources owned by the pool*/
	b_release_resources = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT,
};
F_command_pool_reset():flag(0){}
F_command_pool_reset(B bits_):flag(static_cast<int>(bits_)){}
F_command_pool_reset(F_command_pool_reset const& flag_):flag(flag_.flag){}
F_command_pool_reset(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_pool_reset& operator = (F_command_pool_reset flag_){flag = flag_.flag;return *this;}
F_command_pool_reset operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_pool_reset& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_pool_reset operator | (F_command_pool_reset flag_){return flag | flag_.flag;}
F_command_pool_reset& operator |= (F_command_pool_reset flag_){flag |= flag_.flag;return *this;}
F_command_pool_reset operator & (F_command_pool_reset flag_){return flag & flag_.flag;}
F_command_pool_reset& operator &= (F_command_pool_reset flag_){flag &= flag_.flag;return *this;}
F_command_pool_reset operator ^ (F_command_pool_reset flag_){return flag ^ flag_.flag;}
F_command_pool_reset& operator ^= (F_command_pool_reset flag_){flag ^= flag_.flag;return *this;}
F_command_pool_reset operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_command_pool_reset flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_command_pool_reset flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_command_pool_reset& clear(){flag = 0;return *this;}
F_command_pool_reset(int flags_):flag(flags_) {}
F_command_pool_reset all_flags(){
return b_release_resources;
}
F_command_pool_reset& on_release_resources(){ flag |= b_release_resources; return *this; }
F_command_pool_reset& off_release_resources(){ flag &= ~b_release_resources; return *this; }
};
F_command_pool_reset inline operator|(F_command_pool_reset::B bit1_, F_command_pool_reset::B bit2_){F_command_pool_reset flags(bit1_);return flags | bit2_;}

/*	VkCommandBufferResetFlagBits*/
class F_command_buffer_reset {
private:
F_command_buffer_reset(int flag_);
public:
int flag;
enum B{
/*Release resources owned by the buffer*/
	b_release_resources = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT,
};
F_command_buffer_reset():flag(0){}
F_command_buffer_reset(B bits_):flag(static_cast<int>(bits_)){}
F_command_buffer_reset(F_command_buffer_reset const& flag_):flag(flag_.flag){}
F_command_buffer_reset(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_buffer_reset& operator = (F_command_buffer_reset flag_){flag = flag_.flag;return *this;}
F_command_buffer_reset operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_buffer_reset& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_buffer_reset operator | (F_command_buffer_reset flag_){return flag | flag_.flag;}
F_command_buffer_reset& operator |= (F_command_buffer_reset flag_){flag |= flag_.flag;return *this;}
F_command_buffer_reset operator & (F_command_buffer_reset flag_){return flag & flag_.flag;}
F_command_buffer_reset& operator &= (F_command_buffer_reset flag_){flag &= flag_.flag;return *this;}
F_command_buffer_reset operator ^ (F_command_buffer_reset flag_){return flag ^ flag_.flag;}
F_command_buffer_reset& operator ^= (F_command_buffer_reset flag_){flag ^= flag_.flag;return *this;}
F_command_buffer_reset operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_command_buffer_reset flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_command_buffer_reset flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_command_buffer_reset& clear(){flag = 0;return *this;}
F_command_buffer_reset(int flags_):flag(flags_) {}
F_command_buffer_reset all_flags(){
return b_release_resources;
}
F_command_buffer_reset& on_release_resources(){ flag |= b_release_resources; return *this; }
F_command_buffer_reset& off_release_resources(){ flag &= ~b_release_resources; return *this; }
};
F_command_buffer_reset inline operator|(F_command_buffer_reset::B bit1_, F_command_buffer_reset::B bit2_){F_command_buffer_reset flags(bit1_);return flags | bit2_;}

/*	VkSampleCountFlagBits*/
class F_sample_count {
private:
F_sample_count(int flag_);
public:
int flag;
enum B{
/*Sample count 1 supported*/
	b_1 = VK_SAMPLE_COUNT_1_BIT,
/*Sample count 2 supported*/
	b_2 = VK_SAMPLE_COUNT_2_BIT,
/*Sample count 4 supported*/
	b_4 = VK_SAMPLE_COUNT_4_BIT,
/*Sample count 8 supported*/
	b_8 = VK_SAMPLE_COUNT_8_BIT,
/*Sample count 16 supported*/
	b_16 = VK_SAMPLE_COUNT_16_BIT,
/*Sample count 32 supported*/
	b_32 = VK_SAMPLE_COUNT_32_BIT,
/*Sample count 64 supported*/
	b_64 = VK_SAMPLE_COUNT_64_BIT,
};
F_sample_count():flag(0){}
F_sample_count(B bits_):flag(static_cast<int>(bits_)){}
F_sample_count(F_sample_count const& flag_):flag(flag_.flag){}
F_sample_count(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sample_count& operator = (F_sample_count flag_){flag = flag_.flag;return *this;}
F_sample_count operator | (B bit_){return flag | static_cast<int>(bit_);}
F_sample_count& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_sample_count operator | (F_sample_count flag_){return flag | flag_.flag;}
F_sample_count& operator |= (F_sample_count flag_){flag |= flag_.flag;return *this;}
F_sample_count operator & (F_sample_count flag_){return flag & flag_.flag;}
F_sample_count& operator &= (F_sample_count flag_){flag &= flag_.flag;return *this;}
F_sample_count operator ^ (F_sample_count flag_){return flag ^ flag_.flag;}
F_sample_count& operator ^= (F_sample_count flag_){flag ^= flag_.flag;return *this;}
F_sample_count operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_sample_count flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_sample_count flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_sample_count& clear(){flag = 0;return *this;}
F_sample_count(int flags_):flag(flags_) {}
F_sample_count all_flags(){
return b_1 | b_2 | b_4 | b_8 | b_16 | b_32 | b_64;
}
F_sample_count& on_1(){ flag |= b_1; return *this; }
F_sample_count& off_1(){ flag &= ~b_1; return *this; }
F_sample_count& on_2(){ flag |= b_2; return *this; }
F_sample_count& off_2(){ flag &= ~b_2; return *this; }
F_sample_count& on_4(){ flag |= b_4; return *this; }
F_sample_count& off_4(){ flag &= ~b_4; return *this; }
F_sample_count& on_8(){ flag |= b_8; return *this; }
F_sample_count& off_8(){ flag &= ~b_8; return *this; }
F_sample_count& on_16(){ flag |= b_16; return *this; }
F_sample_count& off_16(){ flag &= ~b_16; return *this; }
F_sample_count& on_32(){ flag |= b_32; return *this; }
F_sample_count& off_32(){ flag &= ~b_32; return *this; }
F_sample_count& on_64(){ flag |= b_64; return *this; }
F_sample_count& off_64(){ flag &= ~b_64; return *this; }
};
F_sample_count inline operator|(F_sample_count::B bit1_, F_sample_count::B bit2_){F_sample_count flags(bit1_);return flags | bit2_;}

/*	VkAttachmentDescriptionFlagBits*/
class F_attachment_description {
private:
F_attachment_description(int flag_);
public:
int flag;
enum B{
/*The attachment may alias physical memory of another attachment in the same render pass*/
	b_may_alias = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT,
};
F_attachment_description():flag(0){}
F_attachment_description(B bits_):flag(static_cast<int>(bits_)){}
F_attachment_description(F_attachment_description const& flag_):flag(flag_.flag){}
F_attachment_description(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_attachment_description& operator = (F_attachment_description flag_){flag = flag_.flag;return *this;}
F_attachment_description operator | (B bit_){return flag | static_cast<int>(bit_);}
F_attachment_description& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_attachment_description operator | (F_attachment_description flag_){return flag | flag_.flag;}
F_attachment_description& operator |= (F_attachment_description flag_){flag |= flag_.flag;return *this;}
F_attachment_description operator & (F_attachment_description flag_){return flag & flag_.flag;}
F_attachment_description& operator &= (F_attachment_description flag_){flag &= flag_.flag;return *this;}
F_attachment_description operator ^ (F_attachment_description flag_){return flag ^ flag_.flag;}
F_attachment_description& operator ^= (F_attachment_description flag_){flag ^= flag_.flag;return *this;}
F_attachment_description operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_attachment_description flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_attachment_description flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_attachment_description& clear(){flag = 0;return *this;}
F_attachment_description(int flags_):flag(flags_) {}
F_attachment_description all_flags(){
return b_may_alias;
}
F_attachment_description& on_may_alias(){ flag |= b_may_alias; return *this; }
F_attachment_description& off_may_alias(){ flag &= ~b_may_alias; return *this; }
};
F_attachment_description inline operator|(F_attachment_description::B bit1_, F_attachment_description::B bit2_){F_attachment_description flags(bit1_);return flags | bit2_;}

/*	VkStencilFaceFlagBits*/
class F_stencil_face {
private:
F_stencil_face(int flag_);
public:
int flag;
enum B{
/*Front face*/
	b_front = VK_STENCIL_FACE_FRONT_BIT,
/*Back face*/
	b_back = VK_STENCIL_FACE_BACK_BIT,
/*Front and back faces*/
	b_vk_stencil_front_and_back = VK_STENCIL_FRONT_AND_BACK,
};
F_stencil_face():flag(0){}
F_stencil_face(B bits_):flag(static_cast<int>(bits_)){}
F_stencil_face(F_stencil_face const& flag_):flag(flag_.flag){}
F_stencil_face(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_stencil_face& operator = (F_stencil_face flag_){flag = flag_.flag;return *this;}
F_stencil_face operator | (B bit_){return flag | static_cast<int>(bit_);}
F_stencil_face& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_stencil_face operator | (F_stencil_face flag_){return flag | flag_.flag;}
F_stencil_face& operator |= (F_stencil_face flag_){flag |= flag_.flag;return *this;}
F_stencil_face operator & (F_stencil_face flag_){return flag & flag_.flag;}
F_stencil_face& operator &= (F_stencil_face flag_){flag &= flag_.flag;return *this;}
F_stencil_face operator ^ (F_stencil_face flag_){return flag ^ flag_.flag;}
F_stencil_face& operator ^= (F_stencil_face flag_){flag ^= flag_.flag;return *this;}
F_stencil_face operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_stencil_face flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_stencil_face flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_stencil_face& clear(){flag = 0;return *this;}
F_stencil_face(int flags_):flag(flags_) {}
F_stencil_face all_flags(){
return b_front | b_back | b_vk_stencil_front_and_back;
}
F_stencil_face& on_front(){ flag |= b_front; return *this; }
F_stencil_face& off_front(){ flag &= ~b_front; return *this; }
F_stencil_face& on_back(){ flag |= b_back; return *this; }
F_stencil_face& off_back(){ flag &= ~b_back; return *this; }
F_stencil_face& on_vk_stencil_front_and_back(){ flag |= b_vk_stencil_front_and_back; return *this; }
F_stencil_face& off_vk_stencil_front_and_back(){ flag &= ~b_vk_stencil_front_and_back; return *this; }
};
F_stencil_face inline operator|(F_stencil_face::B bit1_, F_stencil_face::B bit2_){F_stencil_face flags(bit1_);return flags | bit2_;}

/*	VkDescriptorPoolCreateFlagBits*/
class F_descriptor_pool_create {
private:
F_descriptor_pool_create(int flag_);
public:
int flag;
enum B{
/*Descriptor sets may be freed individually*/
	b_free_descriptor_set = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT,
};
F_descriptor_pool_create():flag(0){}
F_descriptor_pool_create(B bits_):flag(static_cast<int>(bits_)){}
F_descriptor_pool_create(F_descriptor_pool_create const& flag_):flag(flag_.flag){}
F_descriptor_pool_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_pool_create& operator = (F_descriptor_pool_create flag_){flag = flag_.flag;return *this;}
F_descriptor_pool_create operator | (B bit_){return flag | static_cast<int>(bit_);}
F_descriptor_pool_create& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_pool_create operator | (F_descriptor_pool_create flag_){return flag | flag_.flag;}
F_descriptor_pool_create& operator |= (F_descriptor_pool_create flag_){flag |= flag_.flag;return *this;}
F_descriptor_pool_create operator & (F_descriptor_pool_create flag_){return flag & flag_.flag;}
F_descriptor_pool_create& operator &= (F_descriptor_pool_create flag_){flag &= flag_.flag;return *this;}
F_descriptor_pool_create operator ^ (F_descriptor_pool_create flag_){return flag ^ flag_.flag;}
F_descriptor_pool_create& operator ^= (F_descriptor_pool_create flag_){flag ^= flag_.flag;return *this;}
F_descriptor_pool_create operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_descriptor_pool_create flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_descriptor_pool_create flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_descriptor_pool_create& clear(){flag = 0;return *this;}
F_descriptor_pool_create(int flags_):flag(flags_) {}
F_descriptor_pool_create all_flags(){
return b_free_descriptor_set;
}
F_descriptor_pool_create& on_free_descriptor_set(){ flag |= b_free_descriptor_set; return *this; }
F_descriptor_pool_create& off_free_descriptor_set(){ flag &= ~b_free_descriptor_set; return *this; }
};
F_descriptor_pool_create inline operator|(F_descriptor_pool_create::B bit1_, F_descriptor_pool_create::B bit2_){F_descriptor_pool_create flags(bit1_);return flags | bit2_;}

/*	VkDependencyFlagBits*/
class F_dependency {
private:
F_dependency(int flag_);
public:
int flag;
enum B{
/*Dependency is per pixel region */
	b_by_region = VK_DEPENDENCY_BY_REGION_BIT,
};
F_dependency():flag(0){}
F_dependency(B bits_):flag(static_cast<int>(bits_)){}
F_dependency(F_dependency const& flag_):flag(flag_.flag){}
F_dependency(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_dependency& operator = (F_dependency flag_){flag = flag_.flag;return *this;}
F_dependency operator | (B bit_){return flag | static_cast<int>(bit_);}
F_dependency& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_dependency operator | (F_dependency flag_){return flag | flag_.flag;}
F_dependency& operator |= (F_dependency flag_){flag |= flag_.flag;return *this;}
F_dependency operator & (F_dependency flag_){return flag & flag_.flag;}
F_dependency& operator &= (F_dependency flag_){flag &= flag_.flag;return *this;}
F_dependency operator ^ (F_dependency flag_){return flag ^ flag_.flag;}
F_dependency& operator ^= (F_dependency flag_){flag ^= flag_.flag;return *this;}
F_dependency operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_dependency flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_dependency flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_dependency& clear(){flag = 0;return *this;}
F_dependency(int flags_):flag(flags_) {}
F_dependency all_flags(){
return b_by_region;
}
F_dependency& on_by_region(){ flag |= b_by_region; return *this; }
F_dependency& off_by_region(){ flag &= ~b_by_region; return *this; }
};
F_dependency inline operator|(F_dependency::B bit1_, F_dependency::B bit2_){F_dependency flags(bit1_);return flags | bit2_;}

/*	VkDisplayPlaneAlphaFlagBitsKHR*/
class F_display_plane_alpha_KHR {
private:
F_display_plane_alpha_KHR(int flag_);
public:
int flag;
enum B{
	b_opaque_khr = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR,
	b_global_khr = VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,
	b_per_pixel_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR,
	b_per_pixel_premultiplied_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR,
};
F_display_plane_alpha_KHR():flag(0){}
F_display_plane_alpha_KHR(B bits_):flag(static_cast<int>(bits_)){}
F_display_plane_alpha_KHR(F_display_plane_alpha_KHR const& flag_):flag(flag_.flag){}
F_display_plane_alpha_KHR(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_display_plane_alpha_KHR& operator = (F_display_plane_alpha_KHR flag_){flag = flag_.flag;return *this;}
F_display_plane_alpha_KHR operator | (B bit_){return flag | static_cast<int>(bit_);}
F_display_plane_alpha_KHR& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_display_plane_alpha_KHR operator | (F_display_plane_alpha_KHR flag_){return flag | flag_.flag;}
F_display_plane_alpha_KHR& operator |= (F_display_plane_alpha_KHR flag_){flag |= flag_.flag;return *this;}
F_display_plane_alpha_KHR operator & (F_display_plane_alpha_KHR flag_){return flag & flag_.flag;}
F_display_plane_alpha_KHR& operator &= (F_display_plane_alpha_KHR flag_){flag &= flag_.flag;return *this;}
F_display_plane_alpha_KHR operator ^ (F_display_plane_alpha_KHR flag_){return flag ^ flag_.flag;}
F_display_plane_alpha_KHR& operator ^= (F_display_plane_alpha_KHR flag_){flag ^= flag_.flag;return *this;}
F_display_plane_alpha_KHR operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_display_plane_alpha_KHR flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_display_plane_alpha_KHR flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_display_plane_alpha_KHR& clear(){flag = 0;return *this;}
F_display_plane_alpha_KHR(int flags_):flag(flags_) {}
F_display_plane_alpha_KHR all_flags(){
return b_opaque_khr | b_global_khr | b_per_pixel_khr | b_per_pixel_premultiplied_khr;
}
F_display_plane_alpha_KHR& on_opaque_khr(){ flag |= b_opaque_khr; return *this; }
F_display_plane_alpha_KHR& off_opaque_khr(){ flag &= ~b_opaque_khr; return *this; }
F_display_plane_alpha_KHR& on_global_khr(){ flag |= b_global_khr; return *this; }
F_display_plane_alpha_KHR& off_global_khr(){ flag &= ~b_global_khr; return *this; }
F_display_plane_alpha_KHR& on_per_pixel_khr(){ flag |= b_per_pixel_khr; return *this; }
F_display_plane_alpha_KHR& off_per_pixel_khr(){ flag &= ~b_per_pixel_khr; return *this; }
F_display_plane_alpha_KHR& on_per_pixel_premultiplied_khr(){ flag |= b_per_pixel_premultiplied_khr; return *this; }
F_display_plane_alpha_KHR& off_per_pixel_premultiplied_khr(){ flag &= ~b_per_pixel_premultiplied_khr; return *this; }
};
F_display_plane_alpha_KHR inline operator|(F_display_plane_alpha_KHR::B bit1_, F_display_plane_alpha_KHR::B bit2_){F_display_plane_alpha_KHR flags(bit1_);return flags | bit2_;}

/*	VkCompositeAlphaFlagBitsKHR*/
class F_composite_alpha_KHR {
private:
F_composite_alpha_KHR(int flag_);
public:
int flag;
enum B{
	b_opaque_khr = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
	b_pre_multiplied_khr = VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
	b_post_multiplied_khr = VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
	b_inherit_khr = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
};
F_composite_alpha_KHR():flag(0){}
F_composite_alpha_KHR(B bits_):flag(static_cast<int>(bits_)){}
F_composite_alpha_KHR(F_composite_alpha_KHR const& flag_):flag(flag_.flag){}
F_composite_alpha_KHR(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_composite_alpha_KHR& operator = (F_composite_alpha_KHR flag_){flag = flag_.flag;return *this;}
F_composite_alpha_KHR operator | (B bit_){return flag | static_cast<int>(bit_);}
F_composite_alpha_KHR& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_composite_alpha_KHR operator | (F_composite_alpha_KHR flag_){return flag | flag_.flag;}
F_composite_alpha_KHR& operator |= (F_composite_alpha_KHR flag_){flag |= flag_.flag;return *this;}
F_composite_alpha_KHR operator & (F_composite_alpha_KHR flag_){return flag & flag_.flag;}
F_composite_alpha_KHR& operator &= (F_composite_alpha_KHR flag_){flag &= flag_.flag;return *this;}
F_composite_alpha_KHR operator ^ (F_composite_alpha_KHR flag_){return flag ^ flag_.flag;}
F_composite_alpha_KHR& operator ^= (F_composite_alpha_KHR flag_){flag ^= flag_.flag;return *this;}
F_composite_alpha_KHR operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_composite_alpha_KHR flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_composite_alpha_KHR flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_composite_alpha_KHR& clear(){flag = 0;return *this;}
F_composite_alpha_KHR(int flags_):flag(flags_) {}
F_composite_alpha_KHR all_flags(){
return b_opaque_khr | b_pre_multiplied_khr | b_post_multiplied_khr | b_inherit_khr;
}
F_composite_alpha_KHR& on_opaque_khr(){ flag |= b_opaque_khr; return *this; }
F_composite_alpha_KHR& off_opaque_khr(){ flag &= ~b_opaque_khr; return *this; }
F_composite_alpha_KHR& on_pre_multiplied_khr(){ flag |= b_pre_multiplied_khr; return *this; }
F_composite_alpha_KHR& off_pre_multiplied_khr(){ flag &= ~b_pre_multiplied_khr; return *this; }
F_composite_alpha_KHR& on_post_multiplied_khr(){ flag |= b_post_multiplied_khr; return *this; }
F_composite_alpha_KHR& off_post_multiplied_khr(){ flag &= ~b_post_multiplied_khr; return *this; }
F_composite_alpha_KHR& on_inherit_khr(){ flag |= b_inherit_khr; return *this; }
F_composite_alpha_KHR& off_inherit_khr(){ flag &= ~b_inherit_khr; return *this; }
};
F_composite_alpha_KHR inline operator|(F_composite_alpha_KHR::B bit1_, F_composite_alpha_KHR::B bit2_){F_composite_alpha_KHR flags(bit1_);return flags | bit2_;}

/*	VkSurfaceTransformFlagBitsKHR*/
class F_surface_transform_KHR {
private:
F_surface_transform_KHR(int flag_);
public:
int flag;
enum B{
	b_identity_khr = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR,
	b_rotate_90_khr = VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR,
	b_rotate_180_khr = VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR,
	b_rotate_270_khr = VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR,
	b_horizontal_mirror_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR,
	b_horizontal_mirror_rotate_90_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR,
	b_horizontal_mirror_rotate_180_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR,
	b_horizontal_mirror_rotate_270_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR,
	b_inherit_khr = VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR,
};
F_surface_transform_KHR():flag(0){}
F_surface_transform_KHR(B bits_):flag(static_cast<int>(bits_)){}
F_surface_transform_KHR(F_surface_transform_KHR const& flag_):flag(flag_.flag){}
F_surface_transform_KHR(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_transform_KHR& operator = (F_surface_transform_KHR flag_){flag = flag_.flag;return *this;}
F_surface_transform_KHR operator | (B bit_){return flag | static_cast<int>(bit_);}
F_surface_transform_KHR& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_transform_KHR operator | (F_surface_transform_KHR flag_){return flag | flag_.flag;}
F_surface_transform_KHR& operator |= (F_surface_transform_KHR flag_){flag |= flag_.flag;return *this;}
F_surface_transform_KHR operator & (F_surface_transform_KHR flag_){return flag & flag_.flag;}
F_surface_transform_KHR& operator &= (F_surface_transform_KHR flag_){flag &= flag_.flag;return *this;}
F_surface_transform_KHR operator ^ (F_surface_transform_KHR flag_){return flag ^ flag_.flag;}
F_surface_transform_KHR& operator ^= (F_surface_transform_KHR flag_){flag ^= flag_.flag;return *this;}
F_surface_transform_KHR operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_surface_transform_KHR flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_surface_transform_KHR flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_surface_transform_KHR& clear(){flag = 0;return *this;}
F_surface_transform_KHR(int flags_):flag(flags_) {}
F_surface_transform_KHR all_flags(){
return b_identity_khr | b_rotate_90_khr | b_rotate_180_khr | b_rotate_270_khr | b_horizontal_mirror_khr | b_horizontal_mirror_rotate_90_khr | b_horizontal_mirror_rotate_180_khr | b_horizontal_mirror_rotate_270_khr | b_inherit_khr;
}
F_surface_transform_KHR& on_identity_khr(){ flag |= b_identity_khr; return *this; }
F_surface_transform_KHR& off_identity_khr(){ flag &= ~b_identity_khr; return *this; }
F_surface_transform_KHR& on_rotate_90_khr(){ flag |= b_rotate_90_khr; return *this; }
F_surface_transform_KHR& off_rotate_90_khr(){ flag &= ~b_rotate_90_khr; return *this; }
F_surface_transform_KHR& on_rotate_180_khr(){ flag |= b_rotate_180_khr; return *this; }
F_surface_transform_KHR& off_rotate_180_khr(){ flag &= ~b_rotate_180_khr; return *this; }
F_surface_transform_KHR& on_rotate_270_khr(){ flag |= b_rotate_270_khr; return *this; }
F_surface_transform_KHR& off_rotate_270_khr(){ flag &= ~b_rotate_270_khr; return *this; }
F_surface_transform_KHR& on_horizontal_mirror_khr(){ flag |= b_horizontal_mirror_khr; return *this; }
F_surface_transform_KHR& off_horizontal_mirror_khr(){ flag &= ~b_horizontal_mirror_khr; return *this; }
F_surface_transform_KHR& on_horizontal_mirror_rotate_90_khr(){ flag |= b_horizontal_mirror_rotate_90_khr; return *this; }
F_surface_transform_KHR& off_horizontal_mirror_rotate_90_khr(){ flag &= ~b_horizontal_mirror_rotate_90_khr; return *this; }
F_surface_transform_KHR& on_horizontal_mirror_rotate_180_khr(){ flag |= b_horizontal_mirror_rotate_180_khr; return *this; }
F_surface_transform_KHR& off_horizontal_mirror_rotate_180_khr(){ flag &= ~b_horizontal_mirror_rotate_180_khr; return *this; }
F_surface_transform_KHR& on_horizontal_mirror_rotate_270_khr(){ flag |= b_horizontal_mirror_rotate_270_khr; return *this; }
F_surface_transform_KHR& off_horizontal_mirror_rotate_270_khr(){ flag &= ~b_horizontal_mirror_rotate_270_khr; return *this; }
F_surface_transform_KHR& on_inherit_khr(){ flag |= b_inherit_khr; return *this; }
F_surface_transform_KHR& off_inherit_khr(){ flag &= ~b_inherit_khr; return *this; }
};
F_surface_transform_KHR inline operator|(F_surface_transform_KHR::B bit1_, F_surface_transform_KHR::B bit2_){F_surface_transform_KHR flags(bit1_);return flags | bit2_;}

/*	VkDebugReportFlagBitsEXT*/
class F_debug_report_EXT {
private:
F_debug_report_EXT(int flag_);
public:
int flag;
enum B{
	b_information_ext = VK_DEBUG_REPORT_INFORMATION_BIT_EXT,
	b_warning_ext = VK_DEBUG_REPORT_WARNING_BIT_EXT,
	b_performance_warning_ext = VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT,
	b_error_ext = VK_DEBUG_REPORT_ERROR_BIT_EXT,
	b_debug_ext = VK_DEBUG_REPORT_DEBUG_BIT_EXT,
};
F_debug_report_EXT():flag(0){}
F_debug_report_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_debug_report_EXT(F_debug_report_EXT const& flag_):flag(flag_.flag){}
F_debug_report_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_report_EXT& operator = (F_debug_report_EXT flag_){flag = flag_.flag;return *this;}
F_debug_report_EXT operator | (B bit_){return flag | static_cast<int>(bit_);}
F_debug_report_EXT& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_report_EXT operator | (F_debug_report_EXT flag_){return flag | flag_.flag;}
F_debug_report_EXT& operator |= (F_debug_report_EXT flag_){flag |= flag_.flag;return *this;}
F_debug_report_EXT operator & (F_debug_report_EXT flag_){return flag & flag_.flag;}
F_debug_report_EXT& operator &= (F_debug_report_EXT flag_){flag &= flag_.flag;return *this;}
F_debug_report_EXT operator ^ (F_debug_report_EXT flag_){return flag ^ flag_.flag;}
F_debug_report_EXT& operator ^= (F_debug_report_EXT flag_){flag ^= flag_.flag;return *this;}
F_debug_report_EXT operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_debug_report_EXT flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_debug_report_EXT flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_debug_report_EXT& clear(){flag = 0;return *this;}
F_debug_report_EXT(int flags_):flag(flags_) {}
F_debug_report_EXT all_flags(){
return b_information_ext | b_warning_ext | b_performance_warning_ext | b_error_ext | b_debug_ext;
}
F_debug_report_EXT& on_information_ext(){ flag |= b_information_ext; return *this; }
F_debug_report_EXT& off_information_ext(){ flag &= ~b_information_ext; return *this; }
F_debug_report_EXT& on_warning_ext(){ flag |= b_warning_ext; return *this; }
F_debug_report_EXT& off_warning_ext(){ flag &= ~b_warning_ext; return *this; }
F_debug_report_EXT& on_performance_warning_ext(){ flag |= b_performance_warning_ext; return *this; }
F_debug_report_EXT& off_performance_warning_ext(){ flag &= ~b_performance_warning_ext; return *this; }
F_debug_report_EXT& on_error_ext(){ flag |= b_error_ext; return *this; }
F_debug_report_EXT& off_error_ext(){ flag &= ~b_error_ext; return *this; }
F_debug_report_EXT& on_debug_ext(){ flag |= b_debug_ext; return *this; }
F_debug_report_EXT& off_debug_ext(){ flag &= ~b_debug_ext; return *this; }
};
F_debug_report_EXT inline operator|(F_debug_report_EXT::B bit1_, F_debug_report_EXT::B bit2_){F_debug_report_EXT flags(bit1_);return flags | bit2_;}

/*	VkExternalMemoryHandleTypeFlagBitsNV*/
class F_external_memory_handle_type_NV {
private:
F_external_memory_handle_type_NV(int flag_);
public:
int flag;
enum B{
	b_opaque_win32_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV,
	b_opaque_win32_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV,
	b_d3d11_image_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV,
	b_d3d11_image_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV,
};
F_external_memory_handle_type_NV():flag(0){}
F_external_memory_handle_type_NV(B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_handle_type_NV(F_external_memory_handle_type_NV const& flag_):flag(flag_.flag){}
F_external_memory_handle_type_NV(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_handle_type_NV& operator = (F_external_memory_handle_type_NV flag_){flag = flag_.flag;return *this;}
F_external_memory_handle_type_NV operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_handle_type_NV& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_handle_type_NV operator | (F_external_memory_handle_type_NV flag_){return flag | flag_.flag;}
F_external_memory_handle_type_NV& operator |= (F_external_memory_handle_type_NV flag_){flag |= flag_.flag;return *this;}
F_external_memory_handle_type_NV operator & (F_external_memory_handle_type_NV flag_){return flag & flag_.flag;}
F_external_memory_handle_type_NV& operator &= (F_external_memory_handle_type_NV flag_){flag &= flag_.flag;return *this;}
F_external_memory_handle_type_NV operator ^ (F_external_memory_handle_type_NV flag_){return flag ^ flag_.flag;}
F_external_memory_handle_type_NV& operator ^= (F_external_memory_handle_type_NV flag_){flag ^= flag_.flag;return *this;}
F_external_memory_handle_type_NV operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_memory_handle_type_NV flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_memory_handle_type_NV flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_memory_handle_type_NV& clear(){flag = 0;return *this;}
F_external_memory_handle_type_NV(int flags_):flag(flags_) {}
F_external_memory_handle_type_NV all_flags(){
return b_opaque_win32_nv | b_opaque_win32_kmt_nv | b_d3d11_image_nv | b_d3d11_image_kmt_nv;
}
F_external_memory_handle_type_NV& on_opaque_win32_nv(){ flag |= b_opaque_win32_nv; return *this; }
F_external_memory_handle_type_NV& off_opaque_win32_nv(){ flag &= ~b_opaque_win32_nv; return *this; }
F_external_memory_handle_type_NV& on_opaque_win32_kmt_nv(){ flag |= b_opaque_win32_kmt_nv; return *this; }
F_external_memory_handle_type_NV& off_opaque_win32_kmt_nv(){ flag &= ~b_opaque_win32_kmt_nv; return *this; }
F_external_memory_handle_type_NV& on_d3d11_image_nv(){ flag |= b_d3d11_image_nv; return *this; }
F_external_memory_handle_type_NV& off_d3d11_image_nv(){ flag &= ~b_d3d11_image_nv; return *this; }
F_external_memory_handle_type_NV& on_d3d11_image_kmt_nv(){ flag |= b_d3d11_image_kmt_nv; return *this; }
F_external_memory_handle_type_NV& off_d3d11_image_kmt_nv(){ flag &= ~b_d3d11_image_kmt_nv; return *this; }
};
F_external_memory_handle_type_NV inline operator|(F_external_memory_handle_type_NV::B bit1_, F_external_memory_handle_type_NV::B bit2_){F_external_memory_handle_type_NV flags(bit1_);return flags | bit2_;}

/*	VkExternalMemoryFeatureFlagBitsNV*/
class F_external_memory_feature_NV {
private:
F_external_memory_feature_NV(int flag_);
public:
int flag;
enum B{
	b_dedicated_only_nv = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV,
	b_exportable_nv = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV,
	b_importable_nv = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV,
};
F_external_memory_feature_NV():flag(0){}
F_external_memory_feature_NV(B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_feature_NV(F_external_memory_feature_NV const& flag_):flag(flag_.flag){}
F_external_memory_feature_NV(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_feature_NV& operator = (F_external_memory_feature_NV flag_){flag = flag_.flag;return *this;}
F_external_memory_feature_NV operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_feature_NV& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_feature_NV operator | (F_external_memory_feature_NV flag_){return flag | flag_.flag;}
F_external_memory_feature_NV& operator |= (F_external_memory_feature_NV flag_){flag |= flag_.flag;return *this;}
F_external_memory_feature_NV operator & (F_external_memory_feature_NV flag_){return flag & flag_.flag;}
F_external_memory_feature_NV& operator &= (F_external_memory_feature_NV flag_){flag &= flag_.flag;return *this;}
F_external_memory_feature_NV operator ^ (F_external_memory_feature_NV flag_){return flag ^ flag_.flag;}
F_external_memory_feature_NV& operator ^= (F_external_memory_feature_NV flag_){flag ^= flag_.flag;return *this;}
F_external_memory_feature_NV operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_memory_feature_NV flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_memory_feature_NV flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_memory_feature_NV& clear(){flag = 0;return *this;}
F_external_memory_feature_NV(int flags_):flag(flags_) {}
F_external_memory_feature_NV all_flags(){
return b_dedicated_only_nv | b_exportable_nv | b_importable_nv;
}
F_external_memory_feature_NV& on_dedicated_only_nv(){ flag |= b_dedicated_only_nv; return *this; }
F_external_memory_feature_NV& off_dedicated_only_nv(){ flag &= ~b_dedicated_only_nv; return *this; }
F_external_memory_feature_NV& on_exportable_nv(){ flag |= b_exportable_nv; return *this; }
F_external_memory_feature_NV& off_exportable_nv(){ flag &= ~b_exportable_nv; return *this; }
F_external_memory_feature_NV& on_importable_nv(){ flag |= b_importable_nv; return *this; }
F_external_memory_feature_NV& off_importable_nv(){ flag &= ~b_importable_nv; return *this; }
};
F_external_memory_feature_NV inline operator|(F_external_memory_feature_NV::B bit1_, F_external_memory_feature_NV::B bit2_){F_external_memory_feature_NV flags(bit1_);return flags | bit2_;}

/*	VkSubgroupFeatureFlagBits*/
class F_subgroup_feature {
private:
F_subgroup_feature(int flag_);
public:
int flag;
enum B{
/*Basic subgroup operations*/
	b_basic = VK_SUBGROUP_FEATURE_BASIC_BIT,
/*Vote subgroup operations*/
	b_vote = VK_SUBGROUP_FEATURE_VOTE_BIT,
/*Arithmetic subgroup operations*/
	b_arithmetic = VK_SUBGROUP_FEATURE_ARITHMETIC_BIT,
/*Ballot subgroup operations*/
	b_ballot = VK_SUBGROUP_FEATURE_BALLOT_BIT,
/*Shuffle subgroup operations*/
	b_shuffle = VK_SUBGROUP_FEATURE_SHUFFLE_BIT,
/*Shuffle relative subgroup operations*/
	b_shuffle_relative = VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT,
/*Clustered subgroup operations*/
	b_clustered = VK_SUBGROUP_FEATURE_CLUSTERED_BIT,
/*Quad subgroup operations*/
	b_quad = VK_SUBGROUP_FEATURE_QUAD_BIT,
};
F_subgroup_feature():flag(0){}
F_subgroup_feature(B bits_):flag(static_cast<int>(bits_)){}
F_subgroup_feature(F_subgroup_feature const& flag_):flag(flag_.flag){}
F_subgroup_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_subgroup_feature& operator = (F_subgroup_feature flag_){flag = flag_.flag;return *this;}
F_subgroup_feature operator | (B bit_){return flag | static_cast<int>(bit_);}
F_subgroup_feature& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_subgroup_feature operator | (F_subgroup_feature flag_){return flag | flag_.flag;}
F_subgroup_feature& operator |= (F_subgroup_feature flag_){flag |= flag_.flag;return *this;}
F_subgroup_feature operator & (F_subgroup_feature flag_){return flag & flag_.flag;}
F_subgroup_feature& operator &= (F_subgroup_feature flag_){flag &= flag_.flag;return *this;}
F_subgroup_feature operator ^ (F_subgroup_feature flag_){return flag ^ flag_.flag;}
F_subgroup_feature& operator ^= (F_subgroup_feature flag_){flag ^= flag_.flag;return *this;}
F_subgroup_feature operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_subgroup_feature flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_subgroup_feature flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_subgroup_feature& clear(){flag = 0;return *this;}
F_subgroup_feature(int flags_):flag(flags_) {}
F_subgroup_feature all_flags(){
return b_basic | b_vote | b_arithmetic | b_ballot | b_shuffle | b_shuffle_relative | b_clustered | b_quad;
}
F_subgroup_feature& on_basic(){ flag |= b_basic; return *this; }
F_subgroup_feature& off_basic(){ flag &= ~b_basic; return *this; }
F_subgroup_feature& on_vote(){ flag |= b_vote; return *this; }
F_subgroup_feature& off_vote(){ flag &= ~b_vote; return *this; }
F_subgroup_feature& on_arithmetic(){ flag |= b_arithmetic; return *this; }
F_subgroup_feature& off_arithmetic(){ flag &= ~b_arithmetic; return *this; }
F_subgroup_feature& on_ballot(){ flag |= b_ballot; return *this; }
F_subgroup_feature& off_ballot(){ flag &= ~b_ballot; return *this; }
F_subgroup_feature& on_shuffle(){ flag |= b_shuffle; return *this; }
F_subgroup_feature& off_shuffle(){ flag &= ~b_shuffle; return *this; }
F_subgroup_feature& on_shuffle_relative(){ flag |= b_shuffle_relative; return *this; }
F_subgroup_feature& off_shuffle_relative(){ flag &= ~b_shuffle_relative; return *this; }
F_subgroup_feature& on_clustered(){ flag |= b_clustered; return *this; }
F_subgroup_feature& off_clustered(){ flag &= ~b_clustered; return *this; }
F_subgroup_feature& on_quad(){ flag |= b_quad; return *this; }
F_subgroup_feature& off_quad(){ flag &= ~b_quad; return *this; }
};
F_subgroup_feature inline operator|(F_subgroup_feature::B bit1_, F_subgroup_feature::B bit2_){F_subgroup_feature flags(bit1_);return flags | bit2_;}

/*	VkIndirectCommandsLayoutUsageFlagBitsNVX*/
class F_indirect_commands_layout_usage_NVX {
private:
F_indirect_commands_layout_usage_NVX(int flag_);
public:
int flag;
enum B{
	b_unordered_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX,
	b_sparse_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX,
	b_empty_executions_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX,
	b_indexed_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX,
};
F_indirect_commands_layout_usage_NVX():flag(0){}
F_indirect_commands_layout_usage_NVX(B bits_):flag(static_cast<int>(bits_)){}
F_indirect_commands_layout_usage_NVX(F_indirect_commands_layout_usage_NVX const& flag_):flag(flag_.flag){}
F_indirect_commands_layout_usage_NVX(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_indirect_commands_layout_usage_NVX& operator = (F_indirect_commands_layout_usage_NVX flag_){flag = flag_.flag;return *this;}
F_indirect_commands_layout_usage_NVX operator | (B bit_){return flag | static_cast<int>(bit_);}
F_indirect_commands_layout_usage_NVX& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_indirect_commands_layout_usage_NVX operator | (F_indirect_commands_layout_usage_NVX flag_){return flag | flag_.flag;}
F_indirect_commands_layout_usage_NVX& operator |= (F_indirect_commands_layout_usage_NVX flag_){flag |= flag_.flag;return *this;}
F_indirect_commands_layout_usage_NVX operator & (F_indirect_commands_layout_usage_NVX flag_){return flag & flag_.flag;}
F_indirect_commands_layout_usage_NVX& operator &= (F_indirect_commands_layout_usage_NVX flag_){flag &= flag_.flag;return *this;}
F_indirect_commands_layout_usage_NVX operator ^ (F_indirect_commands_layout_usage_NVX flag_){return flag ^ flag_.flag;}
F_indirect_commands_layout_usage_NVX& operator ^= (F_indirect_commands_layout_usage_NVX flag_){flag ^= flag_.flag;return *this;}
F_indirect_commands_layout_usage_NVX operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_indirect_commands_layout_usage_NVX flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_indirect_commands_layout_usage_NVX flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_indirect_commands_layout_usage_NVX& clear(){flag = 0;return *this;}
F_indirect_commands_layout_usage_NVX(int flags_):flag(flags_) {}
F_indirect_commands_layout_usage_NVX all_flags(){
return b_unordered_sequences_nvx | b_sparse_sequences_nvx | b_empty_executions_nvx | b_indexed_sequences_nvx;
}
F_indirect_commands_layout_usage_NVX& on_unordered_sequences_nvx(){ flag |= b_unordered_sequences_nvx; return *this; }
F_indirect_commands_layout_usage_NVX& off_unordered_sequences_nvx(){ flag &= ~b_unordered_sequences_nvx; return *this; }
F_indirect_commands_layout_usage_NVX& on_sparse_sequences_nvx(){ flag |= b_sparse_sequences_nvx; return *this; }
F_indirect_commands_layout_usage_NVX& off_sparse_sequences_nvx(){ flag &= ~b_sparse_sequences_nvx; return *this; }
F_indirect_commands_layout_usage_NVX& on_empty_executions_nvx(){ flag |= b_empty_executions_nvx; return *this; }
F_indirect_commands_layout_usage_NVX& off_empty_executions_nvx(){ flag &= ~b_empty_executions_nvx; return *this; }
F_indirect_commands_layout_usage_NVX& on_indexed_sequences_nvx(){ flag |= b_indexed_sequences_nvx; return *this; }
F_indirect_commands_layout_usage_NVX& off_indexed_sequences_nvx(){ flag &= ~b_indexed_sequences_nvx; return *this; }
};
F_indirect_commands_layout_usage_NVX inline operator|(F_indirect_commands_layout_usage_NVX::B bit1_, F_indirect_commands_layout_usage_NVX::B bit2_){F_indirect_commands_layout_usage_NVX flags(bit1_);return flags | bit2_;}

/*	VkObjectEntryUsageFlagBitsNVX*/
class F_object_entry_usage_NVX {
private:
F_object_entry_usage_NVX(int flag_);
public:
int flag;
enum B{
	b_graphics_nvx = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX,
	b_compute_nvx = VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX,
};
F_object_entry_usage_NVX():flag(0){}
F_object_entry_usage_NVX(B bits_):flag(static_cast<int>(bits_)){}
F_object_entry_usage_NVX(F_object_entry_usage_NVX const& flag_):flag(flag_.flag){}
F_object_entry_usage_NVX(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_object_entry_usage_NVX& operator = (F_object_entry_usage_NVX flag_){flag = flag_.flag;return *this;}
F_object_entry_usage_NVX operator | (B bit_){return flag | static_cast<int>(bit_);}
F_object_entry_usage_NVX& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_object_entry_usage_NVX operator | (F_object_entry_usage_NVX flag_){return flag | flag_.flag;}
F_object_entry_usage_NVX& operator |= (F_object_entry_usage_NVX flag_){flag |= flag_.flag;return *this;}
F_object_entry_usage_NVX operator & (F_object_entry_usage_NVX flag_){return flag & flag_.flag;}
F_object_entry_usage_NVX& operator &= (F_object_entry_usage_NVX flag_){flag &= flag_.flag;return *this;}
F_object_entry_usage_NVX operator ^ (F_object_entry_usage_NVX flag_){return flag ^ flag_.flag;}
F_object_entry_usage_NVX& operator ^= (F_object_entry_usage_NVX flag_){flag ^= flag_.flag;return *this;}
F_object_entry_usage_NVX operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_object_entry_usage_NVX flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_object_entry_usage_NVX flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_object_entry_usage_NVX& clear(){flag = 0;return *this;}
F_object_entry_usage_NVX(int flags_):flag(flags_) {}
F_object_entry_usage_NVX all_flags(){
return b_graphics_nvx | b_compute_nvx;
}
F_object_entry_usage_NVX& on_graphics_nvx(){ flag |= b_graphics_nvx; return *this; }
F_object_entry_usage_NVX& off_graphics_nvx(){ flag &= ~b_graphics_nvx; return *this; }
F_object_entry_usage_NVX& on_compute_nvx(){ flag |= b_compute_nvx; return *this; }
F_object_entry_usage_NVX& off_compute_nvx(){ flag &= ~b_compute_nvx; return *this; }
};
F_object_entry_usage_NVX inline operator|(F_object_entry_usage_NVX::B bit1_, F_object_entry_usage_NVX::B bit2_){F_object_entry_usage_NVX flags(bit1_);return flags | bit2_;}

/*	VkDescriptorSetLayoutCreateFlagBits*/
using F_descriptor_set_layout_create = 
			VkDescriptorSetLayoutCreateFlagBits;

/*	VkExternalMemoryHandleTypeFlagBits*/
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
F_external_memory_handle_type():flag(0){}
F_external_memory_handle_type(B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_handle_type(F_external_memory_handle_type const& flag_):flag(flag_.flag){}
F_external_memory_handle_type(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_handle_type& operator = (F_external_memory_handle_type flag_){flag = flag_.flag;return *this;}
F_external_memory_handle_type operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_handle_type& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_handle_type operator | (F_external_memory_handle_type flag_){return flag | flag_.flag;}
F_external_memory_handle_type& operator |= (F_external_memory_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_memory_handle_type operator & (F_external_memory_handle_type flag_){return flag & flag_.flag;}
F_external_memory_handle_type& operator &= (F_external_memory_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_memory_handle_type operator ^ (F_external_memory_handle_type flag_){return flag ^ flag_.flag;}
F_external_memory_handle_type& operator ^= (F_external_memory_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_memory_handle_type operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_memory_handle_type flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_memory_handle_type flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_memory_handle_type& clear(){flag = 0;return *this;}
F_external_memory_handle_type(int flags_):flag(flags_) {}
F_external_memory_handle_type all_flags(){
return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_d3d11_texture | b_d3d11_texture_kmt | b_d3d12_heap | b_d3d12_resource;
}
F_external_memory_handle_type& on_opaque_fd(){ flag |= b_opaque_fd; return *this; }
F_external_memory_handle_type& off_opaque_fd(){ flag &= ~b_opaque_fd; return *this; }
F_external_memory_handle_type& on_opaque_win32(){ flag |= b_opaque_win32; return *this; }
F_external_memory_handle_type& off_opaque_win32(){ flag &= ~b_opaque_win32; return *this; }
F_external_memory_handle_type& on_opaque_win32_kmt(){ flag |= b_opaque_win32_kmt; return *this; }
F_external_memory_handle_type& off_opaque_win32_kmt(){ flag &= ~b_opaque_win32_kmt; return *this; }
F_external_memory_handle_type& on_d3d11_texture(){ flag |= b_d3d11_texture; return *this; }
F_external_memory_handle_type& off_d3d11_texture(){ flag &= ~b_d3d11_texture; return *this; }
F_external_memory_handle_type& on_d3d11_texture_kmt(){ flag |= b_d3d11_texture_kmt; return *this; }
F_external_memory_handle_type& off_d3d11_texture_kmt(){ flag &= ~b_d3d11_texture_kmt; return *this; }
F_external_memory_handle_type& on_d3d12_heap(){ flag |= b_d3d12_heap; return *this; }
F_external_memory_handle_type& off_d3d12_heap(){ flag &= ~b_d3d12_heap; return *this; }
F_external_memory_handle_type& on_d3d12_resource(){ flag |= b_d3d12_resource; return *this; }
F_external_memory_handle_type& off_d3d12_resource(){ flag &= ~b_d3d12_resource; return *this; }
};
F_external_memory_handle_type inline operator|(F_external_memory_handle_type::B bit1_, F_external_memory_handle_type::B bit2_){F_external_memory_handle_type flags(bit1_);return flags | bit2_;}

/*	VkExternalMemoryFeatureFlagBits*/
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
F_external_memory_feature():flag(0){}
F_external_memory_feature(B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_feature(F_external_memory_feature const& flag_):flag(flag_.flag){}
F_external_memory_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_feature& operator = (F_external_memory_feature flag_){flag = flag_.flag;return *this;}
F_external_memory_feature operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_feature& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_feature operator | (F_external_memory_feature flag_){return flag | flag_.flag;}
F_external_memory_feature& operator |= (F_external_memory_feature flag_){flag |= flag_.flag;return *this;}
F_external_memory_feature operator & (F_external_memory_feature flag_){return flag & flag_.flag;}
F_external_memory_feature& operator &= (F_external_memory_feature flag_){flag &= flag_.flag;return *this;}
F_external_memory_feature operator ^ (F_external_memory_feature flag_){return flag ^ flag_.flag;}
F_external_memory_feature& operator ^= (F_external_memory_feature flag_){flag ^= flag_.flag;return *this;}
F_external_memory_feature operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_memory_feature flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_memory_feature flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_memory_feature& clear(){flag = 0;return *this;}
F_external_memory_feature(int flags_):flag(flags_) {}
F_external_memory_feature all_flags(){
return b_dedicated_only | b_exportable | b_importable;
}
F_external_memory_feature& on_dedicated_only(){ flag |= b_dedicated_only; return *this; }
F_external_memory_feature& off_dedicated_only(){ flag &= ~b_dedicated_only; return *this; }
F_external_memory_feature& on_exportable(){ flag |= b_exportable; return *this; }
F_external_memory_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
F_external_memory_feature& on_importable(){ flag |= b_importable; return *this; }
F_external_memory_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
F_external_memory_feature inline operator|(F_external_memory_feature::B bit1_, F_external_memory_feature::B bit2_){F_external_memory_feature flags(bit1_);return flags | bit2_;}

/*	VkExternalSemaphoreHandleTypeFlagBits*/
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
F_external_semaphore_handle_type():flag(0){}
F_external_semaphore_handle_type(B bits_):flag(static_cast<int>(bits_)){}
F_external_semaphore_handle_type(F_external_semaphore_handle_type const& flag_):flag(flag_.flag){}
F_external_semaphore_handle_type(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_semaphore_handle_type& operator = (F_external_semaphore_handle_type flag_){flag = flag_.flag;return *this;}
F_external_semaphore_handle_type operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_semaphore_handle_type& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_semaphore_handle_type operator | (F_external_semaphore_handle_type flag_){return flag | flag_.flag;}
F_external_semaphore_handle_type& operator |= (F_external_semaphore_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_semaphore_handle_type operator & (F_external_semaphore_handle_type flag_){return flag & flag_.flag;}
F_external_semaphore_handle_type& operator &= (F_external_semaphore_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_semaphore_handle_type operator ^ (F_external_semaphore_handle_type flag_){return flag ^ flag_.flag;}
F_external_semaphore_handle_type& operator ^= (F_external_semaphore_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_semaphore_handle_type operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_semaphore_handle_type flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_semaphore_handle_type flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_semaphore_handle_type& clear(){flag = 0;return *this;}
F_external_semaphore_handle_type(int flags_):flag(flags_) {}
F_external_semaphore_handle_type all_flags(){
return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_d3d12_fence | b_sync_fd;
}
F_external_semaphore_handle_type& on_opaque_fd(){ flag |= b_opaque_fd; return *this; }
F_external_semaphore_handle_type& off_opaque_fd(){ flag &= ~b_opaque_fd; return *this; }
F_external_semaphore_handle_type& on_opaque_win32(){ flag |= b_opaque_win32; return *this; }
F_external_semaphore_handle_type& off_opaque_win32(){ flag &= ~b_opaque_win32; return *this; }
F_external_semaphore_handle_type& on_opaque_win32_kmt(){ flag |= b_opaque_win32_kmt; return *this; }
F_external_semaphore_handle_type& off_opaque_win32_kmt(){ flag &= ~b_opaque_win32_kmt; return *this; }
F_external_semaphore_handle_type& on_d3d12_fence(){ flag |= b_d3d12_fence; return *this; }
F_external_semaphore_handle_type& off_d3d12_fence(){ flag &= ~b_d3d12_fence; return *this; }
F_external_semaphore_handle_type& on_sync_fd(){ flag |= b_sync_fd; return *this; }
F_external_semaphore_handle_type& off_sync_fd(){ flag &= ~b_sync_fd; return *this; }
};
F_external_semaphore_handle_type inline operator|(F_external_semaphore_handle_type::B bit1_, F_external_semaphore_handle_type::B bit2_){F_external_semaphore_handle_type flags(bit1_);return flags | bit2_;}

/*	VkExternalSemaphoreFeatureFlagBits*/
class F_external_semaphore_feature {
private:
F_external_semaphore_feature(int flag_);
public:
int flag;
enum B{
	b_exportable = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,
	b_importable = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,
};
F_external_semaphore_feature():flag(0){}
F_external_semaphore_feature(B bits_):flag(static_cast<int>(bits_)){}
F_external_semaphore_feature(F_external_semaphore_feature const& flag_):flag(flag_.flag){}
F_external_semaphore_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_semaphore_feature& operator = (F_external_semaphore_feature flag_){flag = flag_.flag;return *this;}
F_external_semaphore_feature operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_semaphore_feature& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_semaphore_feature operator | (F_external_semaphore_feature flag_){return flag | flag_.flag;}
F_external_semaphore_feature& operator |= (F_external_semaphore_feature flag_){flag |= flag_.flag;return *this;}
F_external_semaphore_feature operator & (F_external_semaphore_feature flag_){return flag & flag_.flag;}
F_external_semaphore_feature& operator &= (F_external_semaphore_feature flag_){flag &= flag_.flag;return *this;}
F_external_semaphore_feature operator ^ (F_external_semaphore_feature flag_){return flag ^ flag_.flag;}
F_external_semaphore_feature& operator ^= (F_external_semaphore_feature flag_){flag ^= flag_.flag;return *this;}
F_external_semaphore_feature operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_semaphore_feature flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_semaphore_feature flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_semaphore_feature& clear(){flag = 0;return *this;}
F_external_semaphore_feature(int flags_):flag(flags_) {}
F_external_semaphore_feature all_flags(){
return b_exportable | b_importable;
}
F_external_semaphore_feature& on_exportable(){ flag |= b_exportable; return *this; }
F_external_semaphore_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
F_external_semaphore_feature& on_importable(){ flag |= b_importable; return *this; }
F_external_semaphore_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
F_external_semaphore_feature inline operator|(F_external_semaphore_feature::B bit1_, F_external_semaphore_feature::B bit2_){F_external_semaphore_feature flags(bit1_);return flags | bit2_;}

/*	VkSemaphoreImportFlagBits*/
class F_semaphore_import {
private:
F_semaphore_import(int flag_);
public:
int flag;
enum B{
	b_temporary = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
};
F_semaphore_import():flag(0){}
F_semaphore_import(B bits_):flag(static_cast<int>(bits_)){}
F_semaphore_import(F_semaphore_import const& flag_):flag(flag_.flag){}
F_semaphore_import(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_semaphore_import& operator = (F_semaphore_import flag_){flag = flag_.flag;return *this;}
F_semaphore_import operator | (B bit_){return flag | static_cast<int>(bit_);}
F_semaphore_import& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_semaphore_import operator | (F_semaphore_import flag_){return flag | flag_.flag;}
F_semaphore_import& operator |= (F_semaphore_import flag_){flag |= flag_.flag;return *this;}
F_semaphore_import operator & (F_semaphore_import flag_){return flag & flag_.flag;}
F_semaphore_import& operator &= (F_semaphore_import flag_){flag &= flag_.flag;return *this;}
F_semaphore_import operator ^ (F_semaphore_import flag_){return flag ^ flag_.flag;}
F_semaphore_import& operator ^= (F_semaphore_import flag_){flag ^= flag_.flag;return *this;}
F_semaphore_import operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_semaphore_import flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_semaphore_import flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_semaphore_import& clear(){flag = 0;return *this;}
F_semaphore_import(int flags_):flag(flags_) {}
F_semaphore_import all_flags(){
return b_temporary;
}
F_semaphore_import& on_temporary(){ flag |= b_temporary; return *this; }
F_semaphore_import& off_temporary(){ flag &= ~b_temporary; return *this; }
};
F_semaphore_import inline operator|(F_semaphore_import::B bit1_, F_semaphore_import::B bit2_){F_semaphore_import flags(bit1_);return flags | bit2_;}

/*	VkExternalFenceHandleTypeFlagBits*/
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
F_external_fence_handle_type():flag(0){}
F_external_fence_handle_type(B bits_):flag(static_cast<int>(bits_)){}
F_external_fence_handle_type(F_external_fence_handle_type const& flag_):flag(flag_.flag){}
F_external_fence_handle_type(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_fence_handle_type& operator = (F_external_fence_handle_type flag_){flag = flag_.flag;return *this;}
F_external_fence_handle_type operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_fence_handle_type& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_fence_handle_type operator | (F_external_fence_handle_type flag_){return flag | flag_.flag;}
F_external_fence_handle_type& operator |= (F_external_fence_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_fence_handle_type operator & (F_external_fence_handle_type flag_){return flag & flag_.flag;}
F_external_fence_handle_type& operator &= (F_external_fence_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_fence_handle_type operator ^ (F_external_fence_handle_type flag_){return flag ^ flag_.flag;}
F_external_fence_handle_type& operator ^= (F_external_fence_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_fence_handle_type operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_fence_handle_type flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_fence_handle_type flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_fence_handle_type& clear(){flag = 0;return *this;}
F_external_fence_handle_type(int flags_):flag(flags_) {}
F_external_fence_handle_type all_flags(){
return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_sync_fd;
}
F_external_fence_handle_type& on_opaque_fd(){ flag |= b_opaque_fd; return *this; }
F_external_fence_handle_type& off_opaque_fd(){ flag &= ~b_opaque_fd; return *this; }
F_external_fence_handle_type& on_opaque_win32(){ flag |= b_opaque_win32; return *this; }
F_external_fence_handle_type& off_opaque_win32(){ flag &= ~b_opaque_win32; return *this; }
F_external_fence_handle_type& on_opaque_win32_kmt(){ flag |= b_opaque_win32_kmt; return *this; }
F_external_fence_handle_type& off_opaque_win32_kmt(){ flag &= ~b_opaque_win32_kmt; return *this; }
F_external_fence_handle_type& on_sync_fd(){ flag |= b_sync_fd; return *this; }
F_external_fence_handle_type& off_sync_fd(){ flag &= ~b_sync_fd; return *this; }
};
F_external_fence_handle_type inline operator|(F_external_fence_handle_type::B bit1_, F_external_fence_handle_type::B bit2_){F_external_fence_handle_type flags(bit1_);return flags | bit2_;}

/*	VkExternalFenceFeatureFlagBits*/
class F_external_fence_feature {
private:
F_external_fence_feature(int flag_);
public:
int flag;
enum B{
	b_exportable = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,
	b_importable = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,
};
F_external_fence_feature():flag(0){}
F_external_fence_feature(B bits_):flag(static_cast<int>(bits_)){}
F_external_fence_feature(F_external_fence_feature const& flag_):flag(flag_.flag){}
F_external_fence_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_fence_feature& operator = (F_external_fence_feature flag_){flag = flag_.flag;return *this;}
F_external_fence_feature operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_fence_feature& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_fence_feature operator | (F_external_fence_feature flag_){return flag | flag_.flag;}
F_external_fence_feature& operator |= (F_external_fence_feature flag_){flag |= flag_.flag;return *this;}
F_external_fence_feature operator & (F_external_fence_feature flag_){return flag & flag_.flag;}
F_external_fence_feature& operator &= (F_external_fence_feature flag_){flag &= flag_.flag;return *this;}
F_external_fence_feature operator ^ (F_external_fence_feature flag_){return flag ^ flag_.flag;}
F_external_fence_feature& operator ^= (F_external_fence_feature flag_){flag ^= flag_.flag;return *this;}
F_external_fence_feature operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_external_fence_feature flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_external_fence_feature flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_external_fence_feature& clear(){flag = 0;return *this;}
F_external_fence_feature(int flags_):flag(flags_) {}
F_external_fence_feature all_flags(){
return b_exportable | b_importable;
}
F_external_fence_feature& on_exportable(){ flag |= b_exportable; return *this; }
F_external_fence_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
F_external_fence_feature& on_importable(){ flag |= b_importable; return *this; }
F_external_fence_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
F_external_fence_feature inline operator|(F_external_fence_feature::B bit1_, F_external_fence_feature::B bit2_){F_external_fence_feature flags(bit1_);return flags | bit2_;}

/*	VkFenceImportFlagBits*/
class F_fence_import {
private:
F_fence_import(int flag_);
public:
int flag;
enum B{
	b_temporary = VK_FENCE_IMPORT_TEMPORARY_BIT,
};
F_fence_import():flag(0){}
F_fence_import(B bits_):flag(static_cast<int>(bits_)){}
F_fence_import(F_fence_import const& flag_):flag(flag_.flag){}
F_fence_import(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_fence_import& operator = (F_fence_import flag_){flag = flag_.flag;return *this;}
F_fence_import operator | (B bit_){return flag | static_cast<int>(bit_);}
F_fence_import& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_fence_import operator | (F_fence_import flag_){return flag | flag_.flag;}
F_fence_import& operator |= (F_fence_import flag_){flag |= flag_.flag;return *this;}
F_fence_import operator & (F_fence_import flag_){return flag & flag_.flag;}
F_fence_import& operator &= (F_fence_import flag_){flag &= flag_.flag;return *this;}
F_fence_import operator ^ (F_fence_import flag_){return flag ^ flag_.flag;}
F_fence_import& operator ^= (F_fence_import flag_){flag ^= flag_.flag;return *this;}
F_fence_import operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_fence_import flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_fence_import flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_fence_import& clear(){flag = 0;return *this;}
F_fence_import(int flags_):flag(flags_) {}
F_fence_import all_flags(){
return b_temporary;
}
F_fence_import& on_temporary(){ flag |= b_temporary; return *this; }
F_fence_import& off_temporary(){ flag &= ~b_temporary; return *this; }
};
F_fence_import inline operator|(F_fence_import::B bit1_, F_fence_import::B bit2_){F_fence_import flags(bit1_);return flags | bit2_;}

/*	VkSurfaceCounterFlagBitsEXT*/
class F_surface_counter_EXT {
private:
F_surface_counter_EXT(int flag_);
public:
int flag;
enum B{
	b_vblank_ext = VK_SURFACE_COUNTER_VBLANK_EXT,
};
F_surface_counter_EXT():flag(0){}
F_surface_counter_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_surface_counter_EXT(F_surface_counter_EXT const& flag_):flag(flag_.flag){}
F_surface_counter_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_counter_EXT& operator = (F_surface_counter_EXT flag_){flag = flag_.flag;return *this;}
F_surface_counter_EXT operator | (B bit_){return flag | static_cast<int>(bit_);}
F_surface_counter_EXT& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_counter_EXT operator | (F_surface_counter_EXT flag_){return flag | flag_.flag;}
F_surface_counter_EXT& operator |= (F_surface_counter_EXT flag_){flag |= flag_.flag;return *this;}
F_surface_counter_EXT operator & (F_surface_counter_EXT flag_){return flag & flag_.flag;}
F_surface_counter_EXT& operator &= (F_surface_counter_EXT flag_){flag &= flag_.flag;return *this;}
F_surface_counter_EXT operator ^ (F_surface_counter_EXT flag_){return flag ^ flag_.flag;}
F_surface_counter_EXT& operator ^= (F_surface_counter_EXT flag_){flag ^= flag_.flag;return *this;}
F_surface_counter_EXT operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_surface_counter_EXT flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_surface_counter_EXT flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_surface_counter_EXT& clear(){flag = 0;return *this;}
F_surface_counter_EXT(int flags_):flag(flags_) {}
F_surface_counter_EXT all_flags(){
return b_vblank_ext;
}
F_surface_counter_EXT& on_vblank_ext(){ flag |= b_vblank_ext; return *this; }
F_surface_counter_EXT& off_vblank_ext(){ flag &= ~b_vblank_ext; return *this; }
};
F_surface_counter_EXT inline operator|(F_surface_counter_EXT::B bit1_, F_surface_counter_EXT::B bit2_){F_surface_counter_EXT flags(bit1_);return flags | bit2_;}

/*	VkPeerMemoryFeatureFlagBits*/
class F_peer_memory_feature {
private:
F_peer_memory_feature(int flag_);
public:
int flag;
enum B{
/*Can read with vkCmdCopy commands*/
	b_copy_src = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,
/*Can write with vkCmdCopy commands*/
	b_copy_dst = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,
/*Can read with any access type/command*/
	b_generic_src = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,
/*Can write with and access type/command*/
	b_generic_dst = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,
};
F_peer_memory_feature():flag(0){}
F_peer_memory_feature(B bits_):flag(static_cast<int>(bits_)){}
F_peer_memory_feature(F_peer_memory_feature const& flag_):flag(flag_.flag){}
F_peer_memory_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_peer_memory_feature& operator = (F_peer_memory_feature flag_){flag = flag_.flag;return *this;}
F_peer_memory_feature operator | (B bit_){return flag | static_cast<int>(bit_);}
F_peer_memory_feature& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_peer_memory_feature operator | (F_peer_memory_feature flag_){return flag | flag_.flag;}
F_peer_memory_feature& operator |= (F_peer_memory_feature flag_){flag |= flag_.flag;return *this;}
F_peer_memory_feature operator & (F_peer_memory_feature flag_){return flag & flag_.flag;}
F_peer_memory_feature& operator &= (F_peer_memory_feature flag_){flag &= flag_.flag;return *this;}
F_peer_memory_feature operator ^ (F_peer_memory_feature flag_){return flag ^ flag_.flag;}
F_peer_memory_feature& operator ^= (F_peer_memory_feature flag_){flag ^= flag_.flag;return *this;}
F_peer_memory_feature operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_peer_memory_feature flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_peer_memory_feature flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_peer_memory_feature& clear(){flag = 0;return *this;}
F_peer_memory_feature(int flags_):flag(flags_) {}
F_peer_memory_feature all_flags(){
return b_copy_src | b_copy_dst | b_generic_src | b_generic_dst;
}
F_peer_memory_feature& on_copy_src(){ flag |= b_copy_src; return *this; }
F_peer_memory_feature& off_copy_src(){ flag &= ~b_copy_src; return *this; }
F_peer_memory_feature& on_copy_dst(){ flag |= b_copy_dst; return *this; }
F_peer_memory_feature& off_copy_dst(){ flag &= ~b_copy_dst; return *this; }
F_peer_memory_feature& on_generic_src(){ flag |= b_generic_src; return *this; }
F_peer_memory_feature& off_generic_src(){ flag &= ~b_generic_src; return *this; }
F_peer_memory_feature& on_generic_dst(){ flag |= b_generic_dst; return *this; }
F_peer_memory_feature& off_generic_dst(){ flag &= ~b_generic_dst; return *this; }
};
F_peer_memory_feature inline operator|(F_peer_memory_feature::B bit1_, F_peer_memory_feature::B bit2_){F_peer_memory_feature flags(bit1_);return flags | bit2_;}

/*	VkMemoryAllocateFlagBits*/
class F_memory_allocate {
private:
F_memory_allocate(int flag_);
public:
int flag;
enum B{
/*Force allocation on specific devices*/
	b_device_mask = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,
};
F_memory_allocate():flag(0){}
F_memory_allocate(B bits_):flag(static_cast<int>(bits_)){}
F_memory_allocate(F_memory_allocate const& flag_):flag(flag_.flag){}
F_memory_allocate(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_allocate& operator = (F_memory_allocate flag_){flag = flag_.flag;return *this;}
F_memory_allocate operator | (B bit_){return flag | static_cast<int>(bit_);}
F_memory_allocate& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_allocate operator | (F_memory_allocate flag_){return flag | flag_.flag;}
F_memory_allocate& operator |= (F_memory_allocate flag_){flag |= flag_.flag;return *this;}
F_memory_allocate operator & (F_memory_allocate flag_){return flag & flag_.flag;}
F_memory_allocate& operator &= (F_memory_allocate flag_){flag &= flag_.flag;return *this;}
F_memory_allocate operator ^ (F_memory_allocate flag_){return flag ^ flag_.flag;}
F_memory_allocate& operator ^= (F_memory_allocate flag_){flag ^= flag_.flag;return *this;}
F_memory_allocate operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_memory_allocate flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_memory_allocate flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_memory_allocate& clear(){flag = 0;return *this;}
F_memory_allocate(int flags_):flag(flags_) {}
F_memory_allocate all_flags(){
return b_device_mask;
}
F_memory_allocate& on_device_mask(){ flag |= b_device_mask; return *this; }
F_memory_allocate& off_device_mask(){ flag &= ~b_device_mask; return *this; }
};
F_memory_allocate inline operator|(F_memory_allocate::B bit1_, F_memory_allocate::B bit2_){F_memory_allocate flags(bit1_);return flags | bit2_;}

/*	VkDeviceGroupPresentModeFlagBitsKHR*/
class F_device_group_present_mode_KHR {
private:
F_device_group_present_mode_KHR(int flag_);
public:
int flag;
enum B{
/*Present from local memory*/
	b_local_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR,
/*Present from remote memory*/
	b_remote_khr = VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR,
/*Present sum of local and/or remote memory*/
	b_sum_khr = VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR,
/*Each physical device presents from local memory*/
	b_local_multi_device_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR,
};
F_device_group_present_mode_KHR():flag(0){}
F_device_group_present_mode_KHR(B bits_):flag(static_cast<int>(bits_)){}
F_device_group_present_mode_KHR(F_device_group_present_mode_KHR const& flag_):flag(flag_.flag){}
F_device_group_present_mode_KHR(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_device_group_present_mode_KHR& operator = (F_device_group_present_mode_KHR flag_){flag = flag_.flag;return *this;}
F_device_group_present_mode_KHR operator | (B bit_){return flag | static_cast<int>(bit_);}
F_device_group_present_mode_KHR& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_device_group_present_mode_KHR operator | (F_device_group_present_mode_KHR flag_){return flag | flag_.flag;}
F_device_group_present_mode_KHR& operator |= (F_device_group_present_mode_KHR flag_){flag |= flag_.flag;return *this;}
F_device_group_present_mode_KHR operator & (F_device_group_present_mode_KHR flag_){return flag & flag_.flag;}
F_device_group_present_mode_KHR& operator &= (F_device_group_present_mode_KHR flag_){flag &= flag_.flag;return *this;}
F_device_group_present_mode_KHR operator ^ (F_device_group_present_mode_KHR flag_){return flag ^ flag_.flag;}
F_device_group_present_mode_KHR& operator ^= (F_device_group_present_mode_KHR flag_){flag ^= flag_.flag;return *this;}
F_device_group_present_mode_KHR operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_device_group_present_mode_KHR flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_device_group_present_mode_KHR flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_device_group_present_mode_KHR& clear(){flag = 0;return *this;}
F_device_group_present_mode_KHR(int flags_):flag(flags_) {}
F_device_group_present_mode_KHR all_flags(){
return b_local_khr | b_remote_khr | b_sum_khr | b_local_multi_device_khr;
}
F_device_group_present_mode_KHR& on_local_khr(){ flag |= b_local_khr; return *this; }
F_device_group_present_mode_KHR& off_local_khr(){ flag &= ~b_local_khr; return *this; }
F_device_group_present_mode_KHR& on_remote_khr(){ flag |= b_remote_khr; return *this; }
F_device_group_present_mode_KHR& off_remote_khr(){ flag &= ~b_remote_khr; return *this; }
F_device_group_present_mode_KHR& on_sum_khr(){ flag |= b_sum_khr; return *this; }
F_device_group_present_mode_KHR& off_sum_khr(){ flag &= ~b_sum_khr; return *this; }
F_device_group_present_mode_KHR& on_local_multi_device_khr(){ flag |= b_local_multi_device_khr; return *this; }
F_device_group_present_mode_KHR& off_local_multi_device_khr(){ flag &= ~b_local_multi_device_khr; return *this; }
};
F_device_group_present_mode_KHR inline operator|(F_device_group_present_mode_KHR::B bit1_, F_device_group_present_mode_KHR::B bit2_){F_device_group_present_mode_KHR flags(bit1_);return flags | bit2_;}

/*	VkSwapchainCreateFlagBitsKHR*/
using F_swapchain_create_KHR = 
			VkSwapchainCreateFlagBitsKHR;

/*	VkSubpassDescriptionFlagBits*/
using F_subpass_description = 
			VkSubpassDescriptionFlagBits;

/*	VkDebugUtilsMessageSeverityFlagBitsEXT*/
class F_debug_utils_message_severity_EXT {
private:
F_debug_utils_message_severity_EXT(int flag_);
public:
int flag;
enum B{
	b_verbose_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT,
	b_info_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT,
	b_warning_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT,
	b_error_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
};
F_debug_utils_message_severity_EXT():flag(0){}
F_debug_utils_message_severity_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_severity_EXT(F_debug_utils_message_severity_EXT const& flag_):flag(flag_.flag){}
F_debug_utils_message_severity_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_severity_EXT& operator = (F_debug_utils_message_severity_EXT flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_severity_EXT operator | (B bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_severity_EXT& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_severity_EXT operator | (F_debug_utils_message_severity_EXT flag_){return flag | flag_.flag;}
F_debug_utils_message_severity_EXT& operator |= (F_debug_utils_message_severity_EXT flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_severity_EXT operator & (F_debug_utils_message_severity_EXT flag_){return flag & flag_.flag;}
F_debug_utils_message_severity_EXT& operator &= (F_debug_utils_message_severity_EXT flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_severity_EXT operator ^ (F_debug_utils_message_severity_EXT flag_){return flag ^ flag_.flag;}
F_debug_utils_message_severity_EXT& operator ^= (F_debug_utils_message_severity_EXT flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_severity_EXT operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_debug_utils_message_severity_EXT flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_debug_utils_message_severity_EXT flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_debug_utils_message_severity_EXT& clear(){flag = 0;return *this;}
F_debug_utils_message_severity_EXT(int flags_):flag(flags_) {}
F_debug_utils_message_severity_EXT all_flags(){
return b_verbose_ext | b_info_ext | b_warning_ext | b_error_ext;
}
F_debug_utils_message_severity_EXT& on_verbose_ext(){ flag |= b_verbose_ext; return *this; }
F_debug_utils_message_severity_EXT& off_verbose_ext(){ flag &= ~b_verbose_ext; return *this; }
F_debug_utils_message_severity_EXT& on_info_ext(){ flag |= b_info_ext; return *this; }
F_debug_utils_message_severity_EXT& off_info_ext(){ flag &= ~b_info_ext; return *this; }
F_debug_utils_message_severity_EXT& on_warning_ext(){ flag |= b_warning_ext; return *this; }
F_debug_utils_message_severity_EXT& off_warning_ext(){ flag &= ~b_warning_ext; return *this; }
F_debug_utils_message_severity_EXT& on_error_ext(){ flag |= b_error_ext; return *this; }
F_debug_utils_message_severity_EXT& off_error_ext(){ flag &= ~b_error_ext; return *this; }
};
F_debug_utils_message_severity_EXT inline operator|(F_debug_utils_message_severity_EXT::B bit1_, F_debug_utils_message_severity_EXT::B bit2_){F_debug_utils_message_severity_EXT flags(bit1_);return flags | bit2_;}

/*	VkDebugUtilsMessageTypeFlagBitsEXT*/
class F_debug_utils_message_type_EXT {
private:
F_debug_utils_message_type_EXT(int flag_);
public:
int flag;
enum B{
	b_general_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT,
	b_validation_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT,
	b_performance_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,
};
F_debug_utils_message_type_EXT():flag(0){}
F_debug_utils_message_type_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_type_EXT(F_debug_utils_message_type_EXT const& flag_):flag(flag_.flag){}
F_debug_utils_message_type_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_type_EXT& operator = (F_debug_utils_message_type_EXT flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_type_EXT operator | (B bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_type_EXT& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_type_EXT operator | (F_debug_utils_message_type_EXT flag_){return flag | flag_.flag;}
F_debug_utils_message_type_EXT& operator |= (F_debug_utils_message_type_EXT flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_type_EXT operator & (F_debug_utils_message_type_EXT flag_){return flag & flag_.flag;}
F_debug_utils_message_type_EXT& operator &= (F_debug_utils_message_type_EXT flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_type_EXT operator ^ (F_debug_utils_message_type_EXT flag_){return flag ^ flag_.flag;}
F_debug_utils_message_type_EXT& operator ^= (F_debug_utils_message_type_EXT flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_type_EXT operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_debug_utils_message_type_EXT flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_debug_utils_message_type_EXT flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_debug_utils_message_type_EXT& clear(){flag = 0;return *this;}
F_debug_utils_message_type_EXT(int flags_):flag(flags_) {}
F_debug_utils_message_type_EXT all_flags(){
return b_general_ext | b_validation_ext | b_performance_ext;
}
F_debug_utils_message_type_EXT& on_general_ext(){ flag |= b_general_ext; return *this; }
F_debug_utils_message_type_EXT& off_general_ext(){ flag &= ~b_general_ext; return *this; }
F_debug_utils_message_type_EXT& on_validation_ext(){ flag |= b_validation_ext; return *this; }
F_debug_utils_message_type_EXT& off_validation_ext(){ flag &= ~b_validation_ext; return *this; }
F_debug_utils_message_type_EXT& on_performance_ext(){ flag |= b_performance_ext; return *this; }
F_debug_utils_message_type_EXT& off_performance_ext(){ flag &= ~b_performance_ext; return *this; }
};
F_debug_utils_message_type_EXT inline operator|(F_debug_utils_message_type_EXT::B bit1_, F_debug_utils_message_type_EXT::B bit2_){F_debug_utils_message_type_EXT flags(bit1_);return flags | bit2_;}

/*	VkDescriptorBindingFlagBitsEXT*/
class F_descriptor_binding_EXT {
private:
F_descriptor_binding_EXT(int flag_);
public:
int flag;
enum B{
	b_update_after_bind_ext = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT,
	b_update_unused_while_pending_ext = VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT,
	b_partially_bound_ext = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT,
	b_variable_descriptor_count_ext = VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT,
};
F_descriptor_binding_EXT():flag(0){}
F_descriptor_binding_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_descriptor_binding_EXT(F_descriptor_binding_EXT const& flag_):flag(flag_.flag){}
F_descriptor_binding_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_binding_EXT& operator = (F_descriptor_binding_EXT flag_){flag = flag_.flag;return *this;}
F_descriptor_binding_EXT operator | (B bit_){return flag | static_cast<int>(bit_);}
F_descriptor_binding_EXT& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_binding_EXT operator | (F_descriptor_binding_EXT flag_){return flag | flag_.flag;}
F_descriptor_binding_EXT& operator |= (F_descriptor_binding_EXT flag_){flag |= flag_.flag;return *this;}
F_descriptor_binding_EXT operator & (F_descriptor_binding_EXT flag_){return flag & flag_.flag;}
F_descriptor_binding_EXT& operator &= (F_descriptor_binding_EXT flag_){flag &= flag_.flag;return *this;}
F_descriptor_binding_EXT operator ^ (F_descriptor_binding_EXT flag_){return flag ^ flag_.flag;}
F_descriptor_binding_EXT& operator ^= (F_descriptor_binding_EXT flag_){flag ^= flag_.flag;return *this;}
F_descriptor_binding_EXT operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_descriptor_binding_EXT flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_descriptor_binding_EXT flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_descriptor_binding_EXT& clear(){flag = 0;return *this;}
F_descriptor_binding_EXT(int flags_):flag(flags_) {}
F_descriptor_binding_EXT all_flags(){
return b_update_after_bind_ext | b_update_unused_while_pending_ext | b_partially_bound_ext | b_variable_descriptor_count_ext;
}
F_descriptor_binding_EXT& on_update_after_bind_ext(){ flag |= b_update_after_bind_ext; return *this; }
F_descriptor_binding_EXT& off_update_after_bind_ext(){ flag &= ~b_update_after_bind_ext; return *this; }
F_descriptor_binding_EXT& on_update_unused_while_pending_ext(){ flag |= b_update_unused_while_pending_ext; return *this; }
F_descriptor_binding_EXT& off_update_unused_while_pending_ext(){ flag &= ~b_update_unused_while_pending_ext; return *this; }
F_descriptor_binding_EXT& on_partially_bound_ext(){ flag |= b_partially_bound_ext; return *this; }
F_descriptor_binding_EXT& off_partially_bound_ext(){ flag &= ~b_partially_bound_ext; return *this; }
F_descriptor_binding_EXT& on_variable_descriptor_count_ext(){ flag |= b_variable_descriptor_count_ext; return *this; }
F_descriptor_binding_EXT& off_variable_descriptor_count_ext(){ flag &= ~b_variable_descriptor_count_ext; return *this; }
};
F_descriptor_binding_EXT inline operator|(F_descriptor_binding_EXT::B bit1_, F_descriptor_binding_EXT::B bit2_){F_descriptor_binding_EXT flags(bit1_);return flags | bit2_;}

/*	VkConditionalRenderingFlagBitsEXT*/
class F_conditional_rendering_EXT {
private:
F_conditional_rendering_EXT(int flag_);
public:
int flag;
enum B{
	b_inverted_ext = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,
};
F_conditional_rendering_EXT():flag(0){}
F_conditional_rendering_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_conditional_rendering_EXT(F_conditional_rendering_EXT const& flag_):flag(flag_.flag){}
F_conditional_rendering_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_conditional_rendering_EXT& operator = (F_conditional_rendering_EXT flag_){flag = flag_.flag;return *this;}
F_conditional_rendering_EXT operator | (B bit_){return flag | static_cast<int>(bit_);}
F_conditional_rendering_EXT& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_conditional_rendering_EXT operator | (F_conditional_rendering_EXT flag_){return flag | flag_.flag;}
F_conditional_rendering_EXT& operator |= (F_conditional_rendering_EXT flag_){flag |= flag_.flag;return *this;}
F_conditional_rendering_EXT operator & (F_conditional_rendering_EXT flag_){return flag & flag_.flag;}
F_conditional_rendering_EXT& operator &= (F_conditional_rendering_EXT flag_){flag &= flag_.flag;return *this;}
F_conditional_rendering_EXT operator ^ (F_conditional_rendering_EXT flag_){return flag ^ flag_.flag;}
F_conditional_rendering_EXT& operator ^= (F_conditional_rendering_EXT flag_){flag ^= flag_.flag;return *this;}
F_conditional_rendering_EXT operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_conditional_rendering_EXT flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_conditional_rendering_EXT flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_conditional_rendering_EXT& clear(){flag = 0;return *this;}
F_conditional_rendering_EXT(int flags_):flag(flags_) {}
F_conditional_rendering_EXT all_flags(){
return b_inverted_ext;
}
F_conditional_rendering_EXT& on_inverted_ext(){ flag |= b_inverted_ext; return *this; }
F_conditional_rendering_EXT& off_inverted_ext(){ flag &= ~b_inverted_ext; return *this; }
};
F_conditional_rendering_EXT inline operator|(F_conditional_rendering_EXT::B bit1_, F_conditional_rendering_EXT::B bit2_){F_conditional_rendering_EXT flags(bit1_);return flags | bit2_;}

/*	VkGeometryInstanceFlagBitsNVX*/
class F_geometry_instance_NVX {
private:
F_geometry_instance_NVX(int flag_);
public:
int flag;
enum B{
	b_triangle_cull_disable_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX,
	b_triangle_cull_flip_winding_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX,
	b_force_opaque_nvx = VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX,
	b_force_no_opaque_nvx = VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX,
};
F_geometry_instance_NVX():flag(0){}
F_geometry_instance_NVX(B bits_):flag(static_cast<int>(bits_)){}
F_geometry_instance_NVX(F_geometry_instance_NVX const& flag_):flag(flag_.flag){}
F_geometry_instance_NVX(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_geometry_instance_NVX& operator = (F_geometry_instance_NVX flag_){flag = flag_.flag;return *this;}
F_geometry_instance_NVX operator | (B bit_){return flag | static_cast<int>(bit_);}
F_geometry_instance_NVX& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_geometry_instance_NVX operator | (F_geometry_instance_NVX flag_){return flag | flag_.flag;}
F_geometry_instance_NVX& operator |= (F_geometry_instance_NVX flag_){flag |= flag_.flag;return *this;}
F_geometry_instance_NVX operator & (F_geometry_instance_NVX flag_){return flag & flag_.flag;}
F_geometry_instance_NVX& operator &= (F_geometry_instance_NVX flag_){flag &= flag_.flag;return *this;}
F_geometry_instance_NVX operator ^ (F_geometry_instance_NVX flag_){return flag ^ flag_.flag;}
F_geometry_instance_NVX& operator ^= (F_geometry_instance_NVX flag_){flag ^= flag_.flag;return *this;}
F_geometry_instance_NVX operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_geometry_instance_NVX flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_geometry_instance_NVX flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_geometry_instance_NVX& clear(){flag = 0;return *this;}
F_geometry_instance_NVX(int flags_):flag(flags_) {}
F_geometry_instance_NVX all_flags(){
return b_triangle_cull_disable_nvx | b_triangle_cull_flip_winding_nvx | b_force_opaque_nvx | b_force_no_opaque_nvx;
}
F_geometry_instance_NVX& on_triangle_cull_disable_nvx(){ flag |= b_triangle_cull_disable_nvx; return *this; }
F_geometry_instance_NVX& off_triangle_cull_disable_nvx(){ flag &= ~b_triangle_cull_disable_nvx; return *this; }
F_geometry_instance_NVX& on_triangle_cull_flip_winding_nvx(){ flag |= b_triangle_cull_flip_winding_nvx; return *this; }
F_geometry_instance_NVX& off_triangle_cull_flip_winding_nvx(){ flag &= ~b_triangle_cull_flip_winding_nvx; return *this; }
F_geometry_instance_NVX& on_force_opaque_nvx(){ flag |= b_force_opaque_nvx; return *this; }
F_geometry_instance_NVX& off_force_opaque_nvx(){ flag &= ~b_force_opaque_nvx; return *this; }
F_geometry_instance_NVX& on_force_no_opaque_nvx(){ flag |= b_force_no_opaque_nvx; return *this; }
F_geometry_instance_NVX& off_force_no_opaque_nvx(){ flag &= ~b_force_no_opaque_nvx; return *this; }
};
F_geometry_instance_NVX inline operator|(F_geometry_instance_NVX::B bit1_, F_geometry_instance_NVX::B bit2_){F_geometry_instance_NVX flags(bit1_);return flags | bit2_;}

/*	VkGeometryFlagBitsNVX*/
class F_geometry_NVX {
private:
F_geometry_NVX(int flag_);
public:
int flag;
enum B{
	b_opaque_nvx = VK_GEOMETRY_OPAQUE_BIT_NVX,
	b_no_duplicate_any_hit_invocation_nvx = VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX,
};
F_geometry_NVX():flag(0){}
F_geometry_NVX(B bits_):flag(static_cast<int>(bits_)){}
F_geometry_NVX(F_geometry_NVX const& flag_):flag(flag_.flag){}
F_geometry_NVX(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_geometry_NVX& operator = (F_geometry_NVX flag_){flag = flag_.flag;return *this;}
F_geometry_NVX operator | (B bit_){return flag | static_cast<int>(bit_);}
F_geometry_NVX& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_geometry_NVX operator | (F_geometry_NVX flag_){return flag | flag_.flag;}
F_geometry_NVX& operator |= (F_geometry_NVX flag_){flag |= flag_.flag;return *this;}
F_geometry_NVX operator & (F_geometry_NVX flag_){return flag & flag_.flag;}
F_geometry_NVX& operator &= (F_geometry_NVX flag_){flag &= flag_.flag;return *this;}
F_geometry_NVX operator ^ (F_geometry_NVX flag_){return flag ^ flag_.flag;}
F_geometry_NVX& operator ^= (F_geometry_NVX flag_){flag ^= flag_.flag;return *this;}
F_geometry_NVX operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_geometry_NVX flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_geometry_NVX flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_geometry_NVX& clear(){flag = 0;return *this;}
F_geometry_NVX(int flags_):flag(flags_) {}
F_geometry_NVX all_flags(){
return b_opaque_nvx | b_no_duplicate_any_hit_invocation_nvx;
}
F_geometry_NVX& on_opaque_nvx(){ flag |= b_opaque_nvx; return *this; }
F_geometry_NVX& off_opaque_nvx(){ flag &= ~b_opaque_nvx; return *this; }
F_geometry_NVX& on_no_duplicate_any_hit_invocation_nvx(){ flag |= b_no_duplicate_any_hit_invocation_nvx; return *this; }
F_geometry_NVX& off_no_duplicate_any_hit_invocation_nvx(){ flag &= ~b_no_duplicate_any_hit_invocation_nvx; return *this; }
};
F_geometry_NVX inline operator|(F_geometry_NVX::B bit1_, F_geometry_NVX::B bit2_){F_geometry_NVX flags(bit1_);return flags | bit2_;}

/*	VkBuildAccelerationStructureFlagBitsNVX*/
class F_build_acceleration_structure_NVX {
private:
F_build_acceleration_structure_NVX(int flag_);
public:
int flag;
enum B{
	b_allow_update_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX,
	b_allow_compaction_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX,
	b_prefer_fast_trace_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX,
	b_prefer_fast_build_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX,
	b_low_memory_nvx = VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX,
};
F_build_acceleration_structure_NVX():flag(0){}
F_build_acceleration_structure_NVX(B bits_):flag(static_cast<int>(bits_)){}
F_build_acceleration_structure_NVX(F_build_acceleration_structure_NVX const& flag_):flag(flag_.flag){}
F_build_acceleration_structure_NVX(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_build_acceleration_structure_NVX& operator = (F_build_acceleration_structure_NVX flag_){flag = flag_.flag;return *this;}
F_build_acceleration_structure_NVX operator | (B bit_){return flag | static_cast<int>(bit_);}
F_build_acceleration_structure_NVX& operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_build_acceleration_structure_NVX operator | (F_build_acceleration_structure_NVX flag_){return flag | flag_.flag;}
F_build_acceleration_structure_NVX& operator |= (F_build_acceleration_structure_NVX flag_){flag |= flag_.flag;return *this;}
F_build_acceleration_structure_NVX operator & (F_build_acceleration_structure_NVX flag_){return flag & flag_.flag;}
F_build_acceleration_structure_NVX& operator &= (F_build_acceleration_structure_NVX flag_){flag &= flag_.flag;return *this;}
F_build_acceleration_structure_NVX operator ^ (F_build_acceleration_structure_NVX flag_){return flag ^ flag_.flag;}
F_build_acceleration_structure_NVX& operator ^= (F_build_acceleration_structure_NVX flag_){flag ^= flag_.flag;return *this;}
F_build_acceleration_structure_NVX operator ~ (){return all_flags().flag^flag;}
bool operator !(){return !flag;}
bool operator == (F_build_acceleration_structure_NVX flag_){return flag == flag_.flag;}
bool operator == (B bit_){return flag == static_cast<int>(bit_);}
bool operator != (F_build_acceleration_structure_NVX flag_){return flag != flag_.flag;}
bool operator != (B bit_){return flag != static_cast<int>(bit_);}
operator bool(){return !!flag;}
F_build_acceleration_structure_NVX& clear(){flag = 0;return *this;}
F_build_acceleration_structure_NVX(int flags_):flag(flags_) {}
F_build_acceleration_structure_NVX all_flags(){
return b_allow_update_nvx | b_allow_compaction_nvx | b_prefer_fast_trace_nvx | b_prefer_fast_build_nvx | b_low_memory_nvx;
}
F_build_acceleration_structure_NVX& on_allow_update_nvx(){ flag |= b_allow_update_nvx; return *this; }
F_build_acceleration_structure_NVX& off_allow_update_nvx(){ flag &= ~b_allow_update_nvx; return *this; }
F_build_acceleration_structure_NVX& on_allow_compaction_nvx(){ flag |= b_allow_compaction_nvx; return *this; }
F_build_acceleration_structure_NVX& off_allow_compaction_nvx(){ flag &= ~b_allow_compaction_nvx; return *this; }
F_build_acceleration_structure_NVX& on_prefer_fast_trace_nvx(){ flag |= b_prefer_fast_trace_nvx; return *this; }
F_build_acceleration_structure_NVX& off_prefer_fast_trace_nvx(){ flag &= ~b_prefer_fast_trace_nvx; return *this; }
F_build_acceleration_structure_NVX& on_prefer_fast_build_nvx(){ flag |= b_prefer_fast_build_nvx; return *this; }
F_build_acceleration_structure_NVX& off_prefer_fast_build_nvx(){ flag &= ~b_prefer_fast_build_nvx; return *this; }
F_build_acceleration_structure_NVX& on_low_memory_nvx(){ flag |= b_low_memory_nvx; return *this; }
F_build_acceleration_structure_NVX& off_low_memory_nvx(){ flag &= ~b_low_memory_nvx; return *this; }
};
F_build_acceleration_structure_NVX inline operator|(F_build_acceleration_structure_NVX::B bit1_, F_build_acceleration_structure_NVX::B bit2_){F_build_acceleration_structure_NVX flags(bit1_);return flags | bit2_;}

/*	VkPhysicalDeviceFeatures2KHR
*/
using S_physical_device_features2_KHR = 
				VkPhysicalDeviceFeatures2KHR;

/*	VkPhysicalDeviceProperties2KHR
*/
using S_physical_device_properties2_KHR = 
				VkPhysicalDeviceProperties2KHR;

/*	VkFormatProperties2KHR
*/
using S_format_properties2_KHR = 
				VkFormatProperties2KHR;

/*	VkImageFormatProperties2KHR
*/
using S_image_format_properties2_KHR = 
				VkImageFormatProperties2KHR;

/*	VkPhysicalDeviceImageFormatInfo2KHR
*/
using S_physical_device_image_format_info2_KHR = 
				VkPhysicalDeviceImageFormatInfo2KHR;

/*	VkQueueFamilyProperties2KHR
*/
using S_queue_family_properties2_KHR = 
				VkQueueFamilyProperties2KHR;

/*	VkPhysicalDeviceMemoryProperties2KHR
*/
using S_physical_device_memory_properties2_KHR = 
				VkPhysicalDeviceMemoryProperties2KHR;

/*	VkSparseImageFormatProperties2KHR
*/
using S_sparse_image_format_properties2_KHR = 
				VkSparseImageFormatProperties2KHR;

/*	VkPhysicalDeviceSparseImageFormatInfo2KHR
*/
using S_physical_device_sparse_image_format_info2_KHR = 
				VkPhysicalDeviceSparseImageFormatInfo2KHR;

/*	VkPhysicalDeviceVariablePointerFeaturesKHR
*/
using S_physical_device_variable_pointer_features_KHR = 
				VkPhysicalDeviceVariablePointerFeaturesKHR;

/*	VkExternalMemoryPropertiesKHR
*/
using S_external_memory_properties_KHR = 
				VkExternalMemoryPropertiesKHR;

/*	VkPhysicalDeviceExternalImageFormatInfoKHR
*/
using S_physical_device_external_image_format_info_KHR = 
				VkPhysicalDeviceExternalImageFormatInfoKHR;

/*	VkExternalImageFormatPropertiesKHR
*/
using S_external_image_format_properties_KHR = 
				VkExternalImageFormatPropertiesKHR;

/*	VkPhysicalDeviceExternalBufferInfoKHR
*/
using S_physical_device_external_buffer_info_KHR = 
				VkPhysicalDeviceExternalBufferInfoKHR;

/*	VkExternalBufferPropertiesKHR
*/
using S_external_buffer_properties_KHR = 
				VkExternalBufferPropertiesKHR;

/*	VkPhysicalDeviceIDPropertiesKHR
*/
using S_physical_device_id_properties_KHR = 
				VkPhysicalDeviceIDPropertiesKHR;

/*	VkExternalMemoryImageCreateInfoKHR
*/
using S_external_memory_image_create_info_KHR = 
				VkExternalMemoryImageCreateInfoKHR;

/*	VkExternalMemoryBufferCreateInfoKHR
*/
using S_external_memory_buffer_create_info_KHR = 
				VkExternalMemoryBufferCreateInfoKHR;

/*	VkExportMemoryAllocateInfoKHR
*/
using S_export_memory_allocate_info_KHR = 
				VkExportMemoryAllocateInfoKHR;

/*	VkPhysicalDeviceExternalSemaphoreInfoKHR
*/
using S_physical_device_external_semaphore_info_KHR = 
				VkPhysicalDeviceExternalSemaphoreInfoKHR;

/*	VkExternalSemaphorePropertiesKHR
*/
using S_external_semaphore_properties_KHR = 
				VkExternalSemaphorePropertiesKHR;

/*	VkExportSemaphoreCreateInfoKHR
*/
using S_export_semaphore_create_info_KHR = 
				VkExportSemaphoreCreateInfoKHR;

/*	VkPhysicalDeviceExternalFenceInfoKHR
*/
using S_physical_device_external_fence_info_KHR = 
				VkPhysicalDeviceExternalFenceInfoKHR;

/*	VkExternalFencePropertiesKHR
*/
using S_external_fence_properties_KHR = 
				VkExternalFencePropertiesKHR;

/*	VkExportFenceCreateInfoKHR
*/
using S_export_fence_create_info_KHR = 
				VkExportFenceCreateInfoKHR;

/*	VkPhysicalDeviceMultiviewFeaturesKHR
*/
using S_physical_device_multiview_features_KHR = 
				VkPhysicalDeviceMultiviewFeaturesKHR;

/*	VkPhysicalDeviceMultiviewPropertiesKHR
*/
using S_physical_device_multiview_properties_KHR = 
				VkPhysicalDeviceMultiviewPropertiesKHR;

/*	VkRenderPassMultiviewCreateInfoKHR
*/
using S_render_pass_multiview_create_info_KHR = 
				VkRenderPassMultiviewCreateInfoKHR;

/*	VkPhysicalDeviceGroupPropertiesKHR
*/
using S_physical_device_group_properties_KHR = 
				VkPhysicalDeviceGroupPropertiesKHR;

/*	VkMemoryAllocateFlagsInfoKHR
*/
using S_memory_allocate_flags_info_KHR = 
				VkMemoryAllocateFlagsInfoKHR;

/*	VkBindBufferMemoryInfoKHR
*/
using S_bind_buffer_memory_info_KHR = 
				VkBindBufferMemoryInfoKHR;

/*	VkBindBufferMemoryDeviceGroupInfoKHR
*/
using S_bind_buffer_memory_device_group_info_KHR = 
				VkBindBufferMemoryDeviceGroupInfoKHR;

/*	VkBindImageMemoryInfoKHR
*/
using S_bind_image_memory_info_KHR = 
				VkBindImageMemoryInfoKHR;

/*	VkBindImageMemoryDeviceGroupInfoKHR
*/
using S_bind_image_memory_device_group_info_KHR = 
				VkBindImageMemoryDeviceGroupInfoKHR;

/*	VkDeviceGroupRenderPassBeginInfoKHR
*/
using S_device_group_render_pass_begin_info_KHR = 
				VkDeviceGroupRenderPassBeginInfoKHR;

/*	VkDeviceGroupCommandBufferBeginInfoKHR
*/
using S_device_group_command_buffer_begin_info_KHR = 
				VkDeviceGroupCommandBufferBeginInfoKHR;

/*	VkDeviceGroupSubmitInfoKHR
*/
using S_device_group_submit_info_KHR = 
				VkDeviceGroupSubmitInfoKHR;

/*	VkDeviceGroupBindSparseInfoKHR
*/
using S_device_group_bind_sparse_info_KHR = 
				VkDeviceGroupBindSparseInfoKHR;

/*	VkDeviceGroupDeviceCreateInfoKHR
*/
using S_device_group_device_create_info_KHR = 
				VkDeviceGroupDeviceCreateInfoKHR;

/*	VkDescriptorUpdateTemplateEntryKHR
*/
using S_descriptor_update_template_entry_KHR = 
				VkDescriptorUpdateTemplateEntryKHR;

/*	VkDescriptorUpdateTemplateCreateInfoKHR
*/
using S_descriptor_update_template_create_info_KHR = 
				VkDescriptorUpdateTemplateCreateInfoKHR;

/*	VkInputAttachmentAspectReferenceKHR
*/
using S_input_attachment_aspect_reference_KHR = 
				VkInputAttachmentAspectReferenceKHR;

/*	VkRenderPassInputAttachmentAspectCreateInfoKHR
*/
using S_render_pass_input_attachment_aspect_create_info_KHR = 
				VkRenderPassInputAttachmentAspectCreateInfoKHR;

/*	VkPhysicalDevice16BitStorageFeaturesKHR
*/
using S_physical_device_16bit_storage_features_KHR = 
				VkPhysicalDevice16BitStorageFeaturesKHR;

/*	VkBufferMemoryRequirementsInfo2KHR
*/
using S_buffer_memory_requirements_info2_KHR = 
				VkBufferMemoryRequirementsInfo2KHR;

/*	VkImageMemoryRequirementsInfo2KHR
*/
using S_image_memory_requirements_info2_KHR = 
				VkImageMemoryRequirementsInfo2KHR;

/*	VkImageSparseMemoryRequirementsInfo2KHR
*/
using S_image_sparse_memory_requirements_info2_KHR = 
				VkImageSparseMemoryRequirementsInfo2KHR;

/*	VkMemoryRequirements2KHR
*/
using S_memory_requirements2_KHR = 
				VkMemoryRequirements2KHR;

/*	VkSparseImageMemoryRequirements2KHR
*/
using S_sparse_image_memory_requirements2_KHR = 
				VkSparseImageMemoryRequirements2KHR;

/*	VkPhysicalDevicePointClippingPropertiesKHR
*/
using S_physical_device_point_clipping_properties_KHR = 
				VkPhysicalDevicePointClippingPropertiesKHR;

/*	VkMemoryDedicatedRequirementsKHR
*/
using S_memory_dedicated_requirements_KHR = 
				VkMemoryDedicatedRequirementsKHR;

/*	VkMemoryDedicatedAllocateInfoKHR
*/
using S_memory_dedicated_allocate_info_KHR = 
				VkMemoryDedicatedAllocateInfoKHR;

/*	VkImageViewUsageCreateInfoKHR
*/
using S_image_view_usage_create_info_KHR = 
				VkImageViewUsageCreateInfoKHR;

/*	VkPipelineTessellationDomainOriginStateCreateInfoKHR
*/
using S_pipeline_tessellation_domain_origin_state_create_info_KHR = 
				VkPipelineTessellationDomainOriginStateCreateInfoKHR;

/*	VkSamplerYcbcrConversionInfoKHR
*/
using S_sampler_ycbcr_conversion_info_KHR = 
				VkSamplerYcbcrConversionInfoKHR;

/*	VkSamplerYcbcrConversionCreateInfoKHR
*/
using S_sampler_ycbcr_conversion_create_info_KHR = 
				VkSamplerYcbcrConversionCreateInfoKHR;

/*	VkBindImagePlaneMemoryInfoKHR
*/
using S_bind_image_plane_memory_info_KHR = 
				VkBindImagePlaneMemoryInfoKHR;

/*	VkImagePlaneMemoryRequirementsInfoKHR
*/
using S_image_plane_memory_requirements_info_KHR = 
				VkImagePlaneMemoryRequirementsInfoKHR;

/*	VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR
*/
using S_physical_device_sampler_ycbcr_conversion_features_KHR = 
				VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR;

/*	VkSamplerYcbcrConversionImageFormatPropertiesKHR
*/
using S_sampler_ycbcr_conversion_image_format_properties_KHR = 
				VkSamplerYcbcrConversionImageFormatPropertiesKHR;

/*	VkPhysicalDeviceMaintenance3PropertiesKHR
*/
using S_physical_device_maintenance3_properties_KHR = 
				VkPhysicalDeviceMaintenance3PropertiesKHR;

/*	VkDescriptorSetLayoutSupportKHR
*/
using S_descriptor_set_layout_support_KHR = 
				VkDescriptorSetLayoutSupportKHR;

/*---------------- ÎÞÒÀÀµµÄ struct ---------------------*//*	VkOffset2D
*/
struct		S_offset_2d{
	int32_t x;
	int32_t y;
};
/*	VkOffset3D
*/
struct		S_offset_3d{
	int32_t x;
	int32_t y;
	int32_t z;
};
/*	VkExtent2D
*/
struct		S_extent_2d{
	uint32_t width;
	uint32_t height;
};
/*	VkExtent3D
*/
struct		S_extent_3d{
	uint32_t width;
	uint32_t height;
	uint32_t depth;
};
/*	VkViewport
*/
struct		S_viewport{
	float x;
	float y;
	float width;
	float height;
	float minDepth;
	float maxDepth;
};
/*	VkComponentMapping
*/
struct		S_component_mapping{
	E_component_swizzle r;
	E_component_swizzle g;
	E_component_swizzle b;
	E_component_swizzle a;
};
/*	VkExtensionProperties
(returnedonly)
*/
struct		S_extension_properties{
	char extensionName[VK_MAX_EXTENSION_NAME_SIZE];
	uint32_t specVersion;
};
/*	VkLayerProperties
(returnedonly)
*/
struct		S_layer_properties{
	char layerName[VK_MAX_EXTENSION_NAME_SIZE];
	uint32_t specVersion;
	uint32_t implementationVersion;
	char description[VK_MAX_DESCRIPTION_SIZE];
};
/*	VkAllocationCallbacks
*/
struct		S_allocation_callbacks{
	void * pUserData;
	PFN_vkAllocationFunction pfnAllocation;
	PFN_vkReallocationFunction pfnReallocation;
	PFN_vkFreeFunction pfnFree;
	PFN_vkInternalAllocationNotification pfnInternalAllocation;
	PFN_vkInternalFreeNotification pfnInternalFree;
};
/*	VkMemoryRequirements
(returnedonly)
*/
struct		S_memory_requirements{
	VkDeviceSize size;
	VkDeviceSize alignment;
	uint32_t memoryTypeBits;
};
/*	VkMemoryType
(returnedonly)
*/
struct		S_memory_type{
	F_memory_property propertyFlags;
	uint32_t heapIndex;
};
/*	VkMemoryHeap
(returnedonly)
*/
struct		S_memory_heap{
	VkDeviceSize size;
	F_memory_heap flags;
};
/*	VkFormatProperties
(returnedonly)
*/
struct		S_format_properties{
	F_format_feature linearTilingFeatures;
	F_format_feature optimalTilingFeatures;
	F_format_feature bufferFeatures;
};
/*	VkDescriptorBufferInfo
*/
struct		S_descriptor_buffer_info{
	VkBuffer buffer;
	VkDeviceSize offset;
	VkDeviceSize range;
};
/*	VkDescriptorImageInfo
*/
struct		S_descriptor_image_info{
	VkSampler sampler;
	VkImageView imageView;
	E_image_layout imageLayout;
};
/*	VkImageSubresource
*/
struct		S_image_subresource{
	F_image_aspect aspectMask;
	uint32_t mipLevel;
	uint32_t arrayLayer;
};
/*	VkImageSubresourceLayers
*/
struct		S_image_subresource_layers{
	F_image_aspect aspectMask;
	uint32_t mipLevel;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};
/*	VkImageSubresourceRange
*/
struct		S_image_subresource_range{
	F_image_aspect aspectMask;
	uint32_t baseMipLevel;
	uint32_t levelCount;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};
/*	VkSubresourceLayout
(returnedonly)
*/
struct		S_subresource_layout{
	VkDeviceSize offset;
	VkDeviceSize size;
	VkDeviceSize rowPitch;
	VkDeviceSize arrayPitch;
	VkDeviceSize depthPitch;
};
/*	VkBufferCopy
*/
struct		S_buffer_copy{
	VkDeviceSize srcOffset;
	VkDeviceSize dstOffset;
	VkDeviceSize size;
};
/*	VkSparseMemoryBind
*/
struct		S_sparse_memory_bind{
	VkDeviceSize resourceOffset;
	VkDeviceSize size;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	F_sparse_memory_bind flags;
};
/*	VkDescriptorSetLayoutBinding
*/
struct		S_descriptor_set_layout_binding{
	uint32_t binding;
	E_descriptor_type descriptorType;
	uint32_t descriptorCount;
	F_shader_stage stageFlags;
	const VkSampler * pImmutableSamplers;
};
/*	VkDescriptorPoolSize
*/
struct		S_descriptor_pool_size{
	E_descriptor_type type;
	uint32_t descriptorCount;
};
/*	VkSpecializationMapEntry
*/
struct		S_specialization_map_entry{
	uint32_t constantID;
	uint32_t offset;
	size_t size;
};
/*	VkVertexInputBindingDescription
*/
struct		S_vertex_input_binding_description{
	uint32_t binding;
	uint32_t stride;
	E_vertex_input_rate inputRate;
};
/*	VkVertexInputAttributeDescription
*/
struct		S_vertex_input_attribute_description{
	uint32_t location;
	uint32_t binding;
	E_format format;
	uint32_t offset;
};
/*	VkPipelineColorBlendAttachmentState
*/
struct		S_pipeline_color_blend_attachment_state{
	VkBool32 blendEnable;
	E_blend_factor srcColorBlendFactor;
	E_blend_factor dstColorBlendFactor;
	E_blend_op colorBlendOp;
	E_blend_factor srcAlphaBlendFactor;
	E_blend_factor dstAlphaBlendFactor;
	E_blend_op alphaBlendOp;
	F_color_component colorWriteMask;
};
/*	VkStencilOpState
*/
struct		S_stencil_op_state{
	E_stencil_op failOp;
	E_stencil_op passOp;
	E_stencil_op depthFailOp;
	E_compare_op compareOp;
	uint32_t compareMask;
	uint32_t writeMask;
	uint32_t reference;
};
/*	VkPushConstantRange
*/
struct		S_push_constant_range{
	F_shader_stage stageFlags;
	uint32_t offset;
	uint32_t size;
};
/*	VkClearDepthStencilValue
*/
struct		S_clear_depth_stencil_value{
	float depth;
	uint32_t stencil;
};
/*	VkClearAttachment
*/
struct		S_clear_attachment{
	F_image_aspect aspectMask;
	uint32_t colorAttachment;
	VkClearValue clearValue;
};
/*	VkAttachmentDescription
*/
struct		S_attachment_description{
	F_attachment_description flags;
	E_format format;
	F_sample_count samples;
	E_attachment_load_op loadOp;
	E_attachment_store_op storeOp;
	E_attachment_load_op stencilLoadOp;
	E_attachment_store_op stencilStoreOp;
	E_image_layout initialLayout;
	E_image_layout finalLayout;
};
/*	VkAttachmentReference
*/
struct		S_attachment_reference{
	uint32_t attachment;
	E_image_layout layout;
};
/*	VkSubpassDependency
*/
struct		S_subpass_dependency{
	uint32_t srcSubpass;
	uint32_t dstSubpass;
	F_pipeline_stage srcStageMask;
	F_pipeline_stage dstStageMask;
	F_access srcAccessMask;
	F_access dstAccessMask;
	F_dependency dependencyFlags;
};
/*	VkPhysicalDeviceFeatures
*/
struct		S_physical_device_features{
	VkBool32 robustBufferAccess;
	VkBool32 fullDrawIndexUint32;
	VkBool32 imageCubeArray;
	VkBool32 independentBlend;
	VkBool32 geometryShader;
	VkBool32 tessellationShader;
	VkBool32 sampleRateShading;
	VkBool32 dualSrcBlend;
	VkBool32 logicOp;
	VkBool32 multiDrawIndirect;
	VkBool32 drawIndirectFirstInstance;
	VkBool32 depthClamp;
	VkBool32 depthBiasClamp;
	VkBool32 fillModeNonSolid;
	VkBool32 depthBounds;
	VkBool32 wideLines;
	VkBool32 largePoints;
	VkBool32 alphaToOne;
	VkBool32 multiViewport;
	VkBool32 samplerAnisotropy;
	VkBool32 textureCompressionETC2;
	VkBool32 textureCompressionASTC_LDR;
	VkBool32 textureCompressionBC;
	VkBool32 occlusionQueryPrecise;
	VkBool32 pipelineStatisticsQuery;
	VkBool32 vertexPipelineStoresAndAtomics;
	VkBool32 fragmentStoresAndAtomics;
	VkBool32 shaderTessellationAndGeometryPointSize;
	VkBool32 shaderImageGatherExtended;
	VkBool32 shaderStorageImageExtendedFormats;
	VkBool32 shaderStorageImageMultisample;
	VkBool32 shaderStorageImageReadWithoutFormat;
	VkBool32 shaderStorageImageWriteWithoutFormat;
	VkBool32 shaderUniformBufferArrayDynamicIndexing;
	VkBool32 shaderSampledImageArrayDynamicIndexing;
	VkBool32 shaderStorageBufferArrayDynamicIndexing;
	VkBool32 shaderStorageImageArrayDynamicIndexing;
	VkBool32 shaderClipDistance;
	VkBool32 shaderCullDistance;
	VkBool32 shaderFloat64;
	VkBool32 shaderInt64;
	VkBool32 shaderInt16;
	VkBool32 shaderResourceResidency;
	VkBool32 shaderResourceMinLod;
	VkBool32 sparseBinding;
	VkBool32 sparseResidencyBuffer;
	VkBool32 sparseResidencyImage2D;
	VkBool32 sparseResidencyImage3D;
	VkBool32 sparseResidency2Samples;
	VkBool32 sparseResidency4Samples;
	VkBool32 sparseResidency8Samples;
	VkBool32 sparseResidency16Samples;
	VkBool32 sparseResidencyAliased;
	VkBool32 variableMultisampleRate;
	VkBool32 inheritedQueries;
};
/*	VkPhysicalDeviceSparseProperties
(returnedonly)
*/
struct		S_physical_device_sparse_properties{
	VkBool32 residencyStandard2DBlockShape;
	VkBool32 residencyStandard2DMultisampleBlockShape;
	VkBool32 residencyStandard3DBlockShape;
	VkBool32 residencyAlignedMipSize;
	VkBool32 residencyNonResidentStrict;
};
/*	VkPhysicalDeviceLimits
(returnedonly)
*/
struct		S_physical_device_limits{
	uint32_t maxImageDimension1D;
	uint32_t maxImageDimension2D;
	uint32_t maxImageDimension3D;
	uint32_t maxImageDimensionCube;
	uint32_t maxImageArrayLayers;
	uint32_t maxTexelBufferElements;
	uint32_t maxUniformBufferRange;
	uint32_t maxStorageBufferRange;
	uint32_t maxPushConstantsSize;
	uint32_t maxMemoryAllocationCount;
	uint32_t maxSamplerAllocationCount;
	VkDeviceSize bufferImageGranularity;
	VkDeviceSize sparseAddressSpaceSize;
	uint32_t maxBoundDescriptorSets;
	uint32_t maxPerStageDescriptorSamplers;
	uint32_t maxPerStageDescriptorUniformBuffers;
	uint32_t maxPerStageDescriptorStorageBuffers;
	uint32_t maxPerStageDescriptorSampledImages;
	uint32_t maxPerStageDescriptorStorageImages;
	uint32_t maxPerStageDescriptorInputAttachments;
	uint32_t maxPerStageResources;
	uint32_t maxDescriptorSetSamplers;
	uint32_t maxDescriptorSetUniformBuffers;
	uint32_t maxDescriptorSetUniformBuffersDynamic;
	uint32_t maxDescriptorSetStorageBuffers;
	uint32_t maxDescriptorSetStorageBuffersDynamic;
	uint32_t maxDescriptorSetSampledImages;
	uint32_t maxDescriptorSetStorageImages;
	uint32_t maxDescriptorSetInputAttachments;
	uint32_t maxVertexInputAttributes;
	uint32_t maxVertexInputBindings;
	uint32_t maxVertexInputAttributeOffset;
	uint32_t maxVertexInputBindingStride;
	uint32_t maxVertexOutputComponents;
	uint32_t maxTessellationGenerationLevel;
	uint32_t maxTessellationPatchSize;
	uint32_t maxTessellationControlPerVertexInputComponents;
	uint32_t maxTessellationControlPerVertexOutputComponents;
	uint32_t maxTessellationControlPerPatchOutputComponents;
	uint32_t maxTessellationControlTotalOutputComponents;
	uint32_t maxTessellationEvaluationInputComponents;
	uint32_t maxTessellationEvaluationOutputComponents;
	uint32_t maxGeometryShaderInvocations;
	uint32_t maxGeometryInputComponents;
	uint32_t maxGeometryOutputComponents;
	uint32_t maxGeometryOutputVertices;
	uint32_t maxGeometryTotalOutputComponents;
	uint32_t maxFragmentInputComponents;
	uint32_t maxFragmentOutputAttachments;
	uint32_t maxFragmentDualSrcAttachments;
	uint32_t maxFragmentCombinedOutputResources;
	uint32_t maxComputeSharedMemorySize;
	uint32_t maxComputeWorkGroupCount[3];
	uint32_t maxComputeWorkGroupInvocations;
	uint32_t maxComputeWorkGroupSize[3];
	uint32_t subPixelPrecisionBits;
	uint32_t subTexelPrecisionBits;
	uint32_t mipmapPrecisionBits;
	uint32_t maxDrawIndexedIndexValue;
	uint32_t maxDrawIndirectCount;
	float maxSamplerLodBias;
	float maxSamplerAnisotropy;
	uint32_t maxViewports;
	uint32_t maxViewportDimensions[2];
	float viewportBoundsRange[2];
	uint32_t viewportSubPixelBits;
	size_t minMemoryMapAlignment;
	VkDeviceSize minTexelBufferOffsetAlignment;
	VkDeviceSize minUniformBufferOffsetAlignment;
	VkDeviceSize minStorageBufferOffsetAlignment;
	int32_t minTexelOffset;
	uint32_t maxTexelOffset;
	int32_t minTexelGatherOffset;
	uint32_t maxTexelGatherOffset;
	float minInterpolationOffset;
	float maxInterpolationOffset;
	uint32_t subPixelInterpolationOffsetBits;
	uint32_t maxFramebufferWidth;
	uint32_t maxFramebufferHeight;
	uint32_t maxFramebufferLayers;
	F_sample_count framebufferColorSampleCounts;
	F_sample_count framebufferDepthSampleCounts;
	F_sample_count framebufferStencilSampleCounts;
	F_sample_count framebufferNoAttachmentsSampleCounts;
	uint32_t maxColorAttachments;
	F_sample_count sampledImageColorSampleCounts;
	F_sample_count sampledImageIntegerSampleCounts;
	F_sample_count sampledImageDepthSampleCounts;
	F_sample_count sampledImageStencilSampleCounts;
	F_sample_count storageImageSampleCounts;
	uint32_t maxSampleMaskWords;
	VkBool32 timestampComputeAndGraphics;
	float timestampPeriod;
	uint32_t maxClipDistances;
	uint32_t maxCullDistances;
	uint32_t maxCombinedClipAndCullDistances;
	uint32_t discreteQueuePriorities;
	float pointSizeRange[2];
	float lineWidthRange[2];
	float pointSizeGranularity;
	float lineWidthGranularity;
	VkBool32 strictLines;
	VkBool32 standardSampleLocations;
	VkDeviceSize optimalBufferCopyOffsetAlignment;
	VkDeviceSize optimalBufferCopyRowPitchAlignment;
	VkDeviceSize nonCoherentAtomSize;
};
/*	VkDrawIndirectCommand
*/
struct		S_draw_indirect_command{
	uint32_t vertexCount;
	uint32_t instanceCount;
	uint32_t firstVertex;
	uint32_t firstInstance;
};
/*	VkDrawIndexedIndirectCommand
*/
struct		S_draw_indexed_indirect_command{
	uint32_t indexCount;
	uint32_t instanceCount;
	uint32_t firstIndex;
	int32_t vertexOffset;
	uint32_t firstInstance;
};
/*	VkDispatchIndirectCommand
*/
struct		S_dispatch_indirect_command{
	uint32_t x;
	uint32_t y;
	uint32_t z;
};
/*	VkDisplayPlanePropertiesKHR
(returnedonly)
*/
struct		S_display_plane_properties_KHR{
	VkDisplayKHR currentDisplay;
	uint32_t currentStackIndex;
};
/*	VkSurfaceFormatKHR
(returnedonly)
*/
struct		S_surface_format_KHR{
	E_format format;
	E_color_space_KHR colorSpace;
};
/*	VkIndirectCommandsTokenNVX
*/
struct		S_indirect_commands_token_NVX{
	E_indirect_commands_token_type_NVX tokenType;
	VkBuffer buffer;
	VkDeviceSize offset;
};
/*	VkIndirectCommandsLayoutTokenNVX
*/
struct		S_indirect_commands_layout_token_NVX{
	E_indirect_commands_token_type_NVX tokenType;
	uint32_t bindingUnit;
	uint32_t dynamicCount;
	uint32_t divisor;
};
/*	VkObjectTableEntryNVX
*/
struct		S_object_table_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
};
/*	VkObjectTablePipelineEntryNVX
*/
struct		S_object_table_pipeline_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkPipeline pipeline;
};
/*	VkObjectTableDescriptorSetEntryNVX
*/
struct		S_object_table_descriptor_set_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkPipelineLayout pipelineLayout;
	VkDescriptorSet descriptorSet;
};
/*	VkObjectTableVertexBufferEntryNVX
*/
struct		S_object_table_vertex_buffer_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkBuffer buffer;
};
/*	VkObjectTableIndexBufferEntryNVX
*/
struct		S_object_table_index_buffer_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkBuffer buffer;
	E_index_type indexType;
};
/*	VkObjectTablePushConstantEntryNVX
*/
struct		S_object_table_push_constant_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkPipelineLayout pipelineLayout;
	F_shader_stage stageFlags;
};
/*	VkConformanceVersionKHR
*/
struct		S_conformance_version_KHR{
	uint8_t major;
	uint8_t minor;
	uint8_t subminor;
	uint8_t patch;
};
/*	VkExternalMemoryProperties
(returnedonly)
*/
struct		S_external_memory_properties{
	F_external_memory_feature externalMemoryFeatures;
	F_external_memory_handle_type exportFromImportedHandleTypes;
	F_external_memory_handle_type compatibleHandleTypes;
};
/*	VkDescriptorUpdateTemplateEntry
*/
struct		S_descriptor_update_template_entry{
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	E_descriptor_type descriptorType;
	size_t offset;
	size_t stride;
};
/*	VkXYColorEXT
Chromaticity coordinate*/
struct		S_xy_color_EXT{
	float x;
	float y;
};
/*	VkRefreshCycleDurationGOOGLE
(returnedonly)
*/
struct		S_refresh_cycle_duration_GOOGLE{
	uint64_t refreshDuration;
};
/*	VkPastPresentationTimingGOOGLE
(returnedonly)
*/
struct		S_past_presentation_timing_GOOGLE{
	uint32_t presentID;
	uint64_t desiredPresentTime;
	uint64_t actualPresentTime;
	uint64_t earliestPresentTime;
	uint64_t presentMargin;
};
/*	VkPresentTimeGOOGLE
*/
struct		S_present_time_GOOGLE{
	uint32_t presentID;
	uint64_t desiredPresentTime;
};
/*	VkViewportWScalingNV
*/
struct		S_viewport_w_scaling_NV{
	float xcoeff;
	float ycoeff;
};
/*	VkViewportSwizzleNV
*/
struct		S_viewport_swizzle_NV{
	E_viewport_coordinate_swizzle_NV x;
	E_viewport_coordinate_swizzle_NV y;
	E_viewport_coordinate_swizzle_NV z;
	E_viewport_coordinate_swizzle_NV w;
};
/*	VkInputAttachmentAspectReference
*/
struct		S_input_attachment_aspect_reference{
	uint32_t subpass;
	uint32_t inputAttachmentIndex;
	F_image_aspect aspectMask;
};
/*	VkSampleLocationEXT
*/
struct		S_sample_location_EXT{
	float x;
	float y;
};
/*	VkShaderResourceUsageAMD
(returnedonly)
*/
struct		S_shader_resource_usage_AMD{
	uint32_t numUsedVgprs;
	uint32_t numUsedSgprs;
	uint32_t ldsSizePerLocalWorkGroup;
	size_t ldsUsageSizeInBytes;
	size_t scratchMemUsageInBytes;
};
/*	VkVertexInputBindingDivisorDescriptionEXT
*/
struct		S_vertex_input_binding_divisor_description_EXT{
	uint32_t binding;
	uint32_t divisor;
};
/*	VkShadingRatePaletteNV
*/
struct		S_shading_rate_palette_NV{
	uint32_t shadingRatePaletteEntryCount;
	const E_shading_rate_palette_entry_NV * pShadingRatePaletteEntries;
};
/*	VkCoarseSampleLocationNV
*/
struct		S_coarse_sample_location_NV{
	uint32_t pixelX;
	uint32_t pixelY;
	uint32_t sample;
};
/*	VkDrawMeshTasksIndirectCommandNV
*/
struct		S_draw_mesh_tasks_indirect_command_NV{
	uint32_t taskCount;
	uint32_t firstTask;
};
/*	VkDrmFormatModifierPropertiesEXT
(returnedonly)
*/
struct		S_drm_format_modifier_properties_EXT{
	uint64_t drmFormatModifier;
	uint32_t drmFormatModifierPlaneCount;
	F_format_feature drmFormatModifierTilingFeatures;
};

}}
