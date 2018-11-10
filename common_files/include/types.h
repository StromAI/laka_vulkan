#pragma once
#include "vulkan/vulkan.h"
#include "common.h"

#include <type_traits>
#include <array>

namespace laka { namespace vk {
/*	VkImageLayout
*/
template<> struct my_class_convert<E_image_layout> { using type = VkImageLayout;};template<> struct my_class_convert<VkImageLayout> { using type = E_image_layout;};struct E_image_layout{
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
	E_image_layout(){}
	E_image_layout(const decltype(flag) flag_):flag(flag_) {}
	E_image_layout(const E_image_layout& e_):flag(e_.flag) {}
	E_image_layout(const VkImageLayout flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkImageLayout*(){ return reinterpret_cast<VkImageLayout*>(this); }
	operator VkImageLayout&(){ return reinterpret_cast<VkImageLayout&>(*this); }
	E_image_layout& operator = (E_image_layout e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_image_layout e1_,const E_image_layout e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_image_layout e1_,const E_image_layout e2_){return e1_.flag != e2_.flag; }

/*	VkAttachmentLoadOp
*/
template<> struct my_class_convert<E_attachment_load_op> { using type = VkAttachmentLoadOp;};template<> struct my_class_convert<VkAttachmentLoadOp> { using type = E_attachment_load_op;};struct E_attachment_load_op{
enum{
	e_load = VK_ATTACHMENT_LOAD_OP_LOAD,
	e_clear = VK_ATTACHMENT_LOAD_OP_CLEAR,
	e_dont_care = VK_ATTACHMENT_LOAD_OP_DONT_CARE,
}flag;
	E_attachment_load_op(){}
	E_attachment_load_op(const decltype(flag) flag_):flag(flag_) {}
	E_attachment_load_op(const E_attachment_load_op& e_):flag(e_.flag) {}
	E_attachment_load_op(const VkAttachmentLoadOp flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkAttachmentLoadOp*(){ return reinterpret_cast<VkAttachmentLoadOp*>(this); }
	operator VkAttachmentLoadOp&(){ return reinterpret_cast<VkAttachmentLoadOp&>(*this); }
	E_attachment_load_op& operator = (E_attachment_load_op e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_attachment_load_op e1_,const E_attachment_load_op e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_attachment_load_op e1_,const E_attachment_load_op e2_){return e1_.flag != e2_.flag; }

/*	VkAttachmentStoreOp
*/
template<> struct my_class_convert<E_attachment_store_op> { using type = VkAttachmentStoreOp;};template<> struct my_class_convert<VkAttachmentStoreOp> { using type = E_attachment_store_op;};struct E_attachment_store_op{
enum{
	e_store = VK_ATTACHMENT_STORE_OP_STORE,
	e_dont_care = VK_ATTACHMENT_STORE_OP_DONT_CARE,
}flag;
	E_attachment_store_op(){}
	E_attachment_store_op(const decltype(flag) flag_):flag(flag_) {}
	E_attachment_store_op(const E_attachment_store_op& e_):flag(e_.flag) {}
	E_attachment_store_op(const VkAttachmentStoreOp flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkAttachmentStoreOp*(){ return reinterpret_cast<VkAttachmentStoreOp*>(this); }
	operator VkAttachmentStoreOp&(){ return reinterpret_cast<VkAttachmentStoreOp&>(*this); }
	E_attachment_store_op& operator = (E_attachment_store_op e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_attachment_store_op e1_,const E_attachment_store_op e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_attachment_store_op e1_,const E_attachment_store_op e2_){return e1_.flag != e2_.flag; }

/*	VkImageType
*/
template<> struct my_class_convert<E_image_type> { using type = VkImageType;};template<> struct my_class_convert<VkImageType> { using type = E_image_type;};struct E_image_type{
enum{
	e_1d = VK_IMAGE_TYPE_1D,
	e_2d = VK_IMAGE_TYPE_2D,
	e_3d = VK_IMAGE_TYPE_3D,
}flag;
	E_image_type(){}
	E_image_type(const decltype(flag) flag_):flag(flag_) {}
	E_image_type(const E_image_type& e_):flag(e_.flag) {}
	E_image_type(const VkImageType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkImageType*(){ return reinterpret_cast<VkImageType*>(this); }
	operator VkImageType&(){ return reinterpret_cast<VkImageType&>(*this); }
	E_image_type& operator = (E_image_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_image_type e1_,const E_image_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_image_type e1_,const E_image_type e2_){return e1_.flag != e2_.flag; }

/*	VkImageTiling
*/
template<> struct my_class_convert<E_image_tiling> { using type = VkImageTiling;};template<> struct my_class_convert<VkImageTiling> { using type = E_image_tiling;};struct E_image_tiling{
enum{
	e_optimal = VK_IMAGE_TILING_OPTIMAL,
	e_linear = VK_IMAGE_TILING_LINEAR,
}flag;
	E_image_tiling(){}
	E_image_tiling(const decltype(flag) flag_):flag(flag_) {}
	E_image_tiling(const E_image_tiling& e_):flag(e_.flag) {}
	E_image_tiling(const VkImageTiling flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkImageTiling*(){ return reinterpret_cast<VkImageTiling*>(this); }
	operator VkImageTiling&(){ return reinterpret_cast<VkImageTiling&>(*this); }
	E_image_tiling& operator = (E_image_tiling e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_image_tiling e1_,const E_image_tiling e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_image_tiling e1_,const E_image_tiling e2_){return e1_.flag != e2_.flag; }

/*	VkImageViewType
*/
template<> struct my_class_convert<E_image_view_type> { using type = VkImageViewType;};template<> struct my_class_convert<VkImageViewType> { using type = E_image_view_type;};struct E_image_view_type{
enum{
	e_1d = VK_IMAGE_VIEW_TYPE_1D,
	e_2d = VK_IMAGE_VIEW_TYPE_2D,
	e_3d = VK_IMAGE_VIEW_TYPE_3D,
	e_cube = VK_IMAGE_VIEW_TYPE_CUBE,
	e_1d_array = VK_IMAGE_VIEW_TYPE_1D_ARRAY,
	e_2d_array = VK_IMAGE_VIEW_TYPE_2D_ARRAY,
	e_cube_array = VK_IMAGE_VIEW_TYPE_CUBE_ARRAY,
}flag;
	E_image_view_type(){}
	E_image_view_type(const decltype(flag) flag_):flag(flag_) {}
	E_image_view_type(const E_image_view_type& e_):flag(e_.flag) {}
	E_image_view_type(const VkImageViewType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkImageViewType*(){ return reinterpret_cast<VkImageViewType*>(this); }
	operator VkImageViewType&(){ return reinterpret_cast<VkImageViewType&>(*this); }
	E_image_view_type& operator = (E_image_view_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_image_view_type e1_,const E_image_view_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_image_view_type e1_,const E_image_view_type e2_){return e1_.flag != e2_.flag; }

/*	VkCommandBufferLevel
*/
template<> struct my_class_convert<E_command_buffer_level> { using type = VkCommandBufferLevel;};template<> struct my_class_convert<VkCommandBufferLevel> { using type = E_command_buffer_level;};struct E_command_buffer_level{
enum{
	e_primary = VK_COMMAND_BUFFER_LEVEL_PRIMARY,
	e_secondary = VK_COMMAND_BUFFER_LEVEL_SECONDARY,
}flag;
	E_command_buffer_level(){}
	E_command_buffer_level(const decltype(flag) flag_):flag(flag_) {}
	E_command_buffer_level(const E_command_buffer_level& e_):flag(e_.flag) {}
	E_command_buffer_level(const VkCommandBufferLevel flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkCommandBufferLevel*(){ return reinterpret_cast<VkCommandBufferLevel*>(this); }
	operator VkCommandBufferLevel&(){ return reinterpret_cast<VkCommandBufferLevel&>(*this); }
	E_command_buffer_level& operator = (E_command_buffer_level e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_command_buffer_level e1_,const E_command_buffer_level e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_command_buffer_level e1_,const E_command_buffer_level e2_){return e1_.flag != e2_.flag; }

/*	VkComponentSwizzle
*/
template<> struct my_class_convert<E_component_swizzle> { using type = VkComponentSwizzle;};template<> struct my_class_convert<VkComponentSwizzle> { using type = E_component_swizzle;};struct E_component_swizzle{
enum{
	e_identity = VK_COMPONENT_SWIZZLE_IDENTITY,
	e_zero = VK_COMPONENT_SWIZZLE_ZERO,
	e_one = VK_COMPONENT_SWIZZLE_ONE,
	e_r = VK_COMPONENT_SWIZZLE_R,
	e_g = VK_COMPONENT_SWIZZLE_G,
	e_b = VK_COMPONENT_SWIZZLE_B,
	e_a = VK_COMPONENT_SWIZZLE_A,
}flag;
	E_component_swizzle(){}
	E_component_swizzle(const decltype(flag) flag_):flag(flag_) {}
	E_component_swizzle(const E_component_swizzle& e_):flag(e_.flag) {}
	E_component_swizzle(const VkComponentSwizzle flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkComponentSwizzle*(){ return reinterpret_cast<VkComponentSwizzle*>(this); }
	operator VkComponentSwizzle&(){ return reinterpret_cast<VkComponentSwizzle&>(*this); }
	E_component_swizzle& operator = (E_component_swizzle e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_component_swizzle e1_,const E_component_swizzle e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_component_swizzle e1_,const E_component_swizzle e2_){return e1_.flag != e2_.flag; }

/*	VkDescriptorType
*/
template<> struct my_class_convert<E_descriptor_type> { using type = VkDescriptorType;};template<> struct my_class_convert<VkDescriptorType> { using type = E_descriptor_type;};struct E_descriptor_type{
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
	E_descriptor_type(){}
	E_descriptor_type(const decltype(flag) flag_):flag(flag_) {}
	E_descriptor_type(const E_descriptor_type& e_):flag(e_.flag) {}
	E_descriptor_type(const VkDescriptorType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDescriptorType*(){ return reinterpret_cast<VkDescriptorType*>(this); }
	operator VkDescriptorType&(){ return reinterpret_cast<VkDescriptorType&>(*this); }
	E_descriptor_type& operator = (E_descriptor_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_descriptor_type e1_,const E_descriptor_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_descriptor_type e1_,const E_descriptor_type e2_){return e1_.flag != e2_.flag; }

/*	VkQueryType
*/
template<> struct my_class_convert<E_query_type> { using type = VkQueryType;};template<> struct my_class_convert<VkQueryType> { using type = E_query_type;};struct E_query_type{
enum{
	e_occlusion = VK_QUERY_TYPE_OCCLUSION,
	e_pipeline_statistics = VK_QUERY_TYPE_PIPELINE_STATISTICS,
	e_timestamp = VK_QUERY_TYPE_TIMESTAMP,
}flag;
	E_query_type(){}
	E_query_type(const decltype(flag) flag_):flag(flag_) {}
	E_query_type(const E_query_type& e_):flag(e_.flag) {}
	E_query_type(const VkQueryType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkQueryType*(){ return reinterpret_cast<VkQueryType*>(this); }
	operator VkQueryType&(){ return reinterpret_cast<VkQueryType&>(*this); }
	E_query_type& operator = (E_query_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_query_type e1_,const E_query_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_query_type e1_,const E_query_type e2_){return e1_.flag != e2_.flag; }

/*	VkBorderColor
*/
template<> struct my_class_convert<E_border_color> { using type = VkBorderColor;};template<> struct my_class_convert<VkBorderColor> { using type = E_border_color;};struct E_border_color{
enum{
	e_float_transparent_black = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,
	e_int_transparent_black = VK_BORDER_COLOR_INT_TRANSPARENT_BLACK,
	e_float_opaque_black = VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK,
	e_int_opaque_black = VK_BORDER_COLOR_INT_OPAQUE_BLACK,
	e_float_opaque_white = VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE,
	e_int_opaque_white = VK_BORDER_COLOR_INT_OPAQUE_WHITE,
}flag;
	E_border_color(){}
	E_border_color(const decltype(flag) flag_):flag(flag_) {}
	E_border_color(const E_border_color& e_):flag(e_.flag) {}
	E_border_color(const VkBorderColor flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkBorderColor*(){ return reinterpret_cast<VkBorderColor*>(this); }
	operator VkBorderColor&(){ return reinterpret_cast<VkBorderColor&>(*this); }
	E_border_color& operator = (E_border_color e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_border_color e1_,const E_border_color e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_border_color e1_,const E_border_color e2_){return e1_.flag != e2_.flag; }

/*	VkPipelineBindPoint
*/
template<> struct my_class_convert<E_pipeline_bind_point> { using type = VkPipelineBindPoint;};template<> struct my_class_convert<VkPipelineBindPoint> { using type = E_pipeline_bind_point;};struct E_pipeline_bind_point{
enum{
	e_graphics = VK_PIPELINE_BIND_POINT_GRAPHICS,
	e_compute = VK_PIPELINE_BIND_POINT_COMPUTE,
}flag;
	E_pipeline_bind_point(){}
	E_pipeline_bind_point(const decltype(flag) flag_):flag(flag_) {}
	E_pipeline_bind_point(const E_pipeline_bind_point& e_):flag(e_.flag) {}
	E_pipeline_bind_point(const VkPipelineBindPoint flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkPipelineBindPoint*(){ return reinterpret_cast<VkPipelineBindPoint*>(this); }
	operator VkPipelineBindPoint&(){ return reinterpret_cast<VkPipelineBindPoint&>(*this); }
	E_pipeline_bind_point& operator = (E_pipeline_bind_point e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_pipeline_bind_point e1_,const E_pipeline_bind_point e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_pipeline_bind_point e1_,const E_pipeline_bind_point e2_){return e1_.flag != e2_.flag; }

/*	VkPipelineCacheHeaderVersion
*/
template<> struct my_class_convert<E_pipeline_cache_header_version> { using type = VkPipelineCacheHeaderVersion;};template<> struct my_class_convert<VkPipelineCacheHeaderVersion> { using type = E_pipeline_cache_header_version;};struct E_pipeline_cache_header_version{
enum{
	e_one = VK_PIPELINE_CACHE_HEADER_VERSION_ONE,
}flag;
	E_pipeline_cache_header_version(){}
	E_pipeline_cache_header_version(const decltype(flag) flag_):flag(flag_) {}
	E_pipeline_cache_header_version(const E_pipeline_cache_header_version& e_):flag(e_.flag) {}
	E_pipeline_cache_header_version(const VkPipelineCacheHeaderVersion flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkPipelineCacheHeaderVersion*(){ return reinterpret_cast<VkPipelineCacheHeaderVersion*>(this); }
	operator VkPipelineCacheHeaderVersion&(){ return reinterpret_cast<VkPipelineCacheHeaderVersion&>(*this); }
	E_pipeline_cache_header_version& operator = (E_pipeline_cache_header_version e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_pipeline_cache_header_version e1_,const E_pipeline_cache_header_version e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_pipeline_cache_header_version e1_,const E_pipeline_cache_header_version e2_){return e1_.flag != e2_.flag; }

/*	VkPrimitiveTopology
*/
template<> struct my_class_convert<E_primitive_topology> { using type = VkPrimitiveTopology;};template<> struct my_class_convert<VkPrimitiveTopology> { using type = E_primitive_topology;};struct E_primitive_topology{
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
	E_primitive_topology(){}
	E_primitive_topology(const decltype(flag) flag_):flag(flag_) {}
	E_primitive_topology(const E_primitive_topology& e_):flag(e_.flag) {}
	E_primitive_topology(const VkPrimitiveTopology flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkPrimitiveTopology*(){ return reinterpret_cast<VkPrimitiveTopology*>(this); }
	operator VkPrimitiveTopology&(){ return reinterpret_cast<VkPrimitiveTopology&>(*this); }
	E_primitive_topology& operator = (E_primitive_topology e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_primitive_topology e1_,const E_primitive_topology e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_primitive_topology e1_,const E_primitive_topology e2_){return e1_.flag != e2_.flag; }

/*	VkSharingMode
*/
template<> struct my_class_convert<E_sharing_mode> { using type = VkSharingMode;};template<> struct my_class_convert<VkSharingMode> { using type = E_sharing_mode;};struct E_sharing_mode{
enum{
	e_exclusive = VK_SHARING_MODE_EXCLUSIVE,
	e_concurrent = VK_SHARING_MODE_CONCURRENT,
}flag;
	E_sharing_mode(){}
	E_sharing_mode(const decltype(flag) flag_):flag(flag_) {}
	E_sharing_mode(const E_sharing_mode& e_):flag(e_.flag) {}
	E_sharing_mode(const VkSharingMode flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSharingMode*(){ return reinterpret_cast<VkSharingMode*>(this); }
	operator VkSharingMode&(){ return reinterpret_cast<VkSharingMode&>(*this); }
	E_sharing_mode& operator = (E_sharing_mode e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_sharing_mode e1_,const E_sharing_mode e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_sharing_mode e1_,const E_sharing_mode e2_){return e1_.flag != e2_.flag; }

/*	VkIndexType
*/
template<> struct my_class_convert<E_index_type> { using type = VkIndexType;};template<> struct my_class_convert<VkIndexType> { using type = E_index_type;};struct E_index_type{
enum{
	e_uint16 = VK_INDEX_TYPE_UINT16,
	e_uint32 = VK_INDEX_TYPE_UINT32,
}flag;
	E_index_type(){}
	E_index_type(const decltype(flag) flag_):flag(flag_) {}
	E_index_type(const E_index_type& e_):flag(e_.flag) {}
	E_index_type(const VkIndexType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkIndexType*(){ return reinterpret_cast<VkIndexType*>(this); }
	operator VkIndexType&(){ return reinterpret_cast<VkIndexType&>(*this); }
	E_index_type& operator = (E_index_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_index_type e1_,const E_index_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_index_type e1_,const E_index_type e2_){return e1_.flag != e2_.flag; }

/*	VkFilter
*/
template<> struct my_class_convert<E_filter> { using type = VkFilter;};template<> struct my_class_convert<VkFilter> { using type = E_filter;};struct E_filter{
enum{
	e_nearest = VK_FILTER_NEAREST,
	e_linear = VK_FILTER_LINEAR,
}flag;
	E_filter(){}
	E_filter(const decltype(flag) flag_):flag(flag_) {}
	E_filter(const E_filter& e_):flag(e_.flag) {}
	E_filter(const VkFilter flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkFilter*(){ return reinterpret_cast<VkFilter*>(this); }
	operator VkFilter&(){ return reinterpret_cast<VkFilter&>(*this); }
	E_filter& operator = (E_filter e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_filter e1_,const E_filter e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_filter e1_,const E_filter e2_){return e1_.flag != e2_.flag; }

/*	VkSamplerMipmapMode
*/
template<> struct my_class_convert<E_sampler_mipmap_mode> { using type = VkSamplerMipmapMode;};template<> struct my_class_convert<VkSamplerMipmapMode> { using type = E_sampler_mipmap_mode;};struct E_sampler_mipmap_mode{
enum{
	e_nearest = VK_SAMPLER_MIPMAP_MODE_NEAREST,
	e_linear = VK_SAMPLER_MIPMAP_MODE_LINEAR,
}flag;
	E_sampler_mipmap_mode(){}
	E_sampler_mipmap_mode(const decltype(flag) flag_):flag(flag_) {}
	E_sampler_mipmap_mode(const E_sampler_mipmap_mode& e_):flag(e_.flag) {}
	E_sampler_mipmap_mode(const VkSamplerMipmapMode flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSamplerMipmapMode*(){ return reinterpret_cast<VkSamplerMipmapMode*>(this); }
	operator VkSamplerMipmapMode&(){ return reinterpret_cast<VkSamplerMipmapMode&>(*this); }
	E_sampler_mipmap_mode& operator = (E_sampler_mipmap_mode e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_sampler_mipmap_mode e1_,const E_sampler_mipmap_mode e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_sampler_mipmap_mode e1_,const E_sampler_mipmap_mode e2_){return e1_.flag != e2_.flag; }

/*	VkSamplerAddressMode
*/
template<> struct my_class_convert<E_sampler_address_mode> { using type = VkSamplerAddressMode;};template<> struct my_class_convert<VkSamplerAddressMode> { using type = E_sampler_address_mode;};struct E_sampler_address_mode{
enum{
	e_repeat = VK_SAMPLER_ADDRESS_MODE_REPEAT,
	e_mirrored_repeat = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT,
	e_clamp_to_edge = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,
	e_clamp_to_border = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER,
}flag;
	E_sampler_address_mode(){}
	E_sampler_address_mode(const decltype(flag) flag_):flag(flag_) {}
	E_sampler_address_mode(const E_sampler_address_mode& e_):flag(e_.flag) {}
	E_sampler_address_mode(const VkSamplerAddressMode flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSamplerAddressMode*(){ return reinterpret_cast<VkSamplerAddressMode*>(this); }
	operator VkSamplerAddressMode&(){ return reinterpret_cast<VkSamplerAddressMode&>(*this); }
	E_sampler_address_mode& operator = (E_sampler_address_mode e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_sampler_address_mode e1_,const E_sampler_address_mode e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_sampler_address_mode e1_,const E_sampler_address_mode e2_){return e1_.flag != e2_.flag; }

/*	VkCompareOp
*/
template<> struct my_class_convert<E_compare_op> { using type = VkCompareOp;};template<> struct my_class_convert<VkCompareOp> { using type = E_compare_op;};struct E_compare_op{
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
	E_compare_op(){}
	E_compare_op(const decltype(flag) flag_):flag(flag_) {}
	E_compare_op(const E_compare_op& e_):flag(e_.flag) {}
	E_compare_op(const VkCompareOp flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkCompareOp*(){ return reinterpret_cast<VkCompareOp*>(this); }
	operator VkCompareOp&(){ return reinterpret_cast<VkCompareOp&>(*this); }
	E_compare_op& operator = (E_compare_op e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_compare_op e1_,const E_compare_op e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_compare_op e1_,const E_compare_op e2_){return e1_.flag != e2_.flag; }

/*	VkPolygonMode
*/
template<> struct my_class_convert<E_polygon_mode> { using type = VkPolygonMode;};template<> struct my_class_convert<VkPolygonMode> { using type = E_polygon_mode;};struct E_polygon_mode{
enum{
	e_fill = VK_POLYGON_MODE_FILL,
	e_line = VK_POLYGON_MODE_LINE,
	e_point = VK_POLYGON_MODE_POINT,
}flag;
	E_polygon_mode(){}
	E_polygon_mode(const decltype(flag) flag_):flag(flag_) {}
	E_polygon_mode(const E_polygon_mode& e_):flag(e_.flag) {}
	E_polygon_mode(const VkPolygonMode flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkPolygonMode*(){ return reinterpret_cast<VkPolygonMode*>(this); }
	operator VkPolygonMode&(){ return reinterpret_cast<VkPolygonMode&>(*this); }
	E_polygon_mode& operator = (E_polygon_mode e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_polygon_mode e1_,const E_polygon_mode e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_polygon_mode e1_,const E_polygon_mode e2_){return e1_.flag != e2_.flag; }

/*	VkFrontFace
*/
template<> struct my_class_convert<E_front_face> { using type = VkFrontFace;};template<> struct my_class_convert<VkFrontFace> { using type = E_front_face;};struct E_front_face{
enum{
	e_counter_clockwise = VK_FRONT_FACE_COUNTER_CLOCKWISE,
	e_clockwise = VK_FRONT_FACE_CLOCKWISE,
}flag;
	E_front_face(){}
	E_front_face(const decltype(flag) flag_):flag(flag_) {}
	E_front_face(const E_front_face& e_):flag(e_.flag) {}
	E_front_face(const VkFrontFace flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkFrontFace*(){ return reinterpret_cast<VkFrontFace*>(this); }
	operator VkFrontFace&(){ return reinterpret_cast<VkFrontFace&>(*this); }
	E_front_face& operator = (E_front_face e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_front_face e1_,const E_front_face e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_front_face e1_,const E_front_face e2_){return e1_.flag != e2_.flag; }

/*	VkBlendFactor
*/
template<> struct my_class_convert<E_blend_factor> { using type = VkBlendFactor;};template<> struct my_class_convert<VkBlendFactor> { using type = E_blend_factor;};struct E_blend_factor{
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
	E_blend_factor(){}
	E_blend_factor(const decltype(flag) flag_):flag(flag_) {}
	E_blend_factor(const E_blend_factor& e_):flag(e_.flag) {}
	E_blend_factor(const VkBlendFactor flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkBlendFactor*(){ return reinterpret_cast<VkBlendFactor*>(this); }
	operator VkBlendFactor&(){ return reinterpret_cast<VkBlendFactor&>(*this); }
	E_blend_factor& operator = (E_blend_factor e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_blend_factor e1_,const E_blend_factor e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_blend_factor e1_,const E_blend_factor e2_){return e1_.flag != e2_.flag; }

/*	VkBlendOp
*/
template<> struct my_class_convert<E_blend_op> { using type = VkBlendOp;};template<> struct my_class_convert<VkBlendOp> { using type = E_blend_op;};struct E_blend_op{
enum{
	e_add = VK_BLEND_OP_ADD,
	e_subtract = VK_BLEND_OP_SUBTRACT,
	e_reverse_subtract = VK_BLEND_OP_REVERSE_SUBTRACT,
	e_min = VK_BLEND_OP_MIN,
	e_max = VK_BLEND_OP_MAX,
}flag;
	E_blend_op(){}
	E_blend_op(const decltype(flag) flag_):flag(flag_) {}
	E_blend_op(const E_blend_op& e_):flag(e_.flag) {}
	E_blend_op(const VkBlendOp flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkBlendOp*(){ return reinterpret_cast<VkBlendOp*>(this); }
	operator VkBlendOp&(){ return reinterpret_cast<VkBlendOp&>(*this); }
	E_blend_op& operator = (E_blend_op e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_blend_op e1_,const E_blend_op e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_blend_op e1_,const E_blend_op e2_){return e1_.flag != e2_.flag; }

/*	VkStencilOp
*/
template<> struct my_class_convert<E_stencil_op> { using type = VkStencilOp;};template<> struct my_class_convert<VkStencilOp> { using type = E_stencil_op;};struct E_stencil_op{
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
	E_stencil_op(){}
	E_stencil_op(const decltype(flag) flag_):flag(flag_) {}
	E_stencil_op(const E_stencil_op& e_):flag(e_.flag) {}
	E_stencil_op(const VkStencilOp flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkStencilOp*(){ return reinterpret_cast<VkStencilOp*>(this); }
	operator VkStencilOp&(){ return reinterpret_cast<VkStencilOp&>(*this); }
	E_stencil_op& operator = (E_stencil_op e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_stencil_op e1_,const E_stencil_op e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_stencil_op e1_,const E_stencil_op e2_){return e1_.flag != e2_.flag; }

/*	VkLogicOp
*/
template<> struct my_class_convert<E_logic_op> { using type = VkLogicOp;};template<> struct my_class_convert<VkLogicOp> { using type = E_logic_op;};struct E_logic_op{
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
	E_logic_op(){}
	E_logic_op(const decltype(flag) flag_):flag(flag_) {}
	E_logic_op(const E_logic_op& e_):flag(e_.flag) {}
	E_logic_op(const VkLogicOp flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkLogicOp*(){ return reinterpret_cast<VkLogicOp*>(this); }
	operator VkLogicOp&(){ return reinterpret_cast<VkLogicOp&>(*this); }
	E_logic_op& operator = (E_logic_op e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_logic_op e1_,const E_logic_op e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_logic_op e1_,const E_logic_op e2_){return e1_.flag != e2_.flag; }

/*	VkInternalAllocationType
*/
template<> struct my_class_convert<E_internal_allocation_type> { using type = VkInternalAllocationType;};template<> struct my_class_convert<VkInternalAllocationType> { using type = E_internal_allocation_type;};struct E_internal_allocation_type{
enum{
	e_executable = VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE,
}flag;
	E_internal_allocation_type(){}
	E_internal_allocation_type(const decltype(flag) flag_):flag(flag_) {}
	E_internal_allocation_type(const E_internal_allocation_type& e_):flag(e_.flag) {}
	E_internal_allocation_type(const VkInternalAllocationType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkInternalAllocationType*(){ return reinterpret_cast<VkInternalAllocationType*>(this); }
	operator VkInternalAllocationType&(){ return reinterpret_cast<VkInternalAllocationType&>(*this); }
	E_internal_allocation_type& operator = (E_internal_allocation_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_internal_allocation_type e1_,const E_internal_allocation_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_internal_allocation_type e1_,const E_internal_allocation_type e2_){return e1_.flag != e2_.flag; }

/*	VkSystemAllocationScope
*/
template<> struct my_class_convert<E_system_allocation_scope> { using type = VkSystemAllocationScope;};template<> struct my_class_convert<VkSystemAllocationScope> { using type = E_system_allocation_scope;};struct E_system_allocation_scope{
enum{
	e_command = VK_SYSTEM_ALLOCATION_SCOPE_COMMAND,
	e_object = VK_SYSTEM_ALLOCATION_SCOPE_OBJECT,
	e_cache = VK_SYSTEM_ALLOCATION_SCOPE_CACHE,
	e_device = VK_SYSTEM_ALLOCATION_SCOPE_DEVICE,
	e_instance = VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE,
}flag;
	E_system_allocation_scope(){}
	E_system_allocation_scope(const decltype(flag) flag_):flag(flag_) {}
	E_system_allocation_scope(const E_system_allocation_scope& e_):flag(e_.flag) {}
	E_system_allocation_scope(const VkSystemAllocationScope flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSystemAllocationScope*(){ return reinterpret_cast<VkSystemAllocationScope*>(this); }
	operator VkSystemAllocationScope&(){ return reinterpret_cast<VkSystemAllocationScope&>(*this); }
	E_system_allocation_scope& operator = (E_system_allocation_scope e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_system_allocation_scope e1_,const E_system_allocation_scope e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_system_allocation_scope e1_,const E_system_allocation_scope e2_){return e1_.flag != e2_.flag; }

/*	VkPhysicalDeviceType
*/
template<> struct my_class_convert<E_physical_device_type> { using type = VkPhysicalDeviceType;};template<> struct my_class_convert<VkPhysicalDeviceType> { using type = E_physical_device_type;};struct E_physical_device_type{
enum{
	e_other = VK_PHYSICAL_DEVICE_TYPE_OTHER,
	e_integrated_gpu = VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU,
	e_discrete_gpu = VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU,
	e_virtual_gpu = VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU,
	e_cpu = VK_PHYSICAL_DEVICE_TYPE_CPU,
}flag;
	E_physical_device_type(){}
	E_physical_device_type(const decltype(flag) flag_):flag(flag_) {}
	E_physical_device_type(const E_physical_device_type& e_):flag(e_.flag) {}
	E_physical_device_type(const VkPhysicalDeviceType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkPhysicalDeviceType*(){ return reinterpret_cast<VkPhysicalDeviceType*>(this); }
	operator VkPhysicalDeviceType&(){ return reinterpret_cast<VkPhysicalDeviceType&>(*this); }
	E_physical_device_type& operator = (E_physical_device_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_physical_device_type e1_,const E_physical_device_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_physical_device_type e1_,const E_physical_device_type e2_){return e1_.flag != e2_.flag; }

/*	VkVertexInputRate
*/
template<> struct my_class_convert<E_vertex_input_rate> { using type = VkVertexInputRate;};template<> struct my_class_convert<VkVertexInputRate> { using type = E_vertex_input_rate;};struct E_vertex_input_rate{
enum{
	e_vertex = VK_VERTEX_INPUT_RATE_VERTEX,
	e_instance = VK_VERTEX_INPUT_RATE_INSTANCE,
}flag;
	E_vertex_input_rate(){}
	E_vertex_input_rate(const decltype(flag) flag_):flag(flag_) {}
	E_vertex_input_rate(const E_vertex_input_rate& e_):flag(e_.flag) {}
	E_vertex_input_rate(const VkVertexInputRate flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkVertexInputRate*(){ return reinterpret_cast<VkVertexInputRate*>(this); }
	operator VkVertexInputRate&(){ return reinterpret_cast<VkVertexInputRate&>(*this); }
	E_vertex_input_rate& operator = (E_vertex_input_rate e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_vertex_input_rate e1_,const E_vertex_input_rate e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_vertex_input_rate e1_,const E_vertex_input_rate e2_){return e1_.flag != e2_.flag; }

/*	VkFormat
Vulkan format definitions*/
template<> struct my_class_convert<E_format> { using type = VkFormat;};template<> struct my_class_convert<VkFormat> { using type = E_format;};struct E_format{
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
	E_format(){}
	E_format(const decltype(flag) flag_):flag(flag_) {}
	E_format(const E_format& e_):flag(e_.flag) {}
	E_format(const VkFormat flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkFormat*(){ return reinterpret_cast<VkFormat*>(this); }
	operator VkFormat&(){ return reinterpret_cast<VkFormat&>(*this); }
	E_format& operator = (E_format e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_format e1_,const E_format e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_format e1_,const E_format e2_){return e1_.flag != e2_.flag; }

/*	VkStructureType
Structure type enumerant*/
template<> struct my_class_convert<E_structure_type> { using type = VkStructureType;};template<> struct my_class_convert<VkStructureType> { using type = E_structure_type;};struct E_structure_type{
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
	E_structure_type(){}
	E_structure_type(const decltype(flag) flag_):flag(flag_) {}
	E_structure_type(const E_structure_type& e_):flag(e_.flag) {}
	E_structure_type(const VkStructureType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkStructureType*(){ return reinterpret_cast<VkStructureType*>(this); }
	operator VkStructureType&(){ return reinterpret_cast<VkStructureType&>(*this); }
	E_structure_type& operator = (E_structure_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_structure_type e1_,const E_structure_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_structure_type e1_,const E_structure_type e2_){return e1_.flag != e2_.flag; }

/*	VkSubpassContents
*/
template<> struct my_class_convert<E_subpass_contents> { using type = VkSubpassContents;};template<> struct my_class_convert<VkSubpassContents> { using type = E_subpass_contents;};struct E_subpass_contents{
enum{
	e_inline = VK_SUBPASS_CONTENTS_INLINE,
	e_secondary_command_buffers = VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS,
}flag;
	E_subpass_contents(){}
	E_subpass_contents(const decltype(flag) flag_):flag(flag_) {}
	E_subpass_contents(const E_subpass_contents& e_):flag(e_.flag) {}
	E_subpass_contents(const VkSubpassContents flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSubpassContents*(){ return reinterpret_cast<VkSubpassContents*>(this); }
	operator VkSubpassContents&(){ return reinterpret_cast<VkSubpassContents&>(*this); }
	E_subpass_contents& operator = (E_subpass_contents e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_subpass_contents e1_,const E_subpass_contents e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_subpass_contents e1_,const E_subpass_contents e2_){return e1_.flag != e2_.flag; }

/*	VkResult
API result codes*/
template<> struct my_class_convert<E_result> { using type = VkResult;};template<> struct my_class_convert<VkResult> { using type = E_result;};struct E_result{
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
	E_result(){}
	E_result(const decltype(flag) flag_):flag(flag_) {}
	E_result(const E_result& e_):flag(e_.flag) {}
	E_result(const VkResult flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkResult*(){ return reinterpret_cast<VkResult*>(this); }
	operator VkResult&(){ return reinterpret_cast<VkResult&>(*this); }
	E_result& operator = (E_result e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_result e1_,const E_result e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_result e1_,const E_result e2_){return e1_.flag != e2_.flag; }

/*	VkDynamicState
*/
template<> struct my_class_convert<E_dynamic_state> { using type = VkDynamicState;};template<> struct my_class_convert<VkDynamicState> { using type = E_dynamic_state;};struct E_dynamic_state{
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
	E_dynamic_state(){}
	E_dynamic_state(const decltype(flag) flag_):flag(flag_) {}
	E_dynamic_state(const E_dynamic_state& e_):flag(e_.flag) {}
	E_dynamic_state(const VkDynamicState flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDynamicState*(){ return reinterpret_cast<VkDynamicState*>(this); }
	operator VkDynamicState&(){ return reinterpret_cast<VkDynamicState&>(*this); }
	E_dynamic_state& operator = (E_dynamic_state e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_dynamic_state e1_,const E_dynamic_state e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_dynamic_state e1_,const E_dynamic_state e2_){return e1_.flag != e2_.flag; }

/*	VkDescriptorUpdateTemplateType
*/
template<> struct my_class_convert<E_descriptor_update_template_type> { using type = VkDescriptorUpdateTemplateType;};template<> struct my_class_convert<VkDescriptorUpdateTemplateType> { using type = E_descriptor_update_template_type;};struct E_descriptor_update_template_type{
enum{
	e_descriptor_set = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,
}flag;
	E_descriptor_update_template_type(){}
	E_descriptor_update_template_type(const decltype(flag) flag_):flag(flag_) {}
	E_descriptor_update_template_type(const E_descriptor_update_template_type& e_):flag(e_.flag) {}
	E_descriptor_update_template_type(const VkDescriptorUpdateTemplateType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDescriptorUpdateTemplateType*(){ return reinterpret_cast<VkDescriptorUpdateTemplateType*>(this); }
	operator VkDescriptorUpdateTemplateType&(){ return reinterpret_cast<VkDescriptorUpdateTemplateType&>(*this); }
	E_descriptor_update_template_type& operator = (E_descriptor_update_template_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_descriptor_update_template_type e1_,const E_descriptor_update_template_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_descriptor_update_template_type e1_,const E_descriptor_update_template_type e2_){return e1_.flag != e2_.flag; }

/*	VkObjectType
Enums to track objects of various types*/
template<> struct my_class_convert<E_object_type> { using type = VkObjectType;};template<> struct my_class_convert<VkObjectType> { using type = E_object_type;};struct E_object_type{
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
	E_object_type(){}
	E_object_type(const decltype(flag) flag_):flag(flag_) {}
	E_object_type(const E_object_type& e_):flag(e_.flag) {}
	E_object_type(const VkObjectType flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkObjectType*(){ return reinterpret_cast<VkObjectType*>(this); }
	operator VkObjectType&(){ return reinterpret_cast<VkObjectType&>(*this); }
	E_object_type& operator = (E_object_type e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_object_type e1_,const E_object_type e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_object_type e1_,const E_object_type e2_){return e1_.flag != e2_.flag; }

/*	VkPresentModeKHR
*/
template<> struct my_class_convert<E_present_mode_KHR> { using type = VkPresentModeKHR;};template<> struct my_class_convert<VkPresentModeKHR> { using type = E_present_mode_KHR;};struct E_present_mode_KHR{
enum{
	e_immediate_khr = VK_PRESENT_MODE_IMMEDIATE_KHR,
	e_mailbox_khr = VK_PRESENT_MODE_MAILBOX_KHR,
	e_fifo_khr = VK_PRESENT_MODE_FIFO_KHR,
	e_fifo_relaxed_khr = VK_PRESENT_MODE_FIFO_RELAXED_KHR,
}flag;
	E_present_mode_KHR(){}
	E_present_mode_KHR(const decltype(flag) flag_):flag(flag_) {}
	E_present_mode_KHR(const E_present_mode_KHR& e_):flag(e_.flag) {}
	E_present_mode_KHR(const VkPresentModeKHR flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkPresentModeKHR*(){ return reinterpret_cast<VkPresentModeKHR*>(this); }
	operator VkPresentModeKHR&(){ return reinterpret_cast<VkPresentModeKHR&>(*this); }
	E_present_mode_KHR& operator = (E_present_mode_KHR e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_present_mode_KHR e1_,const E_present_mode_KHR e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_present_mode_KHR e1_,const E_present_mode_KHR e2_){return e1_.flag != e2_.flag; }

/*	VkColorSpaceKHR
*/
template<> struct my_class_convert<E_color_space_KHR> { using type = VkColorSpaceKHR;};template<> struct my_class_convert<VkColorSpaceKHR> { using type = E_color_space_KHR;};struct E_color_space_KHR{
enum{
	e_srgb_nonlinear_khr = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,
	evk_colorspace_srgb_nonlinear_khr = VK_COLORSPACE_SRGB_NONLINEAR_KHR,
}flag;
	E_color_space_KHR(){}
	E_color_space_KHR(const decltype(flag) flag_):flag(flag_) {}
	E_color_space_KHR(const E_color_space_KHR& e_):flag(e_.flag) {}
	E_color_space_KHR(const VkColorSpaceKHR flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkColorSpaceKHR*(){ return reinterpret_cast<VkColorSpaceKHR*>(this); }
	operator VkColorSpaceKHR&(){ return reinterpret_cast<VkColorSpaceKHR&>(*this); }
	E_color_space_KHR& operator = (E_color_space_KHR e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_color_space_KHR e1_,const E_color_space_KHR e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_color_space_KHR e1_,const E_color_space_KHR e2_){return e1_.flag != e2_.flag; }

/*	VkDebugReportObjectTypeEXT
*/
template<> struct my_class_convert<E_debug_report_object_type_EXT> { using type = VkDebugReportObjectTypeEXT;};template<> struct my_class_convert<VkDebugReportObjectTypeEXT> { using type = E_debug_report_object_type_EXT;};struct E_debug_report_object_type_EXT{
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
	E_debug_report_object_type_EXT(){}
	E_debug_report_object_type_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_debug_report_object_type_EXT(const E_debug_report_object_type_EXT& e_):flag(e_.flag) {}
	E_debug_report_object_type_EXT(const VkDebugReportObjectTypeEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDebugReportObjectTypeEXT*(){ return reinterpret_cast<VkDebugReportObjectTypeEXT*>(this); }
	operator VkDebugReportObjectTypeEXT&(){ return reinterpret_cast<VkDebugReportObjectTypeEXT&>(*this); }
	E_debug_report_object_type_EXT& operator = (E_debug_report_object_type_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_debug_report_object_type_EXT e1_,const E_debug_report_object_type_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_debug_report_object_type_EXT e1_,const E_debug_report_object_type_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkRasterizationOrderAMD
*/
template<> struct my_class_convert<E_rasterization_order_AMD> { using type = VkRasterizationOrderAMD;};template<> struct my_class_convert<VkRasterizationOrderAMD> { using type = E_rasterization_order_AMD;};struct E_rasterization_order_AMD{
enum{
	e_strict_amd = VK_RASTERIZATION_ORDER_STRICT_AMD,
	e_relaxed_amd = VK_RASTERIZATION_ORDER_RELAXED_AMD,
}flag;
	E_rasterization_order_AMD(){}
	E_rasterization_order_AMD(const decltype(flag) flag_):flag(flag_) {}
	E_rasterization_order_AMD(const E_rasterization_order_AMD& e_):flag(e_.flag) {}
	E_rasterization_order_AMD(const VkRasterizationOrderAMD flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkRasterizationOrderAMD*(){ return reinterpret_cast<VkRasterizationOrderAMD*>(this); }
	operator VkRasterizationOrderAMD&(){ return reinterpret_cast<VkRasterizationOrderAMD&>(*this); }
	E_rasterization_order_AMD& operator = (E_rasterization_order_AMD e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_rasterization_order_AMD e1_,const E_rasterization_order_AMD e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_rasterization_order_AMD e1_,const E_rasterization_order_AMD e2_){return e1_.flag != e2_.flag; }

/*	VkValidationCheckEXT
*/
template<> struct my_class_convert<E_validation_check_EXT> { using type = VkValidationCheckEXT;};template<> struct my_class_convert<VkValidationCheckEXT> { using type = E_validation_check_EXT;};struct E_validation_check_EXT{
enum{
	e_all_ext = VK_VALIDATION_CHECK_ALL_EXT,
	e_shaders_ext = VK_VALIDATION_CHECK_SHADERS_EXT,
}flag;
	E_validation_check_EXT(){}
	E_validation_check_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_validation_check_EXT(const E_validation_check_EXT& e_):flag(e_.flag) {}
	E_validation_check_EXT(const VkValidationCheckEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkValidationCheckEXT*(){ return reinterpret_cast<VkValidationCheckEXT*>(this); }
	operator VkValidationCheckEXT&(){ return reinterpret_cast<VkValidationCheckEXT&>(*this); }
	E_validation_check_EXT& operator = (E_validation_check_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_validation_check_EXT e1_,const E_validation_check_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_validation_check_EXT e1_,const E_validation_check_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkIndirectCommandsTokenTypeNVX
*/
template<> struct my_class_convert<E_indirect_commands_token_type_NVX> { using type = VkIndirectCommandsTokenTypeNVX;};template<> struct my_class_convert<VkIndirectCommandsTokenTypeNVX> { using type = E_indirect_commands_token_type_NVX;};struct E_indirect_commands_token_type_NVX{
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
	E_indirect_commands_token_type_NVX(){}
	E_indirect_commands_token_type_NVX(const decltype(flag) flag_):flag(flag_) {}
	E_indirect_commands_token_type_NVX(const E_indirect_commands_token_type_NVX& e_):flag(e_.flag) {}
	E_indirect_commands_token_type_NVX(const VkIndirectCommandsTokenTypeNVX flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkIndirectCommandsTokenTypeNVX*(){ return reinterpret_cast<VkIndirectCommandsTokenTypeNVX*>(this); }
	operator VkIndirectCommandsTokenTypeNVX&(){ return reinterpret_cast<VkIndirectCommandsTokenTypeNVX&>(*this); }
	E_indirect_commands_token_type_NVX& operator = (E_indirect_commands_token_type_NVX e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_indirect_commands_token_type_NVX e1_,const E_indirect_commands_token_type_NVX e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_indirect_commands_token_type_NVX e1_,const E_indirect_commands_token_type_NVX e2_){return e1_.flag != e2_.flag; }

/*	VkObjectEntryTypeNVX
*/
template<> struct my_class_convert<E_object_entry_type_NVX> { using type = VkObjectEntryTypeNVX;};template<> struct my_class_convert<VkObjectEntryTypeNVX> { using type = E_object_entry_type_NVX;};struct E_object_entry_type_NVX{
enum{
	e_descriptor_set_nvx = VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX,
	e_pipeline_nvx = VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX,
	e_index_buffer_nvx = VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX,
	e_vertex_buffer_nvx = VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX,
	e_push_constant_nvx = VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX,
}flag;
	E_object_entry_type_NVX(){}
	E_object_entry_type_NVX(const decltype(flag) flag_):flag(flag_) {}
	E_object_entry_type_NVX(const E_object_entry_type_NVX& e_):flag(e_.flag) {}
	E_object_entry_type_NVX(const VkObjectEntryTypeNVX flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkObjectEntryTypeNVX*(){ return reinterpret_cast<VkObjectEntryTypeNVX*>(this); }
	operator VkObjectEntryTypeNVX&(){ return reinterpret_cast<VkObjectEntryTypeNVX&>(*this); }
	E_object_entry_type_NVX& operator = (E_object_entry_type_NVX e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_object_entry_type_NVX e1_,const E_object_entry_type_NVX e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_object_entry_type_NVX e1_,const E_object_entry_type_NVX e2_){return e1_.flag != e2_.flag; }

/*	VkDisplayPowerStateEXT
*/
template<> struct my_class_convert<E_display_power_state_EXT> { using type = VkDisplayPowerStateEXT;};template<> struct my_class_convert<VkDisplayPowerStateEXT> { using type = E_display_power_state_EXT;};struct E_display_power_state_EXT{
enum{
	e_off_ext = VK_DISPLAY_POWER_STATE_OFF_EXT,
	e_suspend_ext = VK_DISPLAY_POWER_STATE_SUSPEND_EXT,
	e_on_ext = VK_DISPLAY_POWER_STATE_ON_EXT,
}flag;
	E_display_power_state_EXT(){}
	E_display_power_state_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_display_power_state_EXT(const E_display_power_state_EXT& e_):flag(e_.flag) {}
	E_display_power_state_EXT(const VkDisplayPowerStateEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDisplayPowerStateEXT*(){ return reinterpret_cast<VkDisplayPowerStateEXT*>(this); }
	operator VkDisplayPowerStateEXT&(){ return reinterpret_cast<VkDisplayPowerStateEXT&>(*this); }
	E_display_power_state_EXT& operator = (E_display_power_state_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_display_power_state_EXT e1_,const E_display_power_state_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_display_power_state_EXT e1_,const E_display_power_state_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkDeviceEventTypeEXT
*/
template<> struct my_class_convert<E_device_event_type_EXT> { using type = VkDeviceEventTypeEXT;};template<> struct my_class_convert<VkDeviceEventTypeEXT> { using type = E_device_event_type_EXT;};struct E_device_event_type_EXT{
enum{
	e_display_hotplug_ext = VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT,
}flag;
	E_device_event_type_EXT(){}
	E_device_event_type_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_device_event_type_EXT(const E_device_event_type_EXT& e_):flag(e_.flag) {}
	E_device_event_type_EXT(const VkDeviceEventTypeEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDeviceEventTypeEXT*(){ return reinterpret_cast<VkDeviceEventTypeEXT*>(this); }
	operator VkDeviceEventTypeEXT&(){ return reinterpret_cast<VkDeviceEventTypeEXT&>(*this); }
	E_device_event_type_EXT& operator = (E_device_event_type_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_device_event_type_EXT e1_,const E_device_event_type_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_device_event_type_EXT e1_,const E_device_event_type_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkDisplayEventTypeEXT
*/
template<> struct my_class_convert<E_display_event_type_EXT> { using type = VkDisplayEventTypeEXT;};template<> struct my_class_convert<VkDisplayEventTypeEXT> { using type = E_display_event_type_EXT;};struct E_display_event_type_EXT{
enum{
	e_first_pixel_out_ext = VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT,
}flag;
	E_display_event_type_EXT(){}
	E_display_event_type_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_display_event_type_EXT(const E_display_event_type_EXT& e_):flag(e_.flag) {}
	E_display_event_type_EXT(const VkDisplayEventTypeEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDisplayEventTypeEXT*(){ return reinterpret_cast<VkDisplayEventTypeEXT*>(this); }
	operator VkDisplayEventTypeEXT&(){ return reinterpret_cast<VkDisplayEventTypeEXT&>(*this); }
	E_display_event_type_EXT& operator = (E_display_event_type_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_display_event_type_EXT e1_,const E_display_event_type_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_display_event_type_EXT e1_,const E_display_event_type_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkViewportCoordinateSwizzleNV
*/
template<> struct my_class_convert<E_viewport_coordinate_swizzle_NV> { using type = VkViewportCoordinateSwizzleNV;};template<> struct my_class_convert<VkViewportCoordinateSwizzleNV> { using type = E_viewport_coordinate_swizzle_NV;};struct E_viewport_coordinate_swizzle_NV{
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
	E_viewport_coordinate_swizzle_NV(){}
	E_viewport_coordinate_swizzle_NV(const decltype(flag) flag_):flag(flag_) {}
	E_viewport_coordinate_swizzle_NV(const E_viewport_coordinate_swizzle_NV& e_):flag(e_.flag) {}
	E_viewport_coordinate_swizzle_NV(const VkViewportCoordinateSwizzleNV flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkViewportCoordinateSwizzleNV*(){ return reinterpret_cast<VkViewportCoordinateSwizzleNV*>(this); }
	operator VkViewportCoordinateSwizzleNV&(){ return reinterpret_cast<VkViewportCoordinateSwizzleNV&>(*this); }
	E_viewport_coordinate_swizzle_NV& operator = (E_viewport_coordinate_swizzle_NV e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_viewport_coordinate_swizzle_NV e1_,const E_viewport_coordinate_swizzle_NV e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_viewport_coordinate_swizzle_NV e1_,const E_viewport_coordinate_swizzle_NV e2_){return e1_.flag != e2_.flag; }

/*	VkDiscardRectangleModeEXT
*/
template<> struct my_class_convert<E_discard_rectangle_mode_EXT> { using type = VkDiscardRectangleModeEXT;};template<> struct my_class_convert<VkDiscardRectangleModeEXT> { using type = E_discard_rectangle_mode_EXT;};struct E_discard_rectangle_mode_EXT{
enum{
	e_inclusive_ext = VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT,
	e_exclusive_ext = VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT,
}flag;
	E_discard_rectangle_mode_EXT(){}
	E_discard_rectangle_mode_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_discard_rectangle_mode_EXT(const E_discard_rectangle_mode_EXT& e_):flag(e_.flag) {}
	E_discard_rectangle_mode_EXT(const VkDiscardRectangleModeEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDiscardRectangleModeEXT*(){ return reinterpret_cast<VkDiscardRectangleModeEXT*>(this); }
	operator VkDiscardRectangleModeEXT&(){ return reinterpret_cast<VkDiscardRectangleModeEXT&>(*this); }
	E_discard_rectangle_mode_EXT& operator = (E_discard_rectangle_mode_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_discard_rectangle_mode_EXT e1_,const E_discard_rectangle_mode_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_discard_rectangle_mode_EXT e1_,const E_discard_rectangle_mode_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkPointClippingBehavior
*/
template<> struct my_class_convert<E_point_clipping_behavior> { using type = VkPointClippingBehavior;};template<> struct my_class_convert<VkPointClippingBehavior> { using type = E_point_clipping_behavior;};struct E_point_clipping_behavior{
enum{
	e_all_clip_planes = VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES,
	e_user_clip_planes_only = VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY,
}flag;
	E_point_clipping_behavior(){}
	E_point_clipping_behavior(const decltype(flag) flag_):flag(flag_) {}
	E_point_clipping_behavior(const E_point_clipping_behavior& e_):flag(e_.flag) {}
	E_point_clipping_behavior(const VkPointClippingBehavior flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkPointClippingBehavior*(){ return reinterpret_cast<VkPointClippingBehavior*>(this); }
	operator VkPointClippingBehavior&(){ return reinterpret_cast<VkPointClippingBehavior&>(*this); }
	E_point_clipping_behavior& operator = (E_point_clipping_behavior e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_point_clipping_behavior e1_,const E_point_clipping_behavior e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_point_clipping_behavior e1_,const E_point_clipping_behavior e2_){return e1_.flag != e2_.flag; }

/*	VkSamplerReductionModeEXT
*/
template<> struct my_class_convert<E_sampler_reduction_mode_EXT> { using type = VkSamplerReductionModeEXT;};template<> struct my_class_convert<VkSamplerReductionModeEXT> { using type = E_sampler_reduction_mode_EXT;};struct E_sampler_reduction_mode_EXT{
enum{
	e_weighted_average_ext = VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT,
	e_min_ext = VK_SAMPLER_REDUCTION_MODE_MIN_EXT,
	e_max_ext = VK_SAMPLER_REDUCTION_MODE_MAX_EXT,
}flag;
	E_sampler_reduction_mode_EXT(){}
	E_sampler_reduction_mode_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_sampler_reduction_mode_EXT(const E_sampler_reduction_mode_EXT& e_):flag(e_.flag) {}
	E_sampler_reduction_mode_EXT(const VkSamplerReductionModeEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSamplerReductionModeEXT*(){ return reinterpret_cast<VkSamplerReductionModeEXT*>(this); }
	operator VkSamplerReductionModeEXT&(){ return reinterpret_cast<VkSamplerReductionModeEXT&>(*this); }
	E_sampler_reduction_mode_EXT& operator = (E_sampler_reduction_mode_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_sampler_reduction_mode_EXT e1_,const E_sampler_reduction_mode_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_sampler_reduction_mode_EXT e1_,const E_sampler_reduction_mode_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkTessellationDomainOrigin
*/
template<> struct my_class_convert<E_tessellation_domain_origin> { using type = VkTessellationDomainOrigin;};template<> struct my_class_convert<VkTessellationDomainOrigin> { using type = E_tessellation_domain_origin;};struct E_tessellation_domain_origin{
enum{
	e_upper_left = VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT,
	e_lower_left = VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT,
}flag;
	E_tessellation_domain_origin(){}
	E_tessellation_domain_origin(const decltype(flag) flag_):flag(flag_) {}
	E_tessellation_domain_origin(const E_tessellation_domain_origin& e_):flag(e_.flag) {}
	E_tessellation_domain_origin(const VkTessellationDomainOrigin flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkTessellationDomainOrigin*(){ return reinterpret_cast<VkTessellationDomainOrigin*>(this); }
	operator VkTessellationDomainOrigin&(){ return reinterpret_cast<VkTessellationDomainOrigin&>(*this); }
	E_tessellation_domain_origin& operator = (E_tessellation_domain_origin e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_tessellation_domain_origin e1_,const E_tessellation_domain_origin e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_tessellation_domain_origin e1_,const E_tessellation_domain_origin e2_){return e1_.flag != e2_.flag; }

/*	VkSamplerYcbcrModelConversion
*/
template<> struct my_class_convert<E_sampler_ycbcr_model_conversion> { using type = VkSamplerYcbcrModelConversion;};template<> struct my_class_convert<VkSamplerYcbcrModelConversion> { using type = E_sampler_ycbcr_model_conversion;};struct E_sampler_ycbcr_model_conversion{
enum{
	e_rgb_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY,
	e_ycbcr_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY,
	e_ycbcr_709 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709,
	e_ycbcr_601 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601,
	e_ycbcr_2020 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020,
}flag;
	E_sampler_ycbcr_model_conversion(){}
	E_sampler_ycbcr_model_conversion(const decltype(flag) flag_):flag(flag_) {}
	E_sampler_ycbcr_model_conversion(const E_sampler_ycbcr_model_conversion& e_):flag(e_.flag) {}
	E_sampler_ycbcr_model_conversion(const VkSamplerYcbcrModelConversion flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSamplerYcbcrModelConversion*(){ return reinterpret_cast<VkSamplerYcbcrModelConversion*>(this); }
	operator VkSamplerYcbcrModelConversion&(){ return reinterpret_cast<VkSamplerYcbcrModelConversion&>(*this); }
	E_sampler_ycbcr_model_conversion& operator = (E_sampler_ycbcr_model_conversion e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_sampler_ycbcr_model_conversion e1_,const E_sampler_ycbcr_model_conversion e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_sampler_ycbcr_model_conversion e1_,const E_sampler_ycbcr_model_conversion e2_){return e1_.flag != e2_.flag; }

/*	VkSamplerYcbcrRange
*/
template<> struct my_class_convert<E_sampler_ycbcr_range> { using type = VkSamplerYcbcrRange;};template<> struct my_class_convert<VkSamplerYcbcrRange> { using type = E_sampler_ycbcr_range;};struct E_sampler_ycbcr_range{
enum{
	e_itu_full = VK_SAMPLER_YCBCR_RANGE_ITU_FULL,
	e_itu_narrow = VK_SAMPLER_YCBCR_RANGE_ITU_NARROW,
}flag;
	E_sampler_ycbcr_range(){}
	E_sampler_ycbcr_range(const decltype(flag) flag_):flag(flag_) {}
	E_sampler_ycbcr_range(const E_sampler_ycbcr_range& e_):flag(e_.flag) {}
	E_sampler_ycbcr_range(const VkSamplerYcbcrRange flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkSamplerYcbcrRange*(){ return reinterpret_cast<VkSamplerYcbcrRange*>(this); }
	operator VkSamplerYcbcrRange&(){ return reinterpret_cast<VkSamplerYcbcrRange&>(*this); }
	E_sampler_ycbcr_range& operator = (E_sampler_ycbcr_range e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_sampler_ycbcr_range e1_,const E_sampler_ycbcr_range e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_sampler_ycbcr_range e1_,const E_sampler_ycbcr_range e2_){return e1_.flag != e2_.flag; }

/*	VkChromaLocation
*/
template<> struct my_class_convert<E_chroma_location> { using type = VkChromaLocation;};template<> struct my_class_convert<VkChromaLocation> { using type = E_chroma_location;};struct E_chroma_location{
enum{
	e_cosited_even = VK_CHROMA_LOCATION_COSITED_EVEN,
	e_midpoint = VK_CHROMA_LOCATION_MIDPOINT,
}flag;
	E_chroma_location(){}
	E_chroma_location(const decltype(flag) flag_):flag(flag_) {}
	E_chroma_location(const E_chroma_location& e_):flag(e_.flag) {}
	E_chroma_location(const VkChromaLocation flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkChromaLocation*(){ return reinterpret_cast<VkChromaLocation*>(this); }
	operator VkChromaLocation&(){ return reinterpret_cast<VkChromaLocation&>(*this); }
	E_chroma_location& operator = (E_chroma_location e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_chroma_location e1_,const E_chroma_location e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_chroma_location e1_,const E_chroma_location e2_){return e1_.flag != e2_.flag; }

/*	VkBlendOverlapEXT
*/
template<> struct my_class_convert<E_blend_overlap_EXT> { using type = VkBlendOverlapEXT;};template<> struct my_class_convert<VkBlendOverlapEXT> { using type = E_blend_overlap_EXT;};struct E_blend_overlap_EXT{
enum{
	e_uncorrelated_ext = VK_BLEND_OVERLAP_UNCORRELATED_EXT,
	e_disjoint_ext = VK_BLEND_OVERLAP_DISJOINT_EXT,
	e_conjoint_ext = VK_BLEND_OVERLAP_CONJOINT_EXT,
}flag;
	E_blend_overlap_EXT(){}
	E_blend_overlap_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_blend_overlap_EXT(const E_blend_overlap_EXT& e_):flag(e_.flag) {}
	E_blend_overlap_EXT(const VkBlendOverlapEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkBlendOverlapEXT*(){ return reinterpret_cast<VkBlendOverlapEXT*>(this); }
	operator VkBlendOverlapEXT&(){ return reinterpret_cast<VkBlendOverlapEXT&>(*this); }
	E_blend_overlap_EXT& operator = (E_blend_overlap_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_blend_overlap_EXT e1_,const E_blend_overlap_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_blend_overlap_EXT e1_,const E_blend_overlap_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkCoverageModulationModeNV
*/
template<> struct my_class_convert<E_coverage_modulation_mode_NV> { using type = VkCoverageModulationModeNV;};template<> struct my_class_convert<VkCoverageModulationModeNV> { using type = E_coverage_modulation_mode_NV;};struct E_coverage_modulation_mode_NV{
enum{
	e_none_nv = VK_COVERAGE_MODULATION_MODE_NONE_NV,
	e_rgb_nv = VK_COVERAGE_MODULATION_MODE_RGB_NV,
	e_alpha_nv = VK_COVERAGE_MODULATION_MODE_ALPHA_NV,
	e_rgba_nv = VK_COVERAGE_MODULATION_MODE_RGBA_NV,
}flag;
	E_coverage_modulation_mode_NV(){}
	E_coverage_modulation_mode_NV(const decltype(flag) flag_):flag(flag_) {}
	E_coverage_modulation_mode_NV(const E_coverage_modulation_mode_NV& e_):flag(e_.flag) {}
	E_coverage_modulation_mode_NV(const VkCoverageModulationModeNV flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkCoverageModulationModeNV*(){ return reinterpret_cast<VkCoverageModulationModeNV*>(this); }
	operator VkCoverageModulationModeNV&(){ return reinterpret_cast<VkCoverageModulationModeNV&>(*this); }
	E_coverage_modulation_mode_NV& operator = (E_coverage_modulation_mode_NV e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_coverage_modulation_mode_NV e1_,const E_coverage_modulation_mode_NV e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_coverage_modulation_mode_NV e1_,const E_coverage_modulation_mode_NV e2_){return e1_.flag != e2_.flag; }

/*	VkValidationCacheHeaderVersionEXT
*/
template<> struct my_class_convert<E_validation_cache_header_version_EXT> { using type = VkValidationCacheHeaderVersionEXT;};template<> struct my_class_convert<VkValidationCacheHeaderVersionEXT> { using type = E_validation_cache_header_version_EXT;};struct E_validation_cache_header_version_EXT{
enum{
	e_one_ext = VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT,
}flag;
	E_validation_cache_header_version_EXT(){}
	E_validation_cache_header_version_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_validation_cache_header_version_EXT(const E_validation_cache_header_version_EXT& e_):flag(e_.flag) {}
	E_validation_cache_header_version_EXT(const VkValidationCacheHeaderVersionEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkValidationCacheHeaderVersionEXT*(){ return reinterpret_cast<VkValidationCacheHeaderVersionEXT*>(this); }
	operator VkValidationCacheHeaderVersionEXT&(){ return reinterpret_cast<VkValidationCacheHeaderVersionEXT&>(*this); }
	E_validation_cache_header_version_EXT& operator = (E_validation_cache_header_version_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_validation_cache_header_version_EXT e1_,const E_validation_cache_header_version_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_validation_cache_header_version_EXT e1_,const E_validation_cache_header_version_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkShaderInfoTypeAMD
*/
template<> struct my_class_convert<E_shader_info_type_AMD> { using type = VkShaderInfoTypeAMD;};template<> struct my_class_convert<VkShaderInfoTypeAMD> { using type = E_shader_info_type_AMD;};struct E_shader_info_type_AMD{
enum{
	e_statistics_amd = VK_SHADER_INFO_TYPE_STATISTICS_AMD,
	e_binary_amd = VK_SHADER_INFO_TYPE_BINARY_AMD,
	e_disassembly_amd = VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD,
}flag;
	E_shader_info_type_AMD(){}
	E_shader_info_type_AMD(const decltype(flag) flag_):flag(flag_) {}
	E_shader_info_type_AMD(const E_shader_info_type_AMD& e_):flag(e_.flag) {}
	E_shader_info_type_AMD(const VkShaderInfoTypeAMD flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkShaderInfoTypeAMD*(){ return reinterpret_cast<VkShaderInfoTypeAMD*>(this); }
	operator VkShaderInfoTypeAMD&(){ return reinterpret_cast<VkShaderInfoTypeAMD&>(*this); }
	E_shader_info_type_AMD& operator = (E_shader_info_type_AMD e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_shader_info_type_AMD e1_,const E_shader_info_type_AMD e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_shader_info_type_AMD e1_,const E_shader_info_type_AMD e2_){return e1_.flag != e2_.flag; }

/*	VkQueueGlobalPriorityEXT
*/
template<> struct my_class_convert<E_queue_global_priority_EXT> { using type = VkQueueGlobalPriorityEXT;};template<> struct my_class_convert<VkQueueGlobalPriorityEXT> { using type = E_queue_global_priority_EXT;};struct E_queue_global_priority_EXT{
enum{
	e_low_ext = VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT,
	e_medium_ext = VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT,
	e_high_ext = VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT,
	e_realtime_ext = VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT,
}flag;
	E_queue_global_priority_EXT(){}
	E_queue_global_priority_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_queue_global_priority_EXT(const E_queue_global_priority_EXT& e_):flag(e_.flag) {}
	E_queue_global_priority_EXT(const VkQueueGlobalPriorityEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkQueueGlobalPriorityEXT*(){ return reinterpret_cast<VkQueueGlobalPriorityEXT*>(this); }
	operator VkQueueGlobalPriorityEXT&(){ return reinterpret_cast<VkQueueGlobalPriorityEXT&>(*this); }
	E_queue_global_priority_EXT& operator = (E_queue_global_priority_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_queue_global_priority_EXT e1_,const E_queue_global_priority_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_queue_global_priority_EXT e1_,const E_queue_global_priority_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkConservativeRasterizationModeEXT
*/
template<> struct my_class_convert<E_conservative_rasterization_mode_EXT> { using type = VkConservativeRasterizationModeEXT;};template<> struct my_class_convert<VkConservativeRasterizationModeEXT> { using type = E_conservative_rasterization_mode_EXT;};struct E_conservative_rasterization_mode_EXT{
enum{
	e_disabled_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT,
	e_overestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT,
	e_underestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT,
}flag;
	E_conservative_rasterization_mode_EXT(){}
	E_conservative_rasterization_mode_EXT(const decltype(flag) flag_):flag(flag_) {}
	E_conservative_rasterization_mode_EXT(const E_conservative_rasterization_mode_EXT& e_):flag(e_.flag) {}
	E_conservative_rasterization_mode_EXT(const VkConservativeRasterizationModeEXT flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkConservativeRasterizationModeEXT*(){ return reinterpret_cast<VkConservativeRasterizationModeEXT*>(this); }
	operator VkConservativeRasterizationModeEXT&(){ return reinterpret_cast<VkConservativeRasterizationModeEXT&>(*this); }
	E_conservative_rasterization_mode_EXT& operator = (E_conservative_rasterization_mode_EXT e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_conservative_rasterization_mode_EXT e1_,const E_conservative_rasterization_mode_EXT e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_conservative_rasterization_mode_EXT e1_,const E_conservative_rasterization_mode_EXT e2_){return e1_.flag != e2_.flag; }

/*	VkVendorId
*/
template<> struct my_class_convert<E_vendor_id> { using type = VkVendorId;};template<> struct my_class_convert<VkVendorId> { using type = E_vendor_id;};struct E_vendor_id{
enum{
	e_viv = VK_VENDOR_ID_VIV,
	e_vsi = VK_VENDOR_ID_VSI,
	e_kazan = VK_VENDOR_ID_KAZAN,
}flag;
	E_vendor_id(){}
	E_vendor_id(const decltype(flag) flag_):flag(flag_) {}
	E_vendor_id(const E_vendor_id& e_):flag(e_.flag) {}
	E_vendor_id(const VkVendorId flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkVendorId*(){ return reinterpret_cast<VkVendorId*>(this); }
	operator VkVendorId&(){ return reinterpret_cast<VkVendorId&>(*this); }
	E_vendor_id& operator = (E_vendor_id e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_vendor_id e1_,const E_vendor_id e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_vendor_id e1_,const E_vendor_id e2_){return e1_.flag != e2_.flag; }

/*	VkDriverIdKHR
*/
#if 0
template<> struct my_class_convert<E_driver_id_KHR> { using type = VkDriverIdKHR;};template<> struct my_class_convert<VkDriverIdKHR> { using type = E_driver_id_KHR;};struct E_driver_id_KHR{
enum{
	e_amd_proprietary_khr = VK_DRIVER_ID_AMD_PROPRIETARY_KHR,
	e_amd_open_source_khr = VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR,
	e_mesa_radv_khr = VK_DRIVER_ID_MESA_RADV_KHR,
	e_nvidia_proprietary_khr = VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR,
	e_intel_proprietary_windows_khr = VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR,
	e_intel_open_source_mesa_khr = VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR,
	e_imagination_proprietary_khr = VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR,
	e_qualcomm_proprietary_khr = VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR,
	e_arm_proprietary_khr = VK_DRIVER_ID_ARM_PROPRIETARY_KHR,
}flag;
	E_driver_id_KHR(){}
	E_driver_id_KHR(const decltype(flag) flag_):flag(flag_) {}
	E_driver_id_KHR(const E_driver_id_KHR& e_):flag(e_.flag) {}
	E_driver_id_KHR(const VkDriverIdKHR flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkDriverIdKHR*(){ return reinterpret_cast<VkDriverIdKHR*>(this); }
	operator VkDriverIdKHR&(){ return reinterpret_cast<VkDriverIdKHR&>(*this); }
	E_driver_id_KHR& operator = (E_driver_id_KHR e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_driver_id_KHR e1_,const E_driver_id_KHR e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_driver_id_KHR e1_,const E_driver_id_KHR e2_){return e1_.flag != e2_.flag; }

#endif 

/*	VkShadingRatePaletteEntryNV
*/
template<> struct my_class_convert<E_shading_rate_palette_entry_NV> { using type = VkShadingRatePaletteEntryNV;};template<> struct my_class_convert<VkShadingRatePaletteEntryNV> { using type = E_shading_rate_palette_entry_NV;};struct E_shading_rate_palette_entry_NV{
enum{
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
}flag;
	E_shading_rate_palette_entry_NV(){}
	E_shading_rate_palette_entry_NV(const decltype(flag) flag_):flag(flag_) {}
	E_shading_rate_palette_entry_NV(const E_shading_rate_palette_entry_NV& e_):flag(e_.flag) {}
	E_shading_rate_palette_entry_NV(const VkShadingRatePaletteEntryNV flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkShadingRatePaletteEntryNV*(){ return reinterpret_cast<VkShadingRatePaletteEntryNV*>(this); }
	operator VkShadingRatePaletteEntryNV&(){ return reinterpret_cast<VkShadingRatePaletteEntryNV&>(*this); }
	E_shading_rate_palette_entry_NV& operator = (E_shading_rate_palette_entry_NV e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_shading_rate_palette_entry_NV e1_,const E_shading_rate_palette_entry_NV e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_shading_rate_palette_entry_NV e1_,const E_shading_rate_palette_entry_NV e2_){return e1_.flag != e2_.flag; }

/*	VkCoarseSampleOrderTypeNV
*/
template<> struct my_class_convert<E_coarse_sample_order_type_NV> { using type = VkCoarseSampleOrderTypeNV;};template<> struct my_class_convert<VkCoarseSampleOrderTypeNV> { using type = E_coarse_sample_order_type_NV;};struct E_coarse_sample_order_type_NV{
enum{
	e_default_nv = VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV,
	e_custom_nv = VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV,
	e_pixel_major_nv = VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV,
	e_sample_major_nv = VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV,
}flag;
	E_coarse_sample_order_type_NV(){}
	E_coarse_sample_order_type_NV(const decltype(flag) flag_):flag(flag_) {}
	E_coarse_sample_order_type_NV(const E_coarse_sample_order_type_NV& e_):flag(e_.flag) {}
	E_coarse_sample_order_type_NV(const VkCoarseSampleOrderTypeNV flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkCoarseSampleOrderTypeNV*(){ return reinterpret_cast<VkCoarseSampleOrderTypeNV*>(this); }
	operator VkCoarseSampleOrderTypeNV&(){ return reinterpret_cast<VkCoarseSampleOrderTypeNV&>(*this); }
	E_coarse_sample_order_type_NV& operator = (E_coarse_sample_order_type_NV e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_coarse_sample_order_type_NV e1_,const E_coarse_sample_order_type_NV e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_coarse_sample_order_type_NV e1_,const E_coarse_sample_order_type_NV e2_){return e1_.flag != e2_.flag; }

/*	VkCopyAccelerationStructureModeNVX
*/
template<> struct my_class_convert<E_copy_acceleration_structure_mode_NVX> { using type = VkCopyAccelerationStructureModeNVX;};template<> struct my_class_convert<VkCopyAccelerationStructureModeNVX> { using type = E_copy_acceleration_structure_mode_NVX;};struct E_copy_acceleration_structure_mode_NVX{
enum{
	e_clone_nvx = VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NVX,
	e_compact_nvx = VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NVX,
}flag;
	E_copy_acceleration_structure_mode_NVX(){}
	E_copy_acceleration_structure_mode_NVX(const decltype(flag) flag_):flag(flag_) {}
	E_copy_acceleration_structure_mode_NVX(const E_copy_acceleration_structure_mode_NVX& e_):flag(e_.flag) {}
	E_copy_acceleration_structure_mode_NVX(const VkCopyAccelerationStructureModeNVX flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkCopyAccelerationStructureModeNVX*(){ return reinterpret_cast<VkCopyAccelerationStructureModeNVX*>(this); }
	operator VkCopyAccelerationStructureModeNVX&(){ return reinterpret_cast<VkCopyAccelerationStructureModeNVX&>(*this); }
	E_copy_acceleration_structure_mode_NVX& operator = (E_copy_acceleration_structure_mode_NVX e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_copy_acceleration_structure_mode_NVX e1_,const E_copy_acceleration_structure_mode_NVX e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_copy_acceleration_structure_mode_NVX e1_,const E_copy_acceleration_structure_mode_NVX e2_){return e1_.flag != e2_.flag; }

/*	VkAccelerationStructureTypeNVX
*/
template<> struct my_class_convert<E_acceleration_structure_type_NVX> { using type = VkAccelerationStructureTypeNVX;};template<> struct my_class_convert<VkAccelerationStructureTypeNVX> { using type = E_acceleration_structure_type_NVX;};struct E_acceleration_structure_type_NVX{
enum{
	e_top_level_nvx = VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NVX,
	e_bottom_level_nvx = VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NVX,
}flag;
	E_acceleration_structure_type_NVX(){}
	E_acceleration_structure_type_NVX(const decltype(flag) flag_):flag(flag_) {}
	E_acceleration_structure_type_NVX(const E_acceleration_structure_type_NVX& e_):flag(e_.flag) {}
	E_acceleration_structure_type_NVX(const VkAccelerationStructureTypeNVX flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkAccelerationStructureTypeNVX*(){ return reinterpret_cast<VkAccelerationStructureTypeNVX*>(this); }
	operator VkAccelerationStructureTypeNVX&(){ return reinterpret_cast<VkAccelerationStructureTypeNVX&>(*this); }
	E_acceleration_structure_type_NVX& operator = (E_acceleration_structure_type_NVX e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_acceleration_structure_type_NVX e1_,const E_acceleration_structure_type_NVX e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_acceleration_structure_type_NVX e1_,const E_acceleration_structure_type_NVX e2_){return e1_.flag != e2_.flag; }

/*	VkGeometryTypeNVX
*/
template<> struct my_class_convert<E_geometry_type_NVX> { using type = VkGeometryTypeNVX;};template<> struct my_class_convert<VkGeometryTypeNVX> { using type = E_geometry_type_NVX;};struct E_geometry_type_NVX{
enum{
	e_triangles_nvx = VK_GEOMETRY_TYPE_TRIANGLES_NVX,
	e_aabbs_nvx = VK_GEOMETRY_TYPE_AABBS_NVX,
}flag;
	E_geometry_type_NVX(){}
	E_geometry_type_NVX(const decltype(flag) flag_):flag(flag_) {}
	E_geometry_type_NVX(const E_geometry_type_NVX& e_):flag(e_.flag) {}
	E_geometry_type_NVX(const VkGeometryTypeNVX flag_) :flag(static_cast<decltype(flag)>(flag_) ) {}
	operator VkGeometryTypeNVX*(){ return reinterpret_cast<VkGeometryTypeNVX*>(this); }
	operator VkGeometryTypeNVX&(){ return reinterpret_cast<VkGeometryTypeNVX&>(*this); }
	E_geometry_type_NVX& operator = (E_geometry_type_NVX e_) { flag = e_.flag; return *this; }
};
inline bool operator == (const E_geometry_type_NVX e1_,const E_geometry_type_NVX e2_){return e1_.flag == e2_.flag; }
inline bool operator != (const E_geometry_type_NVX e1_,const E_geometry_type_NVX e2_){return e1_.flag != e2_.flag; }

/*	VkCullModeFlagBits*/
template<> struct my_class_convert<F_cull_mode> { using type = VkCullModeFlagBits;};template<> struct my_class_convert<VkCullModeFlagBits> { using type = F_cull_mode;};union F_cull_mode {
	uint32_t flag;
	VkCullModeFlagBits vk_flag;
	enum B{
		b_none = VK_CULL_MODE_NONE,
		b_front = VK_CULL_MODE_FRONT_BIT,
		b_back = VK_CULL_MODE_BACK_BIT,
		b_front_and_back = VK_CULL_MODE_FRONT_AND_BACK,
	};
	F_cull_mode():flag(0){}
	F_cull_mode(const uint32_t flag_):flag(flag_){}
	//F_cull_mode(const B flag_):flag(flag_){}
	//F_cull_mode(const VkCullModeFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkCullModeFlagBits*(){ return reinterpret_cast<VkCullModeFlagBits*>(this); }
	operator VkCullModeFlagBits(){return vk_flag;}
	operator VkCullModeFlags&(){ return flag; }
	F_cull_mode& operator=(const F_cull_mode flag_){flag=flag_.flag; return *this;}
	F_cull_mode& operator|=(const F_cull_mode flag_){flag|=flag_.flag; return *this;}
	F_cull_mode& operator&=(const F_cull_mode flag_){flag&=flag_.flag; return *this;}
	F_cull_mode& operator^=(const F_cull_mode flag_){flag^=flag_.flag;return *this;}
	F_cull_mode operator~(){return ~flag;}
	bool operator==(const F_cull_mode flag_){return flag==flag_.flag;}
	bool operator!=(const F_cull_mode flag_){return !(*this==flag_);}
	F_cull_mode& clear(){flag = 0;return *this;}
	F_cull_mode all_flags(){ return b_none | b_front | b_back | b_front_and_back;}
	F_cull_mode& on_none(){ flag |= b_none; return *this; }
	F_cull_mode& off_none(){ flag &= ~b_none; return *this; }
	F_cull_mode& on_front(){ flag |= b_front; return *this; }
	F_cull_mode& off_front(){ flag &= ~b_front; return *this; }
	F_cull_mode& on_back(){ flag |= b_back; return *this; }
	F_cull_mode& off_back(){ flag &= ~b_back; return *this; }
	F_cull_mode& on_front_and_back(){ flag |= b_front_and_back; return *this; }
	F_cull_mode& off_front_and_back(){ flag &= ~b_front_and_back; return *this; }
};
inline F_cull_mode operator&(const F_cull_mode f1_, const F_cull_mode f2_){return f1_.flag&f2_.flag;}
inline F_cull_mode operator&(const F_cull_mode f1_, const F_cull_mode::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_cull_mode operator&(const F_cull_mode::B f1_, const F_cull_mode f2_){return uint32_t(f1_)&f2_.flag;}
inline F_cull_mode operator&(const F_cull_mode f1_, const VkCullModeFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_cull_mode operator&(const VkCullModeFlagBits f1_, const F_cull_mode f2_){return uint32_t(f1_)&f2_.flag;}
inline F_cull_mode operator|(const F_cull_mode f1_, const F_cull_mode f2_){return f1_.flag|f2_.flag;}
inline F_cull_mode operator^(const F_cull_mode f1_, const F_cull_mode f2_){return f1_.flag^f2_.flag;}
/*	VkQueueFlagBits*/
template<> struct my_class_convert<F_queue> { using type = VkQueueFlagBits;};template<> struct my_class_convert<VkQueueFlagBits> { using type = F_queue;};union F_queue {
	uint32_t flag;
	VkQueueFlagBits vk_flag;
	enum B{
			/* Queue supports graphics operations */
		b_graphics = VK_QUEUE_GRAPHICS_BIT,
			/* Queue supports compute operations */
		b_compute = VK_QUEUE_COMPUTE_BIT,
			/* Queue supports transfer operations */
		b_transfer = VK_QUEUE_TRANSFER_BIT,
			/* Queue supports sparse resource memory management operations */
		b_sparse_binding = VK_QUEUE_SPARSE_BINDING_BIT,
	};
	F_queue():flag(0){}
	F_queue(const uint32_t flag_):flag(flag_){}
	//F_queue(const B flag_):flag(flag_){}
	//F_queue(const VkQueueFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkQueueFlagBits*(){ return reinterpret_cast<VkQueueFlagBits*>(this); }
	operator VkQueueFlagBits(){return vk_flag;}
	operator VkQueueFlags&(){ return flag; }
	F_queue& operator=(const F_queue flag_){flag=flag_.flag; return *this;}
	F_queue& operator|=(const F_queue flag_){flag|=flag_.flag; return *this;}
	F_queue& operator&=(const F_queue flag_){flag&=flag_.flag; return *this;}
	F_queue& operator^=(const F_queue flag_){flag^=flag_.flag;return *this;}
	F_queue operator~(){return ~flag;}
	bool operator==(const F_queue flag_){return flag==flag_.flag;}
	bool operator!=(const F_queue flag_){return !(*this==flag_);}
	F_queue& clear(){flag = 0;return *this;}
	F_queue all_flags(){ return b_graphics | b_compute | b_transfer | b_sparse_binding;}
	F_queue& on_graphics(){ flag |= b_graphics; return *this; }
	F_queue& off_graphics(){ flag &= ~b_graphics; return *this; }
	F_queue& on_compute(){ flag |= b_compute; return *this; }
	F_queue& off_compute(){ flag &= ~b_compute; return *this; }
	F_queue& on_transfer(){ flag |= b_transfer; return *this; }
	F_queue& off_transfer(){ flag &= ~b_transfer; return *this; }
	F_queue& on_sparse_binding(){ flag |= b_sparse_binding; return *this; }
	F_queue& off_sparse_binding(){ flag &= ~b_sparse_binding; return *this; }
};
inline F_queue operator&(const F_queue f1_, const F_queue f2_){return f1_.flag&f2_.flag;}
inline F_queue operator&(const F_queue f1_, const F_queue::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_queue operator&(const F_queue::B f1_, const F_queue f2_){return uint32_t(f1_)&f2_.flag;}
inline F_queue operator&(const F_queue f1_, const VkQueueFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_queue operator&(const VkQueueFlagBits f1_, const F_queue f2_){return uint32_t(f1_)&f2_.flag;}
inline F_queue operator|(const F_queue f1_, const F_queue f2_){return f1_.flag|f2_.flag;}
inline F_queue operator^(const F_queue f1_, const F_queue f2_){return f1_.flag^f2_.flag;}
/*	VkRenderPassCreateFlagBits*/
using F_render_pass_create = VkFlags;

/*	VkDeviceQueueCreateFlagBits*/
using F_device_queue_create = 
			VkDeviceQueueCreateFlagBits;

/*	VkMemoryPropertyFlagBits*/
template<> struct my_class_convert<F_memory_property> { using type = VkMemoryPropertyFlagBits;};template<> struct my_class_convert<VkMemoryPropertyFlagBits> { using type = F_memory_property;};union F_memory_property {
	uint32_t flag;
	VkMemoryPropertyFlagBits vk_flag;
	enum B{
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
	};
	F_memory_property():flag(0){}
	F_memory_property(const uint32_t flag_):flag(flag_){}
	//F_memory_property(const B flag_):flag(flag_){}
	//F_memory_property(const VkMemoryPropertyFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkMemoryPropertyFlagBits*(){ return reinterpret_cast<VkMemoryPropertyFlagBits*>(this); }
	operator VkMemoryPropertyFlagBits(){return vk_flag;}
	operator VkMemoryPropertyFlags&(){ return flag; }
	F_memory_property& operator=(const F_memory_property flag_){flag=flag_.flag; return *this;}
	F_memory_property& operator|=(const F_memory_property flag_){flag|=flag_.flag; return *this;}
	F_memory_property& operator&=(const F_memory_property flag_){flag&=flag_.flag; return *this;}
	F_memory_property& operator^=(const F_memory_property flag_){flag^=flag_.flag;return *this;}
	F_memory_property operator~(){return ~flag;}
	bool operator==(const F_memory_property flag_){return flag==flag_.flag;}
	bool operator!=(const F_memory_property flag_){return !(*this==flag_);}
	F_memory_property& clear(){flag = 0;return *this;}
	F_memory_property all_flags(){ return b_device_local | b_host_visible | b_host_coherent | b_host_cached | b_lazily_allocated;}
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
inline F_memory_property operator&(const F_memory_property f1_, const F_memory_property f2_){return f1_.flag&f2_.flag;}
inline F_memory_property operator&(const F_memory_property f1_, const F_memory_property::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_memory_property operator&(const F_memory_property::B f1_, const F_memory_property f2_){return uint32_t(f1_)&f2_.flag;}
inline F_memory_property operator&(const F_memory_property f1_, const VkMemoryPropertyFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_memory_property operator&(const VkMemoryPropertyFlagBits f1_, const F_memory_property f2_){return uint32_t(f1_)&f2_.flag;}
inline F_memory_property operator|(const F_memory_property f1_, const F_memory_property f2_){return f1_.flag|f2_.flag;}
inline F_memory_property operator^(const F_memory_property f1_, const F_memory_property f2_){return f1_.flag^f2_.flag;}
/*	VkMemoryHeapFlagBits*/
template<> struct my_class_convert<F_memory_heap> { using type = VkMemoryHeapFlagBits;};template<> struct my_class_convert<VkMemoryHeapFlagBits> { using type = F_memory_heap;};union F_memory_heap {
	uint32_t flag;
	VkMemoryHeapFlagBits vk_flag;
	enum B{
			/* If set, heap represents device memory */
		b_device_local = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT,
	};
	F_memory_heap():flag(0){}
	F_memory_heap(const uint32_t flag_):flag(flag_){}
	//F_memory_heap(const B flag_):flag(flag_){}
	//F_memory_heap(const VkMemoryHeapFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkMemoryHeapFlagBits*(){ return reinterpret_cast<VkMemoryHeapFlagBits*>(this); }
	operator VkMemoryHeapFlagBits(){return vk_flag;}
	operator VkMemoryHeapFlags&(){ return flag; }
	F_memory_heap& operator=(const F_memory_heap flag_){flag=flag_.flag; return *this;}
	F_memory_heap& operator|=(const F_memory_heap flag_){flag|=flag_.flag; return *this;}
	F_memory_heap& operator&=(const F_memory_heap flag_){flag&=flag_.flag; return *this;}
	F_memory_heap& operator^=(const F_memory_heap flag_){flag^=flag_.flag;return *this;}
	F_memory_heap operator~(){return ~flag;}
	bool operator==(const F_memory_heap flag_){return flag==flag_.flag;}
	bool operator!=(const F_memory_heap flag_){return !(*this==flag_);}
	F_memory_heap& clear(){flag = 0;return *this;}
	F_memory_heap all_flags(){ return b_device_local;}
	F_memory_heap& on_device_local(){ flag |= b_device_local; return *this; }
	F_memory_heap& off_device_local(){ flag &= ~b_device_local; return *this; }
};
inline F_memory_heap operator&(const F_memory_heap f1_, const F_memory_heap f2_){return f1_.flag&f2_.flag;}
inline F_memory_heap operator&(const F_memory_heap f1_, const F_memory_heap::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_memory_heap operator&(const F_memory_heap::B f1_, const F_memory_heap f2_){return uint32_t(f1_)&f2_.flag;}
inline F_memory_heap operator&(const F_memory_heap f1_, const VkMemoryHeapFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_memory_heap operator&(const VkMemoryHeapFlagBits f1_, const F_memory_heap f2_){return uint32_t(f1_)&f2_.flag;}
inline F_memory_heap operator|(const F_memory_heap f1_, const F_memory_heap f2_){return f1_.flag|f2_.flag;}
inline F_memory_heap operator^(const F_memory_heap f1_, const F_memory_heap f2_){return f1_.flag^f2_.flag;}
/*	VkAccessFlagBits*/
template<> struct my_class_convert<F_access> { using type = VkAccessFlagBits;};template<> struct my_class_convert<VkAccessFlagBits> { using type = F_access;};union F_access {
	uint32_t flag;
	VkAccessFlagBits vk_flag;
	enum B{
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
	};
	F_access():flag(0){}
	F_access(const uint32_t flag_):flag(flag_){}
	//F_access(const B flag_):flag(flag_){}
	//F_access(const VkAccessFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkAccessFlagBits*(){ return reinterpret_cast<VkAccessFlagBits*>(this); }
	operator VkAccessFlagBits(){return vk_flag;}
	operator VkAccessFlags&(){ return flag; }
	F_access& operator=(const F_access flag_){flag=flag_.flag; return *this;}
	F_access& operator|=(const F_access flag_){flag|=flag_.flag; return *this;}
	F_access& operator&=(const F_access flag_){flag&=flag_.flag; return *this;}
	F_access& operator^=(const F_access flag_){flag^=flag_.flag;return *this;}
	F_access operator~(){return ~flag;}
	bool operator==(const F_access flag_){return flag==flag_.flag;}
	bool operator!=(const F_access flag_){return !(*this==flag_);}
	F_access& clear(){flag = 0;return *this;}
	F_access all_flags(){ return b_indirect_command_read | b_index_read | b_vertex_attribute_read | b_uniform_read | b_input_attachment_read | b_shader_read | b_shader_write | b_color_attachment_read | b_color_attachment_write | b_depth_stencil_attachment_read | b_depth_stencil_attachment_write | b_transfer_read | b_transfer_write | b_host_read | b_host_write | b_memory_read | b_memory_write;}
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
inline F_access operator&(const F_access f1_, const F_access f2_){return f1_.flag&f2_.flag;}
inline F_access operator&(const F_access f1_, const F_access::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_access operator&(const F_access::B f1_, const F_access f2_){return uint32_t(f1_)&f2_.flag;}
inline F_access operator&(const F_access f1_, const VkAccessFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_access operator&(const VkAccessFlagBits f1_, const F_access f2_){return uint32_t(f1_)&f2_.flag;}
inline F_access operator|(const F_access f1_, const F_access f2_){return f1_.flag|f2_.flag;}
inline F_access operator^(const F_access f1_, const F_access f2_){return f1_.flag^f2_.flag;}
/*	VkBufferUsageFlagBits*/
template<> struct my_class_convert<F_buffer_usage> { using type = VkBufferUsageFlagBits;};template<> struct my_class_convert<VkBufferUsageFlagBits> { using type = F_buffer_usage;};union F_buffer_usage {
	uint32_t flag;
	VkBufferUsageFlagBits vk_flag;
	enum B{
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
	};
	F_buffer_usage():flag(0){}
	F_buffer_usage(const uint32_t flag_):flag(flag_){}
	//F_buffer_usage(const B flag_):flag(flag_){}
	//F_buffer_usage(const VkBufferUsageFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkBufferUsageFlagBits*(){ return reinterpret_cast<VkBufferUsageFlagBits*>(this); }
	operator VkBufferUsageFlagBits(){return vk_flag;}
	operator VkBufferUsageFlags&(){ return flag; }
	F_buffer_usage& operator=(const F_buffer_usage flag_){flag=flag_.flag; return *this;}
	F_buffer_usage& operator|=(const F_buffer_usage flag_){flag|=flag_.flag; return *this;}
	F_buffer_usage& operator&=(const F_buffer_usage flag_){flag&=flag_.flag; return *this;}
	F_buffer_usage& operator^=(const F_buffer_usage flag_){flag^=flag_.flag;return *this;}
	F_buffer_usage operator~(){return ~flag;}
	bool operator==(const F_buffer_usage flag_){return flag==flag_.flag;}
	bool operator!=(const F_buffer_usage flag_){return !(*this==flag_);}
	F_buffer_usage& clear(){flag = 0;return *this;}
	F_buffer_usage all_flags(){ return b_transfer_src | b_transfer_dst | b_uniform_texel_buffer | b_storage_texel_buffer | b_uniform_buffer | b_storage_buffer | b_index_buffer | b_vertex_buffer | b_indirect_buffer;}
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
inline F_buffer_usage operator&(const F_buffer_usage f1_, const F_buffer_usage f2_){return f1_.flag&f2_.flag;}
inline F_buffer_usage operator&(const F_buffer_usage f1_, const F_buffer_usage::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_buffer_usage operator&(const F_buffer_usage::B f1_, const F_buffer_usage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_buffer_usage operator&(const F_buffer_usage f1_, const VkBufferUsageFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_buffer_usage operator&(const VkBufferUsageFlagBits f1_, const F_buffer_usage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_buffer_usage operator|(const F_buffer_usage f1_, const F_buffer_usage f2_){return f1_.flag|f2_.flag;}
inline F_buffer_usage operator^(const F_buffer_usage f1_, const F_buffer_usage f2_){return f1_.flag^f2_.flag;}
/*	VkBufferCreateFlagBits*/
template<> struct my_class_convert<F_buffer_create> { using type = VkBufferCreateFlagBits;};template<> struct my_class_convert<VkBufferCreateFlagBits> { using type = F_buffer_create;};union F_buffer_create {
	uint32_t flag;
	VkBufferCreateFlagBits vk_flag;
	enum B{
			/* Buffer should support sparse backing */
		b_sparse_binding = VK_BUFFER_CREATE_SPARSE_BINDING_BIT,
			/* Buffer should support sparse backing with partial residency */
		b_sparse_residency = VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT,
			/* Buffer should support constent data access to physical memory ranges mapped into multiple locations of sparse buffers */
		b_sparse_aliased = VK_BUFFER_CREATE_SPARSE_ALIASED_BIT,
	};
	F_buffer_create():flag(0){}
	F_buffer_create(const uint32_t flag_):flag(flag_){}
	//F_buffer_create(const B flag_):flag(flag_){}
	//F_buffer_create(const VkBufferCreateFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkBufferCreateFlagBits*(){ return reinterpret_cast<VkBufferCreateFlagBits*>(this); }
	operator VkBufferCreateFlagBits(){return vk_flag;}
	operator VkBufferCreateFlags&(){ return flag; }
	F_buffer_create& operator=(const F_buffer_create flag_){flag=flag_.flag; return *this;}
	F_buffer_create& operator|=(const F_buffer_create flag_){flag|=flag_.flag; return *this;}
	F_buffer_create& operator&=(const F_buffer_create flag_){flag&=flag_.flag; return *this;}
	F_buffer_create& operator^=(const F_buffer_create flag_){flag^=flag_.flag;return *this;}
	F_buffer_create operator~(){return ~flag;}
	bool operator==(const F_buffer_create flag_){return flag==flag_.flag;}
	bool operator!=(const F_buffer_create flag_){return !(*this==flag_);}
	F_buffer_create& clear(){flag = 0;return *this;}
	F_buffer_create all_flags(){ return b_sparse_binding | b_sparse_residency | b_sparse_aliased;}
	F_buffer_create& on_sparse_binding(){ flag |= b_sparse_binding; return *this; }
	F_buffer_create& off_sparse_binding(){ flag &= ~b_sparse_binding; return *this; }
	F_buffer_create& on_sparse_residency(){ flag |= b_sparse_residency; return *this; }
	F_buffer_create& off_sparse_residency(){ flag &= ~b_sparse_residency; return *this; }
	F_buffer_create& on_sparse_aliased(){ flag |= b_sparse_aliased; return *this; }
	F_buffer_create& off_sparse_aliased(){ flag &= ~b_sparse_aliased; return *this; }
};
inline F_buffer_create operator&(const F_buffer_create f1_, const F_buffer_create f2_){return f1_.flag&f2_.flag;}
inline F_buffer_create operator&(const F_buffer_create f1_, const F_buffer_create::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_buffer_create operator&(const F_buffer_create::B f1_, const F_buffer_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_buffer_create operator&(const F_buffer_create f1_, const VkBufferCreateFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_buffer_create operator&(const VkBufferCreateFlagBits f1_, const F_buffer_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_buffer_create operator|(const F_buffer_create f1_, const F_buffer_create f2_){return f1_.flag|f2_.flag;}
inline F_buffer_create operator^(const F_buffer_create f1_, const F_buffer_create f2_){return f1_.flag^f2_.flag;}
/*	VkShaderStageFlagBits*/
template<> struct my_class_convert<F_shader_stage> { using type = VkShaderStageFlagBits;};template<> struct my_class_convert<VkShaderStageFlagBits> { using type = F_shader_stage;};union F_shader_stage {
	uint32_t flag;
	VkShaderStageFlagBits vk_flag;
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
	F_shader_stage(const uint32_t flag_):flag(flag_){}
	//F_shader_stage(const B flag_):flag(flag_){}
	//F_shader_stage(const VkShaderStageFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkShaderStageFlagBits*(){ return reinterpret_cast<VkShaderStageFlagBits*>(this); }
	operator VkShaderStageFlagBits(){return vk_flag;}
	operator VkShaderStageFlags&(){ return flag; }
	F_shader_stage& operator=(const F_shader_stage flag_){flag=flag_.flag; return *this;}
	F_shader_stage& operator|=(const F_shader_stage flag_){flag|=flag_.flag; return *this;}
	F_shader_stage& operator&=(const F_shader_stage flag_){flag&=flag_.flag; return *this;}
	F_shader_stage& operator^=(const F_shader_stage flag_){flag^=flag_.flag;return *this;}
	F_shader_stage operator~(){return ~flag;}
	bool operator==(const F_shader_stage flag_){return flag==flag_.flag;}
	bool operator!=(const F_shader_stage flag_){return !(*this==flag_);}
	F_shader_stage& clear(){flag = 0;return *this;}
	F_shader_stage all_flags(){ return b_vertex | b_tessellation_control | b_tessellation_evaluation | b_geometry | b_fragment | b_compute | b_all_graphics | b_all;}
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
inline F_shader_stage operator&(const F_shader_stage f1_, const F_shader_stage f2_){return f1_.flag&f2_.flag;}
inline F_shader_stage operator&(const F_shader_stage f1_, const F_shader_stage::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_shader_stage operator&(const F_shader_stage::B f1_, const F_shader_stage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_shader_stage operator&(const F_shader_stage f1_, const VkShaderStageFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_shader_stage operator&(const VkShaderStageFlagBits f1_, const F_shader_stage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_shader_stage operator|(const F_shader_stage f1_, const F_shader_stage f2_){return f1_.flag|f2_.flag;}
inline F_shader_stage operator^(const F_shader_stage f1_, const F_shader_stage f2_){return f1_.flag^f2_.flag;}
/*	VkImageUsageFlagBits*/
template<> struct my_class_convert<F_image_usage> { using type = VkImageUsageFlagBits;};template<> struct my_class_convert<VkImageUsageFlagBits> { using type = F_image_usage;};union F_image_usage {
	uint32_t flag;
	VkImageUsageFlagBits vk_flag;
	enum B{
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
	};
	F_image_usage():flag(0){}
	F_image_usage(const uint32_t flag_):flag(flag_){}
	//F_image_usage(const B flag_):flag(flag_){}
	//F_image_usage(const VkImageUsageFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkImageUsageFlagBits*(){ return reinterpret_cast<VkImageUsageFlagBits*>(this); }
	operator VkImageUsageFlagBits(){return vk_flag;}
	operator VkImageUsageFlags&(){ return flag; }
	F_image_usage& operator=(const F_image_usage flag_){flag=flag_.flag; return *this;}
	F_image_usage& operator|=(const F_image_usage flag_){flag|=flag_.flag; return *this;}
	F_image_usage& operator&=(const F_image_usage flag_){flag&=flag_.flag; return *this;}
	F_image_usage& operator^=(const F_image_usage flag_){flag^=flag_.flag;return *this;}
	F_image_usage operator~(){return ~flag;}
	bool operator==(const F_image_usage flag_){return flag==flag_.flag;}
	bool operator!=(const F_image_usage flag_){return !(*this==flag_);}
	F_image_usage& clear(){flag = 0;return *this;}
	F_image_usage all_flags(){ return b_transfer_src | b_transfer_dst | b_sampled | b_storage | b_color_attachment | b_depth_stencil_attachment | b_transient_attachment | b_input_attachment;}
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
inline F_image_usage operator&(const F_image_usage f1_, const F_image_usage f2_){return f1_.flag&f2_.flag;}
inline F_image_usage operator&(const F_image_usage f1_, const F_image_usage::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_image_usage operator&(const F_image_usage::B f1_, const F_image_usage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_image_usage operator&(const F_image_usage f1_, const VkImageUsageFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_image_usage operator&(const VkImageUsageFlagBits f1_, const F_image_usage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_image_usage operator|(const F_image_usage f1_, const F_image_usage f2_){return f1_.flag|f2_.flag;}
inline F_image_usage operator^(const F_image_usage f1_, const F_image_usage f2_){return f1_.flag^f2_.flag;}
/*	VkImageCreateFlagBits*/
template<> struct my_class_convert<F_image_create> { using type = VkImageCreateFlagBits;};template<> struct my_class_convert<VkImageCreateFlagBits> { using type = F_image_create;};union F_image_create {
	uint32_t flag;
	VkImageCreateFlagBits vk_flag;
	enum B{
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
	};
	F_image_create():flag(0){}
	F_image_create(const uint32_t flag_):flag(flag_){}
	//F_image_create(const B flag_):flag(flag_){}
	//F_image_create(const VkImageCreateFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkImageCreateFlagBits*(){ return reinterpret_cast<VkImageCreateFlagBits*>(this); }
	operator VkImageCreateFlagBits(){return vk_flag;}
	operator VkImageCreateFlags&(){ return flag; }
	F_image_create& operator=(const F_image_create flag_){flag=flag_.flag; return *this;}
	F_image_create& operator|=(const F_image_create flag_){flag|=flag_.flag; return *this;}
	F_image_create& operator&=(const F_image_create flag_){flag&=flag_.flag; return *this;}
	F_image_create& operator^=(const F_image_create flag_){flag^=flag_.flag;return *this;}
	F_image_create operator~(){return ~flag;}
	bool operator==(const F_image_create flag_){return flag==flag_.flag;}
	bool operator!=(const F_image_create flag_){return !(*this==flag_);}
	F_image_create& clear(){flag = 0;return *this;}
	F_image_create all_flags(){ return b_sparse_binding | b_sparse_residency | b_sparse_aliased | b_mutable_format | b_cube_compatible;}
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
inline F_image_create operator&(const F_image_create f1_, const F_image_create f2_){return f1_.flag&f2_.flag;}
inline F_image_create operator&(const F_image_create f1_, const F_image_create::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_image_create operator&(const F_image_create::B f1_, const F_image_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_image_create operator&(const F_image_create f1_, const VkImageCreateFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_image_create operator&(const VkImageCreateFlagBits f1_, const F_image_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_image_create operator|(const F_image_create f1_, const F_image_create f2_){return f1_.flag|f2_.flag;}
inline F_image_create operator^(const F_image_create f1_, const F_image_create f2_){return f1_.flag^f2_.flag;}
/*	VkPipelineCreateFlagBits*/
template<> struct my_class_convert<F_pipeline_create> { using type = VkPipelineCreateFlagBits;};template<> struct my_class_convert<VkPipelineCreateFlagBits> { using type = F_pipeline_create;};union F_pipeline_create {
	uint32_t flag;
	VkPipelineCreateFlagBits vk_flag;
	enum B{
		b_disable_optimization = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT,
		b_allow_derivatives = VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT,
		b_derivative = VK_PIPELINE_CREATE_DERIVATIVE_BIT,
	};
	F_pipeline_create():flag(0){}
	F_pipeline_create(const uint32_t flag_):flag(flag_){}
	//F_pipeline_create(const B flag_):flag(flag_){}
	//F_pipeline_create(const VkPipelineCreateFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkPipelineCreateFlagBits*(){ return reinterpret_cast<VkPipelineCreateFlagBits*>(this); }
	operator VkPipelineCreateFlagBits(){return vk_flag;}
	operator VkPipelineCreateFlags&(){ return flag; }
	F_pipeline_create& operator=(const F_pipeline_create flag_){flag=flag_.flag; return *this;}
	F_pipeline_create& operator|=(const F_pipeline_create flag_){flag|=flag_.flag; return *this;}
	F_pipeline_create& operator&=(const F_pipeline_create flag_){flag&=flag_.flag; return *this;}
	F_pipeline_create& operator^=(const F_pipeline_create flag_){flag^=flag_.flag;return *this;}
	F_pipeline_create operator~(){return ~flag;}
	bool operator==(const F_pipeline_create flag_){return flag==flag_.flag;}
	bool operator!=(const F_pipeline_create flag_){return !(*this==flag_);}
	F_pipeline_create& clear(){flag = 0;return *this;}
	F_pipeline_create all_flags(){ return b_disable_optimization | b_allow_derivatives | b_derivative;}
	F_pipeline_create& on_disable_optimization(){ flag |= b_disable_optimization; return *this; }
	F_pipeline_create& off_disable_optimization(){ flag &= ~b_disable_optimization; return *this; }
	F_pipeline_create& on_allow_derivatives(){ flag |= b_allow_derivatives; return *this; }
	F_pipeline_create& off_allow_derivatives(){ flag &= ~b_allow_derivatives; return *this; }
	F_pipeline_create& on_derivative(){ flag |= b_derivative; return *this; }
	F_pipeline_create& off_derivative(){ flag &= ~b_derivative; return *this; }
};
inline F_pipeline_create operator&(const F_pipeline_create f1_, const F_pipeline_create f2_){return f1_.flag&f2_.flag;}
inline F_pipeline_create operator&(const F_pipeline_create f1_, const F_pipeline_create::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_pipeline_create operator&(const F_pipeline_create::B f1_, const F_pipeline_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_pipeline_create operator&(const F_pipeline_create f1_, const VkPipelineCreateFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_pipeline_create operator&(const VkPipelineCreateFlagBits f1_, const F_pipeline_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_pipeline_create operator|(const F_pipeline_create f1_, const F_pipeline_create f2_){return f1_.flag|f2_.flag;}
inline F_pipeline_create operator^(const F_pipeline_create f1_, const F_pipeline_create f2_){return f1_.flag^f2_.flag;}
/*	VkColorComponentFlagBits*/
template<> struct my_class_convert<F_color_component> { using type = VkColorComponentFlagBits;};template<> struct my_class_convert<VkColorComponentFlagBits> { using type = F_color_component;};union F_color_component {
	uint32_t flag;
	VkColorComponentFlagBits vk_flag;
	enum B{
		b_r = VK_COLOR_COMPONENT_R_BIT,
		b_g = VK_COLOR_COMPONENT_G_BIT,
		b_b = VK_COLOR_COMPONENT_B_BIT,
		b_a = VK_COLOR_COMPONENT_A_BIT,
	};
	F_color_component():flag(0){}
	F_color_component(const uint32_t flag_):flag(flag_){}
	//F_color_component(const B flag_):flag(flag_){}
	//F_color_component(const VkColorComponentFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkColorComponentFlagBits*(){ return reinterpret_cast<VkColorComponentFlagBits*>(this); }
	operator VkColorComponentFlagBits(){return vk_flag;}
	operator VkColorComponentFlags&(){ return flag; }
	F_color_component& operator=(const F_color_component flag_){flag=flag_.flag; return *this;}
	F_color_component& operator|=(const F_color_component flag_){flag|=flag_.flag; return *this;}
	F_color_component& operator&=(const F_color_component flag_){flag&=flag_.flag; return *this;}
	F_color_component& operator^=(const F_color_component flag_){flag^=flag_.flag;return *this;}
	F_color_component operator~(){return ~flag;}
	bool operator==(const F_color_component flag_){return flag==flag_.flag;}
	bool operator!=(const F_color_component flag_){return !(*this==flag_);}
	F_color_component& clear(){flag = 0;return *this;}
	F_color_component all_flags(){ return b_r | b_g | b_b | b_a;}
	F_color_component& on_r(){ flag |= b_r; return *this; }
	F_color_component& off_r(){ flag &= ~b_r; return *this; }
	F_color_component& on_g(){ flag |= b_g; return *this; }
	F_color_component& off_g(){ flag &= ~b_g; return *this; }
	F_color_component& on_b(){ flag |= b_b; return *this; }
	F_color_component& off_b(){ flag &= ~b_b; return *this; }
	F_color_component& on_a(){ flag |= b_a; return *this; }
	F_color_component& off_a(){ flag &= ~b_a; return *this; }
};
inline F_color_component operator&(const F_color_component f1_, const F_color_component f2_){return f1_.flag&f2_.flag;}
inline F_color_component operator&(const F_color_component f1_, const F_color_component::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_color_component operator&(const F_color_component::B f1_, const F_color_component f2_){return uint32_t(f1_)&f2_.flag;}
inline F_color_component operator&(const F_color_component f1_, const VkColorComponentFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_color_component operator&(const VkColorComponentFlagBits f1_, const F_color_component f2_){return uint32_t(f1_)&f2_.flag;}
inline F_color_component operator|(const F_color_component f1_, const F_color_component f2_){return f1_.flag|f2_.flag;}
inline F_color_component operator^(const F_color_component f1_, const F_color_component f2_){return f1_.flag^f2_.flag;}
/*	VkFenceCreateFlagBits*/
template<> struct my_class_convert<F_fence_create> { using type = VkFenceCreateFlagBits;};template<> struct my_class_convert<VkFenceCreateFlagBits> { using type = F_fence_create;};union F_fence_create {
	uint32_t flag;
	VkFenceCreateFlagBits vk_flag;
	enum B{
		b_signaled = VK_FENCE_CREATE_SIGNALED_BIT,
	};
	F_fence_create():flag(0){}
	F_fence_create(const uint32_t flag_):flag(flag_){}
	//F_fence_create(const B flag_):flag(flag_){}
	//F_fence_create(const VkFenceCreateFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkFenceCreateFlagBits*(){ return reinterpret_cast<VkFenceCreateFlagBits*>(this); }
	operator VkFenceCreateFlagBits(){return vk_flag;}
	operator VkFenceCreateFlags&(){ return flag; }
	F_fence_create& operator=(const F_fence_create flag_){flag=flag_.flag; return *this;}
	F_fence_create& operator|=(const F_fence_create flag_){flag|=flag_.flag; return *this;}
	F_fence_create& operator&=(const F_fence_create flag_){flag&=flag_.flag; return *this;}
	F_fence_create& operator^=(const F_fence_create flag_){flag^=flag_.flag;return *this;}
	F_fence_create operator~(){return ~flag;}
	bool operator==(const F_fence_create flag_){return flag==flag_.flag;}
	bool operator!=(const F_fence_create flag_){return !(*this==flag_);}
	F_fence_create& clear(){flag = 0;return *this;}
	F_fence_create all_flags(){ return b_signaled;}
	F_fence_create& on_signaled(){ flag |= b_signaled; return *this; }
	F_fence_create& off_signaled(){ flag &= ~b_signaled; return *this; }
};
inline F_fence_create operator&(const F_fence_create f1_, const F_fence_create f2_){return f1_.flag&f2_.flag;}
inline F_fence_create operator&(const F_fence_create f1_, const F_fence_create::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_fence_create operator&(const F_fence_create::B f1_, const F_fence_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_fence_create operator&(const F_fence_create f1_, const VkFenceCreateFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_fence_create operator&(const VkFenceCreateFlagBits f1_, const F_fence_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_fence_create operator|(const F_fence_create f1_, const F_fence_create f2_){return f1_.flag|f2_.flag;}
inline F_fence_create operator^(const F_fence_create f1_, const F_fence_create f2_){return f1_.flag^f2_.flag;}
/*	VkFormatFeatureFlagBits*/
template<> struct my_class_convert<F_format_feature> { using type = VkFormatFeatureFlagBits;};template<> struct my_class_convert<VkFormatFeatureFlagBits> { using type = F_format_feature;};union F_format_feature {
	uint32_t flag;
	VkFormatFeatureFlagBits vk_flag;
	enum B{
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
	};
	F_format_feature():flag(0){}
	F_format_feature(const uint32_t flag_):flag(flag_){}
	//F_format_feature(const B flag_):flag(flag_){}
	//F_format_feature(const VkFormatFeatureFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkFormatFeatureFlagBits*(){ return reinterpret_cast<VkFormatFeatureFlagBits*>(this); }
	operator VkFormatFeatureFlagBits(){return vk_flag;}
	operator VkFormatFeatureFlags&(){ return flag; }
	F_format_feature& operator=(const F_format_feature flag_){flag=flag_.flag; return *this;}
	F_format_feature& operator|=(const F_format_feature flag_){flag|=flag_.flag; return *this;}
	F_format_feature& operator&=(const F_format_feature flag_){flag&=flag_.flag; return *this;}
	F_format_feature& operator^=(const F_format_feature flag_){flag^=flag_.flag;return *this;}
	F_format_feature operator~(){return ~flag;}
	bool operator==(const F_format_feature flag_){return flag==flag_.flag;}
	bool operator!=(const F_format_feature flag_){return !(*this==flag_);}
	F_format_feature& clear(){flag = 0;return *this;}
	F_format_feature all_flags(){ return b_sampled_image | b_storage_image | b_storage_image_atomic | b_uniform_texel_buffer | b_storage_texel_buffer | b_storage_texel_buffer_atomic | b_vertex_buffer | b_color_attachment | b_color_attachment_blend | b_depth_stencil_attachment | b_blit_src | b_blit_dst | b_sampled_image_filter_linear;}
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
inline F_format_feature operator&(const F_format_feature f1_, const F_format_feature f2_){return f1_.flag&f2_.flag;}
inline F_format_feature operator&(const F_format_feature f1_, const F_format_feature::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_format_feature operator&(const F_format_feature::B f1_, const F_format_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_format_feature operator&(const F_format_feature f1_, const VkFormatFeatureFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_format_feature operator&(const VkFormatFeatureFlagBits f1_, const F_format_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_format_feature operator|(const F_format_feature f1_, const F_format_feature f2_){return f1_.flag|f2_.flag;}
inline F_format_feature operator^(const F_format_feature f1_, const F_format_feature f2_){return f1_.flag^f2_.flag;}
/*	VkQueryControlFlagBits*/
template<> struct my_class_convert<F_query_control> { using type = VkQueryControlFlagBits;};template<> struct my_class_convert<VkQueryControlFlagBits> { using type = F_query_control;};union F_query_control {
	uint32_t flag;
	VkQueryControlFlagBits vk_flag;
	enum B{
			/* Require precise results to be collected by the query */
		b_precise = VK_QUERY_CONTROL_PRECISE_BIT,
	};
	F_query_control():flag(0){}
	F_query_control(const uint32_t flag_):flag(flag_){}
	//F_query_control(const B flag_):flag(flag_){}
	//F_query_control(const VkQueryControlFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkQueryControlFlagBits*(){ return reinterpret_cast<VkQueryControlFlagBits*>(this); }
	operator VkQueryControlFlagBits(){return vk_flag;}
	operator VkQueryControlFlags&(){ return flag; }
	F_query_control& operator=(const F_query_control flag_){flag=flag_.flag; return *this;}
	F_query_control& operator|=(const F_query_control flag_){flag|=flag_.flag; return *this;}
	F_query_control& operator&=(const F_query_control flag_){flag&=flag_.flag; return *this;}
	F_query_control& operator^=(const F_query_control flag_){flag^=flag_.flag;return *this;}
	F_query_control operator~(){return ~flag;}
	bool operator==(const F_query_control flag_){return flag==flag_.flag;}
	bool operator!=(const F_query_control flag_){return !(*this==flag_);}
	F_query_control& clear(){flag = 0;return *this;}
	F_query_control all_flags(){ return b_precise;}
	F_query_control& on_precise(){ flag |= b_precise; return *this; }
	F_query_control& off_precise(){ flag &= ~b_precise; return *this; }
};
inline F_query_control operator&(const F_query_control f1_, const F_query_control f2_){return f1_.flag&f2_.flag;}
inline F_query_control operator&(const F_query_control f1_, const F_query_control::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_query_control operator&(const F_query_control::B f1_, const F_query_control f2_){return uint32_t(f1_)&f2_.flag;}
inline F_query_control operator&(const F_query_control f1_, const VkQueryControlFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_query_control operator&(const VkQueryControlFlagBits f1_, const F_query_control f2_){return uint32_t(f1_)&f2_.flag;}
inline F_query_control operator|(const F_query_control f1_, const F_query_control f2_){return f1_.flag|f2_.flag;}
inline F_query_control operator^(const F_query_control f1_, const F_query_control f2_){return f1_.flag^f2_.flag;}
/*	VkQueryResultFlagBits*/
template<> struct my_class_convert<F_query_result> { using type = VkQueryResultFlagBits;};template<> struct my_class_convert<VkQueryResultFlagBits> { using type = F_query_result;};union F_query_result {
	uint32_t flag;
	VkQueryResultFlagBits vk_flag;
	enum B{
			/* Results of the queries are written to the destination buffer as 64-bit values */
		b_64 = VK_QUERY_RESULT_64_BIT,
			/* Results of the queries are waited on before proceeding with the result copy */
		b_wait = VK_QUERY_RESULT_WAIT_BIT,
			/* Besides the results of the query, the availability of the results is also written */
		b_with_availability = VK_QUERY_RESULT_WITH_AVAILABILITY_BIT,
			/* Copy the partial results of the query even if the final results are not available */
		b_partial = VK_QUERY_RESULT_PARTIAL_BIT,
	};
	F_query_result():flag(0){}
	F_query_result(const uint32_t flag_):flag(flag_){}
	//F_query_result(const B flag_):flag(flag_){}
	//F_query_result(const VkQueryResultFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkQueryResultFlagBits*(){ return reinterpret_cast<VkQueryResultFlagBits*>(this); }
	operator VkQueryResultFlagBits(){return vk_flag;}
	operator VkQueryResultFlags&(){ return flag; }
	F_query_result& operator=(const F_query_result flag_){flag=flag_.flag; return *this;}
	F_query_result& operator|=(const F_query_result flag_){flag|=flag_.flag; return *this;}
	F_query_result& operator&=(const F_query_result flag_){flag&=flag_.flag; return *this;}
	F_query_result& operator^=(const F_query_result flag_){flag^=flag_.flag;return *this;}
	F_query_result operator~(){return ~flag;}
	bool operator==(const F_query_result flag_){return flag==flag_.flag;}
	bool operator!=(const F_query_result flag_){return !(*this==flag_);}
	F_query_result& clear(){flag = 0;return *this;}
	F_query_result all_flags(){ return b_64 | b_wait | b_with_availability | b_partial;}
	F_query_result& on_64(){ flag |= b_64; return *this; }
	F_query_result& off_64(){ flag &= ~b_64; return *this; }
	F_query_result& on_wait(){ flag |= b_wait; return *this; }
	F_query_result& off_wait(){ flag &= ~b_wait; return *this; }
	F_query_result& on_with_availability(){ flag |= b_with_availability; return *this; }
	F_query_result& off_with_availability(){ flag &= ~b_with_availability; return *this; }
	F_query_result& on_partial(){ flag |= b_partial; return *this; }
	F_query_result& off_partial(){ flag &= ~b_partial; return *this; }
};
inline F_query_result operator&(const F_query_result f1_, const F_query_result f2_){return f1_.flag&f2_.flag;}
inline F_query_result operator&(const F_query_result f1_, const F_query_result::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_query_result operator&(const F_query_result::B f1_, const F_query_result f2_){return uint32_t(f1_)&f2_.flag;}
inline F_query_result operator&(const F_query_result f1_, const VkQueryResultFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_query_result operator&(const VkQueryResultFlagBits f1_, const F_query_result f2_){return uint32_t(f1_)&f2_.flag;}
inline F_query_result operator|(const F_query_result f1_, const F_query_result f2_){return f1_.flag|f2_.flag;}
inline F_query_result operator^(const F_query_result f1_, const F_query_result f2_){return f1_.flag^f2_.flag;}
/*	VkCommandBufferUsageFlagBits*/
template<> struct my_class_convert<F_command_buffer_usage> { using type = VkCommandBufferUsageFlagBits;};template<> struct my_class_convert<VkCommandBufferUsageFlagBits> { using type = F_command_buffer_usage;};union F_command_buffer_usage {
	uint32_t flag;
	VkCommandBufferUsageFlagBits vk_flag;
	enum B{
		b_one_time_submit = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,
		b_render_pass_continue = VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT,
			/* Command buffer may be submitted/executed more than once simultaneously */
		b_simultaneous_use = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT,
	};
	F_command_buffer_usage():flag(0){}
	F_command_buffer_usage(const uint32_t flag_):flag(flag_){}
	//F_command_buffer_usage(const B flag_):flag(flag_){}
	//F_command_buffer_usage(const VkCommandBufferUsageFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkCommandBufferUsageFlagBits*(){ return reinterpret_cast<VkCommandBufferUsageFlagBits*>(this); }
	operator VkCommandBufferUsageFlagBits(){return vk_flag;}
	operator VkCommandBufferUsageFlags&(){ return flag; }
	F_command_buffer_usage& operator=(const F_command_buffer_usage flag_){flag=flag_.flag; return *this;}
	F_command_buffer_usage& operator|=(const F_command_buffer_usage flag_){flag|=flag_.flag; return *this;}
	F_command_buffer_usage& operator&=(const F_command_buffer_usage flag_){flag&=flag_.flag; return *this;}
	F_command_buffer_usage& operator^=(const F_command_buffer_usage flag_){flag^=flag_.flag;return *this;}
	F_command_buffer_usage operator~(){return ~flag;}
	bool operator==(const F_command_buffer_usage flag_){return flag==flag_.flag;}
	bool operator!=(const F_command_buffer_usage flag_){return !(*this==flag_);}
	F_command_buffer_usage& clear(){flag = 0;return *this;}
	F_command_buffer_usage all_flags(){ return b_one_time_submit | b_render_pass_continue | b_simultaneous_use;}
	F_command_buffer_usage& on_one_time_submit(){ flag |= b_one_time_submit; return *this; }
	F_command_buffer_usage& off_one_time_submit(){ flag &= ~b_one_time_submit; return *this; }
	F_command_buffer_usage& on_render_pass_continue(){ flag |= b_render_pass_continue; return *this; }
	F_command_buffer_usage& off_render_pass_continue(){ flag &= ~b_render_pass_continue; return *this; }
	F_command_buffer_usage& on_simultaneous_use(){ flag |= b_simultaneous_use; return *this; }
	F_command_buffer_usage& off_simultaneous_use(){ flag &= ~b_simultaneous_use; return *this; }
};
inline F_command_buffer_usage operator&(const F_command_buffer_usage f1_, const F_command_buffer_usage f2_){return f1_.flag&f2_.flag;}
inline F_command_buffer_usage operator&(const F_command_buffer_usage f1_, const F_command_buffer_usage::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_buffer_usage operator&(const F_command_buffer_usage::B f1_, const F_command_buffer_usage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_buffer_usage operator&(const F_command_buffer_usage f1_, const VkCommandBufferUsageFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_buffer_usage operator&(const VkCommandBufferUsageFlagBits f1_, const F_command_buffer_usage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_buffer_usage operator|(const F_command_buffer_usage f1_, const F_command_buffer_usage f2_){return f1_.flag|f2_.flag;}
inline F_command_buffer_usage operator^(const F_command_buffer_usage f1_, const F_command_buffer_usage f2_){return f1_.flag^f2_.flag;}
/*	VkQueryPipelineStatisticFlagBits*/
template<> struct my_class_convert<F_query_pipeline_statistic> { using type = VkQueryPipelineStatisticFlagBits;};template<> struct my_class_convert<VkQueryPipelineStatisticFlagBits> { using type = F_query_pipeline_statistic;};union F_query_pipeline_statistic {
	uint32_t flag;
	VkQueryPipelineStatisticFlagBits vk_flag;
	enum B{
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
	};
	F_query_pipeline_statistic():flag(0){}
	F_query_pipeline_statistic(const uint32_t flag_):flag(flag_){}
	//F_query_pipeline_statistic(const B flag_):flag(flag_){}
	//F_query_pipeline_statistic(const VkQueryPipelineStatisticFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkQueryPipelineStatisticFlagBits*(){ return reinterpret_cast<VkQueryPipelineStatisticFlagBits*>(this); }
	operator VkQueryPipelineStatisticFlagBits(){return vk_flag;}
	operator VkQueryPipelineStatisticFlags&(){ return flag; }
	F_query_pipeline_statistic& operator=(const F_query_pipeline_statistic flag_){flag=flag_.flag; return *this;}
	F_query_pipeline_statistic& operator|=(const F_query_pipeline_statistic flag_){flag|=flag_.flag; return *this;}
	F_query_pipeline_statistic& operator&=(const F_query_pipeline_statistic flag_){flag&=flag_.flag; return *this;}
	F_query_pipeline_statistic& operator^=(const F_query_pipeline_statistic flag_){flag^=flag_.flag;return *this;}
	F_query_pipeline_statistic operator~(){return ~flag;}
	bool operator==(const F_query_pipeline_statistic flag_){return flag==flag_.flag;}
	bool operator!=(const F_query_pipeline_statistic flag_){return !(*this==flag_);}
	F_query_pipeline_statistic& clear(){flag = 0;return *this;}
	F_query_pipeline_statistic all_flags(){ return b_input_assembly_vertices | b_input_assembly_primitives | b_vertex_shader_invocations | b_geometry_shader_invocations | b_geometry_shader_primitives | b_clipping_invocations | b_clipping_primitives | b_fragment_shader_invocations | b_tessellation_control_shader_patches | b_tessellation_evaluation_shader_invocations | b_compute_shader_invocations;}
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
inline F_query_pipeline_statistic operator&(const F_query_pipeline_statistic f1_, const F_query_pipeline_statistic f2_){return f1_.flag&f2_.flag;}
inline F_query_pipeline_statistic operator&(const F_query_pipeline_statistic f1_, const F_query_pipeline_statistic::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_query_pipeline_statistic operator&(const F_query_pipeline_statistic::B f1_, const F_query_pipeline_statistic f2_){return uint32_t(f1_)&f2_.flag;}
inline F_query_pipeline_statistic operator&(const F_query_pipeline_statistic f1_, const VkQueryPipelineStatisticFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_query_pipeline_statistic operator&(const VkQueryPipelineStatisticFlagBits f1_, const F_query_pipeline_statistic f2_){return uint32_t(f1_)&f2_.flag;}
inline F_query_pipeline_statistic operator|(const F_query_pipeline_statistic f1_, const F_query_pipeline_statistic f2_){return f1_.flag|f2_.flag;}
inline F_query_pipeline_statistic operator^(const F_query_pipeline_statistic f1_, const F_query_pipeline_statistic f2_){return f1_.flag^f2_.flag;}
/*	VkImageAspectFlagBits*/
template<> struct my_class_convert<F_image_aspect> { using type = VkImageAspectFlagBits;};template<> struct my_class_convert<VkImageAspectFlagBits> { using type = F_image_aspect;};union F_image_aspect {
	uint32_t flag;
	VkImageAspectFlagBits vk_flag;
	enum B{
		b_color = VK_IMAGE_ASPECT_COLOR_BIT,
		b_depth = VK_IMAGE_ASPECT_DEPTH_BIT,
		b_stencil = VK_IMAGE_ASPECT_STENCIL_BIT,
		b_metadata = VK_IMAGE_ASPECT_METADATA_BIT,
	};
	F_image_aspect():flag(0){}
	F_image_aspect(const uint32_t flag_):flag(flag_){}
	//F_image_aspect(const B flag_):flag(flag_){}
	//F_image_aspect(const VkImageAspectFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkImageAspectFlagBits*(){ return reinterpret_cast<VkImageAspectFlagBits*>(this); }
	operator VkImageAspectFlagBits(){return vk_flag;}
	operator VkImageAspectFlags&(){ return flag; }
	F_image_aspect& operator=(const F_image_aspect flag_){flag=flag_.flag; return *this;}
	F_image_aspect& operator|=(const F_image_aspect flag_){flag|=flag_.flag; return *this;}
	F_image_aspect& operator&=(const F_image_aspect flag_){flag&=flag_.flag; return *this;}
	F_image_aspect& operator^=(const F_image_aspect flag_){flag^=flag_.flag;return *this;}
	F_image_aspect operator~(){return ~flag;}
	bool operator==(const F_image_aspect flag_){return flag==flag_.flag;}
	bool operator!=(const F_image_aspect flag_){return !(*this==flag_);}
	F_image_aspect& clear(){flag = 0;return *this;}
	F_image_aspect all_flags(){ return b_color | b_depth | b_stencil | b_metadata;}
	F_image_aspect& on_color(){ flag |= b_color; return *this; }
	F_image_aspect& off_color(){ flag &= ~b_color; return *this; }
	F_image_aspect& on_depth(){ flag |= b_depth; return *this; }
	F_image_aspect& off_depth(){ flag &= ~b_depth; return *this; }
	F_image_aspect& on_stencil(){ flag |= b_stencil; return *this; }
	F_image_aspect& off_stencil(){ flag &= ~b_stencil; return *this; }
	F_image_aspect& on_metadata(){ flag |= b_metadata; return *this; }
	F_image_aspect& off_metadata(){ flag &= ~b_metadata; return *this; }
};
inline F_image_aspect operator&(const F_image_aspect f1_, const F_image_aspect f2_){return f1_.flag&f2_.flag;}
inline F_image_aspect operator&(const F_image_aspect f1_, const F_image_aspect::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_image_aspect operator&(const F_image_aspect::B f1_, const F_image_aspect f2_){return uint32_t(f1_)&f2_.flag;}
inline F_image_aspect operator&(const F_image_aspect f1_, const VkImageAspectFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_image_aspect operator&(const VkImageAspectFlagBits f1_, const F_image_aspect f2_){return uint32_t(f1_)&f2_.flag;}
inline F_image_aspect operator|(const F_image_aspect f1_, const F_image_aspect f2_){return f1_.flag|f2_.flag;}
inline F_image_aspect operator^(const F_image_aspect f1_, const F_image_aspect f2_){return f1_.flag^f2_.flag;}
/*	VkSparseImageFormatFlagBits*/
template<> struct my_class_convert<F_sparse_image_format> { using type = VkSparseImageFormatFlagBits;};template<> struct my_class_convert<VkSparseImageFormatFlagBits> { using type = F_sparse_image_format;};union F_sparse_image_format {
	uint32_t flag;
	VkSparseImageFormatFlagBits vk_flag;
	enum B{
			/* Image uses a single mip tail region for all array layers */
		b_single_miptail = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT,
			/* Image requires mip level dimensions to be an integer multiple of the sparse image block dimensions for non-tail mip levels. */
		b_aligned_mip_size = VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT,
			/* Image uses a non-standard sparse image block dimensions */
		b_nonstandard_block_size = VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT,
	};
	F_sparse_image_format():flag(0){}
	F_sparse_image_format(const uint32_t flag_):flag(flag_){}
	//F_sparse_image_format(const B flag_):flag(flag_){}
	//F_sparse_image_format(const VkSparseImageFormatFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkSparseImageFormatFlagBits*(){ return reinterpret_cast<VkSparseImageFormatFlagBits*>(this); }
	operator VkSparseImageFormatFlagBits(){return vk_flag;}
	operator VkSparseImageFormatFlags&(){ return flag; }
	F_sparse_image_format& operator=(const F_sparse_image_format flag_){flag=flag_.flag; return *this;}
	F_sparse_image_format& operator|=(const F_sparse_image_format flag_){flag|=flag_.flag; return *this;}
	F_sparse_image_format& operator&=(const F_sparse_image_format flag_){flag&=flag_.flag; return *this;}
	F_sparse_image_format& operator^=(const F_sparse_image_format flag_){flag^=flag_.flag;return *this;}
	F_sparse_image_format operator~(){return ~flag;}
	bool operator==(const F_sparse_image_format flag_){return flag==flag_.flag;}
	bool operator!=(const F_sparse_image_format flag_){return !(*this==flag_);}
	F_sparse_image_format& clear(){flag = 0;return *this;}
	F_sparse_image_format all_flags(){ return b_single_miptail | b_aligned_mip_size | b_nonstandard_block_size;}
	F_sparse_image_format& on_single_miptail(){ flag |= b_single_miptail; return *this; }
	F_sparse_image_format& off_single_miptail(){ flag &= ~b_single_miptail; return *this; }
	F_sparse_image_format& on_aligned_mip_size(){ flag |= b_aligned_mip_size; return *this; }
	F_sparse_image_format& off_aligned_mip_size(){ flag &= ~b_aligned_mip_size; return *this; }
	F_sparse_image_format& on_nonstandard_block_size(){ flag |= b_nonstandard_block_size; return *this; }
	F_sparse_image_format& off_nonstandard_block_size(){ flag &= ~b_nonstandard_block_size; return *this; }
};
inline F_sparse_image_format operator&(const F_sparse_image_format f1_, const F_sparse_image_format f2_){return f1_.flag&f2_.flag;}
inline F_sparse_image_format operator&(const F_sparse_image_format f1_, const F_sparse_image_format::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_sparse_image_format operator&(const F_sparse_image_format::B f1_, const F_sparse_image_format f2_){return uint32_t(f1_)&f2_.flag;}
inline F_sparse_image_format operator&(const F_sparse_image_format f1_, const VkSparseImageFormatFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_sparse_image_format operator&(const VkSparseImageFormatFlagBits f1_, const F_sparse_image_format f2_){return uint32_t(f1_)&f2_.flag;}
inline F_sparse_image_format operator|(const F_sparse_image_format f1_, const F_sparse_image_format f2_){return f1_.flag|f2_.flag;}
inline F_sparse_image_format operator^(const F_sparse_image_format f1_, const F_sparse_image_format f2_){return f1_.flag^f2_.flag;}
/*	VkSparseMemoryBindFlagBits*/
template<> struct my_class_convert<F_sparse_memory_bind> { using type = VkSparseMemoryBindFlagBits;};template<> struct my_class_convert<VkSparseMemoryBindFlagBits> { using type = F_sparse_memory_bind;};union F_sparse_memory_bind {
	uint32_t flag;
	VkSparseMemoryBindFlagBits vk_flag;
	enum B{
			/* Operation binds resource metadata to memory */
		b_metadata = VK_SPARSE_MEMORY_BIND_METADATA_BIT,
	};
	F_sparse_memory_bind():flag(0){}
	F_sparse_memory_bind(const uint32_t flag_):flag(flag_){}
	//F_sparse_memory_bind(const B flag_):flag(flag_){}
	//F_sparse_memory_bind(const VkSparseMemoryBindFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkSparseMemoryBindFlagBits*(){ return reinterpret_cast<VkSparseMemoryBindFlagBits*>(this); }
	operator VkSparseMemoryBindFlagBits(){return vk_flag;}
	operator VkSparseMemoryBindFlags&(){ return flag; }
	F_sparse_memory_bind& operator=(const F_sparse_memory_bind flag_){flag=flag_.flag; return *this;}
	F_sparse_memory_bind& operator|=(const F_sparse_memory_bind flag_){flag|=flag_.flag; return *this;}
	F_sparse_memory_bind& operator&=(const F_sparse_memory_bind flag_){flag&=flag_.flag; return *this;}
	F_sparse_memory_bind& operator^=(const F_sparse_memory_bind flag_){flag^=flag_.flag;return *this;}
	F_sparse_memory_bind operator~(){return ~flag;}
	bool operator==(const F_sparse_memory_bind flag_){return flag==flag_.flag;}
	bool operator!=(const F_sparse_memory_bind flag_){return !(*this==flag_);}
	F_sparse_memory_bind& clear(){flag = 0;return *this;}
	F_sparse_memory_bind all_flags(){ return b_metadata;}
	F_sparse_memory_bind& on_metadata(){ flag |= b_metadata; return *this; }
	F_sparse_memory_bind& off_metadata(){ flag &= ~b_metadata; return *this; }
};
inline F_sparse_memory_bind operator&(const F_sparse_memory_bind f1_, const F_sparse_memory_bind f2_){return f1_.flag&f2_.flag;}
inline F_sparse_memory_bind operator&(const F_sparse_memory_bind f1_, const F_sparse_memory_bind::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_sparse_memory_bind operator&(const F_sparse_memory_bind::B f1_, const F_sparse_memory_bind f2_){return uint32_t(f1_)&f2_.flag;}
inline F_sparse_memory_bind operator&(const F_sparse_memory_bind f1_, const VkSparseMemoryBindFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_sparse_memory_bind operator&(const VkSparseMemoryBindFlagBits f1_, const F_sparse_memory_bind f2_){return uint32_t(f1_)&f2_.flag;}
inline F_sparse_memory_bind operator|(const F_sparse_memory_bind f1_, const F_sparse_memory_bind f2_){return f1_.flag|f2_.flag;}
inline F_sparse_memory_bind operator^(const F_sparse_memory_bind f1_, const F_sparse_memory_bind f2_){return f1_.flag^f2_.flag;}
/*	VkPipelineStageFlagBits*/
template<> struct my_class_convert<F_pipeline_stage> { using type = VkPipelineStageFlagBits;};template<> struct my_class_convert<VkPipelineStageFlagBits> { using type = F_pipeline_stage;};union F_pipeline_stage {
	uint32_t flag;
	VkPipelineStageFlagBits vk_flag;
	enum B{
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
	};
	F_pipeline_stage():flag(0){}
	F_pipeline_stage(const uint32_t flag_):flag(flag_){}
	//F_pipeline_stage(const B flag_):flag(flag_){}
	//F_pipeline_stage(const VkPipelineStageFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkPipelineStageFlagBits*(){ return reinterpret_cast<VkPipelineStageFlagBits*>(this); }
	operator VkPipelineStageFlagBits(){return vk_flag;}
	operator VkPipelineStageFlags&(){ return flag; }
	F_pipeline_stage& operator=(const F_pipeline_stage flag_){flag=flag_.flag; return *this;}
	F_pipeline_stage& operator|=(const F_pipeline_stage flag_){flag|=flag_.flag; return *this;}
	F_pipeline_stage& operator&=(const F_pipeline_stage flag_){flag&=flag_.flag; return *this;}
	F_pipeline_stage& operator^=(const F_pipeline_stage flag_){flag^=flag_.flag;return *this;}
	F_pipeline_stage operator~(){return ~flag;}
	bool operator==(const F_pipeline_stage flag_){return flag==flag_.flag;}
	bool operator!=(const F_pipeline_stage flag_){return !(*this==flag_);}
	F_pipeline_stage& clear(){flag = 0;return *this;}
	F_pipeline_stage all_flags(){ return b_top_of_pipe | b_draw_indirect | b_vertex_input | b_vertex_shader | b_tessellation_control_shader | b_tessellation_evaluation_shader | b_geometry_shader | b_fragment_shader | b_early_fragment_tests | b_late_fragment_tests | b_color_attachment_output | b_compute_shader | b_transfer | b_bottom_of_pipe | b_host | b_all_graphics | b_all_commands;}
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
inline F_pipeline_stage operator&(const F_pipeline_stage f1_, const F_pipeline_stage f2_){return f1_.flag&f2_.flag;}
inline F_pipeline_stage operator&(const F_pipeline_stage f1_, const F_pipeline_stage::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_pipeline_stage operator&(const F_pipeline_stage::B f1_, const F_pipeline_stage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_pipeline_stage operator&(const F_pipeline_stage f1_, const VkPipelineStageFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_pipeline_stage operator&(const VkPipelineStageFlagBits f1_, const F_pipeline_stage f2_){return uint32_t(f1_)&f2_.flag;}
inline F_pipeline_stage operator|(const F_pipeline_stage f1_, const F_pipeline_stage f2_){return f1_.flag|f2_.flag;}
inline F_pipeline_stage operator^(const F_pipeline_stage f1_, const F_pipeline_stage f2_){return f1_.flag^f2_.flag;}
/*	VkCommandPoolCreateFlagBits*/
template<> struct my_class_convert<F_command_pool_create> { using type = VkCommandPoolCreateFlagBits;};template<> struct my_class_convert<VkCommandPoolCreateFlagBits> { using type = F_command_pool_create;};union F_command_pool_create {
	uint32_t flag;
	VkCommandPoolCreateFlagBits vk_flag;
	enum B{
			/* Command buffers have a short lifetime */
		b_transient = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT,
			/* Command buffers may release their memory individually */
		b_reset_command_buffer = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
	};
	F_command_pool_create():flag(0){}
	F_command_pool_create(const uint32_t flag_):flag(flag_){}
	//F_command_pool_create(const B flag_):flag(flag_){}
	//F_command_pool_create(const VkCommandPoolCreateFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkCommandPoolCreateFlagBits*(){ return reinterpret_cast<VkCommandPoolCreateFlagBits*>(this); }
	operator VkCommandPoolCreateFlagBits(){return vk_flag;}
	operator VkCommandPoolCreateFlags&(){ return flag; }
	F_command_pool_create& operator=(const F_command_pool_create flag_){flag=flag_.flag; return *this;}
	F_command_pool_create& operator|=(const F_command_pool_create flag_){flag|=flag_.flag; return *this;}
	F_command_pool_create& operator&=(const F_command_pool_create flag_){flag&=flag_.flag; return *this;}
	F_command_pool_create& operator^=(const F_command_pool_create flag_){flag^=flag_.flag;return *this;}
	F_command_pool_create operator~(){return ~flag;}
	bool operator==(const F_command_pool_create flag_){return flag==flag_.flag;}
	bool operator!=(const F_command_pool_create flag_){return !(*this==flag_);}
	F_command_pool_create& clear(){flag = 0;return *this;}
	F_command_pool_create all_flags(){ return b_transient | b_reset_command_buffer;}
	F_command_pool_create& on_transient(){ flag |= b_transient; return *this; }
	F_command_pool_create& off_transient(){ flag &= ~b_transient; return *this; }
	F_command_pool_create& on_reset_command_buffer(){ flag |= b_reset_command_buffer; return *this; }
	F_command_pool_create& off_reset_command_buffer(){ flag &= ~b_reset_command_buffer; return *this; }
};
inline F_command_pool_create operator&(const F_command_pool_create f1_, const F_command_pool_create f2_){return f1_.flag&f2_.flag;}
inline F_command_pool_create operator&(const F_command_pool_create f1_, const F_command_pool_create::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_pool_create operator&(const F_command_pool_create::B f1_, const F_command_pool_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_pool_create operator&(const F_command_pool_create f1_, const VkCommandPoolCreateFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_pool_create operator&(const VkCommandPoolCreateFlagBits f1_, const F_command_pool_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_pool_create operator|(const F_command_pool_create f1_, const F_command_pool_create f2_){return f1_.flag|f2_.flag;}
inline F_command_pool_create operator^(const F_command_pool_create f1_, const F_command_pool_create f2_){return f1_.flag^f2_.flag;}
/*	VkCommandPoolResetFlagBits*/
template<> struct my_class_convert<F_command_pool_reset> { using type = VkCommandPoolResetFlagBits;};template<> struct my_class_convert<VkCommandPoolResetFlagBits> { using type = F_command_pool_reset;};union F_command_pool_reset {
	uint32_t flag;
	VkCommandPoolResetFlagBits vk_flag;
	enum B{
			/* Release resources owned by the pool */
		b_release_resources = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT,
	};
	F_command_pool_reset():flag(0){}
	F_command_pool_reset(const uint32_t flag_):flag(flag_){}
	//F_command_pool_reset(const B flag_):flag(flag_){}
	//F_command_pool_reset(const VkCommandPoolResetFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkCommandPoolResetFlagBits*(){ return reinterpret_cast<VkCommandPoolResetFlagBits*>(this); }
	operator VkCommandPoolResetFlagBits(){return vk_flag;}
	operator VkCommandPoolResetFlags&(){ return flag; }
	F_command_pool_reset& operator=(const F_command_pool_reset flag_){flag=flag_.flag; return *this;}
	F_command_pool_reset& operator|=(const F_command_pool_reset flag_){flag|=flag_.flag; return *this;}
	F_command_pool_reset& operator&=(const F_command_pool_reset flag_){flag&=flag_.flag; return *this;}
	F_command_pool_reset& operator^=(const F_command_pool_reset flag_){flag^=flag_.flag;return *this;}
	F_command_pool_reset operator~(){return ~flag;}
	bool operator==(const F_command_pool_reset flag_){return flag==flag_.flag;}
	bool operator!=(const F_command_pool_reset flag_){return !(*this==flag_);}
	F_command_pool_reset& clear(){flag = 0;return *this;}
	F_command_pool_reset all_flags(){ return b_release_resources;}
	F_command_pool_reset& on_release_resources(){ flag |= b_release_resources; return *this; }
	F_command_pool_reset& off_release_resources(){ flag &= ~b_release_resources; return *this; }
};
inline F_command_pool_reset operator&(const F_command_pool_reset f1_, const F_command_pool_reset f2_){return f1_.flag&f2_.flag;}
inline F_command_pool_reset operator&(const F_command_pool_reset f1_, const F_command_pool_reset::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_pool_reset operator&(const F_command_pool_reset::B f1_, const F_command_pool_reset f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_pool_reset operator&(const F_command_pool_reset f1_, const VkCommandPoolResetFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_pool_reset operator&(const VkCommandPoolResetFlagBits f1_, const F_command_pool_reset f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_pool_reset operator|(const F_command_pool_reset f1_, const F_command_pool_reset f2_){return f1_.flag|f2_.flag;}
inline F_command_pool_reset operator^(const F_command_pool_reset f1_, const F_command_pool_reset f2_){return f1_.flag^f2_.flag;}
/*	VkCommandBufferResetFlagBits*/
template<> struct my_class_convert<F_command_buffer_reset> { using type = VkCommandBufferResetFlagBits;};template<> struct my_class_convert<VkCommandBufferResetFlagBits> { using type = F_command_buffer_reset;};union F_command_buffer_reset {
	uint32_t flag;
	VkCommandBufferResetFlagBits vk_flag;
	enum B{
			/* Release resources owned by the buffer */
		b_release_resources = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT,
	};
	F_command_buffer_reset():flag(0){}
	F_command_buffer_reset(const uint32_t flag_):flag(flag_){}
	//F_command_buffer_reset(const B flag_):flag(flag_){}
	//F_command_buffer_reset(const VkCommandBufferResetFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkCommandBufferResetFlagBits*(){ return reinterpret_cast<VkCommandBufferResetFlagBits*>(this); }
	operator VkCommandBufferResetFlagBits(){return vk_flag;}
	operator VkCommandBufferResetFlags&(){ return flag; }
	F_command_buffer_reset& operator=(const F_command_buffer_reset flag_){flag=flag_.flag; return *this;}
	F_command_buffer_reset& operator|=(const F_command_buffer_reset flag_){flag|=flag_.flag; return *this;}
	F_command_buffer_reset& operator&=(const F_command_buffer_reset flag_){flag&=flag_.flag; return *this;}
	F_command_buffer_reset& operator^=(const F_command_buffer_reset flag_){flag^=flag_.flag;return *this;}
	F_command_buffer_reset operator~(){return ~flag;}
	bool operator==(const F_command_buffer_reset flag_){return flag==flag_.flag;}
	bool operator!=(const F_command_buffer_reset flag_){return !(*this==flag_);}
	F_command_buffer_reset& clear(){flag = 0;return *this;}
	F_command_buffer_reset all_flags(){ return b_release_resources;}
	F_command_buffer_reset& on_release_resources(){ flag |= b_release_resources; return *this; }
	F_command_buffer_reset& off_release_resources(){ flag &= ~b_release_resources; return *this; }
};
inline F_command_buffer_reset operator&(const F_command_buffer_reset f1_, const F_command_buffer_reset f2_){return f1_.flag&f2_.flag;}
inline F_command_buffer_reset operator&(const F_command_buffer_reset f1_, const F_command_buffer_reset::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_buffer_reset operator&(const F_command_buffer_reset::B f1_, const F_command_buffer_reset f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_buffer_reset operator&(const F_command_buffer_reset f1_, const VkCommandBufferResetFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_command_buffer_reset operator&(const VkCommandBufferResetFlagBits f1_, const F_command_buffer_reset f2_){return uint32_t(f1_)&f2_.flag;}
inline F_command_buffer_reset operator|(const F_command_buffer_reset f1_, const F_command_buffer_reset f2_){return f1_.flag|f2_.flag;}
inline F_command_buffer_reset operator^(const F_command_buffer_reset f1_, const F_command_buffer_reset f2_){return f1_.flag^f2_.flag;}
/*	VkSampleCountFlagBits*/
template<> struct my_class_convert<F_sample_count> { using type = VkSampleCountFlagBits;};template<> struct my_class_convert<VkSampleCountFlagBits> { using type = F_sample_count;};union F_sample_count {
	uint32_t flag;
	VkSampleCountFlagBits vk_flag;
	enum B{
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
	};
	F_sample_count():flag(0){}
	F_sample_count(const uint32_t flag_):flag(flag_){}
	//F_sample_count(const B flag_):flag(flag_){}
	//F_sample_count(const VkSampleCountFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkSampleCountFlagBits*(){ return reinterpret_cast<VkSampleCountFlagBits*>(this); }
	operator VkSampleCountFlagBits(){return vk_flag;}
	operator VkSampleCountFlags&(){ return flag; }
	F_sample_count& operator=(const F_sample_count flag_){flag=flag_.flag; return *this;}
	F_sample_count& operator|=(const F_sample_count flag_){flag|=flag_.flag; return *this;}
	F_sample_count& operator&=(const F_sample_count flag_){flag&=flag_.flag; return *this;}
	F_sample_count& operator^=(const F_sample_count flag_){flag^=flag_.flag;return *this;}
	F_sample_count operator~(){return ~flag;}
	bool operator==(const F_sample_count flag_){return flag==flag_.flag;}
	bool operator!=(const F_sample_count flag_){return !(*this==flag_);}
	F_sample_count& clear(){flag = 0;return *this;}
	F_sample_count all_flags(){ return b_1 | b_2 | b_4 | b_8 | b_16 | b_32 | b_64;}
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
inline F_sample_count operator&(const F_sample_count f1_, const F_sample_count f2_){return f1_.flag&f2_.flag;}
inline F_sample_count operator&(const F_sample_count f1_, const F_sample_count::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_sample_count operator&(const F_sample_count::B f1_, const F_sample_count f2_){return uint32_t(f1_)&f2_.flag;}
inline F_sample_count operator&(const F_sample_count f1_, const VkSampleCountFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_sample_count operator&(const VkSampleCountFlagBits f1_, const F_sample_count f2_){return uint32_t(f1_)&f2_.flag;}
inline F_sample_count operator|(const F_sample_count f1_, const F_sample_count f2_){return f1_.flag|f2_.flag;}
inline F_sample_count operator^(const F_sample_count f1_, const F_sample_count f2_){return f1_.flag^f2_.flag;}
/*	VkAttachmentDescriptionFlagBits*/
template<> struct my_class_convert<F_attachment_description> { using type = VkAttachmentDescriptionFlagBits;};template<> struct my_class_convert<VkAttachmentDescriptionFlagBits> { using type = F_attachment_description;};union F_attachment_description {
	uint32_t flag;
	VkAttachmentDescriptionFlagBits vk_flag;
	enum B{
			/* The attachment may alias physical memory of another attachment in the same render pass */
		b_may_alias = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT,
	};
	F_attachment_description():flag(0){}
	F_attachment_description(const uint32_t flag_):flag(flag_){}
	//F_attachment_description(const B flag_):flag(flag_){}
	//F_attachment_description(const VkAttachmentDescriptionFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkAttachmentDescriptionFlagBits*(){ return reinterpret_cast<VkAttachmentDescriptionFlagBits*>(this); }
	operator VkAttachmentDescriptionFlagBits(){return vk_flag;}
	operator VkAttachmentDescriptionFlags&(){ return flag; }
	F_attachment_description& operator=(const F_attachment_description flag_){flag=flag_.flag; return *this;}
	F_attachment_description& operator|=(const F_attachment_description flag_){flag|=flag_.flag; return *this;}
	F_attachment_description& operator&=(const F_attachment_description flag_){flag&=flag_.flag; return *this;}
	F_attachment_description& operator^=(const F_attachment_description flag_){flag^=flag_.flag;return *this;}
	F_attachment_description operator~(){return ~flag;}
	bool operator==(const F_attachment_description flag_){return flag==flag_.flag;}
	bool operator!=(const F_attachment_description flag_){return !(*this==flag_);}
	F_attachment_description& clear(){flag = 0;return *this;}
	F_attachment_description all_flags(){ return b_may_alias;}
	F_attachment_description& on_may_alias(){ flag |= b_may_alias; return *this; }
	F_attachment_description& off_may_alias(){ flag &= ~b_may_alias; return *this; }
};
inline F_attachment_description operator&(const F_attachment_description f1_, const F_attachment_description f2_){return f1_.flag&f2_.flag;}
inline F_attachment_description operator&(const F_attachment_description f1_, const F_attachment_description::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_attachment_description operator&(const F_attachment_description::B f1_, const F_attachment_description f2_){return uint32_t(f1_)&f2_.flag;}
inline F_attachment_description operator&(const F_attachment_description f1_, const VkAttachmentDescriptionFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_attachment_description operator&(const VkAttachmentDescriptionFlagBits f1_, const F_attachment_description f2_){return uint32_t(f1_)&f2_.flag;}
inline F_attachment_description operator|(const F_attachment_description f1_, const F_attachment_description f2_){return f1_.flag|f2_.flag;}
inline F_attachment_description operator^(const F_attachment_description f1_, const F_attachment_description f2_){return f1_.flag^f2_.flag;}
/*	VkStencilFaceFlagBits*/
template<> struct my_class_convert<F_stencil_face> { using type = VkStencilFaceFlagBits;};template<> struct my_class_convert<VkStencilFaceFlagBits> { using type = F_stencil_face;};union F_stencil_face {
	uint32_t flag;
	VkStencilFaceFlagBits vk_flag;
	enum B{
			/* Front face */
		b_front = VK_STENCIL_FACE_FRONT_BIT,
			/* Back face */
		b_back = VK_STENCIL_FACE_BACK_BIT,
			/* Front and back faces */
		b_vk_stencil_front_and_back = VK_STENCIL_FRONT_AND_BACK,
	};
	F_stencil_face():flag(0){}
	F_stencil_face(const uint32_t flag_):flag(flag_){}
	//F_stencil_face(const B flag_):flag(flag_){}
	//F_stencil_face(const VkStencilFaceFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkStencilFaceFlagBits*(){ return reinterpret_cast<VkStencilFaceFlagBits*>(this); }
	operator VkStencilFaceFlagBits(){return vk_flag;}
	operator VkStencilFaceFlags&(){ return flag; }
	F_stencil_face& operator=(const F_stencil_face flag_){flag=flag_.flag; return *this;}
	F_stencil_face& operator|=(const F_stencil_face flag_){flag|=flag_.flag; return *this;}
	F_stencil_face& operator&=(const F_stencil_face flag_){flag&=flag_.flag; return *this;}
	F_stencil_face& operator^=(const F_stencil_face flag_){flag^=flag_.flag;return *this;}
	F_stencil_face operator~(){return ~flag;}
	bool operator==(const F_stencil_face flag_){return flag==flag_.flag;}
	bool operator!=(const F_stencil_face flag_){return !(*this==flag_);}
	F_stencil_face& clear(){flag = 0;return *this;}
	F_stencil_face all_flags(){ return b_front | b_back | b_vk_stencil_front_and_back;}
	F_stencil_face& on_front(){ flag |= b_front; return *this; }
	F_stencil_face& off_front(){ flag &= ~b_front; return *this; }
	F_stencil_face& on_back(){ flag |= b_back; return *this; }
	F_stencil_face& off_back(){ flag &= ~b_back; return *this; }
	F_stencil_face& on_vk_stencil_front_and_back(){ flag |= b_vk_stencil_front_and_back; return *this; }
	F_stencil_face& off_vk_stencil_front_and_back(){ flag &= ~b_vk_stencil_front_and_back; return *this; }
};
inline F_stencil_face operator&(const F_stencil_face f1_, const F_stencil_face f2_){return f1_.flag&f2_.flag;}
inline F_stencil_face operator&(const F_stencil_face f1_, const F_stencil_face::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_stencil_face operator&(const F_stencil_face::B f1_, const F_stencil_face f2_){return uint32_t(f1_)&f2_.flag;}
inline F_stencil_face operator&(const F_stencil_face f1_, const VkStencilFaceFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_stencil_face operator&(const VkStencilFaceFlagBits f1_, const F_stencil_face f2_){return uint32_t(f1_)&f2_.flag;}
inline F_stencil_face operator|(const F_stencil_face f1_, const F_stencil_face f2_){return f1_.flag|f2_.flag;}
inline F_stencil_face operator^(const F_stencil_face f1_, const F_stencil_face f2_){return f1_.flag^f2_.flag;}
/*	VkDescriptorPoolCreateFlagBits*/
template<> struct my_class_convert<F_descriptor_pool_create> { using type = VkDescriptorPoolCreateFlagBits;};template<> struct my_class_convert<VkDescriptorPoolCreateFlagBits> { using type = F_descriptor_pool_create;};union F_descriptor_pool_create {
	uint32_t flag;
	VkDescriptorPoolCreateFlagBits vk_flag;
	enum B{
			/* Descriptor sets may be freed individually */
		b_free_descriptor_set = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT,
	};
	F_descriptor_pool_create():flag(0){}
	F_descriptor_pool_create(const uint32_t flag_):flag(flag_){}
	//F_descriptor_pool_create(const B flag_):flag(flag_){}
	//F_descriptor_pool_create(const VkDescriptorPoolCreateFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDescriptorPoolCreateFlagBits*(){ return reinterpret_cast<VkDescriptorPoolCreateFlagBits*>(this); }
	operator VkDescriptorPoolCreateFlagBits(){return vk_flag;}
	operator VkDescriptorPoolCreateFlags&(){ return flag; }
	F_descriptor_pool_create& operator=(const F_descriptor_pool_create flag_){flag=flag_.flag; return *this;}
	F_descriptor_pool_create& operator|=(const F_descriptor_pool_create flag_){flag|=flag_.flag; return *this;}
	F_descriptor_pool_create& operator&=(const F_descriptor_pool_create flag_){flag&=flag_.flag; return *this;}
	F_descriptor_pool_create& operator^=(const F_descriptor_pool_create flag_){flag^=flag_.flag;return *this;}
	F_descriptor_pool_create operator~(){return ~flag;}
	bool operator==(const F_descriptor_pool_create flag_){return flag==flag_.flag;}
	bool operator!=(const F_descriptor_pool_create flag_){return !(*this==flag_);}
	F_descriptor_pool_create& clear(){flag = 0;return *this;}
	F_descriptor_pool_create all_flags(){ return b_free_descriptor_set;}
	F_descriptor_pool_create& on_free_descriptor_set(){ flag |= b_free_descriptor_set; return *this; }
	F_descriptor_pool_create& off_free_descriptor_set(){ flag &= ~b_free_descriptor_set; return *this; }
};
inline F_descriptor_pool_create operator&(const F_descriptor_pool_create f1_, const F_descriptor_pool_create f2_){return f1_.flag&f2_.flag;}
inline F_descriptor_pool_create operator&(const F_descriptor_pool_create f1_, const F_descriptor_pool_create::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_descriptor_pool_create operator&(const F_descriptor_pool_create::B f1_, const F_descriptor_pool_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_descriptor_pool_create operator&(const F_descriptor_pool_create f1_, const VkDescriptorPoolCreateFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_descriptor_pool_create operator&(const VkDescriptorPoolCreateFlagBits f1_, const F_descriptor_pool_create f2_){return uint32_t(f1_)&f2_.flag;}
inline F_descriptor_pool_create operator|(const F_descriptor_pool_create f1_, const F_descriptor_pool_create f2_){return f1_.flag|f2_.flag;}
inline F_descriptor_pool_create operator^(const F_descriptor_pool_create f1_, const F_descriptor_pool_create f2_){return f1_.flag^f2_.flag;}
/*	VkDependencyFlagBits*/
template<> struct my_class_convert<F_dependency> { using type = VkDependencyFlagBits;};template<> struct my_class_convert<VkDependencyFlagBits> { using type = F_dependency;};union F_dependency {
	uint32_t flag;
	VkDependencyFlagBits vk_flag;
	enum B{
			/* Dependency is per pixel region  */
		b_by_region = VK_DEPENDENCY_BY_REGION_BIT,
	};
	F_dependency():flag(0){}
	F_dependency(const uint32_t flag_):flag(flag_){}
	//F_dependency(const B flag_):flag(flag_){}
	//F_dependency(const VkDependencyFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDependencyFlagBits*(){ return reinterpret_cast<VkDependencyFlagBits*>(this); }
	operator VkDependencyFlagBits(){return vk_flag;}
	operator VkDependencyFlags&(){ return flag; }
	F_dependency& operator=(const F_dependency flag_){flag=flag_.flag; return *this;}
	F_dependency& operator|=(const F_dependency flag_){flag|=flag_.flag; return *this;}
	F_dependency& operator&=(const F_dependency flag_){flag&=flag_.flag; return *this;}
	F_dependency& operator^=(const F_dependency flag_){flag^=flag_.flag;return *this;}
	F_dependency operator~(){return ~flag;}
	bool operator==(const F_dependency flag_){return flag==flag_.flag;}
	bool operator!=(const F_dependency flag_){return !(*this==flag_);}
	F_dependency& clear(){flag = 0;return *this;}
	F_dependency all_flags(){ return b_by_region;}
	F_dependency& on_by_region(){ flag |= b_by_region; return *this; }
	F_dependency& off_by_region(){ flag &= ~b_by_region; return *this; }
};
inline F_dependency operator&(const F_dependency f1_, const F_dependency f2_){return f1_.flag&f2_.flag;}
inline F_dependency operator&(const F_dependency f1_, const F_dependency::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_dependency operator&(const F_dependency::B f1_, const F_dependency f2_){return uint32_t(f1_)&f2_.flag;}
inline F_dependency operator&(const F_dependency f1_, const VkDependencyFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_dependency operator&(const VkDependencyFlagBits f1_, const F_dependency f2_){return uint32_t(f1_)&f2_.flag;}
inline F_dependency operator|(const F_dependency f1_, const F_dependency f2_){return f1_.flag|f2_.flag;}
inline F_dependency operator^(const F_dependency f1_, const F_dependency f2_){return f1_.flag^f2_.flag;}
/*	VkDisplayPlaneAlphaFlagBitsKHR*/
template<> struct my_class_convert<F_display_plane_alpha_KHR> { using type = VkDisplayPlaneAlphaFlagBitsKHR;};template<> struct my_class_convert<VkDisplayPlaneAlphaFlagBitsKHR> { using type = F_display_plane_alpha_KHR;};union F_display_plane_alpha_KHR {
	uint32_t flag;
	VkDisplayPlaneAlphaFlagBitsKHR vk_flag;
	enum B{
		b_opaque_khr = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR,
		b_global_khr = VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,
		b_per_pixel_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR,
		b_per_pixel_premultiplied_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR,
	};
	F_display_plane_alpha_KHR():flag(0){}
	F_display_plane_alpha_KHR(const uint32_t flag_):flag(flag_){}
	//F_display_plane_alpha_KHR(const B flag_):flag(flag_){}
	//F_display_plane_alpha_KHR(const VkDisplayPlaneAlphaFlagBitsKHR flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDisplayPlaneAlphaFlagBitsKHR*(){ return reinterpret_cast<VkDisplayPlaneAlphaFlagBitsKHR*>(this); }
	operator VkDisplayPlaneAlphaFlagBitsKHR(){return vk_flag;}
	operator VkDisplayPlaneAlphaFlagsKHR&(){ return flag; }
	F_display_plane_alpha_KHR& operator=(const F_display_plane_alpha_KHR flag_){flag=flag_.flag; return *this;}
	F_display_plane_alpha_KHR& operator|=(const F_display_plane_alpha_KHR flag_){flag|=flag_.flag; return *this;}
	F_display_plane_alpha_KHR& operator&=(const F_display_plane_alpha_KHR flag_){flag&=flag_.flag; return *this;}
	F_display_plane_alpha_KHR& operator^=(const F_display_plane_alpha_KHR flag_){flag^=flag_.flag;return *this;}
	F_display_plane_alpha_KHR operator~(){return ~flag;}
	bool operator==(const F_display_plane_alpha_KHR flag_){return flag==flag_.flag;}
	bool operator!=(const F_display_plane_alpha_KHR flag_){return !(*this==flag_);}
	F_display_plane_alpha_KHR& clear(){flag = 0;return *this;}
	F_display_plane_alpha_KHR all_flags(){ return b_opaque_khr | b_global_khr | b_per_pixel_khr | b_per_pixel_premultiplied_khr;}
	F_display_plane_alpha_KHR& on_opaque_khr(){ flag |= b_opaque_khr; return *this; }
	F_display_plane_alpha_KHR& off_opaque_khr(){ flag &= ~b_opaque_khr; return *this; }
	F_display_plane_alpha_KHR& on_global_khr(){ flag |= b_global_khr; return *this; }
	F_display_plane_alpha_KHR& off_global_khr(){ flag &= ~b_global_khr; return *this; }
	F_display_plane_alpha_KHR& on_per_pixel_khr(){ flag |= b_per_pixel_khr; return *this; }
	F_display_plane_alpha_KHR& off_per_pixel_khr(){ flag &= ~b_per_pixel_khr; return *this; }
	F_display_plane_alpha_KHR& on_per_pixel_premultiplied_khr(){ flag |= b_per_pixel_premultiplied_khr; return *this; }
	F_display_plane_alpha_KHR& off_per_pixel_premultiplied_khr(){ flag &= ~b_per_pixel_premultiplied_khr; return *this; }
};
inline F_display_plane_alpha_KHR operator&(const F_display_plane_alpha_KHR f1_, const F_display_plane_alpha_KHR f2_){return f1_.flag&f2_.flag;}
inline F_display_plane_alpha_KHR operator&(const F_display_plane_alpha_KHR f1_, const F_display_plane_alpha_KHR::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_display_plane_alpha_KHR operator&(const F_display_plane_alpha_KHR::B f1_, const F_display_plane_alpha_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_display_plane_alpha_KHR operator&(const F_display_plane_alpha_KHR f1_, const VkDisplayPlaneAlphaFlagBitsKHR f2_){return f1_.flag&uint32_t(f2_);}
inline F_display_plane_alpha_KHR operator&(const VkDisplayPlaneAlphaFlagBitsKHR f1_, const F_display_plane_alpha_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_display_plane_alpha_KHR operator|(const F_display_plane_alpha_KHR f1_, const F_display_plane_alpha_KHR f2_){return f1_.flag|f2_.flag;}
inline F_display_plane_alpha_KHR operator^(const F_display_plane_alpha_KHR f1_, const F_display_plane_alpha_KHR f2_){return f1_.flag^f2_.flag;}
/*	VkCompositeAlphaFlagBitsKHR*/
template<> struct my_class_convert<F_composite_alpha_KHR> { using type = VkCompositeAlphaFlagBitsKHR;};template<> struct my_class_convert<VkCompositeAlphaFlagBitsKHR> { using type = F_composite_alpha_KHR;};union F_composite_alpha_KHR {
	uint32_t flag;
	VkCompositeAlphaFlagBitsKHR vk_flag;
	enum B{
		b_opaque_khr = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
		b_pre_multiplied_khr = VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
		b_post_multiplied_khr = VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
		b_inherit_khr = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
	};
	F_composite_alpha_KHR():flag(0){}
	F_composite_alpha_KHR(const uint32_t flag_):flag(flag_){}
	//F_composite_alpha_KHR(const B flag_):flag(flag_){}
	//F_composite_alpha_KHR(const VkCompositeAlphaFlagBitsKHR flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkCompositeAlphaFlagBitsKHR*(){ return reinterpret_cast<VkCompositeAlphaFlagBitsKHR*>(this); }
	operator VkCompositeAlphaFlagBitsKHR(){return vk_flag;}
	operator VkCompositeAlphaFlagsKHR&(){ return flag; }
	F_composite_alpha_KHR& operator=(const F_composite_alpha_KHR flag_){flag=flag_.flag; return *this;}
	F_composite_alpha_KHR& operator|=(const F_composite_alpha_KHR flag_){flag|=flag_.flag; return *this;}
	F_composite_alpha_KHR& operator&=(const F_composite_alpha_KHR flag_){flag&=flag_.flag; return *this;}
	F_composite_alpha_KHR& operator^=(const F_composite_alpha_KHR flag_){flag^=flag_.flag;return *this;}
	F_composite_alpha_KHR operator~(){return ~flag;}
	bool operator==(const F_composite_alpha_KHR flag_){return flag==flag_.flag;}
	bool operator!=(const F_composite_alpha_KHR flag_){return !(*this==flag_);}
	F_composite_alpha_KHR& clear(){flag = 0;return *this;}
	F_composite_alpha_KHR all_flags(){ return b_opaque_khr | b_pre_multiplied_khr | b_post_multiplied_khr | b_inherit_khr;}
	F_composite_alpha_KHR& on_opaque_khr(){ flag |= b_opaque_khr; return *this; }
	F_composite_alpha_KHR& off_opaque_khr(){ flag &= ~b_opaque_khr; return *this; }
	F_composite_alpha_KHR& on_pre_multiplied_khr(){ flag |= b_pre_multiplied_khr; return *this; }
	F_composite_alpha_KHR& off_pre_multiplied_khr(){ flag &= ~b_pre_multiplied_khr; return *this; }
	F_composite_alpha_KHR& on_post_multiplied_khr(){ flag |= b_post_multiplied_khr; return *this; }
	F_composite_alpha_KHR& off_post_multiplied_khr(){ flag &= ~b_post_multiplied_khr; return *this; }
	F_composite_alpha_KHR& on_inherit_khr(){ flag |= b_inherit_khr; return *this; }
	F_composite_alpha_KHR& off_inherit_khr(){ flag &= ~b_inherit_khr; return *this; }
};
inline F_composite_alpha_KHR operator&(const F_composite_alpha_KHR f1_, const F_composite_alpha_KHR f2_){return f1_.flag&f2_.flag;}
inline F_composite_alpha_KHR operator&(const F_composite_alpha_KHR f1_, const F_composite_alpha_KHR::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_composite_alpha_KHR operator&(const F_composite_alpha_KHR::B f1_, const F_composite_alpha_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_composite_alpha_KHR operator&(const F_composite_alpha_KHR f1_, const VkCompositeAlphaFlagBitsKHR f2_){return f1_.flag&uint32_t(f2_);}
inline F_composite_alpha_KHR operator&(const VkCompositeAlphaFlagBitsKHR f1_, const F_composite_alpha_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_composite_alpha_KHR operator|(const F_composite_alpha_KHR f1_, const F_composite_alpha_KHR f2_){return f1_.flag|f2_.flag;}
inline F_composite_alpha_KHR operator^(const F_composite_alpha_KHR f1_, const F_composite_alpha_KHR f2_){return f1_.flag^f2_.flag;}
/*	VkSurfaceTransformFlagBitsKHR*/
template<> struct my_class_convert<F_surface_transform_KHR> { using type = VkSurfaceTransformFlagBitsKHR;};template<> struct my_class_convert<VkSurfaceTransformFlagBitsKHR> { using type = F_surface_transform_KHR;};union F_surface_transform_KHR {
	uint32_t flag;
	VkSurfaceTransformFlagBitsKHR vk_flag;
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
	F_surface_transform_KHR(const uint32_t flag_):flag(flag_){}
	//F_surface_transform_KHR(const B flag_):flag(flag_){}
	//F_surface_transform_KHR(const VkSurfaceTransformFlagBitsKHR flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkSurfaceTransformFlagBitsKHR*(){ return reinterpret_cast<VkSurfaceTransformFlagBitsKHR*>(this); }
	operator VkSurfaceTransformFlagBitsKHR(){return vk_flag;}
	operator VkSurfaceTransformFlagsKHR&(){ return flag; }
	F_surface_transform_KHR& operator=(const F_surface_transform_KHR flag_){flag=flag_.flag; return *this;}
	F_surface_transform_KHR& operator|=(const F_surface_transform_KHR flag_){flag|=flag_.flag; return *this;}
	F_surface_transform_KHR& operator&=(const F_surface_transform_KHR flag_){flag&=flag_.flag; return *this;}
	F_surface_transform_KHR& operator^=(const F_surface_transform_KHR flag_){flag^=flag_.flag;return *this;}
	F_surface_transform_KHR operator~(){return ~flag;}
	bool operator==(const F_surface_transform_KHR flag_){return flag==flag_.flag;}
	bool operator!=(const F_surface_transform_KHR flag_){return !(*this==flag_);}
	F_surface_transform_KHR& clear(){flag = 0;return *this;}
	F_surface_transform_KHR all_flags(){ return b_identity_khr | b_rotate_90_khr | b_rotate_180_khr | b_rotate_270_khr | b_horizontal_mirror_khr | b_horizontal_mirror_rotate_90_khr | b_horizontal_mirror_rotate_180_khr | b_horizontal_mirror_rotate_270_khr | b_inherit_khr;}
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
inline F_surface_transform_KHR operator&(const F_surface_transform_KHR f1_, const F_surface_transform_KHR f2_){return f1_.flag&f2_.flag;}
inline F_surface_transform_KHR operator&(const F_surface_transform_KHR f1_, const F_surface_transform_KHR::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_surface_transform_KHR operator&(const F_surface_transform_KHR::B f1_, const F_surface_transform_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_surface_transform_KHR operator&(const F_surface_transform_KHR f1_, const VkSurfaceTransformFlagBitsKHR f2_){return f1_.flag&uint32_t(f2_);}
inline F_surface_transform_KHR operator&(const VkSurfaceTransformFlagBitsKHR f1_, const F_surface_transform_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_surface_transform_KHR operator|(const F_surface_transform_KHR f1_, const F_surface_transform_KHR f2_){return f1_.flag|f2_.flag;}
inline F_surface_transform_KHR operator^(const F_surface_transform_KHR f1_, const F_surface_transform_KHR f2_){return f1_.flag^f2_.flag;}
/*	VkDebugReportFlagBitsEXT*/
template<> struct my_class_convert<F_debug_report_EXT> { using type = VkDebugReportFlagBitsEXT;};template<> struct my_class_convert<VkDebugReportFlagBitsEXT> { using type = F_debug_report_EXT;};union F_debug_report_EXT {
	uint32_t flag;
	VkDebugReportFlagBitsEXT vk_flag;
	enum B{
		b_information_ext = VK_DEBUG_REPORT_INFORMATION_BIT_EXT,
		b_warning_ext = VK_DEBUG_REPORT_WARNING_BIT_EXT,
		b_performance_warning_ext = VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT,
		b_error_ext = VK_DEBUG_REPORT_ERROR_BIT_EXT,
		b_debug_ext = VK_DEBUG_REPORT_DEBUG_BIT_EXT,
	};
	F_debug_report_EXT():flag(0){}
	F_debug_report_EXT(const uint32_t flag_):flag(flag_){}
	//F_debug_report_EXT(const B flag_):flag(flag_){}
	//F_debug_report_EXT(const VkDebugReportFlagBitsEXT flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDebugReportFlagBitsEXT*(){ return reinterpret_cast<VkDebugReportFlagBitsEXT*>(this); }
	operator VkDebugReportFlagBitsEXT(){return vk_flag;}
	operator VkDebugReportFlagsEXT&(){ return flag; }
	F_debug_report_EXT& operator=(const F_debug_report_EXT flag_){flag=flag_.flag; return *this;}
	F_debug_report_EXT& operator|=(const F_debug_report_EXT flag_){flag|=flag_.flag; return *this;}
	F_debug_report_EXT& operator&=(const F_debug_report_EXT flag_){flag&=flag_.flag; return *this;}
	F_debug_report_EXT& operator^=(const F_debug_report_EXT flag_){flag^=flag_.flag;return *this;}
	F_debug_report_EXT operator~(){return ~flag;}
	bool operator==(const F_debug_report_EXT flag_){return flag==flag_.flag;}
	bool operator!=(const F_debug_report_EXT flag_){return !(*this==flag_);}
	F_debug_report_EXT& clear(){flag = 0;return *this;}
	F_debug_report_EXT all_flags(){ return b_information_ext | b_warning_ext | b_performance_warning_ext | b_error_ext | b_debug_ext;}
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
inline F_debug_report_EXT operator&(const F_debug_report_EXT f1_, const F_debug_report_EXT f2_){return f1_.flag&f2_.flag;}
inline F_debug_report_EXT operator&(const F_debug_report_EXT f1_, const F_debug_report_EXT::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_debug_report_EXT operator&(const F_debug_report_EXT::B f1_, const F_debug_report_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_debug_report_EXT operator&(const F_debug_report_EXT f1_, const VkDebugReportFlagBitsEXT f2_){return f1_.flag&uint32_t(f2_);}
inline F_debug_report_EXT operator&(const VkDebugReportFlagBitsEXT f1_, const F_debug_report_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_debug_report_EXT operator|(const F_debug_report_EXT f1_, const F_debug_report_EXT f2_){return f1_.flag|f2_.flag;}
inline F_debug_report_EXT operator^(const F_debug_report_EXT f1_, const F_debug_report_EXT f2_){return f1_.flag^f2_.flag;}
/*	VkExternalMemoryHandleTypeFlagBitsNV*/
template<> struct my_class_convert<F_external_memory_handle_type_NV> { using type = VkExternalMemoryHandleTypeFlagBitsNV;};template<> struct my_class_convert<VkExternalMemoryHandleTypeFlagBitsNV> { using type = F_external_memory_handle_type_NV;};union F_external_memory_handle_type_NV {
	uint32_t flag;
	VkExternalMemoryHandleTypeFlagBitsNV vk_flag;
	enum B{
		b_opaque_win32_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV,
		b_opaque_win32_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV,
		b_d3d11_image_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV,
		b_d3d11_image_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV,
	};
	F_external_memory_handle_type_NV():flag(0){}
	F_external_memory_handle_type_NV(const uint32_t flag_):flag(flag_){}
	//F_external_memory_handle_type_NV(const B flag_):flag(flag_){}
	//F_external_memory_handle_type_NV(const VkExternalMemoryHandleTypeFlagBitsNV flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalMemoryHandleTypeFlagBitsNV*(){ return reinterpret_cast<VkExternalMemoryHandleTypeFlagBitsNV*>(this); }
	operator VkExternalMemoryHandleTypeFlagBitsNV(){return vk_flag;}
	operator VkExternalMemoryHandleTypeFlagsNV&(){ return flag; }
	F_external_memory_handle_type_NV& operator=(const F_external_memory_handle_type_NV flag_){flag=flag_.flag; return *this;}
	F_external_memory_handle_type_NV& operator|=(const F_external_memory_handle_type_NV flag_){flag|=flag_.flag; return *this;}
	F_external_memory_handle_type_NV& operator&=(const F_external_memory_handle_type_NV flag_){flag&=flag_.flag; return *this;}
	F_external_memory_handle_type_NV& operator^=(const F_external_memory_handle_type_NV flag_){flag^=flag_.flag;return *this;}
	F_external_memory_handle_type_NV operator~(){return ~flag;}
	bool operator==(const F_external_memory_handle_type_NV flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_memory_handle_type_NV flag_){return !(*this==flag_);}
	F_external_memory_handle_type_NV& clear(){flag = 0;return *this;}
	F_external_memory_handle_type_NV all_flags(){ return b_opaque_win32_nv | b_opaque_win32_kmt_nv | b_d3d11_image_nv | b_d3d11_image_kmt_nv;}
	F_external_memory_handle_type_NV& on_opaque_win32_nv(){ flag |= b_opaque_win32_nv; return *this; }
	F_external_memory_handle_type_NV& off_opaque_win32_nv(){ flag &= ~b_opaque_win32_nv; return *this; }
	F_external_memory_handle_type_NV& on_opaque_win32_kmt_nv(){ flag |= b_opaque_win32_kmt_nv; return *this; }
	F_external_memory_handle_type_NV& off_opaque_win32_kmt_nv(){ flag &= ~b_opaque_win32_kmt_nv; return *this; }
	F_external_memory_handle_type_NV& on_d3d11_image_nv(){ flag |= b_d3d11_image_nv; return *this; }
	F_external_memory_handle_type_NV& off_d3d11_image_nv(){ flag &= ~b_d3d11_image_nv; return *this; }
	F_external_memory_handle_type_NV& on_d3d11_image_kmt_nv(){ flag |= b_d3d11_image_kmt_nv; return *this; }
	F_external_memory_handle_type_NV& off_d3d11_image_kmt_nv(){ flag &= ~b_d3d11_image_kmt_nv; return *this; }
};
inline F_external_memory_handle_type_NV operator&(const F_external_memory_handle_type_NV f1_, const F_external_memory_handle_type_NV f2_){return f1_.flag&f2_.flag;}
inline F_external_memory_handle_type_NV operator&(const F_external_memory_handle_type_NV f1_, const F_external_memory_handle_type_NV::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_handle_type_NV operator&(const F_external_memory_handle_type_NV::B f1_, const F_external_memory_handle_type_NV f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_handle_type_NV operator&(const F_external_memory_handle_type_NV f1_, const VkExternalMemoryHandleTypeFlagBitsNV f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_handle_type_NV operator&(const VkExternalMemoryHandleTypeFlagBitsNV f1_, const F_external_memory_handle_type_NV f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_handle_type_NV operator|(const F_external_memory_handle_type_NV f1_, const F_external_memory_handle_type_NV f2_){return f1_.flag|f2_.flag;}
inline F_external_memory_handle_type_NV operator^(const F_external_memory_handle_type_NV f1_, const F_external_memory_handle_type_NV f2_){return f1_.flag^f2_.flag;}
/*	VkExternalMemoryFeatureFlagBitsNV*/
template<> struct my_class_convert<F_external_memory_feature_NV> { using type = VkExternalMemoryFeatureFlagBitsNV;};template<> struct my_class_convert<VkExternalMemoryFeatureFlagBitsNV> { using type = F_external_memory_feature_NV;};union F_external_memory_feature_NV {
	uint32_t flag;
	VkExternalMemoryFeatureFlagBitsNV vk_flag;
	enum B{
		b_dedicated_only_nv = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV,
		b_exportable_nv = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV,
		b_importable_nv = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV,
	};
	F_external_memory_feature_NV():flag(0){}
	F_external_memory_feature_NV(const uint32_t flag_):flag(flag_){}
	//F_external_memory_feature_NV(const B flag_):flag(flag_){}
	//F_external_memory_feature_NV(const VkExternalMemoryFeatureFlagBitsNV flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalMemoryFeatureFlagBitsNV*(){ return reinterpret_cast<VkExternalMemoryFeatureFlagBitsNV*>(this); }
	operator VkExternalMemoryFeatureFlagBitsNV(){return vk_flag;}
	operator VkExternalMemoryFeatureFlagsNV&(){ return flag; }
	F_external_memory_feature_NV& operator=(const F_external_memory_feature_NV flag_){flag=flag_.flag; return *this;}
	F_external_memory_feature_NV& operator|=(const F_external_memory_feature_NV flag_){flag|=flag_.flag; return *this;}
	F_external_memory_feature_NV& operator&=(const F_external_memory_feature_NV flag_){flag&=flag_.flag; return *this;}
	F_external_memory_feature_NV& operator^=(const F_external_memory_feature_NV flag_){flag^=flag_.flag;return *this;}
	F_external_memory_feature_NV operator~(){return ~flag;}
	bool operator==(const F_external_memory_feature_NV flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_memory_feature_NV flag_){return !(*this==flag_);}
	F_external_memory_feature_NV& clear(){flag = 0;return *this;}
	F_external_memory_feature_NV all_flags(){ return b_dedicated_only_nv | b_exportable_nv | b_importable_nv;}
	F_external_memory_feature_NV& on_dedicated_only_nv(){ flag |= b_dedicated_only_nv; return *this; }
	F_external_memory_feature_NV& off_dedicated_only_nv(){ flag &= ~b_dedicated_only_nv; return *this; }
	F_external_memory_feature_NV& on_exportable_nv(){ flag |= b_exportable_nv; return *this; }
	F_external_memory_feature_NV& off_exportable_nv(){ flag &= ~b_exportable_nv; return *this; }
	F_external_memory_feature_NV& on_importable_nv(){ flag |= b_importable_nv; return *this; }
	F_external_memory_feature_NV& off_importable_nv(){ flag &= ~b_importable_nv; return *this; }
};
inline F_external_memory_feature_NV operator&(const F_external_memory_feature_NV f1_, const F_external_memory_feature_NV f2_){return f1_.flag&f2_.flag;}
inline F_external_memory_feature_NV operator&(const F_external_memory_feature_NV f1_, const F_external_memory_feature_NV::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_feature_NV operator&(const F_external_memory_feature_NV::B f1_, const F_external_memory_feature_NV f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_feature_NV operator&(const F_external_memory_feature_NV f1_, const VkExternalMemoryFeatureFlagBitsNV f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_feature_NV operator&(const VkExternalMemoryFeatureFlagBitsNV f1_, const F_external_memory_feature_NV f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_feature_NV operator|(const F_external_memory_feature_NV f1_, const F_external_memory_feature_NV f2_){return f1_.flag|f2_.flag;}
inline F_external_memory_feature_NV operator^(const F_external_memory_feature_NV f1_, const F_external_memory_feature_NV f2_){return f1_.flag^f2_.flag;}
/*	VkSubgroupFeatureFlagBits*/
template<> struct my_class_convert<F_subgroup_feature> { using type = VkSubgroupFeatureFlagBits;};template<> struct my_class_convert<VkSubgroupFeatureFlagBits> { using type = F_subgroup_feature;};union F_subgroup_feature {
	uint32_t flag;
	VkSubgroupFeatureFlagBits vk_flag;
	enum B{
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
	};
	F_subgroup_feature():flag(0){}
	F_subgroup_feature(const uint32_t flag_):flag(flag_){}
	//F_subgroup_feature(const B flag_):flag(flag_){}
	//F_subgroup_feature(const VkSubgroupFeatureFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkSubgroupFeatureFlagBits*(){ return reinterpret_cast<VkSubgroupFeatureFlagBits*>(this); }
	operator VkSubgroupFeatureFlagBits(){return vk_flag;}
	operator VkSubgroupFeatureFlags&(){ return flag; }
	F_subgroup_feature& operator=(const F_subgroup_feature flag_){flag=flag_.flag; return *this;}
	F_subgroup_feature& operator|=(const F_subgroup_feature flag_){flag|=flag_.flag; return *this;}
	F_subgroup_feature& operator&=(const F_subgroup_feature flag_){flag&=flag_.flag; return *this;}
	F_subgroup_feature& operator^=(const F_subgroup_feature flag_){flag^=flag_.flag;return *this;}
	F_subgroup_feature operator~(){return ~flag;}
	bool operator==(const F_subgroup_feature flag_){return flag==flag_.flag;}
	bool operator!=(const F_subgroup_feature flag_){return !(*this==flag_);}
	F_subgroup_feature& clear(){flag = 0;return *this;}
	F_subgroup_feature all_flags(){ return b_basic | b_vote | b_arithmetic | b_ballot | b_shuffle | b_shuffle_relative | b_clustered | b_quad;}
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
inline F_subgroup_feature operator&(const F_subgroup_feature f1_, const F_subgroup_feature f2_){return f1_.flag&f2_.flag;}
inline F_subgroup_feature operator&(const F_subgroup_feature f1_, const F_subgroup_feature::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_subgroup_feature operator&(const F_subgroup_feature::B f1_, const F_subgroup_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_subgroup_feature operator&(const F_subgroup_feature f1_, const VkSubgroupFeatureFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_subgroup_feature operator&(const VkSubgroupFeatureFlagBits f1_, const F_subgroup_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_subgroup_feature operator|(const F_subgroup_feature f1_, const F_subgroup_feature f2_){return f1_.flag|f2_.flag;}
inline F_subgroup_feature operator^(const F_subgroup_feature f1_, const F_subgroup_feature f2_){return f1_.flag^f2_.flag;}
/*	VkIndirectCommandsLayoutUsageFlagBitsNVX*/
template<> struct my_class_convert<F_indirect_commands_layout_usage_NVX> { using type = VkIndirectCommandsLayoutUsageFlagBitsNVX;};template<> struct my_class_convert<VkIndirectCommandsLayoutUsageFlagBitsNVX> { using type = F_indirect_commands_layout_usage_NVX;};union F_indirect_commands_layout_usage_NVX {
	uint32_t flag;
	VkIndirectCommandsLayoutUsageFlagBitsNVX vk_flag;
	enum B{
		b_unordered_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX,
		b_sparse_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX,
		b_empty_executions_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX,
		b_indexed_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX,
	};
	F_indirect_commands_layout_usage_NVX():flag(0){}
	F_indirect_commands_layout_usage_NVX(const uint32_t flag_):flag(flag_){}
	//F_indirect_commands_layout_usage_NVX(const B flag_):flag(flag_){}
	//F_indirect_commands_layout_usage_NVX(const VkIndirectCommandsLayoutUsageFlagBitsNVX flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkIndirectCommandsLayoutUsageFlagBitsNVX*(){ return reinterpret_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX*>(this); }
	operator VkIndirectCommandsLayoutUsageFlagBitsNVX(){return vk_flag;}
	operator VkIndirectCommandsLayoutUsageFlagsNVX&(){ return flag; }
	F_indirect_commands_layout_usage_NVX& operator=(const F_indirect_commands_layout_usage_NVX flag_){flag=flag_.flag; return *this;}
	F_indirect_commands_layout_usage_NVX& operator|=(const F_indirect_commands_layout_usage_NVX flag_){flag|=flag_.flag; return *this;}
	F_indirect_commands_layout_usage_NVX& operator&=(const F_indirect_commands_layout_usage_NVX flag_){flag&=flag_.flag; return *this;}
	F_indirect_commands_layout_usage_NVX& operator^=(const F_indirect_commands_layout_usage_NVX flag_){flag^=flag_.flag;return *this;}
	F_indirect_commands_layout_usage_NVX operator~(){return ~flag;}
	bool operator==(const F_indirect_commands_layout_usage_NVX flag_){return flag==flag_.flag;}
	bool operator!=(const F_indirect_commands_layout_usage_NVX flag_){return !(*this==flag_);}
	F_indirect_commands_layout_usage_NVX& clear(){flag = 0;return *this;}
	F_indirect_commands_layout_usage_NVX all_flags(){ return b_unordered_sequences_nvx | b_sparse_sequences_nvx | b_empty_executions_nvx | b_indexed_sequences_nvx;}
	F_indirect_commands_layout_usage_NVX& on_unordered_sequences_nvx(){ flag |= b_unordered_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_unordered_sequences_nvx(){ flag &= ~b_unordered_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& on_sparse_sequences_nvx(){ flag |= b_sparse_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_sparse_sequences_nvx(){ flag &= ~b_sparse_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& on_empty_executions_nvx(){ flag |= b_empty_executions_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_empty_executions_nvx(){ flag &= ~b_empty_executions_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& on_indexed_sequences_nvx(){ flag |= b_indexed_sequences_nvx; return *this; }
	F_indirect_commands_layout_usage_NVX& off_indexed_sequences_nvx(){ flag &= ~b_indexed_sequences_nvx; return *this; }
};
inline F_indirect_commands_layout_usage_NVX operator&(const F_indirect_commands_layout_usage_NVX f1_, const F_indirect_commands_layout_usage_NVX f2_){return f1_.flag&f2_.flag;}
inline F_indirect_commands_layout_usage_NVX operator&(const F_indirect_commands_layout_usage_NVX f1_, const F_indirect_commands_layout_usage_NVX::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_indirect_commands_layout_usage_NVX operator&(const F_indirect_commands_layout_usage_NVX::B f1_, const F_indirect_commands_layout_usage_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_indirect_commands_layout_usage_NVX operator&(const F_indirect_commands_layout_usage_NVX f1_, const VkIndirectCommandsLayoutUsageFlagBitsNVX f2_){return f1_.flag&uint32_t(f2_);}
inline F_indirect_commands_layout_usage_NVX operator&(const VkIndirectCommandsLayoutUsageFlagBitsNVX f1_, const F_indirect_commands_layout_usage_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_indirect_commands_layout_usage_NVX operator|(const F_indirect_commands_layout_usage_NVX f1_, const F_indirect_commands_layout_usage_NVX f2_){return f1_.flag|f2_.flag;}
inline F_indirect_commands_layout_usage_NVX operator^(const F_indirect_commands_layout_usage_NVX f1_, const F_indirect_commands_layout_usage_NVX f2_){return f1_.flag^f2_.flag;}
/*	VkObjectEntryUsageFlagBitsNVX*/
template<> struct my_class_convert<F_object_entry_usage_NVX> { using type = VkObjectEntryUsageFlagBitsNVX;};template<> struct my_class_convert<VkObjectEntryUsageFlagBitsNVX> { using type = F_object_entry_usage_NVX;};union F_object_entry_usage_NVX {
	uint32_t flag;
	VkObjectEntryUsageFlagBitsNVX vk_flag;
	enum B{
		b_graphics_nvx = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX,
		b_compute_nvx = VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX,
	};
	F_object_entry_usage_NVX():flag(0){}
	F_object_entry_usage_NVX(const uint32_t flag_):flag(flag_){}
	//F_object_entry_usage_NVX(const B flag_):flag(flag_){}
	//F_object_entry_usage_NVX(const VkObjectEntryUsageFlagBitsNVX flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkObjectEntryUsageFlagBitsNVX*(){ return reinterpret_cast<VkObjectEntryUsageFlagBitsNVX*>(this); }
	operator VkObjectEntryUsageFlagBitsNVX(){return vk_flag;}
	operator VkObjectEntryUsageFlagsNVX&(){ return flag; }
	F_object_entry_usage_NVX& operator=(const F_object_entry_usage_NVX flag_){flag=flag_.flag; return *this;}
	F_object_entry_usage_NVX& operator|=(const F_object_entry_usage_NVX flag_){flag|=flag_.flag; return *this;}
	F_object_entry_usage_NVX& operator&=(const F_object_entry_usage_NVX flag_){flag&=flag_.flag; return *this;}
	F_object_entry_usage_NVX& operator^=(const F_object_entry_usage_NVX flag_){flag^=flag_.flag;return *this;}
	F_object_entry_usage_NVX operator~(){return ~flag;}
	bool operator==(const F_object_entry_usage_NVX flag_){return flag==flag_.flag;}
	bool operator!=(const F_object_entry_usage_NVX flag_){return !(*this==flag_);}
	F_object_entry_usage_NVX& clear(){flag = 0;return *this;}
	F_object_entry_usage_NVX all_flags(){ return b_graphics_nvx | b_compute_nvx;}
	F_object_entry_usage_NVX& on_graphics_nvx(){ flag |= b_graphics_nvx; return *this; }
	F_object_entry_usage_NVX& off_graphics_nvx(){ flag &= ~b_graphics_nvx; return *this; }
	F_object_entry_usage_NVX& on_compute_nvx(){ flag |= b_compute_nvx; return *this; }
	F_object_entry_usage_NVX& off_compute_nvx(){ flag &= ~b_compute_nvx; return *this; }
};
inline F_object_entry_usage_NVX operator&(const F_object_entry_usage_NVX f1_, const F_object_entry_usage_NVX f2_){return f1_.flag&f2_.flag;}
inline F_object_entry_usage_NVX operator&(const F_object_entry_usage_NVX f1_, const F_object_entry_usage_NVX::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_object_entry_usage_NVX operator&(const F_object_entry_usage_NVX::B f1_, const F_object_entry_usage_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_object_entry_usage_NVX operator&(const F_object_entry_usage_NVX f1_, const VkObjectEntryUsageFlagBitsNVX f2_){return f1_.flag&uint32_t(f2_);}
inline F_object_entry_usage_NVX operator&(const VkObjectEntryUsageFlagBitsNVX f1_, const F_object_entry_usage_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_object_entry_usage_NVX operator|(const F_object_entry_usage_NVX f1_, const F_object_entry_usage_NVX f2_){return f1_.flag|f2_.flag;}
inline F_object_entry_usage_NVX operator^(const F_object_entry_usage_NVX f1_, const F_object_entry_usage_NVX f2_){return f1_.flag^f2_.flag;}
/*	VkDescriptorSetLayoutCreateFlagBits*/
using F_descriptor_set_layout_create = 
			VkDescriptorSetLayoutCreateFlagBits;

/*	VkExternalMemoryHandleTypeFlagBits*/
template<> struct my_class_convert<F_external_memory_handle_type> { using type = VkExternalMemoryHandleTypeFlagBits;};template<> struct my_class_convert<VkExternalMemoryHandleTypeFlagBits> { using type = F_external_memory_handle_type;};union F_external_memory_handle_type {
	uint32_t flag;
	VkExternalMemoryHandleTypeFlagBits vk_flag;
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
	F_external_memory_handle_type(const uint32_t flag_):flag(flag_){}
	//F_external_memory_handle_type(const B flag_):flag(flag_){}
	//F_external_memory_handle_type(const VkExternalMemoryHandleTypeFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalMemoryHandleTypeFlagBits*(){ return reinterpret_cast<VkExternalMemoryHandleTypeFlagBits*>(this); }
	operator VkExternalMemoryHandleTypeFlagBits(){return vk_flag;}
	operator VkExternalMemoryHandleTypeFlags&(){ return flag; }
	F_external_memory_handle_type& operator=(const F_external_memory_handle_type flag_){flag=flag_.flag; return *this;}
	F_external_memory_handle_type& operator|=(const F_external_memory_handle_type flag_){flag|=flag_.flag; return *this;}
	F_external_memory_handle_type& operator&=(const F_external_memory_handle_type flag_){flag&=flag_.flag; return *this;}
	F_external_memory_handle_type& operator^=(const F_external_memory_handle_type flag_){flag^=flag_.flag;return *this;}
	F_external_memory_handle_type operator~(){return ~flag;}
	bool operator==(const F_external_memory_handle_type flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_memory_handle_type flag_){return !(*this==flag_);}
	F_external_memory_handle_type& clear(){flag = 0;return *this;}
	F_external_memory_handle_type all_flags(){ return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_d3d11_texture | b_d3d11_texture_kmt | b_d3d12_heap | b_d3d12_resource;}
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
inline F_external_memory_handle_type operator&(const F_external_memory_handle_type f1_, const F_external_memory_handle_type f2_){return f1_.flag&f2_.flag;}
inline F_external_memory_handle_type operator&(const F_external_memory_handle_type f1_, const F_external_memory_handle_type::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_handle_type operator&(const F_external_memory_handle_type::B f1_, const F_external_memory_handle_type f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_handle_type operator&(const F_external_memory_handle_type f1_, const VkExternalMemoryHandleTypeFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_handle_type operator&(const VkExternalMemoryHandleTypeFlagBits f1_, const F_external_memory_handle_type f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_handle_type operator|(const F_external_memory_handle_type f1_, const F_external_memory_handle_type f2_){return f1_.flag|f2_.flag;}
inline F_external_memory_handle_type operator^(const F_external_memory_handle_type f1_, const F_external_memory_handle_type f2_){return f1_.flag^f2_.flag;}
/*	VkExternalMemoryFeatureFlagBits*/
template<> struct my_class_convert<F_external_memory_feature> { using type = VkExternalMemoryFeatureFlagBits;};template<> struct my_class_convert<VkExternalMemoryFeatureFlagBits> { using type = F_external_memory_feature;};union F_external_memory_feature {
	uint32_t flag;
	VkExternalMemoryFeatureFlagBits vk_flag;
	enum B{
		b_dedicated_only = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT,
		b_exportable = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT,
		b_importable = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT,
	};
	F_external_memory_feature():flag(0){}
	F_external_memory_feature(const uint32_t flag_):flag(flag_){}
	//F_external_memory_feature(const B flag_):flag(flag_){}
	//F_external_memory_feature(const VkExternalMemoryFeatureFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalMemoryFeatureFlagBits*(){ return reinterpret_cast<VkExternalMemoryFeatureFlagBits*>(this); }
	operator VkExternalMemoryFeatureFlagBits(){return vk_flag;}
	operator VkExternalMemoryFeatureFlags&(){ return flag; }
	F_external_memory_feature& operator=(const F_external_memory_feature flag_){flag=flag_.flag; return *this;}
	F_external_memory_feature& operator|=(const F_external_memory_feature flag_){flag|=flag_.flag; return *this;}
	F_external_memory_feature& operator&=(const F_external_memory_feature flag_){flag&=flag_.flag; return *this;}
	F_external_memory_feature& operator^=(const F_external_memory_feature flag_){flag^=flag_.flag;return *this;}
	F_external_memory_feature operator~(){return ~flag;}
	bool operator==(const F_external_memory_feature flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_memory_feature flag_){return !(*this==flag_);}
	F_external_memory_feature& clear(){flag = 0;return *this;}
	F_external_memory_feature all_flags(){ return b_dedicated_only | b_exportable | b_importable;}
	F_external_memory_feature& on_dedicated_only(){ flag |= b_dedicated_only; return *this; }
	F_external_memory_feature& off_dedicated_only(){ flag &= ~b_dedicated_only; return *this; }
	F_external_memory_feature& on_exportable(){ flag |= b_exportable; return *this; }
	F_external_memory_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
	F_external_memory_feature& on_importable(){ flag |= b_importable; return *this; }
	F_external_memory_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
inline F_external_memory_feature operator&(const F_external_memory_feature f1_, const F_external_memory_feature f2_){return f1_.flag&f2_.flag;}
inline F_external_memory_feature operator&(const F_external_memory_feature f1_, const F_external_memory_feature::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_feature operator&(const F_external_memory_feature::B f1_, const F_external_memory_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_feature operator&(const F_external_memory_feature f1_, const VkExternalMemoryFeatureFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_memory_feature operator&(const VkExternalMemoryFeatureFlagBits f1_, const F_external_memory_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_memory_feature operator|(const F_external_memory_feature f1_, const F_external_memory_feature f2_){return f1_.flag|f2_.flag;}
inline F_external_memory_feature operator^(const F_external_memory_feature f1_, const F_external_memory_feature f2_){return f1_.flag^f2_.flag;}
/*	VkExternalSemaphoreHandleTypeFlagBits*/
template<> struct my_class_convert<F_external_semaphore_handle_type> { using type = VkExternalSemaphoreHandleTypeFlagBits;};template<> struct my_class_convert<VkExternalSemaphoreHandleTypeFlagBits> { using type = F_external_semaphore_handle_type;};union F_external_semaphore_handle_type {
	uint32_t flag;
	VkExternalSemaphoreHandleTypeFlagBits vk_flag;
	enum B{
		b_opaque_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT,
		b_opaque_win32 = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
		b_opaque_win32_kmt = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
		b_d3d12_fence = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,
		b_sync_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT,
	};
	F_external_semaphore_handle_type():flag(0){}
	F_external_semaphore_handle_type(const uint32_t flag_):flag(flag_){}
	//F_external_semaphore_handle_type(const B flag_):flag(flag_){}
	//F_external_semaphore_handle_type(const VkExternalSemaphoreHandleTypeFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalSemaphoreHandleTypeFlagBits*(){ return reinterpret_cast<VkExternalSemaphoreHandleTypeFlagBits*>(this); }
	operator VkExternalSemaphoreHandleTypeFlagBits(){return vk_flag;}
	operator VkExternalSemaphoreHandleTypeFlags&(){ return flag; }
	F_external_semaphore_handle_type& operator=(const F_external_semaphore_handle_type flag_){flag=flag_.flag; return *this;}
	F_external_semaphore_handle_type& operator|=(const F_external_semaphore_handle_type flag_){flag|=flag_.flag; return *this;}
	F_external_semaphore_handle_type& operator&=(const F_external_semaphore_handle_type flag_){flag&=flag_.flag; return *this;}
	F_external_semaphore_handle_type& operator^=(const F_external_semaphore_handle_type flag_){flag^=flag_.flag;return *this;}
	F_external_semaphore_handle_type operator~(){return ~flag;}
	bool operator==(const F_external_semaphore_handle_type flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_semaphore_handle_type flag_){return !(*this==flag_);}
	F_external_semaphore_handle_type& clear(){flag = 0;return *this;}
	F_external_semaphore_handle_type all_flags(){ return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_d3d12_fence | b_sync_fd;}
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
inline F_external_semaphore_handle_type operator&(const F_external_semaphore_handle_type f1_, const F_external_semaphore_handle_type f2_){return f1_.flag&f2_.flag;}
inline F_external_semaphore_handle_type operator&(const F_external_semaphore_handle_type f1_, const F_external_semaphore_handle_type::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_semaphore_handle_type operator&(const F_external_semaphore_handle_type::B f1_, const F_external_semaphore_handle_type f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_semaphore_handle_type operator&(const F_external_semaphore_handle_type f1_, const VkExternalSemaphoreHandleTypeFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_semaphore_handle_type operator&(const VkExternalSemaphoreHandleTypeFlagBits f1_, const F_external_semaphore_handle_type f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_semaphore_handle_type operator|(const F_external_semaphore_handle_type f1_, const F_external_semaphore_handle_type f2_){return f1_.flag|f2_.flag;}
inline F_external_semaphore_handle_type operator^(const F_external_semaphore_handle_type f1_, const F_external_semaphore_handle_type f2_){return f1_.flag^f2_.flag;}
/*	VkExternalSemaphoreFeatureFlagBits*/
template<> struct my_class_convert<F_external_semaphore_feature> { using type = VkExternalSemaphoreFeatureFlagBits;};template<> struct my_class_convert<VkExternalSemaphoreFeatureFlagBits> { using type = F_external_semaphore_feature;};union F_external_semaphore_feature {
	uint32_t flag;
	VkExternalSemaphoreFeatureFlagBits vk_flag;
	enum B{
		b_exportable = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,
		b_importable = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,
	};
	F_external_semaphore_feature():flag(0){}
	F_external_semaphore_feature(const uint32_t flag_):flag(flag_){}
	//F_external_semaphore_feature(const B flag_):flag(flag_){}
	//F_external_semaphore_feature(const VkExternalSemaphoreFeatureFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalSemaphoreFeatureFlagBits*(){ return reinterpret_cast<VkExternalSemaphoreFeatureFlagBits*>(this); }
	operator VkExternalSemaphoreFeatureFlagBits(){return vk_flag;}
	operator VkExternalSemaphoreFeatureFlags&(){ return flag; }
	F_external_semaphore_feature& operator=(const F_external_semaphore_feature flag_){flag=flag_.flag; return *this;}
	F_external_semaphore_feature& operator|=(const F_external_semaphore_feature flag_){flag|=flag_.flag; return *this;}
	F_external_semaphore_feature& operator&=(const F_external_semaphore_feature flag_){flag&=flag_.flag; return *this;}
	F_external_semaphore_feature& operator^=(const F_external_semaphore_feature flag_){flag^=flag_.flag;return *this;}
	F_external_semaphore_feature operator~(){return ~flag;}
	bool operator==(const F_external_semaphore_feature flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_semaphore_feature flag_){return !(*this==flag_);}
	F_external_semaphore_feature& clear(){flag = 0;return *this;}
	F_external_semaphore_feature all_flags(){ return b_exportable | b_importable;}
	F_external_semaphore_feature& on_exportable(){ flag |= b_exportable; return *this; }
	F_external_semaphore_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
	F_external_semaphore_feature& on_importable(){ flag |= b_importable; return *this; }
	F_external_semaphore_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
inline F_external_semaphore_feature operator&(const F_external_semaphore_feature f1_, const F_external_semaphore_feature f2_){return f1_.flag&f2_.flag;}
inline F_external_semaphore_feature operator&(const F_external_semaphore_feature f1_, const F_external_semaphore_feature::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_semaphore_feature operator&(const F_external_semaphore_feature::B f1_, const F_external_semaphore_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_semaphore_feature operator&(const F_external_semaphore_feature f1_, const VkExternalSemaphoreFeatureFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_semaphore_feature operator&(const VkExternalSemaphoreFeatureFlagBits f1_, const F_external_semaphore_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_semaphore_feature operator|(const F_external_semaphore_feature f1_, const F_external_semaphore_feature f2_){return f1_.flag|f2_.flag;}
inline F_external_semaphore_feature operator^(const F_external_semaphore_feature f1_, const F_external_semaphore_feature f2_){return f1_.flag^f2_.flag;}
/*	VkSemaphoreImportFlagBits*/
template<> struct my_class_convert<F_semaphore_import> { using type = VkSemaphoreImportFlagBits;};template<> struct my_class_convert<VkSemaphoreImportFlagBits> { using type = F_semaphore_import;};union F_semaphore_import {
	uint32_t flag;
	VkSemaphoreImportFlagBits vk_flag;
	enum B{
		b_temporary = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
	};
	F_semaphore_import():flag(0){}
	F_semaphore_import(const uint32_t flag_):flag(flag_){}
	//F_semaphore_import(const B flag_):flag(flag_){}
	//F_semaphore_import(const VkSemaphoreImportFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkSemaphoreImportFlagBits*(){ return reinterpret_cast<VkSemaphoreImportFlagBits*>(this); }
	operator VkSemaphoreImportFlagBits(){return vk_flag;}
	operator VkSemaphoreImportFlags&(){ return flag; }
	F_semaphore_import& operator=(const F_semaphore_import flag_){flag=flag_.flag; return *this;}
	F_semaphore_import& operator|=(const F_semaphore_import flag_){flag|=flag_.flag; return *this;}
	F_semaphore_import& operator&=(const F_semaphore_import flag_){flag&=flag_.flag; return *this;}
	F_semaphore_import& operator^=(const F_semaphore_import flag_){flag^=flag_.flag;return *this;}
	F_semaphore_import operator~(){return ~flag;}
	bool operator==(const F_semaphore_import flag_){return flag==flag_.flag;}
	bool operator!=(const F_semaphore_import flag_){return !(*this==flag_);}
	F_semaphore_import& clear(){flag = 0;return *this;}
	F_semaphore_import all_flags(){ return b_temporary;}
	F_semaphore_import& on_temporary(){ flag |= b_temporary; return *this; }
	F_semaphore_import& off_temporary(){ flag &= ~b_temporary; return *this; }
};
inline F_semaphore_import operator&(const F_semaphore_import f1_, const F_semaphore_import f2_){return f1_.flag&f2_.flag;}
inline F_semaphore_import operator&(const F_semaphore_import f1_, const F_semaphore_import::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_semaphore_import operator&(const F_semaphore_import::B f1_, const F_semaphore_import f2_){return uint32_t(f1_)&f2_.flag;}
inline F_semaphore_import operator&(const F_semaphore_import f1_, const VkSemaphoreImportFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_semaphore_import operator&(const VkSemaphoreImportFlagBits f1_, const F_semaphore_import f2_){return uint32_t(f1_)&f2_.flag;}
inline F_semaphore_import operator|(const F_semaphore_import f1_, const F_semaphore_import f2_){return f1_.flag|f2_.flag;}
inline F_semaphore_import operator^(const F_semaphore_import f1_, const F_semaphore_import f2_){return f1_.flag^f2_.flag;}
/*	VkExternalFenceHandleTypeFlagBits*/
template<> struct my_class_convert<F_external_fence_handle_type> { using type = VkExternalFenceHandleTypeFlagBits;};template<> struct my_class_convert<VkExternalFenceHandleTypeFlagBits> { using type = F_external_fence_handle_type;};union F_external_fence_handle_type {
	uint32_t flag;
	VkExternalFenceHandleTypeFlagBits vk_flag;
	enum B{
		b_opaque_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT,
		b_opaque_win32 = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
		b_opaque_win32_kmt = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
		b_sync_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT,
	};
	F_external_fence_handle_type():flag(0){}
	F_external_fence_handle_type(const uint32_t flag_):flag(flag_){}
	//F_external_fence_handle_type(const B flag_):flag(flag_){}
	//F_external_fence_handle_type(const VkExternalFenceHandleTypeFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalFenceHandleTypeFlagBits*(){ return reinterpret_cast<VkExternalFenceHandleTypeFlagBits*>(this); }
	operator VkExternalFenceHandleTypeFlagBits(){return vk_flag;}
	operator VkExternalFenceHandleTypeFlags&(){ return flag; }
	F_external_fence_handle_type& operator=(const F_external_fence_handle_type flag_){flag=flag_.flag; return *this;}
	F_external_fence_handle_type& operator|=(const F_external_fence_handle_type flag_){flag|=flag_.flag; return *this;}
	F_external_fence_handle_type& operator&=(const F_external_fence_handle_type flag_){flag&=flag_.flag; return *this;}
	F_external_fence_handle_type& operator^=(const F_external_fence_handle_type flag_){flag^=flag_.flag;return *this;}
	F_external_fence_handle_type operator~(){return ~flag;}
	bool operator==(const F_external_fence_handle_type flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_fence_handle_type flag_){return !(*this==flag_);}
	F_external_fence_handle_type& clear(){flag = 0;return *this;}
	F_external_fence_handle_type all_flags(){ return b_opaque_fd | b_opaque_win32 | b_opaque_win32_kmt | b_sync_fd;}
	F_external_fence_handle_type& on_opaque_fd(){ flag |= b_opaque_fd; return *this; }
	F_external_fence_handle_type& off_opaque_fd(){ flag &= ~b_opaque_fd; return *this; }
	F_external_fence_handle_type& on_opaque_win32(){ flag |= b_opaque_win32; return *this; }
	F_external_fence_handle_type& off_opaque_win32(){ flag &= ~b_opaque_win32; return *this; }
	F_external_fence_handle_type& on_opaque_win32_kmt(){ flag |= b_opaque_win32_kmt; return *this; }
	F_external_fence_handle_type& off_opaque_win32_kmt(){ flag &= ~b_opaque_win32_kmt; return *this; }
	F_external_fence_handle_type& on_sync_fd(){ flag |= b_sync_fd; return *this; }
	F_external_fence_handle_type& off_sync_fd(){ flag &= ~b_sync_fd; return *this; }
};
inline F_external_fence_handle_type operator&(const F_external_fence_handle_type f1_, const F_external_fence_handle_type f2_){return f1_.flag&f2_.flag;}
inline F_external_fence_handle_type operator&(const F_external_fence_handle_type f1_, const F_external_fence_handle_type::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_fence_handle_type operator&(const F_external_fence_handle_type::B f1_, const F_external_fence_handle_type f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_fence_handle_type operator&(const F_external_fence_handle_type f1_, const VkExternalFenceHandleTypeFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_fence_handle_type operator&(const VkExternalFenceHandleTypeFlagBits f1_, const F_external_fence_handle_type f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_fence_handle_type operator|(const F_external_fence_handle_type f1_, const F_external_fence_handle_type f2_){return f1_.flag|f2_.flag;}
inline F_external_fence_handle_type operator^(const F_external_fence_handle_type f1_, const F_external_fence_handle_type f2_){return f1_.flag^f2_.flag;}
/*	VkExternalFenceFeatureFlagBits*/
template<> struct my_class_convert<F_external_fence_feature> { using type = VkExternalFenceFeatureFlagBits;};template<> struct my_class_convert<VkExternalFenceFeatureFlagBits> { using type = F_external_fence_feature;};union F_external_fence_feature {
	uint32_t flag;
	VkExternalFenceFeatureFlagBits vk_flag;
	enum B{
		b_exportable = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,
		b_importable = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,
	};
	F_external_fence_feature():flag(0){}
	F_external_fence_feature(const uint32_t flag_):flag(flag_){}
	//F_external_fence_feature(const B flag_):flag(flag_){}
	//F_external_fence_feature(const VkExternalFenceFeatureFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkExternalFenceFeatureFlagBits*(){ return reinterpret_cast<VkExternalFenceFeatureFlagBits*>(this); }
	operator VkExternalFenceFeatureFlagBits(){return vk_flag;}
	operator VkExternalFenceFeatureFlags&(){ return flag; }
	F_external_fence_feature& operator=(const F_external_fence_feature flag_){flag=flag_.flag; return *this;}
	F_external_fence_feature& operator|=(const F_external_fence_feature flag_){flag|=flag_.flag; return *this;}
	F_external_fence_feature& operator&=(const F_external_fence_feature flag_){flag&=flag_.flag; return *this;}
	F_external_fence_feature& operator^=(const F_external_fence_feature flag_){flag^=flag_.flag;return *this;}
	F_external_fence_feature operator~(){return ~flag;}
	bool operator==(const F_external_fence_feature flag_){return flag==flag_.flag;}
	bool operator!=(const F_external_fence_feature flag_){return !(*this==flag_);}
	F_external_fence_feature& clear(){flag = 0;return *this;}
	F_external_fence_feature all_flags(){ return b_exportable | b_importable;}
	F_external_fence_feature& on_exportable(){ flag |= b_exportable; return *this; }
	F_external_fence_feature& off_exportable(){ flag &= ~b_exportable; return *this; }
	F_external_fence_feature& on_importable(){ flag |= b_importable; return *this; }
	F_external_fence_feature& off_importable(){ flag &= ~b_importable; return *this; }
};
inline F_external_fence_feature operator&(const F_external_fence_feature f1_, const F_external_fence_feature f2_){return f1_.flag&f2_.flag;}
inline F_external_fence_feature operator&(const F_external_fence_feature f1_, const F_external_fence_feature::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_fence_feature operator&(const F_external_fence_feature::B f1_, const F_external_fence_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_fence_feature operator&(const F_external_fence_feature f1_, const VkExternalFenceFeatureFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_external_fence_feature operator&(const VkExternalFenceFeatureFlagBits f1_, const F_external_fence_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_external_fence_feature operator|(const F_external_fence_feature f1_, const F_external_fence_feature f2_){return f1_.flag|f2_.flag;}
inline F_external_fence_feature operator^(const F_external_fence_feature f1_, const F_external_fence_feature f2_){return f1_.flag^f2_.flag;}
/*	VkFenceImportFlagBits*/
template<> struct my_class_convert<F_fence_import> { using type = VkFenceImportFlagBits;};template<> struct my_class_convert<VkFenceImportFlagBits> { using type = F_fence_import;};union F_fence_import {
	uint32_t flag;
	VkFenceImportFlagBits vk_flag;
	enum B{
		b_temporary = VK_FENCE_IMPORT_TEMPORARY_BIT,
	};
	F_fence_import():flag(0){}
	F_fence_import(const uint32_t flag_):flag(flag_){}
	//F_fence_import(const B flag_):flag(flag_){}
	//F_fence_import(const VkFenceImportFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkFenceImportFlagBits*(){ return reinterpret_cast<VkFenceImportFlagBits*>(this); }
	operator VkFenceImportFlagBits(){return vk_flag;}
	operator VkFenceImportFlags&(){ return flag; }
	F_fence_import& operator=(const F_fence_import flag_){flag=flag_.flag; return *this;}
	F_fence_import& operator|=(const F_fence_import flag_){flag|=flag_.flag; return *this;}
	F_fence_import& operator&=(const F_fence_import flag_){flag&=flag_.flag; return *this;}
	F_fence_import& operator^=(const F_fence_import flag_){flag^=flag_.flag;return *this;}
	F_fence_import operator~(){return ~flag;}
	bool operator==(const F_fence_import flag_){return flag==flag_.flag;}
	bool operator!=(const F_fence_import flag_){return !(*this==flag_);}
	F_fence_import& clear(){flag = 0;return *this;}
	F_fence_import all_flags(){ return b_temporary;}
	F_fence_import& on_temporary(){ flag |= b_temporary; return *this; }
	F_fence_import& off_temporary(){ flag &= ~b_temporary; return *this; }
};
inline F_fence_import operator&(const F_fence_import f1_, const F_fence_import f2_){return f1_.flag&f2_.flag;}
inline F_fence_import operator&(const F_fence_import f1_, const F_fence_import::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_fence_import operator&(const F_fence_import::B f1_, const F_fence_import f2_){return uint32_t(f1_)&f2_.flag;}
inline F_fence_import operator&(const F_fence_import f1_, const VkFenceImportFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_fence_import operator&(const VkFenceImportFlagBits f1_, const F_fence_import f2_){return uint32_t(f1_)&f2_.flag;}
inline F_fence_import operator|(const F_fence_import f1_, const F_fence_import f2_){return f1_.flag|f2_.flag;}
inline F_fence_import operator^(const F_fence_import f1_, const F_fence_import f2_){return f1_.flag^f2_.flag;}
/*	VkSurfaceCounterFlagBitsEXT*/
template<> struct my_class_convert<F_surface_counter_EXT> { using type = VkSurfaceCounterFlagBitsEXT;};template<> struct my_class_convert<VkSurfaceCounterFlagBitsEXT> { using type = F_surface_counter_EXT;};union F_surface_counter_EXT {
	uint32_t flag;
	VkSurfaceCounterFlagBitsEXT vk_flag;
	enum B{
		b_vblank_ext = VK_SURFACE_COUNTER_VBLANK_EXT,
	};
	F_surface_counter_EXT():flag(0){}
	F_surface_counter_EXT(const uint32_t flag_):flag(flag_){}
	//F_surface_counter_EXT(const B flag_):flag(flag_){}
	//F_surface_counter_EXT(const VkSurfaceCounterFlagBitsEXT flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkSurfaceCounterFlagBitsEXT*(){ return reinterpret_cast<VkSurfaceCounterFlagBitsEXT*>(this); }
	operator VkSurfaceCounterFlagBitsEXT(){return vk_flag;}
	operator VkSurfaceCounterFlagsEXT&(){ return flag; }
	F_surface_counter_EXT& operator=(const F_surface_counter_EXT flag_){flag=flag_.flag; return *this;}
	F_surface_counter_EXT& operator|=(const F_surface_counter_EXT flag_){flag|=flag_.flag; return *this;}
	F_surface_counter_EXT& operator&=(const F_surface_counter_EXT flag_){flag&=flag_.flag; return *this;}
	F_surface_counter_EXT& operator^=(const F_surface_counter_EXT flag_){flag^=flag_.flag;return *this;}
	F_surface_counter_EXT operator~(){return ~flag;}
	bool operator==(const F_surface_counter_EXT flag_){return flag==flag_.flag;}
	bool operator!=(const F_surface_counter_EXT flag_){return !(*this==flag_);}
	F_surface_counter_EXT& clear(){flag = 0;return *this;}
	F_surface_counter_EXT all_flags(){ return b_vblank_ext;}
	F_surface_counter_EXT& on_vblank_ext(){ flag |= b_vblank_ext; return *this; }
	F_surface_counter_EXT& off_vblank_ext(){ flag &= ~b_vblank_ext; return *this; }
};
inline F_surface_counter_EXT operator&(const F_surface_counter_EXT f1_, const F_surface_counter_EXT f2_){return f1_.flag&f2_.flag;}
inline F_surface_counter_EXT operator&(const F_surface_counter_EXT f1_, const F_surface_counter_EXT::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_surface_counter_EXT operator&(const F_surface_counter_EXT::B f1_, const F_surface_counter_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_surface_counter_EXT operator&(const F_surface_counter_EXT f1_, const VkSurfaceCounterFlagBitsEXT f2_){return f1_.flag&uint32_t(f2_);}
inline F_surface_counter_EXT operator&(const VkSurfaceCounterFlagBitsEXT f1_, const F_surface_counter_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_surface_counter_EXT operator|(const F_surface_counter_EXT f1_, const F_surface_counter_EXT f2_){return f1_.flag|f2_.flag;}
inline F_surface_counter_EXT operator^(const F_surface_counter_EXT f1_, const F_surface_counter_EXT f2_){return f1_.flag^f2_.flag;}
/*	VkPeerMemoryFeatureFlagBits*/
template<> struct my_class_convert<F_peer_memory_feature> { using type = VkPeerMemoryFeatureFlagBits;};template<> struct my_class_convert<VkPeerMemoryFeatureFlagBits> { using type = F_peer_memory_feature;};union F_peer_memory_feature {
	uint32_t flag;
	VkPeerMemoryFeatureFlagBits vk_flag;
	enum B{
			/* Can read with vkCmdCopy commands */
		b_copy_src = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,
			/* Can write with vkCmdCopy commands */
		b_copy_dst = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,
			/* Can read with any access type/command */
		b_generic_src = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,
			/* Can write with and access type/command */
		b_generic_dst = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,
	};
	F_peer_memory_feature():flag(0){}
	F_peer_memory_feature(const uint32_t flag_):flag(flag_){}
	//F_peer_memory_feature(const B flag_):flag(flag_){}
	//F_peer_memory_feature(const VkPeerMemoryFeatureFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkPeerMemoryFeatureFlagBits*(){ return reinterpret_cast<VkPeerMemoryFeatureFlagBits*>(this); }
	operator VkPeerMemoryFeatureFlagBits(){return vk_flag;}
	operator VkPeerMemoryFeatureFlags&(){ return flag; }
	F_peer_memory_feature& operator=(const F_peer_memory_feature flag_){flag=flag_.flag; return *this;}
	F_peer_memory_feature& operator|=(const F_peer_memory_feature flag_){flag|=flag_.flag; return *this;}
	F_peer_memory_feature& operator&=(const F_peer_memory_feature flag_){flag&=flag_.flag; return *this;}
	F_peer_memory_feature& operator^=(const F_peer_memory_feature flag_){flag^=flag_.flag;return *this;}
	F_peer_memory_feature operator~(){return ~flag;}
	bool operator==(const F_peer_memory_feature flag_){return flag==flag_.flag;}
	bool operator!=(const F_peer_memory_feature flag_){return !(*this==flag_);}
	F_peer_memory_feature& clear(){flag = 0;return *this;}
	F_peer_memory_feature all_flags(){ return b_copy_src | b_copy_dst | b_generic_src | b_generic_dst;}
	F_peer_memory_feature& on_copy_src(){ flag |= b_copy_src; return *this; }
	F_peer_memory_feature& off_copy_src(){ flag &= ~b_copy_src; return *this; }
	F_peer_memory_feature& on_copy_dst(){ flag |= b_copy_dst; return *this; }
	F_peer_memory_feature& off_copy_dst(){ flag &= ~b_copy_dst; return *this; }
	F_peer_memory_feature& on_generic_src(){ flag |= b_generic_src; return *this; }
	F_peer_memory_feature& off_generic_src(){ flag &= ~b_generic_src; return *this; }
	F_peer_memory_feature& on_generic_dst(){ flag |= b_generic_dst; return *this; }
	F_peer_memory_feature& off_generic_dst(){ flag &= ~b_generic_dst; return *this; }
};
inline F_peer_memory_feature operator&(const F_peer_memory_feature f1_, const F_peer_memory_feature f2_){return f1_.flag&f2_.flag;}
inline F_peer_memory_feature operator&(const F_peer_memory_feature f1_, const F_peer_memory_feature::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_peer_memory_feature operator&(const F_peer_memory_feature::B f1_, const F_peer_memory_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_peer_memory_feature operator&(const F_peer_memory_feature f1_, const VkPeerMemoryFeatureFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_peer_memory_feature operator&(const VkPeerMemoryFeatureFlagBits f1_, const F_peer_memory_feature f2_){return uint32_t(f1_)&f2_.flag;}
inline F_peer_memory_feature operator|(const F_peer_memory_feature f1_, const F_peer_memory_feature f2_){return f1_.flag|f2_.flag;}
inline F_peer_memory_feature operator^(const F_peer_memory_feature f1_, const F_peer_memory_feature f2_){return f1_.flag^f2_.flag;}
/*	VkMemoryAllocateFlagBits*/
template<> struct my_class_convert<F_memory_allocate> { using type = VkMemoryAllocateFlagBits;};template<> struct my_class_convert<VkMemoryAllocateFlagBits> { using type = F_memory_allocate;};union F_memory_allocate {
	uint32_t flag;
	VkMemoryAllocateFlagBits vk_flag;
	enum B{
			/* Force allocation on specific devices */
		b_device_mask = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,
	};
	F_memory_allocate():flag(0){}
	F_memory_allocate(const uint32_t flag_):flag(flag_){}
	//F_memory_allocate(const B flag_):flag(flag_){}
	//F_memory_allocate(const VkMemoryAllocateFlagBits flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkMemoryAllocateFlagBits*(){ return reinterpret_cast<VkMemoryAllocateFlagBits*>(this); }
	operator VkMemoryAllocateFlagBits(){return vk_flag;}
	operator VkMemoryAllocateFlags&(){ return flag; }
	F_memory_allocate& operator=(const F_memory_allocate flag_){flag=flag_.flag; return *this;}
	F_memory_allocate& operator|=(const F_memory_allocate flag_){flag|=flag_.flag; return *this;}
	F_memory_allocate& operator&=(const F_memory_allocate flag_){flag&=flag_.flag; return *this;}
	F_memory_allocate& operator^=(const F_memory_allocate flag_){flag^=flag_.flag;return *this;}
	F_memory_allocate operator~(){return ~flag;}
	bool operator==(const F_memory_allocate flag_){return flag==flag_.flag;}
	bool operator!=(const F_memory_allocate flag_){return !(*this==flag_);}
	F_memory_allocate& clear(){flag = 0;return *this;}
	F_memory_allocate all_flags(){ return b_device_mask;}
	F_memory_allocate& on_device_mask(){ flag |= b_device_mask; return *this; }
	F_memory_allocate& off_device_mask(){ flag &= ~b_device_mask; return *this; }
};
inline F_memory_allocate operator&(const F_memory_allocate f1_, const F_memory_allocate f2_){return f1_.flag&f2_.flag;}
inline F_memory_allocate operator&(const F_memory_allocate f1_, const F_memory_allocate::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_memory_allocate operator&(const F_memory_allocate::B f1_, const F_memory_allocate f2_){return uint32_t(f1_)&f2_.flag;}
inline F_memory_allocate operator&(const F_memory_allocate f1_, const VkMemoryAllocateFlagBits f2_){return f1_.flag&uint32_t(f2_);}
inline F_memory_allocate operator&(const VkMemoryAllocateFlagBits f1_, const F_memory_allocate f2_){return uint32_t(f1_)&f2_.flag;}
inline F_memory_allocate operator|(const F_memory_allocate f1_, const F_memory_allocate f2_){return f1_.flag|f2_.flag;}
inline F_memory_allocate operator^(const F_memory_allocate f1_, const F_memory_allocate f2_){return f1_.flag^f2_.flag;}
/*	VkDeviceGroupPresentModeFlagBitsKHR*/
template<> struct my_class_convert<F_device_group_present_mode_KHR> { using type = VkDeviceGroupPresentModeFlagBitsKHR;};template<> struct my_class_convert<VkDeviceGroupPresentModeFlagBitsKHR> { using type = F_device_group_present_mode_KHR;};union F_device_group_present_mode_KHR {
	uint32_t flag;
	VkDeviceGroupPresentModeFlagBitsKHR vk_flag;
	enum B{
			/* Present from local memory */
		b_local_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR,
			/* Present from remote memory */
		b_remote_khr = VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR,
			/* Present sum of local and/or remote memory */
		b_sum_khr = VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR,
			/* Each physical device presents from local memory */
		b_local_multi_device_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR,
	};
	F_device_group_present_mode_KHR():flag(0){}
	F_device_group_present_mode_KHR(const uint32_t flag_):flag(flag_){}
	//F_device_group_present_mode_KHR(const B flag_):flag(flag_){}
	//F_device_group_present_mode_KHR(const VkDeviceGroupPresentModeFlagBitsKHR flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDeviceGroupPresentModeFlagBitsKHR*(){ return reinterpret_cast<VkDeviceGroupPresentModeFlagBitsKHR*>(this); }
	operator VkDeviceGroupPresentModeFlagBitsKHR(){return vk_flag;}
	operator VkDeviceGroupPresentModeFlagsKHR&(){ return flag; }
	F_device_group_present_mode_KHR& operator=(const F_device_group_present_mode_KHR flag_){flag=flag_.flag; return *this;}
	F_device_group_present_mode_KHR& operator|=(const F_device_group_present_mode_KHR flag_){flag|=flag_.flag; return *this;}
	F_device_group_present_mode_KHR& operator&=(const F_device_group_present_mode_KHR flag_){flag&=flag_.flag; return *this;}
	F_device_group_present_mode_KHR& operator^=(const F_device_group_present_mode_KHR flag_){flag^=flag_.flag;return *this;}
	F_device_group_present_mode_KHR operator~(){return ~flag;}
	bool operator==(const F_device_group_present_mode_KHR flag_){return flag==flag_.flag;}
	bool operator!=(const F_device_group_present_mode_KHR flag_){return !(*this==flag_);}
	F_device_group_present_mode_KHR& clear(){flag = 0;return *this;}
	F_device_group_present_mode_KHR all_flags(){ return b_local_khr | b_remote_khr | b_sum_khr | b_local_multi_device_khr;}
	F_device_group_present_mode_KHR& on_local_khr(){ flag |= b_local_khr; return *this; }
	F_device_group_present_mode_KHR& off_local_khr(){ flag &= ~b_local_khr; return *this; }
	F_device_group_present_mode_KHR& on_remote_khr(){ flag |= b_remote_khr; return *this; }
	F_device_group_present_mode_KHR& off_remote_khr(){ flag &= ~b_remote_khr; return *this; }
	F_device_group_present_mode_KHR& on_sum_khr(){ flag |= b_sum_khr; return *this; }
	F_device_group_present_mode_KHR& off_sum_khr(){ flag &= ~b_sum_khr; return *this; }
	F_device_group_present_mode_KHR& on_local_multi_device_khr(){ flag |= b_local_multi_device_khr; return *this; }
	F_device_group_present_mode_KHR& off_local_multi_device_khr(){ flag &= ~b_local_multi_device_khr; return *this; }
};
inline F_device_group_present_mode_KHR operator&(const F_device_group_present_mode_KHR f1_, const F_device_group_present_mode_KHR f2_){return f1_.flag&f2_.flag;}
inline F_device_group_present_mode_KHR operator&(const F_device_group_present_mode_KHR f1_, const F_device_group_present_mode_KHR::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_device_group_present_mode_KHR operator&(const F_device_group_present_mode_KHR::B f1_, const F_device_group_present_mode_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_device_group_present_mode_KHR operator&(const F_device_group_present_mode_KHR f1_, const VkDeviceGroupPresentModeFlagBitsKHR f2_){return f1_.flag&uint32_t(f2_);}
inline F_device_group_present_mode_KHR operator&(const VkDeviceGroupPresentModeFlagBitsKHR f1_, const F_device_group_present_mode_KHR f2_){return uint32_t(f1_)&f2_.flag;}
inline F_device_group_present_mode_KHR operator|(const F_device_group_present_mode_KHR f1_, const F_device_group_present_mode_KHR f2_){return f1_.flag|f2_.flag;}
inline F_device_group_present_mode_KHR operator^(const F_device_group_present_mode_KHR f1_, const F_device_group_present_mode_KHR f2_){return f1_.flag^f2_.flag;}
/*	VkSwapchainCreateFlagBitsKHR*/
using F_swapchain_create_KHR = 
			VkSwapchainCreateFlagBitsKHR;

/*	VkSubpassDescriptionFlagBits*/
using F_subpass_description = 
			VkSubpassDescriptionFlagBits;

/*	VkDebugUtilsMessageSeverityFlagBitsEXT*/
template<> struct my_class_convert<F_debug_utils_message_severity_EXT> { using type = VkDebugUtilsMessageSeverityFlagBitsEXT;};template<> struct my_class_convert<VkDebugUtilsMessageSeverityFlagBitsEXT> { using type = F_debug_utils_message_severity_EXT;};union F_debug_utils_message_severity_EXT {
	uint32_t flag;
	VkDebugUtilsMessageSeverityFlagBitsEXT vk_flag;
	enum B{
		b_verbose_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT,
		b_info_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT,
		b_warning_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT,
		b_error_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
	};
	F_debug_utils_message_severity_EXT():flag(0){}
	F_debug_utils_message_severity_EXT(const uint32_t flag_):flag(flag_){}
	//F_debug_utils_message_severity_EXT(const B flag_):flag(flag_){}
	//F_debug_utils_message_severity_EXT(const VkDebugUtilsMessageSeverityFlagBitsEXT flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDebugUtilsMessageSeverityFlagBitsEXT*(){ return reinterpret_cast<VkDebugUtilsMessageSeverityFlagBitsEXT*>(this); }
	operator VkDebugUtilsMessageSeverityFlagBitsEXT(){return vk_flag;}
	operator VkDebugUtilsMessageSeverityFlagsEXT&(){ return flag; }
	F_debug_utils_message_severity_EXT& operator=(const F_debug_utils_message_severity_EXT flag_){flag=flag_.flag; return *this;}
	F_debug_utils_message_severity_EXT& operator|=(const F_debug_utils_message_severity_EXT flag_){flag|=flag_.flag; return *this;}
	F_debug_utils_message_severity_EXT& operator&=(const F_debug_utils_message_severity_EXT flag_){flag&=flag_.flag; return *this;}
	F_debug_utils_message_severity_EXT& operator^=(const F_debug_utils_message_severity_EXT flag_){flag^=flag_.flag;return *this;}
	F_debug_utils_message_severity_EXT operator~(){return ~flag;}
	bool operator==(const F_debug_utils_message_severity_EXT flag_){return flag==flag_.flag;}
	bool operator!=(const F_debug_utils_message_severity_EXT flag_){return !(*this==flag_);}
	F_debug_utils_message_severity_EXT& clear(){flag = 0;return *this;}
	F_debug_utils_message_severity_EXT all_flags(){ return b_verbose_ext | b_info_ext | b_warning_ext | b_error_ext;}
	F_debug_utils_message_severity_EXT& on_verbose_ext(){ flag |= b_verbose_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_verbose_ext(){ flag &= ~b_verbose_ext; return *this; }
	F_debug_utils_message_severity_EXT& on_info_ext(){ flag |= b_info_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_info_ext(){ flag &= ~b_info_ext; return *this; }
	F_debug_utils_message_severity_EXT& on_warning_ext(){ flag |= b_warning_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_warning_ext(){ flag &= ~b_warning_ext; return *this; }
	F_debug_utils_message_severity_EXT& on_error_ext(){ flag |= b_error_ext; return *this; }
	F_debug_utils_message_severity_EXT& off_error_ext(){ flag &= ~b_error_ext; return *this; }
};
inline F_debug_utils_message_severity_EXT operator&(const F_debug_utils_message_severity_EXT f1_, const F_debug_utils_message_severity_EXT f2_){return f1_.flag&f2_.flag;}
inline F_debug_utils_message_severity_EXT operator&(const F_debug_utils_message_severity_EXT f1_, const F_debug_utils_message_severity_EXT::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_debug_utils_message_severity_EXT operator&(const F_debug_utils_message_severity_EXT::B f1_, const F_debug_utils_message_severity_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_debug_utils_message_severity_EXT operator&(const F_debug_utils_message_severity_EXT f1_, const VkDebugUtilsMessageSeverityFlagBitsEXT f2_){return f1_.flag&uint32_t(f2_);}
inline F_debug_utils_message_severity_EXT operator&(const VkDebugUtilsMessageSeverityFlagBitsEXT f1_, const F_debug_utils_message_severity_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_debug_utils_message_severity_EXT operator|(const F_debug_utils_message_severity_EXT f1_, const F_debug_utils_message_severity_EXT f2_){return f1_.flag|f2_.flag;}
inline F_debug_utils_message_severity_EXT operator^(const F_debug_utils_message_severity_EXT f1_, const F_debug_utils_message_severity_EXT f2_){return f1_.flag^f2_.flag;}
/*	VkDebugUtilsMessageTypeFlagBitsEXT*/
template<> struct my_class_convert<F_debug_utils_message_type_EXT> { using type = VkDebugUtilsMessageTypeFlagBitsEXT;};template<> struct my_class_convert<VkDebugUtilsMessageTypeFlagBitsEXT> { using type = F_debug_utils_message_type_EXT;};union F_debug_utils_message_type_EXT {
	uint32_t flag;
	VkDebugUtilsMessageTypeFlagBitsEXT vk_flag;
	enum B{
		b_general_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT,
		b_validation_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT,
		b_performance_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,
	};
	F_debug_utils_message_type_EXT():flag(0){}
	F_debug_utils_message_type_EXT(const uint32_t flag_):flag(flag_){}
	//F_debug_utils_message_type_EXT(const B flag_):flag(flag_){}
	//F_debug_utils_message_type_EXT(const VkDebugUtilsMessageTypeFlagBitsEXT flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDebugUtilsMessageTypeFlagBitsEXT*(){ return reinterpret_cast<VkDebugUtilsMessageTypeFlagBitsEXT*>(this); }
	operator VkDebugUtilsMessageTypeFlagBitsEXT(){return vk_flag;}
	operator VkDebugUtilsMessageTypeFlagsEXT&(){ return flag; }
	F_debug_utils_message_type_EXT& operator=(const F_debug_utils_message_type_EXT flag_){flag=flag_.flag; return *this;}
	F_debug_utils_message_type_EXT& operator|=(const F_debug_utils_message_type_EXT flag_){flag|=flag_.flag; return *this;}
	F_debug_utils_message_type_EXT& operator&=(const F_debug_utils_message_type_EXT flag_){flag&=flag_.flag; return *this;}
	F_debug_utils_message_type_EXT& operator^=(const F_debug_utils_message_type_EXT flag_){flag^=flag_.flag;return *this;}
	F_debug_utils_message_type_EXT operator~(){return ~flag;}
	bool operator==(const F_debug_utils_message_type_EXT flag_){return flag==flag_.flag;}
	bool operator!=(const F_debug_utils_message_type_EXT flag_){return !(*this==flag_);}
	F_debug_utils_message_type_EXT& clear(){flag = 0;return *this;}
	F_debug_utils_message_type_EXT all_flags(){ return b_general_ext | b_validation_ext | b_performance_ext;}
	F_debug_utils_message_type_EXT& on_general_ext(){ flag |= b_general_ext; return *this; }
	F_debug_utils_message_type_EXT& off_general_ext(){ flag &= ~b_general_ext; return *this; }
	F_debug_utils_message_type_EXT& on_validation_ext(){ flag |= b_validation_ext; return *this; }
	F_debug_utils_message_type_EXT& off_validation_ext(){ flag &= ~b_validation_ext; return *this; }
	F_debug_utils_message_type_EXT& on_performance_ext(){ flag |= b_performance_ext; return *this; }
	F_debug_utils_message_type_EXT& off_performance_ext(){ flag &= ~b_performance_ext; return *this; }
};
inline F_debug_utils_message_type_EXT operator&(const F_debug_utils_message_type_EXT f1_, const F_debug_utils_message_type_EXT f2_){return f1_.flag&f2_.flag;}
inline F_debug_utils_message_type_EXT operator&(const F_debug_utils_message_type_EXT f1_, const F_debug_utils_message_type_EXT::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_debug_utils_message_type_EXT operator&(const F_debug_utils_message_type_EXT::B f1_, const F_debug_utils_message_type_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_debug_utils_message_type_EXT operator&(const F_debug_utils_message_type_EXT f1_, const VkDebugUtilsMessageTypeFlagBitsEXT f2_){return f1_.flag&uint32_t(f2_);}
inline F_debug_utils_message_type_EXT operator&(const VkDebugUtilsMessageTypeFlagBitsEXT f1_, const F_debug_utils_message_type_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_debug_utils_message_type_EXT operator|(const F_debug_utils_message_type_EXT f1_, const F_debug_utils_message_type_EXT f2_){return f1_.flag|f2_.flag;}
inline F_debug_utils_message_type_EXT operator^(const F_debug_utils_message_type_EXT f1_, const F_debug_utils_message_type_EXT f2_){return f1_.flag^f2_.flag;}
/*	VkDescriptorBindingFlagBitsEXT*/
template<> struct my_class_convert<F_descriptor_binding_EXT> { using type = VkDescriptorBindingFlagBitsEXT;};template<> struct my_class_convert<VkDescriptorBindingFlagBitsEXT> { using type = F_descriptor_binding_EXT;};union F_descriptor_binding_EXT {
	uint32_t flag;
	VkDescriptorBindingFlagBitsEXT vk_flag;
	enum B{
		b_update_after_bind_ext = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT,
		b_update_unused_while_pending_ext = VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT,
		b_partially_bound_ext = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT,
		b_variable_descriptor_count_ext = VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT,
	};
	F_descriptor_binding_EXT():flag(0){}
	F_descriptor_binding_EXT(const uint32_t flag_):flag(flag_){}
	//F_descriptor_binding_EXT(const B flag_):flag(flag_){}
	//F_descriptor_binding_EXT(const VkDescriptorBindingFlagBitsEXT flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkDescriptorBindingFlagBitsEXT*(){ return reinterpret_cast<VkDescriptorBindingFlagBitsEXT*>(this); }
	operator VkDescriptorBindingFlagBitsEXT(){return vk_flag;}
	operator VkDescriptorBindingFlagsEXT&(){ return flag; }
	F_descriptor_binding_EXT& operator=(const F_descriptor_binding_EXT flag_){flag=flag_.flag; return *this;}
	F_descriptor_binding_EXT& operator|=(const F_descriptor_binding_EXT flag_){flag|=flag_.flag; return *this;}
	F_descriptor_binding_EXT& operator&=(const F_descriptor_binding_EXT flag_){flag&=flag_.flag; return *this;}
	F_descriptor_binding_EXT& operator^=(const F_descriptor_binding_EXT flag_){flag^=flag_.flag;return *this;}
	F_descriptor_binding_EXT operator~(){return ~flag;}
	bool operator==(const F_descriptor_binding_EXT flag_){return flag==flag_.flag;}
	bool operator!=(const F_descriptor_binding_EXT flag_){return !(*this==flag_);}
	F_descriptor_binding_EXT& clear(){flag = 0;return *this;}
	F_descriptor_binding_EXT all_flags(){ return b_update_after_bind_ext | b_update_unused_while_pending_ext | b_partially_bound_ext | b_variable_descriptor_count_ext;}
	F_descriptor_binding_EXT& on_update_after_bind_ext(){ flag |= b_update_after_bind_ext; return *this; }
	F_descriptor_binding_EXT& off_update_after_bind_ext(){ flag &= ~b_update_after_bind_ext; return *this; }
	F_descriptor_binding_EXT& on_update_unused_while_pending_ext(){ flag |= b_update_unused_while_pending_ext; return *this; }
	F_descriptor_binding_EXT& off_update_unused_while_pending_ext(){ flag &= ~b_update_unused_while_pending_ext; return *this; }
	F_descriptor_binding_EXT& on_partially_bound_ext(){ flag |= b_partially_bound_ext; return *this; }
	F_descriptor_binding_EXT& off_partially_bound_ext(){ flag &= ~b_partially_bound_ext; return *this; }
	F_descriptor_binding_EXT& on_variable_descriptor_count_ext(){ flag |= b_variable_descriptor_count_ext; return *this; }
	F_descriptor_binding_EXT& off_variable_descriptor_count_ext(){ flag &= ~b_variable_descriptor_count_ext; return *this; }
};
inline F_descriptor_binding_EXT operator&(const F_descriptor_binding_EXT f1_, const F_descriptor_binding_EXT f2_){return f1_.flag&f2_.flag;}
inline F_descriptor_binding_EXT operator&(const F_descriptor_binding_EXT f1_, const F_descriptor_binding_EXT::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_descriptor_binding_EXT operator&(const F_descriptor_binding_EXT::B f1_, const F_descriptor_binding_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_descriptor_binding_EXT operator&(const F_descriptor_binding_EXT f1_, const VkDescriptorBindingFlagBitsEXT f2_){return f1_.flag&uint32_t(f2_);}
inline F_descriptor_binding_EXT operator&(const VkDescriptorBindingFlagBitsEXT f1_, const F_descriptor_binding_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_descriptor_binding_EXT operator|(const F_descriptor_binding_EXT f1_, const F_descriptor_binding_EXT f2_){return f1_.flag|f2_.flag;}
inline F_descriptor_binding_EXT operator^(const F_descriptor_binding_EXT f1_, const F_descriptor_binding_EXT f2_){return f1_.flag^f2_.flag;}
/*	VkConditionalRenderingFlagBitsEXT*/
template<> struct my_class_convert<F_conditional_rendering_EXT> { using type = VkConditionalRenderingFlagBitsEXT;};template<> struct my_class_convert<VkConditionalRenderingFlagBitsEXT> { using type = F_conditional_rendering_EXT;};union F_conditional_rendering_EXT {
	uint32_t flag;
	VkConditionalRenderingFlagBitsEXT vk_flag;
	enum B{
		b_inverted_ext = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,
	};
	F_conditional_rendering_EXT():flag(0){}
	F_conditional_rendering_EXT(const uint32_t flag_):flag(flag_){}
	//F_conditional_rendering_EXT(const B flag_):flag(flag_){}
	//F_conditional_rendering_EXT(const VkConditionalRenderingFlagBitsEXT flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkConditionalRenderingFlagBitsEXT*(){ return reinterpret_cast<VkConditionalRenderingFlagBitsEXT*>(this); }
	operator VkConditionalRenderingFlagBitsEXT(){return vk_flag;}
	operator VkConditionalRenderingFlagsEXT&(){ return flag; }
	F_conditional_rendering_EXT& operator=(const F_conditional_rendering_EXT flag_){flag=flag_.flag; return *this;}
	F_conditional_rendering_EXT& operator|=(const F_conditional_rendering_EXT flag_){flag|=flag_.flag; return *this;}
	F_conditional_rendering_EXT& operator&=(const F_conditional_rendering_EXT flag_){flag&=flag_.flag; return *this;}
	F_conditional_rendering_EXT& operator^=(const F_conditional_rendering_EXT flag_){flag^=flag_.flag;return *this;}
	F_conditional_rendering_EXT operator~(){return ~flag;}
	bool operator==(const F_conditional_rendering_EXT flag_){return flag==flag_.flag;}
	bool operator!=(const F_conditional_rendering_EXT flag_){return !(*this==flag_);}
	F_conditional_rendering_EXT& clear(){flag = 0;return *this;}
	F_conditional_rendering_EXT all_flags(){ return b_inverted_ext;}
	F_conditional_rendering_EXT& on_inverted_ext(){ flag |= b_inverted_ext; return *this; }
	F_conditional_rendering_EXT& off_inverted_ext(){ flag &= ~b_inverted_ext; return *this; }
};
inline F_conditional_rendering_EXT operator&(const F_conditional_rendering_EXT f1_, const F_conditional_rendering_EXT f2_){return f1_.flag&f2_.flag;}
inline F_conditional_rendering_EXT operator&(const F_conditional_rendering_EXT f1_, const F_conditional_rendering_EXT::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_conditional_rendering_EXT operator&(const F_conditional_rendering_EXT::B f1_, const F_conditional_rendering_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_conditional_rendering_EXT operator&(const F_conditional_rendering_EXT f1_, const VkConditionalRenderingFlagBitsEXT f2_){return f1_.flag&uint32_t(f2_);}
inline F_conditional_rendering_EXT operator&(const VkConditionalRenderingFlagBitsEXT f1_, const F_conditional_rendering_EXT f2_){return uint32_t(f1_)&f2_.flag;}
inline F_conditional_rendering_EXT operator|(const F_conditional_rendering_EXT f1_, const F_conditional_rendering_EXT f2_){return f1_.flag|f2_.flag;}
inline F_conditional_rendering_EXT operator^(const F_conditional_rendering_EXT f1_, const F_conditional_rendering_EXT f2_){return f1_.flag^f2_.flag;}
/*	VkGeometryInstanceFlagBitsNVX*/
template<> struct my_class_convert<F_geometry_instance_NVX> { using type = VkGeometryInstanceFlagBitsNVX;};template<> struct my_class_convert<VkGeometryInstanceFlagBitsNVX> { using type = F_geometry_instance_NVX;};union F_geometry_instance_NVX {
	uint32_t flag;
	VkGeometryInstanceFlagBitsNVX vk_flag;
	enum B{
		b_triangle_cull_disable_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX,
		b_triangle_cull_flip_winding_nvx = VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX,
		b_force_opaque_nvx = VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX,
		b_force_no_opaque_nvx = VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX,
	};
	F_geometry_instance_NVX():flag(0){}
	F_geometry_instance_NVX(const uint32_t flag_):flag(flag_){}
	//F_geometry_instance_NVX(const B flag_):flag(flag_){}
	//F_geometry_instance_NVX(const VkGeometryInstanceFlagBitsNVX flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkGeometryInstanceFlagBitsNVX*(){ return reinterpret_cast<VkGeometryInstanceFlagBitsNVX*>(this); }
	operator VkGeometryInstanceFlagBitsNVX(){return vk_flag;}
	operator VkGeometryInstanceFlagsNVX&(){ return flag; }
	F_geometry_instance_NVX& operator=(const F_geometry_instance_NVX flag_){flag=flag_.flag; return *this;}
	F_geometry_instance_NVX& operator|=(const F_geometry_instance_NVX flag_){flag|=flag_.flag; return *this;}
	F_geometry_instance_NVX& operator&=(const F_geometry_instance_NVX flag_){flag&=flag_.flag; return *this;}
	F_geometry_instance_NVX& operator^=(const F_geometry_instance_NVX flag_){flag^=flag_.flag;return *this;}
	F_geometry_instance_NVX operator~(){return ~flag;}
	bool operator==(const F_geometry_instance_NVX flag_){return flag==flag_.flag;}
	bool operator!=(const F_geometry_instance_NVX flag_){return !(*this==flag_);}
	F_geometry_instance_NVX& clear(){flag = 0;return *this;}
	F_geometry_instance_NVX all_flags(){ return b_triangle_cull_disable_nvx | b_triangle_cull_flip_winding_nvx | b_force_opaque_nvx | b_force_no_opaque_nvx;}
	F_geometry_instance_NVX& on_triangle_cull_disable_nvx(){ flag |= b_triangle_cull_disable_nvx; return *this; }
	F_geometry_instance_NVX& off_triangle_cull_disable_nvx(){ flag &= ~b_triangle_cull_disable_nvx; return *this; }
	F_geometry_instance_NVX& on_triangle_cull_flip_winding_nvx(){ flag |= b_triangle_cull_flip_winding_nvx; return *this; }
	F_geometry_instance_NVX& off_triangle_cull_flip_winding_nvx(){ flag &= ~b_triangle_cull_flip_winding_nvx; return *this; }
	F_geometry_instance_NVX& on_force_opaque_nvx(){ flag |= b_force_opaque_nvx; return *this; }
	F_geometry_instance_NVX& off_force_opaque_nvx(){ flag &= ~b_force_opaque_nvx; return *this; }
	F_geometry_instance_NVX& on_force_no_opaque_nvx(){ flag |= b_force_no_opaque_nvx; return *this; }
	F_geometry_instance_NVX& off_force_no_opaque_nvx(){ flag &= ~b_force_no_opaque_nvx; return *this; }
};
inline F_geometry_instance_NVX operator&(const F_geometry_instance_NVX f1_, const F_geometry_instance_NVX f2_){return f1_.flag&f2_.flag;}
inline F_geometry_instance_NVX operator&(const F_geometry_instance_NVX f1_, const F_geometry_instance_NVX::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_geometry_instance_NVX operator&(const F_geometry_instance_NVX::B f1_, const F_geometry_instance_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_geometry_instance_NVX operator&(const F_geometry_instance_NVX f1_, const VkGeometryInstanceFlagBitsNVX f2_){return f1_.flag&uint32_t(f2_);}
inline F_geometry_instance_NVX operator&(const VkGeometryInstanceFlagBitsNVX f1_, const F_geometry_instance_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_geometry_instance_NVX operator|(const F_geometry_instance_NVX f1_, const F_geometry_instance_NVX f2_){return f1_.flag|f2_.flag;}
inline F_geometry_instance_NVX operator^(const F_geometry_instance_NVX f1_, const F_geometry_instance_NVX f2_){return f1_.flag^f2_.flag;}
/*	VkGeometryFlagBitsNVX*/
template<> struct my_class_convert<F_geometry_NVX> { using type = VkGeometryFlagBitsNVX;};template<> struct my_class_convert<VkGeometryFlagBitsNVX> { using type = F_geometry_NVX;};union F_geometry_NVX {
	uint32_t flag;
	VkGeometryFlagBitsNVX vk_flag;
	enum B{
		b_opaque_nvx = VK_GEOMETRY_OPAQUE_BIT_NVX,
		b_no_duplicate_any_hit_invocation_nvx = VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX,
	};
	F_geometry_NVX():flag(0){}
	F_geometry_NVX(const uint32_t flag_):flag(flag_){}
	//F_geometry_NVX(const B flag_):flag(flag_){}
	//F_geometry_NVX(const VkGeometryFlagBitsNVX flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkGeometryFlagBitsNVX*(){ return reinterpret_cast<VkGeometryFlagBitsNVX*>(this); }
	operator VkGeometryFlagBitsNVX(){return vk_flag;}
	operator VkGeometryFlagsNVX&(){ return flag; }
	F_geometry_NVX& operator=(const F_geometry_NVX flag_){flag=flag_.flag; return *this;}
	F_geometry_NVX& operator|=(const F_geometry_NVX flag_){flag|=flag_.flag; return *this;}
	F_geometry_NVX& operator&=(const F_geometry_NVX flag_){flag&=flag_.flag; return *this;}
	F_geometry_NVX& operator^=(const F_geometry_NVX flag_){flag^=flag_.flag;return *this;}
	F_geometry_NVX operator~(){return ~flag;}
	bool operator==(const F_geometry_NVX flag_){return flag==flag_.flag;}
	bool operator!=(const F_geometry_NVX flag_){return !(*this==flag_);}
	F_geometry_NVX& clear(){flag = 0;return *this;}
	F_geometry_NVX all_flags(){ return b_opaque_nvx | b_no_duplicate_any_hit_invocation_nvx;}
	F_geometry_NVX& on_opaque_nvx(){ flag |= b_opaque_nvx; return *this; }
	F_geometry_NVX& off_opaque_nvx(){ flag &= ~b_opaque_nvx; return *this; }
	F_geometry_NVX& on_no_duplicate_any_hit_invocation_nvx(){ flag |= b_no_duplicate_any_hit_invocation_nvx; return *this; }
	F_geometry_NVX& off_no_duplicate_any_hit_invocation_nvx(){ flag &= ~b_no_duplicate_any_hit_invocation_nvx; return *this; }
};
inline F_geometry_NVX operator&(const F_geometry_NVX f1_, const F_geometry_NVX f2_){return f1_.flag&f2_.flag;}
inline F_geometry_NVX operator&(const F_geometry_NVX f1_, const F_geometry_NVX::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_geometry_NVX operator&(const F_geometry_NVX::B f1_, const F_geometry_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_geometry_NVX operator&(const F_geometry_NVX f1_, const VkGeometryFlagBitsNVX f2_){return f1_.flag&uint32_t(f2_);}
inline F_geometry_NVX operator&(const VkGeometryFlagBitsNVX f1_, const F_geometry_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_geometry_NVX operator|(const F_geometry_NVX f1_, const F_geometry_NVX f2_){return f1_.flag|f2_.flag;}
inline F_geometry_NVX operator^(const F_geometry_NVX f1_, const F_geometry_NVX f2_){return f1_.flag^f2_.flag;}
/*	VkBuildAccelerationStructureFlagBitsNVX*/
template<> struct my_class_convert<F_build_acceleration_structure_NVX> { using type = VkBuildAccelerationStructureFlagBitsNVX;};template<> struct my_class_convert<VkBuildAccelerationStructureFlagBitsNVX> { using type = F_build_acceleration_structure_NVX;};union F_build_acceleration_structure_NVX {
	uint32_t flag;
	VkBuildAccelerationStructureFlagBitsNVX vk_flag;
	enum B{
		b_allow_update_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX,
		b_allow_compaction_nvx = VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX,
		b_prefer_fast_trace_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX,
		b_prefer_fast_build_nvx = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX,
		b_low_memory_nvx = VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX,
	};
	F_build_acceleration_structure_NVX():flag(0){}
	F_build_acceleration_structure_NVX(const uint32_t flag_):flag(flag_){}
	//F_build_acceleration_structure_NVX(const B flag_):flag(flag_){}
	//F_build_acceleration_structure_NVX(const VkBuildAccelerationStructureFlagBitsNVX flag_):vk_flag(flag_){}
	//operator uint32_t(){return flag;}
	operator VkBuildAccelerationStructureFlagBitsNVX*(){ return reinterpret_cast<VkBuildAccelerationStructureFlagBitsNVX*>(this); }
	operator VkBuildAccelerationStructureFlagBitsNVX(){return vk_flag;}
	operator VkBuildAccelerationStructureFlagsNVX&(){ return flag; }
	F_build_acceleration_structure_NVX& operator=(const F_build_acceleration_structure_NVX flag_){flag=flag_.flag; return *this;}
	F_build_acceleration_structure_NVX& operator|=(const F_build_acceleration_structure_NVX flag_){flag|=flag_.flag; return *this;}
	F_build_acceleration_structure_NVX& operator&=(const F_build_acceleration_structure_NVX flag_){flag&=flag_.flag; return *this;}
	F_build_acceleration_structure_NVX& operator^=(const F_build_acceleration_structure_NVX flag_){flag^=flag_.flag;return *this;}
	F_build_acceleration_structure_NVX operator~(){return ~flag;}
	bool operator==(const F_build_acceleration_structure_NVX flag_){return flag==flag_.flag;}
	bool operator!=(const F_build_acceleration_structure_NVX flag_){return !(*this==flag_);}
	F_build_acceleration_structure_NVX& clear(){flag = 0;return *this;}
	F_build_acceleration_structure_NVX all_flags(){ return b_allow_update_nvx | b_allow_compaction_nvx | b_prefer_fast_trace_nvx | b_prefer_fast_build_nvx | b_low_memory_nvx;}
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
inline F_build_acceleration_structure_NVX operator&(const F_build_acceleration_structure_NVX f1_, const F_build_acceleration_structure_NVX f2_){return f1_.flag&f2_.flag;}
inline F_build_acceleration_structure_NVX operator&(const F_build_acceleration_structure_NVX f1_, const F_build_acceleration_structure_NVX::B f2_){return f1_.flag&uint32_t(f2_);}
inline F_build_acceleration_structure_NVX operator&(const F_build_acceleration_structure_NVX::B f1_, const F_build_acceleration_structure_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_build_acceleration_structure_NVX operator&(const F_build_acceleration_structure_NVX f1_, const VkBuildAccelerationStructureFlagBitsNVX f2_){return f1_.flag&uint32_t(f2_);}
inline F_build_acceleration_structure_NVX operator&(const VkBuildAccelerationStructureFlagBitsNVX f1_, const F_build_acceleration_structure_NVX f2_){return uint32_t(f1_)&f2_.flag;}
inline F_build_acceleration_structure_NVX operator|(const F_build_acceleration_structure_NVX f1_, const F_build_acceleration_structure_NVX f2_){return f1_.flag|f2_.flag;}
inline F_build_acceleration_structure_NVX operator^(const F_build_acceleration_structure_NVX f1_, const F_build_acceleration_structure_NVX f2_){return f1_.flag^f2_.flag;}
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
template<> struct my_class_convert<S_offset_2d> { using type = VkOffset2D;};
template<> struct my_class_convert<VkOffset2D> { using type = S_offset_2d;};
struct		S_offset_2d:VkOffset2D{
	using VkOffset2D::x;
	using VkOffset2D::y;
};

/*	VkOffset3D
*/
template<> struct my_class_convert<S_offset_3d> { using type = VkOffset3D;};
template<> struct my_class_convert<VkOffset3D> { using type = S_offset_3d;};
struct		S_offset_3d:VkOffset3D{
	using VkOffset3D::x;
	using VkOffset3D::y;
	using VkOffset3D::z;
};

/*	VkExtent2D
*/
template<> struct my_class_convert<S_extent_2d> { using type = VkExtent2D;};
template<> struct my_class_convert<VkExtent2D> { using type = S_extent_2d;};
struct		S_extent_2d:VkExtent2D{
	using VkExtent2D::width;
	using VkExtent2D::height;
};

/*	VkExtent3D
*/
template<> struct my_class_convert<S_extent_3d> { using type = VkExtent3D;};
template<> struct my_class_convert<VkExtent3D> { using type = S_extent_3d;};
struct		S_extent_3d:VkExtent3D{
	using VkExtent3D::width;
	using VkExtent3D::height;
	using VkExtent3D::depth;
};

/*	VkViewport
*/
template<> struct my_class_convert<S_viewport> { using type = VkViewport;};
template<> struct my_class_convert<VkViewport> { using type = S_viewport;};
struct		S_viewport:VkViewport{
	using VkViewport::x;
	using VkViewport::y;
	using VkViewport::width;
	using VkViewport::height;
	using VkViewport::minDepth;
	using VkViewport::maxDepth;
};

/*	VkRect2D
*/
template<> struct my_class_convert<S_rect_2d> { using type = VkRect2D;};
template<> struct my_class_convert<VkRect2D> { using type = S_rect_2d;};
struct		S_rect_2d:VkRect2D{
	using VkRect2D::offset;
	using VkRect2D::extent;
};

/*	VkClearRect
*/
template<> struct my_class_convert<S_clear_rect> { using type = VkClearRect;};
template<> struct my_class_convert<VkClearRect> { using type = S_clear_rect;};
struct		S_clear_rect:VkClearRect{
	using VkClearRect::rect;
	using VkClearRect::baseArrayLayer;
	using VkClearRect::layerCount;
};

/*	VkComponentMapping
*/
template<> struct my_class_convert<S_component_mapping> { using type = VkComponentMapping;};
template<> struct my_class_convert<VkComponentMapping> { using type = S_component_mapping;};
struct		S_component_mapping:VkComponentMapping{
	using VkComponentMapping::r;
	using VkComponentMapping::g;
	using VkComponentMapping::b;
	using VkComponentMapping::a;
};

/*	VkPhysicalDeviceLimits
(returnedonly)
*/
template<> struct my_class_convert<S_physical_device_limits> { using type = VkPhysicalDeviceLimits;};
template<> struct my_class_convert<VkPhysicalDeviceLimits> { using type = S_physical_device_limits;};
struct		S_physical_device_limits:VkPhysicalDeviceLimits{
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
};

/*	VkPhysicalDeviceSparseProperties
(returnedonly)
*/
template<> struct my_class_convert<S_physical_device_sparse_properties> { using type = VkPhysicalDeviceSparseProperties;};
template<> struct my_class_convert<VkPhysicalDeviceSparseProperties> { using type = S_physical_device_sparse_properties;};
struct		S_physical_device_sparse_properties:VkPhysicalDeviceSparseProperties{
	using VkPhysicalDeviceSparseProperties::residencyStandard2DBlockShape;
	using VkPhysicalDeviceSparseProperties::residencyStandard2DMultisampleBlockShape;
	using VkPhysicalDeviceSparseProperties::residencyStandard3DBlockShape;
	using VkPhysicalDeviceSparseProperties::residencyAlignedMipSize;
	using VkPhysicalDeviceSparseProperties::residencyNonResidentStrict;
};

/*	VkPhysicalDeviceProperties
(returnedonly)
*/
template<> struct my_class_convert<S_physical_device_properties> { using type = VkPhysicalDeviceProperties;};
template<> struct my_class_convert<VkPhysicalDeviceProperties> { using type = S_physical_device_properties;};
struct		S_physical_device_properties:VkPhysicalDeviceProperties{
	using VkPhysicalDeviceProperties::apiVersion;
	using VkPhysicalDeviceProperties::driverVersion;
	using VkPhysicalDeviceProperties::vendorID;
	using VkPhysicalDeviceProperties::deviceID;
	using VkPhysicalDeviceProperties::deviceType;
	using VkPhysicalDeviceProperties::deviceName;
	using VkPhysicalDeviceProperties::pipelineCacheUUID;
	using VkPhysicalDeviceProperties::limits;
	using VkPhysicalDeviceProperties::sparseProperties;
};

/*	VkExtensionProperties
(returnedonly)
*/
template<> struct my_class_convert<S_extension_properties> { using type = VkExtensionProperties;};
template<> struct my_class_convert<VkExtensionProperties> { using type = S_extension_properties;};
struct		S_extension_properties:VkExtensionProperties{
	using VkExtensionProperties::extensionName;
	using VkExtensionProperties::specVersion;
};

/*	VkLayerProperties
(returnedonly)
*/
template<> struct my_class_convert<S_layer_properties> { using type = VkLayerProperties;};
template<> struct my_class_convert<VkLayerProperties> { using type = S_layer_properties;};
struct		S_layer_properties:VkLayerProperties{
	using VkLayerProperties::layerName;
	using VkLayerProperties::specVersion;
	using VkLayerProperties::implementationVersion;
	using VkLayerProperties::description;
};

/*	VkApplicationInfo
*/
template<> struct my_class_convert<S_application_info> { using type = VkApplicationInfo;};
template<> struct my_class_convert<VkApplicationInfo> { using type = S_application_info;};
struct		S_application_info:VkApplicationInfo{
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
	{	}
};

/*	VkAllocationCallbacks
*/
template<> struct my_class_convert<S_allocation_callbacks> { using type = VkAllocationCallbacks;};
template<> struct my_class_convert<VkAllocationCallbacks> { using type = S_allocation_callbacks;};
struct		S_allocation_callbacks:VkAllocationCallbacks{
	using VkAllocationCallbacks::pUserData;
	using VkAllocationCallbacks::pfnAllocation;
	using VkAllocationCallbacks::pfnReallocation;
	using VkAllocationCallbacks::pfnFree;
	using VkAllocationCallbacks::pfnInternalAllocation;
	using VkAllocationCallbacks::pfnInternalFree;
};

/*	VkDeviceQueueGlobalPriorityCreateInfoEXT
ex to: VkDeviceQueueCreateInfo
*/
template<> struct my_class_convert<S_device_queue_global_priority_create_info_EXT> { using type = VkDeviceQueueGlobalPriorityCreateInfoEXT;};
template<> struct my_class_convert<VkDeviceQueueGlobalPriorityCreateInfoEXT> { using type = S_device_queue_global_priority_create_info_EXT;};
struct		S_device_queue_global_priority_create_info_EXT:VkDeviceQueueGlobalPriorityCreateInfoEXT{
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
	{	}

friend S_device_queue_create_info;
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
template<> struct my_class_convert<S_device_queue_create_info> { using type = VkDeviceQueueCreateInfo;};
template<> struct my_class_convert<VkDeviceQueueCreateInfo> { using type = S_device_queue_create_info;};
struct		S_device_queue_create_info:VkDeviceQueueCreateInfo{
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
	,flags_
	,queueFamilyIndex_
	,queueCount_
	,pQueuePriorities_}
	{	}

S_device_queue_create_info& n_device_queue_global_priority_create_info_EXT(S_device_queue_global_priority_create_info_EXT const& next_);
void set_pNext(N_device_queue_create_info n_){pNext = n_;}
};

/*	VkPhysicalDeviceFeatures
*/
template<> struct my_class_convert<S_physical_device_features> { using type = VkPhysicalDeviceFeatures;};
template<> struct my_class_convert<VkPhysicalDeviceFeatures> { using type = S_physical_device_features;};
struct		S_physical_device_features:VkPhysicalDeviceFeatures{
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
};

/*	VkPhysicalDeviceVariablePointerFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_variable_pointer_features> { using type = VkPhysicalDeviceVariablePointerFeatures;};
template<> struct my_class_convert<VkPhysicalDeviceVariablePointerFeatures> { using type = S_physical_device_variable_pointer_features;};
struct		S_physical_device_variable_pointer_features:VkPhysicalDeviceVariablePointerFeatures{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceMultiviewFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_multiview_features> { using type = VkPhysicalDeviceMultiviewFeatures;};
template<> struct my_class_convert<VkPhysicalDeviceMultiviewFeatures> { using type = S_physical_device_multiview_features;};
struct		S_physical_device_multiview_features:VkPhysicalDeviceMultiviewFeatures{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDevice16BitStorageFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_16bit_storage_features> { using type = VkPhysicalDevice16BitStorageFeatures;};
template<> struct my_class_convert<VkPhysicalDevice16BitStorageFeatures> { using type = S_physical_device_16bit_storage_features;};
struct		S_physical_device_16bit_storage_features:VkPhysicalDevice16BitStorageFeatures{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceSamplerYcbcrConversionFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_sampler_ycbcr_conversion_features> { using type = VkPhysicalDeviceSamplerYcbcrConversionFeatures;};
template<> struct my_class_convert<VkPhysicalDeviceSamplerYcbcrConversionFeatures> { using type = S_physical_device_sampler_ycbcr_conversion_features;};
struct		S_physical_device_sampler_ycbcr_conversion_features:VkPhysicalDeviceSamplerYcbcrConversionFeatures{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceProtectedMemoryFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_protected_memory_features> { using type = VkPhysicalDeviceProtectedMemoryFeatures;};
template<> struct my_class_convert<VkPhysicalDeviceProtectedMemoryFeatures> { using type = S_physical_device_protected_memory_features;};
struct		S_physical_device_protected_memory_features:VkPhysicalDeviceProtectedMemoryFeatures{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_blend_operation_advanced_features_EXT> { using type = VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT> { using type = S_physical_device_blend_operation_advanced_features_EXT;};
struct		S_physical_device_blend_operation_advanced_features_EXT:VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceInlineUniformBlockFeaturesEXT
(returnedonly)
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_inline_uniform_block_features_EXT> { using type = VkPhysicalDeviceInlineUniformBlockFeaturesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceInlineUniformBlockFeaturesEXT> { using type = S_physical_device_inline_uniform_block_features_EXT;};
struct		S_physical_device_inline_uniform_block_features_EXT:VkPhysicalDeviceInlineUniformBlockFeaturesEXT{
private:
	using VkPhysicalDeviceInlineUniformBlockFeaturesEXT::sType;
	using VkPhysicalDeviceInlineUniformBlockFeaturesEXT::pNext;
public:
	using VkPhysicalDeviceInlineUniformBlockFeaturesEXT::inlineUniformBlock;
	using VkPhysicalDeviceInlineUniformBlockFeaturesEXT::descriptorBindingInlineUniformBlockUpdateAfterBind;

S_physical_device_inline_uniform_block_features_EXT():VkPhysicalDeviceInlineUniformBlockFeaturesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT,nullptr}{}
S_physical_device_inline_uniform_block_features_EXT(
	VkBool32 inlineUniformBlock_,
	VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind_)
	:VkPhysicalDeviceInlineUniformBlockFeaturesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT
	,nullptr
	,inlineUniformBlock_
	,descriptorBindingInlineUniformBlockUpdateAfterBind_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceShaderDrawParameterFeatures
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_shader_draw_parameter_features> { using type = VkPhysicalDeviceShaderDrawParameterFeatures;};
template<> struct my_class_convert<VkPhysicalDeviceShaderDrawParameterFeatures> { using type = S_physical_device_shader_draw_parameter_features;};
struct		S_physical_device_shader_draw_parameter_features:VkPhysicalDeviceShaderDrawParameterFeatures{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceDescriptorIndexingFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_descriptor_indexing_features_EXT> { using type = VkPhysicalDeviceDescriptorIndexingFeaturesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceDescriptorIndexingFeaturesEXT> { using type = S_physical_device_descriptor_indexing_features_EXT;};
struct		S_physical_device_descriptor_indexing_features_EXT:VkPhysicalDeviceDescriptorIndexingFeaturesEXT{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDevice8BitStorageFeaturesKHR
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_8bit_storage_features_KHR> { using type = VkPhysicalDevice8BitStorageFeaturesKHR;};
template<> struct my_class_convert<VkPhysicalDevice8BitStorageFeaturesKHR> { using type = S_physical_device_8bit_storage_features_KHR;};
struct		S_physical_device_8bit_storage_features_KHR:VkPhysicalDevice8BitStorageFeaturesKHR{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceConditionalRenderingFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_conditional_rendering_features_EXT> { using type = VkPhysicalDeviceConditionalRenderingFeaturesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceConditionalRenderingFeaturesEXT> { using type = S_physical_device_conditional_rendering_features_EXT;};
struct		S_physical_device_conditional_rendering_features_EXT:VkPhysicalDeviceConditionalRenderingFeaturesEXT{
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
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceVulkanMemoryModelFeaturesKHR
(returnedonly)
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_vulkan_memory_model_features_KHR> { using type = VkPhysicalDeviceVulkanMemoryModelFeaturesKHR;};
template<> struct my_class_convert<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR> { using type = S_physical_device_vulkan_memory_model_features_KHR;};
struct		S_physical_device_vulkan_memory_model_features_KHR:VkPhysicalDeviceVulkanMemoryModelFeaturesKHR{
private:
	using VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::sType;
	using VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::pNext;
public:
	using VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::vulkanMemoryModel;
	using VkPhysicalDeviceVulkanMemoryModelFeaturesKHR::vulkanMemoryModelDeviceScope;

S_physical_device_vulkan_memory_model_features_KHR():VkPhysicalDeviceVulkanMemoryModelFeaturesKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR,nullptr}{}
S_physical_device_vulkan_memory_model_features_KHR(
	VkBool32 vulkanMemoryModel_,
	VkBool32 vulkanMemoryModelDeviceScope_)
	:VkPhysicalDeviceVulkanMemoryModelFeaturesKHR{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR
	,nullptr
	,vulkanMemoryModel_
	,vulkanMemoryModelDeviceScope_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceShaderAtomicInt64FeaturesKHR
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_physical_device_shader_atomic_int64_features_KHR> { using type = VkPhysicalDeviceShaderAtomicInt64FeaturesKHR;};
template<> struct my_class_convert<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR> { using type = S_physical_device_shader_atomic_int64_features_KHR;};
struct		S_physical_device_shader_atomic_int64_features_KHR:VkPhysicalDeviceShaderAtomicInt64FeaturesKHR{
private:
	using VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::sType;
	using VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::pNext;
public:
	using VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::shaderBufferInt64Atomics;
	using VkPhysicalDeviceShaderAtomicInt64FeaturesKHR::shaderSharedInt64Atomics;

S_physical_device_shader_atomic_int64_features_KHR():VkPhysicalDeviceShaderAtomicInt64FeaturesKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR,nullptr}{}
S_physical_device_shader_atomic_int64_features_KHR(
	VkBool32 shaderBufferInt64Atomics_,
	VkBool32 shaderSharedInt64Atomics_)
	:VkPhysicalDeviceShaderAtomicInt64FeaturesKHR{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR
	,nullptr
	,shaderBufferInt64Atomics_
	,shaderSharedInt64Atomics_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};
#endif //LAKA_UNKNOW

/*	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_vertex_attribute_divisor_features_EXT> { using type = VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT> { using type = S_physical_device_vertex_attribute_divisor_features_EXT;};
struct		S_physical_device_vertex_attribute_divisor_features_EXT:VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT{
private:
	using VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::sType;
	using VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::pNext;
public:
	using VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::vertexAttributeInstanceRateDivisor;
	using VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::vertexAttributeInstanceRateZeroDivisor;

S_physical_device_vertex_attribute_divisor_features_EXT():VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT,nullptr}{}
S_physical_device_vertex_attribute_divisor_features_EXT(
	VkBool32 vertexAttributeInstanceRateDivisor_,
	VkBool32 vertexAttributeInstanceRateZeroDivisor_)
	:VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT
	,nullptr
	,vertexAttributeInstanceRateDivisor_
	,vertexAttributeInstanceRateZeroDivisor_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceASTCDecodeFeaturesEXT
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_astc_decode_features_EXT> { using type = VkPhysicalDeviceASTCDecodeFeaturesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceASTCDecodeFeaturesEXT> { using type = S_physical_device_astc_decode_features_EXT;};
struct		S_physical_device_astc_decode_features_EXT:VkPhysicalDeviceASTCDecodeFeaturesEXT{
private:
	using VkPhysicalDeviceASTCDecodeFeaturesEXT::sType;
	using VkPhysicalDeviceASTCDecodeFeaturesEXT::pNext;
public:
	using VkPhysicalDeviceASTCDecodeFeaturesEXT::decodeModeSharedExponent;

S_physical_device_astc_decode_features_EXT():VkPhysicalDeviceASTCDecodeFeaturesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT,nullptr}{}
S_physical_device_astc_decode_features_EXT(
	VkBool32 decodeModeSharedExponent_)
	:VkPhysicalDeviceASTCDecodeFeaturesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT
	,nullptr
	,decodeModeSharedExponent_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_representative_fragment_test_features_NV> { using type = VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV> { using type = S_physical_device_representative_fragment_test_features_NV;};
struct		S_physical_device_representative_fragment_test_features_NV:VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV{
private:
	using VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::sType;
	using VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::pNext;
public:
	using VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::representativeFragmentTest;

S_physical_device_representative_fragment_test_features_NV():VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV,nullptr}{}
S_physical_device_representative_fragment_test_features_NV(
	VkBool32 representativeFragmentTest_)
	:VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV
	,nullptr
	,representativeFragmentTest_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceExclusiveScissorFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_exclusive_scissor_features_NV> { using type = VkPhysicalDeviceExclusiveScissorFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceExclusiveScissorFeaturesNV> { using type = S_physical_device_exclusive_scissor_features_NV;};
struct		S_physical_device_exclusive_scissor_features_NV:VkPhysicalDeviceExclusiveScissorFeaturesNV{
private:
	using VkPhysicalDeviceExclusiveScissorFeaturesNV::sType;
	using VkPhysicalDeviceExclusiveScissorFeaturesNV::pNext;
public:
	using VkPhysicalDeviceExclusiveScissorFeaturesNV::exclusiveScissor;

S_physical_device_exclusive_scissor_features_NV():VkPhysicalDeviceExclusiveScissorFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV,nullptr}{}
S_physical_device_exclusive_scissor_features_NV(
	VkBool32 exclusiveScissor_)
	:VkPhysicalDeviceExclusiveScissorFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV
	,nullptr
	,exclusiveScissor_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceCornerSampledImageFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_corner_sampled_image_features_NV> { using type = VkPhysicalDeviceCornerSampledImageFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceCornerSampledImageFeaturesNV> { using type = S_physical_device_corner_sampled_image_features_NV;};
struct		S_physical_device_corner_sampled_image_features_NV:VkPhysicalDeviceCornerSampledImageFeaturesNV{
private:
	using VkPhysicalDeviceCornerSampledImageFeaturesNV::sType;
	using VkPhysicalDeviceCornerSampledImageFeaturesNV::pNext;
public:
	using VkPhysicalDeviceCornerSampledImageFeaturesNV::cornerSampledImage;

S_physical_device_corner_sampled_image_features_NV():VkPhysicalDeviceCornerSampledImageFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV,nullptr}{}
S_physical_device_corner_sampled_image_features_NV(
	VkBool32 cornerSampledImage_)
	:VkPhysicalDeviceCornerSampledImageFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV
	,nullptr
	,cornerSampledImage_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_compute_shader_derivatives_features_NV> { using type = VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV> { using type = S_physical_device_compute_shader_derivatives_features_NV;};
struct		S_physical_device_compute_shader_derivatives_features_NV:VkPhysicalDeviceComputeShaderDerivativesFeaturesNV{
private:
	using VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::sType;
	using VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::pNext;
public:
	using VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::computeDerivativeGroupQuads;
	using VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::computeDerivativeGroupLinear;

S_physical_device_compute_shader_derivatives_features_NV():VkPhysicalDeviceComputeShaderDerivativesFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV,nullptr}{}
S_physical_device_compute_shader_derivatives_features_NV(
	VkBool32 computeDerivativeGroupQuads_,
	VkBool32 computeDerivativeGroupLinear_)
	:VkPhysicalDeviceComputeShaderDerivativesFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV
	,nullptr
	,computeDerivativeGroupQuads_
	,computeDerivativeGroupLinear_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_fragment_shader_barycentric_features_NV> { using type = VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV> { using type = S_physical_device_fragment_shader_barycentric_features_NV;};
struct		S_physical_device_fragment_shader_barycentric_features_NV:VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV{
private:
	using VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV::sType;
	using VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV::pNext;
public:
	using VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV::fragmentShaderBarycentric;

S_physical_device_fragment_shader_barycentric_features_NV():VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV,nullptr}{}
S_physical_device_fragment_shader_barycentric_features_NV(
	VkBool32 fragmentShaderBarycentric_)
	:VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV
	,nullptr
	,fragmentShaderBarycentric_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceShaderImageFootprintFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_shader_image_footprint_features_NV> { using type = VkPhysicalDeviceShaderImageFootprintFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceShaderImageFootprintFeaturesNV> { using type = S_physical_device_shader_image_footprint_features_NV;};
struct		S_physical_device_shader_image_footprint_features_NV:VkPhysicalDeviceShaderImageFootprintFeaturesNV{
private:
	using VkPhysicalDeviceShaderImageFootprintFeaturesNV::sType;
	using VkPhysicalDeviceShaderImageFootprintFeaturesNV::pNext;
public:
	using VkPhysicalDeviceShaderImageFootprintFeaturesNV::imageFootprint;

S_physical_device_shader_image_footprint_features_NV():VkPhysicalDeviceShaderImageFootprintFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV,nullptr}{}
S_physical_device_shader_image_footprint_features_NV(
	VkBool32 imageFootprint_)
	:VkPhysicalDeviceShaderImageFootprintFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV
	,nullptr
	,imageFootprint_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceShadingRateImageFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_shading_rate_image_features_NV> { using type = VkPhysicalDeviceShadingRateImageFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceShadingRateImageFeaturesNV> { using type = S_physical_device_shading_rate_image_features_NV;};
struct		S_physical_device_shading_rate_image_features_NV:VkPhysicalDeviceShadingRateImageFeaturesNV{
private:
	using VkPhysicalDeviceShadingRateImageFeaturesNV::sType;
	using VkPhysicalDeviceShadingRateImageFeaturesNV::pNext;
public:
	using VkPhysicalDeviceShadingRateImageFeaturesNV::shadingRateImage;
	using VkPhysicalDeviceShadingRateImageFeaturesNV::shadingRateCoarseSampleOrder;

S_physical_device_shading_rate_image_features_NV():VkPhysicalDeviceShadingRateImageFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV,nullptr}{}
S_physical_device_shading_rate_image_features_NV(
	VkBool32 shadingRateImage_,
	VkBool32 shadingRateCoarseSampleOrder_)
	:VkPhysicalDeviceShadingRateImageFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV
	,nullptr
	,shadingRateImage_
	,shadingRateCoarseSampleOrder_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
};

/*	VkPhysicalDeviceMeshShaderFeaturesNV
ex to: VkPhysicalDeviceFeatures2,VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_physical_device_mesh_shader_features_NV> { using type = VkPhysicalDeviceMeshShaderFeaturesNV;};
template<> struct my_class_convert<VkPhysicalDeviceMeshShaderFeaturesNV> { using type = S_physical_device_mesh_shader_features_NV;};
struct		S_physical_device_mesh_shader_features_NV:VkPhysicalDeviceMeshShaderFeaturesNV{
private:
	using VkPhysicalDeviceMeshShaderFeaturesNV::sType;
	using VkPhysicalDeviceMeshShaderFeaturesNV::pNext;
public:
	using VkPhysicalDeviceMeshShaderFeaturesNV::taskShader;
	using VkPhysicalDeviceMeshShaderFeaturesNV::meshShader;

S_physical_device_mesh_shader_features_NV():VkPhysicalDeviceMeshShaderFeaturesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV,nullptr}{}
S_physical_device_mesh_shader_features_NV(
	VkBool32 taskShader_,
	VkBool32 meshShader_)
	:VkPhysicalDeviceMeshShaderFeaturesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV
	,nullptr
	,taskShader_
	,meshShader_}
	{	}

friend S_physical_device_features2;
friend S_device_create_info;
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
template<> struct my_class_convert<S_physical_device_features2> { using type = VkPhysicalDeviceFeatures2;};
template<> struct my_class_convert<VkPhysicalDeviceFeatures2> { using type = S_physical_device_features2;};
struct		S_physical_device_features2:VkPhysicalDeviceFeatures2{
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
	{	}

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
void set_pNext(N_physical_device_features2 n_){pNext = n_;}
};

/*	VkDeviceGroupDeviceCreateInfo
ex to: VkDeviceCreateInfo
*/
template<> struct my_class_convert<S_device_group_device_create_info> { using type = VkDeviceGroupDeviceCreateInfo;};
template<> struct my_class_convert<VkDeviceGroupDeviceCreateInfo> { using type = S_device_group_device_create_info;};
struct		S_device_group_device_create_info:VkDeviceGroupDeviceCreateInfo{
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
	{	}

friend S_device_create_info;
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
template<> struct my_class_convert<S_device_create_info> { using type = VkDeviceCreateInfo;};
template<> struct my_class_convert<VkDeviceCreateInfo> { using type = S_device_create_info;};
struct		S_device_create_info:VkDeviceCreateInfo{
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
	{	}

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
void set_pNext(N_device_create_info n_){pNext = n_;}
};

/*	VkDebugReportCallbackCreateInfoEXT
ex to: VkInstanceCreateInfo
*/
template<> struct my_class_convert<S_debug_report_callback_create_info_EXT> { using type = VkDebugReportCallbackCreateInfoEXT;};
template<> struct my_class_convert<VkDebugReportCallbackCreateInfoEXT> { using type = S_debug_report_callback_create_info_EXT;};
struct		S_debug_report_callback_create_info_EXT:VkDebugReportCallbackCreateInfoEXT{
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
	{	}

friend S_instance_create_info;
};

/*	VkValidationFlagsEXT
ex to: VkInstanceCreateInfo
*/
template<> struct my_class_convert<S_validation_flags_EXT> { using type = VkValidationFlagsEXT;};
template<> struct my_class_convert<VkValidationFlagsEXT> { using type = S_validation_flags_EXT;};
struct		S_validation_flags_EXT:VkValidationFlagsEXT{
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
	{	}

friend S_instance_create_info;
};

/*	VkDebugUtilsMessengerCreateInfoEXT
ex to: VkInstanceCreateInfo
*/
template<> struct my_class_convert<S_debug_utils_messenger_create_info_EXT> { using type = VkDebugUtilsMessengerCreateInfoEXT;};
template<> struct my_class_convert<VkDebugUtilsMessengerCreateInfoEXT> { using type = S_debug_utils_messenger_create_info_EXT;};
struct		S_debug_utils_messenger_create_info_EXT:VkDebugUtilsMessengerCreateInfoEXT{
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
	{	}

friend S_instance_create_info;
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
template<> struct my_class_convert<S_instance_create_info> { using type = VkInstanceCreateInfo;};
template<> struct my_class_convert<VkInstanceCreateInfo> { using type = S_instance_create_info;};
struct		S_instance_create_info:VkInstanceCreateInfo{
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
	{	}

S_instance_create_info& n_debug_report_callback_create_info_EXT(S_debug_report_callback_create_info_EXT const& next_);
S_instance_create_info& n_validation_flags_EXT(S_validation_flags_EXT const& next_);
S_instance_create_info& n_debug_utils_messenger_create_info_EXT(S_debug_utils_messenger_create_info_EXT const& next_);
void set_pNext(N_instance_create_info n_){pNext = n_;}
};

/*	VkQueueFamilyProperties
(returnedonly)
*/
template<> struct my_class_convert<S_queue_family_properties> { using type = VkQueueFamilyProperties;};
template<> struct my_class_convert<VkQueueFamilyProperties> { using type = S_queue_family_properties;};
struct		S_queue_family_properties:VkQueueFamilyProperties{
	using VkQueueFamilyProperties::queueFlags;
	using VkQueueFamilyProperties::queueCount;
	using VkQueueFamilyProperties::timestampValidBits;
	using VkQueueFamilyProperties::minImageTransferGranularity;
};

/*	VkMemoryType
(returnedonly)
*/
template<> struct my_class_convert<S_memory_type> { using type = VkMemoryType;};
template<> struct my_class_convert<VkMemoryType> { using type = S_memory_type;};
struct		S_memory_type:VkMemoryType{
	using VkMemoryType::propertyFlags;
	using VkMemoryType::heapIndex;
};

/*	VkMemoryHeap
(returnedonly)
*/
template<> struct my_class_convert<S_memory_heap> { using type = VkMemoryHeap;};
template<> struct my_class_convert<VkMemoryHeap> { using type = S_memory_heap;};
struct		S_memory_heap:VkMemoryHeap{
	using VkMemoryHeap::size;
	using VkMemoryHeap::flags;
};

/*	VkPhysicalDeviceMemoryProperties
(returnedonly)
*/
template<> struct my_class_convert<S_physical_device_memory_properties> { using type = VkPhysicalDeviceMemoryProperties;};
template<> struct my_class_convert<VkPhysicalDeviceMemoryProperties> { using type = S_physical_device_memory_properties;};
struct		S_physical_device_memory_properties:VkPhysicalDeviceMemoryProperties{
	using VkPhysicalDeviceMemoryProperties::memoryTypeCount;
	using VkPhysicalDeviceMemoryProperties::memoryTypes;
	using VkPhysicalDeviceMemoryProperties::memoryHeapCount;
	using VkPhysicalDeviceMemoryProperties::memoryHeaps;
};

/*	VkDedicatedAllocationMemoryAllocateInfoNV
ex to: VkMemoryAllocateInfo
*/
template<> struct my_class_convert<S_dedicated_allocation_memory_allocate_info_NV> { using type = VkDedicatedAllocationMemoryAllocateInfoNV;};
template<> struct my_class_convert<VkDedicatedAllocationMemoryAllocateInfoNV> { using type = S_dedicated_allocation_memory_allocate_info_NV;};
struct		S_dedicated_allocation_memory_allocate_info_NV:VkDedicatedAllocationMemoryAllocateInfoNV{
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
	{	}

friend S_memory_allocate_info;
};

/*	VkExportMemoryAllocateInfoNV
ex to: VkMemoryAllocateInfo
*/
template<> struct my_class_convert<S_export_memory_allocate_info_NV> { using type = VkExportMemoryAllocateInfoNV;};
template<> struct my_class_convert<VkExportMemoryAllocateInfoNV> { using type = S_export_memory_allocate_info_NV;};
struct		S_export_memory_allocate_info_NV:VkExportMemoryAllocateInfoNV{
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
	{	}

friend S_memory_allocate_info;
};

/*	VkImportMemoryWin32HandleInfoNV
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_NV
template<> struct my_class_convert<S_import_memory_win32_handle_info_NV> { using type = VkImportMemoryWin32HandleInfoNV;};
template<> struct my_class_convert<VkImportMemoryWin32HandleInfoNV> { using type = S_import_memory_win32_handle_info_NV;};
struct		S_import_memory_win32_handle_info_NV:VkImportMemoryWin32HandleInfoNV{
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
	{	}

friend S_memory_allocate_info;
};
#endif //VK_USE_PLATFORM_WIN32_NV

/*	VkExportMemoryWin32HandleInfoNV
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_NV
template<> struct my_class_convert<S_export_memory_win32_handle_info_NV> { using type = VkExportMemoryWin32HandleInfoNV;};
template<> struct my_class_convert<VkExportMemoryWin32HandleInfoNV> { using type = S_export_memory_win32_handle_info_NV;};
struct		S_export_memory_win32_handle_info_NV:VkExportMemoryWin32HandleInfoNV{
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
	{	}

friend S_memory_allocate_info;
};
#endif //VK_USE_PLATFORM_WIN32_NV

/*	VkExportMemoryAllocateInfo
ex to: VkMemoryAllocateInfo
*/
template<> struct my_class_convert<S_export_memory_allocate_info> { using type = VkExportMemoryAllocateInfo;};
template<> struct my_class_convert<VkExportMemoryAllocateInfo> { using type = S_export_memory_allocate_info;};
struct		S_export_memory_allocate_info:VkExportMemoryAllocateInfo{
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
	{	}

friend S_memory_allocate_info;
};

/*	VkImportMemoryWin32HandleInfoKHR
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_import_memory_win32_handle_info_KHR> { using type = VkImportMemoryWin32HandleInfoKHR;};
template<> struct my_class_convert<VkImportMemoryWin32HandleInfoKHR> { using type = S_import_memory_win32_handle_info_KHR;};
struct		S_import_memory_win32_handle_info_KHR:VkImportMemoryWin32HandleInfoKHR{
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
	{	}

friend S_memory_allocate_info;
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkExportMemoryWin32HandleInfoKHR
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_export_memory_win32_handle_info_KHR> { using type = VkExportMemoryWin32HandleInfoKHR;};
template<> struct my_class_convert<VkExportMemoryWin32HandleInfoKHR> { using type = S_export_memory_win32_handle_info_KHR;};
struct		S_export_memory_win32_handle_info_KHR:VkExportMemoryWin32HandleInfoKHR{
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
	{	}

friend S_memory_allocate_info;
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportMemoryFdInfoKHR
ex to: VkMemoryAllocateInfo
*/
template<> struct my_class_convert<S_import_memory_fd_info_KHR> { using type = VkImportMemoryFdInfoKHR;};
template<> struct my_class_convert<VkImportMemoryFdInfoKHR> { using type = S_import_memory_fd_info_KHR;};
struct		S_import_memory_fd_info_KHR:VkImportMemoryFdInfoKHR{
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
	{	}

friend S_memory_allocate_info;
};

/*	VkMemoryAllocateFlagsInfo
ex to: VkMemoryAllocateInfo
*/
template<> struct my_class_convert<S_memory_allocate_flags_info> { using type = VkMemoryAllocateFlagsInfo;};
template<> struct my_class_convert<VkMemoryAllocateFlagsInfo> { using type = S_memory_allocate_flags_info;};
struct		S_memory_allocate_flags_info:VkMemoryAllocateFlagsInfo{
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
	{	}

friend S_memory_allocate_info;
};

/*	VkMemoryDedicatedAllocateInfo
ex to: VkMemoryAllocateInfo
*/
template<> struct my_class_convert<S_memory_dedicated_allocate_info> { using type = VkMemoryDedicatedAllocateInfo;};
template<> struct my_class_convert<VkMemoryDedicatedAllocateInfo> { using type = S_memory_dedicated_allocate_info;};
struct		S_memory_dedicated_allocate_info:VkMemoryDedicatedAllocateInfo{
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
	{	}

friend S_memory_allocate_info;
};

/*	VkImportMemoryHostPointerInfoEXT
ex to: VkMemoryAllocateInfo
*/
template<> struct my_class_convert<S_import_memory_host_pointer_info_EXT> { using type = VkImportMemoryHostPointerInfoEXT;};
template<> struct my_class_convert<VkImportMemoryHostPointerInfoEXT> { using type = S_import_memory_host_pointer_info_EXT;};
struct		S_import_memory_host_pointer_info_EXT:VkImportMemoryHostPointerInfoEXT{
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
	{	}

friend S_memory_allocate_info;
};

/*	VkImportAndroidHardwareBufferInfoANDROID
ex to: VkMemoryAllocateInfo
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template<> struct my_class_convert<S_import_android_hardware_buffer_info_ANDROID> { using type = VkImportAndroidHardwareBufferInfoANDROID;};
template<> struct my_class_convert<VkImportAndroidHardwareBufferInfoANDROID> { using type = S_import_android_hardware_buffer_info_ANDROID;};
struct		S_import_android_hardware_buffer_info_ANDROID:VkImportAndroidHardwareBufferInfoANDROID{
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
	{	}

friend S_memory_allocate_info;
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
template<> struct my_class_convert<S_memory_allocate_info> { using type = VkMemoryAllocateInfo;};
template<> struct my_class_convert<VkMemoryAllocateInfo> { using type = S_memory_allocate_info;};
struct		S_memory_allocate_info:VkMemoryAllocateInfo{
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
	{	}

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
template<> struct my_class_convert<S_memory_requirements> { using type = VkMemoryRequirements;};
template<> struct my_class_convert<VkMemoryRequirements> { using type = S_memory_requirements;};
struct		S_memory_requirements:VkMemoryRequirements{
	using VkMemoryRequirements::size;
	using VkMemoryRequirements::alignment;
	using VkMemoryRequirements::memoryTypeBits;
};

/*	VkSparseImageFormatProperties
(returnedonly)
*/
template<> struct my_class_convert<S_sparse_image_format_properties> { using type = VkSparseImageFormatProperties;};
template<> struct my_class_convert<VkSparseImageFormatProperties> { using type = S_sparse_image_format_properties;};
struct		S_sparse_image_format_properties:VkSparseImageFormatProperties{
	using VkSparseImageFormatProperties::aspectMask;
	using VkSparseImageFormatProperties::imageGranularity;
	using VkSparseImageFormatProperties::flags;
};

/*	VkSparseImageMemoryRequirements
(returnedonly)
*/
template<> struct my_class_convert<S_sparse_image_memory_requirements> { using type = VkSparseImageMemoryRequirements;};
template<> struct my_class_convert<VkSparseImageMemoryRequirements> { using type = S_sparse_image_memory_requirements;};
struct		S_sparse_image_memory_requirements:VkSparseImageMemoryRequirements{
	using VkSparseImageMemoryRequirements::formatProperties;
	using VkSparseImageMemoryRequirements::imageMipTailFirstLod;
	using VkSparseImageMemoryRequirements::imageMipTailSize;
	using VkSparseImageMemoryRequirements::imageMipTailOffset;
	using VkSparseImageMemoryRequirements::imageMipTailStride;
};

/*	VkMappedMemoryRange
*/
template<> struct my_class_convert<S_mapped_memory_range> { using type = VkMappedMemoryRange;};
template<> struct my_class_convert<VkMappedMemoryRange> { using type = S_mapped_memory_range;};
struct		S_mapped_memory_range:VkMappedMemoryRange{
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
	{	}
};

/*	VkFormatProperties
(returnedonly)
*/
template<> struct my_class_convert<S_format_properties> { using type = VkFormatProperties;};
template<> struct my_class_convert<VkFormatProperties> { using type = S_format_properties;};
struct		S_format_properties:VkFormatProperties{
	using VkFormatProperties::linearTilingFeatures;
	using VkFormatProperties::optimalTilingFeatures;
	using VkFormatProperties::bufferFeatures;
};

/*	VkImageFormatProperties
(returnedonly)
*/
template<> struct my_class_convert<S_image_format_properties> { using type = VkImageFormatProperties;};
template<> struct my_class_convert<VkImageFormatProperties> { using type = S_image_format_properties;};
struct		S_image_format_properties:VkImageFormatProperties{
	using VkImageFormatProperties::maxExtent;
	using VkImageFormatProperties::maxMipLevels;
	using VkImageFormatProperties::maxArrayLayers;
	using VkImageFormatProperties::sampleCounts;
	using VkImageFormatProperties::maxResourceSize;
};

/*	VkDescriptorBufferInfo
*/
template<> struct my_class_convert<S_descriptor_buffer_info> { using type = VkDescriptorBufferInfo;};
template<> struct my_class_convert<VkDescriptorBufferInfo> { using type = S_descriptor_buffer_info;};
struct		S_descriptor_buffer_info:VkDescriptorBufferInfo{
	using VkDescriptorBufferInfo::buffer;
	using VkDescriptorBufferInfo::offset;
	using VkDescriptorBufferInfo::range;
};

/*	VkDescriptorImageInfo
*/
template<> struct my_class_convert<S_descriptor_image_info> { using type = VkDescriptorImageInfo;};
template<> struct my_class_convert<VkDescriptorImageInfo> { using type = S_descriptor_image_info;};
struct		S_descriptor_image_info:VkDescriptorImageInfo{
	using VkDescriptorImageInfo::sampler;
	using VkDescriptorImageInfo::imageView;
	using VkDescriptorImageInfo::imageLayout;
};

/*	VkWriteDescriptorSetInlineUniformBlockEXT
ex to: VkWriteDescriptorSet
*/
template<> struct my_class_convert<S_write_descriptor_set_inline_uniform_block_EXT> { using type = VkWriteDescriptorSetInlineUniformBlockEXT;};
template<> struct my_class_convert<VkWriteDescriptorSetInlineUniformBlockEXT> { using type = S_write_descriptor_set_inline_uniform_block_EXT;};
struct		S_write_descriptor_set_inline_uniform_block_EXT:VkWriteDescriptorSetInlineUniformBlockEXT{
private:
	using VkWriteDescriptorSetInlineUniformBlockEXT::sType;
	using VkWriteDescriptorSetInlineUniformBlockEXT::pNext;
public:
	using VkWriteDescriptorSetInlineUniformBlockEXT::dataSize;
	using VkWriteDescriptorSetInlineUniformBlockEXT::pData;

S_write_descriptor_set_inline_uniform_block_EXT():VkWriteDescriptorSetInlineUniformBlockEXT{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT,nullptr}{}
S_write_descriptor_set_inline_uniform_block_EXT(
	uint32_t dataSize_,
	const void * pData_)
	:VkWriteDescriptorSetInlineUniformBlockEXT{
	VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT
	,nullptr
	,dataSize_
	,pData_}
	{	}

friend S_write_descriptor_set;
};

/*	VkDescriptorAccelerationStructureInfoNVX
ex to: VkWriteDescriptorSet
*/
template<> struct my_class_convert<S_descriptor_acceleration_structure_info_NVX> { using type = VkDescriptorAccelerationStructureInfoNVX;};
template<> struct my_class_convert<VkDescriptorAccelerationStructureInfoNVX> { using type = S_descriptor_acceleration_structure_info_NVX;};
struct		S_descriptor_acceleration_structure_info_NVX:VkDescriptorAccelerationStructureInfoNVX{
private:
	using VkDescriptorAccelerationStructureInfoNVX::sType;
	using VkDescriptorAccelerationStructureInfoNVX::pNext;
public:
	using VkDescriptorAccelerationStructureInfoNVX::accelerationStructureCount;
	using VkDescriptorAccelerationStructureInfoNVX::pAccelerationStructures;

S_descriptor_acceleration_structure_info_NVX():VkDescriptorAccelerationStructureInfoNVX{VK_STRUCTURE_TYPE_DESCRIPTOR_ACCELERATION_STRUCTURE_INFO_NVX,nullptr}{}
S_descriptor_acceleration_structure_info_NVX(
	uint32_t accelerationStructureCount_,
	const VkAccelerationStructureNVX * pAccelerationStructures_)
	:VkDescriptorAccelerationStructureInfoNVX{
	VK_STRUCTURE_TYPE_DESCRIPTOR_ACCELERATION_STRUCTURE_INFO_NVX
	,nullptr
	,accelerationStructureCount_
	,pAccelerationStructures_}
	{	}

friend S_write_descriptor_set;
};

/*	VkWriteDescriptorSet
ex:
	VkWriteDescriptorSetInlineUniformBlockEXT
	VkDescriptorAccelerationStructureInfoNVX
*/

struct N_write_descriptor_set{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_write_descriptor_set& n_write_descriptor_set_inline_uniform_block_EXT(S_write_descriptor_set_inline_uniform_block_EXT const& next_);
N_write_descriptor_set& n_descriptor_acceleration_structure_info_NVX(S_descriptor_acceleration_structure_info_NVX const& next_);
};
template<> struct my_class_convert<S_write_descriptor_set> { using type = VkWriteDescriptorSet;};
template<> struct my_class_convert<VkWriteDescriptorSet> { using type = S_write_descriptor_set;};
struct		S_write_descriptor_set:VkWriteDescriptorSet{
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
	{	}

S_write_descriptor_set& n_write_descriptor_set_inline_uniform_block_EXT(S_write_descriptor_set_inline_uniform_block_EXT const& next_);
S_write_descriptor_set& n_descriptor_acceleration_structure_info_NVX(S_descriptor_acceleration_structure_info_NVX const& next_);
void set_pNext(N_write_descriptor_set n_){pNext = n_;}
};

/*	VkCopyDescriptorSet
*/
template<> struct my_class_convert<S_copy_descriptor_set> { using type = VkCopyDescriptorSet;};
template<> struct my_class_convert<VkCopyDescriptorSet> { using type = S_copy_descriptor_set;};
struct		S_copy_descriptor_set:VkCopyDescriptorSet{
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
	{	}
};

/*	VkDedicatedAllocationBufferCreateInfoNV
ex to: VkBufferCreateInfo
*/
template<> struct my_class_convert<S_dedicated_allocation_buffer_create_info_NV> { using type = VkDedicatedAllocationBufferCreateInfoNV;};
template<> struct my_class_convert<VkDedicatedAllocationBufferCreateInfoNV> { using type = S_dedicated_allocation_buffer_create_info_NV;};
struct		S_dedicated_allocation_buffer_create_info_NV:VkDedicatedAllocationBufferCreateInfoNV{
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
	{	}

friend S_buffer_create_info;
};

/*	VkExternalMemoryBufferCreateInfo
ex to: VkBufferCreateInfo
*/
template<> struct my_class_convert<S_external_memory_buffer_create_info> { using type = VkExternalMemoryBufferCreateInfo;};
template<> struct my_class_convert<VkExternalMemoryBufferCreateInfo> { using type = S_external_memory_buffer_create_info;};
struct		S_external_memory_buffer_create_info:VkExternalMemoryBufferCreateInfo{
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
	{	}

friend S_buffer_create_info;
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
template<> struct my_class_convert<S_buffer_create_info> { using type = VkBufferCreateInfo;};
template<> struct my_class_convert<VkBufferCreateInfo> { using type = S_buffer_create_info;};
struct		S_buffer_create_info:VkBufferCreateInfo{
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
	{	}

S_buffer_create_info& n_dedicated_allocation_buffer_create_info_NV(S_dedicated_allocation_buffer_create_info_NV const& next_);
S_buffer_create_info& n_external_memory_buffer_create_info(S_external_memory_buffer_create_info const& next_);
void set_pNext(N_buffer_create_info n_){pNext = n_;}
};

/*	VkBufferViewCreateInfo
*/
template<> struct my_class_convert<S_buffer_view_create_info> { using type = VkBufferViewCreateInfo;};
template<> struct my_class_convert<VkBufferViewCreateInfo> { using type = S_buffer_view_create_info;};
struct		S_buffer_view_create_info:VkBufferViewCreateInfo{
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
	{	}
};

/*	VkImageSubresource
*/
template<> struct my_class_convert<S_image_subresource> { using type = VkImageSubresource;};
template<> struct my_class_convert<VkImageSubresource> { using type = S_image_subresource;};
struct		S_image_subresource:VkImageSubresource{
	using VkImageSubresource::aspectMask;
	using VkImageSubresource::mipLevel;
	using VkImageSubresource::arrayLayer;
};

/*	VkImageSubresourceLayers
*/
template<> struct my_class_convert<S_image_subresource_layers> { using type = VkImageSubresourceLayers;};
template<> struct my_class_convert<VkImageSubresourceLayers> { using type = S_image_subresource_layers;};
struct		S_image_subresource_layers:VkImageSubresourceLayers{
	using VkImageSubresourceLayers::aspectMask;
	using VkImageSubresourceLayers::mipLevel;
	using VkImageSubresourceLayers::baseArrayLayer;
	using VkImageSubresourceLayers::layerCount;
};

/*	VkImageSubresourceRange
*/
template<> struct my_class_convert<S_image_subresource_range> { using type = VkImageSubresourceRange;};
template<> struct my_class_convert<VkImageSubresourceRange> { using type = S_image_subresource_range;};
struct		S_image_subresource_range:VkImageSubresourceRange{
	using VkImageSubresourceRange::aspectMask;
	using VkImageSubresourceRange::baseMipLevel;
	using VkImageSubresourceRange::levelCount;
	using VkImageSubresourceRange::baseArrayLayer;
	using VkImageSubresourceRange::layerCount;
};

/*	VkMemoryBarrier
*/
template<> struct my_class_convert<S_memory_barrier> { using type = VkMemoryBarrier;};
template<> struct my_class_convert<VkMemoryBarrier> { using type = S_memory_barrier;};
struct		S_memory_barrier:VkMemoryBarrier{
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
	{	}
};

/*	VkBufferMemoryBarrier
*/
template<> struct my_class_convert<S_buffer_memory_barrier> { using type = VkBufferMemoryBarrier;};
template<> struct my_class_convert<VkBufferMemoryBarrier> { using type = S_buffer_memory_barrier;};
struct		S_buffer_memory_barrier:VkBufferMemoryBarrier{
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
	{	}
};

/*	VkSampleLocationEXT
*/
template<> struct my_class_convert<S_sample_location_EXT> { using type = VkSampleLocationEXT;};
template<> struct my_class_convert<VkSampleLocationEXT> { using type = S_sample_location_EXT;};
struct		S_sample_location_EXT:VkSampleLocationEXT{
	using VkSampleLocationEXT::x;
	using VkSampleLocationEXT::y;
};

/*	VkSampleLocationsInfoEXT
ex to: VkImageMemoryBarrier
*/
template<> struct my_class_convert<S_sample_locations_info_EXT> { using type = VkSampleLocationsInfoEXT;};
template<> struct my_class_convert<VkSampleLocationsInfoEXT> { using type = S_sample_locations_info_EXT;};
struct		S_sample_locations_info_EXT:VkSampleLocationsInfoEXT{
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
	{	}

friend S_image_memory_barrier;
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
template<> struct my_class_convert<S_image_memory_barrier> { using type = VkImageMemoryBarrier;};
template<> struct my_class_convert<VkImageMemoryBarrier> { using type = S_image_memory_barrier;};
struct		S_image_memory_barrier:VkImageMemoryBarrier{
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
	{	}

S_image_memory_barrier& n_sample_locations_info_EXT(S_sample_locations_info_EXT const& next_);
void set_pNext(N_image_memory_barrier n_){pNext = n_;}
};

/*	VkDedicatedAllocationImageCreateInfoNV
ex to: VkImageCreateInfo
*/
template<> struct my_class_convert<S_dedicated_allocation_image_create_info_NV> { using type = VkDedicatedAllocationImageCreateInfoNV;};
template<> struct my_class_convert<VkDedicatedAllocationImageCreateInfoNV> { using type = S_dedicated_allocation_image_create_info_NV;};
struct		S_dedicated_allocation_image_create_info_NV:VkDedicatedAllocationImageCreateInfoNV{
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
	{	}

friend S_image_create_info;
};

/*	VkExternalMemoryImageCreateInfoNV
ex to: VkImageCreateInfo
*/
template<> struct my_class_convert<S_external_memory_image_create_info_NV> { using type = VkExternalMemoryImageCreateInfoNV;};
template<> struct my_class_convert<VkExternalMemoryImageCreateInfoNV> { using type = S_external_memory_image_create_info_NV;};
struct		S_external_memory_image_create_info_NV:VkExternalMemoryImageCreateInfoNV{
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
	{	}

friend S_image_create_info;
};

/*	VkExternalMemoryImageCreateInfo
ex to: VkImageCreateInfo
*/
template<> struct my_class_convert<S_external_memory_image_create_info> { using type = VkExternalMemoryImageCreateInfo;};
template<> struct my_class_convert<VkExternalMemoryImageCreateInfo> { using type = S_external_memory_image_create_info;};
struct		S_external_memory_image_create_info:VkExternalMemoryImageCreateInfo{
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
	{	}

friend S_image_create_info;
};

/*	VkImageSwapchainCreateInfoKHR
ex to: VkImageCreateInfo
*/
template<> struct my_class_convert<S_image_swapchain_create_info_KHR> { using type = VkImageSwapchainCreateInfoKHR;};
template<> struct my_class_convert<VkImageSwapchainCreateInfoKHR> { using type = S_image_swapchain_create_info_KHR;};
struct		S_image_swapchain_create_info_KHR:VkImageSwapchainCreateInfoKHR{
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
	{	}

friend S_image_create_info;
};

/*	VkImageFormatListCreateInfoKHR
ex to: VkImageCreateInfo
*/
template<> struct my_class_convert<S_image_format_list_create_info_KHR> { using type = VkImageFormatListCreateInfoKHR;};
template<> struct my_class_convert<VkImageFormatListCreateInfoKHR> { using type = S_image_format_list_create_info_KHR;};
struct		S_image_format_list_create_info_KHR:VkImageFormatListCreateInfoKHR{
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
	{	}

friend S_image_create_info;
};

/*	VkExternalFormatANDROID
ex to: VkImageCreateInfo,VkSamplerYcbcrConversionCreateInfo
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template<> struct my_class_convert<S_external_format_ANDROID> { using type = VkExternalFormatANDROID;};
template<> struct my_class_convert<VkExternalFormatANDROID> { using type = S_external_format_ANDROID;};
struct		S_external_format_ANDROID:VkExternalFormatANDROID{
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
	{	}

friend S_image_create_info;
friend S_sampler_ycbcr_conversion_create_info;
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkImageDrmFormatModifierListCreateInfoEXT
ex to: VkImageCreateInfo
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_image_drm_format_modifier_list_create_info_EXT> { using type = VkImageDrmFormatModifierListCreateInfoEXT;};
template<> struct my_class_convert<VkImageDrmFormatModifierListCreateInfoEXT> { using type = S_image_drm_format_modifier_list_create_info_EXT;};
struct		S_image_drm_format_modifier_list_create_info_EXT:VkImageDrmFormatModifierListCreateInfoEXT{
private:
	using VkImageDrmFormatModifierListCreateInfoEXT::sType;
	using VkImageDrmFormatModifierListCreateInfoEXT::pNext;
public:
	using VkImageDrmFormatModifierListCreateInfoEXT::drmFormatModifierCount;
	using VkImageDrmFormatModifierListCreateInfoEXT::pDrmFormatModifiers;

S_image_drm_format_modifier_list_create_info_EXT():VkImageDrmFormatModifierListCreateInfoEXT{VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT,nullptr}{}
S_image_drm_format_modifier_list_create_info_EXT(
	uint32_t drmFormatModifierCount_,
	const uint64_t * pDrmFormatModifiers_)
	:VkImageDrmFormatModifierListCreateInfoEXT{
	VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT
	,nullptr
	,drmFormatModifierCount_
	,pDrmFormatModifiers_}
	{	}

friend S_image_create_info;
};
#endif //LAKA_UNKNOW

/*	VkSubresourceLayout
(returnedonly)
*/
template<> struct my_class_convert<S_subresource_layout> { using type = VkSubresourceLayout;};
template<> struct my_class_convert<VkSubresourceLayout> { using type = S_subresource_layout;};
struct		S_subresource_layout:VkSubresourceLayout{
	using VkSubresourceLayout::offset;
	using VkSubresourceLayout::size;
	using VkSubresourceLayout::rowPitch;
	using VkSubresourceLayout::arrayPitch;
	using VkSubresourceLayout::depthPitch;
};

/*	VkImageDrmFormatModifierExplicitCreateInfoEXT
ex to: VkImageCreateInfo
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_image_drm_format_modifier_explicit_create_info_EXT> { using type = VkImageDrmFormatModifierExplicitCreateInfoEXT;};
template<> struct my_class_convert<VkImageDrmFormatModifierExplicitCreateInfoEXT> { using type = S_image_drm_format_modifier_explicit_create_info_EXT;};
struct		S_image_drm_format_modifier_explicit_create_info_EXT:VkImageDrmFormatModifierExplicitCreateInfoEXT{
private:
	using VkImageDrmFormatModifierExplicitCreateInfoEXT::sType;
	using VkImageDrmFormatModifierExplicitCreateInfoEXT::pNext;
public:
	using VkImageDrmFormatModifierExplicitCreateInfoEXT::drmFormatModifier;
	using VkImageDrmFormatModifierExplicitCreateInfoEXT::drmFormatModifierPlaneCount;
	using VkImageDrmFormatModifierExplicitCreateInfoEXT::pPlaneLayouts;

S_image_drm_format_modifier_explicit_create_info_EXT():VkImageDrmFormatModifierExplicitCreateInfoEXT{VK_STRUCTURE_TYPE_IMAGE_EXCPLICIT_DRM_FORMAT_MODIFIER_CREATE_INFO_EXT,nullptr}{}
S_image_drm_format_modifier_explicit_create_info_EXT(
	uint64_t drmFormatModifier_,
	uint32_t drmFormatModifierPlaneCount_,
	const S_subresource_layout * pPlaneLayouts_)
	:VkImageDrmFormatModifierExplicitCreateInfoEXT{
	VK_STRUCTURE_TYPE_IMAGE_EXCPLICIT_DRM_FORMAT_MODIFIER_CREATE_INFO_EXT
	,nullptr
	,drmFormatModifier_
	,drmFormatModifierPlaneCount_
	,pPlaneLayouts_}
	{	}

friend S_image_create_info;
};
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
#ifdef LAKA_UNKNOW
N_image_create_info& n_image_drm_format_modifier_list_create_info_EXT(S_image_drm_format_modifier_list_create_info_EXT const& next_);
#endif
#ifdef LAKA_UNKNOW
N_image_create_info& n_image_drm_format_modifier_explicit_create_info_EXT(S_image_drm_format_modifier_explicit_create_info_EXT const& next_);
#endif
};
template<> struct my_class_convert<S_image_create_info> { using type = VkImageCreateInfo;};
template<> struct my_class_convert<VkImageCreateInfo> { using type = S_image_create_info;};
struct		S_image_create_info:VkImageCreateInfo{
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
	{	}

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
void set_pNext(N_image_create_info n_){pNext = n_;}
};

/*	VkImageViewUsageCreateInfo
ex to: VkImageViewCreateInfo
*/
template<> struct my_class_convert<S_image_view_usage_create_info> { using type = VkImageViewUsageCreateInfo;};
template<> struct my_class_convert<VkImageViewUsageCreateInfo> { using type = S_image_view_usage_create_info;};
struct		S_image_view_usage_create_info:VkImageViewUsageCreateInfo{
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
	{	}

friend S_image_view_create_info;
};

/*	VkSamplerYcbcrConversionInfo
ex to: VkSamplerCreateInfo,VkImageViewCreateInfo
*/
template<> struct my_class_convert<S_sampler_ycbcr_conversion_info> { using type = VkSamplerYcbcrConversionInfo;};
template<> struct my_class_convert<VkSamplerYcbcrConversionInfo> { using type = S_sampler_ycbcr_conversion_info;};
struct		S_sampler_ycbcr_conversion_info:VkSamplerYcbcrConversionInfo{
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
	{	}

friend S_sampler_create_info;
friend S_image_view_create_info;
};

/*	VkImageViewASTCDecodeModeEXT
ex to: VkImageViewCreateInfo
*/
template<> struct my_class_convert<S_image_view_astc_decode_mode_EXT> { using type = VkImageViewASTCDecodeModeEXT;};
template<> struct my_class_convert<VkImageViewASTCDecodeModeEXT> { using type = S_image_view_astc_decode_mode_EXT;};
struct		S_image_view_astc_decode_mode_EXT:VkImageViewASTCDecodeModeEXT{
private:
	using VkImageViewASTCDecodeModeEXT::sType;
	using VkImageViewASTCDecodeModeEXT::pNext;
public:
	using VkImageViewASTCDecodeModeEXT::decodeMode;

S_image_view_astc_decode_mode_EXT():VkImageViewASTCDecodeModeEXT{VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT,nullptr}{}
S_image_view_astc_decode_mode_EXT(
	E_format decodeMode_)
	:VkImageViewASTCDecodeModeEXT{
	VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT
	,nullptr
	,decodeMode_}
	{	}

friend S_image_view_create_info;
};

/*	VkImageViewCreateInfo
ex:
	VkImageViewUsageCreateInfo
	VkSamplerYcbcrConversionInfo
	VkImageViewASTCDecodeModeEXT
*/

struct N_image_view_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_image_view_create_info& n_image_view_usage_create_info(S_image_view_usage_create_info const& next_);
N_image_view_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
N_image_view_create_info& n_image_view_astc_decode_mode_EXT(S_image_view_astc_decode_mode_EXT const& next_);
};
template<> struct my_class_convert<S_image_view_create_info> { using type = VkImageViewCreateInfo;};
template<> struct my_class_convert<VkImageViewCreateInfo> { using type = S_image_view_create_info;};
struct		S_image_view_create_info:VkImageViewCreateInfo{
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
	{	}

S_image_view_create_info& n_image_view_usage_create_info(S_image_view_usage_create_info const& next_);
S_image_view_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
S_image_view_create_info& n_image_view_astc_decode_mode_EXT(S_image_view_astc_decode_mode_EXT const& next_);
void set_pNext(N_image_view_create_info n_){pNext = n_;}
};

/*	VkBufferCopy
*/
template<> struct my_class_convert<S_buffer_copy> { using type = VkBufferCopy;};
template<> struct my_class_convert<VkBufferCopy> { using type = S_buffer_copy;};
struct		S_buffer_copy:VkBufferCopy{
	using VkBufferCopy::srcOffset;
	using VkBufferCopy::dstOffset;
	using VkBufferCopy::size;
};

/*	VkSparseMemoryBind
*/
template<> struct my_class_convert<S_sparse_memory_bind> { using type = VkSparseMemoryBind;};
template<> struct my_class_convert<VkSparseMemoryBind> { using type = S_sparse_memory_bind;};
struct		S_sparse_memory_bind:VkSparseMemoryBind{
	using VkSparseMemoryBind::resourceOffset;
	using VkSparseMemoryBind::size;
	using VkSparseMemoryBind::memory;
	using VkSparseMemoryBind::memoryOffset;
	using VkSparseMemoryBind::flags;
};

/*	VkSparseImageMemoryBind
*/
template<> struct my_class_convert<S_sparse_image_memory_bind> { using type = VkSparseImageMemoryBind;};
template<> struct my_class_convert<VkSparseImageMemoryBind> { using type = S_sparse_image_memory_bind;};
struct		S_sparse_image_memory_bind:VkSparseImageMemoryBind{
	using VkSparseImageMemoryBind::subresource;
	using VkSparseImageMemoryBind::offset;
	using VkSparseImageMemoryBind::extent;
	using VkSparseImageMemoryBind::memory;
	using VkSparseImageMemoryBind::memoryOffset;
	using VkSparseImageMemoryBind::flags;
};

/*	VkSparseBufferMemoryBindInfo
*/
template<> struct my_class_convert<S_sparse_buffer_memory_bind_info> { using type = VkSparseBufferMemoryBindInfo;};
template<> struct my_class_convert<VkSparseBufferMemoryBindInfo> { using type = S_sparse_buffer_memory_bind_info;};
struct		S_sparse_buffer_memory_bind_info:VkSparseBufferMemoryBindInfo{
	using VkSparseBufferMemoryBindInfo::buffer;
	using VkSparseBufferMemoryBindInfo::bindCount;
	using VkSparseBufferMemoryBindInfo::pBinds;
};

/*	VkSparseImageOpaqueMemoryBindInfo
*/
template<> struct my_class_convert<S_sparse_image_opaque_memory_bind_info> { using type = VkSparseImageOpaqueMemoryBindInfo;};
template<> struct my_class_convert<VkSparseImageOpaqueMemoryBindInfo> { using type = S_sparse_image_opaque_memory_bind_info;};
struct		S_sparse_image_opaque_memory_bind_info:VkSparseImageOpaqueMemoryBindInfo{
	using VkSparseImageOpaqueMemoryBindInfo::image;
	using VkSparseImageOpaqueMemoryBindInfo::bindCount;
	using VkSparseImageOpaqueMemoryBindInfo::pBinds;
};

/*	VkSparseImageMemoryBindInfo
*/
template<> struct my_class_convert<S_sparse_image_memory_bind_info> { using type = VkSparseImageMemoryBindInfo;};
template<> struct my_class_convert<VkSparseImageMemoryBindInfo> { using type = S_sparse_image_memory_bind_info;};
struct		S_sparse_image_memory_bind_info:VkSparseImageMemoryBindInfo{
	using VkSparseImageMemoryBindInfo::image;
	using VkSparseImageMemoryBindInfo::bindCount;
	using VkSparseImageMemoryBindInfo::pBinds;
};

/*	VkDeviceGroupBindSparseInfo
ex to: VkBindSparseInfo
*/
template<> struct my_class_convert<S_device_group_bind_sparse_info> { using type = VkDeviceGroupBindSparseInfo;};
template<> struct my_class_convert<VkDeviceGroupBindSparseInfo> { using type = S_device_group_bind_sparse_info;};
struct		S_device_group_bind_sparse_info:VkDeviceGroupBindSparseInfo{
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
	{	}

friend S_bind_sparse_info;
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
template<> struct my_class_convert<S_bind_sparse_info> { using type = VkBindSparseInfo;};
template<> struct my_class_convert<VkBindSparseInfo> { using type = S_bind_sparse_info;};
struct		S_bind_sparse_info:VkBindSparseInfo{
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
	{	}

S_bind_sparse_info& n_device_group_bind_sparse_info(S_device_group_bind_sparse_info const& next_);
void set_pNext(N_bind_sparse_info n_){pNext = n_;}
};

/*	VkImageCopy
*/
template<> struct my_class_convert<S_image_copy> { using type = VkImageCopy;};
template<> struct my_class_convert<VkImageCopy> { using type = S_image_copy;};
struct		S_image_copy:VkImageCopy{
	using VkImageCopy::srcSubresource;
	using VkImageCopy::srcOffset;
	using VkImageCopy::dstSubresource;
	using VkImageCopy::dstOffset;
	using VkImageCopy::extent;
};

/*	VkImageBlit
*/
template<> struct my_class_convert<S_image_blit> { using type = VkImageBlit;};
template<> struct my_class_convert<VkImageBlit> { using type = S_image_blit;};
struct		S_image_blit:VkImageBlit{
	using VkImageBlit::srcSubresource;
	using VkImageBlit::srcOffsets;
	using VkImageBlit::dstSubresource;
	using VkImageBlit::dstOffsets;
};

/*	VkBufferImageCopy
*/
template<> struct my_class_convert<S_buffer_image_copy> { using type = VkBufferImageCopy;};
template<> struct my_class_convert<VkBufferImageCopy> { using type = S_buffer_image_copy;};
struct		S_buffer_image_copy:VkBufferImageCopy{
	using VkBufferImageCopy::bufferOffset;
	using VkBufferImageCopy::bufferRowLength;
	using VkBufferImageCopy::bufferImageHeight;
	using VkBufferImageCopy::imageSubresource;
	using VkBufferImageCopy::imageOffset;
	using VkBufferImageCopy::imageExtent;
};

/*	VkImageResolve
*/
template<> struct my_class_convert<S_image_resolve> { using type = VkImageResolve;};
template<> struct my_class_convert<VkImageResolve> { using type = S_image_resolve;};
struct		S_image_resolve:VkImageResolve{
	using VkImageResolve::srcSubresource;
	using VkImageResolve::srcOffset;
	using VkImageResolve::dstSubresource;
	using VkImageResolve::dstOffset;
	using VkImageResolve::extent;
};

/*	VkShaderModuleValidationCacheCreateInfoEXT
ex to: VkShaderModuleCreateInfo
*/
template<> struct my_class_convert<S_shader_module_validation_cache_create_info_EXT> { using type = VkShaderModuleValidationCacheCreateInfoEXT;};
template<> struct my_class_convert<VkShaderModuleValidationCacheCreateInfoEXT> { using type = S_shader_module_validation_cache_create_info_EXT;};
struct		S_shader_module_validation_cache_create_info_EXT:VkShaderModuleValidationCacheCreateInfoEXT{
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
	{	}

friend S_shader_module_create_info;
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
template<> struct my_class_convert<S_shader_module_create_info> { using type = VkShaderModuleCreateInfo;};
template<> struct my_class_convert<VkShaderModuleCreateInfo> { using type = S_shader_module_create_info;};
struct		S_shader_module_create_info:VkShaderModuleCreateInfo{
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
	{	}

S_shader_module_create_info& n_shader_module_validation_cache_create_info_EXT(S_shader_module_validation_cache_create_info_EXT const& next_);
void set_pNext(N_shader_module_create_info n_){pNext = n_;}
};

/*	VkDescriptorSetLayoutBinding
*/
template<> struct my_class_convert<S_descriptor_set_layout_binding> { using type = VkDescriptorSetLayoutBinding;};
template<> struct my_class_convert<VkDescriptorSetLayoutBinding> { using type = S_descriptor_set_layout_binding;};
struct		S_descriptor_set_layout_binding:VkDescriptorSetLayoutBinding{
	using VkDescriptorSetLayoutBinding::binding;
	using VkDescriptorSetLayoutBinding::descriptorType;
	using VkDescriptorSetLayoutBinding::descriptorCount;
	using VkDescriptorSetLayoutBinding::stageFlags;
	using VkDescriptorSetLayoutBinding::pImmutableSamplers;
};

/*	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT
ex to: VkDescriptorSetLayoutCreateInfo
*/
template<> struct my_class_convert<S_descriptor_set_layout_binding_flags_create_info_EXT> { using type = VkDescriptorSetLayoutBindingFlagsCreateInfoEXT;};
template<> struct my_class_convert<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT> { using type = S_descriptor_set_layout_binding_flags_create_info_EXT;};
struct		S_descriptor_set_layout_binding_flags_create_info_EXT:VkDescriptorSetLayoutBindingFlagsCreateInfoEXT{
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
	,pBindingFlags_}
	{	}

friend S_descriptor_set_layout_create_info;
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
template<> struct my_class_convert<S_descriptor_set_layout_create_info> { using type = VkDescriptorSetLayoutCreateInfo;};
template<> struct my_class_convert<VkDescriptorSetLayoutCreateInfo> { using type = S_descriptor_set_layout_create_info;};
struct		S_descriptor_set_layout_create_info:VkDescriptorSetLayoutCreateInfo{
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
	,flags_
	,bindingCount_
	,pBindings_}
	{	}

S_descriptor_set_layout_create_info& n_descriptor_set_layout_binding_flags_create_info_EXT(S_descriptor_set_layout_binding_flags_create_info_EXT const& next_);
void set_pNext(N_descriptor_set_layout_create_info n_){pNext = n_;}
};

/*	VkDescriptorPoolSize
*/
template<> struct my_class_convert<S_descriptor_pool_size> { using type = VkDescriptorPoolSize;};
template<> struct my_class_convert<VkDescriptorPoolSize> { using type = S_descriptor_pool_size;};
struct		S_descriptor_pool_size:VkDescriptorPoolSize{
	using VkDescriptorPoolSize::type;
	using VkDescriptorPoolSize::descriptorCount;
};

/*	VkDescriptorPoolInlineUniformBlockCreateInfoEXT
ex to: VkDescriptorPoolCreateInfo
*/
template<> struct my_class_convert<S_descriptor_pool_inline_uniform_block_create_info_EXT> { using type = VkDescriptorPoolInlineUniformBlockCreateInfoEXT;};
template<> struct my_class_convert<VkDescriptorPoolInlineUniformBlockCreateInfoEXT> { using type = S_descriptor_pool_inline_uniform_block_create_info_EXT;};
struct		S_descriptor_pool_inline_uniform_block_create_info_EXT:VkDescriptorPoolInlineUniformBlockCreateInfoEXT{
private:
	using VkDescriptorPoolInlineUniformBlockCreateInfoEXT::sType;
	using VkDescriptorPoolInlineUniformBlockCreateInfoEXT::pNext;
public:
	using VkDescriptorPoolInlineUniformBlockCreateInfoEXT::maxInlineUniformBlockBindings;

S_descriptor_pool_inline_uniform_block_create_info_EXT():VkDescriptorPoolInlineUniformBlockCreateInfoEXT{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT,nullptr}{}
S_descriptor_pool_inline_uniform_block_create_info_EXT(
	uint32_t maxInlineUniformBlockBindings_)
	:VkDescriptorPoolInlineUniformBlockCreateInfoEXT{
	VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT
	,nullptr
	,maxInlineUniformBlockBindings_}
	{	}

friend S_descriptor_pool_create_info;
};

/*	VkDescriptorPoolCreateInfo
ex:
	VkDescriptorPoolInlineUniformBlockCreateInfoEXT
*/

struct N_descriptor_pool_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_descriptor_pool_create_info& n_descriptor_pool_inline_uniform_block_create_info_EXT(S_descriptor_pool_inline_uniform_block_create_info_EXT const& next_);
};
template<> struct my_class_convert<S_descriptor_pool_create_info> { using type = VkDescriptorPoolCreateInfo;};
template<> struct my_class_convert<VkDescriptorPoolCreateInfo> { using type = S_descriptor_pool_create_info;};
struct		S_descriptor_pool_create_info:VkDescriptorPoolCreateInfo{
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
	{	}

S_descriptor_pool_create_info& n_descriptor_pool_inline_uniform_block_create_info_EXT(S_descriptor_pool_inline_uniform_block_create_info_EXT const& next_);
void set_pNext(N_descriptor_pool_create_info n_){pNext = n_;}
};

/*	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT
ex to: VkDescriptorSetAllocateInfo
*/
template<> struct my_class_convert<S_descriptor_set_variable_descriptor_count_allocate_info_EXT> { using type = VkDescriptorSetVariableDescriptorCountAllocateInfoEXT;};
template<> struct my_class_convert<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT> { using type = S_descriptor_set_variable_descriptor_count_allocate_info_EXT;};
struct		S_descriptor_set_variable_descriptor_count_allocate_info_EXT:VkDescriptorSetVariableDescriptorCountAllocateInfoEXT{
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
	{	}

friend S_descriptor_set_allocate_info;
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
template<> struct my_class_convert<S_descriptor_set_allocate_info> { using type = VkDescriptorSetAllocateInfo;};
template<> struct my_class_convert<VkDescriptorSetAllocateInfo> { using type = S_descriptor_set_allocate_info;};
struct		S_descriptor_set_allocate_info:VkDescriptorSetAllocateInfo{
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
	{	}

S_descriptor_set_allocate_info& n_descriptor_set_variable_descriptor_count_allocate_info_EXT(S_descriptor_set_variable_descriptor_count_allocate_info_EXT const& next_);
void set_pNext(N_descriptor_set_allocate_info n_){pNext = n_;}
};

/*	VkSpecializationMapEntry
*/
template<> struct my_class_convert<S_specialization_map_entry> { using type = VkSpecializationMapEntry;};
template<> struct my_class_convert<VkSpecializationMapEntry> { using type = S_specialization_map_entry;};
struct		S_specialization_map_entry:VkSpecializationMapEntry{
	using VkSpecializationMapEntry::constantID;
	using VkSpecializationMapEntry::offset;
	using VkSpecializationMapEntry::size;
};

/*	VkSpecializationInfo
*/
template<> struct my_class_convert<S_specialization_info> { using type = VkSpecializationInfo;};
template<> struct my_class_convert<VkSpecializationInfo> { using type = S_specialization_info;};
struct		S_specialization_info:VkSpecializationInfo{
	using VkSpecializationInfo::mapEntryCount;
	using VkSpecializationInfo::pMapEntries;
	using VkSpecializationInfo::dataSize;
	using VkSpecializationInfo::pData;
};

/*	VkPipelineShaderStageCreateInfo
*/
template<> struct my_class_convert<S_pipeline_shader_stage_create_info> { using type = VkPipelineShaderStageCreateInfo;};
template<> struct my_class_convert<VkPipelineShaderStageCreateInfo> { using type = S_pipeline_shader_stage_create_info;};
struct		S_pipeline_shader_stage_create_info:VkPipelineShaderStageCreateInfo{
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
	{	}
};

/*	VkComputePipelineCreateInfo
*/
template<> struct my_class_convert<S_compute_pipeline_create_info> { using type = VkComputePipelineCreateInfo;};
template<> struct my_class_convert<VkComputePipelineCreateInfo> { using type = S_compute_pipeline_create_info;};
struct		S_compute_pipeline_create_info:VkComputePipelineCreateInfo{
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
	{	}
};

/*	VkVertexInputBindingDescription
*/
template<> struct my_class_convert<S_vertex_input_binding_description> { using type = VkVertexInputBindingDescription;};
template<> struct my_class_convert<VkVertexInputBindingDescription> { using type = S_vertex_input_binding_description;};
struct		S_vertex_input_binding_description:VkVertexInputBindingDescription{
	using VkVertexInputBindingDescription::binding;
	using VkVertexInputBindingDescription::stride;
	using VkVertexInputBindingDescription::inputRate;
};

/*	VkVertexInputAttributeDescription
*/
template<> struct my_class_convert<S_vertex_input_attribute_description> { using type = VkVertexInputAttributeDescription;};
template<> struct my_class_convert<VkVertexInputAttributeDescription> { using type = S_vertex_input_attribute_description;};
struct		S_vertex_input_attribute_description:VkVertexInputAttributeDescription{
	using VkVertexInputAttributeDescription::location;
	using VkVertexInputAttributeDescription::binding;
	using VkVertexInputAttributeDescription::format;
	using VkVertexInputAttributeDescription::offset;
};

/*	VkVertexInputBindingDivisorDescriptionEXT
*/
template<> struct my_class_convert<S_vertex_input_binding_divisor_description_EXT> { using type = VkVertexInputBindingDivisorDescriptionEXT;};
template<> struct my_class_convert<VkVertexInputBindingDivisorDescriptionEXT> { using type = S_vertex_input_binding_divisor_description_EXT;};
struct		S_vertex_input_binding_divisor_description_EXT:VkVertexInputBindingDivisorDescriptionEXT{
	using VkVertexInputBindingDivisorDescriptionEXT::binding;
	using VkVertexInputBindingDivisorDescriptionEXT::divisor;
};

/*	VkPipelineVertexInputDivisorStateCreateInfoEXT
ex to: VkPipelineVertexInputStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_vertex_input_divisor_state_create_info_EXT> { using type = VkPipelineVertexInputDivisorStateCreateInfoEXT;};
template<> struct my_class_convert<VkPipelineVertexInputDivisorStateCreateInfoEXT> { using type = S_pipeline_vertex_input_divisor_state_create_info_EXT;};
struct		S_pipeline_vertex_input_divisor_state_create_info_EXT:VkPipelineVertexInputDivisorStateCreateInfoEXT{
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
	{	}

friend S_pipeline_vertex_input_state_create_info;
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
template<> struct my_class_convert<S_pipeline_vertex_input_state_create_info> { using type = VkPipelineVertexInputStateCreateInfo;};
template<> struct my_class_convert<VkPipelineVertexInputStateCreateInfo> { using type = S_pipeline_vertex_input_state_create_info;};
struct		S_pipeline_vertex_input_state_create_info:VkPipelineVertexInputStateCreateInfo{
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
	{	}

S_pipeline_vertex_input_state_create_info& n_pipeline_vertex_input_divisor_state_create_info_EXT(S_pipeline_vertex_input_divisor_state_create_info_EXT const& next_);
void set_pNext(N_pipeline_vertex_input_state_create_info n_){pNext = n_;}
};

/*	VkPipelineInputAssemblyStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_input_assembly_state_create_info> { using type = VkPipelineInputAssemblyStateCreateInfo;};
template<> struct my_class_convert<VkPipelineInputAssemblyStateCreateInfo> { using type = S_pipeline_input_assembly_state_create_info;};
struct		S_pipeline_input_assembly_state_create_info:VkPipelineInputAssemblyStateCreateInfo{
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
	{	}
};

/*	VkPipelineTessellationDomainOriginStateCreateInfo
ex to: VkPipelineTessellationStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_tessellation_domain_origin_state_create_info> { using type = VkPipelineTessellationDomainOriginStateCreateInfo;};
template<> struct my_class_convert<VkPipelineTessellationDomainOriginStateCreateInfo> { using type = S_pipeline_tessellation_domain_origin_state_create_info;};
struct		S_pipeline_tessellation_domain_origin_state_create_info:VkPipelineTessellationDomainOriginStateCreateInfo{
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
	{	}

friend S_pipeline_tessellation_state_create_info;
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
template<> struct my_class_convert<S_pipeline_tessellation_state_create_info> { using type = VkPipelineTessellationStateCreateInfo;};
template<> struct my_class_convert<VkPipelineTessellationStateCreateInfo> { using type = S_pipeline_tessellation_state_create_info;};
struct		S_pipeline_tessellation_state_create_info:VkPipelineTessellationStateCreateInfo{
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
	{	}

S_pipeline_tessellation_state_create_info& n_pipeline_tessellation_domain_origin_state_create_info(S_pipeline_tessellation_domain_origin_state_create_info const& next_);
void set_pNext(N_pipeline_tessellation_state_create_info n_){pNext = n_;}
};

/*	VkViewportWScalingNV
*/
template<> struct my_class_convert<S_viewport_w_scaling_NV> { using type = VkViewportWScalingNV;};
template<> struct my_class_convert<VkViewportWScalingNV> { using type = S_viewport_w_scaling_NV;};
struct		S_viewport_w_scaling_NV:VkViewportWScalingNV{
	using VkViewportWScalingNV::xcoeff;
	using VkViewportWScalingNV::ycoeff;
};

/*	VkPipelineViewportWScalingStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_viewport_w_scaling_state_create_info_NV> { using type = VkPipelineViewportWScalingStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineViewportWScalingStateCreateInfoNV> { using type = S_pipeline_viewport_w_scaling_state_create_info_NV;};
struct		S_pipeline_viewport_w_scaling_state_create_info_NV:VkPipelineViewportWScalingStateCreateInfoNV{
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
	{	}

friend S_pipeline_viewport_state_create_info;
};

/*	VkViewportSwizzleNV
*/
template<> struct my_class_convert<S_viewport_swizzle_NV> { using type = VkViewportSwizzleNV;};
template<> struct my_class_convert<VkViewportSwizzleNV> { using type = S_viewport_swizzle_NV;};
struct		S_viewport_swizzle_NV:VkViewportSwizzleNV{
	using VkViewportSwizzleNV::x;
	using VkViewportSwizzleNV::y;
	using VkViewportSwizzleNV::z;
	using VkViewportSwizzleNV::w;
};

/*	VkPipelineViewportSwizzleStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_viewport_swizzle_state_create_info_NV> { using type = VkPipelineViewportSwizzleStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineViewportSwizzleStateCreateInfoNV> { using type = S_pipeline_viewport_swizzle_state_create_info_NV;};
struct		S_pipeline_viewport_swizzle_state_create_info_NV:VkPipelineViewportSwizzleStateCreateInfoNV{
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
	{	}

friend S_pipeline_viewport_state_create_info;
};

/*	VkPipelineViewportExclusiveScissorStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_viewport_exclusive_scissor_state_create_info_NV> { using type = VkPipelineViewportExclusiveScissorStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineViewportExclusiveScissorStateCreateInfoNV> { using type = S_pipeline_viewport_exclusive_scissor_state_create_info_NV;};
struct		S_pipeline_viewport_exclusive_scissor_state_create_info_NV:VkPipelineViewportExclusiveScissorStateCreateInfoNV{
private:
	using VkPipelineViewportExclusiveScissorStateCreateInfoNV::sType;
	using VkPipelineViewportExclusiveScissorStateCreateInfoNV::pNext;
public:
	using VkPipelineViewportExclusiveScissorStateCreateInfoNV::exclusiveScissorCount;
	using VkPipelineViewportExclusiveScissorStateCreateInfoNV::pExclusiveScissors;

S_pipeline_viewport_exclusive_scissor_state_create_info_NV():VkPipelineViewportExclusiveScissorStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_viewport_exclusive_scissor_state_create_info_NV(
	uint32_t exclusiveScissorCount_,
	const S_rect_2d * pExclusiveScissors_)
	:VkPipelineViewportExclusiveScissorStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV
	,nullptr
	,exclusiveScissorCount_
	,pExclusiveScissors_}
	{	}

friend S_pipeline_viewport_state_create_info;
};

/*	VkShadingRatePaletteNV
*/
template<> struct my_class_convert<S_shading_rate_palette_NV> { using type = VkShadingRatePaletteNV;};
template<> struct my_class_convert<VkShadingRatePaletteNV> { using type = S_shading_rate_palette_NV;};
struct		S_shading_rate_palette_NV:VkShadingRatePaletteNV{
	using VkShadingRatePaletteNV::shadingRatePaletteEntryCount;
	using VkShadingRatePaletteNV::pShadingRatePaletteEntries;
};

/*	VkPipelineViewportShadingRateImageStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_viewport_shading_rate_image_state_create_info_NV> { using type = VkPipelineViewportShadingRateImageStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineViewportShadingRateImageStateCreateInfoNV> { using type = S_pipeline_viewport_shading_rate_image_state_create_info_NV;};
struct		S_pipeline_viewport_shading_rate_image_state_create_info_NV:VkPipelineViewportShadingRateImageStateCreateInfoNV{
private:
	using VkPipelineViewportShadingRateImageStateCreateInfoNV::sType;
	using VkPipelineViewportShadingRateImageStateCreateInfoNV::pNext;
public:
	using VkPipelineViewportShadingRateImageStateCreateInfoNV::shadingRateImageEnable;
	using VkPipelineViewportShadingRateImageStateCreateInfoNV::viewportCount;
	using VkPipelineViewportShadingRateImageStateCreateInfoNV::pShadingRatePalettes;

S_pipeline_viewport_shading_rate_image_state_create_info_NV():VkPipelineViewportShadingRateImageStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_viewport_shading_rate_image_state_create_info_NV(
	VkBool32 shadingRateImageEnable_,
	uint32_t viewportCount_,
	const S_shading_rate_palette_NV * pShadingRatePalettes_)
	:VkPipelineViewportShadingRateImageStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV
	,nullptr
	,shadingRateImageEnable_
	,viewportCount_
	,pShadingRatePalettes_}
	{	}

friend S_pipeline_viewport_state_create_info;
};

/*	VkCoarseSampleLocationNV
*/
template<> struct my_class_convert<S_coarse_sample_location_NV> { using type = VkCoarseSampleLocationNV;};
template<> struct my_class_convert<VkCoarseSampleLocationNV> { using type = S_coarse_sample_location_NV;};
struct		S_coarse_sample_location_NV:VkCoarseSampleLocationNV{
	using VkCoarseSampleLocationNV::pixelX;
	using VkCoarseSampleLocationNV::pixelY;
	using VkCoarseSampleLocationNV::sample;
};

/*	VkCoarseSampleOrderCustomNV
*/
template<> struct my_class_convert<S_coarse_sample_order_custom_NV> { using type = VkCoarseSampleOrderCustomNV;};
template<> struct my_class_convert<VkCoarseSampleOrderCustomNV> { using type = S_coarse_sample_order_custom_NV;};
struct		S_coarse_sample_order_custom_NV:VkCoarseSampleOrderCustomNV{
	using VkCoarseSampleOrderCustomNV::shadingRate;
	using VkCoarseSampleOrderCustomNV::sampleCount;
	using VkCoarseSampleOrderCustomNV::sampleLocationCount;
	using VkCoarseSampleOrderCustomNV::pSampleLocations;
};

/*	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV
ex to: VkPipelineViewportStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_viewport_coarse_sample_order_state_create_info_NV> { using type = VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV> { using type = S_pipeline_viewport_coarse_sample_order_state_create_info_NV;};
struct		S_pipeline_viewport_coarse_sample_order_state_create_info_NV:VkPipelineViewportCoarseSampleOrderStateCreateInfoNV{
private:
	using VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::sType;
	using VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::pNext;
public:
	using VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::sampleOrderType;
	using VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::customSampleOrderCount;
	using VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::pCustomSampleOrders;

S_pipeline_viewport_coarse_sample_order_state_create_info_NV():VkPipelineViewportCoarseSampleOrderStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_viewport_coarse_sample_order_state_create_info_NV(
	E_coarse_sample_order_type_NV sampleOrderType_,
	uint32_t customSampleOrderCount_,
	const S_coarse_sample_order_custom_NV * pCustomSampleOrders_)
	:VkPipelineViewportCoarseSampleOrderStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV
	,nullptr
	,sampleOrderType_
	,customSampleOrderCount_
	,pCustomSampleOrders_}
	{	}

friend S_pipeline_viewport_state_create_info;
};

/*	VkPipelineViewportStateCreateInfo
ex:
	VkPipelineViewportWScalingStateCreateInfoNV
	VkPipelineViewportSwizzleStateCreateInfoNV
	VkPipelineViewportExclusiveScissorStateCreateInfoNV
	VkPipelineViewportShadingRateImageStateCreateInfoNV
	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV
*/

struct N_pipeline_viewport_state_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_pipeline_viewport_state_create_info& n_pipeline_viewport_w_scaling_state_create_info_NV(S_pipeline_viewport_w_scaling_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_swizzle_state_create_info_NV(S_pipeline_viewport_swizzle_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_exclusive_scissor_state_create_info_NV(S_pipeline_viewport_exclusive_scissor_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_shading_rate_image_state_create_info_NV(S_pipeline_viewport_shading_rate_image_state_create_info_NV const& next_);
N_pipeline_viewport_state_create_info& n_pipeline_viewport_coarse_sample_order_state_create_info_NV(S_pipeline_viewport_coarse_sample_order_state_create_info_NV const& next_);
};
template<> struct my_class_convert<S_pipeline_viewport_state_create_info> { using type = VkPipelineViewportStateCreateInfo;};
template<> struct my_class_convert<VkPipelineViewportStateCreateInfo> { using type = S_pipeline_viewport_state_create_info;};
struct		S_pipeline_viewport_state_create_info:VkPipelineViewportStateCreateInfo{
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
	{	}

S_pipeline_viewport_state_create_info& n_pipeline_viewport_w_scaling_state_create_info_NV(S_pipeline_viewport_w_scaling_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_swizzle_state_create_info_NV(S_pipeline_viewport_swizzle_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_exclusive_scissor_state_create_info_NV(S_pipeline_viewport_exclusive_scissor_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_shading_rate_image_state_create_info_NV(S_pipeline_viewport_shading_rate_image_state_create_info_NV const& next_);
S_pipeline_viewport_state_create_info& n_pipeline_viewport_coarse_sample_order_state_create_info_NV(S_pipeline_viewport_coarse_sample_order_state_create_info_NV const& next_);
void set_pNext(N_pipeline_viewport_state_create_info n_){pNext = n_;}
};

/*	VkPipelineRasterizationStateRasterizationOrderAMD
ex to: VkPipelineRasterizationStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_rasterization_state_rasterization_order_AMD> { using type = VkPipelineRasterizationStateRasterizationOrderAMD;};
template<> struct my_class_convert<VkPipelineRasterizationStateRasterizationOrderAMD> { using type = S_pipeline_rasterization_state_rasterization_order_AMD;};
struct		S_pipeline_rasterization_state_rasterization_order_AMD:VkPipelineRasterizationStateRasterizationOrderAMD{
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
	{	}

friend S_pipeline_rasterization_state_create_info;
};

/*	VkPipelineRasterizationConservativeStateCreateInfoEXT
ex to: VkPipelineRasterizationStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_rasterization_conservative_state_create_info_EXT> { using type = VkPipelineRasterizationConservativeStateCreateInfoEXT;};
template<> struct my_class_convert<VkPipelineRasterizationConservativeStateCreateInfoEXT> { using type = S_pipeline_rasterization_conservative_state_create_info_EXT;};
struct		S_pipeline_rasterization_conservative_state_create_info_EXT:VkPipelineRasterizationConservativeStateCreateInfoEXT{
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
	{	}

friend S_pipeline_rasterization_state_create_info;
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
template<> struct my_class_convert<S_pipeline_rasterization_state_create_info> { using type = VkPipelineRasterizationStateCreateInfo;};
template<> struct my_class_convert<VkPipelineRasterizationStateCreateInfo> { using type = S_pipeline_rasterization_state_create_info;};
struct		S_pipeline_rasterization_state_create_info:VkPipelineRasterizationStateCreateInfo{
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
	{	}

S_pipeline_rasterization_state_create_info& n_pipeline_rasterization_state_rasterization_order_AMD(S_pipeline_rasterization_state_rasterization_order_AMD const& next_);
S_pipeline_rasterization_state_create_info& n_pipeline_rasterization_conservative_state_create_info_EXT(S_pipeline_rasterization_conservative_state_create_info_EXT const& next_);
void set_pNext(N_pipeline_rasterization_state_create_info n_){pNext = n_;}
};

/*	VkPipelineCoverageToColorStateCreateInfoNV
ex to: VkPipelineMultisampleStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_coverage_to_color_state_create_info_NV> { using type = VkPipelineCoverageToColorStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineCoverageToColorStateCreateInfoNV> { using type = S_pipeline_coverage_to_color_state_create_info_NV;};
struct		S_pipeline_coverage_to_color_state_create_info_NV:VkPipelineCoverageToColorStateCreateInfoNV{
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
	{	}

friend S_pipeline_multisample_state_create_info;
};

/*	VkPipelineSampleLocationsStateCreateInfoEXT
ex to: VkPipelineMultisampleStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_sample_locations_state_create_info_EXT> { using type = VkPipelineSampleLocationsStateCreateInfoEXT;};
template<> struct my_class_convert<VkPipelineSampleLocationsStateCreateInfoEXT> { using type = S_pipeline_sample_locations_state_create_info_EXT;};
struct		S_pipeline_sample_locations_state_create_info_EXT:VkPipelineSampleLocationsStateCreateInfoEXT{
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
	{	}

friend S_pipeline_multisample_state_create_info;
};

/*	VkPipelineCoverageModulationStateCreateInfoNV
ex to: VkPipelineMultisampleStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_coverage_modulation_state_create_info_NV> { using type = VkPipelineCoverageModulationStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineCoverageModulationStateCreateInfoNV> { using type = S_pipeline_coverage_modulation_state_create_info_NV;};
struct		S_pipeline_coverage_modulation_state_create_info_NV:VkPipelineCoverageModulationStateCreateInfoNV{
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
	{	}

friend S_pipeline_multisample_state_create_info;
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
template<> struct my_class_convert<S_pipeline_multisample_state_create_info> { using type = VkPipelineMultisampleStateCreateInfo;};
template<> struct my_class_convert<VkPipelineMultisampleStateCreateInfo> { using type = S_pipeline_multisample_state_create_info;};
struct		S_pipeline_multisample_state_create_info:VkPipelineMultisampleStateCreateInfo{
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
	{	}

S_pipeline_multisample_state_create_info& n_pipeline_coverage_to_color_state_create_info_NV(S_pipeline_coverage_to_color_state_create_info_NV const& next_);
S_pipeline_multisample_state_create_info& n_pipeline_sample_locations_state_create_info_EXT(S_pipeline_sample_locations_state_create_info_EXT const& next_);
S_pipeline_multisample_state_create_info& n_pipeline_coverage_modulation_state_create_info_NV(S_pipeline_coverage_modulation_state_create_info_NV const& next_);
void set_pNext(N_pipeline_multisample_state_create_info n_){pNext = n_;}
};

/*	VkPipelineColorBlendAttachmentState
*/
template<> struct my_class_convert<S_pipeline_color_blend_attachment_state> { using type = VkPipelineColorBlendAttachmentState;};
template<> struct my_class_convert<VkPipelineColorBlendAttachmentState> { using type = S_pipeline_color_blend_attachment_state;};
struct		S_pipeline_color_blend_attachment_state:VkPipelineColorBlendAttachmentState{
	using VkPipelineColorBlendAttachmentState::blendEnable;
	using VkPipelineColorBlendAttachmentState::srcColorBlendFactor;
	using VkPipelineColorBlendAttachmentState::dstColorBlendFactor;
	using VkPipelineColorBlendAttachmentState::colorBlendOp;
	using VkPipelineColorBlendAttachmentState::srcAlphaBlendFactor;
	using VkPipelineColorBlendAttachmentState::dstAlphaBlendFactor;
	using VkPipelineColorBlendAttachmentState::alphaBlendOp;
	using VkPipelineColorBlendAttachmentState::colorWriteMask;
};

/*	VkPipelineColorBlendAdvancedStateCreateInfoEXT
ex to: VkPipelineColorBlendStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_color_blend_advanced_state_create_info_EXT> { using type = VkPipelineColorBlendAdvancedStateCreateInfoEXT;};
template<> struct my_class_convert<VkPipelineColorBlendAdvancedStateCreateInfoEXT> { using type = S_pipeline_color_blend_advanced_state_create_info_EXT;};
struct		S_pipeline_color_blend_advanced_state_create_info_EXT:VkPipelineColorBlendAdvancedStateCreateInfoEXT{
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
	{	}

friend S_pipeline_color_blend_state_create_info;
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
template<> struct my_class_convert<S_pipeline_color_blend_state_create_info> { using type = VkPipelineColorBlendStateCreateInfo;};
template<> struct my_class_convert<VkPipelineColorBlendStateCreateInfo> { using type = S_pipeline_color_blend_state_create_info;};
struct		S_pipeline_color_blend_state_create_info:VkPipelineColorBlendStateCreateInfo{
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
	,blendConstants_}
	{	}

S_pipeline_color_blend_state_create_info& n_pipeline_color_blend_advanced_state_create_info_EXT(S_pipeline_color_blend_advanced_state_create_info_EXT const& next_);
void set_pNext(N_pipeline_color_blend_state_create_info n_){pNext = n_;}
};

/*	VkPipelineDynamicStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_dynamic_state_create_info> { using type = VkPipelineDynamicStateCreateInfo;};
template<> struct my_class_convert<VkPipelineDynamicStateCreateInfo> { using type = S_pipeline_dynamic_state_create_info;};
struct		S_pipeline_dynamic_state_create_info:VkPipelineDynamicStateCreateInfo{
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
	{	}
};

/*	VkStencilOpState
*/
template<> struct my_class_convert<S_stencil_op_state> { using type = VkStencilOpState;};
template<> struct my_class_convert<VkStencilOpState> { using type = S_stencil_op_state;};
struct		S_stencil_op_state:VkStencilOpState{
	using VkStencilOpState::failOp;
	using VkStencilOpState::passOp;
	using VkStencilOpState::depthFailOp;
	using VkStencilOpState::compareOp;
	using VkStencilOpState::compareMask;
	using VkStencilOpState::writeMask;
	using VkStencilOpState::reference;
};

/*	VkPipelineDepthStencilStateCreateInfo
*/
template<> struct my_class_convert<S_pipeline_depth_stencil_state_create_info> { using type = VkPipelineDepthStencilStateCreateInfo;};
template<> struct my_class_convert<VkPipelineDepthStencilStateCreateInfo> { using type = S_pipeline_depth_stencil_state_create_info;};
struct		S_pipeline_depth_stencil_state_create_info:VkPipelineDepthStencilStateCreateInfo{
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
	{	}
};

/*	VkPipelineDiscardRectangleStateCreateInfoEXT
ex to: VkGraphicsPipelineCreateInfo
*/
template<> struct my_class_convert<S_pipeline_discard_rectangle_state_create_info_EXT> { using type = VkPipelineDiscardRectangleStateCreateInfoEXT;};
template<> struct my_class_convert<VkPipelineDiscardRectangleStateCreateInfoEXT> { using type = S_pipeline_discard_rectangle_state_create_info_EXT;};
struct		S_pipeline_discard_rectangle_state_create_info_EXT:VkPipelineDiscardRectangleStateCreateInfoEXT{
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
	{	}

friend S_graphics_pipeline_create_info;
};

/*	VkPipelineRepresentativeFragmentTestStateCreateInfoNV
ex to: VkGraphicsPipelineCreateInfo
*/
template<> struct my_class_convert<S_pipeline_representative_fragment_test_state_create_info_NV> { using type = VkPipelineRepresentativeFragmentTestStateCreateInfoNV;};
template<> struct my_class_convert<VkPipelineRepresentativeFragmentTestStateCreateInfoNV> { using type = S_pipeline_representative_fragment_test_state_create_info_NV;};
struct		S_pipeline_representative_fragment_test_state_create_info_NV:VkPipelineRepresentativeFragmentTestStateCreateInfoNV{
private:
	using VkPipelineRepresentativeFragmentTestStateCreateInfoNV::sType;
	using VkPipelineRepresentativeFragmentTestStateCreateInfoNV::pNext;
public:
	using VkPipelineRepresentativeFragmentTestStateCreateInfoNV::representativeFragmentTestEnable;

S_pipeline_representative_fragment_test_state_create_info_NV():VkPipelineRepresentativeFragmentTestStateCreateInfoNV{VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV,nullptr}{}
S_pipeline_representative_fragment_test_state_create_info_NV(
	VkBool32 representativeFragmentTestEnable_)
	:VkPipelineRepresentativeFragmentTestStateCreateInfoNV{
	VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV
	,nullptr
	,representativeFragmentTestEnable_}
	{	}

friend S_graphics_pipeline_create_info;
};

/*	VkGraphicsPipelineCreateInfo
ex:
	VkPipelineDiscardRectangleStateCreateInfoEXT
	VkPipelineRepresentativeFragmentTestStateCreateInfoNV
*/

struct N_graphics_pipeline_create_info{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_graphics_pipeline_create_info& n_pipeline_discard_rectangle_state_create_info_EXT(S_pipeline_discard_rectangle_state_create_info_EXT const& next_);
N_graphics_pipeline_create_info& n_pipeline_representative_fragment_test_state_create_info_NV(S_pipeline_representative_fragment_test_state_create_info_NV const& next_);
};
template<> struct my_class_convert<S_graphics_pipeline_create_info> { using type = VkGraphicsPipelineCreateInfo;};
template<> struct my_class_convert<VkGraphicsPipelineCreateInfo> { using type = S_graphics_pipeline_create_info;};
struct		S_graphics_pipeline_create_info:VkGraphicsPipelineCreateInfo{
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
	{	}

S_graphics_pipeline_create_info& n_pipeline_discard_rectangle_state_create_info_EXT(S_pipeline_discard_rectangle_state_create_info_EXT const& next_);
S_graphics_pipeline_create_info& n_pipeline_representative_fragment_test_state_create_info_NV(S_pipeline_representative_fragment_test_state_create_info_NV const& next_);
void set_pNext(N_graphics_pipeline_create_info n_){pNext = n_;}
};

/*	VkPipelineCacheCreateInfo
*/
template<> struct my_class_convert<S_pipeline_cache_create_info> { using type = VkPipelineCacheCreateInfo;};
template<> struct my_class_convert<VkPipelineCacheCreateInfo> { using type = S_pipeline_cache_create_info;};
struct		S_pipeline_cache_create_info:VkPipelineCacheCreateInfo{
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
	{	}
};

/*	VkPushConstantRange
*/
template<> struct my_class_convert<S_push_constant_range> { using type = VkPushConstantRange;};
template<> struct my_class_convert<VkPushConstantRange> { using type = S_push_constant_range;};
struct		S_push_constant_range:VkPushConstantRange{
	using VkPushConstantRange::stageFlags;
	using VkPushConstantRange::offset;
	using VkPushConstantRange::size;
};

/*	VkPipelineLayoutCreateInfo
*/
template<> struct my_class_convert<S_pipeline_layout_create_info> { using type = VkPipelineLayoutCreateInfo;};
template<> struct my_class_convert<VkPipelineLayoutCreateInfo> { using type = S_pipeline_layout_create_info;};
struct		S_pipeline_layout_create_info:VkPipelineLayoutCreateInfo{
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
	{	}
};

/*	VkSamplerReductionModeCreateInfoEXT
ex to: VkSamplerCreateInfo
*/
template<> struct my_class_convert<S_sampler_reduction_mode_create_info_EXT> { using type = VkSamplerReductionModeCreateInfoEXT;};
template<> struct my_class_convert<VkSamplerReductionModeCreateInfoEXT> { using type = S_sampler_reduction_mode_create_info_EXT;};
struct		S_sampler_reduction_mode_create_info_EXT:VkSamplerReductionModeCreateInfoEXT{
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
	{	}

friend S_sampler_create_info;
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
template<> struct my_class_convert<S_sampler_create_info> { using type = VkSamplerCreateInfo;};
template<> struct my_class_convert<VkSamplerCreateInfo> { using type = S_sampler_create_info;};
struct		S_sampler_create_info:VkSamplerCreateInfo{
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
	{	}

S_sampler_create_info& n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_);
S_sampler_create_info& n_sampler_reduction_mode_create_info_EXT(S_sampler_reduction_mode_create_info_EXT const& next_);
void set_pNext(N_sampler_create_info n_){pNext = n_;}
};

/*	VkCommandPoolCreateInfo
*/
template<> struct my_class_convert<S_command_pool_create_info> { using type = VkCommandPoolCreateInfo;};
template<> struct my_class_convert<VkCommandPoolCreateInfo> { using type = S_command_pool_create_info;};
struct		S_command_pool_create_info:VkCommandPoolCreateInfo{
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
	{	}
};

/*	VkCommandBufferAllocateInfo
*/
template<> struct my_class_convert<S_command_buffer_allocate_info> { using type = VkCommandBufferAllocateInfo;};
template<> struct my_class_convert<VkCommandBufferAllocateInfo> { using type = S_command_buffer_allocate_info;};
struct		S_command_buffer_allocate_info:VkCommandBufferAllocateInfo{
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
	{	}
};

/*	VkCommandBufferInheritanceConditionalRenderingInfoEXT
ex to: VkCommandBufferInheritanceInfo
*/
template<> struct my_class_convert<S_command_buffer_inheritance_conditional_rendering_info_EXT> { using type = VkCommandBufferInheritanceConditionalRenderingInfoEXT;};
template<> struct my_class_convert<VkCommandBufferInheritanceConditionalRenderingInfoEXT> { using type = S_command_buffer_inheritance_conditional_rendering_info_EXT;};
struct		S_command_buffer_inheritance_conditional_rendering_info_EXT:VkCommandBufferInheritanceConditionalRenderingInfoEXT{
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
	{	}

friend S_command_buffer_inheritance_info;
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
template<> struct my_class_convert<S_command_buffer_inheritance_info> { using type = VkCommandBufferInheritanceInfo;};
template<> struct my_class_convert<VkCommandBufferInheritanceInfo> { using type = S_command_buffer_inheritance_info;};
struct		S_command_buffer_inheritance_info:VkCommandBufferInheritanceInfo{
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
	{	}

S_command_buffer_inheritance_info& n_command_buffer_inheritance_conditional_rendering_info_EXT(S_command_buffer_inheritance_conditional_rendering_info_EXT const& next_);
void set_pNext(N_command_buffer_inheritance_info n_){pNext = n_;}
};

/*	VkDeviceGroupCommandBufferBeginInfo
ex to: VkCommandBufferBeginInfo
*/
template<> struct my_class_convert<S_device_group_command_buffer_begin_info> { using type = VkDeviceGroupCommandBufferBeginInfo;};
template<> struct my_class_convert<VkDeviceGroupCommandBufferBeginInfo> { using type = S_device_group_command_buffer_begin_info;};
struct		S_device_group_command_buffer_begin_info:VkDeviceGroupCommandBufferBeginInfo{
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
	{	}

friend S_command_buffer_begin_info;
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
template<> struct my_class_convert<S_command_buffer_begin_info> { using type = VkCommandBufferBeginInfo;};
template<> struct my_class_convert<VkCommandBufferBeginInfo> { using type = S_command_buffer_begin_info;};
struct		S_command_buffer_begin_info:VkCommandBufferBeginInfo{
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
	{	}

S_command_buffer_begin_info& n_device_group_command_buffer_begin_info(S_device_group_command_buffer_begin_info const& next_);
void set_pNext(N_command_buffer_begin_info n_){pNext = n_;}
};

/*	VkDeviceGroupRenderPassBeginInfo
ex to: VkRenderPassBeginInfo
*/
template<> struct my_class_convert<S_device_group_render_pass_begin_info> { using type = VkDeviceGroupRenderPassBeginInfo;};
template<> struct my_class_convert<VkDeviceGroupRenderPassBeginInfo> { using type = S_device_group_render_pass_begin_info;};
struct		S_device_group_render_pass_begin_info:VkDeviceGroupRenderPassBeginInfo{
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
	{	}

friend S_render_pass_begin_info;
};

/*	VkAttachmentSampleLocationsEXT
*/
template<> struct my_class_convert<S_attachment_sample_locations_EXT> { using type = VkAttachmentSampleLocationsEXT;};
template<> struct my_class_convert<VkAttachmentSampleLocationsEXT> { using type = S_attachment_sample_locations_EXT;};
struct		S_attachment_sample_locations_EXT:VkAttachmentSampleLocationsEXT{
	using VkAttachmentSampleLocationsEXT::attachmentIndex;
	using VkAttachmentSampleLocationsEXT::sampleLocationsInfo;
};

/*	VkSubpassSampleLocationsEXT
*/
template<> struct my_class_convert<S_subpass_sample_locations_EXT> { using type = VkSubpassSampleLocationsEXT;};
template<> struct my_class_convert<VkSubpassSampleLocationsEXT> { using type = S_subpass_sample_locations_EXT;};
struct		S_subpass_sample_locations_EXT:VkSubpassSampleLocationsEXT{
	using VkSubpassSampleLocationsEXT::subpassIndex;
	using VkSubpassSampleLocationsEXT::sampleLocationsInfo;
};

/*	VkRenderPassSampleLocationsBeginInfoEXT
ex to: VkRenderPassBeginInfo
*/
template<> struct my_class_convert<S_render_pass_sample_locations_begin_info_EXT> { using type = VkRenderPassSampleLocationsBeginInfoEXT;};
template<> struct my_class_convert<VkRenderPassSampleLocationsBeginInfoEXT> { using type = S_render_pass_sample_locations_begin_info_EXT;};
struct		S_render_pass_sample_locations_begin_info_EXT:VkRenderPassSampleLocationsBeginInfoEXT{
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
	{	}

friend S_render_pass_begin_info;
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
template<> struct my_class_convert<S_render_pass_begin_info> { using type = VkRenderPassBeginInfo;};
template<> struct my_class_convert<VkRenderPassBeginInfo> { using type = S_render_pass_begin_info;};
struct		S_render_pass_begin_info:VkRenderPassBeginInfo{
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
	{	}

S_render_pass_begin_info& n_device_group_render_pass_begin_info(S_device_group_render_pass_begin_info const& next_);
S_render_pass_begin_info& n_render_pass_sample_locations_begin_info_EXT(S_render_pass_sample_locations_begin_info_EXT const& next_);
void set_pNext(N_render_pass_begin_info n_){pNext = n_;}
};

/*	VkClearDepthStencilValue
*/
template<> struct my_class_convert<S_clear_depth_stencil_value> { using type = VkClearDepthStencilValue;};
template<> struct my_class_convert<VkClearDepthStencilValue> { using type = S_clear_depth_stencil_value;};
struct		S_clear_depth_stencil_value:VkClearDepthStencilValue{
	using VkClearDepthStencilValue::depth;
	using VkClearDepthStencilValue::stencil;
};

/*	VkClearAttachment
*/
template<> struct my_class_convert<S_clear_attachment> { using type = VkClearAttachment;};
template<> struct my_class_convert<VkClearAttachment> { using type = S_clear_attachment;};
struct		S_clear_attachment:VkClearAttachment{
	using VkClearAttachment::aspectMask;
	using VkClearAttachment::colorAttachment;
	using VkClearAttachment::clearValue;
};

/*	VkAttachmentDescription
*/
template<> struct my_class_convert<S_attachment_description> { using type = VkAttachmentDescription;};
template<> struct my_class_convert<VkAttachmentDescription> { using type = S_attachment_description;};
struct		S_attachment_description:VkAttachmentDescription{
	using VkAttachmentDescription::flags;
	using VkAttachmentDescription::format;
	using VkAttachmentDescription::samples;
	using VkAttachmentDescription::loadOp;
	using VkAttachmentDescription::storeOp;
	using VkAttachmentDescription::stencilLoadOp;
	using VkAttachmentDescription::stencilStoreOp;
	using VkAttachmentDescription::initialLayout;
	using VkAttachmentDescription::finalLayout;
};

/*	VkAttachmentReference
*/
template<> struct my_class_convert<S_attachment_reference> { using type = VkAttachmentReference;};
template<> struct my_class_convert<VkAttachmentReference> { using type = S_attachment_reference;};
struct		S_attachment_reference:VkAttachmentReference{
	using VkAttachmentReference::attachment;
	using VkAttachmentReference::layout;
};

/*	VkSubpassDescription
*/
template<> struct my_class_convert<S_subpass_description> { using type = VkSubpassDescription;};
template<> struct my_class_convert<VkSubpassDescription> { using type = S_subpass_description;};
struct		S_subpass_description:VkSubpassDescription{
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
};

/*	VkSubpassDependency
*/
template<> struct my_class_convert<S_subpass_dependency> { using type = VkSubpassDependency;};
template<> struct my_class_convert<VkSubpassDependency> { using type = S_subpass_dependency;};
struct		S_subpass_dependency:VkSubpassDependency{
	using VkSubpassDependency::srcSubpass;
	using VkSubpassDependency::dstSubpass;
	using VkSubpassDependency::srcStageMask;
	using VkSubpassDependency::dstStageMask;
	using VkSubpassDependency::srcAccessMask;
	using VkSubpassDependency::dstAccessMask;
	using VkSubpassDependency::dependencyFlags;
};

/*	VkRenderPassMultiviewCreateInfo
ex to: VkRenderPassCreateInfo
*/
template<> struct my_class_convert<S_render_pass_multiview_create_info> { using type = VkRenderPassMultiviewCreateInfo;};
template<> struct my_class_convert<VkRenderPassMultiviewCreateInfo> { using type = S_render_pass_multiview_create_info;};
struct		S_render_pass_multiview_create_info:VkRenderPassMultiviewCreateInfo{
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
	{	}

friend S_render_pass_create_info;
};

/*	VkInputAttachmentAspectReference
*/
template<> struct my_class_convert<S_input_attachment_aspect_reference> { using type = VkInputAttachmentAspectReference;};
template<> struct my_class_convert<VkInputAttachmentAspectReference> { using type = S_input_attachment_aspect_reference;};
struct		S_input_attachment_aspect_reference:VkInputAttachmentAspectReference{
	using VkInputAttachmentAspectReference::subpass;
	using VkInputAttachmentAspectReference::inputAttachmentIndex;
	using VkInputAttachmentAspectReference::aspectMask;
};

/*	VkRenderPassInputAttachmentAspectCreateInfo
ex to: VkRenderPassCreateInfo
*/
template<> struct my_class_convert<S_render_pass_input_attachment_aspect_create_info> { using type = VkRenderPassInputAttachmentAspectCreateInfo;};
template<> struct my_class_convert<VkRenderPassInputAttachmentAspectCreateInfo> { using type = S_render_pass_input_attachment_aspect_create_info;};
struct		S_render_pass_input_attachment_aspect_create_info:VkRenderPassInputAttachmentAspectCreateInfo{
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
	{	}

friend S_render_pass_create_info;
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
template<> struct my_class_convert<S_render_pass_create_info> { using type = VkRenderPassCreateInfo;};
template<> struct my_class_convert<VkRenderPassCreateInfo> { using type = S_render_pass_create_info;};
struct		S_render_pass_create_info:VkRenderPassCreateInfo{
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
	F_render_pass_create flags_,
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
	{	}

S_render_pass_create_info& n_render_pass_multiview_create_info(S_render_pass_multiview_create_info const& next_);
S_render_pass_create_info& n_render_pass_input_attachment_aspect_create_info(S_render_pass_input_attachment_aspect_create_info const& next_);
void set_pNext(N_render_pass_create_info n_){pNext = n_;}
};

/*	VkEventCreateInfo
*/
template<> struct my_class_convert<S_event_create_info> { using type = VkEventCreateInfo;};
template<> struct my_class_convert<VkEventCreateInfo> { using type = S_event_create_info;};
struct		S_event_create_info:VkEventCreateInfo{
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
	{	}
};

/*	VkExportFenceCreateInfo
ex to: VkFenceCreateInfo
*/
template<> struct my_class_convert<S_export_fence_create_info> { using type = VkExportFenceCreateInfo;};
template<> struct my_class_convert<VkExportFenceCreateInfo> { using type = S_export_fence_create_info;};
struct		S_export_fence_create_info:VkExportFenceCreateInfo{
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
	{	}

friend S_fence_create_info;
};

/*	VkExportFenceWin32HandleInfoKHR
ex to: VkFenceCreateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_export_fence_win32_handle_info_KHR> { using type = VkExportFenceWin32HandleInfoKHR;};
template<> struct my_class_convert<VkExportFenceWin32HandleInfoKHR> { using type = S_export_fence_win32_handle_info_KHR;};
struct		S_export_fence_win32_handle_info_KHR:VkExportFenceWin32HandleInfoKHR{
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
	{	}

friend S_fence_create_info;
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
template<> struct my_class_convert<S_fence_create_info> { using type = VkFenceCreateInfo;};
template<> struct my_class_convert<VkFenceCreateInfo> { using type = S_fence_create_info;};
struct		S_fence_create_info:VkFenceCreateInfo{
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
	{	}

S_fence_create_info& n_export_fence_create_info(S_export_fence_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_fence_create_info& n_export_fence_win32_handle_info_KHR(S_export_fence_win32_handle_info_KHR const& next_);
#endif
void set_pNext(N_fence_create_info n_){pNext = n_;}
};

/*	VkExportSemaphoreCreateInfo
ex to: VkSemaphoreCreateInfo
*/
template<> struct my_class_convert<S_export_semaphore_create_info> { using type = VkExportSemaphoreCreateInfo;};
template<> struct my_class_convert<VkExportSemaphoreCreateInfo> { using type = S_export_semaphore_create_info;};
struct		S_export_semaphore_create_info:VkExportSemaphoreCreateInfo{
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
	{	}

friend S_semaphore_create_info;
};

/*	VkExportSemaphoreWin32HandleInfoKHR
ex to: VkSemaphoreCreateInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_export_semaphore_win32_handle_info_KHR> { using type = VkExportSemaphoreWin32HandleInfoKHR;};
template<> struct my_class_convert<VkExportSemaphoreWin32HandleInfoKHR> { using type = S_export_semaphore_win32_handle_info_KHR;};
struct		S_export_semaphore_win32_handle_info_KHR:VkExportSemaphoreWin32HandleInfoKHR{
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
	{	}

friend S_semaphore_create_info;
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
template<> struct my_class_convert<S_semaphore_create_info> { using type = VkSemaphoreCreateInfo;};
template<> struct my_class_convert<VkSemaphoreCreateInfo> { using type = S_semaphore_create_info;};
struct		S_semaphore_create_info:VkSemaphoreCreateInfo{
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
	{	}

S_semaphore_create_info& n_export_semaphore_create_info(S_export_semaphore_create_info const& next_);
#ifdef VK_USE_PLATFORM_WIN32_KHR
S_semaphore_create_info& n_export_semaphore_win32_handle_info_KHR(S_export_semaphore_win32_handle_info_KHR const& next_);
#endif
void set_pNext(N_semaphore_create_info n_){pNext = n_;}
};

/*	VkQueryPoolCreateInfo
*/
template<> struct my_class_convert<S_query_pool_create_info> { using type = VkQueryPoolCreateInfo;};
template<> struct my_class_convert<VkQueryPoolCreateInfo> { using type = S_query_pool_create_info;};
struct		S_query_pool_create_info:VkQueryPoolCreateInfo{
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
	{	}
};

/*	VkFramebufferCreateInfo
*/
template<> struct my_class_convert<S_framebuffer_create_info> { using type = VkFramebufferCreateInfo;};
template<> struct my_class_convert<VkFramebufferCreateInfo> { using type = S_framebuffer_create_info;};
struct		S_framebuffer_create_info:VkFramebufferCreateInfo{
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
	{	}
};

/*	VkDrawIndirectCommand
*/
template<> struct my_class_convert<S_draw_indirect_command> { using type = VkDrawIndirectCommand;};
template<> struct my_class_convert<VkDrawIndirectCommand> { using type = S_draw_indirect_command;};
struct		S_draw_indirect_command:VkDrawIndirectCommand{
	using VkDrawIndirectCommand::vertexCount;
	using VkDrawIndirectCommand::instanceCount;
	using VkDrawIndirectCommand::firstVertex;
	using VkDrawIndirectCommand::firstInstance;
};

/*	VkDrawIndexedIndirectCommand
*/
template<> struct my_class_convert<S_draw_indexed_indirect_command> { using type = VkDrawIndexedIndirectCommand;};
template<> struct my_class_convert<VkDrawIndexedIndirectCommand> { using type = S_draw_indexed_indirect_command;};
struct		S_draw_indexed_indirect_command:VkDrawIndexedIndirectCommand{
	using VkDrawIndexedIndirectCommand::indexCount;
	using VkDrawIndexedIndirectCommand::instanceCount;
	using VkDrawIndexedIndirectCommand::firstIndex;
	using VkDrawIndexedIndirectCommand::vertexOffset;
	using VkDrawIndexedIndirectCommand::firstInstance;
};

/*	VkDispatchIndirectCommand
*/
template<> struct my_class_convert<S_dispatch_indirect_command> { using type = VkDispatchIndirectCommand;};
template<> struct my_class_convert<VkDispatchIndirectCommand> { using type = S_dispatch_indirect_command;};
struct		S_dispatch_indirect_command:VkDispatchIndirectCommand{
	using VkDispatchIndirectCommand::x;
	using VkDispatchIndirectCommand::y;
	using VkDispatchIndirectCommand::z;
};

/*	VkWin32KeyedMutexAcquireReleaseInfoNV
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_win32_keyed_mutex_acquire_release_info_NV> { using type = VkWin32KeyedMutexAcquireReleaseInfoNV;};
template<> struct my_class_convert<VkWin32KeyedMutexAcquireReleaseInfoNV> { using type = S_win32_keyed_mutex_acquire_release_info_NV;};
struct		S_win32_keyed_mutex_acquire_release_info_NV:VkWin32KeyedMutexAcquireReleaseInfoNV{
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
	{	}

friend S_submit_info;
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkWin32KeyedMutexAcquireReleaseInfoKHR
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_win32_keyed_mutex_acquire_release_info_KHR> { using type = VkWin32KeyedMutexAcquireReleaseInfoKHR;};
template<> struct my_class_convert<VkWin32KeyedMutexAcquireReleaseInfoKHR> { using type = S_win32_keyed_mutex_acquire_release_info_KHR;};
struct		S_win32_keyed_mutex_acquire_release_info_KHR:VkWin32KeyedMutexAcquireReleaseInfoKHR{
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
	{	}

friend S_submit_info;
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkD3D12FenceSubmitInfoKHR
ex to: VkSubmitInfo
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_d_3d12_fence_submit_info_KHR> { using type = VkD3D12FenceSubmitInfoKHR;};
template<> struct my_class_convert<VkD3D12FenceSubmitInfoKHR> { using type = S_d_3d12_fence_submit_info_KHR;};
struct		S_d_3d12_fence_submit_info_KHR:VkD3D12FenceSubmitInfoKHR{
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
	{	}

friend S_submit_info;
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkDeviceGroupSubmitInfo
ex to: VkSubmitInfo
*/
template<> struct my_class_convert<S_device_group_submit_info> { using type = VkDeviceGroupSubmitInfo;};
template<> struct my_class_convert<VkDeviceGroupSubmitInfo> { using type = S_device_group_submit_info;};
struct		S_device_group_submit_info:VkDeviceGroupSubmitInfo{
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
	{	}

friend S_submit_info;
};

/*	VkProtectedSubmitInfo
ex to: VkSubmitInfo
*/
template<> struct my_class_convert<S_protected_submit_info> { using type = VkProtectedSubmitInfo;};
template<> struct my_class_convert<VkProtectedSubmitInfo> { using type = S_protected_submit_info;};
struct		S_protected_submit_info:VkProtectedSubmitInfo{
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
	{	}

friend S_submit_info;
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
template<> struct my_class_convert<S_submit_info> { using type = VkSubmitInfo;};
template<> struct my_class_convert<VkSubmitInfo> { using type = S_submit_info;};
struct		S_submit_info:VkSubmitInfo{
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
	,pWaitDstStageMask_
	,commandBufferCount_
	,pCommandBuffers_
	,signalSemaphoreCount_
	,pSignalSemaphores_}
	{	}

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
template<> struct my_class_convert<S_display_properties_KHR> { using type = VkDisplayPropertiesKHR;};
template<> struct my_class_convert<VkDisplayPropertiesKHR> { using type = S_display_properties_KHR;};
struct		S_display_properties_KHR:VkDisplayPropertiesKHR{
	using VkDisplayPropertiesKHR::display;
	using VkDisplayPropertiesKHR::displayName;
	using VkDisplayPropertiesKHR::physicalDimensions;
	using VkDisplayPropertiesKHR::physicalResolution;
	using VkDisplayPropertiesKHR::supportedTransforms;
	using VkDisplayPropertiesKHR::planeReorderPossible;
	using VkDisplayPropertiesKHR::persistentContent;
};

/*	VkDisplayPlanePropertiesKHR
(returnedonly)
*/
template<> struct my_class_convert<S_display_plane_properties_KHR> { using type = VkDisplayPlanePropertiesKHR;};
template<> struct my_class_convert<VkDisplayPlanePropertiesKHR> { using type = S_display_plane_properties_KHR;};
struct		S_display_plane_properties_KHR:VkDisplayPlanePropertiesKHR{
	using VkDisplayPlanePropertiesKHR::currentDisplay;
	using VkDisplayPlanePropertiesKHR::currentStackIndex;
};

/*	VkDisplayModeParametersKHR
*/
template<> struct my_class_convert<S_display_mode_parameters_KHR> { using type = VkDisplayModeParametersKHR;};
template<> struct my_class_convert<VkDisplayModeParametersKHR> { using type = S_display_mode_parameters_KHR;};
struct		S_display_mode_parameters_KHR:VkDisplayModeParametersKHR{
	using VkDisplayModeParametersKHR::visibleRegion;
	using VkDisplayModeParametersKHR::refreshRate;
};

/*	VkDisplayModePropertiesKHR
(returnedonly)
*/
template<> struct my_class_convert<S_display_mode_properties_KHR> { using type = VkDisplayModePropertiesKHR;};
template<> struct my_class_convert<VkDisplayModePropertiesKHR> { using type = S_display_mode_properties_KHR;};
struct		S_display_mode_properties_KHR:VkDisplayModePropertiesKHR{
	using VkDisplayModePropertiesKHR::displayMode;
	using VkDisplayModePropertiesKHR::parameters;
};

/*	VkDisplayModeCreateInfoKHR
*/
template<> struct my_class_convert<S_display_mode_create_info_KHR> { using type = VkDisplayModeCreateInfoKHR;};
template<> struct my_class_convert<VkDisplayModeCreateInfoKHR> { using type = S_display_mode_create_info_KHR;};
struct		S_display_mode_create_info_KHR:VkDisplayModeCreateInfoKHR{
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
	{	}
};

/*	VkDisplayPlaneCapabilitiesKHR
(returnedonly)
*/
template<> struct my_class_convert<S_display_plane_capabilities_KHR> { using type = VkDisplayPlaneCapabilitiesKHR;};
template<> struct my_class_convert<VkDisplayPlaneCapabilitiesKHR> { using type = S_display_plane_capabilities_KHR;};
struct		S_display_plane_capabilities_KHR:VkDisplayPlaneCapabilitiesKHR{
	using VkDisplayPlaneCapabilitiesKHR::supportedAlpha;
	using VkDisplayPlaneCapabilitiesKHR::minSrcPosition;
	using VkDisplayPlaneCapabilitiesKHR::maxSrcPosition;
	using VkDisplayPlaneCapabilitiesKHR::minSrcExtent;
	using VkDisplayPlaneCapabilitiesKHR::maxSrcExtent;
	using VkDisplayPlaneCapabilitiesKHR::minDstPosition;
	using VkDisplayPlaneCapabilitiesKHR::maxDstPosition;
	using VkDisplayPlaneCapabilitiesKHR::minDstExtent;
	using VkDisplayPlaneCapabilitiesKHR::maxDstExtent;
};

/*	VkDisplaySurfaceCreateInfoKHR
*/
template<> struct my_class_convert<S_display_surface_create_info_KHR> { using type = VkDisplaySurfaceCreateInfoKHR;};
template<> struct my_class_convert<VkDisplaySurfaceCreateInfoKHR> { using type = S_display_surface_create_info_KHR;};
struct		S_display_surface_create_info_KHR:VkDisplaySurfaceCreateInfoKHR{
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
	{	}
};

/*	VkDisplayPresentInfoKHR
ex to: VkPresentInfoKHR
*/
template<> struct my_class_convert<S_display_present_info_KHR> { using type = VkDisplayPresentInfoKHR;};
template<> struct my_class_convert<VkDisplayPresentInfoKHR> { using type = S_display_present_info_KHR;};
struct		S_display_present_info_KHR:VkDisplayPresentInfoKHR{
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
	{	}

friend S_present_info_KHR;
};

/*	VkSurfaceCapabilitiesKHR
(returnedonly)
*/
template<> struct my_class_convert<S_surface_capabilities_KHR> { using type = VkSurfaceCapabilitiesKHR;};
template<> struct my_class_convert<VkSurfaceCapabilitiesKHR> { using type = S_surface_capabilities_KHR;};
struct		S_surface_capabilities_KHR:VkSurfaceCapabilitiesKHR{
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
};

/*	VkAndroidSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template<> struct my_class_convert<S_android_surface_create_info_KHR> { using type = VkAndroidSurfaceCreateInfoKHR;};
template<> struct my_class_convert<VkAndroidSurfaceCreateInfoKHR> { using type = S_android_surface_create_info_KHR;};
struct		S_android_surface_create_info_KHR:VkAndroidSurfaceCreateInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkMirSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_MIR_KHR
template<> struct my_class_convert<S_mir_surface_create_info_KHR> { using type = VkMirSurfaceCreateInfoKHR;};
template<> struct my_class_convert<VkMirSurfaceCreateInfoKHR> { using type = S_mir_surface_create_info_KHR;};
struct		S_mir_surface_create_info_KHR:VkMirSurfaceCreateInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_MIR_KHR

/*	VkViSurfaceCreateInfoNN
*/
#ifdef VK_USE_PLATFORM_VI_NN
template<> struct my_class_convert<S_vi_surface_create_info_NN> { using type = VkViSurfaceCreateInfoNN;};
template<> struct my_class_convert<VkViSurfaceCreateInfoNN> { using type = S_vi_surface_create_info_NN;};
struct		S_vi_surface_create_info_NN:VkViSurfaceCreateInfoNN{
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
	{	}
};
#endif //VK_USE_PLATFORM_VI_NN

/*	VkWaylandSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template<> struct my_class_convert<S_wayland_surface_create_info_KHR> { using type = VkWaylandSurfaceCreateInfoKHR;};
template<> struct my_class_convert<VkWaylandSurfaceCreateInfoKHR> { using type = S_wayland_surface_create_info_KHR;};
struct		S_wayland_surface_create_info_KHR:VkWaylandSurfaceCreateInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WAYLAND_KHR

/*	VkWin32SurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_win32_surface_create_info_KHR> { using type = VkWin32SurfaceCreateInfoKHR;};
template<> struct my_class_convert<VkWin32SurfaceCreateInfoKHR> { using type = S_win32_surface_create_info_KHR;};
struct		S_win32_surface_create_info_KHR:VkWin32SurfaceCreateInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkXlibSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_XLIB_KHR
template<> struct my_class_convert<S_xlib_surface_create_info_KHR> { using type = VkXlibSurfaceCreateInfoKHR;};
template<> struct my_class_convert<VkXlibSurfaceCreateInfoKHR> { using type = S_xlib_surface_create_info_KHR;};
struct		S_xlib_surface_create_info_KHR:VkXlibSurfaceCreateInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_XLIB_KHR

/*	VkXcbSurfaceCreateInfoKHR
*/
#ifdef VK_USE_PLATFORM_XCB_KHR
template<> struct my_class_convert<S_xcb_surface_create_info_KHR> { using type = VkXcbSurfaceCreateInfoKHR;};
template<> struct my_class_convert<VkXcbSurfaceCreateInfoKHR> { using type = S_xcb_surface_create_info_KHR;};
struct		S_xcb_surface_create_info_KHR:VkXcbSurfaceCreateInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_XCB_KHR

/*	VkSurfaceFormatKHR
(returnedonly)
*/
template<> struct my_class_convert<S_surface_format_KHR> { using type = VkSurfaceFormatKHR;};
template<> struct my_class_convert<VkSurfaceFormatKHR> { using type = S_surface_format_KHR;};
struct		S_surface_format_KHR:VkSurfaceFormatKHR{
	using VkSurfaceFormatKHR::format;
	using VkSurfaceFormatKHR::colorSpace;
};

/*	VkSwapchainCounterCreateInfoEXT
ex to: VkSwapchainCreateInfoKHR
*/
template<> struct my_class_convert<S_swapchain_counter_create_info_EXT> { using type = VkSwapchainCounterCreateInfoEXT;};
template<> struct my_class_convert<VkSwapchainCounterCreateInfoEXT> { using type = S_swapchain_counter_create_info_EXT;};
struct		S_swapchain_counter_create_info_EXT:VkSwapchainCounterCreateInfoEXT{
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
	{	}

friend S_swapchain_create_info_KHR;
};

/*	VkDeviceGroupSwapchainCreateInfoKHR
ex to: VkSwapchainCreateInfoKHR
*/
template<> struct my_class_convert<S_device_group_swapchain_create_info_KHR> { using type = VkDeviceGroupSwapchainCreateInfoKHR;};
template<> struct my_class_convert<VkDeviceGroupSwapchainCreateInfoKHR> { using type = S_device_group_swapchain_create_info_KHR;};
struct		S_device_group_swapchain_create_info_KHR:VkDeviceGroupSwapchainCreateInfoKHR{
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
	{	}

friend S_swapchain_create_info_KHR;
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
template<> struct my_class_convert<S_swapchain_create_info_KHR> { using type = VkSwapchainCreateInfoKHR;};
template<> struct my_class_convert<VkSwapchainCreateInfoKHR> { using type = S_swapchain_create_info_KHR;};
struct		S_swapchain_create_info_KHR:VkSwapchainCreateInfoKHR{
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
	,flags_
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
	{	}

S_swapchain_create_info_KHR& n_swapchain_counter_create_info_EXT(S_swapchain_counter_create_info_EXT const& next_);
S_swapchain_create_info_KHR& n_device_group_swapchain_create_info_KHR(S_device_group_swapchain_create_info_KHR const& next_);
void set_pNext(N_swapchain_create_info_KHR n_){pNext = n_;}
};

/*	VkRectLayerKHR
*/
template<> struct my_class_convert<S_rect_layer_KHR> { using type = VkRectLayerKHR;};
template<> struct my_class_convert<VkRectLayerKHR> { using type = S_rect_layer_KHR;};
struct		S_rect_layer_KHR:VkRectLayerKHR{
	using VkRectLayerKHR::offset;
	using VkRectLayerKHR::extent;
	using VkRectLayerKHR::layer;
};

/*	VkPresentRegionKHR
*/
template<> struct my_class_convert<S_present_region_KHR> { using type = VkPresentRegionKHR;};
template<> struct my_class_convert<VkPresentRegionKHR> { using type = S_present_region_KHR;};
struct		S_present_region_KHR:VkPresentRegionKHR{
	using VkPresentRegionKHR::rectangleCount;
	using VkPresentRegionKHR::pRectangles;
};

/*	VkPresentRegionsKHR
ex to: VkPresentInfoKHR
*/
template<> struct my_class_convert<S_present_regions_KHR> { using type = VkPresentRegionsKHR;};
template<> struct my_class_convert<VkPresentRegionsKHR> { using type = S_present_regions_KHR;};
struct		S_present_regions_KHR:VkPresentRegionsKHR{
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
	{	}

friend S_present_info_KHR;
};

/*	VkDeviceGroupPresentInfoKHR
ex to: VkPresentInfoKHR
*/
template<> struct my_class_convert<S_device_group_present_info_KHR> { using type = VkDeviceGroupPresentInfoKHR;};
template<> struct my_class_convert<VkDeviceGroupPresentInfoKHR> { using type = S_device_group_present_info_KHR;};
struct		S_device_group_present_info_KHR:VkDeviceGroupPresentInfoKHR{
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
	{	}

friend S_present_info_KHR;
};

/*	VkPresentTimeGOOGLE
*/
template<> struct my_class_convert<S_present_time_GOOGLE> { using type = VkPresentTimeGOOGLE;};
template<> struct my_class_convert<VkPresentTimeGOOGLE> { using type = S_present_time_GOOGLE;};
struct		S_present_time_GOOGLE:VkPresentTimeGOOGLE{
	using VkPresentTimeGOOGLE::presentID;
	using VkPresentTimeGOOGLE::desiredPresentTime;
};

/*	VkPresentTimesInfoGOOGLE
ex to: VkPresentInfoKHR
*/
template<> struct my_class_convert<S_present_times_info_GOOGLE> { using type = VkPresentTimesInfoGOOGLE;};
template<> struct my_class_convert<VkPresentTimesInfoGOOGLE> { using type = S_present_times_info_GOOGLE;};
struct		S_present_times_info_GOOGLE:VkPresentTimesInfoGOOGLE{
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
	{	}

friend S_present_info_KHR;
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
template<> struct my_class_convert<S_present_info_KHR> { using type = VkPresentInfoKHR;};
template<> struct my_class_convert<VkPresentInfoKHR> { using type = S_present_info_KHR;};
struct		S_present_info_KHR:VkPresentInfoKHR{
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
	{	}

S_present_info_KHR& n_display_present_info_KHR(S_display_present_info_KHR const& next_);
S_present_info_KHR& n_present_regions_KHR(S_present_regions_KHR const& next_);
S_present_info_KHR& n_device_group_present_info_KHR(S_device_group_present_info_KHR const& next_);
S_present_info_KHR& n_present_times_info_GOOGLE(S_present_times_info_GOOGLE const& next_);
void set_pNext(N_present_info_KHR n_){pNext = n_;}
};

/*	VkDebugMarkerObjectNameInfoEXT
*/
template<> struct my_class_convert<S_debug_marker_object_name_info_EXT> { using type = VkDebugMarkerObjectNameInfoEXT;};
template<> struct my_class_convert<VkDebugMarkerObjectNameInfoEXT> { using type = S_debug_marker_object_name_info_EXT;};
struct		S_debug_marker_object_name_info_EXT:VkDebugMarkerObjectNameInfoEXT{
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
	{	}
};

/*	VkDebugMarkerObjectTagInfoEXT
*/
template<> struct my_class_convert<S_debug_marker_object_tag_info_EXT> { using type = VkDebugMarkerObjectTagInfoEXT;};
template<> struct my_class_convert<VkDebugMarkerObjectTagInfoEXT> { using type = S_debug_marker_object_tag_info_EXT;};
struct		S_debug_marker_object_tag_info_EXT:VkDebugMarkerObjectTagInfoEXT{
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
	{	}
};

/*	VkDebugMarkerMarkerInfoEXT
*/
template<> struct my_class_convert<S_debug_marker_marker_info_EXT> { using type = VkDebugMarkerMarkerInfoEXT;};
template<> struct my_class_convert<VkDebugMarkerMarkerInfoEXT> { using type = S_debug_marker_marker_info_EXT;};
struct		S_debug_marker_marker_info_EXT:VkDebugMarkerMarkerInfoEXT{
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
	,color_}
	{	}
};

/*	VkExternalImageFormatPropertiesNV
(returnedonly)
*/
template<> struct my_class_convert<S_external_image_format_properties_NV> { using type = VkExternalImageFormatPropertiesNV;};
template<> struct my_class_convert<VkExternalImageFormatPropertiesNV> { using type = S_external_image_format_properties_NV;};
struct		S_external_image_format_properties_NV:VkExternalImageFormatPropertiesNV{
	using VkExternalImageFormatPropertiesNV::imageFormatProperties;
	using VkExternalImageFormatPropertiesNV::externalMemoryFeatures;
	using VkExternalImageFormatPropertiesNV::exportFromImportedHandleTypes;
	using VkExternalImageFormatPropertiesNV::compatibleHandleTypes;
};

/*	VkDeviceGeneratedCommandsFeaturesNVX
*/
template<> struct my_class_convert<S_device_generated_commands_features_NVX> { using type = VkDeviceGeneratedCommandsFeaturesNVX;};
template<> struct my_class_convert<VkDeviceGeneratedCommandsFeaturesNVX> { using type = S_device_generated_commands_features_NVX;};
struct		S_device_generated_commands_features_NVX:VkDeviceGeneratedCommandsFeaturesNVX{
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
	{	}
};

/*	VkDeviceGeneratedCommandsLimitsNVX
*/
template<> struct my_class_convert<S_device_generated_commands_limits_NVX> { using type = VkDeviceGeneratedCommandsLimitsNVX;};
template<> struct my_class_convert<VkDeviceGeneratedCommandsLimitsNVX> { using type = S_device_generated_commands_limits_NVX;};
struct		S_device_generated_commands_limits_NVX:VkDeviceGeneratedCommandsLimitsNVX{
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
	{	}
};

/*	VkIndirectCommandsTokenNVX
*/
template<> struct my_class_convert<S_indirect_commands_token_NVX> { using type = VkIndirectCommandsTokenNVX;};
template<> struct my_class_convert<VkIndirectCommandsTokenNVX> { using type = S_indirect_commands_token_NVX;};
struct		S_indirect_commands_token_NVX:VkIndirectCommandsTokenNVX{
	using VkIndirectCommandsTokenNVX::tokenType;
	using VkIndirectCommandsTokenNVX::buffer;
	using VkIndirectCommandsTokenNVX::offset;
};

/*	VkIndirectCommandsLayoutTokenNVX
*/
template<> struct my_class_convert<S_indirect_commands_layout_token_NVX> { using type = VkIndirectCommandsLayoutTokenNVX;};
template<> struct my_class_convert<VkIndirectCommandsLayoutTokenNVX> { using type = S_indirect_commands_layout_token_NVX;};
struct		S_indirect_commands_layout_token_NVX:VkIndirectCommandsLayoutTokenNVX{
	using VkIndirectCommandsLayoutTokenNVX::tokenType;
	using VkIndirectCommandsLayoutTokenNVX::bindingUnit;
	using VkIndirectCommandsLayoutTokenNVX::dynamicCount;
	using VkIndirectCommandsLayoutTokenNVX::divisor;
};

/*	VkIndirectCommandsLayoutCreateInfoNVX
*/
template<> struct my_class_convert<S_indirect_commands_layout_create_info_NVX> { using type = VkIndirectCommandsLayoutCreateInfoNVX;};
template<> struct my_class_convert<VkIndirectCommandsLayoutCreateInfoNVX> { using type = S_indirect_commands_layout_create_info_NVX;};
struct		S_indirect_commands_layout_create_info_NVX:VkIndirectCommandsLayoutCreateInfoNVX{
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
	{	}
};

/*	VkCmdProcessCommandsInfoNVX
*/
template<> struct my_class_convert<S_cmd_process_commands_info_NVX> { using type = VkCmdProcessCommandsInfoNVX;};
template<> struct my_class_convert<VkCmdProcessCommandsInfoNVX> { using type = S_cmd_process_commands_info_NVX;};
struct		S_cmd_process_commands_info_NVX:VkCmdProcessCommandsInfoNVX{
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
	{	}
};

/*	VkCmdReserveSpaceForCommandsInfoNVX
*/
template<> struct my_class_convert<S_cmd_reserve_space_for_commands_info_NVX> { using type = VkCmdReserveSpaceForCommandsInfoNVX;};
template<> struct my_class_convert<VkCmdReserveSpaceForCommandsInfoNVX> { using type = S_cmd_reserve_space_for_commands_info_NVX;};
struct		S_cmd_reserve_space_for_commands_info_NVX:VkCmdReserveSpaceForCommandsInfoNVX{
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
	{	}
};

/*	VkObjectTableCreateInfoNVX
*/
template<> struct my_class_convert<S_object_table_create_info_NVX> { using type = VkObjectTableCreateInfoNVX;};
template<> struct my_class_convert<VkObjectTableCreateInfoNVX> { using type = S_object_table_create_info_NVX;};
struct		S_object_table_create_info_NVX:VkObjectTableCreateInfoNVX{
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
	,pObjectEntryUsageFlags_
	,maxUniformBuffersPerDescriptor_
	,maxStorageBuffersPerDescriptor_
	,maxStorageImagesPerDescriptor_
	,maxSampledImagesPerDescriptor_
	,maxPipelineLayouts_}
	{	}
};

/*	VkObjectTableEntryNVX
*/
template<> struct my_class_convert<S_object_table_entry_NVX> { using type = VkObjectTableEntryNVX;};
template<> struct my_class_convert<VkObjectTableEntryNVX> { using type = S_object_table_entry_NVX;};
struct		S_object_table_entry_NVX:VkObjectTableEntryNVX{
	using VkObjectTableEntryNVX::type;
	using VkObjectTableEntryNVX::flags;
};

/*	VkObjectTablePipelineEntryNVX
*/
template<> struct my_class_convert<S_object_table_pipeline_entry_NVX> { using type = VkObjectTablePipelineEntryNVX;};
template<> struct my_class_convert<VkObjectTablePipelineEntryNVX> { using type = S_object_table_pipeline_entry_NVX;};
struct		S_object_table_pipeline_entry_NVX:VkObjectTablePipelineEntryNVX{
	using VkObjectTablePipelineEntryNVX::type;
	using VkObjectTablePipelineEntryNVX::flags;
	using VkObjectTablePipelineEntryNVX::pipeline;
};

/*	VkObjectTableDescriptorSetEntryNVX
*/
template<> struct my_class_convert<S_object_table_descriptor_set_entry_NVX> { using type = VkObjectTableDescriptorSetEntryNVX;};
template<> struct my_class_convert<VkObjectTableDescriptorSetEntryNVX> { using type = S_object_table_descriptor_set_entry_NVX;};
struct		S_object_table_descriptor_set_entry_NVX:VkObjectTableDescriptorSetEntryNVX{
	using VkObjectTableDescriptorSetEntryNVX::type;
	using VkObjectTableDescriptorSetEntryNVX::flags;
	using VkObjectTableDescriptorSetEntryNVX::pipelineLayout;
	using VkObjectTableDescriptorSetEntryNVX::descriptorSet;
};

/*	VkObjectTableVertexBufferEntryNVX
*/
template<> struct my_class_convert<S_object_table_vertex_buffer_entry_NVX> { using type = VkObjectTableVertexBufferEntryNVX;};
template<> struct my_class_convert<VkObjectTableVertexBufferEntryNVX> { using type = S_object_table_vertex_buffer_entry_NVX;};
struct		S_object_table_vertex_buffer_entry_NVX:VkObjectTableVertexBufferEntryNVX{
	using VkObjectTableVertexBufferEntryNVX::type;
	using VkObjectTableVertexBufferEntryNVX::flags;
	using VkObjectTableVertexBufferEntryNVX::buffer;
};

/*	VkObjectTableIndexBufferEntryNVX
*/
template<> struct my_class_convert<S_object_table_index_buffer_entry_NVX> { using type = VkObjectTableIndexBufferEntryNVX;};
template<> struct my_class_convert<VkObjectTableIndexBufferEntryNVX> { using type = S_object_table_index_buffer_entry_NVX;};
struct		S_object_table_index_buffer_entry_NVX:VkObjectTableIndexBufferEntryNVX{
	using VkObjectTableIndexBufferEntryNVX::type;
	using VkObjectTableIndexBufferEntryNVX::flags;
	using VkObjectTableIndexBufferEntryNVX::buffer;
	using VkObjectTableIndexBufferEntryNVX::indexType;
};

/*	VkObjectTablePushConstantEntryNVX
*/
template<> struct my_class_convert<S_object_table_push_constant_entry_NVX> { using type = VkObjectTablePushConstantEntryNVX;};
template<> struct my_class_convert<VkObjectTablePushConstantEntryNVX> { using type = S_object_table_push_constant_entry_NVX;};
struct		S_object_table_push_constant_entry_NVX:VkObjectTablePushConstantEntryNVX{
	using VkObjectTablePushConstantEntryNVX::type;
	using VkObjectTablePushConstantEntryNVX::flags;
	using VkObjectTablePushConstantEntryNVX::pipelineLayout;
	using VkObjectTablePushConstantEntryNVX::stageFlags;
};

/*	VkPhysicalDevicePushDescriptorPropertiesKHR
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_push_descriptor_properties_KHR> { using type = VkPhysicalDevicePushDescriptorPropertiesKHR;};
template<> struct my_class_convert<VkPhysicalDevicePushDescriptorPropertiesKHR> { using type = S_physical_device_push_descriptor_properties_KHR;};
struct		S_physical_device_push_descriptor_properties_KHR:VkPhysicalDevicePushDescriptorPropertiesKHR{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkConformanceVersionKHR
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_conformance_version_KHR> { using type = VkConformanceVersionKHR;};
template<> struct my_class_convert<VkConformanceVersionKHR> { using type = S_conformance_version_KHR;};
struct		S_conformance_version_KHR:VkConformanceVersionKHR{
	using VkConformanceVersionKHR::major;
	using VkConformanceVersionKHR::minor;
	using VkConformanceVersionKHR::subminor;
	using VkConformanceVersionKHR::patch;
};
#endif //LAKA_UNKNOW

/*	VkPhysicalDeviceDriverPropertiesKHR
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_physical_device_driver_properties_KHR> { using type = VkPhysicalDeviceDriverPropertiesKHR;};
template<> struct my_class_convert<VkPhysicalDeviceDriverPropertiesKHR> { using type = S_physical_device_driver_properties_KHR;};
struct		S_physical_device_driver_properties_KHR:VkPhysicalDeviceDriverPropertiesKHR{
private:
	using VkPhysicalDeviceDriverPropertiesKHR::sType;
	using VkPhysicalDeviceDriverPropertiesKHR::pNext;
public:
	using VkPhysicalDeviceDriverPropertiesKHR::driverID;
	using VkPhysicalDeviceDriverPropertiesKHR::driverName;
	using VkPhysicalDeviceDriverPropertiesKHR::driverInfo;
	using VkPhysicalDeviceDriverPropertiesKHR::conformanceVersion;

S_physical_device_driver_properties_KHR():VkPhysicalDeviceDriverPropertiesKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR,nullptr}{}
S_physical_device_driver_properties_KHR(
	uint32_t driverID_,
	char driverName_[VK_MAX_DRIVER_NAME_SIZE_KHR],
	char driverInfo_[VK_MAX_DRIVER_INFO_SIZE_KHR],
	S_conformance_version_KHR conformanceVersion_)
	:VkPhysicalDeviceDriverPropertiesKHR{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR
	,nullptr
	,driverID_
	,driverName_
	,driverInfo_
	,conformanceVersion_}
	{	}

friend S_physical_device_properties2;
};
#endif //LAKA_UNKNOW

/*	VkPhysicalDeviceIDProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_id_properties> { using type = VkPhysicalDeviceIDProperties;};
template<> struct my_class_convert<VkPhysicalDeviceIDProperties> { using type = S_physical_device_id_properties;};
struct		S_physical_device_id_properties:VkPhysicalDeviceIDProperties{
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
	,deviceUUID_
	,driverUUID_
	,deviceLUID_
	,deviceNodeMask_
	,deviceLUIDValid_}
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceMultiviewProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_multiview_properties> { using type = VkPhysicalDeviceMultiviewProperties;};
template<> struct my_class_convert<VkPhysicalDeviceMultiviewProperties> { using type = S_physical_device_multiview_properties;};
struct		S_physical_device_multiview_properties:VkPhysicalDeviceMultiviewProperties{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceDiscardRectanglePropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_discard_rectangle_properties_EXT> { using type = VkPhysicalDeviceDiscardRectanglePropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceDiscardRectanglePropertiesEXT> { using type = S_physical_device_discard_rectangle_properties_EXT;};
struct		S_physical_device_discard_rectangle_properties_EXT:VkPhysicalDeviceDiscardRectanglePropertiesEXT{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_multiview_per_view_attributes_properties_NVX> { using type = VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;};
template<> struct my_class_convert<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX> { using type = S_physical_device_multiview_per_view_attributes_properties_NVX;};
struct		S_physical_device_multiview_per_view_attributes_properties_NVX:VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceSubgroupProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_subgroup_properties> { using type = VkPhysicalDeviceSubgroupProperties;};
template<> struct my_class_convert<VkPhysicalDeviceSubgroupProperties> { using type = S_physical_device_subgroup_properties;};
struct		S_physical_device_subgroup_properties:VkPhysicalDeviceSubgroupProperties{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDevicePointClippingProperties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_point_clipping_properties> { using type = VkPhysicalDevicePointClippingProperties;};
template<> struct my_class_convert<VkPhysicalDevicePointClippingProperties> { using type = S_physical_device_point_clipping_properties;};
struct		S_physical_device_point_clipping_properties:VkPhysicalDevicePointClippingProperties{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceProtectedMemoryProperties
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_protected_memory_properties> { using type = VkPhysicalDeviceProtectedMemoryProperties;};
template<> struct my_class_convert<VkPhysicalDeviceProtectedMemoryProperties> { using type = S_physical_device_protected_memory_properties;};
struct		S_physical_device_protected_memory_properties:VkPhysicalDeviceProtectedMemoryProperties{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_sampler_filter_minmax_properties_EXT> { using type = VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT> { using type = S_physical_device_sampler_filter_minmax_properties_EXT;};
struct		S_physical_device_sampler_filter_minmax_properties_EXT:VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceSampleLocationsPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_sample_locations_properties_EXT> { using type = VkPhysicalDeviceSampleLocationsPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceSampleLocationsPropertiesEXT> { using type = S_physical_device_sample_locations_properties_EXT;};
struct		S_physical_device_sample_locations_properties_EXT:VkPhysicalDeviceSampleLocationsPropertiesEXT{
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
	,sampleLocationCoordinateRange_
	,sampleLocationSubPixelBits_
	,variableSampleLocations_}
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_blend_operation_advanced_properties_EXT> { using type = VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT> { using type = S_physical_device_blend_operation_advanced_properties_EXT;};
struct		S_physical_device_blend_operation_advanced_properties_EXT:VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceInlineUniformBlockPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_inline_uniform_block_properties_EXT> { using type = VkPhysicalDeviceInlineUniformBlockPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceInlineUniformBlockPropertiesEXT> { using type = S_physical_device_inline_uniform_block_properties_EXT;};
struct		S_physical_device_inline_uniform_block_properties_EXT:VkPhysicalDeviceInlineUniformBlockPropertiesEXT{
private:
	using VkPhysicalDeviceInlineUniformBlockPropertiesEXT::sType;
	using VkPhysicalDeviceInlineUniformBlockPropertiesEXT::pNext;
public:
	using VkPhysicalDeviceInlineUniformBlockPropertiesEXT::maxInlineUniformBlockSize;
	using VkPhysicalDeviceInlineUniformBlockPropertiesEXT::maxPerStageDescriptorInlineUniformBlocks;
	using VkPhysicalDeviceInlineUniformBlockPropertiesEXT::maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
	using VkPhysicalDeviceInlineUniformBlockPropertiesEXT::maxDescriptorSetInlineUniformBlocks;
	using VkPhysicalDeviceInlineUniformBlockPropertiesEXT::maxDescriptorSetUpdateAfterBindInlineUniformBlocks;

S_physical_device_inline_uniform_block_properties_EXT():VkPhysicalDeviceInlineUniformBlockPropertiesEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT,nullptr}{}
S_physical_device_inline_uniform_block_properties_EXT(
	uint32_t maxInlineUniformBlockSize_,
	uint32_t maxPerStageDescriptorInlineUniformBlocks_,
	uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_,
	uint32_t maxDescriptorSetInlineUniformBlocks_,
	uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks_)
	:VkPhysicalDeviceInlineUniformBlockPropertiesEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT
	,nullptr
	,maxInlineUniformBlockSize_
	,maxPerStageDescriptorInlineUniformBlocks_
	,maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_
	,maxDescriptorSetInlineUniformBlocks_
	,maxDescriptorSetUpdateAfterBindInlineUniformBlocks_}
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceMaintenance3Properties
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_maintenance3_properties> { using type = VkPhysicalDeviceMaintenance3Properties;};
template<> struct my_class_convert<VkPhysicalDeviceMaintenance3Properties> { using type = S_physical_device_maintenance3_properties;};
struct		S_physical_device_maintenance3_properties:VkPhysicalDeviceMaintenance3Properties{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceExternalMemoryHostPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_external_memory_host_properties_EXT> { using type = VkPhysicalDeviceExternalMemoryHostPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceExternalMemoryHostPropertiesEXT> { using type = S_physical_device_external_memory_host_properties_EXT;};
struct		S_physical_device_external_memory_host_properties_EXT:VkPhysicalDeviceExternalMemoryHostPropertiesEXT{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceConservativeRasterizationPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_conservative_rasterization_properties_EXT> { using type = VkPhysicalDeviceConservativeRasterizationPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceConservativeRasterizationPropertiesEXT> { using type = S_physical_device_conservative_rasterization_properties_EXT;};
struct		S_physical_device_conservative_rasterization_properties_EXT:VkPhysicalDeviceConservativeRasterizationPropertiesEXT{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceShaderCorePropertiesAMD
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_shader_core_properties_AMD> { using type = VkPhysicalDeviceShaderCorePropertiesAMD;};
template<> struct my_class_convert<VkPhysicalDeviceShaderCorePropertiesAMD> { using type = S_physical_device_shader_core_properties_AMD;};
struct		S_physical_device_shader_core_properties_AMD:VkPhysicalDeviceShaderCorePropertiesAMD{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceDescriptorIndexingPropertiesEXT
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_descriptor_indexing_properties_EXT> { using type = VkPhysicalDeviceDescriptorIndexingPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceDescriptorIndexingPropertiesEXT> { using type = S_physical_device_descriptor_indexing_properties_EXT;};
struct		S_physical_device_descriptor_indexing_properties_EXT:VkPhysicalDeviceDescriptorIndexingPropertiesEXT{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_vertex_attribute_divisor_properties_EXT> { using type = VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;};
template<> struct my_class_convert<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT> { using type = S_physical_device_vertex_attribute_divisor_properties_EXT;};
struct		S_physical_device_vertex_attribute_divisor_properties_EXT:VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT{
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
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceShadingRateImagePropertiesNV
(returnedonly)
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_shading_rate_image_properties_NV> { using type = VkPhysicalDeviceShadingRateImagePropertiesNV;};
template<> struct my_class_convert<VkPhysicalDeviceShadingRateImagePropertiesNV> { using type = S_physical_device_shading_rate_image_properties_NV;};
struct		S_physical_device_shading_rate_image_properties_NV:VkPhysicalDeviceShadingRateImagePropertiesNV{
private:
	using VkPhysicalDeviceShadingRateImagePropertiesNV::sType;
	using VkPhysicalDeviceShadingRateImagePropertiesNV::pNext;
public:
	using VkPhysicalDeviceShadingRateImagePropertiesNV::shadingRateTexelSize;
	using VkPhysicalDeviceShadingRateImagePropertiesNV::shadingRatePaletteSize;
	using VkPhysicalDeviceShadingRateImagePropertiesNV::shadingRateMaxCoarseSamples;

S_physical_device_shading_rate_image_properties_NV():VkPhysicalDeviceShadingRateImagePropertiesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV,nullptr}{}
S_physical_device_shading_rate_image_properties_NV(
	S_extent_2d shadingRateTexelSize_,
	uint32_t shadingRatePaletteSize_,
	uint32_t shadingRateMaxCoarseSamples_)
	:VkPhysicalDeviceShadingRateImagePropertiesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV
	,nullptr
	,shadingRateTexelSize_
	,shadingRatePaletteSize_
	,shadingRateMaxCoarseSamples_}
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceMeshShaderPropertiesNV
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_mesh_shader_properties_NV> { using type = VkPhysicalDeviceMeshShaderPropertiesNV;};
template<> struct my_class_convert<VkPhysicalDeviceMeshShaderPropertiesNV> { using type = S_physical_device_mesh_shader_properties_NV;};
struct		S_physical_device_mesh_shader_properties_NV:VkPhysicalDeviceMeshShaderPropertiesNV{
private:
	using VkPhysicalDeviceMeshShaderPropertiesNV::sType;
	using VkPhysicalDeviceMeshShaderPropertiesNV::pNext;
public:
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxDrawMeshTasksCount;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxTaskWorkGroupInvocations;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxTaskWorkGroupSize;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxTaskTotalMemorySize;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxTaskOutputCount;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxMeshWorkGroupInvocations;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxMeshWorkGroupSize;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxMeshTotalMemorySize;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxMeshOutputVertices;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxMeshOutputPrimitives;
	using VkPhysicalDeviceMeshShaderPropertiesNV::maxMeshMultiviewViewCount;
	using VkPhysicalDeviceMeshShaderPropertiesNV::meshOutputPerVertexGranularity;
	using VkPhysicalDeviceMeshShaderPropertiesNV::meshOutputPerPrimitiveGranularity;

S_physical_device_mesh_shader_properties_NV():VkPhysicalDeviceMeshShaderPropertiesNV{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV,nullptr}{}
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
	:VkPhysicalDeviceMeshShaderPropertiesNV{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV
	,nullptr
	,maxDrawMeshTasksCount_
	,maxTaskWorkGroupInvocations_
	,maxTaskWorkGroupSize_
	,maxTaskTotalMemorySize_
	,maxTaskOutputCount_
	,maxMeshWorkGroupInvocations_
	,maxMeshWorkGroupSize_
	,maxMeshTotalMemorySize_
	,maxMeshOutputVertices_
	,maxMeshOutputPrimitives_
	,maxMeshMultiviewViewCount_
	,meshOutputPerVertexGranularity_
	,meshOutputPerPrimitiveGranularity_}
	{	}

friend S_physical_device_properties2;
};

/*	VkPhysicalDeviceRaytracingPropertiesNVX
ex to: VkPhysicalDeviceProperties2
*/
template<> struct my_class_convert<S_physical_device_raytracing_properties_NVX> { using type = VkPhysicalDeviceRaytracingPropertiesNVX;};
template<> struct my_class_convert<VkPhysicalDeviceRaytracingPropertiesNVX> { using type = S_physical_device_raytracing_properties_NVX;};
struct		S_physical_device_raytracing_properties_NVX:VkPhysicalDeviceRaytracingPropertiesNVX{
private:
	using VkPhysicalDeviceRaytracingPropertiesNVX::sType;
	using VkPhysicalDeviceRaytracingPropertiesNVX::pNext;
public:
	using VkPhysicalDeviceRaytracingPropertiesNVX::shaderHeaderSize;
	using VkPhysicalDeviceRaytracingPropertiesNVX::maxRecursionDepth;
	using VkPhysicalDeviceRaytracingPropertiesNVX::maxGeometryCount;

S_physical_device_raytracing_properties_NVX():VkPhysicalDeviceRaytracingPropertiesNVX{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAYTRACING_PROPERTIES_NVX,nullptr}{}
S_physical_device_raytracing_properties_NVX(
	uint32_t shaderHeaderSize_,
	uint32_t maxRecursionDepth_,
	uint32_t maxGeometryCount_)
	:VkPhysicalDeviceRaytracingPropertiesNVX{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAYTRACING_PROPERTIES_NVX
	,nullptr
	,shaderHeaderSize_
	,maxRecursionDepth_
	,maxGeometryCount_}
	{	}

friend S_physical_device_properties2;
};

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

struct N_physical_device_properties2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
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
template<> struct my_class_convert<S_physical_device_properties2> { using type = VkPhysicalDeviceProperties2;};
template<> struct my_class_convert<VkPhysicalDeviceProperties2> { using type = S_physical_device_properties2;};
struct		S_physical_device_properties2:VkPhysicalDeviceProperties2{
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
	{	}

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
void set_pNext(N_physical_device_properties2 n_){pNext = n_;}
};

/*	VkDrmFormatModifierPropertiesEXT
(returnedonly)
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_drm_format_modifier_properties_EXT> { using type = VkDrmFormatModifierPropertiesEXT;};
template<> struct my_class_convert<VkDrmFormatModifierPropertiesEXT> { using type = S_drm_format_modifier_properties_EXT;};
struct		S_drm_format_modifier_properties_EXT:VkDrmFormatModifierPropertiesEXT{
	using VkDrmFormatModifierPropertiesEXT::drmFormatModifier;
	using VkDrmFormatModifierPropertiesEXT::drmFormatModifierPlaneCount;
	using VkDrmFormatModifierPropertiesEXT::drmFormatModifierTilingFeatures;
};
#endif //LAKA_UNKNOW

/*	VkDrmFormatModifierPropertiesListEXT
ex to: VkFormatProperties2
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_drm_format_modifier_properties_list_EXT> { using type = VkDrmFormatModifierPropertiesListEXT;};
template<> struct my_class_convert<VkDrmFormatModifierPropertiesListEXT> { using type = S_drm_format_modifier_properties_list_EXT;};
struct		S_drm_format_modifier_properties_list_EXT:VkDrmFormatModifierPropertiesListEXT{
private:
	using VkDrmFormatModifierPropertiesListEXT::sType;
	using VkDrmFormatModifierPropertiesListEXT::pNext;
public:
	using VkDrmFormatModifierPropertiesListEXT::drmFormatModifierCount;
	using VkDrmFormatModifierPropertiesListEXT::pDrmFormatModifierProperties;

S_drm_format_modifier_properties_list_EXT():VkDrmFormatModifierPropertiesListEXT{VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT,nullptr}{}
S_drm_format_modifier_properties_list_EXT(
	uint32_t drmFormatModifierCount_,
	S_drm_format_modifier_properties_EXT * pDrmFormatModifierProperties_)
	:VkDrmFormatModifierPropertiesListEXT{
	VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT
	,nullptr
	,drmFormatModifierCount_
	,pDrmFormatModifierProperties_}
	{	}

friend S_format_properties2;
};
#endif //LAKA_UNKNOW

/*	VkFormatProperties2
(returnedonly)
ex:
	VkDrmFormatModifierPropertiesListEXT
*/

struct N_format_properties2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
#ifdef LAKA_UNKNOW
N_format_properties2& n_drm_format_modifier_properties_list_EXT(S_drm_format_modifier_properties_list_EXT const& next_);
#endif
};
template<> struct my_class_convert<S_format_properties2> { using type = VkFormatProperties2;};
template<> struct my_class_convert<VkFormatProperties2> { using type = S_format_properties2;};
struct		S_format_properties2:VkFormatProperties2{
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
	{	}

#ifdef LAKA_UNKNOW
S_format_properties2& n_drm_format_modifier_properties_list_EXT(S_drm_format_modifier_properties_list_EXT const& next_);
#endif
void set_pNext(N_format_properties2 n_){pNext = n_;}
};

/*	VkExternalMemoryProperties
(returnedonly)
*/
template<> struct my_class_convert<S_external_memory_properties> { using type = VkExternalMemoryProperties;};
template<> struct my_class_convert<VkExternalMemoryProperties> { using type = S_external_memory_properties;};
struct		S_external_memory_properties:VkExternalMemoryProperties{
	using VkExternalMemoryProperties::externalMemoryFeatures;
	using VkExternalMemoryProperties::exportFromImportedHandleTypes;
	using VkExternalMemoryProperties::compatibleHandleTypes;
};

/*	VkExternalImageFormatProperties
(returnedonly)
ex to: VkImageFormatProperties2
*/
template<> struct my_class_convert<S_external_image_format_properties> { using type = VkExternalImageFormatProperties;};
template<> struct my_class_convert<VkExternalImageFormatProperties> { using type = S_external_image_format_properties;};
struct		S_external_image_format_properties:VkExternalImageFormatProperties{
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
	{	}

friend S_image_format_properties2;
};

/*	VkSamplerYcbcrConversionImageFormatProperties
(returnedonly)
ex to: VkImageFormatProperties2
*/
template<> struct my_class_convert<S_sampler_ycbcr_conversion_image_format_properties> { using type = VkSamplerYcbcrConversionImageFormatProperties;};
template<> struct my_class_convert<VkSamplerYcbcrConversionImageFormatProperties> { using type = S_sampler_ycbcr_conversion_image_format_properties;};
struct		S_sampler_ycbcr_conversion_image_format_properties:VkSamplerYcbcrConversionImageFormatProperties{
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
	{	}

friend S_image_format_properties2;
};

/*	VkTextureLODGatherFormatPropertiesAMD
(returnedonly)
ex to: VkImageFormatProperties2
*/
template<> struct my_class_convert<S_texture_lod_gather_format_properties_AMD> { using type = VkTextureLODGatherFormatPropertiesAMD;};
template<> struct my_class_convert<VkTextureLODGatherFormatPropertiesAMD> { using type = S_texture_lod_gather_format_properties_AMD;};
struct		S_texture_lod_gather_format_properties_AMD:VkTextureLODGatherFormatPropertiesAMD{
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
	{	}

friend S_image_format_properties2;
};

/*	VkAndroidHardwareBufferUsageANDROID
(returnedonly)
ex to: VkImageFormatProperties2
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template<> struct my_class_convert<S_android_hardware_buffer_usage_ANDROID> { using type = VkAndroidHardwareBufferUsageANDROID;};
template<> struct my_class_convert<VkAndroidHardwareBufferUsageANDROID> { using type = S_android_hardware_buffer_usage_ANDROID;};
struct		S_android_hardware_buffer_usage_ANDROID:VkAndroidHardwareBufferUsageANDROID{
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
	{	}

friend S_image_format_properties2;
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
template<> struct my_class_convert<S_image_format_properties2> { using type = VkImageFormatProperties2;};
template<> struct my_class_convert<VkImageFormatProperties2> { using type = S_image_format_properties2;};
struct		S_image_format_properties2:VkImageFormatProperties2{
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
	{	}

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
template<> struct my_class_convert<S_physical_device_external_image_format_info> { using type = VkPhysicalDeviceExternalImageFormatInfo;};
template<> struct my_class_convert<VkPhysicalDeviceExternalImageFormatInfo> { using type = S_physical_device_external_image_format_info;};
struct		S_physical_device_external_image_format_info:VkPhysicalDeviceExternalImageFormatInfo{
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
	{	}

friend S_physical_device_image_format_info2;
};

/*	VkPhysicalDeviceImageDrmFormatModifierInfoEXT
ex to: VkPhysicalDeviceImageFormatInfo2
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_physical_device_image_drm_format_modifier_info_EXT> { using type = VkPhysicalDeviceImageDrmFormatModifierInfoEXT;};
template<> struct my_class_convert<VkPhysicalDeviceImageDrmFormatModifierInfoEXT> { using type = S_physical_device_image_drm_format_modifier_info_EXT;};
struct		S_physical_device_image_drm_format_modifier_info_EXT:VkPhysicalDeviceImageDrmFormatModifierInfoEXT{
private:
	using VkPhysicalDeviceImageDrmFormatModifierInfoEXT::sType;
	using VkPhysicalDeviceImageDrmFormatModifierInfoEXT::pNext;
public:
	using VkPhysicalDeviceImageDrmFormatModifierInfoEXT::drmFormatModifier;

S_physical_device_image_drm_format_modifier_info_EXT():VkPhysicalDeviceImageDrmFormatModifierInfoEXT{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT,nullptr}{}
S_physical_device_image_drm_format_modifier_info_EXT(
	uint64_t drmFormatModifier_)
	:VkPhysicalDeviceImageDrmFormatModifierInfoEXT{
	VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT
	,nullptr
	,drmFormatModifier_}
	{	}

friend S_physical_device_image_format_info2;
};
#endif //LAKA_UNKNOW

/*	VkPhysicalDeviceImageFormatInfo2
ex:
	VkPhysicalDeviceExternalImageFormatInfo
	VkPhysicalDeviceImageDrmFormatModifierInfoEXT
*/

struct N_physical_device_image_format_info2{
private:
	void* pNext = nullptr;
public:
operator void*() { return pNext; }
N_physical_device_image_format_info2& n_physical_device_external_image_format_info(S_physical_device_external_image_format_info const& next_);
#ifdef LAKA_UNKNOW
N_physical_device_image_format_info2& n_physical_device_image_drm_format_modifier_info_EXT(S_physical_device_image_drm_format_modifier_info_EXT const& next_);
#endif
};
template<> struct my_class_convert<S_physical_device_image_format_info2> { using type = VkPhysicalDeviceImageFormatInfo2;};
template<> struct my_class_convert<VkPhysicalDeviceImageFormatInfo2> { using type = S_physical_device_image_format_info2;};
struct		S_physical_device_image_format_info2:VkPhysicalDeviceImageFormatInfo2{
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
	{	}

S_physical_device_image_format_info2& n_physical_device_external_image_format_info(S_physical_device_external_image_format_info const& next_);
#ifdef LAKA_UNKNOW
S_physical_device_image_format_info2& n_physical_device_image_drm_format_modifier_info_EXT(S_physical_device_image_drm_format_modifier_info_EXT const& next_);
#endif
void set_pNext(N_physical_device_image_format_info2 n_){pNext = n_;}
};

/*	VkQueueFamilyCheckpointPropertiesNV
(returnedonly)
ex to: VkQueueFamilyProperties2
*/
template<> struct my_class_convert<S_queue_family_checkpoint_properties_NV> { using type = VkQueueFamilyCheckpointPropertiesNV;};
template<> struct my_class_convert<VkQueueFamilyCheckpointPropertiesNV> { using type = S_queue_family_checkpoint_properties_NV;};
struct		S_queue_family_checkpoint_properties_NV:VkQueueFamilyCheckpointPropertiesNV{
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
	{	}

friend S_queue_family_properties2;
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
template<> struct my_class_convert<S_queue_family_properties2> { using type = VkQueueFamilyProperties2;};
template<> struct my_class_convert<VkQueueFamilyProperties2> { using type = S_queue_family_properties2;};
struct		S_queue_family_properties2:VkQueueFamilyProperties2{
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
	{	}

S_queue_family_properties2& n_queue_family_checkpoint_properties_NV(S_queue_family_checkpoint_properties_NV const& next_);
void set_pNext(N_queue_family_properties2 n_){pNext = n_;}
};

/*	VkPhysicalDeviceMemoryProperties2
(returnedonly)
*/
template<> struct my_class_convert<S_physical_device_memory_properties2> { using type = VkPhysicalDeviceMemoryProperties2;};
template<> struct my_class_convert<VkPhysicalDeviceMemoryProperties2> { using type = S_physical_device_memory_properties2;};
struct		S_physical_device_memory_properties2:VkPhysicalDeviceMemoryProperties2{
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
	{	}
};

/*	VkSparseImageFormatProperties2
(returnedonly)
*/
template<> struct my_class_convert<S_sparse_image_format_properties2> { using type = VkSparseImageFormatProperties2;};
template<> struct my_class_convert<VkSparseImageFormatProperties2> { using type = S_sparse_image_format_properties2;};
struct		S_sparse_image_format_properties2:VkSparseImageFormatProperties2{
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
	{	}
};

/*	VkPhysicalDeviceSparseImageFormatInfo2
*/
template<> struct my_class_convert<S_physical_device_sparse_image_format_info2> { using type = VkPhysicalDeviceSparseImageFormatInfo2;};
template<> struct my_class_convert<VkPhysicalDeviceSparseImageFormatInfo2> { using type = S_physical_device_sparse_image_format_info2;};
struct		S_physical_device_sparse_image_format_info2:VkPhysicalDeviceSparseImageFormatInfo2{
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
	{	}
};

/*	VkPhysicalDeviceExternalBufferInfo
*/
template<> struct my_class_convert<S_physical_device_external_buffer_info> { using type = VkPhysicalDeviceExternalBufferInfo;};
template<> struct my_class_convert<VkPhysicalDeviceExternalBufferInfo> { using type = S_physical_device_external_buffer_info;};
struct		S_physical_device_external_buffer_info:VkPhysicalDeviceExternalBufferInfo{
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
	{	}
};

/*	VkExternalBufferProperties
(returnedonly)
*/
template<> struct my_class_convert<S_external_buffer_properties> { using type = VkExternalBufferProperties;};
template<> struct my_class_convert<VkExternalBufferProperties> { using type = S_external_buffer_properties;};
struct		S_external_buffer_properties:VkExternalBufferProperties{
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
	{	}
};

/*	VkMemoryWin32HandlePropertiesKHR
(returnedonly)
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_memory_win32_handle_properties_KHR> { using type = VkMemoryWin32HandlePropertiesKHR;};
template<> struct my_class_convert<VkMemoryWin32HandlePropertiesKHR> { using type = S_memory_win32_handle_properties_KHR;};
struct		S_memory_win32_handle_properties_KHR:VkMemoryWin32HandlePropertiesKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkMemoryGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_memory_get_win32_handle_info_KHR> { using type = VkMemoryGetWin32HandleInfoKHR;};
template<> struct my_class_convert<VkMemoryGetWin32HandleInfoKHR> { using type = S_memory_get_win32_handle_info_KHR;};
struct		S_memory_get_win32_handle_info_KHR:VkMemoryGetWin32HandleInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkMemoryFdPropertiesKHR
(returnedonly)
*/
template<> struct my_class_convert<S_memory_fd_properties_KHR> { using type = VkMemoryFdPropertiesKHR;};
template<> struct my_class_convert<VkMemoryFdPropertiesKHR> { using type = S_memory_fd_properties_KHR;};
struct		S_memory_fd_properties_KHR:VkMemoryFdPropertiesKHR{
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
	{	}
};

/*	VkMemoryGetFdInfoKHR
*/
template<> struct my_class_convert<S_memory_get_fd_info_KHR> { using type = VkMemoryGetFdInfoKHR;};
template<> struct my_class_convert<VkMemoryGetFdInfoKHR> { using type = S_memory_get_fd_info_KHR;};
struct		S_memory_get_fd_info_KHR:VkMemoryGetFdInfoKHR{
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
	{	}
};

/*	VkPhysicalDeviceExternalSemaphoreInfo
*/
template<> struct my_class_convert<S_physical_device_external_semaphore_info> { using type = VkPhysicalDeviceExternalSemaphoreInfo;};
template<> struct my_class_convert<VkPhysicalDeviceExternalSemaphoreInfo> { using type = S_physical_device_external_semaphore_info;};
struct		S_physical_device_external_semaphore_info:VkPhysicalDeviceExternalSemaphoreInfo{
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
	{	}
};

/*	VkExternalSemaphoreProperties
(returnedonly)
*/
template<> struct my_class_convert<S_external_semaphore_properties> { using type = VkExternalSemaphoreProperties;};
template<> struct my_class_convert<VkExternalSemaphoreProperties> { using type = S_external_semaphore_properties;};
struct		S_external_semaphore_properties:VkExternalSemaphoreProperties{
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
	{	}
};

/*	VkImportSemaphoreWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_import_semaphore_win32_handle_info_KHR> { using type = VkImportSemaphoreWin32HandleInfoKHR;};
template<> struct my_class_convert<VkImportSemaphoreWin32HandleInfoKHR> { using type = S_import_semaphore_win32_handle_info_KHR;};
struct		S_import_semaphore_win32_handle_info_KHR:VkImportSemaphoreWin32HandleInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkSemaphoreGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_semaphore_get_win32_handle_info_KHR> { using type = VkSemaphoreGetWin32HandleInfoKHR;};
template<> struct my_class_convert<VkSemaphoreGetWin32HandleInfoKHR> { using type = S_semaphore_get_win32_handle_info_KHR;};
struct		S_semaphore_get_win32_handle_info_KHR:VkSemaphoreGetWin32HandleInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportSemaphoreFdInfoKHR
*/
template<> struct my_class_convert<S_import_semaphore_fd_info_KHR> { using type = VkImportSemaphoreFdInfoKHR;};
template<> struct my_class_convert<VkImportSemaphoreFdInfoKHR> { using type = S_import_semaphore_fd_info_KHR;};
struct		S_import_semaphore_fd_info_KHR:VkImportSemaphoreFdInfoKHR{
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
	{	}
};

/*	VkSemaphoreGetFdInfoKHR
*/
template<> struct my_class_convert<S_semaphore_get_fd_info_KHR> { using type = VkSemaphoreGetFdInfoKHR;};
template<> struct my_class_convert<VkSemaphoreGetFdInfoKHR> { using type = S_semaphore_get_fd_info_KHR;};
struct		S_semaphore_get_fd_info_KHR:VkSemaphoreGetFdInfoKHR{
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
	{	}
};

/*	VkPhysicalDeviceExternalFenceInfo
*/
template<> struct my_class_convert<S_physical_device_external_fence_info> { using type = VkPhysicalDeviceExternalFenceInfo;};
template<> struct my_class_convert<VkPhysicalDeviceExternalFenceInfo> { using type = S_physical_device_external_fence_info;};
struct		S_physical_device_external_fence_info:VkPhysicalDeviceExternalFenceInfo{
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
	{	}
};

/*	VkExternalFenceProperties
(returnedonly)
*/
template<> struct my_class_convert<S_external_fence_properties> { using type = VkExternalFenceProperties;};
template<> struct my_class_convert<VkExternalFenceProperties> { using type = S_external_fence_properties;};
struct		S_external_fence_properties:VkExternalFenceProperties{
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
	{	}
};

/*	VkImportFenceWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_import_fence_win32_handle_info_KHR> { using type = VkImportFenceWin32HandleInfoKHR;};
template<> struct my_class_convert<VkImportFenceWin32HandleInfoKHR> { using type = S_import_fence_win32_handle_info_KHR;};
struct		S_import_fence_win32_handle_info_KHR:VkImportFenceWin32HandleInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkFenceGetWin32HandleInfoKHR
*/
#ifdef VK_USE_PLATFORM_WIN32_KHR
template<> struct my_class_convert<S_fence_get_win32_handle_info_KHR> { using type = VkFenceGetWin32HandleInfoKHR;};
template<> struct my_class_convert<VkFenceGetWin32HandleInfoKHR> { using type = S_fence_get_win32_handle_info_KHR;};
struct		S_fence_get_win32_handle_info_KHR:VkFenceGetWin32HandleInfoKHR{
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
	{	}
};
#endif //VK_USE_PLATFORM_WIN32_KHR

/*	VkImportFenceFdInfoKHR
*/
template<> struct my_class_convert<S_import_fence_fd_info_KHR> { using type = VkImportFenceFdInfoKHR;};
template<> struct my_class_convert<VkImportFenceFdInfoKHR> { using type = S_import_fence_fd_info_KHR;};
struct		S_import_fence_fd_info_KHR:VkImportFenceFdInfoKHR{
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
	{	}
};

/*	VkFenceGetFdInfoKHR
*/
template<> struct my_class_convert<S_fence_get_fd_info_KHR> { using type = VkFenceGetFdInfoKHR;};
template<> struct my_class_convert<VkFenceGetFdInfoKHR> { using type = S_fence_get_fd_info_KHR;};
struct		S_fence_get_fd_info_KHR:VkFenceGetFdInfoKHR{
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
	{	}
};

/*	VkSurfaceCapabilities2EXT
(returnedonly)
*/
template<> struct my_class_convert<S_surface_capabilities2_EXT> { using type = VkSurfaceCapabilities2EXT;};
template<> struct my_class_convert<VkSurfaceCapabilities2EXT> { using type = S_surface_capabilities2_EXT;};
struct		S_surface_capabilities2_EXT:VkSurfaceCapabilities2EXT{
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
	{	}
};

/*	VkDisplayPowerInfoEXT
*/
template<> struct my_class_convert<S_display_power_info_EXT> { using type = VkDisplayPowerInfoEXT;};
template<> struct my_class_convert<VkDisplayPowerInfoEXT> { using type = S_display_power_info_EXT;};
struct		S_display_power_info_EXT:VkDisplayPowerInfoEXT{
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
	{	}
};

/*	VkDeviceEventInfoEXT
*/
template<> struct my_class_convert<S_device_event_info_EXT> { using type = VkDeviceEventInfoEXT;};
template<> struct my_class_convert<VkDeviceEventInfoEXT> { using type = S_device_event_info_EXT;};
struct		S_device_event_info_EXT:VkDeviceEventInfoEXT{
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
	{	}
};

/*	VkDisplayEventInfoEXT
*/
template<> struct my_class_convert<S_display_event_info_EXT> { using type = VkDisplayEventInfoEXT;};
template<> struct my_class_convert<VkDisplayEventInfoEXT> { using type = S_display_event_info_EXT;};
struct		S_display_event_info_EXT:VkDisplayEventInfoEXT{
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
	{	}
};

/*	VkPhysicalDeviceGroupProperties
(returnedonly)
*/
template<> struct my_class_convert<S_physical_device_group_properties> { using type = VkPhysicalDeviceGroupProperties;};
template<> struct my_class_convert<VkPhysicalDeviceGroupProperties> { using type = S_physical_device_group_properties;};
struct		S_physical_device_group_properties:VkPhysicalDeviceGroupProperties{
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
	,physicalDevices_
	,subsetAllocation_}
	{	}
};

/*	VkBindBufferMemoryDeviceGroupInfo
ex to: VkBindBufferMemoryInfo
*/
template<> struct my_class_convert<S_bind_buffer_memory_device_group_info> { using type = VkBindBufferMemoryDeviceGroupInfo;};
template<> struct my_class_convert<VkBindBufferMemoryDeviceGroupInfo> { using type = S_bind_buffer_memory_device_group_info;};
struct		S_bind_buffer_memory_device_group_info:VkBindBufferMemoryDeviceGroupInfo{
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
	{	}

friend S_bind_buffer_memory_info;
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
template<> struct my_class_convert<S_bind_buffer_memory_info> { using type = VkBindBufferMemoryInfo;};
template<> struct my_class_convert<VkBindBufferMemoryInfo> { using type = S_bind_buffer_memory_info;};
struct		S_bind_buffer_memory_info:VkBindBufferMemoryInfo{
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
	{	}

S_bind_buffer_memory_info& n_bind_buffer_memory_device_group_info(S_bind_buffer_memory_device_group_info const& next_);
void set_pNext(N_bind_buffer_memory_info n_){pNext = n_;}
};

/*	VkBindImageMemoryDeviceGroupInfo
ex to: VkBindImageMemoryInfo
*/
template<> struct my_class_convert<S_bind_image_memory_device_group_info> { using type = VkBindImageMemoryDeviceGroupInfo;};
template<> struct my_class_convert<VkBindImageMemoryDeviceGroupInfo> { using type = S_bind_image_memory_device_group_info;};
struct		S_bind_image_memory_device_group_info:VkBindImageMemoryDeviceGroupInfo{
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
	{	}

friend S_bind_image_memory_info;
};

/*	VkBindImageMemorySwapchainInfoKHR
ex to: VkBindImageMemoryInfo
*/
template<> struct my_class_convert<S_bind_image_memory_swapchain_info_KHR> { using type = VkBindImageMemorySwapchainInfoKHR;};
template<> struct my_class_convert<VkBindImageMemorySwapchainInfoKHR> { using type = S_bind_image_memory_swapchain_info_KHR;};
struct		S_bind_image_memory_swapchain_info_KHR:VkBindImageMemorySwapchainInfoKHR{
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
	{	}

friend S_bind_image_memory_info;
};

/*	VkBindImagePlaneMemoryInfo
ex to: VkBindImageMemoryInfo
*/
template<> struct my_class_convert<S_bind_image_plane_memory_info> { using type = VkBindImagePlaneMemoryInfo;};
template<> struct my_class_convert<VkBindImagePlaneMemoryInfo> { using type = S_bind_image_plane_memory_info;};
struct		S_bind_image_plane_memory_info:VkBindImagePlaneMemoryInfo{
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
	{	}

friend S_bind_image_memory_info;
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
template<> struct my_class_convert<S_bind_image_memory_info> { using type = VkBindImageMemoryInfo;};
template<> struct my_class_convert<VkBindImageMemoryInfo> { using type = S_bind_image_memory_info;};
struct		S_bind_image_memory_info:VkBindImageMemoryInfo{
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
	{	}

S_bind_image_memory_info& n_bind_image_memory_device_group_info(S_bind_image_memory_device_group_info const& next_);
S_bind_image_memory_info& n_bind_image_memory_swapchain_info_KHR(S_bind_image_memory_swapchain_info_KHR const& next_);
S_bind_image_memory_info& n_bind_image_plane_memory_info(S_bind_image_plane_memory_info const& next_);
void set_pNext(N_bind_image_memory_info n_){pNext = n_;}
};

/*	VkDeviceGroupPresentCapabilitiesKHR
(returnedonly)
*/
template<> struct my_class_convert<S_device_group_present_capabilities_KHR> { using type = VkDeviceGroupPresentCapabilitiesKHR;};
template<> struct my_class_convert<VkDeviceGroupPresentCapabilitiesKHR> { using type = S_device_group_present_capabilities_KHR;};
struct		S_device_group_present_capabilities_KHR:VkDeviceGroupPresentCapabilitiesKHR{
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
	,presentMask_
	,modes_}
	{	}
};

/*	VkAcquireNextImageInfoKHR
*/
template<> struct my_class_convert<S_acquire_next_image_info_KHR> { using type = VkAcquireNextImageInfoKHR;};
template<> struct my_class_convert<VkAcquireNextImageInfoKHR> { using type = S_acquire_next_image_info_KHR;};
struct		S_acquire_next_image_info_KHR:VkAcquireNextImageInfoKHR{
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
	{	}
};

/*	VkDescriptorUpdateTemplateEntry
*/
template<> struct my_class_convert<S_descriptor_update_template_entry> { using type = VkDescriptorUpdateTemplateEntry;};
template<> struct my_class_convert<VkDescriptorUpdateTemplateEntry> { using type = S_descriptor_update_template_entry;};
struct		S_descriptor_update_template_entry:VkDescriptorUpdateTemplateEntry{
	using VkDescriptorUpdateTemplateEntry::dstBinding;
	using VkDescriptorUpdateTemplateEntry::dstArrayElement;
	using VkDescriptorUpdateTemplateEntry::descriptorCount;
	using VkDescriptorUpdateTemplateEntry::descriptorType;
	using VkDescriptorUpdateTemplateEntry::offset;
	using VkDescriptorUpdateTemplateEntry::stride;
};

/*	VkDescriptorUpdateTemplateCreateInfo
*/
template<> struct my_class_convert<S_descriptor_update_template_create_info> { using type = VkDescriptorUpdateTemplateCreateInfo;};
template<> struct my_class_convert<VkDescriptorUpdateTemplateCreateInfo> { using type = S_descriptor_update_template_create_info;};
struct		S_descriptor_update_template_create_info:VkDescriptorUpdateTemplateCreateInfo{
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
	{	}
};

/*	VkXYColorEXT
Chromaticity coordinate*/
template<> struct my_class_convert<S_xy_color_EXT> { using type = VkXYColorEXT;};
template<> struct my_class_convert<VkXYColorEXT> { using type = S_xy_color_EXT;};
struct		S_xy_color_EXT:VkXYColorEXT{
	using VkXYColorEXT::x;
	using VkXYColorEXT::y;
};

/*	VkHdrMetadataEXT
*/
template<> struct my_class_convert<S_hdr_metadata_EXT> { using type = VkHdrMetadataEXT;};
template<> struct my_class_convert<VkHdrMetadataEXT> { using type = S_hdr_metadata_EXT;};
struct		S_hdr_metadata_EXT:VkHdrMetadataEXT{
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
	{	}
};

/*	VkRefreshCycleDurationGOOGLE
(returnedonly)
*/
template<> struct my_class_convert<S_refresh_cycle_duration_GOOGLE> { using type = VkRefreshCycleDurationGOOGLE;};
template<> struct my_class_convert<VkRefreshCycleDurationGOOGLE> { using type = S_refresh_cycle_duration_GOOGLE;};
struct		S_refresh_cycle_duration_GOOGLE:VkRefreshCycleDurationGOOGLE{
	using VkRefreshCycleDurationGOOGLE::refreshDuration;
};

/*	VkPastPresentationTimingGOOGLE
(returnedonly)
*/
template<> struct my_class_convert<S_past_presentation_timing_GOOGLE> { using type = VkPastPresentationTimingGOOGLE;};
template<> struct my_class_convert<VkPastPresentationTimingGOOGLE> { using type = S_past_presentation_timing_GOOGLE;};
struct		S_past_presentation_timing_GOOGLE:VkPastPresentationTimingGOOGLE{
	using VkPastPresentationTimingGOOGLE::presentID;
	using VkPastPresentationTimingGOOGLE::desiredPresentTime;
	using VkPastPresentationTimingGOOGLE::actualPresentTime;
	using VkPastPresentationTimingGOOGLE::earliestPresentTime;
	using VkPastPresentationTimingGOOGLE::presentMargin;
};

/*	VkIOSSurfaceCreateInfoMVK
*/
#ifdef VK_USE_PLATFORM_IOS_MVK
template<> struct my_class_convert<S_ios_surface_create_info_MVK> { using type = VkIOSSurfaceCreateInfoMVK;};
template<> struct my_class_convert<VkIOSSurfaceCreateInfoMVK> { using type = S_ios_surface_create_info_MVK;};
struct		S_ios_surface_create_info_MVK:VkIOSSurfaceCreateInfoMVK{
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
	{	}
};
#endif //VK_USE_PLATFORM_IOS_MVK

/*	VkMacOSSurfaceCreateInfoMVK
*/
#ifdef VK_USE_PLATFORM_MACOS_MVK
template<> struct my_class_convert<S_mac_os_surface_create_info_MVK> { using type = VkMacOSSurfaceCreateInfoMVK;};
template<> struct my_class_convert<VkMacOSSurfaceCreateInfoMVK> { using type = S_mac_os_surface_create_info_MVK;};
struct		S_mac_os_surface_create_info_MVK:VkMacOSSurfaceCreateInfoMVK{
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
	{	}
};
#endif //VK_USE_PLATFORM_MACOS_MVK

/*	VkPhysicalDeviceSurfaceInfo2KHR
*/
template<> struct my_class_convert<S_physical_device_surface_info2_KHR> { using type = VkPhysicalDeviceSurfaceInfo2KHR;};
template<> struct my_class_convert<VkPhysicalDeviceSurfaceInfo2KHR> { using type = S_physical_device_surface_info2_KHR;};
struct		S_physical_device_surface_info2_KHR:VkPhysicalDeviceSurfaceInfo2KHR{
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
	{	}
};

/*	VkSharedPresentSurfaceCapabilitiesKHR
(returnedonly)
ex to: VkSurfaceCapabilities2KHR
*/
template<> struct my_class_convert<S_shared_present_surface_capabilities_KHR> { using type = VkSharedPresentSurfaceCapabilitiesKHR;};
template<> struct my_class_convert<VkSharedPresentSurfaceCapabilitiesKHR> { using type = S_shared_present_surface_capabilities_KHR;};
struct		S_shared_present_surface_capabilities_KHR:VkSharedPresentSurfaceCapabilitiesKHR{
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
	{	}

friend S_surface_capabilities2_KHR;
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
template<> struct my_class_convert<S_surface_capabilities2_KHR> { using type = VkSurfaceCapabilities2KHR;};
template<> struct my_class_convert<VkSurfaceCapabilities2KHR> { using type = S_surface_capabilities2_KHR;};
struct		S_surface_capabilities2_KHR:VkSurfaceCapabilities2KHR{
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
	{	}

S_surface_capabilities2_KHR& n_shared_present_surface_capabilities_KHR(S_shared_present_surface_capabilities_KHR const& next_);
void set_pNext(N_surface_capabilities2_KHR n_){pNext = n_;}
};

/*	VkSurfaceFormat2KHR
(returnedonly)
*/
template<> struct my_class_convert<S_surface_format2_KHR> { using type = VkSurfaceFormat2KHR;};
template<> struct my_class_convert<VkSurfaceFormat2KHR> { using type = S_surface_format2_KHR;};
struct		S_surface_format2_KHR:VkSurfaceFormat2KHR{
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
	{	}
};

/*	VkDisplayProperties2KHR
(returnedonly)
*/
template<> struct my_class_convert<S_display_properties2_KHR> { using type = VkDisplayProperties2KHR;};
template<> struct my_class_convert<VkDisplayProperties2KHR> { using type = S_display_properties2_KHR;};
struct		S_display_properties2_KHR:VkDisplayProperties2KHR{
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
	{	}
};

/*	VkDisplayPlaneProperties2KHR
(returnedonly)
*/
template<> struct my_class_convert<S_display_plane_properties2_KHR> { using type = VkDisplayPlaneProperties2KHR;};
template<> struct my_class_convert<VkDisplayPlaneProperties2KHR> { using type = S_display_plane_properties2_KHR;};
struct		S_display_plane_properties2_KHR:VkDisplayPlaneProperties2KHR{
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
	{	}
};

/*	VkDisplayModeProperties2KHR
(returnedonly)
*/
template<> struct my_class_convert<S_display_mode_properties2_KHR> { using type = VkDisplayModeProperties2KHR;};
template<> struct my_class_convert<VkDisplayModeProperties2KHR> { using type = S_display_mode_properties2_KHR;};
struct		S_display_mode_properties2_KHR:VkDisplayModeProperties2KHR{
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
	{	}
};

/*	VkDisplayPlaneInfo2KHR
*/
template<> struct my_class_convert<S_display_plane_info2_KHR> { using type = VkDisplayPlaneInfo2KHR;};
template<> struct my_class_convert<VkDisplayPlaneInfo2KHR> { using type = S_display_plane_info2_KHR;};
struct		S_display_plane_info2_KHR:VkDisplayPlaneInfo2KHR{
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
	{	}
};

/*	VkDisplayPlaneCapabilities2KHR
(returnedonly)
*/
template<> struct my_class_convert<S_display_plane_capabilities2_KHR> { using type = VkDisplayPlaneCapabilities2KHR;};
template<> struct my_class_convert<VkDisplayPlaneCapabilities2KHR> { using type = S_display_plane_capabilities2_KHR;};
struct		S_display_plane_capabilities2_KHR:VkDisplayPlaneCapabilities2KHR{
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
	{	}
};

/*	VkBufferMemoryRequirementsInfo2
*/
template<> struct my_class_convert<S_buffer_memory_requirements_info2> { using type = VkBufferMemoryRequirementsInfo2;};
template<> struct my_class_convert<VkBufferMemoryRequirementsInfo2> { using type = S_buffer_memory_requirements_info2;};
struct		S_buffer_memory_requirements_info2:VkBufferMemoryRequirementsInfo2{
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
	{	}
};

/*	VkImagePlaneMemoryRequirementsInfo
ex to: VkImageMemoryRequirementsInfo2
*/
template<> struct my_class_convert<S_image_plane_memory_requirements_info> { using type = VkImagePlaneMemoryRequirementsInfo;};
template<> struct my_class_convert<VkImagePlaneMemoryRequirementsInfo> { using type = S_image_plane_memory_requirements_info;};
struct		S_image_plane_memory_requirements_info:VkImagePlaneMemoryRequirementsInfo{
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
	{	}

friend S_image_memory_requirements_info2;
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
template<> struct my_class_convert<S_image_memory_requirements_info2> { using type = VkImageMemoryRequirementsInfo2;};
template<> struct my_class_convert<VkImageMemoryRequirementsInfo2> { using type = S_image_memory_requirements_info2;};
struct		S_image_memory_requirements_info2:VkImageMemoryRequirementsInfo2{
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
	{	}

S_image_memory_requirements_info2& n_image_plane_memory_requirements_info(S_image_plane_memory_requirements_info const& next_);
void set_pNext(N_image_memory_requirements_info2 n_){pNext = n_;}
};

/*	VkImageSparseMemoryRequirementsInfo2
*/
template<> struct my_class_convert<S_image_sparse_memory_requirements_info2> { using type = VkImageSparseMemoryRequirementsInfo2;};
template<> struct my_class_convert<VkImageSparseMemoryRequirementsInfo2> { using type = S_image_sparse_memory_requirements_info2;};
struct		S_image_sparse_memory_requirements_info2:VkImageSparseMemoryRequirementsInfo2{
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
	{	}
};

/*	VkMemoryDedicatedRequirements
(returnedonly)
ex to: VkMemoryRequirements2
*/
template<> struct my_class_convert<S_memory_dedicated_requirements> { using type = VkMemoryDedicatedRequirements;};
template<> struct my_class_convert<VkMemoryDedicatedRequirements> { using type = S_memory_dedicated_requirements;};
struct		S_memory_dedicated_requirements:VkMemoryDedicatedRequirements{
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
	{	}

friend S_memory_requirements2;
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
template<> struct my_class_convert<S_memory_requirements2> { using type = VkMemoryRequirements2;};
template<> struct my_class_convert<VkMemoryRequirements2> { using type = S_memory_requirements2;};
struct		S_memory_requirements2:VkMemoryRequirements2{
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
	{	}

S_memory_requirements2& n_memory_dedicated_requirements(S_memory_dedicated_requirements const& next_);
void set_pNext(N_memory_requirements2 n_){pNext = n_;}
};

/*	VkSparseImageMemoryRequirements2
(returnedonly)
*/
template<> struct my_class_convert<S_sparse_image_memory_requirements2> { using type = VkSparseImageMemoryRequirements2;};
template<> struct my_class_convert<VkSparseImageMemoryRequirements2> { using type = S_sparse_image_memory_requirements2;};
struct		S_sparse_image_memory_requirements2:VkSparseImageMemoryRequirements2{
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
	{	}
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
template<> struct my_class_convert<S_sampler_ycbcr_conversion_create_info> { using type = VkSamplerYcbcrConversionCreateInfo;};
template<> struct my_class_convert<VkSamplerYcbcrConversionCreateInfo> { using type = S_sampler_ycbcr_conversion_create_info;};
struct		S_sampler_ycbcr_conversion_create_info:VkSamplerYcbcrConversionCreateInfo{
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
	{	}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_sampler_ycbcr_conversion_create_info& n_external_format_ANDROID(S_external_format_ANDROID const& next_);
#endif
void set_pNext(N_sampler_ycbcr_conversion_create_info n_){pNext = n_;}
};

/*	VkConditionalRenderingBeginInfoEXT
*/
template<> struct my_class_convert<S_conditional_rendering_begin_info_EXT> { using type = VkConditionalRenderingBeginInfoEXT;};
template<> struct my_class_convert<VkConditionalRenderingBeginInfoEXT> { using type = S_conditional_rendering_begin_info_EXT;};
struct		S_conditional_rendering_begin_info_EXT:VkConditionalRenderingBeginInfoEXT{
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
	{	}
};

/*	VkDeviceQueueInfo2
*/
template<> struct my_class_convert<S_device_queue_info2> { using type = VkDeviceQueueInfo2;};
template<> struct my_class_convert<VkDeviceQueueInfo2> { using type = S_device_queue_info2;};
struct		S_device_queue_info2:VkDeviceQueueInfo2{
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
	,flags_
	,queueFamilyIndex_
	,queueIndex_}
	{	}
};

/*	VkMultisamplePropertiesEXT
(returnedonly)
*/
template<> struct my_class_convert<S_multisample_properties_EXT> { using type = VkMultisamplePropertiesEXT;};
template<> struct my_class_convert<VkMultisamplePropertiesEXT> { using type = S_multisample_properties_EXT;};
struct		S_multisample_properties_EXT:VkMultisamplePropertiesEXT{
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
	{	}
};

/*	VkValidationCacheCreateInfoEXT
*/
template<> struct my_class_convert<S_validation_cache_create_info_EXT> { using type = VkValidationCacheCreateInfoEXT;};
template<> struct my_class_convert<VkValidationCacheCreateInfoEXT> { using type = S_validation_cache_create_info_EXT;};
struct		S_validation_cache_create_info_EXT:VkValidationCacheCreateInfoEXT{
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
	{	}
};

/*	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT
(returnedonly)
ex to: VkDescriptorSetLayoutSupport
*/
template<> struct my_class_convert<S_descriptor_set_variable_descriptor_count_layout_support_EXT> { using type = VkDescriptorSetVariableDescriptorCountLayoutSupportEXT;};
template<> struct my_class_convert<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT> { using type = S_descriptor_set_variable_descriptor_count_layout_support_EXT;};
struct		S_descriptor_set_variable_descriptor_count_layout_support_EXT:VkDescriptorSetVariableDescriptorCountLayoutSupportEXT{
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
	{	}

friend S_descriptor_set_layout_support;
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
template<> struct my_class_convert<S_descriptor_set_layout_support> { using type = VkDescriptorSetLayoutSupport;};
template<> struct my_class_convert<VkDescriptorSetLayoutSupport> { using type = S_descriptor_set_layout_support;};
struct		S_descriptor_set_layout_support:VkDescriptorSetLayoutSupport{
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
	{	}

S_descriptor_set_layout_support& n_descriptor_set_variable_descriptor_count_layout_support_EXT(S_descriptor_set_variable_descriptor_count_layout_support_EXT const& next_);
void set_pNext(N_descriptor_set_layout_support n_){pNext = n_;}
};

/*	VkNativeBufferANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template<> struct my_class_convert<S_native_buffer_ANDROID> { using type = VkNativeBufferANDROID;};
template<> struct my_class_convert<VkNativeBufferANDROID> { using type = S_native_buffer_ANDROID;};
struct		S_native_buffer_ANDROID:VkNativeBufferANDROID{
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
	{	}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkShaderResourceUsageAMD
(returnedonly)
*/
template<> struct my_class_convert<S_shader_resource_usage_AMD> { using type = VkShaderResourceUsageAMD;};
template<> struct my_class_convert<VkShaderResourceUsageAMD> { using type = S_shader_resource_usage_AMD;};
struct		S_shader_resource_usage_AMD:VkShaderResourceUsageAMD{
	using VkShaderResourceUsageAMD::numUsedVgprs;
	using VkShaderResourceUsageAMD::numUsedSgprs;
	using VkShaderResourceUsageAMD::ldsSizePerLocalWorkGroup;
	using VkShaderResourceUsageAMD::ldsUsageSizeInBytes;
	using VkShaderResourceUsageAMD::scratchMemUsageInBytes;
};

/*	VkShaderStatisticsInfoAMD
(returnedonly)
*/
template<> struct my_class_convert<S_shader_statistics_info_AMD> { using type = VkShaderStatisticsInfoAMD;};
template<> struct my_class_convert<VkShaderStatisticsInfoAMD> { using type = S_shader_statistics_info_AMD;};
struct		S_shader_statistics_info_AMD:VkShaderStatisticsInfoAMD{
	using VkShaderStatisticsInfoAMD::shaderStageMask;
	using VkShaderStatisticsInfoAMD::resourceUsage;
	using VkShaderStatisticsInfoAMD::numPhysicalVgprs;
	using VkShaderStatisticsInfoAMD::numPhysicalSgprs;
	using VkShaderStatisticsInfoAMD::numAvailableVgprs;
	using VkShaderStatisticsInfoAMD::numAvailableSgprs;
	using VkShaderStatisticsInfoAMD::computeWorkGroupSize;
};

/*	VkDebugUtilsObjectNameInfoEXT
*/
template<> struct my_class_convert<S_debug_utils_object_name_info_EXT> { using type = VkDebugUtilsObjectNameInfoEXT;};
template<> struct my_class_convert<VkDebugUtilsObjectNameInfoEXT> { using type = S_debug_utils_object_name_info_EXT;};
struct		S_debug_utils_object_name_info_EXT:VkDebugUtilsObjectNameInfoEXT{
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
	{	}
};

/*	VkDebugUtilsObjectTagInfoEXT
*/
template<> struct my_class_convert<S_debug_utils_object_tag_info_EXT> { using type = VkDebugUtilsObjectTagInfoEXT;};
template<> struct my_class_convert<VkDebugUtilsObjectTagInfoEXT> { using type = S_debug_utils_object_tag_info_EXT;};
struct		S_debug_utils_object_tag_info_EXT:VkDebugUtilsObjectTagInfoEXT{
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
	{	}
};

/*	VkDebugUtilsLabelEXT
*/
template<> struct my_class_convert<S_debug_utils_label_EXT> { using type = VkDebugUtilsLabelEXT;};
template<> struct my_class_convert<VkDebugUtilsLabelEXT> { using type = S_debug_utils_label_EXT;};
struct		S_debug_utils_label_EXT:VkDebugUtilsLabelEXT{
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
	,color_}
	{	}
};

/*	VkDebugUtilsMessengerCallbackDataEXT
*/
template<> struct my_class_convert<S_debug_utils_messenger_callback_data_EXT> { using type = VkDebugUtilsMessengerCallbackDataEXT;};
template<> struct my_class_convert<VkDebugUtilsMessengerCallbackDataEXT> { using type = S_debug_utils_messenger_callback_data_EXT;};
struct		S_debug_utils_messenger_callback_data_EXT:VkDebugUtilsMessengerCallbackDataEXT{
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
	{	}
};

/*	VkMemoryHostPointerPropertiesEXT
*/
template<> struct my_class_convert<S_memory_host_pointer_properties_EXT> { using type = VkMemoryHostPointerPropertiesEXT;};
template<> struct my_class_convert<VkMemoryHostPointerPropertiesEXT> { using type = S_memory_host_pointer_properties_EXT;};
struct		S_memory_host_pointer_properties_EXT:VkMemoryHostPointerPropertiesEXT{
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
	{	}
};

/*	VkAttachmentDescription2KHR
*/
template<> struct my_class_convert<S_attachment_description2_KHR> { using type = VkAttachmentDescription2KHR;};
template<> struct my_class_convert<VkAttachmentDescription2KHR> { using type = S_attachment_description2_KHR;};
struct		S_attachment_description2_KHR:VkAttachmentDescription2KHR{
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
	{	}
};

/*	VkAttachmentReference2KHR
*/
template<> struct my_class_convert<S_attachment_reference2_KHR> { using type = VkAttachmentReference2KHR;};
template<> struct my_class_convert<VkAttachmentReference2KHR> { using type = S_attachment_reference2_KHR;};
struct		S_attachment_reference2_KHR:VkAttachmentReference2KHR{
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
	{	}
};

/*	VkSubpassDescription2KHR
*/
template<> struct my_class_convert<S_subpass_description2_KHR> { using type = VkSubpassDescription2KHR;};
template<> struct my_class_convert<VkSubpassDescription2KHR> { using type = S_subpass_description2_KHR;};
struct		S_subpass_description2_KHR:VkSubpassDescription2KHR{
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
	,flags_
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
	{	}
};

/*	VkSubpassDependency2KHR
*/
template<> struct my_class_convert<S_subpass_dependency2_KHR> { using type = VkSubpassDependency2KHR;};
template<> struct my_class_convert<VkSubpassDependency2KHR> { using type = S_subpass_dependency2_KHR;};
struct		S_subpass_dependency2_KHR:VkSubpassDependency2KHR{
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
	{	}
};

/*	VkRenderPassCreateInfo2KHR
*/
template<> struct my_class_convert<S_render_pass_create_info2_KHR> { using type = VkRenderPassCreateInfo2KHR;};
template<> struct my_class_convert<VkRenderPassCreateInfo2KHR> { using type = S_render_pass_create_info2_KHR;};
struct		S_render_pass_create_info2_KHR:VkRenderPassCreateInfo2KHR{
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
	F_render_pass_create flags_,
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
	{	}
};

/*	VkSubpassBeginInfoKHR
*/
template<> struct my_class_convert<S_subpass_begin_info_KHR> { using type = VkSubpassBeginInfoKHR;};
template<> struct my_class_convert<VkSubpassBeginInfoKHR> { using type = S_subpass_begin_info_KHR;};
struct		S_subpass_begin_info_KHR:VkSubpassBeginInfoKHR{
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
	{	}
};

/*	VkSubpassEndInfoKHR
*/
template<> struct my_class_convert<S_subpass_end_info_KHR> { using type = VkSubpassEndInfoKHR;};
template<> struct my_class_convert<VkSubpassEndInfoKHR> { using type = S_subpass_end_info_KHR;};
struct		S_subpass_end_info_KHR:VkSubpassEndInfoKHR{
private:
	using VkSubpassEndInfoKHR::sType;
	using VkSubpassEndInfoKHR::pNext;

S_subpass_end_info_KHR():VkSubpassEndInfoKHR{VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR,nullptr}{}
};

/*	VkAndroidHardwareBufferFormatPropertiesANDROID
(returnedonly)
ex to: VkAndroidHardwareBufferPropertiesANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template<> struct my_class_convert<S_android_hardware_buffer_format_properties_ANDROID> { using type = VkAndroidHardwareBufferFormatPropertiesANDROID;};
template<> struct my_class_convert<VkAndroidHardwareBufferFormatPropertiesANDROID> { using type = S_android_hardware_buffer_format_properties_ANDROID;};
struct		S_android_hardware_buffer_format_properties_ANDROID:VkAndroidHardwareBufferFormatPropertiesANDROID{
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
	{	}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
friend S_android_hardware_buffer_properties_ANDROID;
#endif
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
template<> struct my_class_convert<S_android_hardware_buffer_properties_ANDROID> { using type = VkAndroidHardwareBufferPropertiesANDROID;};
template<> struct my_class_convert<VkAndroidHardwareBufferPropertiesANDROID> { using type = S_android_hardware_buffer_properties_ANDROID;};
struct		S_android_hardware_buffer_properties_ANDROID:VkAndroidHardwareBufferPropertiesANDROID{
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
	{	}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_hardware_buffer_properties_ANDROID& n_android_hardware_buffer_format_properties_ANDROID(S_android_hardware_buffer_format_properties_ANDROID const& next_);
#endif
void set_pNext(N_android_hardware_buffer_properties_ANDROID n_){pNext = n_;}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkMemoryGetAndroidHardwareBufferInfoANDROID
*/
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template<> struct my_class_convert<S_memory_get_android_hardware_buffer_info_ANDROID> { using type = VkMemoryGetAndroidHardwareBufferInfoANDROID;};
template<> struct my_class_convert<VkMemoryGetAndroidHardwareBufferInfoANDROID> { using type = S_memory_get_android_hardware_buffer_info_ANDROID;};
struct		S_memory_get_android_hardware_buffer_info_ANDROID:VkMemoryGetAndroidHardwareBufferInfoANDROID{
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
	{	}
};
#endif //VK_USE_PLATFORM_ANDROID_KHR

/*	VkCheckpointDataNV
(returnedonly)
*/
template<> struct my_class_convert<S_checkpoint_data_NV> { using type = VkCheckpointDataNV;};
template<> struct my_class_convert<VkCheckpointDataNV> { using type = S_checkpoint_data_NV;};
struct		S_checkpoint_data_NV:VkCheckpointDataNV{
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
	{	}
};

/*	VkDrawMeshTasksIndirectCommandNV
*/
template<> struct my_class_convert<S_draw_mesh_tasks_indirect_command_NV> { using type = VkDrawMeshTasksIndirectCommandNV;};
template<> struct my_class_convert<VkDrawMeshTasksIndirectCommandNV> { using type = S_draw_mesh_tasks_indirect_command_NV;};
struct		S_draw_mesh_tasks_indirect_command_NV:VkDrawMeshTasksIndirectCommandNV{
	using VkDrawMeshTasksIndirectCommandNV::taskCount;
	using VkDrawMeshTasksIndirectCommandNV::firstTask;
};

/*	VkRaytracingPipelineCreateInfoNVX
*/
template<> struct my_class_convert<S_raytracing_pipeline_create_info_NVX> { using type = VkRaytracingPipelineCreateInfoNVX;};
template<> struct my_class_convert<VkRaytracingPipelineCreateInfoNVX> { using type = S_raytracing_pipeline_create_info_NVX;};
struct		S_raytracing_pipeline_create_info_NVX:VkRaytracingPipelineCreateInfoNVX{
private:
	using VkRaytracingPipelineCreateInfoNVX::sType;
	using VkRaytracingPipelineCreateInfoNVX::pNext;
public:
	using VkRaytracingPipelineCreateInfoNVX::flags;
	using VkRaytracingPipelineCreateInfoNVX::stageCount;
	using VkRaytracingPipelineCreateInfoNVX::pStages;
	using VkRaytracingPipelineCreateInfoNVX::pGroupNumbers;
	using VkRaytracingPipelineCreateInfoNVX::maxRecursionDepth;
	using VkRaytracingPipelineCreateInfoNVX::layout;
	using VkRaytracingPipelineCreateInfoNVX::basePipelineHandle;
	using VkRaytracingPipelineCreateInfoNVX::basePipelineIndex;

S_raytracing_pipeline_create_info_NVX():VkRaytracingPipelineCreateInfoNVX{VK_STRUCTURE_TYPE_RAYTRACING_PIPELINE_CREATE_INFO_NVX,nullptr}{}
S_raytracing_pipeline_create_info_NVX(
	F_pipeline_create flags_,
	uint32_t stageCount_,
	const S_pipeline_shader_stage_create_info * pStages_,
	const uint32_t * pGroupNumbers_,
	uint32_t maxRecursionDepth_,
	VkPipelineLayout layout_,
	VkPipeline basePipelineHandle_,
	int32_t basePipelineIndex_)
	:VkRaytracingPipelineCreateInfoNVX{
	VK_STRUCTURE_TYPE_RAYTRACING_PIPELINE_CREATE_INFO_NVX
	,nullptr
	,flags_
	,stageCount_
	,pStages_
	,pGroupNumbers_
	,maxRecursionDepth_
	,layout_
	,basePipelineHandle_
	,basePipelineIndex_}
	{	}
};

/*	VkGeometryTrianglesNVX
*/
template<> struct my_class_convert<S_geometry_triangles_NVX> { using type = VkGeometryTrianglesNVX;};
template<> struct my_class_convert<VkGeometryTrianglesNVX> { using type = S_geometry_triangles_NVX;};
struct		S_geometry_triangles_NVX:VkGeometryTrianglesNVX{
private:
	using VkGeometryTrianglesNVX::sType;
	using VkGeometryTrianglesNVX::pNext;
public:
	using VkGeometryTrianglesNVX::vertexData;
	using VkGeometryTrianglesNVX::vertexOffset;
	using VkGeometryTrianglesNVX::vertexCount;
	using VkGeometryTrianglesNVX::vertexStride;
	using VkGeometryTrianglesNVX::vertexFormat;
	using VkGeometryTrianglesNVX::indexData;
	using VkGeometryTrianglesNVX::indexOffset;
	using VkGeometryTrianglesNVX::indexCount;
	using VkGeometryTrianglesNVX::indexType;
	using VkGeometryTrianglesNVX::transformData;
	using VkGeometryTrianglesNVX::transformOffset;

S_geometry_triangles_NVX():VkGeometryTrianglesNVX{VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NVX,nullptr}{}
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
	:VkGeometryTrianglesNVX{
	VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NVX
	,nullptr
	,vertexData_
	,vertexOffset_
	,vertexCount_
	,vertexStride_
	,vertexFormat_
	,indexData_
	,indexOffset_
	,indexCount_
	,indexType_
	,transformData_
	,transformOffset_}
	{	}
};

/*	VkGeometryAABBNVX
*/
template<> struct my_class_convert<S_geometry_aabb_NVX> { using type = VkGeometryAABBNVX;};
template<> struct my_class_convert<VkGeometryAABBNVX> { using type = S_geometry_aabb_NVX;};
struct		S_geometry_aabb_NVX:VkGeometryAABBNVX{
private:
	using VkGeometryAABBNVX::sType;
	using VkGeometryAABBNVX::pNext;
public:
	using VkGeometryAABBNVX::aabbData;
	using VkGeometryAABBNVX::numAABBs;
	using VkGeometryAABBNVX::stride;
	using VkGeometryAABBNVX::offset;

S_geometry_aabb_NVX():VkGeometryAABBNVX{VK_STRUCTURE_TYPE_GEOMETRY_AABB_NVX,nullptr}{}
S_geometry_aabb_NVX(
	VkBuffer aabbData_,
	uint32_t numAABBs_,
	uint32_t stride_,
	VkDeviceSize offset_)
	:VkGeometryAABBNVX{
	VK_STRUCTURE_TYPE_GEOMETRY_AABB_NVX
	,nullptr
	,aabbData_
	,numAABBs_
	,stride_
	,offset_}
	{	}
};

/*	VkGeometryDataNVX
*/
template<> struct my_class_convert<S_geometry_data_NVX> { using type = VkGeometryDataNVX;};
template<> struct my_class_convert<VkGeometryDataNVX> { using type = S_geometry_data_NVX;};
struct		S_geometry_data_NVX:VkGeometryDataNVX{
	using VkGeometryDataNVX::triangles;
	using VkGeometryDataNVX::aabbs;
};

/*	VkGeometryNVX
*/
template<> struct my_class_convert<S_geometry_NVX> { using type = VkGeometryNVX;};
template<> struct my_class_convert<VkGeometryNVX> { using type = S_geometry_NVX;};
struct		S_geometry_NVX:VkGeometryNVX{
private:
	using VkGeometryNVX::sType;
	using VkGeometryNVX::pNext;
public:
	using VkGeometryNVX::geometryType;
	using VkGeometryNVX::geometry;
	using VkGeometryNVX::flags;

S_geometry_NVX():VkGeometryNVX{VK_STRUCTURE_TYPE_GEOMETRY_NVX,nullptr}{}
S_geometry_NVX(
	E_geometry_type_NVX geometryType_,
	S_geometry_data_NVX geometry_,
	F_geometry_NVX flags_)
	:VkGeometryNVX{
	VK_STRUCTURE_TYPE_GEOMETRY_NVX
	,nullptr
	,geometryType_
	,geometry_
	,flags_}
	{	}
};

/*	VkAccelerationStructureCreateInfoNVX
*/
template<> struct my_class_convert<S_acceleration_structure_create_info_NVX> { using type = VkAccelerationStructureCreateInfoNVX;};
template<> struct my_class_convert<VkAccelerationStructureCreateInfoNVX> { using type = S_acceleration_structure_create_info_NVX;};
struct		S_acceleration_structure_create_info_NVX:VkAccelerationStructureCreateInfoNVX{
private:
	using VkAccelerationStructureCreateInfoNVX::sType;
	using VkAccelerationStructureCreateInfoNVX::pNext;
public:
	using VkAccelerationStructureCreateInfoNVX::type;
	using VkAccelerationStructureCreateInfoNVX::flags;
	using VkAccelerationStructureCreateInfoNVX::compactedSize;
	using VkAccelerationStructureCreateInfoNVX::instanceCount;
	using VkAccelerationStructureCreateInfoNVX::geometryCount;
	using VkAccelerationStructureCreateInfoNVX::pGeometries;

S_acceleration_structure_create_info_NVX():VkAccelerationStructureCreateInfoNVX{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NVX,nullptr}{}
S_acceleration_structure_create_info_NVX(
	E_acceleration_structure_type_NVX type_,
	F_build_acceleration_structure_NVX flags_,
	VkDeviceSize compactedSize_,
	uint32_t instanceCount_,
	uint32_t geometryCount_,
	const S_geometry_NVX * pGeometries_)
	:VkAccelerationStructureCreateInfoNVX{
	VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NVX
	,nullptr
	,type_
	,flags_
	,compactedSize_
	,instanceCount_
	,geometryCount_
	,pGeometries_}
	{	}
};

/*	VkBindAccelerationStructureMemoryInfoNVX
*/
template<> struct my_class_convert<S_bind_acceleration_structure_memory_info_NVX> { using type = VkBindAccelerationStructureMemoryInfoNVX;};
template<> struct my_class_convert<VkBindAccelerationStructureMemoryInfoNVX> { using type = S_bind_acceleration_structure_memory_info_NVX;};
struct		S_bind_acceleration_structure_memory_info_NVX:VkBindAccelerationStructureMemoryInfoNVX{
private:
	using VkBindAccelerationStructureMemoryInfoNVX::sType;
	using VkBindAccelerationStructureMemoryInfoNVX::pNext;
public:
	using VkBindAccelerationStructureMemoryInfoNVX::accelerationStructure;
	using VkBindAccelerationStructureMemoryInfoNVX::memory;
	using VkBindAccelerationStructureMemoryInfoNVX::memoryOffset;
	using VkBindAccelerationStructureMemoryInfoNVX::deviceIndexCount;
	using VkBindAccelerationStructureMemoryInfoNVX::pDeviceIndices;

S_bind_acceleration_structure_memory_info_NVX():VkBindAccelerationStructureMemoryInfoNVX{VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NVX,nullptr}{}
S_bind_acceleration_structure_memory_info_NVX(
	VkAccelerationStructureNVX accelerationStructure_,
	VkDeviceMemory memory_,
	VkDeviceSize memoryOffset_,
	uint32_t deviceIndexCount_,
	const uint32_t * pDeviceIndices_)
	:VkBindAccelerationStructureMemoryInfoNVX{
	VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NVX
	,nullptr
	,accelerationStructure_
	,memory_
	,memoryOffset_
	,deviceIndexCount_
	,pDeviceIndices_}
	{	}
};

/*	VkAccelerationStructureMemoryRequirementsInfoNVX
*/
template<> struct my_class_convert<S_acceleration_structure_memory_requirements_info_NVX> { using type = VkAccelerationStructureMemoryRequirementsInfoNVX;};
template<> struct my_class_convert<VkAccelerationStructureMemoryRequirementsInfoNVX> { using type = S_acceleration_structure_memory_requirements_info_NVX;};
struct		S_acceleration_structure_memory_requirements_info_NVX:VkAccelerationStructureMemoryRequirementsInfoNVX{
private:
	using VkAccelerationStructureMemoryRequirementsInfoNVX::sType;
	using VkAccelerationStructureMemoryRequirementsInfoNVX::pNext;
public:
	using VkAccelerationStructureMemoryRequirementsInfoNVX::accelerationStructure;

S_acceleration_structure_memory_requirements_info_NVX():VkAccelerationStructureMemoryRequirementsInfoNVX{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NVX,nullptr}{}
S_acceleration_structure_memory_requirements_info_NVX(
	VkAccelerationStructureNVX accelerationStructure_)
	:VkAccelerationStructureMemoryRequirementsInfoNVX{
	VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NVX
	,nullptr
	,accelerationStructure_}
	{	}
};

/*	VkImageDrmFormatModifierPropertiesEXT
(returnedonly)
*/
#ifdef LAKA_UNKNOW
template<> struct my_class_convert<S_image_drm_format_modifier_properties_EXT> { using type = VkImageDrmFormatModifierPropertiesEXT;};
template<> struct my_class_convert<VkImageDrmFormatModifierPropertiesEXT> { using type = S_image_drm_format_modifier_properties_EXT;};
struct		S_image_drm_format_modifier_properties_EXT:VkImageDrmFormatModifierPropertiesEXT{
private:
	using VkImageDrmFormatModifierPropertiesEXT::sType;
	using VkImageDrmFormatModifierPropertiesEXT::pNext;
public:
	using VkImageDrmFormatModifierPropertiesEXT::drmFormatModifier;

S_image_drm_format_modifier_properties_EXT():VkImageDrmFormatModifierPropertiesEXT{VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT,nullptr}{}
S_image_drm_format_modifier_properties_EXT(
	uint64_t drmFormatModifier_)
	:VkImageDrmFormatModifierPropertiesEXT{
	VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT
	,nullptr
	,drmFormatModifier_}
	{	}
};
#endif //LAKA_UNKNOW


}}
