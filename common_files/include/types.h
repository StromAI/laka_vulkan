#pragma once
#include "vulkan/vulkan.h"
#include "common.h"

#include <type_traits>
#include <array>

namespace laka { namespace vk {
/*	VkImageLayout
*/
union E_image_layout{
	enum{
		e_undefined = VK_IMAGE_LAYOUT_UNDEFINED,
		e_general = VK_IMAGE_LAYOUT_GENERAL,
		e_color_attachment_optimal = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
		e_depth_stencil_attachment_optimal = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL,
		e_depth_stencil_read_only_optimal = VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL,
		e_shader_read_only_optimal = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
		e_transfer_src_optimal = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
		e_transfer_dst_optimal = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
		e_preinitialized = VK_IMAGE_LAYOUT_PREINITIALIZED,
	}flag;
	VkImageLayout vk_flag;

	E_image_layout(){}
	E_image_layout(const VkImageLayout flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_image_layout(const decltype(flag) flag_):flag(flag_){}

	operator VkImageLayout&(){return vk_flag;}
	operator VkImageLayout*()const{return const_cast<VkImageLayout*const>(&vk_flag);}
	operator VkImageLayout*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkAttachmentLoadOp
*/
union E_attachment_load_op{
	enum{
		e_load = VK_ATTACHMENT_LOAD_OP_LOAD,
		e_clear = VK_ATTACHMENT_LOAD_OP_CLEAR,
		e_dont_care = VK_ATTACHMENT_LOAD_OP_DONT_CARE,
	}flag;
	VkAttachmentLoadOp vk_flag;

	E_attachment_load_op(){}
	E_attachment_load_op(const VkAttachmentLoadOp flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_attachment_load_op(const decltype(flag) flag_):flag(flag_){}

	operator VkAttachmentLoadOp&(){return vk_flag;}
	operator VkAttachmentLoadOp*()const{return const_cast<VkAttachmentLoadOp*const>(&vk_flag);}
	operator VkAttachmentLoadOp*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkAttachmentStoreOp
*/
union E_attachment_store_op{
	enum{
		e_store = VK_ATTACHMENT_STORE_OP_STORE,
		e_dont_care = VK_ATTACHMENT_STORE_OP_DONT_CARE,
	}flag;
	VkAttachmentStoreOp vk_flag;

	E_attachment_store_op(){}
	E_attachment_store_op(const VkAttachmentStoreOp flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_attachment_store_op(const decltype(flag) flag_):flag(flag_){}

	operator VkAttachmentStoreOp&(){return vk_flag;}
	operator VkAttachmentStoreOp*()const{return const_cast<VkAttachmentStoreOp*const>(&vk_flag);}
	operator VkAttachmentStoreOp*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkImageType
*/
union E_image_type{
	enum{
		e_1d = VK_IMAGE_TYPE_1D,
		e_2d = VK_IMAGE_TYPE_2D,
		e_3d = VK_IMAGE_TYPE_3D,
	}flag;
	VkImageType vk_flag;

	E_image_type(){}
	E_image_type(const VkImageType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_image_type(const decltype(flag) flag_):flag(flag_){}

	operator VkImageType&(){return vk_flag;}
	operator VkImageType*()const{return const_cast<VkImageType*const>(&vk_flag);}
	operator VkImageType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkImageTiling
*/
union E_image_tiling{
	enum{
		e_optimal = VK_IMAGE_TILING_OPTIMAL,
		e_linear = VK_IMAGE_TILING_LINEAR,
	}flag;
	VkImageTiling vk_flag;

	E_image_tiling(){}
	E_image_tiling(const VkImageTiling flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_image_tiling(const decltype(flag) flag_):flag(flag_){}

	operator VkImageTiling&(){return vk_flag;}
	operator VkImageTiling*()const{return const_cast<VkImageTiling*const>(&vk_flag);}
	operator VkImageTiling*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkImageViewType
*/
union E_image_view_type{
	enum{
		e_1d = VK_IMAGE_VIEW_TYPE_1D,
		e_2d = VK_IMAGE_VIEW_TYPE_2D,
		e_3d = VK_IMAGE_VIEW_TYPE_3D,
		e_cube = VK_IMAGE_VIEW_TYPE_CUBE,
		e_1d_array = VK_IMAGE_VIEW_TYPE_1D_ARRAY,
		e_2d_array = VK_IMAGE_VIEW_TYPE_2D_ARRAY,
		e_cube_array = VK_IMAGE_VIEW_TYPE_CUBE_ARRAY,
	}flag;
	VkImageViewType vk_flag;

	E_image_view_type(){}
	E_image_view_type(const VkImageViewType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_image_view_type(const decltype(flag) flag_):flag(flag_){}

	operator VkImageViewType&(){return vk_flag;}
	operator VkImageViewType*()const{return const_cast<VkImageViewType*const>(&vk_flag);}
	operator VkImageViewType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkCommandBufferLevel
*/
union E_command_buffer_level{
	enum{
		e_primary = VK_COMMAND_BUFFER_LEVEL_PRIMARY,
		e_secondary = VK_COMMAND_BUFFER_LEVEL_SECONDARY,
	}flag;
	VkCommandBufferLevel vk_flag;

	E_command_buffer_level(){}
	E_command_buffer_level(const VkCommandBufferLevel flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_command_buffer_level(const decltype(flag) flag_):flag(flag_){}

	operator VkCommandBufferLevel&(){return vk_flag;}
	operator VkCommandBufferLevel*()const{return const_cast<VkCommandBufferLevel*const>(&vk_flag);}
	operator VkCommandBufferLevel*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkComponentSwizzle
*/
union E_component_swizzle{
	enum{
		e_identity = VK_COMPONENT_SWIZZLE_IDENTITY,
		e_zero = VK_COMPONENT_SWIZZLE_ZERO,
		e_one = VK_COMPONENT_SWIZZLE_ONE,
		e_r = VK_COMPONENT_SWIZZLE_R,
		e_g = VK_COMPONENT_SWIZZLE_G,
		e_b = VK_COMPONENT_SWIZZLE_B,
		e_a = VK_COMPONENT_SWIZZLE_A,
	}flag;
	VkComponentSwizzle vk_flag;

	E_component_swizzle(){}
	E_component_swizzle(const VkComponentSwizzle flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_component_swizzle(const decltype(flag) flag_):flag(flag_){}

	operator VkComponentSwizzle&(){return vk_flag;}
	operator VkComponentSwizzle*()const{return const_cast<VkComponentSwizzle*const>(&vk_flag);}
	operator VkComponentSwizzle*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDescriptorType
*/
union E_descriptor_type{
	enum{
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
	}flag;
	VkDescriptorType vk_flag;

	E_descriptor_type(){}
	E_descriptor_type(const VkDescriptorType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_descriptor_type(const decltype(flag) flag_):flag(flag_){}

	operator VkDescriptorType&(){return vk_flag;}
	operator VkDescriptorType*()const{return const_cast<VkDescriptorType*const>(&vk_flag);}
	operator VkDescriptorType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkQueryType
*/
union E_query_type{
	enum{
		e_occlusion = VK_QUERY_TYPE_OCCLUSION,
		e_pipeline_statistics = VK_QUERY_TYPE_PIPELINE_STATISTICS,
		e_timestamp = VK_QUERY_TYPE_TIMESTAMP,
	}flag;
	VkQueryType vk_flag;

	E_query_type(){}
	E_query_type(const VkQueryType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_query_type(const decltype(flag) flag_):flag(flag_){}

	operator VkQueryType&(){return vk_flag;}
	operator VkQueryType*()const{return const_cast<VkQueryType*const>(&vk_flag);}
	operator VkQueryType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkBorderColor
*/
union E_border_color{
	enum{
		e_float_transparent_black = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,
		e_int_transparent_black = VK_BORDER_COLOR_INT_TRANSPARENT_BLACK,
		e_float_opaque_black = VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK,
		e_int_opaque_black = VK_BORDER_COLOR_INT_OPAQUE_BLACK,
		e_float_opaque_white = VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE,
		e_int_opaque_white = VK_BORDER_COLOR_INT_OPAQUE_WHITE,
	}flag;
	VkBorderColor vk_flag;

	E_border_color(){}
	E_border_color(const VkBorderColor flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_border_color(const decltype(flag) flag_):flag(flag_){}

	operator VkBorderColor&(){return vk_flag;}
	operator VkBorderColor*()const{return const_cast<VkBorderColor*const>(&vk_flag);}
	operator VkBorderColor*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkPipelineBindPoint
*/
union E_pipeline_bind_point{
	enum{
		e_graphics = VK_PIPELINE_BIND_POINT_GRAPHICS,
		e_compute = VK_PIPELINE_BIND_POINT_COMPUTE,
	}flag;
	VkPipelineBindPoint vk_flag;

	E_pipeline_bind_point(){}
	E_pipeline_bind_point(const VkPipelineBindPoint flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_pipeline_bind_point(const decltype(flag) flag_):flag(flag_){}

	operator VkPipelineBindPoint&(){return vk_flag;}
	operator VkPipelineBindPoint*()const{return const_cast<VkPipelineBindPoint*const>(&vk_flag);}
	operator VkPipelineBindPoint*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkPipelineCacheHeaderVersion
*/
union E_pipeline_cache_header_version{
	enum{
		e_one = VK_PIPELINE_CACHE_HEADER_VERSION_ONE,
	}flag;
	VkPipelineCacheHeaderVersion vk_flag;

	E_pipeline_cache_header_version(){}
	E_pipeline_cache_header_version(const VkPipelineCacheHeaderVersion flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_pipeline_cache_header_version(const decltype(flag) flag_):flag(flag_){}

	operator VkPipelineCacheHeaderVersion&(){return vk_flag;}
	operator VkPipelineCacheHeaderVersion*()const{return const_cast<VkPipelineCacheHeaderVersion*const>(&vk_flag);}
	operator VkPipelineCacheHeaderVersion*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkPrimitiveTopology
*/
union E_primitive_topology{
	enum{
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
	}flag;
	VkPrimitiveTopology vk_flag;

	E_primitive_topology(){}
	E_primitive_topology(const VkPrimitiveTopology flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_primitive_topology(const decltype(flag) flag_):flag(flag_){}

	operator VkPrimitiveTopology&(){return vk_flag;}
	operator VkPrimitiveTopology*()const{return const_cast<VkPrimitiveTopology*const>(&vk_flag);}
	operator VkPrimitiveTopology*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSharingMode
*/
union E_sharing_mode{
	enum{
		e_exclusive = VK_SHARING_MODE_EXCLUSIVE,
		e_concurrent = VK_SHARING_MODE_CONCURRENT,
	}flag;
	VkSharingMode vk_flag;

	E_sharing_mode(){}
	E_sharing_mode(const VkSharingMode flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_sharing_mode(const decltype(flag) flag_):flag(flag_){}

	operator VkSharingMode&(){return vk_flag;}
	operator VkSharingMode*()const{return const_cast<VkSharingMode*const>(&vk_flag);}
	operator VkSharingMode*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkIndexType
*/
union E_index_type{
	enum{
		e_uint16 = VK_INDEX_TYPE_UINT16,
		e_uint32 = VK_INDEX_TYPE_UINT32,
	}flag;
	VkIndexType vk_flag;

	E_index_type(){}
	E_index_type(const VkIndexType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_index_type(const decltype(flag) flag_):flag(flag_){}

	operator VkIndexType&(){return vk_flag;}
	operator VkIndexType*()const{return const_cast<VkIndexType*const>(&vk_flag);}
	operator VkIndexType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkFilter
*/
union E_filter{
	enum{
		e_nearest = VK_FILTER_NEAREST,
		e_linear = VK_FILTER_LINEAR,
	}flag;
	VkFilter vk_flag;

	E_filter(){}
	E_filter(const VkFilter flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_filter(const decltype(flag) flag_):flag(flag_){}

	operator VkFilter&(){return vk_flag;}
	operator VkFilter*()const{return const_cast<VkFilter*const>(&vk_flag);}
	operator VkFilter*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSamplerMipmapMode
*/
union E_sampler_mipmap_mode{
	enum{
		e_nearest = VK_SAMPLER_MIPMAP_MODE_NEAREST,
		e_linear = VK_SAMPLER_MIPMAP_MODE_LINEAR,
	}flag;
	VkSamplerMipmapMode vk_flag;

	E_sampler_mipmap_mode(){}
	E_sampler_mipmap_mode(const VkSamplerMipmapMode flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_sampler_mipmap_mode(const decltype(flag) flag_):flag(flag_){}

	operator VkSamplerMipmapMode&(){return vk_flag;}
	operator VkSamplerMipmapMode*()const{return const_cast<VkSamplerMipmapMode*const>(&vk_flag);}
	operator VkSamplerMipmapMode*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSamplerAddressMode
*/
union E_sampler_address_mode{
	enum{
		e_repeat = VK_SAMPLER_ADDRESS_MODE_REPEAT,
		e_mirrored_repeat = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT,
		e_clamp_to_edge = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,
		e_clamp_to_border = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER,
	}flag;
	VkSamplerAddressMode vk_flag;

	E_sampler_address_mode(){}
	E_sampler_address_mode(const VkSamplerAddressMode flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_sampler_address_mode(const decltype(flag) flag_):flag(flag_){}

	operator VkSamplerAddressMode&(){return vk_flag;}
	operator VkSamplerAddressMode*()const{return const_cast<VkSamplerAddressMode*const>(&vk_flag);}
	operator VkSamplerAddressMode*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkCompareOp
*/
union E_compare_op{
	enum{
		e_never = VK_COMPARE_OP_NEVER,
		e_less = VK_COMPARE_OP_LESS,
		e_equal = VK_COMPARE_OP_EQUAL,
		e_less_or_equal = VK_COMPARE_OP_LESS_OR_EQUAL,
		e_greater = VK_COMPARE_OP_GREATER,
		e_not_equal = VK_COMPARE_OP_NOT_EQUAL,
		e_greater_or_equal = VK_COMPARE_OP_GREATER_OR_EQUAL,
		e_always = VK_COMPARE_OP_ALWAYS,
	}flag;
	VkCompareOp vk_flag;

	E_compare_op(){}
	E_compare_op(const VkCompareOp flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_compare_op(const decltype(flag) flag_):flag(flag_){}

	operator VkCompareOp&(){return vk_flag;}
	operator VkCompareOp*()const{return const_cast<VkCompareOp*const>(&vk_flag);}
	operator VkCompareOp*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkPolygonMode
*/
union E_polygon_mode{
	enum{
		e_fill = VK_POLYGON_MODE_FILL,
		e_line = VK_POLYGON_MODE_LINE,
		e_point = VK_POLYGON_MODE_POINT,
	}flag;
	VkPolygonMode vk_flag;

	E_polygon_mode(){}
	E_polygon_mode(const VkPolygonMode flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_polygon_mode(const decltype(flag) flag_):flag(flag_){}

	operator VkPolygonMode&(){return vk_flag;}
	operator VkPolygonMode*()const{return const_cast<VkPolygonMode*const>(&vk_flag);}
	operator VkPolygonMode*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkFrontFace
*/
union E_front_face{
	enum{
		e_counter_clockwise = VK_FRONT_FACE_COUNTER_CLOCKWISE,
		e_clockwise = VK_FRONT_FACE_CLOCKWISE,
	}flag;
	VkFrontFace vk_flag;

	E_front_face(){}
	E_front_face(const VkFrontFace flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_front_face(const decltype(flag) flag_):flag(flag_){}

	operator VkFrontFace&(){return vk_flag;}
	operator VkFrontFace*()const{return const_cast<VkFrontFace*const>(&vk_flag);}
	operator VkFrontFace*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkBlendFactor
*/
union E_blend_factor{
	enum{
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
	}flag;
	VkBlendFactor vk_flag;

	E_blend_factor(){}
	E_blend_factor(const VkBlendFactor flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_blend_factor(const decltype(flag) flag_):flag(flag_){}

	operator VkBlendFactor&(){return vk_flag;}
	operator VkBlendFactor*()const{return const_cast<VkBlendFactor*const>(&vk_flag);}
	operator VkBlendFactor*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkBlendOp
*/
union E_blend_op{
	enum{
		e_add = VK_BLEND_OP_ADD,
		e_subtract = VK_BLEND_OP_SUBTRACT,
		e_reverse_subtract = VK_BLEND_OP_REVERSE_SUBTRACT,
		e_min = VK_BLEND_OP_MIN,
		e_max = VK_BLEND_OP_MAX,
	}flag;
	VkBlendOp vk_flag;

	E_blend_op(){}
	E_blend_op(const VkBlendOp flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_blend_op(const decltype(flag) flag_):flag(flag_){}

	operator VkBlendOp&(){return vk_flag;}
	operator VkBlendOp*()const{return const_cast<VkBlendOp*const>(&vk_flag);}
	operator VkBlendOp*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkStencilOp
*/
union E_stencil_op{
	enum{
		e_keep = VK_STENCIL_OP_KEEP,
		e_zero = VK_STENCIL_OP_ZERO,
		e_replace = VK_STENCIL_OP_REPLACE,
		e_increment_and_clamp = VK_STENCIL_OP_INCREMENT_AND_CLAMP,
		e_decrement_and_clamp = VK_STENCIL_OP_DECREMENT_AND_CLAMP,
		e_invert = VK_STENCIL_OP_INVERT,
		e_increment_and_wrap = VK_STENCIL_OP_INCREMENT_AND_WRAP,
		e_decrement_and_wrap = VK_STENCIL_OP_DECREMENT_AND_WRAP,
	}flag;
	VkStencilOp vk_flag;

	E_stencil_op(){}
	E_stencil_op(const VkStencilOp flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_stencil_op(const decltype(flag) flag_):flag(flag_){}

	operator VkStencilOp&(){return vk_flag;}
	operator VkStencilOp*()const{return const_cast<VkStencilOp*const>(&vk_flag);}
	operator VkStencilOp*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkLogicOp
*/
union E_logic_op{
	enum{
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
	}flag;
	VkLogicOp vk_flag;

	E_logic_op(){}
	E_logic_op(const VkLogicOp flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_logic_op(const decltype(flag) flag_):flag(flag_){}

	operator VkLogicOp&(){return vk_flag;}
	operator VkLogicOp*()const{return const_cast<VkLogicOp*const>(&vk_flag);}
	operator VkLogicOp*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkInternalAllocationType
*/
union E_internal_allocation_type{
	enum{
		e_executable = VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE,
	}flag;
	VkInternalAllocationType vk_flag;

	E_internal_allocation_type(){}
	E_internal_allocation_type(const VkInternalAllocationType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_internal_allocation_type(const decltype(flag) flag_):flag(flag_){}

	operator VkInternalAllocationType&(){return vk_flag;}
	operator VkInternalAllocationType*()const{return const_cast<VkInternalAllocationType*const>(&vk_flag);}
	operator VkInternalAllocationType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSystemAllocationScope
*/
union E_system_allocation_scope{
	enum{
		e_command = VK_SYSTEM_ALLOCATION_SCOPE_COMMAND,
		e_object = VK_SYSTEM_ALLOCATION_SCOPE_OBJECT,
		e_cache = VK_SYSTEM_ALLOCATION_SCOPE_CACHE,
		e_device = VK_SYSTEM_ALLOCATION_SCOPE_DEVICE,
		e_instance = VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE,
	}flag;
	VkSystemAllocationScope vk_flag;

	E_system_allocation_scope(){}
	E_system_allocation_scope(const VkSystemAllocationScope flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_system_allocation_scope(const decltype(flag) flag_):flag(flag_){}

	operator VkSystemAllocationScope&(){return vk_flag;}
	operator VkSystemAllocationScope*()const{return const_cast<VkSystemAllocationScope*const>(&vk_flag);}
	operator VkSystemAllocationScope*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkPhysicalDeviceType
*/
union E_physical_device_type{
	enum{
		e_other = VK_PHYSICAL_DEVICE_TYPE_OTHER,
		e_integrated_gpu = VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU,
		e_discrete_gpu = VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU,
		e_virtual_gpu = VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU,
		e_cpu = VK_PHYSICAL_DEVICE_TYPE_CPU,
	}flag;
	VkPhysicalDeviceType vk_flag;

	E_physical_device_type(){}
	E_physical_device_type(const VkPhysicalDeviceType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_physical_device_type(const decltype(flag) flag_):flag(flag_){}

	operator VkPhysicalDeviceType&(){return vk_flag;}
	operator VkPhysicalDeviceType*()const{return const_cast<VkPhysicalDeviceType*const>(&vk_flag);}
	operator VkPhysicalDeviceType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkVertexInputRate
*/
union E_vertex_input_rate{
	enum{
		e_vertex = VK_VERTEX_INPUT_RATE_VERTEX,
		e_instance = VK_VERTEX_INPUT_RATE_INSTANCE,
	}flag;
	VkVertexInputRate vk_flag;

	E_vertex_input_rate(){}
	E_vertex_input_rate(const VkVertexInputRate flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_vertex_input_rate(const decltype(flag) flag_):flag(flag_){}

	operator VkVertexInputRate&(){return vk_flag;}
	operator VkVertexInputRate*()const{return const_cast<VkVertexInputRate*const>(&vk_flag);}
	operator VkVertexInputRate*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkFormat
Vulkan format definitions*/
union E_format{
	enum{
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
	}flag;
	VkFormat vk_flag;

	E_format(){}
	E_format(const VkFormat flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_format(const decltype(flag) flag_):flag(flag_){}

	operator VkFormat&(){return vk_flag;}
	operator VkFormat*()const{return const_cast<VkFormat*const>(&vk_flag);}
	operator VkFormat*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkStructureType
Structure type enumerant*/
union E_structure_type{
	enum{
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
	}flag;
	VkStructureType vk_flag;

	E_structure_type(){}
	E_structure_type(const VkStructureType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_structure_type(const decltype(flag) flag_):flag(flag_){}

	operator VkStructureType&(){return vk_flag;}
	operator VkStructureType*()const{return const_cast<VkStructureType*const>(&vk_flag);}
	operator VkStructureType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSubpassContents
*/
union E_subpass_contents{
	enum{
		e_inline = VK_SUBPASS_CONTENTS_INLINE,
		e_secondary_command_buffers = VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS,
	}flag;
	VkSubpassContents vk_flag;

	E_subpass_contents(){}
	E_subpass_contents(const VkSubpassContents flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_subpass_contents(const decltype(flag) flag_):flag(flag_){}

	operator VkSubpassContents&(){return vk_flag;}
	operator VkSubpassContents*()const{return const_cast<VkSubpassContents*const>(&vk_flag);}
	operator VkSubpassContents*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkResult
API result codes*/
union E_result{
	enum{
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
	}flag;
	VkResult vk_flag;

	E_result(){}
	E_result(const VkResult flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_result(const decltype(flag) flag_):flag(flag_){}

	operator VkResult&(){return vk_flag;}
	operator VkResult*()const{return const_cast<VkResult*const>(&vk_flag);}
	operator VkResult*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDynamicState
*/
union E_dynamic_state{
	enum{
		e_viewport = VK_DYNAMIC_STATE_VIEWPORT,
		e_scissor = VK_DYNAMIC_STATE_SCISSOR,
		e_line_width = VK_DYNAMIC_STATE_LINE_WIDTH,
		e_depth_bias = VK_DYNAMIC_STATE_DEPTH_BIAS,
		e_blend_constants = VK_DYNAMIC_STATE_BLEND_CONSTANTS,
		e_depth_bounds = VK_DYNAMIC_STATE_DEPTH_BOUNDS,
		e_stencil_compare_mask = VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK,
		e_stencil_write_mask = VK_DYNAMIC_STATE_STENCIL_WRITE_MASK,
		e_stencil_reference = VK_DYNAMIC_STATE_STENCIL_REFERENCE,
	}flag;
	VkDynamicState vk_flag;

	E_dynamic_state(){}
	E_dynamic_state(const VkDynamicState flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_dynamic_state(const decltype(flag) flag_):flag(flag_){}

	operator VkDynamicState&(){return vk_flag;}
	operator VkDynamicState*()const{return const_cast<VkDynamicState*const>(&vk_flag);}
	operator VkDynamicState*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDescriptorUpdateTemplateType
*/
union E_descriptor_update_template_type{
	enum{
		e_descriptor_set = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,
	}flag;
	VkDescriptorUpdateTemplateType vk_flag;

	E_descriptor_update_template_type(){}
	E_descriptor_update_template_type(const VkDescriptorUpdateTemplateType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_descriptor_update_template_type(const decltype(flag) flag_):flag(flag_){}

	operator VkDescriptorUpdateTemplateType&(){return vk_flag;}
	operator VkDescriptorUpdateTemplateType*()const{return const_cast<VkDescriptorUpdateTemplateType*const>(&vk_flag);}
	operator VkDescriptorUpdateTemplateType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkObjectType
Enums to track objects of various types*/
union E_object_type{
	enum{
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
	}flag;
	VkObjectType vk_flag;

	E_object_type(){}
	E_object_type(const VkObjectType flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_object_type(const decltype(flag) flag_):flag(flag_){}

	operator VkObjectType&(){return vk_flag;}
	operator VkObjectType*()const{return const_cast<VkObjectType*const>(&vk_flag);}
	operator VkObjectType*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkPresentModeKHR
*/
union E_present_mode_KHR{
	enum{
		e_immediate_khr = VK_PRESENT_MODE_IMMEDIATE_KHR,
		e_mailbox_khr = VK_PRESENT_MODE_MAILBOX_KHR,
		e_fifo_khr = VK_PRESENT_MODE_FIFO_KHR,
		e_fifo_relaxed_khr = VK_PRESENT_MODE_FIFO_RELAXED_KHR,
	}flag;
	VkPresentModeKHR vk_flag;

	E_present_mode_KHR(){}
	E_present_mode_KHR(const VkPresentModeKHR flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_present_mode_KHR(const decltype(flag) flag_):flag(flag_){}

	operator VkPresentModeKHR&(){return vk_flag;}
	operator VkPresentModeKHR*()const{return const_cast<VkPresentModeKHR*const>(&vk_flag);}
	operator VkPresentModeKHR*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkColorSpaceKHR
*/
union E_color_space_KHR{
	enum{
		e_srgb_nonlinear_khr = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,
		evk_colorspace_srgb_nonlinear_khr = VK_COLORSPACE_SRGB_NONLINEAR_KHR,
	}flag;
	VkColorSpaceKHR vk_flag;

	E_color_space_KHR(){}
	E_color_space_KHR(const VkColorSpaceKHR flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_color_space_KHR(const decltype(flag) flag_):flag(flag_){}

	operator VkColorSpaceKHR&(){return vk_flag;}
	operator VkColorSpaceKHR*()const{return const_cast<VkColorSpaceKHR*const>(&vk_flag);}
	operator VkColorSpaceKHR*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDebugReportObjectTypeEXT
*/
union E_debug_report_object_type_EXT{
	enum{
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
	}flag;
	VkDebugReportObjectTypeEXT vk_flag;

	E_debug_report_object_type_EXT(){}
	E_debug_report_object_type_EXT(const VkDebugReportObjectTypeEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_debug_report_object_type_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkDebugReportObjectTypeEXT&(){return vk_flag;}
	operator VkDebugReportObjectTypeEXT*()const{return const_cast<VkDebugReportObjectTypeEXT*const>(&vk_flag);}
	operator VkDebugReportObjectTypeEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkRasterizationOrderAMD
*/
union E_rasterization_order_AMD{
	enum{
		e_strict_amd = VK_RASTERIZATION_ORDER_STRICT_AMD,
		e_relaxed_amd = VK_RASTERIZATION_ORDER_RELAXED_AMD,
	}flag;
	VkRasterizationOrderAMD vk_flag;

	E_rasterization_order_AMD(){}
	E_rasterization_order_AMD(const VkRasterizationOrderAMD flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_rasterization_order_AMD(const decltype(flag) flag_):flag(flag_){}

	operator VkRasterizationOrderAMD&(){return vk_flag;}
	operator VkRasterizationOrderAMD*()const{return const_cast<VkRasterizationOrderAMD*const>(&vk_flag);}
	operator VkRasterizationOrderAMD*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkValidationCheckEXT
*/
union E_validation_check_EXT{
	enum{
		e_all_ext = VK_VALIDATION_CHECK_ALL_EXT,
		e_shaders_ext = VK_VALIDATION_CHECK_SHADERS_EXT,
	}flag;
	VkValidationCheckEXT vk_flag;

	E_validation_check_EXT(){}
	E_validation_check_EXT(const VkValidationCheckEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_validation_check_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkValidationCheckEXT&(){return vk_flag;}
	operator VkValidationCheckEXT*()const{return const_cast<VkValidationCheckEXT*const>(&vk_flag);}
	operator VkValidationCheckEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkIndirectCommandsTokenTypeNVX
*/
union E_indirect_commands_token_type_NVX{
	enum{
		e_pipeline_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX,
		e_descriptor_set_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX,
		e_index_buffer_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX,
		e_vertex_buffer_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX,
		e_push_constant_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX,
		e_draw_indexed_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX,
		e_draw_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX,
		e_dispatch_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX,
	}flag;
	VkIndirectCommandsTokenTypeNVX vk_flag;

	E_indirect_commands_token_type_NVX(){}
	E_indirect_commands_token_type_NVX(const VkIndirectCommandsTokenTypeNVX flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_indirect_commands_token_type_NVX(const decltype(flag) flag_):flag(flag_){}

	operator VkIndirectCommandsTokenTypeNVX&(){return vk_flag;}
	operator VkIndirectCommandsTokenTypeNVX*()const{return const_cast<VkIndirectCommandsTokenTypeNVX*const>(&vk_flag);}
	operator VkIndirectCommandsTokenTypeNVX*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkObjectEntryTypeNVX
*/
union E_object_entry_type_NVX{
	enum{
		e_descriptor_set_nvx = VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX,
		e_pipeline_nvx = VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX,
		e_index_buffer_nvx = VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX,
		e_vertex_buffer_nvx = VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX,
		e_push_constant_nvx = VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX,
	}flag;
	VkObjectEntryTypeNVX vk_flag;

	E_object_entry_type_NVX(){}
	E_object_entry_type_NVX(const VkObjectEntryTypeNVX flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_object_entry_type_NVX(const decltype(flag) flag_):flag(flag_){}

	operator VkObjectEntryTypeNVX&(){return vk_flag;}
	operator VkObjectEntryTypeNVX*()const{return const_cast<VkObjectEntryTypeNVX*const>(&vk_flag);}
	operator VkObjectEntryTypeNVX*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDisplayPowerStateEXT
*/
union E_display_power_state_EXT{
	enum{
		e_off_ext = VK_DISPLAY_POWER_STATE_OFF_EXT,
		e_suspend_ext = VK_DISPLAY_POWER_STATE_SUSPEND_EXT,
		e_on_ext = VK_DISPLAY_POWER_STATE_ON_EXT,
	}flag;
	VkDisplayPowerStateEXT vk_flag;

	E_display_power_state_EXT(){}
	E_display_power_state_EXT(const VkDisplayPowerStateEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_display_power_state_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkDisplayPowerStateEXT&(){return vk_flag;}
	operator VkDisplayPowerStateEXT*()const{return const_cast<VkDisplayPowerStateEXT*const>(&vk_flag);}
	operator VkDisplayPowerStateEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDeviceEventTypeEXT
*/
union E_device_event_type_EXT{
	enum{
		e_display_hotplug_ext = VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT,
	}flag;
	VkDeviceEventTypeEXT vk_flag;

	E_device_event_type_EXT(){}
	E_device_event_type_EXT(const VkDeviceEventTypeEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_device_event_type_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkDeviceEventTypeEXT&(){return vk_flag;}
	operator VkDeviceEventTypeEXT*()const{return const_cast<VkDeviceEventTypeEXT*const>(&vk_flag);}
	operator VkDeviceEventTypeEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDisplayEventTypeEXT
*/
union E_display_event_type_EXT{
	enum{
		e_first_pixel_out_ext = VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT,
	}flag;
	VkDisplayEventTypeEXT vk_flag;

	E_display_event_type_EXT(){}
	E_display_event_type_EXT(const VkDisplayEventTypeEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_display_event_type_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkDisplayEventTypeEXT&(){return vk_flag;}
	operator VkDisplayEventTypeEXT*()const{return const_cast<VkDisplayEventTypeEXT*const>(&vk_flag);}
	operator VkDisplayEventTypeEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkViewportCoordinateSwizzleNV
*/
union E_viewport_coordinate_swizzle_NV{
	enum{
		e_positive_x_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV,
		e_negative_x_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV,
		e_positive_y_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV,
		e_negative_y_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV,
		e_positive_z_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV,
		e_negative_z_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV,
		e_positive_w_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV,
		e_negative_w_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV,
	}flag;
	VkViewportCoordinateSwizzleNV vk_flag;

	E_viewport_coordinate_swizzle_NV(){}
	E_viewport_coordinate_swizzle_NV(const VkViewportCoordinateSwizzleNV flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_viewport_coordinate_swizzle_NV(const decltype(flag) flag_):flag(flag_){}

	operator VkViewportCoordinateSwizzleNV&(){return vk_flag;}
	operator VkViewportCoordinateSwizzleNV*()const{return const_cast<VkViewportCoordinateSwizzleNV*const>(&vk_flag);}
	operator VkViewportCoordinateSwizzleNV*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkDiscardRectangleModeEXT
*/
union E_discard_rectangle_mode_EXT{
	enum{
		e_inclusive_ext = VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT,
		e_exclusive_ext = VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT,
	}flag;
	VkDiscardRectangleModeEXT vk_flag;

	E_discard_rectangle_mode_EXT(){}
	E_discard_rectangle_mode_EXT(const VkDiscardRectangleModeEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_discard_rectangle_mode_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkDiscardRectangleModeEXT&(){return vk_flag;}
	operator VkDiscardRectangleModeEXT*()const{return const_cast<VkDiscardRectangleModeEXT*const>(&vk_flag);}
	operator VkDiscardRectangleModeEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkPointClippingBehavior
*/
union E_point_clipping_behavior{
	enum{
		e_all_clip_planes = VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES,
		e_user_clip_planes_only = VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY,
	}flag;
	VkPointClippingBehavior vk_flag;

	E_point_clipping_behavior(){}
	E_point_clipping_behavior(const VkPointClippingBehavior flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_point_clipping_behavior(const decltype(flag) flag_):flag(flag_){}

	operator VkPointClippingBehavior&(){return vk_flag;}
	operator VkPointClippingBehavior*()const{return const_cast<VkPointClippingBehavior*const>(&vk_flag);}
	operator VkPointClippingBehavior*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSamplerReductionModeEXT
*/
union E_sampler_reduction_mode_EXT{
	enum{
		e_weighted_average_ext = VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT,
		e_min_ext = VK_SAMPLER_REDUCTION_MODE_MIN_EXT,
		e_max_ext = VK_SAMPLER_REDUCTION_MODE_MAX_EXT,
	}flag;
	VkSamplerReductionModeEXT vk_flag;

	E_sampler_reduction_mode_EXT(){}
	E_sampler_reduction_mode_EXT(const VkSamplerReductionModeEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_sampler_reduction_mode_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkSamplerReductionModeEXT&(){return vk_flag;}
	operator VkSamplerReductionModeEXT*()const{return const_cast<VkSamplerReductionModeEXT*const>(&vk_flag);}
	operator VkSamplerReductionModeEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkTessellationDomainOrigin
*/
union E_tessellation_domain_origin{
	enum{
		e_upper_left = VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT,
		e_lower_left = VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT,
	}flag;
	VkTessellationDomainOrigin vk_flag;

	E_tessellation_domain_origin(){}
	E_tessellation_domain_origin(const VkTessellationDomainOrigin flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_tessellation_domain_origin(const decltype(flag) flag_):flag(flag_){}

	operator VkTessellationDomainOrigin&(){return vk_flag;}
	operator VkTessellationDomainOrigin*()const{return const_cast<VkTessellationDomainOrigin*const>(&vk_flag);}
	operator VkTessellationDomainOrigin*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSamplerYcbcrModelConversion
*/
union E_sampler_ycbcr_model_conversion{
	enum{
		e_rgb_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY,
		e_ycbcr_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY,
		e_ycbcr_709 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709,
		e_ycbcr_601 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601,
		e_ycbcr_2020 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020,
	}flag;
	VkSamplerYcbcrModelConversion vk_flag;

	E_sampler_ycbcr_model_conversion(){}
	E_sampler_ycbcr_model_conversion(const VkSamplerYcbcrModelConversion flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_sampler_ycbcr_model_conversion(const decltype(flag) flag_):flag(flag_){}

	operator VkSamplerYcbcrModelConversion&(){return vk_flag;}
	operator VkSamplerYcbcrModelConversion*()const{return const_cast<VkSamplerYcbcrModelConversion*const>(&vk_flag);}
	operator VkSamplerYcbcrModelConversion*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkSamplerYcbcrRange
*/
union E_sampler_ycbcr_range{
	enum{
		e_itu_full = VK_SAMPLER_YCBCR_RANGE_ITU_FULL,
		e_itu_narrow = VK_SAMPLER_YCBCR_RANGE_ITU_NARROW,
	}flag;
	VkSamplerYcbcrRange vk_flag;

	E_sampler_ycbcr_range(){}
	E_sampler_ycbcr_range(const VkSamplerYcbcrRange flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_sampler_ycbcr_range(const decltype(flag) flag_):flag(flag_){}

	operator VkSamplerYcbcrRange&(){return vk_flag;}
	operator VkSamplerYcbcrRange*()const{return const_cast<VkSamplerYcbcrRange*const>(&vk_flag);}
	operator VkSamplerYcbcrRange*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkChromaLocation
*/
union E_chroma_location{
	enum{
		e_cosited_even = VK_CHROMA_LOCATION_COSITED_EVEN,
		e_midpoint = VK_CHROMA_LOCATION_MIDPOINT,
	}flag;
	VkChromaLocation vk_flag;

	E_chroma_location(){}
	E_chroma_location(const VkChromaLocation flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_chroma_location(const decltype(flag) flag_):flag(flag_){}

	operator VkChromaLocation&(){return vk_flag;}
	operator VkChromaLocation*()const{return const_cast<VkChromaLocation*const>(&vk_flag);}
	operator VkChromaLocation*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkBlendOverlapEXT
*/
union E_blend_overlap_EXT{
	enum{
		e_uncorrelated_ext = VK_BLEND_OVERLAP_UNCORRELATED_EXT,
		e_disjoint_ext = VK_BLEND_OVERLAP_DISJOINT_EXT,
		e_conjoint_ext = VK_BLEND_OVERLAP_CONJOINT_EXT,
	}flag;
	VkBlendOverlapEXT vk_flag;

	E_blend_overlap_EXT(){}
	E_blend_overlap_EXT(const VkBlendOverlapEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_blend_overlap_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkBlendOverlapEXT&(){return vk_flag;}
	operator VkBlendOverlapEXT*()const{return const_cast<VkBlendOverlapEXT*const>(&vk_flag);}
	operator VkBlendOverlapEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkCoverageModulationModeNV
*/
union E_coverage_modulation_mode_NV{
	enum{
		e_none_nv = VK_COVERAGE_MODULATION_MODE_NONE_NV,
		e_rgb_nv = VK_COVERAGE_MODULATION_MODE_RGB_NV,
		e_alpha_nv = VK_COVERAGE_MODULATION_MODE_ALPHA_NV,
		e_rgba_nv = VK_COVERAGE_MODULATION_MODE_RGBA_NV,
	}flag;
	VkCoverageModulationModeNV vk_flag;

	E_coverage_modulation_mode_NV(){}
	E_coverage_modulation_mode_NV(const VkCoverageModulationModeNV flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_coverage_modulation_mode_NV(const decltype(flag) flag_):flag(flag_){}

	operator VkCoverageModulationModeNV&(){return vk_flag;}
	operator VkCoverageModulationModeNV*()const{return const_cast<VkCoverageModulationModeNV*const>(&vk_flag);}
	operator VkCoverageModulationModeNV*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkValidationCacheHeaderVersionEXT
*/
union E_validation_cache_header_version_EXT{
	enum{
		e_one_ext = VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT,
	}flag;
	VkValidationCacheHeaderVersionEXT vk_flag;

	E_validation_cache_header_version_EXT(){}
	E_validation_cache_header_version_EXT(const VkValidationCacheHeaderVersionEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_validation_cache_header_version_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkValidationCacheHeaderVersionEXT&(){return vk_flag;}
	operator VkValidationCacheHeaderVersionEXT*()const{return const_cast<VkValidationCacheHeaderVersionEXT*const>(&vk_flag);}
	operator VkValidationCacheHeaderVersionEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkShaderInfoTypeAMD
*/
union E_shader_info_type_AMD{
	enum{
		e_statistics_amd = VK_SHADER_INFO_TYPE_STATISTICS_AMD,
		e_binary_amd = VK_SHADER_INFO_TYPE_BINARY_AMD,
		e_disassembly_amd = VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD,
	}flag;
	VkShaderInfoTypeAMD vk_flag;

	E_shader_info_type_AMD(){}
	E_shader_info_type_AMD(const VkShaderInfoTypeAMD flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_shader_info_type_AMD(const decltype(flag) flag_):flag(flag_){}

	operator VkShaderInfoTypeAMD&(){return vk_flag;}
	operator VkShaderInfoTypeAMD*()const{return const_cast<VkShaderInfoTypeAMD*const>(&vk_flag);}
	operator VkShaderInfoTypeAMD*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkQueueGlobalPriorityEXT
*/
union E_queue_global_priority_EXT{
	enum{
		e_low_ext = VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT,
		e_medium_ext = VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT,
		e_high_ext = VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT,
		e_realtime_ext = VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT,
	}flag;
	VkQueueGlobalPriorityEXT vk_flag;

	E_queue_global_priority_EXT(){}
	E_queue_global_priority_EXT(const VkQueueGlobalPriorityEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_queue_global_priority_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkQueueGlobalPriorityEXT&(){return vk_flag;}
	operator VkQueueGlobalPriorityEXT*()const{return const_cast<VkQueueGlobalPriorityEXT*const>(&vk_flag);}
	operator VkQueueGlobalPriorityEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkConservativeRasterizationModeEXT
*/
union E_conservative_rasterization_mode_EXT{
	enum{
		e_disabled_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT,
		e_overestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT,
		e_underestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT,
	}flag;
	VkConservativeRasterizationModeEXT vk_flag;

	E_conservative_rasterization_mode_EXT(){}
	E_conservative_rasterization_mode_EXT(const VkConservativeRasterizationModeEXT flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_conservative_rasterization_mode_EXT(const decltype(flag) flag_):flag(flag_){}

	operator VkConservativeRasterizationModeEXT&(){return vk_flag;}
	operator VkConservativeRasterizationModeEXT*()const{return const_cast<VkConservativeRasterizationModeEXT*const>(&vk_flag);}
	operator VkConservativeRasterizationModeEXT*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkVendorId
*/
union E_vendor_id{
	enum{
		e_viv = VK_VENDOR_ID_VIV,
		e_vsi = VK_VENDOR_ID_VSI,
		e_kazan = VK_VENDOR_ID_KAZAN,
	}flag;
	VkVendorId vk_flag;

	E_vendor_id(){}
	E_vendor_id(const VkVendorId flag_):flag(static_cast<decltype(flag)>(flag_) ){}
	E_vendor_id(const decltype(flag) flag_):flag(flag_){}

	operator VkVendorId&(){return vk_flag;}
	operator VkVendorId*()const{return const_cast<VkVendorId*const>(&vk_flag);}
	operator VkVendorId*(){return &vk_flag;}

	bool operator==(int flag_){return flag==flag_;}
};
/*	VkCullModeFlagBits*/
union F_cull_mode {
	VkCullModeFlags flags;
	VkCullModeFlagBits vk_flag;
	enum {
		b_none = VK_CULL_MODE_NONE,
		b_front = VK_CULL_MODE_FRONT_BIT,
		b_back = VK_CULL_MODE_BACK_BIT,
		b_front_and_back = VK_CULL_MODE_FRONT_AND_BACK,
	}flag;

	F_cull_mode():flags(0){}
	F_cull_mode(const uint32_t flag_):flags(flag_){}

	operator VkCullModeFlagBits&(){return vk_flag;}
	operator VkCullModeFlagBits*(){return &vk_flag; }
	operator VkCullModeFlagBits*()const{return const_cast<VkCullModeFlagBits*const>(&vk_flag); }

	operator VkCullModeFlags&(){return flags; }
	operator VkCullModeFlags*()const{return const_cast<VkCullModeFlags*const>(&flags); }
	operator VkCullModeFlags*(){return &flags; }

	F_cull_mode& operator=(const F_cull_mode flag_){flags=flag_.flags; return *this;}
	F_cull_mode& operator|=(const F_cull_mode flag_){flags|=flag_.flags; return *this;}
	F_cull_mode& operator&=(const F_cull_mode flag_){flags&=flag_.flags; return *this;}
	F_cull_mode& operator^=(const F_cull_mode flag_){flags^=flag_.flags;return *this;}
	F_cull_mode operator~(){return ~flags;}

	bool operator==(const F_cull_mode flag_){return flags==flag_.flags;}
	bool operator!=(const F_cull_mode flag_){return !(*this==flag_);}

	F_cull_mode& clear(){flags = 0;return *this;}
	F_cull_mode all_flags(){ return b_none | b_front | b_back | b_front_and_back;}
	F_cull_mode& on_none(){ flags |= b_none; return *this; }
	F_cull_mode& off_none(){ flags &= ~b_none; return *this; }
	F_cull_mode& on_front(){ flags |= b_front; return *this; }
	F_cull_mode& off_front(){ flags &= ~b_front; return *this; }
	F_cull_mode& on_back(){ flags |= b_back; return *this; }
	F_cull_mode& off_back(){ flags &= ~b_back; return *this; }
	F_cull_mode& on_front_and_back(){ flags |= b_front_and_back; return *this; }
	F_cull_mode& off_front_and_back(){ flags &= ~b_front_and_back; return *this; }
};
/*	VkQueueFlagBits*/
union F_queue {
	VkQueueFlags flags;
	VkQueueFlagBits vk_flag;
	enum {
			/* Queue supports graphics operations */
		b_graphics = VK_QUEUE_GRAPHICS_BIT,
			/* Queue supports compute operations */
		b_compute = VK_QUEUE_COMPUTE_BIT,
			/* Queue supports transfer operations */
		b_transfer = VK_QUEUE_TRANSFER_BIT,
			/* Queue supports sparse resource memory management operations */
		b_sparse_binding = VK_QUEUE_SPARSE_BINDING_BIT,
	}flag;

	F_queue():flags(0){}
	F_queue(const uint32_t flag_):flags(flag_){}

	operator VkQueueFlagBits&(){return vk_flag;}
	operator VkQueueFlagBits*(){return &vk_flag; }
	operator VkQueueFlagBits*()const{return const_cast<VkQueueFlagBits*const>(&vk_flag); }

	operator VkQueueFlags&(){return flags; }
	operator VkQueueFlags*()const{return const_cast<VkQueueFlags*const>(&flags); }
	operator VkQueueFlags*(){return &flags; }

	F_queue& operator=(const F_queue flag_){flags=flag_.flags; return *this;}
	F_queue& operator|=(const F_queue flag_){flags|=flag_.flags; return *this;}
	F_queue& operator&=(const F_queue flag_){flags&=flag_.flags; return *this;}
	F_queue& operator^=(const F_queue flag_){flags^=flag_.flags;return *this;}
	F_queue operator~(){return ~flags;}

	bool operator==(const F_queue flag_){return flags==flag_.flags;}
	bool operator!=(const F_queue flag_){return !(*this==flag_);}

	F_queue& clear(){flags = 0;return *this;}
	F_queue all_flags(){ return b_graphics | b_compute | b_transfer | b_sparse_binding;}
	F_queue& on_graphics(){ flags |= b_graphics; return *this; }
	F_queue& off_graphics(){ flags &= ~b_graphics; return *this; }
	F_queue& on_compute(){ flags |= b_compute; return *this; }
	F_queue& off_compute(){ flags &= ~b_compute; return *this; }
	F_queue& on_transfer(){ flags |= b_transfer; return *this; }
	F_queue& off_transfer(){ flags &= ~b_transfer; return *this; }
	F_queue& on_sparse_binding(){ flags |= b_sparse_binding; return *this; }
	F_queue& off_sparse_binding(){ flags &= ~b_sparse_binding; return *this; }
};
/*	VkDeviceQueueCreateFlagBits*/
using F_device_queue_create = 
			VkDeviceQueueCreateFlagBits;

/*	VkMemoryPropertyFlagBits*/
union F_memory_property {
	VkMemoryPropertyFlags flags;
	VkMemoryPropertyFlagBits vk_flag;
	enum {
			/* If otherwise stated, then allocate memory on device */
		b_device_local = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
			/* Memory is mappable by host */
		b_host_visible = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT,
			/* Memory will have i/o coherency. If not set, application may need to use vkFlushMappedMemoryRanges and vkInvalidateMappedMemoryRanges to flush/invalidate host cache */
		b_host_coherent = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
			/* Memory will be cached by the host */
		b_host_cached = VK_MEMORY_PROPERTY_HOST_CACHED_BIT,
			/* Memory may be allocated by the driver when it is required */
		b_lazily_allocated = VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT,
	}flag;

	F_memory_property():flags(0){}
	F_memory_property(const uint32_t flag_):flags(flag_){}

	operator VkMemoryPropertyFlagBits&(){return vk_flag;}
	operator VkMemoryPropertyFlagBits*(){return &vk_flag; }
	operator VkMemoryPropertyFlagBits*()const{return const_cast<VkMemoryPropertyFlagBits*const>(&vk_flag); }

	operator VkMemoryPropertyFlags&(){return flags; }
	operator VkMemoryPropertyFlags*()const{return const_cast<VkMemoryPropertyFlags*const>(&flags); }
	operator VkMemoryPropertyFlags*(){return &flags; }

	F_memory_property& operator=(const F_memory_property flag_){flags=flag_.flags; return *this;}
	F_memory_property& operator|=(const F_memory_property flag_){flags|=flag_.flags; return *this;}
	F_memory_property& operator&=(const F_memory_property flag_){flags&=flag_.flags; return *this;}
	F_memory_property& operator^=(const F_memory_property flag_){flags^=flag_.flags;return *this;}
	F_memory_property operator~(){return ~flags;}

	bool operator==(const F_memory_property flag_){return flags==flag_.flags;}
	bool operator!=(const F_memory_property flag_){return !(*this==flag_);}

	F_memory_property& clear(){flags = 0;return *this;}
	F_memory_property all_flags(){ return b_device_local | b_host_visible | b_host_coherent | b_host_cached | b_lazily_allocated;}
	F_memory_property& on_device_local(){ flags |= b_device_local; return *this; }
	F_memory_property& off_device_local(){ flags &= ~b_device_local; return *this; }
	F_memory_property& on_host_visible(){ flags |= b_host_visible; return *this; }
	F_memory_property& off_host_visible(){ flags &= ~b_host_visible; return *this; }
	F_memory_property& on_host_coherent(){ flags |= b_host_coherent; return *this; }
	F_memory_property& off_host_coherent(){ flags &= ~b_host_coherent; return *this; }
	F_memory_property& on_host_cached(){ flags |= b_host_cached; return *this; }
	F_memory_property& off_host_cached(){ flags &= ~b_host_cached; return *this; }
	F_memory_property& on_lazily_allocated(){ flags |= b_lazily_allocated; return *this; }
	F_memory_property& off_lazily_allocated(){ flags &= ~b_lazily_allocated; return *this; }
};
/*	VkMemoryHeapFlagBits*/
union F_memory_heap {
	VkMemoryHeapFlags flags;
	VkMemoryHeapFlagBits vk_flag;
	enum {
			/* If set, heap represents device memory */
		b_device_local = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT,
	}flag;

	F_memory_heap():flags(0){}
	F_memory_heap(const uint32_t flag_):flags(flag_){}

	operator VkMemoryHeapFlagBits&(){return vk_flag;}
	operator VkMemoryHeapFlagBits*(){return &vk_flag; }
	operator VkMemoryHeapFlagBits*()const{return const_cast<VkMemoryHeapFlagBits*const>(&vk_flag); }

	operator VkMemoryHeapFlags&(){return flags; }
	operator VkMemoryHeapFlags*()const{return const_cast<VkMemoryHeapFlags*const>(&flags); }
	operator VkMemoryHeapFlags*(){return &flags; }

	F_memory_heap& operator=(const F_memory_heap flag_){flags=flag_.flags; return *this;}
	F_memory_heap& operator|=(const F_memory_heap flag_){flags|=flag_.flags; return *this;}
	F_memory_heap& operator&=(const F_memory_heap flag_){flags&=flag_.flags; return *this;}
	F_memory_heap& operator^=(const F_memory_heap flag_){flags^=flag_.flags;return *this;}
	F_memory_heap operator~(){return ~flags;}

	bool operator==(const F_memory_heap flag_){return flags==flag_.flags;}
	bool operator!=(const F_memory_heap flag_){return !(*this==flag_);}

	F_memory_heap& clear(){flags = 0;return *this;}
	F_memory_heap all_flags(){ return b_device_local;}
	F_memory_heap& on_device_local(){ flags |= b_device_local; return *this; }
	F_memory_heap& off_device_local(){ flags &= ~b_device_local; return *this; }
};
/*	VkAccessFlagBits*/
union F_access {
	VkAccessFlags flags;
	VkAccessFlagBits vk_flag;
	enum {
			/* Controls coherency of indirect command reads */
		b_indirect_command_read = VK_ACCESS_INDIRECT_COMMAND_READ_BIT,
			/* Controls coherency of index reads */
		b_index_read = VK_ACCESS_INDEX_READ_BIT,
			/* Controls coherency of vertex attribute reads */
		b_vertex_attribute_read = VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT,
			/* Controls coherency of uniform buffer reads */
		b_uniform_read = VK_ACCESS_UNIFORM_READ_BIT,
			/* Controls coherency of input attachment reads */
		b_input_attachment_read = VK_ACCESS_INPUT_ATTACHMENT_READ_BIT,
			/* Controls coherency of shader reads */
		b_shader_read = VK_ACCESS_SHADER_READ_BIT,
			/* Controls coherency of shader writes */
		b_shader_write = VK_ACCESS_SHADER_WRITE_BIT,
			/* Controls coherency of color attachment reads */
		b_color_attachment_read = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT,
			/* Controls coherency of color attachment writes */
		b_color_attachment_write = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
			/* Controls coherency of depth/stencil attachment reads */
		b_depth_stencil_attachment_read = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT,
			/* Controls coherency of depth/stencil attachment writes */
		b_depth_stencil_attachment_write = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT,
			/* Controls coherency of transfer reads */
		b_transfer_read = VK_ACCESS_TRANSFER_READ_BIT,
			/* Controls coherency of transfer writes */
		b_transfer_write = VK_ACCESS_TRANSFER_WRITE_BIT,
			/* Controls coherency of host reads */
		b_host_read = VK_ACCESS_HOST_READ_BIT,
			/* Controls coherency of host writes */
		b_host_write = VK_ACCESS_HOST_WRITE_BIT,
			/* Controls coherency of memory reads */
		b_memory_read = VK_ACCESS_MEMORY_READ_BIT,
			/* Controls coherency of memory writes */
		b_memory_write = VK_ACCESS_MEMORY_WRITE_BIT,
	}flag;

	F_access():flags(0){}
	F_access(const uint32_t flag_):flags(flag_){}

	operator VkAccessFlagBits&(){return vk_flag;}
	operator VkAccessFlagBits*(){return &vk_flag; }
	operator VkAccessFlagBits*()const{return const_cast<VkAccessFlagBits*const>(&vk_flag); }

	operator VkAccessFlags&(){return flags; }
	operator VkAccessFlags*()const{return const_cast<VkAccessFlags*const>(&flags); }
	operator VkAccessFlags*(){return &flags; }

	F_access& operator=(const F_access flag_){flags=flag_.flags; return *this;}
	F_access& operator|=(const F_access flag_){flags|=flag_.flags; return *this;}
	F_access& operator&=(const F_access flag_){flags&=flag_.flags; return *this;}
	F_access& operator^=(const F_access flag_){flags^=flag_.flags;return *this;}
	F_access operator~(){return ~flags;}

	bool operator==(const F_access flag_){return flags==flag_.flags;}
	bool operator!=(const F_access flag_){return !(*this==flag_);}

	F_access& clear(){flags = 0;return *this;}
	F_access all_flags(){ return b_indirect_command_read | b_index_read | b_vertex_attribute_read | b_uniform_read | b_input_attachment_read | b_shader_read | b_shader_write | b_color_attachment_read | b_color_attachment_write | b_depth_stencil_attachment_read | b_depth_stencil_attachment_write | b_transfer_read | b_transfer_write | b_host_read | b_host_write | b_memory_read | b_memory_write;}
	F_access& on_indirect_command_read(){ flags |= b_indirect_command_read; return *this; }
	F_access& off_indirect_command_read(){ flags &= ~b_indirect_command_read; return *this; }
	F_access& on_index_read(){ flags |= b_index_read; return *this; }
	F_access& off_index_read(){ flags &= ~b_index_read; return *this; }
	F_access& on_vertex_attribute_read(){ flags |= b_vertex_attribute_read; return *this; }
	F_access& off_vertex_attribute_read(){ flags &= ~b_vertex_attribute_read; return *this; }
	F_access& on_uniform_read(){ flags |= b_uniform_read; return *this; }
	F_access& off_uniform_read(){ flags &= ~b_uniform_read; return *this; }
	F_access& on_input_attachment_read(){ flags |= b_input_attachment_read; return *this; }
	F_access& off_input_attachment_read(){ flags &= ~b_input_attachment_read; return *this; }
	F_access& on_shader_read(){ flags |= b_shader_read; return *this; }
	F_access& off_shader_read(){ flags &= ~b_shader_read; return *this; }
	F_access& on_shader_write(){ flags |= b_shader_write; return *this; }
	F_access& off_shader_write(){ flags &= ~b_shader_write; return *this; }
	F_access& on_color_attachment_read(){ flags |= b_color_attachment_read; return *this; }
	F_access& off_color_attachment_read(){ flags &= ~b_color_attachment_read; return *this; }
	F_access& on_color_attachment_write(){ flags |= b_color_attachment_write; return *this; }
	F_access& off_color_attachment_write(){ flags &= ~b_color_attachment_write; return *this; }
	F_access& on_depth_stencil_attachment_read(){ flags |= b_depth_stencil_attachment_read; return *this; }
	F_access& off_depth_stencil_attachment_read(){ flags &= ~b_depth_stencil_attachment_read; return *this; }
	F_access& on_depth_stencil_attachment_write(){ flags |= b_depth_stencil_attachment_write; return *this; }
	F_access& off_depth_stencil_attachment_write(){ flags &= ~b_depth_stencil_attachment_write; return *this; }
	F_access& on_transfer_read(){ flags |= b_transfer_read; return *this; }
	F_access& off_transfer_read(){ flags &= ~b_transfer_read; return *this; }
	F_access& on_transfer_write(){ flags |= b_transfer_write; return *this; }
	F_access& off_transfer_write(){ flags &= ~b_transfer_write; return *this; }
	F_access& on_host_read(){ flags |= b_host_read; return *this; }
	F_access& off_host_read(){ flags &= ~b_host_read; return *this; }
	F_access& on_host_write(){ flags |= b_host_write; return *this; }
	F_access& off_host_write(){ flags &= ~b_host_write; return *this; }
	F_access& on_memory_read(){ flags |= b_memory_read; return *this; }
	F_access& off_memory_read(){ flags &= ~b_memory_read; return *this; }
	F_access& on_memory_write(){ flags |= b_memory_write; return *this; }
	F_access& off_memory_write(){ flags &= ~b_memory_write; return *this; }
};
/*	VkBufferUsageFlagBits*/
union F_buffer_usage {
	VkBufferUsageFlags flags;
	VkBufferUsageFlagBits vk_flag;
	enum {
			/* Can be used as a source of transfer operations */
		b_transfer_src = VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
			/* Can be used as a destination of transfer operations */
		b_transfer_dst = VK_BUFFER_USAGE_TRANSFER_DST_BIT,
			/* Can be used as TBO */
		b_uniform_texel_buffer = VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT,
			/* Can be used as IBO */
		b_storage_texel_buffer = VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT,
			/* Can be used as UBO */
		b_uniform_buffer = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
			/* Can be used as SSBO */
		b_storage_buffer = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,
			/* Can be used as source of fixed-function index fetch (index buffer) */
		b_index_buffer = VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
			/* Can be used as source of fixed-function vertex fetch (VBO) */
		b_vertex_buffer = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
			/* Can be the source of indirect parameters (e.g. indirect buffer, parameter buffer) */
		b_indirect_buffer = VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT,
	}flag;

	F_buffer_usage():flags(0){}
	F_buffer_usage(const uint32_t flag_):flags(flag_){}

	operator VkBufferUsageFlagBits&(){return vk_flag;}
	operator VkBufferUsageFlagBits*(){return &vk_flag; }
	operator VkBufferUsageFlagBits*()const{return const_cast<VkBufferUsageFlagBits*const>(&vk_flag); }

	operator VkBufferUsageFlags&(){return flags; }
	operator VkBufferUsageFlags*()const{return const_cast<VkBufferUsageFlags*const>(&flags); }
	operator VkBufferUsageFlags*(){return &flags; }

	F_buffer_usage& operator=(const F_buffer_usage flag_){flags=flag_.flags; return *this;}
	F_buffer_usage& operator|=(const F_buffer_usage flag_){flags|=flag_.flags; return *this;}
	F_buffer_usage& operator&=(const F_buffer_usage flag_){flags&=flag_.flags; return *this;}
	F_buffer_usage& operator^=(const F_buffer_usage flag_){flags^=flag_.flags;return *this;}
	F_buffer_usage operator~(){return ~flags;}

	bool operator==(const F_buffer_usage flag_){return flags==flag_.flags;}
	bool operator!=(const F_buffer_usage flag_){return !(*this==flag_);}

	F_buffer_usage& clear(){flags = 0;return *this;}
	F_buffer_usage all_flags(){ return b_transfer_src | b_transfer_dst | b_uniform_texel_buffer | b_storage_texel_buffer | b_uniform_buffer | b_storage_buffer | b_index_buffer | b_vertex_buffer | b_indirect_buffer;}
	F_buffer_usage& on_transfer_src(){ flags |= b_transfer_src; return *this; }
	F_buffer_usage& off_transfer_src(){ flags &= ~b_transfer_src; return *this; }
	F_buffer_usage& on_transfer_dst(){ flags |= b_transfer_dst; return *this; }
	F_buffer_usage& off_transfer_dst(){ flags &= ~b_transfer_dst; return *this; }
	F_buffer_usage& on_uniform_texel_buffer(){ flags |= b_uniform_texel_buffer; return *this; }
	F_buffer_usage& off_uniform_texel_buffer(){ flags &= ~b_uniform_texel_buffer; return *this; }
	F_buffer_usage& on_storage_texel_buffer(){ flags |= b_storage_texel_buffer; return *this; }
	F_buffer_usage& off_storage_texel_buffer(){ flags &= ~b_storage_texel_buffer; return *this; }
	F_buffer_usage& on_uniform_buffer(){ flags |= b_uniform_buffer; return *this; }
	F_buffer_usage& off_uniform_buffer(){ flags &= ~b_uniform_buffer; return *this; }
	F_buffer_usage& on_storage_buffer(){ flags |= b_storage_buffer; return *this; }
	F_buffer_usage& off_storage_buffer(){ flags &= ~b_storage_buffer; return *this; }
	F_buffer_usage& on_index_buffer(){ flags |= b_index_buffer; return *this; }
	F_buffer_usage& off_index_buffer(){ flags &= ~b_index_buffer; return *this; }
	F_buffer_usage& on_vertex_buffer(){ flags |= b_vertex_buffer; return *this; }
	F_buffer_usage& off_vertex_buffer(){ flags &= ~b_vertex_buffer; return *this; }
	F_buffer_usage& on_indirect_buffer(){ flags |= b_indirect_buffer; return *this; }
	F_buffer_usage& off_indirect_buffer(){ flags &= ~b_indirect_buffer; return *this; }
};
/*	VkBufferCreateFlagBits*/
union F_buffer_create {
	VkBufferCreateFlags flags;
	VkBufferCreateFlagBits vk_flag;
	enum {
			/* Buffer should support sparse backing */
		b_sparse_binding = VK_BUFFER_CREATE_SPARSE_BINDING_BIT,
			/* Buffer should support sparse backing with partial residency */
		b_sparse_residency = VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT,
			/* Buffer should support constent data access to physical memory ranges mapped into multiple locations of sparse buffers */
		b_sparse_aliased = VK_BUFFER_CREATE_SPARSE_ALIASED_BIT,
	}flag;

	F_buffer_create():flags(0){}
	F_buffer_create(const uint32_t flag_):flags(flag_){}

	operator VkBufferCreateFlagBits&(){return vk_flag;}
	operator VkBufferCreateFlagBits*(){return &vk_flag; }
	operator VkBufferCreateFlagBits*()const{return const_cast<VkBufferCreateFlagBits*const>(&vk_flag); }

	operator VkBufferCreateFlags&(){return flags; }
	operator VkBufferCreateFlags*()const{return const_cast<VkBufferCreateFlags*const>(&flags); }
	operator VkBufferCreateFlags*(){return &flags; }

	F_buffer_create& operator=(const F_buffer_create flag_){flags=flag_.flags; return *this;}
	F_buffer_create& operator|=(const F_buffer_create flag_){flags|=flag_.flags; return *this;}
	F_buffer_create& operator&=(const F_buffer_create flag_){flags&=flag_.flags; return *this;}
	F_buffer_create& operator^=(const F_buffer_create flag_){flags^=flag_.flags;return *this;}
	F_buffer_create operator~(){return ~flags;}

	bool operator==(const F_buffer_create flag_){return flags==flag_.flags;}
	bool operator!=(const F_buffer_create flag_){return !(*this==flag_);}

	F_buffer_create& clear(){flags = 0;return *this;}
	F_buffer_create all_flags(){ return b_sparse_binding | b_sparse_residency | b_sparse_aliased;}
	F_buffer_create& on_sparse_binding(){ flags |= b_sparse_binding; return *this; }
	F_buffer_create& off_sparse_binding(){ flags &= ~b_sparse_binding; return *this; }
	F_buffer_create& on_sparse_residency(){ flags |= b_sparse_residency; return *this; }
	F_buffer_create& off_sparse_residency(){ flags &= ~b_sparse_residency; return *this; }
	F_buffer_create& on_sparse_aliased(){ flags |= b_sparse_aliased; return *this; }
	F_buffer_create& off_sparse_aliased(){ flags &= ~b_sparse_aliased; return *this; }
};
/*	VkShaderStageFlagBits*/
union F_shader_stage {
	VkShaderStageFlags flags;
	VkShaderStageFlagBits vk_flag;
	enum {
		b_vertex = VK_SHADER_STAGE_VERTEX_BIT,
		b_tessellation_control = VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT,
		b_tessellation_evaluation = VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT,
		b_geometry = VK_SHADER_STAGE_GEOMETRY_BIT,
		b_fragment = VK_SHADER_STAGE_FRAGMENT_BIT,
		b_compute = VK_SHADER_STAGE_COMPUTE_BIT,
		b_all_graphics = VK_SHADER_STAGE_ALL_GRAPHICS,
		b_all = VK_SHADER_STAGE_ALL,
	}flag;

	F_shader_stage():flags(0){}
	F_shader_stage(const uint32_t flag_):flags(flag_){}

	operator VkShaderStageFlagBits&(){return vk_flag;}
	operator VkShaderStageFlagBits*(){return &vk_flag; }
	operator VkShaderStageFlagBits*()const{return const_cast<VkShaderStageFlagBits*const>(&vk_flag); }

	operator VkShaderStageFlags&(){return flags; }
	operator VkShaderStageFlags*()const{return const_cast<VkShaderStageFlags*const>(&flags); }
	operator VkShaderStageFlags*(){return &flags; }

	F_shader_stage& operator=(const F_shader_stage flag_){flags=flag_.flags; return *this;}
	F_shader_stage& operator|=(const F_shader_stage flag_){flags|=flag_.flags; return *this;}
	F_shader_stage& operator&=(const F_shader_stage flag_){flags&=flag_.flags; return *this;}
	F_shader_stage& operator^=(const F_shader_stage flag_){flags^=flag_.flags;return *this;}
	F_shader_stage operator~(){return ~flags;}

	bool operator==(const F_shader_stage flag_){return flags==flag_.flags;}
	bool operator!=(const F_shader_stage flag_){return !(*this==flag_);}

	F_shader_stage& clear(){flags = 0;return *this;}
	F_shader_stage all_flags(){ return b_vertex | b_tessellation_control | b_tessellation_evaluation | b_geometry | b_fragment | b_compute | b_all_graphics | b_all;}
	F_shader_stage& on_vertex(){ flags |= b_vertex; return *this; }
	F_shader_stage& off_vertex(){ flags &= ~b_vertex; return *this; }
	F_shader_stage& on_tessellation_control(){ flags |= b_tessellation_control; return *this; }
	F_shader_stage& off_tessellation_control(){ flags &= ~b_tessellation_control; return *this; }
	F_shader_stage& on_tessellation_evaluation(){ flags |= b_tessellation_evaluation; return *this; }
	F_shader_stage& off_tessellation_evaluation(){ flags &= ~b_tessellation_evaluation; return *this; }
	F_shader_stage& on_geometry(){ flags |= b_geometry; return *this; }
	F_shader_stage& off_geometry(){ flags &= ~b_geometry; return *this; }
	F_shader_stage& on_fragment(){ flags |= b_fragment; return *this; }
	F_shader_stage& off_fragment(){ flags &= ~b_fragment; return *this; }
	F_shader_stage& on_compute(){ flags |= b_compute; return *this; }
	F_shader_stage& off_compute(){ flags &= ~b_compute; return *this; }
	F_shader_stage& on_all_graphics(){ flags |= b_all_graphics; return *this; }
	F_shader_stage& off_all_graphics(){ flags &= ~b_all_graphics; return *this; }
	F_shader_stage& on_all(){ flags |= b_all; return *this; }
	F_shader_stage& off_all(){ flags &= ~b_all; return *this; }
};
/*	VkImageUsageFlagBits*/
union F_image_usage {
	VkImageUsageFlags flags;
	VkImageUsageFlagBits vk_flag;
	enum {
			/* Can be used as a source of transfer operations */
		b_transfer_src = VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
			/* Can be used as a destination of transfer operations */
		b_transfer_dst = VK_IMAGE_USAGE_TRANSFER_DST_BIT,
			/* Can be sampled from (SAMPLED_IMAGE and COMBINED_IMAGE_SAMPLER descriptor types) */
		b_sampled = VK_IMAGE_USAGE_SAMPLED_BIT,
			/* Can be used as storage image (STORAGE_IMAGE descriptor type) */
		b_storage = VK_IMAGE_USAGE_STORAGE_BIT,
			/* Can be used as framebuffer color attachment */
		b_color_attachment = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT,
			/* Can be used as framebuffer depth/stencil attachment */
		b_depth_stencil_attachment = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,
			/* Image data not needed outside of rendering */
		b_transient_attachment = VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT,
			/* Can be used as framebuffer input attachment */
		b_input_attachment = VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT,
	}flag;

	F_image_usage():flags(0){}
	F_image_usage(const uint32_t flag_):flags(flag_){}

	operator VkImageUsageFlagBits&(){return vk_flag;}
	operator VkImageUsageFlagBits*(){return &vk_flag; }
	operator VkImageUsageFlagBits*()const{return const_cast<VkImageUsageFlagBits*const>(&vk_flag); }

	operator VkImageUsageFlags&(){return flags; }
	operator VkImageUsageFlags*()const{return const_cast<VkImageUsageFlags*const>(&flags); }
	operator VkImageUsageFlags*(){return &flags; }

	F_image_usage& operator=(const F_image_usage flag_){flags=flag_.flags; return *this;}
	F_image_usage& operator|=(const F_image_usage flag_){flags|=flag_.flags; return *this;}
	F_image_usage& operator&=(const F_image_usage flag_){flags&=flag_.flags; return *this;}
	F_image_usage& operator^=(const F_image_usage flag_){flags^=flag_.flags;return *this;}
	F_image_usage operator~(){return ~flags;}

	bool operator==(const F_image_usage flag_){return flags==flag_.flags;}
	bool operator!=(const F_image_usage flag_){return !(*this==flag_);}

	F_image_usage& clear(){flags = 0;return *this;}
	F_image_usage all_flags(){ return b_transfer_src | b_transfer_dst | b_sampled | b_storage | b_color_attachment | b_depth_stencil_attachment | b_transient_attachment | b_input_attachment;}
	F_image_usage& on_transfer_src(){ flags |= b_transfer_src; return *this; }
	F_image_usage& off_transfer_src(){ flags &= ~b_transfer_src; return *this; }
	F_image_usage& on_transfer_dst(){ flags |= b_transfer_dst; return *this; }
	F_image_usage& off_transfer_dst(){ flags &= ~b_transfer_dst; return *this; }
	F_image_usage& on_sampled(){ flags |= b_sampled; return *this; }
	F_image_usage& off_sampled(){ flags &= ~b_sampled; return *this; }
	F_image_usage& on_storage(){ flags |= b_storage; return *this; }
	F_image_usage& off_storage(){ flags &= ~b_storage; return *this; }
	F_image_usage& on_color_attachment(){ flags |= b_color_attachment; return *this; }
	F_image_usage& off_color_attachment(){ flags &= ~b_color_attachment; return *this; }
	F_image_usage& on_depth_stencil_attachment(){ flags |= b_depth_stencil_attachment; return *this; }
	F_image_usage& off_depth_stencil_attachment(){ flags &= ~b_depth_stencil_attachment; return *this; }
	F_image_usage& on_transient_attachment(){ flags |= b_transient_attachment; return *this; }
	F_image_usage& off_transient_attachment(){ flags &= ~b_transient_attachment; return *this; }
	F_image_usage& on_input_attachment(){ flags |= b_input_attachment; return *this; }
	F_image_usage& off_input_attachment(){ flags &= ~b_input_attachment; return *this; }
};
/*	VkImageCreateFlagBits*/
union F_image_create {
	VkImageCreateFlags flags;
	VkImageCreateFlagBits vk_flag;
	enum {
			/* Image should support sparse backing */
		b_sparse_binding = VK_IMAGE_CREATE_SPARSE_BINDING_BIT,
			/* Image should support sparse backing with partial residency */
		b_sparse_residency = VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT,
			/* Image should support constent data access to physical memory ranges mapped into multiple locations of sparse images */
		b_sparse_aliased = VK_IMAGE_CREATE_SPARSE_ALIASED_BIT,
			/* Allows image views to have different format than the base image */
		b_mutable_format = VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT,
			/* Allows creating image views with cube type from the created image */
		b_cube_compatible = VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT,
	}flag;

	F_image_create():flags(0){}
	F_image_create(const uint32_t flag_):flags(flag_){}

	operator VkImageCreateFlagBits&(){return vk_flag;}
	operator VkImageCreateFlagBits*(){return &vk_flag; }
	operator VkImageCreateFlagBits*()const{return const_cast<VkImageCreateFlagBits*const>(&vk_flag); }

	operator VkImageCreateFlags&(){return flags; }
	operator VkImageCreateFlags*()const{return const_cast<VkImageCreateFlags*const>(&flags); }
	operator VkImageCreateFlags*(){return &flags; }

	F_image_create& operator=(const F_image_create flag_){flags=flag_.flags; return *this;}
	F_image_create& operator|=(const F_image_create flag_){flags|=flag_.flags; return *this;}
	F_image_create& operator&=(const F_image_create flag_){flags&=flag_.flags; return *this;}
	F_image_create& operator^=(const F_image_create flag_){flags^=flag_.flags;return *this;}
	F_image_create operator~(){return ~flags;}

	bool operator==(const F_image_create flag_){return flags==flag_.flags;}
	bool operator!=(const F_image_create flag_){return !(*this==flag_);}

	F_image_create& clear(){flags = 0;return *this;}
	F_image_create all_flags(){ return b_sparse_binding | b_sparse_residency | b_sparse_aliased | b_mutable_format | b_cube_compatible;}
	F_image_create& on_sparse_binding(){ flags |= b_sparse_binding; return *this; }
	F_image_create& off_sparse_binding(){ flags &= ~b_sparse_binding; return *this; }
	F_image_create& on_sparse_residency(){ flags |= b_sparse_residency; return *this; }
	F_image_create& off_sparse_residency(){ flags &= ~b_sparse_residency; return *this; }
	F_image_create& on_sparse_aliased(){ flags |= b_sparse_aliased; return *this; }
	F_image_create& off_sparse_aliased(){ flags &= ~b_sparse_aliased; return *this; }
	F_image_create& on_mutable_format(){ flags |= b_mutable_format; return *this; }
	F_image_create& off_mutable_format(){ flags &= ~b_mutable_format; return *this; }
	F_image_create& on_cube_compatible(){ flags |= b_cube_compatible; return *this; }
	F_image_create& off_cube_compatible(){ flags &= ~b_cube_compatible; return *this; }
};
/*	VkPipelineCreateFlagBits*/
union F_pipeline_create {
	VkPipelineCreateFlags flags;
	VkPipelineCreateFlagBits vk_flag;
	enum {
		b_disable_optimization = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT,
		b_allow_derivatives = VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT,
		b_derivative = VK_PIPELINE_CREATE_DERIVATIVE_BIT,
	}flag;

	F_pipeline_create():flags(0){}
	F_pipeline_create(const uint32_t flag_):flags(flag_){}

	operator VkPipelineCreateFlagBits&(){return vk_flag;}
	operator VkPipelineCreateFlagBits*(){return &vk_flag; }
	operator VkPipelineCreateFlagBits*()const{return const_cast<VkPipelineCreateFlagBits*const>(&vk_flag); }

	operator VkPipelineCreateFlags&(){return flags; }
	operator VkPipelineCreateFlags*()const{return const_cast<VkPipelineCreateFlags*const>(&flags); }
	operator VkPipelineCreateFlags*(){return &flags; }

	F_pipeline_create& operator=(const F_pipeline_create flag_){flags=flag_.flags; return *this;}
	F_pipeline_create& operator|=(const F_pipeline_create flag_){flags|=flag_.flags; return *this;}
	F_pipeline_create& operator&=(const F_pipeline_create flag_){flags&=flag_.flags; return *this;}
	F_pipeline_create& operator^=(const F_pipeline_create flag_){flags^=flag_.flags;return *this;}
	F_pipeline_create operator~(){return ~flags;}

	bool operator==(const F_pipeline_create flag_){return flags==flag_.flags;}
	bool operator!=(const F_pipeline_create flag_){return !(*this==flag_);}

	F_pipeline_create& clear(){flags = 0;return *this;}
	F_pipeline_create all_flags(){ return b_disable_optimization | b_allow_derivatives | b_derivative;}
	F_pipeline_create& on_disable_optimization(){ flags |= b_disable_optimization; return *this; }
	F_pipeline_create& off_disable_optimization(){ flags &= ~b_disable_optimization; return *this; }
	F_pipeline_create& on_allow_derivatives(){ flags |= b_allow_derivatives; return *this; }
	F_pipeline_create& off_allow_derivatives(){ flags &= ~b_allow_derivatives; return *this; }
	F_pipeline_create& on_derivative(){ flags |= b_derivative; return *this; }
	F_pipeline_create& off_derivative(){ flags &= ~b_derivative; return *this; }
};
/*	VkColorComponentFlagBits*/
union F_color_component {
	VkColorComponentFlags flags;
	VkColorComponentFlagBits vk_flag;
	enum {
		b_r = VK_COLOR_COMPONENT_R_BIT,
		b_g = VK_COLOR_COMPONENT_G_BIT,
		b_b = VK_COLOR_COMPONENT_B_BIT,
		b_a = VK_COLOR_COMPONENT_A_BIT,
	}flag;

	F_color_component():flags(0){}
	F_color_component(const uint32_t flag_):flags(flag_){}

	operator VkColorComponentFlagBits&(){return vk_flag;}
	operator VkColorComponentFlagBits*(){return &vk_flag; }
	operator VkColorComponentFlagBits*()const{return const_cast<VkColorComponentFlagBits*const>(&vk_flag); }

	operator VkColorComponentFlags&(){return flags; }
	operator VkColorComponentFlags*()const{return const_cast<VkColorComponentFlags*const>(&flags); }
	operator VkColorComponentFlags*(){return &flags; }

	F_color_component& operator=(const F_color_component flag_){flags=flag_.flags; return *this;}
	F_color_component& operator|=(const F_color_component flag_){flags|=flag_.flags; return *this;}
	F_color_component& operator&=(const F_color_component flag_){flags&=flag_.flags; return *this;}
	F_color_component& operator^=(const F_color_component flag_){flags^=flag_.flags;return *this;}
	F_color_component operator~(){return ~flags;}

	bool operator==(const F_color_component flag_){return flags==flag_.flags;}
	bool operator!=(const F_color_component flag_){return !(*this==flag_);}

	F_color_component& clear(){flags = 0;return *this;}
	F_color_component all_flags(){ return b_r | b_g | b_b | b_a;}
	F_color_component& on_r(){ flags |= b_r; return *this; }
	F_color_component& off_r(){ flags &= ~b_r; return *this; }
	F_color_component& on_g(){ flags |= b_g; return *this; }
	F_color_component& off_g(){ flags &= ~b_g; return *this; }
	F_color_component& on_b(){ flags |= b_b; return *this; }
	F_color_component& off_b(){ flags &= ~b_b; return *this; }
	F_color_component& on_a(){ flags |= b_a; return *this; }
	F_color_component& off_a(){ flags &= ~b_a; return *this; }
};
/*	VkFenceCreateFlagBits*/
union F_fence_create {
	VkFenceCreateFlags flags;
	VkFenceCreateFlagBits vk_flag;
	enum {
		b_signaled = VK_FENCE_CREATE_SIGNALED_BIT,
	}flag;

	F_fence_create():flags(0){}
	F_fence_create(const uint32_t flag_):flags(flag_){}

	operator VkFenceCreateFlagBits&(){return vk_flag;}
	operator VkFenceCreateFlagBits*(){return &vk_flag; }
	operator VkFenceCreateFlagBits*()const{return const_cast<VkFenceCreateFlagBits*const>(&vk_flag); }

	operator VkFenceCreateFlags&(){return flags; }
	operator VkFenceCreateFlags*()const{return const_cast<VkFenceCreateFlags*const>(&flags); }
	operator VkFenceCreateFlags*(){return &flags; }

	F_fence_create& operator=(const F_fence_create flag_){flags=flag_.flags; return *this;}
	F_fence_create& operator|=(const F_fence_create flag_){flags|=flag_.flags; return *this;}
	F_fence_create& operator&=(const F_fence_create flag_){flags&=flag_.flags; return *this;}
	F_fence_create& operator^=(const F_fence_create flag_){flags^=flag_.flags;return *this;}
	F_fence_create operator~(){return ~flags;}

	bool operator==(const F_fence_create flag_){return flags==flag_.flags;}
	bool operator!=(const F_fence_create flag_){return !(*this==flag_);}

	F_fence_create& clear(){flags = 0;return *this;}
	F_fence_create all_flags(){ return b_signaled;}
	F_fence_create& on_signaled(){ flags |= b_signaled; return *this; }
	F_fence_create& off_signaled(){ flags &= ~b_signaled; return *this; }
};
/*	VkFormatFeatureFlagBits*/
union F_format_feature {
	VkFormatFeatureFlags flags;
	VkFormatFeatureFlagBits vk_flag;
	enum {
			/* Format can be used for sampled images (SAMPLED_IMAGE and COMBINED_IMAGE_SAMPLER descriptor types) */
		b_sampled_image = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT,
			/* Format can be used for storage images (STORAGE_IMAGE descriptor type) */
		b_storage_image = VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT,
			/* Format supports atomic operations in case it is used for storage images */
		b_storage_image_atomic = VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT,
			/* Format can be used for uniform texel buffers (TBOs) */
		b_uniform_texel_buffer = VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT,
			/* Format can be used for storage texel buffers (IBOs) */
		b_storage_texel_buffer = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT,
			/* Format supports atomic operations in case it is used for storage texel buffers */
		b_storage_texel_buffer_atomic = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT,
			/* Format can be used for vertex buffers (VBOs) */
		b_vertex_buffer = VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
			/* Format can be used for color attachment images */
		b_color_attachment = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT,
			/* Format supports blending in case it is used for color attachment images */
		b_color_attachment_blend = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT,
			/* Format can be used for depth/stencil attachment images */
		b_depth_stencil_attachment = VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT,
			/* Format can be used as the source image of blits with vkCmdBlitImage */
		b_blit_src = VK_FORMAT_FEATURE_BLIT_SRC_BIT,
			/* Format can be used as the destination image of blits with vkCmdBlitImage */
		b_blit_dst = VK_FORMAT_FEATURE_BLIT_DST_BIT,
			/* Format can be filtered with VK_FILTER_LINEAR when being sampled */
		b_sampled_image_filter_linear = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT,
	}flag;

	F_format_feature():flags(0){}
	F_format_feature(const uint32_t flag_):flags(flag_){}

	operator VkFormatFeatureFlagBits&(){return vk_flag;}
	operator VkFormatFeatureFlagBits*(){return &vk_flag; }
	operator VkFormatFeatureFlagBits*()const{return const_cast<VkFormatFeatureFlagBits*const>(&vk_flag); }

	operator VkFormatFeatureFlags&(){return flags; }
	operator VkFormatFeatureFlags*()const{return const_cast<VkFormatFeatureFlags*const>(&flags); }
	operator VkFormatFeatureFlags*(){return &flags; }

	F_format_feature& operator=(const F_format_feature flag_){flags=flag_.flags; return *this;}
	F_format_feature& operator|=(const F_format_feature flag_){flags|=flag_.flags; return *this;}
	F_format_feature& operator&=(const F_format_feature flag_){flags&=flag_.flags; return *this;}
	F_format_feature& operator^=(const F_format_feature flag_){flags^=flag_.flags;return *this;}
	F_format_feature operator~(){return ~flags;}

	bool operator==(const F_format_feature flag_){return flags==flag_.flags;}
	bool operator!=(const F_format_feature flag_){return !(*this==flag_);}

	F_format_feature& clear(){flags = 0;return *this;}
	F_format_feature all_flags(){ return b_sampled_image | b_storage_image | b_storage_image_atomic | b_uniform_texel_buffer | b_storage_texel_buffer | b_storage_texel_buffer_atomic | b_vertex_buffer | b_color_attachment | b_color_attachment_blend | b_depth_stencil_attachment | b_blit_src | b_blit_dst | b_sampled_image_filter_linear;}
	F_format_feature& on_sampled_image(){ flags |= b_sampled_image; return *this; }
	F_format_feature& off_sampled_image(){ flags &= ~b_sampled_image; return *this; }
	F_format_feature& on_storage_image(){ flags |= b_storage_image; return *this; }
	F_format_feature& off_storage_image(){ flags &= ~b_storage_image; return *this; }
	F_format_feature& on_storage_image_atomic(){ flags |= b_storage_image_atomic; return *this; }
	F_format_feature& off_storage_image_atomic(){ flags &= ~b_storage_image_atomic; return *this; }
	F_format_feature& on_uniform_texel_buffer(){ flags |= b_uniform_texel_buffer; return *this; }
	F_format_feature& off_uniform_texel_buffer(){ flags &= ~b_uniform_texel_buffer; return *this; }
	F_format_feature& on_storage_texel_buffer(){ flags |= b_storage_texel_buffer; return *this; }
	F_format_feature& off_storage_texel_buffer(){ flags &= ~b_storage_texel_buffer; return *this; }
	F_format_feature& on_storage_texel_buffer_atomic(){ flags |= b_storage_texel_buffer_atomic; return *this; }
	F_format_feature& off_storage_texel_buffer_atomic(){ flags &= ~b_storage_texel_buffer_atomic; return *this; }
	F_format_feature& on_vertex_buffer(){ flags |= b_vertex_buffer; return *this; }
	F_format_feature& off_vertex_buffer(){ flags &= ~b_vertex_buffer; return *this; }
	F_format_feature& on_color_attachment(){ flags |= b_color_attachment; return *this; }
	F_format_feature& off_color_attachment(){ flags &= ~b_color_attachment; return *this; }
	F_format_feature& on_color_attachment_blend(){ flags |= b_color_attachment_blend; return *this; }
	F_format_feature& off_color_attachment_blend(){ flags &= ~b_color_attachment_blend; return *this; }
	F_format_feature& on_depth_stencil_attachment(){ flags |= b_depth_stencil_attachment; return *this; }
	F_format_feature& off_depth_stencil_attachment(){ flags &= ~b_depth_stencil_attachment; return *this; }
	F_format_feature& on_blit_src(){ flags |= b_blit_src; return *this; }
	F_format_feature& off_blit_src(){ flags &= ~b_blit_src; return *this; }
	F_format_feature& on_blit_dst(){ flags |= b_blit_dst; return *this; }
	F_format_feature& off_blit_dst(){ flags &= ~b_blit_dst; return *this; }
	F_format_feature& on_sampled_image_filter_linear(){ flags |= b_sampled_image_filter_linear; return *this; }
	F_format_feature& off_sampled_image_filter_linear(){ flags &= ~b_sampled_image_filter_linear; return *this; }
};
/*	VkQueryControlFlagBits*/
union F_query_control {
	VkQueryControlFlags flags;
	VkQueryControlFlagBits vk_flag;
	enum {
			/* Require precise results to be collected by the query */
		b_precise = VK_QUERY_CONTROL_PRECISE_BIT,
	}flag;

	F_query_control():flags(0){}
	F_query_control(const uint32_t flag_):flags(flag_){}

	operator VkQueryControlFlagBits&(){return vk_flag;}
	operator VkQueryControlFlagBits*(){return &vk_flag; }
	operator VkQueryControlFlagBits*()const{return const_cast<VkQueryControlFlagBits*const>(&vk_flag); }

	operator VkQueryControlFlags&(){return flags; }
	operator VkQueryControlFlags*()const{return const_cast<VkQueryControlFlags*const>(&flags); }
	operator VkQueryControlFlags*(){return &flags; }

	F_query_control& operator=(const F_query_control flag_){flags=flag_.flags; return *this;}
	F_query_control& operator|=(const F_query_control flag_){flags|=flag_.flags; return *this;}
	F_query_control& operator&=(const F_query_control flag_){flags&=flag_.flags; return *this;}
	F_query_control& operator^=(const F_query_control flag_){flags^=flag_.flags;return *this;}
	F_query_control operator~(){return ~flags;}

	bool operator==(const F_query_control flag_){return flags==flag_.flags;}
	bool operator!=(const F_query_control flag_){return !(*this==flag_);}

	F_query_control& clear(){flags = 0;return *this;}
	F_query_control all_flags(){ return b_precise;}
	F_query_control& on_precise(){ flags |= b_precise; return *this; }
	F_query_control& off_precise(){ flags &= ~b_precise; return *this; }
};
/*	VkQueryResultFlagBits*/
union F_query_result {
	VkQueryResultFlags flags;
	VkQueryResultFlagBits vk_flag;
	enum {
			/* Results of the queries are written to the destination buffer as 64-bit values */
		b_64 = VK_QUERY_RESULT_64_BIT,
			/* Results of the queries are waited on before proceeding with the result copy */
		b_wait = VK_QUERY_RESULT_WAIT_BIT,
			/* Besides the results of the query, the availability of the results is also written */
		b_with_availability = VK_QUERY_RESULT_WITH_AVAILABILITY_BIT,
			/* Copy the partial results of the query even if the final results are not available */
		b_partial = VK_QUERY_RESULT_PARTIAL_BIT,
	}flag;

	F_query_result():flags(0){}
	F_query_result(const uint32_t flag_):flags(flag_){}

	operator VkQueryResultFlagBits&(){return vk_flag;}
	operator VkQueryResultFlagBits*(){return &vk_flag; }
	operator VkQueryResultFlagBits*()const{return const_cast<VkQueryResultFlagBits*const>(&vk_flag); }

	operator VkQueryResultFlags&(){return flags; }
	operator VkQueryResultFlags*()const{return const_cast<VkQueryResultFlags*const>(&flags); }
	operator VkQueryResultFlags*(){return &flags; }

	F_query_result& operator=(const F_query_result flag_){flags=flag_.flags; return *this;}
	F_query_result& operator|=(const F_query_result flag_){flags|=flag_.flags; return *this;}
	F_query_result& operator&=(const F_query_result flag_){flags&=flag_.flags; return *this;}
	F_query_result& operator^=(const F_query_result flag_){flags^=flag_.flags;return *this;}
	F_query_result operator~(){return ~flags;}

	bool operator==(const F_query_result flag_){return flags==flag_.flags;}
	bool operator!=(const F_query_result flag_){return !(*this==flag_);}

	F_query_result& clear(){flags = 0;return *this;}
	F_query_result all_flags(){ return b_64 | b_wait | b_with_availability | b_partial;}
	F_query_result& on_64(){ flags |= b_64; return *this; }
	F_query_result& off_64(){ flags &= ~b_64; return *this; }
	F_query_result& on_wait(){ flags |= b_wait; return *this; }
	F_query_result& off_wait(){ flags &= ~b_wait; return *this; }
	F_query_result& on_with_availability(){ flags |= b_with_availability; return *this; }
	F_query_result& off_with_availability(){ flags &= ~b_with_availability; return *this; }
	F_query_result& on_partial(){ flags |= b_partial; return *this; }
	F_query_result& off_partial(){ flags &= ~b_partial; return *this; }
};
/*	VkCommandBufferUsageFlagBits*/
union F_command_buffer_usage {
	VkCommandBufferUsageFlags flags;
	VkCommandBufferUsageFlagBits vk_flag;
	enum {
		b_one_time_submit = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,
		b_render_pass_continue = VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT,
			/* Command buffer may be submitted/executed more than once simultaneously */
		b_simultaneous_use = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT,
	}flag;

	F_command_buffer_usage():flags(0){}
	F_command_buffer_usage(const uint32_t flag_):flags(flag_){}

	operator VkCommandBufferUsageFlagBits&(){return vk_flag;}
	operator VkCommandBufferUsageFlagBits*(){return &vk_flag; }
	operator VkCommandBufferUsageFlagBits*()const{return const_cast<VkCommandBufferUsageFlagBits*const>(&vk_flag); }

	operator VkCommandBufferUsageFlags&(){return flags; }
	operator VkCommandBufferUsageFlags*()const{return const_cast<VkCommandBufferUsageFlags*const>(&flags); }
	operator VkCommandBufferUsageFlags*(){return &flags; }

	F_command_buffer_usage& operator=(const F_command_buffer_usage flag_){flags=flag_.flags; return *this;}
	F_command_buffer_usage& operator|=(const F_command_buffer_usage flag_){flags|=flag_.flags; return *this;}
	F_command_buffer_usage& operator&=(const F_command_buffer_usage flag_){flags&=flag_.flags; return *this;}
	F_command_buffer_usage& operator^=(const F_command_buffer_usage flag_){flags^=flag_.flags;return *this;}
	F_command_buffer_usage operator~(){return ~flags;}

	bool operator==(const F_command_buffer_usage flag_){return flags==flag_.flags;}
	bool operator!=(const F_command_buffer_usage flag_){return !(*this==flag_);}

	F_command_buffer_usage& clear(){flags = 0;return *this;}
	F_command_buffer_usage all_flags(){ return b_one_time_submit | b_render_pass_continue | b_simultaneous_use;}
	F_command_buffer_usage& on_one_time_submit(){ flags |= b_one_time_submit; return *this; }
	F_command_buffer_usage& off_one_time_submit(){ flags &= ~b_one_time_submit; return *this; }
	F_command_buffer_usage& on_render_pass_continue(){ flags |= b_render_pass_continue; return *this; }
	F_command_buffer_usage& off_render_pass_continue(){ flags &= ~b_render_pass_continue; return *this; }
	F_command_buffer_usage& on_simultaneous_use(){ flags |= b_simultaneous_use; return *this; }
	F_command_buffer_usage& off_simultaneous_use(){ flags &= ~b_simultaneous_use; return *this; }
};
/*	VkQueryPipelineStatisticFlagBits*/
union F_query_pipeline_statistic {
	VkQueryPipelineStatisticFlags flags;
	VkQueryPipelineStatisticFlagBits vk_flag;
	enum {
			/* Optional */
		b_input_assembly_vertices = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT,
			/* Optional */
		b_input_assembly_primitives = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT,
			/* Optional */
		b_vertex_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT,
			/* Optional */
		b_geometry_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT,
			/* Optional */
		b_geometry_shader_primitives = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT,
			/* Optional */
		b_clipping_invocations = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT,
			/* Optional */
		b_clipping_primitives = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT,
			/* Optional */
		b_fragment_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT,
			/* Optional */
		b_tessellation_control_shader_patches = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT,
			/* Optional */
		b_tessellation_evaluation_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT,
			/* Optional */
		b_compute_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT,
	}flag;

	F_query_pipeline_statistic():flags(0){}
	F_query_pipeline_statistic(const uint32_t flag_):flags(flag_){}

	operator VkQueryPipelineStatisticFlagBits&(){return vk_flag;}
	operator VkQueryPipelineStatisticFlagBits*(){return &vk_flag; }
	operator VkQueryPipelineStatisticFlagBits*()const{return const_cast<VkQueryPipelineStatisticFlagBits*const>(&vk_flag); }

	operator VkQueryPipelineStatisticFlags&(){return flags; }
	operator VkQueryPipelineStatisticFlags*()const{return const_cast<VkQueryPipelineStatisticFlags*const>(&flags); }
	operator VkQueryPipelineStatisticFlags*(){return &flags; }

	F_query_pipeline_statistic& operator=(const F_query_pipeline_statistic flag_){flags=flag_.flags; return *this;}
	F_query_pipeline_statistic& operator|=(const F_query_pipeline_statistic flag_){flags|=flag_.flags; return *this;}
	F_query_pipeline_statistic& operator&=(const F_query_pipeline_statistic flag_){flags&=flag_.flags; return *this;}
	F_query_pipeline_statistic& operator^=(const F_query_pipeline_statistic flag_){flags^=flag_.flags;return *this;}
	F_query_pipeline_statistic operator~(){return ~flags;}

	bool operator==(const F_query_pipeline_statistic flag_){return flags==flag_.flags;}
	bool operator!=(const F_query_pipeline_statistic flag_){return !(*this==flag_);}

	F_query_pipeline_statistic& clear(){flags = 0;return *this;}
	F_query_pipeline_statistic all_flags(){ return b_input_assembly_vertices | b_input_assembly_primitives | b_vertex_shader_invocations | b_geometry_shader_invocations | b_geometry_shader_primitives | b_clipping_invocations | b_clipping_primitives | b_fragment_shader_invocations | b_tessellation_control_shader_patches | b_tessellation_evaluation_shader_invocations | b_compute_shader_invocations;}
	F_query_pipeline_statistic& on_input_assembly_vertices(){ flags |= b_input_assembly_vertices; return *this; }
	F_query_pipeline_statistic& off_input_assembly_vertices(){ flags &= ~b_input_assembly_vertices; return *this; }
	F_query_pipeline_statistic& on_input_assembly_primitives(){ flags |= b_input_assembly_primitives; return *this; }
	F_query_pipeline_statistic& off_input_assembly_primitives(){ flags &= ~b_input_assembly_primitives; return *this; }
	F_query_pipeline_statistic& on_vertex_shader_invocations(){ flags |= b_vertex_shader_invocations; return *this; }
	F_query_pipeline_statistic& off_vertex_shader_invocations(){ flags &= ~b_vertex_shader_invocations; return *this; }
	F_query_pipeline_statistic& on_geometry_shader_invocations(){ flags |= b_geometry_shader_invocations; return *this; }
	F_query_pipeline_statistic& off_geometry_shader_invocations(){ flags &= ~b_geometry_shader_invocations; return *this; }
	F_query_pipeline_statistic& on_geometry_shader_primitives(){ flags |= b_geometry_shader_primitives; return *this; }
	F_query_pipeline_statistic& off_geometry_shader_primitives(){ flags &= ~b_geometry_shader_primitives; return *this; }
	F_query_pipeline_statistic& on_clipping_invocations(){ flags |= b_clipping_invocations; return *this; }
	F_query_pipeline_statistic& off_clipping_invocations(){ flags &= ~b_clipping_invocations; return *this; }
	F_query_pipeline_statistic& on_clipping_primitives(){ flags |= b_clipping_primitives; return *this; }
	F_query_pipeline_statistic& off_clipping_primitives(){ flags &= ~b_clipping_primitives; return *this; }
	F_query_pipeline_statistic& on_fragment_shader_invocations(){ flags |= b_fragment_shader_invocations; return *this; }
	F_query_pipeline_statistic& off_fragment_shader_invocations(){ flags &= ~b_fragment_shader_invocations; return *this; }
	F_query_pipeline_statistic& on_tessellation_control_shader_patches(){ flags |= b_tessellation_control_shader_patches; return *this; }
	F_query_pipeline_statistic& off_tessellation_control_shader_patches(){ flags &= ~b_tessellation_control_shader_patches; return *this; }
	F_query_pipeline_statistic& on_tessellation_evaluation_shader_invocations(){ flags |= b_tessellation_evaluation_shader_invocations; return *this; }
	F_query_pipeline_statistic& off_tessellation_evaluation_shader_invocations(){ flags &= ~b_tessellation_evaluation_shader_invocations; return *this; }
	F_query_pipeline_statistic& on_compute_shader_invocations(){ flags |= b_compute_shader_invocations; return *this; }
	F_query_pipeline_statistic& off_compute_shader_invocations(){ flags &= ~b_compute_shader_invocations; return *this; }
};
/*	VkImageAspectFlagBits*/
union F_image_aspect {
	VkImageAspectFlags flags;
	VkImageAspectFlagBits vk_flag;
	enum {
		b_color = VK_IMAGE_ASPECT_COLOR_BIT,
		b_depth = VK_IMAGE_ASPECT_DEPTH_BIT,
		b_stencil = VK_IMAGE_ASPECT_STENCIL_BIT,
		b_metadata = VK_IMAGE_ASPECT_METADATA_BIT,
	}flag;

	F_image_aspect():flags(0){}
	F_image_aspect(const uint32_t flag_):flags(flag_){}

	operator VkImageAspectFlagBits&(){return vk_flag;}
	operator VkImageAspectFlagBits*(){return &vk_flag; }
	operator VkImageAspectFlagBits*()const{return const_cast<VkImageAspectFlagBits*const>(&vk_flag); }

	operator VkImageAspectFlags&(){return flags; }
	operator VkImageAspectFlags*()const{return const_cast<VkImageAspectFlags*const>(&flags); }
	operator VkImageAspectFlags*(){return &flags; }

	F_image_aspect& operator=(const F_image_aspect flag_){flags=flag_.flags; return *this;}
	F_image_aspect& operator|=(const F_image_aspect flag_){flags|=flag_.flags; return *this;}
	F_image_aspect& operator&=(const F_image_aspect flag_){flags&=flag_.flags; return *this;}
	F_image_aspect& operator^=(const F_image_aspect flag_){flags^=flag_.flags;return *this;}
	F_image_aspect operator~(){return ~flags;}

	bool operator==(const F_image_aspect flag_){return flags==flag_.flags;}
	bool operator!=(const F_image_aspect flag_){return !(*this==flag_);}

	F_image_aspect& clear(){flags = 0;return *this;}
	F_image_aspect all_flags(){ return b_color | b_depth | b_stencil | b_metadata;}
	F_image_aspect& on_color(){ flags |= b_color; return *this; }
	F_image_aspect& off_color(){ flags &= ~b_color; return *this; }
	F_image_aspect& on_depth(){ flags |= b_depth; return *this; }
	F_image_aspect& off_depth(){ flags &= ~b_depth; return *this; }
	F_image_aspect& on_stencil(){ flags |= b_stencil; return *this; }
	F_image_aspect& off_stencil(){ flags &= ~b_stencil; return *this; }
	F_image_aspect& on_metadata(){ flags |= b_metadata; return *this; }
	F_image_aspect& off_metadata(){ flags &= ~b_metadata; return *this; }
};
/*	VkSparseImageFormatFlagBits*/
union F_sparse_image_format {
	VkSparseImageFormatFlags flags;
	VkSparseImageFormatFlagBits vk_flag;
	enum {
			/* Image uses a single mip tail region for all array layers */
		b_single_miptail = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT,
			/* Image requires mip level dimensions to be an integer multiple of the sparse image block dimensions for non-tail mip levels. */
		b_aligned_mip_size = VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT,
			/* Image uses a non-standard sparse image block dimensions */
		b_nonstandard_block_size = VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT,
	}flag;

	F_sparse_image_format():flags(0){}
	F_sparse_image_format(const uint32_t flag_):flags(flag_){}

	operator VkSparseImageFormatFlagBits&(){return vk_flag;}
	operator VkSparseImageFormatFlagBits*(){return &vk_flag; }
	operator VkSparseImageFormatFlagBits*()const{return const_cast<VkSparseImageFormatFlagBits*const>(&vk_flag); }

	operator VkSparseImageFormatFlags&(){return flags; }
	operator VkSparseImageFormatFlags*()const{return const_cast<VkSparseImageFormatFlags*const>(&flags); }
	operator VkSparseImageFormatFlags*(){return &flags; }

	F_sparse_image_format& operator=(const F_sparse_image_format flag_){flags=flag_.flags; return *this;}
	F_sparse_image_format& operator|=(const F_sparse_image_format flag_){flags|=flag_.flags; return *this;}
	F_sparse_image_format& operator&=(const F_sparse_image_format flag_){flags&=flag_.flags; return *this;}
	F_sparse_image_format& operator^=(const F_sparse_image_format flag_){flags^=flag_.flags;return *this;}
	F_sparse_image_format operator~(){return ~flags;}

	bool operator==(const F_sparse_image_format flag_){return flags==flag_.flags;}
	bool operator!=(const F_sparse_image_format flag_){return !(*this==flag_);}

	F_sparse_image_format& clear(){flags = 0;return *this;}
	F_sparse_image_format all_flags(){ return b_single_miptail | b_aligned_mip_size | b_nonstandard_block_size;}
	F_sparse_image_format& on_single_miptail(){ flags |= b_single_miptail; return *this; }
	F_sparse_image_format& off_single_miptail(){ flags &= ~b_single_miptail; return *this; }
	F_sparse_image_format& on_aligned_mip_size(){ flags |= b_aligned_mip_size; return *this; }
	F_sparse_image_format& off_aligned_mip_size(){ flags &= ~b_aligned_mip_size; return *this; }
	F_sparse_image_format& on_nonstandard_block_size(){ flags |= b_nonstandard_block_size; return *this; }
	F_sparse_image_format& off_nonstandard_block_size(){ flags &= ~b_nonstandard_block_size; return *this; }
};
/*	VkSparseMemoryBindFlagBits*/
union F_sparse_memory_bind {
	VkSparseMemoryBindFlags flags;
	VkSparseMemoryBindFlagBits vk_flag;
	enum {
			/* Operation binds resource metadata to memory */
		b_metadata = VK_SPARSE_MEMORY_BIND_METADATA_BIT,
	}flag;

	F_sparse_memory_bind():flags(0){}
	F_sparse_memory_bind(const uint32_t flag_):flags(flag_){}

	operator VkSparseMemoryBindFlagBits&(){return vk_flag;}
	operator VkSparseMemoryBindFlagBits*(){return &vk_flag; }
	operator VkSparseMemoryBindFlagBits*()const{return const_cast<VkSparseMemoryBindFlagBits*const>(&vk_flag); }

	operator VkSparseMemoryBindFlags&(){return flags; }
	operator VkSparseMemoryBindFlags*()const{return const_cast<VkSparseMemoryBindFlags*const>(&flags); }
	operator VkSparseMemoryBindFlags*(){return &flags; }

	F_sparse_memory_bind& operator=(const F_sparse_memory_bind flag_){flags=flag_.flags; return *this;}
	F_sparse_memory_bind& operator|=(const F_sparse_memory_bind flag_){flags|=flag_.flags; return *this;}
	F_sparse_memory_bind& operator&=(const F_sparse_memory_bind flag_){flags&=flag_.flags; return *this;}
	F_sparse_memory_bind& operator^=(const F_sparse_memory_bind flag_){flags^=flag_.flags;return *this;}
	F_sparse_memory_bind operator~(){return ~flags;}

	bool operator==(const F_sparse_memory_bind flag_){return flags==flag_.flags;}
	bool operator!=(const F_sparse_memory_bind flag_){return !(*this==flag_);}

	F_sparse_memory_bind& clear(){flags = 0;return *this;}
	F_sparse_memory_bind all_flags(){ return b_metadata;}
	F_sparse_memory_bind& on_metadata(){ flags |= b_metadata; return *this; }
	F_sparse_memory_bind& off_metadata(){ flags &= ~b_metadata; return *this; }
};
/*	VkPipelineStageFlagBits*/
union F_pipeline_stage {
	VkPipelineStageFlags flags;
	VkPipelineStageFlagBits vk_flag;
	enum {
			/* Before subsequent commands are processed */
		b_top_of_pipe = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
			/* Draw/DispatchIndirect command fetch */
		b_draw_indirect = VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT,
			/* Vertex/index fetch */
		b_vertex_input = VK_PIPELINE_STAGE_VERTEX_INPUT_BIT,
			/* Vertex shading */
		b_vertex_shader = VK_PIPELINE_STAGE_VERTEX_SHADER_BIT,
			/* Tessellation control shading */
		b_tessellation_control_shader = VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT,
			/* Tessellation evaluation shading */
		b_tessellation_evaluation_shader = VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT,
			/* Geometry shading */
		b_geometry_shader = VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT,
			/* Fragment shading */
		b_fragment_shader = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
			/* Early fragment (depth and stencil) tests */
		b_early_fragment_tests = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT,
			/* Late fragment (depth and stencil) tests */
		b_late_fragment_tests = VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
			/* Color attachment writes */
		b_color_attachment_output = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
			/* Compute shading */
		b_compute_shader = VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
			/* Transfer/copy operations */
		b_transfer = VK_PIPELINE_STAGE_TRANSFER_BIT,
			/* After previous commands have completed */
		b_bottom_of_pipe = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
			/* Indicates host (CPU) is a source/sink of the dependency */
		b_host = VK_PIPELINE_STAGE_HOST_BIT,
			/* All stages of the graphics pipeline */
		b_all_graphics = VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT,
			/* All stages supported on the queue */
		b_all_commands = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
	}flag;

	F_pipeline_stage():flags(0){}
	F_pipeline_stage(const uint32_t flag_):flags(flag_){}

	operator VkPipelineStageFlagBits&(){return vk_flag;}
	operator VkPipelineStageFlagBits*(){return &vk_flag; }
	operator VkPipelineStageFlagBits*()const{return const_cast<VkPipelineStageFlagBits*const>(&vk_flag); }

	operator VkPipelineStageFlags&(){return flags; }
	operator VkPipelineStageFlags*()const{return const_cast<VkPipelineStageFlags*const>(&flags); }
	operator VkPipelineStageFlags*(){return &flags; }

	F_pipeline_stage& operator=(const F_pipeline_stage flag_){flags=flag_.flags; return *this;}
	F_pipeline_stage& operator|=(const F_pipeline_stage flag_){flags|=flag_.flags; return *this;}
	F_pipeline_stage& operator&=(const F_pipeline_stage flag_){flags&=flag_.flags; return *this;}
	F_pipeline_stage& operator^=(const F_pipeline_stage flag_){flags^=flag_.flags;return *this;}
	F_pipeline_stage operator~(){return ~flags;}

	bool operator==(const F_pipeline_stage flag_){return flags==flag_.flags;}
	bool operator!=(const F_pipeline_stage flag_){return !(*this==flag_);}

	F_pipeline_stage& clear(){flags = 0;return *this;}
	F_pipeline_stage all_flags(){ return b_top_of_pipe | b_draw_indirect | b_vertex_input | b_vertex_shader | b_tessellation_control_shader | b_tessellation_evaluation_shader | b_geometry_shader | b_fragment_shader | b_early_fragment_tests | b_late_fragment_tests | b_color_attachment_output | b_compute_shader | b_transfer | b_bottom_of_pipe | b_host | b_all_graphics | b_all_commands;}
	F_pipeline_stage& on_top_of_pipe(){ flags |= b_top_of_pipe; return *this; }
	F_pipeline_stage& off_top_of_pipe(){ flags &= ~b_top_of_pipe; return *this; }
	F_pipeline_stage& on_draw_indirect(){ flags |= b_draw_indirect; return *this; }
	F_pipeline_stage& off_draw_indirect(){ flags &= ~b_draw_indirect; return *this; }
	F_pipeline_stage& on_vertex_input(){ flags |= b_vertex_input; return *this; }
	F_pipeline_stage& off_vertex_input(){ flags &= ~b_vertex_input; return *this; }
	F_pipeline_stage& on_vertex_shader(){ flags |= b_vertex_shader; return *this; }
	F_pipeline_stage& off_vertex_shader(){ flags &= ~b_vertex_shader; return *this; }
	F_pipeline_stage& on_tessellation_control_shader(){ flags |= b_tessellation_control_shader; return *this; }
	F_pipeline_stage& off_tessellation_control_shader(){ flags &= ~b_tessellation_control_shader; return *this; }
	F_pipeline_stage& on_tessellation_evaluation_shader(){ flags |= b_tessellation_evaluation_shader; return *this; }
	F_pipeline_stage& off_tessellation_evaluation_shader(){ flags &= ~b_tessellation_evaluation_shader; return *this; }
	F_pipeline_stage& on_geometry_shader(){ flags |= b_geometry_shader; return *this; }
	F_pipeline_stage& off_geometry_shader(){ flags &= ~b_geometry_shader; return *this; }
	F_pipeline_stage& on_fragment_shader(){ flags |= b_fragment_shader; return *this; }
	F_pipeline_stage& off_fragment_shader(){ flags &= ~b_fragment_shader; return *this; }
	F_pipeline_stage& on_early_fragment_tests(){ flags |= b_early_fragment_tests; return *this; }
	F_pipeline_stage& off_early_fragment_tests(){ flags &= ~b_early_fragment_tests; return *this; }
	F_pipeline_stage& on_late_fragment_tests(){ flags |= b_late_fragment_tests; return *this; }
	F_pipeline_stage& off_late_fragment_tests(){ flags &= ~b_late_fragment_tests; return *this; }
	F_pipeline_stage& on_color_attachment_output(){ flags |= b_color_attachment_output; return *this; }
	F_pipeline_stage& off_color_attachment_output(){ flags &= ~b_color_attachment_output; return *this; }
	F_pipeline_stage& on_compute_shader(){ flags |= b_compute_shader; return *this; }
	F_pipeline_stage& off_compute_shader(){ flags &= ~b_compute_shader; return *this; }
	F_pipeline_stage& on_transfer(){ flags |= b_transfer; return *this; }
	F_pipeline_stage& off_transfer(){ flags &= ~b_transfer; return *this; }
	F_pipeline_stage& on_bottom_of_pipe(){ flags |= b_bottom_of_pipe; return *this; }
	F_pipeline_stage& off_bottom_of_pipe(){ flags &= ~b_bottom_of_pipe; return *this; }
	F_pipeline_stage& on_host(){ flags |= b_host; return *this; }
	F_pipeline_stage& off_host(){ flags &= ~b_host; return *this; }
	F_pipeline_stage& on_all_graphics(){ flags |= b_all_graphics; return *this; }
	F_pipeline_stage& off_all_graphics(){ flags &= ~b_all_graphics; return *this; }
	F_pipeline_stage& on_all_commands(){ flags |= b_all_commands; return *this; }
	F_pipeline_stage& off_all_commands(){ flags &= ~b_all_commands; return *this; }
};
/*	VkCommandPoolCreateFlagBits*/
union F_command_pool_create {
	VkCommandPoolCreateFlags flags;
	VkCommandPoolCreateFlagBits vk_flag;
	enum {
			/* Command buffers have a short lifetime */
		b_transient = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT,
			/* Command buffers may release their memory individually */
		b_reset_command_buffer = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
	}flag;

	F_command_pool_create():flags(0){}
	F_command_pool_create(const uint32_t flag_):flags(flag_){}

	operator VkCommandPoolCreateFlagBits&(){return vk_flag;}
	operator VkCommandPoolCreateFlagBits*(){return &vk_flag; }
	operator VkCommandPoolCreateFlagBits*()const{return const_cast<VkCommandPoolCreateFlagBits*const>(&vk_flag); }

	operator VkCommandPoolCreateFlags&(){return flags; }
	operator VkCommandPoolCreateFlags*()const{return const_cast<VkCommandPoolCreateFlags*const>(&flags); }
	operator VkCommandPoolCreateFlags*(){return &flags; }

	F_command_pool_create& operator=(const F_command_pool_create flag_){flags=flag_.flags; return *this;}
	F_command_pool_create& operator|=(const F_command_pool_create flag_){flags|=flag_.flags; return *this;}
	F_command_pool_create& operator&=(const F_command_pool_create flag_){flags&=flag_.flags; return *this;}
	F_command_pool_create& operator^=(const F_command_pool_create flag_){flags^=flag_.flags;return *this;}
	F_command_pool_create operator~(){return ~flags;}

	bool operator==(const F_command_pool_create flag_){return flags==flag_.flags;}
	bool operator!=(const F_command_pool_create flag_){return !(*this==flag_);}

	F_command_pool_create& clear(){flags = 0;return *this;}
	F_command_pool_create all_flags(){ return b_transient | b_reset_command_buffer;}
	F_command_pool_create& on_transient(){ flags |= b_transient; return *this; }
	F_command_pool_create& off_transient(){ flags &= ~b_transient; return *this; }
	F_command_pool_create& on_reset_command_buffer(){ flags |= b_reset_command_buffer; return *this; }
	F_command_pool_create& off_reset_command_buffer(){ flags &= ~b_reset_command_buffer; return *this; }
};
/*	VkCommandPoolResetFlagBits*/
union F_command_pool_reset {
	VkCommandPoolResetFlags flags;
	VkCommandPoolResetFlagBits vk_flag;
	enum {
			/* Release resources owned by the pool */
		b_release_resources = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT,
	}flag;

	F_command_pool_reset():flags(0){}
	F_command_pool_reset(const uint32_t flag_):flags(flag_){}

	operator VkCommandPoolResetFlagBits&(){return vk_flag;}
	operator VkCommandPoolResetFlagBits*(){return &vk_flag; }
	operator VkCommandPoolResetFlagBits*()const{return const_cast<VkCommandPoolResetFlagBits*const>(&vk_flag); }

	operator VkCommandPoolResetFlags&(){return flags; }
	operator VkCommandPoolResetFlags*()const{return const_cast<VkCommandPoolResetFlags*const>(&flags); }
	operator VkCommandPoolResetFlags*(){return &flags; }

	F_command_pool_reset& operator=(const F_command_pool_reset flag_){flags=flag_.flags; return *this;}
	F_command_pool_reset& operator|=(const F_command_pool_reset flag_){flags|=flag_.flags; return *this;}
	F_command_pool_reset& operator&=(const F_command_pool_reset flag_){flags&=flag_.flags; return *this;}
	F_command_pool_reset& operator^=(const F_command_pool_reset flag_){flags^=flag_.flags;return *this;}
	F_command_pool_reset operator~(){return ~flags;}

	bool operator==(const F_command_pool_reset flag_){return flags==flag_.flags;}
	bool operator!=(const F_command_pool_reset flag_){return !(*this==flag_);}

	F_command_pool_reset& clear(){flags = 0;return *this;}
	F_command_pool_reset all_flags(){ return b_release_resources;}
	F_command_pool_reset& on_release_resources(){ flags |= b_release_resources; return *this; }
	F_command_pool_reset& off_release_resources(){ flags &= ~b_release_resources; return *this; }
};
/*	VkCommandBufferResetFlagBits*/
union F_command_buffer_reset {
	VkCommandBufferResetFlags flags;
	VkCommandBufferResetFlagBits vk_flag;
	enum {
			/* Release resources owned by the buffer */
		b_release_resources = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT,
	}flag;

	F_command_buffer_reset():flags(0){}
	F_command_buffer_reset(const uint32_t flag_):flags(flag_){}

	operator VkCommandBufferResetFlagBits&(){return vk_flag;}
	operator VkCommandBufferResetFlagBits*(){return &vk_flag; }
	operator VkCommandBufferResetFlagBits*()const{return const_cast<VkCommandBufferResetFlagBits*const>(&vk_flag); }

	operator VkCommandBufferResetFlags&(){return flags; }
	operator VkCommandBufferResetFlags*()const{return const_cast<VkCommandBufferResetFlags*const>(&flags); }
	operator VkCommandBufferResetFlags*(){return &flags; }

	F_command_buffer_reset& operator=(const F_command_buffer_reset flag_){flags=flag_.flags; return *this;}
	F_command_buffer_reset& operator|=(const F_command_buffer_reset flag_){flags|=flag_.flags; return *this;}
	F_command_buffer_reset& operator&=(const F_command_buffer_reset flag_){flags&=flag_.flags; return *this;}
	F_command_buffer_reset& operator^=(const F_command_buffer_reset flag_){flags^=flag_.flags;return *this;}
	F_command_buffer_reset operator~(){return ~flags;}

	bool operator==(const F_command_buffer_reset flag_){return flags==flag_.flags;}
	bool operator!=(const F_command_buffer_reset flag_){return !(*this==flag_);}

	F_command_buffer_reset& clear(){flags = 0;return *this;}
	F_command_buffer_reset all_flags(){ return b_release_resources;}
	F_command_buffer_reset& on_release_resources(){ flags |= b_release_resources; return *this; }
	F_command_buffer_reset& off_release_resources(){ flags &= ~b_release_resources; return *this; }
};
/*	VkSampleCountFlagBits*/
union F_sample_count {
	VkSampleCountFlags flags;
	VkSampleCountFlagBits vk_flag;
	enum {
			/* Sample count 1 supported */
		b_1 = VK_SAMPLE_COUNT_1_BIT,
			/* Sample count 2 supported */
		b_2 = VK_SAMPLE_COUNT_2_BIT,
			/* Sample count 4 supported */
		b_4 = VK_SAMPLE_COUNT_4_BIT,
			/* Sample count 8 supported */
		b_8 = VK_SAMPLE_COUNT_8_BIT,
			/* Sample count 16 supported */
		b_16 = VK_SAMPLE_COUNT_16_BIT,
			/* Sample count 32 supported */
		b_32 = VK_SAMPLE_COUNT_32_BIT,
			/* Sample count 64 supported */
		b_64 = VK_SAMPLE_COUNT_64_BIT,
	}flag;

	F_sample_count():flags(0){}
	F_sample_count(const uint32_t flag_):flags(flag_){}

	operator VkSampleCountFlagBits&(){return vk_flag;}
	operator VkSampleCountFlagBits*(){return &vk_flag; }
	operator VkSampleCountFlagBits*()const{return const_cast<VkSampleCountFlagBits*const>(&vk_flag); }

	operator VkSampleCountFlags&(){return flags; }
	operator VkSampleCountFlags*()const{return const_cast<VkSampleCountFlags*const>(&flags); }
	operator VkSampleCountFlags*(){return &flags; }

	F_sample_count& operator=(const F_sample_count flag_){flags=flag_.flags; return *this;}
	F_sample_count& operator|=(const F_sample_count flag_){flags|=flag_.flags; return *this;}
	F_sample_count& operator&=(const F_sample_count flag_){flags&=flag_.flags; return *this;}
	F_sample_count& operator^=(const F_sample_count flag_){flags^=flag_.flags;return *this;}
	F_sample_count operator~(){return ~flags;}

	bool operator==(const F_sample_count flag_){return flags==flag_.flags;}
	bool operator!=(const F_sample_count flag_){return !(*this==flag_);}

	F_sample_count& clear(){flags = 0;return *this;}
	F_sample_count all_flags(){ return b_1 | b_2 | b_4 | b_8 | b_16 | b_32 | b_64;}
	F_sample_count& on_1(){ flags |= b_1; return *this; }
	F_sample_count& off_1(){ flags &= ~b_1; return *this; }
	F_sample_count& on_2(){ flags |= b_2; return *this; }
	F_sample_count& off_2(){ flags &= ~b_2; return *this; }
	F_sample_count& on_4(){ flags |= b_4; return *this; }
	F_sample_count& off_4(){ flags &= ~b_4; return *this; }
	F_sample_count& on_8(){ flags |= b_8; return *this; }
	F_sample_count& off_8(){ flags &= ~b_8; return *this; }
	F_sample_count& on_16(){ flags |= b_16; return *this; }
	F_sample_count& off_16(){ flags &= ~b_16; return *this; }
	F_sample_count& on_32(){ flags |= b_32; return *this; }
	F_sample_count& off_32(){ flags &= ~b_32; return *this; }
	F_sample_count& on_64(){ flags |= b_64; return *this; }
	F_sample_count& off_64(){ flags &= ~b_64; return *this; }
};
/*	VkAttachmentDescriptionFlagBits*/
union F_attachment_description {
	VkAttachmentDescriptionFlags flags;
	VkAttachmentDescriptionFlagBits vk_flag;
	enum {
			/* The attachment may alias physical memory of another attachment in the same render pass */
		b_may_alias = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT,
	}flag;

	F_attachment_description():flags(0){}
	F_attachment_description(const uint32_t flag_):flags(flag_){}

	operator VkAttachmentDescriptionFlagBits&(){return vk_flag;}
	operator VkAttachmentDescriptionFlagBits*(){return &vk_flag; }
	operator VkAttachmentDescriptionFlagBits*()const{return const_cast<VkAttachmentDescriptionFlagBits*const>(&vk_flag); }

	operator VkAttachmentDescriptionFlags&(){return flags; }
	operator VkAttachmentDescriptionFlags*()const{return const_cast<VkAttachmentDescriptionFlags*const>(&flags); }
	operator VkAttachmentDescriptionFlags*(){return &flags; }

	F_attachment_description& operator=(const F_attachment_description flag_){flags=flag_.flags; return *this;}
	F_attachment_description& operator|=(const F_attachment_description flag_){flags|=flag_.flags; return *this;}
	F_attachment_description& operator&=(const F_attachment_description flag_){flags&=flag_.flags; return *this;}
	F_attachment_description& operator^=(const F_attachment_description flag_){flags^=flag_.flags;return *this;}
	F_attachment_description operator~(){return ~flags;}

	bool operator==(const F_attachment_description flag_){return flags==flag_.flags;}
	bool operator!=(const F_attachment_description flag_){return !(*this==flag_);}

	F_attachment_description& clear(){flags = 0;return *this;}
	F_attachment_description all_flags(){ return b_may_alias;}
	F_attachment_description& on_may_alias(){ flags |= b_may_alias; return *this; }
	F_attachment_description& off_may_alias(){ flags &= ~b_may_alias; return *this; }
};
/*	VkStencilFaceFlagBits*/
union F_stencil_face {
	VkStencilFaceFlags flags;
	VkStencilFaceFlagBits vk_flag;
	enum {
			/* Front face */
		b_front = VK_STENCIL_FACE_FRONT_BIT,
			/* Back face */
		b_back = VK_STENCIL_FACE_BACK_BIT,
			/* Front and back faces */
		b_vk_stencil_front_and_back = VK_STENCIL_FRONT_AND_BACK,
	}flag;

	F_stencil_face():flags(0){}
	F_stencil_face(const uint32_t flag_):flags(flag_){}

	operator VkStencilFaceFlagBits&(){return vk_flag;}
	operator VkStencilFaceFlagBits*(){return &vk_flag; }
	operator VkStencilFaceFlagBits*()const{return const_cast<VkStencilFaceFlagBits*const>(&vk_flag); }

	operator VkStencilFaceFlags&(){return flags; }
	operator VkStencilFaceFlags*()const{return const_cast<VkStencilFaceFlags*const>(&flags); }
	operator VkStencilFaceFlags*(){return &flags; }

	F_stencil_face& operator=(const F_stencil_face flag_){flags=flag_.flags; return *this;}
	F_stencil_face& operator|=(const F_stencil_face flag_){flags|=flag_.flags; return *this;}
	F_stencil_face& operator&=(const F_stencil_face flag_){flags&=flag_.flags; return *this;}
	F_stencil_face& operator^=(const F_stencil_face flag_){flags^=flag_.flags;return *this;}
	F_stencil_face operator~(){return ~flags;}

	bool operator==(const F_stencil_face flag_){return flags==flag_.flags;}
	bool operator!=(const F_stencil_face flag_){return !(*this==flag_);}

	F_stencil_face& clear(){flags = 0;return *this;}
	F_stencil_face all_flags(){ return b_front | b_back | b_vk_stencil_front_and_back;}
	F_stencil_face& on_front(){ flags |= b_front; return *this; }
	F_stencil_face& off_front(){ flags &= ~b_front; return *this; }
	F_stencil_face& on_back(){ flags |= b_back; return *this; }
	F_stencil_face& off_back(){ flags &= ~b_back; return *this; }
	F_stencil_face& on_vk_stencil_front_and_back(){ flags |= b_vk_stencil_front_and_back; return *this; }
	F_stencil_face& off_vk_stencil_front_and_back(){ flags &= ~b_vk_stencil_front_and_back; return *this; }
};
/*	VkDescriptorPoolCreateFlagBits*/
union F_descriptor_pool_create {
	VkDescriptorPoolCreateFlags flags;
	VkDescriptorPoolCreateFlagBits vk_flag;
	enum {
			/* Descriptor sets may be freed individually */
		b_free_descriptor_set = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT,
	}flag;

	F_descriptor_pool_create():flags(0){}
	F_descriptor_pool_create(const uint32_t flag_):flags(flag_){}

	operator VkDescriptorPoolCreateFlagBits&(){return vk_flag;}
	operator VkDescriptorPoolCreateFlagBits*(){return &vk_flag; }
	operator VkDescriptorPoolCreateFlagBits*()const{return const_cast<VkDescriptorPoolCreateFlagBits*const>(&vk_flag); }

	operator VkDescriptorPoolCreateFlags&(){return flags; }
	operator VkDescriptorPoolCreateFlags*()const{return const_cast<VkDescriptorPoolCreateFlags*const>(&flags); }
	operator VkDescriptorPoolCreateFlags*(){return &flags; }

	F_descriptor_pool_create& operator=(const F_descriptor_pool_create flag_){flags=flag_.flags; return *this;}
	F_descriptor_pool_create& operator|=(const F_descriptor_pool_create flag_){flags|=flag_.flags; return *this;}
	F_descriptor_pool_create& operator&=(const F_descriptor_pool_create flag_){flags&=flag_.flags; return *this;}
	F_descriptor_pool_create& operator^=(const F_descriptor_pool_create flag_){flags^=flag_.flags;return *this;}
	F_descriptor_pool_create operator~(){return ~flags;}

	bool operator==(const F_descriptor_pool_create flag_){return flags==flag_.flags;}
	bool operator!=(const F_descriptor_pool_create flag_){return !(*this==flag_);}

	F_descriptor_pool_create& clear(){flags = 0;return *this;}
	F_descriptor_pool_create all_flags(){ return b_free_descriptor_set;}
	F_descriptor_pool_create& on_free_descriptor_set(){ flags |= b_free_descriptor_set; return *this; }
	F_descriptor_pool_create& off_free_descriptor_set(){ flags &= ~b_free_descriptor_set; return *this; }
};
/*	VkDependencyFlagBits*/
union F_dependency {
	VkDependencyFlags flags;
	VkDependencyFlagBits vk_flag;
	enum {
			/* Dependency is per pixel region  */
		b_by_region = VK_DEPENDENCY_BY_REGION_BIT,
	}flag;

	F_dependency():flags(0){}
	F_dependency(const uint32_t flag_):flags(flag_){}

	operator VkDependencyFlagBits&(){return vk_flag;}
	operator VkDependencyFlagBits*(){return &vk_flag; }
	operator VkDependencyFlagBits*()const{return const_cast<VkDependencyFlagBits*const>(&vk_flag); }

	operator VkDependencyFlags&(){return flags; }
	operator VkDependencyFlags*()const{return const_cast<VkDependencyFlags*const>(&flags); }
	operator VkDependencyFlags*(){return &flags; }

	F_dependency& operator=(const F_dependency flag_){flags=flag_.flags; return *this;}
	F_dependency& operator|=(const F_dependency flag_){flags|=flag_.flags; return *this;}
	F_dependency& operator&=(const F_dependency flag_){flags&=flag_.flags; return *this;}
	F_dependency& operator^=(const F_dependency flag_){flags^=flag_.flags;return *this;}
	F_dependency operator~(){return ~flags;}

	bool operator==(const F_dependency flag_){return flags==flag_.flags;}
	bool operator!=(const F_dependency flag_){return !(*this==flag_);}

	F_dependency& clear(){flags = 0;return *this;}
	F_dependency all_flags(){ return b_by_region;}
	F_dependency& on_by_region(){ flags |= b_by_region; return *this; }
	F_dependency& off_by_region(){ flags &= ~b_by_region; return *this; }
};
/*	VkDisplayPlaneAlphaFlagBitsKHR*/
union F_display_plane_alpha_KHR {
	VkDisplayPlaneAlphaFlagsKHR flags;
	VkDisplayPlaneAlphaFlagBitsKHR vk_flag;
	enum {
		b_opaque_khr = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR,
		b_global_khr = VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,
		b_per_pixel_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR,
		b_per_pixel_premultiplied_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR,
	}flag;

	F_display_plane_alpha_KHR():flags(0){}
	F_display_plane_alpha_KHR(const uint32_t flag_):flags(flag_){}

	operator VkDisplayPlaneAlphaFlagBitsKHR&(){return vk_flag;}
	operator VkDisplayPlaneAlphaFlagBitsKHR*(){return &vk_flag; }
	operator VkDisplayPlaneAlphaFlagBitsKHR*()const{return const_cast<VkDisplayPlaneAlphaFlagBitsKHR*const>(&vk_flag); }

	operator VkDisplayPlaneAlphaFlagsKHR&(){return flags; }
	operator VkDisplayPlaneAlphaFlagsKHR*()const{return const_cast<VkDisplayPlaneAlphaFlagsKHR*const>(&flags); }
	operator VkDisplayPlaneAlphaFlagsKHR*(){return &flags; }

	F_display_plane_alpha_KHR& operator=(const F_display_plane_alpha_KHR flag_){flags=flag_.flags; return *this;}
	F_display_plane_alpha_KHR& operator|=(const F_display_plane_alpha_KHR flag_){flags|=flag_.flags; return *this;}
	F_display_plane_alpha_KHR& operator&=(const F_display_plane_alpha_KHR flag_){flags&=flag_.flags; return *this;}
	F_display_plane_alpha_KHR& operator^=(const F_display_plane_alpha_KHR flag_){flags^=flag_.flags;return *this;}
	F_display_plane_alpha_KHR operator~(){return ~flags;}

	bool operator==(const F_display_plane_alpha_KHR flag_){return flags==flag_.flags;}
	bool operator!=(const F_display_plane_alpha_KHR flag_){return !(*this==flag_);}

	F_display_plane_alpha_KHR& clear(){flags = 0;return *this;}
	F_display_plane_alpha_KHR all_flags(){ return b_opaque_khr | b_global_khr | b_per_pixel_khr | b_per_pixel_premultiplied_khr;}
	F_display_plane_alpha_KHR& on_opaque_khr(){ flags |= b_opaque_khr; return *this; }
	F_display_plane_alpha_KHR& off_opaque_khr(){ flags &= ~b_opaque_khr; return *this; }
	F_display_plane_alpha_KHR& on_global_khr(){ flags |= b_global_khr; return *this; }
	F_display_plane_alpha_KHR& off_global_khr(){ flags &= ~b_global_khr; return *this; }
	F_display_plane_alpha_KHR& on_per_pixel_khr(){ flags |= b_per_pixel_khr; return *this; }
	F_display_plane_alpha_KHR& off_per_pixel_khr(){ flags &= ~b_per_pixel_khr; return *this; }
	F_display_plane_alpha_KHR& on_per_pixel_premultiplied_khr(){ flags |= b_per_pixel_premultiplied_khr; return *this; }
	F_display_plane_alpha_KHR& off_per_pixel_premultiplied_khr(){ flags &= ~b_per_pixel_premultiplied_khr; return *this; }
};
/*	VkCompositeAlphaFlagBitsKHR*/
union F_composite_alpha_KHR {
	VkCompositeAlphaFlagsKHR flags;
	VkCompositeAlphaFlagBitsKHR vk_flag;
	enum {
		b_opaque_khr = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
		b_pre_multiplied_khr = VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
		b_post_multiplied_khr = VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
		b_inherit_khr = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
	}flag;

	F_composite_alpha_KHR():flags(0){}
	F_composite_alpha_KHR(const uint32_t flag_):flags(flag_){}

	operator VkCompositeAlphaFlagBitsKHR&(){return vk_flag;}
	operator VkCompositeAlphaFlagBitsKHR*(){return &vk_flag; }
	operator VkCompositeAlphaFlagBitsKHR*()const{return const_cast<VkCompositeAlphaFlagBitsKHR*const>(&vk_flag); }

	operator VkCompositeAlphaFlagsKHR&(){return flags; }
	operator VkCompositeAlphaFlagsKHR*()const{return const_cast<VkCompositeAlphaFlagsKHR*const>(&flags); }
	operator VkCompositeAlphaFlagsKHR*(){return &flags; }

	F_composite_alpha_KHR& operator=(const F_composite_alpha_KHR flag_){flags=flag_.flags; return *this;}
	F_composite_alpha_KHR& operator|=(const F_composite_alpha_KHR flag_){flags|=flag_.flags; return *this;}
	F_composite_alpha_KHR& operator&=(const F_composite_alpha_KHR flag_){flags&=flag_.flags; return *this;}
	F_composite_alpha_KHR& operator^=(const F_composite_alpha_KHR flag_){flags^=flag_.flags;return *this;}
	F_composite_alpha_KHR operator~(){return ~flags;}

	bool operator==(const F_composite_alpha_KHR flag_){return flags==flag_.flags;}
	bool operator!=(const F_composite_alpha_KHR flag_){return !(*this==flag_);}

	F_composite_alpha_KHR& clear(){flags = 0;return *this;}
	F_composite_alpha_KHR all_flags(){ return b_opaque_khr | b_pre_multiplied_khr | b_post_multiplied_khr | b_inherit_khr;}
	F_composite_alpha_KHR& on_opaque_khr(){ flags |= b_opaque_khr; return *this; }
	F_composite_alpha_KHR& off_opaque_khr(){ flags &= ~b_opaque_khr; return *this; }
	F_composite_alpha_KHR& on_pre_multiplied_khr(){ flags |= b_pre_multiplied_khr; return *this; }
	F_composite_alpha_KHR& off_pre_multiplied_khr(){ flags &= ~b_pre_multiplied_khr; return *this; }
	F_composite_alpha_KHR& on_post_multiplied_khr(){ flags |= b_post_multiplied_khr; return *this; }
	F_composite_alpha_KHR& off_post_multiplied_khr(){ flags &= ~b_post_multiplied_khr; return *this; }
	F_composite_alpha_KHR& on_inherit_khr(){ flags |= b_inherit_khr; return *this; }
	F_composite_alpha_KHR& off_inherit_khr(){ flags &= ~b_inherit_khr; return *this; }
};
/*	VkSurfaceTransformFlagBitsKHR*/
union F_surface_transform_KHR {
	VkSurfaceTransformFlagsKHR flags;
	VkSurfaceTransformFlagBitsKHR vk_flag;
	enum {
		b_identity_khr = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR,
		b_rotate_90_khr = VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR,
		b_rotate_180_khr = VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR,
		b_rotate_270_khr = VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR,
		b_horizontal_mirror_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR,
		b_horizontal_mirror_rotate_90_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR,
		b_horizontal_mirror_rotate_180_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR,
		b_horizontal_mirror_rotate_270_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR,
		b_inherit_khr = VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR,
	}flag;

	F_surface_transform_KHR():flags(0){}
	F_surface_transform_KHR(const uint32_t flag_):flags(flag_){}

	operator VkSurfaceTransformFlagBitsKHR&(){return vk_flag;}
	operator VkSurfaceTransformFlagBitsKHR*(){return &vk_flag; }
	operator VkSurfaceTransformFlagBitsKHR*()const{return const_cast<VkSurfaceTransformFlagBitsKHR*const>(&vk_flag); }

	operator VkSurfaceTransformFlagsKHR&(){return flags; }
	operator VkSurfaceTransformFlagsKHR*()const{return const_cast<VkSurfaceTransformFlagsKHR*const>(&flags); }
	operator VkSurfaceTransformFlagsKHR*(){return &flags; }

	F_surface_transform_KHR& operator=(const F_surface_transform_KHR flag_){flags=flag_.flags; return *this;}
	F_surface_transform_KHR& operator|=(const F_surface_transform_KHR flag_){flags|=flag_.flags; return *this;}
	F_surface_transform_KHR& operator&=(const F_surface_transform_KHR flag_){flags&=flag_.flags; return *this;}
	F_surface_transform_KHR& operator^=(const F_surface_transform_KHR flag_){flags^=flag_.flags;return *this;}
	F_surface_transform_KHR operator~(){return ~flags;}

	bool operator==(const F_surface_transform_KHR flag_){return flags==flag_.flags;}
	bool operator!=(const F_surface_transform_KHR flag_){return !(*this==flag_);}

	F_surface_transform_KHR& clear(){flags = 0;return *this;}
	F_surface_transform_KHR all_flags(){ return b_identity_khr | b_rotate_90_khr | b_rotate_180_khr | b_rotate_270_khr | b_horizontal_mirror_khr | b_horizontal_mirror_rotate_90_khr | b_horizontal_mirror_rotate_180_khr | b_horizontal_mirror_rotate_270_khr | b_inherit_khr;}
	F_surface_transform_KHR& on_identity_khr(){ flags |= b_identity_khr; return *this; }
	F_surface_transform_KHR& off_identity_khr(){ flags &= ~b_identity_khr; return *this; }
	F_surface_transform_KHR& on_rotate_90_khr(){ flags |= b_rotate_90_khr; return *this; }
	F_surface_transform_KHR& off_rotate_90_khr(){ flags &= ~b_rotate_90_khr; return *this; }
	F_surface_transform_KHR& on_rotate_180_khr(){ flags |= b_rotate_180_khr; return *this; }
	F_surface_transform_KHR& off_rotate_180_khr(){ flags &= ~b_rotate_180_khr; return *this; }
	F_surface_transform_KHR& on_rotate_270_khr(){ flags |= b_rotate_270_khr; return *this; }
	F_surface_transform_KHR& off_rotate_270_khr(){ flags &= ~b_rotate_270_khr; return *this; }
	F_surface_transform_KHR& on_horizontal_mirror_khr(){ flags |= b_horizontal_mirror_khr; return *this; }
	F_surface_transform_KHR& off_horizontal_mirror_khr(){ flags &= ~b_horizontal_mirror_khr; return *this; }
	F_surface_transform_KHR& on_horizontal_mirror_rotate_90_khr(){ flags |= b_horizontal_mirror_rotate_90_khr; return *this; }
	F_surface_transform_KHR& off_horizontal_mirror_rotate_90_khr(){ flags &= ~b_horizontal_mirror_rotate_90_khr; return *this; }
	F_surface_transform_KHR& on_horizontal_mirror_rotate_180_khr(){ flags |= b_horizontal_mirror_rotate_180_khr; return *this; }
	F_surface_transform_KHR& off_horizontal_mirror_rotate_180_khr(){ flags &= ~b_horizontal_mirror_rotate_180_khr; return *this; }
	F_surface_transform_KHR& on_horizontal_mirror_rotate_270_khr(){ flags |= b_horizontal_mirror_rotate_270_khr; return *this; }
	F_surface_transform_KHR& off_horizontal_mirror_rotate_270_khr(){ flags &= ~b_horizontal_mirror_rotate_270_khr; return *this; }
	F_surface_transform_KHR& on_inherit_khr(){ flags |= b_inherit_khr; return *this; }
	F_surface_transform_KHR& off_inherit_khr(){ flags &= ~b_inherit_khr; return *this; }
};
/*	VkDebugReportFlagBitsEXT*/
union F_debug_report_EXT {
	VkDebugReportFlagsEXT flags;
	VkDebugReportFlagBitsEXT vk_flag;
	enum {
		b_information_ext = VK_DEBUG_REPORT_INFORMATION_BIT_EXT,
		b_warning_ext = VK_DEBUG_REPORT_WARNING_BIT_EXT,
		b_performance_warning_ext = VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT,
		b_error_ext = VK_DEBUG_REPORT_ERROR_BIT_EXT,
		b_debug_ext = VK_DEBUG_REPORT_DEBUG_BIT_EXT,
	}flag;

	F_debug_report_EXT():flags(0){}
	F_debug_report_EXT(const uint32_t flag_):flags(flag_){}

	operator VkDebugReportFlagBitsEXT&(){return vk_flag;}
	operator VkDebugReportFlagBitsEXT*(){return &vk_flag; }
	operator VkDebugReportFlagBitsEXT*()const{return const_cast<VkDebugReportFlagBitsEXT*const>(&vk_flag); }

	operator VkDebugReportFlagsEXT&(){return flags; }
	operator VkDebugReportFlagsEXT*()const{return const_cast<VkDebugReportFlagsEXT*const>(&flags); }
	operator VkDebugReportFlagsEXT*(){return &flags; }

	F_debug_report_EXT& operator=(const F_debug_report_EXT flag_){flags=flag_.flags; return *this;}
	F_debug_report_EXT& operator|=(const F_debug_report_EXT flag_){flags|=flag_.flags; return *this;}
	F_debug_report_EXT& operator&=(const F_debug_report_EXT flag_){flags&=flag_.flags; return *this;}
	F_debug_report_EXT& operator^=(const F_debug_report_EXT flag_){flags^=flag_.flags;return *this;}
	F_debug_report_EXT operator~(){return ~flags;}

	bool operator==(const F_debug_report_EXT flag_){return flags==flag_.flags;}
	bool operator!=(const F_debug_report_EXT flag_){return !(*this==flag_);}

	F_debug_report_EXT& clear(){flags = 0;return *this;}
	F_debug_report_EXT all_flags(){ return b_information_ext | b_warning_ext | b_performance_warning_ext | b_error_ext | b_debug_ext;}
	F_debug_report_EXT& on_information_ext(){ flags |= b_information_ext; return *this; }
	F_debug_report_EXT& off_information_ext(){ flags &= ~b_information_ext; return *this; }
	F_debug_report_EXT& on_warning_ext(){ flags |= b_warning_ext; return *this; }
	F_debug_report_EXT& off_warning_ext(){ flags &= ~b_warning_ext; return *this; }
	F_debug_report_EXT& on_performance_warning_ext(){ flags |= b_performance_warning_ext; return *this; }
	F_debug_report_EXT& off_performance_warning_ext(){ flags &= ~b_performance_warning_ext; return *this; }
	F_debug_report_EXT& on_error_ext(){ flags |= b_error_ext; return *this; }
	F_debug_report_EXT& off_error_ext(){ flags &= ~b_error_ext; return *this; }
	F_debug_report_EXT& on_debug_ext(){ flags |= b_debug_ext; return *this; }
	F_debug_report_EXT& off_debug_ext(){ flags &= ~b_debug_ext; return *this; }
};
/*	VkExternalMemoryHandleTypeFlagBitsNV*/
union F_external_memory_handle_type_NV {
	VkExternalMemoryHandleTypeFlagsNV flags;
	VkExternalMemoryHandleTypeFlagBitsNV vk_flag;
	enum {
		b_opaque_win32_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV,
		b_opaque_win32_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV,
		b_d3d11_image_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV,
		b_d3d11_image_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV,
	}flag;

	F_external_memory_handle_type_NV():flags(0){}
	F_external_memory_handle_type_NV(const uint32_t flag_):flags(flag_){}

	operator VkExternalMemoryHandleTypeFlagBitsNV&(){return vk_flag;}
	operator VkExternalMemoryHandleTypeFlagBitsNV*(){return &vk_flag; }
	operator VkExternalMemoryHandleTypeFlagBitsNV*()const{return const_cast<VkExternalMemoryHandleTypeFlagBitsNV*const>(&vk_flag); }

	operator VkExternalMemoryHandleTypeFlagsNV&(){return flags; }
	operator VkExternalMemoryHandleTypeFlagsNV*()const{return const_cast<VkExternalMemoryHandleTypeFlagsNV*const>(&flags); }
	operator VkExternalMemoryHandleTypeFlagsNV*(){return &flags; }

	F_external_memory_handle_type_NV& operator=(const F_external_memory_handle_type_NV flag_){flags=flag_.flags; return *this;}
	F_external_memory_handle_type_NV& operator|=(const F_external_memory_handle_type_NV flag_){flags|=flag_.flags; return *this;}
	F_external_memory_handle_type_NV& operator&=(const F_external_memory_handle_type_NV flag_){flags&=flag_.flags; return *this;}
	F_external_memory_handle_type_NV& operator^=(const F_external_memory_handle_type_NV flag_){flags^=flag_.flags;return *this;}
	F_external_memory_handle_type_NV operator~(){return ~flags;}

	bool operator==(const F_external_memory_handle_type_NV flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_memory_handle_type_NV flag_){return !(*this==flag_);}

	F_external_memory_handle_type_NV& clear(){flags = 0;return *this;}
	F_external_memory_handle_type_NV all_flags(){ return b_opaque_win32_nv | b_opaque_win32_kmt_nv | b_d3d11_image_nv | b_d3d11_image_kmt_nv;}
	F_external_memory_handle_type_NV& on_opaque_win32_nv(){ flags |= b_opaque_win32_nv; return *this; }
	F_external_memory_handle_type_NV& off_opaque_win32_nv(){ flags &= ~b_opaque_win32_nv; return *this; }
	F_external_memory_handle_type_NV& on_opaque_win32_kmt_nv(){ flags |= b_opaque_win32_kmt_nv; return *this; }
	F_external_memory_handle_type_NV& off_opaque_win32_kmt_nv(){ flags &= ~b_opaque_win32_kmt_nv; return *this; }
	F_external_memory_handle_type_NV& on_d3d11_image_nv(){ flags |= b_d3d11_image_nv; return *this; }
	F_external_memory_handle_type_NV& off_d3d11_image_nv(){ flags &= ~b_d3d11_image_nv; return *this; }
	F_external_memory_handle_type_NV& on_d3d11_image_kmt_nv(){ flags |= b_d3d11_image_kmt_nv; return *this; }
	F_external_memory_handle_type_NV& off_d3d11_image_kmt_nv(){ flags &= ~b_d3d11_image_kmt_nv; return *this; }
};
/*	VkExternalMemoryFeatureFlagBitsNV*/
union F_external_memory_feature_NV {
	VkExternalMemoryFeatureFlagsNV flags;
	VkExternalMemoryFeatureFlagBitsNV vk_flag;
	enum {
		b_dedicated_only_nv = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV,
		b_exportable_nv = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV,
		b_importable_nv = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV,
	}flag;

	F_external_memory_feature_NV():flags(0){}
	F_external_memory_feature_NV(const uint32_t flag_):flags(flag_){}

	operator VkExternalMemoryFeatureFlagBitsNV&(){return vk_flag;}
	operator VkExternalMemoryFeatureFlagBitsNV*(){return &vk_flag; }
	operator VkExternalMemoryFeatureFlagBitsNV*()const{return const_cast<VkExternalMemoryFeatureFlagBitsNV*const>(&vk_flag); }

	operator VkExternalMemoryFeatureFlagsNV&(){return flags; }
	operator VkExternalMemoryFeatureFlagsNV*()const{return const_cast<VkExternalMemoryFeatureFlagsNV*const>(&flags); }
	operator VkExternalMemoryFeatureFlagsNV*(){return &flags; }

	F_external_memory_feature_NV& operator=(const F_external_memory_feature_NV flag_){flags=flag_.flags; return *this;}
	F_external_memory_feature_NV& operator|=(const F_external_memory_feature_NV flag_){flags|=flag_.flags; return *this;}
	F_external_memory_feature_NV& operator&=(const F_external_memory_feature_NV flag_){flags&=flag_.flags; return *this;}
	F_external_memory_feature_NV& operator^=(const F_external_memory_feature_NV flag_){flags^=flag_.flags;return *this;}
	F_external_memory_feature_NV operator~(){return ~flags;}

	bool operator==(const F_external_memory_feature_NV flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_memory_feature_NV flag_){return !(*this==flag_);}

	F_external_memory_feature_NV& clear(){flags = 0;return *this;}
	F_external_memory_feature_NV all_flags(){ return b_dedicated_only_nv | b_exportable_nv | b_importable_nv;}
	F_external_memory_feature_NV& on_dedicated_only_nv(){ flags |= b_dedicated_only_nv; return *this; }
	F_external_memory_feature_NV& off_dedicated_only_nv(){ flags &= ~b_dedicated_only_nv; return *this; }
	F_external_memory_feature_NV& on_exportable_nv(){ flags |= b_exportable_nv; return *this; }
	F_external_memory_feature_NV& off_exportable_nv(){ flags &= ~b_exportable_nv; return *this; }
	F_external_memory_feature_NV& on_importable_nv(){ flags |= b_importable_nv; return *this; }
	F_external_memory_feature_NV& off_importable_nv(){ flags &= ~b_importable_nv; return *this; }
};
/*	VkSubgroupFeatureFlagBits*/
union F_subgroup_feature {
	VkSubgroupFeatureFlags flags;
	VkSubgroupFeatureFlagBits vk_flag;
	enum {
			/* Basic subgroup operations */
		b_basic = VK_SUBGROUP_FEATURE_BASIC_BIT,
			/* Vote subgroup operations */
		b_vote = VK_SUBGROUP_FEATURE_VOTE_BIT,
			/* Arithmetic subgroup operations */
		b_arithmetic = VK_SUBGROUP_FEATURE_ARITHMETIC_BIT,
			/* Ballot subgroup operations */
		b_ballot = VK_SUBGROUP_FEATURE_BALLOT_BIT,
			/* Shuffle subgroup operations */
		b_shuffle = VK_SUBGROUP_FEATURE_SHUFFLE_BIT,
			/* Shuffle relative subgroup operations */
		b_shuffle_relative = VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT,
			/* Clustered subgroup operations */
		b_clustered = VK_SUBGROUP_FEATURE_CLUSTERED_BIT,
			/* Quad subgroup operations */
		b_quad = VK_SUBGROUP_FEATURE_QUAD_BIT,
	}flag;

	F_subgroup_feature():flags(0){}
	F_subgroup_feature(const uint32_t flag_):flags(flag_){}

	operator VkSubgroupFeatureFlagBits&(){return vk_flag;}
	operator VkSubgroupFeatureFlagBits*(){return &vk_flag; }
	operator VkSubgroupFeatureFlagBits*()const{return const_cast<VkSubgroupFeatureFlagBits*const>(&vk_flag); }

	operator VkSubgroupFeatureFlags&(){return flags; }
	operator VkSubgroupFeatureFlags*()const{return const_cast<VkSubgroupFeatureFlags*const>(&flags); }
	operator VkSubgroupFeatureFlags*(){return &flags; }

	F_subgroup_feature& operator=(const F_subgroup_feature flag_){flags=flag_.flags; return *this;}
	F_subgroup_feature& operator|=(const F_subgroup_feature flag_){flags|=flag_.flags; return *this;}
	F_subgroup_feature& operator&=(const F_subgroup_feature flag_){flags&=flag_.flags; return *this;}
	F_subgroup_feature& operator^=(const F_subgroup_feature flag_){flags^=flag_.flags;return *this;}
	F_subgroup_feature operator~(){return ~flags;}

	bool operator==(const F_subgroup_feature flag_){return flags==flag_.flags;}
	bool operator!=(const F_subgroup_feature flag_){return !(*this==flag_);}

	F_subgroup_feature& clear(){flags = 0;return *this;}
	F_subgroup_feature all_flags(){ return b_basic | b_vote | b_arithmetic | b_ballot | b_shuffle | b_shuffle_relative | b_clustered | b_quad;}
	F_subgroup_feature& on_basic(){ flags |= b_basic; return *this; }
	F_subgroup_feature& off_basic(){ flags &= ~b_basic; return *this; }
	F_subgroup_feature& on_vote(){ flags |= b_vote; return *this; }
	F_subgroup_feature& off_vote(){ flags &= ~b_vote; return *this; }
	F_subgroup_feature& on_arithmetic(){ flags |= b_arithmetic; return *this; }
	F_subgroup_feature& off_arithmetic(){ flags &= ~b_arithmetic; return *this; }
	F_subgroup_feature& on_ballot(){ flags |= b_ballot; return *this; }
	F_subgroup_feature& off_ballot(){ flags &= ~b_ballot; return *this; }
	F_subgroup_feature& on_shuffle(){ flags |= b_shuffle; return *this; }
	F_subgroup_feature& off_shuffle(){ flags &= ~b_shuffle; return *this; }
	F_subgroup_feature& on_shuffle_relative(){ flags |= b_shuffle_relative; return *this; }
	F_subgroup_feature& off_shuffle_relative(){ flags &= ~b_shuffle_relative; return *this; }
	F_subgroup_feature& on_clustered(){ flags |= b_clustered; return *this; }
	F_subgroup_feature& off_clustered(){ flags &= ~b_clustered; return *this; }
	F_subgroup_feature& on_quad(){ flags |= b_quad; return *this; }
	F_subgroup_feature& off_quad(){ flags &= ~b_quad; return *this; }
};
/*	VkIndirectCommandsLayoutUsageFlagBitsNVX*/
union F_indirect_commands_layout_usage_NVX {
	VkIndirectCommandsLayoutUsageFlagsNVX flags;
	VkIndirectCommandsLayoutUsageFlagBitsNVX vk_flag;
	enum {
		b_unordered_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX,
		b_sparse_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX,
		b_empty_executions_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX,
		b_indexed_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX,
	}flag;

	F_indirect_commands_layout_usage_NVX():flags(0){}
	F_indirect_commands_layout_usage_NVX(const uint32_t flag_):flags(flag_){}

	operator VkIndirectCommandsLayoutUsageFlagBitsNVX&(){return vk_flag;}
	operator VkIndirectCommandsLayoutUsageFlagBitsNVX*(){return &vk_flag; }
	operator VkIndirectCommandsLayoutUsageFlagBitsNVX*()const{return const_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX*const>(&vk_flag); }

	operator VkIndirectCommandsLayoutUsageFlagsNVX&(){return flags; }
	operator VkIndirectCommandsLayoutUsageFlagsNVX*()const{return const_cast<VkIndirectCommandsLayoutUsageFlagsNVX*const>(&flags); }
	operator VkIndirectCommandsLayoutUsageFlagsNVX*(){return &flags; }

	F_indirect_commands_layout_usage_NVX& operator=(const F_indirect_commands_layout_usage_NVX flag_){flags=flag_.flags; return *this;}
	F_indirect_commands_layout_usage_NVX& operator|=(const F_indirect_commands_layout_usage_NVX flag_){flags|=flag_.flags; return *this;}
	F_indirect_commands_layout_usage_NVX& operator&=(const F_indirect_commands_layout_usage_NVX flag_){flags&=flag_.flags; return *this;}
	F_indirect_commands_layout_usage_NVX& operator^=(const F_indirect_commands_layout_usage_NVX flag_){flags^=flag_.flags;return *this;}
	F_indirect_commands_layout_usage_NVX operator~(){return ~flags;}

	bool operator==(const F_indirect_commands_layout_usage_NVX flag_){return flags==flag_.flags;}
	bool operator!=(const F_indirect_commands_layout_usage_NVX flag_){return !(*this==flag_);}

	F_indirect_commands_layout_usage_NVX& clear(){flags = 0;return *this;}
	F_indirect_commands_layout_usage_NVX all_flags(){ return b_unordered_sequences_nvx | b_sparse_sequences_nvx | b_empty_executions_nvx | b_indexed_sequences_nvx;}
	F_indirect_commands_layout_usage_NVX& on_unordered_sequences_nvx(){ flags |= b_unordered_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_unordered_sequences_nvx(){ flags &= ~b_unordered_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& on_sparse_sequences_nvx(){ flags |= b_sparse_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_sparse_sequences_nvx(){ flags &= ~b_sparse_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& on_empty_executions_nvx(){ flags |= b_empty_executions_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_empty_executions_nvx(){ flags &= ~b_empty_executions_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& on_indexed_sequences_nvx(){ flags |= b_indexed_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_indexed_sequences_nvx(){ flags &= ~b_indexed_sequences_nvx; return *this; }
};
/*	VkObjectEntryUsageFlagBitsNVX*/
union F_object_entry_usage_NVX {
	VkObjectEntryUsageFlagsNVX flags;
	VkObjectEntryUsageFlagBitsNVX vk_flag;
	enum {
		b_graphics_nvx = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX,
		b_compute_nvx = VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX,
	}flag;

	F_object_entry_usage_NVX():flags(0){}
	F_object_entry_usage_NVX(const uint32_t flag_):flags(flag_){}

	operator VkObjectEntryUsageFlagBitsNVX&(){return vk_flag;}
	operator VkObjectEntryUsageFlagBitsNVX*(){return &vk_flag; }
	operator VkObjectEntryUsageFlagBitsNVX*()const{return const_cast<VkObjectEntryUsageFlagBitsNVX*const>(&vk_flag); }

	operator VkObjectEntryUsageFlagsNVX&(){return flags; }
	operator VkObjectEntryUsageFlagsNVX*()const{return const_cast<VkObjectEntryUsageFlagsNVX*const>(&flags); }
	operator VkObjectEntryUsageFlagsNVX*(){return &flags; }

	F_object_entry_usage_NVX& operator=(const F_object_entry_usage_NVX flag_){flags=flag_.flags; return *this;}
	F_object_entry_usage_NVX& operator|=(const F_object_entry_usage_NVX flag_){flags|=flag_.flags; return *this;}
	F_object_entry_usage_NVX& operator&=(const F_object_entry_usage_NVX flag_){flags&=flag_.flags; return *this;}
	F_object_entry_usage_NVX& operator^=(const F_object_entry_usage_NVX flag_){flags^=flag_.flags;return *this;}
	F_object_entry_usage_NVX operator~(){return ~flags;}

	bool operator==(const F_object_entry_usage_NVX flag_){return flags==flag_.flags;}
	bool operator!=(const F_object_entry_usage_NVX flag_){return !(*this==flag_);}

	F_object_entry_usage_NVX& clear(){flags = 0;return *this;}
	F_object_entry_usage_NVX all_flags(){ return b_graphics_nvx | b_compute_nvx;}
	F_object_entry_usage_NVX& on_graphics_nvx(){ flags |= b_graphics_nvx; return *this; }
	F_object_entry_usage_NVX& off_graphics_nvx(){ flags &= ~b_graphics_nvx; return *this; }
	F_object_entry_usage_NVX& on_compute_nvx(){ flags |= b_compute_nvx; return *this; }
	F_object_entry_usage_NVX& off_compute_nvx(){ flags &= ~b_compute_nvx; return *this; }
};
/*	VkDescriptorSetLayoutCreateFlagBits*/
using F_descriptor_set_layout_create = 
			VkDescriptorSetLayoutCreateFlagBits;

/*	VkExternalMemoryHandleTypeFlagBits*/
union F_external_memory_handle_type {
	VkExternalMemoryHandleTypeFlags flags;
	VkExternalMemoryHandleTypeFlagBits vk_flag;
	enum {
		b_opaque_fd = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT,
		b_opaque_win32 = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT,
		b_opaque_win32_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
		b_d3d11_texture = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT,
		b_d3d11_texture_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT,
		b_d3d12_heap = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT,
		b_d3d12_resource = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT,
	}flag;

	F_external_memory_handle_type():flags(0){}
	F_external_memory_handle_type(const uint32_t flag_):flags(flag_){}

	operator VkExternalMemoryHandleTypeFlagBits&(){return vk_flag;}
	operator VkExternalMemoryHandleTypeFlagBits*(){return &vk_flag; }
	operator VkExternalMemoryHandleTypeFlagBits*()const{return const_cast<VkExternalMemoryHandleTypeFlagBits*const>(&vk_flag); }

	operator VkExternalMemoryHandleTypeFlags&(){return flags; }
	operator VkExternalMemoryHandleTypeFlags*()const{return const_cast<VkExternalMemoryHandleTypeFlags*const>(&flags); }
	operator VkExternalMemoryHandleTypeFlags*(){return &flags; }

	F_external_memory_handle_type& operator=(const F_external_memory_handle_type flag_){flags=flag_.flags; return *this;}
	F_external_memory_handle_type& operator|=(const F_external_memory_handle_type flag_){flags|=flag_.flags; return *this;}
	F_external_memory_handle_type& operator&=(const F_external_memory_handle_type flag_){flags&=flag_.flags; return *this;}
	F_external_memory_handle_type& operator^=(const F_external_memory_handle_type flag_){flags^=flag_.flags;return *this;}
	F_external_memory_handle_type operator~(){return ~flags;}

	bool operator==(const F_external_memory_handle_type flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_memory_handle_type flag_){return !(*this==flag_);}

	F_external_memory_handle_type& clear(){flags = 0;return *this;}
	F_external_memory_handle_type all_flags(){ return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_d3d11_texture | b_d3d11_texture_kmt | b_d3d12_heap | b_d3d12_resource;}
	F_external_memory_handle_type& on_opaque_fd(){ flags |= b_opaque_fd; return *this; }
	F_external_memory_handle_type& off_opaque_fd(){ flags &= ~b_opaque_fd; return *this; }
	F_external_memory_handle_type& on_opaque_win32(){ flags |= b_opaque_win32; return *this; }
	F_external_memory_handle_type& off_opaque_win32(){ flags &= ~b_opaque_win32; return *this; }
	F_external_memory_handle_type& on_opaque_win32_kmt(){ flags |= b_opaque_win32_kmt; return *this; }
	F_external_memory_handle_type& off_opaque_win32_kmt(){ flags &= ~b_opaque_win32_kmt; return *this; }
	F_external_memory_handle_type& on_d3d11_texture(){ flags |= b_d3d11_texture; return *this; }
	F_external_memory_handle_type& off_d3d11_texture(){ flags &= ~b_d3d11_texture; return *this; }
	F_external_memory_handle_type& on_d3d11_texture_kmt(){ flags |= b_d3d11_texture_kmt; return *this; }
	F_external_memory_handle_type& off_d3d11_texture_kmt(){ flags &= ~b_d3d11_texture_kmt; return *this; }
	F_external_memory_handle_type& on_d3d12_heap(){ flags |= b_d3d12_heap; return *this; }
	F_external_memory_handle_type& off_d3d12_heap(){ flags &= ~b_d3d12_heap; return *this; }
	F_external_memory_handle_type& on_d3d12_resource(){ flags |= b_d3d12_resource; return *this; }
	F_external_memory_handle_type& off_d3d12_resource(){ flags &= ~b_d3d12_resource; return *this; }
};
/*	VkExternalMemoryFeatureFlagBits*/
union F_external_memory_feature {
	VkExternalMemoryFeatureFlags flags;
	VkExternalMemoryFeatureFlagBits vk_flag;
	enum {
		b_dedicated_only = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT,
		b_exportable = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT,
		b_importable = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT,
	}flag;

	F_external_memory_feature():flags(0){}
	F_external_memory_feature(const uint32_t flag_):flags(flag_){}

	operator VkExternalMemoryFeatureFlagBits&(){return vk_flag;}
	operator VkExternalMemoryFeatureFlagBits*(){return &vk_flag; }
	operator VkExternalMemoryFeatureFlagBits*()const{return const_cast<VkExternalMemoryFeatureFlagBits*const>(&vk_flag); }

	operator VkExternalMemoryFeatureFlags&(){return flags; }
	operator VkExternalMemoryFeatureFlags*()const{return const_cast<VkExternalMemoryFeatureFlags*const>(&flags); }
	operator VkExternalMemoryFeatureFlags*(){return &flags; }

	F_external_memory_feature& operator=(const F_external_memory_feature flag_){flags=flag_.flags; return *this;}
	F_external_memory_feature& operator|=(const F_external_memory_feature flag_){flags|=flag_.flags; return *this;}
	F_external_memory_feature& operator&=(const F_external_memory_feature flag_){flags&=flag_.flags; return *this;}
	F_external_memory_feature& operator^=(const F_external_memory_feature flag_){flags^=flag_.flags;return *this;}
	F_external_memory_feature operator~(){return ~flags;}

	bool operator==(const F_external_memory_feature flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_memory_feature flag_){return !(*this==flag_);}

	F_external_memory_feature& clear(){flags = 0;return *this;}
	F_external_memory_feature all_flags(){ return b_dedicated_only | b_exportable | b_importable;}
	F_external_memory_feature& on_dedicated_only(){ flags |= b_dedicated_only; return *this; }
	F_external_memory_feature& off_dedicated_only(){ flags &= ~b_dedicated_only; return *this; }
	F_external_memory_feature& on_exportable(){ flags |= b_exportable; return *this; }
	F_external_memory_feature& off_exportable(){ flags &= ~b_exportable; return *this; }
	F_external_memory_feature& on_importable(){ flags |= b_importable; return *this; }
	F_external_memory_feature& off_importable(){ flags &= ~b_importable; return *this; }
};
/*	VkExternalSemaphoreHandleTypeFlagBits*/
union F_external_semaphore_handle_type {
	VkExternalSemaphoreHandleTypeFlags flags;
	VkExternalSemaphoreHandleTypeFlagBits vk_flag;
	enum {
		b_opaque_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT,
		b_opaque_win32 = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
		b_opaque_win32_kmt = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
		b_d3d12_fence = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,
		b_sync_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT,
	}flag;

	F_external_semaphore_handle_type():flags(0){}
	F_external_semaphore_handle_type(const uint32_t flag_):flags(flag_){}

	operator VkExternalSemaphoreHandleTypeFlagBits&(){return vk_flag;}
	operator VkExternalSemaphoreHandleTypeFlagBits*(){return &vk_flag; }
	operator VkExternalSemaphoreHandleTypeFlagBits*()const{return const_cast<VkExternalSemaphoreHandleTypeFlagBits*const>(&vk_flag); }

	operator VkExternalSemaphoreHandleTypeFlags&(){return flags; }
	operator VkExternalSemaphoreHandleTypeFlags*()const{return const_cast<VkExternalSemaphoreHandleTypeFlags*const>(&flags); }
	operator VkExternalSemaphoreHandleTypeFlags*(){return &flags; }

	F_external_semaphore_handle_type& operator=(const F_external_semaphore_handle_type flag_){flags=flag_.flags; return *this;}
	F_external_semaphore_handle_type& operator|=(const F_external_semaphore_handle_type flag_){flags|=flag_.flags; return *this;}
	F_external_semaphore_handle_type& operator&=(const F_external_semaphore_handle_type flag_){flags&=flag_.flags; return *this;}
	F_external_semaphore_handle_type& operator^=(const F_external_semaphore_handle_type flag_){flags^=flag_.flags;return *this;}
	F_external_semaphore_handle_type operator~(){return ~flags;}

	bool operator==(const F_external_semaphore_handle_type flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_semaphore_handle_type flag_){return !(*this==flag_);}

	F_external_semaphore_handle_type& clear(){flags = 0;return *this;}
	F_external_semaphore_handle_type all_flags(){ return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_d3d12_fence | b_sync_fd;}
	F_external_semaphore_handle_type& on_opaque_fd(){ flags |= b_opaque_fd; return *this; }
	F_external_semaphore_handle_type& off_opaque_fd(){ flags &= ~b_opaque_fd; return *this; }
	F_external_semaphore_handle_type& on_opaque_win32(){ flags |= b_opaque_win32; return *this; }
	F_external_semaphore_handle_type& off_opaque_win32(){ flags &= ~b_opaque_win32; return *this; }
	F_external_semaphore_handle_type& on_opaque_win32_kmt(){ flags |= b_opaque_win32_kmt; return *this; }
	F_external_semaphore_handle_type& off_opaque_win32_kmt(){ flags &= ~b_opaque_win32_kmt; return *this; }
	F_external_semaphore_handle_type& on_d3d12_fence(){ flags |= b_d3d12_fence; return *this; }
	F_external_semaphore_handle_type& off_d3d12_fence(){ flags &= ~b_d3d12_fence; return *this; }
	F_external_semaphore_handle_type& on_sync_fd(){ flags |= b_sync_fd; return *this; }
	F_external_semaphore_handle_type& off_sync_fd(){ flags &= ~b_sync_fd; return *this; }
};
/*	VkExternalSemaphoreFeatureFlagBits*/
union F_external_semaphore_feature {
	VkExternalSemaphoreFeatureFlags flags;
	VkExternalSemaphoreFeatureFlagBits vk_flag;
	enum {
		b_exportable = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,
		b_importable = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,
	}flag;

	F_external_semaphore_feature():flags(0){}
	F_external_semaphore_feature(const uint32_t flag_):flags(flag_){}

	operator VkExternalSemaphoreFeatureFlagBits&(){return vk_flag;}
	operator VkExternalSemaphoreFeatureFlagBits*(){return &vk_flag; }
	operator VkExternalSemaphoreFeatureFlagBits*()const{return const_cast<VkExternalSemaphoreFeatureFlagBits*const>(&vk_flag); }

	operator VkExternalSemaphoreFeatureFlags&(){return flags; }
	operator VkExternalSemaphoreFeatureFlags*()const{return const_cast<VkExternalSemaphoreFeatureFlags*const>(&flags); }
	operator VkExternalSemaphoreFeatureFlags*(){return &flags; }

	F_external_semaphore_feature& operator=(const F_external_semaphore_feature flag_){flags=flag_.flags; return *this;}
	F_external_semaphore_feature& operator|=(const F_external_semaphore_feature flag_){flags|=flag_.flags; return *this;}
	F_external_semaphore_feature& operator&=(const F_external_semaphore_feature flag_){flags&=flag_.flags; return *this;}
	F_external_semaphore_feature& operator^=(const F_external_semaphore_feature flag_){flags^=flag_.flags;return *this;}
	F_external_semaphore_feature operator~(){return ~flags;}

	bool operator==(const F_external_semaphore_feature flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_semaphore_feature flag_){return !(*this==flag_);}

	F_external_semaphore_feature& clear(){flags = 0;return *this;}
	F_external_semaphore_feature all_flags(){ return b_exportable | b_importable;}
	F_external_semaphore_feature& on_exportable(){ flags |= b_exportable; return *this; }
	F_external_semaphore_feature& off_exportable(){ flags &= ~b_exportable; return *this; }
	F_external_semaphore_feature& on_importable(){ flags |= b_importable; return *this; }
	F_external_semaphore_feature& off_importable(){ flags &= ~b_importable; return *this; }
};
/*	VkSemaphoreImportFlagBits*/
union F_semaphore_import {
	VkSemaphoreImportFlags flags;
	VkSemaphoreImportFlagBits vk_flag;
	enum {
		b_temporary = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
	}flag;

	F_semaphore_import():flags(0){}
	F_semaphore_import(const uint32_t flag_):flags(flag_){}

	operator VkSemaphoreImportFlagBits&(){return vk_flag;}
	operator VkSemaphoreImportFlagBits*(){return &vk_flag; }
	operator VkSemaphoreImportFlagBits*()const{return const_cast<VkSemaphoreImportFlagBits*const>(&vk_flag); }

	operator VkSemaphoreImportFlags&(){return flags; }
	operator VkSemaphoreImportFlags*()const{return const_cast<VkSemaphoreImportFlags*const>(&flags); }
	operator VkSemaphoreImportFlags*(){return &flags; }

	F_semaphore_import& operator=(const F_semaphore_import flag_){flags=flag_.flags; return *this;}
	F_semaphore_import& operator|=(const F_semaphore_import flag_){flags|=flag_.flags; return *this;}
	F_semaphore_import& operator&=(const F_semaphore_import flag_){flags&=flag_.flags; return *this;}
	F_semaphore_import& operator^=(const F_semaphore_import flag_){flags^=flag_.flags;return *this;}
	F_semaphore_import operator~(){return ~flags;}

	bool operator==(const F_semaphore_import flag_){return flags==flag_.flags;}
	bool operator!=(const F_semaphore_import flag_){return !(*this==flag_);}

	F_semaphore_import& clear(){flags = 0;return *this;}
	F_semaphore_import all_flags(){ return b_temporary;}
	F_semaphore_import& on_temporary(){ flags |= b_temporary; return *this; }
	F_semaphore_import& off_temporary(){ flags &= ~b_temporary; return *this; }
};
/*	VkExternalFenceHandleTypeFlagBits*/
union F_external_fence_handle_type {
	VkExternalFenceHandleTypeFlags flags;
	VkExternalFenceHandleTypeFlagBits vk_flag;
	enum {
		b_opaque_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT,
		b_opaque_win32 = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
		b_opaque_win32_kmt = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
		b_sync_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT,
	}flag;

	F_external_fence_handle_type():flags(0){}
	F_external_fence_handle_type(const uint32_t flag_):flags(flag_){}

	operator VkExternalFenceHandleTypeFlagBits&(){return vk_flag;}
	operator VkExternalFenceHandleTypeFlagBits*(){return &vk_flag; }
	operator VkExternalFenceHandleTypeFlagBits*()const{return const_cast<VkExternalFenceHandleTypeFlagBits*const>(&vk_flag); }

	operator VkExternalFenceHandleTypeFlags&(){return flags; }
	operator VkExternalFenceHandleTypeFlags*()const{return const_cast<VkExternalFenceHandleTypeFlags*const>(&flags); }
	operator VkExternalFenceHandleTypeFlags*(){return &flags; }

	F_external_fence_handle_type& operator=(const F_external_fence_handle_type flag_){flags=flag_.flags; return *this;}
	F_external_fence_handle_type& operator|=(const F_external_fence_handle_type flag_){flags|=flag_.flags; return *this;}
	F_external_fence_handle_type& operator&=(const F_external_fence_handle_type flag_){flags&=flag_.flags; return *this;}
	F_external_fence_handle_type& operator^=(const F_external_fence_handle_type flag_){flags^=flag_.flags;return *this;}
	F_external_fence_handle_type operator~(){return ~flags;}

	bool operator==(const F_external_fence_handle_type flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_fence_handle_type flag_){return !(*this==flag_);}

	F_external_fence_handle_type& clear(){flags = 0;return *this;}
	F_external_fence_handle_type all_flags(){ return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_sync_fd;}
	F_external_fence_handle_type& on_opaque_fd(){ flags |= b_opaque_fd; return *this; }
	F_external_fence_handle_type& off_opaque_fd(){ flags &= ~b_opaque_fd; return *this; }
	F_external_fence_handle_type& on_opaque_win32(){ flags |= b_opaque_win32; return *this; }
	F_external_fence_handle_type& off_opaque_win32(){ flags &= ~b_opaque_win32; return *this; }
	F_external_fence_handle_type& on_opaque_win32_kmt(){ flags |= b_opaque_win32_kmt; return *this; }
	F_external_fence_handle_type& off_opaque_win32_kmt(){ flags &= ~b_opaque_win32_kmt; return *this; }
	F_external_fence_handle_type& on_sync_fd(){ flags |= b_sync_fd; return *this; }
	F_external_fence_handle_type& off_sync_fd(){ flags &= ~b_sync_fd; return *this; }
};
/*	VkExternalFenceFeatureFlagBits*/
union F_external_fence_feature {
	VkExternalFenceFeatureFlags flags;
	VkExternalFenceFeatureFlagBits vk_flag;
	enum {
		b_exportable = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,
		b_importable = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,
	}flag;

	F_external_fence_feature():flags(0){}
	F_external_fence_feature(const uint32_t flag_):flags(flag_){}

	operator VkExternalFenceFeatureFlagBits&(){return vk_flag;}
	operator VkExternalFenceFeatureFlagBits*(){return &vk_flag; }
	operator VkExternalFenceFeatureFlagBits*()const{return const_cast<VkExternalFenceFeatureFlagBits*const>(&vk_flag); }

	operator VkExternalFenceFeatureFlags&(){return flags; }
	operator VkExternalFenceFeatureFlags*()const{return const_cast<VkExternalFenceFeatureFlags*const>(&flags); }
	operator VkExternalFenceFeatureFlags*(){return &flags; }

	F_external_fence_feature& operator=(const F_external_fence_feature flag_){flags=flag_.flags; return *this;}
	F_external_fence_feature& operator|=(const F_external_fence_feature flag_){flags|=flag_.flags; return *this;}
	F_external_fence_feature& operator&=(const F_external_fence_feature flag_){flags&=flag_.flags; return *this;}
	F_external_fence_feature& operator^=(const F_external_fence_feature flag_){flags^=flag_.flags;return *this;}
	F_external_fence_feature operator~(){return ~flags;}

	bool operator==(const F_external_fence_feature flag_){return flags==flag_.flags;}
	bool operator!=(const F_external_fence_feature flag_){return !(*this==flag_);}

	F_external_fence_feature& clear(){flags = 0;return *this;}
	F_external_fence_feature all_flags(){ return b_exportable | b_importable;}
	F_external_fence_feature& on_exportable(){ flags |= b_exportable; return *this; }
	F_external_fence_feature& off_exportable(){ flags &= ~b_exportable; return *this; }
	F_external_fence_feature& on_importable(){ flags |= b_importable; return *this; }
	F_external_fence_feature& off_importable(){ flags &= ~b_importable; return *this; }
};
/*	VkFenceImportFlagBits*/
union F_fence_import {
	VkFenceImportFlags flags;
	VkFenceImportFlagBits vk_flag;
	enum {
		b_temporary = VK_FENCE_IMPORT_TEMPORARY_BIT,
	}flag;

	F_fence_import():flags(0){}
	F_fence_import(const uint32_t flag_):flags(flag_){}

	operator VkFenceImportFlagBits&(){return vk_flag;}
	operator VkFenceImportFlagBits*(){return &vk_flag; }
	operator VkFenceImportFlagBits*()const{return const_cast<VkFenceImportFlagBits*const>(&vk_flag); }

	operator VkFenceImportFlags&(){return flags; }
	operator VkFenceImportFlags*()const{return const_cast<VkFenceImportFlags*const>(&flags); }
	operator VkFenceImportFlags*(){return &flags; }

	F_fence_import& operator=(const F_fence_import flag_){flags=flag_.flags; return *this;}
	F_fence_import& operator|=(const F_fence_import flag_){flags|=flag_.flags; return *this;}
	F_fence_import& operator&=(const F_fence_import flag_){flags&=flag_.flags; return *this;}
	F_fence_import& operator^=(const F_fence_import flag_){flags^=flag_.flags;return *this;}
	F_fence_import operator~(){return ~flags;}

	bool operator==(const F_fence_import flag_){return flags==flag_.flags;}
	bool operator!=(const F_fence_import flag_){return !(*this==flag_);}

	F_fence_import& clear(){flags = 0;return *this;}
	F_fence_import all_flags(){ return b_temporary;}
	F_fence_import& on_temporary(){ flags |= b_temporary; return *this; }
	F_fence_import& off_temporary(){ flags &= ~b_temporary; return *this; }
};
/*	VkSurfaceCounterFlagBitsEXT*/
union F_surface_counter_EXT {
	VkSurfaceCounterFlagsEXT flags;
	VkSurfaceCounterFlagBitsEXT vk_flag;
	enum {
		b_vblank_ext = VK_SURFACE_COUNTER_VBLANK_EXT,
	}flag;

	F_surface_counter_EXT():flags(0){}
	F_surface_counter_EXT(const uint32_t flag_):flags(flag_){}

	operator VkSurfaceCounterFlagBitsEXT&(){return vk_flag;}
	operator VkSurfaceCounterFlagBitsEXT*(){return &vk_flag; }
	operator VkSurfaceCounterFlagBitsEXT*()const{return const_cast<VkSurfaceCounterFlagBitsEXT*const>(&vk_flag); }

	operator VkSurfaceCounterFlagsEXT&(){return flags; }
	operator VkSurfaceCounterFlagsEXT*()const{return const_cast<VkSurfaceCounterFlagsEXT*const>(&flags); }
	operator VkSurfaceCounterFlagsEXT*(){return &flags; }

	F_surface_counter_EXT& operator=(const F_surface_counter_EXT flag_){flags=flag_.flags; return *this;}
	F_surface_counter_EXT& operator|=(const F_surface_counter_EXT flag_){flags|=flag_.flags; return *this;}
	F_surface_counter_EXT& operator&=(const F_surface_counter_EXT flag_){flags&=flag_.flags; return *this;}
	F_surface_counter_EXT& operator^=(const F_surface_counter_EXT flag_){flags^=flag_.flags;return *this;}
	F_surface_counter_EXT operator~(){return ~flags;}

	bool operator==(const F_surface_counter_EXT flag_){return flags==flag_.flags;}
	bool operator!=(const F_surface_counter_EXT flag_){return !(*this==flag_);}

	F_surface_counter_EXT& clear(){flags = 0;return *this;}
	F_surface_counter_EXT all_flags(){ return b_vblank_ext;}
	F_surface_counter_EXT& on_vblank_ext(){ flags |= b_vblank_ext; return *this; }
	F_surface_counter_EXT& off_vblank_ext(){ flags &= ~b_vblank_ext; return *this; }
};
/*	VkPeerMemoryFeatureFlagBits*/
union F_peer_memory_feature {
	VkPeerMemoryFeatureFlags flags;
	VkPeerMemoryFeatureFlagBits vk_flag;
	enum {
			/* Can read with vkCmdCopy commands */
		b_copy_src = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,
			/* Can write with vkCmdCopy commands */
		b_copy_dst = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,
			/* Can read with any access type/command */
		b_generic_src = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,
			/* Can write with and access type/command */
		b_generic_dst = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,
	}flag;

	F_peer_memory_feature():flags(0){}
	F_peer_memory_feature(const uint32_t flag_):flags(flag_){}

	operator VkPeerMemoryFeatureFlagBits&(){return vk_flag;}
	operator VkPeerMemoryFeatureFlagBits*(){return &vk_flag; }
	operator VkPeerMemoryFeatureFlagBits*()const{return const_cast<VkPeerMemoryFeatureFlagBits*const>(&vk_flag); }

	operator VkPeerMemoryFeatureFlags&(){return flags; }
	operator VkPeerMemoryFeatureFlags*()const{return const_cast<VkPeerMemoryFeatureFlags*const>(&flags); }
	operator VkPeerMemoryFeatureFlags*(){return &flags; }

	F_peer_memory_feature& operator=(const F_peer_memory_feature flag_){flags=flag_.flags; return *this;}
	F_peer_memory_feature& operator|=(const F_peer_memory_feature flag_){flags|=flag_.flags; return *this;}
	F_peer_memory_feature& operator&=(const F_peer_memory_feature flag_){flags&=flag_.flags; return *this;}
	F_peer_memory_feature& operator^=(const F_peer_memory_feature flag_){flags^=flag_.flags;return *this;}
	F_peer_memory_feature operator~(){return ~flags;}

	bool operator==(const F_peer_memory_feature flag_){return flags==flag_.flags;}
	bool operator!=(const F_peer_memory_feature flag_){return !(*this==flag_);}

	F_peer_memory_feature& clear(){flags = 0;return *this;}
	F_peer_memory_feature all_flags(){ return b_copy_src | b_copy_dst | b_generic_src | b_generic_dst;}
	F_peer_memory_feature& on_copy_src(){ flags |= b_copy_src; return *this; }
	F_peer_memory_feature& off_copy_src(){ flags &= ~b_copy_src; return *this; }
	F_peer_memory_feature& on_copy_dst(){ flags |= b_copy_dst; return *this; }
	F_peer_memory_feature& off_copy_dst(){ flags &= ~b_copy_dst; return *this; }
	F_peer_memory_feature& on_generic_src(){ flags |= b_generic_src; return *this; }
	F_peer_memory_feature& off_generic_src(){ flags &= ~b_generic_src; return *this; }
	F_peer_memory_feature& on_generic_dst(){ flags |= b_generic_dst; return *this; }
	F_peer_memory_feature& off_generic_dst(){ flags &= ~b_generic_dst; return *this; }
};
/*	VkMemoryAllocateFlagBits*/
union F_memory_allocate {
	VkMemoryAllocateFlags flags;
	VkMemoryAllocateFlagBits vk_flag;
	enum {
			/* Force allocation on specific devices */
		b_device_mask = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,
	}flag;

	F_memory_allocate():flags(0){}
	F_memory_allocate(const uint32_t flag_):flags(flag_){}

	operator VkMemoryAllocateFlagBits&(){return vk_flag;}
	operator VkMemoryAllocateFlagBits*(){return &vk_flag; }
	operator VkMemoryAllocateFlagBits*()const{return const_cast<VkMemoryAllocateFlagBits*const>(&vk_flag); }

	operator VkMemoryAllocateFlags&(){return flags; }
	operator VkMemoryAllocateFlags*()const{return const_cast<VkMemoryAllocateFlags*const>(&flags); }
	operator VkMemoryAllocateFlags*(){return &flags; }

	F_memory_allocate& operator=(const F_memory_allocate flag_){flags=flag_.flags; return *this;}
	F_memory_allocate& operator|=(const F_memory_allocate flag_){flags|=flag_.flags; return *this;}
	F_memory_allocate& operator&=(const F_memory_allocate flag_){flags&=flag_.flags; return *this;}
	F_memory_allocate& operator^=(const F_memory_allocate flag_){flags^=flag_.flags;return *this;}
	F_memory_allocate operator~(){return ~flags;}

	bool operator==(const F_memory_allocate flag_){return flags==flag_.flags;}
	bool operator!=(const F_memory_allocate flag_){return !(*this==flag_);}

	F_memory_allocate& clear(){flags = 0;return *this;}
	F_memory_allocate all_flags(){ return b_device_mask;}
	F_memory_allocate& on_device_mask(){ flags |= b_device_mask; return *this; }
	F_memory_allocate& off_device_mask(){ flags &= ~b_device_mask; return *this; }
};
/*	VkDeviceGroupPresentModeFlagBitsKHR*/
union F_device_group_present_mode_KHR {
	VkDeviceGroupPresentModeFlagsKHR flags;
	VkDeviceGroupPresentModeFlagBitsKHR vk_flag;
	enum {
			/* Present from local memory */
		b_local_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR,
			/* Present from remote memory */
		b_remote_khr = VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR,
			/* Present sum of local and/or remote memory */
		b_sum_khr = VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR,
			/* Each physical device presents from local memory */
		b_local_multi_device_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR,
	}flag;

	F_device_group_present_mode_KHR():flags(0){}
	F_device_group_present_mode_KHR(const uint32_t flag_):flags(flag_){}

	operator VkDeviceGroupPresentModeFlagBitsKHR&(){return vk_flag;}
	operator VkDeviceGroupPresentModeFlagBitsKHR*(){return &vk_flag; }
	operator VkDeviceGroupPresentModeFlagBitsKHR*()const{return const_cast<VkDeviceGroupPresentModeFlagBitsKHR*const>(&vk_flag); }

	operator VkDeviceGroupPresentModeFlagsKHR&(){return flags; }
	operator VkDeviceGroupPresentModeFlagsKHR*()const{return const_cast<VkDeviceGroupPresentModeFlagsKHR*const>(&flags); }
	operator VkDeviceGroupPresentModeFlagsKHR*(){return &flags; }

	F_device_group_present_mode_KHR& operator=(const F_device_group_present_mode_KHR flag_){flags=flag_.flags; return *this;}
	F_device_group_present_mode_KHR& operator|=(const F_device_group_present_mode_KHR flag_){flags|=flag_.flags; return *this;}
	F_device_group_present_mode_KHR& operator&=(const F_device_group_present_mode_KHR flag_){flags&=flag_.flags; return *this;}
	F_device_group_present_mode_KHR& operator^=(const F_device_group_present_mode_KHR flag_){flags^=flag_.flags;return *this;}
	F_device_group_present_mode_KHR operator~(){return ~flags;}

	bool operator==(const F_device_group_present_mode_KHR flag_){return flags==flag_.flags;}
	bool operator!=(const F_device_group_present_mode_KHR flag_){return !(*this==flag_);}

	F_device_group_present_mode_KHR& clear(){flags = 0;return *this;}
	F_device_group_present_mode_KHR all_flags(){ return b_local_khr | b_remote_khr | b_sum_khr | b_local_multi_device_khr;}
	F_device_group_present_mode_KHR& on_local_khr(){ flags |= b_local_khr; return *this; }
	F_device_group_present_mode_KHR& off_local_khr(){ flags &= ~b_local_khr; return *this; }
	F_device_group_present_mode_KHR& on_remote_khr(){ flags |= b_remote_khr; return *this; }
	F_device_group_present_mode_KHR& off_remote_khr(){ flags &= ~b_remote_khr; return *this; }
	F_device_group_present_mode_KHR& on_sum_khr(){ flags |= b_sum_khr; return *this; }
	F_device_group_present_mode_KHR& off_sum_khr(){ flags &= ~b_sum_khr; return *this; }
	F_device_group_present_mode_KHR& on_local_multi_device_khr(){ flags |= b_local_multi_device_khr; return *this; }
	F_device_group_present_mode_KHR& off_local_multi_device_khr(){ flags &= ~b_local_multi_device_khr; return *this; }
};
/*	VkSwapchainCreateFlagBitsKHR*/
using F_swapchain_create_KHR = 
			VkSwapchainCreateFlagBitsKHR;

/*	VkSubpassDescriptionFlagBits*/
using F_subpass_description = 
			VkSubpassDescriptionFlagBits;

/*	VkDebugUtilsMessageSeverityFlagBitsEXT*/
union F_debug_utils_message_severity_EXT {
	VkDebugUtilsMessageSeverityFlagsEXT flags;
	VkDebugUtilsMessageSeverityFlagBitsEXT vk_flag;
	enum {
		b_verbose_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT,
		b_info_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT,
		b_warning_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT,
		b_error_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
	}flag;

	F_debug_utils_message_severity_EXT():flags(0){}
	F_debug_utils_message_severity_EXT(const uint32_t flag_):flags(flag_){}

	operator VkDebugUtilsMessageSeverityFlagBitsEXT&(){return vk_flag;}
	operator VkDebugUtilsMessageSeverityFlagBitsEXT*(){return &vk_flag; }
	operator VkDebugUtilsMessageSeverityFlagBitsEXT*()const{return const_cast<VkDebugUtilsMessageSeverityFlagBitsEXT*const>(&vk_flag); }

	operator VkDebugUtilsMessageSeverityFlagsEXT&(){return flags; }
	operator VkDebugUtilsMessageSeverityFlagsEXT*()const{return const_cast<VkDebugUtilsMessageSeverityFlagsEXT*const>(&flags); }
	operator VkDebugUtilsMessageSeverityFlagsEXT*(){return &flags; }

	F_debug_utils_message_severity_EXT& operator=(const F_debug_utils_message_severity_EXT flag_){flags=flag_.flags; return *this;}
	F_debug_utils_message_severity_EXT& operator|=(const F_debug_utils_message_severity_EXT flag_){flags|=flag_.flags; return *this;}
	F_debug_utils_message_severity_EXT& operator&=(const F_debug_utils_message_severity_EXT flag_){flags&=flag_.flags; return *this;}
	F_debug_utils_message_severity_EXT& operator^=(const F_debug_utils_message_severity_EXT flag_){flags^=flag_.flags;return *this;}
	F_debug_utils_message_severity_EXT operator~(){return ~flags;}

	bool operator==(const F_debug_utils_message_severity_EXT flag_){return flags==flag_.flags;}
	bool operator!=(const F_debug_utils_message_severity_EXT flag_){return !(*this==flag_);}

	F_debug_utils_message_severity_EXT& clear(){flags = 0;return *this;}
	F_debug_utils_message_severity_EXT all_flags(){ return b_verbose_ext | b_info_ext | b_warning_ext | b_error_ext;}
	F_debug_utils_message_severity_EXT& on_verbose_ext(){ flags |= b_verbose_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_verbose_ext(){ flags &= ~b_verbose_ext; return *this; }
	F_debug_utils_message_severity_EXT& on_info_ext(){ flags |= b_info_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_info_ext(){ flags &= ~b_info_ext; return *this; }
	F_debug_utils_message_severity_EXT& on_warning_ext(){ flags |= b_warning_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_warning_ext(){ flags &= ~b_warning_ext; return *this; }
	F_debug_utils_message_severity_EXT& on_error_ext(){ flags |= b_error_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_error_ext(){ flags &= ~b_error_ext; return *this; }
};
/*	VkDebugUtilsMessageTypeFlagBitsEXT*/
union F_debug_utils_message_type_EXT {
	VkDebugUtilsMessageTypeFlagsEXT flags;
	VkDebugUtilsMessageTypeFlagBitsEXT vk_flag;
	enum {
		b_general_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT,
		b_validation_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT,
		b_performance_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,
	}flag;

	F_debug_utils_message_type_EXT():flags(0){}
	F_debug_utils_message_type_EXT(const uint32_t flag_):flags(flag_){}

	operator VkDebugUtilsMessageTypeFlagBitsEXT&(){return vk_flag;}
	operator VkDebugUtilsMessageTypeFlagBitsEXT*(){return &vk_flag; }
	operator VkDebugUtilsMessageTypeFlagBitsEXT*()const{return const_cast<VkDebugUtilsMessageTypeFlagBitsEXT*const>(&vk_flag); }

	operator VkDebugUtilsMessageTypeFlagsEXT&(){return flags; }
	operator VkDebugUtilsMessageTypeFlagsEXT*()const{return const_cast<VkDebugUtilsMessageTypeFlagsEXT*const>(&flags); }
	operator VkDebugUtilsMessageTypeFlagsEXT*(){return &flags; }

	F_debug_utils_message_type_EXT& operator=(const F_debug_utils_message_type_EXT flag_){flags=flag_.flags; return *this;}
	F_debug_utils_message_type_EXT& operator|=(const F_debug_utils_message_type_EXT flag_){flags|=flag_.flags; return *this;}
	F_debug_utils_message_type_EXT& operator&=(const F_debug_utils_message_type_EXT flag_){flags&=flag_.flags; return *this;}
	F_debug_utils_message_type_EXT& operator^=(const F_debug_utils_message_type_EXT flag_){flags^=flag_.flags;return *this;}
	F_debug_utils_message_type_EXT operator~(){return ~flags;}

	bool operator==(const F_debug_utils_message_type_EXT flag_){return flags==flag_.flags;}
	bool operator!=(const F_debug_utils_message_type_EXT flag_){return !(*this==flag_);}

	F_debug_utils_message_type_EXT& clear(){flags = 0;return *this;}
	F_debug_utils_message_type_EXT all_flags(){ return b_general_ext | b_validation_ext | b_performance_ext;}
	F_debug_utils_message_type_EXT& on_general_ext(){ flags |= b_general_ext; return *this; }
	F_debug_utils_message_type_EXT& off_general_ext(){ flags &= ~b_general_ext; return *this; }
	F_debug_utils_message_type_EXT& on_validation_ext(){ flags |= b_validation_ext; return *this; }
	F_debug_utils_message_type_EXT& off_validation_ext(){ flags &= ~b_validation_ext; return *this; }
	F_debug_utils_message_type_EXT& on_performance_ext(){ flags |= b_performance_ext; return *this; }
	F_debug_utils_message_type_EXT& off_performance_ext(){ flags &= ~b_performance_ext; return *this; }
};
/*	VkDescriptorBindingFlagBitsEXT*/
union F_descriptor_binding_EXT {
	VkDescriptorBindingFlagsEXT flags;
	VkDescriptorBindingFlagBitsEXT vk_flag;
	enum {
		b_update_after_bind_ext = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT,
		b_update_unused_while_pending_ext = VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT,
		b_partially_bound_ext = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT,
		b_variable_descriptor_count_ext = VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT,
	}flag;

	F_descriptor_binding_EXT():flags(0){}
	F_descriptor_binding_EXT(const uint32_t flag_):flags(flag_){}

	operator VkDescriptorBindingFlagBitsEXT&(){return vk_flag;}
	operator VkDescriptorBindingFlagBitsEXT*(){return &vk_flag; }
	operator VkDescriptorBindingFlagBitsEXT*()const{return const_cast<VkDescriptorBindingFlagBitsEXT*const>(&vk_flag); }

	operator VkDescriptorBindingFlagsEXT&(){return flags; }
	operator VkDescriptorBindingFlagsEXT*()const{return const_cast<VkDescriptorBindingFlagsEXT*const>(&flags); }
	operator VkDescriptorBindingFlagsEXT*(){return &flags; }

	F_descriptor_binding_EXT& operator=(const F_descriptor_binding_EXT flag_){flags=flag_.flags; return *this;}
	F_descriptor_binding_EXT& operator|=(const F_descriptor_binding_EXT flag_){flags|=flag_.flags; return *this;}
	F_descriptor_binding_EXT& operator&=(const F_descriptor_binding_EXT flag_){flags&=flag_.flags; return *this;}
	F_descriptor_binding_EXT& operator^=(const F_descriptor_binding_EXT flag_){flags^=flag_.flags;return *this;}
	F_descriptor_binding_EXT operator~(){return ~flags;}

	bool operator==(const F_descriptor_binding_EXT flag_){return flags==flag_.flags;}
	bool operator!=(const F_descriptor_binding_EXT flag_){return !(*this==flag_);}

	F_descriptor_binding_EXT& clear(){flags = 0;return *this;}
	F_descriptor_binding_EXT all_flags(){ return b_update_after_bind_ext | b_update_unused_while_pending_ext | b_partially_bound_ext | b_variable_descriptor_count_ext;}
	F_descriptor_binding_EXT& on_update_after_bind_ext(){ flags |= b_update_after_bind_ext; return *this; }
	F_descriptor_binding_EXT& off_update_after_bind_ext(){ flags &= ~b_update_after_bind_ext; return *this; }
	F_descriptor_binding_EXT& on_update_unused_while_pending_ext(){ flags |= b_update_unused_while_pending_ext; return *this; }
	F_descriptor_binding_EXT& off_update_unused_while_pending_ext(){ flags &= ~b_update_unused_while_pending_ext; return *this; }
	F_descriptor_binding_EXT& on_partially_bound_ext(){ flags |= b_partially_bound_ext; return *this; }
	F_descriptor_binding_EXT& off_partially_bound_ext(){ flags &= ~b_partially_bound_ext; return *this; }
	F_descriptor_binding_EXT& on_variable_descriptor_count_ext(){ flags |= b_variable_descriptor_count_ext; return *this; }
	F_descriptor_binding_EXT& off_variable_descriptor_count_ext(){ flags &= ~b_variable_descriptor_count_ext; return *this; }
};
/*	VkConditionalRenderingFlagBitsEXT*/
union F_conditional_rendering_EXT {
	VkConditionalRenderingFlagsEXT flags;
	VkConditionalRenderingFlagBitsEXT vk_flag;
	enum {
		b_inverted_ext = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,
	}flag;

	F_conditional_rendering_EXT():flags(0){}
	F_conditional_rendering_EXT(const uint32_t flag_):flags(flag_){}

	operator VkConditionalRenderingFlagBitsEXT&(){return vk_flag;}
	operator VkConditionalRenderingFlagBitsEXT*(){return &vk_flag; }
	operator VkConditionalRenderingFlagBitsEXT*()const{return const_cast<VkConditionalRenderingFlagBitsEXT*const>(&vk_flag); }

	operator VkConditionalRenderingFlagsEXT&(){return flags; }
	operator VkConditionalRenderingFlagsEXT*()const{return const_cast<VkConditionalRenderingFlagsEXT*const>(&flags); }
	operator VkConditionalRenderingFlagsEXT*(){return &flags; }

	F_conditional_rendering_EXT& operator=(const F_conditional_rendering_EXT flag_){flags=flag_.flags; return *this;}
	F_conditional_rendering_EXT& operator|=(const F_conditional_rendering_EXT flag_){flags|=flag_.flags; return *this;}
	F_conditional_rendering_EXT& operator&=(const F_conditional_rendering_EXT flag_){flags&=flag_.flags; return *this;}
	F_conditional_rendering_EXT& operator^=(const F_conditional_rendering_EXT flag_){flags^=flag_.flags;return *this;}
	F_conditional_rendering_EXT operator~(){return ~flags;}

	bool operator==(const F_conditional_rendering_EXT flag_){return flags==flag_.flags;}
	bool operator!=(const F_conditional_rendering_EXT flag_){return !(*this==flag_);}

	F_conditional_rendering_EXT& clear(){flags = 0;return *this;}
	F_conditional_rendering_EXT all_flags(){ return b_inverted_ext;}
	F_conditional_rendering_EXT& on_inverted_ext(){ flags |= b_inverted_ext; return *this; }
	F_conditional_rendering_EXT& off_inverted_ext(){ flags &= ~b_inverted_ext; return *this; }
};
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
struct S_queue_family_checkpoint_properties_NV;
struct S_checkpoint_data_NV;
#endif

/*	VkOffset2D
*/
struct	S_offset_2d:VkOffset2D{
	using VkOffset2D::x;
	using VkOffset2D::y;

	S_offset_2d& operator=(const VkOffset2D& rhs){static_cast<VkOffset2D&>(*this)=rhs; return *this;}
	operator VkOffset2D*()const{return const_cast<VkOffset2D*>(static_cast<const VkOffset2D*>(this));}
};

/*	VkOffset3D
*/
struct	S_offset_3d:VkOffset3D{
	using VkOffset3D::x;
	using VkOffset3D::y;
	using VkOffset3D::z;

	S_offset_3d& operator=(const VkOffset3D& rhs){static_cast<VkOffset3D&>(*this)=rhs; return *this;}
	operator VkOffset3D*()const{return const_cast<VkOffset3D*>(static_cast<const VkOffset3D*>(this));}
};

/*	VkExtent2D
*/
struct	S_extent_2d:VkExtent2D{
	using VkExtent2D::width;
	using VkExtent2D::height;

	S_extent_2d& operator=(const VkExtent2D& rhs){static_cast<VkExtent2D&>(*this)=rhs; return *this;}
	operator VkExtent2D*()const{return const_cast<VkExtent2D*>(static_cast<const VkExtent2D*>(this));}
};

/*	VkExtent3D
*/
struct	S_extent_3d:VkExtent3D{
	using VkExtent3D::width;
	using VkExtent3D::height;
	using VkExtent3D::depth;

	S_extent_3d& operator=(const VkExtent3D& rhs){static_cast<VkExtent3D&>(*this)=rhs; return *this;}
	operator VkExtent3D*()const{return const_cast<VkExtent3D*>(static_cast<const VkExtent3D*>(this));}
};

/*	VkViewport
*/
struct	S_viewport:VkViewport{
	using VkViewport::x;
	using VkViewport::y;
	using VkViewport::width;
	using VkViewport::height;
	using VkViewport::minDepth;
	using VkViewport::maxDepth;

	S_viewport& operator=(const VkViewport& rhs){static_cast<VkViewport&>(*this)=rhs; return *this;}
	operator VkViewport*()const{return const_cast<VkViewport*>(static_cast<const VkViewport*>(this));}
};

/*	VkRect2D
*/
struct	S_rect_2d:VkRect2D{
	using VkRect2D::offset;
	using VkRect2D::extent;

	S_rect_2d& operator=(const VkRect2D& rhs){static_cast<VkRect2D&>(*this)=rhs; return *this;}
	operator VkRect2D*()const{return const_cast<VkRect2D*>(static_cast<const VkRect2D*>(this));}
};

/*	VkClearRect
*/
struct	S_clear_rect:VkClearRect{
	using VkClearRect::rect;
	using VkClearRect::baseArrayLayer;
	using VkClearRect::layerCount;

	S_clear_rect& operator=(const VkClearRect& rhs){static_cast<VkClearRect&>(*this)=rhs; return *this;}
	operator VkClearRect*()const{return const_cast<VkClearRect*>(static_cast<const VkClearRect*>(this));}
};

/*	VkComponentMapping
*/
struct	S_component_mapping:VkComponentMapping{
	using VkComponentMapping::r;
	using VkComponentMapping::g;
	using VkComponentMapping::b;
	using VkComponentMapping::a;

	S_component_mapping& operator=(const VkComponentMapping& rhs){static_cast<VkComponentMapping&>(*this)=rhs; return *this;}
	operator VkComponentMapping*()const{return const_cast<VkComponentMapping*>(static_cast<const VkComponentMapping*>(this));}
};

/*	VkPhysicalDeviceLimits
(returnedonly)
*/
struct	S_physical_device_limits:VkPhysicalDeviceLimits{
	using VkPhysicalDeviceLimits::maxImageDimension1D;
	using VkPhysicalDeviceLimits::maxImageDimension2D;
	using VkPhysicalDeviceLimits::maxImageDimension3D;
	using VkPhysicalDeviceLimits::maxImageDimensionCube;
	using VkPhysicalDeviceLimits::maxImageArrayLayers;
	using VkPhysicalDeviceLimits::maxTexelBufferElements;
	using VkPhysicalDeviceLimits::maxUniformBufferRange;
	using VkPhysicalDeviceLimits::maxStorageBufferRange;
	using VkPhysicalDeviceLimits::maxPushConstantsSize;
	using VkPhysicalDeviceLimits::maxMemoryAllocationCount;
	using VkPhysicalDeviceLimits::maxSamplerAllocationCount;
	using VkPhysicalDeviceLimits::bufferImageGranularity;
	using VkPhysicalDeviceLimits::sparseAddressSpaceSize;
	using VkPhysicalDeviceLimits::maxBoundDescriptorSets;
	using VkPhysicalDeviceLimits::maxPerStageDescriptorSamplers;
	using VkPhysicalDeviceLimits::maxPerStageDescriptorUniformBuffers;
	using VkPhysicalDeviceLimits::maxPerStageDescriptorStorageBuffers;
	using VkPhysicalDeviceLimits::maxPerStageDescriptorSampledImages;
	using VkPhysicalDeviceLimits::maxPerStageDescriptorStorageImages;
	using VkPhysicalDeviceLimits::maxPerStageDescriptorInputAttachments;
	using VkPhysicalDeviceLimits::maxPerStageResources;
	using VkPhysicalDeviceLimits::maxDescriptorSetSamplers;
	using VkPhysicalDeviceLimits::maxDescriptorSetUniformBuffers;
	using VkPhysicalDeviceLimits::maxDescriptorSetUniformBuffersDynamic;
	using VkPhysicalDeviceLimits::maxDescriptorSetStorageBuffers;
	using VkPhysicalDeviceLimits::maxDescriptorSetStorageBuffersDynamic;
	using VkPhysicalDeviceLimits::maxDescriptorSetSampledImages;
	using VkPhysicalDeviceLimits::maxDescriptorSetStorageImages;
	using VkPhysicalDeviceLimits::maxDescriptorSetInputAttachments;
	using VkPhysicalDeviceLimits::maxVertexInputAttributes;
	using VkPhysicalDeviceLimits::maxVertexInputBindings;
	using VkPhysicalDeviceLimits::maxVertexInputAttributeOffset;
	using VkPhysicalDeviceLimits::maxVertexInputBindingStride;
	using VkPhysicalDeviceLimits::maxVertexOutputComponents;
	using VkPhysicalDeviceLimits::maxTessellationGenerationLevel;
	using VkPhysicalDeviceLimits::maxTessellationPatchSize;
	using VkPhysicalDeviceLimits::maxTessellationControlPerVertexInputComponents;
	using VkPhysicalDeviceLimits::maxTessellationControlPerVertexOutputComponents;
	using VkPhysicalDeviceLimits::maxTessellationControlPerPatchOutputComponents;
	using VkPhysicalDeviceLimits::maxTessellationControlTotalOutputComponents;
	using VkPhysicalDeviceLimits::maxTessellationEvaluationInputComponents;
	using VkPhysicalDeviceLimits::maxTessellationEvaluationOutputComponents;
	using VkPhysicalDeviceLimits::maxGeometryShaderInvocations;
	using VkPhysicalDeviceLimits::maxGeometryInputComponents;
	using VkPhysicalDeviceLimits::maxGeometryOutputComponents;
	using VkPhysicalDeviceLimits::maxGeometryOutputVertices;
	using VkPhysicalDeviceLimits::maxGeometryTotalOutputComponents;
	using VkPhysicalDeviceLimits::maxFragmentInputComponents;
	using VkPhysicalDeviceLimits::maxFragmentOutputAttachments;
	using VkPhysicalDeviceLimits::maxFragmentDualSrcAttachments;
	using VkPhysicalDeviceLimits::maxFragmentCombinedOutputResources;
	using VkPhysicalDeviceLimits::maxComputeSharedMemorySize;
	using VkPhysicalDeviceLimits::maxComputeWorkGroupCount;
	using VkPhysicalDeviceLimits::maxComputeWorkGroupInvocations;
	using VkPhysicalDeviceLimits::maxComputeWorkGroupSize;
	using VkPhysicalDeviceLimits::subPixelPrecisionBits;
	using VkPhysicalDeviceLimits::subTexelPrecisionBits;
	using VkPhysicalDeviceLimits::mipmapPrecisionBits;
	using VkPhysicalDeviceLimits::maxDrawIndexedIndexValue;
	using VkPhysicalDeviceLimits::maxDrawIndirectCount;
	using VkPhysicalDeviceLimits::maxSamplerLodBias;
	using VkPhysicalDeviceLimits::maxSamplerAnisotropy;
	using VkPhysicalDeviceLimits::maxViewports;
	using VkPhysicalDeviceLimits::maxViewportDimensions;
	using VkPhysicalDeviceLimits::viewportBoundsRange;
	using VkPhysicalDeviceLimits::viewportSubPixelBits;
	using VkPhysicalDeviceLimits::minMemoryMapAlignment;
	using VkPhysicalDeviceLimits::minTexelBufferOffsetAlignment;
	using VkPhysicalDeviceLimits::minUniformBufferOffsetAlignment;
	using VkPhysicalDeviceLimits::minStorageBufferOffsetAlignment;
	using VkPhysicalDeviceLimits::minTexelOffset;
	using VkPhysicalDeviceLimits::maxTexelOffset;
	using VkPhysicalDeviceLimits::minTexelGatherOffset;
	using VkPhysicalDeviceLimits::maxTexelGatherOffset;
	using VkPhysicalDeviceLimits::minInterpolationOffset;
	using VkPhysicalDeviceLimits::maxInterpolationOffset;
	using VkPhysicalDeviceLimits::subPixelInterpolationOffsetBits;
	using VkPhysicalDeviceLimits::maxFramebufferWidth;
	using VkPhysicalDeviceLimits::maxFramebufferHeight;
	using VkPhysicalDeviceLimits::maxFramebufferLayers;
	using VkPhysicalDeviceLimits::framebufferColorSampleCounts;
	using VkPhysicalDeviceLimits::framebufferDepthSampleCounts;
	using VkPhysicalDeviceLimits::framebufferStencilSampleCounts;
	using VkPhysicalDeviceLimits::framebufferNoAttachmentsSampleCounts;
	using VkPhysicalDeviceLimits::maxColorAttachments;
	using VkPhysicalDeviceLimits::sampledImageColorSampleCounts;
	using VkPhysicalDeviceLimits::sampledImageIntegerSampleCounts;
	using VkPhysicalDeviceLimits::sampledImageDepthSampleCounts;
	using VkPhysicalDeviceLimits::sampledImageStencilSampleCounts;
	using VkPhysicalDeviceLimits::storageImageSampleCounts;
	using VkPhysicalDeviceLimits::maxSampleMaskWords;
	using VkPhysicalDeviceLimits::timestampComputeAndGraphics;
	using VkPhysicalDeviceLimits::timestampPeriod;
	using VkPhysicalDeviceLimits::maxClipDistances;
	using VkPhysicalDeviceLimits::maxCullDistances;
	using VkPhysicalDeviceLimits::maxCombinedClipAndCullDistances;
	using VkPhysicalDeviceLimits::discreteQueuePriorities;
	using VkPhysicalDeviceLimits::pointSizeRange;
	using VkPhysicalDeviceLimits::lineWidthRange;
	using VkPhysicalDeviceLimits::pointSizeGranularity;
	using VkPhysicalDeviceLimits::lineWidthGranularity;
	using VkPhysicalDeviceLimits::strictLines;
	using VkPhysicalDeviceLimits::standardSampleLocations;
	using VkPhysicalDeviceLimits::optimalBufferCopyOffsetAlignment;
	using VkPhysicalDeviceLimits::optimalBufferCopyRowPitchAlignment;
	using VkPhysicalDeviceLimits::nonCoherentAtomSize;

	S_physical_device_limits& operator=(const VkPhysicalDeviceLimits& rhs){static_cast<VkPhysicalDeviceLimits&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceLimits*()const{return const_cast<VkPhysicalDeviceLimits*>(static_cast<const VkPhysicalDeviceLimits*>(this));}
};

/*	VkPhysicalDeviceSparseProperties
(returnedonly)
*/
struct	S_physical_device_sparse_properties:VkPhysicalDeviceSparseProperties{
	using VkPhysicalDeviceSparseProperties::residencyStandard2DBlockShape;
	using VkPhysicalDeviceSparseProperties::residencyStandard2DMultisampleBlockShape;
	using VkPhysicalDeviceSparseProperties::residencyStandard3DBlockShape;
	using VkPhysicalDeviceSparseProperties::residencyAlignedMipSize;
	using VkPhysicalDeviceSparseProperties::residencyNonResidentStrict;

	S_physical_device_sparse_properties& operator=(const VkPhysicalDeviceSparseProperties& rhs){static_cast<VkPhysicalDeviceSparseProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceSparseProperties*()const{return const_cast<VkPhysicalDeviceSparseProperties*>(static_cast<const VkPhysicalDeviceSparseProperties*>(this));}
};

/*	VkPhysicalDeviceProperties
(returnedonly)
*/
struct	S_physical_device_properties:VkPhysicalDeviceProperties{
	using VkPhysicalDeviceProperties::apiVersion;
	using VkPhysicalDeviceProperties::driverVersion;
	using VkPhysicalDeviceProperties::vendorID;
	using VkPhysicalDeviceProperties::deviceID;
	using VkPhysicalDeviceProperties::deviceType;
	using VkPhysicalDeviceProperties::deviceName;
	using VkPhysicalDeviceProperties::pipelineCacheUUID;
	using VkPhysicalDeviceProperties::limits;
	using VkPhysicalDeviceProperties::sparseProperties;

	S_physical_device_properties& operator=(const VkPhysicalDeviceProperties& rhs){static_cast<VkPhysicalDeviceProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceProperties*()const{return const_cast<VkPhysicalDeviceProperties*>(static_cast<const VkPhysicalDeviceProperties*>(this));}
};

/*	VkExtensionProperties
(returnedonly)
*/
struct	S_extension_properties:VkExtensionProperties{
	using VkExtensionProperties::extensionName;
	using VkExtensionProperties::specVersion;

	S_extension_properties& operator=(const VkExtensionProperties& rhs){static_cast<VkExtensionProperties&>(*this)=rhs; return *this;}
	operator VkExtensionProperties*()const{return const_cast<VkExtensionProperties*>(static_cast<const VkExtensionProperties*>(this));}
};

/*	VkLayerProperties
(returnedonly)
*/
struct	S_layer_properties:VkLayerProperties{
	using VkLayerProperties::layerName;
	using VkLayerProperties::specVersion;
	using VkLayerProperties::implementationVersion;
	using VkLayerProperties::description;

	S_layer_properties& operator=(const VkLayerProperties& rhs){static_cast<VkLayerProperties&>(*this)=rhs; return *this;}
	operator VkLayerProperties*()const{return const_cast<VkLayerProperties*>(static_cast<const VkLayerProperties*>(this));}
};

/*	VkApplicationInfo
*/
struct	S_application_info:VkApplicationInfo{
private:
	using VkApplicationInfo::sType;
	using VkApplicationInfo::pNext;
public:
	using VkApplicationInfo::pApplicationName;
	using VkApplicationInfo::applicationVersion;
	using VkApplicationInfo::pEngineName;
	using VkApplicationInfo::engineVersion;
	using VkApplicationInfo::apiVersion;

S_application_info():VkApplicationInfo{VK_STRUCTURE_TYPE_APPLICATION_INFO,nullptr}{}
S_application_info(
	const char * pApplicationName_,
	uint32_t applicationVersion_,
	const char * pEngineName_,
	uint32_t engineVersion_,
	uint32_t apiVersion_)
	:VkApplicationInfo{
	VK_STRUCTURE_TYPE_APPLICATION_INFO
	,nullptr
	,pApplicationName_
	,applicationVersion_
	,pEngineName_
	,engineVersion_
	,apiVersion_}
	{
	}

	S_application_info& operator=(const VkApplicationInfo& rhs){static_cast<VkApplicationInfo&>(*this)=rhs; return *this;}
	operator VkApplicationInfo*()const{return const_cast<VkApplicationInfo*>(static_cast<const VkApplicationInfo*>(this));}
};

/*	VkAllocationCallbacks
*/
struct	S_allocation_callbacks:VkAllocationCallbacks{
	using VkAllocationCallbacks::pUserData;
	using VkAllocationCallbacks::pfnAllocation;
	using VkAllocationCallbacks::pfnReallocation;
	using VkAllocationCallbacks::pfnFree;
	using VkAllocationCallbacks::pfnInternalAllocation;
	using VkAllocationCallbacks::pfnInternalFree;

	S_allocation_callbacks& operator=(const VkAllocationCallbacks& rhs){static_cast<VkAllocationCallbacks&>(*this)=rhs; return *this;}
	operator VkAllocationCallbacks*()const{return const_cast<VkAllocationCallbacks*>(static_cast<const VkAllocationCallbacks*>(this));}
};

/*	VkDeviceQueueGlobalPriorityCreateInfoEXT
ex to: VkDeviceQueueCreateInfo
*/
struct	S_device_queue_global_priority_create_info_EXT:VkDeviceQueueGlobalPriorityCreateInfoEXT{
private:
	using VkDeviceQueueGlobalPriorityCreateInfoEXT::sType;
	using VkDeviceQueueGlobalPriorityCreateInfoEXT::pNext;
public:
	using VkDeviceQueueGlobalPriorityCreateInfoEXT::globalPriority;

S_device_queue_global_priority_create_info_EXT():VkDeviceQueueGlobalPriorityCreateInfoEXT{VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT,nullptr}{}
S_device_queue_global_priority_create_info_EXT(
	E_queue_global_priority_EXT globalPriority_)
	:VkDeviceQueueGlobalPriorityCreateInfoEXT{
	VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT
	,nullptr
	,globalPriority_}
	{
	}

friend S_device_queue_create_info;

	S_device_queue_global_priority_create_info_EXT& operator=(const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs){static_cast<VkDeviceQueueGlobalPriorityCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkDeviceQueueGlobalPriorityCreateInfoEXT*()const{return const_cast<VkDeviceQueueGlobalPriorityCreateInfoEXT*>(static_cast<const VkDeviceQueueGlobalPriorityCreateInfoEXT*>(this));}
};

/*	VkDeviceQueueCreateInfo
ex:
	VkDeviceQueueGlobalPriorityCreateInfoEXT
*/

struct N_device_queue_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_device_queue_create_info& n_device_queue_global_priority_create_info_EXT(S_device_queue_global_priority_create_info_EXT const& next_);
};
struct	S_device_queue_create_info:VkDeviceQueueCreateInfo{
private:
	using VkDeviceQueueCreateInfo::sType;
	using VkDeviceQueueCreateInfo::pNext;
public:
	using VkDeviceQueueCreateInfo::flags;
	using VkDeviceQueueCreateInfo::queueFamilyIndex;
	using VkDeviceQueueCreateInfo::queueCount;
	using VkDeviceQueueCreateInfo::pQueuePriorities;

S_device_queue_create_info():VkDeviceQueueCreateInfo{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,nullptr}{}
S_device_queue_create_info(
	F_device_queue_create flags_,
	uint32_t queueFamilyIndex_,
	uint32_t queueCount_,
	const float * pQueuePriorities_)
	:VkDeviceQueueCreateInfo{
	VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO
	,nullptr
	,static_cast<VkFlags>(flags_)
	,queueFamilyIndex_
	,queueCount_
	,pQueuePriorities_}
	{
	}

	S_device_queue_create_info& operator=(const VkDeviceQueueCreateInfo& rhs){static_cast<VkDeviceQueueCreateInfo&>(*this)=rhs; return *this;}
	operator VkDeviceQueueCreateInfo*()const{return const_cast<VkDeviceQueueCreateInfo*>(static_cast<const VkDeviceQueueCreateInfo*>(this));}

S_device_queue_create_info& n_device_queue_global_priority_create_info_EXT(S_device_queue_global_priority_create_info_EXT const& next_);
void set_pNext(N_device_queue_create_info n_){pNext = n_;}
};

/*	VkPhysicalDeviceFeatures
*/
struct	S_physical_device_features:VkPhysicalDeviceFeatures{
	using VkPhysicalDeviceFeatures::robustBufferAccess;
	using VkPhysicalDeviceFeatures::fullDrawIndexUint32;
	using VkPhysicalDeviceFeatures::imageCubeArray;
	using VkPhysicalDeviceFeatures::independentBlend;
	using VkPhysicalDeviceFeatures::geometryShader;
	using VkPhysicalDeviceFeatures::tessellationShader;
	using VkPhysicalDeviceFeatures::sampleRateShading;
	using VkPhysicalDeviceFeatures::dualSrcBlend;
	using VkPhysicalDeviceFeatures::logicOp;
	using VkPhysicalDeviceFeatures::multiDrawIndirect;
	using VkPhysicalDeviceFeatures::drawIndirectFirstInstance;
	using VkPhysicalDeviceFeatures::depthClamp;
	using VkPhysicalDeviceFeatures::depthBiasClamp;
	using VkPhysicalDeviceFeatures::fillModeNonSolid;
	using VkPhysicalDeviceFeatures::depthBounds;
	using VkPhysicalDeviceFeatures::wideLines;
	using VkPhysicalDeviceFeatures::largePoints;
	using VkPhysicalDeviceFeatures::alphaToOne;
	using VkPhysicalDeviceFeatures::multiViewport;
	using VkPhysicalDeviceFeatures::samplerAnisotropy;
	using VkPhysicalDeviceFeatures::textureCompressionETC2;
	using VkPhysicalDeviceFeatures::textureCompressionASTC_LDR;
	using VkPhysicalDeviceFeatures::textureCompressionBC;
	using VkPhysicalDeviceFeatures::occlusionQueryPrecise;
	using VkPhysicalDeviceFeatures::pipelineStatisticsQuery;
	using VkPhysicalDeviceFeatures::vertexPipelineStoresAndAtomics;
	using VkPhysicalDeviceFeatures::fragmentStoresAndAtomics;
	using VkPhysicalDeviceFeatures::shaderTessellationAndGeometryPointSize;
	using VkPhysicalDeviceFeatures::shaderImageGatherExtended;
	using VkPhysicalDeviceFeatures::shaderStorageImageExtendedFormats;
	using VkPhysicalDeviceFeatures::shaderStorageImageMultisample;
	using VkPhysicalDeviceFeatures::shaderStorageImageReadWithoutFormat;
	using VkPhysicalDeviceFeatures::shaderStorageImageWriteWithoutFormat;
	using VkPhysicalDeviceFeatures::shaderUniformBufferArrayDynamicIndexing;
	using VkPhysicalDeviceFeatures::shaderSampledImageArrayDynamicIndexing;
	using VkPhysicalDeviceFeatures::shaderStorageBufferArrayDynamicIndexing;
	using VkPhysicalDeviceFeatures::shaderStorageImageArrayDynamicIndexing;
	using VkPhysicalDeviceFeatures::shaderClipDistance;
	using VkPhysicalDeviceFeatures::shaderCullDistance;
	using VkPhysicalDeviceFeatures::shaderFloat64;
	using VkPhysicalDeviceFeatures::shaderInt64;
	using VkPhysicalDeviceFeatures::shaderInt16;
	using VkPhysicalDeviceFeatures::shaderResourceResidency;
	using VkPhysicalDeviceFeatures::shaderResourceMinLod;
	using VkPhysicalDeviceFeatures::sparseBinding;
	using VkPhysicalDeviceFeatures::sparseResidencyBuffer;
	using VkPhysicalDeviceFeatures::sparseResidencyImage2D;
	using VkPhysicalDeviceFeatures::sparseResidencyImage3D;
	using VkPhysicalDeviceFeatures::sparseResidency2Samples;
	using VkPhysicalDeviceFeatures::sparseResidency4Samples;
	using VkPhysicalDeviceFeatures::sparseResidency8Samples;
	using VkPhysicalDeviceFeatures::sparseResidency16Samples;
	using VkPhysicalDeviceFeatures::sparseResidencyAliased;
	using VkPhysicalDeviceFeatures::variableMultisampleRate;
	using VkPhysicalDeviceFeatures::inheritedQueries;

	S_physical_device_features& operator=(const VkPhysicalDeviceFeatures& rhs){static_cast<VkPhysicalDeviceFeatures&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceFeatures*()const{return const_cast<VkPhysicalDeviceFeatures*>(static_cast<const VkPhysicalDeviceFeatures*>(this));}
};

/*	VkPhysicalDeviceVariablePointerFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_variable_pointer_features:VkPhysicalDeviceVariablePointerFeatures{
private:
	using VkPhysicalDeviceVariablePointerFeatures::sType;
	using VkPhysicalDeviceVariablePointerFeatures::pNext;
public:
	using VkPhysicalDeviceVariablePointerFeatures::variablePointersStorageBuffer;
	using VkPhysicalDeviceVariablePointerFeatures::variablePointers;

S_physical_device_variable_pointer_features():VkPhysicalDeviceVariablePointerFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES,nullptr}{}
S_physical_device_variable_pointer_features(
	VkBool32 variablePointersStorageBuffer_,
	VkBool32 variablePointers_)
	:VkPhysicalDeviceVariablePointerFeatures{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES
	,nullptr
	,variablePointersStorageBuffer_
	,variablePointers_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_variable_pointer_features& operator=(const VkPhysicalDeviceVariablePointerFeatures& rhs){static_cast<VkPhysicalDeviceVariablePointerFeatures&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceVariablePointerFeatures*()const{return const_cast<VkPhysicalDeviceVariablePointerFeatures*>(static_cast<const VkPhysicalDeviceVariablePointerFeatures*>(this));}
};

/*	VkPhysicalDeviceMultiviewFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_multiview_features:VkPhysicalDeviceMultiviewFeatures{
private:
	using VkPhysicalDeviceMultiviewFeatures::sType;
	using VkPhysicalDeviceMultiviewFeatures::pNext;
public:
	using VkPhysicalDeviceMultiviewFeatures::multiview;
	using VkPhysicalDeviceMultiviewFeatures::multiviewGeometryShader;
	using VkPhysicalDeviceMultiviewFeatures::multiviewTessellationShader;

S_physical_device_multiview_features():VkPhysicalDeviceMultiviewFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES,nullptr}{}
S_physical_device_multiview_features(
	VkBool32 multiview_,
	VkBool32 multiviewGeometryShader_,
	VkBool32 multiviewTessellationShader_)
	:VkPhysicalDeviceMultiviewFeatures{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES
	,nullptr
	,multiview_
	,multiviewGeometryShader_
	,multiviewTessellationShader_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_multiview_features& operator=(const VkPhysicalDeviceMultiviewFeatures& rhs){static_cast<VkPhysicalDeviceMultiviewFeatures&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceMultiviewFeatures*()const{return const_cast<VkPhysicalDeviceMultiviewFeatures*>(static_cast<const VkPhysicalDeviceMultiviewFeatures*>(this));}
};

/*	VkPhysicalDevice16BitStorageFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_16bit_storage_features:VkPhysicalDevice16BitStorageFeatures{
private:
	using VkPhysicalDevice16BitStorageFeatures::sType;
	using VkPhysicalDevice16BitStorageFeatures::pNext;
public:
	using VkPhysicalDevice16BitStorageFeatures::storageBuffer16BitAccess;
	using VkPhysicalDevice16BitStorageFeatures::uniformAndStorageBuffer16BitAccess;
	using VkPhysicalDevice16BitStorageFeatures::storagePushConstant16;
	using VkPhysicalDevice16BitStorageFeatures::storageInputOutput16;

S_physical_device_16bit_storage_features():VkPhysicalDevice16BitStorageFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES,nullptr}{}
S_physical_device_16bit_storage_features(
	VkBool32 storageBuffer16BitAccess_,
	VkBool32 uniformAndStorageBuffer16BitAccess_,
	VkBool32 storagePushConstant16_,
	VkBool32 storageInputOutput16_)
	:VkPhysicalDevice16BitStorageFeatures{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES
	,nullptr
	,storageBuffer16BitAccess_
	,uniformAndStorageBuffer16BitAccess_
	,storagePushConstant16_
	,storageInputOutput16_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_16bit_storage_features& operator=(const VkPhysicalDevice16BitStorageFeatures& rhs){static_cast<VkPhysicalDevice16BitStorageFeatures&>(*this)=rhs; return *this;}
	operator VkPhysicalDevice16BitStorageFeatures*()const{return const_cast<VkPhysicalDevice16BitStorageFeatures*>(static_cast<const VkPhysicalDevice16BitStorageFeatures*>(this));}
};

/*	VkPhysicalDeviceSamplerYcbcrConversionFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_sampler_ycbcr_conversion_features:VkPhysicalDeviceSamplerYcbcrConversionFeatures{
private:
	using VkPhysicalDeviceSamplerYcbcrConversionFeatures::sType;
	using VkPhysicalDeviceSamplerYcbcrConversionFeatures::pNext;
public:
	using VkPhysicalDeviceSamplerYcbcrConversionFeatures::samplerYcbcrConversion;

S_physical_device_sampler_ycbcr_conversion_features():VkPhysicalDeviceSamplerYcbcrConversionFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES,nullptr}{}
S_physical_device_sampler_ycbcr_conversion_features(
	VkBool32 samplerYcbcrConversion_)
	:VkPhysicalDeviceSamplerYcbcrConversionFeatures{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES
	,nullptr
	,samplerYcbcrConversion_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_sampler_ycbcr_conversion_features& operator=(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs){static_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceSamplerYcbcrConversionFeatures*()const{return const_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(static_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(this));}
};

/*	VkPhysicalDeviceProtectedMemoryFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_protected_memory_features:VkPhysicalDeviceProtectedMemoryFeatures{
private:
	using VkPhysicalDeviceProtectedMemoryFeatures::sType;
	using VkPhysicalDeviceProtectedMemoryFeatures::pNext;
public:
	using VkPhysicalDeviceProtectedMemoryFeatures::protectedMemory;

S_physical_device_protected_memory_features():VkPhysicalDeviceProtectedMemoryFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES,nullptr}{}
S_physical_device_protected_memory_features(
	VkBool32 protectedMemory_)
	:VkPhysicalDeviceProtectedMemoryFeatures{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES
	,nullptr
	,protectedMemory_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_protected_memory_features& operator=(const VkPhysicalDeviceProtectedMemoryFeatures& rhs){static_cast<VkPhysicalDeviceProtectedMemoryFeatures&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceProtectedMemoryFeatures*()const{return const_cast<VkPhysicalDeviceProtectedMemoryFeatures*>(static_cast<const VkPhysicalDeviceProtectedMemoryFeatures*>(this));}
};

/*	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
ex to: VkPhysicalDeviceFeatures2
*/
struct	S_physical_device_blend_operation_advanced_features_EXT:VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT{
private:
	using VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::sType;
	using VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::pNext;
public:
	using VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::advancedBlendCoherentOperations;

S_physical_device_blend_operation_advanced_features_EXT():VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT,nullptr}{}
S_physical_device_blend_operation_advanced_features_EXT(
	VkBool32 advancedBlendCoherentOperations_)
	:VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT
	,nullptr
	,advancedBlendCoherentOperations_}
	{
	}

friend S_physical_device_features2;

	S_physical_device_blend_operation_advanced_features_EXT& operator=(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs){static_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*()const{return const_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(static_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(this));}
};

/*	VkPhysicalDeviceShaderDrawParameterFeatures
ex to: VkPhysicalDeviceFeatures2
*/
struct	S_physical_device_shader_draw_parameter_features:VkPhysicalDeviceShaderDrawParameterFeatures{
private:
	using VkPhysicalDeviceShaderDrawParameterFeatures::sType;
	using VkPhysicalDeviceShaderDrawParameterFeatures::pNext;
public:
	using VkPhysicalDeviceShaderDrawParameterFeatures::shaderDrawParameters;

S_physical_device_shader_draw_parameter_features():VkPhysicalDeviceShaderDrawParameterFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES,nullptr}{}
S_physical_device_shader_draw_parameter_features(
	VkBool32 shaderDrawParameters_)
	:VkPhysicalDeviceShaderDrawParameterFeatures{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES
	,nullptr
	,shaderDrawParameters_}
	{
	}

friend S_physical_device_features2;

	S_physical_device_shader_draw_parameter_features& operator=(const VkPhysicalDeviceShaderDrawParameterFeatures& rhs){static_cast<VkPhysicalDeviceShaderDrawParameterFeatures&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceShaderDrawParameterFeatures*()const{return const_cast<VkPhysicalDeviceShaderDrawParameterFeatures*>(static_cast<const VkPhysicalDeviceShaderDrawParameterFeatures*>(this));}
};

/*	VkPhysicalDeviceDescriptorIndexingFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_descriptor_indexing_features_EXT:VkPhysicalDeviceDescriptorIndexingFeaturesEXT{
private:
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::sType;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::pNext;
public:
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderInputAttachmentArrayDynamicIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderUniformTexelBufferArrayDynamicIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderStorageTexelBufferArrayDynamicIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderUniformBufferArrayNonUniformIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderSampledImageArrayNonUniformIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderStorageBufferArrayNonUniformIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderStorageImageArrayNonUniformIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderInputAttachmentArrayNonUniformIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderUniformTexelBufferArrayNonUniformIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::shaderStorageTexelBufferArrayNonUniformIndexing;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingUniformBufferUpdateAfterBind;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingSampledImageUpdateAfterBind;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingStorageImageUpdateAfterBind;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingStorageBufferUpdateAfterBind;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingUniformTexelBufferUpdateAfterBind;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingStorageTexelBufferUpdateAfterBind;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingUpdateUnusedWhilePending;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingPartiallyBound;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::descriptorBindingVariableDescriptorCount;
	using VkPhysicalDeviceDescriptorIndexingFeaturesEXT::runtimeDescriptorArray;

S_physical_device_descriptor_indexing_features_EXT():VkPhysicalDeviceDescriptorIndexingFeaturesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT,nullptr}{}
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
	:VkPhysicalDeviceDescriptorIndexingFeaturesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT
	,nullptr
	,shaderInputAttachmentArrayDynamicIndexing_
	,shaderUniformTexelBufferArrayDynamicIndexing_
	,shaderStorageTexelBufferArrayDynamicIndexing_
	,shaderUniformBufferArrayNonUniformIndexing_
	,shaderSampledImageArrayNonUniformIndexing_
	,shaderStorageBufferArrayNonUniformIndexing_
	,shaderStorageImageArrayNonUniformIndexing_
	,shaderInputAttachmentArrayNonUniformIndexing_
	,shaderUniformTexelBufferArrayNonUniformIndexing_
	,shaderStorageTexelBufferArrayNonUniformIndexing_
	,descriptorBindingUniformBufferUpdateAfterBind_
	,descriptorBindingSampledImageUpdateAfterBind_
	,descriptorBindingStorageImageUpdateAfterBind_
	,descriptorBindingStorageBufferUpdateAfterBind_
	,descriptorBindingUniformTexelBufferUpdateAfterBind_
	,descriptorBindingStorageTexelBufferUpdateAfterBind_
	,descriptorBindingUpdateUnusedWhilePending_
	,descriptorBindingPartiallyBound_
	,descriptorBindingVariableDescriptorCount_
	,runtimeDescriptorArray_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_descriptor_indexing_features_EXT& operator=(const VkPhysicalDeviceDescriptorIndexingFeaturesEXT& rhs){static_cast<VkPhysicalDeviceDescriptorIndexingFeaturesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceDescriptorIndexingFeaturesEXT*()const{return const_cast<VkPhysicalDeviceDescriptorIndexingFeaturesEXT*>(static_cast<const VkPhysicalDeviceDescriptorIndexingFeaturesEXT*>(this));}
};

/*	VkPhysicalDevice8BitStorageFeaturesKHR
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_8bit_storage_features_KHR:VkPhysicalDevice8BitStorageFeaturesKHR{
private:
	using VkPhysicalDevice8BitStorageFeaturesKHR::sType;
	using VkPhysicalDevice8BitStorageFeaturesKHR::pNext;
public:
	using VkPhysicalDevice8BitStorageFeaturesKHR::storageBuffer8BitAccess;
	using VkPhysicalDevice8BitStorageFeaturesKHR::uniformAndStorageBuffer8BitAccess;
	using VkPhysicalDevice8BitStorageFeaturesKHR::storagePushConstant8;

S_physical_device_8bit_storage_features_KHR():VkPhysicalDevice8BitStorageFeaturesKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR,nullptr}{}
S_physical_device_8bit_storage_features_KHR(
	VkBool32 storageBuffer8BitAccess_,
	VkBool32 uniformAndStorageBuffer8BitAccess_,
	VkBool32 storagePushConstant8_)
	:VkPhysicalDevice8BitStorageFeaturesKHR{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR
	,nullptr
	,storageBuffer8BitAccess_
	,uniformAndStorageBuffer8BitAccess_
	,storagePushConstant8_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_8bit_storage_features_KHR& operator=(const VkPhysicalDevice8BitStorageFeaturesKHR& rhs){static_cast<VkPhysicalDevice8BitStorageFeaturesKHR&>(*this)=rhs; return *this;}
	operator VkPhysicalDevice8BitStorageFeaturesKHR*()const{return const_cast<VkPhysicalDevice8BitStorageFeaturesKHR*>(static_cast<const VkPhysicalDevice8BitStorageFeaturesKHR*>(this));}
};

/*	VkPhysicalDeviceConditionalRenderingFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
struct	S_physical_device_conditional_rendering_features_EXT:VkPhysicalDeviceConditionalRenderingFeaturesEXT{
private:
	using VkPhysicalDeviceConditionalRenderingFeaturesEXT::sType;
	using VkPhysicalDeviceConditionalRenderingFeaturesEXT::pNext;
public:
	using VkPhysicalDeviceConditionalRenderingFeaturesEXT::conditionalRendering;
	using VkPhysicalDeviceConditionalRenderingFeaturesEXT::inheritedConditionalRendering;

S_physical_device_conditional_rendering_features_EXT():VkPhysicalDeviceConditionalRenderingFeaturesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT,nullptr}{}
S_physical_device_conditional_rendering_features_EXT(
	VkBool32 conditionalRendering_,
	VkBool32 inheritedConditionalRendering_)
	:VkPhysicalDeviceConditionalRenderingFeaturesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT
	,nullptr
	,conditionalRendering_
	,inheritedConditionalRendering_}
	{
	}

friend S_physical_device_features2;
friend S_device_create_info;

	S_physical_device_conditional_rendering_features_EXT& operator=(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs){static_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceConditionalRenderingFeaturesEXT*()const{return const_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(static_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(this));}
};

/*	VkPhysicalDeviceFeatures2
ex to: VkDeviceCreateInfo
ex:
	VkPhysicalDeviceVariablePointerFeatures
	VkPhysicalDeviceMultiviewFeatures
	VkPhysicalDevice16BitStorageFeatures
	VkPhysicalDeviceSamplerYcbcrConversionFeatures
	VkPhysicalDeviceProtectedMemoryFeatures
	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
	VkPhysicalDeviceShaderDrawParameterFeatures
	VkPhysicalDeviceDescriptorIndexingFeaturesEXT
	VkPhysicalDevice8BitStorageFeaturesKHR
	VkPhysicalDeviceConditionalRenderingFeaturesEXT
*/

struct N_physical_device_features2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_physical_device_features2& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
N_physical_device_features2& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
N_physical_device_features2& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
N_physical_device_features2& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
N_physical_device_features2& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
N_physical_device_features2& n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_);
N_physical_device_features2& n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_);
N_physical_device_features2& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
N_physical_device_features2& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
N_physical_device_features2& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
};
struct	S_physical_device_features2:VkPhysicalDeviceFeatures2{
private:
	using VkPhysicalDeviceFeatures2::sType;
	using VkPhysicalDeviceFeatures2::pNext;
public:
	using VkPhysicalDeviceFeatures2::features;

S_physical_device_features2():VkPhysicalDeviceFeatures2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,nullptr}{}
S_physical_device_features2(
	S_physical_device_features features_)
	:VkPhysicalDeviceFeatures2{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2
	,nullptr
	,features_}
	{
	}

friend S_device_create_info;

	S_physical_device_features2& operator=(const VkPhysicalDeviceFeatures2& rhs){static_cast<VkPhysicalDeviceFeatures2&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceFeatures2*()const{return const_cast<VkPhysicalDeviceFeatures2*>(static_cast<const VkPhysicalDeviceFeatures2*>(this));}

S_physical_device_features2& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
S_physical_device_features2& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
S_physical_device_features2& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
S_physical_device_features2& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
S_physical_device_features2& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
S_physical_device_features2& n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_);
S_physical_device_features2& n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_);
S_physical_device_features2& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
S_physical_device_features2& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
S_physical_device_features2& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
void set_pNext(N_physical_device_features2 n_){pNext = n_;}
};

/*	VkDeviceGroupDeviceCreateInfo
ex to: VkDeviceCreateInfo
*/
struct	S_device_group_device_create_info:VkDeviceGroupDeviceCreateInfo{
private:
	using VkDeviceGroupDeviceCreateInfo::sType;
	using VkDeviceGroupDeviceCreateInfo::pNext;
public:
	using VkDeviceGroupDeviceCreateInfo::physicalDeviceCount;
	using VkDeviceGroupDeviceCreateInfo::pPhysicalDevices;

S_device_group_device_create_info():VkDeviceGroupDeviceCreateInfo{VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,nullptr}{}
S_device_group_device_create_info(
	uint32_t physicalDeviceCount_,
	const VkPhysicalDevice * pPhysicalDevices_)
	:VkDeviceGroupDeviceCreateInfo{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO
	,nullptr
	,physicalDeviceCount_
	,pPhysicalDevices_}
	{
	}

friend S_device_create_info;

	S_device_group_device_create_info& operator=(const VkDeviceGroupDeviceCreateInfo& rhs){static_cast<VkDeviceGroupDeviceCreateInfo&>(*this)=rhs; return *this;}
	operator VkDeviceGroupDeviceCreateInfo*()const{return const_cast<VkDeviceGroupDeviceCreateInfo*>(static_cast<const VkDeviceGroupDeviceCreateInfo*>(this));}
};

/*	VkDeviceCreateInfo
ex:
	VkPhysicalDeviceFeatures2
	VkPhysicalDeviceVariablePointerFeatures
	VkPhysicalDeviceMultiviewFeatures
	VkDeviceGroupDeviceCreateInfo
	VkPhysicalDevice16BitStorageFeatures
	VkPhysicalDeviceSamplerYcbcrConversionFeatures
	VkPhysicalDeviceProtectedMemoryFeatures
	VkPhysicalDeviceDescriptorIndexingFeaturesEXT
	VkPhysicalDevice8BitStorageFeaturesKHR
	VkPhysicalDeviceConditionalRenderingFeaturesEXT
*/

struct N_device_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_device_create_info& n_physical_device_features2(S_physical_device_features2 const& next_);
N_device_create_info& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
N_device_create_info& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
N_device_create_info& n_device_group_device_create_info(S_device_group_device_create_info const& next_);
N_device_create_info& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
N_device_create_info& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
N_device_create_info& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
N_device_create_info& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
N_device_create_info& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
N_device_create_info& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
};
struct	S_device_create_info:VkDeviceCreateInfo{
private:
	using VkDeviceCreateInfo::sType;
	using VkDeviceCreateInfo::pNext;
public:
	using VkDeviceCreateInfo::flags;
	using VkDeviceCreateInfo::queueCreateInfoCount;
	using VkDeviceCreateInfo::pQueueCreateInfos;
	using VkDeviceCreateInfo::enabledLayerCount;
	using VkDeviceCreateInfo::ppEnabledLayerNames;
	using VkDeviceCreateInfo::enabledExtensionCount;
	using VkDeviceCreateInfo::ppEnabledExtensionNames;
	using VkDeviceCreateInfo::pEnabledFeatures;

S_device_create_info():VkDeviceCreateInfo{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,nullptr}{}
S_device_create_info(
	VkDeviceCreateFlags flags_,
	uint32_t queueCreateInfoCount_,
	const S_device_queue_create_info * pQueueCreateInfos_,
	uint32_t enabledLayerCount_,
	const char * const* ppEnabledLayerNames_,
	uint32_t enabledExtensionCount_,
	const char * const* ppEnabledExtensionNames_,
	const S_physical_device_features * pEnabledFeatures_)
	:VkDeviceCreateInfo{
	VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO
	,nullptr
	,flags_
	,queueCreateInfoCount_
	,pQueueCreateInfos_
	,enabledLayerCount_
	,ppEnabledLayerNames_
	,enabledExtensionCount_
	,ppEnabledExtensionNames_
	,pEnabledFeatures_}
	{
	}

	S_device_create_info& operator=(const VkDeviceCreateInfo& rhs){static_cast<VkDeviceCreateInfo&>(*this)=rhs; return *this;}
	operator VkDeviceCreateInfo*()const{return const_cast<VkDeviceCreateInfo*>(static_cast<const VkDeviceCreateInfo*>(this));}

S_device_create_info& n_physical_device_features2(S_physical_device_features2 const& next_);
S_device_create_info& n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_);
S_device_create_info& n_physical_device_multiview_features(S_physical_device_multiview_features const& next_);
S_device_create_info& n_device_group_device_create_info(S_device_group_device_create_info const& next_);
S_device_create_info& n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_);
S_device_create_info& n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_);
S_device_create_info& n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_);
S_device_create_info& n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_);
S_device_create_info& n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_);
S_device_create_info& n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_);
void set_pNext(N_device_create_info n_){pNext = n_;}
};

/*	VkDebugReportCallbackCreateInfoEXT
ex to: VkInstanceCreateInfo
*/
struct	S_debug_report_callback_create_info_EXT:VkDebugReportCallbackCreateInfoEXT{
private:
	using VkDebugReportCallbackCreateInfoEXT::sType;
	using VkDebugReportCallbackCreateInfoEXT::pNext;
public:
	using VkDebugReportCallbackCreateInfoEXT::flags;
	using VkDebugReportCallbackCreateInfoEXT::pfnCallback;
	using VkDebugReportCallbackCreateInfoEXT::pUserData;

S_debug_report_callback_create_info_EXT():VkDebugReportCallbackCreateInfoEXT{VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT,nullptr}{}
S_debug_report_callback_create_info_EXT(
	F_debug_report_EXT flags_,
	PFN_vkDebugReportCallbackEXT pfnCallback_,
	void * pUserData_)
	:VkDebugReportCallbackCreateInfoEXT{
	VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT
	,nullptr
	,flags_
	,pfnCallback_
	,pUserData_}
	{
	}

friend S_instance_create_info;

	S_debug_report_callback_create_info_EXT& operator=(const VkDebugReportCallbackCreateInfoEXT& rhs){static_cast<VkDebugReportCallbackCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkDebugReportCallbackCreateInfoEXT*()const{return const_cast<VkDebugReportCallbackCreateInfoEXT*>(static_cast<const VkDebugReportCallbackCreateInfoEXT*>(this));}
};

/*	VkValidationFlagsEXT
ex to: VkInstanceCreateInfo
*/
struct	S_validation_flags_EXT:VkValidationFlagsEXT{
private:
	using VkValidationFlagsEXT::sType;
	using VkValidationFlagsEXT::pNext;
public:
	using VkValidationFlagsEXT::disabledValidationCheckCount;
	using VkValidationFlagsEXT::pDisabledValidationChecks;

S_validation_flags_EXT():VkValidationFlagsEXT{VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT,nullptr}{}
S_validation_flags_EXT(
	uint32_t disabledValidationCheckCount_,
	const E_validation_check_EXT * pDisabledValidationChecks_)
	:VkValidationFlagsEXT{
	VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT
	,nullptr
	,disabledValidationCheckCount_
	,*pDisabledValidationChecks_}
	{
	}

friend S_instance_create_info;

	S_validation_flags_EXT& operator=(const VkValidationFlagsEXT& rhs){static_cast<VkValidationFlagsEXT&>(*this)=rhs; return *this;}
	operator VkValidationFlagsEXT*()const{return const_cast<VkValidationFlagsEXT*>(static_cast<const VkValidationFlagsEXT*>(this));}
};

/*	VkDebugUtilsMessengerCreateInfoEXT
ex to: VkInstanceCreateInfo
*/
struct	S_debug_utils_messenger_create_info_EXT:VkDebugUtilsMessengerCreateInfoEXT{
private:
	using VkDebugUtilsMessengerCreateInfoEXT::sType;
	using VkDebugUtilsMessengerCreateInfoEXT::pNext;
public:
	using VkDebugUtilsMessengerCreateInfoEXT::flags;
	using VkDebugUtilsMessengerCreateInfoEXT::messageSeverity;
	using VkDebugUtilsMessengerCreateInfoEXT::messageType;
	using VkDebugUtilsMessengerCreateInfoEXT::pfnUserCallback;
	using VkDebugUtilsMessengerCreateInfoEXT::pUserData;

S_debug_utils_messenger_create_info_EXT():VkDebugUtilsMessengerCreateInfoEXT{VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT,nullptr}{}
S_debug_utils_messenger_create_info_EXT(
	VkDebugUtilsMessengerCreateFlagsEXT flags_,
	F_debug_utils_message_severity_EXT messageSeverity_,
	F_debug_utils_message_type_EXT messageType_,
	PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback_,
	void * pUserData_)
	:VkDebugUtilsMessengerCreateInfoEXT{
	VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT
	,nullptr
	,flags_
	,messageSeverity_
	,messageType_
	,pfnUserCallback_
	,pUserData_}
	{
	}

friend S_instance_create_info;

	S_debug_utils_messenger_create_info_EXT& operator=(const VkDebugUtilsMessengerCreateInfoEXT& rhs){static_cast<VkDebugUtilsMessengerCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkDebugUtilsMessengerCreateInfoEXT*()const{return const_cast<VkDebugUtilsMessengerCreateInfoEXT*>(static_cast<const VkDebugUtilsMessengerCreateInfoEXT*>(this));}
};

/*	VkInstanceCreateInfo
ex:
	VkDebugReportCallbackCreateInfoEXT
	VkValidationFlagsEXT
	VkDebugUtilsMessengerCreateInfoEXT
*/

struct N_instance_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_instance_create_info& n_debug_report_callback_create_info_EXT(S_debug_report_callback_create_info_EXT const& next_);
N_instance_create_info& n_validation_flags_EXT(S_validation_flags_EXT const& next_);
N_instance_create_info& n_debug_utils_messenger_create_info_EXT(S_debug_utils_messenger_create_info_EXT const& next_);
};
struct	S_instance_create_info:VkInstanceCreateInfo{
private:
	using VkInstanceCreateInfo::sType;
	using VkInstanceCreateInfo::pNext;
public:
	using VkInstanceCreateInfo::flags;
	using VkInstanceCreateInfo::pApplicationInfo;
	using VkInstanceCreateInfo::enabledLayerCount;
	using VkInstanceCreateInfo::ppEnabledLayerNames;
	using VkInstanceCreateInfo::enabledExtensionCount;
	using VkInstanceCreateInfo::ppEnabledExtensionNames;

S_instance_create_info():VkInstanceCreateInfo{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,nullptr}{}
S_instance_create_info(
	VkInstanceCreateFlags flags_,
	const S_application_info * pApplicationInfo_,
	uint32_t enabledLayerCount_,
	const char * const* ppEnabledLayerNames_,
	uint32_t enabledExtensionCount_,
	const char * const* ppEnabledExtensionNames_)
	:VkInstanceCreateInfo{
	VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO
	,nullptr
	,flags_
	,pApplicationInfo_
	,enabledLayerCount_
	,ppEnabledLayerNames_
	,enabledExtensionCount_
	,ppEnabledExtensionNames_}
	{
	}

	S_instance_create_info& operator=(const VkInstanceCreateInfo& rhs){static_cast<VkInstanceCreateInfo&>(*this)=rhs; return *this;}
	operator VkInstanceCreateInfo*()const{return const_cast<VkInstanceCreateInfo*>(static_cast<const VkInstanceCreateInfo*>(this));}

S_instance_create_info& n_debug_report_callback_create_info_EXT(S_debug_report_callback_create_info_EXT const& next_);
S_instance_create_info& n_validation_flags_EXT(S_validation_flags_EXT const& next_);
S_instance_create_info& n_debug_utils_messenger_create_info_EXT(S_debug_utils_messenger_create_info_EXT const& next_);
void set_pNext(N_instance_create_info n_){pNext = n_;}
};

/*	VkQueueFamilyProperties
(returnedonly)
*/
struct	S_queue_family_properties:VkQueueFamilyProperties{
	using VkQueueFamilyProperties::queueFlags;
	using VkQueueFamilyProperties::queueCount;
	using VkQueueFamilyProperties::timestampValidBits;
	using VkQueueFamilyProperties::minImageTransferGranularity;

	S_queue_family_properties& operator=(const VkQueueFamilyProperties& rhs){static_cast<VkQueueFamilyProperties&>(*this)=rhs; return *this;}
	operator VkQueueFamilyProperties*()const{return const_cast<VkQueueFamilyProperties*>(static_cast<const VkQueueFamilyProperties*>(this));}
};

/*	VkMemoryType
(returnedonly)
*/
struct	S_memory_type:VkMemoryType{
	using VkMemoryType::propertyFlags;
	using VkMemoryType::heapIndex;

	S_memory_type& operator=(const VkMemoryType& rhs){static_cast<VkMemoryType&>(*this)=rhs; return *this;}
	operator VkMemoryType*()const{return const_cast<VkMemoryType*>(static_cast<const VkMemoryType*>(this));}
};

/*	VkMemoryHeap
(returnedonly)
*/
struct	S_memory_heap:VkMemoryHeap{
	using VkMemoryHeap::size;
	using VkMemoryHeap::flags;

	S_memory_heap& operator=(const VkMemoryHeap& rhs){static_cast<VkMemoryHeap&>(*this)=rhs; return *this;}
	operator VkMemoryHeap*()const{return const_cast<VkMemoryHeap*>(static_cast<const VkMemoryHeap*>(this));}
};

/*	VkPhysicalDeviceMemoryProperties
(returnedonly)
*/
struct	S_physical_device_memory_properties:VkPhysicalDeviceMemoryProperties{
	using VkPhysicalDeviceMemoryProperties::memoryTypeCount;
	using VkPhysicalDeviceMemoryProperties::memoryTypes;
	using VkPhysicalDeviceMemoryProperties::memoryHeapCount;
	using VkPhysicalDeviceMemoryProperties::memoryHeaps;

	S_physical_device_memory_properties& operator=(const VkPhysicalDeviceMemoryProperties& rhs){static_cast<VkPhysicalDeviceMemoryProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceMemoryProperties*()const{return const_cast<VkPhysicalDeviceMemoryProperties*>(static_cast<const VkPhysicalDeviceMemoryProperties*>(this));}
};

/*	VkDedicatedAllocationMemoryAllocateInfoNV
ex to: VkMemoryAllocateInfo
*/
struct	S_dedicated_allocation_memory_allocate_info_NV:VkDedicatedAllocationMemoryAllocateInfoNV{
private:
	using VkDedicatedAllocationMemoryAllocateInfoNV::sType;
	using VkDedicatedAllocationMemoryAllocateInfoNV::pNext;
public:
	using VkDedicatedAllocationMemoryAllocateInfoNV::image;
	using VkDedicatedAllocationMemoryAllocateInfoNV::buffer;

S_dedicated_allocation_memory_allocate_info_NV():VkDedicatedAllocationMemoryAllocateInfoNV{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV,nullptr}{}
S_dedicated_allocation_memory_allocate_info_NV(
	VkImage image_,
	VkBuffer buffer_)
	:VkDedicatedAllocationMemoryAllocateInfoNV{
	VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV
	,nullptr
	,image_
	,buffer_}
	{
	}

friend S_memory_allocate_info;

	S_dedicated_allocation_memory_allocate_info_NV& operator=(const VkDedicatedAllocationMemoryAllocateInfoNV& rhs){static_cast<VkDedicatedAllocationMemoryAllocateInfoNV&>(*this)=rhs; return *this;}
	operator VkDedicatedAllocationMemoryAllocateInfoNV*()const{return const_cast<VkDedicatedAllocationMemoryAllocateInfoNV*>(static_cast<const VkDedicatedAllocationMemoryAllocateInfoNV*>(this));}
};

/*	VkExportMemoryAllocateInfoNV
ex to: VkMemoryAllocateInfo
*/
struct	S_export_memory_allocate_info_NV:VkExportMemoryAllocateInfoNV{
private:
	using VkExportMemoryAllocateInfoNV::sType;
	using VkExportMemoryAllocateInfoNV::pNext;
public:
	using VkExportMemoryAllocateInfoNV::handleTypes;

S_export_memory_allocate_info_NV():VkExportMemoryAllocateInfoNV{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV,nullptr}{}
S_export_memory_allocate_info_NV(
	F_external_memory_handle_type_NV handleTypes_)
	:VkExportMemoryAllocateInfoNV{
	VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV
	,nullptr
	,handleTypes_}
	{
	}

friend S_memory_allocate_info;

	S_export_memory_allocate_info_NV& operator=(const VkExportMemoryAllocateInfoNV& rhs){static_cast<VkExportMemoryAllocateInfoNV&>(*this)=rhs; return *this;}
	operator VkExportMemoryAllocateInfoNV*()const{return const_cast<VkExportMemoryAllocateInfoNV*>(static_cast<const VkExportMemoryAllocateInfoNV*>(this));}
};

/*	VkImportMemoryWin32HandleInfoNV
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_NV
struct	S_import_memory_win32_handle_info_NV:VkImportMemoryWin32HandleInfoNV{
private:
	using VkImportMemoryWin32HandleInfoNV::sType;
	using VkImportMemoryWin32HandleInfoNV::pNext;
public:
	using VkImportMemoryWin32HandleInfoNV::handleType;
	using VkImportMemoryWin32HandleInfoNV::handle;

S_import_memory_win32_handle_info_NV():VkImportMemoryWin32HandleInfoNV{VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV,nullptr}{}
S_import_memory_win32_handle_info_NV(
	F_external_memory_handle_type_NV handleType_,
	HANDLE handle_)
	:VkImportMemoryWin32HandleInfoNV{
	VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV
	,nullptr
	,handleType_
	,handle_}
	{
	}

friend S_memory_allocate_info;

	S_import_memory_win32_handle_info_NV& operator=(const VkImportMemoryWin32HandleInfoNV& rhs){static_cast<VkImportMemoryWin32HandleInfoNV&>(*this)=rhs; return *this;}
	operator VkImportMemoryWin32HandleInfoNV*()const{return const_cast<VkImportMemoryWin32HandleInfoNV*>(static_cast<const VkImportMemoryWin32HandleInfoNV*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_NV

/*	VkExportMemoryWin32HandleInfoNV
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_NV
struct	S_export_memory_win32_handle_info_NV:VkExportMemoryWin32HandleInfoNV{
private:
	using VkExportMemoryWin32HandleInfoNV::sType;
	using VkExportMemoryWin32HandleInfoNV::pNext;
public:
	using VkExportMemoryWin32HandleInfoNV::pAttributes;
	using VkExportMemoryWin32HandleInfoNV::dwAccess;

S_export_memory_win32_handle_info_NV():VkExportMemoryWin32HandleInfoNV{VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV,nullptr}{}
S_export_memory_win32_handle_info_NV(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_)
	:VkExportMemoryWin32HandleInfoNV{
	VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV
	,nullptr
	,pAttributes_
	,dwAccess_}
	{
	}

friend S_memory_allocate_info;

	S_export_memory_win32_handle_info_NV& operator=(const VkExportMemoryWin32HandleInfoNV& rhs){static_cast<VkExportMemoryWin32HandleInfoNV&>(*this)=rhs; return *this;}
	operator VkExportMemoryWin32HandleInfoNV*()const{return const_cast<VkExportMemoryWin32HandleInfoNV*>(static_cast<const VkExportMemoryWin32HandleInfoNV*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_NV

/*	VkExportMemoryAllocateInfo
ex to: VkMemoryAllocateInfo
*/
struct	S_export_memory_allocate_info:VkExportMemoryAllocateInfo{
private:
	using VkExportMemoryAllocateInfo::sType;
	using VkExportMemoryAllocateInfo::pNext;
public:
	using VkExportMemoryAllocateInfo::handleTypes;

S_export_memory_allocate_info():VkExportMemoryAllocateInfo{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO,nullptr}{}
S_export_memory_allocate_info(
	F_external_memory_handle_type handleTypes_)
	:VkExportMemoryAllocateInfo{
	VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO
	,nullptr
	,handleTypes_}
	{
	}

friend S_memory_allocate_info;

	S_export_memory_allocate_info& operator=(const VkExportMemoryAllocateInfo& rhs){static_cast<VkExportMemoryAllocateInfo&>(*this)=rhs; return *this;}
	operator VkExportMemoryAllocateInfo*()const{return const_cast<VkExportMemoryAllocateInfo*>(static_cast<const VkExportMemoryAllocateInfo*>(this));}
};

/*	VkImportMemoryWin32HandleInfoKHR
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_import_memory_win32_handle_info_KHR:VkImportMemoryWin32HandleInfoKHR{
private:
	using VkImportMemoryWin32HandleInfoKHR::sType;
	using VkImportMemoryWin32HandleInfoKHR::pNext;
public:
	using VkImportMemoryWin32HandleInfoKHR::handleType;
	using VkImportMemoryWin32HandleInfoKHR::handle;
	using VkImportMemoryWin32HandleInfoKHR::name;

S_import_memory_win32_handle_info_KHR():VkImportMemoryWin32HandleInfoKHR{VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_import_memory_win32_handle_info_KHR(
	F_external_memory_handle_type handleType_,
	HANDLE handle_,
	LPCWSTR name_)
	:VkImportMemoryWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR
	,nullptr
	,handleType_
	,handle_
	,name_}
	{
	}

friend S_memory_allocate_info;

	S_import_memory_win32_handle_info_KHR& operator=(const VkImportMemoryWin32HandleInfoKHR& rhs){static_cast<VkImportMemoryWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkImportMemoryWin32HandleInfoKHR*()const{return const_cast<VkImportMemoryWin32HandleInfoKHR*>(static_cast<const VkImportMemoryWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkExportMemoryWin32HandleInfoKHR
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_export_memory_win32_handle_info_KHR:VkExportMemoryWin32HandleInfoKHR{
private:
	using VkExportMemoryWin32HandleInfoKHR::sType;
	using VkExportMemoryWin32HandleInfoKHR::pNext;
public:
	using VkExportMemoryWin32HandleInfoKHR::pAttributes;
	using VkExportMemoryWin32HandleInfoKHR::dwAccess;
	using VkExportMemoryWin32HandleInfoKHR::name;

S_export_memory_win32_handle_info_KHR():VkExportMemoryWin32HandleInfoKHR{VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_export_memory_win32_handle_info_KHR(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_,
	LPCWSTR name_)
	:VkExportMemoryWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR
	,nullptr
	,pAttributes_
	,dwAccess_
	,name_}
	{
	}

friend S_memory_allocate_info;

	S_export_memory_win32_handle_info_KHR& operator=(const VkExportMemoryWin32HandleInfoKHR& rhs){static_cast<VkExportMemoryWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkExportMemoryWin32HandleInfoKHR*()const{return const_cast<VkExportMemoryWin32HandleInfoKHR*>(static_cast<const VkExportMemoryWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportMemoryFdInfoKHR
ex to: VkMemoryAllocateInfo
*/
struct	S_import_memory_fd_info_KHR:VkImportMemoryFdInfoKHR{
private:
	using VkImportMemoryFdInfoKHR::sType;
	using VkImportMemoryFdInfoKHR::pNext;
public:
	using VkImportMemoryFdInfoKHR::handleType;
	using VkImportMemoryFdInfoKHR::fd;

S_import_memory_fd_info_KHR():VkImportMemoryFdInfoKHR{VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR,nullptr}{}
S_import_memory_fd_info_KHR(
	F_external_memory_handle_type handleType_,
	int fd_)
	:VkImportMemoryFdInfoKHR{
	VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR
	,nullptr
	,handleType_
	,fd_}
	{
	}

friend S_memory_allocate_info;

	S_import_memory_fd_info_KHR& operator=(const VkImportMemoryFdInfoKHR& rhs){static_cast<VkImportMemoryFdInfoKHR&>(*this)=rhs; return *this;}
	operator VkImportMemoryFdInfoKHR*()const{return const_cast<VkImportMemoryFdInfoKHR*>(static_cast<const VkImportMemoryFdInfoKHR*>(this));}
};

/*	VkMemoryAllocateFlagsInfo
ex to: VkMemoryAllocateInfo
*/
struct	S_memory_allocate_flags_info:VkMemoryAllocateFlagsInfo{
private:
	using VkMemoryAllocateFlagsInfo::sType;
	using VkMemoryAllocateFlagsInfo::pNext;
public:
	using VkMemoryAllocateFlagsInfo::flags;
	using VkMemoryAllocateFlagsInfo::deviceMask;

S_memory_allocate_flags_info():VkMemoryAllocateFlagsInfo{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO,nullptr}{}
S_memory_allocate_flags_info(
	F_memory_allocate flags_,
	uint32_t deviceMask_)
	:VkMemoryAllocateFlagsInfo{
	VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO
	,nullptr
	,flags_
	,deviceMask_}
	{
	}

friend S_memory_allocate_info;

	S_memory_allocate_flags_info& operator=(const VkMemoryAllocateFlagsInfo& rhs){static_cast<VkMemoryAllocateFlagsInfo&>(*this)=rhs; return *this;}
	operator VkMemoryAllocateFlagsInfo*()const{return const_cast<VkMemoryAllocateFlagsInfo*>(static_cast<const VkMemoryAllocateFlagsInfo*>(this));}
};

/*	VkMemoryDedicatedAllocateInfo
ex to: VkMemoryAllocateInfo
*/
struct	S_memory_dedicated_allocate_info:VkMemoryDedicatedAllocateInfo{
private:
	using VkMemoryDedicatedAllocateInfo::sType;
	using VkMemoryDedicatedAllocateInfo::pNext;
public:
	using VkMemoryDedicatedAllocateInfo::image;
	using VkMemoryDedicatedAllocateInfo::buffer;

S_memory_dedicated_allocate_info():VkMemoryDedicatedAllocateInfo{VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO,nullptr}{}
S_memory_dedicated_allocate_info(
	VkImage image_,
	VkBuffer buffer_)
	:VkMemoryDedicatedAllocateInfo{
	VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO
	,nullptr
	,image_
	,buffer_}
	{
	}

friend S_memory_allocate_info;

	S_memory_dedicated_allocate_info& operator=(const VkMemoryDedicatedAllocateInfo& rhs){static_cast<VkMemoryDedicatedAllocateInfo&>(*this)=rhs; return *this;}
	operator VkMemoryDedicatedAllocateInfo*()const{return const_cast<VkMemoryDedicatedAllocateInfo*>(static_cast<const VkMemoryDedicatedAllocateInfo*>(this));}
};

/*	VkImportMemoryHostPointerInfoEXT
ex to: VkMemoryAllocateInfo
*/
struct	S_import_memory_host_pointer_info_EXT:VkImportMemoryHostPointerInfoEXT{
private:
	using VkImportMemoryHostPointerInfoEXT::sType;
	using VkImportMemoryHostPointerInfoEXT::pNext;
public:
	using VkImportMemoryHostPointerInfoEXT::handleType;
	using VkImportMemoryHostPointerInfoEXT::pHostPointer;

S_import_memory_host_pointer_info_EXT():VkImportMemoryHostPointerInfoEXT{VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT,nullptr}{}
S_import_memory_host_pointer_info_EXT(
	F_external_memory_handle_type handleType_,
	void * pHostPointer_)
	:VkImportMemoryHostPointerInfoEXT{
	VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT
	,nullptr
	,handleType_
	,pHostPointer_}
	{
	}

friend S_memory_allocate_info;

	S_import_memory_host_pointer_info_EXT& operator=(const VkImportMemoryHostPointerInfoEXT& rhs){static_cast<VkImportMemoryHostPointerInfoEXT&>(*this)=rhs; return *this;}
	operator VkImportMemoryHostPointerInfoEXT*()const{return const_cast<VkImportMemoryHostPointerInfoEXT*>(static_cast<const VkImportMemoryHostPointerInfoEXT*>(this));}
};

/*	VkImportAndroidHardwareBufferInfoANDROID
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct	S_import_android_hardware_buffer_info_ANDROID:VkImportAndroidHardwareBufferInfoANDROID{
private:
	using VkImportAndroidHardwareBufferInfoANDROID::sType;
	using VkImportAndroidHardwareBufferInfoANDROID::pNext;
public:
	using VkImportAndroidHardwareBufferInfoANDROID::buffer;

S_import_android_hardware_buffer_info_ANDROID():VkImportAndroidHardwareBufferInfoANDROID{VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,nullptr}{}
S_import_android_hardware_buffer_info_ANDROID(
	struct AHardwareBuffer * buffer_)
	:VkImportAndroidHardwareBufferInfoANDROID{
	VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID
	,nullptr
	,buffer_}
	{
	}

friend S_memory_allocate_info;

	S_import_android_hardware_buffer_info_ANDROID& operator=(const VkImportAndroidHardwareBufferInfoANDROID& rhs){static_cast<VkImportAndroidHardwareBufferInfoANDROID&>(*this)=rhs; return *this;}
	operator VkImportAndroidHardwareBufferInfoANDROID*()const{return const_cast<VkImportAndroidHardwareBufferInfoANDROID*>(static_cast<const VkImportAndroidHardwareBufferInfoANDROID*>(this));}
};
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

struct N_memory_allocate_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
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
struct	S_memory_allocate_info:VkMemoryAllocateInfo{
private:
	using VkMemoryAllocateInfo::sType;
	using VkMemoryAllocateInfo::pNext;
public:
	using VkMemoryAllocateInfo::allocationSize;
	using VkMemoryAllocateInfo::memoryTypeIndex;

S_memory_allocate_info():VkMemoryAllocateInfo{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,nullptr}{}
S_memory_allocate_info(
	VkDeviceSize allocationSize_,
	uint32_t memoryTypeIndex_)
	:VkMemoryAllocateInfo{
	VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO
	,nullptr
	,allocationSize_
	,memoryTypeIndex_}
	{
	}

	S_memory_allocate_info& operator=(const VkMemoryAllocateInfo& rhs){static_cast<VkMemoryAllocateInfo&>(*this)=rhs; return *this;}
	operator VkMemoryAllocateInfo*()const{return const_cast<VkMemoryAllocateInfo*>(static_cast<const VkMemoryAllocateInfo*>(this));}

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
void set_pNext(N_memory_allocate_info n_){pNext = n_;}
};

/*	VkMemoryRequirements
(returnedonly)
*/
struct	S_memory_requirements:VkMemoryRequirements{
	using VkMemoryRequirements::size;
	using VkMemoryRequirements::alignment;
	using VkMemoryRequirements::memoryTypeBits;

	S_memory_requirements& operator=(const VkMemoryRequirements& rhs){static_cast<VkMemoryRequirements&>(*this)=rhs; return *this;}
	operator VkMemoryRequirements*()const{return const_cast<VkMemoryRequirements*>(static_cast<const VkMemoryRequirements*>(this));}
};

/*	VkSparseImageFormatProperties
(returnedonly)
*/
struct	S_sparse_image_format_properties:VkSparseImageFormatProperties{
	using VkSparseImageFormatProperties::aspectMask;
	using VkSparseImageFormatProperties::imageGranularity;
	using VkSparseImageFormatProperties::flags;

	S_sparse_image_format_properties& operator=(const VkSparseImageFormatProperties& rhs){static_cast<VkSparseImageFormatProperties&>(*this)=rhs; return *this;}
	operator VkSparseImageFormatProperties*()const{return const_cast<VkSparseImageFormatProperties*>(static_cast<const VkSparseImageFormatProperties*>(this));}
};

/*	VkSparseImageMemoryRequirements
(returnedonly)
*/
struct	S_sparse_image_memory_requirements:VkSparseImageMemoryRequirements{
	using VkSparseImageMemoryRequirements::formatProperties;
	using VkSparseImageMemoryRequirements::imageMipTailFirstLod;
	using VkSparseImageMemoryRequirements::imageMipTailSize;
	using VkSparseImageMemoryRequirements::imageMipTailOffset;
	using VkSparseImageMemoryRequirements::imageMipTailStride;

	S_sparse_image_memory_requirements& operator=(const VkSparseImageMemoryRequirements& rhs){static_cast<VkSparseImageMemoryRequirements&>(*this)=rhs; return *this;}
	operator VkSparseImageMemoryRequirements*()const{return const_cast<VkSparseImageMemoryRequirements*>(static_cast<const VkSparseImageMemoryRequirements*>(this));}
};

/*	VkMappedMemoryRange
*/
struct	S_mapped_memory_range:VkMappedMemoryRange{
private:
	using VkMappedMemoryRange::sType;
	using VkMappedMemoryRange::pNext;
public:
	using VkMappedMemoryRange::memory;
	using VkMappedMemoryRange::offset;
	using VkMappedMemoryRange::size;

S_mapped_memory_range():VkMappedMemoryRange{VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,nullptr}{}
S_mapped_memory_range(
	VkDeviceMemory memory_,
	VkDeviceSize offset_,
	VkDeviceSize size_)
	:VkMappedMemoryRange{
	VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE
	,nullptr
	,memory_
	,offset_
	,size_}
	{
	}

	S_mapped_memory_range& operator=(const VkMappedMemoryRange& rhs){static_cast<VkMappedMemoryRange&>(*this)=rhs; return *this;}
	operator VkMappedMemoryRange*()const{return const_cast<VkMappedMemoryRange*>(static_cast<const VkMappedMemoryRange*>(this));}
};

/*	VkFormatProperties
(returnedonly)
*/
struct	S_format_properties:VkFormatProperties{
	using VkFormatProperties::linearTilingFeatures;
	using VkFormatProperties::optimalTilingFeatures;
	using VkFormatProperties::bufferFeatures;

	S_format_properties& operator=(const VkFormatProperties& rhs){static_cast<VkFormatProperties&>(*this)=rhs; return *this;}
	operator VkFormatProperties*()const{return const_cast<VkFormatProperties*>(static_cast<const VkFormatProperties*>(this));}
};

/*	VkImageFormatProperties
(returnedonly)
*/
struct	S_image_format_properties:VkImageFormatProperties{
	using VkImageFormatProperties::maxExtent;
	using VkImageFormatProperties::maxMipLevels;
	using VkImageFormatProperties::maxArrayLayers;
	using VkImageFormatProperties::sampleCounts;
	using VkImageFormatProperties::maxResourceSize;

	S_image_format_properties& operator=(const VkImageFormatProperties& rhs){static_cast<VkImageFormatProperties&>(*this)=rhs; return *this;}
	operator VkImageFormatProperties*()const{return const_cast<VkImageFormatProperties*>(static_cast<const VkImageFormatProperties*>(this));}
};

/*	VkDescriptorBufferInfo
*/
struct	S_descriptor_buffer_info:VkDescriptorBufferInfo{
	using VkDescriptorBufferInfo::buffer;
	using VkDescriptorBufferInfo::offset;
	using VkDescriptorBufferInfo::range;

	S_descriptor_buffer_info& operator=(const VkDescriptorBufferInfo& rhs){static_cast<VkDescriptorBufferInfo&>(*this)=rhs; return *this;}
	operator VkDescriptorBufferInfo*()const{return const_cast<VkDescriptorBufferInfo*>(static_cast<const VkDescriptorBufferInfo*>(this));}
};

/*	VkDescriptorImageInfo
*/
struct	S_descriptor_image_info:VkDescriptorImageInfo{
	using VkDescriptorImageInfo::sampler;
	using VkDescriptorImageInfo::imageView;
	using VkDescriptorImageInfo::imageLayout;

	S_descriptor_image_info& operator=(const VkDescriptorImageInfo& rhs){static_cast<VkDescriptorImageInfo&>(*this)=rhs; return *this;}
	operator VkDescriptorImageInfo*()const{return const_cast<VkDescriptorImageInfo*>(static_cast<const VkDescriptorImageInfo*>(this));}
};

/*	VkWriteDescriptorSet
*/
struct	S_write_descriptor_set:VkWriteDescriptorSet{
private:
	using VkWriteDescriptorSet::sType;
	using VkWriteDescriptorSet::pNext;
public:
	using VkWriteDescriptorSet::dstSet;
	using VkWriteDescriptorSet::dstBinding;
	using VkWriteDescriptorSet::dstArrayElement;
	using VkWriteDescriptorSet::descriptorCount;
	using VkWriteDescriptorSet::descriptorType;
	using VkWriteDescriptorSet::pImageInfo;
	using VkWriteDescriptorSet::pBufferInfo;
	using VkWriteDescriptorSet::pTexelBufferView;

S_write_descriptor_set():VkWriteDescriptorSet{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET,nullptr}{}
S_write_descriptor_set(
	VkDescriptorSet dstSet_,
	uint32_t dstBinding_,
	uint32_t dstArrayElement_,
	uint32_t descriptorCount_,
	E_descriptor_type descriptorType_,
	const S_descriptor_image_info * pImageInfo_,
	const S_descriptor_buffer_info * pBufferInfo_,
	const VkBufferView * pTexelBufferView_)
	:VkWriteDescriptorSet{
	VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET
	,nullptr
	,dstSet_
	,dstBinding_
	,dstArrayElement_
	,descriptorCount_
	,descriptorType_
	,pImageInfo_
	,pBufferInfo_
	,pTexelBufferView_}
	{
	}

	S_write_descriptor_set& operator=(const VkWriteDescriptorSet& rhs){static_cast<VkWriteDescriptorSet&>(*this)=rhs; return *this;}
	operator VkWriteDescriptorSet*()const{return const_cast<VkWriteDescriptorSet*>(static_cast<const VkWriteDescriptorSet*>(this));}
};

/*	VkCopyDescriptorSet
*/
struct	S_copy_descriptor_set:VkCopyDescriptorSet{
private:
	using VkCopyDescriptorSet::sType;
	using VkCopyDescriptorSet::pNext;
public:
	using VkCopyDescriptorSet::srcSet;
	using VkCopyDescriptorSet::srcBinding;
	using VkCopyDescriptorSet::srcArrayElement;
	using VkCopyDescriptorSet::dstSet;
	using VkCopyDescriptorSet::dstBinding;
	using VkCopyDescriptorSet::dstArrayElement;
	using VkCopyDescriptorSet::descriptorCount;

S_copy_descriptor_set():VkCopyDescriptorSet{VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET,nullptr}{}
S_copy_descriptor_set(
	VkDescriptorSet srcSet_,
	uint32_t srcBinding_,
	uint32_t srcArrayElement_,
	VkDescriptorSet dstSet_,
	uint32_t dstBinding_,
	uint32_t dstArrayElement_,
	uint32_t descriptorCount_)
	:VkCopyDescriptorSet{
	VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET
	,nullptr
	,srcSet_
	,srcBinding_
	,srcArrayElement_
	,dstSet_
	,dstBinding_
	,dstArrayElement_
	,descriptorCount_}
	{
	}

	S_copy_descriptor_set& operator=(const VkCopyDescriptorSet& rhs){static_cast<VkCopyDescriptorSet&>(*this)=rhs; return *this;}
	operator VkCopyDescriptorSet*()const{return const_cast<VkCopyDescriptorSet*>(static_cast<const VkCopyDescriptorSet*>(this));}
};

/*	VkDedicatedAllocationBufferCreateInfoNV
ex to: VkBufferCreateInfo
*/
struct	S_dedicated_allocation_buffer_create_info_NV:VkDedicatedAllocationBufferCreateInfoNV{
private:
	using VkDedicatedAllocationBufferCreateInfoNV::sType;
	using VkDedicatedAllocationBufferCreateInfoNV::pNext;
public:
	using VkDedicatedAllocationBufferCreateInfoNV::dedicatedAllocation;

S_dedicated_allocation_buffer_create_info_NV():VkDedicatedAllocationBufferCreateInfoNV{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV,nullptr}{}
S_dedicated_allocation_buffer_create_info_NV(
	VkBool32 dedicatedAllocation_)
	:VkDedicatedAllocationBufferCreateInfoNV{
	VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV
	,nullptr
	,dedicatedAllocation_}
	{
	}

friend S_buffer_create_info;

	S_dedicated_allocation_buffer_create_info_NV& operator=(const VkDedicatedAllocationBufferCreateInfoNV& rhs){static_cast<VkDedicatedAllocationBufferCreateInfoNV&>(*this)=rhs; return *this;}
	operator VkDedicatedAllocationBufferCreateInfoNV*()const{return const_cast<VkDedicatedAllocationBufferCreateInfoNV*>(static_cast<const VkDedicatedAllocationBufferCreateInfoNV*>(this));}
};

/*	VkExternalMemoryBufferCreateInfo
ex to: VkBufferCreateInfo
*/
struct	S_external_memory_buffer_create_info:VkExternalMemoryBufferCreateInfo{
private:
	using VkExternalMemoryBufferCreateInfo::sType;
	using VkExternalMemoryBufferCreateInfo::pNext;
public:
	using VkExternalMemoryBufferCreateInfo::handleTypes;

S_external_memory_buffer_create_info():VkExternalMemoryBufferCreateInfo{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO,nullptr}{}
S_external_memory_buffer_create_info(
	F_external_memory_handle_type handleTypes_)
	:VkExternalMemoryBufferCreateInfo{
	VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO
	,nullptr
	,handleTypes_}
	{
	}

friend S_buffer_create_info;

	S_external_memory_buffer_create_info& operator=(const VkExternalMemoryBufferCreateInfo& rhs){static_cast<VkExternalMemoryBufferCreateInfo&>(*this)=rhs; return *this;}
	operator VkExternalMemoryBufferCreateInfo*()const{return const_cast<VkExternalMemoryBufferCreateInfo*>(static_cast<const VkExternalMemoryBufferCreateInfo*>(this));}
};

/*	VkBufferCreateInfo
ex:
	VkDedicatedAllocationBufferCreateInfoNV
	VkExternalMemoryBufferCreateInfo
*/

struct N_buffer_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_buffer_create_info& n_dedicated_allocation_buffer_create_info_NV(S_dedicated_allocation_buffer_create_info_NV const& next_);
N_buffer_create_info& n_external_memory_buffer_create_info(S_external_memory_buffer_create_info const& next_);
};
struct	S_buffer_create_info:VkBufferCreateInfo{
private:
	using VkBufferCreateInfo::sType;
	using VkBufferCreateInfo::pNext;
public:
	using VkBufferCreateInfo::flags;
	using VkBufferCreateInfo::size;
	using VkBufferCreateInfo::usage;
	using VkBufferCreateInfo::sharingMode;
	using VkBufferCreateInfo::queueFamilyIndexCount;
	using VkBufferCreateInfo::pQueueFamilyIndices;

S_buffer_create_info():VkBufferCreateInfo{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,nullptr}{}
S_buffer_create_info(
	F_buffer_create flags_,
	VkDeviceSize size_,
	F_buffer_usage usage_,
	E_sharing_mode sharingMode_,
	uint32_t queueFamilyIndexCount_,
	const uint32_t * pQueueFamilyIndices_)
	:VkBufferCreateInfo{
	VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO
	,nullptr
	,flags_
	,size_
	,usage_
	,sharingMode_
	,queueFamilyIndexCount_
	,pQueueFamilyIndices_}
	{
	}

	S_buffer_create_info& operator=(const VkBufferCreateInfo& rhs){static_cast<VkBufferCreateInfo&>(*this)=rhs; return *this;}
	operator VkBufferCreateInfo*()const{return const_cast<VkBufferCreateInfo*>(static_cast<const VkBufferCreateInfo*>(this));}

S_buffer_create_info& n_dedicated_allocation_buffer_create_info_NV(S_dedicated_allocation_buffer_create_info_NV const& next_);
S_buffer_create_info& n_external_memory_buffer_create_info(S_external_memory_buffer_create_info const& next_);
void set_pNext(N_buffer_create_info n_){pNext = n_;}
};

/*	VkBufferViewCreateInfo
*/
struct	S_buffer_view_create_info:VkBufferViewCreateInfo{
private:
	using VkBufferViewCreateInfo::sType;
	using VkBufferViewCreateInfo::pNext;
public:
	using VkBufferViewCreateInfo::flags;
	using VkBufferViewCreateInfo::buffer;
	using VkBufferViewCreateInfo::format;
	using VkBufferViewCreateInfo::offset;
	using VkBufferViewCreateInfo::range;

S_buffer_view_create_info():VkBufferViewCreateInfo{VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,nullptr}{}
S_buffer_view_create_info(
	VkBufferViewCreateFlags flags_,
	VkBuffer buffer_,
	E_format format_,
	VkDeviceSize offset_,
	VkDeviceSize range_)
	:VkBufferViewCreateInfo{
	VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO
	,nullptr
	,flags_
	,buffer_
	,format_
	,offset_
	,range_}
	{
	}

	S_buffer_view_create_info& operator=(const VkBufferViewCreateInfo& rhs){static_cast<VkBufferViewCreateInfo&>(*this)=rhs; return *this;}
	operator VkBufferViewCreateInfo*()const{return const_cast<VkBufferViewCreateInfo*>(static_cast<const VkBufferViewCreateInfo*>(this));}
};

/*	VkImageSubresource
*/
struct	S_image_subresource:VkImageSubresource{
	using VkImageSubresource::aspectMask;
	using VkImageSubresource::mipLevel;
	using VkImageSubresource::arrayLayer;

	S_image_subresource& operator=(const VkImageSubresource& rhs){static_cast<VkImageSubresource&>(*this)=rhs; return *this;}
	operator VkImageSubresource*()const{return const_cast<VkImageSubresource*>(static_cast<const VkImageSubresource*>(this));}
};

/*	VkImageSubresourceLayers
*/
struct	S_image_subresource_layers:VkImageSubresourceLayers{
	using VkImageSubresourceLayers::aspectMask;
	using VkImageSubresourceLayers::mipLevel;
	using VkImageSubresourceLayers::baseArrayLayer;
	using VkImageSubresourceLayers::layerCount;

	S_image_subresource_layers& operator=(const VkImageSubresourceLayers& rhs){static_cast<VkImageSubresourceLayers&>(*this)=rhs; return *this;}
	operator VkImageSubresourceLayers*()const{return const_cast<VkImageSubresourceLayers*>(static_cast<const VkImageSubresourceLayers*>(this));}
};

/*	VkImageSubresourceRange
*/
struct	S_image_subresource_range:VkImageSubresourceRange{
	using VkImageSubresourceRange::aspectMask;
	using VkImageSubresourceRange::baseMipLevel;
	using VkImageSubresourceRange::levelCount;
	using VkImageSubresourceRange::baseArrayLayer;
	using VkImageSubresourceRange::layerCount;

	S_image_subresource_range& operator=(const VkImageSubresourceRange& rhs){static_cast<VkImageSubresourceRange&>(*this)=rhs; return *this;}
	operator VkImageSubresourceRange*()const{return const_cast<VkImageSubresourceRange*>(static_cast<const VkImageSubresourceRange*>(this));}
};

/*	VkMemoryBarrier
*/
struct	S_memory_barrier:VkMemoryBarrier{
private:
	using VkMemoryBarrier::sType;
	using VkMemoryBarrier::pNext;
public:
	using VkMemoryBarrier::srcAccessMask;
	using VkMemoryBarrier::dstAccessMask;

S_memory_barrier():VkMemoryBarrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER,nullptr}{}
S_memory_barrier(
	F_access srcAccessMask_,
	F_access dstAccessMask_)
	:VkMemoryBarrier{
	VK_STRUCTURE_TYPE_MEMORY_BARRIER
	,nullptr
	,srcAccessMask_
	,dstAccessMask_}
	{
	}

	S_memory_barrier& operator=(const VkMemoryBarrier& rhs){static_cast<VkMemoryBarrier&>(*this)=rhs; return *this;}
	operator VkMemoryBarrier*()const{return const_cast<VkMemoryBarrier*>(static_cast<const VkMemoryBarrier*>(this));}
};

/*	VkBufferMemoryBarrier
*/
struct	S_buffer_memory_barrier:VkBufferMemoryBarrier{
private:
	using VkBufferMemoryBarrier::sType;
	using VkBufferMemoryBarrier::pNext;
public:
	using VkBufferMemoryBarrier::srcAccessMask;
	using VkBufferMemoryBarrier::dstAccessMask;
	using VkBufferMemoryBarrier::srcQueueFamilyIndex;
	using VkBufferMemoryBarrier::dstQueueFamilyIndex;
	using VkBufferMemoryBarrier::buffer;
	using VkBufferMemoryBarrier::offset;
	using VkBufferMemoryBarrier::size;

S_buffer_memory_barrier():VkBufferMemoryBarrier{VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER,nullptr}{}
S_buffer_memory_barrier(
	F_access srcAccessMask_,
	F_access dstAccessMask_,
	uint32_t srcQueueFamilyIndex_,
	uint32_t dstQueueFamilyIndex_,
	VkBuffer buffer_,
	VkDeviceSize offset_,
	VkDeviceSize size_)
	:VkBufferMemoryBarrier{
	VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER
	,nullptr
	,srcAccessMask_
	,dstAccessMask_
	,srcQueueFamilyIndex_
	,dstQueueFamilyIndex_
	,buffer_
	,offset_
	,size_}
	{
	}

	S_buffer_memory_barrier& operator=(const VkBufferMemoryBarrier& rhs){static_cast<VkBufferMemoryBarrier&>(*this)=rhs; return *this;}
	operator VkBufferMemoryBarrier*()const{return const_cast<VkBufferMemoryBarrier*>(static_cast<const VkBufferMemoryBarrier*>(this));}
};

/*	VkSampleLocationEXT
*/
struct	S_sample_location_EXT:VkSampleLocationEXT{
	using VkSampleLocationEXT::x;
	using VkSampleLocationEXT::y;

	S_sample_location_EXT& operator=(const VkSampleLocationEXT& rhs){static_cast<VkSampleLocationEXT&>(*this)=rhs; return *this;}
	operator VkSampleLocationEXT*()const{return const_cast<VkSampleLocationEXT*>(static_cast<const VkSampleLocationEXT*>(this));}
};

/*	VkSampleLocationsInfoEXT
ex to: VkImageMemoryBarrier
*/
struct	S_sample_locations_info_EXT:VkSampleLocationsInfoEXT{
private:
	using VkSampleLocationsInfoEXT::sType;
	using VkSampleLocationsInfoEXT::pNext;
public:
	using VkSampleLocationsInfoEXT::sampleLocationsPerPixel;
	using VkSampleLocationsInfoEXT::sampleLocationGridSize;
	using VkSampleLocationsInfoEXT::sampleLocationsCount;
	using VkSampleLocationsInfoEXT::pSampleLocations;

S_sample_locations_info_EXT():VkSampleLocationsInfoEXT{VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT,nullptr}{}
S_sample_locations_info_EXT(
	F_sample_count sampleLocationsPerPixel_,
	S_extent_2d sampleLocationGridSize_,
	uint32_t sampleLocationsCount_,
	const S_sample_location_EXT * pSampleLocations_)
	:VkSampleLocationsInfoEXT{
	VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT
	,nullptr
	,sampleLocationsPerPixel_
	,sampleLocationGridSize_
	,sampleLocationsCount_
	,pSampleLocations_}
	{
	}

friend S_image_memory_barrier;

	S_sample_locations_info_EXT& operator=(const VkSampleLocationsInfoEXT& rhs){static_cast<VkSampleLocationsInfoEXT&>(*this)=rhs; return *this;}
	operator VkSampleLocationsInfoEXT*()const{return const_cast<VkSampleLocationsInfoEXT*>(static_cast<const VkSampleLocationsInfoEXT*>(this));}
};

/*	VkImageMemoryBarrier
ex:
	VkSampleLocationsInfoEXT
*/

struct N_image_memory_barrier{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_image_memory_barrier& n_sample_locations_info_EXT(S_sample_locations_info_EXT const& next_);
};
struct	S_image_memory_barrier:VkImageMemoryBarrier{
private:
	using VkImageMemoryBarrier::sType;
	using VkImageMemoryBarrier::pNext;
public:
	using VkImageMemoryBarrier::srcAccessMask;
	using VkImageMemoryBarrier::dstAccessMask;
	using VkImageMemoryBarrier::oldLayout;
	using VkImageMemoryBarrier::newLayout;
	using VkImageMemoryBarrier::srcQueueFamilyIndex;
	using VkImageMemoryBarrier::dstQueueFamilyIndex;
	using VkImageMemoryBarrier::image;
	using VkImageMemoryBarrier::subresourceRange;

S_image_memory_barrier():VkImageMemoryBarrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,nullptr}{}
S_image_memory_barrier(
	F_access srcAccessMask_,
	F_access dstAccessMask_,
	E_image_layout oldLayout_,
	E_image_layout newLayout_,
	uint32_t srcQueueFamilyIndex_,
	uint32_t dstQueueFamilyIndex_,
	VkImage image_,
	S_image_subresource_range subresourceRange_)
	:VkImageMemoryBarrier{
	VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER
	,nullptr
	,srcAccessMask_
	,dstAccessMask_
	,oldLayout_
	,newLayout_
	,srcQueueFamilyIndex_
	,dstQueueFamilyIndex_
	,image_
	,subresourceRange_}
	{
	}

	S_image_memory_barrier& operator=(const VkImageMemoryBarrier& rhs){static_cast<VkImageMemoryBarrier&>(*this)=rhs; return *this;}
	operator VkImageMemoryBarrier*()const{return const_cast<VkImageMemoryBarrier*>(static_cast<const VkImageMemoryBarrier*>(this));}

S_image_memory_barrier& n_sample_locations_info_EXT(S_sample_locations_info_EXT const& next_);
void set_pNext(N_image_memory_barrier n_){pNext = n_;}
};

/*	VkDedicatedAllocationImageCreateInfoNV
ex to: VkImageCreateInfo
*/
struct	S_dedicated_allocation_image_create_info_NV:VkDedicatedAllocationImageCreateInfoNV{
private:
	using VkDedicatedAllocationImageCreateInfoNV::sType;
	using VkDedicatedAllocationImageCreateInfoNV::pNext;
public:
	using VkDedicatedAllocationImageCreateInfoNV::dedicatedAllocation;

S_dedicated_allocation_image_create_info_NV():VkDedicatedAllocationImageCreateInfoNV{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV,nullptr}{}
S_dedicated_allocation_image_create_info_NV(
	VkBool32 dedicatedAllocation_)
	:VkDedicatedAllocationImageCreateInfoNV{
	VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV
	,nullptr
	,dedicatedAllocation_}
	{
	}

friend S_image_create_info;

	S_dedicated_allocation_image_create_info_NV& operator=(const VkDedicatedAllocationImageCreateInfoNV& rhs){static_cast<VkDedicatedAllocationImageCreateInfoNV&>(*this)=rhs; return *this;}
	operator VkDedicatedAllocationImageCreateInfoNV*()const{return const_cast<VkDedicatedAllocationImageCreateInfoNV*>(static_cast<const VkDedicatedAllocationImageCreateInfoNV*>(this));}
};

/*	VkExternalMemoryImageCreateInfoNV
ex to: VkImageCreateInfo
*/
struct	S_external_memory_image_create_info_NV:VkExternalMemoryImageCreateInfoNV{
private:
	using VkExternalMemoryImageCreateInfoNV::sType;
	using VkExternalMemoryImageCreateInfoNV::pNext;
public:
	using VkExternalMemoryImageCreateInfoNV::handleTypes;

S_external_memory_image_create_info_NV():VkExternalMemoryImageCreateInfoNV{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV,nullptr}{}
S_external_memory_image_create_info_NV(
	F_external_memory_handle_type_NV handleTypes_)
	:VkExternalMemoryImageCreateInfoNV{
	VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV
	,nullptr
	,handleTypes_}
	{
	}

friend S_image_create_info;

	S_external_memory_image_create_info_NV& operator=(const VkExternalMemoryImageCreateInfoNV& rhs){static_cast<VkExternalMemoryImageCreateInfoNV&>(*this)=rhs; return *this;}
	operator VkExternalMemoryImageCreateInfoNV*()const{return const_cast<VkExternalMemoryImageCreateInfoNV*>(static_cast<const VkExternalMemoryImageCreateInfoNV*>(this));}
};

/*	VkExternalMemoryImageCreateInfo
ex to: VkImageCreateInfo
*/
struct	S_external_memory_image_create_info:VkExternalMemoryImageCreateInfo{
private:
	using VkExternalMemoryImageCreateInfo::sType;
	using VkExternalMemoryImageCreateInfo::pNext;
public:
	using VkExternalMemoryImageCreateInfo::handleTypes;

S_external_memory_image_create_info():VkExternalMemoryImageCreateInfo{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO,nullptr}{}
S_external_memory_image_create_info(
	F_external_memory_handle_type handleTypes_)
	:VkExternalMemoryImageCreateInfo{
	VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO
	,nullptr
	,handleTypes_}
	{
	}

friend S_image_create_info;

	S_external_memory_image_create_info& operator=(const VkExternalMemoryImageCreateInfo& rhs){static_cast<VkExternalMemoryImageCreateInfo&>(*this)=rhs; return *this;}
	operator VkExternalMemoryImageCreateInfo*()const{return const_cast<VkExternalMemoryImageCreateInfo*>(static_cast<const VkExternalMemoryImageCreateInfo*>(this));}
};

/*	VkImageSwapchainCreateInfoKHR
ex to: VkImageCreateInfo
*/
struct	S_image_swapchain_create_info_KHR:VkImageSwapchainCreateInfoKHR{
private:
	using VkImageSwapchainCreateInfoKHR::sType;
	using VkImageSwapchainCreateInfoKHR::pNext;
public:
	using VkImageSwapchainCreateInfoKHR::swapchain;

S_image_swapchain_create_info_KHR():VkImageSwapchainCreateInfoKHR{VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR,nullptr}{}
S_image_swapchain_create_info_KHR(
	VkSwapchainKHR swapchain_)
	:VkImageSwapchainCreateInfoKHR{
	VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR
	,nullptr
	,swapchain_}
	{
	}

friend S_image_create_info;

	S_image_swapchain_create_info_KHR& operator=(const VkImageSwapchainCreateInfoKHR& rhs){static_cast<VkImageSwapchainCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkImageSwapchainCreateInfoKHR*()const{return const_cast<VkImageSwapchainCreateInfoKHR*>(static_cast<const VkImageSwapchainCreateInfoKHR*>(this));}
};

/*	VkImageFormatListCreateInfoKHR
ex to: VkImageCreateInfo
*/
struct	S_image_format_list_create_info_KHR:VkImageFormatListCreateInfoKHR{
private:
	using VkImageFormatListCreateInfoKHR::sType;
	using VkImageFormatListCreateInfoKHR::pNext;
public:
	using VkImageFormatListCreateInfoKHR::viewFormatCount;
	using VkImageFormatListCreateInfoKHR::pViewFormats;

S_image_format_list_create_info_KHR():VkImageFormatListCreateInfoKHR{VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR,nullptr}{}
S_image_format_list_create_info_KHR(
	uint32_t viewFormatCount_,
	const E_format * pViewFormats_)
	:VkImageFormatListCreateInfoKHR{
	VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR
	,nullptr
	,viewFormatCount_
	,*pViewFormats_}
	{
	}

friend S_image_create_info;

	S_image_format_list_create_info_KHR& operator=(const VkImageFormatListCreateInfoKHR& rhs){static_cast<VkImageFormatListCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkImageFormatListCreateInfoKHR*()const{return const_cast<VkImageFormatListCreateInfoKHR*>(static_cast<const VkImageFormatListCreateInfoKHR*>(this));}
};

/*	VkExternalFormatANDROID
ex to: VkImageCreateInfo,VkSamplerYcbcrConversionCreateInfo
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct	S_external_format_ANDROID:VkExternalFormatANDROID{
private:
	using VkExternalFormatANDROID::sType;
	using VkExternalFormatANDROID::pNext;
public:
	using VkExternalFormatANDROID::externalFormat;

S_external_format_ANDROID():VkExternalFormatANDROID{VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID,nullptr}{}
S_external_format_ANDROID(
	uint64_t externalFormat_)
	:VkExternalFormatANDROID{
	VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID
	,nullptr
	,externalFormat_}
	{
	}

friend S_image_create_info;
friend S_sampler_ycbcr_conversion_create_info;

	S_external_format_ANDROID& operator=(const VkExternalFormatANDROID& rhs){static_cast<VkExternalFormatANDROID&>(*this)=rhs; return *this;}
	operator VkExternalFormatANDROID*()const{return const_cast<VkExternalFormatANDROID*>(static_cast<const VkExternalFormatANDROID*>(this));}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkImageCreateInfo
ex:
	VkDedicatedAllocationImageCreateInfoNV
	VkExternalMemoryImageCreateInfoNV
	VkExternalMemoryImageCreateInfo
	VkImageSwapchainCreateInfoKHR
	VkImageFormatListCreateInfoKHR
	VkExternalFormatANDROID
*/

struct N_image_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_image_create_info& n_dedicated_allocation_image_create_info_NV(S_dedicated_allocation_image_create_info_NV const& next_);
N_image_create_info& n_external_memory_image_create_info_NV(S_external_memory_image_create_info_NV const& next_);
N_image_create_info& n_external_memory_image_create_info(S_external_memory_image_create_info const& next_);
N_image_create_info& n_image_swapchain_create_info_KHR(S_image_swapchain_create_info_KHR const& next_);
N_image_create_info& n_image_format_list_create_info_KHR(S_image_format_list_create_info_KHR const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_image_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
};
struct	S_image_create_info:VkImageCreateInfo{
private:
	using VkImageCreateInfo::sType;
	using VkImageCreateInfo::pNext;
public:
	using VkImageCreateInfo::flags;
	using VkImageCreateInfo::imageType;
	using VkImageCreateInfo::format;
	using VkImageCreateInfo::extent;
	using VkImageCreateInfo::mipLevels;
	using VkImageCreateInfo::arrayLayers;
	using VkImageCreateInfo::samples;
	using VkImageCreateInfo::tiling;
	using VkImageCreateInfo::usage;
	using VkImageCreateInfo::sharingMode;
	using VkImageCreateInfo::queueFamilyIndexCount;
	using VkImageCreateInfo::pQueueFamilyIndices;
	using VkImageCreateInfo::initialLayout;

S_image_create_info():VkImageCreateInfo{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,nullptr}{}
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
	:VkImageCreateInfo{
	VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO
	,nullptr
	,flags_
	,imageType_
	,format_
	,extent_
	,mipLevels_
	,arrayLayers_
	,samples_
	,tiling_
	,usage_
	,sharingMode_
	,queueFamilyIndexCount_
	,pQueueFamilyIndices_
	,initialLayout_}
	{
	}

	S_image_create_info& operator=(const VkImageCreateInfo& rhs){static_cast<VkImageCreateInfo&>(*this)=rhs; return *this;}
	operator VkImageCreateInfo*()const{return const_cast<VkImageCreateInfo*>(static_cast<const VkImageCreateInfo*>(this));}

S_image_create_info& n_dedicated_allocation_image_create_info_NV(S_dedicated_allocation_image_create_info_NV const& next_);
S_image_create_info& n_external_memory_image_create_info_NV(S_external_memory_image_create_info_NV const& next_);
S_image_create_info& n_external_memory_image_create_info(S_external_memory_image_create_info const& next_);
S_image_create_info& n_image_swapchain_create_info_KHR(S_image_swapchain_create_info_KHR const& next_);
S_image_create_info& n_image_format_list_create_info_KHR(S_image_format_list_create_info_KHR const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_image_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
void set_pNext(N_image_create_info n_){pNext = n_;}
};

/*	VkSubresourceLayout
(returnedonly)
*/
struct	S_subresource_layout:VkSubresourceLayout{
	using VkSubresourceLayout::offset;
	using VkSubresourceLayout::size;
	using VkSubresourceLayout::rowPitch;
	using VkSubresourceLayout::arrayPitch;
	using VkSubresourceLayout::depthPitch;

	S_subresource_layout& operator=(const VkSubresourceLayout& rhs){static_cast<VkSubresourceLayout&>(*this)=rhs; return *this;}
	operator VkSubresourceLayout*()const{return const_cast<VkSubresourceLayout*>(static_cast<const VkSubresourceLayout*>(this));}
};

/*	VkImageViewUsageCreateInfo
ex to: VkImageViewCreateInfo
*/
struct	S_image_view_usage_create_info:VkImageViewUsageCreateInfo{
private:
	using VkImageViewUsageCreateInfo::sType;
	using VkImageViewUsageCreateInfo::pNext;
public:
	using VkImageViewUsageCreateInfo::usage;

S_image_view_usage_create_info():VkImageViewUsageCreateInfo{VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO,nullptr}{}
S_image_view_usage_create_info(
	F_image_usage usage_)
	:VkImageViewUsageCreateInfo{
	VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO
	,nullptr
	,usage_}
	{
	}

friend S_image_view_create_info;

	S_image_view_usage_create_info& operator=(const VkImageViewUsageCreateInfo& rhs){static_cast<VkImageViewUsageCreateInfo&>(*this)=rhs; return *this;}
	operator VkImageViewUsageCreateInfo*()const{return const_cast<VkImageViewUsageCreateInfo*>(static_cast<const VkImageViewUsageCreateInfo*>(this));}
};

/*	VkSamplerYcbcrConversionInfo
ex to: VkSamplerCreateInfo,VkImageViewCreateInfo
*/
struct	S_sampler_ycbcr_conversion_info:VkSamplerYcbcrConversionInfo{
private:
	using VkSamplerYcbcrConversionInfo::sType;
	using VkSamplerYcbcrConversionInfo::pNext;
public:
	using VkSamplerYcbcrConversionInfo::conversion;

S_sampler_ycbcr_conversion_info():VkSamplerYcbcrConversionInfo{VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO,nullptr}{}
S_sampler_ycbcr_conversion_info(
	VkSamplerYcbcrConversion conversion_)
	:VkSamplerYcbcrConversionInfo{
	VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO
	,nullptr
	,conversion_}
	{
	}

friend S_sampler_create_info;
friend S_image_view_create_info;

	S_sampler_ycbcr_conversion_info& operator=(const VkSamplerYcbcrConversionInfo& rhs){static_cast<VkSamplerYcbcrConversionInfo&>(*this)=rhs; return *this;}
	operator VkSamplerYcbcrConversionInfo*()const{return const_cast<VkSamplerYcbcrConversionInfo*>(static_cast<const VkSamplerYcbcrConversionInfo*>(this));}
};

/*	VkImageViewCreateInfo
ex:
	VkImageViewUsageCreateInfo
	VkSamplerYcbcrConversionInfo
*/

struct N_image_view_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_image_view_create_info& n_image_view_usage_create_info(S_image_view_usage_create_info const& next_);
N_image_view_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
};
struct	S_image_view_create_info:VkImageViewCreateInfo{
private:
	using VkImageViewCreateInfo::sType;
	using VkImageViewCreateInfo::pNext;
public:
	using VkImageViewCreateInfo::flags;
	using VkImageViewCreateInfo::image;
	using VkImageViewCreateInfo::viewType;
	using VkImageViewCreateInfo::format;
	using VkImageViewCreateInfo::components;
	using VkImageViewCreateInfo::subresourceRange;

S_image_view_create_info():VkImageViewCreateInfo{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,nullptr}{}
S_image_view_create_info(
	VkImageViewCreateFlags flags_,
	VkImage image_,
	E_image_view_type viewType_,
	E_format format_,
	S_component_mapping components_,
	S_image_subresource_range subresourceRange_)
	:VkImageViewCreateInfo{
	VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO
	,nullptr
	,flags_
	,image_
	,viewType_
	,format_
	,components_
	,subresourceRange_}
	{
	}

	S_image_view_create_info& operator=(const VkImageViewCreateInfo& rhs){static_cast<VkImageViewCreateInfo&>(*this)=rhs; return *this;}
	operator VkImageViewCreateInfo*()const{return const_cast<VkImageViewCreateInfo*>(static_cast<const VkImageViewCreateInfo*>(this));}

S_image_view_create_info& n_image_view_usage_create_info(S_image_view_usage_create_info const& next_);
S_image_view_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
void set_pNext(N_image_view_create_info n_){pNext = n_;}
};

/*	VkBufferCopy
*/
struct	S_buffer_copy:VkBufferCopy{
	using VkBufferCopy::srcOffset;
	using VkBufferCopy::dstOffset;
	using VkBufferCopy::size;

	S_buffer_copy& operator=(const VkBufferCopy& rhs){static_cast<VkBufferCopy&>(*this)=rhs; return *this;}
	operator VkBufferCopy*()const{return const_cast<VkBufferCopy*>(static_cast<const VkBufferCopy*>(this));}
};

/*	VkSparseMemoryBind
*/
struct	S_sparse_memory_bind:VkSparseMemoryBind{
	using VkSparseMemoryBind::resourceOffset;
	using VkSparseMemoryBind::size;
	using VkSparseMemoryBind::memory;
	using VkSparseMemoryBind::memoryOffset;
	using VkSparseMemoryBind::flags;

	S_sparse_memory_bind& operator=(const VkSparseMemoryBind& rhs){static_cast<VkSparseMemoryBind&>(*this)=rhs; return *this;}
	operator VkSparseMemoryBind*()const{return const_cast<VkSparseMemoryBind*>(static_cast<const VkSparseMemoryBind*>(this));}
};

/*	VkSparseImageMemoryBind
*/
struct	S_sparse_image_memory_bind:VkSparseImageMemoryBind{
	using VkSparseImageMemoryBind::subresource;
	using VkSparseImageMemoryBind::offset;
	using VkSparseImageMemoryBind::extent;
	using VkSparseImageMemoryBind::memory;
	using VkSparseImageMemoryBind::memoryOffset;
	using VkSparseImageMemoryBind::flags;

	S_sparse_image_memory_bind& operator=(const VkSparseImageMemoryBind& rhs){static_cast<VkSparseImageMemoryBind&>(*this)=rhs; return *this;}
	operator VkSparseImageMemoryBind*()const{return const_cast<VkSparseImageMemoryBind*>(static_cast<const VkSparseImageMemoryBind*>(this));}
};

/*	VkSparseBufferMemoryBindInfo
*/
struct	S_sparse_buffer_memory_bind_info:VkSparseBufferMemoryBindInfo{
	using VkSparseBufferMemoryBindInfo::buffer;
	using VkSparseBufferMemoryBindInfo::bindCount;
	using VkSparseBufferMemoryBindInfo::pBinds;

	S_sparse_buffer_memory_bind_info& operator=(const VkSparseBufferMemoryBindInfo& rhs){static_cast<VkSparseBufferMemoryBindInfo&>(*this)=rhs; return *this;}
	operator VkSparseBufferMemoryBindInfo*()const{return const_cast<VkSparseBufferMemoryBindInfo*>(static_cast<const VkSparseBufferMemoryBindInfo*>(this));}
};

/*	VkSparseImageOpaqueMemoryBindInfo
*/
struct	S_sparse_image_opaque_memory_bind_info:VkSparseImageOpaqueMemoryBindInfo{
	using VkSparseImageOpaqueMemoryBindInfo::image;
	using VkSparseImageOpaqueMemoryBindInfo::bindCount;
	using VkSparseImageOpaqueMemoryBindInfo::pBinds;

	S_sparse_image_opaque_memory_bind_info& operator=(const VkSparseImageOpaqueMemoryBindInfo& rhs){static_cast<VkSparseImageOpaqueMemoryBindInfo&>(*this)=rhs; return *this;}
	operator VkSparseImageOpaqueMemoryBindInfo*()const{return const_cast<VkSparseImageOpaqueMemoryBindInfo*>(static_cast<const VkSparseImageOpaqueMemoryBindInfo*>(this));}
};

/*	VkSparseImageMemoryBindInfo
*/
struct	S_sparse_image_memory_bind_info:VkSparseImageMemoryBindInfo{
	using VkSparseImageMemoryBindInfo::image;
	using VkSparseImageMemoryBindInfo::bindCount;
	using VkSparseImageMemoryBindInfo::pBinds;

	S_sparse_image_memory_bind_info& operator=(const VkSparseImageMemoryBindInfo& rhs){static_cast<VkSparseImageMemoryBindInfo&>(*this)=rhs; return *this;}
	operator VkSparseImageMemoryBindInfo*()const{return const_cast<VkSparseImageMemoryBindInfo*>(static_cast<const VkSparseImageMemoryBindInfo*>(this));}
};

/*	VkDeviceGroupBindSparseInfo
ex to: VkBindSparseInfo
*/
struct	S_device_group_bind_sparse_info:VkDeviceGroupBindSparseInfo{
private:
	using VkDeviceGroupBindSparseInfo::sType;
	using VkDeviceGroupBindSparseInfo::pNext;
public:
	using VkDeviceGroupBindSparseInfo::resourceDeviceIndex;
	using VkDeviceGroupBindSparseInfo::memoryDeviceIndex;

S_device_group_bind_sparse_info():VkDeviceGroupBindSparseInfo{VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO,nullptr}{}
S_device_group_bind_sparse_info(
	uint32_t resourceDeviceIndex_,
	uint32_t memoryDeviceIndex_)
	:VkDeviceGroupBindSparseInfo{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO
	,nullptr
	,resourceDeviceIndex_
	,memoryDeviceIndex_}
	{
	}

friend S_bind_sparse_info;

	S_device_group_bind_sparse_info& operator=(const VkDeviceGroupBindSparseInfo& rhs){static_cast<VkDeviceGroupBindSparseInfo&>(*this)=rhs; return *this;}
	operator VkDeviceGroupBindSparseInfo*()const{return const_cast<VkDeviceGroupBindSparseInfo*>(static_cast<const VkDeviceGroupBindSparseInfo*>(this));}
};

/*	VkBindSparseInfo
ex:
	VkDeviceGroupBindSparseInfo
*/

struct N_bind_sparse_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_bind_sparse_info& n_device_group_bind_sparse_info(S_device_group_bind_sparse_info const& next_);
};
struct	S_bind_sparse_info:VkBindSparseInfo{
private:
	using VkBindSparseInfo::sType;
	using VkBindSparseInfo::pNext;
public:
	using VkBindSparseInfo::waitSemaphoreCount;
	using VkBindSparseInfo::pWaitSemaphores;
	using VkBindSparseInfo::bufferBindCount;
	using VkBindSparseInfo::pBufferBinds;
	using VkBindSparseInfo::imageOpaqueBindCount;
	using VkBindSparseInfo::pImageOpaqueBinds;
	using VkBindSparseInfo::imageBindCount;
	using VkBindSparseInfo::pImageBinds;
	using VkBindSparseInfo::signalSemaphoreCount;
	using VkBindSparseInfo::pSignalSemaphores;

S_bind_sparse_info():VkBindSparseInfo{VK_STRUCTURE_TYPE_BIND_SPARSE_INFO,nullptr}{}
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
	:VkBindSparseInfo{
	VK_STRUCTURE_TYPE_BIND_SPARSE_INFO
	,nullptr
	,waitSemaphoreCount_
	,pWaitSemaphores_
	,bufferBindCount_
	,pBufferBinds_
	,imageOpaqueBindCount_
	,pImageOpaqueBinds_
	,imageBindCount_
	,pImageBinds_
	,signalSemaphoreCount_
	,pSignalSemaphores_}
	{
	}

	S_bind_sparse_info& operator=(const VkBindSparseInfo& rhs){static_cast<VkBindSparseInfo&>(*this)=rhs; return *this;}
	operator VkBindSparseInfo*()const{return const_cast<VkBindSparseInfo*>(static_cast<const VkBindSparseInfo*>(this));}

S_bind_sparse_info& n_device_group_bind_sparse_info(S_device_group_bind_sparse_info const& next_);
void set_pNext(N_bind_sparse_info n_){pNext = n_;}
};

/*	VkImageCopy
*/
struct	S_image_copy:VkImageCopy{
	using VkImageCopy::srcSubresource;
	using VkImageCopy::srcOffset;
	using VkImageCopy::dstSubresource;
	using VkImageCopy::dstOffset;
	using VkImageCopy::extent;

	S_image_copy& operator=(const VkImageCopy& rhs){static_cast<VkImageCopy&>(*this)=rhs; return *this;}
	operator VkImageCopy*()const{return const_cast<VkImageCopy*>(static_cast<const VkImageCopy*>(this));}
};

/*	VkImageBlit
*/
struct	S_image_blit:VkImageBlit{
	using VkImageBlit::srcSubresource;
	using VkImageBlit::srcOffsets;
	using VkImageBlit::dstSubresource;
	using VkImageBlit::dstOffsets;

	S_image_blit& operator=(const VkImageBlit& rhs){static_cast<VkImageBlit&>(*this)=rhs; return *this;}
	operator VkImageBlit*()const{return const_cast<VkImageBlit*>(static_cast<const VkImageBlit*>(this));}
};

/*	VkBufferImageCopy
*/
struct	S_buffer_image_copy:VkBufferImageCopy{
	using VkBufferImageCopy::bufferOffset;
	using VkBufferImageCopy::bufferRowLength;
	using VkBufferImageCopy::bufferImageHeight;
	using VkBufferImageCopy::imageSubresource;
	using VkBufferImageCopy::imageOffset;
	using VkBufferImageCopy::imageExtent;

	S_buffer_image_copy& operator=(const VkBufferImageCopy& rhs){static_cast<VkBufferImageCopy&>(*this)=rhs; return *this;}
	operator VkBufferImageCopy*()const{return const_cast<VkBufferImageCopy*>(static_cast<const VkBufferImageCopy*>(this));}
};

/*	VkImageResolve
*/
struct	S_image_resolve:VkImageResolve{
	using VkImageResolve::srcSubresource;
	using VkImageResolve::srcOffset;
	using VkImageResolve::dstSubresource;
	using VkImageResolve::dstOffset;
	using VkImageResolve::extent;

	S_image_resolve& operator=(const VkImageResolve& rhs){static_cast<VkImageResolve&>(*this)=rhs; return *this;}
	operator VkImageResolve*()const{return const_cast<VkImageResolve*>(static_cast<const VkImageResolve*>(this));}
};

/*	VkShaderModuleValidationCacheCreateInfoEXT
ex to: VkShaderModuleCreateInfo
*/
struct	S_shader_module_validation_cache_create_info_EXT:VkShaderModuleValidationCacheCreateInfoEXT{
private:
	using VkShaderModuleValidationCacheCreateInfoEXT::sType;
	using VkShaderModuleValidationCacheCreateInfoEXT::pNext;
public:
	using VkShaderModuleValidationCacheCreateInfoEXT::validationCache;

S_shader_module_validation_cache_create_info_EXT():VkShaderModuleValidationCacheCreateInfoEXT{VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT,nullptr}{}
S_shader_module_validation_cache_create_info_EXT(
	VkValidationCacheEXT validationCache_)
	:VkShaderModuleValidationCacheCreateInfoEXT{
	VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT
	,nullptr
	,validationCache_}
	{
	}

friend S_shader_module_create_info;

	S_shader_module_validation_cache_create_info_EXT& operator=(const VkShaderModuleValidationCacheCreateInfoEXT& rhs){static_cast<VkShaderModuleValidationCacheCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkShaderModuleValidationCacheCreateInfoEXT*()const{return const_cast<VkShaderModuleValidationCacheCreateInfoEXT*>(static_cast<const VkShaderModuleValidationCacheCreateInfoEXT*>(this));}
};

/*	VkShaderModuleCreateInfo
ex:
	VkShaderModuleValidationCacheCreateInfoEXT
*/

struct N_shader_module_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_shader_module_create_info& n_shader_module_validation_cache_create_info_EXT(S_shader_module_validation_cache_create_info_EXT const& next_);
};
struct	S_shader_module_create_info:VkShaderModuleCreateInfo{
private:
	using VkShaderModuleCreateInfo::sType;
	using VkShaderModuleCreateInfo::pNext;
public:
	using VkShaderModuleCreateInfo::flags;
	using VkShaderModuleCreateInfo::codeSize;
	using VkShaderModuleCreateInfo::pCode;

S_shader_module_create_info():VkShaderModuleCreateInfo{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,nullptr}{}
S_shader_module_create_info(
	VkShaderModuleCreateFlags flags_,
	size_t codeSize_,
	const uint32_t * pCode_)
	:VkShaderModuleCreateInfo{
	VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO
	,nullptr
	,flags_
	,codeSize_
	,pCode_}
	{
	}

	S_shader_module_create_info& operator=(const VkShaderModuleCreateInfo& rhs){static_cast<VkShaderModuleCreateInfo&>(*this)=rhs; return *this;}
	operator VkShaderModuleCreateInfo*()const{return const_cast<VkShaderModuleCreateInfo*>(static_cast<const VkShaderModuleCreateInfo*>(this));}

S_shader_module_create_info& n_shader_module_validation_cache_create_info_EXT(S_shader_module_validation_cache_create_info_EXT const& next_);
void set_pNext(N_shader_module_create_info n_){pNext = n_;}
};

/*	VkDescriptorSetLayoutBinding
*/
struct	S_descriptor_set_layout_binding:VkDescriptorSetLayoutBinding{
	using VkDescriptorSetLayoutBinding::binding;
	using VkDescriptorSetLayoutBinding::descriptorType;
	using VkDescriptorSetLayoutBinding::descriptorCount;
	using VkDescriptorSetLayoutBinding::stageFlags;
	using VkDescriptorSetLayoutBinding::pImmutableSamplers;

	S_descriptor_set_layout_binding& operator=(const VkDescriptorSetLayoutBinding& rhs){static_cast<VkDescriptorSetLayoutBinding&>(*this)=rhs; return *this;}
	operator VkDescriptorSetLayoutBinding*()const{return const_cast<VkDescriptorSetLayoutBinding*>(static_cast<const VkDescriptorSetLayoutBinding*>(this));}
};

/*	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT
ex to: VkDescriptorSetLayoutCreateInfo
*/
struct	S_descriptor_set_layout_binding_flags_create_info_EXT:VkDescriptorSetLayoutBindingFlagsCreateInfoEXT{
private:
	using VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::sType;
	using VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::pNext;
public:
	using VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::bindingCount;
	using VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::pBindingFlags;

S_descriptor_set_layout_binding_flags_create_info_EXT():VkDescriptorSetLayoutBindingFlagsCreateInfoEXT{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT,nullptr}{}
S_descriptor_set_layout_binding_flags_create_info_EXT(
	uint32_t bindingCount_,
	const F_descriptor_binding_EXT * pBindingFlags_)
	:VkDescriptorSetLayoutBindingFlagsCreateInfoEXT{
	VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT
	,nullptr
	,bindingCount_
	,*pBindingFlags_}
	{
	}

friend S_descriptor_set_layout_create_info;

	S_descriptor_set_layout_binding_flags_create_info_EXT& operator=(const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& rhs){static_cast<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkDescriptorSetLayoutBindingFlagsCreateInfoEXT*()const{return const_cast<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT*>(static_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT*>(this));}
};

/*	VkDescriptorSetLayoutCreateInfo
ex:
	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT
*/

struct N_descriptor_set_layout_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_descriptor_set_layout_create_info& n_descriptor_set_layout_binding_flags_create_info_EXT(S_descriptor_set_layout_binding_flags_create_info_EXT const& next_);
};
struct	S_descriptor_set_layout_create_info:VkDescriptorSetLayoutCreateInfo{
private:
	using VkDescriptorSetLayoutCreateInfo::sType;
	using VkDescriptorSetLayoutCreateInfo::pNext;
public:
	using VkDescriptorSetLayoutCreateInfo::flags;
	using VkDescriptorSetLayoutCreateInfo::bindingCount;
	using VkDescriptorSetLayoutCreateInfo::pBindings;

S_descriptor_set_layout_create_info():VkDescriptorSetLayoutCreateInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,nullptr}{}
S_descriptor_set_layout_create_info(
	F_descriptor_set_layout_create flags_,
	uint32_t bindingCount_,
	const S_descriptor_set_layout_binding * pBindings_)
	:VkDescriptorSetLayoutCreateInfo{
	VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO
	,nullptr
	,static_cast<VkFlags>(flags_)
	,bindingCount_
	,pBindings_}
	{
	}

	S_descriptor_set_layout_create_info& operator=(const VkDescriptorSetLayoutCreateInfo& rhs){static_cast<VkDescriptorSetLayoutCreateInfo&>(*this)=rhs; return *this;}
	operator VkDescriptorSetLayoutCreateInfo*()const{return const_cast<VkDescriptorSetLayoutCreateInfo*>(static_cast<const VkDescriptorSetLayoutCreateInfo*>(this));}

S_descriptor_set_layout_create_info& n_descriptor_set_layout_binding_flags_create_info_EXT(S_descriptor_set_layout_binding_flags_create_info_EXT const& next_);
void set_pNext(N_descriptor_set_layout_create_info n_){pNext = n_;}
};

/*	VkDescriptorPoolSize
*/
struct	S_descriptor_pool_size:VkDescriptorPoolSize{
	using VkDescriptorPoolSize::type;
	using VkDescriptorPoolSize::descriptorCount;

	S_descriptor_pool_size& operator=(const VkDescriptorPoolSize& rhs){static_cast<VkDescriptorPoolSize&>(*this)=rhs; return *this;}
	operator VkDescriptorPoolSize*()const{return const_cast<VkDescriptorPoolSize*>(static_cast<const VkDescriptorPoolSize*>(this));}
};

/*	VkDescriptorPoolCreateInfo
*/
struct	S_descriptor_pool_create_info:VkDescriptorPoolCreateInfo{
private:
	using VkDescriptorPoolCreateInfo::sType;
	using VkDescriptorPoolCreateInfo::pNext;
public:
	using VkDescriptorPoolCreateInfo::flags;
	using VkDescriptorPoolCreateInfo::maxSets;
	using VkDescriptorPoolCreateInfo::poolSizeCount;
	using VkDescriptorPoolCreateInfo::pPoolSizes;

S_descriptor_pool_create_info():VkDescriptorPoolCreateInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,nullptr}{}
S_descriptor_pool_create_info(
	F_descriptor_pool_create flags_,
	uint32_t maxSets_,
	uint32_t poolSizeCount_,
	const S_descriptor_pool_size * pPoolSizes_)
	:VkDescriptorPoolCreateInfo{
	VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO
	,nullptr
	,flags_
	,maxSets_
	,poolSizeCount_
	,pPoolSizes_}
	{
	}

	S_descriptor_pool_create_info& operator=(const VkDescriptorPoolCreateInfo& rhs){static_cast<VkDescriptorPoolCreateInfo&>(*this)=rhs; return *this;}
	operator VkDescriptorPoolCreateInfo*()const{return const_cast<VkDescriptorPoolCreateInfo*>(static_cast<const VkDescriptorPoolCreateInfo*>(this));}
};

/*	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT
ex to: VkDescriptorSetAllocateInfo
*/
struct	S_descriptor_set_variable_descriptor_count_allocate_info_EXT:VkDescriptorSetVariableDescriptorCountAllocateInfoEXT{
private:
	using VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::sType;
	using VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::pNext;
public:
	using VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::descriptorSetCount;
	using VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::pDescriptorCounts;

S_descriptor_set_variable_descriptor_count_allocate_info_EXT():VkDescriptorSetVariableDescriptorCountAllocateInfoEXT{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT,nullptr}{}
S_descriptor_set_variable_descriptor_count_allocate_info_EXT(
	uint32_t descriptorSetCount_,
	const uint32_t * pDescriptorCounts_)
	:VkDescriptorSetVariableDescriptorCountAllocateInfoEXT{
	VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT
	,nullptr
	,descriptorSetCount_
	,pDescriptorCounts_}
	{
	}

friend S_descriptor_set_allocate_info;

	S_descriptor_set_variable_descriptor_count_allocate_info_EXT& operator=(const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& rhs){static_cast<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&>(*this)=rhs; return *this;}
	operator VkDescriptorSetVariableDescriptorCountAllocateInfoEXT*()const{return const_cast<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT*>(static_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT*>(this));}
};

/*	VkDescriptorSetAllocateInfo
ex:
	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT
*/

struct N_descriptor_set_allocate_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_descriptor_set_allocate_info& n_descriptor_set_variable_descriptor_count_allocate_info_EXT(S_descriptor_set_variable_descriptor_count_allocate_info_EXT const& next_);
};
struct	S_descriptor_set_allocate_info:VkDescriptorSetAllocateInfo{
private:
	using VkDescriptorSetAllocateInfo::sType;
	using VkDescriptorSetAllocateInfo::pNext;
public:
	using VkDescriptorSetAllocateInfo::descriptorPool;
	using VkDescriptorSetAllocateInfo::descriptorSetCount;
	using VkDescriptorSetAllocateInfo::pSetLayouts;

S_descriptor_set_allocate_info():VkDescriptorSetAllocateInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,nullptr}{}
S_descriptor_set_allocate_info(
	VkDescriptorPool descriptorPool_,
	uint32_t descriptorSetCount_,
	const VkDescriptorSetLayout * pSetLayouts_)
	:VkDescriptorSetAllocateInfo{
	VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO
	,nullptr
	,descriptorPool_
	,descriptorSetCount_
	,pSetLayouts_}
	{
	}

	S_descriptor_set_allocate_info& operator=(const VkDescriptorSetAllocateInfo& rhs){static_cast<VkDescriptorSetAllocateInfo&>(*this)=rhs; return *this;}
	operator VkDescriptorSetAllocateInfo*()const{return const_cast<VkDescriptorSetAllocateInfo*>(static_cast<const VkDescriptorSetAllocateInfo*>(this));}

S_descriptor_set_allocate_info& n_descriptor_set_variable_descriptor_count_allocate_info_EXT(S_descriptor_set_variable_descriptor_count_allocate_info_EXT const& next_);
void set_pNext(N_descriptor_set_allocate_info n_){pNext = n_;}
};

/*	VkSpecializationMapEntry
*/
struct	S_specialization_map_entry:VkSpecializationMapEntry{
	using VkSpecializationMapEntry::constantID;
	using VkSpecializationMapEntry::offset;
	using VkSpecializationMapEntry::size;

	S_specialization_map_entry& operator=(const VkSpecializationMapEntry& rhs){static_cast<VkSpecializationMapEntry&>(*this)=rhs; return *this;}
	operator VkSpecializationMapEntry*()const{return const_cast<VkSpecializationMapEntry*>(static_cast<const VkSpecializationMapEntry*>(this));}
};

/*	VkSpecializationInfo
*/
struct	S_specialization_info:VkSpecializationInfo{
	using VkSpecializationInfo::mapEntryCount;
	using VkSpecializationInfo::pMapEntries;
	using VkSpecializationInfo::dataSize;
	using VkSpecializationInfo::pData;

	S_specialization_info& operator=(const VkSpecializationInfo& rhs){static_cast<VkSpecializationInfo&>(*this)=rhs; return *this;}
	operator VkSpecializationInfo*()const{return const_cast<VkSpecializationInfo*>(static_cast<const VkSpecializationInfo*>(this));}
};

/*	VkPipelineShaderStageCreateInfo
*/
struct	S_pipeline_shader_stage_create_info:VkPipelineShaderStageCreateInfo{
private:
	using VkPipelineShaderStageCreateInfo::sType;
	using VkPipelineShaderStageCreateInfo::pNext;
public:
	using VkPipelineShaderStageCreateInfo::flags;
	using VkPipelineShaderStageCreateInfo::stage;
	using VkPipelineShaderStageCreateInfo::module;
	using VkPipelineShaderStageCreateInfo::pName;
	using VkPipelineShaderStageCreateInfo::pSpecializationInfo;

S_pipeline_shader_stage_create_info():VkPipelineShaderStageCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,nullptr}{}
S_pipeline_shader_stage_create_info(
	VkPipelineShaderStageCreateFlags flags_,
	F_shader_stage stage_,
	VkShaderModule module_,
	const char * pName_,
	const S_specialization_info * pSpecializationInfo_)
	:VkPipelineShaderStageCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO
	,nullptr
	,flags_
	,stage_
	,module_
	,pName_
	,pSpecializationInfo_}
	{
	}

	S_pipeline_shader_stage_create_info& operator=(const VkPipelineShaderStageCreateInfo& rhs){static_cast<VkPipelineShaderStageCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineShaderStageCreateInfo*()const{return const_cast<VkPipelineShaderStageCreateInfo*>(static_cast<const VkPipelineShaderStageCreateInfo*>(this));}
};

/*	VkComputePipelineCreateInfo
*/
struct	S_compute_pipeline_create_info:VkComputePipelineCreateInfo{
private:
	using VkComputePipelineCreateInfo::sType;
	using VkComputePipelineCreateInfo::pNext;
public:
	using VkComputePipelineCreateInfo::flags;
	using VkComputePipelineCreateInfo::stage;
	using VkComputePipelineCreateInfo::layout;
	using VkComputePipelineCreateInfo::basePipelineHandle;
	using VkComputePipelineCreateInfo::basePipelineIndex;

S_compute_pipeline_create_info():VkComputePipelineCreateInfo{VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,nullptr}{}
S_compute_pipeline_create_info(
	F_pipeline_create flags_,
	S_pipeline_shader_stage_create_info stage_,
	VkPipelineLayout layout_,
	VkPipeline basePipelineHandle_,
	int32_t basePipelineIndex_)
	:VkComputePipelineCreateInfo{
	VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO
	,nullptr
	,flags_
	,stage_
	,layout_
	,basePipelineHandle_
	,basePipelineIndex_}
	{
	}

	S_compute_pipeline_create_info& operator=(const VkComputePipelineCreateInfo& rhs){static_cast<VkComputePipelineCreateInfo&>(*this)=rhs; return *this;}
	operator VkComputePipelineCreateInfo*()const{return const_cast<VkComputePipelineCreateInfo*>(static_cast<const VkComputePipelineCreateInfo*>(this));}
};

/*	VkVertexInputBindingDescription
*/
struct	S_vertex_input_binding_description:VkVertexInputBindingDescription{
	using VkVertexInputBindingDescription::binding;
	using VkVertexInputBindingDescription::stride;
	using VkVertexInputBindingDescription::inputRate;

	S_vertex_input_binding_description& operator=(const VkVertexInputBindingDescription& rhs){static_cast<VkVertexInputBindingDescription&>(*this)=rhs; return *this;}
	operator VkVertexInputBindingDescription*()const{return const_cast<VkVertexInputBindingDescription*>(static_cast<const VkVertexInputBindingDescription*>(this));}
};

/*	VkVertexInputAttributeDescription
*/
struct	S_vertex_input_attribute_description:VkVertexInputAttributeDescription{
	using VkVertexInputAttributeDescription::location;
	using VkVertexInputAttributeDescription::binding;
	using VkVertexInputAttributeDescription::format;
	using VkVertexInputAttributeDescription::offset;

	S_vertex_input_attribute_description& operator=(const VkVertexInputAttributeDescription& rhs){static_cast<VkVertexInputAttributeDescription&>(*this)=rhs; return *this;}
	operator VkVertexInputAttributeDescription*()const{return const_cast<VkVertexInputAttributeDescription*>(static_cast<const VkVertexInputAttributeDescription*>(this));}
};

/*	VkVertexInputBindingDivisorDescriptionEXT
*/
struct	S_vertex_input_binding_divisor_description_EXT:VkVertexInputBindingDivisorDescriptionEXT{
	using VkVertexInputBindingDivisorDescriptionEXT::binding;
	using VkVertexInputBindingDivisorDescriptionEXT::divisor;

	S_vertex_input_binding_divisor_description_EXT& operator=(const VkVertexInputBindingDivisorDescriptionEXT& rhs){static_cast<VkVertexInputBindingDivisorDescriptionEXT&>(*this)=rhs; return *this;}
	operator VkVertexInputBindingDivisorDescriptionEXT*()const{return const_cast<VkVertexInputBindingDivisorDescriptionEXT*>(static_cast<const VkVertexInputBindingDivisorDescriptionEXT*>(this));}
};

/*	VkPipelineVertexInputDivisorStateCreateInfoEXT
ex to: VkPipelineVertexInputStateCreateInfo
*/
struct	S_pipeline_vertex_input_divisor_state_create_info_EXT:VkPipelineVertexInputDivisorStateCreateInfoEXT{
private:
	using VkPipelineVertexInputDivisorStateCreateInfoEXT::sType;
	using VkPipelineVertexInputDivisorStateCreateInfoEXT::pNext;
public:
	using VkPipelineVertexInputDivisorStateCreateInfoEXT::vertexBindingDivisorCount;
	using VkPipelineVertexInputDivisorStateCreateInfoEXT::pVertexBindingDivisors;

S_pipeline_vertex_input_divisor_state_create_info_EXT():VkPipelineVertexInputDivisorStateCreateInfoEXT{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT,nullptr}{}
S_pipeline_vertex_input_divisor_state_create_info_EXT(
	uint32_t vertexBindingDivisorCount_,
	const S_vertex_input_binding_divisor_description_EXT * pVertexBindingDivisors_)
	:VkPipelineVertexInputDivisorStateCreateInfoEXT{
	VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT
	,nullptr
	,vertexBindingDivisorCount_
	,pVertexBindingDivisors_}
	{
	}

friend S_pipeline_vertex_input_state_create_info;

	S_pipeline_vertex_input_divisor_state_create_info_EXT& operator=(const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs){static_cast<VkPipelineVertexInputDivisorStateCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkPipelineVertexInputDivisorStateCreateInfoEXT*()const{return const_cast<VkPipelineVertexInputDivisorStateCreateInfoEXT*>(static_cast<const VkPipelineVertexInputDivisorStateCreateInfoEXT*>(this));}
};

/*	VkPipelineVertexInputStateCreateInfo
ex:
	VkPipelineVertexInputDivisorStateCreateInfoEXT
*/

struct N_pipeline_vertex_input_state_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_pipeline_vertex_input_state_create_info& n_pipeline_vertex_input_divisor_state_create_info_EXT(S_pipeline_vertex_input_divisor_state_create_info_EXT const& next_);
};
struct	S_pipeline_vertex_input_state_create_info:VkPipelineVertexInputStateCreateInfo{
private:
	using VkPipelineVertexInputStateCreateInfo::sType;
	using VkPipelineVertexInputStateCreateInfo::pNext;
public:
	using VkPipelineVertexInputStateCreateInfo::flags;
	using VkPipelineVertexInputStateCreateInfo::vertexBindingDescriptionCount;
	using VkPipelineVertexInputStateCreateInfo::pVertexBindingDescriptions;
	using VkPipelineVertexInputStateCreateInfo::vertexAttributeDescriptionCount;
	using VkPipelineVertexInputStateCreateInfo::pVertexAttributeDescriptions;

S_pipeline_vertex_input_state_create_info():VkPipelineVertexInputStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,nullptr}{}
S_pipeline_vertex_input_state_create_info(
	VkPipelineVertexInputStateCreateFlags flags_,
	uint32_t vertexBindingDescriptionCount_,
	const S_vertex_input_binding_description * pVertexBindingDescriptions_,
	uint32_t vertexAttributeDescriptionCount_,
	const S_vertex_input_attribute_description * pVertexAttributeDescriptions_)
	:VkPipelineVertexInputStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO
	,nullptr
	,flags_
	,vertexBindingDescriptionCount_
	,pVertexBindingDescriptions_
	,vertexAttributeDescriptionCount_
	,pVertexAttributeDescriptions_}
	{
	}

	S_pipeline_vertex_input_state_create_info& operator=(const VkPipelineVertexInputStateCreateInfo& rhs){static_cast<VkPipelineVertexInputStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineVertexInputStateCreateInfo*()const{return const_cast<VkPipelineVertexInputStateCreateInfo*>(static_cast<const VkPipelineVertexInputStateCreateInfo*>(this));}

S_pipeline_vertex_input_state_create_info& n_pipeline_vertex_input_divisor_state_create_info_EXT(S_pipeline_vertex_input_divisor_state_create_info_EXT const& next_);
void set_pNext(N_pipeline_vertex_input_state_create_info n_){pNext = n_;}
};

/*	VkPipelineInputAssemblyStateCreateInfo
*/
struct	S_pipeline_input_assembly_state_create_info:VkPipelineInputAssemblyStateCreateInfo{
private:
	using VkPipelineInputAssemblyStateCreateInfo::sType;
	using VkPipelineInputAssemblyStateCreateInfo::pNext;
public:
	using VkPipelineInputAssemblyStateCreateInfo::flags;
	using VkPipelineInputAssemblyStateCreateInfo::topology;
	using VkPipelineInputAssemblyStateCreateInfo::primitiveRestartEnable;

S_pipeline_input_assembly_state_create_info():VkPipelineInputAssemblyStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,nullptr}{}
S_pipeline_input_assembly_state_create_info(
	VkPipelineInputAssemblyStateCreateFlags flags_,
	E_primitive_topology topology_,
	VkBool32 primitiveRestartEnable_)
	:VkPipelineInputAssemblyStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO
	,nullptr
	,flags_
	,topology_
	,primitiveRestartEnable_}
	{
	}

	S_pipeline_input_assembly_state_create_info& operator=(const VkPipelineInputAssemblyStateCreateInfo& rhs){static_cast<VkPipelineInputAssemblyStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineInputAssemblyStateCreateInfo*()const{return const_cast<VkPipelineInputAssemblyStateCreateInfo*>(static_cast<const VkPipelineInputAssemblyStateCreateInfo*>(this));}
};

/*	VkPipelineTessellationDomainOriginStateCreateInfo
ex to: VkPipelineTessellationStateCreateInfo
*/
struct	S_pipeline_tessellation_domain_origin_state_create_info:VkPipelineTessellationDomainOriginStateCreateInfo{
private:
	using VkPipelineTessellationDomainOriginStateCreateInfo::sType;
	using VkPipelineTessellationDomainOriginStateCreateInfo::pNext;
public:
	using VkPipelineTessellationDomainOriginStateCreateInfo::domainOrigin;

S_pipeline_tessellation_domain_origin_state_create_info():VkPipelineTessellationDomainOriginStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO,nullptr}{}
S_pipeline_tessellation_domain_origin_state_create_info(
	E_tessellation_domain_origin domainOrigin_)
	:VkPipelineTessellationDomainOriginStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO
	,nullptr
	,domainOrigin_}
	{
	}

friend S_pipeline_tessellation_state_create_info;

	S_pipeline_tessellation_domain_origin_state_create_info& operator=(const VkPipelineTessellationDomainOriginStateCreateInfo& rhs){static_cast<VkPipelineTessellationDomainOriginStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineTessellationDomainOriginStateCreateInfo*()const{return const_cast<VkPipelineTessellationDomainOriginStateCreateInfo*>(static_cast<const VkPipelineTessellationDomainOriginStateCreateInfo*>(this));}
};

/*	VkPipelineTessellationStateCreateInfo
ex:
	VkPipelineTessellationDomainOriginStateCreateInfo
*/

struct N_pipeline_tessellation_state_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_pipeline_tessellation_state_create_info& n_pipeline_tessellation_domain_origin_state_create_info(S_pipeline_tessellation_domain_origin_state_create_info const& next_);
};
struct	S_pipeline_tessellation_state_create_info:VkPipelineTessellationStateCreateInfo{
private:
	using VkPipelineTessellationStateCreateInfo::sType;
	using VkPipelineTessellationStateCreateInfo::pNext;
public:
	using VkPipelineTessellationStateCreateInfo::flags;
	using VkPipelineTessellationStateCreateInfo::patchControlPoints;

S_pipeline_tessellation_state_create_info():VkPipelineTessellationStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,nullptr}{}
S_pipeline_tessellation_state_create_info(
	VkPipelineTessellationStateCreateFlags flags_,
	uint32_t patchControlPoints_)
	:VkPipelineTessellationStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO
	,nullptr
	,flags_
	,patchControlPoints_}
	{
	}

	S_pipeline_tessellation_state_create_info& operator=(const VkPipelineTessellationStateCreateInfo& rhs){static_cast<VkPipelineTessellationStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineTessellationStateCreateInfo*()const{return const_cast<VkPipelineTessellationStateCreateInfo*>(static_cast<const VkPipelineTessellationStateCreateInfo*>(this));}

S_pipeline_tessellation_state_create_info& n_pipeline_tessellation_domain_origin_state_create_info(S_pipeline_tessellation_domain_origin_state_create_info const& next_);
void set_pNext(N_pipeline_tessellation_state_create_info n_){pNext = n_;}
};

/*	VkViewportWScalingNV
*/
struct	S_viewport_w_scaling_NV:VkViewportWScalingNV{
	using VkViewportWScalingNV::xcoeff;
	using VkViewportWScalingNV::ycoeff;

	S_viewport_w_scaling_NV& operator=(const VkViewportWScalingNV& rhs){static_cast<VkViewportWScalingNV&>(*this)=rhs; return *this;}
	operator VkViewportWScalingNV*()const{return const_cast<VkViewportWScalingNV*>(static_cast<const VkViewportWScalingNV*>(this));}
};

/*	VkPipelineViewportWScalingStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
struct	S_pipeline_viewport_w_scaling_state_create_info_NV:VkPipelineViewportWScalingStateCreateInfoNV{
private:
	using VkPipelineViewportWScalingStateCreateInfoNV::sType;
	using VkPipelineViewportWScalingStateCreateInfoNV::pNext;
public:
	using VkPipelineViewportWScalingStateCreateInfoNV::viewportWScalingEnable;
	using VkPipelineViewportWScalingStateCreateInfoNV::viewportCount;
	using VkPipelineViewportWScalingStateCreateInfoNV::pViewportWScalings;

S_pipeline_viewport_w_scaling_state_create_info_NV():VkPipelineViewportWScalingStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_viewport_w_scaling_state_create_info_NV(
	VkBool32 viewportWScalingEnable_,
	uint32_t viewportCount_,
	const S_viewport_w_scaling_NV * pViewportWScalings_)
	:VkPipelineViewportWScalingStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV
	,nullptr
	,viewportWScalingEnable_
	,viewportCount_
	,pViewportWScalings_}
	{
	}

friend S_pipeline_viewport_state_create_info;

	S_pipeline_viewport_w_scaling_state_create_info_NV& operator=(const VkPipelineViewportWScalingStateCreateInfoNV& rhs){static_cast<VkPipelineViewportWScalingStateCreateInfoNV&>(*this)=rhs; return *this;}
	operator VkPipelineViewportWScalingStateCreateInfoNV*()const{return const_cast<VkPipelineViewportWScalingStateCreateInfoNV*>(static_cast<const VkPipelineViewportWScalingStateCreateInfoNV*>(this));}
};

/*	VkViewportSwizzleNV
*/
struct	S_viewport_swizzle_NV:VkViewportSwizzleNV{
	using VkViewportSwizzleNV::x;
	using VkViewportSwizzleNV::y;
	using VkViewportSwizzleNV::z;
	using VkViewportSwizzleNV::w;

	S_viewport_swizzle_NV& operator=(const VkViewportSwizzleNV& rhs){static_cast<VkViewportSwizzleNV&>(*this)=rhs; return *this;}
	operator VkViewportSwizzleNV*()const{return const_cast<VkViewportSwizzleNV*>(static_cast<const VkViewportSwizzleNV*>(this));}
};

/*	VkPipelineViewportSwizzleStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
struct	S_pipeline_viewport_swizzle_state_create_info_NV:VkPipelineViewportSwizzleStateCreateInfoNV{
private:
	using VkPipelineViewportSwizzleStateCreateInfoNV::sType;
	using VkPipelineViewportSwizzleStateCreateInfoNV::pNext;
public:
	using VkPipelineViewportSwizzleStateCreateInfoNV::flags;
	using VkPipelineViewportSwizzleStateCreateInfoNV::viewportCount;
	using VkPipelineViewportSwizzleStateCreateInfoNV::pViewportSwizzles;

S_pipeline_viewport_swizzle_state_create_info_NV():VkPipelineViewportSwizzleStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_viewport_swizzle_state_create_info_NV(
	VkPipelineViewportSwizzleStateCreateFlagsNV flags_,
	uint32_t viewportCount_,
	const S_viewport_swizzle_NV * pViewportSwizzles_)
	:VkPipelineViewportSwizzleStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV
	,nullptr
	,flags_
	,viewportCount_
	,pViewportSwizzles_}
	{
	}

friend S_pipeline_viewport_state_create_info;

	S_pipeline_viewport_swizzle_state_create_info_NV& operator=(const VkPipelineViewportSwizzleStateCreateInfoNV& rhs){static_cast<VkPipelineViewportSwizzleStateCreateInfoNV&>(*this)=rhs; return *this;}
	operator VkPipelineViewportSwizzleStateCreateInfoNV*()const{return const_cast<VkPipelineViewportSwizzleStateCreateInfoNV*>(static_cast<const VkPipelineViewportSwizzleStateCreateInfoNV*>(this));}
};

/*	VkPipelineViewportStateCreateInfo
ex:
	VkPipelineViewportWScalingStateCreateInfoNV
	VkPipelineViewportSwizzleStateCreateInfoNV
*/

struct N_pipeline_viewport_state_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_pipeline_viewport_state_create_info& n_pipeline_viewport_w_scaling_state_create_info_NV(S_pipeline_viewport_w_scaling_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_swizzle_state_create_info_NV(S_pipeline_viewport_swizzle_state_create_info_NV const& next_);
};
struct	S_pipeline_viewport_state_create_info:VkPipelineViewportStateCreateInfo{
private:
	using VkPipelineViewportStateCreateInfo::sType;
	using VkPipelineViewportStateCreateInfo::pNext;
public:
	using VkPipelineViewportStateCreateInfo::flags;
	using VkPipelineViewportStateCreateInfo::viewportCount;
	using VkPipelineViewportStateCreateInfo::pViewports;
	using VkPipelineViewportStateCreateInfo::scissorCount;
	using VkPipelineViewportStateCreateInfo::pScissors;

S_pipeline_viewport_state_create_info():VkPipelineViewportStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,nullptr}{}
S_pipeline_viewport_state_create_info(
	VkPipelineViewportStateCreateFlags flags_,
	uint32_t viewportCount_,
	const S_viewport * pViewports_,
	uint32_t scissorCount_,
	const S_rect_2d * pScissors_)
	:VkPipelineViewportStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO
	,nullptr
	,flags_
	,viewportCount_
	,pViewports_
	,scissorCount_
	,pScissors_}
	{
	}

	S_pipeline_viewport_state_create_info& operator=(const VkPipelineViewportStateCreateInfo& rhs){static_cast<VkPipelineViewportStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineViewportStateCreateInfo*()const{return const_cast<VkPipelineViewportStateCreateInfo*>(static_cast<const VkPipelineViewportStateCreateInfo*>(this));}

S_pipeline_viewport_state_create_info& n_pipeline_viewport_w_scaling_state_create_info_NV(S_pipeline_viewport_w_scaling_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_swizzle_state_create_info_NV(S_pipeline_viewport_swizzle_state_create_info_NV const& next_);
void set_pNext(N_pipeline_viewport_state_create_info n_){pNext = n_;}
};

/*	VkPipelineRasterizationStateRasterizationOrderAMD
ex to: VkPipelineRasterizationStateCreateInfo
*/
struct	S_pipeline_rasterization_state_rasterization_order_AMD:VkPipelineRasterizationStateRasterizationOrderAMD{
private:
	using VkPipelineRasterizationStateRasterizationOrderAMD::sType;
	using VkPipelineRasterizationStateRasterizationOrderAMD::pNext;
public:
	using VkPipelineRasterizationStateRasterizationOrderAMD::rasterizationOrder;

S_pipeline_rasterization_state_rasterization_order_AMD():VkPipelineRasterizationStateRasterizationOrderAMD{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD,nullptr}{}
S_pipeline_rasterization_state_rasterization_order_AMD(
	E_rasterization_order_AMD rasterizationOrder_)
	:VkPipelineRasterizationStateRasterizationOrderAMD{
	VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD
	,nullptr
	,rasterizationOrder_}
	{
	}

friend S_pipeline_rasterization_state_create_info;

	S_pipeline_rasterization_state_rasterization_order_AMD& operator=(const VkPipelineRasterizationStateRasterizationOrderAMD& rhs){static_cast<VkPipelineRasterizationStateRasterizationOrderAMD&>(*this)=rhs; return *this;}
	operator VkPipelineRasterizationStateRasterizationOrderAMD*()const{return const_cast<VkPipelineRasterizationStateRasterizationOrderAMD*>(static_cast<const VkPipelineRasterizationStateRasterizationOrderAMD*>(this));}
};

/*	VkPipelineRasterizationConservativeStateCreateInfoEXT
ex to: VkPipelineRasterizationStateCreateInfo
*/
struct	S_pipeline_rasterization_conservative_state_create_info_EXT:VkPipelineRasterizationConservativeStateCreateInfoEXT{
private:
	using VkPipelineRasterizationConservativeStateCreateInfoEXT::sType;
	using VkPipelineRasterizationConservativeStateCreateInfoEXT::pNext;
public:
	using VkPipelineRasterizationConservativeStateCreateInfoEXT::flags;
	using VkPipelineRasterizationConservativeStateCreateInfoEXT::conservativeRasterizationMode;
	using VkPipelineRasterizationConservativeStateCreateInfoEXT::extraPrimitiveOverestimationSize;

S_pipeline_rasterization_conservative_state_create_info_EXT():VkPipelineRasterizationConservativeStateCreateInfoEXT{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT,nullptr}{}
S_pipeline_rasterization_conservative_state_create_info_EXT(
	VkPipelineRasterizationConservativeStateCreateFlagsEXT flags_,
	E_conservative_rasterization_mode_EXT conservativeRasterizationMode_,
	float extraPrimitiveOverestimationSize_)
	:VkPipelineRasterizationConservativeStateCreateInfoEXT{
	VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT
	,nullptr
	,flags_
	,conservativeRasterizationMode_
	,extraPrimitiveOverestimationSize_}
	{
	}

friend S_pipeline_rasterization_state_create_info;

	S_pipeline_rasterization_conservative_state_create_info_EXT& operator=(const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs){static_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkPipelineRasterizationConservativeStateCreateInfoEXT*()const{return const_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT*>(static_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT*>(this));}
};

/*	VkPipelineRasterizationStateCreateInfo
ex:
	VkPipelineRasterizationStateRasterizationOrderAMD
	VkPipelineRasterizationConservativeStateCreateInfoEXT
*/

struct N_pipeline_rasterization_state_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_pipeline_rasterization_state_create_info& n_pipeline_rasterization_state_rasterization_order_AMD(S_pipeline_rasterization_state_rasterization_order_AMD const& next_);
N_pipeline_rasterization_state_create_info& n_pipeline_rasterization_conservative_state_create_info_EXT(S_pipeline_rasterization_conservative_state_create_info_EXT const& next_);
};
struct	S_pipeline_rasterization_state_create_info:VkPipelineRasterizationStateCreateInfo{
private:
	using VkPipelineRasterizationStateCreateInfo::sType;
	using VkPipelineRasterizationStateCreateInfo::pNext;
public:
	using VkPipelineRasterizationStateCreateInfo::flags;
	using VkPipelineRasterizationStateCreateInfo::depthClampEnable;
	using VkPipelineRasterizationStateCreateInfo::rasterizerDiscardEnable;
	using VkPipelineRasterizationStateCreateInfo::polygonMode;
	using VkPipelineRasterizationStateCreateInfo::cullMode;
	using VkPipelineRasterizationStateCreateInfo::frontFace;
	using VkPipelineRasterizationStateCreateInfo::depthBiasEnable;
	using VkPipelineRasterizationStateCreateInfo::depthBiasConstantFactor;
	using VkPipelineRasterizationStateCreateInfo::depthBiasClamp;
	using VkPipelineRasterizationStateCreateInfo::depthBiasSlopeFactor;
	using VkPipelineRasterizationStateCreateInfo::lineWidth;

S_pipeline_rasterization_state_create_info():VkPipelineRasterizationStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,nullptr}{}
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
	:VkPipelineRasterizationStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO
	,nullptr
	,flags_
	,depthClampEnable_
	,rasterizerDiscardEnable_
	,polygonMode_
	,cullMode_
	,frontFace_
	,depthBiasEnable_
	,depthBiasConstantFactor_
	,depthBiasClamp_
	,depthBiasSlopeFactor_
	,lineWidth_}
	{
	}

	S_pipeline_rasterization_state_create_info& operator=(const VkPipelineRasterizationStateCreateInfo& rhs){static_cast<VkPipelineRasterizationStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineRasterizationStateCreateInfo*()const{return const_cast<VkPipelineRasterizationStateCreateInfo*>(static_cast<const VkPipelineRasterizationStateCreateInfo*>(this));}

S_pipeline_rasterization_state_create_info& n_pipeline_rasterization_state_rasterization_order_AMD(S_pipeline_rasterization_state_rasterization_order_AMD const& next_);
S_pipeline_rasterization_state_create_info& n_pipeline_rasterization_conservative_state_create_info_EXT(S_pipeline_rasterization_conservative_state_create_info_EXT const& next_);
void set_pNext(N_pipeline_rasterization_state_create_info n_){pNext = n_;}
};

/*	VkPipelineCoverageToColorStateCreateInfoNV
ex to: VkPipelineMultisampleStateCreateInfo
*/
struct	S_pipeline_coverage_to_color_state_create_info_NV:VkPipelineCoverageToColorStateCreateInfoNV{
private:
	using VkPipelineCoverageToColorStateCreateInfoNV::sType;
	using VkPipelineCoverageToColorStateCreateInfoNV::pNext;
public:
	using VkPipelineCoverageToColorStateCreateInfoNV::flags;
	using VkPipelineCoverageToColorStateCreateInfoNV::coverageToColorEnable;
	using VkPipelineCoverageToColorStateCreateInfoNV::coverageToColorLocation;

S_pipeline_coverage_to_color_state_create_info_NV():VkPipelineCoverageToColorStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_coverage_to_color_state_create_info_NV(
	VkPipelineCoverageToColorStateCreateFlagsNV flags_,
	VkBool32 coverageToColorEnable_,
	uint32_t coverageToColorLocation_)
	:VkPipelineCoverageToColorStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV
	,nullptr
	,flags_
	,coverageToColorEnable_
	,coverageToColorLocation_}
	{
	}

friend S_pipeline_multisample_state_create_info;

	S_pipeline_coverage_to_color_state_create_info_NV& operator=(const VkPipelineCoverageToColorStateCreateInfoNV& rhs){static_cast<VkPipelineCoverageToColorStateCreateInfoNV&>(*this)=rhs; return *this;}
	operator VkPipelineCoverageToColorStateCreateInfoNV*()const{return const_cast<VkPipelineCoverageToColorStateCreateInfoNV*>(static_cast<const VkPipelineCoverageToColorStateCreateInfoNV*>(this));}
};

/*	VkPipelineSampleLocationsStateCreateInfoEXT
ex to: VkPipelineMultisampleStateCreateInfo
*/
struct	S_pipeline_sample_locations_state_create_info_EXT:VkPipelineSampleLocationsStateCreateInfoEXT{
private:
	using VkPipelineSampleLocationsStateCreateInfoEXT::sType;
	using VkPipelineSampleLocationsStateCreateInfoEXT::pNext;
public:
	using VkPipelineSampleLocationsStateCreateInfoEXT::sampleLocationsEnable;
	using VkPipelineSampleLocationsStateCreateInfoEXT::sampleLocationsInfo;

S_pipeline_sample_locations_state_create_info_EXT():VkPipelineSampleLocationsStateCreateInfoEXT{VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT,nullptr}{}
S_pipeline_sample_locations_state_create_info_EXT(
	VkBool32 sampleLocationsEnable_,
	S_sample_locations_info_EXT sampleLocationsInfo_)
	:VkPipelineSampleLocationsStateCreateInfoEXT{
	VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT
	,nullptr
	,sampleLocationsEnable_
	,sampleLocationsInfo_}
	{
	}

friend S_pipeline_multisample_state_create_info;

	S_pipeline_sample_locations_state_create_info_EXT& operator=(const VkPipelineSampleLocationsStateCreateInfoEXT& rhs){static_cast<VkPipelineSampleLocationsStateCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkPipelineSampleLocationsStateCreateInfoEXT*()const{return const_cast<VkPipelineSampleLocationsStateCreateInfoEXT*>(static_cast<const VkPipelineSampleLocationsStateCreateInfoEXT*>(this));}
};

/*	VkPipelineCoverageModulationStateCreateInfoNV
ex to: VkPipelineMultisampleStateCreateInfo
*/
struct	S_pipeline_coverage_modulation_state_create_info_NV:VkPipelineCoverageModulationStateCreateInfoNV{
private:
	using VkPipelineCoverageModulationStateCreateInfoNV::sType;
	using VkPipelineCoverageModulationStateCreateInfoNV::pNext;
public:
	using VkPipelineCoverageModulationStateCreateInfoNV::flags;
	using VkPipelineCoverageModulationStateCreateInfoNV::coverageModulationMode;
	using VkPipelineCoverageModulationStateCreateInfoNV::coverageModulationTableEnable;
	using VkPipelineCoverageModulationStateCreateInfoNV::coverageModulationTableCount;
	using VkPipelineCoverageModulationStateCreateInfoNV::pCoverageModulationTable;

S_pipeline_coverage_modulation_state_create_info_NV():VkPipelineCoverageModulationStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_coverage_modulation_state_create_info_NV(
	VkPipelineCoverageModulationStateCreateFlagsNV flags_,
	E_coverage_modulation_mode_NV coverageModulationMode_,
	VkBool32 coverageModulationTableEnable_,
	uint32_t coverageModulationTableCount_,
	const float * pCoverageModulationTable_)
	:VkPipelineCoverageModulationStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV
	,nullptr
	,flags_
	,coverageModulationMode_
	,coverageModulationTableEnable_
	,coverageModulationTableCount_
	,pCoverageModulationTable_}
	{
	}

friend S_pipeline_multisample_state_create_info;

	S_pipeline_coverage_modulation_state_create_info_NV& operator=(const VkPipelineCoverageModulationStateCreateInfoNV& rhs){static_cast<VkPipelineCoverageModulationStateCreateInfoNV&>(*this)=rhs; return *this;}
	operator VkPipelineCoverageModulationStateCreateInfoNV*()const{return const_cast<VkPipelineCoverageModulationStateCreateInfoNV*>(static_cast<const VkPipelineCoverageModulationStateCreateInfoNV*>(this));}
};

/*	VkPipelineMultisampleStateCreateInfo
ex:
	VkPipelineCoverageToColorStateCreateInfoNV
	VkPipelineSampleLocationsStateCreateInfoEXT
	VkPipelineCoverageModulationStateCreateInfoNV
*/

struct N_pipeline_multisample_state_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_pipeline_multisample_state_create_info& n_pipeline_coverage_to_color_state_create_info_NV(S_pipeline_coverage_to_color_state_create_info_NV const& next_);
N_pipeline_multisample_state_create_info& n_pipeline_sample_locations_state_create_info_EXT(S_pipeline_sample_locations_state_create_info_EXT const& next_);
N_pipeline_multisample_state_create_info& n_pipeline_coverage_modulation_state_create_info_NV(S_pipeline_coverage_modulation_state_create_info_NV const& next_);
};
struct	S_pipeline_multisample_state_create_info:VkPipelineMultisampleStateCreateInfo{
private:
	using VkPipelineMultisampleStateCreateInfo::sType;
	using VkPipelineMultisampleStateCreateInfo::pNext;
public:
	using VkPipelineMultisampleStateCreateInfo::flags;
	using VkPipelineMultisampleStateCreateInfo::rasterizationSamples;
	using VkPipelineMultisampleStateCreateInfo::sampleShadingEnable;
	using VkPipelineMultisampleStateCreateInfo::minSampleShading;
	using VkPipelineMultisampleStateCreateInfo::pSampleMask;
	using VkPipelineMultisampleStateCreateInfo::alphaToCoverageEnable;
	using VkPipelineMultisampleStateCreateInfo::alphaToOneEnable;

S_pipeline_multisample_state_create_info():VkPipelineMultisampleStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,nullptr}{}
S_pipeline_multisample_state_create_info(
	VkPipelineMultisampleStateCreateFlags flags_,
	F_sample_count rasterizationSamples_,
	VkBool32 sampleShadingEnable_,
	float minSampleShading_,
	const VkSampleMask * pSampleMask_,
	VkBool32 alphaToCoverageEnable_,
	VkBool32 alphaToOneEnable_)
	:VkPipelineMultisampleStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO
	,nullptr
	,flags_
	,rasterizationSamples_
	,sampleShadingEnable_
	,minSampleShading_
	,pSampleMask_
	,alphaToCoverageEnable_
	,alphaToOneEnable_}
	{
	}

	S_pipeline_multisample_state_create_info& operator=(const VkPipelineMultisampleStateCreateInfo& rhs){static_cast<VkPipelineMultisampleStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineMultisampleStateCreateInfo*()const{return const_cast<VkPipelineMultisampleStateCreateInfo*>(static_cast<const VkPipelineMultisampleStateCreateInfo*>(this));}

S_pipeline_multisample_state_create_info& n_pipeline_coverage_to_color_state_create_info_NV(S_pipeline_coverage_to_color_state_create_info_NV const& next_);
S_pipeline_multisample_state_create_info& n_pipeline_sample_locations_state_create_info_EXT(S_pipeline_sample_locations_state_create_info_EXT const& next_);
S_pipeline_multisample_state_create_info& n_pipeline_coverage_modulation_state_create_info_NV(S_pipeline_coverage_modulation_state_create_info_NV const& next_);
void set_pNext(N_pipeline_multisample_state_create_info n_){pNext = n_;}
};

/*	VkPipelineColorBlendAttachmentState
*/
struct	S_pipeline_color_blend_attachment_state:VkPipelineColorBlendAttachmentState{
	using VkPipelineColorBlendAttachmentState::blendEnable;
	using VkPipelineColorBlendAttachmentState::srcColorBlendFactor;
	using VkPipelineColorBlendAttachmentState::dstColorBlendFactor;
	using VkPipelineColorBlendAttachmentState::colorBlendOp;
	using VkPipelineColorBlendAttachmentState::srcAlphaBlendFactor;
	using VkPipelineColorBlendAttachmentState::dstAlphaBlendFactor;
	using VkPipelineColorBlendAttachmentState::alphaBlendOp;
	using VkPipelineColorBlendAttachmentState::colorWriteMask;

	S_pipeline_color_blend_attachment_state& operator=(const VkPipelineColorBlendAttachmentState& rhs){static_cast<VkPipelineColorBlendAttachmentState&>(*this)=rhs; return *this;}
	operator VkPipelineColorBlendAttachmentState*()const{return const_cast<VkPipelineColorBlendAttachmentState*>(static_cast<const VkPipelineColorBlendAttachmentState*>(this));}
};

/*	VkPipelineColorBlendAdvancedStateCreateInfoEXT
ex to: VkPipelineColorBlendStateCreateInfo
*/
struct	S_pipeline_color_blend_advanced_state_create_info_EXT:VkPipelineColorBlendAdvancedStateCreateInfoEXT{
private:
	using VkPipelineColorBlendAdvancedStateCreateInfoEXT::sType;
	using VkPipelineColorBlendAdvancedStateCreateInfoEXT::pNext;
public:
	using VkPipelineColorBlendAdvancedStateCreateInfoEXT::srcPremultiplied;
	using VkPipelineColorBlendAdvancedStateCreateInfoEXT::dstPremultiplied;
	using VkPipelineColorBlendAdvancedStateCreateInfoEXT::blendOverlap;

S_pipeline_color_blend_advanced_state_create_info_EXT():VkPipelineColorBlendAdvancedStateCreateInfoEXT{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT,nullptr}{}
S_pipeline_color_blend_advanced_state_create_info_EXT(
	VkBool32 srcPremultiplied_,
	VkBool32 dstPremultiplied_,
	E_blend_overlap_EXT blendOverlap_)
	:VkPipelineColorBlendAdvancedStateCreateInfoEXT{
	VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT
	,nullptr
	,srcPremultiplied_
	,dstPremultiplied_
	,blendOverlap_}
	{
	}

friend S_pipeline_color_blend_state_create_info;

	S_pipeline_color_blend_advanced_state_create_info_EXT& operator=(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs){static_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkPipelineColorBlendAdvancedStateCreateInfoEXT*()const{return const_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT*>(static_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT*>(this));}
};

/*	VkPipelineColorBlendStateCreateInfo
ex:
	VkPipelineColorBlendAdvancedStateCreateInfoEXT
*/

struct N_pipeline_color_blend_state_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_pipeline_color_blend_state_create_info& n_pipeline_color_blend_advanced_state_create_info_EXT(S_pipeline_color_blend_advanced_state_create_info_EXT const& next_);
};
struct	S_pipeline_color_blend_state_create_info:VkPipelineColorBlendStateCreateInfo{
private:
	using VkPipelineColorBlendStateCreateInfo::sType;
	using VkPipelineColorBlendStateCreateInfo::pNext;
public:
	using VkPipelineColorBlendStateCreateInfo::flags;
	using VkPipelineColorBlendStateCreateInfo::logicOpEnable;
	using VkPipelineColorBlendStateCreateInfo::logicOp;
	using VkPipelineColorBlendStateCreateInfo::attachmentCount;
	using VkPipelineColorBlendStateCreateInfo::pAttachments;
	using VkPipelineColorBlendStateCreateInfo::blendConstants;

S_pipeline_color_blend_state_create_info():VkPipelineColorBlendStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO,nullptr}{}
S_pipeline_color_blend_state_create_info(
	VkPipelineColorBlendStateCreateFlags flags_,
	VkBool32 logicOpEnable_,
	E_logic_op logicOp_,
	uint32_t attachmentCount_,
	const S_pipeline_color_blend_attachment_state * pAttachments_,
	float blendConstants_[4])
	:VkPipelineColorBlendStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO
	,nullptr
	,flags_
	,logicOpEnable_
	,logicOp_
	,attachmentCount_
	,pAttachments_
	,{}}
	{
		memcpy(blendConstants,blendConstants_,sizeof(blendConstants_) );
	}

	S_pipeline_color_blend_state_create_info& operator=(const VkPipelineColorBlendStateCreateInfo& rhs){static_cast<VkPipelineColorBlendStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineColorBlendStateCreateInfo*()const{return const_cast<VkPipelineColorBlendStateCreateInfo*>(static_cast<const VkPipelineColorBlendStateCreateInfo*>(this));}

S_pipeline_color_blend_state_create_info& n_pipeline_color_blend_advanced_state_create_info_EXT(S_pipeline_color_blend_advanced_state_create_info_EXT const& next_);
void set_pNext(N_pipeline_color_blend_state_create_info n_){pNext = n_;}
};

/*	VkPipelineDynamicStateCreateInfo
*/
struct	S_pipeline_dynamic_state_create_info:VkPipelineDynamicStateCreateInfo{
private:
	using VkPipelineDynamicStateCreateInfo::sType;
	using VkPipelineDynamicStateCreateInfo::pNext;
public:
	using VkPipelineDynamicStateCreateInfo::flags;
	using VkPipelineDynamicStateCreateInfo::dynamicStateCount;
	using VkPipelineDynamicStateCreateInfo::pDynamicStates;

S_pipeline_dynamic_state_create_info():VkPipelineDynamicStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,nullptr}{}
S_pipeline_dynamic_state_create_info(
	VkPipelineDynamicStateCreateFlags flags_,
	uint32_t dynamicStateCount_,
	const E_dynamic_state * pDynamicStates_)
	:VkPipelineDynamicStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO
	,nullptr
	,flags_
	,dynamicStateCount_
	,*pDynamicStates_}
	{
	}

	S_pipeline_dynamic_state_create_info& operator=(const VkPipelineDynamicStateCreateInfo& rhs){static_cast<VkPipelineDynamicStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineDynamicStateCreateInfo*()const{return const_cast<VkPipelineDynamicStateCreateInfo*>(static_cast<const VkPipelineDynamicStateCreateInfo*>(this));}
};

/*	VkStencilOpState
*/
struct	S_stencil_op_state:VkStencilOpState{
	using VkStencilOpState::failOp;
	using VkStencilOpState::passOp;
	using VkStencilOpState::depthFailOp;
	using VkStencilOpState::compareOp;
	using VkStencilOpState::compareMask;
	using VkStencilOpState::writeMask;
	using VkStencilOpState::reference;

	S_stencil_op_state& operator=(const VkStencilOpState& rhs){static_cast<VkStencilOpState&>(*this)=rhs; return *this;}
	operator VkStencilOpState*()const{return const_cast<VkStencilOpState*>(static_cast<const VkStencilOpState*>(this));}
};

/*	VkPipelineDepthStencilStateCreateInfo
*/
struct	S_pipeline_depth_stencil_state_create_info:VkPipelineDepthStencilStateCreateInfo{
private:
	using VkPipelineDepthStencilStateCreateInfo::sType;
	using VkPipelineDepthStencilStateCreateInfo::pNext;
public:
	using VkPipelineDepthStencilStateCreateInfo::flags;
	using VkPipelineDepthStencilStateCreateInfo::depthTestEnable;
	using VkPipelineDepthStencilStateCreateInfo::depthWriteEnable;
	using VkPipelineDepthStencilStateCreateInfo::depthCompareOp;
	using VkPipelineDepthStencilStateCreateInfo::depthBoundsTestEnable;
	using VkPipelineDepthStencilStateCreateInfo::stencilTestEnable;
	using VkPipelineDepthStencilStateCreateInfo::front;
	using VkPipelineDepthStencilStateCreateInfo::back;
	using VkPipelineDepthStencilStateCreateInfo::minDepthBounds;
	using VkPipelineDepthStencilStateCreateInfo::maxDepthBounds;

S_pipeline_depth_stencil_state_create_info():VkPipelineDepthStencilStateCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO,nullptr}{}
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
	:VkPipelineDepthStencilStateCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO
	,nullptr
	,flags_
	,depthTestEnable_
	,depthWriteEnable_
	,depthCompareOp_
	,depthBoundsTestEnable_
	,stencilTestEnable_
	,front_
	,back_
	,minDepthBounds_
	,maxDepthBounds_}
	{
	}

	S_pipeline_depth_stencil_state_create_info& operator=(const VkPipelineDepthStencilStateCreateInfo& rhs){static_cast<VkPipelineDepthStencilStateCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineDepthStencilStateCreateInfo*()const{return const_cast<VkPipelineDepthStencilStateCreateInfo*>(static_cast<const VkPipelineDepthStencilStateCreateInfo*>(this));}
};

/*	VkPipelineDiscardRectangleStateCreateInfoEXT
ex to: VkGraphicsPipelineCreateInfo
*/
struct	S_pipeline_discard_rectangle_state_create_info_EXT:VkPipelineDiscardRectangleStateCreateInfoEXT{
private:
	using VkPipelineDiscardRectangleStateCreateInfoEXT::sType;
	using VkPipelineDiscardRectangleStateCreateInfoEXT::pNext;
public:
	using VkPipelineDiscardRectangleStateCreateInfoEXT::flags;
	using VkPipelineDiscardRectangleStateCreateInfoEXT::discardRectangleMode;
	using VkPipelineDiscardRectangleStateCreateInfoEXT::discardRectangleCount;
	using VkPipelineDiscardRectangleStateCreateInfoEXT::pDiscardRectangles;

S_pipeline_discard_rectangle_state_create_info_EXT():VkPipelineDiscardRectangleStateCreateInfoEXT{VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT,nullptr}{}
S_pipeline_discard_rectangle_state_create_info_EXT(
	VkPipelineDiscardRectangleStateCreateFlagsEXT flags_,
	E_discard_rectangle_mode_EXT discardRectangleMode_,
	uint32_t discardRectangleCount_,
	const S_rect_2d * pDiscardRectangles_)
	:VkPipelineDiscardRectangleStateCreateInfoEXT{
	VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT
	,nullptr
	,flags_
	,discardRectangleMode_
	,discardRectangleCount_
	,pDiscardRectangles_}
	{
	}

friend S_graphics_pipeline_create_info;

	S_pipeline_discard_rectangle_state_create_info_EXT& operator=(const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs){static_cast<VkPipelineDiscardRectangleStateCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkPipelineDiscardRectangleStateCreateInfoEXT*()const{return const_cast<VkPipelineDiscardRectangleStateCreateInfoEXT*>(static_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT*>(this));}
};

/*	VkGraphicsPipelineCreateInfo
ex:
	VkPipelineDiscardRectangleStateCreateInfoEXT
*/

struct N_graphics_pipeline_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_graphics_pipeline_create_info& n_pipeline_discard_rectangle_state_create_info_EXT(S_pipeline_discard_rectangle_state_create_info_EXT const& next_);
};
struct	S_graphics_pipeline_create_info:VkGraphicsPipelineCreateInfo{
private:
	using VkGraphicsPipelineCreateInfo::sType;
	using VkGraphicsPipelineCreateInfo::pNext;
public:
	using VkGraphicsPipelineCreateInfo::flags;
	using VkGraphicsPipelineCreateInfo::stageCount;
	using VkGraphicsPipelineCreateInfo::pStages;
	using VkGraphicsPipelineCreateInfo::pVertexInputState;
	using VkGraphicsPipelineCreateInfo::pInputAssemblyState;
	using VkGraphicsPipelineCreateInfo::pTessellationState;
	using VkGraphicsPipelineCreateInfo::pViewportState;
	using VkGraphicsPipelineCreateInfo::pRasterizationState;
	using VkGraphicsPipelineCreateInfo::pMultisampleState;
	using VkGraphicsPipelineCreateInfo::pDepthStencilState;
	using VkGraphicsPipelineCreateInfo::pColorBlendState;
	using VkGraphicsPipelineCreateInfo::pDynamicState;
	using VkGraphicsPipelineCreateInfo::layout;
	using VkGraphicsPipelineCreateInfo::renderPass;
	using VkGraphicsPipelineCreateInfo::subpass;
	using VkGraphicsPipelineCreateInfo::basePipelineHandle;
	using VkGraphicsPipelineCreateInfo::basePipelineIndex;

S_graphics_pipeline_create_info():VkGraphicsPipelineCreateInfo{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,nullptr}{}
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
	:VkGraphicsPipelineCreateInfo{
	VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO
	,nullptr
	,flags_
	,stageCount_
	,pStages_
	,pVertexInputState_
	,pInputAssemblyState_
	,pTessellationState_
	,pViewportState_
	,pRasterizationState_
	,pMultisampleState_
	,pDepthStencilState_
	,pColorBlendState_
	,pDynamicState_
	,layout_
	,renderPass_
	,subpass_
	,basePipelineHandle_
	,basePipelineIndex_}
	{
	}

	S_graphics_pipeline_create_info& operator=(const VkGraphicsPipelineCreateInfo& rhs){static_cast<VkGraphicsPipelineCreateInfo&>(*this)=rhs; return *this;}
	operator VkGraphicsPipelineCreateInfo*()const{return const_cast<VkGraphicsPipelineCreateInfo*>(static_cast<const VkGraphicsPipelineCreateInfo*>(this));}

S_graphics_pipeline_create_info& n_pipeline_discard_rectangle_state_create_info_EXT(S_pipeline_discard_rectangle_state_create_info_EXT const& next_);
void set_pNext(N_graphics_pipeline_create_info n_){pNext = n_;}
};

/*	VkPipelineCacheCreateInfo
*/
struct	S_pipeline_cache_create_info:VkPipelineCacheCreateInfo{
private:
	using VkPipelineCacheCreateInfo::sType;
	using VkPipelineCacheCreateInfo::pNext;
public:
	using VkPipelineCacheCreateInfo::flags;
	using VkPipelineCacheCreateInfo::initialDataSize;
	using VkPipelineCacheCreateInfo::pInitialData;

S_pipeline_cache_create_info():VkPipelineCacheCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,nullptr}{}
S_pipeline_cache_create_info(
	VkPipelineCacheCreateFlags flags_,
	size_t initialDataSize_,
	const void * pInitialData_)
	:VkPipelineCacheCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO
	,nullptr
	,flags_
	,initialDataSize_
	,pInitialData_}
	{
	}

	S_pipeline_cache_create_info& operator=(const VkPipelineCacheCreateInfo& rhs){static_cast<VkPipelineCacheCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineCacheCreateInfo*()const{return const_cast<VkPipelineCacheCreateInfo*>(static_cast<const VkPipelineCacheCreateInfo*>(this));}
};

/*	VkPushConstantRange
*/
struct	S_push_constant_range:VkPushConstantRange{
	using VkPushConstantRange::stageFlags;
	using VkPushConstantRange::offset;
	using VkPushConstantRange::size;

	S_push_constant_range& operator=(const VkPushConstantRange& rhs){static_cast<VkPushConstantRange&>(*this)=rhs; return *this;}
	operator VkPushConstantRange*()const{return const_cast<VkPushConstantRange*>(static_cast<const VkPushConstantRange*>(this));}
};

/*	VkPipelineLayoutCreateInfo
*/
struct	S_pipeline_layout_create_info:VkPipelineLayoutCreateInfo{
private:
	using VkPipelineLayoutCreateInfo::sType;
	using VkPipelineLayoutCreateInfo::pNext;
public:
	using VkPipelineLayoutCreateInfo::flags;
	using VkPipelineLayoutCreateInfo::setLayoutCount;
	using VkPipelineLayoutCreateInfo::pSetLayouts;
	using VkPipelineLayoutCreateInfo::pushConstantRangeCount;
	using VkPipelineLayoutCreateInfo::pPushConstantRanges;

S_pipeline_layout_create_info():VkPipelineLayoutCreateInfo{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,nullptr}{}
S_pipeline_layout_create_info(
	VkPipelineLayoutCreateFlags flags_,
	uint32_t setLayoutCount_,
	const VkDescriptorSetLayout * pSetLayouts_,
	uint32_t pushConstantRangeCount_,
	const S_push_constant_range * pPushConstantRanges_)
	:VkPipelineLayoutCreateInfo{
	VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO
	,nullptr
	,flags_
	,setLayoutCount_
	,pSetLayouts_
	,pushConstantRangeCount_
	,pPushConstantRanges_}
	{
	}

	S_pipeline_layout_create_info& operator=(const VkPipelineLayoutCreateInfo& rhs){static_cast<VkPipelineLayoutCreateInfo&>(*this)=rhs; return *this;}
	operator VkPipelineLayoutCreateInfo*()const{return const_cast<VkPipelineLayoutCreateInfo*>(static_cast<const VkPipelineLayoutCreateInfo*>(this));}
};

/*	VkSamplerReductionModeCreateInfoEXT
ex to: VkSamplerCreateInfo
*/
struct	S_sampler_reduction_mode_create_info_EXT:VkSamplerReductionModeCreateInfoEXT{
private:
	using VkSamplerReductionModeCreateInfoEXT::sType;
	using VkSamplerReductionModeCreateInfoEXT::pNext;
public:
	using VkSamplerReductionModeCreateInfoEXT::reductionMode;

S_sampler_reduction_mode_create_info_EXT():VkSamplerReductionModeCreateInfoEXT{VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT,nullptr}{}
S_sampler_reduction_mode_create_info_EXT(
	E_sampler_reduction_mode_EXT reductionMode_)
	:VkSamplerReductionModeCreateInfoEXT{
	VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT
	,nullptr
	,reductionMode_}
	{
	}

friend S_sampler_create_info;

	S_sampler_reduction_mode_create_info_EXT& operator=(const VkSamplerReductionModeCreateInfoEXT& rhs){static_cast<VkSamplerReductionModeCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkSamplerReductionModeCreateInfoEXT*()const{return const_cast<VkSamplerReductionModeCreateInfoEXT*>(static_cast<const VkSamplerReductionModeCreateInfoEXT*>(this));}
};

/*	VkSamplerCreateInfo
ex:
	VkSamplerYcbcrConversionInfo
	VkSamplerReductionModeCreateInfoEXT
*/

struct N_sampler_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_sampler_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
N_sampler_create_info& n_sampler_reduction_mode_create_info_EXT(S_sampler_reduction_mode_create_info_EXT const& next_);
};
struct	S_sampler_create_info:VkSamplerCreateInfo{
private:
	using VkSamplerCreateInfo::sType;
	using VkSamplerCreateInfo::pNext;
public:
	using VkSamplerCreateInfo::flags;
	using VkSamplerCreateInfo::magFilter;
	using VkSamplerCreateInfo::minFilter;
	using VkSamplerCreateInfo::mipmapMode;
	using VkSamplerCreateInfo::addressModeU;
	using VkSamplerCreateInfo::addressModeV;
	using VkSamplerCreateInfo::addressModeW;
	using VkSamplerCreateInfo::mipLodBias;
	using VkSamplerCreateInfo::anisotropyEnable;
	using VkSamplerCreateInfo::maxAnisotropy;
	using VkSamplerCreateInfo::compareEnable;
	using VkSamplerCreateInfo::compareOp;
	using VkSamplerCreateInfo::minLod;
	using VkSamplerCreateInfo::maxLod;
	using VkSamplerCreateInfo::borderColor;
	using VkSamplerCreateInfo::unnormalizedCoordinates;

S_sampler_create_info():VkSamplerCreateInfo{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,nullptr}{}
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
	:VkSamplerCreateInfo{
	VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO
	,nullptr
	,flags_
	,magFilter_
	,minFilter_
	,mipmapMode_
	,addressModeU_
	,addressModeV_
	,addressModeW_
	,mipLodBias_
	,anisotropyEnable_
	,maxAnisotropy_
	,compareEnable_
	,compareOp_
	,minLod_
	,maxLod_
	,borderColor_
	,unnormalizedCoordinates_}
	{
	}

	S_sampler_create_info& operator=(const VkSamplerCreateInfo& rhs){static_cast<VkSamplerCreateInfo&>(*this)=rhs; return *this;}
	operator VkSamplerCreateInfo*()const{return const_cast<VkSamplerCreateInfo*>(static_cast<const VkSamplerCreateInfo*>(this));}

S_sampler_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
S_sampler_create_info& n_sampler_reduction_mode_create_info_EXT(S_sampler_reduction_mode_create_info_EXT const& next_);
void set_pNext(N_sampler_create_info n_){pNext = n_;}
};

/*	VkCommandPoolCreateInfo
*/
struct	S_command_pool_create_info:VkCommandPoolCreateInfo{
private:
	using VkCommandPoolCreateInfo::sType;
	using VkCommandPoolCreateInfo::pNext;
public:
	using VkCommandPoolCreateInfo::flags;
	using VkCommandPoolCreateInfo::queueFamilyIndex;

S_command_pool_create_info():VkCommandPoolCreateInfo{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,nullptr}{}
S_command_pool_create_info(
	F_command_pool_create flags_,
	uint32_t queueFamilyIndex_)
	:VkCommandPoolCreateInfo{
	VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO
	,nullptr
	,flags_
	,queueFamilyIndex_}
	{
	}

	S_command_pool_create_info& operator=(const VkCommandPoolCreateInfo& rhs){static_cast<VkCommandPoolCreateInfo&>(*this)=rhs; return *this;}
	operator VkCommandPoolCreateInfo*()const{return const_cast<VkCommandPoolCreateInfo*>(static_cast<const VkCommandPoolCreateInfo*>(this));}
};

/*	VkCommandBufferAllocateInfo
*/
struct	S_command_buffer_allocate_info:VkCommandBufferAllocateInfo{
private:
	using VkCommandBufferAllocateInfo::sType;
	using VkCommandBufferAllocateInfo::pNext;
public:
	using VkCommandBufferAllocateInfo::commandPool;
	using VkCommandBufferAllocateInfo::level;
	using VkCommandBufferAllocateInfo::commandBufferCount;

S_command_buffer_allocate_info():VkCommandBufferAllocateInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,nullptr}{}
S_command_buffer_allocate_info(
	VkCommandPool commandPool_,
	E_command_buffer_level level_,
	uint32_t commandBufferCount_)
	:VkCommandBufferAllocateInfo{
	VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO
	,nullptr
	,commandPool_
	,level_
	,commandBufferCount_}
	{
	}

	S_command_buffer_allocate_info& operator=(const VkCommandBufferAllocateInfo& rhs){static_cast<VkCommandBufferAllocateInfo&>(*this)=rhs; return *this;}
	operator VkCommandBufferAllocateInfo*()const{return const_cast<VkCommandBufferAllocateInfo*>(static_cast<const VkCommandBufferAllocateInfo*>(this));}
};

/*	VkCommandBufferInheritanceConditionalRenderingInfoEXT
ex to: VkCommandBufferInheritanceInfo
*/
struct	S_command_buffer_inheritance_conditional_rendering_info_EXT:VkCommandBufferInheritanceConditionalRenderingInfoEXT{
private:
	using VkCommandBufferInheritanceConditionalRenderingInfoEXT::sType;
	using VkCommandBufferInheritanceConditionalRenderingInfoEXT::pNext;
public:
	using VkCommandBufferInheritanceConditionalRenderingInfoEXT::conditionalRenderingEnable;

S_command_buffer_inheritance_conditional_rendering_info_EXT():VkCommandBufferInheritanceConditionalRenderingInfoEXT{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT,nullptr}{}
S_command_buffer_inheritance_conditional_rendering_info_EXT(
	VkBool32 conditionalRenderingEnable_)
	:VkCommandBufferInheritanceConditionalRenderingInfoEXT{
	VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT
	,nullptr
	,conditionalRenderingEnable_}
	{
	}

friend S_command_buffer_inheritance_info;

	S_command_buffer_inheritance_conditional_rendering_info_EXT& operator=(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs){static_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT&>(*this)=rhs; return *this;}
	operator VkCommandBufferInheritanceConditionalRenderingInfoEXT*()const{return const_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT*>(static_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT*>(this));}
};

/*	VkCommandBufferInheritanceInfo
ex:
	VkCommandBufferInheritanceConditionalRenderingInfoEXT
*/

struct N_command_buffer_inheritance_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_command_buffer_inheritance_info& n_command_buffer_inheritance_conditional_rendering_info_EXT(S_command_buffer_inheritance_conditional_rendering_info_EXT const& next_);
};
struct	S_command_buffer_inheritance_info:VkCommandBufferInheritanceInfo{
private:
	using VkCommandBufferInheritanceInfo::sType;
	using VkCommandBufferInheritanceInfo::pNext;
public:
	using VkCommandBufferInheritanceInfo::renderPass;
	using VkCommandBufferInheritanceInfo::subpass;
	using VkCommandBufferInheritanceInfo::framebuffer;
	using VkCommandBufferInheritanceInfo::occlusionQueryEnable;
	using VkCommandBufferInheritanceInfo::queryFlags;
	using VkCommandBufferInheritanceInfo::pipelineStatistics;

S_command_buffer_inheritance_info():VkCommandBufferInheritanceInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO,nullptr}{}
S_command_buffer_inheritance_info(
	VkRenderPass renderPass_,
	uint32_t subpass_,
	VkFramebuffer framebuffer_,
	VkBool32 occlusionQueryEnable_,
	F_query_control queryFlags_,
	F_query_pipeline_statistic pipelineStatistics_)
	:VkCommandBufferInheritanceInfo{
	VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO
	,nullptr
	,renderPass_
	,subpass_
	,framebuffer_
	,occlusionQueryEnable_
	,queryFlags_
	,pipelineStatistics_}
	{
	}

	S_command_buffer_inheritance_info& operator=(const VkCommandBufferInheritanceInfo& rhs){static_cast<VkCommandBufferInheritanceInfo&>(*this)=rhs; return *this;}
	operator VkCommandBufferInheritanceInfo*()const{return const_cast<VkCommandBufferInheritanceInfo*>(static_cast<const VkCommandBufferInheritanceInfo*>(this));}

S_command_buffer_inheritance_info& n_command_buffer_inheritance_conditional_rendering_info_EXT(S_command_buffer_inheritance_conditional_rendering_info_EXT const& next_);
void set_pNext(N_command_buffer_inheritance_info n_){pNext = n_;}
};

/*	VkDeviceGroupCommandBufferBeginInfo
ex to: VkCommandBufferBeginInfo
*/
struct	S_device_group_command_buffer_begin_info:VkDeviceGroupCommandBufferBeginInfo{
private:
	using VkDeviceGroupCommandBufferBeginInfo::sType;
	using VkDeviceGroupCommandBufferBeginInfo::pNext;
public:
	using VkDeviceGroupCommandBufferBeginInfo::deviceMask;

S_device_group_command_buffer_begin_info():VkDeviceGroupCommandBufferBeginInfo{VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO,nullptr}{}
S_device_group_command_buffer_begin_info(
	uint32_t deviceMask_)
	:VkDeviceGroupCommandBufferBeginInfo{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO
	,nullptr
	,deviceMask_}
	{
	}

friend S_command_buffer_begin_info;

	S_device_group_command_buffer_begin_info& operator=(const VkDeviceGroupCommandBufferBeginInfo& rhs){static_cast<VkDeviceGroupCommandBufferBeginInfo&>(*this)=rhs; return *this;}
	operator VkDeviceGroupCommandBufferBeginInfo*()const{return const_cast<VkDeviceGroupCommandBufferBeginInfo*>(static_cast<const VkDeviceGroupCommandBufferBeginInfo*>(this));}
};

/*	VkCommandBufferBeginInfo
ex:
	VkDeviceGroupCommandBufferBeginInfo
*/

struct N_command_buffer_begin_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_command_buffer_begin_info& n_device_group_command_buffer_begin_info(S_device_group_command_buffer_begin_info const& next_);
};
struct	S_command_buffer_begin_info:VkCommandBufferBeginInfo{
private:
	using VkCommandBufferBeginInfo::sType;
	using VkCommandBufferBeginInfo::pNext;
public:
	using VkCommandBufferBeginInfo::flags;
	using VkCommandBufferBeginInfo::pInheritanceInfo;

S_command_buffer_begin_info():VkCommandBufferBeginInfo{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,nullptr}{}
S_command_buffer_begin_info(
	F_command_buffer_usage flags_,
	const S_command_buffer_inheritance_info * pInheritanceInfo_)
	:VkCommandBufferBeginInfo{
	VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO
	,nullptr
	,flags_
	,pInheritanceInfo_}
	{
	}

	S_command_buffer_begin_info& operator=(const VkCommandBufferBeginInfo& rhs){static_cast<VkCommandBufferBeginInfo&>(*this)=rhs; return *this;}
	operator VkCommandBufferBeginInfo*()const{return const_cast<VkCommandBufferBeginInfo*>(static_cast<const VkCommandBufferBeginInfo*>(this));}

S_command_buffer_begin_info& n_device_group_command_buffer_begin_info(S_device_group_command_buffer_begin_info const& next_);
void set_pNext(N_command_buffer_begin_info n_){pNext = n_;}
};

/*	VkDeviceGroupRenderPassBeginInfo
ex to: VkRenderPassBeginInfo
*/
struct	S_device_group_render_pass_begin_info:VkDeviceGroupRenderPassBeginInfo{
private:
	using VkDeviceGroupRenderPassBeginInfo::sType;
	using VkDeviceGroupRenderPassBeginInfo::pNext;
public:
	using VkDeviceGroupRenderPassBeginInfo::deviceMask;
	using VkDeviceGroupRenderPassBeginInfo::deviceRenderAreaCount;
	using VkDeviceGroupRenderPassBeginInfo::pDeviceRenderAreas;

S_device_group_render_pass_begin_info():VkDeviceGroupRenderPassBeginInfo{VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO,nullptr}{}
S_device_group_render_pass_begin_info(
	uint32_t deviceMask_,
	uint32_t deviceRenderAreaCount_,
	const S_rect_2d * pDeviceRenderAreas_)
	:VkDeviceGroupRenderPassBeginInfo{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO
	,nullptr
	,deviceMask_
	,deviceRenderAreaCount_
	,pDeviceRenderAreas_}
	{
	}

friend S_render_pass_begin_info;

	S_device_group_render_pass_begin_info& operator=(const VkDeviceGroupRenderPassBeginInfo& rhs){static_cast<VkDeviceGroupRenderPassBeginInfo&>(*this)=rhs; return *this;}
	operator VkDeviceGroupRenderPassBeginInfo*()const{return const_cast<VkDeviceGroupRenderPassBeginInfo*>(static_cast<const VkDeviceGroupRenderPassBeginInfo*>(this));}
};

/*	VkAttachmentSampleLocationsEXT
*/
struct	S_attachment_sample_locations_EXT:VkAttachmentSampleLocationsEXT{
	using VkAttachmentSampleLocationsEXT::attachmentIndex;
	using VkAttachmentSampleLocationsEXT::sampleLocationsInfo;

	S_attachment_sample_locations_EXT& operator=(const VkAttachmentSampleLocationsEXT& rhs){static_cast<VkAttachmentSampleLocationsEXT&>(*this)=rhs; return *this;}
	operator VkAttachmentSampleLocationsEXT*()const{return const_cast<VkAttachmentSampleLocationsEXT*>(static_cast<const VkAttachmentSampleLocationsEXT*>(this));}
};

/*	VkSubpassSampleLocationsEXT
*/
struct	S_subpass_sample_locations_EXT:VkSubpassSampleLocationsEXT{
	using VkSubpassSampleLocationsEXT::subpassIndex;
	using VkSubpassSampleLocationsEXT::sampleLocationsInfo;

	S_subpass_sample_locations_EXT& operator=(const VkSubpassSampleLocationsEXT& rhs){static_cast<VkSubpassSampleLocationsEXT&>(*this)=rhs; return *this;}
	operator VkSubpassSampleLocationsEXT*()const{return const_cast<VkSubpassSampleLocationsEXT*>(static_cast<const VkSubpassSampleLocationsEXT*>(this));}
};

/*	VkRenderPassSampleLocationsBeginInfoEXT
ex to: VkRenderPassBeginInfo
*/
struct	S_render_pass_sample_locations_begin_info_EXT:VkRenderPassSampleLocationsBeginInfoEXT{
private:
	using VkRenderPassSampleLocationsBeginInfoEXT::sType;
	using VkRenderPassSampleLocationsBeginInfoEXT::pNext;
public:
	using VkRenderPassSampleLocationsBeginInfoEXT::attachmentInitialSampleLocationsCount;
	using VkRenderPassSampleLocationsBeginInfoEXT::pAttachmentInitialSampleLocations;
	using VkRenderPassSampleLocationsBeginInfoEXT::postSubpassSampleLocationsCount;
	using VkRenderPassSampleLocationsBeginInfoEXT::pPostSubpassSampleLocations;

S_render_pass_sample_locations_begin_info_EXT():VkRenderPassSampleLocationsBeginInfoEXT{VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT,nullptr}{}
S_render_pass_sample_locations_begin_info_EXT(
	uint32_t attachmentInitialSampleLocationsCount_,
	const S_attachment_sample_locations_EXT * pAttachmentInitialSampleLocations_,
	uint32_t postSubpassSampleLocationsCount_,
	const S_subpass_sample_locations_EXT * pPostSubpassSampleLocations_)
	:VkRenderPassSampleLocationsBeginInfoEXT{
	VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT
	,nullptr
	,attachmentInitialSampleLocationsCount_
	,pAttachmentInitialSampleLocations_
	,postSubpassSampleLocationsCount_
	,pPostSubpassSampleLocations_}
	{
	}

friend S_render_pass_begin_info;

	S_render_pass_sample_locations_begin_info_EXT& operator=(const VkRenderPassSampleLocationsBeginInfoEXT& rhs){static_cast<VkRenderPassSampleLocationsBeginInfoEXT&>(*this)=rhs; return *this;}
	operator VkRenderPassSampleLocationsBeginInfoEXT*()const{return const_cast<VkRenderPassSampleLocationsBeginInfoEXT*>(static_cast<const VkRenderPassSampleLocationsBeginInfoEXT*>(this));}
};

/*	VkRenderPassBeginInfo
ex:
	VkDeviceGroupRenderPassBeginInfo
	VkRenderPassSampleLocationsBeginInfoEXT
*/

struct N_render_pass_begin_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_render_pass_begin_info& n_device_group_render_pass_begin_info(S_device_group_render_pass_begin_info const& next_);
N_render_pass_begin_info& n_render_pass_sample_locations_begin_info_EXT(S_render_pass_sample_locations_begin_info_EXT const& next_);
};
struct	S_render_pass_begin_info:VkRenderPassBeginInfo{
private:
	using VkRenderPassBeginInfo::sType;
	using VkRenderPassBeginInfo::pNext;
public:
	using VkRenderPassBeginInfo::renderPass;
	using VkRenderPassBeginInfo::framebuffer;
	using VkRenderPassBeginInfo::renderArea;
	using VkRenderPassBeginInfo::clearValueCount;
	using VkRenderPassBeginInfo::pClearValues;

S_render_pass_begin_info():VkRenderPassBeginInfo{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,nullptr}{}
S_render_pass_begin_info(
	VkRenderPass renderPass_,
	VkFramebuffer framebuffer_,
	S_rect_2d renderArea_,
	uint32_t clearValueCount_,
	const VkClearValue * pClearValues_)
	:VkRenderPassBeginInfo{
	VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO
	,nullptr
	,renderPass_
	,framebuffer_
	,renderArea_
	,clearValueCount_
	,pClearValues_}
	{
	}

	S_render_pass_begin_info& operator=(const VkRenderPassBeginInfo& rhs){static_cast<VkRenderPassBeginInfo&>(*this)=rhs; return *this;}
	operator VkRenderPassBeginInfo*()const{return const_cast<VkRenderPassBeginInfo*>(static_cast<const VkRenderPassBeginInfo*>(this));}

S_render_pass_begin_info& n_device_group_render_pass_begin_info(S_device_group_render_pass_begin_info const& next_);
S_render_pass_begin_info& n_render_pass_sample_locations_begin_info_EXT(S_render_pass_sample_locations_begin_info_EXT const& next_);
void set_pNext(N_render_pass_begin_info n_){pNext = n_;}
};

/*	VkClearDepthStencilValue
*/
struct	S_clear_depth_stencil_value:VkClearDepthStencilValue{
	using VkClearDepthStencilValue::depth;
	using VkClearDepthStencilValue::stencil;

	S_clear_depth_stencil_value& operator=(const VkClearDepthStencilValue& rhs){static_cast<VkClearDepthStencilValue&>(*this)=rhs; return *this;}
	operator VkClearDepthStencilValue*()const{return const_cast<VkClearDepthStencilValue*>(static_cast<const VkClearDepthStencilValue*>(this));}
};

/*	VkClearAttachment
*/
struct	S_clear_attachment:VkClearAttachment{
	using VkClearAttachment::aspectMask;
	using VkClearAttachment::colorAttachment;
	using VkClearAttachment::clearValue;

	S_clear_attachment& operator=(const VkClearAttachment& rhs){static_cast<VkClearAttachment&>(*this)=rhs; return *this;}
	operator VkClearAttachment*()const{return const_cast<VkClearAttachment*>(static_cast<const VkClearAttachment*>(this));}
};

/*	VkAttachmentDescription
*/
struct	S_attachment_description:VkAttachmentDescription{
	using VkAttachmentDescription::flags;
	using VkAttachmentDescription::format;
	using VkAttachmentDescription::samples;
	using VkAttachmentDescription::loadOp;
	using VkAttachmentDescription::storeOp;
	using VkAttachmentDescription::stencilLoadOp;
	using VkAttachmentDescription::stencilStoreOp;
	using VkAttachmentDescription::initialLayout;
	using VkAttachmentDescription::finalLayout;

	S_attachment_description& operator=(const VkAttachmentDescription& rhs){static_cast<VkAttachmentDescription&>(*this)=rhs; return *this;}
	operator VkAttachmentDescription*()const{return const_cast<VkAttachmentDescription*>(static_cast<const VkAttachmentDescription*>(this));}
};

/*	VkAttachmentReference
*/
struct	S_attachment_reference:VkAttachmentReference{
	using VkAttachmentReference::attachment;
	using VkAttachmentReference::layout;

	S_attachment_reference& operator=(const VkAttachmentReference& rhs){static_cast<VkAttachmentReference&>(*this)=rhs; return *this;}
	operator VkAttachmentReference*()const{return const_cast<VkAttachmentReference*>(static_cast<const VkAttachmentReference*>(this));}
};

/*	VkSubpassDescription
*/
struct	S_subpass_description:VkSubpassDescription{
	using VkSubpassDescription::flags;
	using VkSubpassDescription::pipelineBindPoint;
	using VkSubpassDescription::inputAttachmentCount;
	using VkSubpassDescription::pInputAttachments;
	using VkSubpassDescription::colorAttachmentCount;
	using VkSubpassDescription::pColorAttachments;
	using VkSubpassDescription::pResolveAttachments;
	using VkSubpassDescription::pDepthStencilAttachment;
	using VkSubpassDescription::preserveAttachmentCount;
	using VkSubpassDescription::pPreserveAttachments;

	S_subpass_description& operator=(const VkSubpassDescription& rhs){static_cast<VkSubpassDescription&>(*this)=rhs; return *this;}
	operator VkSubpassDescription*()const{return const_cast<VkSubpassDescription*>(static_cast<const VkSubpassDescription*>(this));}
};

/*	VkSubpassDependency
*/
struct	S_subpass_dependency:VkSubpassDependency{
	using VkSubpassDependency::srcSubpass;
	using VkSubpassDependency::dstSubpass;
	using VkSubpassDependency::srcStageMask;
	using VkSubpassDependency::dstStageMask;
	using VkSubpassDependency::srcAccessMask;
	using VkSubpassDependency::dstAccessMask;
	using VkSubpassDependency::dependencyFlags;

	S_subpass_dependency& operator=(const VkSubpassDependency& rhs){static_cast<VkSubpassDependency&>(*this)=rhs; return *this;}
	operator VkSubpassDependency*()const{return const_cast<VkSubpassDependency*>(static_cast<const VkSubpassDependency*>(this));}
};

/*	VkRenderPassMultiviewCreateInfo
ex to: VkRenderPassCreateInfo
*/
struct	S_render_pass_multiview_create_info:VkRenderPassMultiviewCreateInfo{
private:
	using VkRenderPassMultiviewCreateInfo::sType;
	using VkRenderPassMultiviewCreateInfo::pNext;
public:
	using VkRenderPassMultiviewCreateInfo::subpassCount;
	using VkRenderPassMultiviewCreateInfo::pViewMasks;
	using VkRenderPassMultiviewCreateInfo::dependencyCount;
	using VkRenderPassMultiviewCreateInfo::pViewOffsets;
	using VkRenderPassMultiviewCreateInfo::correlationMaskCount;
	using VkRenderPassMultiviewCreateInfo::pCorrelationMasks;

S_render_pass_multiview_create_info():VkRenderPassMultiviewCreateInfo{VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO,nullptr}{}
S_render_pass_multiview_create_info(
	uint32_t subpassCount_,
	const uint32_t * pViewMasks_,
	uint32_t dependencyCount_,
	const int32_t * pViewOffsets_,
	uint32_t correlationMaskCount_,
	const uint32_t * pCorrelationMasks_)
	:VkRenderPassMultiviewCreateInfo{
	VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO
	,nullptr
	,subpassCount_
	,pViewMasks_
	,dependencyCount_
	,pViewOffsets_
	,correlationMaskCount_
	,pCorrelationMasks_}
	{
	}

friend S_render_pass_create_info;

	S_render_pass_multiview_create_info& operator=(const VkRenderPassMultiviewCreateInfo& rhs){static_cast<VkRenderPassMultiviewCreateInfo&>(*this)=rhs; return *this;}
	operator VkRenderPassMultiviewCreateInfo*()const{return const_cast<VkRenderPassMultiviewCreateInfo*>(static_cast<const VkRenderPassMultiviewCreateInfo*>(this));}
};

/*	VkInputAttachmentAspectReference
*/
struct	S_input_attachment_aspect_reference:VkInputAttachmentAspectReference{
	using VkInputAttachmentAspectReference::subpass;
	using VkInputAttachmentAspectReference::inputAttachmentIndex;
	using VkInputAttachmentAspectReference::aspectMask;

	S_input_attachment_aspect_reference& operator=(const VkInputAttachmentAspectReference& rhs){static_cast<VkInputAttachmentAspectReference&>(*this)=rhs; return *this;}
	operator VkInputAttachmentAspectReference*()const{return const_cast<VkInputAttachmentAspectReference*>(static_cast<const VkInputAttachmentAspectReference*>(this));}
};

/*	VkRenderPassInputAttachmentAspectCreateInfo
ex to: VkRenderPassCreateInfo
*/
struct	S_render_pass_input_attachment_aspect_create_info:VkRenderPassInputAttachmentAspectCreateInfo{
private:
	using VkRenderPassInputAttachmentAspectCreateInfo::sType;
	using VkRenderPassInputAttachmentAspectCreateInfo::pNext;
public:
	using VkRenderPassInputAttachmentAspectCreateInfo::aspectReferenceCount;
	using VkRenderPassInputAttachmentAspectCreateInfo::pAspectReferences;

S_render_pass_input_attachment_aspect_create_info():VkRenderPassInputAttachmentAspectCreateInfo{VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO,nullptr}{}
S_render_pass_input_attachment_aspect_create_info(
	uint32_t aspectReferenceCount_,
	const S_input_attachment_aspect_reference * pAspectReferences_)
	:VkRenderPassInputAttachmentAspectCreateInfo{
	VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO
	,nullptr
	,aspectReferenceCount_
	,pAspectReferences_}
	{
	}

friend S_render_pass_create_info;

	S_render_pass_input_attachment_aspect_create_info& operator=(const VkRenderPassInputAttachmentAspectCreateInfo& rhs){static_cast<VkRenderPassInputAttachmentAspectCreateInfo&>(*this)=rhs; return *this;}
	operator VkRenderPassInputAttachmentAspectCreateInfo*()const{return const_cast<VkRenderPassInputAttachmentAspectCreateInfo*>(static_cast<const VkRenderPassInputAttachmentAspectCreateInfo*>(this));}
};

/*	VkRenderPassCreateInfo
ex:
	VkRenderPassMultiviewCreateInfo
	VkRenderPassInputAttachmentAspectCreateInfo
*/

struct N_render_pass_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_render_pass_create_info& n_render_pass_multiview_create_info(S_render_pass_multiview_create_info const& next_);
N_render_pass_create_info& n_render_pass_input_attachment_aspect_create_info(S_render_pass_input_attachment_aspect_create_info const& next_);
};
struct	S_render_pass_create_info:VkRenderPassCreateInfo{
private:
	using VkRenderPassCreateInfo::sType;
	using VkRenderPassCreateInfo::pNext;
public:
	using VkRenderPassCreateInfo::flags;
	using VkRenderPassCreateInfo::attachmentCount;
	using VkRenderPassCreateInfo::pAttachments;
	using VkRenderPassCreateInfo::subpassCount;
	using VkRenderPassCreateInfo::pSubpasses;
	using VkRenderPassCreateInfo::dependencyCount;
	using VkRenderPassCreateInfo::pDependencies;

S_render_pass_create_info():VkRenderPassCreateInfo{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,nullptr}{}
S_render_pass_create_info(
	VkRenderPassCreateFlags flags_,
	uint32_t attachmentCount_,
	const S_attachment_description * pAttachments_,
	uint32_t subpassCount_,
	const S_subpass_description * pSubpasses_,
	uint32_t dependencyCount_,
	const S_subpass_dependency * pDependencies_)
	:VkRenderPassCreateInfo{
	VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO
	,nullptr
	,flags_
	,attachmentCount_
	,pAttachments_
	,subpassCount_
	,pSubpasses_
	,dependencyCount_
	,pDependencies_}
	{
	}

	S_render_pass_create_info& operator=(const VkRenderPassCreateInfo& rhs){static_cast<VkRenderPassCreateInfo&>(*this)=rhs; return *this;}
	operator VkRenderPassCreateInfo*()const{return const_cast<VkRenderPassCreateInfo*>(static_cast<const VkRenderPassCreateInfo*>(this));}

S_render_pass_create_info& n_render_pass_multiview_create_info(S_render_pass_multiview_create_info const& next_);
S_render_pass_create_info& n_render_pass_input_attachment_aspect_create_info(S_render_pass_input_attachment_aspect_create_info const& next_);
void set_pNext(N_render_pass_create_info n_){pNext = n_;}
};

/*	VkEventCreateInfo
*/
struct	S_event_create_info:VkEventCreateInfo{
private:
	using VkEventCreateInfo::sType;
	using VkEventCreateInfo::pNext;
public:
	using VkEventCreateInfo::flags;

S_event_create_info():VkEventCreateInfo{VK_STRUCTURE_TYPE_EVENT_CREATE_INFO,nullptr}{}
S_event_create_info(
	VkEventCreateFlags flags_)
	:VkEventCreateInfo{
	VK_STRUCTURE_TYPE_EVENT_CREATE_INFO
	,nullptr
	,flags_}
	{
	}

	S_event_create_info& operator=(const VkEventCreateInfo& rhs){static_cast<VkEventCreateInfo&>(*this)=rhs; return *this;}
	operator VkEventCreateInfo*()const{return const_cast<VkEventCreateInfo*>(static_cast<const VkEventCreateInfo*>(this));}
};

/*	VkExportFenceCreateInfo
ex to: VkFenceCreateInfo
*/
struct	S_export_fence_create_info:VkExportFenceCreateInfo{
private:
	using VkExportFenceCreateInfo::sType;
	using VkExportFenceCreateInfo::pNext;
public:
	using VkExportFenceCreateInfo::handleTypes;

S_export_fence_create_info():VkExportFenceCreateInfo{VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO,nullptr}{}
S_export_fence_create_info(
	F_external_fence_handle_type handleTypes_)
	:VkExportFenceCreateInfo{
	VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO
	,nullptr
	,handleTypes_}
	{
	}

friend S_fence_create_info;

	S_export_fence_create_info& operator=(const VkExportFenceCreateInfo& rhs){static_cast<VkExportFenceCreateInfo&>(*this)=rhs; return *this;}
	operator VkExportFenceCreateInfo*()const{return const_cast<VkExportFenceCreateInfo*>(static_cast<const VkExportFenceCreateInfo*>(this));}
};

/*	VkExportFenceWin32HandleInfoKHR
ex to: VkFenceCreateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_export_fence_win32_handle_info_KHR:VkExportFenceWin32HandleInfoKHR{
private:
	using VkExportFenceWin32HandleInfoKHR::sType;
	using VkExportFenceWin32HandleInfoKHR::pNext;
public:
	using VkExportFenceWin32HandleInfoKHR::pAttributes;
	using VkExportFenceWin32HandleInfoKHR::dwAccess;
	using VkExportFenceWin32HandleInfoKHR::name;

S_export_fence_win32_handle_info_KHR():VkExportFenceWin32HandleInfoKHR{VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_export_fence_win32_handle_info_KHR(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_,
	LPCWSTR name_)
	:VkExportFenceWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR
	,nullptr
	,pAttributes_
	,dwAccess_
	,name_}
	{
	}

friend S_fence_create_info;

	S_export_fence_win32_handle_info_KHR& operator=(const VkExportFenceWin32HandleInfoKHR& rhs){static_cast<VkExportFenceWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkExportFenceWin32HandleInfoKHR*()const{return const_cast<VkExportFenceWin32HandleInfoKHR*>(static_cast<const VkExportFenceWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkFenceCreateInfo
ex:
	VkExportFenceCreateInfo
	VkExportFenceWin32HandleInfoKHR
*/

struct N_fence_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_fence_create_info& n_export_fence_create_info(S_export_fence_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_fence_create_info& n_export_fence_win32_handle_info_KHR(S_export_fence_win32_handle_info_KHR const& next_);
#endif
};
struct	S_fence_create_info:VkFenceCreateInfo{
private:
	using VkFenceCreateInfo::sType;
	using VkFenceCreateInfo::pNext;
public:
	using VkFenceCreateInfo::flags;

S_fence_create_info():VkFenceCreateInfo{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,nullptr}{}
S_fence_create_info(
	F_fence_create flags_)
	:VkFenceCreateInfo{
	VK_STRUCTURE_TYPE_FENCE_CREATE_INFO
	,nullptr
	,flags_}
	{
	}

	S_fence_create_info& operator=(const VkFenceCreateInfo& rhs){static_cast<VkFenceCreateInfo&>(*this)=rhs; return *this;}
	operator VkFenceCreateInfo*()const{return const_cast<VkFenceCreateInfo*>(static_cast<const VkFenceCreateInfo*>(this));}

S_fence_create_info& n_export_fence_create_info(S_export_fence_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_fence_create_info& n_export_fence_win32_handle_info_KHR(S_export_fence_win32_handle_info_KHR const& next_);
#endif
void set_pNext(N_fence_create_info n_){pNext = n_;}
};

/*	VkExportSemaphoreCreateInfo
ex to: VkSemaphoreCreateInfo
*/
struct	S_export_semaphore_create_info:VkExportSemaphoreCreateInfo{
private:
	using VkExportSemaphoreCreateInfo::sType;
	using VkExportSemaphoreCreateInfo::pNext;
public:
	using VkExportSemaphoreCreateInfo::handleTypes;

S_export_semaphore_create_info():VkExportSemaphoreCreateInfo{VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO,nullptr}{}
S_export_semaphore_create_info(
	F_external_semaphore_handle_type handleTypes_)
	:VkExportSemaphoreCreateInfo{
	VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO
	,nullptr
	,handleTypes_}
	{
	}

friend S_semaphore_create_info;

	S_export_semaphore_create_info& operator=(const VkExportSemaphoreCreateInfo& rhs){static_cast<VkExportSemaphoreCreateInfo&>(*this)=rhs; return *this;}
	operator VkExportSemaphoreCreateInfo*()const{return const_cast<VkExportSemaphoreCreateInfo*>(static_cast<const VkExportSemaphoreCreateInfo*>(this));}
};

/*	VkExportSemaphoreWin32HandleInfoKHR
ex to: VkSemaphoreCreateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_export_semaphore_win32_handle_info_KHR:VkExportSemaphoreWin32HandleInfoKHR{
private:
	using VkExportSemaphoreWin32HandleInfoKHR::sType;
	using VkExportSemaphoreWin32HandleInfoKHR::pNext;
public:
	using VkExportSemaphoreWin32HandleInfoKHR::pAttributes;
	using VkExportSemaphoreWin32HandleInfoKHR::dwAccess;
	using VkExportSemaphoreWin32HandleInfoKHR::name;

S_export_semaphore_win32_handle_info_KHR():VkExportSemaphoreWin32HandleInfoKHR{VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_export_semaphore_win32_handle_info_KHR(
	const SECURITY_ATTRIBUTES * pAttributes_,
	DWORD dwAccess_,
	LPCWSTR name_)
	:VkExportSemaphoreWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR
	,nullptr
	,pAttributes_
	,dwAccess_
	,name_}
	{
	}

friend S_semaphore_create_info;

	S_export_semaphore_win32_handle_info_KHR& operator=(const VkExportSemaphoreWin32HandleInfoKHR& rhs){static_cast<VkExportSemaphoreWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkExportSemaphoreWin32HandleInfoKHR*()const{return const_cast<VkExportSemaphoreWin32HandleInfoKHR*>(static_cast<const VkExportSemaphoreWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkSemaphoreCreateInfo
ex:
	VkExportSemaphoreCreateInfo
	VkExportSemaphoreWin32HandleInfoKHR
*/

struct N_semaphore_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_semaphore_create_info& n_export_semaphore_create_info(S_export_semaphore_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
N_semaphore_create_info& n_export_semaphore_win32_handle_info_KHR(S_export_semaphore_win32_handle_info_KHR const& next_);
#endif
};
struct	S_semaphore_create_info:VkSemaphoreCreateInfo{
private:
	using VkSemaphoreCreateInfo::sType;
	using VkSemaphoreCreateInfo::pNext;
public:
	using VkSemaphoreCreateInfo::flags;

S_semaphore_create_info():VkSemaphoreCreateInfo{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO,nullptr}{}
S_semaphore_create_info(
	VkSemaphoreCreateFlags flags_)
	:VkSemaphoreCreateInfo{
	VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO
	,nullptr
	,flags_}
	{
	}

	S_semaphore_create_info& operator=(const VkSemaphoreCreateInfo& rhs){static_cast<VkSemaphoreCreateInfo&>(*this)=rhs; return *this;}
	operator VkSemaphoreCreateInfo*()const{return const_cast<VkSemaphoreCreateInfo*>(static_cast<const VkSemaphoreCreateInfo*>(this));}

S_semaphore_create_info& n_export_semaphore_create_info(S_export_semaphore_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_semaphore_create_info& n_export_semaphore_win32_handle_info_KHR(S_export_semaphore_win32_handle_info_KHR const& next_);
#endif
void set_pNext(N_semaphore_create_info n_){pNext = n_;}
};

/*	VkQueryPoolCreateInfo
*/
struct	S_query_pool_create_info:VkQueryPoolCreateInfo{
private:
	using VkQueryPoolCreateInfo::sType;
	using VkQueryPoolCreateInfo::pNext;
public:
	using VkQueryPoolCreateInfo::flags;
	using VkQueryPoolCreateInfo::queryType;
	using VkQueryPoolCreateInfo::queryCount;
	using VkQueryPoolCreateInfo::pipelineStatistics;

S_query_pool_create_info():VkQueryPoolCreateInfo{VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO,nullptr}{}
S_query_pool_create_info(
	VkQueryPoolCreateFlags flags_,
	E_query_type queryType_,
	uint32_t queryCount_,
	F_query_pipeline_statistic pipelineStatistics_)
	:VkQueryPoolCreateInfo{
	VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO
	,nullptr
	,flags_
	,queryType_
	,queryCount_
	,pipelineStatistics_}
	{
	}

	S_query_pool_create_info& operator=(const VkQueryPoolCreateInfo& rhs){static_cast<VkQueryPoolCreateInfo&>(*this)=rhs; return *this;}
	operator VkQueryPoolCreateInfo*()const{return const_cast<VkQueryPoolCreateInfo*>(static_cast<const VkQueryPoolCreateInfo*>(this));}
};

/*	VkFramebufferCreateInfo
*/
struct	S_framebuffer_create_info:VkFramebufferCreateInfo{
private:
	using VkFramebufferCreateInfo::sType;
	using VkFramebufferCreateInfo::pNext;
public:
	using VkFramebufferCreateInfo::flags;
	using VkFramebufferCreateInfo::renderPass;
	using VkFramebufferCreateInfo::attachmentCount;
	using VkFramebufferCreateInfo::pAttachments;
	using VkFramebufferCreateInfo::width;
	using VkFramebufferCreateInfo::height;
	using VkFramebufferCreateInfo::layers;

S_framebuffer_create_info():VkFramebufferCreateInfo{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,nullptr}{}
S_framebuffer_create_info(
	VkFramebufferCreateFlags flags_,
	VkRenderPass renderPass_,
	uint32_t attachmentCount_,
	const VkImageView * pAttachments_,
	uint32_t width_,
	uint32_t height_,
	uint32_t layers_)
	:VkFramebufferCreateInfo{
	VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO
	,nullptr
	,flags_
	,renderPass_
	,attachmentCount_
	,pAttachments_
	,width_
	,height_
	,layers_}
	{
	}

	S_framebuffer_create_info& operator=(const VkFramebufferCreateInfo& rhs){static_cast<VkFramebufferCreateInfo&>(*this)=rhs; return *this;}
	operator VkFramebufferCreateInfo*()const{return const_cast<VkFramebufferCreateInfo*>(static_cast<const VkFramebufferCreateInfo*>(this));}
};

/*	VkDrawIndirectCommand
*/
struct	S_draw_indirect_command:VkDrawIndirectCommand{
	using VkDrawIndirectCommand::vertexCount;
	using VkDrawIndirectCommand::instanceCount;
	using VkDrawIndirectCommand::firstVertex;
	using VkDrawIndirectCommand::firstInstance;

	S_draw_indirect_command& operator=(const VkDrawIndirectCommand& rhs){static_cast<VkDrawIndirectCommand&>(*this)=rhs; return *this;}
	operator VkDrawIndirectCommand*()const{return const_cast<VkDrawIndirectCommand*>(static_cast<const VkDrawIndirectCommand*>(this));}
};

/*	VkDrawIndexedIndirectCommand
*/
struct	S_draw_indexed_indirect_command:VkDrawIndexedIndirectCommand{
	using VkDrawIndexedIndirectCommand::indexCount;
	using VkDrawIndexedIndirectCommand::instanceCount;
	using VkDrawIndexedIndirectCommand::firstIndex;
	using VkDrawIndexedIndirectCommand::vertexOffset;
	using VkDrawIndexedIndirectCommand::firstInstance;

	S_draw_indexed_indirect_command& operator=(const VkDrawIndexedIndirectCommand& rhs){static_cast<VkDrawIndexedIndirectCommand&>(*this)=rhs; return *this;}
	operator VkDrawIndexedIndirectCommand*()const{return const_cast<VkDrawIndexedIndirectCommand*>(static_cast<const VkDrawIndexedIndirectCommand*>(this));}
};

/*	VkDispatchIndirectCommand
*/
struct	S_dispatch_indirect_command:VkDispatchIndirectCommand{
	using VkDispatchIndirectCommand::x;
	using VkDispatchIndirectCommand::y;
	using VkDispatchIndirectCommand::z;

	S_dispatch_indirect_command& operator=(const VkDispatchIndirectCommand& rhs){static_cast<VkDispatchIndirectCommand&>(*this)=rhs; return *this;}
	operator VkDispatchIndirectCommand*()const{return const_cast<VkDispatchIndirectCommand*>(static_cast<const VkDispatchIndirectCommand*>(this));}
};

/*	VkWin32KeyedMutexAcquireReleaseInfoNV
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_win32_keyed_mutex_acquire_release_info_NV:VkWin32KeyedMutexAcquireReleaseInfoNV{
private:
	using VkWin32KeyedMutexAcquireReleaseInfoNV::sType;
	using VkWin32KeyedMutexAcquireReleaseInfoNV::pNext;
public:
	using VkWin32KeyedMutexAcquireReleaseInfoNV::acquireCount;
	using VkWin32KeyedMutexAcquireReleaseInfoNV::pAcquireSyncs;
	using VkWin32KeyedMutexAcquireReleaseInfoNV::pAcquireKeys;
	using VkWin32KeyedMutexAcquireReleaseInfoNV::pAcquireTimeoutMilliseconds;
	using VkWin32KeyedMutexAcquireReleaseInfoNV::releaseCount;
	using VkWin32KeyedMutexAcquireReleaseInfoNV::pReleaseSyncs;
	using VkWin32KeyedMutexAcquireReleaseInfoNV::pReleaseKeys;

S_win32_keyed_mutex_acquire_release_info_NV():VkWin32KeyedMutexAcquireReleaseInfoNV{VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV,nullptr}{}
S_win32_keyed_mutex_acquire_release_info_NV(
	uint32_t acquireCount_,
	const VkDeviceMemory * pAcquireSyncs_,
	const uint64_t * pAcquireKeys_,
	const uint32_t * pAcquireTimeoutMilliseconds_,
	uint32_t releaseCount_,
	const VkDeviceMemory * pReleaseSyncs_,
	const uint64_t * pReleaseKeys_)
	:VkWin32KeyedMutexAcquireReleaseInfoNV{
	VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV
	,nullptr
	,acquireCount_
	,pAcquireSyncs_
	,pAcquireKeys_
	,pAcquireTimeoutMilliseconds_
	,releaseCount_
	,pReleaseSyncs_
	,pReleaseKeys_}
	{
	}

friend S_submit_info;

	S_win32_keyed_mutex_acquire_release_info_NV& operator=(const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs){static_cast<VkWin32KeyedMutexAcquireReleaseInfoNV&>(*this)=rhs; return *this;}
	operator VkWin32KeyedMutexAcquireReleaseInfoNV*()const{return const_cast<VkWin32KeyedMutexAcquireReleaseInfoNV*>(static_cast<const VkWin32KeyedMutexAcquireReleaseInfoNV*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkWin32KeyedMutexAcquireReleaseInfoKHR
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_win32_keyed_mutex_acquire_release_info_KHR:VkWin32KeyedMutexAcquireReleaseInfoKHR{
private:
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::sType;
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::pNext;
public:
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::acquireCount;
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::pAcquireSyncs;
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::pAcquireKeys;
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::pAcquireTimeouts;
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::releaseCount;
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::pReleaseSyncs;
	using VkWin32KeyedMutexAcquireReleaseInfoKHR::pReleaseKeys;

S_win32_keyed_mutex_acquire_release_info_KHR():VkWin32KeyedMutexAcquireReleaseInfoKHR{VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR,nullptr}{}
S_win32_keyed_mutex_acquire_release_info_KHR(
	uint32_t acquireCount_,
	const VkDeviceMemory * pAcquireSyncs_,
	const uint64_t * pAcquireKeys_,
	const uint32_t * pAcquireTimeouts_,
	uint32_t releaseCount_,
	const VkDeviceMemory * pReleaseSyncs_,
	const uint64_t * pReleaseKeys_)
	:VkWin32KeyedMutexAcquireReleaseInfoKHR{
	VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR
	,nullptr
	,acquireCount_
	,pAcquireSyncs_
	,pAcquireKeys_
	,pAcquireTimeouts_
	,releaseCount_
	,pReleaseSyncs_
	,pReleaseKeys_}
	{
	}

friend S_submit_info;

	S_win32_keyed_mutex_acquire_release_info_KHR& operator=(const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs){static_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR&>(*this)=rhs; return *this;}
	operator VkWin32KeyedMutexAcquireReleaseInfoKHR*()const{return const_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR*>(static_cast<const VkWin32KeyedMutexAcquireReleaseInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkD3D12FenceSubmitInfoKHR
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_d_3d12_fence_submit_info_KHR:VkD3D12FenceSubmitInfoKHR{
private:
	using VkD3D12FenceSubmitInfoKHR::sType;
	using VkD3D12FenceSubmitInfoKHR::pNext;
public:
	using VkD3D12FenceSubmitInfoKHR::waitSemaphoreValuesCount;
	using VkD3D12FenceSubmitInfoKHR::pWaitSemaphoreValues;
	using VkD3D12FenceSubmitInfoKHR::signalSemaphoreValuesCount;
	using VkD3D12FenceSubmitInfoKHR::pSignalSemaphoreValues;

S_d_3d12_fence_submit_info_KHR():VkD3D12FenceSubmitInfoKHR{VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR,nullptr}{}
S_d_3d12_fence_submit_info_KHR(
	uint32_t waitSemaphoreValuesCount_,
	const uint64_t * pWaitSemaphoreValues_,
	uint32_t signalSemaphoreValuesCount_,
	const uint64_t * pSignalSemaphoreValues_)
	:VkD3D12FenceSubmitInfoKHR{
	VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR
	,nullptr
	,waitSemaphoreValuesCount_
	,pWaitSemaphoreValues_
	,signalSemaphoreValuesCount_
	,pSignalSemaphoreValues_}
	{
	}

friend S_submit_info;

	S_d_3d12_fence_submit_info_KHR& operator=(const VkD3D12FenceSubmitInfoKHR& rhs){static_cast<VkD3D12FenceSubmitInfoKHR&>(*this)=rhs; return *this;}
	operator VkD3D12FenceSubmitInfoKHR*()const{return const_cast<VkD3D12FenceSubmitInfoKHR*>(static_cast<const VkD3D12FenceSubmitInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkDeviceGroupSubmitInfo
ex to: VkSubmitInfo
*/
struct	S_device_group_submit_info:VkDeviceGroupSubmitInfo{
private:
	using VkDeviceGroupSubmitInfo::sType;
	using VkDeviceGroupSubmitInfo::pNext;
public:
	using VkDeviceGroupSubmitInfo::waitSemaphoreCount;
	using VkDeviceGroupSubmitInfo::pWaitSemaphoreDeviceIndices;
	using VkDeviceGroupSubmitInfo::commandBufferCount;
	using VkDeviceGroupSubmitInfo::pCommandBufferDeviceMasks;
	using VkDeviceGroupSubmitInfo::signalSemaphoreCount;
	using VkDeviceGroupSubmitInfo::pSignalSemaphoreDeviceIndices;

S_device_group_submit_info():VkDeviceGroupSubmitInfo{VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO,nullptr}{}
S_device_group_submit_info(
	uint32_t waitSemaphoreCount_,
	const uint32_t * pWaitSemaphoreDeviceIndices_,
	uint32_t commandBufferCount_,
	const uint32_t * pCommandBufferDeviceMasks_,
	uint32_t signalSemaphoreCount_,
	const uint32_t * pSignalSemaphoreDeviceIndices_)
	:VkDeviceGroupSubmitInfo{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO
	,nullptr
	,waitSemaphoreCount_
	,pWaitSemaphoreDeviceIndices_
	,commandBufferCount_
	,pCommandBufferDeviceMasks_
	,signalSemaphoreCount_
	,pSignalSemaphoreDeviceIndices_}
	{
	}

friend S_submit_info;

	S_device_group_submit_info& operator=(const VkDeviceGroupSubmitInfo& rhs){static_cast<VkDeviceGroupSubmitInfo&>(*this)=rhs; return *this;}
	operator VkDeviceGroupSubmitInfo*()const{return const_cast<VkDeviceGroupSubmitInfo*>(static_cast<const VkDeviceGroupSubmitInfo*>(this));}
};

/*	VkProtectedSubmitInfo
ex to: VkSubmitInfo
*/
struct	S_protected_submit_info:VkProtectedSubmitInfo{
private:
	using VkProtectedSubmitInfo::sType;
	using VkProtectedSubmitInfo::pNext;
public:
	using VkProtectedSubmitInfo::protectedSubmit;

S_protected_submit_info():VkProtectedSubmitInfo{VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO,nullptr}{}
S_protected_submit_info(
	VkBool32 protectedSubmit_)
	:VkProtectedSubmitInfo{
	VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO
	,nullptr
	,protectedSubmit_}
	{
	}

friend S_submit_info;

	S_protected_submit_info& operator=(const VkProtectedSubmitInfo& rhs){static_cast<VkProtectedSubmitInfo&>(*this)=rhs; return *this;}
	operator VkProtectedSubmitInfo*()const{return const_cast<VkProtectedSubmitInfo*>(static_cast<const VkProtectedSubmitInfo*>(this));}
};

/*	VkSubmitInfo
ex:
	VkWin32KeyedMutexAcquireReleaseInfoNV
	VkWin32KeyedMutexAcquireReleaseInfoKHR
	VkD3D12FenceSubmitInfoKHR
	VkDeviceGroupSubmitInfo
	VkProtectedSubmitInfo
*/

struct N_submit_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
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
struct	S_submit_info:VkSubmitInfo{
private:
	using VkSubmitInfo::sType;
	using VkSubmitInfo::pNext;
public:
	using VkSubmitInfo::waitSemaphoreCount;
	using VkSubmitInfo::pWaitSemaphores;
	using VkSubmitInfo::pWaitDstStageMask;
	using VkSubmitInfo::commandBufferCount;
	using VkSubmitInfo::pCommandBuffers;
	using VkSubmitInfo::signalSemaphoreCount;
	using VkSubmitInfo::pSignalSemaphores;

S_submit_info():VkSubmitInfo{VK_STRUCTURE_TYPE_SUBMIT_INFO,nullptr}{}
S_submit_info(
	uint32_t waitSemaphoreCount_,
	const VkSemaphore * pWaitSemaphores_,
	const F_pipeline_stage * pWaitDstStageMask_,
	uint32_t commandBufferCount_,
	const VkCommandBuffer * pCommandBuffers_,
	uint32_t signalSemaphoreCount_,
	const VkSemaphore * pSignalSemaphores_)
	:VkSubmitInfo{
	VK_STRUCTURE_TYPE_SUBMIT_INFO
	,nullptr
	,waitSemaphoreCount_
	,pWaitSemaphores_
	,*pWaitDstStageMask_
	,commandBufferCount_
	,pCommandBuffers_
	,signalSemaphoreCount_
	,pSignalSemaphores_}
	{
	}

	S_submit_info& operator=(const VkSubmitInfo& rhs){static_cast<VkSubmitInfo&>(*this)=rhs; return *this;}
	operator VkSubmitInfo*()const{return const_cast<VkSubmitInfo*>(static_cast<const VkSubmitInfo*>(this));}

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
void set_pNext(N_submit_info n_){pNext = n_;}
};

/*	VkDisplayPropertiesKHR
(returnedonly)
*/
struct	S_display_properties_KHR:VkDisplayPropertiesKHR{
	using VkDisplayPropertiesKHR::display;
	using VkDisplayPropertiesKHR::displayName;
	using VkDisplayPropertiesKHR::physicalDimensions;
	using VkDisplayPropertiesKHR::physicalResolution;
	using VkDisplayPropertiesKHR::supportedTransforms;
	using VkDisplayPropertiesKHR::planeReorderPossible;
	using VkDisplayPropertiesKHR::persistentContent;

	S_display_properties_KHR& operator=(const VkDisplayPropertiesKHR& rhs){static_cast<VkDisplayPropertiesKHR&>(*this)=rhs; return *this;}
	operator VkDisplayPropertiesKHR*()const{return const_cast<VkDisplayPropertiesKHR*>(static_cast<const VkDisplayPropertiesKHR*>(this));}
};

/*	VkDisplayPlanePropertiesKHR
(returnedonly)
*/
struct	S_display_plane_properties_KHR:VkDisplayPlanePropertiesKHR{
	using VkDisplayPlanePropertiesKHR::currentDisplay;
	using VkDisplayPlanePropertiesKHR::currentStackIndex;

	S_display_plane_properties_KHR& operator=(const VkDisplayPlanePropertiesKHR& rhs){static_cast<VkDisplayPlanePropertiesKHR&>(*this)=rhs; return *this;}
	operator VkDisplayPlanePropertiesKHR*()const{return const_cast<VkDisplayPlanePropertiesKHR*>(static_cast<const VkDisplayPlanePropertiesKHR*>(this));}
};

/*	VkDisplayModeParametersKHR
*/
struct	S_display_mode_parameters_KHR:VkDisplayModeParametersKHR{
	using VkDisplayModeParametersKHR::visibleRegion;
	using VkDisplayModeParametersKHR::refreshRate;

	S_display_mode_parameters_KHR& operator=(const VkDisplayModeParametersKHR& rhs){static_cast<VkDisplayModeParametersKHR&>(*this)=rhs; return *this;}
	operator VkDisplayModeParametersKHR*()const{return const_cast<VkDisplayModeParametersKHR*>(static_cast<const VkDisplayModeParametersKHR*>(this));}
};

/*	VkDisplayModePropertiesKHR
(returnedonly)
*/
struct	S_display_mode_properties_KHR:VkDisplayModePropertiesKHR{
	using VkDisplayModePropertiesKHR::displayMode;
	using VkDisplayModePropertiesKHR::parameters;

	S_display_mode_properties_KHR& operator=(const VkDisplayModePropertiesKHR& rhs){static_cast<VkDisplayModePropertiesKHR&>(*this)=rhs; return *this;}
	operator VkDisplayModePropertiesKHR*()const{return const_cast<VkDisplayModePropertiesKHR*>(static_cast<const VkDisplayModePropertiesKHR*>(this));}
};

/*	VkDisplayModeCreateInfoKHR
*/
struct	S_display_mode_create_info_KHR:VkDisplayModeCreateInfoKHR{
private:
	using VkDisplayModeCreateInfoKHR::sType;
	using VkDisplayModeCreateInfoKHR::pNext;
public:
	using VkDisplayModeCreateInfoKHR::flags;
	using VkDisplayModeCreateInfoKHR::parameters;

S_display_mode_create_info_KHR():VkDisplayModeCreateInfoKHR{VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR,nullptr}{}
S_display_mode_create_info_KHR(
	VkDisplayModeCreateFlagsKHR flags_,
	S_display_mode_parameters_KHR parameters_)
	:VkDisplayModeCreateInfoKHR{
	VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,parameters_}
	{
	}

	S_display_mode_create_info_KHR& operator=(const VkDisplayModeCreateInfoKHR& rhs){static_cast<VkDisplayModeCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkDisplayModeCreateInfoKHR*()const{return const_cast<VkDisplayModeCreateInfoKHR*>(static_cast<const VkDisplayModeCreateInfoKHR*>(this));}
};

/*	VkDisplayPlaneCapabilitiesKHR
(returnedonly)
*/
struct	S_display_plane_capabilities_KHR:VkDisplayPlaneCapabilitiesKHR{
	using VkDisplayPlaneCapabilitiesKHR::supportedAlpha;
	using VkDisplayPlaneCapabilitiesKHR::minSrcPosition;
	using VkDisplayPlaneCapabilitiesKHR::maxSrcPosition;
	using VkDisplayPlaneCapabilitiesKHR::minSrcExtent;
	using VkDisplayPlaneCapabilitiesKHR::maxSrcExtent;
	using VkDisplayPlaneCapabilitiesKHR::minDstPosition;
	using VkDisplayPlaneCapabilitiesKHR::maxDstPosition;
	using VkDisplayPlaneCapabilitiesKHR::minDstExtent;
	using VkDisplayPlaneCapabilitiesKHR::maxDstExtent;

	S_display_plane_capabilities_KHR& operator=(const VkDisplayPlaneCapabilitiesKHR& rhs){static_cast<VkDisplayPlaneCapabilitiesKHR&>(*this)=rhs; return *this;}
	operator VkDisplayPlaneCapabilitiesKHR*()const{return const_cast<VkDisplayPlaneCapabilitiesKHR*>(static_cast<const VkDisplayPlaneCapabilitiesKHR*>(this));}
};

/*	VkDisplaySurfaceCreateInfoKHR
*/
struct	S_display_surface_create_info_KHR:VkDisplaySurfaceCreateInfoKHR{
private:
	using VkDisplaySurfaceCreateInfoKHR::sType;
	using VkDisplaySurfaceCreateInfoKHR::pNext;
public:
	using VkDisplaySurfaceCreateInfoKHR::flags;
	using VkDisplaySurfaceCreateInfoKHR::displayMode;
	using VkDisplaySurfaceCreateInfoKHR::planeIndex;
	using VkDisplaySurfaceCreateInfoKHR::planeStackIndex;
	using VkDisplaySurfaceCreateInfoKHR::transform;
	using VkDisplaySurfaceCreateInfoKHR::globalAlpha;
	using VkDisplaySurfaceCreateInfoKHR::alphaMode;
	using VkDisplaySurfaceCreateInfoKHR::imageExtent;

S_display_surface_create_info_KHR():VkDisplaySurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR,nullptr}{}
S_display_surface_create_info_KHR(
	VkDisplaySurfaceCreateFlagsKHR flags_,
	VkDisplayModeKHR displayMode_,
	uint32_t planeIndex_,
	uint32_t planeStackIndex_,
	F_surface_transform_KHR transform_,
	float globalAlpha_,
	F_display_plane_alpha_KHR alphaMode_,
	S_extent_2d imageExtent_)
	:VkDisplaySurfaceCreateInfoKHR{
	VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,displayMode_
	,planeIndex_
	,planeStackIndex_
	,transform_
	,globalAlpha_
	,alphaMode_
	,imageExtent_}
	{
	}

	S_display_surface_create_info_KHR& operator=(const VkDisplaySurfaceCreateInfoKHR& rhs){static_cast<VkDisplaySurfaceCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkDisplaySurfaceCreateInfoKHR*()const{return const_cast<VkDisplaySurfaceCreateInfoKHR*>(static_cast<const VkDisplaySurfaceCreateInfoKHR*>(this));}
};

/*	VkDisplayPresentInfoKHR
ex to: VkPresentInfoKHR
*/
struct	S_display_present_info_KHR:VkDisplayPresentInfoKHR{
private:
	using VkDisplayPresentInfoKHR::sType;
	using VkDisplayPresentInfoKHR::pNext;
public:
	using VkDisplayPresentInfoKHR::srcRect;
	using VkDisplayPresentInfoKHR::dstRect;
	using VkDisplayPresentInfoKHR::persistent;

S_display_present_info_KHR():VkDisplayPresentInfoKHR{VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR,nullptr}{}
S_display_present_info_KHR(
	S_rect_2d srcRect_,
	S_rect_2d dstRect_,
	VkBool32 persistent_)
	:VkDisplayPresentInfoKHR{
	VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR
	,nullptr
	,srcRect_
	,dstRect_
	,persistent_}
	{
	}

friend S_present_info_KHR;

	S_display_present_info_KHR& operator=(const VkDisplayPresentInfoKHR& rhs){static_cast<VkDisplayPresentInfoKHR&>(*this)=rhs; return *this;}
	operator VkDisplayPresentInfoKHR*()const{return const_cast<VkDisplayPresentInfoKHR*>(static_cast<const VkDisplayPresentInfoKHR*>(this));}
};

/*	VkSurfaceCapabilitiesKHR
(returnedonly)
*/
struct	S_surface_capabilities_KHR:VkSurfaceCapabilitiesKHR{
	using VkSurfaceCapabilitiesKHR::minImageCount;
	using VkSurfaceCapabilitiesKHR::maxImageCount;
	using VkSurfaceCapabilitiesKHR::currentExtent;
	using VkSurfaceCapabilitiesKHR::minImageExtent;
	using VkSurfaceCapabilitiesKHR::maxImageExtent;
	using VkSurfaceCapabilitiesKHR::maxImageArrayLayers;
	using VkSurfaceCapabilitiesKHR::supportedTransforms;
	using VkSurfaceCapabilitiesKHR::currentTransform;
	using VkSurfaceCapabilitiesKHR::supportedCompositeAlpha;
	using VkSurfaceCapabilitiesKHR::supportedUsageFlags;

	S_surface_capabilities_KHR& operator=(const VkSurfaceCapabilitiesKHR& rhs){static_cast<VkSurfaceCapabilitiesKHR&>(*this)=rhs; return *this;}
	operator VkSurfaceCapabilitiesKHR*()const{return const_cast<VkSurfaceCapabilitiesKHR*>(static_cast<const VkSurfaceCapabilitiesKHR*>(this));}
};

/*	VkAndroidSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct	S_android_surface_create_info_KHR:VkAndroidSurfaceCreateInfoKHR{
private:
	using VkAndroidSurfaceCreateInfoKHR::sType;
	using VkAndroidSurfaceCreateInfoKHR::pNext;
public:
	using VkAndroidSurfaceCreateInfoKHR::flags;
	using VkAndroidSurfaceCreateInfoKHR::window;

S_android_surface_create_info_KHR():VkAndroidSurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR,nullptr}{}
S_android_surface_create_info_KHR(
	VkAndroidSurfaceCreateFlagsKHR flags_,
	struct ANativeWindow * window_)
	:VkAndroidSurfaceCreateInfoKHR{
	VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,window_}
	{
	}

	S_android_surface_create_info_KHR& operator=(const VkAndroidSurfaceCreateInfoKHR& rhs){static_cast<VkAndroidSurfaceCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkAndroidSurfaceCreateInfoKHR*()const{return const_cast<VkAndroidSurfaceCreateInfoKHR*>(static_cast<const VkAndroidSurfaceCreateInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkMirSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_MIR_KHR
struct	S_mir_surface_create_info_KHR:VkMirSurfaceCreateInfoKHR{
private:
	using VkMirSurfaceCreateInfoKHR::sType;
	using VkMirSurfaceCreateInfoKHR::pNext;
public:
	using VkMirSurfaceCreateInfoKHR::flags;
	using VkMirSurfaceCreateInfoKHR::connection;
	using VkMirSurfaceCreateInfoKHR::mirSurface;

S_mir_surface_create_info_KHR():VkMirSurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR,nullptr}{}
S_mir_surface_create_info_KHR(
	VkMirSurfaceCreateFlagsKHR flags_,
	MirConnection * connection_,
	MirSurface * mirSurface_)
	:VkMirSurfaceCreateInfoKHR{
	VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,connection_
	,mirSurface_}
	{
	}

	S_mir_surface_create_info_KHR& operator=(const VkMirSurfaceCreateInfoKHR& rhs){static_cast<VkMirSurfaceCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkMirSurfaceCreateInfoKHR*()const{return const_cast<VkMirSurfaceCreateInfoKHR*>(static_cast<const VkMirSurfaceCreateInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_MIR_KHR

/*	VkViSurfaceCreateInfoNN
*/
#ifdef VK_USE_PLATFORM_VI_NN
struct	S_vi_surface_create_info_NN:VkViSurfaceCreateInfoNN{
private:
	using VkViSurfaceCreateInfoNN::sType;
	using VkViSurfaceCreateInfoNN::pNext;
public:
	using VkViSurfaceCreateInfoNN::flags;
	using VkViSurfaceCreateInfoNN::window;

S_vi_surface_create_info_NN():VkViSurfaceCreateInfoNN{VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN,nullptr}{}
S_vi_surface_create_info_NN(
	VkViSurfaceCreateFlagsNN flags_,
	void * window_)
	:VkViSurfaceCreateInfoNN{
	VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN
	,nullptr
	,flags_
	,window_}
	{
	}

	S_vi_surface_create_info_NN& operator=(const VkViSurfaceCreateInfoNN& rhs){static_cast<VkViSurfaceCreateInfoNN&>(*this)=rhs; return *this;}
	operator VkViSurfaceCreateInfoNN*()const{return const_cast<VkViSurfaceCreateInfoNN*>(static_cast<const VkViSurfaceCreateInfoNN*>(this));}
};
#endif //VK_USE_PLATFORM_VI_NN

/*	VkWaylandSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
struct	S_wayland_surface_create_info_KHR:VkWaylandSurfaceCreateInfoKHR{
private:
	using VkWaylandSurfaceCreateInfoKHR::sType;
	using VkWaylandSurfaceCreateInfoKHR::pNext;
public:
	using VkWaylandSurfaceCreateInfoKHR::flags;
	using VkWaylandSurfaceCreateInfoKHR::display;
	using VkWaylandSurfaceCreateInfoKHR::surface;

S_wayland_surface_create_info_KHR():VkWaylandSurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR,nullptr}{}
S_wayland_surface_create_info_KHR(
	VkWaylandSurfaceCreateFlagsKHR flags_,
	struct wl_display * display_,
	struct wl_surface * surface_)
	:VkWaylandSurfaceCreateInfoKHR{
	VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,display_
	,surface_}
	{
	}

	S_wayland_surface_create_info_KHR& operator=(const VkWaylandSurfaceCreateInfoKHR& rhs){static_cast<VkWaylandSurfaceCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkWaylandSurfaceCreateInfoKHR*()const{return const_cast<VkWaylandSurfaceCreateInfoKHR*>(static_cast<const VkWaylandSurfaceCreateInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WAYLAND_KHR

/*	VkWin32SurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_win32_surface_create_info_KHR:VkWin32SurfaceCreateInfoKHR{
private:
	using VkWin32SurfaceCreateInfoKHR::sType;
	using VkWin32SurfaceCreateInfoKHR::pNext;
public:
	using VkWin32SurfaceCreateInfoKHR::flags;
	using VkWin32SurfaceCreateInfoKHR::hinstance;
	using VkWin32SurfaceCreateInfoKHR::hwnd;

S_win32_surface_create_info_KHR():VkWin32SurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR,nullptr}{}
S_win32_surface_create_info_KHR(
	VkWin32SurfaceCreateFlagsKHR flags_,
	HINSTANCE hinstance_,
	HWND hwnd_)
	:VkWin32SurfaceCreateInfoKHR{
	VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,hinstance_
	,hwnd_}
	{
	}

	S_win32_surface_create_info_KHR& operator=(const VkWin32SurfaceCreateInfoKHR& rhs){static_cast<VkWin32SurfaceCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkWin32SurfaceCreateInfoKHR*()const{return const_cast<VkWin32SurfaceCreateInfoKHR*>(static_cast<const VkWin32SurfaceCreateInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkXlibSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_XLIB_KHR
struct	S_xlib_surface_create_info_KHR:VkXlibSurfaceCreateInfoKHR{
private:
	using VkXlibSurfaceCreateInfoKHR::sType;
	using VkXlibSurfaceCreateInfoKHR::pNext;
public:
	using VkXlibSurfaceCreateInfoKHR::flags;
	using VkXlibSurfaceCreateInfoKHR::dpy;
	using VkXlibSurfaceCreateInfoKHR::window;

S_xlib_surface_create_info_KHR():VkXlibSurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR,nullptr}{}
S_xlib_surface_create_info_KHR(
	VkXlibSurfaceCreateFlagsKHR flags_,
	Display * dpy_,
	Window window_)
	:VkXlibSurfaceCreateInfoKHR{
	VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,dpy_
	,window_}
	{
	}

	S_xlib_surface_create_info_KHR& operator=(const VkXlibSurfaceCreateInfoKHR& rhs){static_cast<VkXlibSurfaceCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkXlibSurfaceCreateInfoKHR*()const{return const_cast<VkXlibSurfaceCreateInfoKHR*>(static_cast<const VkXlibSurfaceCreateInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_XLIB_KHR

/*	VkXcbSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_XCB_KHR
struct	S_xcb_surface_create_info_KHR:VkXcbSurfaceCreateInfoKHR{
private:
	using VkXcbSurfaceCreateInfoKHR::sType;
	using VkXcbSurfaceCreateInfoKHR::pNext;
public:
	using VkXcbSurfaceCreateInfoKHR::flags;
	using VkXcbSurfaceCreateInfoKHR::connection;
	using VkXcbSurfaceCreateInfoKHR::window;

S_xcb_surface_create_info_KHR():VkXcbSurfaceCreateInfoKHR{VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR,nullptr}{}
S_xcb_surface_create_info_KHR(
	VkXcbSurfaceCreateFlagsKHR flags_,
	xcb_connection_t * connection_,
	xcb_window_t window_)
	:VkXcbSurfaceCreateInfoKHR{
	VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR
	,nullptr
	,flags_
	,connection_
	,window_}
	{
	}

	S_xcb_surface_create_info_KHR& operator=(const VkXcbSurfaceCreateInfoKHR& rhs){static_cast<VkXcbSurfaceCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkXcbSurfaceCreateInfoKHR*()const{return const_cast<VkXcbSurfaceCreateInfoKHR*>(static_cast<const VkXcbSurfaceCreateInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_XCB_KHR

/*	VkSurfaceFormatKHR
(returnedonly)
*/
struct	S_surface_format_KHR:VkSurfaceFormatKHR{
	using VkSurfaceFormatKHR::format;
	using VkSurfaceFormatKHR::colorSpace;

	S_surface_format_KHR& operator=(const VkSurfaceFormatKHR& rhs){static_cast<VkSurfaceFormatKHR&>(*this)=rhs; return *this;}
	operator VkSurfaceFormatKHR*()const{return const_cast<VkSurfaceFormatKHR*>(static_cast<const VkSurfaceFormatKHR*>(this));}
};

/*	VkSwapchainCounterCreateInfoEXT
ex to: VkSwapchainCreateInfoKHR
*/
struct	S_swapchain_counter_create_info_EXT:VkSwapchainCounterCreateInfoEXT{
private:
	using VkSwapchainCounterCreateInfoEXT::sType;
	using VkSwapchainCounterCreateInfoEXT::pNext;
public:
	using VkSwapchainCounterCreateInfoEXT::surfaceCounters;

S_swapchain_counter_create_info_EXT():VkSwapchainCounterCreateInfoEXT{VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT,nullptr}{}
S_swapchain_counter_create_info_EXT(
	F_surface_counter_EXT surfaceCounters_)
	:VkSwapchainCounterCreateInfoEXT{
	VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT
	,nullptr
	,surfaceCounters_}
	{
	}

friend S_swapchain_create_info_KHR;

	S_swapchain_counter_create_info_EXT& operator=(const VkSwapchainCounterCreateInfoEXT& rhs){static_cast<VkSwapchainCounterCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkSwapchainCounterCreateInfoEXT*()const{return const_cast<VkSwapchainCounterCreateInfoEXT*>(static_cast<const VkSwapchainCounterCreateInfoEXT*>(this));}
};

/*	VkDeviceGroupSwapchainCreateInfoKHR
ex to: VkSwapchainCreateInfoKHR
*/
struct	S_device_group_swapchain_create_info_KHR:VkDeviceGroupSwapchainCreateInfoKHR{
private:
	using VkDeviceGroupSwapchainCreateInfoKHR::sType;
	using VkDeviceGroupSwapchainCreateInfoKHR::pNext;
public:
	using VkDeviceGroupSwapchainCreateInfoKHR::modes;

S_device_group_swapchain_create_info_KHR():VkDeviceGroupSwapchainCreateInfoKHR{VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR,nullptr}{}
S_device_group_swapchain_create_info_KHR(
	F_device_group_present_mode_KHR modes_)
	:VkDeviceGroupSwapchainCreateInfoKHR{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR
	,nullptr
	,modes_}
	{
	}

friend S_swapchain_create_info_KHR;

	S_device_group_swapchain_create_info_KHR& operator=(const VkDeviceGroupSwapchainCreateInfoKHR& rhs){static_cast<VkDeviceGroupSwapchainCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkDeviceGroupSwapchainCreateInfoKHR*()const{return const_cast<VkDeviceGroupSwapchainCreateInfoKHR*>(static_cast<const VkDeviceGroupSwapchainCreateInfoKHR*>(this));}
};

/*	VkSwapchainCreateInfoKHR
ex:
	VkSwapchainCounterCreateInfoEXT
	VkDeviceGroupSwapchainCreateInfoKHR
*/

struct N_swapchain_create_info_KHR{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_swapchain_create_info_KHR& n_swapchain_counter_create_info_EXT(S_swapchain_counter_create_info_EXT const& next_);
N_swapchain_create_info_KHR& n_device_group_swapchain_create_info_KHR(S_device_group_swapchain_create_info_KHR const& next_);
};
struct	S_swapchain_create_info_KHR:VkSwapchainCreateInfoKHR{
private:
	using VkSwapchainCreateInfoKHR::sType;
	using VkSwapchainCreateInfoKHR::pNext;
public:
	using VkSwapchainCreateInfoKHR::flags;
	using VkSwapchainCreateInfoKHR::surface;
	using VkSwapchainCreateInfoKHR::minImageCount;
	using VkSwapchainCreateInfoKHR::imageFormat;
	using VkSwapchainCreateInfoKHR::imageColorSpace;
	using VkSwapchainCreateInfoKHR::imageExtent;
	using VkSwapchainCreateInfoKHR::imageArrayLayers;
	using VkSwapchainCreateInfoKHR::imageUsage;
	using VkSwapchainCreateInfoKHR::imageSharingMode;
	using VkSwapchainCreateInfoKHR::queueFamilyIndexCount;
	using VkSwapchainCreateInfoKHR::pQueueFamilyIndices;
	using VkSwapchainCreateInfoKHR::preTransform;
	using VkSwapchainCreateInfoKHR::compositeAlpha;
	using VkSwapchainCreateInfoKHR::presentMode;
	using VkSwapchainCreateInfoKHR::clipped;
	using VkSwapchainCreateInfoKHR::oldSwapchain;

S_swapchain_create_info_KHR():VkSwapchainCreateInfoKHR{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR,nullptr}{}
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
	:VkSwapchainCreateInfoKHR{
	VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR
	,nullptr
	,static_cast<VkFlags>(flags_)
	,surface_
	,minImageCount_
	,imageFormat_
	,imageColorSpace_
	,imageExtent_
	,imageArrayLayers_
	,imageUsage_
	,imageSharingMode_
	,queueFamilyIndexCount_
	,pQueueFamilyIndices_
	,preTransform_
	,compositeAlpha_
	,presentMode_
	,clipped_
	,oldSwapchain_}
	{
	}

	S_swapchain_create_info_KHR& operator=(const VkSwapchainCreateInfoKHR& rhs){static_cast<VkSwapchainCreateInfoKHR&>(*this)=rhs; return *this;}
	operator VkSwapchainCreateInfoKHR*()const{return const_cast<VkSwapchainCreateInfoKHR*>(static_cast<const VkSwapchainCreateInfoKHR*>(this));}

S_swapchain_create_info_KHR& n_swapchain_counter_create_info_EXT(S_swapchain_counter_create_info_EXT const& next_);
S_swapchain_create_info_KHR& n_device_group_swapchain_create_info_KHR(S_device_group_swapchain_create_info_KHR const& next_);
void set_pNext(N_swapchain_create_info_KHR n_){pNext = n_;}
};

/*	VkRectLayerKHR
*/
struct	S_rect_layer_KHR:VkRectLayerKHR{
	using VkRectLayerKHR::offset;
	using VkRectLayerKHR::extent;
	using VkRectLayerKHR::layer;

	S_rect_layer_KHR& operator=(const VkRectLayerKHR& rhs){static_cast<VkRectLayerKHR&>(*this)=rhs; return *this;}
	operator VkRectLayerKHR*()const{return const_cast<VkRectLayerKHR*>(static_cast<const VkRectLayerKHR*>(this));}
};

/*	VkPresentRegionKHR
*/
struct	S_present_region_KHR:VkPresentRegionKHR{
	using VkPresentRegionKHR::rectangleCount;
	using VkPresentRegionKHR::pRectangles;

	S_present_region_KHR& operator=(const VkPresentRegionKHR& rhs){static_cast<VkPresentRegionKHR&>(*this)=rhs; return *this;}
	operator VkPresentRegionKHR*()const{return const_cast<VkPresentRegionKHR*>(static_cast<const VkPresentRegionKHR*>(this));}
};

/*	VkPresentRegionsKHR
ex to: VkPresentInfoKHR
*/
struct	S_present_regions_KHR:VkPresentRegionsKHR{
private:
	using VkPresentRegionsKHR::sType;
	using VkPresentRegionsKHR::pNext;
public:
	using VkPresentRegionsKHR::swapchainCount;
	using VkPresentRegionsKHR::pRegions;

S_present_regions_KHR():VkPresentRegionsKHR{VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR,nullptr}{}
S_present_regions_KHR(
	uint32_t swapchainCount_,
	const S_present_region_KHR * pRegions_)
	:VkPresentRegionsKHR{
	VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR
	,nullptr
	,swapchainCount_
	,pRegions_}
	{
	}

friend S_present_info_KHR;

	S_present_regions_KHR& operator=(const VkPresentRegionsKHR& rhs){static_cast<VkPresentRegionsKHR&>(*this)=rhs; return *this;}
	operator VkPresentRegionsKHR*()const{return const_cast<VkPresentRegionsKHR*>(static_cast<const VkPresentRegionsKHR*>(this));}
};

/*	VkDeviceGroupPresentInfoKHR
ex to: VkPresentInfoKHR
*/
struct	S_device_group_present_info_KHR:VkDeviceGroupPresentInfoKHR{
private:
	using VkDeviceGroupPresentInfoKHR::sType;
	using VkDeviceGroupPresentInfoKHR::pNext;
public:
	using VkDeviceGroupPresentInfoKHR::swapchainCount;
	using VkDeviceGroupPresentInfoKHR::pDeviceMasks;
	using VkDeviceGroupPresentInfoKHR::mode;

S_device_group_present_info_KHR():VkDeviceGroupPresentInfoKHR{VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR,nullptr}{}
S_device_group_present_info_KHR(
	uint32_t swapchainCount_,
	const uint32_t * pDeviceMasks_,
	F_device_group_present_mode_KHR mode_)
	:VkDeviceGroupPresentInfoKHR{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR
	,nullptr
	,swapchainCount_
	,pDeviceMasks_
	,mode_}
	{
	}

friend S_present_info_KHR;

	S_device_group_present_info_KHR& operator=(const VkDeviceGroupPresentInfoKHR& rhs){static_cast<VkDeviceGroupPresentInfoKHR&>(*this)=rhs; return *this;}
	operator VkDeviceGroupPresentInfoKHR*()const{return const_cast<VkDeviceGroupPresentInfoKHR*>(static_cast<const VkDeviceGroupPresentInfoKHR*>(this));}
};

/*	VkPresentTimeGOOGLE
*/
struct	S_present_time_GOOGLE:VkPresentTimeGOOGLE{
	using VkPresentTimeGOOGLE::presentID;
	using VkPresentTimeGOOGLE::desiredPresentTime;

	S_present_time_GOOGLE& operator=(const VkPresentTimeGOOGLE& rhs){static_cast<VkPresentTimeGOOGLE&>(*this)=rhs; return *this;}
	operator VkPresentTimeGOOGLE*()const{return const_cast<VkPresentTimeGOOGLE*>(static_cast<const VkPresentTimeGOOGLE*>(this));}
};

/*	VkPresentTimesInfoGOOGLE
ex to: VkPresentInfoKHR
*/
struct	S_present_times_info_GOOGLE:VkPresentTimesInfoGOOGLE{
private:
	using VkPresentTimesInfoGOOGLE::sType;
	using VkPresentTimesInfoGOOGLE::pNext;
public:
	using VkPresentTimesInfoGOOGLE::swapchainCount;
	using VkPresentTimesInfoGOOGLE::pTimes;

S_present_times_info_GOOGLE():VkPresentTimesInfoGOOGLE{VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE,nullptr}{}
S_present_times_info_GOOGLE(
	uint32_t swapchainCount_,
	const S_present_time_GOOGLE * pTimes_)
	:VkPresentTimesInfoGOOGLE{
	VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE
	,nullptr
	,swapchainCount_
	,pTimes_}
	{
	}

friend S_present_info_KHR;

	S_present_times_info_GOOGLE& operator=(const VkPresentTimesInfoGOOGLE& rhs){static_cast<VkPresentTimesInfoGOOGLE&>(*this)=rhs; return *this;}
	operator VkPresentTimesInfoGOOGLE*()const{return const_cast<VkPresentTimesInfoGOOGLE*>(static_cast<const VkPresentTimesInfoGOOGLE*>(this));}
};

/*	VkPresentInfoKHR
ex:
	VkDisplayPresentInfoKHR
	VkPresentRegionsKHR
	VkDeviceGroupPresentInfoKHR
	VkPresentTimesInfoGOOGLE
*/

struct N_present_info_KHR{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_present_info_KHR& n_display_present_info_KHR(S_display_present_info_KHR const& next_);
N_present_info_KHR& n_present_regions_KHR(S_present_regions_KHR const& next_);
N_present_info_KHR& n_device_group_present_info_KHR(S_device_group_present_info_KHR const& next_);
N_present_info_KHR& n_present_times_info_GOOGLE(S_present_times_info_GOOGLE const& next_);
};
struct	S_present_info_KHR:VkPresentInfoKHR{
private:
	using VkPresentInfoKHR::sType;
	using VkPresentInfoKHR::pNext;
public:
	using VkPresentInfoKHR::waitSemaphoreCount;
	using VkPresentInfoKHR::pWaitSemaphores;
	using VkPresentInfoKHR::swapchainCount;
	using VkPresentInfoKHR::pSwapchains;
	using VkPresentInfoKHR::pImageIndices;
	using VkPresentInfoKHR::pResults;

S_present_info_KHR():VkPresentInfoKHR{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR,nullptr}{}
S_present_info_KHR(
	uint32_t waitSemaphoreCount_,
	const VkSemaphore * pWaitSemaphores_,
	uint32_t swapchainCount_,
	const VkSwapchainKHR * pSwapchains_,
	const uint32_t * pImageIndices_,
	E_result * pResults_)
	:VkPresentInfoKHR{
	VK_STRUCTURE_TYPE_PRESENT_INFO_KHR
	,nullptr
	,waitSemaphoreCount_
	,pWaitSemaphores_
	,swapchainCount_
	,pSwapchains_
	,pImageIndices_
	,*pResults_}
	{
	}

	S_present_info_KHR& operator=(const VkPresentInfoKHR& rhs){static_cast<VkPresentInfoKHR&>(*this)=rhs; return *this;}
	operator VkPresentInfoKHR*()const{return const_cast<VkPresentInfoKHR*>(static_cast<const VkPresentInfoKHR*>(this));}

S_present_info_KHR& n_display_present_info_KHR(S_display_present_info_KHR const& next_);
S_present_info_KHR& n_present_regions_KHR(S_present_regions_KHR const& next_);
S_present_info_KHR& n_device_group_present_info_KHR(S_device_group_present_info_KHR const& next_);
S_present_info_KHR& n_present_times_info_GOOGLE(S_present_times_info_GOOGLE const& next_);
void set_pNext(N_present_info_KHR n_){pNext = n_;}
};

/*	VkDebugMarkerObjectNameInfoEXT
*/
struct	S_debug_marker_object_name_info_EXT:VkDebugMarkerObjectNameInfoEXT{
private:
	using VkDebugMarkerObjectNameInfoEXT::sType;
	using VkDebugMarkerObjectNameInfoEXT::pNext;
public:
	using VkDebugMarkerObjectNameInfoEXT::objectType;
	using VkDebugMarkerObjectNameInfoEXT::object;
	using VkDebugMarkerObjectNameInfoEXT::pObjectName;

S_debug_marker_object_name_info_EXT():VkDebugMarkerObjectNameInfoEXT{VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT,nullptr}{}
S_debug_marker_object_name_info_EXT(
	E_debug_report_object_type_EXT objectType_,
	uint64_t object_,
	const char * pObjectName_)
	:VkDebugMarkerObjectNameInfoEXT{
	VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT
	,nullptr
	,objectType_
	,object_
	,pObjectName_}
	{
	}

	S_debug_marker_object_name_info_EXT& operator=(const VkDebugMarkerObjectNameInfoEXT& rhs){static_cast<VkDebugMarkerObjectNameInfoEXT&>(*this)=rhs; return *this;}
	operator VkDebugMarkerObjectNameInfoEXT*()const{return const_cast<VkDebugMarkerObjectNameInfoEXT*>(static_cast<const VkDebugMarkerObjectNameInfoEXT*>(this));}
};

/*	VkDebugMarkerObjectTagInfoEXT
*/
struct	S_debug_marker_object_tag_info_EXT:VkDebugMarkerObjectTagInfoEXT{
private:
	using VkDebugMarkerObjectTagInfoEXT::sType;
	using VkDebugMarkerObjectTagInfoEXT::pNext;
public:
	using VkDebugMarkerObjectTagInfoEXT::objectType;
	using VkDebugMarkerObjectTagInfoEXT::object;
	using VkDebugMarkerObjectTagInfoEXT::tagName;
	using VkDebugMarkerObjectTagInfoEXT::tagSize;
	using VkDebugMarkerObjectTagInfoEXT::pTag;

S_debug_marker_object_tag_info_EXT():VkDebugMarkerObjectTagInfoEXT{VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT,nullptr}{}
S_debug_marker_object_tag_info_EXT(
	E_debug_report_object_type_EXT objectType_,
	uint64_t object_,
	uint64_t tagName_,
	size_t tagSize_,
	const void * pTag_)
	:VkDebugMarkerObjectTagInfoEXT{
	VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT
	,nullptr
	,objectType_
	,object_
	,tagName_
	,tagSize_
	,pTag_}
	{
	}

	S_debug_marker_object_tag_info_EXT& operator=(const VkDebugMarkerObjectTagInfoEXT& rhs){static_cast<VkDebugMarkerObjectTagInfoEXT&>(*this)=rhs; return *this;}
	operator VkDebugMarkerObjectTagInfoEXT*()const{return const_cast<VkDebugMarkerObjectTagInfoEXT*>(static_cast<const VkDebugMarkerObjectTagInfoEXT*>(this));}
};

/*	VkDebugMarkerMarkerInfoEXT
*/
struct	S_debug_marker_marker_info_EXT:VkDebugMarkerMarkerInfoEXT{
private:
	using VkDebugMarkerMarkerInfoEXT::sType;
	using VkDebugMarkerMarkerInfoEXT::pNext;
public:
	using VkDebugMarkerMarkerInfoEXT::pMarkerName;
	using VkDebugMarkerMarkerInfoEXT::color;

S_debug_marker_marker_info_EXT():VkDebugMarkerMarkerInfoEXT{VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT,nullptr}{}
S_debug_marker_marker_info_EXT(
	const char * pMarkerName_,
	float color_[4])
	:VkDebugMarkerMarkerInfoEXT{
	VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT
	,nullptr
	,pMarkerName_
	,{}}
	{
		memcpy(color,color_,sizeof(color_) );
	}

	S_debug_marker_marker_info_EXT& operator=(const VkDebugMarkerMarkerInfoEXT& rhs){static_cast<VkDebugMarkerMarkerInfoEXT&>(*this)=rhs; return *this;}
	operator VkDebugMarkerMarkerInfoEXT*()const{return const_cast<VkDebugMarkerMarkerInfoEXT*>(static_cast<const VkDebugMarkerMarkerInfoEXT*>(this));}
};

/*	VkExternalImageFormatPropertiesNV
(returnedonly)
*/
struct	S_external_image_format_properties_NV:VkExternalImageFormatPropertiesNV{
	using VkExternalImageFormatPropertiesNV::imageFormatProperties;
	using VkExternalImageFormatPropertiesNV::externalMemoryFeatures;
	using VkExternalImageFormatPropertiesNV::exportFromImportedHandleTypes;
	using VkExternalImageFormatPropertiesNV::compatibleHandleTypes;

	S_external_image_format_properties_NV& operator=(const VkExternalImageFormatPropertiesNV& rhs){static_cast<VkExternalImageFormatPropertiesNV&>(*this)=rhs; return *this;}
	operator VkExternalImageFormatPropertiesNV*()const{return const_cast<VkExternalImageFormatPropertiesNV*>(static_cast<const VkExternalImageFormatPropertiesNV*>(this));}
};

/*	VkDeviceGeneratedCommandsFeaturesNVX
*/
struct	S_device_generated_commands_features_NVX:VkDeviceGeneratedCommandsFeaturesNVX{
private:
	using VkDeviceGeneratedCommandsFeaturesNVX::sType;
	using VkDeviceGeneratedCommandsFeaturesNVX::pNext;
public:
	using VkDeviceGeneratedCommandsFeaturesNVX::computeBindingPointSupport;

S_device_generated_commands_features_NVX():VkDeviceGeneratedCommandsFeaturesNVX{VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX,nullptr}{}
S_device_generated_commands_features_NVX(
	VkBool32 computeBindingPointSupport_)
	:VkDeviceGeneratedCommandsFeaturesNVX{
	VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX
	,nullptr
	,computeBindingPointSupport_}
	{
	}

	S_device_generated_commands_features_NVX& operator=(const VkDeviceGeneratedCommandsFeaturesNVX& rhs){static_cast<VkDeviceGeneratedCommandsFeaturesNVX&>(*this)=rhs; return *this;}
	operator VkDeviceGeneratedCommandsFeaturesNVX*()const{return const_cast<VkDeviceGeneratedCommandsFeaturesNVX*>(static_cast<const VkDeviceGeneratedCommandsFeaturesNVX*>(this));}
};

/*	VkDeviceGeneratedCommandsLimitsNVX
*/
struct	S_device_generated_commands_limits_NVX:VkDeviceGeneratedCommandsLimitsNVX{
private:
	using VkDeviceGeneratedCommandsLimitsNVX::sType;
	using VkDeviceGeneratedCommandsLimitsNVX::pNext;
public:
	using VkDeviceGeneratedCommandsLimitsNVX::maxIndirectCommandsLayoutTokenCount;
	using VkDeviceGeneratedCommandsLimitsNVX::maxObjectEntryCounts;
	using VkDeviceGeneratedCommandsLimitsNVX::minSequenceCountBufferOffsetAlignment;
	using VkDeviceGeneratedCommandsLimitsNVX::minSequenceIndexBufferOffsetAlignment;
	using VkDeviceGeneratedCommandsLimitsNVX::minCommandsTokenBufferOffsetAlignment;

S_device_generated_commands_limits_NVX():VkDeviceGeneratedCommandsLimitsNVX{VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX,nullptr}{}
S_device_generated_commands_limits_NVX(
	uint32_t maxIndirectCommandsLayoutTokenCount_,
	uint32_t maxObjectEntryCounts_,
	uint32_t minSequenceCountBufferOffsetAlignment_,
	uint32_t minSequenceIndexBufferOffsetAlignment_,
	uint32_t minCommandsTokenBufferOffsetAlignment_)
	:VkDeviceGeneratedCommandsLimitsNVX{
	VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX
	,nullptr
	,maxIndirectCommandsLayoutTokenCount_
	,maxObjectEntryCounts_
	,minSequenceCountBufferOffsetAlignment_
	,minSequenceIndexBufferOffsetAlignment_
	,minCommandsTokenBufferOffsetAlignment_}
	{
	}

	S_device_generated_commands_limits_NVX& operator=(const VkDeviceGeneratedCommandsLimitsNVX& rhs){static_cast<VkDeviceGeneratedCommandsLimitsNVX&>(*this)=rhs; return *this;}
	operator VkDeviceGeneratedCommandsLimitsNVX*()const{return const_cast<VkDeviceGeneratedCommandsLimitsNVX*>(static_cast<const VkDeviceGeneratedCommandsLimitsNVX*>(this));}
};

/*	VkIndirectCommandsTokenNVX
*/
struct	S_indirect_commands_token_NVX:VkIndirectCommandsTokenNVX{
	using VkIndirectCommandsTokenNVX::tokenType;
	using VkIndirectCommandsTokenNVX::buffer;
	using VkIndirectCommandsTokenNVX::offset;

	S_indirect_commands_token_NVX& operator=(const VkIndirectCommandsTokenNVX& rhs){static_cast<VkIndirectCommandsTokenNVX&>(*this)=rhs; return *this;}
	operator VkIndirectCommandsTokenNVX*()const{return const_cast<VkIndirectCommandsTokenNVX*>(static_cast<const VkIndirectCommandsTokenNVX*>(this));}
};

/*	VkIndirectCommandsLayoutTokenNVX
*/
struct	S_indirect_commands_layout_token_NVX:VkIndirectCommandsLayoutTokenNVX{
	using VkIndirectCommandsLayoutTokenNVX::tokenType;
	using VkIndirectCommandsLayoutTokenNVX::bindingUnit;
	using VkIndirectCommandsLayoutTokenNVX::dynamicCount;
	using VkIndirectCommandsLayoutTokenNVX::divisor;

	S_indirect_commands_layout_token_NVX& operator=(const VkIndirectCommandsLayoutTokenNVX& rhs){static_cast<VkIndirectCommandsLayoutTokenNVX&>(*this)=rhs; return *this;}
	operator VkIndirectCommandsLayoutTokenNVX*()const{return const_cast<VkIndirectCommandsLayoutTokenNVX*>(static_cast<const VkIndirectCommandsLayoutTokenNVX*>(this));}
};

/*	VkIndirectCommandsLayoutCreateInfoNVX
*/
struct	S_indirect_commands_layout_create_info_NVX:VkIndirectCommandsLayoutCreateInfoNVX{
private:
	using VkIndirectCommandsLayoutCreateInfoNVX::sType;
	using VkIndirectCommandsLayoutCreateInfoNVX::pNext;
public:
	using VkIndirectCommandsLayoutCreateInfoNVX::pipelineBindPoint;
	using VkIndirectCommandsLayoutCreateInfoNVX::flags;
	using VkIndirectCommandsLayoutCreateInfoNVX::tokenCount;
	using VkIndirectCommandsLayoutCreateInfoNVX::pTokens;

S_indirect_commands_layout_create_info_NVX():VkIndirectCommandsLayoutCreateInfoNVX{VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX,nullptr}{}
S_indirect_commands_layout_create_info_NVX(
	E_pipeline_bind_point pipelineBindPoint_,
	F_indirect_commands_layout_usage_NVX flags_,
	uint32_t tokenCount_,
	const S_indirect_commands_layout_token_NVX * pTokens_)
	:VkIndirectCommandsLayoutCreateInfoNVX{
	VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX
	,nullptr
	,pipelineBindPoint_
	,flags_
	,tokenCount_
	,pTokens_}
	{
	}

	S_indirect_commands_layout_create_info_NVX& operator=(const VkIndirectCommandsLayoutCreateInfoNVX& rhs){static_cast<VkIndirectCommandsLayoutCreateInfoNVX&>(*this)=rhs; return *this;}
	operator VkIndirectCommandsLayoutCreateInfoNVX*()const{return const_cast<VkIndirectCommandsLayoutCreateInfoNVX*>(static_cast<const VkIndirectCommandsLayoutCreateInfoNVX*>(this));}
};

/*	VkCmdProcessCommandsInfoNVX
*/
struct	S_cmd_process_commands_info_NVX:VkCmdProcessCommandsInfoNVX{
private:
	using VkCmdProcessCommandsInfoNVX::sType;
	using VkCmdProcessCommandsInfoNVX::pNext;
public:
	using VkCmdProcessCommandsInfoNVX::objectTable;
	using VkCmdProcessCommandsInfoNVX::indirectCommandsLayout;
	using VkCmdProcessCommandsInfoNVX::indirectCommandsTokenCount;
	using VkCmdProcessCommandsInfoNVX::pIndirectCommandsTokens;
	using VkCmdProcessCommandsInfoNVX::maxSequencesCount;
	using VkCmdProcessCommandsInfoNVX::targetCommandBuffer;
	using VkCmdProcessCommandsInfoNVX::sequencesCountBuffer;
	using VkCmdProcessCommandsInfoNVX::sequencesCountOffset;
	using VkCmdProcessCommandsInfoNVX::sequencesIndexBuffer;
	using VkCmdProcessCommandsInfoNVX::sequencesIndexOffset;

S_cmd_process_commands_info_NVX():VkCmdProcessCommandsInfoNVX{VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX,nullptr}{}
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
	:VkCmdProcessCommandsInfoNVX{
	VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX
	,nullptr
	,objectTable_
	,indirectCommandsLayout_
	,indirectCommandsTokenCount_
	,pIndirectCommandsTokens_
	,maxSequencesCount_
	,targetCommandBuffer_
	,sequencesCountBuffer_
	,sequencesCountOffset_
	,sequencesIndexBuffer_
	,sequencesIndexOffset_}
	{
	}

	S_cmd_process_commands_info_NVX& operator=(const VkCmdProcessCommandsInfoNVX& rhs){static_cast<VkCmdProcessCommandsInfoNVX&>(*this)=rhs; return *this;}
	operator VkCmdProcessCommandsInfoNVX*()const{return const_cast<VkCmdProcessCommandsInfoNVX*>(static_cast<const VkCmdProcessCommandsInfoNVX*>(this));}
};

/*	VkCmdReserveSpaceForCommandsInfoNVX
*/
struct	S_cmd_reserve_space_for_commands_info_NVX:VkCmdReserveSpaceForCommandsInfoNVX{
private:
	using VkCmdReserveSpaceForCommandsInfoNVX::sType;
	using VkCmdReserveSpaceForCommandsInfoNVX::pNext;
public:
	using VkCmdReserveSpaceForCommandsInfoNVX::objectTable;
	using VkCmdReserveSpaceForCommandsInfoNVX::indirectCommandsLayout;
	using VkCmdReserveSpaceForCommandsInfoNVX::maxSequencesCount;

S_cmd_reserve_space_for_commands_info_NVX():VkCmdReserveSpaceForCommandsInfoNVX{VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX,nullptr}{}
S_cmd_reserve_space_for_commands_info_NVX(
	VkObjectTableNVX objectTable_,
	VkIndirectCommandsLayoutNVX indirectCommandsLayout_,
	uint32_t maxSequencesCount_)
	:VkCmdReserveSpaceForCommandsInfoNVX{
	VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX
	,nullptr
	,objectTable_
	,indirectCommandsLayout_
	,maxSequencesCount_}
	{
	}

	S_cmd_reserve_space_for_commands_info_NVX& operator=(const VkCmdReserveSpaceForCommandsInfoNVX& rhs){static_cast<VkCmdReserveSpaceForCommandsInfoNVX&>(*this)=rhs; return *this;}
	operator VkCmdReserveSpaceForCommandsInfoNVX*()const{return const_cast<VkCmdReserveSpaceForCommandsInfoNVX*>(static_cast<const VkCmdReserveSpaceForCommandsInfoNVX*>(this));}
};

/*	VkObjectTableCreateInfoNVX
*/
struct	S_object_table_create_info_NVX:VkObjectTableCreateInfoNVX{
private:
	using VkObjectTableCreateInfoNVX::sType;
	using VkObjectTableCreateInfoNVX::pNext;
public:
	using VkObjectTableCreateInfoNVX::objectCount;
	using VkObjectTableCreateInfoNVX::pObjectEntryTypes;
	using VkObjectTableCreateInfoNVX::pObjectEntryCounts;
	using VkObjectTableCreateInfoNVX::pObjectEntryUsageFlags;
	using VkObjectTableCreateInfoNVX::maxUniformBuffersPerDescriptor;
	using VkObjectTableCreateInfoNVX::maxStorageBuffersPerDescriptor;
	using VkObjectTableCreateInfoNVX::maxStorageImagesPerDescriptor;
	using VkObjectTableCreateInfoNVX::maxSampledImagesPerDescriptor;
	using VkObjectTableCreateInfoNVX::maxPipelineLayouts;

S_object_table_create_info_NVX():VkObjectTableCreateInfoNVX{VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX,nullptr}{}
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
	:VkObjectTableCreateInfoNVX{
	VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX
	,nullptr
	,objectCount_
	,*pObjectEntryTypes_
	,pObjectEntryCounts_
	,*pObjectEntryUsageFlags_
	,maxUniformBuffersPerDescriptor_
	,maxStorageBuffersPerDescriptor_
	,maxStorageImagesPerDescriptor_
	,maxSampledImagesPerDescriptor_
	,maxPipelineLayouts_}
	{
	}

	S_object_table_create_info_NVX& operator=(const VkObjectTableCreateInfoNVX& rhs){static_cast<VkObjectTableCreateInfoNVX&>(*this)=rhs; return *this;}
	operator VkObjectTableCreateInfoNVX*()const{return const_cast<VkObjectTableCreateInfoNVX*>(static_cast<const VkObjectTableCreateInfoNVX*>(this));}
};

/*	VkObjectTableEntryNVX
*/
struct	S_object_table_entry_NVX:VkObjectTableEntryNVX{
	using VkObjectTableEntryNVX::type;
	using VkObjectTableEntryNVX::flags;

	S_object_table_entry_NVX& operator=(const VkObjectTableEntryNVX& rhs){static_cast<VkObjectTableEntryNVX&>(*this)=rhs; return *this;}
	operator VkObjectTableEntryNVX*()const{return const_cast<VkObjectTableEntryNVX*>(static_cast<const VkObjectTableEntryNVX*>(this));}
};

/*	VkObjectTablePipelineEntryNVX
*/
struct	S_object_table_pipeline_entry_NVX:VkObjectTablePipelineEntryNVX{
	using VkObjectTablePipelineEntryNVX::type;
	using VkObjectTablePipelineEntryNVX::flags;
	using VkObjectTablePipelineEntryNVX::pipeline;

	S_object_table_pipeline_entry_NVX& operator=(const VkObjectTablePipelineEntryNVX& rhs){static_cast<VkObjectTablePipelineEntryNVX&>(*this)=rhs; return *this;}
	operator VkObjectTablePipelineEntryNVX*()const{return const_cast<VkObjectTablePipelineEntryNVX*>(static_cast<const VkObjectTablePipelineEntryNVX*>(this));}
};

/*	VkObjectTableDescriptorSetEntryNVX
*/
struct	S_object_table_descriptor_set_entry_NVX:VkObjectTableDescriptorSetEntryNVX{
	using VkObjectTableDescriptorSetEntryNVX::type;
	using VkObjectTableDescriptorSetEntryNVX::flags;
	using VkObjectTableDescriptorSetEntryNVX::pipelineLayout;
	using VkObjectTableDescriptorSetEntryNVX::descriptorSet;

	S_object_table_descriptor_set_entry_NVX& operator=(const VkObjectTableDescriptorSetEntryNVX& rhs){static_cast<VkObjectTableDescriptorSetEntryNVX&>(*this)=rhs; return *this;}
	operator VkObjectTableDescriptorSetEntryNVX*()const{return const_cast<VkObjectTableDescriptorSetEntryNVX*>(static_cast<const VkObjectTableDescriptorSetEntryNVX*>(this));}
};

/*	VkObjectTableVertexBufferEntryNVX
*/
struct	S_object_table_vertex_buffer_entry_NVX:VkObjectTableVertexBufferEntryNVX{
	using VkObjectTableVertexBufferEntryNVX::type;
	using VkObjectTableVertexBufferEntryNVX::flags;
	using VkObjectTableVertexBufferEntryNVX::buffer;

	S_object_table_vertex_buffer_entry_NVX& operator=(const VkObjectTableVertexBufferEntryNVX& rhs){static_cast<VkObjectTableVertexBufferEntryNVX&>(*this)=rhs; return *this;}
	operator VkObjectTableVertexBufferEntryNVX*()const{return const_cast<VkObjectTableVertexBufferEntryNVX*>(static_cast<const VkObjectTableVertexBufferEntryNVX*>(this));}
};

/*	VkObjectTableIndexBufferEntryNVX
*/
struct	S_object_table_index_buffer_entry_NVX:VkObjectTableIndexBufferEntryNVX{
	using VkObjectTableIndexBufferEntryNVX::type;
	using VkObjectTableIndexBufferEntryNVX::flags;
	using VkObjectTableIndexBufferEntryNVX::buffer;
	using VkObjectTableIndexBufferEntryNVX::indexType;

	S_object_table_index_buffer_entry_NVX& operator=(const VkObjectTableIndexBufferEntryNVX& rhs){static_cast<VkObjectTableIndexBufferEntryNVX&>(*this)=rhs; return *this;}
	operator VkObjectTableIndexBufferEntryNVX*()const{return const_cast<VkObjectTableIndexBufferEntryNVX*>(static_cast<const VkObjectTableIndexBufferEntryNVX*>(this));}
};

/*	VkObjectTablePushConstantEntryNVX
*/
struct	S_object_table_push_constant_entry_NVX:VkObjectTablePushConstantEntryNVX{
	using VkObjectTablePushConstantEntryNVX::type;
	using VkObjectTablePushConstantEntryNVX::flags;
	using VkObjectTablePushConstantEntryNVX::pipelineLayout;
	using VkObjectTablePushConstantEntryNVX::stageFlags;

	S_object_table_push_constant_entry_NVX& operator=(const VkObjectTablePushConstantEntryNVX& rhs){static_cast<VkObjectTablePushConstantEntryNVX&>(*this)=rhs; return *this;}
	operator VkObjectTablePushConstantEntryNVX*()const{return const_cast<VkObjectTablePushConstantEntryNVX*>(static_cast<const VkObjectTablePushConstantEntryNVX*>(this));}
};

/*	VkPhysicalDevicePushDescriptorPropertiesKHR
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_push_descriptor_properties_KHR:VkPhysicalDevicePushDescriptorPropertiesKHR{
private:
	using VkPhysicalDevicePushDescriptorPropertiesKHR::sType;
	using VkPhysicalDevicePushDescriptorPropertiesKHR::pNext;
public:
	using VkPhysicalDevicePushDescriptorPropertiesKHR::maxPushDescriptors;

S_physical_device_push_descriptor_properties_KHR():VkPhysicalDevicePushDescriptorPropertiesKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR,nullptr}{}
S_physical_device_push_descriptor_properties_KHR(
	uint32_t maxPushDescriptors_)
	:VkPhysicalDevicePushDescriptorPropertiesKHR{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR
	,nullptr
	,maxPushDescriptors_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_push_descriptor_properties_KHR& operator=(const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs){static_cast<VkPhysicalDevicePushDescriptorPropertiesKHR&>(*this)=rhs; return *this;}
	operator VkPhysicalDevicePushDescriptorPropertiesKHR*()const{return const_cast<VkPhysicalDevicePushDescriptorPropertiesKHR*>(static_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR*>(this));}
};

/*	VkPhysicalDeviceIDProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_id_properties:VkPhysicalDeviceIDProperties{
private:
	using VkPhysicalDeviceIDProperties::sType;
	using VkPhysicalDeviceIDProperties::pNext;
public:
	using VkPhysicalDeviceIDProperties::deviceUUID;
	using VkPhysicalDeviceIDProperties::driverUUID;
	using VkPhysicalDeviceIDProperties::deviceLUID;
	using VkPhysicalDeviceIDProperties::deviceNodeMask;
	using VkPhysicalDeviceIDProperties::deviceLUIDValid;

S_physical_device_id_properties():VkPhysicalDeviceIDProperties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES,nullptr}{}
S_physical_device_id_properties(
	uint8_t deviceUUID_[VK_UUID_SIZE],
	uint8_t driverUUID_[VK_UUID_SIZE],
	uint8_t deviceLUID_[VK_LUID_SIZE],
	uint32_t deviceNodeMask_,
	VkBool32 deviceLUIDValid_)
	:VkPhysicalDeviceIDProperties{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES
	,nullptr
	,{}
	,{}
	,{}
	,deviceNodeMask_
	,deviceLUIDValid_}
	{
		memcpy(deviceUUID,deviceUUID_,sizeof(deviceUUID_) );
		memcpy(driverUUID,driverUUID_,sizeof(driverUUID_) );
		memcpy(deviceLUID,deviceLUID_,sizeof(deviceLUID_) );
	}

friend S_physical_device_properties2;

	S_physical_device_id_properties& operator=(const VkPhysicalDeviceIDProperties& rhs){static_cast<VkPhysicalDeviceIDProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceIDProperties*()const{return const_cast<VkPhysicalDeviceIDProperties*>(static_cast<const VkPhysicalDeviceIDProperties*>(this));}
};

/*	VkPhysicalDeviceMultiviewProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_multiview_properties:VkPhysicalDeviceMultiviewProperties{
private:
	using VkPhysicalDeviceMultiviewProperties::sType;
	using VkPhysicalDeviceMultiviewProperties::pNext;
public:
	using VkPhysicalDeviceMultiviewProperties::maxMultiviewViewCount;
	using VkPhysicalDeviceMultiviewProperties::maxMultiviewInstanceIndex;

S_physical_device_multiview_properties():VkPhysicalDeviceMultiviewProperties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES,nullptr}{}
S_physical_device_multiview_properties(
	uint32_t maxMultiviewViewCount_,
	uint32_t maxMultiviewInstanceIndex_)
	:VkPhysicalDeviceMultiviewProperties{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES
	,nullptr
	,maxMultiviewViewCount_
	,maxMultiviewInstanceIndex_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_multiview_properties& operator=(const VkPhysicalDeviceMultiviewProperties& rhs){static_cast<VkPhysicalDeviceMultiviewProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceMultiviewProperties*()const{return const_cast<VkPhysicalDeviceMultiviewProperties*>(static_cast<const VkPhysicalDeviceMultiviewProperties*>(this));}
};

/*	VkPhysicalDeviceDiscardRectanglePropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_discard_rectangle_properties_EXT:VkPhysicalDeviceDiscardRectanglePropertiesEXT{
private:
	using VkPhysicalDeviceDiscardRectanglePropertiesEXT::sType;
	using VkPhysicalDeviceDiscardRectanglePropertiesEXT::pNext;
public:
	using VkPhysicalDeviceDiscardRectanglePropertiesEXT::maxDiscardRectangles;

S_physical_device_discard_rectangle_properties_EXT():VkPhysicalDeviceDiscardRectanglePropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT,nullptr}{}
S_physical_device_discard_rectangle_properties_EXT(
	uint32_t maxDiscardRectangles_)
	:VkPhysicalDeviceDiscardRectanglePropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT
	,nullptr
	,maxDiscardRectangles_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_discard_rectangle_properties_EXT& operator=(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs){static_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceDiscardRectanglePropertiesEXT*()const{return const_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(static_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_multiview_per_view_attributes_properties_NVX:VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX{
private:
	using VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::sType;
	using VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::pNext;
public:
	using VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::perViewPositionAllComponents;

S_physical_device_multiview_per_view_attributes_properties_NVX():VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX,nullptr}{}
S_physical_device_multiview_per_view_attributes_properties_NVX(
	VkBool32 perViewPositionAllComponents_)
	:VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX
	,nullptr
	,perViewPositionAllComponents_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_multiview_per_view_attributes_properties_NVX& operator=(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs){static_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*()const{return const_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*>(static_cast<const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*>(this));}
};

/*	VkPhysicalDeviceSubgroupProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_subgroup_properties:VkPhysicalDeviceSubgroupProperties{
private:
	using VkPhysicalDeviceSubgroupProperties::sType;
	using VkPhysicalDeviceSubgroupProperties::pNext;
public:
	using VkPhysicalDeviceSubgroupProperties::subgroupSize;
	using VkPhysicalDeviceSubgroupProperties::supportedStages;
	using VkPhysicalDeviceSubgroupProperties::supportedOperations;
	using VkPhysicalDeviceSubgroupProperties::quadOperationsInAllStages;

S_physical_device_subgroup_properties():VkPhysicalDeviceSubgroupProperties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES,nullptr}{}
S_physical_device_subgroup_properties(
	uint32_t subgroupSize_,
	F_shader_stage supportedStages_,
	F_subgroup_feature supportedOperations_,
	VkBool32 quadOperationsInAllStages_)
	:VkPhysicalDeviceSubgroupProperties{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES
	,nullptr
	,subgroupSize_
	,supportedStages_
	,supportedOperations_
	,quadOperationsInAllStages_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_subgroup_properties& operator=(const VkPhysicalDeviceSubgroupProperties& rhs){static_cast<VkPhysicalDeviceSubgroupProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceSubgroupProperties*()const{return const_cast<VkPhysicalDeviceSubgroupProperties*>(static_cast<const VkPhysicalDeviceSubgroupProperties*>(this));}
};

/*	VkPhysicalDevicePointClippingProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_point_clipping_properties:VkPhysicalDevicePointClippingProperties{
private:
	using VkPhysicalDevicePointClippingProperties::sType;
	using VkPhysicalDevicePointClippingProperties::pNext;
public:
	using VkPhysicalDevicePointClippingProperties::pointClippingBehavior;

S_physical_device_point_clipping_properties():VkPhysicalDevicePointClippingProperties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES,nullptr}{}
S_physical_device_point_clipping_properties(
	E_point_clipping_behavior pointClippingBehavior_)
	:VkPhysicalDevicePointClippingProperties{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES
	,nullptr
	,pointClippingBehavior_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_point_clipping_properties& operator=(const VkPhysicalDevicePointClippingProperties& rhs){static_cast<VkPhysicalDevicePointClippingProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDevicePointClippingProperties*()const{return const_cast<VkPhysicalDevicePointClippingProperties*>(static_cast<const VkPhysicalDevicePointClippingProperties*>(this));}
};

/*	VkPhysicalDeviceProtectedMemoryProperties
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_protected_memory_properties:VkPhysicalDeviceProtectedMemoryProperties{
private:
	using VkPhysicalDeviceProtectedMemoryProperties::sType;
	using VkPhysicalDeviceProtectedMemoryProperties::pNext;
public:
	using VkPhysicalDeviceProtectedMemoryProperties::protectedNoFault;

S_physical_device_protected_memory_properties():VkPhysicalDeviceProtectedMemoryProperties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES,nullptr}{}
S_physical_device_protected_memory_properties(
	VkBool32 protectedNoFault_)
	:VkPhysicalDeviceProtectedMemoryProperties{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES
	,nullptr
	,protectedNoFault_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_protected_memory_properties& operator=(const VkPhysicalDeviceProtectedMemoryProperties& rhs){static_cast<VkPhysicalDeviceProtectedMemoryProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceProtectedMemoryProperties*()const{return const_cast<VkPhysicalDeviceProtectedMemoryProperties*>(static_cast<const VkPhysicalDeviceProtectedMemoryProperties*>(this));}
};

/*	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_sampler_filter_minmax_properties_EXT:VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT{
private:
	using VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::sType;
	using VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::filterMinmaxSingleComponentFormats;
	using VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::filterMinmaxImageComponentMapping;

S_physical_device_sampler_filter_minmax_properties_EXT():VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT,nullptr}{}
S_physical_device_sampler_filter_minmax_properties_EXT(
	VkBool32 filterMinmaxSingleComponentFormats_,
	VkBool32 filterMinmaxImageComponentMapping_)
	:VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT
	,nullptr
	,filterMinmaxSingleComponentFormats_
	,filterMinmaxImageComponentMapping_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_sampler_filter_minmax_properties_EXT& operator=(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& rhs){static_cast<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT*()const{return const_cast<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT*>(static_cast<const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceSampleLocationsPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_sample_locations_properties_EXT:VkPhysicalDeviceSampleLocationsPropertiesEXT{
private:
	using VkPhysicalDeviceSampleLocationsPropertiesEXT::sType;
	using VkPhysicalDeviceSampleLocationsPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceSampleLocationsPropertiesEXT::sampleLocationSampleCounts;
	using VkPhysicalDeviceSampleLocationsPropertiesEXT::maxSampleLocationGridSize;
	using VkPhysicalDeviceSampleLocationsPropertiesEXT::sampleLocationCoordinateRange;
	using VkPhysicalDeviceSampleLocationsPropertiesEXT::sampleLocationSubPixelBits;
	using VkPhysicalDeviceSampleLocationsPropertiesEXT::variableSampleLocations;

S_physical_device_sample_locations_properties_EXT():VkPhysicalDeviceSampleLocationsPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT,nullptr}{}
S_physical_device_sample_locations_properties_EXT(
	F_sample_count sampleLocationSampleCounts_,
	S_extent_2d maxSampleLocationGridSize_,
	float sampleLocationCoordinateRange_[2],
	uint32_t sampleLocationSubPixelBits_,
	VkBool32 variableSampleLocations_)
	:VkPhysicalDeviceSampleLocationsPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT
	,nullptr
	,sampleLocationSampleCounts_
	,maxSampleLocationGridSize_
	,{}
	,sampleLocationSubPixelBits_
	,variableSampleLocations_}
	{
		memcpy(sampleLocationCoordinateRange,sampleLocationCoordinateRange_,sizeof(sampleLocationCoordinateRange_) );
	}

friend S_physical_device_properties2;

	S_physical_device_sample_locations_properties_EXT& operator=(const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs){static_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceSampleLocationsPropertiesEXT*()const{return const_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT*>(static_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_blend_operation_advanced_properties_EXT:VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT{
private:
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::sType;
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::advancedBlendMaxColorAttachments;
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::advancedBlendIndependentBlend;
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::advancedBlendNonPremultipliedSrcColor;
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::advancedBlendNonPremultipliedDstColor;
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::advancedBlendCorrelatedOverlap;
	using VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::advancedBlendAllOperations;

S_physical_device_blend_operation_advanced_properties_EXT():VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT,nullptr}{}
S_physical_device_blend_operation_advanced_properties_EXT(
	uint32_t advancedBlendMaxColorAttachments_,
	VkBool32 advancedBlendIndependentBlend_,
	VkBool32 advancedBlendNonPremultipliedSrcColor_,
	VkBool32 advancedBlendNonPremultipliedDstColor_,
	VkBool32 advancedBlendCorrelatedOverlap_,
	VkBool32 advancedBlendAllOperations_)
	:VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT
	,nullptr
	,advancedBlendMaxColorAttachments_
	,advancedBlendIndependentBlend_
	,advancedBlendNonPremultipliedSrcColor_
	,advancedBlendNonPremultipliedDstColor_
	,advancedBlendCorrelatedOverlap_
	,advancedBlendAllOperations_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_blend_operation_advanced_properties_EXT& operator=(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs){static_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*()const{return const_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*>(static_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceMaintenance3Properties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_maintenance3_properties:VkPhysicalDeviceMaintenance3Properties{
private:
	using VkPhysicalDeviceMaintenance3Properties::sType;
	using VkPhysicalDeviceMaintenance3Properties::pNext;
public:
	using VkPhysicalDeviceMaintenance3Properties::maxPerSetDescriptors;
	using VkPhysicalDeviceMaintenance3Properties::maxMemoryAllocationSize;

S_physical_device_maintenance3_properties():VkPhysicalDeviceMaintenance3Properties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES,nullptr}{}
S_physical_device_maintenance3_properties(
	uint32_t maxPerSetDescriptors_,
	VkDeviceSize maxMemoryAllocationSize_)
	:VkPhysicalDeviceMaintenance3Properties{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES
	,nullptr
	,maxPerSetDescriptors_
	,maxMemoryAllocationSize_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_maintenance3_properties& operator=(const VkPhysicalDeviceMaintenance3Properties& rhs){static_cast<VkPhysicalDeviceMaintenance3Properties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceMaintenance3Properties*()const{return const_cast<VkPhysicalDeviceMaintenance3Properties*>(static_cast<const VkPhysicalDeviceMaintenance3Properties*>(this));}
};

/*	VkPhysicalDeviceExternalMemoryHostPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_external_memory_host_properties_EXT:VkPhysicalDeviceExternalMemoryHostPropertiesEXT{
private:
	using VkPhysicalDeviceExternalMemoryHostPropertiesEXT::sType;
	using VkPhysicalDeviceExternalMemoryHostPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceExternalMemoryHostPropertiesEXT::minImportedHostPointerAlignment;

S_physical_device_external_memory_host_properties_EXT():VkPhysicalDeviceExternalMemoryHostPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT,nullptr}{}
S_physical_device_external_memory_host_properties_EXT(
	VkDeviceSize minImportedHostPointerAlignment_)
	:VkPhysicalDeviceExternalMemoryHostPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT
	,nullptr
	,minImportedHostPointerAlignment_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_external_memory_host_properties_EXT& operator=(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs){static_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceExternalMemoryHostPropertiesEXT*()const{return const_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT*>(static_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceConservativeRasterizationPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_conservative_rasterization_properties_EXT:VkPhysicalDeviceConservativeRasterizationPropertiesEXT{
private:
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::sType;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::primitiveOverestimationSize;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::maxExtraPrimitiveOverestimationSize;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::extraPrimitiveOverestimationSizeGranularity;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::primitiveUnderestimation;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::conservativePointAndLineRasterization;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::degenerateTrianglesRasterized;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::degenerateLinesRasterized;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::fullyCoveredFragmentShaderInputVariable;
	using VkPhysicalDeviceConservativeRasterizationPropertiesEXT::conservativeRasterizationPostDepthCoverage;

S_physical_device_conservative_rasterization_properties_EXT():VkPhysicalDeviceConservativeRasterizationPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT,nullptr}{}
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
	:VkPhysicalDeviceConservativeRasterizationPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT
	,nullptr
	,primitiveOverestimationSize_
	,maxExtraPrimitiveOverestimationSize_
	,extraPrimitiveOverestimationSizeGranularity_
	,primitiveUnderestimation_
	,conservativePointAndLineRasterization_
	,degenerateTrianglesRasterized_
	,degenerateLinesRasterized_
	,fullyCoveredFragmentShaderInputVariable_
	,conservativeRasterizationPostDepthCoverage_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_conservative_rasterization_properties_EXT& operator=(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs){static_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceConservativeRasterizationPropertiesEXT*()const{return const_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT*>(static_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceShaderCorePropertiesAMD
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_shader_core_properties_AMD:VkPhysicalDeviceShaderCorePropertiesAMD{
private:
	using VkPhysicalDeviceShaderCorePropertiesAMD::sType;
	using VkPhysicalDeviceShaderCorePropertiesAMD::pNext;
public:
	using VkPhysicalDeviceShaderCorePropertiesAMD::shaderEngineCount;
	using VkPhysicalDeviceShaderCorePropertiesAMD::shaderArraysPerEngineCount;
	using VkPhysicalDeviceShaderCorePropertiesAMD::computeUnitsPerShaderArray;
	using VkPhysicalDeviceShaderCorePropertiesAMD::simdPerComputeUnit;
	using VkPhysicalDeviceShaderCorePropertiesAMD::wavefrontsPerSimd;
	using VkPhysicalDeviceShaderCorePropertiesAMD::wavefrontSize;
	using VkPhysicalDeviceShaderCorePropertiesAMD::sgprsPerSimd;
	using VkPhysicalDeviceShaderCorePropertiesAMD::minSgprAllocation;
	using VkPhysicalDeviceShaderCorePropertiesAMD::maxSgprAllocation;
	using VkPhysicalDeviceShaderCorePropertiesAMD::sgprAllocationGranularity;
	using VkPhysicalDeviceShaderCorePropertiesAMD::vgprsPerSimd;
	using VkPhysicalDeviceShaderCorePropertiesAMD::minVgprAllocation;
	using VkPhysicalDeviceShaderCorePropertiesAMD::maxVgprAllocation;
	using VkPhysicalDeviceShaderCorePropertiesAMD::vgprAllocationGranularity;

S_physical_device_shader_core_properties_AMD():VkPhysicalDeviceShaderCorePropertiesAMD{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD,nullptr}{}
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
	:VkPhysicalDeviceShaderCorePropertiesAMD{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD
	,nullptr
	,shaderEngineCount_
	,shaderArraysPerEngineCount_
	,computeUnitsPerShaderArray_
	,simdPerComputeUnit_
	,wavefrontsPerSimd_
	,wavefrontSize_
	,sgprsPerSimd_
	,minSgprAllocation_
	,maxSgprAllocation_
	,sgprAllocationGranularity_
	,vgprsPerSimd_
	,minVgprAllocation_
	,maxVgprAllocation_
	,vgprAllocationGranularity_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_shader_core_properties_AMD& operator=(const VkPhysicalDeviceShaderCorePropertiesAMD& rhs){static_cast<VkPhysicalDeviceShaderCorePropertiesAMD&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceShaderCorePropertiesAMD*()const{return const_cast<VkPhysicalDeviceShaderCorePropertiesAMD*>(static_cast<const VkPhysicalDeviceShaderCorePropertiesAMD*>(this));}
};

/*	VkPhysicalDeviceDescriptorIndexingPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_descriptor_indexing_properties_EXT:VkPhysicalDeviceDescriptorIndexingPropertiesEXT{
private:
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::sType;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxUpdateAfterBindDescriptorsInAllPools;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::shaderUniformBufferArrayNonUniformIndexingNative;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::shaderSampledImageArrayNonUniformIndexingNative;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::shaderStorageBufferArrayNonUniformIndexingNative;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::shaderStorageImageArrayNonUniformIndexingNative;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::shaderInputAttachmentArrayNonUniformIndexingNative;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::robustBufferAccessUpdateAfterBind;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::quadDivergentImplicitLod;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxPerStageDescriptorUpdateAfterBindSamplers;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxPerStageDescriptorUpdateAfterBindUniformBuffers;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxPerStageDescriptorUpdateAfterBindStorageBuffers;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxPerStageDescriptorUpdateAfterBindSampledImages;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxPerStageDescriptorUpdateAfterBindStorageImages;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxPerStageDescriptorUpdateAfterBindInputAttachments;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxPerStageUpdateAfterBindResources;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindSamplers;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindUniformBuffers;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindStorageBuffers;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindSampledImages;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindStorageImages;
	using VkPhysicalDeviceDescriptorIndexingPropertiesEXT::maxDescriptorSetUpdateAfterBindInputAttachments;

S_physical_device_descriptor_indexing_properties_EXT():VkPhysicalDeviceDescriptorIndexingPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT,nullptr}{}
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
	:VkPhysicalDeviceDescriptorIndexingPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT
	,nullptr
	,maxUpdateAfterBindDescriptorsInAllPools_
	,shaderUniformBufferArrayNonUniformIndexingNative_
	,shaderSampledImageArrayNonUniformIndexingNative_
	,shaderStorageBufferArrayNonUniformIndexingNative_
	,shaderStorageImageArrayNonUniformIndexingNative_
	,shaderInputAttachmentArrayNonUniformIndexingNative_
	,robustBufferAccessUpdateAfterBind_
	,quadDivergentImplicitLod_
	,maxPerStageDescriptorUpdateAfterBindSamplers_
	,maxPerStageDescriptorUpdateAfterBindUniformBuffers_
	,maxPerStageDescriptorUpdateAfterBindStorageBuffers_
	,maxPerStageDescriptorUpdateAfterBindSampledImages_
	,maxPerStageDescriptorUpdateAfterBindStorageImages_
	,maxPerStageDescriptorUpdateAfterBindInputAttachments_
	,maxPerStageUpdateAfterBindResources_
	,maxDescriptorSetUpdateAfterBindSamplers_
	,maxDescriptorSetUpdateAfterBindUniformBuffers_
	,maxDescriptorSetUpdateAfterBindUniformBuffersDynamic_
	,maxDescriptorSetUpdateAfterBindStorageBuffers_
	,maxDescriptorSetUpdateAfterBindStorageBuffersDynamic_
	,maxDescriptorSetUpdateAfterBindSampledImages_
	,maxDescriptorSetUpdateAfterBindStorageImages_
	,maxDescriptorSetUpdateAfterBindInputAttachments_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_descriptor_indexing_properties_EXT& operator=(const VkPhysicalDeviceDescriptorIndexingPropertiesEXT& rhs){static_cast<VkPhysicalDeviceDescriptorIndexingPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceDescriptorIndexingPropertiesEXT*()const{return const_cast<VkPhysicalDeviceDescriptorIndexingPropertiesEXT*>(static_cast<const VkPhysicalDeviceDescriptorIndexingPropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
struct	S_physical_device_vertex_attribute_divisor_properties_EXT:VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT{
private:
	using VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::sType;
	using VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::maxVertexAttribDivisor;

S_physical_device_vertex_attribute_divisor_properties_EXT():VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT,nullptr}{}
S_physical_device_vertex_attribute_divisor_properties_EXT(
	uint32_t maxVertexAttribDivisor_)
	:VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT
	,nullptr
	,maxVertexAttribDivisor_}
	{
	}

friend S_physical_device_properties2;

	S_physical_device_vertex_attribute_divisor_properties_EXT& operator=(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs){static_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*()const{return const_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*>(static_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*>(this));}
};

/*	VkPhysicalDeviceProperties2
(returnedonly)
ex:
	VkPhysicalDevicePushDescriptorPropertiesKHR
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
	VkPhysicalDeviceMaintenance3Properties
	VkPhysicalDeviceExternalMemoryHostPropertiesEXT
	VkPhysicalDeviceConservativeRasterizationPropertiesEXT
	VkPhysicalDeviceShaderCorePropertiesAMD
	VkPhysicalDeviceDescriptorIndexingPropertiesEXT
	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT
*/

struct N_physical_device_properties2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_physical_device_properties2& n_physical_device_push_descriptor_properties_KHR(S_physical_device_push_descriptor_properties_KHR const& next_);
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
N_physical_device_properties2& n_physical_device_maintenance3_properties(S_physical_device_maintenance3_properties const& next_);
N_physical_device_properties2& n_physical_device_external_memory_host_properties_EXT(S_physical_device_external_memory_host_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_conservative_rasterization_properties_EXT(S_physical_device_conservative_rasterization_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_shader_core_properties_AMD(S_physical_device_shader_core_properties_AMD const& next_);
N_physical_device_properties2& n_physical_device_descriptor_indexing_properties_EXT(S_physical_device_descriptor_indexing_properties_EXT const& next_);
N_physical_device_properties2& n_physical_device_vertex_attribute_divisor_properties_EXT(S_physical_device_vertex_attribute_divisor_properties_EXT const& next_);
};
struct	S_physical_device_properties2:VkPhysicalDeviceProperties2{
private:
	using VkPhysicalDeviceProperties2::sType;
	using VkPhysicalDeviceProperties2::pNext;
public:
	using VkPhysicalDeviceProperties2::properties;

S_physical_device_properties2():VkPhysicalDeviceProperties2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2,nullptr}{}
S_physical_device_properties2(
	S_physical_device_properties properties_)
	:VkPhysicalDeviceProperties2{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2
	,nullptr
	,properties_}
	{
	}

	S_physical_device_properties2& operator=(const VkPhysicalDeviceProperties2& rhs){static_cast<VkPhysicalDeviceProperties2&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceProperties2*()const{return const_cast<VkPhysicalDeviceProperties2*>(static_cast<const VkPhysicalDeviceProperties2*>(this));}

S_physical_device_properties2& n_physical_device_push_descriptor_properties_KHR(S_physical_device_push_descriptor_properties_KHR const& next_);
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
S_physical_device_properties2& n_physical_device_maintenance3_properties(S_physical_device_maintenance3_properties const& next_);
S_physical_device_properties2& n_physical_device_external_memory_host_properties_EXT(S_physical_device_external_memory_host_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_conservative_rasterization_properties_EXT(S_physical_device_conservative_rasterization_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_shader_core_properties_AMD(S_physical_device_shader_core_properties_AMD const& next_);
S_physical_device_properties2& n_physical_device_descriptor_indexing_properties_EXT(S_physical_device_descriptor_indexing_properties_EXT const& next_);
S_physical_device_properties2& n_physical_device_vertex_attribute_divisor_properties_EXT(S_physical_device_vertex_attribute_divisor_properties_EXT const& next_);
void set_pNext(N_physical_device_properties2 n_){pNext = n_;}
};

/*	VkFormatProperties2
(returnedonly)
*/
struct	S_format_properties2:VkFormatProperties2{
private:
	using VkFormatProperties2::sType;
	using VkFormatProperties2::pNext;
public:
	using VkFormatProperties2::formatProperties;

S_format_properties2():VkFormatProperties2{VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2,nullptr}{}
S_format_properties2(
	S_format_properties formatProperties_)
	:VkFormatProperties2{
	VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2
	,nullptr
	,formatProperties_}
	{
	}

	S_format_properties2& operator=(const VkFormatProperties2& rhs){static_cast<VkFormatProperties2&>(*this)=rhs; return *this;}
	operator VkFormatProperties2*()const{return const_cast<VkFormatProperties2*>(static_cast<const VkFormatProperties2*>(this));}
};

/*	VkExternalMemoryProperties
(returnedonly)
*/
struct	S_external_memory_properties:VkExternalMemoryProperties{
	using VkExternalMemoryProperties::externalMemoryFeatures;
	using VkExternalMemoryProperties::exportFromImportedHandleTypes;
	using VkExternalMemoryProperties::compatibleHandleTypes;

	S_external_memory_properties& operator=(const VkExternalMemoryProperties& rhs){static_cast<VkExternalMemoryProperties&>(*this)=rhs; return *this;}
	operator VkExternalMemoryProperties*()const{return const_cast<VkExternalMemoryProperties*>(static_cast<const VkExternalMemoryProperties*>(this));}
};

/*	VkExternalImageFormatProperties
(returnedonly)
ex to: VkImageFormatProperties2
*/
struct	S_external_image_format_properties:VkExternalImageFormatProperties{
private:
	using VkExternalImageFormatProperties::sType;
	using VkExternalImageFormatProperties::pNext;
public:
	using VkExternalImageFormatProperties::externalMemoryProperties;

S_external_image_format_properties():VkExternalImageFormatProperties{VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES,nullptr}{}
S_external_image_format_properties(
	S_external_memory_properties externalMemoryProperties_)
	:VkExternalImageFormatProperties{
	VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES
	,nullptr
	,externalMemoryProperties_}
	{
	}

friend S_image_format_properties2;

	S_external_image_format_properties& operator=(const VkExternalImageFormatProperties& rhs){static_cast<VkExternalImageFormatProperties&>(*this)=rhs; return *this;}
	operator VkExternalImageFormatProperties*()const{return const_cast<VkExternalImageFormatProperties*>(static_cast<const VkExternalImageFormatProperties*>(this));}
};

/*	VkSamplerYcbcrConversionImageFormatProperties
(returnedonly)
ex to: VkImageFormatProperties2
*/
struct	S_sampler_ycbcr_conversion_image_format_properties:VkSamplerYcbcrConversionImageFormatProperties{
private:
	using VkSamplerYcbcrConversionImageFormatProperties::sType;
	using VkSamplerYcbcrConversionImageFormatProperties::pNext;
public:
	using VkSamplerYcbcrConversionImageFormatProperties::combinedImageSamplerDescriptorCount;

S_sampler_ycbcr_conversion_image_format_properties():VkSamplerYcbcrConversionImageFormatProperties{VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES,nullptr}{}
S_sampler_ycbcr_conversion_image_format_properties(
	uint32_t combinedImageSamplerDescriptorCount_)
	:VkSamplerYcbcrConversionImageFormatProperties{
	VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES
	,nullptr
	,combinedImageSamplerDescriptorCount_}
	{
	}

friend S_image_format_properties2;

	S_sampler_ycbcr_conversion_image_format_properties& operator=(const VkSamplerYcbcrConversionImageFormatProperties& rhs){static_cast<VkSamplerYcbcrConversionImageFormatProperties&>(*this)=rhs; return *this;}
	operator VkSamplerYcbcrConversionImageFormatProperties*()const{return const_cast<VkSamplerYcbcrConversionImageFormatProperties*>(static_cast<const VkSamplerYcbcrConversionImageFormatProperties*>(this));}
};

/*	VkTextureLODGatherFormatPropertiesAMD
(returnedonly)
ex to: VkImageFormatProperties2
*/
struct	S_texture_lod_gather_format_properties_AMD:VkTextureLODGatherFormatPropertiesAMD{
private:
	using VkTextureLODGatherFormatPropertiesAMD::sType;
	using VkTextureLODGatherFormatPropertiesAMD::pNext;
public:
	using VkTextureLODGatherFormatPropertiesAMD::supportsTextureGatherLODBiasAMD;

S_texture_lod_gather_format_properties_AMD():VkTextureLODGatherFormatPropertiesAMD{VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD,nullptr}{}
S_texture_lod_gather_format_properties_AMD(
	VkBool32 supportsTextureGatherLODBiasAMD_)
	:VkTextureLODGatherFormatPropertiesAMD{
	VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD
	,nullptr
	,supportsTextureGatherLODBiasAMD_}
	{
	}

friend S_image_format_properties2;

	S_texture_lod_gather_format_properties_AMD& operator=(const VkTextureLODGatherFormatPropertiesAMD& rhs){static_cast<VkTextureLODGatherFormatPropertiesAMD&>(*this)=rhs; return *this;}
	operator VkTextureLODGatherFormatPropertiesAMD*()const{return const_cast<VkTextureLODGatherFormatPropertiesAMD*>(static_cast<const VkTextureLODGatherFormatPropertiesAMD*>(this));}
};

/*	VkAndroidHardwareBufferUsageANDROID
(returnedonly)
ex to: VkImageFormatProperties2
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct	S_android_hardware_buffer_usage_ANDROID:VkAndroidHardwareBufferUsageANDROID{
private:
	using VkAndroidHardwareBufferUsageANDROID::sType;
	using VkAndroidHardwareBufferUsageANDROID::pNext;
public:
	using VkAndroidHardwareBufferUsageANDROID::androidHardwareBufferUsage;

S_android_hardware_buffer_usage_ANDROID():VkAndroidHardwareBufferUsageANDROID{VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID,nullptr}{}
S_android_hardware_buffer_usage_ANDROID(
	uint64_t androidHardwareBufferUsage_)
	:VkAndroidHardwareBufferUsageANDROID{
	VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID
	,nullptr
	,androidHardwareBufferUsage_}
	{
	}

friend S_image_format_properties2;

	S_android_hardware_buffer_usage_ANDROID& operator=(const VkAndroidHardwareBufferUsageANDROID& rhs){static_cast<VkAndroidHardwareBufferUsageANDROID&>(*this)=rhs; return *this;}
	operator VkAndroidHardwareBufferUsageANDROID*()const{return const_cast<VkAndroidHardwareBufferUsageANDROID*>(static_cast<const VkAndroidHardwareBufferUsageANDROID*>(this));}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkImageFormatProperties2
(returnedonly)
ex:
	VkExternalImageFormatProperties
	VkSamplerYcbcrConversionImageFormatProperties
	VkTextureLODGatherFormatPropertiesAMD
	VkAndroidHardwareBufferUsageANDROID
*/

struct N_image_format_properties2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_image_format_properties2& n_external_image_format_properties(S_external_image_format_properties const& next_);
N_image_format_properties2& n_sampler_ycbcr_conversion_image_format_properties(S_sampler_ycbcr_conversion_image_format_properties const& next_);
N_image_format_properties2& n_texture_lod_gather_format_properties_AMD(S_texture_lod_gather_format_properties_AMD const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_image_format_properties2& n_android_hardware_buffer_usage_ANDROID(S_android_hardware_buffer_usage_ANDROID const& next_);
#endif
};
struct	S_image_format_properties2:VkImageFormatProperties2{
private:
	using VkImageFormatProperties2::sType;
	using VkImageFormatProperties2::pNext;
public:
	using VkImageFormatProperties2::imageFormatProperties;

S_image_format_properties2():VkImageFormatProperties2{VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2,nullptr}{}
S_image_format_properties2(
	S_image_format_properties imageFormatProperties_)
	:VkImageFormatProperties2{
	VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2
	,nullptr
	,imageFormatProperties_}
	{
	}

	S_image_format_properties2& operator=(const VkImageFormatProperties2& rhs){static_cast<VkImageFormatProperties2&>(*this)=rhs; return *this;}
	operator VkImageFormatProperties2*()const{return const_cast<VkImageFormatProperties2*>(static_cast<const VkImageFormatProperties2*>(this));}

S_image_format_properties2& n_external_image_format_properties(S_external_image_format_properties const& next_);
S_image_format_properties2& n_sampler_ycbcr_conversion_image_format_properties(S_sampler_ycbcr_conversion_image_format_properties const& next_);
S_image_format_properties2& n_texture_lod_gather_format_properties_AMD(S_texture_lod_gather_format_properties_AMD const& next_);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_image_format_properties2& n_android_hardware_buffer_usage_ANDROID(S_android_hardware_buffer_usage_ANDROID const& next_);
#endif
void set_pNext(N_image_format_properties2 n_){pNext = n_;}
};

/*	VkPhysicalDeviceExternalImageFormatInfo
ex to: VkPhysicalDeviceImageFormatInfo2
*/
struct	S_physical_device_external_image_format_info:VkPhysicalDeviceExternalImageFormatInfo{
private:
	using VkPhysicalDeviceExternalImageFormatInfo::sType;
	using VkPhysicalDeviceExternalImageFormatInfo::pNext;
public:
	using VkPhysicalDeviceExternalImageFormatInfo::handleType;

S_physical_device_external_image_format_info():VkPhysicalDeviceExternalImageFormatInfo{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO,nullptr}{}
S_physical_device_external_image_format_info(
	F_external_memory_handle_type handleType_)
	:VkPhysicalDeviceExternalImageFormatInfo{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO
	,nullptr
	,handleType_}
	{
	}

friend S_physical_device_image_format_info2;

	S_physical_device_external_image_format_info& operator=(const VkPhysicalDeviceExternalImageFormatInfo& rhs){static_cast<VkPhysicalDeviceExternalImageFormatInfo&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceExternalImageFormatInfo*()const{return const_cast<VkPhysicalDeviceExternalImageFormatInfo*>(static_cast<const VkPhysicalDeviceExternalImageFormatInfo*>(this));}
};

/*	VkPhysicalDeviceImageFormatInfo2
ex:
	VkPhysicalDeviceExternalImageFormatInfo
*/

struct N_physical_device_image_format_info2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_physical_device_image_format_info2& n_physical_device_external_image_format_info(S_physical_device_external_image_format_info const& next_);
};
struct	S_physical_device_image_format_info2:VkPhysicalDeviceImageFormatInfo2{
private:
	using VkPhysicalDeviceImageFormatInfo2::sType;
	using VkPhysicalDeviceImageFormatInfo2::pNext;
public:
	using VkPhysicalDeviceImageFormatInfo2::format;
	using VkPhysicalDeviceImageFormatInfo2::type;
	using VkPhysicalDeviceImageFormatInfo2::tiling;
	using VkPhysicalDeviceImageFormatInfo2::usage;
	using VkPhysicalDeviceImageFormatInfo2::flags;

S_physical_device_image_format_info2():VkPhysicalDeviceImageFormatInfo2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2,nullptr}{}
S_physical_device_image_format_info2(
	E_format format_,
	E_image_type type_,
	E_image_tiling tiling_,
	F_image_usage usage_,
	F_image_create flags_)
	:VkPhysicalDeviceImageFormatInfo2{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2
	,nullptr
	,format_
	,type_
	,tiling_
	,usage_
	,flags_}
	{
	}

	S_physical_device_image_format_info2& operator=(const VkPhysicalDeviceImageFormatInfo2& rhs){static_cast<VkPhysicalDeviceImageFormatInfo2&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceImageFormatInfo2*()const{return const_cast<VkPhysicalDeviceImageFormatInfo2*>(static_cast<const VkPhysicalDeviceImageFormatInfo2*>(this));}

S_physical_device_image_format_info2& n_physical_device_external_image_format_info(S_physical_device_external_image_format_info const& next_);
void set_pNext(N_physical_device_image_format_info2 n_){pNext = n_;}
};

/*	VkQueueFamilyCheckpointPropertiesNV
(returnedonly)
ex to: VkQueueFamilyProperties2
*/
struct	S_queue_family_checkpoint_properties_NV:VkQueueFamilyCheckpointPropertiesNV{
private:
	using VkQueueFamilyCheckpointPropertiesNV::sType;
	using VkQueueFamilyCheckpointPropertiesNV::pNext;
public:
	using VkQueueFamilyCheckpointPropertiesNV::checkpointExecutionStageMask;

S_queue_family_checkpoint_properties_NV():VkQueueFamilyCheckpointPropertiesNV{VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV,nullptr}{}
S_queue_family_checkpoint_properties_NV(
	F_pipeline_stage checkpointExecutionStageMask_)
	:VkQueueFamilyCheckpointPropertiesNV{
	VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV
	,nullptr
	,checkpointExecutionStageMask_}
	{
	}

friend S_queue_family_properties2;

	S_queue_family_checkpoint_properties_NV& operator=(const VkQueueFamilyCheckpointPropertiesNV& rhs){static_cast<VkQueueFamilyCheckpointPropertiesNV&>(*this)=rhs; return *this;}
	operator VkQueueFamilyCheckpointPropertiesNV*()const{return const_cast<VkQueueFamilyCheckpointPropertiesNV*>(static_cast<const VkQueueFamilyCheckpointPropertiesNV*>(this));}
};

/*	VkQueueFamilyProperties2
(returnedonly)
ex:
	VkQueueFamilyCheckpointPropertiesNV
*/

struct N_queue_family_properties2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_queue_family_properties2& n_queue_family_checkpoint_properties_NV(S_queue_family_checkpoint_properties_NV const& next_);
};
struct	S_queue_family_properties2:VkQueueFamilyProperties2{
private:
	using VkQueueFamilyProperties2::sType;
	using VkQueueFamilyProperties2::pNext;
public:
	using VkQueueFamilyProperties2::queueFamilyProperties;

S_queue_family_properties2():VkQueueFamilyProperties2{VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2,nullptr}{}
S_queue_family_properties2(
	S_queue_family_properties queueFamilyProperties_)
	:VkQueueFamilyProperties2{
	VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2
	,nullptr
	,queueFamilyProperties_}
	{
	}

	S_queue_family_properties2& operator=(const VkQueueFamilyProperties2& rhs){static_cast<VkQueueFamilyProperties2&>(*this)=rhs; return *this;}
	operator VkQueueFamilyProperties2*()const{return const_cast<VkQueueFamilyProperties2*>(static_cast<const VkQueueFamilyProperties2*>(this));}

S_queue_family_properties2& n_queue_family_checkpoint_properties_NV(S_queue_family_checkpoint_properties_NV const& next_);
void set_pNext(N_queue_family_properties2 n_){pNext = n_;}
};

/*	VkPhysicalDeviceMemoryProperties2
(returnedonly)
*/
struct	S_physical_device_memory_properties2:VkPhysicalDeviceMemoryProperties2{
private:
	using VkPhysicalDeviceMemoryProperties2::sType;
	using VkPhysicalDeviceMemoryProperties2::pNext;
public:
	using VkPhysicalDeviceMemoryProperties2::memoryProperties;

S_physical_device_memory_properties2():VkPhysicalDeviceMemoryProperties2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2,nullptr}{}
S_physical_device_memory_properties2(
	S_physical_device_memory_properties memoryProperties_)
	:VkPhysicalDeviceMemoryProperties2{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2
	,nullptr
	,memoryProperties_}
	{
	}

	S_physical_device_memory_properties2& operator=(const VkPhysicalDeviceMemoryProperties2& rhs){static_cast<VkPhysicalDeviceMemoryProperties2&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceMemoryProperties2*()const{return const_cast<VkPhysicalDeviceMemoryProperties2*>(static_cast<const VkPhysicalDeviceMemoryProperties2*>(this));}
};

/*	VkSparseImageFormatProperties2
(returnedonly)
*/
struct	S_sparse_image_format_properties2:VkSparseImageFormatProperties2{
private:
	using VkSparseImageFormatProperties2::sType;
	using VkSparseImageFormatProperties2::pNext;
public:
	using VkSparseImageFormatProperties2::properties;

S_sparse_image_format_properties2():VkSparseImageFormatProperties2{VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2,nullptr}{}
S_sparse_image_format_properties2(
	S_sparse_image_format_properties properties_)
	:VkSparseImageFormatProperties2{
	VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2
	,nullptr
	,properties_}
	{
	}

	S_sparse_image_format_properties2& operator=(const VkSparseImageFormatProperties2& rhs){static_cast<VkSparseImageFormatProperties2&>(*this)=rhs; return *this;}
	operator VkSparseImageFormatProperties2*()const{return const_cast<VkSparseImageFormatProperties2*>(static_cast<const VkSparseImageFormatProperties2*>(this));}
};

/*	VkPhysicalDeviceSparseImageFormatInfo2
*/
struct	S_physical_device_sparse_image_format_info2:VkPhysicalDeviceSparseImageFormatInfo2{
private:
	using VkPhysicalDeviceSparseImageFormatInfo2::sType;
	using VkPhysicalDeviceSparseImageFormatInfo2::pNext;
public:
	using VkPhysicalDeviceSparseImageFormatInfo2::format;
	using VkPhysicalDeviceSparseImageFormatInfo2::type;
	using VkPhysicalDeviceSparseImageFormatInfo2::samples;
	using VkPhysicalDeviceSparseImageFormatInfo2::usage;
	using VkPhysicalDeviceSparseImageFormatInfo2::tiling;

S_physical_device_sparse_image_format_info2():VkPhysicalDeviceSparseImageFormatInfo2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2,nullptr}{}
S_physical_device_sparse_image_format_info2(
	E_format format_,
	E_image_type type_,
	F_sample_count samples_,
	F_image_usage usage_,
	E_image_tiling tiling_)
	:VkPhysicalDeviceSparseImageFormatInfo2{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2
	,nullptr
	,format_
	,type_
	,samples_
	,usage_
	,tiling_}
	{
	}

	S_physical_device_sparse_image_format_info2& operator=(const VkPhysicalDeviceSparseImageFormatInfo2& rhs){static_cast<VkPhysicalDeviceSparseImageFormatInfo2&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceSparseImageFormatInfo2*()const{return const_cast<VkPhysicalDeviceSparseImageFormatInfo2*>(static_cast<const VkPhysicalDeviceSparseImageFormatInfo2*>(this));}
};

/*	VkPhysicalDeviceExternalBufferInfo
*/
struct	S_physical_device_external_buffer_info:VkPhysicalDeviceExternalBufferInfo{
private:
	using VkPhysicalDeviceExternalBufferInfo::sType;
	using VkPhysicalDeviceExternalBufferInfo::pNext;
public:
	using VkPhysicalDeviceExternalBufferInfo::flags;
	using VkPhysicalDeviceExternalBufferInfo::usage;
	using VkPhysicalDeviceExternalBufferInfo::handleType;

S_physical_device_external_buffer_info():VkPhysicalDeviceExternalBufferInfo{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,nullptr}{}
S_physical_device_external_buffer_info(
	F_buffer_create flags_,
	F_buffer_usage usage_,
	F_external_memory_handle_type handleType_)
	:VkPhysicalDeviceExternalBufferInfo{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO
	,nullptr
	,flags_
	,usage_
	,handleType_}
	{
	}

	S_physical_device_external_buffer_info& operator=(const VkPhysicalDeviceExternalBufferInfo& rhs){static_cast<VkPhysicalDeviceExternalBufferInfo&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceExternalBufferInfo*()const{return const_cast<VkPhysicalDeviceExternalBufferInfo*>(static_cast<const VkPhysicalDeviceExternalBufferInfo*>(this));}
};

/*	VkExternalBufferProperties
(returnedonly)
*/
struct	S_external_buffer_properties:VkExternalBufferProperties{
private:
	using VkExternalBufferProperties::sType;
	using VkExternalBufferProperties::pNext;
public:
	using VkExternalBufferProperties::externalMemoryProperties;

S_external_buffer_properties():VkExternalBufferProperties{VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES,nullptr}{}
S_external_buffer_properties(
	S_external_memory_properties externalMemoryProperties_)
	:VkExternalBufferProperties{
	VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES
	,nullptr
	,externalMemoryProperties_}
	{
	}

	S_external_buffer_properties& operator=(const VkExternalBufferProperties& rhs){static_cast<VkExternalBufferProperties&>(*this)=rhs; return *this;}
	operator VkExternalBufferProperties*()const{return const_cast<VkExternalBufferProperties*>(static_cast<const VkExternalBufferProperties*>(this));}
};

/*	VkMemoryWin32HandlePropertiesKHR
(returnedonly)
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_memory_win32_handle_properties_KHR:VkMemoryWin32HandlePropertiesKHR{
private:
	using VkMemoryWin32HandlePropertiesKHR::sType;
	using VkMemoryWin32HandlePropertiesKHR::pNext;
public:
	using VkMemoryWin32HandlePropertiesKHR::memoryTypeBits;

S_memory_win32_handle_properties_KHR():VkMemoryWin32HandlePropertiesKHR{VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR,nullptr}{}
S_memory_win32_handle_properties_KHR(
	uint32_t memoryTypeBits_)
	:VkMemoryWin32HandlePropertiesKHR{
	VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR
	,nullptr
	,memoryTypeBits_}
	{
	}

	S_memory_win32_handle_properties_KHR& operator=(const VkMemoryWin32HandlePropertiesKHR& rhs){static_cast<VkMemoryWin32HandlePropertiesKHR&>(*this)=rhs; return *this;}
	operator VkMemoryWin32HandlePropertiesKHR*()const{return const_cast<VkMemoryWin32HandlePropertiesKHR*>(static_cast<const VkMemoryWin32HandlePropertiesKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkMemoryGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_memory_get_win32_handle_info_KHR:VkMemoryGetWin32HandleInfoKHR{
private:
	using VkMemoryGetWin32HandleInfoKHR::sType;
	using VkMemoryGetWin32HandleInfoKHR::pNext;
public:
	using VkMemoryGetWin32HandleInfoKHR::memory;
	using VkMemoryGetWin32HandleInfoKHR::handleType;

S_memory_get_win32_handle_info_KHR():VkMemoryGetWin32HandleInfoKHR{VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_memory_get_win32_handle_info_KHR(
	VkDeviceMemory memory_,
	F_external_memory_handle_type handleType_)
	:VkMemoryGetWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR
	,nullptr
	,memory_
	,handleType_}
	{
	}

	S_memory_get_win32_handle_info_KHR& operator=(const VkMemoryGetWin32HandleInfoKHR& rhs){static_cast<VkMemoryGetWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkMemoryGetWin32HandleInfoKHR*()const{return const_cast<VkMemoryGetWin32HandleInfoKHR*>(static_cast<const VkMemoryGetWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkMemoryFdPropertiesKHR
(returnedonly)
*/
struct	S_memory_fd_properties_KHR:VkMemoryFdPropertiesKHR{
private:
	using VkMemoryFdPropertiesKHR::sType;
	using VkMemoryFdPropertiesKHR::pNext;
public:
	using VkMemoryFdPropertiesKHR::memoryTypeBits;

S_memory_fd_properties_KHR():VkMemoryFdPropertiesKHR{VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR,nullptr}{}
S_memory_fd_properties_KHR(
	uint32_t memoryTypeBits_)
	:VkMemoryFdPropertiesKHR{
	VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR
	,nullptr
	,memoryTypeBits_}
	{
	}

	S_memory_fd_properties_KHR& operator=(const VkMemoryFdPropertiesKHR& rhs){static_cast<VkMemoryFdPropertiesKHR&>(*this)=rhs; return *this;}
	operator VkMemoryFdPropertiesKHR*()const{return const_cast<VkMemoryFdPropertiesKHR*>(static_cast<const VkMemoryFdPropertiesKHR*>(this));}
};

/*	VkMemoryGetFdInfoKHR
*/
struct	S_memory_get_fd_info_KHR:VkMemoryGetFdInfoKHR{
private:
	using VkMemoryGetFdInfoKHR::sType;
	using VkMemoryGetFdInfoKHR::pNext;
public:
	using VkMemoryGetFdInfoKHR::memory;
	using VkMemoryGetFdInfoKHR::handleType;

S_memory_get_fd_info_KHR():VkMemoryGetFdInfoKHR{VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR,nullptr}{}
S_memory_get_fd_info_KHR(
	VkDeviceMemory memory_,
	F_external_memory_handle_type handleType_)
	:VkMemoryGetFdInfoKHR{
	VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR
	,nullptr
	,memory_
	,handleType_}
	{
	}

	S_memory_get_fd_info_KHR& operator=(const VkMemoryGetFdInfoKHR& rhs){static_cast<VkMemoryGetFdInfoKHR&>(*this)=rhs; return *this;}
	operator VkMemoryGetFdInfoKHR*()const{return const_cast<VkMemoryGetFdInfoKHR*>(static_cast<const VkMemoryGetFdInfoKHR*>(this));}
};

/*	VkPhysicalDeviceExternalSemaphoreInfo
*/
struct	S_physical_device_external_semaphore_info:VkPhysicalDeviceExternalSemaphoreInfo{
private:
	using VkPhysicalDeviceExternalSemaphoreInfo::sType;
	using VkPhysicalDeviceExternalSemaphoreInfo::pNext;
public:
	using VkPhysicalDeviceExternalSemaphoreInfo::handleType;

S_physical_device_external_semaphore_info():VkPhysicalDeviceExternalSemaphoreInfo{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,nullptr}{}
S_physical_device_external_semaphore_info(
	F_external_semaphore_handle_type handleType_)
	:VkPhysicalDeviceExternalSemaphoreInfo{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO
	,nullptr
	,handleType_}
	{
	}

	S_physical_device_external_semaphore_info& operator=(const VkPhysicalDeviceExternalSemaphoreInfo& rhs){static_cast<VkPhysicalDeviceExternalSemaphoreInfo&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceExternalSemaphoreInfo*()const{return const_cast<VkPhysicalDeviceExternalSemaphoreInfo*>(static_cast<const VkPhysicalDeviceExternalSemaphoreInfo*>(this));}
};

/*	VkExternalSemaphoreProperties
(returnedonly)
*/
struct	S_external_semaphore_properties:VkExternalSemaphoreProperties{
private:
	using VkExternalSemaphoreProperties::sType;
	using VkExternalSemaphoreProperties::pNext;
public:
	using VkExternalSemaphoreProperties::exportFromImportedHandleTypes;
	using VkExternalSemaphoreProperties::compatibleHandleTypes;
	using VkExternalSemaphoreProperties::externalSemaphoreFeatures;

S_external_semaphore_properties():VkExternalSemaphoreProperties{VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES,nullptr}{}
S_external_semaphore_properties(
	F_external_semaphore_handle_type exportFromImportedHandleTypes_,
	F_external_semaphore_handle_type compatibleHandleTypes_,
	F_external_semaphore_feature externalSemaphoreFeatures_)
	:VkExternalSemaphoreProperties{
	VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES
	,nullptr
	,exportFromImportedHandleTypes_
	,compatibleHandleTypes_
	,externalSemaphoreFeatures_}
	{
	}

	S_external_semaphore_properties& operator=(const VkExternalSemaphoreProperties& rhs){static_cast<VkExternalSemaphoreProperties&>(*this)=rhs; return *this;}
	operator VkExternalSemaphoreProperties*()const{return const_cast<VkExternalSemaphoreProperties*>(static_cast<const VkExternalSemaphoreProperties*>(this));}
};

/*	VkImportSemaphoreWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_import_semaphore_win32_handle_info_KHR:VkImportSemaphoreWin32HandleInfoKHR{
private:
	using VkImportSemaphoreWin32HandleInfoKHR::sType;
	using VkImportSemaphoreWin32HandleInfoKHR::pNext;
public:
	using VkImportSemaphoreWin32HandleInfoKHR::semaphore;
	using VkImportSemaphoreWin32HandleInfoKHR::flags;
	using VkImportSemaphoreWin32HandleInfoKHR::handleType;
	using VkImportSemaphoreWin32HandleInfoKHR::handle;
	using VkImportSemaphoreWin32HandleInfoKHR::name;

S_import_semaphore_win32_handle_info_KHR():VkImportSemaphoreWin32HandleInfoKHR{VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_import_semaphore_win32_handle_info_KHR(
	VkSemaphore semaphore_,
	F_semaphore_import flags_,
	F_external_semaphore_handle_type handleType_,
	HANDLE handle_,
	LPCWSTR name_)
	:VkImportSemaphoreWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR
	,nullptr
	,semaphore_
	,flags_
	,handleType_
	,handle_
	,name_}
	{
	}

	S_import_semaphore_win32_handle_info_KHR& operator=(const VkImportSemaphoreWin32HandleInfoKHR& rhs){static_cast<VkImportSemaphoreWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkImportSemaphoreWin32HandleInfoKHR*()const{return const_cast<VkImportSemaphoreWin32HandleInfoKHR*>(static_cast<const VkImportSemaphoreWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkSemaphoreGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_semaphore_get_win32_handle_info_KHR:VkSemaphoreGetWin32HandleInfoKHR{
private:
	using VkSemaphoreGetWin32HandleInfoKHR::sType;
	using VkSemaphoreGetWin32HandleInfoKHR::pNext;
public:
	using VkSemaphoreGetWin32HandleInfoKHR::semaphore;
	using VkSemaphoreGetWin32HandleInfoKHR::handleType;

S_semaphore_get_win32_handle_info_KHR():VkSemaphoreGetWin32HandleInfoKHR{VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_semaphore_get_win32_handle_info_KHR(
	VkSemaphore semaphore_,
	F_external_semaphore_handle_type handleType_)
	:VkSemaphoreGetWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR
	,nullptr
	,semaphore_
	,handleType_}
	{
	}

	S_semaphore_get_win32_handle_info_KHR& operator=(const VkSemaphoreGetWin32HandleInfoKHR& rhs){static_cast<VkSemaphoreGetWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkSemaphoreGetWin32HandleInfoKHR*()const{return const_cast<VkSemaphoreGetWin32HandleInfoKHR*>(static_cast<const VkSemaphoreGetWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportSemaphoreFdInfoKHR
*/
struct	S_import_semaphore_fd_info_KHR:VkImportSemaphoreFdInfoKHR{
private:
	using VkImportSemaphoreFdInfoKHR::sType;
	using VkImportSemaphoreFdInfoKHR::pNext;
public:
	using VkImportSemaphoreFdInfoKHR::semaphore;
	using VkImportSemaphoreFdInfoKHR::flags;
	using VkImportSemaphoreFdInfoKHR::handleType;
	using VkImportSemaphoreFdInfoKHR::fd;

S_import_semaphore_fd_info_KHR():VkImportSemaphoreFdInfoKHR{VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR,nullptr}{}
S_import_semaphore_fd_info_KHR(
	VkSemaphore semaphore_,
	F_semaphore_import flags_,
	F_external_semaphore_handle_type handleType_,
	int fd_)
	:VkImportSemaphoreFdInfoKHR{
	VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR
	,nullptr
	,semaphore_
	,flags_
	,handleType_
	,fd_}
	{
	}

	S_import_semaphore_fd_info_KHR& operator=(const VkImportSemaphoreFdInfoKHR& rhs){static_cast<VkImportSemaphoreFdInfoKHR&>(*this)=rhs; return *this;}
	operator VkImportSemaphoreFdInfoKHR*()const{return const_cast<VkImportSemaphoreFdInfoKHR*>(static_cast<const VkImportSemaphoreFdInfoKHR*>(this));}
};

/*	VkSemaphoreGetFdInfoKHR
*/
struct	S_semaphore_get_fd_info_KHR:VkSemaphoreGetFdInfoKHR{
private:
	using VkSemaphoreGetFdInfoKHR::sType;
	using VkSemaphoreGetFdInfoKHR::pNext;
public:
	using VkSemaphoreGetFdInfoKHR::semaphore;
	using VkSemaphoreGetFdInfoKHR::handleType;

S_semaphore_get_fd_info_KHR():VkSemaphoreGetFdInfoKHR{VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR,nullptr}{}
S_semaphore_get_fd_info_KHR(
	VkSemaphore semaphore_,
	F_external_semaphore_handle_type handleType_)
	:VkSemaphoreGetFdInfoKHR{
	VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR
	,nullptr
	,semaphore_
	,handleType_}
	{
	}

	S_semaphore_get_fd_info_KHR& operator=(const VkSemaphoreGetFdInfoKHR& rhs){static_cast<VkSemaphoreGetFdInfoKHR&>(*this)=rhs; return *this;}
	operator VkSemaphoreGetFdInfoKHR*()const{return const_cast<VkSemaphoreGetFdInfoKHR*>(static_cast<const VkSemaphoreGetFdInfoKHR*>(this));}
};

/*	VkPhysicalDeviceExternalFenceInfo
*/
struct	S_physical_device_external_fence_info:VkPhysicalDeviceExternalFenceInfo{
private:
	using VkPhysicalDeviceExternalFenceInfo::sType;
	using VkPhysicalDeviceExternalFenceInfo::pNext;
public:
	using VkPhysicalDeviceExternalFenceInfo::handleType;

S_physical_device_external_fence_info():VkPhysicalDeviceExternalFenceInfo{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,nullptr}{}
S_physical_device_external_fence_info(
	F_external_fence_handle_type handleType_)
	:VkPhysicalDeviceExternalFenceInfo{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO
	,nullptr
	,handleType_}
	{
	}

	S_physical_device_external_fence_info& operator=(const VkPhysicalDeviceExternalFenceInfo& rhs){static_cast<VkPhysicalDeviceExternalFenceInfo&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceExternalFenceInfo*()const{return const_cast<VkPhysicalDeviceExternalFenceInfo*>(static_cast<const VkPhysicalDeviceExternalFenceInfo*>(this));}
};

/*	VkExternalFenceProperties
(returnedonly)
*/
struct	S_external_fence_properties:VkExternalFenceProperties{
private:
	using VkExternalFenceProperties::sType;
	using VkExternalFenceProperties::pNext;
public:
	using VkExternalFenceProperties::exportFromImportedHandleTypes;
	using VkExternalFenceProperties::compatibleHandleTypes;
	using VkExternalFenceProperties::externalFenceFeatures;

S_external_fence_properties():VkExternalFenceProperties{VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES,nullptr}{}
S_external_fence_properties(
	F_external_fence_handle_type exportFromImportedHandleTypes_,
	F_external_fence_handle_type compatibleHandleTypes_,
	F_external_fence_feature externalFenceFeatures_)
	:VkExternalFenceProperties{
	VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES
	,nullptr
	,exportFromImportedHandleTypes_
	,compatibleHandleTypes_
	,externalFenceFeatures_}
	{
	}

	S_external_fence_properties& operator=(const VkExternalFenceProperties& rhs){static_cast<VkExternalFenceProperties&>(*this)=rhs; return *this;}
	operator VkExternalFenceProperties*()const{return const_cast<VkExternalFenceProperties*>(static_cast<const VkExternalFenceProperties*>(this));}
};

/*	VkImportFenceWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_import_fence_win32_handle_info_KHR:VkImportFenceWin32HandleInfoKHR{
private:
	using VkImportFenceWin32HandleInfoKHR::sType;
	using VkImportFenceWin32HandleInfoKHR::pNext;
public:
	using VkImportFenceWin32HandleInfoKHR::fence;
	using VkImportFenceWin32HandleInfoKHR::flags;
	using VkImportFenceWin32HandleInfoKHR::handleType;
	using VkImportFenceWin32HandleInfoKHR::handle;
	using VkImportFenceWin32HandleInfoKHR::name;

S_import_fence_win32_handle_info_KHR():VkImportFenceWin32HandleInfoKHR{VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_import_fence_win32_handle_info_KHR(
	VkFence fence_,
	F_fence_import flags_,
	F_external_fence_handle_type handleType_,
	HANDLE handle_,
	LPCWSTR name_)
	:VkImportFenceWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR
	,nullptr
	,fence_
	,flags_
	,handleType_
	,handle_
	,name_}
	{
	}

	S_import_fence_win32_handle_info_KHR& operator=(const VkImportFenceWin32HandleInfoKHR& rhs){static_cast<VkImportFenceWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkImportFenceWin32HandleInfoKHR*()const{return const_cast<VkImportFenceWin32HandleInfoKHR*>(static_cast<const VkImportFenceWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkFenceGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
struct	S_fence_get_win32_handle_info_KHR:VkFenceGetWin32HandleInfoKHR{
private:
	using VkFenceGetWin32HandleInfoKHR::sType;
	using VkFenceGetWin32HandleInfoKHR::pNext;
public:
	using VkFenceGetWin32HandleInfoKHR::fence;
	using VkFenceGetWin32HandleInfoKHR::handleType;

S_fence_get_win32_handle_info_KHR():VkFenceGetWin32HandleInfoKHR{VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR,nullptr}{}
S_fence_get_win32_handle_info_KHR(
	VkFence fence_,
	F_external_fence_handle_type handleType_)
	:VkFenceGetWin32HandleInfoKHR{
	VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR
	,nullptr
	,fence_
	,handleType_}
	{
	}

	S_fence_get_win32_handle_info_KHR& operator=(const VkFenceGetWin32HandleInfoKHR& rhs){static_cast<VkFenceGetWin32HandleInfoKHR&>(*this)=rhs; return *this;}
	operator VkFenceGetWin32HandleInfoKHR*()const{return const_cast<VkFenceGetWin32HandleInfoKHR*>(static_cast<const VkFenceGetWin32HandleInfoKHR*>(this));}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportFenceFdInfoKHR
*/
struct	S_import_fence_fd_info_KHR:VkImportFenceFdInfoKHR{
private:
	using VkImportFenceFdInfoKHR::sType;
	using VkImportFenceFdInfoKHR::pNext;
public:
	using VkImportFenceFdInfoKHR::fence;
	using VkImportFenceFdInfoKHR::flags;
	using VkImportFenceFdInfoKHR::handleType;
	using VkImportFenceFdInfoKHR::fd;

S_import_fence_fd_info_KHR():VkImportFenceFdInfoKHR{VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR,nullptr}{}
S_import_fence_fd_info_KHR(
	VkFence fence_,
	F_fence_import flags_,
	F_external_fence_handle_type handleType_,
	int fd_)
	:VkImportFenceFdInfoKHR{
	VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR
	,nullptr
	,fence_
	,flags_
	,handleType_
	,fd_}
	{
	}

	S_import_fence_fd_info_KHR& operator=(const VkImportFenceFdInfoKHR& rhs){static_cast<VkImportFenceFdInfoKHR&>(*this)=rhs; return *this;}
	operator VkImportFenceFdInfoKHR*()const{return const_cast<VkImportFenceFdInfoKHR*>(static_cast<const VkImportFenceFdInfoKHR*>(this));}
};

/*	VkFenceGetFdInfoKHR
*/
struct	S_fence_get_fd_info_KHR:VkFenceGetFdInfoKHR{
private:
	using VkFenceGetFdInfoKHR::sType;
	using VkFenceGetFdInfoKHR::pNext;
public:
	using VkFenceGetFdInfoKHR::fence;
	using VkFenceGetFdInfoKHR::handleType;

S_fence_get_fd_info_KHR():VkFenceGetFdInfoKHR{VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR,nullptr}{}
S_fence_get_fd_info_KHR(
	VkFence fence_,
	F_external_fence_handle_type handleType_)
	:VkFenceGetFdInfoKHR{
	VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR
	,nullptr
	,fence_
	,handleType_}
	{
	}

	S_fence_get_fd_info_KHR& operator=(const VkFenceGetFdInfoKHR& rhs){static_cast<VkFenceGetFdInfoKHR&>(*this)=rhs; return *this;}
	operator VkFenceGetFdInfoKHR*()const{return const_cast<VkFenceGetFdInfoKHR*>(static_cast<const VkFenceGetFdInfoKHR*>(this));}
};

/*	VkSurfaceCapabilities2EXT
(returnedonly)
*/
struct	S_surface_capabilities2_EXT:VkSurfaceCapabilities2EXT{
private:
	using VkSurfaceCapabilities2EXT::sType;
	using VkSurfaceCapabilities2EXT::pNext;
public:
	using VkSurfaceCapabilities2EXT::minImageCount;
	using VkSurfaceCapabilities2EXT::maxImageCount;
	using VkSurfaceCapabilities2EXT::currentExtent;
	using VkSurfaceCapabilities2EXT::minImageExtent;
	using VkSurfaceCapabilities2EXT::maxImageExtent;
	using VkSurfaceCapabilities2EXT::maxImageArrayLayers;
	using VkSurfaceCapabilities2EXT::supportedTransforms;
	using VkSurfaceCapabilities2EXT::currentTransform;
	using VkSurfaceCapabilities2EXT::supportedCompositeAlpha;
	using VkSurfaceCapabilities2EXT::supportedUsageFlags;
	using VkSurfaceCapabilities2EXT::supportedSurfaceCounters;

S_surface_capabilities2_EXT():VkSurfaceCapabilities2EXT{VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT,nullptr}{}
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
	:VkSurfaceCapabilities2EXT{
	VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT
	,nullptr
	,minImageCount_
	,maxImageCount_
	,currentExtent_
	,minImageExtent_
	,maxImageExtent_
	,maxImageArrayLayers_
	,supportedTransforms_
	,currentTransform_
	,supportedCompositeAlpha_
	,supportedUsageFlags_
	,supportedSurfaceCounters_}
	{
	}

	S_surface_capabilities2_EXT& operator=(const VkSurfaceCapabilities2EXT& rhs){static_cast<VkSurfaceCapabilities2EXT&>(*this)=rhs; return *this;}
	operator VkSurfaceCapabilities2EXT*()const{return const_cast<VkSurfaceCapabilities2EXT*>(static_cast<const VkSurfaceCapabilities2EXT*>(this));}
};

/*	VkDisplayPowerInfoEXT
*/
struct	S_display_power_info_EXT:VkDisplayPowerInfoEXT{
private:
	using VkDisplayPowerInfoEXT::sType;
	using VkDisplayPowerInfoEXT::pNext;
public:
	using VkDisplayPowerInfoEXT::powerState;

S_display_power_info_EXT():VkDisplayPowerInfoEXT{VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT,nullptr}{}
S_display_power_info_EXT(
	E_display_power_state_EXT powerState_)
	:VkDisplayPowerInfoEXT{
	VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT
	,nullptr
	,powerState_}
	{
	}

	S_display_power_info_EXT& operator=(const VkDisplayPowerInfoEXT& rhs){static_cast<VkDisplayPowerInfoEXT&>(*this)=rhs; return *this;}
	operator VkDisplayPowerInfoEXT*()const{return const_cast<VkDisplayPowerInfoEXT*>(static_cast<const VkDisplayPowerInfoEXT*>(this));}
};

/*	VkDeviceEventInfoEXT
*/
struct	S_device_event_info_EXT:VkDeviceEventInfoEXT{
private:
	using VkDeviceEventInfoEXT::sType;
	using VkDeviceEventInfoEXT::pNext;
public:
	using VkDeviceEventInfoEXT::deviceEvent;

S_device_event_info_EXT():VkDeviceEventInfoEXT{VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT,nullptr}{}
S_device_event_info_EXT(
	E_device_event_type_EXT deviceEvent_)
	:VkDeviceEventInfoEXT{
	VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT
	,nullptr
	,deviceEvent_}
	{
	}

	S_device_event_info_EXT& operator=(const VkDeviceEventInfoEXT& rhs){static_cast<VkDeviceEventInfoEXT&>(*this)=rhs; return *this;}
	operator VkDeviceEventInfoEXT*()const{return const_cast<VkDeviceEventInfoEXT*>(static_cast<const VkDeviceEventInfoEXT*>(this));}
};

/*	VkDisplayEventInfoEXT
*/
struct	S_display_event_info_EXT:VkDisplayEventInfoEXT{
private:
	using VkDisplayEventInfoEXT::sType;
	using VkDisplayEventInfoEXT::pNext;
public:
	using VkDisplayEventInfoEXT::displayEvent;

S_display_event_info_EXT():VkDisplayEventInfoEXT{VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT,nullptr}{}
S_display_event_info_EXT(
	E_display_event_type_EXT displayEvent_)
	:VkDisplayEventInfoEXT{
	VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT
	,nullptr
	,displayEvent_}
	{
	}

	S_display_event_info_EXT& operator=(const VkDisplayEventInfoEXT& rhs){static_cast<VkDisplayEventInfoEXT&>(*this)=rhs; return *this;}
	operator VkDisplayEventInfoEXT*()const{return const_cast<VkDisplayEventInfoEXT*>(static_cast<const VkDisplayEventInfoEXT*>(this));}
};

/*	VkPhysicalDeviceGroupProperties
(returnedonly)
*/
struct	S_physical_device_group_properties:VkPhysicalDeviceGroupProperties{
private:
	using VkPhysicalDeviceGroupProperties::sType;
	using VkPhysicalDeviceGroupProperties::pNext;
public:
	using VkPhysicalDeviceGroupProperties::physicalDeviceCount;
	using VkPhysicalDeviceGroupProperties::physicalDevices;
	using VkPhysicalDeviceGroupProperties::subsetAllocation;

S_physical_device_group_properties():VkPhysicalDeviceGroupProperties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES,nullptr}{}
S_physical_device_group_properties(
	uint32_t physicalDeviceCount_,
	VkPhysicalDevice physicalDevices_[VK_MAX_DEVICE_GROUP_SIZE],
	VkBool32 subsetAllocation_)
	:VkPhysicalDeviceGroupProperties{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES
	,nullptr
	,physicalDeviceCount_
	,{}
	,subsetAllocation_}
	{
		memcpy(physicalDevices,physicalDevices_,sizeof(physicalDevices_) );
	}

	S_physical_device_group_properties& operator=(const VkPhysicalDeviceGroupProperties& rhs){static_cast<VkPhysicalDeviceGroupProperties&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceGroupProperties*()const{return const_cast<VkPhysicalDeviceGroupProperties*>(static_cast<const VkPhysicalDeviceGroupProperties*>(this));}
};

/*	VkBindBufferMemoryDeviceGroupInfo
ex to: VkBindBufferMemoryInfo
*/
struct	S_bind_buffer_memory_device_group_info:VkBindBufferMemoryDeviceGroupInfo{
private:
	using VkBindBufferMemoryDeviceGroupInfo::sType;
	using VkBindBufferMemoryDeviceGroupInfo::pNext;
public:
	using VkBindBufferMemoryDeviceGroupInfo::deviceIndexCount;
	using VkBindBufferMemoryDeviceGroupInfo::pDeviceIndices;

S_bind_buffer_memory_device_group_info():VkBindBufferMemoryDeviceGroupInfo{VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO,nullptr}{}
S_bind_buffer_memory_device_group_info(
	uint32_t deviceIndexCount_,
	const uint32_t * pDeviceIndices_)
	:VkBindBufferMemoryDeviceGroupInfo{
	VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO
	,nullptr
	,deviceIndexCount_
	,pDeviceIndices_}
	{
	}

friend S_bind_buffer_memory_info;

	S_bind_buffer_memory_device_group_info& operator=(const VkBindBufferMemoryDeviceGroupInfo& rhs){static_cast<VkBindBufferMemoryDeviceGroupInfo&>(*this)=rhs; return *this;}
	operator VkBindBufferMemoryDeviceGroupInfo*()const{return const_cast<VkBindBufferMemoryDeviceGroupInfo*>(static_cast<const VkBindBufferMemoryDeviceGroupInfo*>(this));}
};

/*	VkBindBufferMemoryInfo
ex:
	VkBindBufferMemoryDeviceGroupInfo
*/

struct N_bind_buffer_memory_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_bind_buffer_memory_info& n_bind_buffer_memory_device_group_info(S_bind_buffer_memory_device_group_info const& next_);
};
struct	S_bind_buffer_memory_info:VkBindBufferMemoryInfo{
private:
	using VkBindBufferMemoryInfo::sType;
	using VkBindBufferMemoryInfo::pNext;
public:
	using VkBindBufferMemoryInfo::buffer;
	using VkBindBufferMemoryInfo::memory;
	using VkBindBufferMemoryInfo::memoryOffset;

S_bind_buffer_memory_info():VkBindBufferMemoryInfo{VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO,nullptr}{}
S_bind_buffer_memory_info(
	VkBuffer buffer_,
	VkDeviceMemory memory_,
	VkDeviceSize memoryOffset_)
	:VkBindBufferMemoryInfo{
	VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO
	,nullptr
	,buffer_
	,memory_
	,memoryOffset_}
	{
	}

	S_bind_buffer_memory_info& operator=(const VkBindBufferMemoryInfo& rhs){static_cast<VkBindBufferMemoryInfo&>(*this)=rhs; return *this;}
	operator VkBindBufferMemoryInfo*()const{return const_cast<VkBindBufferMemoryInfo*>(static_cast<const VkBindBufferMemoryInfo*>(this));}

S_bind_buffer_memory_info& n_bind_buffer_memory_device_group_info(S_bind_buffer_memory_device_group_info const& next_);
void set_pNext(N_bind_buffer_memory_info n_){pNext = n_;}
};

/*	VkBindImageMemoryDeviceGroupInfo
ex to: VkBindImageMemoryInfo
*/
struct	S_bind_image_memory_device_group_info:VkBindImageMemoryDeviceGroupInfo{
private:
	using VkBindImageMemoryDeviceGroupInfo::sType;
	using VkBindImageMemoryDeviceGroupInfo::pNext;
public:
	using VkBindImageMemoryDeviceGroupInfo::deviceIndexCount;
	using VkBindImageMemoryDeviceGroupInfo::pDeviceIndices;
	using VkBindImageMemoryDeviceGroupInfo::splitInstanceBindRegionCount;
	using VkBindImageMemoryDeviceGroupInfo::pSplitInstanceBindRegions;

S_bind_image_memory_device_group_info():VkBindImageMemoryDeviceGroupInfo{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO,nullptr}{}
S_bind_image_memory_device_group_info(
	uint32_t deviceIndexCount_,
	const uint32_t * pDeviceIndices_,
	uint32_t splitInstanceBindRegionCount_,
	const S_rect_2d * pSplitInstanceBindRegions_)
	:VkBindImageMemoryDeviceGroupInfo{
	VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO
	,nullptr
	,deviceIndexCount_
	,pDeviceIndices_
	,splitInstanceBindRegionCount_
	,pSplitInstanceBindRegions_}
	{
	}

friend S_bind_image_memory_info;

	S_bind_image_memory_device_group_info& operator=(const VkBindImageMemoryDeviceGroupInfo& rhs){static_cast<VkBindImageMemoryDeviceGroupInfo&>(*this)=rhs; return *this;}
	operator VkBindImageMemoryDeviceGroupInfo*()const{return const_cast<VkBindImageMemoryDeviceGroupInfo*>(static_cast<const VkBindImageMemoryDeviceGroupInfo*>(this));}
};

/*	VkBindImageMemorySwapchainInfoKHR
ex to: VkBindImageMemoryInfo
*/
struct	S_bind_image_memory_swapchain_info_KHR:VkBindImageMemorySwapchainInfoKHR{
private:
	using VkBindImageMemorySwapchainInfoKHR::sType;
	using VkBindImageMemorySwapchainInfoKHR::pNext;
public:
	using VkBindImageMemorySwapchainInfoKHR::swapchain;
	using VkBindImageMemorySwapchainInfoKHR::imageIndex;

S_bind_image_memory_swapchain_info_KHR():VkBindImageMemorySwapchainInfoKHR{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR,nullptr}{}
S_bind_image_memory_swapchain_info_KHR(
	VkSwapchainKHR swapchain_,
	uint32_t imageIndex_)
	:VkBindImageMemorySwapchainInfoKHR{
	VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR
	,nullptr
	,swapchain_
	,imageIndex_}
	{
	}

friend S_bind_image_memory_info;

	S_bind_image_memory_swapchain_info_KHR& operator=(const VkBindImageMemorySwapchainInfoKHR& rhs){static_cast<VkBindImageMemorySwapchainInfoKHR&>(*this)=rhs; return *this;}
	operator VkBindImageMemorySwapchainInfoKHR*()const{return const_cast<VkBindImageMemorySwapchainInfoKHR*>(static_cast<const VkBindImageMemorySwapchainInfoKHR*>(this));}
};

/*	VkBindImagePlaneMemoryInfo
ex to: VkBindImageMemoryInfo
*/
struct	S_bind_image_plane_memory_info:VkBindImagePlaneMemoryInfo{
private:
	using VkBindImagePlaneMemoryInfo::sType;
	using VkBindImagePlaneMemoryInfo::pNext;
public:
	using VkBindImagePlaneMemoryInfo::planeAspect;

S_bind_image_plane_memory_info():VkBindImagePlaneMemoryInfo{VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO,nullptr}{}
S_bind_image_plane_memory_info(
	F_image_aspect planeAspect_)
	:VkBindImagePlaneMemoryInfo{
	VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO
	,nullptr
	,planeAspect_}
	{
	}

friend S_bind_image_memory_info;

	S_bind_image_plane_memory_info& operator=(const VkBindImagePlaneMemoryInfo& rhs){static_cast<VkBindImagePlaneMemoryInfo&>(*this)=rhs; return *this;}
	operator VkBindImagePlaneMemoryInfo*()const{return const_cast<VkBindImagePlaneMemoryInfo*>(static_cast<const VkBindImagePlaneMemoryInfo*>(this));}
};

/*	VkBindImageMemoryInfo
ex:
	VkBindImageMemoryDeviceGroupInfo
	VkBindImageMemorySwapchainInfoKHR
	VkBindImagePlaneMemoryInfo
*/

struct N_bind_image_memory_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_bind_image_memory_info& n_bind_image_memory_device_group_info(S_bind_image_memory_device_group_info const& next_);
N_bind_image_memory_info& n_bind_image_memory_swapchain_info_KHR(S_bind_image_memory_swapchain_info_KHR const& next_);
N_bind_image_memory_info& n_bind_image_plane_memory_info(S_bind_image_plane_memory_info const& next_);
};
struct	S_bind_image_memory_info:VkBindImageMemoryInfo{
private:
	using VkBindImageMemoryInfo::sType;
	using VkBindImageMemoryInfo::pNext;
public:
	using VkBindImageMemoryInfo::image;
	using VkBindImageMemoryInfo::memory;
	using VkBindImageMemoryInfo::memoryOffset;

S_bind_image_memory_info():VkBindImageMemoryInfo{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO,nullptr}{}
S_bind_image_memory_info(
	VkImage image_,
	VkDeviceMemory memory_,
	VkDeviceSize memoryOffset_)
	:VkBindImageMemoryInfo{
	VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO
	,nullptr
	,image_
	,memory_
	,memoryOffset_}
	{
	}

	S_bind_image_memory_info& operator=(const VkBindImageMemoryInfo& rhs){static_cast<VkBindImageMemoryInfo&>(*this)=rhs; return *this;}
	operator VkBindImageMemoryInfo*()const{return const_cast<VkBindImageMemoryInfo*>(static_cast<const VkBindImageMemoryInfo*>(this));}

S_bind_image_memory_info& n_bind_image_memory_device_group_info(S_bind_image_memory_device_group_info const& next_);
S_bind_image_memory_info& n_bind_image_memory_swapchain_info_KHR(S_bind_image_memory_swapchain_info_KHR const& next_);
S_bind_image_memory_info& n_bind_image_plane_memory_info(S_bind_image_plane_memory_info const& next_);
void set_pNext(N_bind_image_memory_info n_){pNext = n_;}
};

/*	VkDeviceGroupPresentCapabilitiesKHR
(returnedonly)
*/
struct	S_device_group_present_capabilities_KHR:VkDeviceGroupPresentCapabilitiesKHR{
private:
	using VkDeviceGroupPresentCapabilitiesKHR::sType;
	using VkDeviceGroupPresentCapabilitiesKHR::pNext;
public:
	using VkDeviceGroupPresentCapabilitiesKHR::presentMask;
	using VkDeviceGroupPresentCapabilitiesKHR::modes;

S_device_group_present_capabilities_KHR():VkDeviceGroupPresentCapabilitiesKHR{VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR,nullptr}{}
S_device_group_present_capabilities_KHR(
	uint32_t presentMask_[VK_MAX_DEVICE_GROUP_SIZE],
	F_device_group_present_mode_KHR modes_)
	:VkDeviceGroupPresentCapabilitiesKHR{
	VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR
	,nullptr
	,{}
	,modes_}
	{
		memcpy(presentMask,presentMask_,sizeof(presentMask_) );
	}

	S_device_group_present_capabilities_KHR& operator=(const VkDeviceGroupPresentCapabilitiesKHR& rhs){static_cast<VkDeviceGroupPresentCapabilitiesKHR&>(*this)=rhs; return *this;}
	operator VkDeviceGroupPresentCapabilitiesKHR*()const{return const_cast<VkDeviceGroupPresentCapabilitiesKHR*>(static_cast<const VkDeviceGroupPresentCapabilitiesKHR*>(this));}
};

/*	VkAcquireNextImageInfoKHR
*/
struct	S_acquire_next_image_info_KHR:VkAcquireNextImageInfoKHR{
private:
	using VkAcquireNextImageInfoKHR::sType;
	using VkAcquireNextImageInfoKHR::pNext;
public:
	using VkAcquireNextImageInfoKHR::swapchain;
	using VkAcquireNextImageInfoKHR::timeout;
	using VkAcquireNextImageInfoKHR::semaphore;
	using VkAcquireNextImageInfoKHR::fence;
	using VkAcquireNextImageInfoKHR::deviceMask;

S_acquire_next_image_info_KHR():VkAcquireNextImageInfoKHR{VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR,nullptr}{}
S_acquire_next_image_info_KHR(
	VkSwapchainKHR swapchain_,
	uint64_t timeout_,
	VkSemaphore semaphore_,
	VkFence fence_,
	uint32_t deviceMask_)
	:VkAcquireNextImageInfoKHR{
	VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR
	,nullptr
	,swapchain_
	,timeout_
	,semaphore_
	,fence_
	,deviceMask_}
	{
	}

	S_acquire_next_image_info_KHR& operator=(const VkAcquireNextImageInfoKHR& rhs){static_cast<VkAcquireNextImageInfoKHR&>(*this)=rhs; return *this;}
	operator VkAcquireNextImageInfoKHR*()const{return const_cast<VkAcquireNextImageInfoKHR*>(static_cast<const VkAcquireNextImageInfoKHR*>(this));}
};

/*	VkDescriptorUpdateTemplateEntry
*/
struct	S_descriptor_update_template_entry:VkDescriptorUpdateTemplateEntry{
	using VkDescriptorUpdateTemplateEntry::dstBinding;
	using VkDescriptorUpdateTemplateEntry::dstArrayElement;
	using VkDescriptorUpdateTemplateEntry::descriptorCount;
	using VkDescriptorUpdateTemplateEntry::descriptorType;
	using VkDescriptorUpdateTemplateEntry::offset;
	using VkDescriptorUpdateTemplateEntry::stride;

	S_descriptor_update_template_entry& operator=(const VkDescriptorUpdateTemplateEntry& rhs){static_cast<VkDescriptorUpdateTemplateEntry&>(*this)=rhs; return *this;}
	operator VkDescriptorUpdateTemplateEntry*()const{return const_cast<VkDescriptorUpdateTemplateEntry*>(static_cast<const VkDescriptorUpdateTemplateEntry*>(this));}
};

/*	VkDescriptorUpdateTemplateCreateInfo
*/
struct	S_descriptor_update_template_create_info:VkDescriptorUpdateTemplateCreateInfo{
private:
	using VkDescriptorUpdateTemplateCreateInfo::sType;
	using VkDescriptorUpdateTemplateCreateInfo::pNext;
public:
	using VkDescriptorUpdateTemplateCreateInfo::flags;
	using VkDescriptorUpdateTemplateCreateInfo::descriptorUpdateEntryCount;
	using VkDescriptorUpdateTemplateCreateInfo::pDescriptorUpdateEntries;
	using VkDescriptorUpdateTemplateCreateInfo::templateType;
	using VkDescriptorUpdateTemplateCreateInfo::descriptorSetLayout;
	using VkDescriptorUpdateTemplateCreateInfo::pipelineBindPoint;
	using VkDescriptorUpdateTemplateCreateInfo::pipelineLayout;
	using VkDescriptorUpdateTemplateCreateInfo::set;

S_descriptor_update_template_create_info():VkDescriptorUpdateTemplateCreateInfo{VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,nullptr}{}
S_descriptor_update_template_create_info(
	VkDescriptorUpdateTemplateCreateFlags flags_,
	uint32_t descriptorUpdateEntryCount_,
	const S_descriptor_update_template_entry * pDescriptorUpdateEntries_,
	E_descriptor_update_template_type templateType_,
	VkDescriptorSetLayout descriptorSetLayout_,
	E_pipeline_bind_point pipelineBindPoint_,
	VkPipelineLayout pipelineLayout_,
	uint32_t set_)
	:VkDescriptorUpdateTemplateCreateInfo{
	VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO
	,nullptr
	,flags_
	,descriptorUpdateEntryCount_
	,pDescriptorUpdateEntries_
	,templateType_
	,descriptorSetLayout_
	,pipelineBindPoint_
	,pipelineLayout_
	,set_}
	{
	}

	S_descriptor_update_template_create_info& operator=(const VkDescriptorUpdateTemplateCreateInfo& rhs){static_cast<VkDescriptorUpdateTemplateCreateInfo&>(*this)=rhs; return *this;}
	operator VkDescriptorUpdateTemplateCreateInfo*()const{return const_cast<VkDescriptorUpdateTemplateCreateInfo*>(static_cast<const VkDescriptorUpdateTemplateCreateInfo*>(this));}
};

/*	VkXYColorEXT
Chromaticity coordinate*/
struct	S_xy_color_EXT:VkXYColorEXT{
	using VkXYColorEXT::x;
	using VkXYColorEXT::y;

	S_xy_color_EXT& operator=(const VkXYColorEXT& rhs){static_cast<VkXYColorEXT&>(*this)=rhs; return *this;}
	operator VkXYColorEXT*()const{return const_cast<VkXYColorEXT*>(static_cast<const VkXYColorEXT*>(this));}
};

/*	VkHdrMetadataEXT
*/
struct	S_hdr_metadata_EXT:VkHdrMetadataEXT{
private:
	using VkHdrMetadataEXT::sType;
	using VkHdrMetadataEXT::pNext;
public:
	using VkHdrMetadataEXT::displayPrimaryRed;
	using VkHdrMetadataEXT::displayPrimaryGreen;
	using VkHdrMetadataEXT::displayPrimaryBlue;
	using VkHdrMetadataEXT::whitePoint;
	using VkHdrMetadataEXT::maxLuminance;
	using VkHdrMetadataEXT::minLuminance;
	using VkHdrMetadataEXT::maxContentLightLevel;
	using VkHdrMetadataEXT::maxFrameAverageLightLevel;

S_hdr_metadata_EXT():VkHdrMetadataEXT{VK_STRUCTURE_TYPE_HDR_METADATA_EXT,nullptr}{}
S_hdr_metadata_EXT(
	S_xy_color_EXT displayPrimaryRed_,
	S_xy_color_EXT displayPrimaryGreen_,
	S_xy_color_EXT displayPrimaryBlue_,
	S_xy_color_EXT whitePoint_,
	float maxLuminance_,
	float minLuminance_,
	float maxContentLightLevel_,
	float maxFrameAverageLightLevel_)
	:VkHdrMetadataEXT{
	VK_STRUCTURE_TYPE_HDR_METADATA_EXT
	,nullptr
	,displayPrimaryRed_
	,displayPrimaryGreen_
	,displayPrimaryBlue_
	,whitePoint_
	,maxLuminance_
	,minLuminance_
	,maxContentLightLevel_
	,maxFrameAverageLightLevel_}
	{
	}

	S_hdr_metadata_EXT& operator=(const VkHdrMetadataEXT& rhs){static_cast<VkHdrMetadataEXT&>(*this)=rhs; return *this;}
	operator VkHdrMetadataEXT*()const{return const_cast<VkHdrMetadataEXT*>(static_cast<const VkHdrMetadataEXT*>(this));}
};

/*	VkRefreshCycleDurationGOOGLE
(returnedonly)
*/
struct	S_refresh_cycle_duration_GOOGLE:VkRefreshCycleDurationGOOGLE{
	using VkRefreshCycleDurationGOOGLE::refreshDuration;

	S_refresh_cycle_duration_GOOGLE& operator=(const VkRefreshCycleDurationGOOGLE& rhs){static_cast<VkRefreshCycleDurationGOOGLE&>(*this)=rhs; return *this;}
	operator VkRefreshCycleDurationGOOGLE*()const{return const_cast<VkRefreshCycleDurationGOOGLE*>(static_cast<const VkRefreshCycleDurationGOOGLE*>(this));}
};

/*	VkPastPresentationTimingGOOGLE
(returnedonly)
*/
struct	S_past_presentation_timing_GOOGLE:VkPastPresentationTimingGOOGLE{
	using VkPastPresentationTimingGOOGLE::presentID;
	using VkPastPresentationTimingGOOGLE::desiredPresentTime;
	using VkPastPresentationTimingGOOGLE::actualPresentTime;
	using VkPastPresentationTimingGOOGLE::earliestPresentTime;
	using VkPastPresentationTimingGOOGLE::presentMargin;

	S_past_presentation_timing_GOOGLE& operator=(const VkPastPresentationTimingGOOGLE& rhs){static_cast<VkPastPresentationTimingGOOGLE&>(*this)=rhs; return *this;}
	operator VkPastPresentationTimingGOOGLE*()const{return const_cast<VkPastPresentationTimingGOOGLE*>(static_cast<const VkPastPresentationTimingGOOGLE*>(this));}
};

/*	VkIOSSurfaceCreateInfoMVK
*/
#ifdef VK_USE_PLATFORM_IOS_MVK
struct	S_ios_surface_create_info_MVK:VkIOSSurfaceCreateInfoMVK{
private:
	using VkIOSSurfaceCreateInfoMVK::sType;
	using VkIOSSurfaceCreateInfoMVK::pNext;
public:
	using VkIOSSurfaceCreateInfoMVK::flags;
	using VkIOSSurfaceCreateInfoMVK::pView;

S_ios_surface_create_info_MVK():VkIOSSurfaceCreateInfoMVK{VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK,nullptr}{}
S_ios_surface_create_info_MVK(
	VkIOSSurfaceCreateFlagsMVK flags_,
	const void * pView_)
	:VkIOSSurfaceCreateInfoMVK{
	VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK
	,nullptr
	,flags_
	,pView_}
	{
	}

	S_ios_surface_create_info_MVK& operator=(const VkIOSSurfaceCreateInfoMVK& rhs){static_cast<VkIOSSurfaceCreateInfoMVK&>(*this)=rhs; return *this;}
	operator VkIOSSurfaceCreateInfoMVK*()const{return const_cast<VkIOSSurfaceCreateInfoMVK*>(static_cast<const VkIOSSurfaceCreateInfoMVK*>(this));}
};
#endif //VK_USE_PLATFORM_IOS_MVK

/*	VkMacOSSurfaceCreateInfoMVK
*/
#ifdef VK_USE_PLATFORM_MACOS_MVK
struct	S_mac_os_surface_create_info_MVK:VkMacOSSurfaceCreateInfoMVK{
private:
	using VkMacOSSurfaceCreateInfoMVK::sType;
	using VkMacOSSurfaceCreateInfoMVK::pNext;
public:
	using VkMacOSSurfaceCreateInfoMVK::flags;
	using VkMacOSSurfaceCreateInfoMVK::pView;

S_mac_os_surface_create_info_MVK():VkMacOSSurfaceCreateInfoMVK{VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK,nullptr}{}
S_mac_os_surface_create_info_MVK(
	VkMacOSSurfaceCreateFlagsMVK flags_,
	const void * pView_)
	:VkMacOSSurfaceCreateInfoMVK{
	VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK
	,nullptr
	,flags_
	,pView_}
	{
	}

	S_mac_os_surface_create_info_MVK& operator=(const VkMacOSSurfaceCreateInfoMVK& rhs){static_cast<VkMacOSSurfaceCreateInfoMVK&>(*this)=rhs; return *this;}
	operator VkMacOSSurfaceCreateInfoMVK*()const{return const_cast<VkMacOSSurfaceCreateInfoMVK*>(static_cast<const VkMacOSSurfaceCreateInfoMVK*>(this));}
};
#endif //VK_USE_PLATFORM_MACOS_MVK

/*	VkPhysicalDeviceSurfaceInfo2KHR
*/
struct	S_physical_device_surface_info2_KHR:VkPhysicalDeviceSurfaceInfo2KHR{
private:
	using VkPhysicalDeviceSurfaceInfo2KHR::sType;
	using VkPhysicalDeviceSurfaceInfo2KHR::pNext;
public:
	using VkPhysicalDeviceSurfaceInfo2KHR::surface;

S_physical_device_surface_info2_KHR():VkPhysicalDeviceSurfaceInfo2KHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR,nullptr}{}
S_physical_device_surface_info2_KHR(
	VkSurfaceKHR surface_)
	:VkPhysicalDeviceSurfaceInfo2KHR{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR
	,nullptr
	,surface_}
	{
	}

	S_physical_device_surface_info2_KHR& operator=(const VkPhysicalDeviceSurfaceInfo2KHR& rhs){static_cast<VkPhysicalDeviceSurfaceInfo2KHR&>(*this)=rhs; return *this;}
	operator VkPhysicalDeviceSurfaceInfo2KHR*()const{return const_cast<VkPhysicalDeviceSurfaceInfo2KHR*>(static_cast<const VkPhysicalDeviceSurfaceInfo2KHR*>(this));}
};

/*	VkSharedPresentSurfaceCapabilitiesKHR
(returnedonly)
ex to: VkSurfaceCapabilities2KHR
*/
struct	S_shared_present_surface_capabilities_KHR:VkSharedPresentSurfaceCapabilitiesKHR{
private:
	using VkSharedPresentSurfaceCapabilitiesKHR::sType;
	using VkSharedPresentSurfaceCapabilitiesKHR::pNext;
public:
	using VkSharedPresentSurfaceCapabilitiesKHR::sharedPresentSupportedUsageFlags;

S_shared_present_surface_capabilities_KHR():VkSharedPresentSurfaceCapabilitiesKHR{VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR,nullptr}{}
S_shared_present_surface_capabilities_KHR(
	F_image_usage sharedPresentSupportedUsageFlags_)
	:VkSharedPresentSurfaceCapabilitiesKHR{
	VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR
	,nullptr
	,sharedPresentSupportedUsageFlags_}
	{
	}

friend S_surface_capabilities2_KHR;

	S_shared_present_surface_capabilities_KHR& operator=(const VkSharedPresentSurfaceCapabilitiesKHR& rhs){static_cast<VkSharedPresentSurfaceCapabilitiesKHR&>(*this)=rhs; return *this;}
	operator VkSharedPresentSurfaceCapabilitiesKHR*()const{return const_cast<VkSharedPresentSurfaceCapabilitiesKHR*>(static_cast<const VkSharedPresentSurfaceCapabilitiesKHR*>(this));}
};

/*	VkSurfaceCapabilities2KHR
(returnedonly)
ex:
	VkSharedPresentSurfaceCapabilitiesKHR
*/

struct N_surface_capabilities2_KHR{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_surface_capabilities2_KHR& n_shared_present_surface_capabilities_KHR(S_shared_present_surface_capabilities_KHR const& next_);
};
struct	S_surface_capabilities2_KHR:VkSurfaceCapabilities2KHR{
private:
	using VkSurfaceCapabilities2KHR::sType;
	using VkSurfaceCapabilities2KHR::pNext;
public:
	using VkSurfaceCapabilities2KHR::surfaceCapabilities;

S_surface_capabilities2_KHR():VkSurfaceCapabilities2KHR{VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR,nullptr}{}
S_surface_capabilities2_KHR(
	S_surface_capabilities_KHR surfaceCapabilities_)
	:VkSurfaceCapabilities2KHR{
	VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR
	,nullptr
	,surfaceCapabilities_}
	{
	}

	S_surface_capabilities2_KHR& operator=(const VkSurfaceCapabilities2KHR& rhs){static_cast<VkSurfaceCapabilities2KHR&>(*this)=rhs; return *this;}
	operator VkSurfaceCapabilities2KHR*()const{return const_cast<VkSurfaceCapabilities2KHR*>(static_cast<const VkSurfaceCapabilities2KHR*>(this));}

S_surface_capabilities2_KHR& n_shared_present_surface_capabilities_KHR(S_shared_present_surface_capabilities_KHR const& next_);
void set_pNext(N_surface_capabilities2_KHR n_){pNext = n_;}
};

/*	VkSurfaceFormat2KHR
(returnedonly)
*/
struct	S_surface_format2_KHR:VkSurfaceFormat2KHR{
private:
	using VkSurfaceFormat2KHR::sType;
	using VkSurfaceFormat2KHR::pNext;
public:
	using VkSurfaceFormat2KHR::surfaceFormat;

S_surface_format2_KHR():VkSurfaceFormat2KHR{VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR,nullptr}{}
S_surface_format2_KHR(
	S_surface_format_KHR surfaceFormat_)
	:VkSurfaceFormat2KHR{
	VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR
	,nullptr
	,surfaceFormat_}
	{
	}

	S_surface_format2_KHR& operator=(const VkSurfaceFormat2KHR& rhs){static_cast<VkSurfaceFormat2KHR&>(*this)=rhs; return *this;}
	operator VkSurfaceFormat2KHR*()const{return const_cast<VkSurfaceFormat2KHR*>(static_cast<const VkSurfaceFormat2KHR*>(this));}
};

/*	VkDisplayProperties2KHR
(returnedonly)
*/
struct	S_display_properties2_KHR:VkDisplayProperties2KHR{
private:
	using VkDisplayProperties2KHR::sType;
	using VkDisplayProperties2KHR::pNext;
public:
	using VkDisplayProperties2KHR::displayProperties;

S_display_properties2_KHR():VkDisplayProperties2KHR{VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR,nullptr}{}
S_display_properties2_KHR(
	S_display_properties_KHR displayProperties_)
	:VkDisplayProperties2KHR{
	VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR
	,nullptr
	,displayProperties_}
	{
	}

	S_display_properties2_KHR& operator=(const VkDisplayProperties2KHR& rhs){static_cast<VkDisplayProperties2KHR&>(*this)=rhs; return *this;}
	operator VkDisplayProperties2KHR*()const{return const_cast<VkDisplayProperties2KHR*>(static_cast<const VkDisplayProperties2KHR*>(this));}
};

/*	VkDisplayPlaneProperties2KHR
(returnedonly)
*/
struct	S_display_plane_properties2_KHR:VkDisplayPlaneProperties2KHR{
private:
	using VkDisplayPlaneProperties2KHR::sType;
	using VkDisplayPlaneProperties2KHR::pNext;
public:
	using VkDisplayPlaneProperties2KHR::displayPlaneProperties;

S_display_plane_properties2_KHR():VkDisplayPlaneProperties2KHR{VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR,nullptr}{}
S_display_plane_properties2_KHR(
	S_display_plane_properties_KHR displayPlaneProperties_)
	:VkDisplayPlaneProperties2KHR{
	VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR
	,nullptr
	,displayPlaneProperties_}
	{
	}

	S_display_plane_properties2_KHR& operator=(const VkDisplayPlaneProperties2KHR& rhs){static_cast<VkDisplayPlaneProperties2KHR&>(*this)=rhs; return *this;}
	operator VkDisplayPlaneProperties2KHR*()const{return const_cast<VkDisplayPlaneProperties2KHR*>(static_cast<const VkDisplayPlaneProperties2KHR*>(this));}
};

/*	VkDisplayModeProperties2KHR
(returnedonly)
*/
struct	S_display_mode_properties2_KHR:VkDisplayModeProperties2KHR{
private:
	using VkDisplayModeProperties2KHR::sType;
	using VkDisplayModeProperties2KHR::pNext;
public:
	using VkDisplayModeProperties2KHR::displayModeProperties;

S_display_mode_properties2_KHR():VkDisplayModeProperties2KHR{VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR,nullptr}{}
S_display_mode_properties2_KHR(
	S_display_mode_properties_KHR displayModeProperties_)
	:VkDisplayModeProperties2KHR{
	VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR
	,nullptr
	,displayModeProperties_}
	{
	}

	S_display_mode_properties2_KHR& operator=(const VkDisplayModeProperties2KHR& rhs){static_cast<VkDisplayModeProperties2KHR&>(*this)=rhs; return *this;}
	operator VkDisplayModeProperties2KHR*()const{return const_cast<VkDisplayModeProperties2KHR*>(static_cast<const VkDisplayModeProperties2KHR*>(this));}
};

/*	VkDisplayPlaneInfo2KHR
*/
struct	S_display_plane_info2_KHR:VkDisplayPlaneInfo2KHR{
private:
	using VkDisplayPlaneInfo2KHR::sType;
	using VkDisplayPlaneInfo2KHR::pNext;
public:
	using VkDisplayPlaneInfo2KHR::mode;
	using VkDisplayPlaneInfo2KHR::planeIndex;

S_display_plane_info2_KHR():VkDisplayPlaneInfo2KHR{VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR,nullptr}{}
S_display_plane_info2_KHR(
	VkDisplayModeKHR mode_,
	uint32_t planeIndex_)
	:VkDisplayPlaneInfo2KHR{
	VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR
	,nullptr
	,mode_
	,planeIndex_}
	{
	}

	S_display_plane_info2_KHR& operator=(const VkDisplayPlaneInfo2KHR& rhs){static_cast<VkDisplayPlaneInfo2KHR&>(*this)=rhs; return *this;}
	operator VkDisplayPlaneInfo2KHR*()const{return const_cast<VkDisplayPlaneInfo2KHR*>(static_cast<const VkDisplayPlaneInfo2KHR*>(this));}
};

/*	VkDisplayPlaneCapabilities2KHR
(returnedonly)
*/
struct	S_display_plane_capabilities2_KHR:VkDisplayPlaneCapabilities2KHR{
private:
	using VkDisplayPlaneCapabilities2KHR::sType;
	using VkDisplayPlaneCapabilities2KHR::pNext;
public:
	using VkDisplayPlaneCapabilities2KHR::capabilities;

S_display_plane_capabilities2_KHR():VkDisplayPlaneCapabilities2KHR{VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR,nullptr}{}
S_display_plane_capabilities2_KHR(
	S_display_plane_capabilities_KHR capabilities_)
	:VkDisplayPlaneCapabilities2KHR{
	VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR
	,nullptr
	,capabilities_}
	{
	}

	S_display_plane_capabilities2_KHR& operator=(const VkDisplayPlaneCapabilities2KHR& rhs){static_cast<VkDisplayPlaneCapabilities2KHR&>(*this)=rhs; return *this;}
	operator VkDisplayPlaneCapabilities2KHR*()const{return const_cast<VkDisplayPlaneCapabilities2KHR*>(static_cast<const VkDisplayPlaneCapabilities2KHR*>(this));}
};

/*	VkBufferMemoryRequirementsInfo2
*/
struct	S_buffer_memory_requirements_info2:VkBufferMemoryRequirementsInfo2{
private:
	using VkBufferMemoryRequirementsInfo2::sType;
	using VkBufferMemoryRequirementsInfo2::pNext;
public:
	using VkBufferMemoryRequirementsInfo2::buffer;

S_buffer_memory_requirements_info2():VkBufferMemoryRequirementsInfo2{VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2,nullptr}{}
S_buffer_memory_requirements_info2(
	VkBuffer buffer_)
	:VkBufferMemoryRequirementsInfo2{
	VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2
	,nullptr
	,buffer_}
	{
	}

	S_buffer_memory_requirements_info2& operator=(const VkBufferMemoryRequirementsInfo2& rhs){static_cast<VkBufferMemoryRequirementsInfo2&>(*this)=rhs; return *this;}
	operator VkBufferMemoryRequirementsInfo2*()const{return const_cast<VkBufferMemoryRequirementsInfo2*>(static_cast<const VkBufferMemoryRequirementsInfo2*>(this));}
};

/*	VkImagePlaneMemoryRequirementsInfo
ex to: VkImageMemoryRequirementsInfo2
*/
struct	S_image_plane_memory_requirements_info:VkImagePlaneMemoryRequirementsInfo{
private:
	using VkImagePlaneMemoryRequirementsInfo::sType;
	using VkImagePlaneMemoryRequirementsInfo::pNext;
public:
	using VkImagePlaneMemoryRequirementsInfo::planeAspect;

S_image_plane_memory_requirements_info():VkImagePlaneMemoryRequirementsInfo{VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO,nullptr}{}
S_image_plane_memory_requirements_info(
	F_image_aspect planeAspect_)
	:VkImagePlaneMemoryRequirementsInfo{
	VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO
	,nullptr
	,planeAspect_}
	{
	}

friend S_image_memory_requirements_info2;

	S_image_plane_memory_requirements_info& operator=(const VkImagePlaneMemoryRequirementsInfo& rhs){static_cast<VkImagePlaneMemoryRequirementsInfo&>(*this)=rhs; return *this;}
	operator VkImagePlaneMemoryRequirementsInfo*()const{return const_cast<VkImagePlaneMemoryRequirementsInfo*>(static_cast<const VkImagePlaneMemoryRequirementsInfo*>(this));}
};

/*	VkImageMemoryRequirementsInfo2
ex:
	VkImagePlaneMemoryRequirementsInfo
*/

struct N_image_memory_requirements_info2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_image_memory_requirements_info2& n_image_plane_memory_requirements_info(S_image_plane_memory_requirements_info const& next_);
};
struct	S_image_memory_requirements_info2:VkImageMemoryRequirementsInfo2{
private:
	using VkImageMemoryRequirementsInfo2::sType;
	using VkImageMemoryRequirementsInfo2::pNext;
public:
	using VkImageMemoryRequirementsInfo2::image;

S_image_memory_requirements_info2():VkImageMemoryRequirementsInfo2{VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2,nullptr}{}
S_image_memory_requirements_info2(
	VkImage image_)
	:VkImageMemoryRequirementsInfo2{
	VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2
	,nullptr
	,image_}
	{
	}

	S_image_memory_requirements_info2& operator=(const VkImageMemoryRequirementsInfo2& rhs){static_cast<VkImageMemoryRequirementsInfo2&>(*this)=rhs; return *this;}
	operator VkImageMemoryRequirementsInfo2*()const{return const_cast<VkImageMemoryRequirementsInfo2*>(static_cast<const VkImageMemoryRequirementsInfo2*>(this));}

S_image_memory_requirements_info2& n_image_plane_memory_requirements_info(S_image_plane_memory_requirements_info const& next_);
void set_pNext(N_image_memory_requirements_info2 n_){pNext = n_;}
};

/*	VkImageSparseMemoryRequirementsInfo2
*/
struct	S_image_sparse_memory_requirements_info2:VkImageSparseMemoryRequirementsInfo2{
private:
	using VkImageSparseMemoryRequirementsInfo2::sType;
	using VkImageSparseMemoryRequirementsInfo2::pNext;
public:
	using VkImageSparseMemoryRequirementsInfo2::image;

S_image_sparse_memory_requirements_info2():VkImageSparseMemoryRequirementsInfo2{VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2,nullptr}{}
S_image_sparse_memory_requirements_info2(
	VkImage image_)
	:VkImageSparseMemoryRequirementsInfo2{
	VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2
	,nullptr
	,image_}
	{
	}

	S_image_sparse_memory_requirements_info2& operator=(const VkImageSparseMemoryRequirementsInfo2& rhs){static_cast<VkImageSparseMemoryRequirementsInfo2&>(*this)=rhs; return *this;}
	operator VkImageSparseMemoryRequirementsInfo2*()const{return const_cast<VkImageSparseMemoryRequirementsInfo2*>(static_cast<const VkImageSparseMemoryRequirementsInfo2*>(this));}
};

/*	VkMemoryDedicatedRequirements
(returnedonly)
ex to: VkMemoryRequirements2
*/
struct	S_memory_dedicated_requirements:VkMemoryDedicatedRequirements{
private:
	using VkMemoryDedicatedRequirements::sType;
	using VkMemoryDedicatedRequirements::pNext;
public:
	using VkMemoryDedicatedRequirements::prefersDedicatedAllocation;
	using VkMemoryDedicatedRequirements::requiresDedicatedAllocation;

S_memory_dedicated_requirements():VkMemoryDedicatedRequirements{VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS,nullptr}{}
S_memory_dedicated_requirements(
	VkBool32 prefersDedicatedAllocation_,
	VkBool32 requiresDedicatedAllocation_)
	:VkMemoryDedicatedRequirements{
	VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS
	,nullptr
	,prefersDedicatedAllocation_
	,requiresDedicatedAllocation_}
	{
	}

friend S_memory_requirements2;

	S_memory_dedicated_requirements& operator=(const VkMemoryDedicatedRequirements& rhs){static_cast<VkMemoryDedicatedRequirements&>(*this)=rhs; return *this;}
	operator VkMemoryDedicatedRequirements*()const{return const_cast<VkMemoryDedicatedRequirements*>(static_cast<const VkMemoryDedicatedRequirements*>(this));}
};

/*	VkMemoryRequirements2
(returnedonly)
ex:
	VkMemoryDedicatedRequirements
*/

struct N_memory_requirements2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_memory_requirements2& n_memory_dedicated_requirements(S_memory_dedicated_requirements const& next_);
};
struct	S_memory_requirements2:VkMemoryRequirements2{
private:
	using VkMemoryRequirements2::sType;
	using VkMemoryRequirements2::pNext;
public:
	using VkMemoryRequirements2::memoryRequirements;

S_memory_requirements2():VkMemoryRequirements2{VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2,nullptr}{}
S_memory_requirements2(
	S_memory_requirements memoryRequirements_)
	:VkMemoryRequirements2{
	VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2
	,nullptr
	,memoryRequirements_}
	{
	}

	S_memory_requirements2& operator=(const VkMemoryRequirements2& rhs){static_cast<VkMemoryRequirements2&>(*this)=rhs; return *this;}
	operator VkMemoryRequirements2*()const{return const_cast<VkMemoryRequirements2*>(static_cast<const VkMemoryRequirements2*>(this));}

S_memory_requirements2& n_memory_dedicated_requirements(S_memory_dedicated_requirements const& next_);
void set_pNext(N_memory_requirements2 n_){pNext = n_;}
};

/*	VkSparseImageMemoryRequirements2
(returnedonly)
*/
struct	S_sparse_image_memory_requirements2:VkSparseImageMemoryRequirements2{
private:
	using VkSparseImageMemoryRequirements2::sType;
	using VkSparseImageMemoryRequirements2::pNext;
public:
	using VkSparseImageMemoryRequirements2::memoryRequirements;

S_sparse_image_memory_requirements2():VkSparseImageMemoryRequirements2{VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2,nullptr}{}
S_sparse_image_memory_requirements2(
	S_sparse_image_memory_requirements memoryRequirements_)
	:VkSparseImageMemoryRequirements2{
	VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2
	,nullptr
	,memoryRequirements_}
	{
	}

	S_sparse_image_memory_requirements2& operator=(const VkSparseImageMemoryRequirements2& rhs){static_cast<VkSparseImageMemoryRequirements2&>(*this)=rhs; return *this;}
	operator VkSparseImageMemoryRequirements2*()const{return const_cast<VkSparseImageMemoryRequirements2*>(static_cast<const VkSparseImageMemoryRequirements2*>(this));}
};

/*	VkSamplerYcbcrConversionCreateInfo
ex:
	VkExternalFormatANDROID
*/

struct N_sampler_ycbcr_conversion_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_sampler_ycbcr_conversion_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
};
struct	S_sampler_ycbcr_conversion_create_info:VkSamplerYcbcrConversionCreateInfo{
private:
	using VkSamplerYcbcrConversionCreateInfo::sType;
	using VkSamplerYcbcrConversionCreateInfo::pNext;
public:
	using VkSamplerYcbcrConversionCreateInfo::format;
	using VkSamplerYcbcrConversionCreateInfo::ycbcrModel;
	using VkSamplerYcbcrConversionCreateInfo::ycbcrRange;
	using VkSamplerYcbcrConversionCreateInfo::components;
	using VkSamplerYcbcrConversionCreateInfo::xChromaOffset;
	using VkSamplerYcbcrConversionCreateInfo::yChromaOffset;
	using VkSamplerYcbcrConversionCreateInfo::chromaFilter;
	using VkSamplerYcbcrConversionCreateInfo::forceExplicitReconstruction;

S_sampler_ycbcr_conversion_create_info():VkSamplerYcbcrConversionCreateInfo{VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO,nullptr}{}
S_sampler_ycbcr_conversion_create_info(
	E_format format_,
	E_sampler_ycbcr_model_conversion ycbcrModel_,
	E_sampler_ycbcr_range ycbcrRange_,
	S_component_mapping components_,
	E_chroma_location xChromaOffset_,
	E_chroma_location yChromaOffset_,
	E_filter chromaFilter_,
	VkBool32 forceExplicitReconstruction_)
	:VkSamplerYcbcrConversionCreateInfo{
	VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO
	,nullptr
	,format_
	,ycbcrModel_
	,ycbcrRange_
	,components_
	,xChromaOffset_
	,yChromaOffset_
	,chromaFilter_
	,forceExplicitReconstruction_}
	{
	}

	S_sampler_ycbcr_conversion_create_info& operator=(const VkSamplerYcbcrConversionCreateInfo& rhs){static_cast<VkSamplerYcbcrConversionCreateInfo&>(*this)=rhs; return *this;}
	operator VkSamplerYcbcrConversionCreateInfo*()const{return const_cast<VkSamplerYcbcrConversionCreateInfo*>(static_cast<const VkSamplerYcbcrConversionCreateInfo*>(this));}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_sampler_ycbcr_conversion_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
void set_pNext(N_sampler_ycbcr_conversion_create_info n_){pNext = n_;}
};

/*	VkConditionalRenderingBeginInfoEXT
*/
struct	S_conditional_rendering_begin_info_EXT:VkConditionalRenderingBeginInfoEXT{
private:
	using VkConditionalRenderingBeginInfoEXT::sType;
	using VkConditionalRenderingBeginInfoEXT::pNext;
public:
	using VkConditionalRenderingBeginInfoEXT::buffer;
	using VkConditionalRenderingBeginInfoEXT::offset;
	using VkConditionalRenderingBeginInfoEXT::flags;

S_conditional_rendering_begin_info_EXT():VkConditionalRenderingBeginInfoEXT{VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT,nullptr}{}
S_conditional_rendering_begin_info_EXT(
	VkBuffer buffer_,
	VkDeviceSize offset_,
	F_conditional_rendering_EXT flags_)
	:VkConditionalRenderingBeginInfoEXT{
	VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT
	,nullptr
	,buffer_
	,offset_
	,flags_}
	{
	}

	S_conditional_rendering_begin_info_EXT& operator=(const VkConditionalRenderingBeginInfoEXT& rhs){static_cast<VkConditionalRenderingBeginInfoEXT&>(*this)=rhs; return *this;}
	operator VkConditionalRenderingBeginInfoEXT*()const{return const_cast<VkConditionalRenderingBeginInfoEXT*>(static_cast<const VkConditionalRenderingBeginInfoEXT*>(this));}
};

/*	VkDeviceQueueInfo2
*/
struct	S_device_queue_info2:VkDeviceQueueInfo2{
private:
	using VkDeviceQueueInfo2::sType;
	using VkDeviceQueueInfo2::pNext;
public:
	using VkDeviceQueueInfo2::flags;
	using VkDeviceQueueInfo2::queueFamilyIndex;
	using VkDeviceQueueInfo2::queueIndex;

S_device_queue_info2():VkDeviceQueueInfo2{VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2,nullptr}{}
S_device_queue_info2(
	F_device_queue_create flags_,
	uint32_t queueFamilyIndex_,
	uint32_t queueIndex_)
	:VkDeviceQueueInfo2{
	VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2
	,nullptr
	,static_cast<VkFlags>(flags_)
	,queueFamilyIndex_
	,queueIndex_}
	{
	}

	S_device_queue_info2& operator=(const VkDeviceQueueInfo2& rhs){static_cast<VkDeviceQueueInfo2&>(*this)=rhs; return *this;}
	operator VkDeviceQueueInfo2*()const{return const_cast<VkDeviceQueueInfo2*>(static_cast<const VkDeviceQueueInfo2*>(this));}
};

/*	VkMultisamplePropertiesEXT
(returnedonly)
*/
struct	S_multisample_properties_EXT:VkMultisamplePropertiesEXT{
private:
	using VkMultisamplePropertiesEXT::sType;
	using VkMultisamplePropertiesEXT::pNext;
public:
	using VkMultisamplePropertiesEXT::maxSampleLocationGridSize;

S_multisample_properties_EXT():VkMultisamplePropertiesEXT{VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT,nullptr}{}
S_multisample_properties_EXT(
	S_extent_2d maxSampleLocationGridSize_)
	:VkMultisamplePropertiesEXT{
	VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT
	,nullptr
	,maxSampleLocationGridSize_}
	{
	}

	S_multisample_properties_EXT& operator=(const VkMultisamplePropertiesEXT& rhs){static_cast<VkMultisamplePropertiesEXT&>(*this)=rhs; return *this;}
	operator VkMultisamplePropertiesEXT*()const{return const_cast<VkMultisamplePropertiesEXT*>(static_cast<const VkMultisamplePropertiesEXT*>(this));}
};

/*	VkValidationCacheCreateInfoEXT
*/
struct	S_validation_cache_create_info_EXT:VkValidationCacheCreateInfoEXT{
private:
	using VkValidationCacheCreateInfoEXT::sType;
	using VkValidationCacheCreateInfoEXT::pNext;
public:
	using VkValidationCacheCreateInfoEXT::flags;
	using VkValidationCacheCreateInfoEXT::initialDataSize;
	using VkValidationCacheCreateInfoEXT::pInitialData;

S_validation_cache_create_info_EXT():VkValidationCacheCreateInfoEXT{VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT,nullptr}{}
S_validation_cache_create_info_EXT(
	VkValidationCacheCreateFlagsEXT flags_,
	size_t initialDataSize_,
	const void * pInitialData_)
	:VkValidationCacheCreateInfoEXT{
	VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT
	,nullptr
	,flags_
	,initialDataSize_
	,pInitialData_}
	{
	}

	S_validation_cache_create_info_EXT& operator=(const VkValidationCacheCreateInfoEXT& rhs){static_cast<VkValidationCacheCreateInfoEXT&>(*this)=rhs; return *this;}
	operator VkValidationCacheCreateInfoEXT*()const{return const_cast<VkValidationCacheCreateInfoEXT*>(static_cast<const VkValidationCacheCreateInfoEXT*>(this));}
};

/*	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT
(returnedonly)
ex to: VkDescriptorSetLayoutSupport
*/
struct	S_descriptor_set_variable_descriptor_count_layout_support_EXT:VkDescriptorSetVariableDescriptorCountLayoutSupportEXT{
private:
	using VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::sType;
	using VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::pNext;
public:
	using VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::maxVariableDescriptorCount;

S_descriptor_set_variable_descriptor_count_layout_support_EXT():VkDescriptorSetVariableDescriptorCountLayoutSupportEXT{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT,nullptr}{}
S_descriptor_set_variable_descriptor_count_layout_support_EXT(
	uint32_t maxVariableDescriptorCount_)
	:VkDescriptorSetVariableDescriptorCountLayoutSupportEXT{
	VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT
	,nullptr
	,maxVariableDescriptorCount_}
	{
	}

friend S_descriptor_set_layout_support;

	S_descriptor_set_variable_descriptor_count_layout_support_EXT& operator=(const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& rhs){static_cast<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&>(*this)=rhs; return *this;}
	operator VkDescriptorSetVariableDescriptorCountLayoutSupportEXT*()const{return const_cast<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT*>(static_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT*>(this));}
};

/*	VkDescriptorSetLayoutSupport
(returnedonly)
ex:
	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT
*/

struct N_descriptor_set_layout_support{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_descriptor_set_layout_support& n_descriptor_set_variable_descriptor_count_layout_support_EXT(S_descriptor_set_variable_descriptor_count_layout_support_EXT const& next_);
};
struct	S_descriptor_set_layout_support:VkDescriptorSetLayoutSupport{
private:
	using VkDescriptorSetLayoutSupport::sType;
	using VkDescriptorSetLayoutSupport::pNext;
public:
	using VkDescriptorSetLayoutSupport::supported;

S_descriptor_set_layout_support():VkDescriptorSetLayoutSupport{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT,nullptr}{}
S_descriptor_set_layout_support(
	VkBool32 supported_)
	:VkDescriptorSetLayoutSupport{
	VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT
	,nullptr
	,supported_}
	{
	}

	S_descriptor_set_layout_support& operator=(const VkDescriptorSetLayoutSupport& rhs){static_cast<VkDescriptorSetLayoutSupport&>(*this)=rhs; return *this;}
	operator VkDescriptorSetLayoutSupport*()const{return const_cast<VkDescriptorSetLayoutSupport*>(static_cast<const VkDescriptorSetLayoutSupport*>(this));}

S_descriptor_set_layout_support& n_descriptor_set_variable_descriptor_count_layout_support_EXT(S_descriptor_set_variable_descriptor_count_layout_support_EXT const& next_);
void set_pNext(N_descriptor_set_layout_support n_){pNext = n_;}
};

/*	VkNativeBufferANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct	S_native_buffer_ANDROID:VkNativeBufferANDROID{
private:
	using VkNativeBufferANDROID::sType;
	using VkNativeBufferANDROID::pNext;
public:
	using VkNativeBufferANDROID::handle;
	using VkNativeBufferANDROID::stride;
	using VkNativeBufferANDROID::format;
	using VkNativeBufferANDROID::usage;

S_native_buffer_ANDROID():VkNativeBufferANDROID{VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID,nullptr}{}
S_native_buffer_ANDROID(
	const void * handle_,
	int stride_,
	int format_,
	int usage_)
	:VkNativeBufferANDROID{
	VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID
	,nullptr
	,handle_
	,stride_
	,format_
	,usage_}
	{
	}

	S_native_buffer_ANDROID& operator=(const VkNativeBufferANDROID& rhs){static_cast<VkNativeBufferANDROID&>(*this)=rhs; return *this;}
	operator VkNativeBufferANDROID*()const{return const_cast<VkNativeBufferANDROID*>(static_cast<const VkNativeBufferANDROID*>(this));}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkShaderResourceUsageAMD
(returnedonly)
*/
struct	S_shader_resource_usage_AMD:VkShaderResourceUsageAMD{
	using VkShaderResourceUsageAMD::numUsedVgprs;
	using VkShaderResourceUsageAMD::numUsedSgprs;
	using VkShaderResourceUsageAMD::ldsSizePerLocalWorkGroup;
	using VkShaderResourceUsageAMD::ldsUsageSizeInBytes;
	using VkShaderResourceUsageAMD::scratchMemUsageInBytes;

	S_shader_resource_usage_AMD& operator=(const VkShaderResourceUsageAMD& rhs){static_cast<VkShaderResourceUsageAMD&>(*this)=rhs; return *this;}
	operator VkShaderResourceUsageAMD*()const{return const_cast<VkShaderResourceUsageAMD*>(static_cast<const VkShaderResourceUsageAMD*>(this));}
};

/*	VkShaderStatisticsInfoAMD
(returnedonly)
*/
struct	S_shader_statistics_info_AMD:VkShaderStatisticsInfoAMD{
	using VkShaderStatisticsInfoAMD::shaderStageMask;
	using VkShaderStatisticsInfoAMD::resourceUsage;
	using VkShaderStatisticsInfoAMD::numPhysicalVgprs;
	using VkShaderStatisticsInfoAMD::numPhysicalSgprs;
	using VkShaderStatisticsInfoAMD::numAvailableVgprs;
	using VkShaderStatisticsInfoAMD::numAvailableSgprs;
	using VkShaderStatisticsInfoAMD::computeWorkGroupSize;

	S_shader_statistics_info_AMD& operator=(const VkShaderStatisticsInfoAMD& rhs){static_cast<VkShaderStatisticsInfoAMD&>(*this)=rhs; return *this;}
	operator VkShaderStatisticsInfoAMD*()const{return const_cast<VkShaderStatisticsInfoAMD*>(static_cast<const VkShaderStatisticsInfoAMD*>(this));}
};

/*	VkDebugUtilsObjectNameInfoEXT
*/
struct	S_debug_utils_object_name_info_EXT:VkDebugUtilsObjectNameInfoEXT{
private:
	using VkDebugUtilsObjectNameInfoEXT::sType;
	using VkDebugUtilsObjectNameInfoEXT::pNext;
public:
	using VkDebugUtilsObjectNameInfoEXT::objectType;
	using VkDebugUtilsObjectNameInfoEXT::objectHandle;
	using VkDebugUtilsObjectNameInfoEXT::pObjectName;

S_debug_utils_object_name_info_EXT():VkDebugUtilsObjectNameInfoEXT{VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT,nullptr}{}
S_debug_utils_object_name_info_EXT(
	E_object_type objectType_,
	uint64_t objectHandle_,
	const char * pObjectName_)
	:VkDebugUtilsObjectNameInfoEXT{
	VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT
	,nullptr
	,objectType_
	,objectHandle_
	,pObjectName_}
	{
	}

	S_debug_utils_object_name_info_EXT& operator=(const VkDebugUtilsObjectNameInfoEXT& rhs){static_cast<VkDebugUtilsObjectNameInfoEXT&>(*this)=rhs; return *this;}
	operator VkDebugUtilsObjectNameInfoEXT*()const{return const_cast<VkDebugUtilsObjectNameInfoEXT*>(static_cast<const VkDebugUtilsObjectNameInfoEXT*>(this));}
};

/*	VkDebugUtilsObjectTagInfoEXT
*/
struct	S_debug_utils_object_tag_info_EXT:VkDebugUtilsObjectTagInfoEXT{
private:
	using VkDebugUtilsObjectTagInfoEXT::sType;
	using VkDebugUtilsObjectTagInfoEXT::pNext;
public:
	using VkDebugUtilsObjectTagInfoEXT::objectType;
	using VkDebugUtilsObjectTagInfoEXT::objectHandle;
	using VkDebugUtilsObjectTagInfoEXT::tagName;
	using VkDebugUtilsObjectTagInfoEXT::tagSize;
	using VkDebugUtilsObjectTagInfoEXT::pTag;

S_debug_utils_object_tag_info_EXT():VkDebugUtilsObjectTagInfoEXT{VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT,nullptr}{}
S_debug_utils_object_tag_info_EXT(
	E_object_type objectType_,
	uint64_t objectHandle_,
	uint64_t tagName_,
	size_t tagSize_,
	const void * pTag_)
	:VkDebugUtilsObjectTagInfoEXT{
	VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT
	,nullptr
	,objectType_
	,objectHandle_
	,tagName_
	,tagSize_
	,pTag_}
	{
	}

	S_debug_utils_object_tag_info_EXT& operator=(const VkDebugUtilsObjectTagInfoEXT& rhs){static_cast<VkDebugUtilsObjectTagInfoEXT&>(*this)=rhs; return *this;}
	operator VkDebugUtilsObjectTagInfoEXT*()const{return const_cast<VkDebugUtilsObjectTagInfoEXT*>(static_cast<const VkDebugUtilsObjectTagInfoEXT*>(this));}
};

/*	VkDebugUtilsLabelEXT
*/
struct	S_debug_utils_label_EXT:VkDebugUtilsLabelEXT{
private:
	using VkDebugUtilsLabelEXT::sType;
	using VkDebugUtilsLabelEXT::pNext;
public:
	using VkDebugUtilsLabelEXT::pLabelName;
	using VkDebugUtilsLabelEXT::color;

S_debug_utils_label_EXT():VkDebugUtilsLabelEXT{VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT,nullptr}{}
S_debug_utils_label_EXT(
	const char * pLabelName_,
	float color_[4])
	:VkDebugUtilsLabelEXT{
	VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT
	,nullptr
	,pLabelName_
	,{}}
	{
		memcpy(color,color_,sizeof(color_) );
	}

	S_debug_utils_label_EXT& operator=(const VkDebugUtilsLabelEXT& rhs){static_cast<VkDebugUtilsLabelEXT&>(*this)=rhs; return *this;}
	operator VkDebugUtilsLabelEXT*()const{return const_cast<VkDebugUtilsLabelEXT*>(static_cast<const VkDebugUtilsLabelEXT*>(this));}
};

/*	VkDebugUtilsMessengerCallbackDataEXT
*/
struct	S_debug_utils_messenger_callback_data_EXT:VkDebugUtilsMessengerCallbackDataEXT{
private:
	using VkDebugUtilsMessengerCallbackDataEXT::sType;
	using VkDebugUtilsMessengerCallbackDataEXT::pNext;
public:
	using VkDebugUtilsMessengerCallbackDataEXT::flags;
	using VkDebugUtilsMessengerCallbackDataEXT::pMessageIdName;
	using VkDebugUtilsMessengerCallbackDataEXT::messageIdNumber;
	using VkDebugUtilsMessengerCallbackDataEXT::pMessage;
	using VkDebugUtilsMessengerCallbackDataEXT::queueLabelCount;
	using VkDebugUtilsMessengerCallbackDataEXT::pQueueLabels;
	using VkDebugUtilsMessengerCallbackDataEXT::cmdBufLabelCount;
	using VkDebugUtilsMessengerCallbackDataEXT::pCmdBufLabels;
	using VkDebugUtilsMessengerCallbackDataEXT::objectCount;
	using VkDebugUtilsMessengerCallbackDataEXT::pObjects;

S_debug_utils_messenger_callback_data_EXT():VkDebugUtilsMessengerCallbackDataEXT{VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT,nullptr}{}
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
	:VkDebugUtilsMessengerCallbackDataEXT{
	VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT
	,nullptr
	,flags_
	,pMessageIdName_
	,messageIdNumber_
	,pMessage_
	,queueLabelCount_
	,pQueueLabels_
	,cmdBufLabelCount_
	,pCmdBufLabels_
	,objectCount_
	,pObjects_}
	{
	}

	S_debug_utils_messenger_callback_data_EXT& operator=(const VkDebugUtilsMessengerCallbackDataEXT& rhs){static_cast<VkDebugUtilsMessengerCallbackDataEXT&>(*this)=rhs; return *this;}
	operator VkDebugUtilsMessengerCallbackDataEXT*()const{return const_cast<VkDebugUtilsMessengerCallbackDataEXT*>(static_cast<const VkDebugUtilsMessengerCallbackDataEXT*>(this));}
};

/*	VkMemoryHostPointerPropertiesEXT
*/
struct	S_memory_host_pointer_properties_EXT:VkMemoryHostPointerPropertiesEXT{
private:
	using VkMemoryHostPointerPropertiesEXT::sType;
	using VkMemoryHostPointerPropertiesEXT::pNext;
public:
	using VkMemoryHostPointerPropertiesEXT::memoryTypeBits;

S_memory_host_pointer_properties_EXT():VkMemoryHostPointerPropertiesEXT{VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT,nullptr}{}
S_memory_host_pointer_properties_EXT(
	uint32_t memoryTypeBits_)
	:VkMemoryHostPointerPropertiesEXT{
	VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT
	,nullptr
	,memoryTypeBits_}
	{
	}

	S_memory_host_pointer_properties_EXT& operator=(const VkMemoryHostPointerPropertiesEXT& rhs){static_cast<VkMemoryHostPointerPropertiesEXT&>(*this)=rhs; return *this;}
	operator VkMemoryHostPointerPropertiesEXT*()const{return const_cast<VkMemoryHostPointerPropertiesEXT*>(static_cast<const VkMemoryHostPointerPropertiesEXT*>(this));}
};

/*	VkAttachmentDescription2KHR
*/
struct	S_attachment_description2_KHR:VkAttachmentDescription2KHR{
private:
	using VkAttachmentDescription2KHR::sType;
	using VkAttachmentDescription2KHR::pNext;
public:
	using VkAttachmentDescription2KHR::flags;
	using VkAttachmentDescription2KHR::format;
	using VkAttachmentDescription2KHR::samples;
	using VkAttachmentDescription2KHR::loadOp;
	using VkAttachmentDescription2KHR::storeOp;
	using VkAttachmentDescription2KHR::stencilLoadOp;
	using VkAttachmentDescription2KHR::stencilStoreOp;
	using VkAttachmentDescription2KHR::initialLayout;
	using VkAttachmentDescription2KHR::finalLayout;

S_attachment_description2_KHR():VkAttachmentDescription2KHR{VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR,nullptr}{}
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
	:VkAttachmentDescription2KHR{
	VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR
	,nullptr
	,flags_
	,format_
	,samples_
	,loadOp_
	,storeOp_
	,stencilLoadOp_
	,stencilStoreOp_
	,initialLayout_
	,finalLayout_}
	{
	}

	S_attachment_description2_KHR& operator=(const VkAttachmentDescription2KHR& rhs){static_cast<VkAttachmentDescription2KHR&>(*this)=rhs; return *this;}
	operator VkAttachmentDescription2KHR*()const{return const_cast<VkAttachmentDescription2KHR*>(static_cast<const VkAttachmentDescription2KHR*>(this));}
};

/*	VkAttachmentReference2KHR
*/
struct	S_attachment_reference2_KHR:VkAttachmentReference2KHR{
private:
	using VkAttachmentReference2KHR::sType;
	using VkAttachmentReference2KHR::pNext;
public:
	using VkAttachmentReference2KHR::attachment;
	using VkAttachmentReference2KHR::layout;
	using VkAttachmentReference2KHR::aspectMask;

S_attachment_reference2_KHR():VkAttachmentReference2KHR{VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR,nullptr}{}
S_attachment_reference2_KHR(
	uint32_t attachment_,
	E_image_layout layout_,
	F_image_aspect aspectMask_)
	:VkAttachmentReference2KHR{
	VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR
	,nullptr
	,attachment_
	,layout_
	,aspectMask_}
	{
	}

	S_attachment_reference2_KHR& operator=(const VkAttachmentReference2KHR& rhs){static_cast<VkAttachmentReference2KHR&>(*this)=rhs; return *this;}
	operator VkAttachmentReference2KHR*()const{return const_cast<VkAttachmentReference2KHR*>(static_cast<const VkAttachmentReference2KHR*>(this));}
};

/*	VkSubpassDescription2KHR
*/
struct	S_subpass_description2_KHR:VkSubpassDescription2KHR{
private:
	using VkSubpassDescription2KHR::sType;
	using VkSubpassDescription2KHR::pNext;
public:
	using VkSubpassDescription2KHR::flags;
	using VkSubpassDescription2KHR::pipelineBindPoint;
	using VkSubpassDescription2KHR::viewMask;
	using VkSubpassDescription2KHR::inputAttachmentCount;
	using VkSubpassDescription2KHR::pInputAttachments;
	using VkSubpassDescription2KHR::colorAttachmentCount;
	using VkSubpassDescription2KHR::pColorAttachments;
	using VkSubpassDescription2KHR::pResolveAttachments;
	using VkSubpassDescription2KHR::pDepthStencilAttachment;
	using VkSubpassDescription2KHR::preserveAttachmentCount;
	using VkSubpassDescription2KHR::pPreserveAttachments;

S_subpass_description2_KHR():VkSubpassDescription2KHR{VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR,nullptr}{}
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
	:VkSubpassDescription2KHR{
	VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR
	,nullptr
	,static_cast<VkFlags>(flags_)
	,pipelineBindPoint_
	,viewMask_
	,inputAttachmentCount_
	,pInputAttachments_
	,colorAttachmentCount_
	,pColorAttachments_
	,pResolveAttachments_
	,pDepthStencilAttachment_
	,preserveAttachmentCount_
	,pPreserveAttachments_}
	{
	}

	S_subpass_description2_KHR& operator=(const VkSubpassDescription2KHR& rhs){static_cast<VkSubpassDescription2KHR&>(*this)=rhs; return *this;}
	operator VkSubpassDescription2KHR*()const{return const_cast<VkSubpassDescription2KHR*>(static_cast<const VkSubpassDescription2KHR*>(this));}
};

/*	VkSubpassDependency2KHR
*/
struct	S_subpass_dependency2_KHR:VkSubpassDependency2KHR{
private:
	using VkSubpassDependency2KHR::sType;
	using VkSubpassDependency2KHR::pNext;
public:
	using VkSubpassDependency2KHR::srcSubpass;
	using VkSubpassDependency2KHR::dstSubpass;
	using VkSubpassDependency2KHR::srcStageMask;
	using VkSubpassDependency2KHR::dstStageMask;
	using VkSubpassDependency2KHR::srcAccessMask;
	using VkSubpassDependency2KHR::dstAccessMask;
	using VkSubpassDependency2KHR::dependencyFlags;
	using VkSubpassDependency2KHR::viewOffset;

S_subpass_dependency2_KHR():VkSubpassDependency2KHR{VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR,nullptr}{}
S_subpass_dependency2_KHR(
	uint32_t srcSubpass_,
	uint32_t dstSubpass_,
	F_pipeline_stage srcStageMask_,
	F_pipeline_stage dstStageMask_,
	F_access srcAccessMask_,
	F_access dstAccessMask_,
	F_dependency dependencyFlags_,
	int32_t viewOffset_)
	:VkSubpassDependency2KHR{
	VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR
	,nullptr
	,srcSubpass_
	,dstSubpass_
	,srcStageMask_
	,dstStageMask_
	,srcAccessMask_
	,dstAccessMask_
	,dependencyFlags_
	,viewOffset_}
	{
	}

	S_subpass_dependency2_KHR& operator=(const VkSubpassDependency2KHR& rhs){static_cast<VkSubpassDependency2KHR&>(*this)=rhs; return *this;}
	operator VkSubpassDependency2KHR*()const{return const_cast<VkSubpassDependency2KHR*>(static_cast<const VkSubpassDependency2KHR*>(this));}
};

/*	VkRenderPassCreateInfo2KHR
*/
struct	S_render_pass_create_info2_KHR:VkRenderPassCreateInfo2KHR{
private:
	using VkRenderPassCreateInfo2KHR::sType;
	using VkRenderPassCreateInfo2KHR::pNext;
public:
	using VkRenderPassCreateInfo2KHR::flags;
	using VkRenderPassCreateInfo2KHR::attachmentCount;
	using VkRenderPassCreateInfo2KHR::pAttachments;
	using VkRenderPassCreateInfo2KHR::subpassCount;
	using VkRenderPassCreateInfo2KHR::pSubpasses;
	using VkRenderPassCreateInfo2KHR::dependencyCount;
	using VkRenderPassCreateInfo2KHR::pDependencies;
	using VkRenderPassCreateInfo2KHR::correlatedViewMaskCount;
	using VkRenderPassCreateInfo2KHR::pCorrelatedViewMasks;

S_render_pass_create_info2_KHR():VkRenderPassCreateInfo2KHR{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR,nullptr}{}
S_render_pass_create_info2_KHR(
	VkRenderPassCreateFlags flags_,
	uint32_t attachmentCount_,
	const S_attachment_description2_KHR * pAttachments_,
	uint32_t subpassCount_,
	const S_subpass_description2_KHR * pSubpasses_,
	uint32_t dependencyCount_,
	const S_subpass_dependency2_KHR * pDependencies_,
	uint32_t correlatedViewMaskCount_,
	const uint32_t * pCorrelatedViewMasks_)
	:VkRenderPassCreateInfo2KHR{
	VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR
	,nullptr
	,flags_
	,attachmentCount_
	,pAttachments_
	,subpassCount_
	,pSubpasses_
	,dependencyCount_
	,pDependencies_
	,correlatedViewMaskCount_
	,pCorrelatedViewMasks_}
	{
	}

	S_render_pass_create_info2_KHR& operator=(const VkRenderPassCreateInfo2KHR& rhs){static_cast<VkRenderPassCreateInfo2KHR&>(*this)=rhs; return *this;}
	operator VkRenderPassCreateInfo2KHR*()const{return const_cast<VkRenderPassCreateInfo2KHR*>(static_cast<const VkRenderPassCreateInfo2KHR*>(this));}
};

/*	VkSubpassBeginInfoKHR
*/
struct	S_subpass_begin_info_KHR:VkSubpassBeginInfoKHR{
private:
	using VkSubpassBeginInfoKHR::sType;
	using VkSubpassBeginInfoKHR::pNext;
public:
	using VkSubpassBeginInfoKHR::contents;

S_subpass_begin_info_KHR():VkSubpassBeginInfoKHR{VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR,nullptr}{}
S_subpass_begin_info_KHR(
	E_subpass_contents contents_)
	:VkSubpassBeginInfoKHR{
	VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR
	,nullptr
	,contents_}
	{
	}

	S_subpass_begin_info_KHR& operator=(const VkSubpassBeginInfoKHR& rhs){static_cast<VkSubpassBeginInfoKHR&>(*this)=rhs; return *this;}
	operator VkSubpassBeginInfoKHR*()const{return const_cast<VkSubpassBeginInfoKHR*>(static_cast<const VkSubpassBeginInfoKHR*>(this));}
};

/*	VkSubpassEndInfoKHR
*/
struct	S_subpass_end_info_KHR:VkSubpassEndInfoKHR{
private:
	using VkSubpassEndInfoKHR::sType;
	using VkSubpassEndInfoKHR::pNext;

S_subpass_end_info_KHR():VkSubpassEndInfoKHR{VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR,nullptr}{}

	S_subpass_end_info_KHR& operator=(const VkSubpassEndInfoKHR& rhs){static_cast<VkSubpassEndInfoKHR&>(*this)=rhs; return *this;}
	operator VkSubpassEndInfoKHR*()const{return const_cast<VkSubpassEndInfoKHR*>(static_cast<const VkSubpassEndInfoKHR*>(this));}
};

/*	VkAndroidHardwareBufferFormatPropertiesANDROID
(returnedonly)
ex to: VkAndroidHardwareBufferPropertiesANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct	S_android_hardware_buffer_format_properties_ANDROID:VkAndroidHardwareBufferFormatPropertiesANDROID{
private:
	using VkAndroidHardwareBufferFormatPropertiesANDROID::sType;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::pNext;
public:
	using VkAndroidHardwareBufferFormatPropertiesANDROID::format;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::externalFormat;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::formatFeatures;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::samplerYcbcrConversionComponents;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::suggestedYcbcrModel;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::suggestedYcbcrRange;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::suggestedXChromaOffset;
	using VkAndroidHardwareBufferFormatPropertiesANDROID::suggestedYChromaOffset;

S_android_hardware_buffer_format_properties_ANDROID():VkAndroidHardwareBufferFormatPropertiesANDROID{VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID,nullptr}{}
S_android_hardware_buffer_format_properties_ANDROID(
	E_format format_,
	uint64_t externalFormat_,
	F_format_feature formatFeatures_,
	S_component_mapping samplerYcbcrConversionComponents_,
	E_sampler_ycbcr_model_conversion suggestedYcbcrModel_,
	E_sampler_ycbcr_range suggestedYcbcrRange_,
	E_chroma_location suggestedXChromaOffset_,
	E_chroma_location suggestedYChromaOffset_)
	:VkAndroidHardwareBufferFormatPropertiesANDROID{
	VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID
	,nullptr
	,format_
	,externalFormat_
	,formatFeatures_
	,samplerYcbcrConversionComponents_
	,suggestedYcbcrModel_
	,suggestedYcbcrRange_
	,suggestedXChromaOffset_
	,suggestedYChromaOffset_}
	{
	}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
friend S_android_hardware_buffer_properties_ANDROID;
#endif

	S_android_hardware_buffer_format_properties_ANDROID& operator=(const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs){static_cast<VkAndroidHardwareBufferFormatPropertiesANDROID&>(*this)=rhs; return *this;}
	operator VkAndroidHardwareBufferFormatPropertiesANDROID*()const{return const_cast<VkAndroidHardwareBufferFormatPropertiesANDROID*>(static_cast<const VkAndroidHardwareBufferFormatPropertiesANDROID*>(this));}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkAndroidHardwareBufferPropertiesANDROID
(returnedonly)
ex:
	VkAndroidHardwareBufferFormatPropertiesANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR

struct N_android_hardware_buffer_properties_ANDROID{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
N_android_hardware_buffer_properties_ANDROID& n_android_hardware_buffer_format_properties_ANDROID(S_android_hardware_buffer_format_properties_ANDROID const& next_);
#endif
};
struct	S_android_hardware_buffer_properties_ANDROID:VkAndroidHardwareBufferPropertiesANDROID{
private:
	using VkAndroidHardwareBufferPropertiesANDROID::sType;
	using VkAndroidHardwareBufferPropertiesANDROID::pNext;
public:
	using VkAndroidHardwareBufferPropertiesANDROID::allocationSize;
	using VkAndroidHardwareBufferPropertiesANDROID::memoryTypeBits;

S_android_hardware_buffer_properties_ANDROID():VkAndroidHardwareBufferPropertiesANDROID{VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID,nullptr}{}
S_android_hardware_buffer_properties_ANDROID(
	VkDeviceSize allocationSize_,
	uint32_t memoryTypeBits_)
	:VkAndroidHardwareBufferPropertiesANDROID{
	VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID
	,nullptr
	,allocationSize_
	,memoryTypeBits_}
	{
	}

	S_android_hardware_buffer_properties_ANDROID& operator=(const VkAndroidHardwareBufferPropertiesANDROID& rhs){static_cast<VkAndroidHardwareBufferPropertiesANDROID&>(*this)=rhs; return *this;}
	operator VkAndroidHardwareBufferPropertiesANDROID*()const{return const_cast<VkAndroidHardwareBufferPropertiesANDROID*>(static_cast<const VkAndroidHardwareBufferPropertiesANDROID*>(this));}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_hardware_buffer_properties_ANDROID& n_android_hardware_buffer_format_properties_ANDROID(S_android_hardware_buffer_format_properties_ANDROID const& next_);
#endif
void set_pNext(N_android_hardware_buffer_properties_ANDROID n_){pNext = n_;}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkMemoryGetAndroidHardwareBufferInfoANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
struct	S_memory_get_android_hardware_buffer_info_ANDROID:VkMemoryGetAndroidHardwareBufferInfoANDROID{
private:
	using VkMemoryGetAndroidHardwareBufferInfoANDROID::sType;
	using VkMemoryGetAndroidHardwareBufferInfoANDROID::pNext;
public:
	using VkMemoryGetAndroidHardwareBufferInfoANDROID::memory;

S_memory_get_android_hardware_buffer_info_ANDROID():VkMemoryGetAndroidHardwareBufferInfoANDROID{VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,nullptr}{}
S_memory_get_android_hardware_buffer_info_ANDROID(
	VkDeviceMemory memory_)
	:VkMemoryGetAndroidHardwareBufferInfoANDROID{
	VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID
	,nullptr
	,memory_}
	{
	}

	S_memory_get_android_hardware_buffer_info_ANDROID& operator=(const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs){static_cast<VkMemoryGetAndroidHardwareBufferInfoANDROID&>(*this)=rhs; return *this;}
	operator VkMemoryGetAndroidHardwareBufferInfoANDROID*()const{return const_cast<VkMemoryGetAndroidHardwareBufferInfoANDROID*>(static_cast<const VkMemoryGetAndroidHardwareBufferInfoANDROID*>(this));}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkCheckpointDataNV
(returnedonly)
*/
struct	S_checkpoint_data_NV:VkCheckpointDataNV{
private:
	using VkCheckpointDataNV::sType;
	using VkCheckpointDataNV::pNext;
public:
	using VkCheckpointDataNV::stage;
	using VkCheckpointDataNV::pCheckpointMarker;

S_checkpoint_data_NV():VkCheckpointDataNV{VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV,nullptr}{}
S_checkpoint_data_NV(
	F_pipeline_stage stage_,
	void * pCheckpointMarker_)
	:VkCheckpointDataNV{
	VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV
	,nullptr
	,stage_
	,pCheckpointMarker_}
	{
	}

	S_checkpoint_data_NV& operator=(const VkCheckpointDataNV& rhs){static_cast<VkCheckpointDataNV&>(*this)=rhs; return *this;}
	operator VkCheckpointDataNV*()const{return const_cast<VkCheckpointDataNV*>(static_cast<const VkCheckpointDataNV*>(this));}
};


}}
