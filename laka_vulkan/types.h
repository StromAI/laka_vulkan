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
F_cull_mode(int flag_):flag(flag_){};
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
operator F_cull_mode const &(){return *this;}
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
bool inline operator==(F_cull_mode f1_, F_cull_mode f2_) { return f1_.flag== f2_.flag; }

/*	VkQueueFlagBits*/
class F_queue {
private:
F_queue(int flag_):flag(flag_){};
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
operator F_queue const &(){return *this;}
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
bool inline operator==(F_queue f1_, F_queue f2_) { return f1_.flag== f2_.flag; }

/*	VkRenderPassCreateFlagBits*/
using F_render_pass_create = VkFlags;

/*	VkDeviceQueueCreateFlagBits*/
using F_device_queue_create = 
			VkDeviceQueueCreateFlagBits;

/*	VkMemoryPropertyFlagBits*/
class F_memory_property {
private:
F_memory_property(int flag_):flag(flag_){};
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
operator F_memory_property const &(){return *this;}
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
bool inline operator==(F_memory_property f1_, F_memory_property f2_) { return f1_.flag== f2_.flag; }

/*	VkMemoryHeapFlagBits*/
class F_memory_heap {
private:
F_memory_heap(int flag_):flag(flag_){};
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
operator F_memory_heap const &(){return *this;}
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
F_memory_heap all_flags(){
return b_device_local;
}
F_memory_heap& on_device_local(){ flag |= b_device_local; return *this; }
F_memory_heap& off_device_local(){ flag &= ~b_device_local; return *this; }
};
F_memory_heap inline operator|(F_memory_heap::B bit1_, F_memory_heap::B bit2_){F_memory_heap flags(bit1_);return flags | bit2_;}
bool inline operator==(F_memory_heap f1_, F_memory_heap f2_) { return f1_.flag== f2_.flag; }

/*	VkAccessFlagBits*/
class F_access {
private:
F_access(int flag_):flag(flag_){};
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
operator F_access const &(){return *this;}
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
bool inline operator==(F_access f1_, F_access f2_) { return f1_.flag== f2_.flag; }

/*	VkBufferUsageFlagBits*/
class F_buffer_usage {
private:
F_buffer_usage(int flag_):flag(flag_){};
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
operator F_buffer_usage const &(){return *this;}
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
bool inline operator==(F_buffer_usage f1_, F_buffer_usage f2_) { return f1_.flag== f2_.flag; }

/*	VkBufferCreateFlagBits*/
class F_buffer_create {
private:
F_buffer_create(int flag_):flag(flag_){};
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
operator F_buffer_create const &(){return *this;}
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
bool inline operator==(F_buffer_create f1_, F_buffer_create f2_) { return f1_.flag== f2_.flag; }

/*	VkShaderStageFlagBits*/
class F_shader_stage {
private:
F_shader_stage(int flag_):flag(flag_){};
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
operator F_shader_stage const &(){return *this;}
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
bool inline operator==(F_shader_stage f1_, F_shader_stage f2_) { return f1_.flag== f2_.flag; }

/*	VkImageUsageFlagBits*/
class F_image_usage {
private:
F_image_usage(int flag_):flag(flag_){};
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
operator F_image_usage const &(){return *this;}
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
bool inline operator==(F_image_usage f1_, F_image_usage f2_) { return f1_.flag== f2_.flag; }

/*	VkImageCreateFlagBits*/
class F_image_create {
private:
F_image_create(int flag_):flag(flag_){};
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
operator F_image_create const &(){return *this;}
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
bool inline operator==(F_image_create f1_, F_image_create f2_) { return f1_.flag== f2_.flag; }

/*	VkPipelineCreateFlagBits*/
class F_pipeline_create {
private:
F_pipeline_create(int flag_):flag(flag_){};
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
operator F_pipeline_create const &(){return *this;}
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
bool inline operator==(F_pipeline_create f1_, F_pipeline_create f2_) { return f1_.flag== f2_.flag; }

/*	VkColorComponentFlagBits*/
class F_color_component {
private:
F_color_component(int flag_):flag(flag_){};
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
operator F_color_component const &(){return *this;}
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
bool inline operator==(F_color_component f1_, F_color_component f2_) { return f1_.flag== f2_.flag; }

/*	VkFenceCreateFlagBits*/
class F_fence_create {
private:
F_fence_create(int flag_):flag(flag_){};
public:
int flag;
enum B{
	b_signaled = VK_FENCE_CREATE_SIGNALED_BIT,
};
F_fence_create():flag(0){}
F_fence_create(B bits_):flag(static_cast<int>(bits_)){}
F_fence_create(F_fence_create const& flag_):flag(flag_.flag){}
F_fence_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
operator F_fence_create const &(){return *this;}
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
F_fence_create all_flags(){
return b_signaled;
}
F_fence_create& on_signaled(){ flag |= b_signaled; return *this; }
F_fence_create& off_signaled(){ flag &= ~b_signaled; return *this; }
};
F_fence_create inline operator|(F_fence_create::B bit1_, F_fence_create::B bit2_){F_fence_create flags(bit1_);return flags | bit2_;}
bool inline operator==(F_fence_create f1_, F_fence_create f2_) { return f1_.flag== f2_.flag; }

/*	VkFormatFeatureFlagBits*/
class F_format_feature {
private:
F_format_feature(int flag_):flag(flag_){};
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
operator F_format_feature const &(){return *this;}
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
bool inline operator==(F_format_feature f1_, F_format_feature f2_) { return f1_.flag== f2_.flag; }

/*	VkQueryControlFlagBits*/
class F_query_control {
private:
F_query_control(int flag_):flag(flag_){};
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
operator F_query_control const &(){return *this;}
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
F_query_control all_flags(){
return b_precise;
}
F_query_control& on_precise(){ flag |= b_precise; return *this; }
F_query_control& off_precise(){ flag &= ~b_precise; return *this; }
};
F_query_control inline operator|(F_query_control::B bit1_, F_query_control::B bit2_){F_query_control flags(bit1_);return flags | bit2_;}
bool inline operator==(F_query_control f1_, F_query_control f2_) { return f1_.flag== f2_.flag; }

/*	VkQueryResultFlagBits*/
class F_query_result {
private:
F_query_result(int flag_):flag(flag_){};
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
operator F_query_result const &(){return *this;}
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
bool inline operator==(F_query_result f1_, F_query_result f2_) { return f1_.flag== f2_.flag; }

/*	VkCommandBufferUsageFlagBits*/
class F_command_buffer_usage {
private:
F_command_buffer_usage(int flag_):flag(flag_){};
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
operator F_command_buffer_usage const &(){return *this;}
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
bool inline operator==(F_command_buffer_usage f1_, F_command_buffer_usage f2_) { return f1_.flag== f2_.flag; }

/*	VkQueryPipelineStatisticFlagBits*/
class F_query_pipeline_statistic {
private:
F_query_pipeline_statistic(int flag_):flag(flag_){};
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
operator F_query_pipeline_statistic const &(){return *this;}
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
bool inline operator==(F_query_pipeline_statistic f1_, F_query_pipeline_statistic f2_) { return f1_.flag== f2_.flag; }

/*	VkImageAspectFlagBits*/
class F_image_aspect {
private:
F_image_aspect(int flag_):flag(flag_){};
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
operator F_image_aspect const &(){return *this;}
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
bool inline operator==(F_image_aspect f1_, F_image_aspect f2_) { return f1_.flag== f2_.flag; }

/*	VkSparseImageFormatFlagBits*/
class F_sparse_image_format {
private:
F_sparse_image_format(int flag_):flag(flag_){};
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
operator F_sparse_image_format const &(){return *this;}
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
bool inline operator==(F_sparse_image_format f1_, F_sparse_image_format f2_) { return f1_.flag== f2_.flag; }

/*	VkSparseMemoryBindFlagBits*/
class F_sparse_memory_bind {
private:
F_sparse_memory_bind(int flag_):flag(flag_){};
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
operator F_sparse_memory_bind const &(){return *this;}
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
F_sparse_memory_bind all_flags(){
return b_metadata;
}
F_sparse_memory_bind& on_metadata(){ flag |= b_metadata; return *this; }
F_sparse_memory_bind& off_metadata(){ flag &= ~b_metadata; return *this; }
};
F_sparse_memory_bind inline operator|(F_sparse_memory_bind::B bit1_, F_sparse_memory_bind::B bit2_){F_sparse_memory_bind flags(bit1_);return flags | bit2_;}
bool inline operator==(F_sparse_memory_bind f1_, F_sparse_memory_bind f2_) { return f1_.flag== f2_.flag; }

/*	VkPipelineStageFlagBits*/
class F_pipeline_stage {
private:
F_pipeline_stage(int flag_):flag(flag_){};
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
operator F_pipeline_stage const &(){return *this;}
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
bool inline operator==(F_pipeline_stage f1_, F_pipeline_stage f2_) { return f1_.flag== f2_.flag; }

/*	VkCommandPoolCreateFlagBits*/
class F_command_pool_create {
private:
F_command_pool_create(int flag_):flag(flag_){};
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
operator F_command_pool_create const &(){return *this;}
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
F_command_pool_create all_flags(){
return b_transient | b_reset_command_buffer;
}
F_command_pool_create& on_transient(){ flag |= b_transient; return *this; }
F_command_pool_create& off_transient(){ flag &= ~b_transient; return *this; }
F_command_pool_create& on_reset_command_buffer(){ flag |= b_reset_command_buffer; return *this; }
F_command_pool_create& off_reset_command_buffer(){ flag &= ~b_reset_command_buffer; return *this; }
};
F_command_pool_create inline operator|(F_command_pool_create::B bit1_, F_command_pool_create::B bit2_){F_command_pool_create flags(bit1_);return flags | bit2_;}
bool inline operator==(F_command_pool_create f1_, F_command_pool_create f2_) { return f1_.flag== f2_.flag; }

/*	VkCommandPoolResetFlagBits*/
class F_command_pool_reset {
private:
F_command_pool_reset(int flag_):flag(flag_){};
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
operator F_command_pool_reset const &(){return *this;}
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
F_command_pool_reset all_flags(){
return b_release_resources;
}
F_command_pool_reset& on_release_resources(){ flag |= b_release_resources; return *this; }
F_command_pool_reset& off_release_resources(){ flag &= ~b_release_resources; return *this; }
};
F_command_pool_reset inline operator|(F_command_pool_reset::B bit1_, F_command_pool_reset::B bit2_){F_command_pool_reset flags(bit1_);return flags | bit2_;}
bool inline operator==(F_command_pool_reset f1_, F_command_pool_reset f2_) { return f1_.flag== f2_.flag; }

/*	VkCommandBufferResetFlagBits*/
class F_command_buffer_reset {
private:
F_command_buffer_reset(int flag_):flag(flag_){};
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
operator F_command_buffer_reset const &(){return *this;}
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
F_command_buffer_reset all_flags(){
return b_release_resources;
}
F_command_buffer_reset& on_release_resources(){ flag |= b_release_resources; return *this; }
F_command_buffer_reset& off_release_resources(){ flag &= ~b_release_resources; return *this; }
};
F_command_buffer_reset inline operator|(F_command_buffer_reset::B bit1_, F_command_buffer_reset::B bit2_){F_command_buffer_reset flags(bit1_);return flags | bit2_;}
bool inline operator==(F_command_buffer_reset f1_, F_command_buffer_reset f2_) { return f1_.flag== f2_.flag; }

/*	VkSampleCountFlagBits*/
class F_sample_count {
private:
F_sample_count(int flag_):flag(flag_){};
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
operator F_sample_count const &(){return *this;}
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
bool inline operator==(F_sample_count f1_, F_sample_count f2_) { return f1_.flag== f2_.flag; }

/*	VkAttachmentDescriptionFlagBits*/
class F_attachment_description {
private:
F_attachment_description(int flag_):flag(flag_){};
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
operator F_attachment_description const &(){return *this;}
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
F_attachment_description all_flags(){
return b_may_alias;
}
F_attachment_description& on_may_alias(){ flag |= b_may_alias; return *this; }
F_attachment_description& off_may_alias(){ flag &= ~b_may_alias; return *this; }
};
F_attachment_description inline operator|(F_attachment_description::B bit1_, F_attachment_description::B bit2_){F_attachment_description flags(bit1_);return flags | bit2_;}
bool inline operator==(F_attachment_description f1_, F_attachment_description f2_) { return f1_.flag== f2_.flag; }

/*	VkStencilFaceFlagBits*/
class F_stencil_face {
private:
F_stencil_face(int flag_):flag(flag_){};
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
operator F_stencil_face const &(){return *this;}
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
bool inline operator==(F_stencil_face f1_, F_stencil_face f2_) { return f1_.flag== f2_.flag; }

/*	VkDescriptorPoolCreateFlagBits*/
class F_descriptor_pool_create {
private:
F_descriptor_pool_create(int flag_):flag(flag_){};
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
operator F_descriptor_pool_create const &(){return *this;}
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
F_descriptor_pool_create all_flags(){
return b_free_descriptor_set;
}
F_descriptor_pool_create& on_free_descriptor_set(){ flag |= b_free_descriptor_set; return *this; }
F_descriptor_pool_create& off_free_descriptor_set(){ flag &= ~b_free_descriptor_set; return *this; }
};
F_descriptor_pool_create inline operator|(F_descriptor_pool_create::B bit1_, F_descriptor_pool_create::B bit2_){F_descriptor_pool_create flags(bit1_);return flags | bit2_;}
bool inline operator==(F_descriptor_pool_create f1_, F_descriptor_pool_create f2_) { return f1_.flag== f2_.flag; }

/*	VkDependencyFlagBits*/
class F_dependency {
private:
F_dependency(int flag_):flag(flag_){};
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
operator F_dependency const &(){return *this;}
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
F_dependency all_flags(){
return b_by_region;
}
F_dependency& on_by_region(){ flag |= b_by_region; return *this; }
F_dependency& off_by_region(){ flag &= ~b_by_region; return *this; }
};
F_dependency inline operator|(F_dependency::B bit1_, F_dependency::B bit2_){F_dependency flags(bit1_);return flags | bit2_;}
bool inline operator==(F_dependency f1_, F_dependency f2_) { return f1_.flag== f2_.flag; }

/*	VkDisplayPlaneAlphaFlagBitsKHR*/
class F_display_plane_alpha_KHR {
private:
F_display_plane_alpha_KHR(int flag_):flag(flag_){};
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
operator F_display_plane_alpha_KHR const &(){return *this;}
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
bool inline operator==(F_display_plane_alpha_KHR f1_, F_display_plane_alpha_KHR f2_) { return f1_.flag== f2_.flag; }

/*	VkCompositeAlphaFlagBitsKHR*/
class F_composite_alpha_KHR {
private:
F_composite_alpha_KHR(int flag_):flag(flag_){};
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
operator F_composite_alpha_KHR const &(){return *this;}
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
bool inline operator==(F_composite_alpha_KHR f1_, F_composite_alpha_KHR f2_) { return f1_.flag== f2_.flag; }

/*	VkSurfaceTransformFlagBitsKHR*/
class F_surface_transform_KHR {
private:
F_surface_transform_KHR(int flag_):flag(flag_){};
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
operator F_surface_transform_KHR const &(){return *this;}
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
bool inline operator==(F_surface_transform_KHR f1_, F_surface_transform_KHR f2_) { return f1_.flag== f2_.flag; }

/*	VkDebugReportFlagBitsEXT*/
class F_debug_report_EXT {
private:
F_debug_report_EXT(int flag_):flag(flag_){};
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
operator F_debug_report_EXT const &(){return *this;}
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
bool inline operator==(F_debug_report_EXT f1_, F_debug_report_EXT f2_) { return f1_.flag== f2_.flag; }

/*	VkExternalMemoryHandleTypeFlagBitsNV*/
class F_external_memory_handle_type_NV {
private:
F_external_memory_handle_type_NV(int flag_):flag(flag_){};
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
operator F_external_memory_handle_type_NV const &(){return *this;}
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
bool inline operator==(F_external_memory_handle_type_NV f1_, F_external_memory_handle_type_NV f2_) { return f1_.flag== f2_.flag; }

/*	VkExternalMemoryFeatureFlagBitsNV*/
class F_external_memory_feature_NV {
private:
F_external_memory_feature_NV(int flag_):flag(flag_){};
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
operator F_external_memory_feature_NV const &(){return *this;}
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
bool inline operator==(F_external_memory_feature_NV f1_, F_external_memory_feature_NV f2_) { return f1_.flag== f2_.flag; }

/*	VkSubgroupFeatureFlagBits*/
class F_subgroup_feature {
private:
F_subgroup_feature(int flag_):flag(flag_){};
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
operator F_subgroup_feature const &(){return *this;}
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
bool inline operator==(F_subgroup_feature f1_, F_subgroup_feature f2_) { return f1_.flag== f2_.flag; }

/*	VkIndirectCommandsLayoutUsageFlagBitsNVX*/
class F_indirect_commands_layout_usage_NVX {
private:
F_indirect_commands_layout_usage_NVX(int flag_):flag(flag_){};
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
operator F_indirect_commands_layout_usage_NVX const &(){return *this;}
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
bool inline operator==(F_indirect_commands_layout_usage_NVX f1_, F_indirect_commands_layout_usage_NVX f2_) { return f1_.flag== f2_.flag; }

/*	VkObjectEntryUsageFlagBitsNVX*/
class F_object_entry_usage_NVX {
private:
F_object_entry_usage_NVX(int flag_):flag(flag_){};
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
operator F_object_entry_usage_NVX const &(){return *this;}
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
F_object_entry_usage_NVX all_flags(){
return b_graphics_nvx | b_compute_nvx;
}
F_object_entry_usage_NVX& on_graphics_nvx(){ flag |= b_graphics_nvx; return *this; }
F_object_entry_usage_NVX& off_graphics_nvx(){ flag &= ~b_graphics_nvx; return *this; }
F_object_entry_usage_NVX& on_compute_nvx(){ flag |= b_compute_nvx; return *this; }
F_object_entry_usage_NVX& off_compute_nvx(){ flag &= ~b_compute_nvx; return *this; }
};
F_object_entry_usage_NVX inline operator|(F_object_entry_usage_NVX::B bit1_, F_object_entry_usage_NVX::B bit2_){F_object_entry_usage_NVX flags(bit1_);return flags | bit2_;}
bool inline operator==(F_object_entry_usage_NVX f1_, F_object_entry_usage_NVX f2_) { return f1_.flag== f2_.flag; }

/*	VkDescriptorSetLayoutCreateFlagBits*/
using F_descriptor_set_layout_create = 
			VkDescriptorSetLayoutCreateFlagBits;

/*	VkExternalMemoryHandleTypeFlagBits*/
class F_external_memory_handle_type {
private:
F_external_memory_handle_type(int flag_):flag(flag_){};
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
operator F_external_memory_handle_type const &(){return *this;}
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
bool inline operator==(F_external_memory_handle_type f1_, F_external_memory_handle_type f2_) { return f1_.flag== f2_.flag; }

/*	VkExternalMemoryFeatureFlagBits*/
class F_external_memory_feature {
private:
F_external_memory_feature(int flag_):flag(flag_){};
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
operator F_external_memory_feature const &(){return *this;}
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
bool inline operator==(F_external_memory_feature f1_, F_external_memory_feature f2_) { return f1_.flag== f2_.flag; }

/*	VkExternalSemaphoreHandleTypeFlagBits*/
class F_external_semaphore_handle_type {
private:
F_external_semaphore_handle_type(int flag_):flag(flag_){};
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
operator F_external_semaphore_handle_type const &(){return *this;}
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
bool inline operator==(F_external_semaphore_handle_type f1_, F_external_semaphore_handle_type f2_) { return f1_.flag== f2_.flag; }

/*	VkExternalSemaphoreFeatureFlagBits*/
class F_external_semaphore_feature {
private:
F_external_semaphore_feature(int flag_):flag(flag_){};
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
operator F_external_semaphore_feature const &(){return *this;}
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
F_external_semaphore_feature all_flags(){
return b_exportable | b_importable;
}
F_external_semaphore_feature& on_exportable(){ flag |= b_exportable; return *this; }
F_external_semaphore_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
F_external_semaphore_feature& on_importable(){ flag |= b_importable; return *this; }
F_external_semaphore_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
F_external_semaphore_feature inline operator|(F_external_semaphore_feature::B bit1_, F_external_semaphore_feature::B bit2_){F_external_semaphore_feature flags(bit1_);return flags | bit2_;}
bool inline operator==(F_external_semaphore_feature f1_, F_external_semaphore_feature f2_) { return f1_.flag== f2_.flag; }

/*	VkSemaphoreImportFlagBits*/
class F_semaphore_import {
private:
F_semaphore_import(int flag_):flag(flag_){};
public:
int flag;
enum B{
	b_temporary = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
};
F_semaphore_import():flag(0){}
F_semaphore_import(B bits_):flag(static_cast<int>(bits_)){}
F_semaphore_import(F_semaphore_import const& flag_):flag(flag_.flag){}
F_semaphore_import(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
operator F_semaphore_import const &(){return *this;}
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
F_semaphore_import all_flags(){
return b_temporary;
}
F_semaphore_import& on_temporary(){ flag |= b_temporary; return *this; }
F_semaphore_import& off_temporary(){ flag &= ~b_temporary; return *this; }
};
F_semaphore_import inline operator|(F_semaphore_import::B bit1_, F_semaphore_import::B bit2_){F_semaphore_import flags(bit1_);return flags | bit2_;}
bool inline operator==(F_semaphore_import f1_, F_semaphore_import f2_) { return f1_.flag== f2_.flag; }

/*	VkExternalFenceHandleTypeFlagBits*/
class F_external_fence_handle_type {
private:
F_external_fence_handle_type(int flag_):flag(flag_){};
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
operator F_external_fence_handle_type const &(){return *this;}
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
bool inline operator==(F_external_fence_handle_type f1_, F_external_fence_handle_type f2_) { return f1_.flag== f2_.flag; }

/*	VkExternalFenceFeatureFlagBits*/
class F_external_fence_feature {
private:
F_external_fence_feature(int flag_):flag(flag_){};
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
operator F_external_fence_feature const &(){return *this;}
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
F_external_fence_feature all_flags(){
return b_exportable | b_importable;
}
F_external_fence_feature& on_exportable(){ flag |= b_exportable; return *this; }
F_external_fence_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
F_external_fence_feature& on_importable(){ flag |= b_importable; return *this; }
F_external_fence_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
F_external_fence_feature inline operator|(F_external_fence_feature::B bit1_, F_external_fence_feature::B bit2_){F_external_fence_feature flags(bit1_);return flags | bit2_;}
bool inline operator==(F_external_fence_feature f1_, F_external_fence_feature f2_) { return f1_.flag== f2_.flag; }

/*	VkFenceImportFlagBits*/
class F_fence_import {
private:
F_fence_import(int flag_):flag(flag_){};
public:
int flag;
enum B{
	b_temporary = VK_FENCE_IMPORT_TEMPORARY_BIT,
};
F_fence_import():flag(0){}
F_fence_import(B bits_):flag(static_cast<int>(bits_)){}
F_fence_import(F_fence_import const& flag_):flag(flag_.flag){}
F_fence_import(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
operator F_fence_import const &(){return *this;}
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
F_fence_import all_flags(){
return b_temporary;
}
F_fence_import& on_temporary(){ flag |= b_temporary; return *this; }
F_fence_import& off_temporary(){ flag &= ~b_temporary; return *this; }
};
F_fence_import inline operator|(F_fence_import::B bit1_, F_fence_import::B bit2_){F_fence_import flags(bit1_);return flags | bit2_;}
bool inline operator==(F_fence_import f1_, F_fence_import f2_) { return f1_.flag== f2_.flag; }

/*	VkSurfaceCounterFlagBitsEXT*/
class F_surface_counter_EXT {
private:
F_surface_counter_EXT(int flag_):flag(flag_){};
public:
int flag;
enum B{
	b_vblank_ext = VK_SURFACE_COUNTER_VBLANK_EXT,
};
F_surface_counter_EXT():flag(0){}
F_surface_counter_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_surface_counter_EXT(F_surface_counter_EXT const& flag_):flag(flag_.flag){}
F_surface_counter_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
operator F_surface_counter_EXT const &(){return *this;}
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
F_surface_counter_EXT all_flags(){
return b_vblank_ext;
}
F_surface_counter_EXT& on_vblank_ext(){ flag |= b_vblank_ext; return *this; }
F_surface_counter_EXT& off_vblank_ext(){ flag &= ~b_vblank_ext; return *this; }
};
F_surface_counter_EXT inline operator|(F_surface_counter_EXT::B bit1_, F_surface_counter_EXT::B bit2_){F_surface_counter_EXT flags(bit1_);return flags | bit2_;}
bool inline operator==(F_surface_counter_EXT f1_, F_surface_counter_EXT f2_) { return f1_.flag== f2_.flag; }

/*	VkPeerMemoryFeatureFlagBits*/
class F_peer_memory_feature {
private:
F_peer_memory_feature(int flag_):flag(flag_){};
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
operator F_peer_memory_feature const &(){return *this;}
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
bool inline operator==(F_peer_memory_feature f1_, F_peer_memory_feature f2_) { return f1_.flag== f2_.flag; }

/*	VkMemoryAllocateFlagBits*/
class F_memory_allocate {
private:
F_memory_allocate(int flag_):flag(flag_){};
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
operator F_memory_allocate const &(){return *this;}
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
F_memory_allocate all_flags(){
return b_device_mask;
}
F_memory_allocate& on_device_mask(){ flag |= b_device_mask; return *this; }
F_memory_allocate& off_device_mask(){ flag &= ~b_device_mask; return *this; }
};
F_memory_allocate inline operator|(F_memory_allocate::B bit1_, F_memory_allocate::B bit2_){F_memory_allocate flags(bit1_);return flags | bit2_;}
bool inline operator==(F_memory_allocate f1_, F_memory_allocate f2_) { return f1_.flag== f2_.flag; }

/*	VkDeviceGroupPresentModeFlagBitsKHR*/
class F_device_group_present_mode_KHR {
private:
F_device_group_present_mode_KHR(int flag_):flag(flag_){};
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
operator F_device_group_present_mode_KHR const &(){return *this;}
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
bool inline operator==(F_device_group_present_mode_KHR f1_, F_device_group_present_mode_KHR f2_) { return f1_.flag== f2_.flag; }

/*	VkSwapchainCreateFlagBitsKHR*/
using F_swapchain_create_KHR = 
			VkSwapchainCreateFlagBitsKHR;

/*	VkSubpassDescriptionFlagBits*/
using F_subpass_description = 
			VkSubpassDescriptionFlagBits;

/*	VkDebugUtilsMessageSeverityFlagBitsEXT*/
class F_debug_utils_message_severity_EXT {
private:
F_debug_utils_message_severity_EXT(int flag_):flag(flag_){};
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
operator F_debug_utils_message_severity_EXT const &(){return *this;}
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
bool inline operator==(F_debug_utils_message_severity_EXT f1_, F_debug_utils_message_severity_EXT f2_) { return f1_.flag== f2_.flag; }

/*	VkDebugUtilsMessageTypeFlagBitsEXT*/
class F_debug_utils_message_type_EXT {
private:
F_debug_utils_message_type_EXT(int flag_):flag(flag_){};
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
operator F_debug_utils_message_type_EXT const &(){return *this;}
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
bool inline operator==(F_debug_utils_message_type_EXT f1_, F_debug_utils_message_type_EXT f2_) { return f1_.flag== f2_.flag; }

/*	VkDescriptorBindingFlagBitsEXT*/
class F_descriptor_binding_EXT {
private:
F_descriptor_binding_EXT(int flag_):flag(flag_){};
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
operator F_descriptor_binding_EXT const &(){return *this;}
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
bool inline operator==(F_descriptor_binding_EXT f1_, F_descriptor_binding_EXT f2_) { return f1_.flag== f2_.flag; }

/*	VkConditionalRenderingFlagBitsEXT*/
class F_conditional_rendering_EXT {
private:
F_conditional_rendering_EXT(int flag_):flag(flag_){};
public:
int flag;
enum B{
	b_inverted_ext = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,
};
F_conditional_rendering_EXT():flag(0){}
F_conditional_rendering_EXT(B bits_):flag(static_cast<int>(bits_)){}
F_conditional_rendering_EXT(F_conditional_rendering_EXT const& flag_):flag(flag_.flag){}
F_conditional_rendering_EXT(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
operator F_conditional_rendering_EXT const &(){return *this;}
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
F_conditional_rendering_EXT all_flags(){
return b_inverted_ext;
}
F_conditional_rendering_EXT& on_inverted_ext(){ flag |= b_inverted_ext; return *this; }
F_conditional_rendering_EXT& off_inverted_ext(){ flag &= ~b_inverted_ext; return *this; }
};
F_conditional_rendering_EXT inline operator|(F_conditional_rendering_EXT::B bit1_, F_conditional_rendering_EXT::B bit2_){F_conditional_rendering_EXT flags(bit1_);return flags | bit2_;}
bool inline operator==(F_conditional_rendering_EXT f1_, F_conditional_rendering_EXT f2_) { return f1_.flag== f2_.flag; }

/*	VkGeometryInstanceFlagBitsNVX*/
class F_geometry_instance_NVX {
private:
F_geometry_instance_NVX(int flag_):flag(flag_){};
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
operator F_geometry_instance_NVX const &(){return *this;}
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
bool inline operator==(F_geometry_instance_NVX f1_, F_geometry_instance_NVX f2_) { return f1_.flag== f2_.flag; }

/*	VkGeometryFlagBitsNVX*/
class F_geometry_NVX {
private:
F_geometry_NVX(int flag_):flag(flag_){};
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
operator F_geometry_NVX const &(){return *this;}
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
F_geometry_NVX all_flags(){
return b_opaque_nvx | b_no_duplicate_any_hit_invocation_nvx;
}
F_geometry_NVX& on_opaque_nvx(){ flag |= b_opaque_nvx; return *this; }
F_geometry_NVX& off_opaque_nvx(){ flag &= ~b_opaque_nvx; return *this; }
F_geometry_NVX& on_no_duplicate_any_hit_invocation_nvx(){ flag |= b_no_duplicate_any_hit_invocation_nvx; return *this; }
F_geometry_NVX& off_no_duplicate_any_hit_invocation_nvx(){ flag &= ~b_no_duplicate_any_hit_invocation_nvx; return *this; }
};
F_geometry_NVX inline operator|(F_geometry_NVX::B bit1_, F_geometry_NVX::B bit2_){F_geometry_NVX flags(bit1_);return flags | bit2_;}
bool inline operator==(F_geometry_NVX f1_, F_geometry_NVX f2_) { return f1_.flag== f2_.flag; }

/*	VkBuildAccelerationStructureFlagBitsNVX*/
class F_build_acceleration_structure_NVX {
private:
F_build_acceleration_structure_NVX(int flag_):flag(flag_){};
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
operator F_build_acceleration_structure_NVX const &(){return *this;}
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
bool inline operator==(F_build_acceleration_structure_NVX f1_, F_build_acceleration_structure_NVX f2_) { return f1_.flag== f2_.flag; }

struct S_base_structure
{VkStructureType sType; void * pNext = nullptr;};

#if 1
struct S_offset_2d;
struct S_offset_3d;
struct S_extent_2d;
struct S_extent_3d;
struct S_viewport;
struct S_rect_2d;
struct S_clear_rect;
struct S_component_mapping;
struct S_physical_device_properties;
struct S_extension_properties;
struct S_layer_properties;
struct S_application_info;
struct S_allocation_callbacks;
struct S_device_queue_create_info;
struct S_device_create_info;
struct S_instance_create_info;
struct S_queue_family_properties;
struct S_physical_device_memory_properties;
struct S_memory_allocate_info;
struct S_memory_requirements;
struct S_sparse_image_format_properties;
struct S_sparse_image_memory_requirements;
struct S_memory_type;
struct S_memory_heap;
struct S_mapped_memory_range;
struct S_format_properties;
struct S_image_format_properties;
struct S_descriptor_buffer_info;
struct S_descriptor_image_info;
struct S_write_descriptor_set;
struct S_copy_descriptor_set;
struct S_buffer_create_info;
struct S_buffer_view_create_info;
struct S_image_subresource;
struct S_image_subresource_layers;
struct S_image_subresource_range;
struct S_memory_barrier;
struct S_buffer_memory_barrier;
struct S_image_memory_barrier;
struct S_image_create_info;
struct S_subresource_layout;
struct S_image_view_create_info;
struct S_buffer_copy;
struct S_sparse_memory_bind;
struct S_sparse_image_memory_bind;
struct S_sparse_buffer_memory_bind_info;
struct S_sparse_image_opaque_memory_bind_info;
struct S_sparse_image_memory_bind_info;
struct S_bind_sparse_info;
struct S_image_copy;
struct S_image_blit;
struct S_buffer_image_copy;
struct S_image_resolve;
struct S_shader_module_create_info;
struct S_descriptor_set_layout_binding;
struct S_descriptor_set_layout_create_info;
struct S_descriptor_pool_size;
struct S_descriptor_pool_create_info;
struct S_descriptor_set_allocate_info;
struct S_specialization_map_entry;
struct S_specialization_info;
struct S_pipeline_shader_stage_create_info;
struct S_compute_pipeline_create_info;
struct S_vertex_input_binding_description;
struct S_vertex_input_attribute_description;
struct S_pipeline_vertex_input_state_create_info;
struct S_pipeline_input_assembly_state_create_info;
struct S_pipeline_tessellation_state_create_info;
struct S_pipeline_viewport_state_create_info;
struct S_pipeline_rasterization_state_create_info;
struct S_pipeline_multisample_state_create_info;
struct S_pipeline_color_blend_attachment_state;
struct S_pipeline_color_blend_state_create_info;
struct S_pipeline_dynamic_state_create_info;
struct S_stencil_op_state;
struct S_pipeline_depth_stencil_state_create_info;
struct S_graphics_pipeline_create_info;
struct S_pipeline_cache_create_info;
struct S_push_constant_range;
struct S_pipeline_layout_create_info;
struct S_sampler_create_info;
struct S_command_pool_create_info;
struct S_command_buffer_allocate_info;
struct S_command_buffer_inheritance_info;
struct S_command_buffer_begin_info;
struct S_render_pass_begin_info;
struct S_clear_depth_stencil_value;
struct S_clear_attachment;
struct S_attachment_description;
struct S_attachment_reference;
struct S_subpass_description;
struct S_subpass_dependency;
struct S_render_pass_create_info;
struct S_event_create_info;
struct S_fence_create_info;
struct S_physical_device_features;
struct S_physical_device_sparse_properties;
struct S_physical_device_limits;
struct S_semaphore_create_info;
struct S_query_pool_create_info;
struct S_framebuffer_create_info;
struct S_draw_indirect_command;
struct S_draw_indexed_indirect_command;
struct S_dispatch_indirect_command;
struct S_submit_info;
struct S_display_properties_KHR;
struct S_display_plane_properties_KHR;
struct S_display_mode_parameters_KHR;
struct S_display_mode_properties_KHR;
struct S_display_mode_create_info_KHR;
struct S_display_plane_capabilities_KHR;
struct S_display_surface_create_info_KHR;
struct S_display_present_info_KHR;
struct S_surface_capabilities_KHR;
struct S_android_surface_create_info_KHR;
struct S_mir_surface_create_info_KHR;
struct S_vi_surface_create_info_NN;
struct S_wayland_surface_create_info_KHR;
struct S_win32_surface_create_info_KHR;
struct S_xlib_surface_create_info_KHR;
struct S_xcb_surface_create_info_KHR;
struct S_surface_format_KHR;
struct S_swapchain_create_info_KHR;
struct S_present_info_KHR;
struct S_debug_report_callback_create_info_EXT;
struct S_validation_flags_EXT;
struct S_pipeline_rasterization_state_rasterization_order_AMD;
struct S_debug_marker_object_name_info_EXT;
struct S_debug_marker_object_tag_info_EXT;
struct S_debug_marker_marker_info_EXT;
struct S_dedicated_allocation_image_create_info_NV;
struct S_dedicated_allocation_buffer_create_info_NV;
struct S_dedicated_allocation_memory_allocate_info_NV;
struct S_external_image_format_properties_NV;
struct S_external_memory_image_create_info_NV;
struct S_export_memory_allocate_info_NV;
struct S_import_memory_win32_handle_info_NV;
struct S_export_memory_win32_handle_info_NV;
struct S_win32_keyed_mutex_acquire_release_info_NV;
struct S_device_generated_commands_features_NVX;
struct S_device_generated_commands_limits_NVX;
struct S_indirect_commands_token_NVX;
struct S_indirect_commands_layout_token_NVX;
struct S_indirect_commands_layout_create_info_NVX;
struct S_cmd_process_commands_info_NVX;
struct S_cmd_reserve_space_for_commands_info_NVX;
struct S_object_table_create_info_NVX;
struct S_object_table_entry_NVX;
struct S_object_table_pipeline_entry_NVX;
struct S_object_table_descriptor_set_entry_NVX;
struct S_object_table_vertex_buffer_entry_NVX;
struct S_object_table_index_buffer_entry_NVX;
struct S_object_table_push_constant_entry_NVX;
struct S_physical_device_features2;
struct S_physical_device_properties2;
struct S_format_properties2;
struct S_image_format_properties2;
struct S_physical_device_image_format_info2;
struct S_queue_family_properties2;
struct S_physical_device_memory_properties2;
struct S_sparse_image_format_properties2;
struct S_physical_device_sparse_image_format_info2;
struct S_physical_device_push_descriptor_properties_KHR;
struct S_conformance_version_KHR;
struct S_physical_device_driver_properties_KHR;
struct S_present_regions_KHR;
struct S_present_region_KHR;
struct S_rect_layer_KHR;
struct S_physical_device_variable_pointer_features;
struct S_external_memory_properties;
struct S_physical_device_external_image_format_info;
struct S_external_image_format_properties;
struct S_physical_device_external_buffer_info;
struct S_external_buffer_properties;
struct S_physical_device_id_properties;
struct S_external_memory_image_create_info;
struct S_external_memory_buffer_create_info;
struct S_export_memory_allocate_info;
struct S_import_memory_win32_handle_info_KHR;
struct S_export_memory_win32_handle_info_KHR;
struct S_memory_win32_handle_properties_KHR;
struct S_memory_get_win32_handle_info_KHR;
struct S_import_memory_fd_info_KHR;
struct S_memory_fd_properties_KHR;
struct S_memory_get_fd_info_KHR;
struct S_win32_keyed_mutex_acquire_release_info_KHR;
struct S_physical_device_external_semaphore_info;
struct S_external_semaphore_properties;
struct S_export_semaphore_create_info;
struct S_import_semaphore_win32_handle_info_KHR;
struct S_export_semaphore_win32_handle_info_KHR;
struct S_d_3d12_fence_submit_info_KHR;
struct S_semaphore_get_win32_handle_info_KHR;
struct S_import_semaphore_fd_info_KHR;
struct S_semaphore_get_fd_info_KHR;
struct S_physical_device_external_fence_info;
struct S_external_fence_properties;
struct S_export_fence_create_info;
struct S_import_fence_win32_handle_info_KHR;
struct S_export_fence_win32_handle_info_KHR;
struct S_fence_get_win32_handle_info_KHR;
struct S_import_fence_fd_info_KHR;
struct S_fence_get_fd_info_KHR;
struct S_physical_device_multiview_features;
struct S_physical_device_multiview_properties;
struct S_render_pass_multiview_create_info;
struct S_surface_capabilities2_EXT;
struct S_display_power_info_EXT;
struct S_device_event_info_EXT;
struct S_display_event_info_EXT;
struct S_swapchain_counter_create_info_EXT;
struct S_physical_device_group_properties;
struct S_memory_allocate_flags_info;
struct S_bind_buffer_memory_info;
struct S_bind_buffer_memory_device_group_info;
struct S_bind_image_memory_info;
struct S_bind_image_memory_device_group_info;
struct S_device_group_render_pass_begin_info;
struct S_device_group_command_buffer_begin_info;
struct S_device_group_submit_info;
struct S_device_group_bind_sparse_info;
struct S_device_group_present_capabilities_KHR;
struct S_image_swapchain_create_info_KHR;
struct S_bind_image_memory_swapchain_info_KHR;
struct S_acquire_next_image_info_KHR;
struct S_device_group_present_info_KHR;
struct S_device_group_device_create_info;
struct S_device_group_swapchain_create_info_KHR;
struct S_descriptor_update_template_entry;
struct S_descriptor_update_template_create_info;
struct S_xy_color_EXT;
struct S_hdr_metadata_EXT;
struct S_refresh_cycle_duration_GOOGLE;
struct S_past_presentation_timing_GOOGLE;
struct S_present_times_info_GOOGLE;
struct S_present_time_GOOGLE;
struct S_ios_surface_create_info_MVK;
struct S_mac_os_surface_create_info_MVK;
struct S_viewport_w_scaling_NV;
struct S_pipeline_viewport_w_scaling_state_create_info_NV;
struct S_viewport_swizzle_NV;
struct S_pipeline_viewport_swizzle_state_create_info_NV;
struct S_physical_device_discard_rectangle_properties_EXT;
struct S_pipeline_discard_rectangle_state_create_info_EXT;
struct S_physical_device_multiview_per_view_attributes_properties_NVX;
struct S_input_attachment_aspect_reference;
struct S_render_pass_input_attachment_aspect_create_info;
struct S_physical_device_surface_info2_KHR;
struct S_surface_capabilities2_KHR;
struct S_surface_format2_KHR;
struct S_display_properties2_KHR;
struct S_display_plane_properties2_KHR;
struct S_display_mode_properties2_KHR;
struct S_display_plane_info2_KHR;
struct S_display_plane_capabilities2_KHR;
struct S_shared_present_surface_capabilities_KHR;
struct S_physical_device_16bit_storage_features;
struct S_physical_device_subgroup_properties;
struct S_buffer_memory_requirements_info2;
struct S_image_memory_requirements_info2;
struct S_image_sparse_memory_requirements_info2;
struct S_memory_requirements2;
struct S_sparse_image_memory_requirements2;
struct S_physical_device_point_clipping_properties;
struct S_memory_dedicated_requirements;
struct S_memory_dedicated_allocate_info;
struct S_image_view_usage_create_info;
struct S_pipeline_tessellation_domain_origin_state_create_info;
struct S_sampler_ycbcr_conversion_info;
struct S_sampler_ycbcr_conversion_create_info;
struct S_bind_image_plane_memory_info;
struct S_image_plane_memory_requirements_info;
struct S_physical_device_sampler_ycbcr_conversion_features;
struct S_sampler_ycbcr_conversion_image_format_properties;
struct S_texture_lod_gather_format_properties_AMD;
struct S_conditional_rendering_begin_info_EXT;
struct S_protected_submit_info;
struct S_physical_device_protected_memory_features;
struct S_physical_device_protected_memory_properties;
struct S_device_queue_info2;
struct S_pipeline_coverage_to_color_state_create_info_NV;
struct S_physical_device_sampler_filter_minmax_properties_EXT;
struct S_sample_location_EXT;
struct S_sample_locations_info_EXT;
struct S_attachment_sample_locations_EXT;
struct S_subpass_sample_locations_EXT;
struct S_render_pass_sample_locations_begin_info_EXT;
struct S_pipeline_sample_locations_state_create_info_EXT;
struct S_physical_device_sample_locations_properties_EXT;
struct S_multisample_properties_EXT;
struct S_sampler_reduction_mode_create_info_EXT;
struct S_physical_device_blend_operation_advanced_features_EXT;
struct S_physical_device_blend_operation_advanced_properties_EXT;
struct S_pipeline_color_blend_advanced_state_create_info_EXT;
struct S_physical_device_inline_uniform_block_features_EXT;
struct S_physical_device_inline_uniform_block_properties_EXT;
struct S_write_descriptor_set_inline_uniform_block_EXT;
struct S_descriptor_pool_inline_uniform_block_create_info_EXT;
struct S_pipeline_coverage_modulation_state_create_info_NV;
struct S_image_format_list_create_info_KHR;
struct S_validation_cache_create_info_EXT;
struct S_shader_module_validation_cache_create_info_EXT;
struct S_physical_device_maintenance3_properties;
struct S_descriptor_set_layout_support;
struct S_physical_device_shader_draw_parameter_features;
struct S_native_buffer_ANDROID;
struct S_shader_resource_usage_AMD;
struct S_shader_statistics_info_AMD;
struct S_device_queue_global_priority_create_info_EXT;
struct S_debug_utils_object_name_info_EXT;
struct S_debug_utils_object_tag_info_EXT;
struct S_debug_utils_label_EXT;
struct S_debug_utils_messenger_create_info_EXT;
struct S_debug_utils_messenger_callback_data_EXT;
struct S_import_memory_host_pointer_info_EXT;
struct S_memory_host_pointer_properties_EXT;
struct S_physical_device_external_memory_host_properties_EXT;
struct S_physical_device_conservative_rasterization_properties_EXT;
struct S_physical_device_shader_core_properties_AMD;
struct S_pipeline_rasterization_conservative_state_create_info_EXT;
struct S_physical_device_descriptor_indexing_features_EXT;
struct S_physical_device_descriptor_indexing_properties_EXT;
struct S_descriptor_set_layout_binding_flags_create_info_EXT;
struct S_descriptor_set_variable_descriptor_count_allocate_info_EXT;
struct S_descriptor_set_variable_descriptor_count_layout_support_EXT;
struct S_attachment_description2_KHR;
struct S_attachment_reference2_KHR;
struct S_subpass_description2_KHR;
struct S_subpass_dependency2_KHR;
struct S_render_pass_create_info2_KHR;
struct S_subpass_begin_info_KHR;
struct S_subpass_end_info_KHR;
struct S_vertex_input_binding_divisor_description_EXT;
struct S_pipeline_vertex_input_divisor_state_create_info_EXT;
struct S_physical_device_vertex_attribute_divisor_properties_EXT;
struct S_import_android_hardware_buffer_info_ANDROID;
struct S_android_hardware_buffer_usage_ANDROID;
struct S_android_hardware_buffer_properties_ANDROID;
struct S_memory_get_android_hardware_buffer_info_ANDROID;
struct S_android_hardware_buffer_format_properties_ANDROID;
struct S_command_buffer_inheritance_conditional_rendering_info_EXT;
struct S_external_format_ANDROID;
struct S_physical_device_8bit_storage_features_KHR;
struct S_physical_device_conditional_rendering_features_EXT;
struct S_physical_device_vulkan_memory_model_features_KHR;
struct S_physical_device_shader_atomic_int64_features_KHR;
struct S_physical_device_vertex_attribute_divisor_features_EXT;
struct S_queue_family_checkpoint_properties_NV;
struct S_checkpoint_data_NV;
struct S_image_view_astc_decode_mode_EXT;
struct S_physical_device_astc_decode_features_EXT;
struct S_physical_device_representative_fragment_test_features_NV;
struct S_pipeline_representative_fragment_test_state_create_info_NV;
struct S_physical_device_exclusive_scissor_features_NV;
struct S_pipeline_viewport_exclusive_scissor_state_create_info_NV;
struct S_physical_device_corner_sampled_image_features_NV;
struct S_physical_device_compute_shader_derivatives_features_NV;
struct S_physical_device_fragment_shader_barycentric_features_NV;
struct S_physical_device_shader_image_footprint_features_NV;
struct S_shading_rate_palette_NV;
struct S_pipeline_viewport_shading_rate_image_state_create_info_NV;
struct S_physical_device_shading_rate_image_features_NV;
struct S_physical_device_shading_rate_image_properties_NV;
struct S_coarse_sample_location_NV;
struct S_coarse_sample_order_custom_NV;
struct S_pipeline_viewport_coarse_sample_order_state_create_info_NV;
struct S_physical_device_mesh_shader_features_NV;
struct S_physical_device_mesh_shader_properties_NV;
struct S_draw_mesh_tasks_indirect_command_NV;
struct S_raytracing_pipeline_create_info_NVX;
struct S_geometry_triangles_NVX;
struct S_geometry_aabb_NVX;
struct S_geometry_data_NVX;
struct S_geometry_NVX;
struct S_acceleration_structure_create_info_NVX;
struct S_bind_acceleration_structure_memory_info_NVX;
struct S_descriptor_acceleration_structure_info_NVX;
struct S_acceleration_structure_memory_requirements_info_NVX;
struct S_physical_device_raytracing_properties_NVX;
struct S_drm_format_modifier_properties_list_EXT;
struct S_drm_format_modifier_properties_EXT;
struct S_physical_device_image_drm_format_modifier_info_EXT;
struct S_image_drm_format_modifier_list_create_info_EXT;
struct S_image_drm_format_modifier_explicit_create_info_EXT;
struct S_image_drm_format_modifier_properties_EXT;
#endif

/*	VkOffset2D
*/
struct		S_offset_2d{
	int32_t x;
	int32_t y;

S_offset_2d(){}
};

/*	VkOffset3D
*/
struct		S_offset_3d{
	int32_t x;
	int32_t y;
	int32_t z;

S_offset_3d(){}
};

/*	VkExtent2D
*/
struct		S_extent_2d{
	uint32_t width;
	uint32_t height;

S_extent_2d(){}
};

/*	VkExtent3D
*/
struct		S_extent_3d{
	uint32_t width;
	uint32_t height;
	uint32_t depth;

S_extent_3d(){}
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

S_viewport(){}
};

/*	VkRect2D
*/
struct		S_rect_2d{
	S_offset_2d offset;
	S_extent_2d extent;

S_rect_2d(){}
};

/*	VkClearRect
*/
struct		S_clear_rect{
	S_rect_2d rect;
	uint32_t baseArrayLayer;
	uint32_t layerCount;

S_clear_rect(){}
};

/*	VkComponentMapping
*/
struct		S_component_mapping{
	E_component_swizzle r;
	E_component_swizzle g;
	E_component_swizzle b;
	E_component_swizzle a;

S_component_mapping(){}
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

S_physical_device_limits(){}
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

S_physical_device_sparse_properties(){}
};

/*	VkPhysicalDeviceProperties
(returnedonly)
*/
struct		S_physical_device_properties{
	uint32_t apiVersion;
	uint32_t driverVersion;
	uint32_t vendorID;
	uint32_t deviceID;
	E_physical_device_type deviceType;
	char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
	uint8_t pipelineCacheUUID[VK_UUID_SIZE];
	S_physical_device_limits limits;
	S_physical_device_sparse_properties sparseProperties;

S_physical_device_properties(){}
};

/*	VkExtensionProperties
(returnedonly)
*/
struct		S_extension_properties{
	char extensionName[VK_MAX_EXTENSION_NAME_SIZE];
	uint32_t specVersion;

S_extension_properties(){}
};

/*	VkLayerProperties
(returnedonly)
*/
struct		S_layer_properties{
	char layerName[VK_MAX_EXTENSION_NAME_SIZE];
	uint32_t specVersion;
	uint32_t implementationVersion;
	char description[VK_MAX_DESCRIPTION_SIZE];

S_layer_properties(){}
};

/*	VkApplicationInfo
*/
struct		S_application_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	 void * pNext = nullptr;
public:
	const char * pApplicationName;
	uint32_t applicationVersion;
	const char * pEngineName;
	uint32_t engineVersion;
	uint32_t apiVersion;

S_application_info(){}

S_application_info(
	const char * pApplicationName_,
	uint32_t applicationVersion_,
	const char * pEngineName_,
	uint32_t engineVersion_,
	uint32_t apiVersion_)
	:pApplicationName(pApplicationName_)
	,applicationVersion(applicationVersion_)
	,pEngineName(pEngineName_)
	,engineVersion(engineVersion_)
	,apiVersion(apiVersion_)
{
}

S_application_info( VkApplicationInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_application_info ) );	}
S_application_info& operator=( VkApplicationInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_application_info ) ); return *this;	}
operator VkApplicationInfo const&() const 
	{	return *reinterpret_cast<const VkApplicationInfo*>(this);	}
operator VkApplicationInfo &() 
	{	return *reinterpret_cast<VkApplicationInfo*>(this);	}
};
static_assert(
	sizeof(S_application_info) == sizeof(VkApplicationInfo),
	"struct and wrapper have different size!");

/*	VkAllocationCallbacks
*/
struct		S_allocation_callbacks{
	void * pUserData;
	PFN_vkAllocationFunction pfnAllocation;
	PFN_vkReallocationFunction pfnReallocation;
	PFN_vkFreeFunction pfnFree;
	PFN_vkInternalAllocationNotification pfnInternalAllocation;
	PFN_vkInternalFreeNotification pfnInternalFree;

S_allocation_callbacks(){}
};

/*	VkDeviceQueueGlobalPriorityCreateInfoEXT
ex to: VkDeviceQueueCreateInfo
*/
struct		S_device_queue_global_priority_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_queue_global_priority_EXT globalPriority;

S_device_queue_global_priority_create_info_EXT(){}

S_device_queue_global_priority_create_info_EXT(
	E_queue_global_priority_EXT globalPriority_)
	:globalPriority(globalPriority_)
{
}

S_device_queue_global_priority_create_info_EXT( VkDeviceQueueGlobalPriorityCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_queue_global_priority_create_info_EXT ) );	}
S_device_queue_global_priority_create_info_EXT& operator=( VkDeviceQueueGlobalPriorityCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_queue_global_priority_create_info_EXT ) ); return *this;	}
operator VkDeviceQueueGlobalPriorityCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDeviceQueueGlobalPriorityCreateInfoEXT*>(this);	}
operator VkDeviceQueueGlobalPriorityCreateInfoEXT &() 
	{	return *reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoEXT*>(this);	}

friend S_device_queue_create_info;
};
static_assert(
	sizeof(S_device_queue_global_priority_create_info_EXT) == sizeof(VkDeviceQueueGlobalPriorityCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkDeviceQueueCreateInfo
ex:
	VkDeviceQueueGlobalPriorityCreateInfoEXT
*/
struct		S_device_queue_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_device_queue_create flags;
	uint32_t queueFamilyIndex;
	uint32_t queueCount;
	const float * pQueuePriorities;

S_device_queue_create_info(){}

S_device_queue_create_info(
	F_device_queue_create flags_,
	uint32_t queueFamilyIndex_,
	uint32_t queueCount_,
	const float * pQueuePriorities_)
	:flags(flags_)
	,queueFamilyIndex(queueFamilyIndex_)
	,queueCount(queueCount_)
	,pQueuePriorities(pQueuePriorities_)
{
}

S_device_queue_create_info( VkDeviceQueueCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_queue_create_info ) );	}
S_device_queue_create_info& operator=( VkDeviceQueueCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_queue_create_info ) ); return *this;	}
operator VkDeviceQueueCreateInfo const&() const 
	{	return *reinterpret_cast<const VkDeviceQueueCreateInfo*>(this);	}
operator VkDeviceQueueCreateInfo &() 
	{	return *reinterpret_cast<VkDeviceQueueCreateInfo*>(this);	}

S_device_queue_create_info& n_device_queue_global_priority_create_info_EXT(S_device_queue_global_priority_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_device_queue_create_info) == sizeof(VkDeviceQueueCreateInfo),
	"struct and wrapper have different size!");

struct N_device_queue_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_device_queue_create_info& n_device_queue_global_priority_create_info_EXT(S_device_queue_global_priority_create_info_EXT const& next_);
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

S_physical_device_features(){}
};

/*	VkPhysicalDeviceVariablePointerFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_variable_pointer_features{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES;
	void * pNext = nullptr;
public:
	VkBool32 variablePointersStorageBuffer;
	VkBool32 variablePointers;

S_physical_device_variable_pointer_features(){}

S_physical_device_variable_pointer_features(
	VkBool32 variablePointersStorageBuffer_,
	VkBool32 variablePointers_)
	:variablePointersStorageBuffer(variablePointersStorageBuffer_)
	,variablePointers(variablePointers_)
{
}

S_physical_device_variable_pointer_features( VkPhysicalDeviceVariablePointerFeatures const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_variable_pointer_features ) );	}
S_physical_device_variable_pointer_features& operator=( VkPhysicalDeviceVariablePointerFeatures const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_variable_pointer_features ) ); return *this;	}
operator VkPhysicalDeviceVariablePointerFeatures const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceVariablePointerFeatures*>(this);	}
operator VkPhysicalDeviceVariablePointerFeatures &() 
	{	return *reinterpret_cast<VkPhysicalDeviceVariablePointerFeatures*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_variable_pointer_features) == sizeof(VkPhysicalDeviceVariablePointerFeatures),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceMultiviewFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_multiview_features{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
	void * pNext = nullptr;
public:
	VkBool32 multiview;
	VkBool32 multiviewGeometryShader;
	VkBool32 multiviewTessellationShader;

S_physical_device_multiview_features(){}

S_physical_device_multiview_features(
	VkBool32 multiview_,
	VkBool32 multiviewGeometryShader_,
	VkBool32 multiviewTessellationShader_)
	:multiview(multiview_)
	,multiviewGeometryShader(multiviewGeometryShader_)
	,multiviewTessellationShader(multiviewTessellationShader_)
{
}

S_physical_device_multiview_features( VkPhysicalDeviceMultiviewFeatures const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_multiview_features ) );	}
S_physical_device_multiview_features& operator=( VkPhysicalDeviceMultiviewFeatures const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_multiview_features ) ); return *this;	}
operator VkPhysicalDeviceMultiviewFeatures const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures*>(this);	}
operator VkPhysicalDeviceMultiviewFeatures &() 
	{	return *reinterpret_cast<VkPhysicalDeviceMultiviewFeatures*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_multiview_features) == sizeof(VkPhysicalDeviceMultiviewFeatures),
	"struct and wrapper have different size!");

/*	VkPhysicalDevice16BitStorageFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_16bit_storage_features{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
	void * pNext = nullptr;
public:
	VkBool32 storageBuffer16BitAccess;
	VkBool32 uniformAndStorageBuffer16BitAccess;
	VkBool32 storagePushConstant16;
	VkBool32 storageInputOutput16;

S_physical_device_16bit_storage_features(){}

S_physical_device_16bit_storage_features(
	VkBool32 storageBuffer16BitAccess_,
	VkBool32 uniformAndStorageBuffer16BitAccess_,
	VkBool32 storagePushConstant16_,
	VkBool32 storageInputOutput16_)
	:storageBuffer16BitAccess(storageBuffer16BitAccess_)
	,uniformAndStorageBuffer16BitAccess(uniformAndStorageBuffer16BitAccess_)
	,storagePushConstant16(storagePushConstant16_)
	,storageInputOutput16(storageInputOutput16_)
{
}

S_physical_device_16bit_storage_features( VkPhysicalDevice16BitStorageFeatures const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_16bit_storage_features ) );	}
S_physical_device_16bit_storage_features& operator=( VkPhysicalDevice16BitStorageFeatures const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_16bit_storage_features ) ); return *this;	}
operator VkPhysicalDevice16BitStorageFeatures const&() const 
	{	return *reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures*>(this);	}
operator VkPhysicalDevice16BitStorageFeatures &() 
	{	return *reinterpret_cast<VkPhysicalDevice16BitStorageFeatures*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_16bit_storage_features) == sizeof(VkPhysicalDevice16BitStorageFeatures),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceSamplerYcbcrConversionFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_sampler_ycbcr_conversion_features{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
	void * pNext = nullptr;
public:
	VkBool32 samplerYcbcrConversion;

S_physical_device_sampler_ycbcr_conversion_features(){}

S_physical_device_sampler_ycbcr_conversion_features(
	VkBool32 samplerYcbcrConversion_)
	:samplerYcbcrConversion(samplerYcbcrConversion_)
{
}

S_physical_device_sampler_ycbcr_conversion_features( VkPhysicalDeviceSamplerYcbcrConversionFeatures const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_sampler_ycbcr_conversion_features ) );	}
S_physical_device_sampler_ycbcr_conversion_features& operator=( VkPhysicalDeviceSamplerYcbcrConversionFeatures const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_sampler_ycbcr_conversion_features ) ); return *this;	}
operator VkPhysicalDeviceSamplerYcbcrConversionFeatures const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(this);	}
operator VkPhysicalDeviceSamplerYcbcrConversionFeatures &() 
	{	return *reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_sampler_ycbcr_conversion_features) == sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceProtectedMemoryFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_protected_memory_features{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
	void * pNext = nullptr;
public:
	VkBool32 protectedMemory;

S_physical_device_protected_memory_features(){}

S_physical_device_protected_memory_features(
	VkBool32 protectedMemory_)
	:protectedMemory(protectedMemory_)
{
}

S_physical_device_protected_memory_features( VkPhysicalDeviceProtectedMemoryFeatures const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_protected_memory_features ) );	}
S_physical_device_protected_memory_features& operator=( VkPhysicalDeviceProtectedMemoryFeatures const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_protected_memory_features ) ); return *this;	}
operator VkPhysicalDeviceProtectedMemoryFeatures const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures*>(this);	}
operator VkPhysicalDeviceProtectedMemoryFeatures &() 
	{	return *reinterpret_cast<VkPhysicalDeviceProtectedMemoryFeatures*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_protected_memory_features) == sizeof(VkPhysicalDeviceProtectedMemoryFeatures),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_blend_operation_advanced_features_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
	void * pNext = nullptr;
public:
	VkBool32 advancedBlendCoherentOperations;

S_physical_device_blend_operation_advanced_features_EXT(){}

S_physical_device_blend_operation_advanced_features_EXT(
	VkBool32 advancedBlendCoherentOperations_)
	:advancedBlendCoherentOperations(advancedBlendCoherentOperations_)
{
}

S_physical_device_blend_operation_advanced_features_EXT( VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_blend_operation_advanced_features_EXT ) );	}
S_physical_device_blend_operation_advanced_features_EXT& operator=( VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_blend_operation_advanced_features_EXT ) ); return *this;	}
operator VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(this);	}
operator VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_blend_operation_advanced_features_EXT) == sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceInlineUniformBlockFeaturesEXT
(returnedonly)
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_inline_uniform_block_features_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;
	void * pNext = nullptr;
public:
	VkBool32 inlineUniformBlock;
	VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind;

S_physical_device_inline_uniform_block_features_EXT(){}

S_physical_device_inline_uniform_block_features_EXT(
	VkBool32 inlineUniformBlock_,
	VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind_)
	:inlineUniformBlock(inlineUniformBlock_)
	,descriptorBindingInlineUniformBlockUpdateAfterBind(descriptorBindingInlineUniformBlockUpdateAfterBind_)
{
}

S_physical_device_inline_uniform_block_features_EXT( VkPhysicalDeviceInlineUniformBlockFeaturesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_inline_uniform_block_features_EXT ) );	}
S_physical_device_inline_uniform_block_features_EXT& operator=( VkPhysicalDeviceInlineUniformBlockFeaturesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_inline_uniform_block_features_EXT ) ); return *this;	}
operator VkPhysicalDeviceInlineUniformBlockFeaturesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeaturesEXT*>(this);	}
operator VkPhysicalDeviceInlineUniformBlockFeaturesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceInlineUniformBlockFeaturesEXT*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_inline_uniform_block_features_EXT) == sizeof(VkPhysicalDeviceInlineUniformBlockFeaturesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceShaderDrawParameterFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_shader_draw_parameter_features{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES;
	void * pNext = nullptr;
public:
	VkBool32 shaderDrawParameters;

S_physical_device_shader_draw_parameter_features(){}

S_physical_device_shader_draw_parameter_features(
	VkBool32 shaderDrawParameters_)
	:shaderDrawParameters(shaderDrawParameters_)
{
}

S_physical_device_shader_draw_parameter_features( VkPhysicalDeviceShaderDrawParameterFeatures const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_draw_parameter_features ) );	}
S_physical_device_shader_draw_parameter_features& operator=( VkPhysicalDeviceShaderDrawParameterFeatures const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_draw_parameter_features ) ); return *this;	}
operator VkPhysicalDeviceShaderDrawParameterFeatures const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceShaderDrawParameterFeatures*>(this);	}
operator VkPhysicalDeviceShaderDrawParameterFeatures &() 
	{	return *reinterpret_cast<VkPhysicalDeviceShaderDrawParameterFeatures*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_shader_draw_parameter_features) == sizeof(VkPhysicalDeviceShaderDrawParameterFeatures),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceDescriptorIndexingFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_descriptor_indexing_features_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT;
	void * pNext = nullptr;
public:
	VkBool32 shaderInputAttachmentArrayDynamicIndexing;
	VkBool32 shaderUniformTexelBufferArrayDynamicIndexing;
	VkBool32 shaderStorageTexelBufferArrayDynamicIndexing;
	VkBool32 shaderUniformBufferArrayNonUniformIndexing;
	VkBool32 shaderSampledImageArrayNonUniformIndexing;
	VkBool32 shaderStorageBufferArrayNonUniformIndexing;
	VkBool32 shaderStorageImageArrayNonUniformIndexing;
	VkBool32 shaderInputAttachmentArrayNonUniformIndexing;
	VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing;
	VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing;
	VkBool32 descriptorBindingUniformBufferUpdateAfterBind;
	VkBool32 descriptorBindingSampledImageUpdateAfterBind;
	VkBool32 descriptorBindingStorageImageUpdateAfterBind;
	VkBool32 descriptorBindingStorageBufferUpdateAfterBind;
	VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind;
	VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind;
	VkBool32 descriptorBindingUpdateUnusedWhilePending;
	VkBool32 descriptorBindingPartiallyBound;
	VkBool32 descriptorBindingVariableDescriptorCount;
	VkBool32 runtimeDescriptorArray;

S_physical_device_descriptor_indexing_features_EXT(){}

S_physical_device_descriptor_indexing_features_EXT(
	VkBool32 shaderInputAttachmentArrayDynamicIndexing_,
	VkBool32 shaderUniformTexelBufferArrayDynamicIndexing_,
	VkBool32 shaderStorageTexelBufferArrayDynamicIndexing_,
	VkBool32 shaderUniformBufferArrayNonUniformIndexing_,
	VkBool32 shaderSampledImageArrayNonUniformIndexing_,
	VkBool32 shaderStorageBufferArrayNonUniformIndexing_,
	VkBool32 shaderStorageImageArrayNonUniformIndexing_,
	VkBool32 shaderInputAttachmentArrayNonUniformIndexing_,
	VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing_,
	VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing_,
	VkBool32 descriptorBindingUniformBufferUpdateAfterBind_,
	VkBool32 descriptorBindingSampledImageUpdateAfterBind_,
	VkBool32 descriptorBindingStorageImageUpdateAfterBind_,
	VkBool32 descriptorBindingStorageBufferUpdateAfterBind_,
	VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind_,
	VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind_,
	VkBool32 descriptorBindingUpdateUnusedWhilePending_,
	VkBool32 descriptorBindingPartiallyBound_,
	VkBool32 descriptorBindingVariableDescriptorCount_,
	VkBool32 runtimeDescriptorArray_)
	:shaderInputAttachmentArrayDynamicIndexing(shaderInputAttachmentArrayDynamicIndexing_)
	,shaderUniformTexelBufferArrayDynamicIndexing(shaderUniformTexelBufferArrayDynamicIndexing_)
	,shaderStorageTexelBufferArrayDynamicIndexing(shaderStorageTexelBufferArrayDynamicIndexing_)
	,shaderUniformBufferArrayNonUniformIndexing(shaderUniformBufferArrayNonUniformIndexing_)
	,shaderSampledImageArrayNonUniformIndexing(shaderSampledImageArrayNonUniformIndexing_)
	,shaderStorageBufferArrayNonUniformIndexing(shaderStorageBufferArrayNonUniformIndexing_)
	,shaderStorageImageArrayNonUniformIndexing(shaderStorageImageArrayNonUniformIndexing_)
	,shaderInputAttachmentArrayNonUniformIndexing(shaderInputAttachmentArrayNonUniformIndexing_)
	,shaderUniformTexelBufferArrayNonUniformIndexing(shaderUniformTexelBufferArrayNonUniformIndexing_)
	,shaderStorageTexelBufferArrayNonUniformIndexing(shaderStorageTexelBufferArrayNonUniformIndexing_)
	,descriptorBindingUniformBufferUpdateAfterBind(descriptorBindingUniformBufferUpdateAfterBind_)
	,descriptorBindingSampledImageUpdateAfterBind(descriptorBindingSampledImageUpdateAfterBind_)
	,descriptorBindingStorageImageUpdateAfterBind(descriptorBindingStorageImageUpdateAfterBind_)
	,descriptorBindingStorageBufferUpdateAfterBind(descriptorBindingStorageBufferUpdateAfterBind_)
	,descriptorBindingUniformTexelBufferUpdateAfterBind(descriptorBindingUniformTexelBufferUpdateAfterBind_)
	,descriptorBindingStorageTexelBufferUpdateAfterBind(descriptorBindingStorageTexelBufferUpdateAfterBind_)
	,descriptorBindingUpdateUnusedWhilePending(descriptorBindingUpdateUnusedWhilePending_)
	,descriptorBindingPartiallyBound(descriptorBindingPartiallyBound_)
	,descriptorBindingVariableDescriptorCount(descriptorBindingVariableDescriptorCount_)
	,runtimeDescriptorArray(runtimeDescriptorArray_)
{
}

S_physical_device_descriptor_indexing_features_EXT( VkPhysicalDeviceDescriptorIndexingFeaturesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_descriptor_indexing_features_EXT ) );	}
S_physical_device_descriptor_indexing_features_EXT& operator=( VkPhysicalDeviceDescriptorIndexingFeaturesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_descriptor_indexing_features_EXT ) ); return *this;	}
operator VkPhysicalDeviceDescriptorIndexingFeaturesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeaturesEXT*>(this);	}
operator VkPhysicalDeviceDescriptorIndexingFeaturesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceDescriptorIndexingFeaturesEXT*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_descriptor_indexing_features_EXT) == sizeof(VkPhysicalDeviceDescriptorIndexingFeaturesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDevice8BitStorageFeaturesKHR
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_8bit_storage_features_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR;
	void * pNext = nullptr;
public:
	VkBool32 storageBuffer8BitAccess;
	VkBool32 uniformAndStorageBuffer8BitAccess;
	VkBool32 storagePushConstant8;

S_physical_device_8bit_storage_features_KHR(){}

S_physical_device_8bit_storage_features_KHR(
	VkBool32 storageBuffer8BitAccess_,
	VkBool32 uniformAndStorageBuffer8BitAccess_,
	VkBool32 storagePushConstant8_)
	:storageBuffer8BitAccess(storageBuffer8BitAccess_)
	,uniformAndStorageBuffer8BitAccess(uniformAndStorageBuffer8BitAccess_)
	,storagePushConstant8(storagePushConstant8_)
{
}

S_physical_device_8bit_storage_features_KHR( VkPhysicalDevice8BitStorageFeaturesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_8bit_storage_features_KHR ) );	}
S_physical_device_8bit_storage_features_KHR& operator=( VkPhysicalDevice8BitStorageFeaturesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_8bit_storage_features_KHR ) ); return *this;	}
operator VkPhysicalDevice8BitStorageFeaturesKHR const&() const 
	{	return *reinterpret_cast<const VkPhysicalDevice8BitStorageFeaturesKHR*>(this);	}
operator VkPhysicalDevice8BitStorageFeaturesKHR &() 
	{	return *reinterpret_cast<VkPhysicalDevice8BitStorageFeaturesKHR*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_8bit_storage_features_KHR) == sizeof(VkPhysicalDevice8BitStorageFeaturesKHR),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceConditionalRenderingFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_conditional_rendering_features_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
	void * pNext = nullptr;
public:
	VkBool32 conditionalRendering;
	VkBool32 inheritedConditionalRendering;

S_physical_device_conditional_rendering_features_EXT(){}

S_physical_device_conditional_rendering_features_EXT(
	VkBool32 conditionalRendering_,
	VkBool32 inheritedConditionalRendering_)
	:conditionalRendering(conditionalRendering_)
	,inheritedConditionalRendering(inheritedConditionalRendering_)
{
}

S_physical_device_conditional_rendering_features_EXT( VkPhysicalDeviceConditionalRenderingFeaturesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_conditional_rendering_features_EXT ) );	}
S_physical_device_conditional_rendering_features_EXT& operator=( VkPhysicalDeviceConditionalRenderingFeaturesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_conditional_rendering_features_EXT ) ); return *this;	}
operator VkPhysicalDeviceConditionalRenderingFeaturesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(this);	}
operator VkPhysicalDeviceConditionalRenderingFeaturesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_conditional_rendering_features_EXT) == sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceVulkanMemoryModelFeaturesKHR
(returnedonly)
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_vulkan_memory_model_features_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR;
	void * pNext = nullptr;
public:
	VkBool32 vulkanMemoryModel;
	VkBool32 vulkanMemoryModelDeviceScope;

S_physical_device_vulkan_memory_model_features_KHR(){}

S_physical_device_vulkan_memory_model_features_KHR(
	VkBool32 vulkanMemoryModel_,
	VkBool32 vulkanMemoryModelDeviceScope_)
	:vulkanMemoryModel(vulkanMemoryModel_)
	,vulkanMemoryModelDeviceScope(vulkanMemoryModelDeviceScope_)
{
}

S_physical_device_vulkan_memory_model_features_KHR( VkPhysicalDeviceVulkanMemoryModelFeaturesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_vulkan_memory_model_features_KHR ) );	}
S_physical_device_vulkan_memory_model_features_KHR& operator=( VkPhysicalDeviceVulkanMemoryModelFeaturesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_vulkan_memory_model_features_KHR ) ); return *this;	}
operator VkPhysicalDeviceVulkanMemoryModelFeaturesKHR const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeaturesKHR*>(this);	}
operator VkPhysicalDeviceVulkanMemoryModelFeaturesKHR &() 
	{	return *reinterpret_cast<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_vulkan_memory_model_features_KHR) == sizeof(VkPhysicalDeviceVulkanMemoryModelFeaturesKHR),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceShaderAtomicInt64FeaturesKHR
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
#ifdef LAKA_UNKNOW
struct		S_physical_device_shader_atomic_int64_features_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR;
	void * pNext = nullptr;
public:
	VkBool32 shaderBufferInt64Atomics;
	VkBool32 shaderSharedInt64Atomics;

S_physical_device_shader_atomic_int64_features_KHR(){}

S_physical_device_shader_atomic_int64_features_KHR(
	VkBool32 shaderBufferInt64Atomics_,
	VkBool32 shaderSharedInt64Atomics_)
	:shaderBufferInt64Atomics(shaderBufferInt64Atomics_)
	,shaderSharedInt64Atomics(shaderSharedInt64Atomics_)
{
}

S_physical_device_shader_atomic_int64_features_KHR( VkPhysicalDeviceShaderAtomicInt64FeaturesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_atomic_int64_features_KHR ) );	}
S_physical_device_shader_atomic_int64_features_KHR& operator=( VkPhysicalDeviceShaderAtomicInt64FeaturesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_atomic_int64_features_KHR ) ); return *this;	}
operator VkPhysicalDeviceShaderAtomicInt64FeaturesKHR const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64FeaturesKHR*>(this);	}
operator VkPhysicalDeviceShaderAtomicInt64FeaturesKHR &() 
	{	return *reinterpret_cast<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_shader_atomic_int64_features_KHR) == sizeof(VkPhysicalDeviceShaderAtomicInt64FeaturesKHR),
	"struct and wrapper have different size!");
#endif //LAKA_UNKNOW

/*	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_vertex_attribute_divisor_features_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
	void * pNext = nullptr;
public:
	VkBool32 vertexAttributeInstanceRateDivisor;
	VkBool32 vertexAttributeInstanceRateZeroDivisor;

S_physical_device_vertex_attribute_divisor_features_EXT(){}

S_physical_device_vertex_attribute_divisor_features_EXT(
	VkBool32 vertexAttributeInstanceRateDivisor_,
	VkBool32 vertexAttributeInstanceRateZeroDivisor_)
	:vertexAttributeInstanceRateDivisor(vertexAttributeInstanceRateDivisor_)
	,vertexAttributeInstanceRateZeroDivisor(vertexAttributeInstanceRateZeroDivisor_)
{
}

S_physical_device_vertex_attribute_divisor_features_EXT( VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_vertex_attribute_divisor_features_EXT ) );	}
S_physical_device_vertex_attribute_divisor_features_EXT& operator=( VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_vertex_attribute_divisor_features_EXT ) ); return *this;	}
operator VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*>(this);	}
operator VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_vertex_attribute_divisor_features_EXT) == sizeof(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceASTCDecodeFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_astc_decode_features_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
	void * pNext = nullptr;
public:
	VkBool32 decodeModeSharedExponent;

S_physical_device_astc_decode_features_EXT(){}

S_physical_device_astc_decode_features_EXT(
	VkBool32 decodeModeSharedExponent_)
	:decodeModeSharedExponent(decodeModeSharedExponent_)
{
}

S_physical_device_astc_decode_features_EXT( VkPhysicalDeviceASTCDecodeFeaturesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_astc_decode_features_EXT ) );	}
S_physical_device_astc_decode_features_EXT& operator=( VkPhysicalDeviceASTCDecodeFeaturesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_astc_decode_features_EXT ) ); return *this;	}
operator VkPhysicalDeviceASTCDecodeFeaturesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT*>(this);	}
operator VkPhysicalDeviceASTCDecodeFeaturesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceASTCDecodeFeaturesEXT*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_astc_decode_features_EXT) == sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_representative_fragment_test_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 representativeFragmentTest;

S_physical_device_representative_fragment_test_features_NV(){}

S_physical_device_representative_fragment_test_features_NV(
	VkBool32 representativeFragmentTest_)
	:representativeFragmentTest(representativeFragmentTest_)
{
}

S_physical_device_representative_fragment_test_features_NV( VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_representative_fragment_test_features_NV ) );	}
S_physical_device_representative_fragment_test_features_NV& operator=( VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_representative_fragment_test_features_NV ) ); return *this;	}
operator VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*>(this);	}
operator VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_representative_fragment_test_features_NV) == sizeof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceExclusiveScissorFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_exclusive_scissor_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 exclusiveScissor;

S_physical_device_exclusive_scissor_features_NV(){}

S_physical_device_exclusive_scissor_features_NV(
	VkBool32 exclusiveScissor_)
	:exclusiveScissor(exclusiveScissor_)
{
}

S_physical_device_exclusive_scissor_features_NV( VkPhysicalDeviceExclusiveScissorFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_exclusive_scissor_features_NV ) );	}
S_physical_device_exclusive_scissor_features_NV& operator=( VkPhysicalDeviceExclusiveScissorFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_exclusive_scissor_features_NV ) ); return *this;	}
operator VkPhysicalDeviceExclusiveScissorFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV*>(this);	}
operator VkPhysicalDeviceExclusiveScissorFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceExclusiveScissorFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_exclusive_scissor_features_NV) == sizeof(VkPhysicalDeviceExclusiveScissorFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceCornerSampledImageFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_corner_sampled_image_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 cornerSampledImage;

S_physical_device_corner_sampled_image_features_NV(){}

S_physical_device_corner_sampled_image_features_NV(
	VkBool32 cornerSampledImage_)
	:cornerSampledImage(cornerSampledImage_)
{
}

S_physical_device_corner_sampled_image_features_NV( VkPhysicalDeviceCornerSampledImageFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_corner_sampled_image_features_NV ) );	}
S_physical_device_corner_sampled_image_features_NV& operator=( VkPhysicalDeviceCornerSampledImageFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_corner_sampled_image_features_NV ) ); return *this;	}
operator VkPhysicalDeviceCornerSampledImageFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV*>(this);	}
operator VkPhysicalDeviceCornerSampledImageFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceCornerSampledImageFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_corner_sampled_image_features_NV) == sizeof(VkPhysicalDeviceCornerSampledImageFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_compute_shader_derivatives_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 computeDerivativeGroupQuads;
	VkBool32 computeDerivativeGroupLinear;

S_physical_device_compute_shader_derivatives_features_NV(){}

S_physical_device_compute_shader_derivatives_features_NV(
	VkBool32 computeDerivativeGroupQuads_,
	VkBool32 computeDerivativeGroupLinear_)
	:computeDerivativeGroupQuads(computeDerivativeGroupQuads_)
	,computeDerivativeGroupLinear(computeDerivativeGroupLinear_)
{
}

S_physical_device_compute_shader_derivatives_features_NV( VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_compute_shader_derivatives_features_NV ) );	}
S_physical_device_compute_shader_derivatives_features_NV& operator=( VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_compute_shader_derivatives_features_NV ) ); return *this;	}
operator VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*>(this);	}
operator VkPhysicalDeviceComputeShaderDerivativesFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_compute_shader_derivatives_features_NV) == sizeof(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_fragment_shader_barycentric_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 fragmentShaderBarycentric;

S_physical_device_fragment_shader_barycentric_features_NV(){}

S_physical_device_fragment_shader_barycentric_features_NV(
	VkBool32 fragmentShaderBarycentric_)
	:fragmentShaderBarycentric(fragmentShaderBarycentric_)
{
}

S_physical_device_fragment_shader_barycentric_features_NV( VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_fragment_shader_barycentric_features_NV ) );	}
S_physical_device_fragment_shader_barycentric_features_NV& operator=( VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_fragment_shader_barycentric_features_NV ) ); return *this;	}
operator VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*>(this);	}
operator VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_fragment_shader_barycentric_features_NV) == sizeof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceShaderImageFootprintFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_shader_image_footprint_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 imageFootprint;

S_physical_device_shader_image_footprint_features_NV(){}

S_physical_device_shader_image_footprint_features_NV(
	VkBool32 imageFootprint_)
	:imageFootprint(imageFootprint_)
{
}

S_physical_device_shader_image_footprint_features_NV( VkPhysicalDeviceShaderImageFootprintFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_image_footprint_features_NV ) );	}
S_physical_device_shader_image_footprint_features_NV& operator=( VkPhysicalDeviceShaderImageFootprintFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_image_footprint_features_NV ) ); return *this;	}
operator VkPhysicalDeviceShaderImageFootprintFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV*>(this);	}
operator VkPhysicalDeviceShaderImageFootprintFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceShaderImageFootprintFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_shader_image_footprint_features_NV) == sizeof(VkPhysicalDeviceShaderImageFootprintFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceShadingRateImageFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_shading_rate_image_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 shadingRateImage;
	VkBool32 shadingRateCoarseSampleOrder;

S_physical_device_shading_rate_image_features_NV(){}

S_physical_device_shading_rate_image_features_NV(
	VkBool32 shadingRateImage_,
	VkBool32 shadingRateCoarseSampleOrder_)
	:shadingRateImage(shadingRateImage_)
	,shadingRateCoarseSampleOrder(shadingRateCoarseSampleOrder_)
{
}

S_physical_device_shading_rate_image_features_NV( VkPhysicalDeviceShadingRateImageFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_shading_rate_image_features_NV ) );	}
S_physical_device_shading_rate_image_features_NV& operator=( VkPhysicalDeviceShadingRateImageFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_shading_rate_image_features_NV ) ); return *this;	}
operator VkPhysicalDeviceShadingRateImageFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV*>(this);	}
operator VkPhysicalDeviceShadingRateImageFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceShadingRateImageFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_shading_rate_image_features_NV) == sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceMeshShaderFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct		S_physical_device_mesh_shader_features_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
	void * pNext = nullptr;
public:
	VkBool32 taskShader;
	VkBool32 meshShader;

S_physical_device_mesh_shader_features_NV(){}

S_physical_device_mesh_shader_features_NV(
	VkBool32 taskShader_,
	VkBool32 meshShader_)
	:taskShader(taskShader_)
	,meshShader(meshShader_)
{
}

S_physical_device_mesh_shader_features_NV( VkPhysicalDeviceMeshShaderFeaturesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_mesh_shader_features_NV ) );	}
S_physical_device_mesh_shader_features_NV& operator=( VkPhysicalDeviceMeshShaderFeaturesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_mesh_shader_features_NV ) ); return *this;	}
operator VkPhysicalDeviceMeshShaderFeaturesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV*>(this);	}
operator VkPhysicalDeviceMeshShaderFeaturesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceMeshShaderFeaturesNV*>(this);	}

friend S_physical_device_features2;
friend S_device_create_info;
};
static_assert(
	sizeof(S_physical_device_mesh_shader_features_NV) == sizeof(VkPhysicalDeviceMeshShaderFeaturesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceFeatures2
ex to: VkDeviceCreateInfo
ex:
	VkPhysicalDeviceVariablePointerFeatures
	VkPhysicalDeviceMultiviewFeatures
	VkPhysicalDevice16BitStorageFeatures
	VkPhysicalDeviceSamplerYcbcrConversionFeatures
	VkPhysicalDeviceProtectedMemoryFeatures
	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
	VkPhysicalDeviceInlineUniformBlockFeaturesEXT
	VkPhysicalDeviceShaderDrawParameterFeatures
	VkPhysicalDeviceDescriptorIndexingFeaturesEXT
	VkPhysicalDevice8BitStorageFeaturesKHR
	VkPhysicalDeviceConditionalRenderingFeaturesEXT
	VkPhysicalDeviceVulkanMemoryModelFeaturesKHR
	VkPhysicalDeviceShaderAtomicInt64FeaturesKHR
	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT
	VkPhysicalDeviceASTCDecodeFeaturesEXT
	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV
	VkPhysicalDeviceExclusiveScissorFeaturesNV
	VkPhysicalDeviceCornerSampledImageFeaturesNV
	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV
	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV
	VkPhysicalDeviceShaderImageFootprintFeaturesNV
	VkPhysicalDeviceShadingRateImageFeaturesNV
	VkPhysicalDeviceMeshShaderFeaturesNV
*/
struct		S_physical_device_features2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
	void * pNext = nullptr;
public:
	S_physical_device_features features;

S_physical_device_features2(){}

S_physical_device_features2(
	S_physical_device_features features_)
	:features(features_)
{
}

S_physical_device_features2( VkPhysicalDeviceFeatures2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_features2 ) );	}
S_physical_device_features2& operator=( VkPhysicalDeviceFeatures2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_features2 ) ); return *this;	}
operator VkPhysicalDeviceFeatures2 const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceFeatures2*>(this);	}
operator VkPhysicalDeviceFeatures2 &() 
	{	return *reinterpret_cast<VkPhysicalDeviceFeatures2*>(this);	}

friend S_device_create_info;

S_physical_device_features2& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
S_physical_device_features2& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
S_physical_device_features2& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
S_physical_device_features2& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
S_physical_device_features2& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
S_physical_device_features2& n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_);
S_physical_device_features2& n_physical_device_inline_uniform_block_features_EXT(S_physical_device_inline_uniform_block_features_EXT const& next_);
S_physical_device_features2& n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_);
S_physical_device_features2& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
S_physical_device_features2& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
S_physical_device_features2& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
S_physical_device_features2& n_physical_device_vulkan_memory_model_features_KHR(S_physical_device_vulkan_memory_model_features_KHR const& next_);
#ifdef LAKA_UNKNOW
S_physical_device_features2& n_physical_device_shader_atomic_int64_features_KHR(S_physical_device_shader_atomic_int64_features_KHR const& next_);
#endif
S_physical_device_features2& n_physical_device_vertex_attribute_divisor_features_EXT(S_physical_device_vertex_attribute_divisor_features_EXT const& next_);
S_physical_device_features2& n_physical_device_astc_decode_features_EXT(S_physical_device_astc_decode_features_EXT const& next_);
S_physical_device_features2& n_physical_device_representative_fragment_test_features_NV(S_physical_device_representative_fragment_test_features_NV const& next_);
S_physical_device_features2& n_physical_device_exclusive_scissor_features_NV(S_physical_device_exclusive_scissor_features_NV const& next_);
S_physical_device_features2& n_physical_device_corner_sampled_image_features_NV(S_physical_device_corner_sampled_image_features_NV const& next_);
S_physical_device_features2& n_physical_device_compute_shader_derivatives_features_NV(S_physical_device_compute_shader_derivatives_features_NV const& next_);
S_physical_device_features2& n_physical_device_fragment_shader_barycentric_features_NV(S_physical_device_fragment_shader_barycentric_features_NV const& next_);
S_physical_device_features2& n_physical_device_shader_image_footprint_features_NV(S_physical_device_shader_image_footprint_features_NV const& next_);
S_physical_device_features2& n_physical_device_shading_rate_image_features_NV(S_physical_device_shading_rate_image_features_NV const& next_);
S_physical_device_features2& n_physical_device_mesh_shader_features_NV(S_physical_device_mesh_shader_features_NV const& next_);
};
static_assert(
	sizeof(S_physical_device_features2) == sizeof(VkPhysicalDeviceFeatures2),
	"struct and wrapper have different size!");

struct N_physical_device_features2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_physical_device_features2& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
N_physical_device_features2& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
N_physical_device_features2& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
N_physical_device_features2& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
N_physical_device_features2& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
N_physical_device_features2& n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_);
N_physical_device_features2& n_physical_device_inline_uniform_block_features_EXT(S_physical_device_inline_uniform_block_features_EXT const& next_);
N_physical_device_features2& n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_);
N_physical_device_features2& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
N_physical_device_features2& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
N_physical_device_features2& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
N_physical_device_features2& n_physical_device_vulkan_memory_model_features_KHR(S_physical_device_vulkan_memory_model_features_KHR const& next_);
#ifdef LAKA_UNKNOW
N_physical_device_features2& n_physical_device_shader_atomic_int64_features_KHR(S_physical_device_shader_atomic_int64_features_KHR const& next_);
#endif
N_physical_device_features2& n_physical_device_vertex_attribute_divisor_features_EXT(S_physical_device_vertex_attribute_divisor_features_EXT const& next_);
N_physical_device_features2& n_physical_device_astc_decode_features_EXT(S_physical_device_astc_decode_features_EXT const& next_);
N_physical_device_features2& n_physical_device_representative_fragment_test_features_NV(S_physical_device_representative_fragment_test_features_NV const& next_);
N_physical_device_features2& n_physical_device_exclusive_scissor_features_NV(S_physical_device_exclusive_scissor_features_NV const& next_);
N_physical_device_features2& n_physical_device_corner_sampled_image_features_NV(S_physical_device_corner_sampled_image_features_NV const& next_);
N_physical_device_features2& n_physical_device_compute_shader_derivatives_features_NV(S_physical_device_compute_shader_derivatives_features_NV const& next_);
N_physical_device_features2& n_physical_device_fragment_shader_barycentric_features_NV(S_physical_device_fragment_shader_barycentric_features_NV const& next_);
N_physical_device_features2& n_physical_device_shader_image_footprint_features_NV(S_physical_device_shader_image_footprint_features_NV const& next_);
N_physical_device_features2& n_physical_device_shading_rate_image_features_NV(S_physical_device_shading_rate_image_features_NV const& next_);
N_physical_device_features2& n_physical_device_mesh_shader_features_NV(S_physical_device_mesh_shader_features_NV const& next_);
};

/*	VkDeviceGroupDeviceCreateInfo
ex to: VkDeviceCreateInfo
*/
struct		S_device_group_device_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	uint32_t physicalDeviceCount;
	const VkPhysicalDevice * pPhysicalDevices;

S_device_group_device_create_info(){}

S_device_group_device_create_info(
	uint32_t physicalDeviceCount_,
	const VkPhysicalDevice * pPhysicalDevices_)
	:physicalDeviceCount(physicalDeviceCount_)
	,pPhysicalDevices(pPhysicalDevices_)
{
}

S_device_group_device_create_info( VkDeviceGroupDeviceCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_device_create_info ) );	}
S_device_group_device_create_info& operator=( VkDeviceGroupDeviceCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_device_create_info ) ); return *this;	}
operator VkDeviceGroupDeviceCreateInfo const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupDeviceCreateInfo*>(this);	}
operator VkDeviceGroupDeviceCreateInfo &() 
	{	return *reinterpret_cast<VkDeviceGroupDeviceCreateInfo*>(this);	}

friend S_device_create_info;
};
static_assert(
	sizeof(S_device_group_device_create_info) == sizeof(VkDeviceGroupDeviceCreateInfo),
	"struct and wrapper have different size!");

/*	VkDeviceCreateInfo
ex:
	VkPhysicalDeviceFeatures2
	VkPhysicalDeviceVariablePointerFeatures
	VkPhysicalDeviceMultiviewFeatures
	VkDeviceGroupDeviceCreateInfo
	VkPhysicalDevice16BitStorageFeatures
	VkPhysicalDeviceSamplerYcbcrConversionFeatures
	VkPhysicalDeviceProtectedMemoryFeatures
	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
	VkPhysicalDeviceInlineUniformBlockFeaturesEXT
	VkPhysicalDeviceShaderDrawParameterFeatures
	VkPhysicalDeviceDescriptorIndexingFeaturesEXT
	VkPhysicalDevice8BitStorageFeaturesKHR
	VkPhysicalDeviceConditionalRenderingFeaturesEXT
	VkPhysicalDeviceVulkanMemoryModelFeaturesKHR
	VkPhysicalDeviceShaderAtomicInt64FeaturesKHR
	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT
	VkPhysicalDeviceASTCDecodeFeaturesEXT
	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV
	VkPhysicalDeviceExclusiveScissorFeaturesNV
	VkPhysicalDeviceCornerSampledImageFeaturesNV
	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV
	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV
	VkPhysicalDeviceShaderImageFootprintFeaturesNV
	VkPhysicalDeviceShadingRateImageFeaturesNV
	VkPhysicalDeviceMeshShaderFeaturesNV
*/
struct		S_device_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const S_device_queue_create_info * pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char * const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char * const* ppEnabledExtensionNames;
	const S_physical_device_features * pEnabledFeatures;

S_device_create_info(){}

S_device_create_info(
	VkDeviceCreateFlags flags_,
	uint32_t queueCreateInfoCount_,
	const S_device_queue_create_info * pQueueCreateInfos_,
	uint32_t enabledLayerCount_,
	const char * const* ppEnabledLayerNames_,
	uint32_t enabledExtensionCount_,
	const char * const* ppEnabledExtensionNames_,
	const S_physical_device_features * pEnabledFeatures_)
	:flags(flags_)
	,queueCreateInfoCount(queueCreateInfoCount_)
	,pQueueCreateInfos(pQueueCreateInfos_)
	,enabledLayerCount(enabledLayerCount_)
	,ppEnabledLayerNames(ppEnabledLayerNames_)
	,enabledExtensionCount(enabledExtensionCount_)
	,ppEnabledExtensionNames(ppEnabledExtensionNames_)
	,pEnabledFeatures(pEnabledFeatures_)
{
}

S_device_create_info( VkDeviceCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_create_info ) );	}
S_device_create_info& operator=( VkDeviceCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_create_info ) ); return *this;	}
operator VkDeviceCreateInfo const&() const 
	{	return *reinterpret_cast<const VkDeviceCreateInfo*>(this);	}
operator VkDeviceCreateInfo &() 
	{	return *reinterpret_cast<VkDeviceCreateInfo*>(this);	}

S_device_create_info& n_physical_device_features2(S_physical_device_features2 const& next_);
S_device_create_info& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
S_device_create_info& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
S_device_create_info& n_device_group_device_create_info(S_device_group_device_create_info const& next_);
S_device_create_info& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
S_device_create_info& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
S_device_create_info& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
S_device_create_info& n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_);
S_device_create_info& n_physical_device_inline_uniform_block_features_EXT(S_physical_device_inline_uniform_block_features_EXT const& next_);
S_device_create_info& n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_);
S_device_create_info& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
S_device_create_info& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
S_device_create_info& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
S_device_create_info& n_physical_device_vulkan_memory_model_features_KHR(S_physical_device_vulkan_memory_model_features_KHR const& next_);
#ifdef LAKA_UNKNOW
S_device_create_info& n_physical_device_shader_atomic_int64_features_KHR(S_physical_device_shader_atomic_int64_features_KHR const& next_);
#endif
S_device_create_info& n_physical_device_vertex_attribute_divisor_features_EXT(S_physical_device_vertex_attribute_divisor_features_EXT const& next_);
S_device_create_info& n_physical_device_astc_decode_features_EXT(S_physical_device_astc_decode_features_EXT const& next_);
S_device_create_info& n_physical_device_representative_fragment_test_features_NV(S_physical_device_representative_fragment_test_features_NV const& next_);
S_device_create_info& n_physical_device_exclusive_scissor_features_NV(S_physical_device_exclusive_scissor_features_NV const& next_);
S_device_create_info& n_physical_device_corner_sampled_image_features_NV(S_physical_device_corner_sampled_image_features_NV const& next_);
S_device_create_info& n_physical_device_compute_shader_derivatives_features_NV(S_physical_device_compute_shader_derivatives_features_NV const& next_);
S_device_create_info& n_physical_device_fragment_shader_barycentric_features_NV(S_physical_device_fragment_shader_barycentric_features_NV const& next_);
S_device_create_info& n_physical_device_shader_image_footprint_features_NV(S_physical_device_shader_image_footprint_features_NV const& next_);
S_device_create_info& n_physical_device_shading_rate_image_features_NV(S_physical_device_shading_rate_image_features_NV const& next_);
S_device_create_info& n_physical_device_mesh_shader_features_NV(S_physical_device_mesh_shader_features_NV const& next_);
};
static_assert(
	sizeof(S_device_create_info) == sizeof(VkDeviceCreateInfo),
	"struct and wrapper have different size!");

struct N_device_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_device_create_info& n_physical_device_features2(S_physical_device_features2 const& next_);
N_device_create_info& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
N_device_create_info& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
N_device_create_info& n_device_group_device_create_info(S_device_group_device_create_info const& next_);
N_device_create_info& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
N_device_create_info& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
N_device_create_info& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
N_device_create_info& n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_);
N_device_create_info& n_physical_device_inline_uniform_block_features_EXT(S_physical_device_inline_uniform_block_features_EXT const& next_);
N_device_create_info& n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_);
N_device_create_info& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
N_device_create_info& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
N_device_create_info& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
N_device_create_info& n_physical_device_vulkan_memory_model_features_KHR(S_physical_device_vulkan_memory_model_features_KHR const& next_);
#ifdef LAKA_UNKNOW
N_device_create_info& n_physical_device_shader_atomic_int64_features_KHR(S_physical_device_shader_atomic_int64_features_KHR const& next_);
#endif
N_device_create_info& n_physical_device_vertex_attribute_divisor_features_EXT(S_physical_device_vertex_attribute_divisor_features_EXT const& next_);
N_device_create_info& n_physical_device_astc_decode_features_EXT(S_physical_device_astc_decode_features_EXT const& next_);
N_device_create_info& n_physical_device_representative_fragment_test_features_NV(S_physical_device_representative_fragment_test_features_NV const& next_);
N_device_create_info& n_physical_device_exclusive_scissor_features_NV(S_physical_device_exclusive_scissor_features_NV const& next_);
N_device_create_info& n_physical_device_corner_sampled_image_features_NV(S_physical_device_corner_sampled_image_features_NV const& next_);
N_device_create_info& n_physical_device_compute_shader_derivatives_features_NV(S_physical_device_compute_shader_derivatives_features_NV const& next_);
N_device_create_info& n_physical_device_fragment_shader_barycentric_features_NV(S_physical_device_fragment_shader_barycentric_features_NV const& next_);
N_device_create_info& n_physical_device_shader_image_footprint_features_NV(S_physical_device_shader_image_footprint_features_NV const& next_);
N_device_create_info& n_physical_device_shading_rate_image_features_NV(S_physical_device_shading_rate_image_features_NV const& next_);
N_device_create_info& n_physical_device_mesh_shader_features_NV(S_physical_device_mesh_shader_features_NV const& next_);
};

/*	VkDebugReportCallbackCreateInfoEXT
ex to: VkInstanceCreateInfo
*/
struct		S_debug_report_callback_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	F_debug_report_EXT flags;
	PFN_vkDebugReportCallbackEXT pfnCallback;
	void * pUserData;

S_debug_report_callback_create_info_EXT(){}

S_debug_report_callback_create_info_EXT(
	F_debug_report_EXT flags_,
	PFN_vkDebugReportCallbackEXT pfnCallback_,
	void * pUserData_)
	:flags(flags_)
	,pfnCallback(pfnCallback_)
	,pUserData(pUserData_)
{
}

S_debug_report_callback_create_info_EXT( VkDebugReportCallbackCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_report_callback_create_info_EXT ) );	}
S_debug_report_callback_create_info_EXT& operator=( VkDebugReportCallbackCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_report_callback_create_info_EXT ) ); return *this;	}
operator VkDebugReportCallbackCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT*>(this);	}
operator VkDebugReportCallbackCreateInfoEXT &() 
	{	return *reinterpret_cast<VkDebugReportCallbackCreateInfoEXT*>(this);	}

friend S_instance_create_info;
};
static_assert(
	sizeof(S_debug_report_callback_create_info_EXT) == sizeof(VkDebugReportCallbackCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkValidationFlagsEXT
ex to: VkInstanceCreateInfo
*/
struct		S_validation_flags_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
	 void * pNext = nullptr;
public:
	uint32_t disabledValidationCheckCount;
	const E_validation_check_EXT * pDisabledValidationChecks;

S_validation_flags_EXT(){}

S_validation_flags_EXT(
	uint32_t disabledValidationCheckCount_,
	const E_validation_check_EXT * pDisabledValidationChecks_)
	:disabledValidationCheckCount(disabledValidationCheckCount_)
	,pDisabledValidationChecks(pDisabledValidationChecks_)
{
}

S_validation_flags_EXT( VkValidationFlagsEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_validation_flags_EXT ) );	}
S_validation_flags_EXT& operator=( VkValidationFlagsEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_validation_flags_EXT ) ); return *this;	}
operator VkValidationFlagsEXT const&() const 
	{	return *reinterpret_cast<const VkValidationFlagsEXT*>(this);	}
operator VkValidationFlagsEXT &() 
	{	return *reinterpret_cast<VkValidationFlagsEXT*>(this);	}

friend S_instance_create_info;
};
static_assert(
	sizeof(S_validation_flags_EXT) == sizeof(VkValidationFlagsEXT),
	"struct and wrapper have different size!");

/*	VkDebugUtilsMessengerCreateInfoEXT
ex to: VkInstanceCreateInfo
*/
struct		S_debug_utils_messenger_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkDebugUtilsMessengerCreateFlagsEXT flags;
	F_debug_utils_message_severity_EXT messageSeverity;
	F_debug_utils_message_type_EXT messageType;
	PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback;
	void * pUserData;

S_debug_utils_messenger_create_info_EXT(){}

S_debug_utils_messenger_create_info_EXT(
	VkDebugUtilsMessengerCreateFlagsEXT flags_,
	F_debug_utils_message_severity_EXT messageSeverity_,
	F_debug_utils_message_type_EXT messageType_,
	PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback_,
	void * pUserData_)
	:flags(flags_)
	,messageSeverity(messageSeverity_)
	,messageType(messageType_)
	,pfnUserCallback(pfnUserCallback_)
	,pUserData(pUserData_)
{
}

S_debug_utils_messenger_create_info_EXT( VkDebugUtilsMessengerCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_utils_messenger_create_info_EXT ) );	}
S_debug_utils_messenger_create_info_EXT& operator=( VkDebugUtilsMessengerCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_utils_messenger_create_info_EXT ) ); return *this;	}
operator VkDebugUtilsMessengerCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT*>(this);	}
operator VkDebugUtilsMessengerCreateInfoEXT &() 
	{	return *reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT*>(this);	}

friend S_instance_create_info;
};
static_assert(
	sizeof(S_debug_utils_messenger_create_info_EXT) == sizeof(VkDebugUtilsMessengerCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkInstanceCreateInfo
ex:
	VkDebugReportCallbackCreateInfoEXT
	VkValidationFlagsEXT
	VkDebugUtilsMessengerCreateInfoEXT
*/
struct		S_instance_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkInstanceCreateFlags flags;
	const S_application_info * pApplicationInfo;
	uint32_t enabledLayerCount;
	const char * const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char * const* ppEnabledExtensionNames;

S_instance_create_info(){}

S_instance_create_info(
	VkInstanceCreateFlags flags_,
	const S_application_info * pApplicationInfo_,
	uint32_t enabledLayerCount_,
	const char * const* ppEnabledLayerNames_,
	uint32_t enabledExtensionCount_,
	const char * const* ppEnabledExtensionNames_)
	:flags(flags_)
	,pApplicationInfo(pApplicationInfo_)
	,enabledLayerCount(enabledLayerCount_)
	,ppEnabledLayerNames(ppEnabledLayerNames_)
	,enabledExtensionCount(enabledExtensionCount_)
	,ppEnabledExtensionNames(ppEnabledExtensionNames_)
{
}

S_instance_create_info( VkInstanceCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_instance_create_info ) );	}
S_instance_create_info& operator=( VkInstanceCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_instance_create_info ) ); return *this;	}
operator VkInstanceCreateInfo const&() const 
	{	return *reinterpret_cast<const VkInstanceCreateInfo*>(this);	}
operator VkInstanceCreateInfo &() 
	{	return *reinterpret_cast<VkInstanceCreateInfo*>(this);	}

S_instance_create_info& n_debug_report_callback_create_info_EXT(S_debug_report_callback_create_info_EXT const& next_);
S_instance_create_info& n_validation_flags_EXT(S_validation_flags_EXT const& next_);
S_instance_create_info& n_debug_utils_messenger_create_info_EXT(S_debug_utils_messenger_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_instance_create_info) == sizeof(VkInstanceCreateInfo),
	"struct and wrapper have different size!");

struct N_instance_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_instance_create_info& n_debug_report_callback_create_info_EXT(S_debug_report_callback_create_info_EXT const& next_);
N_instance_create_info& n_validation_flags_EXT(S_validation_flags_EXT const& next_);
N_instance_create_info& n_debug_utils_messenger_create_info_EXT(S_debug_utils_messenger_create_info_EXT const& next_);
};

/*	VkQueueFamilyProperties
(returnedonly)
*/
struct		S_queue_family_properties{
	F_queue queueFlags;
	uint32_t queueCount;
	uint32_t timestampValidBits;
	S_extent_3d minImageTransferGranularity;

S_queue_family_properties(){}
};

/*	VkMemoryType
(returnedonly)
*/
struct		S_memory_type{
	F_memory_property propertyFlags;
	uint32_t heapIndex;

S_memory_type(){}
};

/*	VkMemoryHeap
(returnedonly)
*/
struct		S_memory_heap{
	VkDeviceSize size;
	F_memory_heap flags;

S_memory_heap(){}
};

/*	VkPhysicalDeviceMemoryProperties
(returnedonly)
*/
struct		S_physical_device_memory_properties{
	uint32_t memoryTypeCount;
	S_memory_type memoryTypes[VK_MAX_MEMORY_TYPES];
	uint32_t memoryHeapCount;
	S_memory_heap memoryHeaps[VK_MAX_MEMORY_HEAPS];

S_physical_device_memory_properties(){}
};

/*	VkDedicatedAllocationMemoryAllocateInfoNV
ex to: VkMemoryAllocateInfo
*/
struct		S_dedicated_allocation_memory_allocate_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkImage image;
	VkBuffer buffer;

S_dedicated_allocation_memory_allocate_info_NV(){}

S_dedicated_allocation_memory_allocate_info_NV(
	VkImage image_,
	VkBuffer buffer_)
	:image(image_)
	,buffer(buffer_)
{
}

S_dedicated_allocation_memory_allocate_info_NV( VkDedicatedAllocationMemoryAllocateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_dedicated_allocation_memory_allocate_info_NV ) );	}
S_dedicated_allocation_memory_allocate_info_NV& operator=( VkDedicatedAllocationMemoryAllocateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_dedicated_allocation_memory_allocate_info_NV ) ); return *this;	}
operator VkDedicatedAllocationMemoryAllocateInfoNV const&() const 
	{	return *reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV*>(this);	}
operator VkDedicatedAllocationMemoryAllocateInfoNV &() 
	{	return *reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_dedicated_allocation_memory_allocate_info_NV) == sizeof(VkDedicatedAllocationMemoryAllocateInfoNV),
	"struct and wrapper have different size!");

/*	VkExportMemoryAllocateInfoNV
ex to: VkMemoryAllocateInfo
*/
struct		S_export_memory_allocate_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type_NV handleTypes;

S_export_memory_allocate_info_NV(){}

S_export_memory_allocate_info_NV(
	F_external_memory_handle_type_NV handleTypes_)
	:handleTypes(handleTypes_)
{
}

S_export_memory_allocate_info_NV( VkExportMemoryAllocateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_memory_allocate_info_NV ) );	}
S_export_memory_allocate_info_NV& operator=( VkExportMemoryAllocateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_memory_allocate_info_NV ) ); return *this;	}
operator VkExportMemoryAllocateInfoNV const&() const 
	{	return *reinterpret_cast<const VkExportMemoryAllocateInfoNV*>(this);	}
operator VkExportMemoryAllocateInfoNV &() 
	{	return *reinterpret_cast<VkExportMemoryAllocateInfoNV*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_export_memory_allocate_info_NV) == sizeof(VkExportMemoryAllocateInfoNV),
	"struct and wrapper have different size!");

/*	VkImportMemoryWin32HandleInfoNV
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_NV
struct		S_import_memory_win32_handle_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type_NV handleType;
	HANDLE handle;

S_import_memory_win32_handle_info_NV(){}

S_import_memory_win32_handle_info_NV(
	F_external_memory_handle_type_NV handleType_,
	HANDLE handle_)
	:handleType(handleType_)
	,handle(handle_)
{
}

S_import_memory_win32_handle_info_NV( VkImportMemoryWin32HandleInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_memory_win32_handle_info_NV ) );	}
S_import_memory_win32_handle_info_NV& operator=( VkImportMemoryWin32HandleInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_memory_win32_handle_info_NV ) ); return *this;	}
operator VkImportMemoryWin32HandleInfoNV const&() const 
	{	return *reinterpret_cast<const VkImportMemoryWin32HandleInfoNV*>(this);	}
operator VkImportMemoryWin32HandleInfoNV &() 
	{	return *reinterpret_cast<VkImportMemoryWin32HandleInfoNV*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_import_memory_win32_handle_info_NV) == sizeof(VkImportMemoryWin32HandleInfoNV),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_NV

/*	VkExportMemoryWin32HandleInfoNV
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_NV
struct		S_export_memory_win32_handle_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;
	 void * pNext = nullptr;
public:
	const SECURITY_ATTRIBUTES * pAttributes;
	DWORD dwAccess;

S_export_memory_win32_handle_info_NV(){}

S_export_memory_win32_handle_info_NV(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_)
	:pAttributes(pAttributes_)
	,dwAccess(dwAccess_)
{
}

S_export_memory_win32_handle_info_NV( VkExportMemoryWin32HandleInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_memory_win32_handle_info_NV ) );	}
S_export_memory_win32_handle_info_NV& operator=( VkExportMemoryWin32HandleInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_memory_win32_handle_info_NV ) ); return *this;	}
operator VkExportMemoryWin32HandleInfoNV const&() const 
	{	return *reinterpret_cast<const VkExportMemoryWin32HandleInfoNV*>(this);	}
operator VkExportMemoryWin32HandleInfoNV &() 
	{	return *reinterpret_cast<VkExportMemoryWin32HandleInfoNV*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_export_memory_win32_handle_info_NV) == sizeof(VkExportMemoryWin32HandleInfoNV),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_NV

/*	VkExportMemoryAllocateInfo
ex to: VkMemoryAllocateInfo
*/
struct		S_export_memory_allocate_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type handleTypes;

S_export_memory_allocate_info(){}

S_export_memory_allocate_info(
	F_external_memory_handle_type handleTypes_)
	:handleTypes(handleTypes_)
{
}

S_export_memory_allocate_info( VkExportMemoryAllocateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_memory_allocate_info ) );	}
S_export_memory_allocate_info& operator=( VkExportMemoryAllocateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_memory_allocate_info ) ); return *this;	}
operator VkExportMemoryAllocateInfo const&() const 
	{	return *reinterpret_cast<const VkExportMemoryAllocateInfo*>(this);	}
operator VkExportMemoryAllocateInfo &() 
	{	return *reinterpret_cast<VkExportMemoryAllocateInfo*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_export_memory_allocate_info) == sizeof(VkExportMemoryAllocateInfo),
	"struct and wrapper have different size!");

/*	VkImportMemoryWin32HandleInfoKHR
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_import_memory_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type handleType;
	HANDLE handle;
	LPCWSTR name;

S_import_memory_win32_handle_info_KHR(){}

S_import_memory_win32_handle_info_KHR(
	F_external_memory_handle_type handleType_,
	HANDLE handle_,
	LPCWSTR name_)
	:handleType(handleType_)
	,handle(handle_)
	,name(name_)
{
}

S_import_memory_win32_handle_info_KHR( VkImportMemoryWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_memory_win32_handle_info_KHR ) );	}
S_import_memory_win32_handle_info_KHR& operator=( VkImportMemoryWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_memory_win32_handle_info_KHR ) ); return *this;	}
operator VkImportMemoryWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImportMemoryWin32HandleInfoKHR*>(this);	}
operator VkImportMemoryWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkImportMemoryWin32HandleInfoKHR*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_import_memory_win32_handle_info_KHR) == sizeof(VkImportMemoryWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkExportMemoryWin32HandleInfoKHR
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_export_memory_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	const SECURITY_ATTRIBUTES * pAttributes;
	DWORD dwAccess;
	LPCWSTR name;

S_export_memory_win32_handle_info_KHR(){}

S_export_memory_win32_handle_info_KHR(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_,
	LPCWSTR name_)
	:pAttributes(pAttributes_)
	,dwAccess(dwAccess_)
	,name(name_)
{
}

S_export_memory_win32_handle_info_KHR( VkExportMemoryWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_memory_win32_handle_info_KHR ) );	}
S_export_memory_win32_handle_info_KHR& operator=( VkExportMemoryWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_memory_win32_handle_info_KHR ) ); return *this;	}
operator VkExportMemoryWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkExportMemoryWin32HandleInfoKHR*>(this);	}
operator VkExportMemoryWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkExportMemoryWin32HandleInfoKHR*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_export_memory_win32_handle_info_KHR) == sizeof(VkExportMemoryWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportMemoryFdInfoKHR
ex to: VkMemoryAllocateInfo
*/
struct		S_import_memory_fd_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type handleType;
	int fd;

S_import_memory_fd_info_KHR(){}

S_import_memory_fd_info_KHR(
	F_external_memory_handle_type handleType_,
	int fd_)
	:handleType(handleType_)
	,fd(fd_)
{
}

S_import_memory_fd_info_KHR( VkImportMemoryFdInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_memory_fd_info_KHR ) );	}
S_import_memory_fd_info_KHR& operator=( VkImportMemoryFdInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_memory_fd_info_KHR ) ); return *this;	}
operator VkImportMemoryFdInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImportMemoryFdInfoKHR*>(this);	}
operator VkImportMemoryFdInfoKHR &() 
	{	return *reinterpret_cast<VkImportMemoryFdInfoKHR*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_import_memory_fd_info_KHR) == sizeof(VkImportMemoryFdInfoKHR),
	"struct and wrapper have different size!");

/*	VkMemoryAllocateFlagsInfo
ex to: VkMemoryAllocateInfo
*/
struct		S_memory_allocate_flags_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO;
	 void * pNext = nullptr;
public:
	F_memory_allocate flags;
	uint32_t deviceMask;

S_memory_allocate_flags_info(){}

S_memory_allocate_flags_info(
	F_memory_allocate flags_,
	uint32_t deviceMask_)
	:flags(flags_)
	,deviceMask(deviceMask_)
{
}

S_memory_allocate_flags_info( VkMemoryAllocateFlagsInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_allocate_flags_info ) );	}
S_memory_allocate_flags_info& operator=( VkMemoryAllocateFlagsInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_allocate_flags_info ) ); return *this;	}
operator VkMemoryAllocateFlagsInfo const&() const 
	{	return *reinterpret_cast<const VkMemoryAllocateFlagsInfo*>(this);	}
operator VkMemoryAllocateFlagsInfo &() 
	{	return *reinterpret_cast<VkMemoryAllocateFlagsInfo*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_memory_allocate_flags_info) == sizeof(VkMemoryAllocateFlagsInfo),
	"struct and wrapper have different size!");

/*	VkMemoryDedicatedAllocateInfo
ex to: VkMemoryAllocateInfo
*/
struct		S_memory_dedicated_allocate_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
	 void * pNext = nullptr;
public:
	VkImage image;
	VkBuffer buffer;

S_memory_dedicated_allocate_info(){}

S_memory_dedicated_allocate_info(
	VkImage image_,
	VkBuffer buffer_)
	:image(image_)
	,buffer(buffer_)
{
}

S_memory_dedicated_allocate_info( VkMemoryDedicatedAllocateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_dedicated_allocate_info ) );	}
S_memory_dedicated_allocate_info& operator=( VkMemoryDedicatedAllocateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_dedicated_allocate_info ) ); return *this;	}
operator VkMemoryDedicatedAllocateInfo const&() const 
	{	return *reinterpret_cast<const VkMemoryDedicatedAllocateInfo*>(this);	}
operator VkMemoryDedicatedAllocateInfo &() 
	{	return *reinterpret_cast<VkMemoryDedicatedAllocateInfo*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_memory_dedicated_allocate_info) == sizeof(VkMemoryDedicatedAllocateInfo),
	"struct and wrapper have different size!");

/*	VkImportMemoryHostPointerInfoEXT
ex to: VkMemoryAllocateInfo
*/
struct		S_import_memory_host_pointer_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type handleType;
	void * pHostPointer;

S_import_memory_host_pointer_info_EXT(){}

S_import_memory_host_pointer_info_EXT(
	F_external_memory_handle_type handleType_,
	void * pHostPointer_)
	:handleType(handleType_)
	,pHostPointer(pHostPointer_)
{
}

S_import_memory_host_pointer_info_EXT( VkImportMemoryHostPointerInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_memory_host_pointer_info_EXT ) );	}
S_import_memory_host_pointer_info_EXT& operator=( VkImportMemoryHostPointerInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_memory_host_pointer_info_EXT ) ); return *this;	}
operator VkImportMemoryHostPointerInfoEXT const&() const 
	{	return *reinterpret_cast<const VkImportMemoryHostPointerInfoEXT*>(this);	}
operator VkImportMemoryHostPointerInfoEXT &() 
	{	return *reinterpret_cast<VkImportMemoryHostPointerInfoEXT*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_import_memory_host_pointer_info_EXT) == sizeof(VkImportMemoryHostPointerInfoEXT),
	"struct and wrapper have different size!");

/*	VkImportAndroidHardwareBufferInfoANDROID
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_import_android_hardware_buffer_info_ANDROID{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
	 void * pNext = nullptr;
public:
	struct AHardwareBuffer * buffer;

S_import_android_hardware_buffer_info_ANDROID(){}

S_import_android_hardware_buffer_info_ANDROID(
	struct AHardwareBuffer * buffer_)
	:buffer(buffer_)
{
}

S_import_android_hardware_buffer_info_ANDROID( VkImportAndroidHardwareBufferInfoANDROID const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_android_hardware_buffer_info_ANDROID ) );	}
S_import_android_hardware_buffer_info_ANDROID& operator=( VkImportAndroidHardwareBufferInfoANDROID const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_android_hardware_buffer_info_ANDROID ) ); return *this;	}
operator VkImportAndroidHardwareBufferInfoANDROID const&() const 
	{	return *reinterpret_cast<const VkImportAndroidHardwareBufferInfoANDROID*>(this);	}
operator VkImportAndroidHardwareBufferInfoANDROID &() 
	{	return *reinterpret_cast<VkImportAndroidHardwareBufferInfoANDROID*>(this);	}

friend S_memory_allocate_info;
};
static_assert(
	sizeof(S_import_android_hardware_buffer_info_ANDROID) == sizeof(VkImportAndroidHardwareBufferInfoANDROID),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkMemoryAllocateInfo
ex:
	VkDedicatedAllocationMemoryAllocateInfoNV
	VkExportMemoryAllocateInfoNV
	VkImportMemoryWin32HandleInfoNV
	VkExportMemoryWin32HandleInfoNV
	VkExportMemoryAllocateInfo
	VkImportMemoryWin32HandleInfoKHR
	VkExportMemoryWin32HandleInfoKHR
	VkImportMemoryFdInfoKHR
	VkMemoryAllocateFlagsInfo
	VkMemoryDedicatedAllocateInfo
	VkImportMemoryHostPointerInfoEXT
	VkImportAndroidHardwareBufferInfoANDROID
*/
struct		S_memory_allocate_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
	 void * pNext = nullptr;
public:
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;

S_memory_allocate_info(){}

S_memory_allocate_info(
	VkDeviceSize allocationSize_,
	uint32_t memoryTypeIndex_)
	:allocationSize(allocationSize_)
	,memoryTypeIndex(memoryTypeIndex_)
{
}

S_memory_allocate_info( VkMemoryAllocateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_allocate_info ) );	}
S_memory_allocate_info& operator=( VkMemoryAllocateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_allocate_info ) ); return *this;	}
operator VkMemoryAllocateInfo const&() const 
	{	return *reinterpret_cast<const VkMemoryAllocateInfo*>(this);	}
operator VkMemoryAllocateInfo &() 
	{	return *reinterpret_cast<VkMemoryAllocateInfo*>(this);	}

S_memory_allocate_info& n_dedicated_allocation_memory_allocate_info_NV(S_dedicated_allocation_memory_allocate_info_NV const& next_);
S_memory_allocate_info& n_export_memory_allocate_info_NV(S_export_memory_allocate_info_NV const& next_);
#ifdef VK_USE_PLATFORM_WIN32_NV
S_memory_allocate_info& n_import_memory_win32_handle_info_NV(S_import_memory_win32_handle_info_NV const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_NV
S_memory_allocate_info& n_export_memory_win32_handle_info_NV(S_export_memory_win32_handle_info_NV const& next_);
#endif
S_memory_allocate_info& n_export_memory_allocate_info(S_export_memory_allocate_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_memory_allocate_info& n_import_memory_win32_handle_info_KHR(S_import_memory_win32_handle_info_KHR const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_memory_allocate_info& n_export_memory_win32_handle_info_KHR(S_export_memory_win32_handle_info_KHR const& next_);
#endif
S_memory_allocate_info& n_import_memory_fd_info_KHR(S_import_memory_fd_info_KHR const& next_);
S_memory_allocate_info& n_memory_allocate_flags_info(S_memory_allocate_flags_info const& next_);
S_memory_allocate_info& n_memory_dedicated_allocate_info(S_memory_dedicated_allocate_info const& next_);
S_memory_allocate_info& n_import_memory_host_pointer_info_EXT(S_import_memory_host_pointer_info_EXT const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_memory_allocate_info& n_import_android_hardware_buffer_info_ANDROID(S_import_android_hardware_buffer_info_ANDROID const& next_);
#endif
};
static_assert(
	sizeof(S_memory_allocate_info) == sizeof(VkMemoryAllocateInfo),
	"struct and wrapper have different size!");

struct N_memory_allocate_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_memory_allocate_info& n_dedicated_allocation_memory_allocate_info_NV(S_dedicated_allocation_memory_allocate_info_NV const& next_);
N_memory_allocate_info& n_export_memory_allocate_info_NV(S_export_memory_allocate_info_NV const& next_);
#ifdef VK_USE_PLATFORM_WIN32_NV
N_memory_allocate_info& n_import_memory_win32_handle_info_NV(S_import_memory_win32_handle_info_NV const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_NV
N_memory_allocate_info& n_export_memory_win32_handle_info_NV(S_export_memory_win32_handle_info_NV const& next_);
#endif
N_memory_allocate_info& n_export_memory_allocate_info(S_export_memory_allocate_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_memory_allocate_info& n_import_memory_win32_handle_info_KHR(S_import_memory_win32_handle_info_KHR const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_memory_allocate_info& n_export_memory_win32_handle_info_KHR(S_export_memory_win32_handle_info_KHR const& next_);
#endif
N_memory_allocate_info& n_import_memory_fd_info_KHR(S_import_memory_fd_info_KHR const& next_);
N_memory_allocate_info& n_memory_allocate_flags_info(S_memory_allocate_flags_info const& next_);
N_memory_allocate_info& n_memory_dedicated_allocate_info(S_memory_dedicated_allocate_info const& next_);
N_memory_allocate_info& n_import_memory_host_pointer_info_EXT(S_import_memory_host_pointer_info_EXT const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_memory_allocate_info& n_import_android_hardware_buffer_info_ANDROID(S_import_android_hardware_buffer_info_ANDROID const& next_);
#endif
};

/*	VkMemoryRequirements
(returnedonly)
*/
struct		S_memory_requirements{
	VkDeviceSize size;
	VkDeviceSize alignment;
	uint32_t memoryTypeBits;

S_memory_requirements(){}
};

/*	VkSparseImageFormatProperties
(returnedonly)
*/
struct		S_sparse_image_format_properties{
	F_image_aspect aspectMask;
	S_extent_3d imageGranularity;
	F_sparse_image_format flags;

S_sparse_image_format_properties(){}
};

/*	VkSparseImageMemoryRequirements
(returnedonly)
*/
struct		S_sparse_image_memory_requirements{
	S_sparse_image_format_properties formatProperties;
	uint32_t imageMipTailFirstLod;
	VkDeviceSize imageMipTailSize;
	VkDeviceSize imageMipTailOffset;
	VkDeviceSize imageMipTailStride;

S_sparse_image_memory_requirements(){}
};

/*	VkMappedMemoryRange
*/
struct		S_mapped_memory_range{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
	 void * pNext = nullptr;
public:
	VkDeviceMemory memory;
	VkDeviceSize offset;
	VkDeviceSize size;

S_mapped_memory_range(){}

S_mapped_memory_range(
	VkDeviceMemory memory_,
	VkDeviceSize offset_,
	VkDeviceSize size_)
	:memory(memory_)
	,offset(offset_)
	,size(size_)
{
}

S_mapped_memory_range( VkMappedMemoryRange const & rhs )
	{	memcpy( this, &rhs, sizeof( S_mapped_memory_range ) );	}
S_mapped_memory_range& operator=( VkMappedMemoryRange const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_mapped_memory_range ) ); return *this;	}
operator VkMappedMemoryRange const&() const 
	{	return *reinterpret_cast<const VkMappedMemoryRange*>(this);	}
operator VkMappedMemoryRange &() 
	{	return *reinterpret_cast<VkMappedMemoryRange*>(this);	}
};
static_assert(
	sizeof(S_mapped_memory_range) == sizeof(VkMappedMemoryRange),
	"struct and wrapper have different size!");

/*	VkFormatProperties
(returnedonly)
*/
struct		S_format_properties{
	F_format_feature linearTilingFeatures;
	F_format_feature optimalTilingFeatures;
	F_format_feature bufferFeatures;

S_format_properties(){}
};

/*	VkImageFormatProperties
(returnedonly)
*/
struct		S_image_format_properties{
	S_extent_3d maxExtent;
	uint32_t maxMipLevels;
	uint32_t maxArrayLayers;
	F_sample_count sampleCounts;
	VkDeviceSize maxResourceSize;

S_image_format_properties(){}
};

/*	VkDescriptorBufferInfo
*/
struct		S_descriptor_buffer_info{
	VkBuffer buffer;
	VkDeviceSize offset;
	VkDeviceSize range;

S_descriptor_buffer_info(){}
};

/*	VkDescriptorImageInfo
*/
struct		S_descriptor_image_info{
	VkSampler sampler;
	VkImageView imageView;
	E_image_layout imageLayout;

S_descriptor_image_info(){}
};

/*	VkWriteDescriptorSetInlineUniformBlockEXT
ex to: VkWriteDescriptorSet
*/
struct		S_write_descriptor_set_inline_uniform_block_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT;
	 void * pNext = nullptr;
public:
	uint32_t dataSize;
	const void * pData;

S_write_descriptor_set_inline_uniform_block_EXT(){}

S_write_descriptor_set_inline_uniform_block_EXT(
	uint32_t dataSize_,
	const void * pData_)
	:dataSize(dataSize_)
	,pData(pData_)
{
}

S_write_descriptor_set_inline_uniform_block_EXT( VkWriteDescriptorSetInlineUniformBlockEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_write_descriptor_set_inline_uniform_block_EXT ) );	}
S_write_descriptor_set_inline_uniform_block_EXT& operator=( VkWriteDescriptorSetInlineUniformBlockEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_write_descriptor_set_inline_uniform_block_EXT ) ); return *this;	}
operator VkWriteDescriptorSetInlineUniformBlockEXT const&() const 
	{	return *reinterpret_cast<const VkWriteDescriptorSetInlineUniformBlockEXT*>(this);	}
operator VkWriteDescriptorSetInlineUniformBlockEXT &() 
	{	return *reinterpret_cast<VkWriteDescriptorSetInlineUniformBlockEXT*>(this);	}

friend S_write_descriptor_set;
};
static_assert(
	sizeof(S_write_descriptor_set_inline_uniform_block_EXT) == sizeof(VkWriteDescriptorSetInlineUniformBlockEXT),
	"struct and wrapper have different size!");

/*	VkDescriptorAccelerationStructureInfoNVX
ex to: VkWriteDescriptorSet
*/
struct		S_descriptor_acceleration_structure_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_ACCELERATION_STRUCTURE_INFO_NVX;
	 void * pNext = nullptr;
public:
	uint32_t accelerationStructureCount;
	const VkAccelerationStructureNVX * pAccelerationStructures;

S_descriptor_acceleration_structure_info_NVX(){}

S_descriptor_acceleration_structure_info_NVX(
	uint32_t accelerationStructureCount_,
	const VkAccelerationStructureNVX * pAccelerationStructures_)
	:accelerationStructureCount(accelerationStructureCount_)
	,pAccelerationStructures(pAccelerationStructures_)
{
}

S_descriptor_acceleration_structure_info_NVX( VkDescriptorAccelerationStructureInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_acceleration_structure_info_NVX ) );	}
S_descriptor_acceleration_structure_info_NVX& operator=( VkDescriptorAccelerationStructureInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_acceleration_structure_info_NVX ) ); return *this;	}
operator VkDescriptorAccelerationStructureInfoNVX const&() const 
	{	return *reinterpret_cast<const VkDescriptorAccelerationStructureInfoNVX*>(this);	}
operator VkDescriptorAccelerationStructureInfoNVX &() 
	{	return *reinterpret_cast<VkDescriptorAccelerationStructureInfoNVX*>(this);	}

friend S_write_descriptor_set;
};
static_assert(
	sizeof(S_descriptor_acceleration_structure_info_NVX) == sizeof(VkDescriptorAccelerationStructureInfoNVX),
	"struct and wrapper have different size!");

/*	VkWriteDescriptorSet
ex:
	VkWriteDescriptorSetInlineUniformBlockEXT
	VkDescriptorAccelerationStructureInfoNVX
*/
struct		S_write_descriptor_set{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
	 void * pNext = nullptr;
public:
	VkDescriptorSet dstSet;
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	E_descriptor_type descriptorType;
	const S_descriptor_image_info * pImageInfo;
	const S_descriptor_buffer_info * pBufferInfo;
	const VkBufferView * pTexelBufferView;

S_write_descriptor_set(){}

S_write_descriptor_set(
	VkDescriptorSet dstSet_,
	uint32_t dstBinding_,
	uint32_t dstArrayElement_,
	uint32_t descriptorCount_,
	E_descriptor_type descriptorType_,
	const S_descriptor_image_info * pImageInfo_,
	const S_descriptor_buffer_info * pBufferInfo_,
	const VkBufferView * pTexelBufferView_)
	:dstSet(dstSet_)
	,dstBinding(dstBinding_)
	,dstArrayElement(dstArrayElement_)
	,descriptorCount(descriptorCount_)
	,descriptorType(descriptorType_)
	,pImageInfo(pImageInfo_)
	,pBufferInfo(pBufferInfo_)
	,pTexelBufferView(pTexelBufferView_)
{
}

S_write_descriptor_set( VkWriteDescriptorSet const & rhs )
	{	memcpy( this, &rhs, sizeof( S_write_descriptor_set ) );	}
S_write_descriptor_set& operator=( VkWriteDescriptorSet const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_write_descriptor_set ) ); return *this;	}
operator VkWriteDescriptorSet const&() const 
	{	return *reinterpret_cast<const VkWriteDescriptorSet*>(this);	}
operator VkWriteDescriptorSet &() 
	{	return *reinterpret_cast<VkWriteDescriptorSet*>(this);	}

S_write_descriptor_set& n_write_descriptor_set_inline_uniform_block_EXT(S_write_descriptor_set_inline_uniform_block_EXT const& next_);
S_write_descriptor_set& n_descriptor_acceleration_structure_info_NVX(S_descriptor_acceleration_structure_info_NVX const& next_);
};
static_assert(
	sizeof(S_write_descriptor_set) == sizeof(VkWriteDescriptorSet),
	"struct and wrapper have different size!");

struct N_write_descriptor_set{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_write_descriptor_set& n_write_descriptor_set_inline_uniform_block_EXT(S_write_descriptor_set_inline_uniform_block_EXT const& next_);
N_write_descriptor_set& n_descriptor_acceleration_structure_info_NVX(S_descriptor_acceleration_structure_info_NVX const& next_);
};

/*	VkCopyDescriptorSet
*/
struct		S_copy_descriptor_set{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
	 void * pNext = nullptr;
public:
	VkDescriptorSet srcSet;
	uint32_t srcBinding;
	uint32_t srcArrayElement;
	VkDescriptorSet dstSet;
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;

S_copy_descriptor_set(){}

S_copy_descriptor_set(
	VkDescriptorSet srcSet_,
	uint32_t srcBinding_,
	uint32_t srcArrayElement_,
	VkDescriptorSet dstSet_,
	uint32_t dstBinding_,
	uint32_t dstArrayElement_,
	uint32_t descriptorCount_)
	:srcSet(srcSet_)
	,srcBinding(srcBinding_)
	,srcArrayElement(srcArrayElement_)
	,dstSet(dstSet_)
	,dstBinding(dstBinding_)
	,dstArrayElement(dstArrayElement_)
	,descriptorCount(descriptorCount_)
{
}

S_copy_descriptor_set( VkCopyDescriptorSet const & rhs )
	{	memcpy( this, &rhs, sizeof( S_copy_descriptor_set ) );	}
S_copy_descriptor_set& operator=( VkCopyDescriptorSet const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_copy_descriptor_set ) ); return *this;	}
operator VkCopyDescriptorSet const&() const 
	{	return *reinterpret_cast<const VkCopyDescriptorSet*>(this);	}
operator VkCopyDescriptorSet &() 
	{	return *reinterpret_cast<VkCopyDescriptorSet*>(this);	}
};
static_assert(
	sizeof(S_copy_descriptor_set) == sizeof(VkCopyDescriptorSet),
	"struct and wrapper have different size!");

/*	VkDedicatedAllocationBufferCreateInfoNV
ex to: VkBufferCreateInfo
*/
struct		S_dedicated_allocation_buffer_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkBool32 dedicatedAllocation;

S_dedicated_allocation_buffer_create_info_NV(){}

S_dedicated_allocation_buffer_create_info_NV(
	VkBool32 dedicatedAllocation_)
	:dedicatedAllocation(dedicatedAllocation_)
{
}

S_dedicated_allocation_buffer_create_info_NV( VkDedicatedAllocationBufferCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_dedicated_allocation_buffer_create_info_NV ) );	}
S_dedicated_allocation_buffer_create_info_NV& operator=( VkDedicatedAllocationBufferCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_dedicated_allocation_buffer_create_info_NV ) ); return *this;	}
operator VkDedicatedAllocationBufferCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkDedicatedAllocationBufferCreateInfoNV*>(this);	}
operator VkDedicatedAllocationBufferCreateInfoNV &() 
	{	return *reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV*>(this);	}

friend S_buffer_create_info;
};
static_assert(
	sizeof(S_dedicated_allocation_buffer_create_info_NV) == sizeof(VkDedicatedAllocationBufferCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkExternalMemoryBufferCreateInfo
ex to: VkBufferCreateInfo
*/
struct		S_external_memory_buffer_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type handleTypes;

S_external_memory_buffer_create_info(){}

S_external_memory_buffer_create_info(
	F_external_memory_handle_type handleTypes_)
	:handleTypes(handleTypes_)
{
}

S_external_memory_buffer_create_info( VkExternalMemoryBufferCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_memory_buffer_create_info ) );	}
S_external_memory_buffer_create_info& operator=( VkExternalMemoryBufferCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_memory_buffer_create_info ) ); return *this;	}
operator VkExternalMemoryBufferCreateInfo const&() const 
	{	return *reinterpret_cast<const VkExternalMemoryBufferCreateInfo*>(this);	}
operator VkExternalMemoryBufferCreateInfo &() 
	{	return *reinterpret_cast<VkExternalMemoryBufferCreateInfo*>(this);	}

friend S_buffer_create_info;
};
static_assert(
	sizeof(S_external_memory_buffer_create_info) == sizeof(VkExternalMemoryBufferCreateInfo),
	"struct and wrapper have different size!");

/*	VkBufferCreateInfo
ex:
	VkDedicatedAllocationBufferCreateInfoNV
	VkExternalMemoryBufferCreateInfo
*/
struct		S_buffer_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_buffer_create flags;
	VkDeviceSize size;
	F_buffer_usage usage;
	E_sharing_mode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t * pQueueFamilyIndices;

S_buffer_create_info(){}

S_buffer_create_info(
	F_buffer_create flags_,
	VkDeviceSize size_,
	F_buffer_usage usage_,
	E_sharing_mode sharingMode_,
	uint32_t queueFamilyIndexCount_,
	const uint32_t * pQueueFamilyIndices_)
	:flags(flags_)
	,size(size_)
	,usage(usage_)
	,sharingMode(sharingMode_)
	,queueFamilyIndexCount(queueFamilyIndexCount_)
	,pQueueFamilyIndices(pQueueFamilyIndices_)
{
}

S_buffer_create_info( VkBufferCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_buffer_create_info ) );	}
S_buffer_create_info& operator=( VkBufferCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_buffer_create_info ) ); return *this;	}
operator VkBufferCreateInfo const&() const 
	{	return *reinterpret_cast<const VkBufferCreateInfo*>(this);	}
operator VkBufferCreateInfo &() 
	{	return *reinterpret_cast<VkBufferCreateInfo*>(this);	}

S_buffer_create_info& n_dedicated_allocation_buffer_create_info_NV(S_dedicated_allocation_buffer_create_info_NV const& next_);
S_buffer_create_info& n_external_memory_buffer_create_info(S_external_memory_buffer_create_info const& next_);
};
static_assert(
	sizeof(S_buffer_create_info) == sizeof(VkBufferCreateInfo),
	"struct and wrapper have different size!");

struct N_buffer_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_buffer_create_info& n_dedicated_allocation_buffer_create_info_NV(S_dedicated_allocation_buffer_create_info_NV const& next_);
N_buffer_create_info& n_external_memory_buffer_create_info(S_external_memory_buffer_create_info const& next_);
};

/*	VkBufferViewCreateInfo
*/
struct		S_buffer_view_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkBufferViewCreateFlags flags;
	VkBuffer buffer;
	E_format format;
	VkDeviceSize offset;
	VkDeviceSize range;

S_buffer_view_create_info(){}

S_buffer_view_create_info(
	VkBufferViewCreateFlags flags_,
	VkBuffer buffer_,
	E_format format_,
	VkDeviceSize offset_,
	VkDeviceSize range_)
	:flags(flags_)
	,buffer(buffer_)
	,format(format_)
	,offset(offset_)
	,range(range_)
{
}

S_buffer_view_create_info( VkBufferViewCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_buffer_view_create_info ) );	}
S_buffer_view_create_info& operator=( VkBufferViewCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_buffer_view_create_info ) ); return *this;	}
operator VkBufferViewCreateInfo const&() const 
	{	return *reinterpret_cast<const VkBufferViewCreateInfo*>(this);	}
operator VkBufferViewCreateInfo &() 
	{	return *reinterpret_cast<VkBufferViewCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_buffer_view_create_info) == sizeof(VkBufferViewCreateInfo),
	"struct and wrapper have different size!");

/*	VkImageSubresource
*/
struct		S_image_subresource{
	F_image_aspect aspectMask;
	uint32_t mipLevel;
	uint32_t arrayLayer;

S_image_subresource(){}
};

/*	VkImageSubresourceLayers
*/
struct		S_image_subresource_layers{
	F_image_aspect aspectMask;
	uint32_t mipLevel;
	uint32_t baseArrayLayer;
	uint32_t layerCount;

S_image_subresource_layers(){}
};

/*	VkImageSubresourceRange
*/
struct		S_image_subresource_range{
	F_image_aspect aspectMask;
	uint32_t baseMipLevel;
	uint32_t levelCount;
	uint32_t baseArrayLayer;
	uint32_t layerCount;

S_image_subresource_range(){}
};

/*	VkMemoryBarrier
*/
struct		S_memory_barrier{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
	 void * pNext = nullptr;
public:
	F_access srcAccessMask;
	F_access dstAccessMask;

S_memory_barrier(){}

S_memory_barrier(
	F_access srcAccessMask_,
	F_access dstAccessMask_)
	:srcAccessMask(srcAccessMask_)
	,dstAccessMask(dstAccessMask_)
{
}

S_memory_barrier( VkMemoryBarrier const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_barrier ) );	}
S_memory_barrier& operator=( VkMemoryBarrier const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_barrier ) ); return *this;	}
operator VkMemoryBarrier const&() const 
	{	return *reinterpret_cast<const VkMemoryBarrier*>(this);	}
operator VkMemoryBarrier &() 
	{	return *reinterpret_cast<VkMemoryBarrier*>(this);	}
};
static_assert(
	sizeof(S_memory_barrier) == sizeof(VkMemoryBarrier),
	"struct and wrapper have different size!");

/*	VkBufferMemoryBarrier
*/
struct		S_buffer_memory_barrier{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
	 void * pNext = nullptr;
public:
	F_access srcAccessMask;
	F_access dstAccessMask;
	uint32_t srcQueueFamilyIndex;
	uint32_t dstQueueFamilyIndex;
	VkBuffer buffer;
	VkDeviceSize offset;
	VkDeviceSize size;

S_buffer_memory_barrier(){}

S_buffer_memory_barrier(
	F_access srcAccessMask_,
	F_access dstAccessMask_,
	uint32_t srcQueueFamilyIndex_,
	uint32_t dstQueueFamilyIndex_,
	VkBuffer buffer_,
	VkDeviceSize offset_,
	VkDeviceSize size_)
	:srcAccessMask(srcAccessMask_)
	,dstAccessMask(dstAccessMask_)
	,srcQueueFamilyIndex(srcQueueFamilyIndex_)
	,dstQueueFamilyIndex(dstQueueFamilyIndex_)
	,buffer(buffer_)
	,offset(offset_)
	,size(size_)
{
}

S_buffer_memory_barrier( VkBufferMemoryBarrier const & rhs )
	{	memcpy( this, &rhs, sizeof( S_buffer_memory_barrier ) );	}
S_buffer_memory_barrier& operator=( VkBufferMemoryBarrier const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_buffer_memory_barrier ) ); return *this;	}
operator VkBufferMemoryBarrier const&() const 
	{	return *reinterpret_cast<const VkBufferMemoryBarrier*>(this);	}
operator VkBufferMemoryBarrier &() 
	{	return *reinterpret_cast<VkBufferMemoryBarrier*>(this);	}
};
static_assert(
	sizeof(S_buffer_memory_barrier) == sizeof(VkBufferMemoryBarrier),
	"struct and wrapper have different size!");

/*	VkSampleLocationEXT
*/
struct		S_sample_location_EXT{
	float x;
	float y;

S_sample_location_EXT(){}
};

/*	VkSampleLocationsInfoEXT
ex to: VkImageMemoryBarrier
*/
struct		S_sample_locations_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT;
	 void * pNext = nullptr;
public:
	F_sample_count sampleLocationsPerPixel;
	S_extent_2d sampleLocationGridSize;
	uint32_t sampleLocationsCount;
	const S_sample_location_EXT * pSampleLocations;

S_sample_locations_info_EXT(){}

S_sample_locations_info_EXT(
	F_sample_count sampleLocationsPerPixel_,
	S_extent_2d sampleLocationGridSize_,
	uint32_t sampleLocationsCount_,
	const S_sample_location_EXT * pSampleLocations_)
	:sampleLocationsPerPixel(sampleLocationsPerPixel_)
	,sampleLocationGridSize(sampleLocationGridSize_)
	,sampleLocationsCount(sampleLocationsCount_)
	,pSampleLocations(pSampleLocations_)
{
}

S_sample_locations_info_EXT( VkSampleLocationsInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sample_locations_info_EXT ) );	}
S_sample_locations_info_EXT& operator=( VkSampleLocationsInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sample_locations_info_EXT ) ); return *this;	}
operator VkSampleLocationsInfoEXT const&() const 
	{	return *reinterpret_cast<const VkSampleLocationsInfoEXT*>(this);	}
operator VkSampleLocationsInfoEXT &() 
	{	return *reinterpret_cast<VkSampleLocationsInfoEXT*>(this);	}

friend S_image_memory_barrier;
};
static_assert(
	sizeof(S_sample_locations_info_EXT) == sizeof(VkSampleLocationsInfoEXT),
	"struct and wrapper have different size!");

/*	VkImageMemoryBarrier
ex:
	VkSampleLocationsInfoEXT
*/
struct		S_image_memory_barrier{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
	 void * pNext = nullptr;
public:
	F_access srcAccessMask;
	F_access dstAccessMask;
	E_image_layout oldLayout;
	E_image_layout newLayout;
	uint32_t srcQueueFamilyIndex;
	uint32_t dstQueueFamilyIndex;
	VkImage image;
	S_image_subresource_range subresourceRange;

S_image_memory_barrier(){}

S_image_memory_barrier(
	F_access srcAccessMask_,
	F_access dstAccessMask_,
	E_image_layout oldLayout_,
	E_image_layout newLayout_,
	uint32_t srcQueueFamilyIndex_,
	uint32_t dstQueueFamilyIndex_,
	VkImage image_,
	S_image_subresource_range subresourceRange_)
	:srcAccessMask(srcAccessMask_)
	,dstAccessMask(dstAccessMask_)
	,oldLayout(oldLayout_)
	,newLayout(newLayout_)
	,srcQueueFamilyIndex(srcQueueFamilyIndex_)
	,dstQueueFamilyIndex(dstQueueFamilyIndex_)
	,image(image_)
	,subresourceRange(subresourceRange_)
{
}

S_image_memory_barrier( VkImageMemoryBarrier const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_memory_barrier ) );	}
S_image_memory_barrier& operator=( VkImageMemoryBarrier const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_memory_barrier ) ); return *this;	}
operator VkImageMemoryBarrier const&() const 
	{	return *reinterpret_cast<const VkImageMemoryBarrier*>(this);	}
operator VkImageMemoryBarrier &() 
	{	return *reinterpret_cast<VkImageMemoryBarrier*>(this);	}

S_image_memory_barrier& n_sample_locations_info_EXT(S_sample_locations_info_EXT const& next_);
};
static_assert(
	sizeof(S_image_memory_barrier) == sizeof(VkImageMemoryBarrier),
	"struct and wrapper have different size!");

struct N_image_memory_barrier{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_image_memory_barrier& n_sample_locations_info_EXT(S_sample_locations_info_EXT const& next_);
};

/*	VkDedicatedAllocationImageCreateInfoNV
ex to: VkImageCreateInfo
*/
struct		S_dedicated_allocation_image_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkBool32 dedicatedAllocation;

S_dedicated_allocation_image_create_info_NV(){}

S_dedicated_allocation_image_create_info_NV(
	VkBool32 dedicatedAllocation_)
	:dedicatedAllocation(dedicatedAllocation_)
{
}

S_dedicated_allocation_image_create_info_NV( VkDedicatedAllocationImageCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_dedicated_allocation_image_create_info_NV ) );	}
S_dedicated_allocation_image_create_info_NV& operator=( VkDedicatedAllocationImageCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_dedicated_allocation_image_create_info_NV ) ); return *this;	}
operator VkDedicatedAllocationImageCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV*>(this);	}
operator VkDedicatedAllocationImageCreateInfoNV &() 
	{	return *reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV*>(this);	}

friend S_image_create_info;
};
static_assert(
	sizeof(S_dedicated_allocation_image_create_info_NV) == sizeof(VkDedicatedAllocationImageCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkExternalMemoryImageCreateInfoNV
ex to: VkImageCreateInfo
*/
struct		S_external_memory_image_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type_NV handleTypes;

S_external_memory_image_create_info_NV(){}

S_external_memory_image_create_info_NV(
	F_external_memory_handle_type_NV handleTypes_)
	:handleTypes(handleTypes_)
{
}

S_external_memory_image_create_info_NV( VkExternalMemoryImageCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_memory_image_create_info_NV ) );	}
S_external_memory_image_create_info_NV& operator=( VkExternalMemoryImageCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_memory_image_create_info_NV ) ); return *this;	}
operator VkExternalMemoryImageCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkExternalMemoryImageCreateInfoNV*>(this);	}
operator VkExternalMemoryImageCreateInfoNV &() 
	{	return *reinterpret_cast<VkExternalMemoryImageCreateInfoNV*>(this);	}

friend S_image_create_info;
};
static_assert(
	sizeof(S_external_memory_image_create_info_NV) == sizeof(VkExternalMemoryImageCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkExternalMemoryImageCreateInfo
ex to: VkImageCreateInfo
*/
struct		S_external_memory_image_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type handleTypes;

S_external_memory_image_create_info(){}

S_external_memory_image_create_info(
	F_external_memory_handle_type handleTypes_)
	:handleTypes(handleTypes_)
{
}

S_external_memory_image_create_info( VkExternalMemoryImageCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_memory_image_create_info ) );	}
S_external_memory_image_create_info& operator=( VkExternalMemoryImageCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_memory_image_create_info ) ); return *this;	}
operator VkExternalMemoryImageCreateInfo const&() const 
	{	return *reinterpret_cast<const VkExternalMemoryImageCreateInfo*>(this);	}
operator VkExternalMemoryImageCreateInfo &() 
	{	return *reinterpret_cast<VkExternalMemoryImageCreateInfo*>(this);	}

friend S_image_create_info;
};
static_assert(
	sizeof(S_external_memory_image_create_info) == sizeof(VkExternalMemoryImageCreateInfo),
	"struct and wrapper have different size!");

/*	VkImageSwapchainCreateInfoKHR
ex to: VkImageCreateInfo
*/
struct		S_image_swapchain_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkSwapchainKHR swapchain;

S_image_swapchain_create_info_KHR(){}

S_image_swapchain_create_info_KHR(
	VkSwapchainKHR swapchain_)
	:swapchain(swapchain_)
{
}

S_image_swapchain_create_info_KHR( VkImageSwapchainCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_swapchain_create_info_KHR ) );	}
S_image_swapchain_create_info_KHR& operator=( VkImageSwapchainCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_swapchain_create_info_KHR ) ); return *this;	}
operator VkImageSwapchainCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImageSwapchainCreateInfoKHR*>(this);	}
operator VkImageSwapchainCreateInfoKHR &() 
	{	return *reinterpret_cast<VkImageSwapchainCreateInfoKHR*>(this);	}

friend S_image_create_info;
};
static_assert(
	sizeof(S_image_swapchain_create_info_KHR) == sizeof(VkImageSwapchainCreateInfoKHR),
	"struct and wrapper have different size!");

/*	VkImageFormatListCreateInfoKHR
ex to: VkImageCreateInfo
*/
struct		S_image_format_list_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	uint32_t viewFormatCount;
	const E_format * pViewFormats;

S_image_format_list_create_info_KHR(){}

S_image_format_list_create_info_KHR(
	uint32_t viewFormatCount_,
	const E_format * pViewFormats_)
	:viewFormatCount(viewFormatCount_)
	,pViewFormats(pViewFormats_)
{
}

S_image_format_list_create_info_KHR( VkImageFormatListCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_format_list_create_info_KHR ) );	}
S_image_format_list_create_info_KHR& operator=( VkImageFormatListCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_format_list_create_info_KHR ) ); return *this;	}
operator VkImageFormatListCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImageFormatListCreateInfoKHR*>(this);	}
operator VkImageFormatListCreateInfoKHR &() 
	{	return *reinterpret_cast<VkImageFormatListCreateInfoKHR*>(this);	}

friend S_image_create_info;
};
static_assert(
	sizeof(S_image_format_list_create_info_KHR) == sizeof(VkImageFormatListCreateInfoKHR),
	"struct and wrapper have different size!");

/*	VkExternalFormatANDROID
ex to: VkImageCreateInfo,VkSamplerYcbcrConversionCreateInfo
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_external_format_ANDROID{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID;
	void * pNext = nullptr;
public:
	uint64_t externalFormat;

S_external_format_ANDROID(){}

S_external_format_ANDROID(
	uint64_t externalFormat_)
	:externalFormat(externalFormat_)
{
}

S_external_format_ANDROID( VkExternalFormatANDROID const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_format_ANDROID ) );	}
S_external_format_ANDROID& operator=( VkExternalFormatANDROID const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_format_ANDROID ) ); return *this;	}
operator VkExternalFormatANDROID const&() const 
	{	return *reinterpret_cast<const VkExternalFormatANDROID*>(this);	}
operator VkExternalFormatANDROID &() 
	{	return *reinterpret_cast<VkExternalFormatANDROID*>(this);	}

friend S_image_create_info;
friend S_sampler_ycbcr_conversion_create_info;
};
static_assert(
	sizeof(S_external_format_ANDROID) == sizeof(VkExternalFormatANDROID),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkImageDrmFormatModifierListCreateInfoEXT
ex to: VkImageCreateInfo
*/
#ifdef LAKA_UNKNOW
struct		S_image_drm_format_modifier_list_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint32_t drmFormatModifierCount;
	const uint64_t * pDrmFormatModifiers;

S_image_drm_format_modifier_list_create_info_EXT(){}

S_image_drm_format_modifier_list_create_info_EXT(
	uint32_t drmFormatModifierCount_,
	const uint64_t * pDrmFormatModifiers_)
	:drmFormatModifierCount(drmFormatModifierCount_)
	,pDrmFormatModifiers(pDrmFormatModifiers_)
{
}

S_image_drm_format_modifier_list_create_info_EXT( VkImageDrmFormatModifierListCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_drm_format_modifier_list_create_info_EXT ) );	}
S_image_drm_format_modifier_list_create_info_EXT& operator=( VkImageDrmFormatModifierListCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_drm_format_modifier_list_create_info_EXT ) ); return *this;	}
operator VkImageDrmFormatModifierListCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkImageDrmFormatModifierListCreateInfoEXT*>(this);	}
operator VkImageDrmFormatModifierListCreateInfoEXT &() 
	{	return *reinterpret_cast<VkImageDrmFormatModifierListCreateInfoEXT*>(this);	}

friend S_image_create_info;
};
static_assert(
	sizeof(S_image_drm_format_modifier_list_create_info_EXT) == sizeof(VkImageDrmFormatModifierListCreateInfoEXT),
	"struct and wrapper have different size!");
#endif //LAKA_UNKNOW

/*	VkSubresourceLayout
(returnedonly)
*/
struct		S_subresource_layout{
	VkDeviceSize offset;
	VkDeviceSize size;
	VkDeviceSize rowPitch;
	VkDeviceSize arrayPitch;
	VkDeviceSize depthPitch;

S_subresource_layout(){}
};

/*	VkImageDrmFormatModifierExplicitCreateInfoEXT
ex to: VkImageCreateInfo
*/
#ifdef LAKA_UNKNOW
struct		S_image_drm_format_modifier_explicit_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_EXCPLICIT_DRM_FORMAT_MODIFIER_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint64_t drmFormatModifier;
	uint32_t drmFormatModifierPlaneCount;
	const S_subresource_layout * pPlaneLayouts;

S_image_drm_format_modifier_explicit_create_info_EXT(){}

S_image_drm_format_modifier_explicit_create_info_EXT(
	uint64_t drmFormatModifier_,
	uint32_t drmFormatModifierPlaneCount_,
	const S_subresource_layout * pPlaneLayouts_)
	:drmFormatModifier(drmFormatModifier_)
	,drmFormatModifierPlaneCount(drmFormatModifierPlaneCount_)
	,pPlaneLayouts(pPlaneLayouts_)
{
}

S_image_drm_format_modifier_explicit_create_info_EXT( VkImageDrmFormatModifierExplicitCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_drm_format_modifier_explicit_create_info_EXT ) );	}
S_image_drm_format_modifier_explicit_create_info_EXT& operator=( VkImageDrmFormatModifierExplicitCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_drm_format_modifier_explicit_create_info_EXT ) ); return *this;	}
operator VkImageDrmFormatModifierExplicitCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkImageDrmFormatModifierExplicitCreateInfoEXT*>(this);	}
operator VkImageDrmFormatModifierExplicitCreateInfoEXT &() 
	{	return *reinterpret_cast<VkImageDrmFormatModifierExplicitCreateInfoEXT*>(this);	}

friend S_image_create_info;
};
static_assert(
	sizeof(S_image_drm_format_modifier_explicit_create_info_EXT) == sizeof(VkImageDrmFormatModifierExplicitCreateInfoEXT),
	"struct and wrapper have different size!");
#endif //LAKA_UNKNOW

/*	VkImageCreateInfo
ex:
	VkDedicatedAllocationImageCreateInfoNV
	VkExternalMemoryImageCreateInfoNV
	VkExternalMemoryImageCreateInfo
	VkImageSwapchainCreateInfoKHR
	VkImageFormatListCreateInfoKHR
	VkExternalFormatANDROID
	VkImageDrmFormatModifierListCreateInfoEXT
	VkImageDrmFormatModifierExplicitCreateInfoEXT
*/
struct		S_image_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_image_create flags;
	E_image_type imageType;
	E_format format;
	S_extent_3d extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	F_sample_count samples;
	E_image_tiling tiling;
	F_image_usage usage;
	E_sharing_mode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t * pQueueFamilyIndices;
	E_image_layout initialLayout;

S_image_create_info(){}

S_image_create_info(
	F_image_create flags_,
	E_image_type imageType_,
	E_format format_,
	S_extent_3d extent_,
	uint32_t mipLevels_,
	uint32_t arrayLayers_,
	F_sample_count samples_,
	E_image_tiling tiling_,
	F_image_usage usage_,
	E_sharing_mode sharingMode_,
	uint32_t queueFamilyIndexCount_,
	const uint32_t * pQueueFamilyIndices_,
	E_image_layout initialLayout_)
	:flags(flags_)
	,imageType(imageType_)
	,format(format_)
	,extent(extent_)
	,mipLevels(mipLevels_)
	,arrayLayers(arrayLayers_)
	,samples(samples_)
	,tiling(tiling_)
	,usage(usage_)
	,sharingMode(sharingMode_)
	,queueFamilyIndexCount(queueFamilyIndexCount_)
	,pQueueFamilyIndices(pQueueFamilyIndices_)
	,initialLayout(initialLayout_)
{
}

S_image_create_info( VkImageCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_create_info ) );	}
S_image_create_info& operator=( VkImageCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_create_info ) ); return *this;	}
operator VkImageCreateInfo const&() const 
	{	return *reinterpret_cast<const VkImageCreateInfo*>(this);	}
operator VkImageCreateInfo &() 
	{	return *reinterpret_cast<VkImageCreateInfo*>(this);	}

S_image_create_info& n_dedicated_allocation_image_create_info_NV(S_dedicated_allocation_image_create_info_NV const& next_);
S_image_create_info& n_external_memory_image_create_info_NV(S_external_memory_image_create_info_NV const& next_);
S_image_create_info& n_external_memory_image_create_info(S_external_memory_image_create_info const& next_);
S_image_create_info& n_image_swapchain_create_info_KHR(S_image_swapchain_create_info_KHR const& next_);
S_image_create_info& n_image_format_list_create_info_KHR(S_image_format_list_create_info_KHR const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_image_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
#ifdef LAKA_UNKNOW
S_image_create_info& n_image_drm_format_modifier_list_create_info_EXT(S_image_drm_format_modifier_list_create_info_EXT const& next_);
#endif
#ifdef LAKA_UNKNOW
S_image_create_info& n_image_drm_format_modifier_explicit_create_info_EXT(S_image_drm_format_modifier_explicit_create_info_EXT const& next_);
#endif
};
static_assert(
	sizeof(S_image_create_info) == sizeof(VkImageCreateInfo),
	"struct and wrapper have different size!");

struct N_image_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_image_create_info& n_dedicated_allocation_image_create_info_NV(S_dedicated_allocation_image_create_info_NV const& next_);
N_image_create_info& n_external_memory_image_create_info_NV(S_external_memory_image_create_info_NV const& next_);
N_image_create_info& n_external_memory_image_create_info(S_external_memory_image_create_info const& next_);
N_image_create_info& n_image_swapchain_create_info_KHR(S_image_swapchain_create_info_KHR const& next_);
N_image_create_info& n_image_format_list_create_info_KHR(S_image_format_list_create_info_KHR const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_image_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
#ifdef LAKA_UNKNOW
N_image_create_info& n_image_drm_format_modifier_list_create_info_EXT(S_image_drm_format_modifier_list_create_info_EXT const& next_);
#endif
#ifdef LAKA_UNKNOW
N_image_create_info& n_image_drm_format_modifier_explicit_create_info_EXT(S_image_drm_format_modifier_explicit_create_info_EXT const& next_);
#endif
};

/*	VkImageViewUsageCreateInfo
ex to: VkImageViewCreateInfo
*/
struct		S_image_view_usage_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_image_usage usage;

S_image_view_usage_create_info(){}

S_image_view_usage_create_info(
	F_image_usage usage_)
	:usage(usage_)
{
}

S_image_view_usage_create_info( VkImageViewUsageCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_view_usage_create_info ) );	}
S_image_view_usage_create_info& operator=( VkImageViewUsageCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_view_usage_create_info ) ); return *this;	}
operator VkImageViewUsageCreateInfo const&() const 
	{	return *reinterpret_cast<const VkImageViewUsageCreateInfo*>(this);	}
operator VkImageViewUsageCreateInfo &() 
	{	return *reinterpret_cast<VkImageViewUsageCreateInfo*>(this);	}

friend S_image_view_create_info;
};
static_assert(
	sizeof(S_image_view_usage_create_info) == sizeof(VkImageViewUsageCreateInfo),
	"struct and wrapper have different size!");

/*	VkSamplerYcbcrConversionInfo
ex to: VkSamplerCreateInfo,VkImageViewCreateInfo
*/
struct		S_sampler_ycbcr_conversion_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO;
	 void * pNext = nullptr;
public:
	VkSamplerYcbcrConversion conversion;

S_sampler_ycbcr_conversion_info(){}

S_sampler_ycbcr_conversion_info(
	VkSamplerYcbcrConversion conversion_)
	:conversion(conversion_)
{
}

S_sampler_ycbcr_conversion_info( VkSamplerYcbcrConversionInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sampler_ycbcr_conversion_info ) );	}
S_sampler_ycbcr_conversion_info& operator=( VkSamplerYcbcrConversionInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sampler_ycbcr_conversion_info ) ); return *this;	}
operator VkSamplerYcbcrConversionInfo const&() const 
	{	return *reinterpret_cast<const VkSamplerYcbcrConversionInfo*>(this);	}
operator VkSamplerYcbcrConversionInfo &() 
	{	return *reinterpret_cast<VkSamplerYcbcrConversionInfo*>(this);	}

friend S_sampler_create_info;
friend S_image_view_create_info;
};
static_assert(
	sizeof(S_sampler_ycbcr_conversion_info) == sizeof(VkSamplerYcbcrConversionInfo),
	"struct and wrapper have different size!");

/*	VkImageViewASTCDecodeModeEXT
ex to: VkImageViewCreateInfo
*/
struct		S_image_view_astc_decode_mode_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;
	 void * pNext = nullptr;
public:
	E_format decodeMode;

S_image_view_astc_decode_mode_EXT(){}

S_image_view_astc_decode_mode_EXT(
	E_format decodeMode_)
	:decodeMode(decodeMode_)
{
}

S_image_view_astc_decode_mode_EXT( VkImageViewASTCDecodeModeEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_view_astc_decode_mode_EXT ) );	}
S_image_view_astc_decode_mode_EXT& operator=( VkImageViewASTCDecodeModeEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_view_astc_decode_mode_EXT ) ); return *this;	}
operator VkImageViewASTCDecodeModeEXT const&() const 
	{	return *reinterpret_cast<const VkImageViewASTCDecodeModeEXT*>(this);	}
operator VkImageViewASTCDecodeModeEXT &() 
	{	return *reinterpret_cast<VkImageViewASTCDecodeModeEXT*>(this);	}

friend S_image_view_create_info;
};
static_assert(
	sizeof(S_image_view_astc_decode_mode_EXT) == sizeof(VkImageViewASTCDecodeModeEXT),
	"struct and wrapper have different size!");

/*	VkImageViewCreateInfo
ex:
	VkImageViewUsageCreateInfo
	VkSamplerYcbcrConversionInfo
	VkImageViewASTCDecodeModeEXT
*/
struct		S_image_view_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkImageViewCreateFlags flags;
	VkImage image;
	E_image_view_type viewType;
	E_format format;
	S_component_mapping components;
	S_image_subresource_range subresourceRange;

S_image_view_create_info(){}

S_image_view_create_info(
	VkImageViewCreateFlags flags_,
	VkImage image_,
	E_image_view_type viewType_,
	E_format format_,
	S_component_mapping components_,
	S_image_subresource_range subresourceRange_)
	:flags(flags_)
	,image(image_)
	,viewType(viewType_)
	,format(format_)
	,components(components_)
	,subresourceRange(subresourceRange_)
{
}

S_image_view_create_info( VkImageViewCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_view_create_info ) );	}
S_image_view_create_info& operator=( VkImageViewCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_view_create_info ) ); return *this;	}
operator VkImageViewCreateInfo const&() const 
	{	return *reinterpret_cast<const VkImageViewCreateInfo*>(this);	}
operator VkImageViewCreateInfo &() 
	{	return *reinterpret_cast<VkImageViewCreateInfo*>(this);	}

S_image_view_create_info& n_image_view_usage_create_info(S_image_view_usage_create_info const& next_);
S_image_view_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
S_image_view_create_info& n_image_view_astc_decode_mode_EXT(S_image_view_astc_decode_mode_EXT const& next_);
};
static_assert(
	sizeof(S_image_view_create_info) == sizeof(VkImageViewCreateInfo),
	"struct and wrapper have different size!");

struct N_image_view_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_image_view_create_info& n_image_view_usage_create_info(S_image_view_usage_create_info const& next_);
N_image_view_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
N_image_view_create_info& n_image_view_astc_decode_mode_EXT(S_image_view_astc_decode_mode_EXT const& next_);
};

/*	VkBufferCopy
*/
struct		S_buffer_copy{
	VkDeviceSize srcOffset;
	VkDeviceSize dstOffset;
	VkDeviceSize size;

S_buffer_copy(){}
};

/*	VkSparseMemoryBind
*/
struct		S_sparse_memory_bind{
	VkDeviceSize resourceOffset;
	VkDeviceSize size;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	F_sparse_memory_bind flags;

S_sparse_memory_bind(){}
};

/*	VkSparseImageMemoryBind
*/
struct		S_sparse_image_memory_bind{
	S_image_subresource subresource;
	S_offset_3d offset;
	S_extent_3d extent;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	F_sparse_memory_bind flags;

S_sparse_image_memory_bind(){}
};

/*	VkSparseBufferMemoryBindInfo
*/
struct		S_sparse_buffer_memory_bind_info{
	VkBuffer buffer;
	uint32_t bindCount;
	const S_sparse_memory_bind * pBinds;

S_sparse_buffer_memory_bind_info(){}
};

/*	VkSparseImageOpaqueMemoryBindInfo
*/
struct		S_sparse_image_opaque_memory_bind_info{
	VkImage image;
	uint32_t bindCount;
	const S_sparse_memory_bind * pBinds;

S_sparse_image_opaque_memory_bind_info(){}
};

/*	VkSparseImageMemoryBindInfo
*/
struct		S_sparse_image_memory_bind_info{
	VkImage image;
	uint32_t bindCount;
	const S_sparse_image_memory_bind * pBinds;

S_sparse_image_memory_bind_info(){}
};

/*	VkDeviceGroupBindSparseInfo
ex to: VkBindSparseInfo
*/
struct		S_device_group_bind_sparse_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;
	 void * pNext = nullptr;
public:
	uint32_t resourceDeviceIndex;
	uint32_t memoryDeviceIndex;

S_device_group_bind_sparse_info(){}

S_device_group_bind_sparse_info(
	uint32_t resourceDeviceIndex_,
	uint32_t memoryDeviceIndex_)
	:resourceDeviceIndex(resourceDeviceIndex_)
	,memoryDeviceIndex(memoryDeviceIndex_)
{
}

S_device_group_bind_sparse_info( VkDeviceGroupBindSparseInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_bind_sparse_info ) );	}
S_device_group_bind_sparse_info& operator=( VkDeviceGroupBindSparseInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_bind_sparse_info ) ); return *this;	}
operator VkDeviceGroupBindSparseInfo const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupBindSparseInfo*>(this);	}
operator VkDeviceGroupBindSparseInfo &() 
	{	return *reinterpret_cast<VkDeviceGroupBindSparseInfo*>(this);	}

friend S_bind_sparse_info;
};
static_assert(
	sizeof(S_device_group_bind_sparse_info) == sizeof(VkDeviceGroupBindSparseInfo),
	"struct and wrapper have different size!");

/*	VkBindSparseInfo
ex:
	VkDeviceGroupBindSparseInfo
*/
struct		S_bind_sparse_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
	 void * pNext = nullptr;
public:
	uint32_t waitSemaphoreCount;
	const VkSemaphore * pWaitSemaphores;
	uint32_t bufferBindCount;
	const S_sparse_buffer_memory_bind_info * pBufferBinds;
	uint32_t imageOpaqueBindCount;
	const S_sparse_image_opaque_memory_bind_info * pImageOpaqueBinds;
	uint32_t imageBindCount;
	const S_sparse_image_memory_bind_info * pImageBinds;
	uint32_t signalSemaphoreCount;
	const VkSemaphore * pSignalSemaphores;

S_bind_sparse_info(){}

S_bind_sparse_info(
	uint32_t waitSemaphoreCount_,
	const VkSemaphore * pWaitSemaphores_,
	uint32_t bufferBindCount_,
	const S_sparse_buffer_memory_bind_info * pBufferBinds_,
	uint32_t imageOpaqueBindCount_,
	const S_sparse_image_opaque_memory_bind_info * pImageOpaqueBinds_,
	uint32_t imageBindCount_,
	const S_sparse_image_memory_bind_info * pImageBinds_,
	uint32_t signalSemaphoreCount_,
	const VkSemaphore * pSignalSemaphores_)
	:waitSemaphoreCount(waitSemaphoreCount_)
	,pWaitSemaphores(pWaitSemaphores_)
	,bufferBindCount(bufferBindCount_)
	,pBufferBinds(pBufferBinds_)
	,imageOpaqueBindCount(imageOpaqueBindCount_)
	,pImageOpaqueBinds(pImageOpaqueBinds_)
	,imageBindCount(imageBindCount_)
	,pImageBinds(pImageBinds_)
	,signalSemaphoreCount(signalSemaphoreCount_)
	,pSignalSemaphores(pSignalSemaphores_)
{
}

S_bind_sparse_info( VkBindSparseInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_sparse_info ) );	}
S_bind_sparse_info& operator=( VkBindSparseInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_sparse_info ) ); return *this;	}
operator VkBindSparseInfo const&() const 
	{	return *reinterpret_cast<const VkBindSparseInfo*>(this);	}
operator VkBindSparseInfo &() 
	{	return *reinterpret_cast<VkBindSparseInfo*>(this);	}

S_bind_sparse_info& n_device_group_bind_sparse_info(S_device_group_bind_sparse_info const& next_);
};
static_assert(
	sizeof(S_bind_sparse_info) == sizeof(VkBindSparseInfo),
	"struct and wrapper have different size!");

struct N_bind_sparse_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_bind_sparse_info& n_device_group_bind_sparse_info(S_device_group_bind_sparse_info const& next_);
};

/*	VkImageCopy
*/
struct		S_image_copy{
	S_image_subresource_layers srcSubresource;
	S_offset_3d srcOffset;
	S_image_subresource_layers dstSubresource;
	S_offset_3d dstOffset;
	S_extent_3d extent;

S_image_copy(){}
};

/*	VkImageBlit
*/
struct		S_image_blit{
	S_image_subresource_layers srcSubresource;
	S_offset_3d srcOffsets[2];
	S_image_subresource_layers dstSubresource;
	S_offset_3d dstOffsets[2];

S_image_blit(){}
};

/*	VkBufferImageCopy
*/
struct		S_buffer_image_copy{
	VkDeviceSize bufferOffset;
	uint32_t bufferRowLength;
	uint32_t bufferImageHeight;
	S_image_subresource_layers imageSubresource;
	S_offset_3d imageOffset;
	S_extent_3d imageExtent;

S_buffer_image_copy(){}
};

/*	VkImageResolve
*/
struct		S_image_resolve{
	S_image_subresource_layers srcSubresource;
	S_offset_3d srcOffset;
	S_image_subresource_layers dstSubresource;
	S_offset_3d dstOffset;
	S_extent_3d extent;

S_image_resolve(){}
};

/*	VkShaderModuleValidationCacheCreateInfoEXT
ex to: VkShaderModuleCreateInfo
*/
struct		S_shader_module_validation_cache_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkValidationCacheEXT validationCache;

S_shader_module_validation_cache_create_info_EXT(){}

S_shader_module_validation_cache_create_info_EXT(
	VkValidationCacheEXT validationCache_)
	:validationCache(validationCache_)
{
}

S_shader_module_validation_cache_create_info_EXT( VkShaderModuleValidationCacheCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_shader_module_validation_cache_create_info_EXT ) );	}
S_shader_module_validation_cache_create_info_EXT& operator=( VkShaderModuleValidationCacheCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_shader_module_validation_cache_create_info_EXT ) ); return *this;	}
operator VkShaderModuleValidationCacheCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT*>(this);	}
operator VkShaderModuleValidationCacheCreateInfoEXT &() 
	{	return *reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT*>(this);	}

friend S_shader_module_create_info;
};
static_assert(
	sizeof(S_shader_module_validation_cache_create_info_EXT) == sizeof(VkShaderModuleValidationCacheCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkShaderModuleCreateInfo
ex:
	VkShaderModuleValidationCacheCreateInfoEXT
*/
struct		S_shader_module_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkShaderModuleCreateFlags flags;
	size_t codeSize;
	const uint32_t * pCode;

S_shader_module_create_info(){}

S_shader_module_create_info(
	VkShaderModuleCreateFlags flags_,
	size_t codeSize_,
	const uint32_t * pCode_)
	:flags(flags_)
	,codeSize(codeSize_)
	,pCode(pCode_)
{
}

S_shader_module_create_info( VkShaderModuleCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_shader_module_create_info ) );	}
S_shader_module_create_info& operator=( VkShaderModuleCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_shader_module_create_info ) ); return *this;	}
operator VkShaderModuleCreateInfo const&() const 
	{	return *reinterpret_cast<const VkShaderModuleCreateInfo*>(this);	}
operator VkShaderModuleCreateInfo &() 
	{	return *reinterpret_cast<VkShaderModuleCreateInfo*>(this);	}

S_shader_module_create_info& n_shader_module_validation_cache_create_info_EXT(S_shader_module_validation_cache_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_shader_module_create_info) == sizeof(VkShaderModuleCreateInfo),
	"struct and wrapper have different size!");

struct N_shader_module_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_shader_module_create_info& n_shader_module_validation_cache_create_info_EXT(S_shader_module_validation_cache_create_info_EXT const& next_);
};

/*	VkDescriptorSetLayoutBinding
*/
struct		S_descriptor_set_layout_binding{
	uint32_t binding;
	E_descriptor_type descriptorType;
	uint32_t descriptorCount;
	F_shader_stage stageFlags;
	const VkSampler * pImmutableSamplers;

S_descriptor_set_layout_binding(){}
};

/*	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT
ex to: VkDescriptorSetLayoutCreateInfo
*/
struct		S_descriptor_set_layout_binding_flags_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint32_t bindingCount;
	const F_descriptor_binding_EXT * pBindingFlags;

S_descriptor_set_layout_binding_flags_create_info_EXT(){}

S_descriptor_set_layout_binding_flags_create_info_EXT(
	uint32_t bindingCount_,
	const F_descriptor_binding_EXT * pBindingFlags_)
	:bindingCount(bindingCount_)
	,pBindingFlags(pBindingFlags_)
{
}

S_descriptor_set_layout_binding_flags_create_info_EXT( VkDescriptorSetLayoutBindingFlagsCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_layout_binding_flags_create_info_EXT ) );	}
S_descriptor_set_layout_binding_flags_create_info_EXT& operator=( VkDescriptorSetLayoutBindingFlagsCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_layout_binding_flags_create_info_EXT ) ); return *this;	}
operator VkDescriptorSetLayoutBindingFlagsCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT*>(this);	}
operator VkDescriptorSetLayoutBindingFlagsCreateInfoEXT &() 
	{	return *reinterpret_cast<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT*>(this);	}

friend S_descriptor_set_layout_create_info;
};
static_assert(
	sizeof(S_descriptor_set_layout_binding_flags_create_info_EXT) == sizeof(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkDescriptorSetLayoutCreateInfo
ex:
	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT
*/
struct		S_descriptor_set_layout_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_descriptor_set_layout_create flags;
	uint32_t bindingCount;
	const S_descriptor_set_layout_binding * pBindings;

S_descriptor_set_layout_create_info(){}

S_descriptor_set_layout_create_info(
	F_descriptor_set_layout_create flags_,
	uint32_t bindingCount_,
	const S_descriptor_set_layout_binding * pBindings_)
	:flags(flags_)
	,bindingCount(bindingCount_)
	,pBindings(pBindings_)
{
}

S_descriptor_set_layout_create_info( VkDescriptorSetLayoutCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_layout_create_info ) );	}
S_descriptor_set_layout_create_info& operator=( VkDescriptorSetLayoutCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_layout_create_info ) ); return *this;	}
operator VkDescriptorSetLayoutCreateInfo const&() const 
	{	return *reinterpret_cast<const VkDescriptorSetLayoutCreateInfo*>(this);	}
operator VkDescriptorSetLayoutCreateInfo &() 
	{	return *reinterpret_cast<VkDescriptorSetLayoutCreateInfo*>(this);	}

S_descriptor_set_layout_create_info& n_descriptor_set_layout_binding_flags_create_info_EXT(S_descriptor_set_layout_binding_flags_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_descriptor_set_layout_create_info) == sizeof(VkDescriptorSetLayoutCreateInfo),
	"struct and wrapper have different size!");

struct N_descriptor_set_layout_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_descriptor_set_layout_create_info& n_descriptor_set_layout_binding_flags_create_info_EXT(S_descriptor_set_layout_binding_flags_create_info_EXT const& next_);
};

/*	VkDescriptorPoolSize
*/
struct		S_descriptor_pool_size{
	E_descriptor_type type;
	uint32_t descriptorCount;

S_descriptor_pool_size(){}
};

/*	VkDescriptorPoolInlineUniformBlockCreateInfoEXT
ex to: VkDescriptorPoolCreateInfo
*/
struct		S_descriptor_pool_inline_uniform_block_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint32_t maxInlineUniformBlockBindings;

S_descriptor_pool_inline_uniform_block_create_info_EXT(){}

S_descriptor_pool_inline_uniform_block_create_info_EXT(
	uint32_t maxInlineUniformBlockBindings_)
	:maxInlineUniformBlockBindings(maxInlineUniformBlockBindings_)
{
}

S_descriptor_pool_inline_uniform_block_create_info_EXT( VkDescriptorPoolInlineUniformBlockCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_pool_inline_uniform_block_create_info_EXT ) );	}
S_descriptor_pool_inline_uniform_block_create_info_EXT& operator=( VkDescriptorPoolInlineUniformBlockCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_pool_inline_uniform_block_create_info_EXT ) ); return *this;	}
operator VkDescriptorPoolInlineUniformBlockCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDescriptorPoolInlineUniformBlockCreateInfoEXT*>(this);	}
operator VkDescriptorPoolInlineUniformBlockCreateInfoEXT &() 
	{	return *reinterpret_cast<VkDescriptorPoolInlineUniformBlockCreateInfoEXT*>(this);	}

friend S_descriptor_pool_create_info;
};
static_assert(
	sizeof(S_descriptor_pool_inline_uniform_block_create_info_EXT) == sizeof(VkDescriptorPoolInlineUniformBlockCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkDescriptorPoolCreateInfo
ex:
	VkDescriptorPoolInlineUniformBlockCreateInfoEXT
*/
struct		S_descriptor_pool_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_descriptor_pool_create flags;
	uint32_t maxSets;
	uint32_t poolSizeCount;
	const S_descriptor_pool_size * pPoolSizes;

S_descriptor_pool_create_info(){}

S_descriptor_pool_create_info(
	F_descriptor_pool_create flags_,
	uint32_t maxSets_,
	uint32_t poolSizeCount_,
	const S_descriptor_pool_size * pPoolSizes_)
	:flags(flags_)
	,maxSets(maxSets_)
	,poolSizeCount(poolSizeCount_)
	,pPoolSizes(pPoolSizes_)
{
}

S_descriptor_pool_create_info( VkDescriptorPoolCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_pool_create_info ) );	}
S_descriptor_pool_create_info& operator=( VkDescriptorPoolCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_pool_create_info ) ); return *this;	}
operator VkDescriptorPoolCreateInfo const&() const 
	{	return *reinterpret_cast<const VkDescriptorPoolCreateInfo*>(this);	}
operator VkDescriptorPoolCreateInfo &() 
	{	return *reinterpret_cast<VkDescriptorPoolCreateInfo*>(this);	}

S_descriptor_pool_create_info& n_descriptor_pool_inline_uniform_block_create_info_EXT(S_descriptor_pool_inline_uniform_block_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_descriptor_pool_create_info) == sizeof(VkDescriptorPoolCreateInfo),
	"struct and wrapper have different size!");

struct N_descriptor_pool_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_descriptor_pool_create_info& n_descriptor_pool_inline_uniform_block_create_info_EXT(S_descriptor_pool_inline_uniform_block_create_info_EXT const& next_);
};

/*	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT
ex to: VkDescriptorSetAllocateInfo
*/
struct		S_descriptor_set_variable_descriptor_count_allocate_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint32_t descriptorSetCount;
	const uint32_t * pDescriptorCounts;

S_descriptor_set_variable_descriptor_count_allocate_info_EXT(){}

S_descriptor_set_variable_descriptor_count_allocate_info_EXT(
	uint32_t descriptorSetCount_,
	const uint32_t * pDescriptorCounts_)
	:descriptorSetCount(descriptorSetCount_)
	,pDescriptorCounts(pDescriptorCounts_)
{
}

S_descriptor_set_variable_descriptor_count_allocate_info_EXT( VkDescriptorSetVariableDescriptorCountAllocateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_variable_descriptor_count_allocate_info_EXT ) );	}
S_descriptor_set_variable_descriptor_count_allocate_info_EXT& operator=( VkDescriptorSetVariableDescriptorCountAllocateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_variable_descriptor_count_allocate_info_EXT ) ); return *this;	}
operator VkDescriptorSetVariableDescriptorCountAllocateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT*>(this);	}
operator VkDescriptorSetVariableDescriptorCountAllocateInfoEXT &() 
	{	return *reinterpret_cast<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT*>(this);	}

friend S_descriptor_set_allocate_info;
};
static_assert(
	sizeof(S_descriptor_set_variable_descriptor_count_allocate_info_EXT) == sizeof(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT),
	"struct and wrapper have different size!");

/*	VkDescriptorSetAllocateInfo
ex:
	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT
*/
struct		S_descriptor_set_allocate_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
	 void * pNext = nullptr;
public:
	VkDescriptorPool descriptorPool;
	uint32_t descriptorSetCount;
	const VkDescriptorSetLayout * pSetLayouts;

S_descriptor_set_allocate_info(){}

S_descriptor_set_allocate_info(
	VkDescriptorPool descriptorPool_,
	uint32_t descriptorSetCount_,
	const VkDescriptorSetLayout * pSetLayouts_)
	:descriptorPool(descriptorPool_)
	,descriptorSetCount(descriptorSetCount_)
	,pSetLayouts(pSetLayouts_)
{
}

S_descriptor_set_allocate_info( VkDescriptorSetAllocateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_allocate_info ) );	}
S_descriptor_set_allocate_info& operator=( VkDescriptorSetAllocateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_allocate_info ) ); return *this;	}
operator VkDescriptorSetAllocateInfo const&() const 
	{	return *reinterpret_cast<const VkDescriptorSetAllocateInfo*>(this);	}
operator VkDescriptorSetAllocateInfo &() 
	{	return *reinterpret_cast<VkDescriptorSetAllocateInfo*>(this);	}

S_descriptor_set_allocate_info& n_descriptor_set_variable_descriptor_count_allocate_info_EXT(S_descriptor_set_variable_descriptor_count_allocate_info_EXT const& next_);
};
static_assert(
	sizeof(S_descriptor_set_allocate_info) == sizeof(VkDescriptorSetAllocateInfo),
	"struct and wrapper have different size!");

struct N_descriptor_set_allocate_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_descriptor_set_allocate_info& n_descriptor_set_variable_descriptor_count_allocate_info_EXT(S_descriptor_set_variable_descriptor_count_allocate_info_EXT const& next_);
};

/*	VkSpecializationMapEntry
*/
struct		S_specialization_map_entry{
	uint32_t constantID;
	uint32_t offset;
	size_t size;

S_specialization_map_entry(){}
};

/*	VkSpecializationInfo
*/
struct		S_specialization_info{
	uint32_t mapEntryCount;
	const S_specialization_map_entry * pMapEntries;
	size_t dataSize;
	const void * pData;

S_specialization_info(){}
};

/*	VkPipelineShaderStageCreateInfo
*/
struct		S_pipeline_shader_stage_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineShaderStageCreateFlags flags;
	F_shader_stage stage;
	VkShaderModule module;
	const char * pName;
	const S_specialization_info * pSpecializationInfo;

S_pipeline_shader_stage_create_info(){}

S_pipeline_shader_stage_create_info(
	VkPipelineShaderStageCreateFlags flags_,
	F_shader_stage stage_,
	VkShaderModule module_,
	const char * pName_,
	const S_specialization_info * pSpecializationInfo_)
	:flags(flags_)
	,stage(stage_)
	,module(module_)
	,pName(pName_)
	,pSpecializationInfo(pSpecializationInfo_)
{
}

S_pipeline_shader_stage_create_info( VkPipelineShaderStageCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_shader_stage_create_info ) );	}
S_pipeline_shader_stage_create_info& operator=( VkPipelineShaderStageCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_shader_stage_create_info ) ); return *this;	}
operator VkPipelineShaderStageCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineShaderStageCreateInfo*>(this);	}
operator VkPipelineShaderStageCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineShaderStageCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_pipeline_shader_stage_create_info) == sizeof(VkPipelineShaderStageCreateInfo),
	"struct and wrapper have different size!");

/*	VkComputePipelineCreateInfo
*/
struct		S_compute_pipeline_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_pipeline_create flags;
	S_pipeline_shader_stage_create_info stage;
	VkPipelineLayout layout;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;

S_compute_pipeline_create_info(){}

S_compute_pipeline_create_info(
	F_pipeline_create flags_,
	S_pipeline_shader_stage_create_info stage_,
	VkPipelineLayout layout_,
	VkPipeline basePipelineHandle_,
	int32_t basePipelineIndex_)
	:flags(flags_)
	,stage(stage_)
	,layout(layout_)
	,basePipelineHandle(basePipelineHandle_)
	,basePipelineIndex(basePipelineIndex_)
{
}

S_compute_pipeline_create_info( VkComputePipelineCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_compute_pipeline_create_info ) );	}
S_compute_pipeline_create_info& operator=( VkComputePipelineCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_compute_pipeline_create_info ) ); return *this;	}
operator VkComputePipelineCreateInfo const&() const 
	{	return *reinterpret_cast<const VkComputePipelineCreateInfo*>(this);	}
operator VkComputePipelineCreateInfo &() 
	{	return *reinterpret_cast<VkComputePipelineCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_compute_pipeline_create_info) == sizeof(VkComputePipelineCreateInfo),
	"struct and wrapper have different size!");

/*	VkVertexInputBindingDescription
*/
struct		S_vertex_input_binding_description{
	uint32_t binding;
	uint32_t stride;
	E_vertex_input_rate inputRate;

S_vertex_input_binding_description(){}
};

/*	VkVertexInputAttributeDescription
*/
struct		S_vertex_input_attribute_description{
	uint32_t location;
	uint32_t binding;
	E_format format;
	uint32_t offset;

S_vertex_input_attribute_description(){}
};

/*	VkVertexInputBindingDivisorDescriptionEXT
*/
struct		S_vertex_input_binding_divisor_description_EXT{
	uint32_t binding;
	uint32_t divisor;

S_vertex_input_binding_divisor_description_EXT(){}
};

/*	VkPipelineVertexInputDivisorStateCreateInfoEXT
ex to: VkPipelineVertexInputStateCreateInfo
*/
struct		S_pipeline_vertex_input_divisor_state_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint32_t vertexBindingDivisorCount;
	const S_vertex_input_binding_divisor_description_EXT * pVertexBindingDivisors;

S_pipeline_vertex_input_divisor_state_create_info_EXT(){}

S_pipeline_vertex_input_divisor_state_create_info_EXT(
	uint32_t vertexBindingDivisorCount_,
	const S_vertex_input_binding_divisor_description_EXT * pVertexBindingDivisors_)
	:vertexBindingDivisorCount(vertexBindingDivisorCount_)
	,pVertexBindingDivisors(pVertexBindingDivisors_)
{
}

S_pipeline_vertex_input_divisor_state_create_info_EXT( VkPipelineVertexInputDivisorStateCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_vertex_input_divisor_state_create_info_EXT ) );	}
S_pipeline_vertex_input_divisor_state_create_info_EXT& operator=( VkPipelineVertexInputDivisorStateCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_vertex_input_divisor_state_create_info_EXT ) ); return *this;	}
operator VkPipelineVertexInputDivisorStateCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoEXT*>(this);	}
operator VkPipelineVertexInputDivisorStateCreateInfoEXT &() 
	{	return *reinterpret_cast<VkPipelineVertexInputDivisorStateCreateInfoEXT*>(this);	}

friend S_pipeline_vertex_input_state_create_info;
};
static_assert(
	sizeof(S_pipeline_vertex_input_divisor_state_create_info_EXT) == sizeof(VkPipelineVertexInputDivisorStateCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkPipelineVertexInputStateCreateInfo
ex:
	VkPipelineVertexInputDivisorStateCreateInfoEXT
*/
struct		S_pipeline_vertex_input_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineVertexInputStateCreateFlags flags;
	uint32_t vertexBindingDescriptionCount;
	const S_vertex_input_binding_description * pVertexBindingDescriptions;
	uint32_t vertexAttributeDescriptionCount;
	const S_vertex_input_attribute_description * pVertexAttributeDescriptions;

S_pipeline_vertex_input_state_create_info(){}

S_pipeline_vertex_input_state_create_info(
	VkPipelineVertexInputStateCreateFlags flags_,
	uint32_t vertexBindingDescriptionCount_,
	const S_vertex_input_binding_description * pVertexBindingDescriptions_,
	uint32_t vertexAttributeDescriptionCount_,
	const S_vertex_input_attribute_description * pVertexAttributeDescriptions_)
	:flags(flags_)
	,vertexBindingDescriptionCount(vertexBindingDescriptionCount_)
	,pVertexBindingDescriptions(pVertexBindingDescriptions_)
	,vertexAttributeDescriptionCount(vertexAttributeDescriptionCount_)
	,pVertexAttributeDescriptions(pVertexAttributeDescriptions_)
{
}

S_pipeline_vertex_input_state_create_info( VkPipelineVertexInputStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_vertex_input_state_create_info ) );	}
S_pipeline_vertex_input_state_create_info& operator=( VkPipelineVertexInputStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_vertex_input_state_create_info ) ); return *this;	}
operator VkPipelineVertexInputStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineVertexInputStateCreateInfo*>(this);	}
operator VkPipelineVertexInputStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineVertexInputStateCreateInfo*>(this);	}

S_pipeline_vertex_input_state_create_info& n_pipeline_vertex_input_divisor_state_create_info_EXT(S_pipeline_vertex_input_divisor_state_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_pipeline_vertex_input_state_create_info) == sizeof(VkPipelineVertexInputStateCreateInfo),
	"struct and wrapper have different size!");

struct N_pipeline_vertex_input_state_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_pipeline_vertex_input_state_create_info& n_pipeline_vertex_input_divisor_state_create_info_EXT(S_pipeline_vertex_input_divisor_state_create_info_EXT const& next_);
};

/*	VkPipelineInputAssemblyStateCreateInfo
*/
struct		S_pipeline_input_assembly_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineInputAssemblyStateCreateFlags flags;
	E_primitive_topology topology;
	VkBool32 primitiveRestartEnable;

S_pipeline_input_assembly_state_create_info(){}

S_pipeline_input_assembly_state_create_info(
	VkPipelineInputAssemblyStateCreateFlags flags_,
	E_primitive_topology topology_,
	VkBool32 primitiveRestartEnable_)
	:flags(flags_)
	,topology(topology_)
	,primitiveRestartEnable(primitiveRestartEnable_)
{
}

S_pipeline_input_assembly_state_create_info( VkPipelineInputAssemblyStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_input_assembly_state_create_info ) );	}
S_pipeline_input_assembly_state_create_info& operator=( VkPipelineInputAssemblyStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_input_assembly_state_create_info ) ); return *this;	}
operator VkPipelineInputAssemblyStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineInputAssemblyStateCreateInfo*>(this);	}
operator VkPipelineInputAssemblyStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_pipeline_input_assembly_state_create_info) == sizeof(VkPipelineInputAssemblyStateCreateInfo),
	"struct and wrapper have different size!");

/*	VkPipelineTessellationDomainOriginStateCreateInfo
ex to: VkPipelineTessellationStateCreateInfo
*/
struct		S_pipeline_tessellation_domain_origin_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	E_tessellation_domain_origin domainOrigin;

S_pipeline_tessellation_domain_origin_state_create_info(){}

S_pipeline_tessellation_domain_origin_state_create_info(
	E_tessellation_domain_origin domainOrigin_)
	:domainOrigin(domainOrigin_)
{
}

S_pipeline_tessellation_domain_origin_state_create_info( VkPipelineTessellationDomainOriginStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_tessellation_domain_origin_state_create_info ) );	}
S_pipeline_tessellation_domain_origin_state_create_info& operator=( VkPipelineTessellationDomainOriginStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_tessellation_domain_origin_state_create_info ) ); return *this;	}
operator VkPipelineTessellationDomainOriginStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineTessellationDomainOriginStateCreateInfo*>(this);	}
operator VkPipelineTessellationDomainOriginStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfo*>(this);	}

friend S_pipeline_tessellation_state_create_info;
};
static_assert(
	sizeof(S_pipeline_tessellation_domain_origin_state_create_info) == sizeof(VkPipelineTessellationDomainOriginStateCreateInfo),
	"struct and wrapper have different size!");

/*	VkPipelineTessellationStateCreateInfo
ex:
	VkPipelineTessellationDomainOriginStateCreateInfo
*/
struct		S_pipeline_tessellation_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineTessellationStateCreateFlags flags;
	uint32_t patchControlPoints;

S_pipeline_tessellation_state_create_info(){}

S_pipeline_tessellation_state_create_info(
	VkPipelineTessellationStateCreateFlags flags_,
	uint32_t patchControlPoints_)
	:flags(flags_)
	,patchControlPoints(patchControlPoints_)
{
}

S_pipeline_tessellation_state_create_info( VkPipelineTessellationStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_tessellation_state_create_info ) );	}
S_pipeline_tessellation_state_create_info& operator=( VkPipelineTessellationStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_tessellation_state_create_info ) ); return *this;	}
operator VkPipelineTessellationStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineTessellationStateCreateInfo*>(this);	}
operator VkPipelineTessellationStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineTessellationStateCreateInfo*>(this);	}

S_pipeline_tessellation_state_create_info& n_pipeline_tessellation_domain_origin_state_create_info(S_pipeline_tessellation_domain_origin_state_create_info const& next_);
};
static_assert(
	sizeof(S_pipeline_tessellation_state_create_info) == sizeof(VkPipelineTessellationStateCreateInfo),
	"struct and wrapper have different size!");

struct N_pipeline_tessellation_state_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_pipeline_tessellation_state_create_info& n_pipeline_tessellation_domain_origin_state_create_info(S_pipeline_tessellation_domain_origin_state_create_info const& next_);
};

/*	VkViewportWScalingNV
*/
struct		S_viewport_w_scaling_NV{
	float xcoeff;
	float ycoeff;

S_viewport_w_scaling_NV(){}
};

/*	VkPipelineViewportWScalingStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
struct		S_pipeline_viewport_w_scaling_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkBool32 viewportWScalingEnable;
	uint32_t viewportCount;
	const S_viewport_w_scaling_NV * pViewportWScalings;

S_pipeline_viewport_w_scaling_state_create_info_NV(){}

S_pipeline_viewport_w_scaling_state_create_info_NV(
	VkBool32 viewportWScalingEnable_,
	uint32_t viewportCount_,
	const S_viewport_w_scaling_NV * pViewportWScalings_)
	:viewportWScalingEnable(viewportWScalingEnable_)
	,viewportCount(viewportCount_)
	,pViewportWScalings(pViewportWScalings_)
{
}

S_pipeline_viewport_w_scaling_state_create_info_NV( VkPipelineViewportWScalingStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_w_scaling_state_create_info_NV ) );	}
S_pipeline_viewport_w_scaling_state_create_info_NV& operator=( VkPipelineViewportWScalingStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_w_scaling_state_create_info_NV ) ); return *this;	}
operator VkPipelineViewportWScalingStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineViewportWScalingStateCreateInfoNV*>(this);	}
operator VkPipelineViewportWScalingStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV*>(this);	}

friend S_pipeline_viewport_state_create_info;
};
static_assert(
	sizeof(S_pipeline_viewport_w_scaling_state_create_info_NV) == sizeof(VkPipelineViewportWScalingStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkViewportSwizzleNV
*/
struct		S_viewport_swizzle_NV{
	E_viewport_coordinate_swizzle_NV x;
	E_viewport_coordinate_swizzle_NV y;
	E_viewport_coordinate_swizzle_NV z;
	E_viewport_coordinate_swizzle_NV w;

S_viewport_swizzle_NV(){}
};

/*	VkPipelineViewportSwizzleStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
struct		S_pipeline_viewport_swizzle_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkPipelineViewportSwizzleStateCreateFlagsNV flags;
	uint32_t viewportCount;
	const S_viewport_swizzle_NV * pViewportSwizzles;

S_pipeline_viewport_swizzle_state_create_info_NV(){}

S_pipeline_viewport_swizzle_state_create_info_NV(
	VkPipelineViewportSwizzleStateCreateFlagsNV flags_,
	uint32_t viewportCount_,
	const S_viewport_swizzle_NV * pViewportSwizzles_)
	:flags(flags_)
	,viewportCount(viewportCount_)
	,pViewportSwizzles(pViewportSwizzles_)
{
}

S_pipeline_viewport_swizzle_state_create_info_NV( VkPipelineViewportSwizzleStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_swizzle_state_create_info_NV ) );	}
S_pipeline_viewport_swizzle_state_create_info_NV& operator=( VkPipelineViewportSwizzleStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_swizzle_state_create_info_NV ) ); return *this;	}
operator VkPipelineViewportSwizzleStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV*>(this);	}
operator VkPipelineViewportSwizzleStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV*>(this);	}

friend S_pipeline_viewport_state_create_info;
};
static_assert(
	sizeof(S_pipeline_viewport_swizzle_state_create_info_NV) == sizeof(VkPipelineViewportSwizzleStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkPipelineViewportExclusiveScissorStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
struct		S_pipeline_viewport_exclusive_scissor_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	uint32_t exclusiveScissorCount;
	const S_rect_2d * pExclusiveScissors;

S_pipeline_viewport_exclusive_scissor_state_create_info_NV(){}

S_pipeline_viewport_exclusive_scissor_state_create_info_NV(
	uint32_t exclusiveScissorCount_,
	const S_rect_2d * pExclusiveScissors_)
	:exclusiveScissorCount(exclusiveScissorCount_)
	,pExclusiveScissors(pExclusiveScissors_)
{
}

S_pipeline_viewport_exclusive_scissor_state_create_info_NV( VkPipelineViewportExclusiveScissorStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_exclusive_scissor_state_create_info_NV ) );	}
S_pipeline_viewport_exclusive_scissor_state_create_info_NV& operator=( VkPipelineViewportExclusiveScissorStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_exclusive_scissor_state_create_info_NV ) ); return *this;	}
operator VkPipelineViewportExclusiveScissorStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineViewportExclusiveScissorStateCreateInfoNV*>(this);	}
operator VkPipelineViewportExclusiveScissorStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineViewportExclusiveScissorStateCreateInfoNV*>(this);	}

friend S_pipeline_viewport_state_create_info;
};
static_assert(
	sizeof(S_pipeline_viewport_exclusive_scissor_state_create_info_NV) == sizeof(VkPipelineViewportExclusiveScissorStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkShadingRatePaletteNV
*/
struct		S_shading_rate_palette_NV{
	uint32_t shadingRatePaletteEntryCount;
	const E_shading_rate_palette_entry_NV * pShadingRatePaletteEntries;

S_shading_rate_palette_NV(){}
};

/*	VkPipelineViewportShadingRateImageStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
struct		S_pipeline_viewport_shading_rate_image_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkBool32 shadingRateImageEnable;
	uint32_t viewportCount;
	const S_shading_rate_palette_NV * pShadingRatePalettes;

S_pipeline_viewport_shading_rate_image_state_create_info_NV(){}

S_pipeline_viewport_shading_rate_image_state_create_info_NV(
	VkBool32 shadingRateImageEnable_,
	uint32_t viewportCount_,
	const S_shading_rate_palette_NV * pShadingRatePalettes_)
	:shadingRateImageEnable(shadingRateImageEnable_)
	,viewportCount(viewportCount_)
	,pShadingRatePalettes(pShadingRatePalettes_)
{
}

S_pipeline_viewport_shading_rate_image_state_create_info_NV( VkPipelineViewportShadingRateImageStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_shading_rate_image_state_create_info_NV ) );	}
S_pipeline_viewport_shading_rate_image_state_create_info_NV& operator=( VkPipelineViewportShadingRateImageStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_shading_rate_image_state_create_info_NV ) ); return *this;	}
operator VkPipelineViewportShadingRateImageStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineViewportShadingRateImageStateCreateInfoNV*>(this);	}
operator VkPipelineViewportShadingRateImageStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineViewportShadingRateImageStateCreateInfoNV*>(this);	}

friend S_pipeline_viewport_state_create_info;
};
static_assert(
	sizeof(S_pipeline_viewport_shading_rate_image_state_create_info_NV) == sizeof(VkPipelineViewportShadingRateImageStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkCoarseSampleLocationNV
*/
struct		S_coarse_sample_location_NV{
	uint32_t pixelX;
	uint32_t pixelY;
	uint32_t sample;

S_coarse_sample_location_NV(){}
};

/*	VkCoarseSampleOrderCustomNV
*/
struct		S_coarse_sample_order_custom_NV{
	E_shading_rate_palette_entry_NV shadingRate;
	uint32_t sampleCount;
	uint32_t sampleLocationCount;
	const S_coarse_sample_location_NV * pSampleLocations;

S_coarse_sample_order_custom_NV(){}
};

/*	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
struct		S_pipeline_viewport_coarse_sample_order_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	E_coarse_sample_order_type_NV sampleOrderType;
	uint32_t customSampleOrderCount;
	const S_coarse_sample_order_custom_NV * pCustomSampleOrders;

S_pipeline_viewport_coarse_sample_order_state_create_info_NV(){}

S_pipeline_viewport_coarse_sample_order_state_create_info_NV(
	E_coarse_sample_order_type_NV sampleOrderType_,
	uint32_t customSampleOrderCount_,
	const S_coarse_sample_order_custom_NV * pCustomSampleOrders_)
	:sampleOrderType(sampleOrderType_)
	,customSampleOrderCount(customSampleOrderCount_)
	,pCustomSampleOrders(pCustomSampleOrders_)
{
}

S_pipeline_viewport_coarse_sample_order_state_create_info_NV( VkPipelineViewportCoarseSampleOrderStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_coarse_sample_order_state_create_info_NV ) );	}
S_pipeline_viewport_coarse_sample_order_state_create_info_NV& operator=( VkPipelineViewportCoarseSampleOrderStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_coarse_sample_order_state_create_info_NV ) ); return *this;	}
operator VkPipelineViewportCoarseSampleOrderStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*>(this);	}
operator VkPipelineViewportCoarseSampleOrderStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*>(this);	}

friend S_pipeline_viewport_state_create_info;
};
static_assert(
	sizeof(S_pipeline_viewport_coarse_sample_order_state_create_info_NV) == sizeof(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkPipelineViewportStateCreateInfo
ex:
	VkPipelineViewportWScalingStateCreateInfoNV
	VkPipelineViewportSwizzleStateCreateInfoNV
	VkPipelineViewportExclusiveScissorStateCreateInfoNV
	VkPipelineViewportShadingRateImageStateCreateInfoNV
	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV
*/
struct		S_pipeline_viewport_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
	const S_viewport * pViewports;
	uint32_t scissorCount;
	const S_rect_2d * pScissors;

S_pipeline_viewport_state_create_info(){}

S_pipeline_viewport_state_create_info(
	VkPipelineViewportStateCreateFlags flags_,
	uint32_t viewportCount_,
	const S_viewport * pViewports_,
	uint32_t scissorCount_,
	const S_rect_2d * pScissors_)
	:flags(flags_)
	,viewportCount(viewportCount_)
	,pViewports(pViewports_)
	,scissorCount(scissorCount_)
	,pScissors(pScissors_)
{
}

S_pipeline_viewport_state_create_info( VkPipelineViewportStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_state_create_info ) );	}
S_pipeline_viewport_state_create_info& operator=( VkPipelineViewportStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_viewport_state_create_info ) ); return *this;	}
operator VkPipelineViewportStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineViewportStateCreateInfo*>(this);	}
operator VkPipelineViewportStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineViewportStateCreateInfo*>(this);	}

S_pipeline_viewport_state_create_info& n_pipeline_viewport_w_scaling_state_create_info_NV(S_pipeline_viewport_w_scaling_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_swizzle_state_create_info_NV(S_pipeline_viewport_swizzle_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_exclusive_scissor_state_create_info_NV(S_pipeline_viewport_exclusive_scissor_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_shading_rate_image_state_create_info_NV(S_pipeline_viewport_shading_rate_image_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_coarse_sample_order_state_create_info_NV(S_pipeline_viewport_coarse_sample_order_state_create_info_NV const& next_);
};
static_assert(
	sizeof(S_pipeline_viewport_state_create_info) == sizeof(VkPipelineViewportStateCreateInfo),
	"struct and wrapper have different size!");

struct N_pipeline_viewport_state_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_pipeline_viewport_state_create_info& n_pipeline_viewport_w_scaling_state_create_info_NV(S_pipeline_viewport_w_scaling_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_swizzle_state_create_info_NV(S_pipeline_viewport_swizzle_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_exclusive_scissor_state_create_info_NV(S_pipeline_viewport_exclusive_scissor_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_shading_rate_image_state_create_info_NV(S_pipeline_viewport_shading_rate_image_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_coarse_sample_order_state_create_info_NV(S_pipeline_viewport_coarse_sample_order_state_create_info_NV const& next_);
};

/*	VkPipelineRasterizationStateRasterizationOrderAMD
ex to: VkPipelineRasterizationStateCreateInfo
*/
struct		S_pipeline_rasterization_state_rasterization_order_AMD{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
	 void * pNext = nullptr;
public:
	E_rasterization_order_AMD rasterizationOrder;

S_pipeline_rasterization_state_rasterization_order_AMD(){}

S_pipeline_rasterization_state_rasterization_order_AMD(
	E_rasterization_order_AMD rasterizationOrder_)
	:rasterizationOrder(rasterizationOrder_)
{
}

S_pipeline_rasterization_state_rasterization_order_AMD( VkPipelineRasterizationStateRasterizationOrderAMD const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_rasterization_state_rasterization_order_AMD ) );	}
S_pipeline_rasterization_state_rasterization_order_AMD& operator=( VkPipelineRasterizationStateRasterizationOrderAMD const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_rasterization_state_rasterization_order_AMD ) ); return *this;	}
operator VkPipelineRasterizationStateRasterizationOrderAMD const&() const 
	{	return *reinterpret_cast<const VkPipelineRasterizationStateRasterizationOrderAMD*>(this);	}
operator VkPipelineRasterizationStateRasterizationOrderAMD &() 
	{	return *reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD*>(this);	}

friend S_pipeline_rasterization_state_create_info;
};
static_assert(
	sizeof(S_pipeline_rasterization_state_rasterization_order_AMD) == sizeof(VkPipelineRasterizationStateRasterizationOrderAMD),
	"struct and wrapper have different size!");

/*	VkPipelineRasterizationConservativeStateCreateInfoEXT
ex to: VkPipelineRasterizationStateCreateInfo
*/
struct		S_pipeline_rasterization_conservative_state_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkPipelineRasterizationConservativeStateCreateFlagsEXT flags;
	E_conservative_rasterization_mode_EXT conservativeRasterizationMode;
	float extraPrimitiveOverestimationSize;

S_pipeline_rasterization_conservative_state_create_info_EXT(){}

S_pipeline_rasterization_conservative_state_create_info_EXT(
	VkPipelineRasterizationConservativeStateCreateFlagsEXT flags_,
	E_conservative_rasterization_mode_EXT conservativeRasterizationMode_,
	float extraPrimitiveOverestimationSize_)
	:flags(flags_)
	,conservativeRasterizationMode(conservativeRasterizationMode_)
	,extraPrimitiveOverestimationSize(extraPrimitiveOverestimationSize_)
{
}

S_pipeline_rasterization_conservative_state_create_info_EXT( VkPipelineRasterizationConservativeStateCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_rasterization_conservative_state_create_info_EXT ) );	}
S_pipeline_rasterization_conservative_state_create_info_EXT& operator=( VkPipelineRasterizationConservativeStateCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_rasterization_conservative_state_create_info_EXT ) ); return *this;	}
operator VkPipelineRasterizationConservativeStateCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT*>(this);	}
operator VkPipelineRasterizationConservativeStateCreateInfoEXT &() 
	{	return *reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT*>(this);	}

friend S_pipeline_rasterization_state_create_info;
};
static_assert(
	sizeof(S_pipeline_rasterization_conservative_state_create_info_EXT) == sizeof(VkPipelineRasterizationConservativeStateCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkPipelineRasterizationStateCreateInfo
ex:
	VkPipelineRasterizationStateRasterizationOrderAMD
	VkPipelineRasterizationConservativeStateCreateInfoEXT
*/
struct		S_pipeline_rasterization_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
	E_polygon_mode polygonMode;
	F_cull_mode cullMode;
	E_front_face frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;

S_pipeline_rasterization_state_create_info(){}

S_pipeline_rasterization_state_create_info(
	VkPipelineRasterizationStateCreateFlags flags_,
	VkBool32 depthClampEnable_,
	VkBool32 rasterizerDiscardEnable_,
	E_polygon_mode polygonMode_,
	F_cull_mode cullMode_,
	E_front_face frontFace_,
	VkBool32 depthBiasEnable_,
	float depthBiasConstantFactor_,
	float depthBiasClamp_,
	float depthBiasSlopeFactor_,
	float lineWidth_)
	:flags(flags_)
	,depthClampEnable(depthClampEnable_)
	,rasterizerDiscardEnable(rasterizerDiscardEnable_)
	,polygonMode(polygonMode_)
	,cullMode(cullMode_)
	,frontFace(frontFace_)
	,depthBiasEnable(depthBiasEnable_)
	,depthBiasConstantFactor(depthBiasConstantFactor_)
	,depthBiasClamp(depthBiasClamp_)
	,depthBiasSlopeFactor(depthBiasSlopeFactor_)
	,lineWidth(lineWidth_)
{
}

S_pipeline_rasterization_state_create_info( VkPipelineRasterizationStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_rasterization_state_create_info ) );	}
S_pipeline_rasterization_state_create_info& operator=( VkPipelineRasterizationStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_rasterization_state_create_info ) ); return *this;	}
operator VkPipelineRasterizationStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineRasterizationStateCreateInfo*>(this);	}
operator VkPipelineRasterizationStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineRasterizationStateCreateInfo*>(this);	}

S_pipeline_rasterization_state_create_info& n_pipeline_rasterization_state_rasterization_order_AMD(S_pipeline_rasterization_state_rasterization_order_AMD const& next_);
S_pipeline_rasterization_state_create_info& n_pipeline_rasterization_conservative_state_create_info_EXT(S_pipeline_rasterization_conservative_state_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_pipeline_rasterization_state_create_info) == sizeof(VkPipelineRasterizationStateCreateInfo),
	"struct and wrapper have different size!");

struct N_pipeline_rasterization_state_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_pipeline_rasterization_state_create_info& n_pipeline_rasterization_state_rasterization_order_AMD(S_pipeline_rasterization_state_rasterization_order_AMD const& next_);
N_pipeline_rasterization_state_create_info& n_pipeline_rasterization_conservative_state_create_info_EXT(S_pipeline_rasterization_conservative_state_create_info_EXT const& next_);
};

/*	VkPipelineCoverageToColorStateCreateInfoNV
ex to: VkPipelineMultisampleStateCreateInfo
*/
struct		S_pipeline_coverage_to_color_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkPipelineCoverageToColorStateCreateFlagsNV flags;
	VkBool32 coverageToColorEnable;
	uint32_t coverageToColorLocation;

S_pipeline_coverage_to_color_state_create_info_NV(){}

S_pipeline_coverage_to_color_state_create_info_NV(
	VkPipelineCoverageToColorStateCreateFlagsNV flags_,
	VkBool32 coverageToColorEnable_,
	uint32_t coverageToColorLocation_)
	:flags(flags_)
	,coverageToColorEnable(coverageToColorEnable_)
	,coverageToColorLocation(coverageToColorLocation_)
{
}

S_pipeline_coverage_to_color_state_create_info_NV( VkPipelineCoverageToColorStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_coverage_to_color_state_create_info_NV ) );	}
S_pipeline_coverage_to_color_state_create_info_NV& operator=( VkPipelineCoverageToColorStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_coverage_to_color_state_create_info_NV ) ); return *this;	}
operator VkPipelineCoverageToColorStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV*>(this);	}
operator VkPipelineCoverageToColorStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV*>(this);	}

friend S_pipeline_multisample_state_create_info;
};
static_assert(
	sizeof(S_pipeline_coverage_to_color_state_create_info_NV) == sizeof(VkPipelineCoverageToColorStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkPipelineSampleLocationsStateCreateInfoEXT
ex to: VkPipelineMultisampleStateCreateInfo
*/
struct		S_pipeline_sample_locations_state_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkBool32 sampleLocationsEnable;
	S_sample_locations_info_EXT sampleLocationsInfo;

S_pipeline_sample_locations_state_create_info_EXT(){}

S_pipeline_sample_locations_state_create_info_EXT(
	VkBool32 sampleLocationsEnable_,
	S_sample_locations_info_EXT sampleLocationsInfo_)
	:sampleLocationsEnable(sampleLocationsEnable_)
	,sampleLocationsInfo(sampleLocationsInfo_)
{
}

S_pipeline_sample_locations_state_create_info_EXT( VkPipelineSampleLocationsStateCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_sample_locations_state_create_info_EXT ) );	}
S_pipeline_sample_locations_state_create_info_EXT& operator=( VkPipelineSampleLocationsStateCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_sample_locations_state_create_info_EXT ) ); return *this;	}
operator VkPipelineSampleLocationsStateCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkPipelineSampleLocationsStateCreateInfoEXT*>(this);	}
operator VkPipelineSampleLocationsStateCreateInfoEXT &() 
	{	return *reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT*>(this);	}

friend S_pipeline_multisample_state_create_info;
};
static_assert(
	sizeof(S_pipeline_sample_locations_state_create_info_EXT) == sizeof(VkPipelineSampleLocationsStateCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkPipelineCoverageModulationStateCreateInfoNV
ex to: VkPipelineMultisampleStateCreateInfo
*/
struct		S_pipeline_coverage_modulation_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkPipelineCoverageModulationStateCreateFlagsNV flags;
	E_coverage_modulation_mode_NV coverageModulationMode;
	VkBool32 coverageModulationTableEnable;
	uint32_t coverageModulationTableCount;
	const float * pCoverageModulationTable;

S_pipeline_coverage_modulation_state_create_info_NV(){}

S_pipeline_coverage_modulation_state_create_info_NV(
	VkPipelineCoverageModulationStateCreateFlagsNV flags_,
	E_coverage_modulation_mode_NV coverageModulationMode_,
	VkBool32 coverageModulationTableEnable_,
	uint32_t coverageModulationTableCount_,
	const float * pCoverageModulationTable_)
	:flags(flags_)
	,coverageModulationMode(coverageModulationMode_)
	,coverageModulationTableEnable(coverageModulationTableEnable_)
	,coverageModulationTableCount(coverageModulationTableCount_)
	,pCoverageModulationTable(pCoverageModulationTable_)
{
}

S_pipeline_coverage_modulation_state_create_info_NV( VkPipelineCoverageModulationStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_coverage_modulation_state_create_info_NV ) );	}
S_pipeline_coverage_modulation_state_create_info_NV& operator=( VkPipelineCoverageModulationStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_coverage_modulation_state_create_info_NV ) ); return *this;	}
operator VkPipelineCoverageModulationStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV*>(this);	}
operator VkPipelineCoverageModulationStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV*>(this);	}

friend S_pipeline_multisample_state_create_info;
};
static_assert(
	sizeof(S_pipeline_coverage_modulation_state_create_info_NV) == sizeof(VkPipelineCoverageModulationStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkPipelineMultisampleStateCreateInfo
ex:
	VkPipelineCoverageToColorStateCreateInfoNV
	VkPipelineSampleLocationsStateCreateInfoEXT
	VkPipelineCoverageModulationStateCreateInfoNV
*/
struct		S_pipeline_multisample_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineMultisampleStateCreateFlags flags;
	F_sample_count rasterizationSamples;
	VkBool32 sampleShadingEnable;
	float minSampleShading;
	const VkSampleMask * pSampleMask;
	VkBool32 alphaToCoverageEnable;
	VkBool32 alphaToOneEnable;

S_pipeline_multisample_state_create_info(){}

S_pipeline_multisample_state_create_info(
	VkPipelineMultisampleStateCreateFlags flags_,
	F_sample_count rasterizationSamples_,
	VkBool32 sampleShadingEnable_,
	float minSampleShading_,
	const VkSampleMask * pSampleMask_,
	VkBool32 alphaToCoverageEnable_,
	VkBool32 alphaToOneEnable_)
	:flags(flags_)
	,rasterizationSamples(rasterizationSamples_)
	,sampleShadingEnable(sampleShadingEnable_)
	,minSampleShading(minSampleShading_)
	,pSampleMask(pSampleMask_)
	,alphaToCoverageEnable(alphaToCoverageEnable_)
	,alphaToOneEnable(alphaToOneEnable_)
{
}

S_pipeline_multisample_state_create_info( VkPipelineMultisampleStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_multisample_state_create_info ) );	}
S_pipeline_multisample_state_create_info& operator=( VkPipelineMultisampleStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_multisample_state_create_info ) ); return *this;	}
operator VkPipelineMultisampleStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineMultisampleStateCreateInfo*>(this);	}
operator VkPipelineMultisampleStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineMultisampleStateCreateInfo*>(this);	}

S_pipeline_multisample_state_create_info& n_pipeline_coverage_to_color_state_create_info_NV(S_pipeline_coverage_to_color_state_create_info_NV const& next_);
S_pipeline_multisample_state_create_info& n_pipeline_sample_locations_state_create_info_EXT(S_pipeline_sample_locations_state_create_info_EXT const& next_);
S_pipeline_multisample_state_create_info& n_pipeline_coverage_modulation_state_create_info_NV(S_pipeline_coverage_modulation_state_create_info_NV const& next_);
};
static_assert(
	sizeof(S_pipeline_multisample_state_create_info) == sizeof(VkPipelineMultisampleStateCreateInfo),
	"struct and wrapper have different size!");

struct N_pipeline_multisample_state_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_pipeline_multisample_state_create_info& n_pipeline_coverage_to_color_state_create_info_NV(S_pipeline_coverage_to_color_state_create_info_NV const& next_);
N_pipeline_multisample_state_create_info& n_pipeline_sample_locations_state_create_info_EXT(S_pipeline_sample_locations_state_create_info_EXT const& next_);
N_pipeline_multisample_state_create_info& n_pipeline_coverage_modulation_state_create_info_NV(S_pipeline_coverage_modulation_state_create_info_NV const& next_);
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

S_pipeline_color_blend_attachment_state(){}
};

/*	VkPipelineColorBlendAdvancedStateCreateInfoEXT
ex to: VkPipelineColorBlendStateCreateInfo
*/
struct		S_pipeline_color_blend_advanced_state_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkBool32 srcPremultiplied;
	VkBool32 dstPremultiplied;
	E_blend_overlap_EXT blendOverlap;

S_pipeline_color_blend_advanced_state_create_info_EXT(){}

S_pipeline_color_blend_advanced_state_create_info_EXT(
	VkBool32 srcPremultiplied_,
	VkBool32 dstPremultiplied_,
	E_blend_overlap_EXT blendOverlap_)
	:srcPremultiplied(srcPremultiplied_)
	,dstPremultiplied(dstPremultiplied_)
	,blendOverlap(blendOverlap_)
{
}

S_pipeline_color_blend_advanced_state_create_info_EXT( VkPipelineColorBlendAdvancedStateCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_color_blend_advanced_state_create_info_EXT ) );	}
S_pipeline_color_blend_advanced_state_create_info_EXT& operator=( VkPipelineColorBlendAdvancedStateCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_color_blend_advanced_state_create_info_EXT ) ); return *this;	}
operator VkPipelineColorBlendAdvancedStateCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT*>(this);	}
operator VkPipelineColorBlendAdvancedStateCreateInfoEXT &() 
	{	return *reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT*>(this);	}

friend S_pipeline_color_blend_state_create_info;
};
static_assert(
	sizeof(S_pipeline_color_blend_advanced_state_create_info_EXT) == sizeof(VkPipelineColorBlendAdvancedStateCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkPipelineColorBlendStateCreateInfo
ex:
	VkPipelineColorBlendAdvancedStateCreateInfoEXT
*/
struct		S_pipeline_color_blend_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineColorBlendStateCreateFlags flags;
	VkBool32 logicOpEnable;
	E_logic_op logicOp;
	uint32_t attachmentCount;
	const S_pipeline_color_blend_attachment_state * pAttachments;
	float blendConstants[4];

S_pipeline_color_blend_state_create_info(){}

S_pipeline_color_blend_state_create_info(
	VkPipelineColorBlendStateCreateFlags flags_,
	VkBool32 logicOpEnable_,
	E_logic_op logicOp_,
	uint32_t attachmentCount_,
	const S_pipeline_color_blend_attachment_state * pAttachments_,
	float blendConstants_[4])
	:flags(flags_)
	,logicOpEnable(logicOpEnable_)
	,logicOp(logicOp_)
	,attachmentCount(attachmentCount_)
	,pAttachments(pAttachments_)
{
memcpy(blendConstants,blendConstants_,sizeof(blendConstants) );
}

S_pipeline_color_blend_state_create_info( VkPipelineColorBlendStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_color_blend_state_create_info ) );	}
S_pipeline_color_blend_state_create_info& operator=( VkPipelineColorBlendStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_color_blend_state_create_info ) ); return *this;	}
operator VkPipelineColorBlendStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineColorBlendStateCreateInfo*>(this);	}
operator VkPipelineColorBlendStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineColorBlendStateCreateInfo*>(this);	}

S_pipeline_color_blend_state_create_info& n_pipeline_color_blend_advanced_state_create_info_EXT(S_pipeline_color_blend_advanced_state_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_pipeline_color_blend_state_create_info) == sizeof(VkPipelineColorBlendStateCreateInfo),
	"struct and wrapper have different size!");

struct N_pipeline_color_blend_state_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_pipeline_color_blend_state_create_info& n_pipeline_color_blend_advanced_state_create_info_EXT(S_pipeline_color_blend_advanced_state_create_info_EXT const& next_);
};

/*	VkPipelineDynamicStateCreateInfo
*/
struct		S_pipeline_dynamic_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineDynamicStateCreateFlags flags;
	uint32_t dynamicStateCount;
	const E_dynamic_state * pDynamicStates;

S_pipeline_dynamic_state_create_info(){}

S_pipeline_dynamic_state_create_info(
	VkPipelineDynamicStateCreateFlags flags_,
	uint32_t dynamicStateCount_,
	const E_dynamic_state * pDynamicStates_)
	:flags(flags_)
	,dynamicStateCount(dynamicStateCount_)
	,pDynamicStates(pDynamicStates_)
{
}

S_pipeline_dynamic_state_create_info( VkPipelineDynamicStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_dynamic_state_create_info ) );	}
S_pipeline_dynamic_state_create_info& operator=( VkPipelineDynamicStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_dynamic_state_create_info ) ); return *this;	}
operator VkPipelineDynamicStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineDynamicStateCreateInfo*>(this);	}
operator VkPipelineDynamicStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineDynamicStateCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_pipeline_dynamic_state_create_info) == sizeof(VkPipelineDynamicStateCreateInfo),
	"struct and wrapper have different size!");

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

S_stencil_op_state(){}
};

/*	VkPipelineDepthStencilStateCreateInfo
*/
struct		S_pipeline_depth_stencil_state_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineDepthStencilStateCreateFlags flags;
	VkBool32 depthTestEnable;
	VkBool32 depthWriteEnable;
	E_compare_op depthCompareOp;
	VkBool32 depthBoundsTestEnable;
	VkBool32 stencilTestEnable;
	S_stencil_op_state front;
	S_stencil_op_state back;
	float minDepthBounds;
	float maxDepthBounds;

S_pipeline_depth_stencil_state_create_info(){}

S_pipeline_depth_stencil_state_create_info(
	VkPipelineDepthStencilStateCreateFlags flags_,
	VkBool32 depthTestEnable_,
	VkBool32 depthWriteEnable_,
	E_compare_op depthCompareOp_,
	VkBool32 depthBoundsTestEnable_,
	VkBool32 stencilTestEnable_,
	S_stencil_op_state front_,
	S_stencil_op_state back_,
	float minDepthBounds_,
	float maxDepthBounds_)
	:flags(flags_)
	,depthTestEnable(depthTestEnable_)
	,depthWriteEnable(depthWriteEnable_)
	,depthCompareOp(depthCompareOp_)
	,depthBoundsTestEnable(depthBoundsTestEnable_)
	,stencilTestEnable(stencilTestEnable_)
	,front(front_)
	,back(back_)
	,minDepthBounds(minDepthBounds_)
	,maxDepthBounds(maxDepthBounds_)
{
}

S_pipeline_depth_stencil_state_create_info( VkPipelineDepthStencilStateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_depth_stencil_state_create_info ) );	}
S_pipeline_depth_stencil_state_create_info& operator=( VkPipelineDepthStencilStateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_depth_stencil_state_create_info ) ); return *this;	}
operator VkPipelineDepthStencilStateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineDepthStencilStateCreateInfo*>(this);	}
operator VkPipelineDepthStencilStateCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineDepthStencilStateCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_pipeline_depth_stencil_state_create_info) == sizeof(VkPipelineDepthStencilStateCreateInfo),
	"struct and wrapper have different size!");

/*	VkPipelineDiscardRectangleStateCreateInfoEXT
ex to: VkGraphicsPipelineCreateInfo
*/
struct		S_pipeline_discard_rectangle_state_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkPipelineDiscardRectangleStateCreateFlagsEXT flags;
	E_discard_rectangle_mode_EXT discardRectangleMode;
	uint32_t discardRectangleCount;
	const S_rect_2d * pDiscardRectangles;

S_pipeline_discard_rectangle_state_create_info_EXT(){}

S_pipeline_discard_rectangle_state_create_info_EXT(
	VkPipelineDiscardRectangleStateCreateFlagsEXT flags_,
	E_discard_rectangle_mode_EXT discardRectangleMode_,
	uint32_t discardRectangleCount_,
	const S_rect_2d * pDiscardRectangles_)
	:flags(flags_)
	,discardRectangleMode(discardRectangleMode_)
	,discardRectangleCount(discardRectangleCount_)
	,pDiscardRectangles(pDiscardRectangles_)
{
}

S_pipeline_discard_rectangle_state_create_info_EXT( VkPipelineDiscardRectangleStateCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_discard_rectangle_state_create_info_EXT ) );	}
S_pipeline_discard_rectangle_state_create_info_EXT& operator=( VkPipelineDiscardRectangleStateCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_discard_rectangle_state_create_info_EXT ) ); return *this;	}
operator VkPipelineDiscardRectangleStateCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT*>(this);	}
operator VkPipelineDiscardRectangleStateCreateInfoEXT &() 
	{	return *reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT*>(this);	}

friend S_graphics_pipeline_create_info;
};
static_assert(
	sizeof(S_pipeline_discard_rectangle_state_create_info_EXT) == sizeof(VkPipelineDiscardRectangleStateCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkPipelineRepresentativeFragmentTestStateCreateInfoNV
ex to: VkGraphicsPipelineCreateInfo
*/
struct		S_pipeline_representative_fragment_test_state_create_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;
	 void * pNext = nullptr;
public:
	VkBool32 representativeFragmentTestEnable;

S_pipeline_representative_fragment_test_state_create_info_NV(){}

S_pipeline_representative_fragment_test_state_create_info_NV(
	VkBool32 representativeFragmentTestEnable_)
	:representativeFragmentTestEnable(representativeFragmentTestEnable_)
{
}

S_pipeline_representative_fragment_test_state_create_info_NV( VkPipelineRepresentativeFragmentTestStateCreateInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_representative_fragment_test_state_create_info_NV ) );	}
S_pipeline_representative_fragment_test_state_create_info_NV& operator=( VkPipelineRepresentativeFragmentTestStateCreateInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_representative_fragment_test_state_create_info_NV ) ); return *this;	}
operator VkPipelineRepresentativeFragmentTestStateCreateInfoNV const&() const 
	{	return *reinterpret_cast<const VkPipelineRepresentativeFragmentTestStateCreateInfoNV*>(this);	}
operator VkPipelineRepresentativeFragmentTestStateCreateInfoNV &() 
	{	return *reinterpret_cast<VkPipelineRepresentativeFragmentTestStateCreateInfoNV*>(this);	}

friend S_graphics_pipeline_create_info;
};
static_assert(
	sizeof(S_pipeline_representative_fragment_test_state_create_info_NV) == sizeof(VkPipelineRepresentativeFragmentTestStateCreateInfoNV),
	"struct and wrapper have different size!");

/*	VkGraphicsPipelineCreateInfo
ex:
	VkPipelineDiscardRectangleStateCreateInfoEXT
	VkPipelineRepresentativeFragmentTestStateCreateInfoNV
*/
struct		S_graphics_pipeline_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_pipeline_create flags;
	uint32_t stageCount;
	const S_pipeline_shader_stage_create_info * pStages;
	const S_pipeline_vertex_input_state_create_info * pVertexInputState;
	const S_pipeline_input_assembly_state_create_info * pInputAssemblyState;
	const S_pipeline_tessellation_state_create_info * pTessellationState;
	const S_pipeline_viewport_state_create_info * pViewportState;
	const S_pipeline_rasterization_state_create_info * pRasterizationState;
	const S_pipeline_multisample_state_create_info * pMultisampleState;
	const S_pipeline_depth_stencil_state_create_info * pDepthStencilState;
	const S_pipeline_color_blend_state_create_info * pColorBlendState;
	const S_pipeline_dynamic_state_create_info * pDynamicState;
	VkPipelineLayout layout;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;

S_graphics_pipeline_create_info(){}

S_graphics_pipeline_create_info(
	F_pipeline_create flags_,
	uint32_t stageCount_,
	const S_pipeline_shader_stage_create_info * pStages_,
	const S_pipeline_vertex_input_state_create_info * pVertexInputState_,
	const S_pipeline_input_assembly_state_create_info * pInputAssemblyState_,
	const S_pipeline_tessellation_state_create_info * pTessellationState_,
	const S_pipeline_viewport_state_create_info * pViewportState_,
	const S_pipeline_rasterization_state_create_info * pRasterizationState_,
	const S_pipeline_multisample_state_create_info * pMultisampleState_,
	const S_pipeline_depth_stencil_state_create_info * pDepthStencilState_,
	const S_pipeline_color_blend_state_create_info * pColorBlendState_,
	const S_pipeline_dynamic_state_create_info * pDynamicState_,
	VkPipelineLayout layout_,
	VkRenderPass renderPass_,
	uint32_t subpass_,
	VkPipeline basePipelineHandle_,
	int32_t basePipelineIndex_)
	:flags(flags_)
	,stageCount(stageCount_)
	,pStages(pStages_)
	,pVertexInputState(pVertexInputState_)
	,pInputAssemblyState(pInputAssemblyState_)
	,pTessellationState(pTessellationState_)
	,pViewportState(pViewportState_)
	,pRasterizationState(pRasterizationState_)
	,pMultisampleState(pMultisampleState_)
	,pDepthStencilState(pDepthStencilState_)
	,pColorBlendState(pColorBlendState_)
	,pDynamicState(pDynamicState_)
	,layout(layout_)
	,renderPass(renderPass_)
	,subpass(subpass_)
	,basePipelineHandle(basePipelineHandle_)
	,basePipelineIndex(basePipelineIndex_)
{
}

S_graphics_pipeline_create_info( VkGraphicsPipelineCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_graphics_pipeline_create_info ) );	}
S_graphics_pipeline_create_info& operator=( VkGraphicsPipelineCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_graphics_pipeline_create_info ) ); return *this;	}
operator VkGraphicsPipelineCreateInfo const&() const 
	{	return *reinterpret_cast<const VkGraphicsPipelineCreateInfo*>(this);	}
operator VkGraphicsPipelineCreateInfo &() 
	{	return *reinterpret_cast<VkGraphicsPipelineCreateInfo*>(this);	}

S_graphics_pipeline_create_info& n_pipeline_discard_rectangle_state_create_info_EXT(S_pipeline_discard_rectangle_state_create_info_EXT const& next_);
S_graphics_pipeline_create_info& n_pipeline_representative_fragment_test_state_create_info_NV(S_pipeline_representative_fragment_test_state_create_info_NV const& next_);
};
static_assert(
	sizeof(S_graphics_pipeline_create_info) == sizeof(VkGraphicsPipelineCreateInfo),
	"struct and wrapper have different size!");

struct N_graphics_pipeline_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_graphics_pipeline_create_info& n_pipeline_discard_rectangle_state_create_info_EXT(S_pipeline_discard_rectangle_state_create_info_EXT const& next_);
N_graphics_pipeline_create_info& n_pipeline_representative_fragment_test_state_create_info_NV(S_pipeline_representative_fragment_test_state_create_info_NV const& next_);
};

/*	VkPipelineCacheCreateInfo
*/
struct		S_pipeline_cache_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineCacheCreateFlags flags;
	size_t initialDataSize;
	const void * pInitialData;

S_pipeline_cache_create_info(){}

S_pipeline_cache_create_info(
	VkPipelineCacheCreateFlags flags_,
	size_t initialDataSize_,
	const void * pInitialData_)
	:flags(flags_)
	,initialDataSize(initialDataSize_)
	,pInitialData(pInitialData_)
{
}

S_pipeline_cache_create_info( VkPipelineCacheCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_cache_create_info ) );	}
S_pipeline_cache_create_info& operator=( VkPipelineCacheCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_cache_create_info ) ); return *this;	}
operator VkPipelineCacheCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineCacheCreateInfo*>(this);	}
operator VkPipelineCacheCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineCacheCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_pipeline_cache_create_info) == sizeof(VkPipelineCacheCreateInfo),
	"struct and wrapper have different size!");

/*	VkPushConstantRange
*/
struct		S_push_constant_range{
	F_shader_stage stageFlags;
	uint32_t offset;
	uint32_t size;

S_push_constant_range(){}
};

/*	VkPipelineLayoutCreateInfo
*/
struct		S_pipeline_layout_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkPipelineLayoutCreateFlags flags;
	uint32_t setLayoutCount;
	const VkDescriptorSetLayout * pSetLayouts;
	uint32_t pushConstantRangeCount;
	const S_push_constant_range * pPushConstantRanges;

S_pipeline_layout_create_info(){}

S_pipeline_layout_create_info(
	VkPipelineLayoutCreateFlags flags_,
	uint32_t setLayoutCount_,
	const VkDescriptorSetLayout * pSetLayouts_,
	uint32_t pushConstantRangeCount_,
	const S_push_constant_range * pPushConstantRanges_)
	:flags(flags_)
	,setLayoutCount(setLayoutCount_)
	,pSetLayouts(pSetLayouts_)
	,pushConstantRangeCount(pushConstantRangeCount_)
	,pPushConstantRanges(pPushConstantRanges_)
{
}

S_pipeline_layout_create_info( VkPipelineLayoutCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_pipeline_layout_create_info ) );	}
S_pipeline_layout_create_info& operator=( VkPipelineLayoutCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_pipeline_layout_create_info ) ); return *this;	}
operator VkPipelineLayoutCreateInfo const&() const 
	{	return *reinterpret_cast<const VkPipelineLayoutCreateInfo*>(this);	}
operator VkPipelineLayoutCreateInfo &() 
	{	return *reinterpret_cast<VkPipelineLayoutCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_pipeline_layout_create_info) == sizeof(VkPipelineLayoutCreateInfo),
	"struct and wrapper have different size!");

/*	VkSamplerReductionModeCreateInfoEXT
ex to: VkSamplerCreateInfo
*/
struct		S_sampler_reduction_mode_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_sampler_reduction_mode_EXT reductionMode;

S_sampler_reduction_mode_create_info_EXT(){}

S_sampler_reduction_mode_create_info_EXT(
	E_sampler_reduction_mode_EXT reductionMode_)
	:reductionMode(reductionMode_)
{
}

S_sampler_reduction_mode_create_info_EXT( VkSamplerReductionModeCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sampler_reduction_mode_create_info_EXT ) );	}
S_sampler_reduction_mode_create_info_EXT& operator=( VkSamplerReductionModeCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sampler_reduction_mode_create_info_EXT ) ); return *this;	}
operator VkSamplerReductionModeCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkSamplerReductionModeCreateInfoEXT*>(this);	}
operator VkSamplerReductionModeCreateInfoEXT &() 
	{	return *reinterpret_cast<VkSamplerReductionModeCreateInfoEXT*>(this);	}

friend S_sampler_create_info;
};
static_assert(
	sizeof(S_sampler_reduction_mode_create_info_EXT) == sizeof(VkSamplerReductionModeCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkSamplerCreateInfo
ex:
	VkSamplerYcbcrConversionInfo
	VkSamplerReductionModeCreateInfoEXT
*/
struct		S_sampler_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkSamplerCreateFlags flags;
	E_filter magFilter;
	E_filter minFilter;
	E_sampler_mipmap_mode mipmapMode;
	E_sampler_address_mode addressModeU;
	E_sampler_address_mode addressModeV;
	E_sampler_address_mode addressModeW;
	float mipLodBias;
	VkBool32 anisotropyEnable;
	float maxAnisotropy;
	VkBool32 compareEnable;
	E_compare_op compareOp;
	float minLod;
	float maxLod;
	E_border_color borderColor;
	VkBool32 unnormalizedCoordinates;

S_sampler_create_info(){}

S_sampler_create_info(
	VkSamplerCreateFlags flags_,
	E_filter magFilter_,
	E_filter minFilter_,
	E_sampler_mipmap_mode mipmapMode_,
	E_sampler_address_mode addressModeU_,
	E_sampler_address_mode addressModeV_,
	E_sampler_address_mode addressModeW_,
	float mipLodBias_,
	VkBool32 anisotropyEnable_,
	float maxAnisotropy_,
	VkBool32 compareEnable_,
	E_compare_op compareOp_,
	float minLod_,
	float maxLod_,
	E_border_color borderColor_,
	VkBool32 unnormalizedCoordinates_)
	:flags(flags_)
	,magFilter(magFilter_)
	,minFilter(minFilter_)
	,mipmapMode(mipmapMode_)
	,addressModeU(addressModeU_)
	,addressModeV(addressModeV_)
	,addressModeW(addressModeW_)
	,mipLodBias(mipLodBias_)
	,anisotropyEnable(anisotropyEnable_)
	,maxAnisotropy(maxAnisotropy_)
	,compareEnable(compareEnable_)
	,compareOp(compareOp_)
	,minLod(minLod_)
	,maxLod(maxLod_)
	,borderColor(borderColor_)
	,unnormalizedCoordinates(unnormalizedCoordinates_)
{
}

S_sampler_create_info( VkSamplerCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sampler_create_info ) );	}
S_sampler_create_info& operator=( VkSamplerCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sampler_create_info ) ); return *this;	}
operator VkSamplerCreateInfo const&() const 
	{	return *reinterpret_cast<const VkSamplerCreateInfo*>(this);	}
operator VkSamplerCreateInfo &() 
	{	return *reinterpret_cast<VkSamplerCreateInfo*>(this);	}

S_sampler_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
S_sampler_create_info& n_sampler_reduction_mode_create_info_EXT(S_sampler_reduction_mode_create_info_EXT const& next_);
};
static_assert(
	sizeof(S_sampler_create_info) == sizeof(VkSamplerCreateInfo),
	"struct and wrapper have different size!");

struct N_sampler_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_sampler_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
N_sampler_create_info& n_sampler_reduction_mode_create_info_EXT(S_sampler_reduction_mode_create_info_EXT const& next_);
};

/*	VkCommandPoolCreateInfo
*/
struct		S_command_pool_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_command_pool_create flags;
	uint32_t queueFamilyIndex;

S_command_pool_create_info(){}

S_command_pool_create_info(
	F_command_pool_create flags_,
	uint32_t queueFamilyIndex_)
	:flags(flags_)
	,queueFamilyIndex(queueFamilyIndex_)
{
}

S_command_pool_create_info( VkCommandPoolCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_command_pool_create_info ) );	}
S_command_pool_create_info& operator=( VkCommandPoolCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_command_pool_create_info ) ); return *this;	}
operator VkCommandPoolCreateInfo const&() const 
	{	return *reinterpret_cast<const VkCommandPoolCreateInfo*>(this);	}
operator VkCommandPoolCreateInfo &() 
	{	return *reinterpret_cast<VkCommandPoolCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_command_pool_create_info) == sizeof(VkCommandPoolCreateInfo),
	"struct and wrapper have different size!");

/*	VkCommandBufferAllocateInfo
*/
struct		S_command_buffer_allocate_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	 void * pNext = nullptr;
public:
	VkCommandPool commandPool;
	E_command_buffer_level level;
	uint32_t commandBufferCount;

S_command_buffer_allocate_info(){}

S_command_buffer_allocate_info(
	VkCommandPool commandPool_,
	E_command_buffer_level level_,
	uint32_t commandBufferCount_)
	:commandPool(commandPool_)
	,level(level_)
	,commandBufferCount(commandBufferCount_)
{
}

S_command_buffer_allocate_info( VkCommandBufferAllocateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_command_buffer_allocate_info ) );	}
S_command_buffer_allocate_info& operator=( VkCommandBufferAllocateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_command_buffer_allocate_info ) ); return *this;	}
operator VkCommandBufferAllocateInfo const&() const 
	{	return *reinterpret_cast<const VkCommandBufferAllocateInfo*>(this);	}
operator VkCommandBufferAllocateInfo &() 
	{	return *reinterpret_cast<VkCommandBufferAllocateInfo*>(this);	}
};
static_assert(
	sizeof(S_command_buffer_allocate_info) == sizeof(VkCommandBufferAllocateInfo),
	"struct and wrapper have different size!");

/*	VkCommandBufferInheritanceConditionalRenderingInfoEXT
ex to: VkCommandBufferInheritanceInfo
*/
struct		S_command_buffer_inheritance_conditional_rendering_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkBool32 conditionalRenderingEnable;

S_command_buffer_inheritance_conditional_rendering_info_EXT(){}

S_command_buffer_inheritance_conditional_rendering_info_EXT(
	VkBool32 conditionalRenderingEnable_)
	:conditionalRenderingEnable(conditionalRenderingEnable_)
{
}

S_command_buffer_inheritance_conditional_rendering_info_EXT( VkCommandBufferInheritanceConditionalRenderingInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_command_buffer_inheritance_conditional_rendering_info_EXT ) );	}
S_command_buffer_inheritance_conditional_rendering_info_EXT& operator=( VkCommandBufferInheritanceConditionalRenderingInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_command_buffer_inheritance_conditional_rendering_info_EXT ) ); return *this;	}
operator VkCommandBufferInheritanceConditionalRenderingInfoEXT const&() const 
	{	return *reinterpret_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT*>(this);	}
operator VkCommandBufferInheritanceConditionalRenderingInfoEXT &() 
	{	return *reinterpret_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT*>(this);	}

friend S_command_buffer_inheritance_info;
};
static_assert(
	sizeof(S_command_buffer_inheritance_conditional_rendering_info_EXT) == sizeof(VkCommandBufferInheritanceConditionalRenderingInfoEXT),
	"struct and wrapper have different size!");

/*	VkCommandBufferInheritanceInfo
ex:
	VkCommandBufferInheritanceConditionalRenderingInfoEXT
*/
struct		S_command_buffer_inheritance_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
	 void * pNext = nullptr;
public:
	VkRenderPass renderPass;
	uint32_t subpass;
	VkFramebuffer framebuffer;
	VkBool32 occlusionQueryEnable;
	F_query_control queryFlags;
	F_query_pipeline_statistic pipelineStatistics;

S_command_buffer_inheritance_info(){}

S_command_buffer_inheritance_info(
	VkRenderPass renderPass_,
	uint32_t subpass_,
	VkFramebuffer framebuffer_,
	VkBool32 occlusionQueryEnable_,
	F_query_control queryFlags_,
	F_query_pipeline_statistic pipelineStatistics_)
	:renderPass(renderPass_)
	,subpass(subpass_)
	,framebuffer(framebuffer_)
	,occlusionQueryEnable(occlusionQueryEnable_)
	,queryFlags(queryFlags_)
	,pipelineStatistics(pipelineStatistics_)
{
}

S_command_buffer_inheritance_info( VkCommandBufferInheritanceInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_command_buffer_inheritance_info ) );	}
S_command_buffer_inheritance_info& operator=( VkCommandBufferInheritanceInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_command_buffer_inheritance_info ) ); return *this;	}
operator VkCommandBufferInheritanceInfo const&() const 
	{	return *reinterpret_cast<const VkCommandBufferInheritanceInfo*>(this);	}
operator VkCommandBufferInheritanceInfo &() 
	{	return *reinterpret_cast<VkCommandBufferInheritanceInfo*>(this);	}

S_command_buffer_inheritance_info& n_command_buffer_inheritance_conditional_rendering_info_EXT(S_command_buffer_inheritance_conditional_rendering_info_EXT const& next_);
};
static_assert(
	sizeof(S_command_buffer_inheritance_info) == sizeof(VkCommandBufferInheritanceInfo),
	"struct and wrapper have different size!");

struct N_command_buffer_inheritance_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_command_buffer_inheritance_info& n_command_buffer_inheritance_conditional_rendering_info_EXT(S_command_buffer_inheritance_conditional_rendering_info_EXT const& next_);
};

/*	VkDeviceGroupCommandBufferBeginInfo
ex to: VkCommandBufferBeginInfo
*/
struct		S_device_group_command_buffer_begin_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
	 void * pNext = nullptr;
public:
	uint32_t deviceMask;

S_device_group_command_buffer_begin_info(){}

S_device_group_command_buffer_begin_info(
	uint32_t deviceMask_)
	:deviceMask(deviceMask_)
{
}

S_device_group_command_buffer_begin_info( VkDeviceGroupCommandBufferBeginInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_command_buffer_begin_info ) );	}
S_device_group_command_buffer_begin_info& operator=( VkDeviceGroupCommandBufferBeginInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_command_buffer_begin_info ) ); return *this;	}
operator VkDeviceGroupCommandBufferBeginInfo const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupCommandBufferBeginInfo*>(this);	}
operator VkDeviceGroupCommandBufferBeginInfo &() 
	{	return *reinterpret_cast<VkDeviceGroupCommandBufferBeginInfo*>(this);	}

friend S_command_buffer_begin_info;
};
static_assert(
	sizeof(S_device_group_command_buffer_begin_info) == sizeof(VkDeviceGroupCommandBufferBeginInfo),
	"struct and wrapper have different size!");

/*	VkCommandBufferBeginInfo
ex:
	VkDeviceGroupCommandBufferBeginInfo
*/
struct		S_command_buffer_begin_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
	 void * pNext = nullptr;
public:
	F_command_buffer_usage flags;
	const S_command_buffer_inheritance_info * pInheritanceInfo;

S_command_buffer_begin_info(){}

S_command_buffer_begin_info(
	F_command_buffer_usage flags_,
	const S_command_buffer_inheritance_info * pInheritanceInfo_)
	:flags(flags_)
	,pInheritanceInfo(pInheritanceInfo_)
{
}

S_command_buffer_begin_info( VkCommandBufferBeginInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_command_buffer_begin_info ) );	}
S_command_buffer_begin_info& operator=( VkCommandBufferBeginInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_command_buffer_begin_info ) ); return *this;	}
operator VkCommandBufferBeginInfo const&() const 
	{	return *reinterpret_cast<const VkCommandBufferBeginInfo*>(this);	}
operator VkCommandBufferBeginInfo &() 
	{	return *reinterpret_cast<VkCommandBufferBeginInfo*>(this);	}

S_command_buffer_begin_info& n_device_group_command_buffer_begin_info(S_device_group_command_buffer_begin_info const& next_);
};
static_assert(
	sizeof(S_command_buffer_begin_info) == sizeof(VkCommandBufferBeginInfo),
	"struct and wrapper have different size!");

struct N_command_buffer_begin_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_command_buffer_begin_info& n_device_group_command_buffer_begin_info(S_device_group_command_buffer_begin_info const& next_);
};

/*	VkDeviceGroupRenderPassBeginInfo
ex to: VkRenderPassBeginInfo
*/
struct		S_device_group_render_pass_begin_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;
	 void * pNext = nullptr;
public:
	uint32_t deviceMask;
	uint32_t deviceRenderAreaCount;
	const S_rect_2d * pDeviceRenderAreas;

S_device_group_render_pass_begin_info(){}

S_device_group_render_pass_begin_info(
	uint32_t deviceMask_,
	uint32_t deviceRenderAreaCount_,
	const S_rect_2d * pDeviceRenderAreas_)
	:deviceMask(deviceMask_)
	,deviceRenderAreaCount(deviceRenderAreaCount_)
	,pDeviceRenderAreas(pDeviceRenderAreas_)
{
}

S_device_group_render_pass_begin_info( VkDeviceGroupRenderPassBeginInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_render_pass_begin_info ) );	}
S_device_group_render_pass_begin_info& operator=( VkDeviceGroupRenderPassBeginInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_render_pass_begin_info ) ); return *this;	}
operator VkDeviceGroupRenderPassBeginInfo const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo*>(this);	}
operator VkDeviceGroupRenderPassBeginInfo &() 
	{	return *reinterpret_cast<VkDeviceGroupRenderPassBeginInfo*>(this);	}

friend S_render_pass_begin_info;
};
static_assert(
	sizeof(S_device_group_render_pass_begin_info) == sizeof(VkDeviceGroupRenderPassBeginInfo),
	"struct and wrapper have different size!");

/*	VkAttachmentSampleLocationsEXT
*/
struct		S_attachment_sample_locations_EXT{
	uint32_t attachmentIndex;
	S_sample_locations_info_EXT sampleLocationsInfo;

S_attachment_sample_locations_EXT(){}
};

/*	VkSubpassSampleLocationsEXT
*/
struct		S_subpass_sample_locations_EXT{
	uint32_t subpassIndex;
	S_sample_locations_info_EXT sampleLocationsInfo;

S_subpass_sample_locations_EXT(){}
};

/*	VkRenderPassSampleLocationsBeginInfoEXT
ex to: VkRenderPassBeginInfo
*/
struct		S_render_pass_sample_locations_begin_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint32_t attachmentInitialSampleLocationsCount;
	const S_attachment_sample_locations_EXT * pAttachmentInitialSampleLocations;
	uint32_t postSubpassSampleLocationsCount;
	const S_subpass_sample_locations_EXT * pPostSubpassSampleLocations;

S_render_pass_sample_locations_begin_info_EXT(){}

S_render_pass_sample_locations_begin_info_EXT(
	uint32_t attachmentInitialSampleLocationsCount_,
	const S_attachment_sample_locations_EXT * pAttachmentInitialSampleLocations_,
	uint32_t postSubpassSampleLocationsCount_,
	const S_subpass_sample_locations_EXT * pPostSubpassSampleLocations_)
	:attachmentInitialSampleLocationsCount(attachmentInitialSampleLocationsCount_)
	,pAttachmentInitialSampleLocations(pAttachmentInitialSampleLocations_)
	,postSubpassSampleLocationsCount(postSubpassSampleLocationsCount_)
	,pPostSubpassSampleLocations(pPostSubpassSampleLocations_)
{
}

S_render_pass_sample_locations_begin_info_EXT( VkRenderPassSampleLocationsBeginInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_render_pass_sample_locations_begin_info_EXT ) );	}
S_render_pass_sample_locations_begin_info_EXT& operator=( VkRenderPassSampleLocationsBeginInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_render_pass_sample_locations_begin_info_EXT ) ); return *this;	}
operator VkRenderPassSampleLocationsBeginInfoEXT const&() const 
	{	return *reinterpret_cast<const VkRenderPassSampleLocationsBeginInfoEXT*>(this);	}
operator VkRenderPassSampleLocationsBeginInfoEXT &() 
	{	return *reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT*>(this);	}

friend S_render_pass_begin_info;
};
static_assert(
	sizeof(S_render_pass_sample_locations_begin_info_EXT) == sizeof(VkRenderPassSampleLocationsBeginInfoEXT),
	"struct and wrapper have different size!");

/*	VkRenderPassBeginInfo
ex:
	VkDeviceGroupRenderPassBeginInfo
	VkRenderPassSampleLocationsBeginInfoEXT
*/
struct		S_render_pass_begin_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
	 void * pNext = nullptr;
public:
	VkRenderPass renderPass;
	VkFramebuffer framebuffer;
	S_rect_2d renderArea;
	uint32_t clearValueCount;
	const VkClearValue * pClearValues;

S_render_pass_begin_info(){}

S_render_pass_begin_info(
	VkRenderPass renderPass_,
	VkFramebuffer framebuffer_,
	S_rect_2d renderArea_,
	uint32_t clearValueCount_,
	const VkClearValue * pClearValues_)
	:renderPass(renderPass_)
	,framebuffer(framebuffer_)
	,renderArea(renderArea_)
	,clearValueCount(clearValueCount_)
	,pClearValues(pClearValues_)
{
}

S_render_pass_begin_info( VkRenderPassBeginInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_render_pass_begin_info ) );	}
S_render_pass_begin_info& operator=( VkRenderPassBeginInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_render_pass_begin_info ) ); return *this;	}
operator VkRenderPassBeginInfo const&() const 
	{	return *reinterpret_cast<const VkRenderPassBeginInfo*>(this);	}
operator VkRenderPassBeginInfo &() 
	{	return *reinterpret_cast<VkRenderPassBeginInfo*>(this);	}

S_render_pass_begin_info& n_device_group_render_pass_begin_info(S_device_group_render_pass_begin_info const& next_);
S_render_pass_begin_info& n_render_pass_sample_locations_begin_info_EXT(S_render_pass_sample_locations_begin_info_EXT const& next_);
};
static_assert(
	sizeof(S_render_pass_begin_info) == sizeof(VkRenderPassBeginInfo),
	"struct and wrapper have different size!");

struct N_render_pass_begin_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_render_pass_begin_info& n_device_group_render_pass_begin_info(S_device_group_render_pass_begin_info const& next_);
N_render_pass_begin_info& n_render_pass_sample_locations_begin_info_EXT(S_render_pass_sample_locations_begin_info_EXT const& next_);
};

/*	VkClearDepthStencilValue
*/
struct		S_clear_depth_stencil_value{
	float depth;
	uint32_t stencil;

S_clear_depth_stencil_value(){}
};

/*	VkClearAttachment
*/
struct		S_clear_attachment{
	F_image_aspect aspectMask;
	uint32_t colorAttachment;
	VkClearValue clearValue;

S_clear_attachment(){}
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

S_attachment_description(){}
};

/*	VkAttachmentReference
*/
struct		S_attachment_reference{
	uint32_t attachment;
	E_image_layout layout;

S_attachment_reference(){}
};

/*	VkSubpassDescription
*/
struct		S_subpass_description{
	F_subpass_description flags;
	E_pipeline_bind_point pipelineBindPoint;
	uint32_t inputAttachmentCount;
	const S_attachment_reference * pInputAttachments;
	uint32_t colorAttachmentCount;
	const S_attachment_reference * pColorAttachments;
	const S_attachment_reference * pResolveAttachments;
	const S_attachment_reference * pDepthStencilAttachment;
	uint32_t preserveAttachmentCount;
	const uint32_t * pPreserveAttachments;

S_subpass_description(){}
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

S_subpass_dependency(){}
};

/*	VkRenderPassMultiviewCreateInfo
ex to: VkRenderPassCreateInfo
*/
struct		S_render_pass_multiview_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;
	 void * pNext = nullptr;
public:
	uint32_t subpassCount;
	const uint32_t * pViewMasks;
	uint32_t dependencyCount;
	const int32_t * pViewOffsets;
	uint32_t correlationMaskCount;
	const uint32_t * pCorrelationMasks;

S_render_pass_multiview_create_info(){}

S_render_pass_multiview_create_info(
	uint32_t subpassCount_,
	const uint32_t * pViewMasks_,
	uint32_t dependencyCount_,
	const int32_t * pViewOffsets_,
	uint32_t correlationMaskCount_,
	const uint32_t * pCorrelationMasks_)
	:subpassCount(subpassCount_)
	,pViewMasks(pViewMasks_)
	,dependencyCount(dependencyCount_)
	,pViewOffsets(pViewOffsets_)
	,correlationMaskCount(correlationMaskCount_)
	,pCorrelationMasks(pCorrelationMasks_)
{
}

S_render_pass_multiview_create_info( VkRenderPassMultiviewCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_render_pass_multiview_create_info ) );	}
S_render_pass_multiview_create_info& operator=( VkRenderPassMultiviewCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_render_pass_multiview_create_info ) ); return *this;	}
operator VkRenderPassMultiviewCreateInfo const&() const 
	{	return *reinterpret_cast<const VkRenderPassMultiviewCreateInfo*>(this);	}
operator VkRenderPassMultiviewCreateInfo &() 
	{	return *reinterpret_cast<VkRenderPassMultiviewCreateInfo*>(this);	}

friend S_render_pass_create_info;
};
static_assert(
	sizeof(S_render_pass_multiview_create_info) == sizeof(VkRenderPassMultiviewCreateInfo),
	"struct and wrapper have different size!");

/*	VkInputAttachmentAspectReference
*/
struct		S_input_attachment_aspect_reference{
	uint32_t subpass;
	uint32_t inputAttachmentIndex;
	F_image_aspect aspectMask;

S_input_attachment_aspect_reference(){}
};

/*	VkRenderPassInputAttachmentAspectCreateInfo
ex to: VkRenderPassCreateInfo
*/
struct		S_render_pass_input_attachment_aspect_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;
	 void * pNext = nullptr;
public:
	uint32_t aspectReferenceCount;
	const S_input_attachment_aspect_reference * pAspectReferences;

S_render_pass_input_attachment_aspect_create_info(){}

S_render_pass_input_attachment_aspect_create_info(
	uint32_t aspectReferenceCount_,
	const S_input_attachment_aspect_reference * pAspectReferences_)
	:aspectReferenceCount(aspectReferenceCount_)
	,pAspectReferences(pAspectReferences_)
{
}

S_render_pass_input_attachment_aspect_create_info( VkRenderPassInputAttachmentAspectCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_render_pass_input_attachment_aspect_create_info ) );	}
S_render_pass_input_attachment_aspect_create_info& operator=( VkRenderPassInputAttachmentAspectCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_render_pass_input_attachment_aspect_create_info ) ); return *this;	}
operator VkRenderPassInputAttachmentAspectCreateInfo const&() const 
	{	return *reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo*>(this);	}
operator VkRenderPassInputAttachmentAspectCreateInfo &() 
	{	return *reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfo*>(this);	}

friend S_render_pass_create_info;
};
static_assert(
	sizeof(S_render_pass_input_attachment_aspect_create_info) == sizeof(VkRenderPassInputAttachmentAspectCreateInfo),
	"struct and wrapper have different size!");

/*	VkRenderPassCreateInfo
ex:
	VkRenderPassMultiviewCreateInfo
	VkRenderPassInputAttachmentAspectCreateInfo
*/
struct		S_render_pass_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_render_pass_create flags;
	uint32_t attachmentCount;
	const S_attachment_description * pAttachments;
	uint32_t subpassCount;
	const S_subpass_description * pSubpasses;
	uint32_t dependencyCount;
	const S_subpass_dependency * pDependencies;

S_render_pass_create_info(){}

S_render_pass_create_info(
	F_render_pass_create flags_,
	uint32_t attachmentCount_,
	const S_attachment_description * pAttachments_,
	uint32_t subpassCount_,
	const S_subpass_description * pSubpasses_,
	uint32_t dependencyCount_,
	const S_subpass_dependency * pDependencies_)
	:flags(flags_)
	,attachmentCount(attachmentCount_)
	,pAttachments(pAttachments_)
	,subpassCount(subpassCount_)
	,pSubpasses(pSubpasses_)
	,dependencyCount(dependencyCount_)
	,pDependencies(pDependencies_)
{
}

S_render_pass_create_info( VkRenderPassCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_render_pass_create_info ) );	}
S_render_pass_create_info& operator=( VkRenderPassCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_render_pass_create_info ) ); return *this;	}
operator VkRenderPassCreateInfo const&() const 
	{	return *reinterpret_cast<const VkRenderPassCreateInfo*>(this);	}
operator VkRenderPassCreateInfo &() 
	{	return *reinterpret_cast<VkRenderPassCreateInfo*>(this);	}

S_render_pass_create_info& n_render_pass_multiview_create_info(S_render_pass_multiview_create_info const& next_);
S_render_pass_create_info& n_render_pass_input_attachment_aspect_create_info(S_render_pass_input_attachment_aspect_create_info const& next_);
};
static_assert(
	sizeof(S_render_pass_create_info) == sizeof(VkRenderPassCreateInfo),
	"struct and wrapper have different size!");

struct N_render_pass_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_render_pass_create_info& n_render_pass_multiview_create_info(S_render_pass_multiview_create_info const& next_);
N_render_pass_create_info& n_render_pass_input_attachment_aspect_create_info(S_render_pass_input_attachment_aspect_create_info const& next_);
};

/*	VkEventCreateInfo
*/
struct		S_event_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkEventCreateFlags flags;

S_event_create_info(){}

S_event_create_info(
	VkEventCreateFlags flags_)
	:flags(flags_)
{
}

S_event_create_info( VkEventCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_event_create_info ) );	}
S_event_create_info& operator=( VkEventCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_event_create_info ) ); return *this;	}
operator VkEventCreateInfo const&() const 
	{	return *reinterpret_cast<const VkEventCreateInfo*>(this);	}
operator VkEventCreateInfo &() 
	{	return *reinterpret_cast<VkEventCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_event_create_info) == sizeof(VkEventCreateInfo),
	"struct and wrapper have different size!");

/*	VkExportFenceCreateInfo
ex to: VkFenceCreateInfo
*/
struct		S_export_fence_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_external_fence_handle_type handleTypes;

S_export_fence_create_info(){}

S_export_fence_create_info(
	F_external_fence_handle_type handleTypes_)
	:handleTypes(handleTypes_)
{
}

S_export_fence_create_info( VkExportFenceCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_fence_create_info ) );	}
S_export_fence_create_info& operator=( VkExportFenceCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_fence_create_info ) ); return *this;	}
operator VkExportFenceCreateInfo const&() const 
	{	return *reinterpret_cast<const VkExportFenceCreateInfo*>(this);	}
operator VkExportFenceCreateInfo &() 
	{	return *reinterpret_cast<VkExportFenceCreateInfo*>(this);	}

friend S_fence_create_info;
};
static_assert(
	sizeof(S_export_fence_create_info) == sizeof(VkExportFenceCreateInfo),
	"struct and wrapper have different size!");

/*	VkExportFenceWin32HandleInfoKHR
ex to: VkFenceCreateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_export_fence_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	const SECURITY_ATTRIBUTES * pAttributes;
	DWORD dwAccess;
	LPCWSTR name;

S_export_fence_win32_handle_info_KHR(){}

S_export_fence_win32_handle_info_KHR(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_,
	LPCWSTR name_)
	:pAttributes(pAttributes_)
	,dwAccess(dwAccess_)
	,name(name_)
{
}

S_export_fence_win32_handle_info_KHR( VkExportFenceWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_fence_win32_handle_info_KHR ) );	}
S_export_fence_win32_handle_info_KHR& operator=( VkExportFenceWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_fence_win32_handle_info_KHR ) ); return *this;	}
operator VkExportFenceWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkExportFenceWin32HandleInfoKHR*>(this);	}
operator VkExportFenceWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkExportFenceWin32HandleInfoKHR*>(this);	}

friend S_fence_create_info;
};
static_assert(
	sizeof(S_export_fence_win32_handle_info_KHR) == sizeof(VkExportFenceWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkFenceCreateInfo
ex:
	VkExportFenceCreateInfo
	VkExportFenceWin32HandleInfoKHR
*/
struct		S_fence_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_fence_create flags;

S_fence_create_info(){}

S_fence_create_info(
	F_fence_create flags_)
	:flags(flags_)
{
}

S_fence_create_info( VkFenceCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_fence_create_info ) );	}
S_fence_create_info& operator=( VkFenceCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_fence_create_info ) ); return *this;	}
operator VkFenceCreateInfo const&() const 
	{	return *reinterpret_cast<const VkFenceCreateInfo*>(this);	}
operator VkFenceCreateInfo &() 
	{	return *reinterpret_cast<VkFenceCreateInfo*>(this);	}

S_fence_create_info& n_export_fence_create_info(S_export_fence_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_fence_create_info& n_export_fence_win32_handle_info_KHR(S_export_fence_win32_handle_info_KHR const& next_);
#endif
};
static_assert(
	sizeof(S_fence_create_info) == sizeof(VkFenceCreateInfo),
	"struct and wrapper have different size!");

struct N_fence_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_fence_create_info& n_export_fence_create_info(S_export_fence_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_fence_create_info& n_export_fence_win32_handle_info_KHR(S_export_fence_win32_handle_info_KHR const& next_);
#endif
};

/*	VkExportSemaphoreCreateInfo
ex to: VkSemaphoreCreateInfo
*/
struct		S_export_semaphore_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	F_external_semaphore_handle_type handleTypes;

S_export_semaphore_create_info(){}

S_export_semaphore_create_info(
	F_external_semaphore_handle_type handleTypes_)
	:handleTypes(handleTypes_)
{
}

S_export_semaphore_create_info( VkExportSemaphoreCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_semaphore_create_info ) );	}
S_export_semaphore_create_info& operator=( VkExportSemaphoreCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_semaphore_create_info ) ); return *this;	}
operator VkExportSemaphoreCreateInfo const&() const 
	{	return *reinterpret_cast<const VkExportSemaphoreCreateInfo*>(this);	}
operator VkExportSemaphoreCreateInfo &() 
	{	return *reinterpret_cast<VkExportSemaphoreCreateInfo*>(this);	}

friend S_semaphore_create_info;
};
static_assert(
	sizeof(S_export_semaphore_create_info) == sizeof(VkExportSemaphoreCreateInfo),
	"struct and wrapper have different size!");

/*	VkExportSemaphoreWin32HandleInfoKHR
ex to: VkSemaphoreCreateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_export_semaphore_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	const SECURITY_ATTRIBUTES * pAttributes;
	DWORD dwAccess;
	LPCWSTR name;

S_export_semaphore_win32_handle_info_KHR(){}

S_export_semaphore_win32_handle_info_KHR(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_,
	LPCWSTR name_)
	:pAttributes(pAttributes_)
	,dwAccess(dwAccess_)
	,name(name_)
{
}

S_export_semaphore_win32_handle_info_KHR( VkExportSemaphoreWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_export_semaphore_win32_handle_info_KHR ) );	}
S_export_semaphore_win32_handle_info_KHR& operator=( VkExportSemaphoreWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_export_semaphore_win32_handle_info_KHR ) ); return *this;	}
operator VkExportSemaphoreWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkExportSemaphoreWin32HandleInfoKHR*>(this);	}
operator VkExportSemaphoreWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHR*>(this);	}

friend S_semaphore_create_info;
};
static_assert(
	sizeof(S_export_semaphore_win32_handle_info_KHR) == sizeof(VkExportSemaphoreWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkSemaphoreCreateInfo
ex:
	VkExportSemaphoreCreateInfo
	VkExportSemaphoreWin32HandleInfoKHR
*/
struct		S_semaphore_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkSemaphoreCreateFlags flags;

S_semaphore_create_info(){}

S_semaphore_create_info(
	VkSemaphoreCreateFlags flags_)
	:flags(flags_)
{
}

S_semaphore_create_info( VkSemaphoreCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_semaphore_create_info ) );	}
S_semaphore_create_info& operator=( VkSemaphoreCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_semaphore_create_info ) ); return *this;	}
operator VkSemaphoreCreateInfo const&() const 
	{	return *reinterpret_cast<const VkSemaphoreCreateInfo*>(this);	}
operator VkSemaphoreCreateInfo &() 
	{	return *reinterpret_cast<VkSemaphoreCreateInfo*>(this);	}

S_semaphore_create_info& n_export_semaphore_create_info(S_export_semaphore_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_semaphore_create_info& n_export_semaphore_win32_handle_info_KHR(S_export_semaphore_win32_handle_info_KHR const& next_);
#endif
};
static_assert(
	sizeof(S_semaphore_create_info) == sizeof(VkSemaphoreCreateInfo),
	"struct and wrapper have different size!");

struct N_semaphore_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_semaphore_create_info& n_export_semaphore_create_info(S_export_semaphore_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_semaphore_create_info& n_export_semaphore_win32_handle_info_KHR(S_export_semaphore_win32_handle_info_KHR const& next_);
#endif
};

/*	VkQueryPoolCreateInfo
*/
struct		S_query_pool_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkQueryPoolCreateFlags flags;
	E_query_type queryType;
	uint32_t queryCount;
	F_query_pipeline_statistic pipelineStatistics;

S_query_pool_create_info(){}

S_query_pool_create_info(
	VkQueryPoolCreateFlags flags_,
	E_query_type queryType_,
	uint32_t queryCount_,
	F_query_pipeline_statistic pipelineStatistics_)
	:flags(flags_)
	,queryType(queryType_)
	,queryCount(queryCount_)
	,pipelineStatistics(pipelineStatistics_)
{
}

S_query_pool_create_info( VkQueryPoolCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_query_pool_create_info ) );	}
S_query_pool_create_info& operator=( VkQueryPoolCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_query_pool_create_info ) ); return *this;	}
operator VkQueryPoolCreateInfo const&() const 
	{	return *reinterpret_cast<const VkQueryPoolCreateInfo*>(this);	}
operator VkQueryPoolCreateInfo &() 
	{	return *reinterpret_cast<VkQueryPoolCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_query_pool_create_info) == sizeof(VkQueryPoolCreateInfo),
	"struct and wrapper have different size!");

/*	VkFramebufferCreateInfo
*/
struct		S_framebuffer_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
	 void * pNext = nullptr;
public:
	VkFramebufferCreateFlags flags;
	VkRenderPass renderPass;
	uint32_t attachmentCount;
	const VkImageView * pAttachments;
	uint32_t width;
	uint32_t height;
	uint32_t layers;

S_framebuffer_create_info(){}

S_framebuffer_create_info(
	VkFramebufferCreateFlags flags_,
	VkRenderPass renderPass_,
	uint32_t attachmentCount_,
	const VkImageView * pAttachments_,
	uint32_t width_,
	uint32_t height_,
	uint32_t layers_)
	:flags(flags_)
	,renderPass(renderPass_)
	,attachmentCount(attachmentCount_)
	,pAttachments(pAttachments_)
	,width(width_)
	,height(height_)
	,layers(layers_)
{
}

S_framebuffer_create_info( VkFramebufferCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_framebuffer_create_info ) );	}
S_framebuffer_create_info& operator=( VkFramebufferCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_framebuffer_create_info ) ); return *this;	}
operator VkFramebufferCreateInfo const&() const 
	{	return *reinterpret_cast<const VkFramebufferCreateInfo*>(this);	}
operator VkFramebufferCreateInfo &() 
	{	return *reinterpret_cast<VkFramebufferCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_framebuffer_create_info) == sizeof(VkFramebufferCreateInfo),
	"struct and wrapper have different size!");

/*	VkDrawIndirectCommand
*/
struct		S_draw_indirect_command{
	uint32_t vertexCount;
	uint32_t instanceCount;
	uint32_t firstVertex;
	uint32_t firstInstance;

S_draw_indirect_command(){}
};

/*	VkDrawIndexedIndirectCommand
*/
struct		S_draw_indexed_indirect_command{
	uint32_t indexCount;
	uint32_t instanceCount;
	uint32_t firstIndex;
	int32_t vertexOffset;
	uint32_t firstInstance;

S_draw_indexed_indirect_command(){}
};

/*	VkDispatchIndirectCommand
*/
struct		S_dispatch_indirect_command{
	uint32_t x;
	uint32_t y;
	uint32_t z;

S_dispatch_indirect_command(){}
};

/*	VkWin32KeyedMutexAcquireReleaseInfoNV
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_win32_keyed_mutex_acquire_release_info_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;
	 void * pNext = nullptr;
public:
	uint32_t acquireCount;
	const VkDeviceMemory * pAcquireSyncs;
	const uint64_t * pAcquireKeys;
	const uint32_t * pAcquireTimeoutMilliseconds;
	uint32_t releaseCount;
	const VkDeviceMemory * pReleaseSyncs;
	const uint64_t * pReleaseKeys;

S_win32_keyed_mutex_acquire_release_info_NV(){}

S_win32_keyed_mutex_acquire_release_info_NV(
	uint32_t acquireCount_,
	const VkDeviceMemory * pAcquireSyncs_,
	const uint64_t * pAcquireKeys_,
	const uint32_t * pAcquireTimeoutMilliseconds_,
	uint32_t releaseCount_,
	const VkDeviceMemory * pReleaseSyncs_,
	const uint64_t * pReleaseKeys_)
	:acquireCount(acquireCount_)
	,pAcquireSyncs(pAcquireSyncs_)
	,pAcquireKeys(pAcquireKeys_)
	,pAcquireTimeoutMilliseconds(pAcquireTimeoutMilliseconds_)
	,releaseCount(releaseCount_)
	,pReleaseSyncs(pReleaseSyncs_)
	,pReleaseKeys(pReleaseKeys_)
{
}

S_win32_keyed_mutex_acquire_release_info_NV( VkWin32KeyedMutexAcquireReleaseInfoNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_win32_keyed_mutex_acquire_release_info_NV ) );	}
S_win32_keyed_mutex_acquire_release_info_NV& operator=( VkWin32KeyedMutexAcquireReleaseInfoNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_win32_keyed_mutex_acquire_release_info_NV ) ); return *this;	}
operator VkWin32KeyedMutexAcquireReleaseInfoNV const&() const 
	{	return *reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoNV*>(this);	}
operator VkWin32KeyedMutexAcquireReleaseInfoNV &() 
	{	return *reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV*>(this);	}

friend S_submit_info;
};
static_assert(
	sizeof(S_win32_keyed_mutex_acquire_release_info_NV) == sizeof(VkWin32KeyedMutexAcquireReleaseInfoNV),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkWin32KeyedMutexAcquireReleaseInfoKHR
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_win32_keyed_mutex_acquire_release_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;
	 void * pNext = nullptr;
public:
	uint32_t acquireCount;
	const VkDeviceMemory * pAcquireSyncs;
	const uint64_t * pAcquireKeys;
	const uint32_t * pAcquireTimeouts;
	uint32_t releaseCount;
	const VkDeviceMemory * pReleaseSyncs;
	const uint64_t * pReleaseKeys;

S_win32_keyed_mutex_acquire_release_info_KHR(){}

S_win32_keyed_mutex_acquire_release_info_KHR(
	uint32_t acquireCount_,
	const VkDeviceMemory * pAcquireSyncs_,
	const uint64_t * pAcquireKeys_,
	const uint32_t * pAcquireTimeouts_,
	uint32_t releaseCount_,
	const VkDeviceMemory * pReleaseSyncs_,
	const uint64_t * pReleaseKeys_)
	:acquireCount(acquireCount_)
	,pAcquireSyncs(pAcquireSyncs_)
	,pAcquireKeys(pAcquireKeys_)
	,pAcquireTimeouts(pAcquireTimeouts_)
	,releaseCount(releaseCount_)
	,pReleaseSyncs(pReleaseSyncs_)
	,pReleaseKeys(pReleaseKeys_)
{
}

S_win32_keyed_mutex_acquire_release_info_KHR( VkWin32KeyedMutexAcquireReleaseInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_win32_keyed_mutex_acquire_release_info_KHR ) );	}
S_win32_keyed_mutex_acquire_release_info_KHR& operator=( VkWin32KeyedMutexAcquireReleaseInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_win32_keyed_mutex_acquire_release_info_KHR ) ); return *this;	}
operator VkWin32KeyedMutexAcquireReleaseInfoKHR const&() const 
	{	return *reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoKHR*>(this);	}
operator VkWin32KeyedMutexAcquireReleaseInfoKHR &() 
	{	return *reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR*>(this);	}

friend S_submit_info;
};
static_assert(
	sizeof(S_win32_keyed_mutex_acquire_release_info_KHR) == sizeof(VkWin32KeyedMutexAcquireReleaseInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkD3D12FenceSubmitInfoKHR
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_d_3d12_fence_submit_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;
	 void * pNext = nullptr;
public:
	uint32_t waitSemaphoreValuesCount;
	const uint64_t * pWaitSemaphoreValues;
	uint32_t signalSemaphoreValuesCount;
	const uint64_t * pSignalSemaphoreValues;

S_d_3d12_fence_submit_info_KHR(){}

S_d_3d12_fence_submit_info_KHR(
	uint32_t waitSemaphoreValuesCount_,
	const uint64_t * pWaitSemaphoreValues_,
	uint32_t signalSemaphoreValuesCount_,
	const uint64_t * pSignalSemaphoreValues_)
	:waitSemaphoreValuesCount(waitSemaphoreValuesCount_)
	,pWaitSemaphoreValues(pWaitSemaphoreValues_)
	,signalSemaphoreValuesCount(signalSemaphoreValuesCount_)
	,pSignalSemaphoreValues(pSignalSemaphoreValues_)
{
}

S_d_3d12_fence_submit_info_KHR( VkD3D12FenceSubmitInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_d_3d12_fence_submit_info_KHR ) );	}
S_d_3d12_fence_submit_info_KHR& operator=( VkD3D12FenceSubmitInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_d_3d12_fence_submit_info_KHR ) ); return *this;	}
operator VkD3D12FenceSubmitInfoKHR const&() const 
	{	return *reinterpret_cast<const VkD3D12FenceSubmitInfoKHR*>(this);	}
operator VkD3D12FenceSubmitInfoKHR &() 
	{	return *reinterpret_cast<VkD3D12FenceSubmitInfoKHR*>(this);	}

friend S_submit_info;
};
static_assert(
	sizeof(S_d_3d12_fence_submit_info_KHR) == sizeof(VkD3D12FenceSubmitInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkDeviceGroupSubmitInfo
ex to: VkSubmitInfo
*/
struct		S_device_group_submit_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;
	 void * pNext = nullptr;
public:
	uint32_t waitSemaphoreCount;
	const uint32_t * pWaitSemaphoreDeviceIndices;
	uint32_t commandBufferCount;
	const uint32_t * pCommandBufferDeviceMasks;
	uint32_t signalSemaphoreCount;
	const uint32_t * pSignalSemaphoreDeviceIndices;

S_device_group_submit_info(){}

S_device_group_submit_info(
	uint32_t waitSemaphoreCount_,
	const uint32_t * pWaitSemaphoreDeviceIndices_,
	uint32_t commandBufferCount_,
	const uint32_t * pCommandBufferDeviceMasks_,
	uint32_t signalSemaphoreCount_,
	const uint32_t * pSignalSemaphoreDeviceIndices_)
	:waitSemaphoreCount(waitSemaphoreCount_)
	,pWaitSemaphoreDeviceIndices(pWaitSemaphoreDeviceIndices_)
	,commandBufferCount(commandBufferCount_)
	,pCommandBufferDeviceMasks(pCommandBufferDeviceMasks_)
	,signalSemaphoreCount(signalSemaphoreCount_)
	,pSignalSemaphoreDeviceIndices(pSignalSemaphoreDeviceIndices_)
{
}

S_device_group_submit_info( VkDeviceGroupSubmitInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_submit_info ) );	}
S_device_group_submit_info& operator=( VkDeviceGroupSubmitInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_submit_info ) ); return *this;	}
operator VkDeviceGroupSubmitInfo const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupSubmitInfo*>(this);	}
operator VkDeviceGroupSubmitInfo &() 
	{	return *reinterpret_cast<VkDeviceGroupSubmitInfo*>(this);	}

friend S_submit_info;
};
static_assert(
	sizeof(S_device_group_submit_info) == sizeof(VkDeviceGroupSubmitInfo),
	"struct and wrapper have different size!");

/*	VkProtectedSubmitInfo
ex to: VkSubmitInfo
*/
struct		S_protected_submit_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;
	 void * pNext = nullptr;
public:
	VkBool32 protectedSubmit;

S_protected_submit_info(){}

S_protected_submit_info(
	VkBool32 protectedSubmit_)
	:protectedSubmit(protectedSubmit_)
{
}

S_protected_submit_info( VkProtectedSubmitInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_protected_submit_info ) );	}
S_protected_submit_info& operator=( VkProtectedSubmitInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_protected_submit_info ) ); return *this;	}
operator VkProtectedSubmitInfo const&() const 
	{	return *reinterpret_cast<const VkProtectedSubmitInfo*>(this);	}
operator VkProtectedSubmitInfo &() 
	{	return *reinterpret_cast<VkProtectedSubmitInfo*>(this);	}

friend S_submit_info;
};
static_assert(
	sizeof(S_protected_submit_info) == sizeof(VkProtectedSubmitInfo),
	"struct and wrapper have different size!");

/*	VkSubmitInfo
ex:
	VkWin32KeyedMutexAcquireReleaseInfoNV
	VkWin32KeyedMutexAcquireReleaseInfoKHR
	VkD3D12FenceSubmitInfoKHR
	VkDeviceGroupSubmitInfo
	VkProtectedSubmitInfo
*/
struct		S_submit_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
	 void * pNext = nullptr;
public:
	uint32_t waitSemaphoreCount;
	const VkSemaphore * pWaitSemaphores;
	const F_pipeline_stage * pWaitDstStageMask;
	uint32_t commandBufferCount;
	const VkCommandBuffer * pCommandBuffers;
	uint32_t signalSemaphoreCount;
	const VkSemaphore * pSignalSemaphores;

S_submit_info(){}

S_submit_info(
	uint32_t waitSemaphoreCount_,
	const VkSemaphore * pWaitSemaphores_,
	const F_pipeline_stage * pWaitDstStageMask_,
	uint32_t commandBufferCount_,
	const VkCommandBuffer * pCommandBuffers_,
	uint32_t signalSemaphoreCount_,
	const VkSemaphore * pSignalSemaphores_)
	:waitSemaphoreCount(waitSemaphoreCount_)
	,pWaitSemaphores(pWaitSemaphores_)
	,pWaitDstStageMask(pWaitDstStageMask_)
	,commandBufferCount(commandBufferCount_)
	,pCommandBuffers(pCommandBuffers_)
	,signalSemaphoreCount(signalSemaphoreCount_)
	,pSignalSemaphores(pSignalSemaphores_)
{
}

S_submit_info( VkSubmitInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_submit_info ) );	}
S_submit_info& operator=( VkSubmitInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_submit_info ) ); return *this;	}
operator VkSubmitInfo const&() const 
	{	return *reinterpret_cast<const VkSubmitInfo*>(this);	}
operator VkSubmitInfo &() 
	{	return *reinterpret_cast<VkSubmitInfo*>(this);	}

#ifdef VK_USE_PLATFORM_WIN32_KHR
S_submit_info& n_win32_keyed_mutex_acquire_release_info_NV(S_win32_keyed_mutex_acquire_release_info_NV const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_submit_info& n_win32_keyed_mutex_acquire_release_info_KHR(S_win32_keyed_mutex_acquire_release_info_KHR const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_submit_info& n_d_3d12_fence_submit_info_KHR(S_d_3d12_fence_submit_info_KHR const& next_);
#endif
S_submit_info& n_device_group_submit_info(S_device_group_submit_info const& next_);
S_submit_info& n_protected_submit_info(S_protected_submit_info const& next_);
};
static_assert(
	sizeof(S_submit_info) == sizeof(VkSubmitInfo),
	"struct and wrapper have different size!");

struct N_submit_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_submit_info& n_win32_keyed_mutex_acquire_release_info_NV(S_win32_keyed_mutex_acquire_release_info_NV const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_submit_info& n_win32_keyed_mutex_acquire_release_info_KHR(S_win32_keyed_mutex_acquire_release_info_KHR const& next_);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_submit_info& n_d_3d12_fence_submit_info_KHR(S_d_3d12_fence_submit_info_KHR const& next_);
#endif
N_submit_info& n_device_group_submit_info(S_device_group_submit_info const& next_);
N_submit_info& n_protected_submit_info(S_protected_submit_info const& next_);
};

/*	VkDisplayPropertiesKHR
(returnedonly)
*/
struct		S_display_properties_KHR{
	VkDisplayKHR display;
	const char * displayName;
	S_extent_2d physicalDimensions;
	S_extent_2d physicalResolution;
	F_surface_transform_KHR supportedTransforms;
	VkBool32 planeReorderPossible;
	VkBool32 persistentContent;

S_display_properties_KHR(){}
};

/*	VkDisplayPlanePropertiesKHR
(returnedonly)
*/
struct		S_display_plane_properties_KHR{
	VkDisplayKHR currentDisplay;
	uint32_t currentStackIndex;

S_display_plane_properties_KHR(){}
};

/*	VkDisplayModeParametersKHR
*/
struct		S_display_mode_parameters_KHR{
	S_extent_2d visibleRegion;
	uint32_t refreshRate;

S_display_mode_parameters_KHR(){}
};

/*	VkDisplayModePropertiesKHR
(returnedonly)
*/
struct		S_display_mode_properties_KHR{
	VkDisplayModeKHR displayMode;
	S_display_mode_parameters_KHR parameters;

S_display_mode_properties_KHR(){}
};

/*	VkDisplayModeCreateInfoKHR
*/
struct		S_display_mode_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkDisplayModeCreateFlagsKHR flags;
	S_display_mode_parameters_KHR parameters;

S_display_mode_create_info_KHR(){}

S_display_mode_create_info_KHR(
	VkDisplayModeCreateFlagsKHR flags_,
	S_display_mode_parameters_KHR parameters_)
	:flags(flags_)
	,parameters(parameters_)
{
}

S_display_mode_create_info_KHR( VkDisplayModeCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_mode_create_info_KHR ) );	}
S_display_mode_create_info_KHR& operator=( VkDisplayModeCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_mode_create_info_KHR ) ); return *this;	}
operator VkDisplayModeCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkDisplayModeCreateInfoKHR*>(this);	}
operator VkDisplayModeCreateInfoKHR &() 
	{	return *reinterpret_cast<VkDisplayModeCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_display_mode_create_info_KHR) == sizeof(VkDisplayModeCreateInfoKHR),
	"struct and wrapper have different size!");

/*	VkDisplayPlaneCapabilitiesKHR
(returnedonly)
*/
struct		S_display_plane_capabilities_KHR{
	F_display_plane_alpha_KHR supportedAlpha;
	S_offset_2d minSrcPosition;
	S_offset_2d maxSrcPosition;
	S_extent_2d minSrcExtent;
	S_extent_2d maxSrcExtent;
	S_offset_2d minDstPosition;
	S_offset_2d maxDstPosition;
	S_extent_2d minDstExtent;
	S_extent_2d maxDstExtent;

S_display_plane_capabilities_KHR(){}
};

/*	VkDisplaySurfaceCreateInfoKHR
*/
struct		S_display_surface_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkDisplaySurfaceCreateFlagsKHR flags;
	VkDisplayModeKHR displayMode;
	uint32_t planeIndex;
	uint32_t planeStackIndex;
	F_surface_transform_KHR transform;
	float globalAlpha;
	F_display_plane_alpha_KHR alphaMode;
	S_extent_2d imageExtent;

S_display_surface_create_info_KHR(){}

S_display_surface_create_info_KHR(
	VkDisplaySurfaceCreateFlagsKHR flags_,
	VkDisplayModeKHR displayMode_,
	uint32_t planeIndex_,
	uint32_t planeStackIndex_,
	F_surface_transform_KHR transform_,
	float globalAlpha_,
	F_display_plane_alpha_KHR alphaMode_,
	S_extent_2d imageExtent_)
	:flags(flags_)
	,displayMode(displayMode_)
	,planeIndex(planeIndex_)
	,planeStackIndex(planeStackIndex_)
	,transform(transform_)
	,globalAlpha(globalAlpha_)
	,alphaMode(alphaMode_)
	,imageExtent(imageExtent_)
{
}

S_display_surface_create_info_KHR( VkDisplaySurfaceCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_surface_create_info_KHR ) );	}
S_display_surface_create_info_KHR& operator=( VkDisplaySurfaceCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_surface_create_info_KHR ) ); return *this;	}
operator VkDisplaySurfaceCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkDisplaySurfaceCreateInfoKHR*>(this);	}
operator VkDisplaySurfaceCreateInfoKHR &() 
	{	return *reinterpret_cast<VkDisplaySurfaceCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_display_surface_create_info_KHR) == sizeof(VkDisplaySurfaceCreateInfoKHR),
	"struct and wrapper have different size!");

/*	VkDisplayPresentInfoKHR
ex to: VkPresentInfoKHR
*/
struct		S_display_present_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
	 void * pNext = nullptr;
public:
	S_rect_2d srcRect;
	S_rect_2d dstRect;
	VkBool32 persistent;

S_display_present_info_KHR(){}

S_display_present_info_KHR(
	S_rect_2d srcRect_,
	S_rect_2d dstRect_,
	VkBool32 persistent_)
	:srcRect(srcRect_)
	,dstRect(dstRect_)
	,persistent(persistent_)
{
}

S_display_present_info_KHR( VkDisplayPresentInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_present_info_KHR ) );	}
S_display_present_info_KHR& operator=( VkDisplayPresentInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_present_info_KHR ) ); return *this;	}
operator VkDisplayPresentInfoKHR const&() const 
	{	return *reinterpret_cast<const VkDisplayPresentInfoKHR*>(this);	}
operator VkDisplayPresentInfoKHR &() 
	{	return *reinterpret_cast<VkDisplayPresentInfoKHR*>(this);	}

friend S_present_info_KHR;
};
static_assert(
	sizeof(S_display_present_info_KHR) == sizeof(VkDisplayPresentInfoKHR),
	"struct and wrapper have different size!");

/*	VkSurfaceCapabilitiesKHR
(returnedonly)
*/
struct		S_surface_capabilities_KHR{
	uint32_t minImageCount;
	uint32_t maxImageCount;
	S_extent_2d currentExtent;
	S_extent_2d minImageExtent;
	S_extent_2d maxImageExtent;
	uint32_t maxImageArrayLayers;
	F_surface_transform_KHR supportedTransforms;
	F_surface_transform_KHR currentTransform;
	F_composite_alpha_KHR supportedCompositeAlpha;
	F_image_usage supportedUsageFlags;

S_surface_capabilities_KHR(){}
};

/*	VkAndroidSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_android_surface_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkAndroidSurfaceCreateFlagsKHR flags;
	struct ANativeWindow * window;

S_android_surface_create_info_KHR(){}

S_android_surface_create_info_KHR(
	VkAndroidSurfaceCreateFlagsKHR flags_,
	struct ANativeWindow * window_)
	:flags(flags_)
	,window(window_)
{
}

S_android_surface_create_info_KHR( VkAndroidSurfaceCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_android_surface_create_info_KHR ) );	}
S_android_surface_create_info_KHR& operator=( VkAndroidSurfaceCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_android_surface_create_info_KHR ) ); return *this;	}
operator VkAndroidSurfaceCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkAndroidSurfaceCreateInfoKHR*>(this);	}
operator VkAndroidSurfaceCreateInfoKHR &() 
	{	return *reinterpret_cast<VkAndroidSurfaceCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_android_surface_create_info_KHR) == sizeof(VkAndroidSurfaceCreateInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkMirSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_MIR_KHR
struct		S_mir_surface_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkMirSurfaceCreateFlagsKHR flags;
	MirConnection * connection;
	MirSurface * mirSurface;

S_mir_surface_create_info_KHR(){}

S_mir_surface_create_info_KHR(
	VkMirSurfaceCreateFlagsKHR flags_,
	MirConnection * connection_,
	MirSurface * mirSurface_)
	:flags(flags_)
	,connection(connection_)
	,mirSurface(mirSurface_)
{
}

S_mir_surface_create_info_KHR( VkMirSurfaceCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_mir_surface_create_info_KHR ) );	}
S_mir_surface_create_info_KHR& operator=( VkMirSurfaceCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_mir_surface_create_info_KHR ) ); return *this;	}
operator VkMirSurfaceCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkMirSurfaceCreateInfoKHR*>(this);	}
operator VkMirSurfaceCreateInfoKHR &() 
	{	return *reinterpret_cast<VkMirSurfaceCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_mir_surface_create_info_KHR) == sizeof(VkMirSurfaceCreateInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_MIR_KHR

/*	VkViSurfaceCreateInfoNN
*/
#ifdef VK_USE_PLATFORM_VI_NN
struct		S_vi_surface_create_info_NN{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN;
	 void * pNext = nullptr;
public:
	VkViSurfaceCreateFlagsNN flags;
	void * window;

S_vi_surface_create_info_NN(){}

S_vi_surface_create_info_NN(
	VkViSurfaceCreateFlagsNN flags_,
	void * window_)
	:flags(flags_)
	,window(window_)
{
}

S_vi_surface_create_info_NN( VkViSurfaceCreateInfoNN const & rhs )
	{	memcpy( this, &rhs, sizeof( S_vi_surface_create_info_NN ) );	}
S_vi_surface_create_info_NN& operator=( VkViSurfaceCreateInfoNN const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_vi_surface_create_info_NN ) ); return *this;	}
operator VkViSurfaceCreateInfoNN const&() const 
	{	return *reinterpret_cast<const VkViSurfaceCreateInfoNN*>(this);	}
operator VkViSurfaceCreateInfoNN &() 
	{	return *reinterpret_cast<VkViSurfaceCreateInfoNN*>(this);	}
};
static_assert(
	sizeof(S_vi_surface_create_info_NN) == sizeof(VkViSurfaceCreateInfoNN),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_VI_NN

/*	VkWaylandSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
struct		S_wayland_surface_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkWaylandSurfaceCreateFlagsKHR flags;
	struct wl_display * display;
	struct wl_surface * surface;

S_wayland_surface_create_info_KHR(){}

S_wayland_surface_create_info_KHR(
	VkWaylandSurfaceCreateFlagsKHR flags_,
	struct wl_display * display_,
	struct wl_surface * surface_)
	:flags(flags_)
	,display(display_)
	,surface(surface_)
{
}

S_wayland_surface_create_info_KHR( VkWaylandSurfaceCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_wayland_surface_create_info_KHR ) );	}
S_wayland_surface_create_info_KHR& operator=( VkWaylandSurfaceCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_wayland_surface_create_info_KHR ) ); return *this;	}
operator VkWaylandSurfaceCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkWaylandSurfaceCreateInfoKHR*>(this);	}
operator VkWaylandSurfaceCreateInfoKHR &() 
	{	return *reinterpret_cast<VkWaylandSurfaceCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_wayland_surface_create_info_KHR) == sizeof(VkWaylandSurfaceCreateInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WAYLAND_KHR

/*	VkWin32SurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_win32_surface_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkWin32SurfaceCreateFlagsKHR flags;
	HINSTANCE hinstance;
	HWND hwnd;

S_win32_surface_create_info_KHR(){}

S_win32_surface_create_info_KHR(
	VkWin32SurfaceCreateFlagsKHR flags_,
	HINSTANCE hinstance_,
	HWND hwnd_)
	:flags(flags_)
	,hinstance(hinstance_)
	,hwnd(hwnd_)
{
}

S_win32_surface_create_info_KHR( VkWin32SurfaceCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_win32_surface_create_info_KHR ) );	}
S_win32_surface_create_info_KHR& operator=( VkWin32SurfaceCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_win32_surface_create_info_KHR ) ); return *this;	}
operator VkWin32SurfaceCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkWin32SurfaceCreateInfoKHR*>(this);	}
operator VkWin32SurfaceCreateInfoKHR &() 
	{	return *reinterpret_cast<VkWin32SurfaceCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_win32_surface_create_info_KHR) == sizeof(VkWin32SurfaceCreateInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkXlibSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_XLIB_KHR
struct		S_xlib_surface_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkXlibSurfaceCreateFlagsKHR flags;
	Display * dpy;
	Window window;

S_xlib_surface_create_info_KHR(){}

S_xlib_surface_create_info_KHR(
	VkXlibSurfaceCreateFlagsKHR flags_,
	Display * dpy_,
	Window window_)
	:flags(flags_)
	,dpy(dpy_)
	,window(window_)
{
}

S_xlib_surface_create_info_KHR( VkXlibSurfaceCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_xlib_surface_create_info_KHR ) );	}
S_xlib_surface_create_info_KHR& operator=( VkXlibSurfaceCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_xlib_surface_create_info_KHR ) ); return *this;	}
operator VkXlibSurfaceCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkXlibSurfaceCreateInfoKHR*>(this);	}
operator VkXlibSurfaceCreateInfoKHR &() 
	{	return *reinterpret_cast<VkXlibSurfaceCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_xlib_surface_create_info_KHR) == sizeof(VkXlibSurfaceCreateInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_XLIB_KHR

/*	VkXcbSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_XCB_KHR
struct		S_xcb_surface_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkXcbSurfaceCreateFlagsKHR flags;
	xcb_connection_t * connection;
	xcb_window_t window;

S_xcb_surface_create_info_KHR(){}

S_xcb_surface_create_info_KHR(
	VkXcbSurfaceCreateFlagsKHR flags_,
	xcb_connection_t * connection_,
	xcb_window_t window_)
	:flags(flags_)
	,connection(connection_)
	,window(window_)
{
}

S_xcb_surface_create_info_KHR( VkXcbSurfaceCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_xcb_surface_create_info_KHR ) );	}
S_xcb_surface_create_info_KHR& operator=( VkXcbSurfaceCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_xcb_surface_create_info_KHR ) ); return *this;	}
operator VkXcbSurfaceCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkXcbSurfaceCreateInfoKHR*>(this);	}
operator VkXcbSurfaceCreateInfoKHR &() 
	{	return *reinterpret_cast<VkXcbSurfaceCreateInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_xcb_surface_create_info_KHR) == sizeof(VkXcbSurfaceCreateInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_XCB_KHR

/*	VkSurfaceFormatKHR
(returnedonly)
*/
struct		S_surface_format_KHR{
	E_format format;
	E_color_space_KHR colorSpace;

S_surface_format_KHR(){}
};

/*	VkSwapchainCounterCreateInfoEXT
ex to: VkSwapchainCreateInfoKHR
*/
struct		S_swapchain_counter_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	F_surface_counter_EXT surfaceCounters;

S_swapchain_counter_create_info_EXT(){}

S_swapchain_counter_create_info_EXT(
	F_surface_counter_EXT surfaceCounters_)
	:surfaceCounters(surfaceCounters_)
{
}

S_swapchain_counter_create_info_EXT( VkSwapchainCounterCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_swapchain_counter_create_info_EXT ) );	}
S_swapchain_counter_create_info_EXT& operator=( VkSwapchainCounterCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_swapchain_counter_create_info_EXT ) ); return *this;	}
operator VkSwapchainCounterCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkSwapchainCounterCreateInfoEXT*>(this);	}
operator VkSwapchainCounterCreateInfoEXT &() 
	{	return *reinterpret_cast<VkSwapchainCounterCreateInfoEXT*>(this);	}

friend S_swapchain_create_info_KHR;
};
static_assert(
	sizeof(S_swapchain_counter_create_info_EXT) == sizeof(VkSwapchainCounterCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkDeviceGroupSwapchainCreateInfoKHR
ex to: VkSwapchainCreateInfoKHR
*/
struct		S_device_group_swapchain_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	F_device_group_present_mode_KHR modes;

S_device_group_swapchain_create_info_KHR(){}

S_device_group_swapchain_create_info_KHR(
	F_device_group_present_mode_KHR modes_)
	:modes(modes_)
{
}

S_device_group_swapchain_create_info_KHR( VkDeviceGroupSwapchainCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_swapchain_create_info_KHR ) );	}
S_device_group_swapchain_create_info_KHR& operator=( VkDeviceGroupSwapchainCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_swapchain_create_info_KHR ) ); return *this;	}
operator VkDeviceGroupSwapchainCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR*>(this);	}
operator VkDeviceGroupSwapchainCreateInfoKHR &() 
	{	return *reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHR*>(this);	}

friend S_swapchain_create_info_KHR;
};
static_assert(
	sizeof(S_device_group_swapchain_create_info_KHR) == sizeof(VkDeviceGroupSwapchainCreateInfoKHR),
	"struct and wrapper have different size!");

/*	VkSwapchainCreateInfoKHR
ex:
	VkSwapchainCounterCreateInfoEXT
	VkDeviceGroupSwapchainCreateInfoKHR
*/
struct		S_swapchain_create_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
	 void * pNext = nullptr;
public:
	F_swapchain_create_KHR flags;
	VkSurfaceKHR surface;
	uint32_t minImageCount;
	E_format imageFormat;
	E_color_space_KHR imageColorSpace;
	S_extent_2d imageExtent;
	uint32_t imageArrayLayers;
	F_image_usage imageUsage;
	E_sharing_mode imageSharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t * pQueueFamilyIndices;
	F_surface_transform_KHR preTransform;
	F_composite_alpha_KHR compositeAlpha;
	E_present_mode_KHR presentMode;
	VkBool32 clipped;
	VkSwapchainKHR oldSwapchain;

S_swapchain_create_info_KHR(){}

S_swapchain_create_info_KHR(
	F_swapchain_create_KHR flags_,
	VkSurfaceKHR surface_,
	uint32_t minImageCount_,
	E_format imageFormat_,
	E_color_space_KHR imageColorSpace_,
	S_extent_2d imageExtent_,
	uint32_t imageArrayLayers_,
	F_image_usage imageUsage_,
	E_sharing_mode imageSharingMode_,
	uint32_t queueFamilyIndexCount_,
	const uint32_t * pQueueFamilyIndices_,
	F_surface_transform_KHR preTransform_,
	F_composite_alpha_KHR compositeAlpha_,
	E_present_mode_KHR presentMode_,
	VkBool32 clipped_,
	VkSwapchainKHR oldSwapchain_)
	:flags(flags_)
	,surface(surface_)
	,minImageCount(minImageCount_)
	,imageFormat(imageFormat_)
	,imageColorSpace(imageColorSpace_)
	,imageExtent(imageExtent_)
	,imageArrayLayers(imageArrayLayers_)
	,imageUsage(imageUsage_)
	,imageSharingMode(imageSharingMode_)
	,queueFamilyIndexCount(queueFamilyIndexCount_)
	,pQueueFamilyIndices(pQueueFamilyIndices_)
	,preTransform(preTransform_)
	,compositeAlpha(compositeAlpha_)
	,presentMode(presentMode_)
	,clipped(clipped_)
	,oldSwapchain(oldSwapchain_)
{
}

S_swapchain_create_info_KHR( VkSwapchainCreateInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_swapchain_create_info_KHR ) );	}
S_swapchain_create_info_KHR& operator=( VkSwapchainCreateInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_swapchain_create_info_KHR ) ); return *this;	}
operator VkSwapchainCreateInfoKHR const&() const 
	{	return *reinterpret_cast<const VkSwapchainCreateInfoKHR*>(this);	}
operator VkSwapchainCreateInfoKHR &() 
	{	return *reinterpret_cast<VkSwapchainCreateInfoKHR*>(this);	}

S_swapchain_create_info_KHR& n_swapchain_counter_create_info_EXT(S_swapchain_counter_create_info_EXT const& next_);
S_swapchain_create_info_KHR& n_device_group_swapchain_create_info_KHR(S_device_group_swapchain_create_info_KHR const& next_);
};
static_assert(
	sizeof(S_swapchain_create_info_KHR) == sizeof(VkSwapchainCreateInfoKHR),
	"struct and wrapper have different size!");

struct N_swapchain_create_info_KHR{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_swapchain_create_info_KHR& n_swapchain_counter_create_info_EXT(S_swapchain_counter_create_info_EXT const& next_);
N_swapchain_create_info_KHR& n_device_group_swapchain_create_info_KHR(S_device_group_swapchain_create_info_KHR const& next_);
};

/*	VkRectLayerKHR
*/
struct		S_rect_layer_KHR{
	S_offset_2d offset;
	S_extent_2d extent;
	uint32_t layer;

S_rect_layer_KHR(){}
};

/*	VkPresentRegionKHR
*/
struct		S_present_region_KHR{
	uint32_t rectangleCount;
	const S_rect_layer_KHR * pRectangles;

S_present_region_KHR(){}
};

/*	VkPresentRegionsKHR
ex to: VkPresentInfoKHR
*/
struct		S_present_regions_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
	 void * pNext = nullptr;
public:
	uint32_t swapchainCount;
	const S_present_region_KHR * pRegions;

S_present_regions_KHR(){}

S_present_regions_KHR(
	uint32_t swapchainCount_,
	const S_present_region_KHR * pRegions_)
	:swapchainCount(swapchainCount_)
	,pRegions(pRegions_)
{
}

S_present_regions_KHR( VkPresentRegionsKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_present_regions_KHR ) );	}
S_present_regions_KHR& operator=( VkPresentRegionsKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_present_regions_KHR ) ); return *this;	}
operator VkPresentRegionsKHR const&() const 
	{	return *reinterpret_cast<const VkPresentRegionsKHR*>(this);	}
operator VkPresentRegionsKHR &() 
	{	return *reinterpret_cast<VkPresentRegionsKHR*>(this);	}

friend S_present_info_KHR;
};
static_assert(
	sizeof(S_present_regions_KHR) == sizeof(VkPresentRegionsKHR),
	"struct and wrapper have different size!");

/*	VkDeviceGroupPresentInfoKHR
ex to: VkPresentInfoKHR
*/
struct		S_device_group_present_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;
	 void * pNext = nullptr;
public:
	uint32_t swapchainCount;
	const uint32_t * pDeviceMasks;
	F_device_group_present_mode_KHR mode;

S_device_group_present_info_KHR(){}

S_device_group_present_info_KHR(
	uint32_t swapchainCount_,
	const uint32_t * pDeviceMasks_,
	F_device_group_present_mode_KHR mode_)
	:swapchainCount(swapchainCount_)
	,pDeviceMasks(pDeviceMasks_)
	,mode(mode_)
{
}

S_device_group_present_info_KHR( VkDeviceGroupPresentInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_present_info_KHR ) );	}
S_device_group_present_info_KHR& operator=( VkDeviceGroupPresentInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_present_info_KHR ) ); return *this;	}
operator VkDeviceGroupPresentInfoKHR const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupPresentInfoKHR*>(this);	}
operator VkDeviceGroupPresentInfoKHR &() 
	{	return *reinterpret_cast<VkDeviceGroupPresentInfoKHR*>(this);	}

friend S_present_info_KHR;
};
static_assert(
	sizeof(S_device_group_present_info_KHR) == sizeof(VkDeviceGroupPresentInfoKHR),
	"struct and wrapper have different size!");

/*	VkPresentTimeGOOGLE
*/
struct		S_present_time_GOOGLE{
	uint32_t presentID;
	uint64_t desiredPresentTime;

S_present_time_GOOGLE(){}
};

/*	VkPresentTimesInfoGOOGLE
ex to: VkPresentInfoKHR
*/
struct		S_present_times_info_GOOGLE{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
	 void * pNext = nullptr;
public:
	uint32_t swapchainCount;
	const S_present_time_GOOGLE * pTimes;

S_present_times_info_GOOGLE(){}

S_present_times_info_GOOGLE(
	uint32_t swapchainCount_,
	const S_present_time_GOOGLE * pTimes_)
	:swapchainCount(swapchainCount_)
	,pTimes(pTimes_)
{
}

S_present_times_info_GOOGLE( VkPresentTimesInfoGOOGLE const & rhs )
	{	memcpy( this, &rhs, sizeof( S_present_times_info_GOOGLE ) );	}
S_present_times_info_GOOGLE& operator=( VkPresentTimesInfoGOOGLE const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_present_times_info_GOOGLE ) ); return *this;	}
operator VkPresentTimesInfoGOOGLE const&() const 
	{	return *reinterpret_cast<const VkPresentTimesInfoGOOGLE*>(this);	}
operator VkPresentTimesInfoGOOGLE &() 
	{	return *reinterpret_cast<VkPresentTimesInfoGOOGLE*>(this);	}

friend S_present_info_KHR;
};
static_assert(
	sizeof(S_present_times_info_GOOGLE) == sizeof(VkPresentTimesInfoGOOGLE),
	"struct and wrapper have different size!");

/*	VkPresentInfoKHR
ex:
	VkDisplayPresentInfoKHR
	VkPresentRegionsKHR
	VkDeviceGroupPresentInfoKHR
	VkPresentTimesInfoGOOGLE
*/
struct		S_present_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
	 void * pNext = nullptr;
public:
	uint32_t waitSemaphoreCount;
	const VkSemaphore * pWaitSemaphores;
	uint32_t swapchainCount;
	const VkSwapchainKHR * pSwapchains;
	const uint32_t * pImageIndices;
	E_result * pResults;

S_present_info_KHR(){}

S_present_info_KHR(
	uint32_t waitSemaphoreCount_,
	const VkSemaphore * pWaitSemaphores_,
	uint32_t swapchainCount_,
	const VkSwapchainKHR * pSwapchains_,
	const uint32_t * pImageIndices_,
	E_result * pResults_)
	:waitSemaphoreCount(waitSemaphoreCount_)
	,pWaitSemaphores(pWaitSemaphores_)
	,swapchainCount(swapchainCount_)
	,pSwapchains(pSwapchains_)
	,pImageIndices(pImageIndices_)
	,pResults(pResults_)
{
}

S_present_info_KHR( VkPresentInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_present_info_KHR ) );	}
S_present_info_KHR& operator=( VkPresentInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_present_info_KHR ) ); return *this;	}
operator VkPresentInfoKHR const&() const 
	{	return *reinterpret_cast<const VkPresentInfoKHR*>(this);	}
operator VkPresentInfoKHR &() 
	{	return *reinterpret_cast<VkPresentInfoKHR*>(this);	}

S_present_info_KHR& n_display_present_info_KHR(S_display_present_info_KHR const& next_);
S_present_info_KHR& n_present_regions_KHR(S_present_regions_KHR const& next_);
S_present_info_KHR& n_device_group_present_info_KHR(S_device_group_present_info_KHR const& next_);
S_present_info_KHR& n_present_times_info_GOOGLE(S_present_times_info_GOOGLE const& next_);
};
static_assert(
	sizeof(S_present_info_KHR) == sizeof(VkPresentInfoKHR),
	"struct and wrapper have different size!");

struct N_present_info_KHR{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_present_info_KHR& n_display_present_info_KHR(S_display_present_info_KHR const& next_);
N_present_info_KHR& n_present_regions_KHR(S_present_regions_KHR const& next_);
N_present_info_KHR& n_device_group_present_info_KHR(S_device_group_present_info_KHR const& next_);
N_present_info_KHR& n_present_times_info_GOOGLE(S_present_times_info_GOOGLE const& next_);
};

/*	VkDebugMarkerObjectNameInfoEXT
*/
struct		S_debug_marker_object_name_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_debug_report_object_type_EXT objectType;
	uint64_t object;
	const char * pObjectName;

S_debug_marker_object_name_info_EXT(){}

S_debug_marker_object_name_info_EXT(
	E_debug_report_object_type_EXT objectType_,
	uint64_t object_,
	const char * pObjectName_)
	:objectType(objectType_)
	,object(object_)
	,pObjectName(pObjectName_)
{
}

S_debug_marker_object_name_info_EXT( VkDebugMarkerObjectNameInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_marker_object_name_info_EXT ) );	}
S_debug_marker_object_name_info_EXT& operator=( VkDebugMarkerObjectNameInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_marker_object_name_info_EXT ) ); return *this;	}
operator VkDebugMarkerObjectNameInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDebugMarkerObjectNameInfoEXT*>(this);	}
operator VkDebugMarkerObjectNameInfoEXT &() 
	{	return *reinterpret_cast<VkDebugMarkerObjectNameInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_debug_marker_object_name_info_EXT) == sizeof(VkDebugMarkerObjectNameInfoEXT),
	"struct and wrapper have different size!");

/*	VkDebugMarkerObjectTagInfoEXT
*/
struct		S_debug_marker_object_tag_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_debug_report_object_type_EXT objectType;
	uint64_t object;
	uint64_t tagName;
	size_t tagSize;
	const void * pTag;

S_debug_marker_object_tag_info_EXT(){}

S_debug_marker_object_tag_info_EXT(
	E_debug_report_object_type_EXT objectType_,
	uint64_t object_,
	uint64_t tagName_,
	size_t tagSize_,
	const void * pTag_)
	:objectType(objectType_)
	,object(object_)
	,tagName(tagName_)
	,tagSize(tagSize_)
	,pTag(pTag_)
{
}

S_debug_marker_object_tag_info_EXT( VkDebugMarkerObjectTagInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_marker_object_tag_info_EXT ) );	}
S_debug_marker_object_tag_info_EXT& operator=( VkDebugMarkerObjectTagInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_marker_object_tag_info_EXT ) ); return *this;	}
operator VkDebugMarkerObjectTagInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDebugMarkerObjectTagInfoEXT*>(this);	}
operator VkDebugMarkerObjectTagInfoEXT &() 
	{	return *reinterpret_cast<VkDebugMarkerObjectTagInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_debug_marker_object_tag_info_EXT) == sizeof(VkDebugMarkerObjectTagInfoEXT),
	"struct and wrapper have different size!");

/*	VkDebugMarkerMarkerInfoEXT
*/
struct		S_debug_marker_marker_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
	 void * pNext = nullptr;
public:
	const char * pMarkerName;
	float color[4];

S_debug_marker_marker_info_EXT(){}

S_debug_marker_marker_info_EXT(
	const char * pMarkerName_,
	float color_[4])
	:pMarkerName(pMarkerName_)
{
memcpy(color,color_,sizeof(color) );
}

S_debug_marker_marker_info_EXT( VkDebugMarkerMarkerInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_marker_marker_info_EXT ) );	}
S_debug_marker_marker_info_EXT& operator=( VkDebugMarkerMarkerInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_marker_marker_info_EXT ) ); return *this;	}
operator VkDebugMarkerMarkerInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDebugMarkerMarkerInfoEXT*>(this);	}
operator VkDebugMarkerMarkerInfoEXT &() 
	{	return *reinterpret_cast<VkDebugMarkerMarkerInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_debug_marker_marker_info_EXT) == sizeof(VkDebugMarkerMarkerInfoEXT),
	"struct and wrapper have different size!");

/*	VkExternalImageFormatPropertiesNV
(returnedonly)
*/
struct		S_external_image_format_properties_NV{
	S_image_format_properties imageFormatProperties;
	F_external_memory_feature_NV externalMemoryFeatures;
	F_external_memory_handle_type_NV exportFromImportedHandleTypes;
	F_external_memory_handle_type_NV compatibleHandleTypes;

S_external_image_format_properties_NV(){}
};

/*	VkDeviceGeneratedCommandsFeaturesNVX
*/
struct		S_device_generated_commands_features_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX;
	 void * pNext = nullptr;
public:
	VkBool32 computeBindingPointSupport;

S_device_generated_commands_features_NVX(){}

S_device_generated_commands_features_NVX(
	VkBool32 computeBindingPointSupport_)
	:computeBindingPointSupport(computeBindingPointSupport_)
{
}

S_device_generated_commands_features_NVX( VkDeviceGeneratedCommandsFeaturesNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_generated_commands_features_NVX ) );	}
S_device_generated_commands_features_NVX& operator=( VkDeviceGeneratedCommandsFeaturesNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_generated_commands_features_NVX ) ); return *this;	}
operator VkDeviceGeneratedCommandsFeaturesNVX const&() const 
	{	return *reinterpret_cast<const VkDeviceGeneratedCommandsFeaturesNVX*>(this);	}
operator VkDeviceGeneratedCommandsFeaturesNVX &() 
	{	return *reinterpret_cast<VkDeviceGeneratedCommandsFeaturesNVX*>(this);	}
};
static_assert(
	sizeof(S_device_generated_commands_features_NVX) == sizeof(VkDeviceGeneratedCommandsFeaturesNVX),
	"struct and wrapper have different size!");

/*	VkDeviceGeneratedCommandsLimitsNVX
*/
struct		S_device_generated_commands_limits_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;
	 void * pNext = nullptr;
public:
	uint32_t maxIndirectCommandsLayoutTokenCount;
	uint32_t maxObjectEntryCounts;
	uint32_t minSequenceCountBufferOffsetAlignment;
	uint32_t minSequenceIndexBufferOffsetAlignment;
	uint32_t minCommandsTokenBufferOffsetAlignment;

S_device_generated_commands_limits_NVX(){}

S_device_generated_commands_limits_NVX(
	uint32_t maxIndirectCommandsLayoutTokenCount_,
	uint32_t maxObjectEntryCounts_,
	uint32_t minSequenceCountBufferOffsetAlignment_,
	uint32_t minSequenceIndexBufferOffsetAlignment_,
	uint32_t minCommandsTokenBufferOffsetAlignment_)
	:maxIndirectCommandsLayoutTokenCount(maxIndirectCommandsLayoutTokenCount_)
	,maxObjectEntryCounts(maxObjectEntryCounts_)
	,minSequenceCountBufferOffsetAlignment(minSequenceCountBufferOffsetAlignment_)
	,minSequenceIndexBufferOffsetAlignment(minSequenceIndexBufferOffsetAlignment_)
	,minCommandsTokenBufferOffsetAlignment(minCommandsTokenBufferOffsetAlignment_)
{
}

S_device_generated_commands_limits_NVX( VkDeviceGeneratedCommandsLimitsNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_generated_commands_limits_NVX ) );	}
S_device_generated_commands_limits_NVX& operator=( VkDeviceGeneratedCommandsLimitsNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_generated_commands_limits_NVX ) ); return *this;	}
operator VkDeviceGeneratedCommandsLimitsNVX const&() const 
	{	return *reinterpret_cast<const VkDeviceGeneratedCommandsLimitsNVX*>(this);	}
operator VkDeviceGeneratedCommandsLimitsNVX &() 
	{	return *reinterpret_cast<VkDeviceGeneratedCommandsLimitsNVX*>(this);	}
};
static_assert(
	sizeof(S_device_generated_commands_limits_NVX) == sizeof(VkDeviceGeneratedCommandsLimitsNVX),
	"struct and wrapper have different size!");

/*	VkIndirectCommandsTokenNVX
*/
struct		S_indirect_commands_token_NVX{
	E_indirect_commands_token_type_NVX tokenType;
	VkBuffer buffer;
	VkDeviceSize offset;

S_indirect_commands_token_NVX(){}
};

/*	VkIndirectCommandsLayoutTokenNVX
*/
struct		S_indirect_commands_layout_token_NVX{
	E_indirect_commands_token_type_NVX tokenType;
	uint32_t bindingUnit;
	uint32_t dynamicCount;
	uint32_t divisor;

S_indirect_commands_layout_token_NVX(){}
};

/*	VkIndirectCommandsLayoutCreateInfoNVX
*/
struct		S_indirect_commands_layout_create_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;
	 void * pNext = nullptr;
public:
	E_pipeline_bind_point pipelineBindPoint;
	F_indirect_commands_layout_usage_NVX flags;
	uint32_t tokenCount;
	const S_indirect_commands_layout_token_NVX * pTokens;

S_indirect_commands_layout_create_info_NVX(){}

S_indirect_commands_layout_create_info_NVX(
	E_pipeline_bind_point pipelineBindPoint_,
	F_indirect_commands_layout_usage_NVX flags_,
	uint32_t tokenCount_,
	const S_indirect_commands_layout_token_NVX * pTokens_)
	:pipelineBindPoint(pipelineBindPoint_)
	,flags(flags_)
	,tokenCount(tokenCount_)
	,pTokens(pTokens_)
{
}

S_indirect_commands_layout_create_info_NVX( VkIndirectCommandsLayoutCreateInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_indirect_commands_layout_create_info_NVX ) );	}
S_indirect_commands_layout_create_info_NVX& operator=( VkIndirectCommandsLayoutCreateInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_indirect_commands_layout_create_info_NVX ) ); return *this;	}
operator VkIndirectCommandsLayoutCreateInfoNVX const&() const 
	{	return *reinterpret_cast<const VkIndirectCommandsLayoutCreateInfoNVX*>(this);	}
operator VkIndirectCommandsLayoutCreateInfoNVX &() 
	{	return *reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_indirect_commands_layout_create_info_NVX) == sizeof(VkIndirectCommandsLayoutCreateInfoNVX),
	"struct and wrapper have different size!");

/*	VkCmdProcessCommandsInfoNVX
*/
struct		S_cmd_process_commands_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX;
	 void * pNext = nullptr;
public:
	VkObjectTableNVX objectTable;
	VkIndirectCommandsLayoutNVX indirectCommandsLayout;
	uint32_t indirectCommandsTokenCount;
	const S_indirect_commands_token_NVX * pIndirectCommandsTokens;
	uint32_t maxSequencesCount;
	VkCommandBuffer targetCommandBuffer;
	VkBuffer sequencesCountBuffer;
	VkDeviceSize sequencesCountOffset;
	VkBuffer sequencesIndexBuffer;
	VkDeviceSize sequencesIndexOffset;

S_cmd_process_commands_info_NVX(){}

S_cmd_process_commands_info_NVX(
	VkObjectTableNVX objectTable_,
	VkIndirectCommandsLayoutNVX indirectCommandsLayout_,
	uint32_t indirectCommandsTokenCount_,
	const S_indirect_commands_token_NVX * pIndirectCommandsTokens_,
	uint32_t maxSequencesCount_,
	VkCommandBuffer targetCommandBuffer_,
	VkBuffer sequencesCountBuffer_,
	VkDeviceSize sequencesCountOffset_,
	VkBuffer sequencesIndexBuffer_,
	VkDeviceSize sequencesIndexOffset_)
	:objectTable(objectTable_)
	,indirectCommandsLayout(indirectCommandsLayout_)
	,indirectCommandsTokenCount(indirectCommandsTokenCount_)
	,pIndirectCommandsTokens(pIndirectCommandsTokens_)
	,maxSequencesCount(maxSequencesCount_)
	,targetCommandBuffer(targetCommandBuffer_)
	,sequencesCountBuffer(sequencesCountBuffer_)
	,sequencesCountOffset(sequencesCountOffset_)
	,sequencesIndexBuffer(sequencesIndexBuffer_)
	,sequencesIndexOffset(sequencesIndexOffset_)
{
}

S_cmd_process_commands_info_NVX( VkCmdProcessCommandsInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_cmd_process_commands_info_NVX ) );	}
S_cmd_process_commands_info_NVX& operator=( VkCmdProcessCommandsInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_cmd_process_commands_info_NVX ) ); return *this;	}
operator VkCmdProcessCommandsInfoNVX const&() const 
	{	return *reinterpret_cast<const VkCmdProcessCommandsInfoNVX*>(this);	}
operator VkCmdProcessCommandsInfoNVX &() 
	{	return *reinterpret_cast<VkCmdProcessCommandsInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_cmd_process_commands_info_NVX) == sizeof(VkCmdProcessCommandsInfoNVX),
	"struct and wrapper have different size!");

/*	VkCmdReserveSpaceForCommandsInfoNVX
*/
struct		S_cmd_reserve_space_for_commands_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX;
	 void * pNext = nullptr;
public:
	VkObjectTableNVX objectTable;
	VkIndirectCommandsLayoutNVX indirectCommandsLayout;
	uint32_t maxSequencesCount;

S_cmd_reserve_space_for_commands_info_NVX(){}

S_cmd_reserve_space_for_commands_info_NVX(
	VkObjectTableNVX objectTable_,
	VkIndirectCommandsLayoutNVX indirectCommandsLayout_,
	uint32_t maxSequencesCount_)
	:objectTable(objectTable_)
	,indirectCommandsLayout(indirectCommandsLayout_)
	,maxSequencesCount(maxSequencesCount_)
{
}

S_cmd_reserve_space_for_commands_info_NVX( VkCmdReserveSpaceForCommandsInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_cmd_reserve_space_for_commands_info_NVX ) );	}
S_cmd_reserve_space_for_commands_info_NVX& operator=( VkCmdReserveSpaceForCommandsInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_cmd_reserve_space_for_commands_info_NVX ) ); return *this;	}
operator VkCmdReserveSpaceForCommandsInfoNVX const&() const 
	{	return *reinterpret_cast<const VkCmdReserveSpaceForCommandsInfoNVX*>(this);	}
operator VkCmdReserveSpaceForCommandsInfoNVX &() 
	{	return *reinterpret_cast<VkCmdReserveSpaceForCommandsInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_cmd_reserve_space_for_commands_info_NVX) == sizeof(VkCmdReserveSpaceForCommandsInfoNVX),
	"struct and wrapper have different size!");

/*	VkObjectTableCreateInfoNVX
*/
struct		S_object_table_create_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;
	 void * pNext = nullptr;
public:
	uint32_t objectCount;
	const E_object_entry_type_NVX * pObjectEntryTypes;
	const uint32_t * pObjectEntryCounts;
	const F_object_entry_usage_NVX * pObjectEntryUsageFlags;
	uint32_t maxUniformBuffersPerDescriptor;
	uint32_t maxStorageBuffersPerDescriptor;
	uint32_t maxStorageImagesPerDescriptor;
	uint32_t maxSampledImagesPerDescriptor;
	uint32_t maxPipelineLayouts;

S_object_table_create_info_NVX(){}

S_object_table_create_info_NVX(
	uint32_t objectCount_,
	const E_object_entry_type_NVX * pObjectEntryTypes_,
	const uint32_t * pObjectEntryCounts_,
	const F_object_entry_usage_NVX * pObjectEntryUsageFlags_,
	uint32_t maxUniformBuffersPerDescriptor_,
	uint32_t maxStorageBuffersPerDescriptor_,
	uint32_t maxStorageImagesPerDescriptor_,
	uint32_t maxSampledImagesPerDescriptor_,
	uint32_t maxPipelineLayouts_)
	:objectCount(objectCount_)
	,pObjectEntryTypes(pObjectEntryTypes_)
	,pObjectEntryCounts(pObjectEntryCounts_)
	,pObjectEntryUsageFlags(pObjectEntryUsageFlags_)
	,maxUniformBuffersPerDescriptor(maxUniformBuffersPerDescriptor_)
	,maxStorageBuffersPerDescriptor(maxStorageBuffersPerDescriptor_)
	,maxStorageImagesPerDescriptor(maxStorageImagesPerDescriptor_)
	,maxSampledImagesPerDescriptor(maxSampledImagesPerDescriptor_)
	,maxPipelineLayouts(maxPipelineLayouts_)
{
}

S_object_table_create_info_NVX( VkObjectTableCreateInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_object_table_create_info_NVX ) );	}
S_object_table_create_info_NVX& operator=( VkObjectTableCreateInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_object_table_create_info_NVX ) ); return *this;	}
operator VkObjectTableCreateInfoNVX const&() const 
	{	return *reinterpret_cast<const VkObjectTableCreateInfoNVX*>(this);	}
operator VkObjectTableCreateInfoNVX &() 
	{	return *reinterpret_cast<VkObjectTableCreateInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_object_table_create_info_NVX) == sizeof(VkObjectTableCreateInfoNVX),
	"struct and wrapper have different size!");

/*	VkObjectTableEntryNVX
*/
struct		S_object_table_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;

S_object_table_entry_NVX(){}
};

/*	VkObjectTablePipelineEntryNVX
*/
struct		S_object_table_pipeline_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkPipeline pipeline;

S_object_table_pipeline_entry_NVX(){}
};

/*	VkObjectTableDescriptorSetEntryNVX
*/
struct		S_object_table_descriptor_set_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkPipelineLayout pipelineLayout;
	VkDescriptorSet descriptorSet;

S_object_table_descriptor_set_entry_NVX(){}
};

/*	VkObjectTableVertexBufferEntryNVX
*/
struct		S_object_table_vertex_buffer_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkBuffer buffer;

S_object_table_vertex_buffer_entry_NVX(){}
};

/*	VkObjectTableIndexBufferEntryNVX
*/
struct		S_object_table_index_buffer_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkBuffer buffer;
	E_index_type indexType;

S_object_table_index_buffer_entry_NVX(){}
};

/*	VkObjectTablePushConstantEntryNVX
*/
struct		S_object_table_push_constant_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_NVX flags;
	VkPipelineLayout pipelineLayout;
	F_shader_stage stageFlags;

S_object_table_push_constant_entry_NVX(){}
};

/*	VkPhysicalDevicePushDescriptorPropertiesKHR
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_push_descriptor_properties_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
	void * pNext = nullptr;
public:
	uint32_t maxPushDescriptors;

S_physical_device_push_descriptor_properties_KHR(){}

S_physical_device_push_descriptor_properties_KHR(
	uint32_t maxPushDescriptors_)
	:maxPushDescriptors(maxPushDescriptors_)
{
}

S_physical_device_push_descriptor_properties_KHR( VkPhysicalDevicePushDescriptorPropertiesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_push_descriptor_properties_KHR ) );	}
S_physical_device_push_descriptor_properties_KHR& operator=( VkPhysicalDevicePushDescriptorPropertiesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_push_descriptor_properties_KHR ) ); return *this;	}
operator VkPhysicalDevicePushDescriptorPropertiesKHR const&() const 
	{	return *reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR*>(this);	}
operator VkPhysicalDevicePushDescriptorPropertiesKHR &() 
	{	return *reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_push_descriptor_properties_KHR) == sizeof(VkPhysicalDevicePushDescriptorPropertiesKHR),
	"struct and wrapper have different size!");

/*	VkConformanceVersionKHR
*/
struct		S_conformance_version_KHR{
	uint8_t major;
	uint8_t minor;
	uint8_t subminor;
	uint8_t patch;

S_conformance_version_KHR(){}
};

/*	VkPhysicalDeviceDriverPropertiesKHR
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
#ifdef LAKA_UNKNOW
struct		S_physical_device_driver_properties_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR;
	void * pNext = nullptr;
public:
	uint32_t driverID;
	char driverName[VK_MAX_DRIVER_NAME_SIZE_KHR];
	char driverInfo[VK_MAX_DRIVER_INFO_SIZE_KHR];
	S_conformance_version_KHR conformanceVersion;

S_physical_device_driver_properties_KHR(){}

S_physical_device_driver_properties_KHR(
	uint32_t driverID_,
	char driverName_[VK_MAX_DRIVER_NAME_SIZE_KHR],
	char driverInfo_[VK_MAX_DRIVER_INFO_SIZE_KHR],
	S_conformance_version_KHR conformanceVersion_)
	:driverID(driverID_)
	,conformanceVersion(conformanceVersion_)
{
memcpy(driverName,driverName_,sizeof(driverName) );
memcpy(driverInfo,driverInfo_,sizeof(driverInfo) );
}

S_physical_device_driver_properties_KHR( VkPhysicalDeviceDriverPropertiesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_driver_properties_KHR ) );	}
S_physical_device_driver_properties_KHR& operator=( VkPhysicalDeviceDriverPropertiesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_driver_properties_KHR ) ); return *this;	}
operator VkPhysicalDeviceDriverPropertiesKHR const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceDriverPropertiesKHR*>(this);	}
operator VkPhysicalDeviceDriverPropertiesKHR &() 
	{	return *reinterpret_cast<VkPhysicalDeviceDriverPropertiesKHR*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_driver_properties_KHR) == sizeof(VkPhysicalDeviceDriverPropertiesKHR),
	"struct and wrapper have different size!");
#endif //LAKA_UNKNOW

/*	VkPhysicalDeviceIDProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_id_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
	void * pNext = nullptr;
public:
	uint8_t deviceUUID[VK_UUID_SIZE];
	uint8_t driverUUID[VK_UUID_SIZE];
	uint8_t deviceLUID[VK_LUID_SIZE];
	uint32_t deviceNodeMask;
	VkBool32 deviceLUIDValid;

S_physical_device_id_properties(){}

S_physical_device_id_properties(
	uint8_t deviceUUID_[VK_UUID_SIZE],
	uint8_t driverUUID_[VK_UUID_SIZE],
	uint8_t deviceLUID_[VK_LUID_SIZE],
	uint32_t deviceNodeMask_,
	VkBool32 deviceLUIDValid_)
	:deviceNodeMask(deviceNodeMask_)
	,deviceLUIDValid(deviceLUIDValid_)
{
memcpy(deviceUUID,deviceUUID_,sizeof(deviceUUID) );
memcpy(driverUUID,driverUUID_,sizeof(driverUUID) );
memcpy(deviceLUID,deviceLUID_,sizeof(deviceLUID) );
}

S_physical_device_id_properties( VkPhysicalDeviceIDProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_id_properties ) );	}
S_physical_device_id_properties& operator=( VkPhysicalDeviceIDProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_id_properties ) ); return *this;	}
operator VkPhysicalDeviceIDProperties const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceIDProperties*>(this);	}
operator VkPhysicalDeviceIDProperties &() 
	{	return *reinterpret_cast<VkPhysicalDeviceIDProperties*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_id_properties) == sizeof(VkPhysicalDeviceIDProperties),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceMultiviewProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_multiview_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
	void * pNext = nullptr;
public:
	uint32_t maxMultiviewViewCount;
	uint32_t maxMultiviewInstanceIndex;

S_physical_device_multiview_properties(){}

S_physical_device_multiview_properties(
	uint32_t maxMultiviewViewCount_,
	uint32_t maxMultiviewInstanceIndex_)
	:maxMultiviewViewCount(maxMultiviewViewCount_)
	,maxMultiviewInstanceIndex(maxMultiviewInstanceIndex_)
{
}

S_physical_device_multiview_properties( VkPhysicalDeviceMultiviewProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_multiview_properties ) );	}
S_physical_device_multiview_properties& operator=( VkPhysicalDeviceMultiviewProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_multiview_properties ) ); return *this;	}
operator VkPhysicalDeviceMultiviewProperties const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceMultiviewProperties*>(this);	}
operator VkPhysicalDeviceMultiviewProperties &() 
	{	return *reinterpret_cast<VkPhysicalDeviceMultiviewProperties*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_multiview_properties) == sizeof(VkPhysicalDeviceMultiviewProperties),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceDiscardRectanglePropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_discard_rectangle_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	uint32_t maxDiscardRectangles;

S_physical_device_discard_rectangle_properties_EXT(){}

S_physical_device_discard_rectangle_properties_EXT(
	uint32_t maxDiscardRectangles_)
	:maxDiscardRectangles(maxDiscardRectangles_)
{
}

S_physical_device_discard_rectangle_properties_EXT( VkPhysicalDeviceDiscardRectanglePropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_discard_rectangle_properties_EXT ) );	}
S_physical_device_discard_rectangle_properties_EXT& operator=( VkPhysicalDeviceDiscardRectanglePropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_discard_rectangle_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceDiscardRectanglePropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(this);	}
operator VkPhysicalDeviceDiscardRectanglePropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_discard_rectangle_properties_EXT) == sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_multiview_per_view_attributes_properties_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
	void * pNext = nullptr;
public:
	VkBool32 perViewPositionAllComponents;

S_physical_device_multiview_per_view_attributes_properties_NVX(){}

S_physical_device_multiview_per_view_attributes_properties_NVX(
	VkBool32 perViewPositionAllComponents_)
	:perViewPositionAllComponents(perViewPositionAllComponents_)
{
}

S_physical_device_multiview_per_view_attributes_properties_NVX( VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_multiview_per_view_attributes_properties_NVX ) );	}
S_physical_device_multiview_per_view_attributes_properties_NVX& operator=( VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_multiview_per_view_attributes_properties_NVX ) ); return *this;	}
operator VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*>(this);	}
operator VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX &() 
	{	return *reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_multiview_per_view_attributes_properties_NVX) == sizeof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceSubgroupProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_subgroup_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
	void * pNext = nullptr;
public:
	uint32_t subgroupSize;
	F_shader_stage supportedStages;
	F_subgroup_feature supportedOperations;
	VkBool32 quadOperationsInAllStages;

S_physical_device_subgroup_properties(){}

S_physical_device_subgroup_properties(
	uint32_t subgroupSize_,
	F_shader_stage supportedStages_,
	F_subgroup_feature supportedOperations_,
	VkBool32 quadOperationsInAllStages_)
	:subgroupSize(subgroupSize_)
	,supportedStages(supportedStages_)
	,supportedOperations(supportedOperations_)
	,quadOperationsInAllStages(quadOperationsInAllStages_)
{
}

S_physical_device_subgroup_properties( VkPhysicalDeviceSubgroupProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_subgroup_properties ) );	}
S_physical_device_subgroup_properties& operator=( VkPhysicalDeviceSubgroupProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_subgroup_properties ) ); return *this;	}
operator VkPhysicalDeviceSubgroupProperties const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceSubgroupProperties*>(this);	}
operator VkPhysicalDeviceSubgroupProperties &() 
	{	return *reinterpret_cast<VkPhysicalDeviceSubgroupProperties*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_subgroup_properties) == sizeof(VkPhysicalDeviceSubgroupProperties),
	"struct and wrapper have different size!");

/*	VkPhysicalDevicePointClippingProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_point_clipping_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;
	void * pNext = nullptr;
public:
	E_point_clipping_behavior pointClippingBehavior;

S_physical_device_point_clipping_properties(){}

S_physical_device_point_clipping_properties(
	E_point_clipping_behavior pointClippingBehavior_)
	:pointClippingBehavior(pointClippingBehavior_)
{
}

S_physical_device_point_clipping_properties( VkPhysicalDevicePointClippingProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_point_clipping_properties ) );	}
S_physical_device_point_clipping_properties& operator=( VkPhysicalDevicePointClippingProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_point_clipping_properties ) ); return *this;	}
operator VkPhysicalDevicePointClippingProperties const&() const 
	{	return *reinterpret_cast<const VkPhysicalDevicePointClippingProperties*>(this);	}
operator VkPhysicalDevicePointClippingProperties &() 
	{	return *reinterpret_cast<VkPhysicalDevicePointClippingProperties*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_point_clipping_properties) == sizeof(VkPhysicalDevicePointClippingProperties),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceProtectedMemoryProperties
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_protected_memory_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;
	void * pNext = nullptr;
public:
	VkBool32 protectedNoFault;

S_physical_device_protected_memory_properties(){}

S_physical_device_protected_memory_properties(
	VkBool32 protectedNoFault_)
	:protectedNoFault(protectedNoFault_)
{
}

S_physical_device_protected_memory_properties( VkPhysicalDeviceProtectedMemoryProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_protected_memory_properties ) );	}
S_physical_device_protected_memory_properties& operator=( VkPhysicalDeviceProtectedMemoryProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_protected_memory_properties ) ); return *this;	}
operator VkPhysicalDeviceProtectedMemoryProperties const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceProtectedMemoryProperties*>(this);	}
operator VkPhysicalDeviceProtectedMemoryProperties &() 
	{	return *reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_protected_memory_properties) == sizeof(VkPhysicalDeviceProtectedMemoryProperties),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_sampler_filter_minmax_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	VkBool32 filterMinmaxSingleComponentFormats;
	VkBool32 filterMinmaxImageComponentMapping;

S_physical_device_sampler_filter_minmax_properties_EXT(){}

S_physical_device_sampler_filter_minmax_properties_EXT(
	VkBool32 filterMinmaxSingleComponentFormats_,
	VkBool32 filterMinmaxImageComponentMapping_)
	:filterMinmaxSingleComponentFormats(filterMinmaxSingleComponentFormats_)
	,filterMinmaxImageComponentMapping(filterMinmaxImageComponentMapping_)
{
}

S_physical_device_sampler_filter_minmax_properties_EXT( VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_sampler_filter_minmax_properties_EXT ) );	}
S_physical_device_sampler_filter_minmax_properties_EXT& operator=( VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_sampler_filter_minmax_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT*>(this);	}
operator VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_sampler_filter_minmax_properties_EXT) == sizeof(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceSampleLocationsPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_sample_locations_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	F_sample_count sampleLocationSampleCounts;
	S_extent_2d maxSampleLocationGridSize;
	float sampleLocationCoordinateRange[2];
	uint32_t sampleLocationSubPixelBits;
	VkBool32 variableSampleLocations;

S_physical_device_sample_locations_properties_EXT(){}

S_physical_device_sample_locations_properties_EXT(
	F_sample_count sampleLocationSampleCounts_,
	S_extent_2d maxSampleLocationGridSize_,
	float sampleLocationCoordinateRange_[2],
	uint32_t sampleLocationSubPixelBits_,
	VkBool32 variableSampleLocations_)
	:sampleLocationSampleCounts(sampleLocationSampleCounts_)
	,maxSampleLocationGridSize(maxSampleLocationGridSize_)
	,sampleLocationSubPixelBits(sampleLocationSubPixelBits_)
	,variableSampleLocations(variableSampleLocations_)
{
memcpy(sampleLocationCoordinateRange,sampleLocationCoordinateRange_,sizeof(sampleLocationCoordinateRange) );
}

S_physical_device_sample_locations_properties_EXT( VkPhysicalDeviceSampleLocationsPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_sample_locations_properties_EXT ) );	}
S_physical_device_sample_locations_properties_EXT& operator=( VkPhysicalDeviceSampleLocationsPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_sample_locations_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceSampleLocationsPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT*>(this);	}
operator VkPhysicalDeviceSampleLocationsPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_sample_locations_properties_EXT) == sizeof(VkPhysicalDeviceSampleLocationsPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_blend_operation_advanced_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	uint32_t advancedBlendMaxColorAttachments;
	VkBool32 advancedBlendIndependentBlend;
	VkBool32 advancedBlendNonPremultipliedSrcColor;
	VkBool32 advancedBlendNonPremultipliedDstColor;
	VkBool32 advancedBlendCorrelatedOverlap;
	VkBool32 advancedBlendAllOperations;

S_physical_device_blend_operation_advanced_properties_EXT(){}

S_physical_device_blend_operation_advanced_properties_EXT(
	uint32_t advancedBlendMaxColorAttachments_,
	VkBool32 advancedBlendIndependentBlend_,
	VkBool32 advancedBlendNonPremultipliedSrcColor_,
	VkBool32 advancedBlendNonPremultipliedDstColor_,
	VkBool32 advancedBlendCorrelatedOverlap_,
	VkBool32 advancedBlendAllOperations_)
	:advancedBlendMaxColorAttachments(advancedBlendMaxColorAttachments_)
	,advancedBlendIndependentBlend(advancedBlendIndependentBlend_)
	,advancedBlendNonPremultipliedSrcColor(advancedBlendNonPremultipliedSrcColor_)
	,advancedBlendNonPremultipliedDstColor(advancedBlendNonPremultipliedDstColor_)
	,advancedBlendCorrelatedOverlap(advancedBlendCorrelatedOverlap_)
	,advancedBlendAllOperations(advancedBlendAllOperations_)
{
}

S_physical_device_blend_operation_advanced_properties_EXT( VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_blend_operation_advanced_properties_EXT ) );	}
S_physical_device_blend_operation_advanced_properties_EXT& operator=( VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_blend_operation_advanced_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*>(this);	}
operator VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_blend_operation_advanced_properties_EXT) == sizeof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceInlineUniformBlockPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_inline_uniform_block_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	uint32_t maxInlineUniformBlockSize;
	uint32_t maxPerStageDescriptorInlineUniformBlocks;
	uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
	uint32_t maxDescriptorSetInlineUniformBlocks;
	uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks;

S_physical_device_inline_uniform_block_properties_EXT(){}

S_physical_device_inline_uniform_block_properties_EXT(
	uint32_t maxInlineUniformBlockSize_,
	uint32_t maxPerStageDescriptorInlineUniformBlocks_,
	uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_,
	uint32_t maxDescriptorSetInlineUniformBlocks_,
	uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks_)
	:maxInlineUniformBlockSize(maxInlineUniformBlockSize_)
	,maxPerStageDescriptorInlineUniformBlocks(maxPerStageDescriptorInlineUniformBlocks_)
	,maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_)
	,maxDescriptorSetInlineUniformBlocks(maxDescriptorSetInlineUniformBlocks_)
	,maxDescriptorSetUpdateAfterBindInlineUniformBlocks(maxDescriptorSetUpdateAfterBindInlineUniformBlocks_)
{
}

S_physical_device_inline_uniform_block_properties_EXT( VkPhysicalDeviceInlineUniformBlockPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_inline_uniform_block_properties_EXT ) );	}
S_physical_device_inline_uniform_block_properties_EXT& operator=( VkPhysicalDeviceInlineUniformBlockPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_inline_uniform_block_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceInlineUniformBlockPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockPropertiesEXT*>(this);	}
operator VkPhysicalDeviceInlineUniformBlockPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceInlineUniformBlockPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_inline_uniform_block_properties_EXT) == sizeof(VkPhysicalDeviceInlineUniformBlockPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceMaintenance3Properties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_maintenance3_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
	void * pNext = nullptr;
public:
	uint32_t maxPerSetDescriptors;
	VkDeviceSize maxMemoryAllocationSize;

S_physical_device_maintenance3_properties(){}

S_physical_device_maintenance3_properties(
	uint32_t maxPerSetDescriptors_,
	VkDeviceSize maxMemoryAllocationSize_)
	:maxPerSetDescriptors(maxPerSetDescriptors_)
	,maxMemoryAllocationSize(maxMemoryAllocationSize_)
{
}

S_physical_device_maintenance3_properties( VkPhysicalDeviceMaintenance3Properties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_maintenance3_properties ) );	}
S_physical_device_maintenance3_properties& operator=( VkPhysicalDeviceMaintenance3Properties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_maintenance3_properties ) ); return *this;	}
operator VkPhysicalDeviceMaintenance3Properties const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceMaintenance3Properties*>(this);	}
operator VkPhysicalDeviceMaintenance3Properties &() 
	{	return *reinterpret_cast<VkPhysicalDeviceMaintenance3Properties*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_maintenance3_properties) == sizeof(VkPhysicalDeviceMaintenance3Properties),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceExternalMemoryHostPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_external_memory_host_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	VkDeviceSize minImportedHostPointerAlignment;

S_physical_device_external_memory_host_properties_EXT(){}

S_physical_device_external_memory_host_properties_EXT(
	VkDeviceSize minImportedHostPointerAlignment_)
	:minImportedHostPointerAlignment(minImportedHostPointerAlignment_)
{
}

S_physical_device_external_memory_host_properties_EXT( VkPhysicalDeviceExternalMemoryHostPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_memory_host_properties_EXT ) );	}
S_physical_device_external_memory_host_properties_EXT& operator=( VkPhysicalDeviceExternalMemoryHostPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_memory_host_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceExternalMemoryHostPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT*>(this);	}
operator VkPhysicalDeviceExternalMemoryHostPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_external_memory_host_properties_EXT) == sizeof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceConservativeRasterizationPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_conservative_rasterization_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	float primitiveOverestimationSize;
	float maxExtraPrimitiveOverestimationSize;
	float extraPrimitiveOverestimationSizeGranularity;
	VkBool32 primitiveUnderestimation;
	VkBool32 conservativePointAndLineRasterization;
	VkBool32 degenerateTrianglesRasterized;
	VkBool32 degenerateLinesRasterized;
	VkBool32 fullyCoveredFragmentShaderInputVariable;
	VkBool32 conservativeRasterizationPostDepthCoverage;

S_physical_device_conservative_rasterization_properties_EXT(){}

S_physical_device_conservative_rasterization_properties_EXT(
	float primitiveOverestimationSize_,
	float maxExtraPrimitiveOverestimationSize_,
	float extraPrimitiveOverestimationSizeGranularity_,
	VkBool32 primitiveUnderestimation_,
	VkBool32 conservativePointAndLineRasterization_,
	VkBool32 degenerateTrianglesRasterized_,
	VkBool32 degenerateLinesRasterized_,
	VkBool32 fullyCoveredFragmentShaderInputVariable_,
	VkBool32 conservativeRasterizationPostDepthCoverage_)
	:primitiveOverestimationSize(primitiveOverestimationSize_)
	,maxExtraPrimitiveOverestimationSize(maxExtraPrimitiveOverestimationSize_)
	,extraPrimitiveOverestimationSizeGranularity(extraPrimitiveOverestimationSizeGranularity_)
	,primitiveUnderestimation(primitiveUnderestimation_)
	,conservativePointAndLineRasterization(conservativePointAndLineRasterization_)
	,degenerateTrianglesRasterized(degenerateTrianglesRasterized_)
	,degenerateLinesRasterized(degenerateLinesRasterized_)
	,fullyCoveredFragmentShaderInputVariable(fullyCoveredFragmentShaderInputVariable_)
	,conservativeRasterizationPostDepthCoverage(conservativeRasterizationPostDepthCoverage_)
{
}

S_physical_device_conservative_rasterization_properties_EXT( VkPhysicalDeviceConservativeRasterizationPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_conservative_rasterization_properties_EXT ) );	}
S_physical_device_conservative_rasterization_properties_EXT& operator=( VkPhysicalDeviceConservativeRasterizationPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_conservative_rasterization_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceConservativeRasterizationPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT*>(this);	}
operator VkPhysicalDeviceConservativeRasterizationPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_conservative_rasterization_properties_EXT) == sizeof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceShaderCorePropertiesAMD
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_shader_core_properties_AMD{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
	void * pNext = nullptr;
public:
	uint32_t shaderEngineCount;
	uint32_t shaderArraysPerEngineCount;
	uint32_t computeUnitsPerShaderArray;
	uint32_t simdPerComputeUnit;
	uint32_t wavefrontsPerSimd;
	uint32_t wavefrontSize;
	uint32_t sgprsPerSimd;
	uint32_t minSgprAllocation;
	uint32_t maxSgprAllocation;
	uint32_t sgprAllocationGranularity;
	uint32_t vgprsPerSimd;
	uint32_t minVgprAllocation;
	uint32_t maxVgprAllocation;
	uint32_t vgprAllocationGranularity;

S_physical_device_shader_core_properties_AMD(){}

S_physical_device_shader_core_properties_AMD(
	uint32_t shaderEngineCount_,
	uint32_t shaderArraysPerEngineCount_,
	uint32_t computeUnitsPerShaderArray_,
	uint32_t simdPerComputeUnit_,
	uint32_t wavefrontsPerSimd_,
	uint32_t wavefrontSize_,
	uint32_t sgprsPerSimd_,
	uint32_t minSgprAllocation_,
	uint32_t maxSgprAllocation_,
	uint32_t sgprAllocationGranularity_,
	uint32_t vgprsPerSimd_,
	uint32_t minVgprAllocation_,
	uint32_t maxVgprAllocation_,
	uint32_t vgprAllocationGranularity_)
	:shaderEngineCount(shaderEngineCount_)
	,shaderArraysPerEngineCount(shaderArraysPerEngineCount_)
	,computeUnitsPerShaderArray(computeUnitsPerShaderArray_)
	,simdPerComputeUnit(simdPerComputeUnit_)
	,wavefrontsPerSimd(wavefrontsPerSimd_)
	,wavefrontSize(wavefrontSize_)
	,sgprsPerSimd(sgprsPerSimd_)
	,minSgprAllocation(minSgprAllocation_)
	,maxSgprAllocation(maxSgprAllocation_)
	,sgprAllocationGranularity(sgprAllocationGranularity_)
	,vgprsPerSimd(vgprsPerSimd_)
	,minVgprAllocation(minVgprAllocation_)
	,maxVgprAllocation(maxVgprAllocation_)
	,vgprAllocationGranularity(vgprAllocationGranularity_)
{
}

S_physical_device_shader_core_properties_AMD( VkPhysicalDeviceShaderCorePropertiesAMD const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_core_properties_AMD ) );	}
S_physical_device_shader_core_properties_AMD& operator=( VkPhysicalDeviceShaderCorePropertiesAMD const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_shader_core_properties_AMD ) ); return *this;	}
operator VkPhysicalDeviceShaderCorePropertiesAMD const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesAMD*>(this);	}
operator VkPhysicalDeviceShaderCorePropertiesAMD &() 
	{	return *reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesAMD*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_shader_core_properties_AMD) == sizeof(VkPhysicalDeviceShaderCorePropertiesAMD),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceDescriptorIndexingPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_descriptor_indexing_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	uint32_t maxUpdateAfterBindDescriptorsInAllPools;
	VkBool32 shaderUniformBufferArrayNonUniformIndexingNative;
	VkBool32 shaderSampledImageArrayNonUniformIndexingNative;
	VkBool32 shaderStorageBufferArrayNonUniformIndexingNative;
	VkBool32 shaderStorageImageArrayNonUniformIndexingNative;
	VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative;
	VkBool32 robustBufferAccessUpdateAfterBind;
	VkBool32 quadDivergentImplicitLod;
	uint32_t maxPerStageDescriptorUpdateAfterBindSamplers;
	uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers;
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers;
	uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages;
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages;
	uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments;
	uint32_t maxPerStageUpdateAfterBindResources;
	uint32_t maxDescriptorSetUpdateAfterBindSamplers;
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers;
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers;
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
	uint32_t maxDescriptorSetUpdateAfterBindSampledImages;
	uint32_t maxDescriptorSetUpdateAfterBindStorageImages;
	uint32_t maxDescriptorSetUpdateAfterBindInputAttachments;

S_physical_device_descriptor_indexing_properties_EXT(){}

S_physical_device_descriptor_indexing_properties_EXT(
	uint32_t maxUpdateAfterBindDescriptorsInAllPools_,
	VkBool32 shaderUniformBufferArrayNonUniformIndexingNative_,
	VkBool32 shaderSampledImageArrayNonUniformIndexingNative_,
	VkBool32 shaderStorageBufferArrayNonUniformIndexingNative_,
	VkBool32 shaderStorageImageArrayNonUniformIndexingNative_,
	VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative_,
	VkBool32 robustBufferAccessUpdateAfterBind_,
	VkBool32 quadDivergentImplicitLod_,
	uint32_t maxPerStageDescriptorUpdateAfterBindSamplers_,
	uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers_,
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers_,
	uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages_,
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages_,
	uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments_,
	uint32_t maxPerStageUpdateAfterBindResources_,
	uint32_t maxDescriptorSetUpdateAfterBindSamplers_,
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers_,
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic_,
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers_,
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic_,
	uint32_t maxDescriptorSetUpdateAfterBindSampledImages_,
	uint32_t maxDescriptorSetUpdateAfterBindStorageImages_,
	uint32_t maxDescriptorSetUpdateAfterBindInputAttachments_)
	:maxUpdateAfterBindDescriptorsInAllPools(maxUpdateAfterBindDescriptorsInAllPools_)
	,shaderUniformBufferArrayNonUniformIndexingNative(shaderUniformBufferArrayNonUniformIndexingNative_)
	,shaderSampledImageArrayNonUniformIndexingNative(shaderSampledImageArrayNonUniformIndexingNative_)
	,shaderStorageBufferArrayNonUniformIndexingNative(shaderStorageBufferArrayNonUniformIndexingNative_)
	,shaderStorageImageArrayNonUniformIndexingNative(shaderStorageImageArrayNonUniformIndexingNative_)
	,shaderInputAttachmentArrayNonUniformIndexingNative(shaderInputAttachmentArrayNonUniformIndexingNative_)
	,robustBufferAccessUpdateAfterBind(robustBufferAccessUpdateAfterBind_)
	,quadDivergentImplicitLod(quadDivergentImplicitLod_)
	,maxPerStageDescriptorUpdateAfterBindSamplers(maxPerStageDescriptorUpdateAfterBindSamplers_)
	,maxPerStageDescriptorUpdateAfterBindUniformBuffers(maxPerStageDescriptorUpdateAfterBindUniformBuffers_)
	,maxPerStageDescriptorUpdateAfterBindStorageBuffers(maxPerStageDescriptorUpdateAfterBindStorageBuffers_)
	,maxPerStageDescriptorUpdateAfterBindSampledImages(maxPerStageDescriptorUpdateAfterBindSampledImages_)
	,maxPerStageDescriptorUpdateAfterBindStorageImages(maxPerStageDescriptorUpdateAfterBindStorageImages_)
	,maxPerStageDescriptorUpdateAfterBindInputAttachments(maxPerStageDescriptorUpdateAfterBindInputAttachments_)
	,maxPerStageUpdateAfterBindResources(maxPerStageUpdateAfterBindResources_)
	,maxDescriptorSetUpdateAfterBindSamplers(maxDescriptorSetUpdateAfterBindSamplers_)
	,maxDescriptorSetUpdateAfterBindUniformBuffers(maxDescriptorSetUpdateAfterBindUniformBuffers_)
	,maxDescriptorSetUpdateAfterBindUniformBuffersDynamic(maxDescriptorSetUpdateAfterBindUniformBuffersDynamic_)
	,maxDescriptorSetUpdateAfterBindStorageBuffers(maxDescriptorSetUpdateAfterBindStorageBuffers_)
	,maxDescriptorSetUpdateAfterBindStorageBuffersDynamic(maxDescriptorSetUpdateAfterBindStorageBuffersDynamic_)
	,maxDescriptorSetUpdateAfterBindSampledImages(maxDescriptorSetUpdateAfterBindSampledImages_)
	,maxDescriptorSetUpdateAfterBindStorageImages(maxDescriptorSetUpdateAfterBindStorageImages_)
	,maxDescriptorSetUpdateAfterBindInputAttachments(maxDescriptorSetUpdateAfterBindInputAttachments_)
{
}

S_physical_device_descriptor_indexing_properties_EXT( VkPhysicalDeviceDescriptorIndexingPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_descriptor_indexing_properties_EXT ) );	}
S_physical_device_descriptor_indexing_properties_EXT& operator=( VkPhysicalDeviceDescriptorIndexingPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_descriptor_indexing_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceDescriptorIndexingPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingPropertiesEXT*>(this);	}
operator VkPhysicalDeviceDescriptorIndexingPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceDescriptorIndexingPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_descriptor_indexing_properties_EXT) == sizeof(VkPhysicalDeviceDescriptorIndexingPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_vertex_attribute_divisor_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	uint32_t maxVertexAttribDivisor;

S_physical_device_vertex_attribute_divisor_properties_EXT(){}

S_physical_device_vertex_attribute_divisor_properties_EXT(
	uint32_t maxVertexAttribDivisor_)
	:maxVertexAttribDivisor(maxVertexAttribDivisor_)
{
}

S_physical_device_vertex_attribute_divisor_properties_EXT( VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_vertex_attribute_divisor_properties_EXT ) );	}
S_physical_device_vertex_attribute_divisor_properties_EXT& operator=( VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_vertex_attribute_divisor_properties_EXT ) ); return *this;	}
operator VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*>(this);	}
operator VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_vertex_attribute_divisor_properties_EXT) == sizeof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceShadingRateImagePropertiesNV
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_shading_rate_image_properties_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;
	void * pNext = nullptr;
public:
	S_extent_2d shadingRateTexelSize;
	uint32_t shadingRatePaletteSize;
	uint32_t shadingRateMaxCoarseSamples;

S_physical_device_shading_rate_image_properties_NV(){}

S_physical_device_shading_rate_image_properties_NV(
	S_extent_2d shadingRateTexelSize_,
	uint32_t shadingRatePaletteSize_,
	uint32_t shadingRateMaxCoarseSamples_)
	:shadingRateTexelSize(shadingRateTexelSize_)
	,shadingRatePaletteSize(shadingRatePaletteSize_)
	,shadingRateMaxCoarseSamples(shadingRateMaxCoarseSamples_)
{
}

S_physical_device_shading_rate_image_properties_NV( VkPhysicalDeviceShadingRateImagePropertiesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_shading_rate_image_properties_NV ) );	}
S_physical_device_shading_rate_image_properties_NV& operator=( VkPhysicalDeviceShadingRateImagePropertiesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_shading_rate_image_properties_NV ) ); return *this;	}
operator VkPhysicalDeviceShadingRateImagePropertiesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceShadingRateImagePropertiesNV*>(this);	}
operator VkPhysicalDeviceShadingRateImagePropertiesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceShadingRateImagePropertiesNV*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_shading_rate_image_properties_NV) == sizeof(VkPhysicalDeviceShadingRateImagePropertiesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceMeshShaderPropertiesNV
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_mesh_shader_properties_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;
	void * pNext = nullptr;
public:
	uint32_t maxDrawMeshTasksCount;
	uint32_t maxTaskWorkGroupInvocations;
	uint32_t maxTaskWorkGroupSize[3];
	uint32_t maxTaskTotalMemorySize;
	uint32_t maxTaskOutputCount;
	uint32_t maxMeshWorkGroupInvocations;
	uint32_t maxMeshWorkGroupSize[3];
	uint32_t maxMeshTotalMemorySize;
	uint32_t maxMeshOutputVertices;
	uint32_t maxMeshOutputPrimitives;
	uint32_t maxMeshMultiviewViewCount;
	uint32_t meshOutputPerVertexGranularity;
	uint32_t meshOutputPerPrimitiveGranularity;

S_physical_device_mesh_shader_properties_NV(){}

S_physical_device_mesh_shader_properties_NV(
	uint32_t maxDrawMeshTasksCount_,
	uint32_t maxTaskWorkGroupInvocations_,
	uint32_t maxTaskWorkGroupSize_[3],
	uint32_t maxTaskTotalMemorySize_,
	uint32_t maxTaskOutputCount_,
	uint32_t maxMeshWorkGroupInvocations_,
	uint32_t maxMeshWorkGroupSize_[3],
	uint32_t maxMeshTotalMemorySize_,
	uint32_t maxMeshOutputVertices_,
	uint32_t maxMeshOutputPrimitives_,
	uint32_t maxMeshMultiviewViewCount_,
	uint32_t meshOutputPerVertexGranularity_,
	uint32_t meshOutputPerPrimitiveGranularity_)
	:maxDrawMeshTasksCount(maxDrawMeshTasksCount_)
	,maxTaskWorkGroupInvocations(maxTaskWorkGroupInvocations_)
	,maxTaskTotalMemorySize(maxTaskTotalMemorySize_)
	,maxTaskOutputCount(maxTaskOutputCount_)
	,maxMeshWorkGroupInvocations(maxMeshWorkGroupInvocations_)
	,maxMeshTotalMemorySize(maxMeshTotalMemorySize_)
	,maxMeshOutputVertices(maxMeshOutputVertices_)
	,maxMeshOutputPrimitives(maxMeshOutputPrimitives_)
	,maxMeshMultiviewViewCount(maxMeshMultiviewViewCount_)
	,meshOutputPerVertexGranularity(meshOutputPerVertexGranularity_)
	,meshOutputPerPrimitiveGranularity(meshOutputPerPrimitiveGranularity_)
{
memcpy(maxTaskWorkGroupSize,maxTaskWorkGroupSize_,sizeof(maxTaskWorkGroupSize) );
memcpy(maxMeshWorkGroupSize,maxMeshWorkGroupSize_,sizeof(maxMeshWorkGroupSize) );
}

S_physical_device_mesh_shader_properties_NV( VkPhysicalDeviceMeshShaderPropertiesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_mesh_shader_properties_NV ) );	}
S_physical_device_mesh_shader_properties_NV& operator=( VkPhysicalDeviceMeshShaderPropertiesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_mesh_shader_properties_NV ) ); return *this;	}
operator VkPhysicalDeviceMeshShaderPropertiesNV const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesNV*>(this);	}
operator VkPhysicalDeviceMeshShaderPropertiesNV &() 
	{	return *reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesNV*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_mesh_shader_properties_NV) == sizeof(VkPhysicalDeviceMeshShaderPropertiesNV),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceRaytracingPropertiesNVX
ex to: VkPhysicalDeviceProperties2
*/
struct		S_physical_device_raytracing_properties_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAYTRACING_PROPERTIES_NVX;
	void * pNext = nullptr;
public:
	uint32_t shaderHeaderSize;
	uint32_t maxRecursionDepth;
	uint32_t maxGeometryCount;

S_physical_device_raytracing_properties_NVX(){}

S_physical_device_raytracing_properties_NVX(
	uint32_t shaderHeaderSize_,
	uint32_t maxRecursionDepth_,
	uint32_t maxGeometryCount_)
	:shaderHeaderSize(shaderHeaderSize_)
	,maxRecursionDepth(maxRecursionDepth_)
	,maxGeometryCount(maxGeometryCount_)
{
}

S_physical_device_raytracing_properties_NVX( VkPhysicalDeviceRaytracingPropertiesNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_raytracing_properties_NVX ) );	}
S_physical_device_raytracing_properties_NVX& operator=( VkPhysicalDeviceRaytracingPropertiesNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_raytracing_properties_NVX ) ); return *this;	}
operator VkPhysicalDeviceRaytracingPropertiesNVX const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceRaytracingPropertiesNVX*>(this);	}
operator VkPhysicalDeviceRaytracingPropertiesNVX &() 
	{	return *reinterpret_cast<VkPhysicalDeviceRaytracingPropertiesNVX*>(this);	}

friend S_physical_device_properties2;
};
static_assert(
	sizeof(S_physical_device_raytracing_properties_NVX) == sizeof(VkPhysicalDeviceRaytracingPropertiesNVX),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceProperties2
(returnedonly)
ex:
	VkPhysicalDevicePushDescriptorPropertiesKHR
	VkPhysicalDeviceDriverPropertiesKHR
	VkPhysicalDeviceIDProperties
	VkPhysicalDeviceMultiviewProperties
	VkPhysicalDeviceDiscardRectanglePropertiesEXT
	VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
	VkPhysicalDeviceSubgroupProperties
	VkPhysicalDevicePointClippingProperties
	VkPhysicalDeviceProtectedMemoryProperties
	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT
	VkPhysicalDeviceSampleLocationsPropertiesEXT
	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT
	VkPhysicalDeviceInlineUniformBlockPropertiesEXT
	VkPhysicalDeviceMaintenance3Properties
	VkPhysicalDeviceExternalMemoryHostPropertiesEXT
	VkPhysicalDeviceConservativeRasterizationPropertiesEXT
	VkPhysicalDeviceShaderCorePropertiesAMD
	VkPhysicalDeviceDescriptorIndexingPropertiesEXT
	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT
	VkPhysicalDeviceShadingRateImagePropertiesNV
	VkPhysicalDeviceMeshShaderPropertiesNV
	VkPhysicalDeviceRaytracingPropertiesNVX
*/
struct		S_physical_device_properties2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
	void * pNext = nullptr;
public:
	S_physical_device_properties properties;

S_physical_device_properties2(){}

S_physical_device_properties2(
	S_physical_device_properties properties_)
	:properties(properties_)
{
}

S_physical_device_properties2( VkPhysicalDeviceProperties2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_properties2 ) );	}
S_physical_device_properties2& operator=( VkPhysicalDeviceProperties2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_properties2 ) ); return *this;	}
operator VkPhysicalDeviceProperties2 const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceProperties2*>(this);	}
operator VkPhysicalDeviceProperties2 &() 
	{	return *reinterpret_cast<VkPhysicalDeviceProperties2*>(this);	}

S_physical_device_properties2& n_physical_device_push_descriptor_properties_KHR(S_physical_device_push_descriptor_properties_KHR const& next_);
#ifdef LAKA_UNKNOW
S_physical_device_properties2& n_physical_device_driver_properties_KHR(S_physical_device_driver_properties_KHR const& next_);
#endif
S_physical_device_properties2& n_physical_device_id_properties(S_physical_device_id_properties const& next_);
S_physical_device_properties2& n_physical_device_multiview_properties(S_physical_device_multiview_properties const& next_);
S_physical_device_properties2& n_physical_device_discard_rectangle_properties_EXT(S_physical_device_discard_rectangle_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_multiview_per_view_attributes_properties_NVX(S_physical_device_multiview_per_view_attributes_properties_NVX const& next_);
S_physical_device_properties2& n_physical_device_subgroup_properties(S_physical_device_subgroup_properties const& next_);
S_physical_device_properties2& n_physical_device_point_clipping_properties(S_physical_device_point_clipping_properties const& next_);
S_physical_device_properties2& n_physical_device_protected_memory_properties(S_physical_device_protected_memory_properties const& next_);
S_physical_device_properties2& n_physical_device_sampler_filter_minmax_properties_EXT(S_physical_device_sampler_filter_minmax_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_sample_locations_properties_EXT(S_physical_device_sample_locations_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_blend_operation_advanced_properties_EXT(S_physical_device_blend_operation_advanced_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_inline_uniform_block_properties_EXT(S_physical_device_inline_uniform_block_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_maintenance3_properties(S_physical_device_maintenance3_properties const& next_);
S_physical_device_properties2& n_physical_device_external_memory_host_properties_EXT(S_physical_device_external_memory_host_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_conservative_rasterization_properties_EXT(S_physical_device_conservative_rasterization_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_shader_core_properties_AMD(S_physical_device_shader_core_properties_AMD const& next_);
S_physical_device_properties2& n_physical_device_descriptor_indexing_properties_EXT(S_physical_device_descriptor_indexing_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_vertex_attribute_divisor_properties_EXT(S_physical_device_vertex_attribute_divisor_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_shading_rate_image_properties_NV(S_physical_device_shading_rate_image_properties_NV const& next_);
S_physical_device_properties2& n_physical_device_mesh_shader_properties_NV(S_physical_device_mesh_shader_properties_NV const& next_);
S_physical_device_properties2& n_physical_device_raytracing_properties_NVX(S_physical_device_raytracing_properties_NVX const& next_);
};
static_assert(
	sizeof(S_physical_device_properties2) == sizeof(VkPhysicalDeviceProperties2),
	"struct and wrapper have different size!");

struct N_physical_device_properties2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_physical_device_properties2& n_physical_device_push_descriptor_properties_KHR(S_physical_device_push_descriptor_properties_KHR const& next_);
#ifdef LAKA_UNKNOW
N_physical_device_properties2& n_physical_device_driver_properties_KHR(S_physical_device_driver_properties_KHR const& next_);
#endif
N_physical_device_properties2& n_physical_device_id_properties(S_physical_device_id_properties const& next_);
N_physical_device_properties2& n_physical_device_multiview_properties(S_physical_device_multiview_properties const& next_);
N_physical_device_properties2& n_physical_device_discard_rectangle_properties_EXT(S_physical_device_discard_rectangle_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_multiview_per_view_attributes_properties_NVX(S_physical_device_multiview_per_view_attributes_properties_NVX const& next_);
N_physical_device_properties2& n_physical_device_subgroup_properties(S_physical_device_subgroup_properties const& next_);
N_physical_device_properties2& n_physical_device_point_clipping_properties(S_physical_device_point_clipping_properties const& next_);
N_physical_device_properties2& n_physical_device_protected_memory_properties(S_physical_device_protected_memory_properties const& next_);
N_physical_device_properties2& n_physical_device_sampler_filter_minmax_properties_EXT(S_physical_device_sampler_filter_minmax_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_sample_locations_properties_EXT(S_physical_device_sample_locations_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_blend_operation_advanced_properties_EXT(S_physical_device_blend_operation_advanced_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_inline_uniform_block_properties_EXT(S_physical_device_inline_uniform_block_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_maintenance3_properties(S_physical_device_maintenance3_properties const& next_);
N_physical_device_properties2& n_physical_device_external_memory_host_properties_EXT(S_physical_device_external_memory_host_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_conservative_rasterization_properties_EXT(S_physical_device_conservative_rasterization_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_shader_core_properties_AMD(S_physical_device_shader_core_properties_AMD const& next_);
N_physical_device_properties2& n_physical_device_descriptor_indexing_properties_EXT(S_physical_device_descriptor_indexing_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_vertex_attribute_divisor_properties_EXT(S_physical_device_vertex_attribute_divisor_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_shading_rate_image_properties_NV(S_physical_device_shading_rate_image_properties_NV const& next_);
N_physical_device_properties2& n_physical_device_mesh_shader_properties_NV(S_physical_device_mesh_shader_properties_NV const& next_);
N_physical_device_properties2& n_physical_device_raytracing_properties_NVX(S_physical_device_raytracing_properties_NVX const& next_);
};

/*	VkDrmFormatModifierPropertiesEXT
(returnedonly)
*/
struct		S_drm_format_modifier_properties_EXT{
	uint64_t drmFormatModifier;
	uint32_t drmFormatModifierPlaneCount;
	F_format_feature drmFormatModifierTilingFeatures;

S_drm_format_modifier_properties_EXT(){}
};

/*	VkDrmFormatModifierPropertiesListEXT
ex to: VkFormatProperties2
*/
#ifdef LAKA_UNKNOW
struct		S_drm_format_modifier_properties_list_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;
	void * pNext = nullptr;
public:
	uint32_t drmFormatModifierCount;
	S_drm_format_modifier_properties_EXT * pDrmFormatModifierProperties;

S_drm_format_modifier_properties_list_EXT(){}

S_drm_format_modifier_properties_list_EXT(
	uint32_t drmFormatModifierCount_,
	S_drm_format_modifier_properties_EXT * pDrmFormatModifierProperties_)
	:drmFormatModifierCount(drmFormatModifierCount_)
	,pDrmFormatModifierProperties(pDrmFormatModifierProperties_)
{
}

S_drm_format_modifier_properties_list_EXT( VkDrmFormatModifierPropertiesListEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_drm_format_modifier_properties_list_EXT ) );	}
S_drm_format_modifier_properties_list_EXT& operator=( VkDrmFormatModifierPropertiesListEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_drm_format_modifier_properties_list_EXT ) ); return *this;	}
operator VkDrmFormatModifierPropertiesListEXT const&() const 
	{	return *reinterpret_cast<const VkDrmFormatModifierPropertiesListEXT*>(this);	}
operator VkDrmFormatModifierPropertiesListEXT &() 
	{	return *reinterpret_cast<VkDrmFormatModifierPropertiesListEXT*>(this);	}

friend S_format_properties2;
};
static_assert(
	sizeof(S_drm_format_modifier_properties_list_EXT) == sizeof(VkDrmFormatModifierPropertiesListEXT),
	"struct and wrapper have different size!");
#endif //LAKA_UNKNOW

/*	VkFormatProperties2
(returnedonly)
ex:
	VkDrmFormatModifierPropertiesListEXT
*/
struct		S_format_properties2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
	void * pNext = nullptr;
public:
	S_format_properties formatProperties;

S_format_properties2(){}

S_format_properties2(
	S_format_properties formatProperties_)
	:formatProperties(formatProperties_)
{
}

S_format_properties2( VkFormatProperties2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_format_properties2 ) );	}
S_format_properties2& operator=( VkFormatProperties2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_format_properties2 ) ); return *this;	}
operator VkFormatProperties2 const&() const 
	{	return *reinterpret_cast<const VkFormatProperties2*>(this);	}
operator VkFormatProperties2 &() 
	{	return *reinterpret_cast<VkFormatProperties2*>(this);	}

#ifdef LAKA_UNKNOW
S_format_properties2& n_drm_format_modifier_properties_list_EXT(S_drm_format_modifier_properties_list_EXT const& next_);
#endif
};
static_assert(
	sizeof(S_format_properties2) == sizeof(VkFormatProperties2),
	"struct and wrapper have different size!");

struct N_format_properties2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
#ifdef LAKA_UNKNOW
N_format_properties2& n_drm_format_modifier_properties_list_EXT(S_drm_format_modifier_properties_list_EXT const& next_);
#endif
};

/*	VkExternalMemoryProperties
(returnedonly)
*/
struct		S_external_memory_properties{
	F_external_memory_feature externalMemoryFeatures;
	F_external_memory_handle_type exportFromImportedHandleTypes;
	F_external_memory_handle_type compatibleHandleTypes;

S_external_memory_properties(){}
};

/*	VkExternalImageFormatProperties
(returnedonly)
ex to: VkImageFormatProperties2
*/
struct		S_external_image_format_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES;
	void * pNext = nullptr;
public:
	S_external_memory_properties externalMemoryProperties;

S_external_image_format_properties(){}

S_external_image_format_properties(
	S_external_memory_properties externalMemoryProperties_)
	:externalMemoryProperties(externalMemoryProperties_)
{
}

S_external_image_format_properties( VkExternalImageFormatProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_image_format_properties ) );	}
S_external_image_format_properties& operator=( VkExternalImageFormatProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_image_format_properties ) ); return *this;	}
operator VkExternalImageFormatProperties const&() const 
	{	return *reinterpret_cast<const VkExternalImageFormatProperties*>(this);	}
operator VkExternalImageFormatProperties &() 
	{	return *reinterpret_cast<VkExternalImageFormatProperties*>(this);	}

friend S_image_format_properties2;
};
static_assert(
	sizeof(S_external_image_format_properties) == sizeof(VkExternalImageFormatProperties),
	"struct and wrapper have different size!");

/*	VkSamplerYcbcrConversionImageFormatProperties
(returnedonly)
ex to: VkImageFormatProperties2
*/
struct		S_sampler_ycbcr_conversion_image_format_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;
	void * pNext = nullptr;
public:
	uint32_t combinedImageSamplerDescriptorCount;

S_sampler_ycbcr_conversion_image_format_properties(){}

S_sampler_ycbcr_conversion_image_format_properties(
	uint32_t combinedImageSamplerDescriptorCount_)
	:combinedImageSamplerDescriptorCount(combinedImageSamplerDescriptorCount_)
{
}

S_sampler_ycbcr_conversion_image_format_properties( VkSamplerYcbcrConversionImageFormatProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sampler_ycbcr_conversion_image_format_properties ) );	}
S_sampler_ycbcr_conversion_image_format_properties& operator=( VkSamplerYcbcrConversionImageFormatProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sampler_ycbcr_conversion_image_format_properties ) ); return *this;	}
operator VkSamplerYcbcrConversionImageFormatProperties const&() const 
	{	return *reinterpret_cast<const VkSamplerYcbcrConversionImageFormatProperties*>(this);	}
operator VkSamplerYcbcrConversionImageFormatProperties &() 
	{	return *reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties*>(this);	}

friend S_image_format_properties2;
};
static_assert(
	sizeof(S_sampler_ycbcr_conversion_image_format_properties) == sizeof(VkSamplerYcbcrConversionImageFormatProperties),
	"struct and wrapper have different size!");

/*	VkTextureLODGatherFormatPropertiesAMD
(returnedonly)
ex to: VkImageFormatProperties2
*/
struct		S_texture_lod_gather_format_properties_AMD{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;
	void * pNext = nullptr;
public:
	VkBool32 supportsTextureGatherLODBiasAMD;

S_texture_lod_gather_format_properties_AMD(){}

S_texture_lod_gather_format_properties_AMD(
	VkBool32 supportsTextureGatherLODBiasAMD_)
	:supportsTextureGatherLODBiasAMD(supportsTextureGatherLODBiasAMD_)
{
}

S_texture_lod_gather_format_properties_AMD( VkTextureLODGatherFormatPropertiesAMD const & rhs )
	{	memcpy( this, &rhs, sizeof( S_texture_lod_gather_format_properties_AMD ) );	}
S_texture_lod_gather_format_properties_AMD& operator=( VkTextureLODGatherFormatPropertiesAMD const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_texture_lod_gather_format_properties_AMD ) ); return *this;	}
operator VkTextureLODGatherFormatPropertiesAMD const&() const 
	{	return *reinterpret_cast<const VkTextureLODGatherFormatPropertiesAMD*>(this);	}
operator VkTextureLODGatherFormatPropertiesAMD &() 
	{	return *reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD*>(this);	}

friend S_image_format_properties2;
};
static_assert(
	sizeof(S_texture_lod_gather_format_properties_AMD) == sizeof(VkTextureLODGatherFormatPropertiesAMD),
	"struct and wrapper have different size!");

/*	VkAndroidHardwareBufferUsageANDROID
(returnedonly)
ex to: VkImageFormatProperties2
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_android_hardware_buffer_usage_ANDROID{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID;
	void * pNext = nullptr;
public:
	uint64_t androidHardwareBufferUsage;

S_android_hardware_buffer_usage_ANDROID(){}

S_android_hardware_buffer_usage_ANDROID(
	uint64_t androidHardwareBufferUsage_)
	:androidHardwareBufferUsage(androidHardwareBufferUsage_)
{
}

S_android_hardware_buffer_usage_ANDROID( VkAndroidHardwareBufferUsageANDROID const & rhs )
	{	memcpy( this, &rhs, sizeof( S_android_hardware_buffer_usage_ANDROID ) );	}
S_android_hardware_buffer_usage_ANDROID& operator=( VkAndroidHardwareBufferUsageANDROID const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_android_hardware_buffer_usage_ANDROID ) ); return *this;	}
operator VkAndroidHardwareBufferUsageANDROID const&() const 
	{	return *reinterpret_cast<const VkAndroidHardwareBufferUsageANDROID*>(this);	}
operator VkAndroidHardwareBufferUsageANDROID &() 
	{	return *reinterpret_cast<VkAndroidHardwareBufferUsageANDROID*>(this);	}

friend S_image_format_properties2;
};
static_assert(
	sizeof(S_android_hardware_buffer_usage_ANDROID) == sizeof(VkAndroidHardwareBufferUsageANDROID),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkImageFormatProperties2
(returnedonly)
ex:
	VkExternalImageFormatProperties
	VkSamplerYcbcrConversionImageFormatProperties
	VkTextureLODGatherFormatPropertiesAMD
	VkAndroidHardwareBufferUsageANDROID
*/
struct		S_image_format_properties2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
	void * pNext = nullptr;
public:
	S_image_format_properties imageFormatProperties;

S_image_format_properties2(){}

S_image_format_properties2(
	S_image_format_properties imageFormatProperties_)
	:imageFormatProperties(imageFormatProperties_)
{
}

S_image_format_properties2( VkImageFormatProperties2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_format_properties2 ) );	}
S_image_format_properties2& operator=( VkImageFormatProperties2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_format_properties2 ) ); return *this;	}
operator VkImageFormatProperties2 const&() const 
	{	return *reinterpret_cast<const VkImageFormatProperties2*>(this);	}
operator VkImageFormatProperties2 &() 
	{	return *reinterpret_cast<VkImageFormatProperties2*>(this);	}

S_image_format_properties2& n_external_image_format_properties(S_external_image_format_properties const& next_);
S_image_format_properties2& n_sampler_ycbcr_conversion_image_format_properties(S_sampler_ycbcr_conversion_image_format_properties const& next_);
S_image_format_properties2& n_texture_lod_gather_format_properties_AMD(S_texture_lod_gather_format_properties_AMD const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_image_format_properties2& n_android_hardware_buffer_usage_ANDROID(S_android_hardware_buffer_usage_ANDROID const& next_);
#endif
};
static_assert(
	sizeof(S_image_format_properties2) == sizeof(VkImageFormatProperties2),
	"struct and wrapper have different size!");

struct N_image_format_properties2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_image_format_properties2& n_external_image_format_properties(S_external_image_format_properties const& next_);
N_image_format_properties2& n_sampler_ycbcr_conversion_image_format_properties(S_sampler_ycbcr_conversion_image_format_properties const& next_);
N_image_format_properties2& n_texture_lod_gather_format_properties_AMD(S_texture_lod_gather_format_properties_AMD const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_image_format_properties2& n_android_hardware_buffer_usage_ANDROID(S_android_hardware_buffer_usage_ANDROID const& next_);
#endif
};

/*	VkPhysicalDeviceExternalImageFormatInfo
ex to: VkPhysicalDeviceImageFormatInfo2
*/
struct		S_physical_device_external_image_format_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;
	 void * pNext = nullptr;
public:
	F_external_memory_handle_type handleType;

S_physical_device_external_image_format_info(){}

S_physical_device_external_image_format_info(
	F_external_memory_handle_type handleType_)
	:handleType(handleType_)
{
}

S_physical_device_external_image_format_info( VkPhysicalDeviceExternalImageFormatInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_image_format_info ) );	}
S_physical_device_external_image_format_info& operator=( VkPhysicalDeviceExternalImageFormatInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_image_format_info ) ); return *this;	}
operator VkPhysicalDeviceExternalImageFormatInfo const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceExternalImageFormatInfo*>(this);	}
operator VkPhysicalDeviceExternalImageFormatInfo &() 
	{	return *reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfo*>(this);	}

friend S_physical_device_image_format_info2;
};
static_assert(
	sizeof(S_physical_device_external_image_format_info) == sizeof(VkPhysicalDeviceExternalImageFormatInfo),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceImageDrmFormatModifierInfoEXT
ex to: VkPhysicalDeviceImageFormatInfo2
*/
#ifdef LAKA_UNKNOW
struct		S_physical_device_image_drm_format_modifier_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;
	 void * pNext = nullptr;
public:
	uint64_t drmFormatModifier;

S_physical_device_image_drm_format_modifier_info_EXT(){}

S_physical_device_image_drm_format_modifier_info_EXT(
	uint64_t drmFormatModifier_)
	:drmFormatModifier(drmFormatModifier_)
{
}

S_physical_device_image_drm_format_modifier_info_EXT( VkPhysicalDeviceImageDrmFormatModifierInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_image_drm_format_modifier_info_EXT ) );	}
S_physical_device_image_drm_format_modifier_info_EXT& operator=( VkPhysicalDeviceImageDrmFormatModifierInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_image_drm_format_modifier_info_EXT ) ); return *this;	}
operator VkPhysicalDeviceImageDrmFormatModifierInfoEXT const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceImageDrmFormatModifierInfoEXT*>(this);	}
operator VkPhysicalDeviceImageDrmFormatModifierInfoEXT &() 
	{	return *reinterpret_cast<VkPhysicalDeviceImageDrmFormatModifierInfoEXT*>(this);	}

friend S_physical_device_image_format_info2;
};
static_assert(
	sizeof(S_physical_device_image_drm_format_modifier_info_EXT) == sizeof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT),
	"struct and wrapper have different size!");
#endif //LAKA_UNKNOW

/*	VkPhysicalDeviceImageFormatInfo2
ex:
	VkPhysicalDeviceExternalImageFormatInfo
	VkPhysicalDeviceImageDrmFormatModifierInfoEXT
*/
struct		S_physical_device_image_format_info2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
	 void * pNext = nullptr;
public:
	E_format format;
	E_image_type type;
	E_image_tiling tiling;
	F_image_usage usage;
	F_image_create flags;

S_physical_device_image_format_info2(){}

S_physical_device_image_format_info2(
	E_format format_,
	E_image_type type_,
	E_image_tiling tiling_,
	F_image_usage usage_,
	F_image_create flags_)
	:format(format_)
	,type(type_)
	,tiling(tiling_)
	,usage(usage_)
	,flags(flags_)
{
}

S_physical_device_image_format_info2( VkPhysicalDeviceImageFormatInfo2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_image_format_info2 ) );	}
S_physical_device_image_format_info2& operator=( VkPhysicalDeviceImageFormatInfo2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_image_format_info2 ) ); return *this;	}
operator VkPhysicalDeviceImageFormatInfo2 const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2*>(this);	}
operator VkPhysicalDeviceImageFormatInfo2 &() 
	{	return *reinterpret_cast<VkPhysicalDeviceImageFormatInfo2*>(this);	}

S_physical_device_image_format_info2& n_physical_device_external_image_format_info(S_physical_device_external_image_format_info const& next_);
#ifdef LAKA_UNKNOW
S_physical_device_image_format_info2& n_physical_device_image_drm_format_modifier_info_EXT(S_physical_device_image_drm_format_modifier_info_EXT const& next_);
#endif
};
static_assert(
	sizeof(S_physical_device_image_format_info2) == sizeof(VkPhysicalDeviceImageFormatInfo2),
	"struct and wrapper have different size!");

struct N_physical_device_image_format_info2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_physical_device_image_format_info2& n_physical_device_external_image_format_info(S_physical_device_external_image_format_info const& next_);
#ifdef LAKA_UNKNOW
N_physical_device_image_format_info2& n_physical_device_image_drm_format_modifier_info_EXT(S_physical_device_image_drm_format_modifier_info_EXT const& next_);
#endif
};

/*	VkQueueFamilyCheckpointPropertiesNV
(returnedonly)
ex to: VkQueueFamilyProperties2
*/
struct		S_queue_family_checkpoint_properties_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;
	void * pNext = nullptr;
public:
	F_pipeline_stage checkpointExecutionStageMask;

S_queue_family_checkpoint_properties_NV(){}

S_queue_family_checkpoint_properties_NV(
	F_pipeline_stage checkpointExecutionStageMask_)
	:checkpointExecutionStageMask(checkpointExecutionStageMask_)
{
}

S_queue_family_checkpoint_properties_NV( VkQueueFamilyCheckpointPropertiesNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_queue_family_checkpoint_properties_NV ) );	}
S_queue_family_checkpoint_properties_NV& operator=( VkQueueFamilyCheckpointPropertiesNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_queue_family_checkpoint_properties_NV ) ); return *this;	}
operator VkQueueFamilyCheckpointPropertiesNV const&() const 
	{	return *reinterpret_cast<const VkQueueFamilyCheckpointPropertiesNV*>(this);	}
operator VkQueueFamilyCheckpointPropertiesNV &() 
	{	return *reinterpret_cast<VkQueueFamilyCheckpointPropertiesNV*>(this);	}

friend S_queue_family_properties2;
};
static_assert(
	sizeof(S_queue_family_checkpoint_properties_NV) == sizeof(VkQueueFamilyCheckpointPropertiesNV),
	"struct and wrapper have different size!");

/*	VkQueueFamilyProperties2
(returnedonly)
ex:
	VkQueueFamilyCheckpointPropertiesNV
*/
struct		S_queue_family_properties2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;
	void * pNext = nullptr;
public:
	S_queue_family_properties queueFamilyProperties;

S_queue_family_properties2(){}

S_queue_family_properties2(
	S_queue_family_properties queueFamilyProperties_)
	:queueFamilyProperties(queueFamilyProperties_)
{
}

S_queue_family_properties2( VkQueueFamilyProperties2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_queue_family_properties2 ) );	}
S_queue_family_properties2& operator=( VkQueueFamilyProperties2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_queue_family_properties2 ) ); return *this;	}
operator VkQueueFamilyProperties2 const&() const 
	{	return *reinterpret_cast<const VkQueueFamilyProperties2*>(this);	}
operator VkQueueFamilyProperties2 &() 
	{	return *reinterpret_cast<VkQueueFamilyProperties2*>(this);	}

S_queue_family_properties2& n_queue_family_checkpoint_properties_NV(S_queue_family_checkpoint_properties_NV const& next_);
};
static_assert(
	sizeof(S_queue_family_properties2) == sizeof(VkQueueFamilyProperties2),
	"struct and wrapper have different size!");

struct N_queue_family_properties2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_queue_family_properties2& n_queue_family_checkpoint_properties_NV(S_queue_family_checkpoint_properties_NV const& next_);
};

/*	VkPhysicalDeviceMemoryProperties2
(returnedonly)
*/
struct		S_physical_device_memory_properties2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
	void * pNext = nullptr;
public:
	S_physical_device_memory_properties memoryProperties;

S_physical_device_memory_properties2(){}

S_physical_device_memory_properties2(
	S_physical_device_memory_properties memoryProperties_)
	:memoryProperties(memoryProperties_)
{
}

S_physical_device_memory_properties2( VkPhysicalDeviceMemoryProperties2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_memory_properties2 ) );	}
S_physical_device_memory_properties2& operator=( VkPhysicalDeviceMemoryProperties2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_memory_properties2 ) ); return *this;	}
operator VkPhysicalDeviceMemoryProperties2 const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceMemoryProperties2*>(this);	}
operator VkPhysicalDeviceMemoryProperties2 &() 
	{	return *reinterpret_cast<VkPhysicalDeviceMemoryProperties2*>(this);	}
};
static_assert(
	sizeof(S_physical_device_memory_properties2) == sizeof(VkPhysicalDeviceMemoryProperties2),
	"struct and wrapper have different size!");

/*	VkSparseImageFormatProperties2
(returnedonly)
*/
struct		S_sparse_image_format_properties2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;
	void * pNext = nullptr;
public:
	S_sparse_image_format_properties properties;

S_sparse_image_format_properties2(){}

S_sparse_image_format_properties2(
	S_sparse_image_format_properties properties_)
	:properties(properties_)
{
}

S_sparse_image_format_properties2( VkSparseImageFormatProperties2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sparse_image_format_properties2 ) );	}
S_sparse_image_format_properties2& operator=( VkSparseImageFormatProperties2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sparse_image_format_properties2 ) ); return *this;	}
operator VkSparseImageFormatProperties2 const&() const 
	{	return *reinterpret_cast<const VkSparseImageFormatProperties2*>(this);	}
operator VkSparseImageFormatProperties2 &() 
	{	return *reinterpret_cast<VkSparseImageFormatProperties2*>(this);	}
};
static_assert(
	sizeof(S_sparse_image_format_properties2) == sizeof(VkSparseImageFormatProperties2),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceSparseImageFormatInfo2
*/
struct		S_physical_device_sparse_image_format_info2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
	 void * pNext = nullptr;
public:
	E_format format;
	E_image_type type;
	F_sample_count samples;
	F_image_usage usage;
	E_image_tiling tiling;

S_physical_device_sparse_image_format_info2(){}

S_physical_device_sparse_image_format_info2(
	E_format format_,
	E_image_type type_,
	F_sample_count samples_,
	F_image_usage usage_,
	E_image_tiling tiling_)
	:format(format_)
	,type(type_)
	,samples(samples_)
	,usage(usage_)
	,tiling(tiling_)
{
}

S_physical_device_sparse_image_format_info2( VkPhysicalDeviceSparseImageFormatInfo2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_sparse_image_format_info2 ) );	}
S_physical_device_sparse_image_format_info2& operator=( VkPhysicalDeviceSparseImageFormatInfo2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_sparse_image_format_info2 ) ); return *this;	}
operator VkPhysicalDeviceSparseImageFormatInfo2 const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2*>(this);	}
operator VkPhysicalDeviceSparseImageFormatInfo2 &() 
	{	return *reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2*>(this);	}
};
static_assert(
	sizeof(S_physical_device_sparse_image_format_info2) == sizeof(VkPhysicalDeviceSparseImageFormatInfo2),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceExternalBufferInfo
*/
struct		S_physical_device_external_buffer_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;
	 void * pNext = nullptr;
public:
	F_buffer_create flags;
	F_buffer_usage usage;
	F_external_memory_handle_type handleType;

S_physical_device_external_buffer_info(){}

S_physical_device_external_buffer_info(
	F_buffer_create flags_,
	F_buffer_usage usage_,
	F_external_memory_handle_type handleType_)
	:flags(flags_)
	,usage(usage_)
	,handleType(handleType_)
{
}

S_physical_device_external_buffer_info( VkPhysicalDeviceExternalBufferInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_buffer_info ) );	}
S_physical_device_external_buffer_info& operator=( VkPhysicalDeviceExternalBufferInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_buffer_info ) ); return *this;	}
operator VkPhysicalDeviceExternalBufferInfo const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceExternalBufferInfo*>(this);	}
operator VkPhysicalDeviceExternalBufferInfo &() 
	{	return *reinterpret_cast<VkPhysicalDeviceExternalBufferInfo*>(this);	}
};
static_assert(
	sizeof(S_physical_device_external_buffer_info) == sizeof(VkPhysicalDeviceExternalBufferInfo),
	"struct and wrapper have different size!");

/*	VkExternalBufferProperties
(returnedonly)
*/
struct		S_external_buffer_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES;
	void * pNext = nullptr;
public:
	S_external_memory_properties externalMemoryProperties;

S_external_buffer_properties(){}

S_external_buffer_properties(
	S_external_memory_properties externalMemoryProperties_)
	:externalMemoryProperties(externalMemoryProperties_)
{
}

S_external_buffer_properties( VkExternalBufferProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_buffer_properties ) );	}
S_external_buffer_properties& operator=( VkExternalBufferProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_buffer_properties ) ); return *this;	}
operator VkExternalBufferProperties const&() const 
	{	return *reinterpret_cast<const VkExternalBufferProperties*>(this);	}
operator VkExternalBufferProperties &() 
	{	return *reinterpret_cast<VkExternalBufferProperties*>(this);	}
};
static_assert(
	sizeof(S_external_buffer_properties) == sizeof(VkExternalBufferProperties),
	"struct and wrapper have different size!");

/*	VkMemoryWin32HandlePropertiesKHR
(returnedonly)
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_memory_win32_handle_properties_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR;
	void * pNext = nullptr;
public:
	uint32_t memoryTypeBits;

S_memory_win32_handle_properties_KHR(){}

S_memory_win32_handle_properties_KHR(
	uint32_t memoryTypeBits_)
	:memoryTypeBits(memoryTypeBits_)
{
}

S_memory_win32_handle_properties_KHR( VkMemoryWin32HandlePropertiesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_win32_handle_properties_KHR ) );	}
S_memory_win32_handle_properties_KHR& operator=( VkMemoryWin32HandlePropertiesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_win32_handle_properties_KHR ) ); return *this;	}
operator VkMemoryWin32HandlePropertiesKHR const&() const 
	{	return *reinterpret_cast<const VkMemoryWin32HandlePropertiesKHR*>(this);	}
operator VkMemoryWin32HandlePropertiesKHR &() 
	{	return *reinterpret_cast<VkMemoryWin32HandlePropertiesKHR*>(this);	}
};
static_assert(
	sizeof(S_memory_win32_handle_properties_KHR) == sizeof(VkMemoryWin32HandlePropertiesKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkMemoryGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_memory_get_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkDeviceMemory memory;
	F_external_memory_handle_type handleType;

S_memory_get_win32_handle_info_KHR(){}

S_memory_get_win32_handle_info_KHR(
	VkDeviceMemory memory_,
	F_external_memory_handle_type handleType_)
	:memory(memory_)
	,handleType(handleType_)
{
}

S_memory_get_win32_handle_info_KHR( VkMemoryGetWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_get_win32_handle_info_KHR ) );	}
S_memory_get_win32_handle_info_KHR& operator=( VkMemoryGetWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_get_win32_handle_info_KHR ) ); return *this;	}
operator VkMemoryGetWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkMemoryGetWin32HandleInfoKHR*>(this);	}
operator VkMemoryGetWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkMemoryGetWin32HandleInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_memory_get_win32_handle_info_KHR) == sizeof(VkMemoryGetWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkMemoryFdPropertiesKHR
(returnedonly)
*/
struct		S_memory_fd_properties_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;
	void * pNext = nullptr;
public:
	uint32_t memoryTypeBits;

S_memory_fd_properties_KHR(){}

S_memory_fd_properties_KHR(
	uint32_t memoryTypeBits_)
	:memoryTypeBits(memoryTypeBits_)
{
}

S_memory_fd_properties_KHR( VkMemoryFdPropertiesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_fd_properties_KHR ) );	}
S_memory_fd_properties_KHR& operator=( VkMemoryFdPropertiesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_fd_properties_KHR ) ); return *this;	}
operator VkMemoryFdPropertiesKHR const&() const 
	{	return *reinterpret_cast<const VkMemoryFdPropertiesKHR*>(this);	}
operator VkMemoryFdPropertiesKHR &() 
	{	return *reinterpret_cast<VkMemoryFdPropertiesKHR*>(this);	}
};
static_assert(
	sizeof(S_memory_fd_properties_KHR) == sizeof(VkMemoryFdPropertiesKHR),
	"struct and wrapper have different size!");

/*	VkMemoryGetFdInfoKHR
*/
struct		S_memory_get_fd_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkDeviceMemory memory;
	F_external_memory_handle_type handleType;

S_memory_get_fd_info_KHR(){}

S_memory_get_fd_info_KHR(
	VkDeviceMemory memory_,
	F_external_memory_handle_type handleType_)
	:memory(memory_)
	,handleType(handleType_)
{
}

S_memory_get_fd_info_KHR( VkMemoryGetFdInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_get_fd_info_KHR ) );	}
S_memory_get_fd_info_KHR& operator=( VkMemoryGetFdInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_get_fd_info_KHR ) ); return *this;	}
operator VkMemoryGetFdInfoKHR const&() const 
	{	return *reinterpret_cast<const VkMemoryGetFdInfoKHR*>(this);	}
operator VkMemoryGetFdInfoKHR &() 
	{	return *reinterpret_cast<VkMemoryGetFdInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_memory_get_fd_info_KHR) == sizeof(VkMemoryGetFdInfoKHR),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceExternalSemaphoreInfo
*/
struct		S_physical_device_external_semaphore_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
	 void * pNext = nullptr;
public:
	F_external_semaphore_handle_type handleType;

S_physical_device_external_semaphore_info(){}

S_physical_device_external_semaphore_info(
	F_external_semaphore_handle_type handleType_)
	:handleType(handleType_)
{
}

S_physical_device_external_semaphore_info( VkPhysicalDeviceExternalSemaphoreInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_semaphore_info ) );	}
S_physical_device_external_semaphore_info& operator=( VkPhysicalDeviceExternalSemaphoreInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_semaphore_info ) ); return *this;	}
operator VkPhysicalDeviceExternalSemaphoreInfo const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceExternalSemaphoreInfo*>(this);	}
operator VkPhysicalDeviceExternalSemaphoreInfo &() 
	{	return *reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfo*>(this);	}
};
static_assert(
	sizeof(S_physical_device_external_semaphore_info) == sizeof(VkPhysicalDeviceExternalSemaphoreInfo),
	"struct and wrapper have different size!");

/*	VkExternalSemaphoreProperties
(returnedonly)
*/
struct		S_external_semaphore_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
	void * pNext = nullptr;
public:
	F_external_semaphore_handle_type exportFromImportedHandleTypes;
	F_external_semaphore_handle_type compatibleHandleTypes;
	F_external_semaphore_feature externalSemaphoreFeatures;

S_external_semaphore_properties(){}

S_external_semaphore_properties(
	F_external_semaphore_handle_type exportFromImportedHandleTypes_,
	F_external_semaphore_handle_type compatibleHandleTypes_,
	F_external_semaphore_feature externalSemaphoreFeatures_)
	:exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
	,compatibleHandleTypes(compatibleHandleTypes_)
	,externalSemaphoreFeatures(externalSemaphoreFeatures_)
{
}

S_external_semaphore_properties( VkExternalSemaphoreProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_semaphore_properties ) );	}
S_external_semaphore_properties& operator=( VkExternalSemaphoreProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_semaphore_properties ) ); return *this;	}
operator VkExternalSemaphoreProperties const&() const 
	{	return *reinterpret_cast<const VkExternalSemaphoreProperties*>(this);	}
operator VkExternalSemaphoreProperties &() 
	{	return *reinterpret_cast<VkExternalSemaphoreProperties*>(this);	}
};
static_assert(
	sizeof(S_external_semaphore_properties) == sizeof(VkExternalSemaphoreProperties),
	"struct and wrapper have different size!");

/*	VkImportSemaphoreWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_import_semaphore_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkSemaphore semaphore;
	F_semaphore_import flags;
	F_external_semaphore_handle_type handleType;
	HANDLE handle;
	LPCWSTR name;

S_import_semaphore_win32_handle_info_KHR(){}

S_import_semaphore_win32_handle_info_KHR(
	VkSemaphore semaphore_,
	F_semaphore_import flags_,
	F_external_semaphore_handle_type handleType_,
	HANDLE handle_,
	LPCWSTR name_)
	:semaphore(semaphore_)
	,flags(flags_)
	,handleType(handleType_)
	,handle(handle_)
	,name(name_)
{
}

S_import_semaphore_win32_handle_info_KHR( VkImportSemaphoreWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_semaphore_win32_handle_info_KHR ) );	}
S_import_semaphore_win32_handle_info_KHR& operator=( VkImportSemaphoreWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_semaphore_win32_handle_info_KHR ) ); return *this;	}
operator VkImportSemaphoreWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImportSemaphoreWin32HandleInfoKHR*>(this);	}
operator VkImportSemaphoreWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_import_semaphore_win32_handle_info_KHR) == sizeof(VkImportSemaphoreWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkSemaphoreGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_semaphore_get_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkSemaphore semaphore;
	F_external_semaphore_handle_type handleType;

S_semaphore_get_win32_handle_info_KHR(){}

S_semaphore_get_win32_handle_info_KHR(
	VkSemaphore semaphore_,
	F_external_semaphore_handle_type handleType_)
	:semaphore(semaphore_)
	,handleType(handleType_)
{
}

S_semaphore_get_win32_handle_info_KHR( VkSemaphoreGetWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_semaphore_get_win32_handle_info_KHR ) );	}
S_semaphore_get_win32_handle_info_KHR& operator=( VkSemaphoreGetWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_semaphore_get_win32_handle_info_KHR ) ); return *this;	}
operator VkSemaphoreGetWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkSemaphoreGetWin32HandleInfoKHR*>(this);	}
operator VkSemaphoreGetWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkSemaphoreGetWin32HandleInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_semaphore_get_win32_handle_info_KHR) == sizeof(VkSemaphoreGetWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportSemaphoreFdInfoKHR
*/
struct		S_import_semaphore_fd_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkSemaphore semaphore;
	F_semaphore_import flags;
	F_external_semaphore_handle_type handleType;
	int fd;

S_import_semaphore_fd_info_KHR(){}

S_import_semaphore_fd_info_KHR(
	VkSemaphore semaphore_,
	F_semaphore_import flags_,
	F_external_semaphore_handle_type handleType_,
	int fd_)
	:semaphore(semaphore_)
	,flags(flags_)
	,handleType(handleType_)
	,fd(fd_)
{
}

S_import_semaphore_fd_info_KHR( VkImportSemaphoreFdInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_semaphore_fd_info_KHR ) );	}
S_import_semaphore_fd_info_KHR& operator=( VkImportSemaphoreFdInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_semaphore_fd_info_KHR ) ); return *this;	}
operator VkImportSemaphoreFdInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImportSemaphoreFdInfoKHR*>(this);	}
operator VkImportSemaphoreFdInfoKHR &() 
	{	return *reinterpret_cast<VkImportSemaphoreFdInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_import_semaphore_fd_info_KHR) == sizeof(VkImportSemaphoreFdInfoKHR),
	"struct and wrapper have different size!");

/*	VkSemaphoreGetFdInfoKHR
*/
struct		S_semaphore_get_fd_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkSemaphore semaphore;
	F_external_semaphore_handle_type handleType;

S_semaphore_get_fd_info_KHR(){}

S_semaphore_get_fd_info_KHR(
	VkSemaphore semaphore_,
	F_external_semaphore_handle_type handleType_)
	:semaphore(semaphore_)
	,handleType(handleType_)
{
}

S_semaphore_get_fd_info_KHR( VkSemaphoreGetFdInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_semaphore_get_fd_info_KHR ) );	}
S_semaphore_get_fd_info_KHR& operator=( VkSemaphoreGetFdInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_semaphore_get_fd_info_KHR ) ); return *this;	}
operator VkSemaphoreGetFdInfoKHR const&() const 
	{	return *reinterpret_cast<const VkSemaphoreGetFdInfoKHR*>(this);	}
operator VkSemaphoreGetFdInfoKHR &() 
	{	return *reinterpret_cast<VkSemaphoreGetFdInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_semaphore_get_fd_info_KHR) == sizeof(VkSemaphoreGetFdInfoKHR),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceExternalFenceInfo
*/
struct		S_physical_device_external_fence_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;
	 void * pNext = nullptr;
public:
	F_external_fence_handle_type handleType;

S_physical_device_external_fence_info(){}

S_physical_device_external_fence_info(
	F_external_fence_handle_type handleType_)
	:handleType(handleType_)
{
}

S_physical_device_external_fence_info( VkPhysicalDeviceExternalFenceInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_fence_info ) );	}
S_physical_device_external_fence_info& operator=( VkPhysicalDeviceExternalFenceInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_external_fence_info ) ); return *this;	}
operator VkPhysicalDeviceExternalFenceInfo const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceExternalFenceInfo*>(this);	}
operator VkPhysicalDeviceExternalFenceInfo &() 
	{	return *reinterpret_cast<VkPhysicalDeviceExternalFenceInfo*>(this);	}
};
static_assert(
	sizeof(S_physical_device_external_fence_info) == sizeof(VkPhysicalDeviceExternalFenceInfo),
	"struct and wrapper have different size!");

/*	VkExternalFenceProperties
(returnedonly)
*/
struct		S_external_fence_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;
	void * pNext = nullptr;
public:
	F_external_fence_handle_type exportFromImportedHandleTypes;
	F_external_fence_handle_type compatibleHandleTypes;
	F_external_fence_feature externalFenceFeatures;

S_external_fence_properties(){}

S_external_fence_properties(
	F_external_fence_handle_type exportFromImportedHandleTypes_,
	F_external_fence_handle_type compatibleHandleTypes_,
	F_external_fence_feature externalFenceFeatures_)
	:exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
	,compatibleHandleTypes(compatibleHandleTypes_)
	,externalFenceFeatures(externalFenceFeatures_)
{
}

S_external_fence_properties( VkExternalFenceProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_external_fence_properties ) );	}
S_external_fence_properties& operator=( VkExternalFenceProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_external_fence_properties ) ); return *this;	}
operator VkExternalFenceProperties const&() const 
	{	return *reinterpret_cast<const VkExternalFenceProperties*>(this);	}
operator VkExternalFenceProperties &() 
	{	return *reinterpret_cast<VkExternalFenceProperties*>(this);	}
};
static_assert(
	sizeof(S_external_fence_properties) == sizeof(VkExternalFenceProperties),
	"struct and wrapper have different size!");

/*	VkImportFenceWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_import_fence_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkFence fence;
	F_fence_import flags;
	F_external_fence_handle_type handleType;
	HANDLE handle;
	LPCWSTR name;

S_import_fence_win32_handle_info_KHR(){}

S_import_fence_win32_handle_info_KHR(
	VkFence fence_,
	F_fence_import flags_,
	F_external_fence_handle_type handleType_,
	HANDLE handle_,
	LPCWSTR name_)
	:fence(fence_)
	,flags(flags_)
	,handleType(handleType_)
	,handle(handle_)
	,name(name_)
{
}

S_import_fence_win32_handle_info_KHR( VkImportFenceWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_fence_win32_handle_info_KHR ) );	}
S_import_fence_win32_handle_info_KHR& operator=( VkImportFenceWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_fence_win32_handle_info_KHR ) ); return *this;	}
operator VkImportFenceWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImportFenceWin32HandleInfoKHR*>(this);	}
operator VkImportFenceWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkImportFenceWin32HandleInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_import_fence_win32_handle_info_KHR) == sizeof(VkImportFenceWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkFenceGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct		S_fence_get_win32_handle_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkFence fence;
	F_external_fence_handle_type handleType;

S_fence_get_win32_handle_info_KHR(){}

S_fence_get_win32_handle_info_KHR(
	VkFence fence_,
	F_external_fence_handle_type handleType_)
	:fence(fence_)
	,handleType(handleType_)
{
}

S_fence_get_win32_handle_info_KHR( VkFenceGetWin32HandleInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_fence_get_win32_handle_info_KHR ) );	}
S_fence_get_win32_handle_info_KHR& operator=( VkFenceGetWin32HandleInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_fence_get_win32_handle_info_KHR ) ); return *this;	}
operator VkFenceGetWin32HandleInfoKHR const&() const 
	{	return *reinterpret_cast<const VkFenceGetWin32HandleInfoKHR*>(this);	}
operator VkFenceGetWin32HandleInfoKHR &() 
	{	return *reinterpret_cast<VkFenceGetWin32HandleInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_fence_get_win32_handle_info_KHR) == sizeof(VkFenceGetWin32HandleInfoKHR),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportFenceFdInfoKHR
*/
struct		S_import_fence_fd_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkFence fence;
	F_fence_import flags;
	F_external_fence_handle_type handleType;
	int fd;

S_import_fence_fd_info_KHR(){}

S_import_fence_fd_info_KHR(
	VkFence fence_,
	F_fence_import flags_,
	F_external_fence_handle_type handleType_,
	int fd_)
	:fence(fence_)
	,flags(flags_)
	,handleType(handleType_)
	,fd(fd_)
{
}

S_import_fence_fd_info_KHR( VkImportFenceFdInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_import_fence_fd_info_KHR ) );	}
S_import_fence_fd_info_KHR& operator=( VkImportFenceFdInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_import_fence_fd_info_KHR ) ); return *this;	}
operator VkImportFenceFdInfoKHR const&() const 
	{	return *reinterpret_cast<const VkImportFenceFdInfoKHR*>(this);	}
operator VkImportFenceFdInfoKHR &() 
	{	return *reinterpret_cast<VkImportFenceFdInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_import_fence_fd_info_KHR) == sizeof(VkImportFenceFdInfoKHR),
	"struct and wrapper have different size!");

/*	VkFenceGetFdInfoKHR
*/
struct		S_fence_get_fd_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkFence fence;
	F_external_fence_handle_type handleType;

S_fence_get_fd_info_KHR(){}

S_fence_get_fd_info_KHR(
	VkFence fence_,
	F_external_fence_handle_type handleType_)
	:fence(fence_)
	,handleType(handleType_)
{
}

S_fence_get_fd_info_KHR( VkFenceGetFdInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_fence_get_fd_info_KHR ) );	}
S_fence_get_fd_info_KHR& operator=( VkFenceGetFdInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_fence_get_fd_info_KHR ) ); return *this;	}
operator VkFenceGetFdInfoKHR const&() const 
	{	return *reinterpret_cast<const VkFenceGetFdInfoKHR*>(this);	}
operator VkFenceGetFdInfoKHR &() 
	{	return *reinterpret_cast<VkFenceGetFdInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_fence_get_fd_info_KHR) == sizeof(VkFenceGetFdInfoKHR),
	"struct and wrapper have different size!");

/*	VkSurfaceCapabilities2EXT
(returnedonly)
*/
struct		S_surface_capabilities2_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT;
	void * pNext = nullptr;
public:
	uint32_t minImageCount;
	uint32_t maxImageCount;
	S_extent_2d currentExtent;
	S_extent_2d minImageExtent;
	S_extent_2d maxImageExtent;
	uint32_t maxImageArrayLayers;
	F_surface_transform_KHR supportedTransforms;
	F_surface_transform_KHR currentTransform;
	F_composite_alpha_KHR supportedCompositeAlpha;
	F_image_usage supportedUsageFlags;
	F_surface_counter_EXT supportedSurfaceCounters;

S_surface_capabilities2_EXT(){}

S_surface_capabilities2_EXT(
	uint32_t minImageCount_,
	uint32_t maxImageCount_,
	S_extent_2d currentExtent_,
	S_extent_2d minImageExtent_,
	S_extent_2d maxImageExtent_,
	uint32_t maxImageArrayLayers_,
	F_surface_transform_KHR supportedTransforms_,
	F_surface_transform_KHR currentTransform_,
	F_composite_alpha_KHR supportedCompositeAlpha_,
	F_image_usage supportedUsageFlags_,
	F_surface_counter_EXT supportedSurfaceCounters_)
	:minImageCount(minImageCount_)
	,maxImageCount(maxImageCount_)
	,currentExtent(currentExtent_)
	,minImageExtent(minImageExtent_)
	,maxImageExtent(maxImageExtent_)
	,maxImageArrayLayers(maxImageArrayLayers_)
	,supportedTransforms(supportedTransforms_)
	,currentTransform(currentTransform_)
	,supportedCompositeAlpha(supportedCompositeAlpha_)
	,supportedUsageFlags(supportedUsageFlags_)
	,supportedSurfaceCounters(supportedSurfaceCounters_)
{
}

S_surface_capabilities2_EXT( VkSurfaceCapabilities2EXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_surface_capabilities2_EXT ) );	}
S_surface_capabilities2_EXT& operator=( VkSurfaceCapabilities2EXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_surface_capabilities2_EXT ) ); return *this;	}
operator VkSurfaceCapabilities2EXT const&() const 
	{	return *reinterpret_cast<const VkSurfaceCapabilities2EXT*>(this);	}
operator VkSurfaceCapabilities2EXT &() 
	{	return *reinterpret_cast<VkSurfaceCapabilities2EXT*>(this);	}
};
static_assert(
	sizeof(S_surface_capabilities2_EXT) == sizeof(VkSurfaceCapabilities2EXT),
	"struct and wrapper have different size!");

/*	VkDisplayPowerInfoEXT
*/
struct		S_display_power_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_display_power_state_EXT powerState;

S_display_power_info_EXT(){}

S_display_power_info_EXT(
	E_display_power_state_EXT powerState_)
	:powerState(powerState_)
{
}

S_display_power_info_EXT( VkDisplayPowerInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_power_info_EXT ) );	}
S_display_power_info_EXT& operator=( VkDisplayPowerInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_power_info_EXT ) ); return *this;	}
operator VkDisplayPowerInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDisplayPowerInfoEXT*>(this);	}
operator VkDisplayPowerInfoEXT &() 
	{	return *reinterpret_cast<VkDisplayPowerInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_display_power_info_EXT) == sizeof(VkDisplayPowerInfoEXT),
	"struct and wrapper have different size!");

/*	VkDeviceEventInfoEXT
*/
struct		S_device_event_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_device_event_type_EXT deviceEvent;

S_device_event_info_EXT(){}

S_device_event_info_EXT(
	E_device_event_type_EXT deviceEvent_)
	:deviceEvent(deviceEvent_)
{
}

S_device_event_info_EXT( VkDeviceEventInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_event_info_EXT ) );	}
S_device_event_info_EXT& operator=( VkDeviceEventInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_event_info_EXT ) ); return *this;	}
operator VkDeviceEventInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDeviceEventInfoEXT*>(this);	}
operator VkDeviceEventInfoEXT &() 
	{	return *reinterpret_cast<VkDeviceEventInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_device_event_info_EXT) == sizeof(VkDeviceEventInfoEXT),
	"struct and wrapper have different size!");

/*	VkDisplayEventInfoEXT
*/
struct		S_display_event_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_display_event_type_EXT displayEvent;

S_display_event_info_EXT(){}

S_display_event_info_EXT(
	E_display_event_type_EXT displayEvent_)
	:displayEvent(displayEvent_)
{
}

S_display_event_info_EXT( VkDisplayEventInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_event_info_EXT ) );	}
S_display_event_info_EXT& operator=( VkDisplayEventInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_event_info_EXT ) ); return *this;	}
operator VkDisplayEventInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDisplayEventInfoEXT*>(this);	}
operator VkDisplayEventInfoEXT &() 
	{	return *reinterpret_cast<VkDisplayEventInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_display_event_info_EXT) == sizeof(VkDisplayEventInfoEXT),
	"struct and wrapper have different size!");

/*	VkPhysicalDeviceGroupProperties
(returnedonly)
*/
struct		S_physical_device_group_properties{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES;
	void * pNext = nullptr;
public:
	uint32_t physicalDeviceCount;
	VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE];
	VkBool32 subsetAllocation;

S_physical_device_group_properties(){}

S_physical_device_group_properties(
	uint32_t physicalDeviceCount_,
	VkPhysicalDevice physicalDevices_[VK_MAX_DEVICE_GROUP_SIZE],
	VkBool32 subsetAllocation_)
	:physicalDeviceCount(physicalDeviceCount_)
	,subsetAllocation(subsetAllocation_)
{
memcpy(physicalDevices,physicalDevices_,sizeof(physicalDevices) );
}

S_physical_device_group_properties( VkPhysicalDeviceGroupProperties const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_group_properties ) );	}
S_physical_device_group_properties& operator=( VkPhysicalDeviceGroupProperties const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_group_properties ) ); return *this;	}
operator VkPhysicalDeviceGroupProperties const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceGroupProperties*>(this);	}
operator VkPhysicalDeviceGroupProperties &() 
	{	return *reinterpret_cast<VkPhysicalDeviceGroupProperties*>(this);	}
};
static_assert(
	sizeof(S_physical_device_group_properties) == sizeof(VkPhysicalDeviceGroupProperties),
	"struct and wrapper have different size!");

/*	VkBindBufferMemoryDeviceGroupInfo
ex to: VkBindBufferMemoryInfo
*/
struct		S_bind_buffer_memory_device_group_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
	 void * pNext = nullptr;
public:
	uint32_t deviceIndexCount;
	const uint32_t * pDeviceIndices;

S_bind_buffer_memory_device_group_info(){}

S_bind_buffer_memory_device_group_info(
	uint32_t deviceIndexCount_,
	const uint32_t * pDeviceIndices_)
	:deviceIndexCount(deviceIndexCount_)
	,pDeviceIndices(pDeviceIndices_)
{
}

S_bind_buffer_memory_device_group_info( VkBindBufferMemoryDeviceGroupInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_buffer_memory_device_group_info ) );	}
S_bind_buffer_memory_device_group_info& operator=( VkBindBufferMemoryDeviceGroupInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_buffer_memory_device_group_info ) ); return *this;	}
operator VkBindBufferMemoryDeviceGroupInfo const&() const 
	{	return *reinterpret_cast<const VkBindBufferMemoryDeviceGroupInfo*>(this);	}
operator VkBindBufferMemoryDeviceGroupInfo &() 
	{	return *reinterpret_cast<VkBindBufferMemoryDeviceGroupInfo*>(this);	}

friend S_bind_buffer_memory_info;
};
static_assert(
	sizeof(S_bind_buffer_memory_device_group_info) == sizeof(VkBindBufferMemoryDeviceGroupInfo),
	"struct and wrapper have different size!");

/*	VkBindBufferMemoryInfo
ex:
	VkBindBufferMemoryDeviceGroupInfo
*/
struct		S_bind_buffer_memory_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;
	 void * pNext = nullptr;
public:
	VkBuffer buffer;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;

S_bind_buffer_memory_info(){}

S_bind_buffer_memory_info(
	VkBuffer buffer_,
	VkDeviceMemory memory_,
	VkDeviceSize memoryOffset_)
	:buffer(buffer_)
	,memory(memory_)
	,memoryOffset(memoryOffset_)
{
}

S_bind_buffer_memory_info( VkBindBufferMemoryInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_buffer_memory_info ) );	}
S_bind_buffer_memory_info& operator=( VkBindBufferMemoryInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_buffer_memory_info ) ); return *this;	}
operator VkBindBufferMemoryInfo const&() const 
	{	return *reinterpret_cast<const VkBindBufferMemoryInfo*>(this);	}
operator VkBindBufferMemoryInfo &() 
	{	return *reinterpret_cast<VkBindBufferMemoryInfo*>(this);	}

S_bind_buffer_memory_info& n_bind_buffer_memory_device_group_info(S_bind_buffer_memory_device_group_info const& next_);
};
static_assert(
	sizeof(S_bind_buffer_memory_info) == sizeof(VkBindBufferMemoryInfo),
	"struct and wrapper have different size!");

struct N_bind_buffer_memory_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_bind_buffer_memory_info& n_bind_buffer_memory_device_group_info(S_bind_buffer_memory_device_group_info const& next_);
};

/*	VkBindImageMemoryDeviceGroupInfo
ex to: VkBindImageMemoryInfo
*/
struct		S_bind_image_memory_device_group_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
	 void * pNext = nullptr;
public:
	uint32_t deviceIndexCount;
	const uint32_t * pDeviceIndices;
	uint32_t splitInstanceBindRegionCount;
	const S_rect_2d * pSplitInstanceBindRegions;

S_bind_image_memory_device_group_info(){}

S_bind_image_memory_device_group_info(
	uint32_t deviceIndexCount_,
	const uint32_t * pDeviceIndices_,
	uint32_t splitInstanceBindRegionCount_,
	const S_rect_2d * pSplitInstanceBindRegions_)
	:deviceIndexCount(deviceIndexCount_)
	,pDeviceIndices(pDeviceIndices_)
	,splitInstanceBindRegionCount(splitInstanceBindRegionCount_)
	,pSplitInstanceBindRegions(pSplitInstanceBindRegions_)
{
}

S_bind_image_memory_device_group_info( VkBindImageMemoryDeviceGroupInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_image_memory_device_group_info ) );	}
S_bind_image_memory_device_group_info& operator=( VkBindImageMemoryDeviceGroupInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_image_memory_device_group_info ) ); return *this;	}
operator VkBindImageMemoryDeviceGroupInfo const&() const 
	{	return *reinterpret_cast<const VkBindImageMemoryDeviceGroupInfo*>(this);	}
operator VkBindImageMemoryDeviceGroupInfo &() 
	{	return *reinterpret_cast<VkBindImageMemoryDeviceGroupInfo*>(this);	}

friend S_bind_image_memory_info;
};
static_assert(
	sizeof(S_bind_image_memory_device_group_info) == sizeof(VkBindImageMemoryDeviceGroupInfo),
	"struct and wrapper have different size!");

/*	VkBindImageMemorySwapchainInfoKHR
ex to: VkBindImageMemoryInfo
*/
struct		S_bind_image_memory_swapchain_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkSwapchainKHR swapchain;
	uint32_t imageIndex;

S_bind_image_memory_swapchain_info_KHR(){}

S_bind_image_memory_swapchain_info_KHR(
	VkSwapchainKHR swapchain_,
	uint32_t imageIndex_)
	:swapchain(swapchain_)
	,imageIndex(imageIndex_)
{
}

S_bind_image_memory_swapchain_info_KHR( VkBindImageMemorySwapchainInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_image_memory_swapchain_info_KHR ) );	}
S_bind_image_memory_swapchain_info_KHR& operator=( VkBindImageMemorySwapchainInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_image_memory_swapchain_info_KHR ) ); return *this;	}
operator VkBindImageMemorySwapchainInfoKHR const&() const 
	{	return *reinterpret_cast<const VkBindImageMemorySwapchainInfoKHR*>(this);	}
operator VkBindImageMemorySwapchainInfoKHR &() 
	{	return *reinterpret_cast<VkBindImageMemorySwapchainInfoKHR*>(this);	}

friend S_bind_image_memory_info;
};
static_assert(
	sizeof(S_bind_image_memory_swapchain_info_KHR) == sizeof(VkBindImageMemorySwapchainInfoKHR),
	"struct and wrapper have different size!");

/*	VkBindImagePlaneMemoryInfo
ex to: VkBindImageMemoryInfo
*/
struct		S_bind_image_plane_memory_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO;
	 void * pNext = nullptr;
public:
	F_image_aspect planeAspect;

S_bind_image_plane_memory_info(){}

S_bind_image_plane_memory_info(
	F_image_aspect planeAspect_)
	:planeAspect(planeAspect_)
{
}

S_bind_image_plane_memory_info( VkBindImagePlaneMemoryInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_image_plane_memory_info ) );	}
S_bind_image_plane_memory_info& operator=( VkBindImagePlaneMemoryInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_image_plane_memory_info ) ); return *this;	}
operator VkBindImagePlaneMemoryInfo const&() const 
	{	return *reinterpret_cast<const VkBindImagePlaneMemoryInfo*>(this);	}
operator VkBindImagePlaneMemoryInfo &() 
	{	return *reinterpret_cast<VkBindImagePlaneMemoryInfo*>(this);	}

friend S_bind_image_memory_info;
};
static_assert(
	sizeof(S_bind_image_plane_memory_info) == sizeof(VkBindImagePlaneMemoryInfo),
	"struct and wrapper have different size!");

/*	VkBindImageMemoryInfo
ex:
	VkBindImageMemoryDeviceGroupInfo
	VkBindImageMemorySwapchainInfoKHR
	VkBindImagePlaneMemoryInfo
*/
struct		S_bind_image_memory_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO;
	 void * pNext = nullptr;
public:
	VkImage image;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;

S_bind_image_memory_info(){}

S_bind_image_memory_info(
	VkImage image_,
	VkDeviceMemory memory_,
	VkDeviceSize memoryOffset_)
	:image(image_)
	,memory(memory_)
	,memoryOffset(memoryOffset_)
{
}

S_bind_image_memory_info( VkBindImageMemoryInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_image_memory_info ) );	}
S_bind_image_memory_info& operator=( VkBindImageMemoryInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_image_memory_info ) ); return *this;	}
operator VkBindImageMemoryInfo const&() const 
	{	return *reinterpret_cast<const VkBindImageMemoryInfo*>(this);	}
operator VkBindImageMemoryInfo &() 
	{	return *reinterpret_cast<VkBindImageMemoryInfo*>(this);	}

S_bind_image_memory_info& n_bind_image_memory_device_group_info(S_bind_image_memory_device_group_info const& next_);
S_bind_image_memory_info& n_bind_image_memory_swapchain_info_KHR(S_bind_image_memory_swapchain_info_KHR const& next_);
S_bind_image_memory_info& n_bind_image_plane_memory_info(S_bind_image_plane_memory_info const& next_);
};
static_assert(
	sizeof(S_bind_image_memory_info) == sizeof(VkBindImageMemoryInfo),
	"struct and wrapper have different size!");

struct N_bind_image_memory_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_bind_image_memory_info& n_bind_image_memory_device_group_info(S_bind_image_memory_device_group_info const& next_);
N_bind_image_memory_info& n_bind_image_memory_swapchain_info_KHR(S_bind_image_memory_swapchain_info_KHR const& next_);
N_bind_image_memory_info& n_bind_image_plane_memory_info(S_bind_image_plane_memory_info const& next_);
};

/*	VkDeviceGroupPresentCapabilitiesKHR
(returnedonly)
*/
struct		S_device_group_present_capabilities_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
	 void * pNext = nullptr;
public:
	uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE];
	F_device_group_present_mode_KHR modes;

S_device_group_present_capabilities_KHR(){}

S_device_group_present_capabilities_KHR(
	uint32_t presentMask_[VK_MAX_DEVICE_GROUP_SIZE],
	F_device_group_present_mode_KHR modes_)
	:modes(modes_)
{
memcpy(presentMask,presentMask_,sizeof(presentMask) );
}

S_device_group_present_capabilities_KHR( VkDeviceGroupPresentCapabilitiesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_group_present_capabilities_KHR ) );	}
S_device_group_present_capabilities_KHR& operator=( VkDeviceGroupPresentCapabilitiesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_group_present_capabilities_KHR ) ); return *this;	}
operator VkDeviceGroupPresentCapabilitiesKHR const&() const 
	{	return *reinterpret_cast<const VkDeviceGroupPresentCapabilitiesKHR*>(this);	}
operator VkDeviceGroupPresentCapabilitiesKHR &() 
	{	return *reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR*>(this);	}
};
static_assert(
	sizeof(S_device_group_present_capabilities_KHR) == sizeof(VkDeviceGroupPresentCapabilitiesKHR),
	"struct and wrapper have different size!");

/*	VkAcquireNextImageInfoKHR
*/
struct		S_acquire_next_image_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;
	 void * pNext = nullptr;
public:
	VkSwapchainKHR swapchain;
	uint64_t timeout;
	VkSemaphore semaphore;
	VkFence fence;
	uint32_t deviceMask;

S_acquire_next_image_info_KHR(){}

S_acquire_next_image_info_KHR(
	VkSwapchainKHR swapchain_,
	uint64_t timeout_,
	VkSemaphore semaphore_,
	VkFence fence_,
	uint32_t deviceMask_)
	:swapchain(swapchain_)
	,timeout(timeout_)
	,semaphore(semaphore_)
	,fence(fence_)
	,deviceMask(deviceMask_)
{
}

S_acquire_next_image_info_KHR( VkAcquireNextImageInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_acquire_next_image_info_KHR ) );	}
S_acquire_next_image_info_KHR& operator=( VkAcquireNextImageInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_acquire_next_image_info_KHR ) ); return *this;	}
operator VkAcquireNextImageInfoKHR const&() const 
	{	return *reinterpret_cast<const VkAcquireNextImageInfoKHR*>(this);	}
operator VkAcquireNextImageInfoKHR &() 
	{	return *reinterpret_cast<VkAcquireNextImageInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_acquire_next_image_info_KHR) == sizeof(VkAcquireNextImageInfoKHR),
	"struct and wrapper have different size!");

/*	VkDescriptorUpdateTemplateEntry
*/
struct		S_descriptor_update_template_entry{
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	E_descriptor_type descriptorType;
	size_t offset;
	size_t stride;

S_descriptor_update_template_entry(){}
};

/*	VkDescriptorUpdateTemplateCreateInfo
*/
struct		S_descriptor_update_template_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
	void * pNext = nullptr;
public:
	VkDescriptorUpdateTemplateCreateFlags flags;
	uint32_t descriptorUpdateEntryCount;
	const S_descriptor_update_template_entry * pDescriptorUpdateEntries;
	E_descriptor_update_template_type templateType;
	VkDescriptorSetLayout descriptorSetLayout;
	E_pipeline_bind_point pipelineBindPoint;
	VkPipelineLayout pipelineLayout;
	uint32_t set;

S_descriptor_update_template_create_info(){}

S_descriptor_update_template_create_info(
	VkDescriptorUpdateTemplateCreateFlags flags_,
	uint32_t descriptorUpdateEntryCount_,
	const S_descriptor_update_template_entry * pDescriptorUpdateEntries_,
	E_descriptor_update_template_type templateType_,
	VkDescriptorSetLayout descriptorSetLayout_,
	E_pipeline_bind_point pipelineBindPoint_,
	VkPipelineLayout pipelineLayout_,
	uint32_t set_)
	:flags(flags_)
	,descriptorUpdateEntryCount(descriptorUpdateEntryCount_)
	,pDescriptorUpdateEntries(pDescriptorUpdateEntries_)
	,templateType(templateType_)
	,descriptorSetLayout(descriptorSetLayout_)
	,pipelineBindPoint(pipelineBindPoint_)
	,pipelineLayout(pipelineLayout_)
	,set(set_)
{
}

S_descriptor_update_template_create_info( VkDescriptorUpdateTemplateCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_update_template_create_info ) );	}
S_descriptor_update_template_create_info& operator=( VkDescriptorUpdateTemplateCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_update_template_create_info ) ); return *this;	}
operator VkDescriptorUpdateTemplateCreateInfo const&() const 
	{	return *reinterpret_cast<const VkDescriptorUpdateTemplateCreateInfo*>(this);	}
operator VkDescriptorUpdateTemplateCreateInfo &() 
	{	return *reinterpret_cast<VkDescriptorUpdateTemplateCreateInfo*>(this);	}
};
static_assert(
	sizeof(S_descriptor_update_template_create_info) == sizeof(VkDescriptorUpdateTemplateCreateInfo),
	"struct and wrapper have different size!");

/*	VkXYColorEXT
Chromaticity coordinate*/
struct		S_xy_color_EXT{
	float x;
	float y;

S_xy_color_EXT(){}
};

/*	VkHdrMetadataEXT
*/
struct		S_hdr_metadata_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
	 void * pNext = nullptr;
public:
	S_xy_color_EXT displayPrimaryRed;
	S_xy_color_EXT displayPrimaryGreen;
	S_xy_color_EXT displayPrimaryBlue;
	S_xy_color_EXT whitePoint;
	float maxLuminance;
	float minLuminance;
	float maxContentLightLevel;
	float maxFrameAverageLightLevel;

S_hdr_metadata_EXT(){}

S_hdr_metadata_EXT(
	S_xy_color_EXT displayPrimaryRed_,
	S_xy_color_EXT displayPrimaryGreen_,
	S_xy_color_EXT displayPrimaryBlue_,
	S_xy_color_EXT whitePoint_,
	float maxLuminance_,
	float minLuminance_,
	float maxContentLightLevel_,
	float maxFrameAverageLightLevel_)
	:displayPrimaryRed(displayPrimaryRed_)
	,displayPrimaryGreen(displayPrimaryGreen_)
	,displayPrimaryBlue(displayPrimaryBlue_)
	,whitePoint(whitePoint_)
	,maxLuminance(maxLuminance_)
	,minLuminance(minLuminance_)
	,maxContentLightLevel(maxContentLightLevel_)
	,maxFrameAverageLightLevel(maxFrameAverageLightLevel_)
{
}

S_hdr_metadata_EXT( VkHdrMetadataEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_hdr_metadata_EXT ) );	}
S_hdr_metadata_EXT& operator=( VkHdrMetadataEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_hdr_metadata_EXT ) ); return *this;	}
operator VkHdrMetadataEXT const&() const 
	{	return *reinterpret_cast<const VkHdrMetadataEXT*>(this);	}
operator VkHdrMetadataEXT &() 
	{	return *reinterpret_cast<VkHdrMetadataEXT*>(this);	}
};
static_assert(
	sizeof(S_hdr_metadata_EXT) == sizeof(VkHdrMetadataEXT),
	"struct and wrapper have different size!");

/*	VkRefreshCycleDurationGOOGLE
(returnedonly)
*/
struct		S_refresh_cycle_duration_GOOGLE{
	uint64_t refreshDuration;

S_refresh_cycle_duration_GOOGLE(){}
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

S_past_presentation_timing_GOOGLE(){}
};

/*	VkIOSSurfaceCreateInfoMVK
*/
#ifdef VK_USE_PLATFORM_IOS_MVK
struct		S_ios_surface_create_info_MVK{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK;
	 void * pNext = nullptr;
public:
	VkIOSSurfaceCreateFlagsMVK flags;
	const void * pView;

S_ios_surface_create_info_MVK(){}

S_ios_surface_create_info_MVK(
	VkIOSSurfaceCreateFlagsMVK flags_,
	const void * pView_)
	:flags(flags_)
	,pView(pView_)
{
}

S_ios_surface_create_info_MVK( VkIOSSurfaceCreateInfoMVK const & rhs )
	{	memcpy( this, &rhs, sizeof( S_ios_surface_create_info_MVK ) );	}
S_ios_surface_create_info_MVK& operator=( VkIOSSurfaceCreateInfoMVK const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_ios_surface_create_info_MVK ) ); return *this;	}
operator VkIOSSurfaceCreateInfoMVK const&() const 
	{	return *reinterpret_cast<const VkIOSSurfaceCreateInfoMVK*>(this);	}
operator VkIOSSurfaceCreateInfoMVK &() 
	{	return *reinterpret_cast<VkIOSSurfaceCreateInfoMVK*>(this);	}
};
static_assert(
	sizeof(S_ios_surface_create_info_MVK) == sizeof(VkIOSSurfaceCreateInfoMVK),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_IOS_MVK

/*	VkMacOSSurfaceCreateInfoMVK
*/
#ifdef VK_USE_PLATFORM_MACOS_MVK
struct		S_mac_os_surface_create_info_MVK{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK;
	 void * pNext = nullptr;
public:
	VkMacOSSurfaceCreateFlagsMVK flags;
	const void * pView;

S_mac_os_surface_create_info_MVK(){}

S_mac_os_surface_create_info_MVK(
	VkMacOSSurfaceCreateFlagsMVK flags_,
	const void * pView_)
	:flags(flags_)
	,pView(pView_)
{
}

S_mac_os_surface_create_info_MVK( VkMacOSSurfaceCreateInfoMVK const & rhs )
	{	memcpy( this, &rhs, sizeof( S_mac_os_surface_create_info_MVK ) );	}
S_mac_os_surface_create_info_MVK& operator=( VkMacOSSurfaceCreateInfoMVK const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_mac_os_surface_create_info_MVK ) ); return *this;	}
operator VkMacOSSurfaceCreateInfoMVK const&() const 
	{	return *reinterpret_cast<const VkMacOSSurfaceCreateInfoMVK*>(this);	}
operator VkMacOSSurfaceCreateInfoMVK &() 
	{	return *reinterpret_cast<VkMacOSSurfaceCreateInfoMVK*>(this);	}
};
static_assert(
	sizeof(S_mac_os_surface_create_info_MVK) == sizeof(VkMacOSSurfaceCreateInfoMVK),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_MACOS_MVK

/*	VkPhysicalDeviceSurfaceInfo2KHR
*/
struct		S_physical_device_surface_info2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;
	 void * pNext = nullptr;
public:
	VkSurfaceKHR surface;

S_physical_device_surface_info2_KHR(){}

S_physical_device_surface_info2_KHR(
	VkSurfaceKHR surface_)
	:surface(surface_)
{
}

S_physical_device_surface_info2_KHR( VkPhysicalDeviceSurfaceInfo2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_physical_device_surface_info2_KHR ) );	}
S_physical_device_surface_info2_KHR& operator=( VkPhysicalDeviceSurfaceInfo2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_physical_device_surface_info2_KHR ) ); return *this;	}
operator VkPhysicalDeviceSurfaceInfo2KHR const&() const 
	{	return *reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR*>(this);	}
operator VkPhysicalDeviceSurfaceInfo2KHR &() 
	{	return *reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR*>(this);	}
};
static_assert(
	sizeof(S_physical_device_surface_info2_KHR) == sizeof(VkPhysicalDeviceSurfaceInfo2KHR),
	"struct and wrapper have different size!");

/*	VkSharedPresentSurfaceCapabilitiesKHR
(returnedonly)
ex to: VkSurfaceCapabilities2KHR
*/
struct		S_shared_present_surface_capabilities_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
	void * pNext = nullptr;
public:
	F_image_usage sharedPresentSupportedUsageFlags;

S_shared_present_surface_capabilities_KHR(){}

S_shared_present_surface_capabilities_KHR(
	F_image_usage sharedPresentSupportedUsageFlags_)
	:sharedPresentSupportedUsageFlags(sharedPresentSupportedUsageFlags_)
{
}

S_shared_present_surface_capabilities_KHR( VkSharedPresentSurfaceCapabilitiesKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_shared_present_surface_capabilities_KHR ) );	}
S_shared_present_surface_capabilities_KHR& operator=( VkSharedPresentSurfaceCapabilitiesKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_shared_present_surface_capabilities_KHR ) ); return *this;	}
operator VkSharedPresentSurfaceCapabilitiesKHR const&() const 
	{	return *reinterpret_cast<const VkSharedPresentSurfaceCapabilitiesKHR*>(this);	}
operator VkSharedPresentSurfaceCapabilitiesKHR &() 
	{	return *reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR*>(this);	}

friend S_surface_capabilities2_KHR;
};
static_assert(
	sizeof(S_shared_present_surface_capabilities_KHR) == sizeof(VkSharedPresentSurfaceCapabilitiesKHR),
	"struct and wrapper have different size!");

/*	VkSurfaceCapabilities2KHR
(returnedonly)
ex:
	VkSharedPresentSurfaceCapabilitiesKHR
*/
struct		S_surface_capabilities2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR;
	void * pNext = nullptr;
public:
	S_surface_capabilities_KHR surfaceCapabilities;

S_surface_capabilities2_KHR(){}

S_surface_capabilities2_KHR(
	S_surface_capabilities_KHR surfaceCapabilities_)
	:surfaceCapabilities(surfaceCapabilities_)
{
}

S_surface_capabilities2_KHR( VkSurfaceCapabilities2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_surface_capabilities2_KHR ) );	}
S_surface_capabilities2_KHR& operator=( VkSurfaceCapabilities2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_surface_capabilities2_KHR ) ); return *this;	}
operator VkSurfaceCapabilities2KHR const&() const 
	{	return *reinterpret_cast<const VkSurfaceCapabilities2KHR*>(this);	}
operator VkSurfaceCapabilities2KHR &() 
	{	return *reinterpret_cast<VkSurfaceCapabilities2KHR*>(this);	}

S_surface_capabilities2_KHR& n_shared_present_surface_capabilities_KHR(S_shared_present_surface_capabilities_KHR const& next_);
};
static_assert(
	sizeof(S_surface_capabilities2_KHR) == sizeof(VkSurfaceCapabilities2KHR),
	"struct and wrapper have different size!");

struct N_surface_capabilities2_KHR{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_surface_capabilities2_KHR& n_shared_present_surface_capabilities_KHR(S_shared_present_surface_capabilities_KHR const& next_);
};

/*	VkSurfaceFormat2KHR
(returnedonly)
*/
struct		S_surface_format2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR;
	void * pNext = nullptr;
public:
	S_surface_format_KHR surfaceFormat;

S_surface_format2_KHR(){}

S_surface_format2_KHR(
	S_surface_format_KHR surfaceFormat_)
	:surfaceFormat(surfaceFormat_)
{
}

S_surface_format2_KHR( VkSurfaceFormat2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_surface_format2_KHR ) );	}
S_surface_format2_KHR& operator=( VkSurfaceFormat2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_surface_format2_KHR ) ); return *this;	}
operator VkSurfaceFormat2KHR const&() const 
	{	return *reinterpret_cast<const VkSurfaceFormat2KHR*>(this);	}
operator VkSurfaceFormat2KHR &() 
	{	return *reinterpret_cast<VkSurfaceFormat2KHR*>(this);	}
};
static_assert(
	sizeof(S_surface_format2_KHR) == sizeof(VkSurfaceFormat2KHR),
	"struct and wrapper have different size!");

/*	VkDisplayProperties2KHR
(returnedonly)
*/
struct		S_display_properties2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR;
	void * pNext = nullptr;
public:
	S_display_properties_KHR displayProperties;

S_display_properties2_KHR(){}

S_display_properties2_KHR(
	S_display_properties_KHR displayProperties_)
	:displayProperties(displayProperties_)
{
}

S_display_properties2_KHR( VkDisplayProperties2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_properties2_KHR ) );	}
S_display_properties2_KHR& operator=( VkDisplayProperties2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_properties2_KHR ) ); return *this;	}
operator VkDisplayProperties2KHR const&() const 
	{	return *reinterpret_cast<const VkDisplayProperties2KHR*>(this);	}
operator VkDisplayProperties2KHR &() 
	{	return *reinterpret_cast<VkDisplayProperties2KHR*>(this);	}
};
static_assert(
	sizeof(S_display_properties2_KHR) == sizeof(VkDisplayProperties2KHR),
	"struct and wrapper have different size!");

/*	VkDisplayPlaneProperties2KHR
(returnedonly)
*/
struct		S_display_plane_properties2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR;
	void * pNext = nullptr;
public:
	S_display_plane_properties_KHR displayPlaneProperties;

S_display_plane_properties2_KHR(){}

S_display_plane_properties2_KHR(
	S_display_plane_properties_KHR displayPlaneProperties_)
	:displayPlaneProperties(displayPlaneProperties_)
{
}

S_display_plane_properties2_KHR( VkDisplayPlaneProperties2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_plane_properties2_KHR ) );	}
S_display_plane_properties2_KHR& operator=( VkDisplayPlaneProperties2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_plane_properties2_KHR ) ); return *this;	}
operator VkDisplayPlaneProperties2KHR const&() const 
	{	return *reinterpret_cast<const VkDisplayPlaneProperties2KHR*>(this);	}
operator VkDisplayPlaneProperties2KHR &() 
	{	return *reinterpret_cast<VkDisplayPlaneProperties2KHR*>(this);	}
};
static_assert(
	sizeof(S_display_plane_properties2_KHR) == sizeof(VkDisplayPlaneProperties2KHR),
	"struct and wrapper have different size!");

/*	VkDisplayModeProperties2KHR
(returnedonly)
*/
struct		S_display_mode_properties2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;
	void * pNext = nullptr;
public:
	S_display_mode_properties_KHR displayModeProperties;

S_display_mode_properties2_KHR(){}

S_display_mode_properties2_KHR(
	S_display_mode_properties_KHR displayModeProperties_)
	:displayModeProperties(displayModeProperties_)
{
}

S_display_mode_properties2_KHR( VkDisplayModeProperties2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_mode_properties2_KHR ) );	}
S_display_mode_properties2_KHR& operator=( VkDisplayModeProperties2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_mode_properties2_KHR ) ); return *this;	}
operator VkDisplayModeProperties2KHR const&() const 
	{	return *reinterpret_cast<const VkDisplayModeProperties2KHR*>(this);	}
operator VkDisplayModeProperties2KHR &() 
	{	return *reinterpret_cast<VkDisplayModeProperties2KHR*>(this);	}
};
static_assert(
	sizeof(S_display_mode_properties2_KHR) == sizeof(VkDisplayModeProperties2KHR),
	"struct and wrapper have different size!");

/*	VkDisplayPlaneInfo2KHR
*/
struct		S_display_plane_info2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR;
	 void * pNext = nullptr;
public:
	VkDisplayModeKHR mode;
	uint32_t planeIndex;

S_display_plane_info2_KHR(){}

S_display_plane_info2_KHR(
	VkDisplayModeKHR mode_,
	uint32_t planeIndex_)
	:mode(mode_)
	,planeIndex(planeIndex_)
{
}

S_display_plane_info2_KHR( VkDisplayPlaneInfo2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_plane_info2_KHR ) );	}
S_display_plane_info2_KHR& operator=( VkDisplayPlaneInfo2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_plane_info2_KHR ) ); return *this;	}
operator VkDisplayPlaneInfo2KHR const&() const 
	{	return *reinterpret_cast<const VkDisplayPlaneInfo2KHR*>(this);	}
operator VkDisplayPlaneInfo2KHR &() 
	{	return *reinterpret_cast<VkDisplayPlaneInfo2KHR*>(this);	}
};
static_assert(
	sizeof(S_display_plane_info2_KHR) == sizeof(VkDisplayPlaneInfo2KHR),
	"struct and wrapper have different size!");

/*	VkDisplayPlaneCapabilities2KHR
(returnedonly)
*/
struct		S_display_plane_capabilities2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR;
	void * pNext = nullptr;
public:
	S_display_plane_capabilities_KHR capabilities;

S_display_plane_capabilities2_KHR(){}

S_display_plane_capabilities2_KHR(
	S_display_plane_capabilities_KHR capabilities_)
	:capabilities(capabilities_)
{
}

S_display_plane_capabilities2_KHR( VkDisplayPlaneCapabilities2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_display_plane_capabilities2_KHR ) );	}
S_display_plane_capabilities2_KHR& operator=( VkDisplayPlaneCapabilities2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_display_plane_capabilities2_KHR ) ); return *this;	}
operator VkDisplayPlaneCapabilities2KHR const&() const 
	{	return *reinterpret_cast<const VkDisplayPlaneCapabilities2KHR*>(this);	}
operator VkDisplayPlaneCapabilities2KHR &() 
	{	return *reinterpret_cast<VkDisplayPlaneCapabilities2KHR*>(this);	}
};
static_assert(
	sizeof(S_display_plane_capabilities2_KHR) == sizeof(VkDisplayPlaneCapabilities2KHR),
	"struct and wrapper have different size!");

/*	VkBufferMemoryRequirementsInfo2
*/
struct		S_buffer_memory_requirements_info2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
	 void * pNext = nullptr;
public:
	VkBuffer buffer;

S_buffer_memory_requirements_info2(){}

S_buffer_memory_requirements_info2(
	VkBuffer buffer_)
	:buffer(buffer_)
{
}

S_buffer_memory_requirements_info2( VkBufferMemoryRequirementsInfo2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_buffer_memory_requirements_info2 ) );	}
S_buffer_memory_requirements_info2& operator=( VkBufferMemoryRequirementsInfo2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_buffer_memory_requirements_info2 ) ); return *this;	}
operator VkBufferMemoryRequirementsInfo2 const&() const 
	{	return *reinterpret_cast<const VkBufferMemoryRequirementsInfo2*>(this);	}
operator VkBufferMemoryRequirementsInfo2 &() 
	{	return *reinterpret_cast<VkBufferMemoryRequirementsInfo2*>(this);	}
};
static_assert(
	sizeof(S_buffer_memory_requirements_info2) == sizeof(VkBufferMemoryRequirementsInfo2),
	"struct and wrapper have different size!");

/*	VkImagePlaneMemoryRequirementsInfo
ex to: VkImageMemoryRequirementsInfo2
*/
struct		S_image_plane_memory_requirements_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
	 void * pNext = nullptr;
public:
	F_image_aspect planeAspect;

S_image_plane_memory_requirements_info(){}

S_image_plane_memory_requirements_info(
	F_image_aspect planeAspect_)
	:planeAspect(planeAspect_)
{
}

S_image_plane_memory_requirements_info( VkImagePlaneMemoryRequirementsInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_plane_memory_requirements_info ) );	}
S_image_plane_memory_requirements_info& operator=( VkImagePlaneMemoryRequirementsInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_plane_memory_requirements_info ) ); return *this;	}
operator VkImagePlaneMemoryRequirementsInfo const&() const 
	{	return *reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo*>(this);	}
operator VkImagePlaneMemoryRequirementsInfo &() 
	{	return *reinterpret_cast<VkImagePlaneMemoryRequirementsInfo*>(this);	}

friend S_image_memory_requirements_info2;
};
static_assert(
	sizeof(S_image_plane_memory_requirements_info) == sizeof(VkImagePlaneMemoryRequirementsInfo),
	"struct and wrapper have different size!");

/*	VkImageMemoryRequirementsInfo2
ex:
	VkImagePlaneMemoryRequirementsInfo
*/
struct		S_image_memory_requirements_info2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
	 void * pNext = nullptr;
public:
	VkImage image;

S_image_memory_requirements_info2(){}

S_image_memory_requirements_info2(
	VkImage image_)
	:image(image_)
{
}

S_image_memory_requirements_info2( VkImageMemoryRequirementsInfo2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_memory_requirements_info2 ) );	}
S_image_memory_requirements_info2& operator=( VkImageMemoryRequirementsInfo2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_memory_requirements_info2 ) ); return *this;	}
operator VkImageMemoryRequirementsInfo2 const&() const 
	{	return *reinterpret_cast<const VkImageMemoryRequirementsInfo2*>(this);	}
operator VkImageMemoryRequirementsInfo2 &() 
	{	return *reinterpret_cast<VkImageMemoryRequirementsInfo2*>(this);	}

S_image_memory_requirements_info2& n_image_plane_memory_requirements_info(S_image_plane_memory_requirements_info const& next_);
};
static_assert(
	sizeof(S_image_memory_requirements_info2) == sizeof(VkImageMemoryRequirementsInfo2),
	"struct and wrapper have different size!");

struct N_image_memory_requirements_info2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_image_memory_requirements_info2& n_image_plane_memory_requirements_info(S_image_plane_memory_requirements_info const& next_);
};

/*	VkImageSparseMemoryRequirementsInfo2
*/
struct		S_image_sparse_memory_requirements_info2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
	 void * pNext = nullptr;
public:
	VkImage image;

S_image_sparse_memory_requirements_info2(){}

S_image_sparse_memory_requirements_info2(
	VkImage image_)
	:image(image_)
{
}

S_image_sparse_memory_requirements_info2( VkImageSparseMemoryRequirementsInfo2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_sparse_memory_requirements_info2 ) );	}
S_image_sparse_memory_requirements_info2& operator=( VkImageSparseMemoryRequirementsInfo2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_sparse_memory_requirements_info2 ) ); return *this;	}
operator VkImageSparseMemoryRequirementsInfo2 const&() const 
	{	return *reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2*>(this);	}
operator VkImageSparseMemoryRequirementsInfo2 &() 
	{	return *reinterpret_cast<VkImageSparseMemoryRequirementsInfo2*>(this);	}
};
static_assert(
	sizeof(S_image_sparse_memory_requirements_info2) == sizeof(VkImageSparseMemoryRequirementsInfo2),
	"struct and wrapper have different size!");

/*	VkMemoryDedicatedRequirements
(returnedonly)
ex to: VkMemoryRequirements2
*/
struct		S_memory_dedicated_requirements{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
	void * pNext = nullptr;
public:
	VkBool32 prefersDedicatedAllocation;
	VkBool32 requiresDedicatedAllocation;

S_memory_dedicated_requirements(){}

S_memory_dedicated_requirements(
	VkBool32 prefersDedicatedAllocation_,
	VkBool32 requiresDedicatedAllocation_)
	:prefersDedicatedAllocation(prefersDedicatedAllocation_)
	,requiresDedicatedAllocation(requiresDedicatedAllocation_)
{
}

S_memory_dedicated_requirements( VkMemoryDedicatedRequirements const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_dedicated_requirements ) );	}
S_memory_dedicated_requirements& operator=( VkMemoryDedicatedRequirements const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_dedicated_requirements ) ); return *this;	}
operator VkMemoryDedicatedRequirements const&() const 
	{	return *reinterpret_cast<const VkMemoryDedicatedRequirements*>(this);	}
operator VkMemoryDedicatedRequirements &() 
	{	return *reinterpret_cast<VkMemoryDedicatedRequirements*>(this);	}

friend S_memory_requirements2;
};
static_assert(
	sizeof(S_memory_dedicated_requirements) == sizeof(VkMemoryDedicatedRequirements),
	"struct and wrapper have different size!");

/*	VkMemoryRequirements2
(returnedonly)
ex:
	VkMemoryDedicatedRequirements
*/
struct		S_memory_requirements2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
	void * pNext = nullptr;
public:
	S_memory_requirements memoryRequirements;

S_memory_requirements2(){}

S_memory_requirements2(
	S_memory_requirements memoryRequirements_)
	:memoryRequirements(memoryRequirements_)
{
}

S_memory_requirements2( VkMemoryRequirements2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_requirements2 ) );	}
S_memory_requirements2& operator=( VkMemoryRequirements2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_requirements2 ) ); return *this;	}
operator VkMemoryRequirements2 const&() const 
	{	return *reinterpret_cast<const VkMemoryRequirements2*>(this);	}
operator VkMemoryRequirements2 &() 
	{	return *reinterpret_cast<VkMemoryRequirements2*>(this);	}

S_memory_requirements2& n_memory_dedicated_requirements(S_memory_dedicated_requirements const& next_);
};
static_assert(
	sizeof(S_memory_requirements2) == sizeof(VkMemoryRequirements2),
	"struct and wrapper have different size!");

struct N_memory_requirements2{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_memory_requirements2& n_memory_dedicated_requirements(S_memory_dedicated_requirements const& next_);
};

/*	VkSparseImageMemoryRequirements2
(returnedonly)
*/
struct		S_sparse_image_memory_requirements2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;
	void * pNext = nullptr;
public:
	S_sparse_image_memory_requirements memoryRequirements;

S_sparse_image_memory_requirements2(){}

S_sparse_image_memory_requirements2(
	S_sparse_image_memory_requirements memoryRequirements_)
	:memoryRequirements(memoryRequirements_)
{
}

S_sparse_image_memory_requirements2( VkSparseImageMemoryRequirements2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sparse_image_memory_requirements2 ) );	}
S_sparse_image_memory_requirements2& operator=( VkSparseImageMemoryRequirements2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sparse_image_memory_requirements2 ) ); return *this;	}
operator VkSparseImageMemoryRequirements2 const&() const 
	{	return *reinterpret_cast<const VkSparseImageMemoryRequirements2*>(this);	}
operator VkSparseImageMemoryRequirements2 &() 
	{	return *reinterpret_cast<VkSparseImageMemoryRequirements2*>(this);	}
};
static_assert(
	sizeof(S_sparse_image_memory_requirements2) == sizeof(VkSparseImageMemoryRequirements2),
	"struct and wrapper have different size!");

/*	VkSamplerYcbcrConversionCreateInfo
ex:
	VkExternalFormatANDROID
*/
struct		S_sampler_ycbcr_conversion_create_info{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
	 void * pNext = nullptr;
public:
	E_format format;
	E_sampler_ycbcr_model_conversion ycbcrModel;
	E_sampler_ycbcr_range ycbcrRange;
	S_component_mapping components;
	E_chroma_location xChromaOffset;
	E_chroma_location yChromaOffset;
	E_filter chromaFilter;
	VkBool32 forceExplicitReconstruction;

S_sampler_ycbcr_conversion_create_info(){}

S_sampler_ycbcr_conversion_create_info(
	E_format format_,
	E_sampler_ycbcr_model_conversion ycbcrModel_,
	E_sampler_ycbcr_range ycbcrRange_,
	S_component_mapping components_,
	E_chroma_location xChromaOffset_,
	E_chroma_location yChromaOffset_,
	E_filter chromaFilter_,
	VkBool32 forceExplicitReconstruction_)
	:format(format_)
	,ycbcrModel(ycbcrModel_)
	,ycbcrRange(ycbcrRange_)
	,components(components_)
	,xChromaOffset(xChromaOffset_)
	,yChromaOffset(yChromaOffset_)
	,chromaFilter(chromaFilter_)
	,forceExplicitReconstruction(forceExplicitReconstruction_)
{
}

S_sampler_ycbcr_conversion_create_info( VkSamplerYcbcrConversionCreateInfo const & rhs )
	{	memcpy( this, &rhs, sizeof( S_sampler_ycbcr_conversion_create_info ) );	}
S_sampler_ycbcr_conversion_create_info& operator=( VkSamplerYcbcrConversionCreateInfo const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_sampler_ycbcr_conversion_create_info ) ); return *this;	}
operator VkSamplerYcbcrConversionCreateInfo const&() const 
	{	return *reinterpret_cast<const VkSamplerYcbcrConversionCreateInfo*>(this);	}
operator VkSamplerYcbcrConversionCreateInfo &() 
	{	return *reinterpret_cast<VkSamplerYcbcrConversionCreateInfo*>(this);	}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_sampler_ycbcr_conversion_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
};
static_assert(
	sizeof(S_sampler_ycbcr_conversion_create_info) == sizeof(VkSamplerYcbcrConversionCreateInfo),
	"struct and wrapper have different size!");

struct N_sampler_ycbcr_conversion_create_info{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_sampler_ycbcr_conversion_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
};

/*	VkConditionalRenderingBeginInfoEXT
*/
struct		S_conditional_rendering_begin_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkBuffer buffer;
	VkDeviceSize offset;
	F_conditional_rendering_EXT flags;

S_conditional_rendering_begin_info_EXT(){}

S_conditional_rendering_begin_info_EXT(
	VkBuffer buffer_,
	VkDeviceSize offset_,
	F_conditional_rendering_EXT flags_)
	:buffer(buffer_)
	,offset(offset_)
	,flags(flags_)
{
}

S_conditional_rendering_begin_info_EXT( VkConditionalRenderingBeginInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_conditional_rendering_begin_info_EXT ) );	}
S_conditional_rendering_begin_info_EXT& operator=( VkConditionalRenderingBeginInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_conditional_rendering_begin_info_EXT ) ); return *this;	}
operator VkConditionalRenderingBeginInfoEXT const&() const 
	{	return *reinterpret_cast<const VkConditionalRenderingBeginInfoEXT*>(this);	}
operator VkConditionalRenderingBeginInfoEXT &() 
	{	return *reinterpret_cast<VkConditionalRenderingBeginInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_conditional_rendering_begin_info_EXT) == sizeof(VkConditionalRenderingBeginInfoEXT),
	"struct and wrapper have different size!");

/*	VkDeviceQueueInfo2
*/
struct		S_device_queue_info2{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;
	 void * pNext = nullptr;
public:
	F_device_queue_create flags;
	uint32_t queueFamilyIndex;
	uint32_t queueIndex;

S_device_queue_info2(){}

S_device_queue_info2(
	F_device_queue_create flags_,
	uint32_t queueFamilyIndex_,
	uint32_t queueIndex_)
	:flags(flags_)
	,queueFamilyIndex(queueFamilyIndex_)
	,queueIndex(queueIndex_)
{
}

S_device_queue_info2( VkDeviceQueueInfo2 const & rhs )
	{	memcpy( this, &rhs, sizeof( S_device_queue_info2 ) );	}
S_device_queue_info2& operator=( VkDeviceQueueInfo2 const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_device_queue_info2 ) ); return *this;	}
operator VkDeviceQueueInfo2 const&() const 
	{	return *reinterpret_cast<const VkDeviceQueueInfo2*>(this);	}
operator VkDeviceQueueInfo2 &() 
	{	return *reinterpret_cast<VkDeviceQueueInfo2*>(this);	}
};
static_assert(
	sizeof(S_device_queue_info2) == sizeof(VkDeviceQueueInfo2),
	"struct and wrapper have different size!");

/*	VkMultisamplePropertiesEXT
(returnedonly)
*/
struct		S_multisample_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	S_extent_2d maxSampleLocationGridSize;

S_multisample_properties_EXT(){}

S_multisample_properties_EXT(
	S_extent_2d maxSampleLocationGridSize_)
	:maxSampleLocationGridSize(maxSampleLocationGridSize_)
{
}

S_multisample_properties_EXT( VkMultisamplePropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_multisample_properties_EXT ) );	}
S_multisample_properties_EXT& operator=( VkMultisamplePropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_multisample_properties_EXT ) ); return *this;	}
operator VkMultisamplePropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkMultisamplePropertiesEXT*>(this);	}
operator VkMultisamplePropertiesEXT &() 
	{	return *reinterpret_cast<VkMultisamplePropertiesEXT*>(this);	}
};
static_assert(
	sizeof(S_multisample_properties_EXT) == sizeof(VkMultisamplePropertiesEXT),
	"struct and wrapper have different size!");

/*	VkValidationCacheCreateInfoEXT
*/
struct		S_validation_cache_create_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT;
	 void * pNext = nullptr;
public:
	VkValidationCacheCreateFlagsEXT flags;
	size_t initialDataSize;
	const void * pInitialData;

S_validation_cache_create_info_EXT(){}

S_validation_cache_create_info_EXT(
	VkValidationCacheCreateFlagsEXT flags_,
	size_t initialDataSize_,
	const void * pInitialData_)
	:flags(flags_)
	,initialDataSize(initialDataSize_)
	,pInitialData(pInitialData_)
{
}

S_validation_cache_create_info_EXT( VkValidationCacheCreateInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_validation_cache_create_info_EXT ) );	}
S_validation_cache_create_info_EXT& operator=( VkValidationCacheCreateInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_validation_cache_create_info_EXT ) ); return *this;	}
operator VkValidationCacheCreateInfoEXT const&() const 
	{	return *reinterpret_cast<const VkValidationCacheCreateInfoEXT*>(this);	}
operator VkValidationCacheCreateInfoEXT &() 
	{	return *reinterpret_cast<VkValidationCacheCreateInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_validation_cache_create_info_EXT) == sizeof(VkValidationCacheCreateInfoEXT),
	"struct and wrapper have different size!");

/*	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT
(returnedonly)
ex to: VkDescriptorSetLayoutSupport
*/
struct		S_descriptor_set_variable_descriptor_count_layout_support_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT;
	void * pNext = nullptr;
public:
	uint32_t maxVariableDescriptorCount;

S_descriptor_set_variable_descriptor_count_layout_support_EXT(){}

S_descriptor_set_variable_descriptor_count_layout_support_EXT(
	uint32_t maxVariableDescriptorCount_)
	:maxVariableDescriptorCount(maxVariableDescriptorCount_)
{
}

S_descriptor_set_variable_descriptor_count_layout_support_EXT( VkDescriptorSetVariableDescriptorCountLayoutSupportEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_variable_descriptor_count_layout_support_EXT ) );	}
S_descriptor_set_variable_descriptor_count_layout_support_EXT& operator=( VkDescriptorSetVariableDescriptorCountLayoutSupportEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_variable_descriptor_count_layout_support_EXT ) ); return *this;	}
operator VkDescriptorSetVariableDescriptorCountLayoutSupportEXT const&() const 
	{	return *reinterpret_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT*>(this);	}
operator VkDescriptorSetVariableDescriptorCountLayoutSupportEXT &() 
	{	return *reinterpret_cast<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT*>(this);	}

friend S_descriptor_set_layout_support;
};
static_assert(
	sizeof(S_descriptor_set_variable_descriptor_count_layout_support_EXT) == sizeof(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT),
	"struct and wrapper have different size!");

/*	VkDescriptorSetLayoutSupport
(returnedonly)
ex:
	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT
*/
struct		S_descriptor_set_layout_support{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT;
	void * pNext = nullptr;
public:
	VkBool32 supported;

S_descriptor_set_layout_support(){}

S_descriptor_set_layout_support(
	VkBool32 supported_)
	:supported(supported_)
{
}

S_descriptor_set_layout_support( VkDescriptorSetLayoutSupport const & rhs )
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_layout_support ) );	}
S_descriptor_set_layout_support& operator=( VkDescriptorSetLayoutSupport const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_descriptor_set_layout_support ) ); return *this;	}
operator VkDescriptorSetLayoutSupport const&() const 
	{	return *reinterpret_cast<const VkDescriptorSetLayoutSupport*>(this);	}
operator VkDescriptorSetLayoutSupport &() 
	{	return *reinterpret_cast<VkDescriptorSetLayoutSupport*>(this);	}

S_descriptor_set_layout_support& n_descriptor_set_variable_descriptor_count_layout_support_EXT(S_descriptor_set_variable_descriptor_count_layout_support_EXT const& next_);
};
static_assert(
	sizeof(S_descriptor_set_layout_support) == sizeof(VkDescriptorSetLayoutSupport),
	"struct and wrapper have different size!");

struct N_descriptor_set_layout_support{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
N_descriptor_set_layout_support& n_descriptor_set_variable_descriptor_count_layout_support_EXT(S_descriptor_set_variable_descriptor_count_layout_support_EXT const& next_);
};

/*	VkNativeBufferANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_native_buffer_ANDROID{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID;
	 void * pNext = nullptr;
public:
	const void * handle;
	int stride;
	int format;
	int usage;

S_native_buffer_ANDROID(){}

S_native_buffer_ANDROID(
	const void * handle_,
	int stride_,
	int format_,
	int usage_)
	:handle(handle_)
	,stride(stride_)
	,format(format_)
	,usage(usage_)
{
}

S_native_buffer_ANDROID( VkNativeBufferANDROID const & rhs )
	{	memcpy( this, &rhs, sizeof( S_native_buffer_ANDROID ) );	}
S_native_buffer_ANDROID& operator=( VkNativeBufferANDROID const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_native_buffer_ANDROID ) ); return *this;	}
operator VkNativeBufferANDROID const&() const 
	{	return *reinterpret_cast<const VkNativeBufferANDROID*>(this);	}
operator VkNativeBufferANDROID &() 
	{	return *reinterpret_cast<VkNativeBufferANDROID*>(this);	}
};
static_assert(
	sizeof(S_native_buffer_ANDROID) == sizeof(VkNativeBufferANDROID),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkShaderResourceUsageAMD
(returnedonly)
*/
struct		S_shader_resource_usage_AMD{
	uint32_t numUsedVgprs;
	uint32_t numUsedSgprs;
	uint32_t ldsSizePerLocalWorkGroup;
	size_t ldsUsageSizeInBytes;
	size_t scratchMemUsageInBytes;

S_shader_resource_usage_AMD(){}
};

/*	VkShaderStatisticsInfoAMD
(returnedonly)
*/
struct		S_shader_statistics_info_AMD{
	F_shader_stage shaderStageMask;
	S_shader_resource_usage_AMD resourceUsage;
	uint32_t numPhysicalVgprs;
	uint32_t numPhysicalSgprs;
	uint32_t numAvailableVgprs;
	uint32_t numAvailableSgprs;
	uint32_t computeWorkGroupSize[3];

S_shader_statistics_info_AMD(){}
};

/*	VkDebugUtilsObjectNameInfoEXT
*/
struct		S_debug_utils_object_name_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_object_type objectType;
	uint64_t objectHandle;
	const char * pObjectName;

S_debug_utils_object_name_info_EXT(){}

S_debug_utils_object_name_info_EXT(
	E_object_type objectType_,
	uint64_t objectHandle_,
	const char * pObjectName_)
	:objectType(objectType_)
	,objectHandle(objectHandle_)
	,pObjectName(pObjectName_)
{
}

S_debug_utils_object_name_info_EXT( VkDebugUtilsObjectNameInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_utils_object_name_info_EXT ) );	}
S_debug_utils_object_name_info_EXT& operator=( VkDebugUtilsObjectNameInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_utils_object_name_info_EXT ) ); return *this;	}
operator VkDebugUtilsObjectNameInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT*>(this);	}
operator VkDebugUtilsObjectNameInfoEXT &() 
	{	return *reinterpret_cast<VkDebugUtilsObjectNameInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_debug_utils_object_name_info_EXT) == sizeof(VkDebugUtilsObjectNameInfoEXT),
	"struct and wrapper have different size!");

/*	VkDebugUtilsObjectTagInfoEXT
*/
struct		S_debug_utils_object_tag_info_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
	 void * pNext = nullptr;
public:
	E_object_type objectType;
	uint64_t objectHandle;
	uint64_t tagName;
	size_t tagSize;
	const void * pTag;

S_debug_utils_object_tag_info_EXT(){}

S_debug_utils_object_tag_info_EXT(
	E_object_type objectType_,
	uint64_t objectHandle_,
	uint64_t tagName_,
	size_t tagSize_,
	const void * pTag_)
	:objectType(objectType_)
	,objectHandle(objectHandle_)
	,tagName(tagName_)
	,tagSize(tagSize_)
	,pTag(pTag_)
{
}

S_debug_utils_object_tag_info_EXT( VkDebugUtilsObjectTagInfoEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_utils_object_tag_info_EXT ) );	}
S_debug_utils_object_tag_info_EXT& operator=( VkDebugUtilsObjectTagInfoEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_utils_object_tag_info_EXT ) ); return *this;	}
operator VkDebugUtilsObjectTagInfoEXT const&() const 
	{	return *reinterpret_cast<const VkDebugUtilsObjectTagInfoEXT*>(this);	}
operator VkDebugUtilsObjectTagInfoEXT &() 
	{	return *reinterpret_cast<VkDebugUtilsObjectTagInfoEXT*>(this);	}
};
static_assert(
	sizeof(S_debug_utils_object_tag_info_EXT) == sizeof(VkDebugUtilsObjectTagInfoEXT),
	"struct and wrapper have different size!");

/*	VkDebugUtilsLabelEXT
*/
struct		S_debug_utils_label_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
	 void * pNext = nullptr;
public:
	const char * pLabelName;
	float color[4];

S_debug_utils_label_EXT(){}

S_debug_utils_label_EXT(
	const char * pLabelName_,
	float color_[4])
	:pLabelName(pLabelName_)
{
memcpy(color,color_,sizeof(color) );
}

S_debug_utils_label_EXT( VkDebugUtilsLabelEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_utils_label_EXT ) );	}
S_debug_utils_label_EXT& operator=( VkDebugUtilsLabelEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_utils_label_EXT ) ); return *this;	}
operator VkDebugUtilsLabelEXT const&() const 
	{	return *reinterpret_cast<const VkDebugUtilsLabelEXT*>(this);	}
operator VkDebugUtilsLabelEXT &() 
	{	return *reinterpret_cast<VkDebugUtilsLabelEXT*>(this);	}
};
static_assert(
	sizeof(S_debug_utils_label_EXT) == sizeof(VkDebugUtilsLabelEXT),
	"struct and wrapper have different size!");

/*	VkDebugUtilsMessengerCallbackDataEXT
*/
struct		S_debug_utils_messenger_callback_data_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
	 void * pNext = nullptr;
public:
	VkDebugUtilsMessengerCallbackDataFlagsEXT flags;
	const char * pMessageIdName;
	int32_t messageIdNumber;
	const char * pMessage;
	uint32_t queueLabelCount;
	S_debug_utils_label_EXT * pQueueLabels;
	uint32_t cmdBufLabelCount;
	S_debug_utils_label_EXT * pCmdBufLabels;
	uint32_t objectCount;
	S_debug_utils_object_name_info_EXT * pObjects;

S_debug_utils_messenger_callback_data_EXT(){}

S_debug_utils_messenger_callback_data_EXT(
	VkDebugUtilsMessengerCallbackDataFlagsEXT flags_,
	const char * pMessageIdName_,
	int32_t messageIdNumber_,
	const char * pMessage_,
	uint32_t queueLabelCount_,
	S_debug_utils_label_EXT * pQueueLabels_,
	uint32_t cmdBufLabelCount_,
	S_debug_utils_label_EXT * pCmdBufLabels_,
	uint32_t objectCount_,
	S_debug_utils_object_name_info_EXT * pObjects_)
	:flags(flags_)
	,pMessageIdName(pMessageIdName_)
	,messageIdNumber(messageIdNumber_)
	,pMessage(pMessage_)
	,queueLabelCount(queueLabelCount_)
	,pQueueLabels(pQueueLabels_)
	,cmdBufLabelCount(cmdBufLabelCount_)
	,pCmdBufLabels(pCmdBufLabels_)
	,objectCount(objectCount_)
	,pObjects(pObjects_)
{
}

S_debug_utils_messenger_callback_data_EXT( VkDebugUtilsMessengerCallbackDataEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_debug_utils_messenger_callback_data_EXT ) );	}
S_debug_utils_messenger_callback_data_EXT& operator=( VkDebugUtilsMessengerCallbackDataEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_debug_utils_messenger_callback_data_EXT ) ); return *this;	}
operator VkDebugUtilsMessengerCallbackDataEXT const&() const 
	{	return *reinterpret_cast<const VkDebugUtilsMessengerCallbackDataEXT*>(this);	}
operator VkDebugUtilsMessengerCallbackDataEXT &() 
	{	return *reinterpret_cast<VkDebugUtilsMessengerCallbackDataEXT*>(this);	}
};
static_assert(
	sizeof(S_debug_utils_messenger_callback_data_EXT) == sizeof(VkDebugUtilsMessengerCallbackDataEXT),
	"struct and wrapper have different size!");

/*	VkMemoryHostPointerPropertiesEXT
*/
struct		S_memory_host_pointer_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	uint32_t memoryTypeBits;

S_memory_host_pointer_properties_EXT(){}

S_memory_host_pointer_properties_EXT(
	uint32_t memoryTypeBits_)
	:memoryTypeBits(memoryTypeBits_)
{
}

S_memory_host_pointer_properties_EXT( VkMemoryHostPointerPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_host_pointer_properties_EXT ) );	}
S_memory_host_pointer_properties_EXT& operator=( VkMemoryHostPointerPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_host_pointer_properties_EXT ) ); return *this;	}
operator VkMemoryHostPointerPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkMemoryHostPointerPropertiesEXT*>(this);	}
operator VkMemoryHostPointerPropertiesEXT &() 
	{	return *reinterpret_cast<VkMemoryHostPointerPropertiesEXT*>(this);	}
};
static_assert(
	sizeof(S_memory_host_pointer_properties_EXT) == sizeof(VkMemoryHostPointerPropertiesEXT),
	"struct and wrapper have different size!");

/*	VkAttachmentDescription2KHR
*/
struct		S_attachment_description2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR;
	 void * pNext = nullptr;
public:
	F_attachment_description flags;
	E_format format;
	F_sample_count samples;
	E_attachment_load_op loadOp;
	E_attachment_store_op storeOp;
	E_attachment_load_op stencilLoadOp;
	E_attachment_store_op stencilStoreOp;
	E_image_layout initialLayout;
	E_image_layout finalLayout;

S_attachment_description2_KHR(){}

S_attachment_description2_KHR(
	F_attachment_description flags_,
	E_format format_,
	F_sample_count samples_,
	E_attachment_load_op loadOp_,
	E_attachment_store_op storeOp_,
	E_attachment_load_op stencilLoadOp_,
	E_attachment_store_op stencilStoreOp_,
	E_image_layout initialLayout_,
	E_image_layout finalLayout_)
	:flags(flags_)
	,format(format_)
	,samples(samples_)
	,loadOp(loadOp_)
	,storeOp(storeOp_)
	,stencilLoadOp(stencilLoadOp_)
	,stencilStoreOp(stencilStoreOp_)
	,initialLayout(initialLayout_)
	,finalLayout(finalLayout_)
{
}

S_attachment_description2_KHR( VkAttachmentDescription2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_attachment_description2_KHR ) );	}
S_attachment_description2_KHR& operator=( VkAttachmentDescription2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_attachment_description2_KHR ) ); return *this;	}
operator VkAttachmentDescription2KHR const&() const 
	{	return *reinterpret_cast<const VkAttachmentDescription2KHR*>(this);	}
operator VkAttachmentDescription2KHR &() 
	{	return *reinterpret_cast<VkAttachmentDescription2KHR*>(this);	}
};
static_assert(
	sizeof(S_attachment_description2_KHR) == sizeof(VkAttachmentDescription2KHR),
	"struct and wrapper have different size!");

/*	VkAttachmentReference2KHR
*/
struct		S_attachment_reference2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR;
	 void * pNext = nullptr;
public:
	uint32_t attachment;
	E_image_layout layout;
	F_image_aspect aspectMask;

S_attachment_reference2_KHR(){}

S_attachment_reference2_KHR(
	uint32_t attachment_,
	E_image_layout layout_,
	F_image_aspect aspectMask_)
	:attachment(attachment_)
	,layout(layout_)
	,aspectMask(aspectMask_)
{
}

S_attachment_reference2_KHR( VkAttachmentReference2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_attachment_reference2_KHR ) );	}
S_attachment_reference2_KHR& operator=( VkAttachmentReference2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_attachment_reference2_KHR ) ); return *this;	}
operator VkAttachmentReference2KHR const&() const 
	{	return *reinterpret_cast<const VkAttachmentReference2KHR*>(this);	}
operator VkAttachmentReference2KHR &() 
	{	return *reinterpret_cast<VkAttachmentReference2KHR*>(this);	}
};
static_assert(
	sizeof(S_attachment_reference2_KHR) == sizeof(VkAttachmentReference2KHR),
	"struct and wrapper have different size!");

/*	VkSubpassDescription2KHR
*/
struct		S_subpass_description2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR;
	 void * pNext = nullptr;
public:
	F_subpass_description flags;
	E_pipeline_bind_point pipelineBindPoint;
	uint32_t viewMask;
	uint32_t inputAttachmentCount;
	const S_attachment_reference2_KHR * pInputAttachments;
	uint32_t colorAttachmentCount;
	const S_attachment_reference2_KHR * pColorAttachments;
	const S_attachment_reference2_KHR * pResolveAttachments;
	const S_attachment_reference2_KHR * pDepthStencilAttachment;
	uint32_t preserveAttachmentCount;
	const uint32_t * pPreserveAttachments;

S_subpass_description2_KHR(){}

S_subpass_description2_KHR(
	F_subpass_description flags_,
	E_pipeline_bind_point pipelineBindPoint_,
	uint32_t viewMask_,
	uint32_t inputAttachmentCount_,
	const S_attachment_reference2_KHR * pInputAttachments_,
	uint32_t colorAttachmentCount_,
	const S_attachment_reference2_KHR * pColorAttachments_,
	const S_attachment_reference2_KHR * pResolveAttachments_,
	const S_attachment_reference2_KHR * pDepthStencilAttachment_,
	uint32_t preserveAttachmentCount_,
	const uint32_t * pPreserveAttachments_)
	:flags(flags_)
	,pipelineBindPoint(pipelineBindPoint_)
	,viewMask(viewMask_)
	,inputAttachmentCount(inputAttachmentCount_)
	,pInputAttachments(pInputAttachments_)
	,colorAttachmentCount(colorAttachmentCount_)
	,pColorAttachments(pColorAttachments_)
	,pResolveAttachments(pResolveAttachments_)
	,pDepthStencilAttachment(pDepthStencilAttachment_)
	,preserveAttachmentCount(preserveAttachmentCount_)
	,pPreserveAttachments(pPreserveAttachments_)
{
}

S_subpass_description2_KHR( VkSubpassDescription2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_subpass_description2_KHR ) );	}
S_subpass_description2_KHR& operator=( VkSubpassDescription2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_subpass_description2_KHR ) ); return *this;	}
operator VkSubpassDescription2KHR const&() const 
	{	return *reinterpret_cast<const VkSubpassDescription2KHR*>(this);	}
operator VkSubpassDescription2KHR &() 
	{	return *reinterpret_cast<VkSubpassDescription2KHR*>(this);	}
};
static_assert(
	sizeof(S_subpass_description2_KHR) == sizeof(VkSubpassDescription2KHR),
	"struct and wrapper have different size!");

/*	VkSubpassDependency2KHR
*/
struct		S_subpass_dependency2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR;
	 void * pNext = nullptr;
public:
	uint32_t srcSubpass;
	uint32_t dstSubpass;
	F_pipeline_stage srcStageMask;
	F_pipeline_stage dstStageMask;
	F_access srcAccessMask;
	F_access dstAccessMask;
	F_dependency dependencyFlags;
	int32_t viewOffset;

S_subpass_dependency2_KHR(){}

S_subpass_dependency2_KHR(
	uint32_t srcSubpass_,
	uint32_t dstSubpass_,
	F_pipeline_stage srcStageMask_,
	F_pipeline_stage dstStageMask_,
	F_access srcAccessMask_,
	F_access dstAccessMask_,
	F_dependency dependencyFlags_,
	int32_t viewOffset_)
	:srcSubpass(srcSubpass_)
	,dstSubpass(dstSubpass_)
	,srcStageMask(srcStageMask_)
	,dstStageMask(dstStageMask_)
	,srcAccessMask(srcAccessMask_)
	,dstAccessMask(dstAccessMask_)
	,dependencyFlags(dependencyFlags_)
	,viewOffset(viewOffset_)
{
}

S_subpass_dependency2_KHR( VkSubpassDependency2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_subpass_dependency2_KHR ) );	}
S_subpass_dependency2_KHR& operator=( VkSubpassDependency2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_subpass_dependency2_KHR ) ); return *this;	}
operator VkSubpassDependency2KHR const&() const 
	{	return *reinterpret_cast<const VkSubpassDependency2KHR*>(this);	}
operator VkSubpassDependency2KHR &() 
	{	return *reinterpret_cast<VkSubpassDependency2KHR*>(this);	}
};
static_assert(
	sizeof(S_subpass_dependency2_KHR) == sizeof(VkSubpassDependency2KHR),
	"struct and wrapper have different size!");

/*	VkRenderPassCreateInfo2KHR
*/
struct		S_render_pass_create_info2_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR;
	 void * pNext = nullptr;
public:
	F_render_pass_create flags;
	uint32_t attachmentCount;
	const S_attachment_description2_KHR * pAttachments;
	uint32_t subpassCount;
	const S_subpass_description2_KHR * pSubpasses;
	uint32_t dependencyCount;
	const S_subpass_dependency2_KHR * pDependencies;
	uint32_t correlatedViewMaskCount;
	const uint32_t * pCorrelatedViewMasks;

S_render_pass_create_info2_KHR(){}

S_render_pass_create_info2_KHR(
	F_render_pass_create flags_,
	uint32_t attachmentCount_,
	const S_attachment_description2_KHR * pAttachments_,
	uint32_t subpassCount_,
	const S_subpass_description2_KHR * pSubpasses_,
	uint32_t dependencyCount_,
	const S_subpass_dependency2_KHR * pDependencies_,
	uint32_t correlatedViewMaskCount_,
	const uint32_t * pCorrelatedViewMasks_)
	:flags(flags_)
	,attachmentCount(attachmentCount_)
	,pAttachments(pAttachments_)
	,subpassCount(subpassCount_)
	,pSubpasses(pSubpasses_)
	,dependencyCount(dependencyCount_)
	,pDependencies(pDependencies_)
	,correlatedViewMaskCount(correlatedViewMaskCount_)
	,pCorrelatedViewMasks(pCorrelatedViewMasks_)
{
}

S_render_pass_create_info2_KHR( VkRenderPassCreateInfo2KHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_render_pass_create_info2_KHR ) );	}
S_render_pass_create_info2_KHR& operator=( VkRenderPassCreateInfo2KHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_render_pass_create_info2_KHR ) ); return *this;	}
operator VkRenderPassCreateInfo2KHR const&() const 
	{	return *reinterpret_cast<const VkRenderPassCreateInfo2KHR*>(this);	}
operator VkRenderPassCreateInfo2KHR &() 
	{	return *reinterpret_cast<VkRenderPassCreateInfo2KHR*>(this);	}
};
static_assert(
	sizeof(S_render_pass_create_info2_KHR) == sizeof(VkRenderPassCreateInfo2KHR),
	"struct and wrapper have different size!");

/*	VkSubpassBeginInfoKHR
*/
struct		S_subpass_begin_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR;
	 void * pNext = nullptr;
public:
	E_subpass_contents contents;

S_subpass_begin_info_KHR(){}

S_subpass_begin_info_KHR(
	E_subpass_contents contents_)
	:contents(contents_)
{
}

S_subpass_begin_info_KHR( VkSubpassBeginInfoKHR const & rhs )
	{	memcpy( this, &rhs, sizeof( S_subpass_begin_info_KHR ) );	}
S_subpass_begin_info_KHR& operator=( VkSubpassBeginInfoKHR const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_subpass_begin_info_KHR ) ); return *this;	}
operator VkSubpassBeginInfoKHR const&() const 
	{	return *reinterpret_cast<const VkSubpassBeginInfoKHR*>(this);	}
operator VkSubpassBeginInfoKHR &() 
	{	return *reinterpret_cast<VkSubpassBeginInfoKHR*>(this);	}
};
static_assert(
	sizeof(S_subpass_begin_info_KHR) == sizeof(VkSubpassBeginInfoKHR),
	"struct and wrapper have different size!");

/*	VkSubpassEndInfoKHR
*/
struct		S_subpass_end_info_KHR{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR;
	 void * pNext = nullptr;

S_subpass_end_info_KHR(){}
};
static_assert(
	sizeof(S_subpass_end_info_KHR) == sizeof(VkSubpassEndInfoKHR),
	"struct and wrapper have different size!");

/*	VkAndroidHardwareBufferFormatPropertiesANDROID
(returnedonly)
ex to: VkAndroidHardwareBufferPropertiesANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_android_hardware_buffer_format_properties_ANDROID{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID;
	void * pNext = nullptr;
public:
	E_format format;
	uint64_t externalFormat;
	F_format_feature formatFeatures;
	S_component_mapping samplerYcbcrConversionComponents;
	E_sampler_ycbcr_model_conversion suggestedYcbcrModel;
	E_sampler_ycbcr_range suggestedYcbcrRange;
	E_chroma_location suggestedXChromaOffset;
	E_chroma_location suggestedYChromaOffset;

S_android_hardware_buffer_format_properties_ANDROID(){}

S_android_hardware_buffer_format_properties_ANDROID(
	E_format format_,
	uint64_t externalFormat_,
	F_format_feature formatFeatures_,
	S_component_mapping samplerYcbcrConversionComponents_,
	E_sampler_ycbcr_model_conversion suggestedYcbcrModel_,
	E_sampler_ycbcr_range suggestedYcbcrRange_,
	E_chroma_location suggestedXChromaOffset_,
	E_chroma_location suggestedYChromaOffset_)
	:format(format_)
	,externalFormat(externalFormat_)
	,formatFeatures(formatFeatures_)
	,samplerYcbcrConversionComponents(samplerYcbcrConversionComponents_)
	,suggestedYcbcrModel(suggestedYcbcrModel_)
	,suggestedYcbcrRange(suggestedYcbcrRange_)
	,suggestedXChromaOffset(suggestedXChromaOffset_)
	,suggestedYChromaOffset(suggestedYChromaOffset_)
{
}

S_android_hardware_buffer_format_properties_ANDROID( VkAndroidHardwareBufferFormatPropertiesANDROID const & rhs )
	{	memcpy( this, &rhs, sizeof( S_android_hardware_buffer_format_properties_ANDROID ) );	}
S_android_hardware_buffer_format_properties_ANDROID& operator=( VkAndroidHardwareBufferFormatPropertiesANDROID const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_android_hardware_buffer_format_properties_ANDROID ) ); return *this;	}
operator VkAndroidHardwareBufferFormatPropertiesANDROID const&() const 
	{	return *reinterpret_cast<const VkAndroidHardwareBufferFormatPropertiesANDROID*>(this);	}
operator VkAndroidHardwareBufferFormatPropertiesANDROID &() 
	{	return *reinterpret_cast<VkAndroidHardwareBufferFormatPropertiesANDROID*>(this);	}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
friend S_android_hardware_buffer_properties_ANDROID;
#endif
};
static_assert(
	sizeof(S_android_hardware_buffer_format_properties_ANDROID) == sizeof(VkAndroidHardwareBufferFormatPropertiesANDROID),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkAndroidHardwareBufferPropertiesANDROID
(returnedonly)
ex:
	VkAndroidHardwareBufferFormatPropertiesANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_android_hardware_buffer_properties_ANDROID{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID;
	void * pNext = nullptr;
public:
	VkDeviceSize allocationSize;
	uint32_t memoryTypeBits;

S_android_hardware_buffer_properties_ANDROID(){}

S_android_hardware_buffer_properties_ANDROID(
	VkDeviceSize allocationSize_,
	uint32_t memoryTypeBits_)
	:allocationSize(allocationSize_)
	,memoryTypeBits(memoryTypeBits_)
{
}

S_android_hardware_buffer_properties_ANDROID( VkAndroidHardwareBufferPropertiesANDROID const & rhs )
	{	memcpy( this, &rhs, sizeof( S_android_hardware_buffer_properties_ANDROID ) );	}
S_android_hardware_buffer_properties_ANDROID& operator=( VkAndroidHardwareBufferPropertiesANDROID const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_android_hardware_buffer_properties_ANDROID ) ); return *this;	}
operator VkAndroidHardwareBufferPropertiesANDROID const&() const 
	{	return *reinterpret_cast<const VkAndroidHardwareBufferPropertiesANDROID*>(this);	}
operator VkAndroidHardwareBufferPropertiesANDROID &() 
	{	return *reinterpret_cast<VkAndroidHardwareBufferPropertiesANDROID*>(this);	}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_hardware_buffer_properties_ANDROID& n_android_hardware_buffer_format_properties_ANDROID(S_android_hardware_buffer_format_properties_ANDROID const& next_);
#endif
};
static_assert(
	sizeof(S_android_hardware_buffer_properties_ANDROID) == sizeof(VkAndroidHardwareBufferPropertiesANDROID),
	"struct and wrapper have different size!");

struct N_android_hardware_buffer_properties_ANDROID{
private:
	void* pNext = nullptr;
public:
void* get(){ return pNext; }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_android_hardware_buffer_properties_ANDROID& n_android_hardware_buffer_format_properties_ANDROID(S_android_hardware_buffer_format_properties_ANDROID const& next_);
#endif
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkMemoryGetAndroidHardwareBufferInfoANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct		S_memory_get_android_hardware_buffer_info_ANDROID{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
	 void * pNext = nullptr;
public:
	VkDeviceMemory memory;

S_memory_get_android_hardware_buffer_info_ANDROID(){}

S_memory_get_android_hardware_buffer_info_ANDROID(
	VkDeviceMemory memory_)
	:memory(memory_)
{
}

S_memory_get_android_hardware_buffer_info_ANDROID( VkMemoryGetAndroidHardwareBufferInfoANDROID const & rhs )
	{	memcpy( this, &rhs, sizeof( S_memory_get_android_hardware_buffer_info_ANDROID ) );	}
S_memory_get_android_hardware_buffer_info_ANDROID& operator=( VkMemoryGetAndroidHardwareBufferInfoANDROID const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_memory_get_android_hardware_buffer_info_ANDROID ) ); return *this;	}
operator VkMemoryGetAndroidHardwareBufferInfoANDROID const&() const 
	{	return *reinterpret_cast<const VkMemoryGetAndroidHardwareBufferInfoANDROID*>(this);	}
operator VkMemoryGetAndroidHardwareBufferInfoANDROID &() 
	{	return *reinterpret_cast<VkMemoryGetAndroidHardwareBufferInfoANDROID*>(this);	}
};
static_assert(
	sizeof(S_memory_get_android_hardware_buffer_info_ANDROID) == sizeof(VkMemoryGetAndroidHardwareBufferInfoANDROID),
	"struct and wrapper have different size!");
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkCheckpointDataNV
(returnedonly)
*/
struct		S_checkpoint_data_NV{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;
	void * pNext = nullptr;
public:
	F_pipeline_stage stage;
	void * pCheckpointMarker;

S_checkpoint_data_NV(){}

S_checkpoint_data_NV(
	F_pipeline_stage stage_,
	void * pCheckpointMarker_)
	:stage(stage_)
	,pCheckpointMarker(pCheckpointMarker_)
{
}

S_checkpoint_data_NV( VkCheckpointDataNV const & rhs )
	{	memcpy( this, &rhs, sizeof( S_checkpoint_data_NV ) );	}
S_checkpoint_data_NV& operator=( VkCheckpointDataNV const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_checkpoint_data_NV ) ); return *this;	}
operator VkCheckpointDataNV const&() const 
	{	return *reinterpret_cast<const VkCheckpointDataNV*>(this);	}
operator VkCheckpointDataNV &() 
	{	return *reinterpret_cast<VkCheckpointDataNV*>(this);	}
};
static_assert(
	sizeof(S_checkpoint_data_NV) == sizeof(VkCheckpointDataNV),
	"struct and wrapper have different size!");

/*	VkDrawMeshTasksIndirectCommandNV
*/
struct		S_draw_mesh_tasks_indirect_command_NV{
	uint32_t taskCount;
	uint32_t firstTask;

S_draw_mesh_tasks_indirect_command_NV(){}
};

/*	VkRaytracingPipelineCreateInfoNVX
*/
struct		S_raytracing_pipeline_create_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_RAYTRACING_PIPELINE_CREATE_INFO_NVX;
	 void * pNext = nullptr;
public:
	F_pipeline_create flags;
	uint32_t stageCount;
	const S_pipeline_shader_stage_create_info * pStages;
	const uint32_t * pGroupNumbers;
	uint32_t maxRecursionDepth;
	VkPipelineLayout layout;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;

S_raytracing_pipeline_create_info_NVX(){}

S_raytracing_pipeline_create_info_NVX(
	F_pipeline_create flags_,
	uint32_t stageCount_,
	const S_pipeline_shader_stage_create_info * pStages_,
	const uint32_t * pGroupNumbers_,
	uint32_t maxRecursionDepth_,
	VkPipelineLayout layout_,
	VkPipeline basePipelineHandle_,
	int32_t basePipelineIndex_)
	:flags(flags_)
	,stageCount(stageCount_)
	,pStages(pStages_)
	,pGroupNumbers(pGroupNumbers_)
	,maxRecursionDepth(maxRecursionDepth_)
	,layout(layout_)
	,basePipelineHandle(basePipelineHandle_)
	,basePipelineIndex(basePipelineIndex_)
{
}

S_raytracing_pipeline_create_info_NVX( VkRaytracingPipelineCreateInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_raytracing_pipeline_create_info_NVX ) );	}
S_raytracing_pipeline_create_info_NVX& operator=( VkRaytracingPipelineCreateInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_raytracing_pipeline_create_info_NVX ) ); return *this;	}
operator VkRaytracingPipelineCreateInfoNVX const&() const 
	{	return *reinterpret_cast<const VkRaytracingPipelineCreateInfoNVX*>(this);	}
operator VkRaytracingPipelineCreateInfoNVX &() 
	{	return *reinterpret_cast<VkRaytracingPipelineCreateInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_raytracing_pipeline_create_info_NVX) == sizeof(VkRaytracingPipelineCreateInfoNVX),
	"struct and wrapper have different size!");

/*	VkGeometryTrianglesNVX
*/
struct		S_geometry_triangles_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NVX;
	 void * pNext = nullptr;
public:
	VkBuffer vertexData;
	VkDeviceSize vertexOffset;
	uint32_t vertexCount;
	VkDeviceSize vertexStride;
	E_format vertexFormat;
	VkBuffer indexData;
	VkDeviceSize indexOffset;
	uint32_t indexCount;
	E_index_type indexType;
	VkBuffer transformData;
	VkDeviceSize transformOffset;

S_geometry_triangles_NVX(){}

S_geometry_triangles_NVX(
	VkBuffer vertexData_,
	VkDeviceSize vertexOffset_,
	uint32_t vertexCount_,
	VkDeviceSize vertexStride_,
	E_format vertexFormat_,
	VkBuffer indexData_,
	VkDeviceSize indexOffset_,
	uint32_t indexCount_,
	E_index_type indexType_,
	VkBuffer transformData_,
	VkDeviceSize transformOffset_)
	:vertexData(vertexData_)
	,vertexOffset(vertexOffset_)
	,vertexCount(vertexCount_)
	,vertexStride(vertexStride_)
	,vertexFormat(vertexFormat_)
	,indexData(indexData_)
	,indexOffset(indexOffset_)
	,indexCount(indexCount_)
	,indexType(indexType_)
	,transformData(transformData_)
	,transformOffset(transformOffset_)
{
}

S_geometry_triangles_NVX( VkGeometryTrianglesNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_geometry_triangles_NVX ) );	}
S_geometry_triangles_NVX& operator=( VkGeometryTrianglesNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_geometry_triangles_NVX ) ); return *this;	}
operator VkGeometryTrianglesNVX const&() const 
	{	return *reinterpret_cast<const VkGeometryTrianglesNVX*>(this);	}
operator VkGeometryTrianglesNVX &() 
	{	return *reinterpret_cast<VkGeometryTrianglesNVX*>(this);	}
};
static_assert(
	sizeof(S_geometry_triangles_NVX) == sizeof(VkGeometryTrianglesNVX),
	"struct and wrapper have different size!");

/*	VkGeometryAABBNVX
*/
struct		S_geometry_aabb_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_GEOMETRY_AABB_NVX;
	 void * pNext = nullptr;
public:
	VkBuffer aabbData;
	uint32_t numAABBs;
	uint32_t stride;
	VkDeviceSize offset;

S_geometry_aabb_NVX(){}

S_geometry_aabb_NVX(
	VkBuffer aabbData_,
	uint32_t numAABBs_,
	uint32_t stride_,
	VkDeviceSize offset_)
	:aabbData(aabbData_)
	,numAABBs(numAABBs_)
	,stride(stride_)
	,offset(offset_)
{
}

S_geometry_aabb_NVX( VkGeometryAABBNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_geometry_aabb_NVX ) );	}
S_geometry_aabb_NVX& operator=( VkGeometryAABBNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_geometry_aabb_NVX ) ); return *this;	}
operator VkGeometryAABBNVX const&() const 
	{	return *reinterpret_cast<const VkGeometryAABBNVX*>(this);	}
operator VkGeometryAABBNVX &() 
	{	return *reinterpret_cast<VkGeometryAABBNVX*>(this);	}
};
static_assert(
	sizeof(S_geometry_aabb_NVX) == sizeof(VkGeometryAABBNVX),
	"struct and wrapper have different size!");

/*	VkGeometryDataNVX
*/
struct		S_geometry_data_NVX{
	S_geometry_triangles_NVX triangles;
	S_geometry_aabb_NVX aabbs;

S_geometry_data_NVX(){}
};

/*	VkGeometryNVX
*/
struct		S_geometry_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_GEOMETRY_NVX;
	 void * pNext = nullptr;
public:
	E_geometry_type_NVX geometryType;
	S_geometry_data_NVX geometry;
	F_geometry_NVX flags;

S_geometry_NVX(){}

S_geometry_NVX(
	E_geometry_type_NVX geometryType_,
	S_geometry_data_NVX geometry_,
	F_geometry_NVX flags_)
	:geometryType(geometryType_)
	,geometry(geometry_)
	,flags(flags_)
{
}

S_geometry_NVX( VkGeometryNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_geometry_NVX ) );	}
S_geometry_NVX& operator=( VkGeometryNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_geometry_NVX ) ); return *this;	}
operator VkGeometryNVX const&() const 
	{	return *reinterpret_cast<const VkGeometryNVX*>(this);	}
operator VkGeometryNVX &() 
	{	return *reinterpret_cast<VkGeometryNVX*>(this);	}
};
static_assert(
	sizeof(S_geometry_NVX) == sizeof(VkGeometryNVX),
	"struct and wrapper have different size!");

/*	VkAccelerationStructureCreateInfoNVX
*/
struct		S_acceleration_structure_create_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NVX;
	 void * pNext = nullptr;
public:
	E_acceleration_structure_type_NVX type;
	F_build_acceleration_structure_NVX flags;
	VkDeviceSize compactedSize;
	uint32_t instanceCount;
	uint32_t geometryCount;
	const S_geometry_NVX * pGeometries;

S_acceleration_structure_create_info_NVX(){}

S_acceleration_structure_create_info_NVX(
	E_acceleration_structure_type_NVX type_,
	F_build_acceleration_structure_NVX flags_,
	VkDeviceSize compactedSize_,
	uint32_t instanceCount_,
	uint32_t geometryCount_,
	const S_geometry_NVX * pGeometries_)
	:type(type_)
	,flags(flags_)
	,compactedSize(compactedSize_)
	,instanceCount(instanceCount_)
	,geometryCount(geometryCount_)
	,pGeometries(pGeometries_)
{
}

S_acceleration_structure_create_info_NVX( VkAccelerationStructureCreateInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_acceleration_structure_create_info_NVX ) );	}
S_acceleration_structure_create_info_NVX& operator=( VkAccelerationStructureCreateInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_acceleration_structure_create_info_NVX ) ); return *this;	}
operator VkAccelerationStructureCreateInfoNVX const&() const 
	{	return *reinterpret_cast<const VkAccelerationStructureCreateInfoNVX*>(this);	}
operator VkAccelerationStructureCreateInfoNVX &() 
	{	return *reinterpret_cast<VkAccelerationStructureCreateInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_acceleration_structure_create_info_NVX) == sizeof(VkAccelerationStructureCreateInfoNVX),
	"struct and wrapper have different size!");

/*	VkBindAccelerationStructureMemoryInfoNVX
*/
struct		S_bind_acceleration_structure_memory_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NVX;
	 void * pNext = nullptr;
public:
	VkAccelerationStructureNVX accelerationStructure;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	uint32_t deviceIndexCount;
	const uint32_t * pDeviceIndices;

S_bind_acceleration_structure_memory_info_NVX(){}

S_bind_acceleration_structure_memory_info_NVX(
	VkAccelerationStructureNVX accelerationStructure_,
	VkDeviceMemory memory_,
	VkDeviceSize memoryOffset_,
	uint32_t deviceIndexCount_,
	const uint32_t * pDeviceIndices_)
	:accelerationStructure(accelerationStructure_)
	,memory(memory_)
	,memoryOffset(memoryOffset_)
	,deviceIndexCount(deviceIndexCount_)
	,pDeviceIndices(pDeviceIndices_)
{
}

S_bind_acceleration_structure_memory_info_NVX( VkBindAccelerationStructureMemoryInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_bind_acceleration_structure_memory_info_NVX ) );	}
S_bind_acceleration_structure_memory_info_NVX& operator=( VkBindAccelerationStructureMemoryInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_bind_acceleration_structure_memory_info_NVX ) ); return *this;	}
operator VkBindAccelerationStructureMemoryInfoNVX const&() const 
	{	return *reinterpret_cast<const VkBindAccelerationStructureMemoryInfoNVX*>(this);	}
operator VkBindAccelerationStructureMemoryInfoNVX &() 
	{	return *reinterpret_cast<VkBindAccelerationStructureMemoryInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_bind_acceleration_structure_memory_info_NVX) == sizeof(VkBindAccelerationStructureMemoryInfoNVX),
	"struct and wrapper have different size!");

/*	VkAccelerationStructureMemoryRequirementsInfoNVX
*/
struct		S_acceleration_structure_memory_requirements_info_NVX{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NVX;
	 void * pNext = nullptr;
public:
	VkAccelerationStructureNVX accelerationStructure;

S_acceleration_structure_memory_requirements_info_NVX(){}

S_acceleration_structure_memory_requirements_info_NVX(
	VkAccelerationStructureNVX accelerationStructure_)
	:accelerationStructure(accelerationStructure_)
{
}

S_acceleration_structure_memory_requirements_info_NVX( VkAccelerationStructureMemoryRequirementsInfoNVX const & rhs )
	{	memcpy( this, &rhs, sizeof( S_acceleration_structure_memory_requirements_info_NVX ) );	}
S_acceleration_structure_memory_requirements_info_NVX& operator=( VkAccelerationStructureMemoryRequirementsInfoNVX const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_acceleration_structure_memory_requirements_info_NVX ) ); return *this;	}
operator VkAccelerationStructureMemoryRequirementsInfoNVX const&() const 
	{	return *reinterpret_cast<const VkAccelerationStructureMemoryRequirementsInfoNVX*>(this);	}
operator VkAccelerationStructureMemoryRequirementsInfoNVX &() 
	{	return *reinterpret_cast<VkAccelerationStructureMemoryRequirementsInfoNVX*>(this);	}
};
static_assert(
	sizeof(S_acceleration_structure_memory_requirements_info_NVX) == sizeof(VkAccelerationStructureMemoryRequirementsInfoNVX),
	"struct and wrapper have different size!");

/*	VkImageDrmFormatModifierPropertiesEXT
(returnedonly)
*/
#ifdef LAKA_UNKNOW
struct		S_image_drm_format_modifier_properties_EXT{
private:
	VkStructureType sType = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;
	void * pNext = nullptr;
public:
	uint64_t drmFormatModifier;

S_image_drm_format_modifier_properties_EXT(){}

S_image_drm_format_modifier_properties_EXT(
	uint64_t drmFormatModifier_)
	:drmFormatModifier(drmFormatModifier_)
{
}

S_image_drm_format_modifier_properties_EXT( VkImageDrmFormatModifierPropertiesEXT const & rhs )
	{	memcpy( this, &rhs, sizeof( S_image_drm_format_modifier_properties_EXT ) );	}
S_image_drm_format_modifier_properties_EXT& operator=( VkImageDrmFormatModifierPropertiesEXT const & rhs ) 
	{	memcpy( this, &rhs, sizeof( S_image_drm_format_modifier_properties_EXT ) ); return *this;	}
operator VkImageDrmFormatModifierPropertiesEXT const&() const 
	{	return *reinterpret_cast<const VkImageDrmFormatModifierPropertiesEXT*>(this);	}
operator VkImageDrmFormatModifierPropertiesEXT &() 
	{	return *reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT*>(this);	}
};
static_assert(
	sizeof(S_image_drm_format_modifier_properties_EXT) == sizeof(VkImageDrmFormatModifierPropertiesEXT),
	"struct and wrapper have different size!");
#endif //LAKA_UNKNOW


}}
