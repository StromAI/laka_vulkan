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
using S_physical_device_features2_KHR = VkPhysicalDeviceFeatures2KHR;//1

using S_physical_device_properties2_KHR = VkPhysicalDeviceProperties2KHR;//2

using S_format_properties2_KHR = VkFormatProperties2KHR;//3

using S_image_format_properties2_KHR = VkImageFormatProperties2KHR;//4

using S_physical_device_image_format_info2_KHR = VkPhysicalDeviceImageFormatInfo2KHR;//5

using S_queue_family_properties2_KHR = VkQueueFamilyProperties2KHR;//6

using S_physical_device_memory_properties2_KHR = VkPhysicalDeviceMemoryProperties2KHR;//7

using S_sparse_image_format_properties2_KHR = VkSparseImageFormatProperties2KHR;//8

using S_physical_device_sparse_image_format_info2_KHR = VkPhysicalDeviceSparseImageFormatInfo2KHR;//9

using S_physical_device_variable_pointer_features_KHR = VkPhysicalDeviceVariablePointerFeaturesKHR;//10

using S_external_memory_properties_KHR = VkExternalMemoryPropertiesKHR;//11

using S_physical_device_external_image_format_info_KHR = VkPhysicalDeviceExternalImageFormatInfoKHR;//12

using S_external_image_format_properties_KHR = VkExternalImageFormatPropertiesKHR;//13

using S_physical_device_external_buffer_info_KHR = VkPhysicalDeviceExternalBufferInfoKHR;//14

using S_external_buffer_properties_KHR = VkExternalBufferPropertiesKHR;//15

using S_physical_device_id_properties_KHR = VkPhysicalDeviceIDPropertiesKHR;//16

using S_external_memory_image_create_info_KHR = VkExternalMemoryImageCreateInfoKHR;//17

using S_external_memory_buffer_create_info_KHR = VkExternalMemoryBufferCreateInfoKHR;//18

using S_export_memory_allocate_info_KHR = VkExportMemoryAllocateInfoKHR;//19

using S_physical_device_external_semaphore_info_KHR = VkPhysicalDeviceExternalSemaphoreInfoKHR;//20

using S_external_semaphore_properties_KHR = VkExternalSemaphorePropertiesKHR;//21

using S_export_semaphore_create_info_KHR = VkExportSemaphoreCreateInfoKHR;//22

using S_physical_device_external_fence_info_KHR = VkPhysicalDeviceExternalFenceInfoKHR;//23

using S_external_fence_properties_KHR = VkExternalFencePropertiesKHR;//24

using S_export_fence_create_info_KHR = VkExportFenceCreateInfoKHR;//25

using S_physical_device_multiview_features_KHR = VkPhysicalDeviceMultiviewFeaturesKHR;//26

using S_physical_device_multiview_properties_KHR = VkPhysicalDeviceMultiviewPropertiesKHR;//27

using S_render_pass_multiview_create_info_KHR = VkRenderPassMultiviewCreateInfoKHR;//28

using S_physical_device_group_properties_KHR = VkPhysicalDeviceGroupPropertiesKHR;//29

using S_memory_allocate_flags_info_KHR = VkMemoryAllocateFlagsInfoKHR;//30

using S_bind_buffer_memory_info_KHR = VkBindBufferMemoryInfoKHR;//31

using S_bind_buffer_memory_device_group_info_KHR = VkBindBufferMemoryDeviceGroupInfoKHR;//32

using S_bind_image_memory_info_KHR = VkBindImageMemoryInfoKHR;//33

using S_bind_image_memory_device_group_info_KHR = VkBindImageMemoryDeviceGroupInfoKHR;//34

using S_device_group_render_pass_begin_info_KHR = VkDeviceGroupRenderPassBeginInfoKHR;//35

using S_device_group_command_buffer_begin_info_KHR = VkDeviceGroupCommandBufferBeginInfoKHR;//36

using S_device_group_submit_info_KHR = VkDeviceGroupSubmitInfoKHR;//37

using S_device_group_bind_sparse_info_KHR = VkDeviceGroupBindSparseInfoKHR;//38

using S_device_group_device_create_info_KHR = VkDeviceGroupDeviceCreateInfoKHR;//39

using S_descriptor_update_template_entry_KHR = VkDescriptorUpdateTemplateEntryKHR;//40

using S_descriptor_update_template_create_info_KHR = VkDescriptorUpdateTemplateCreateInfoKHR;//41

using S_input_attachment_aspect_reference_KHR = VkInputAttachmentAspectReferenceKHR;//42

using S_render_pass_input_attachment_aspect_create_info_KHR = VkRenderPassInputAttachmentAspectCreateInfoKHR;//43

using S_physical_device_16bit_storage_features_KHR = VkPhysicalDevice16BitStorageFeaturesKHR;//44

using S_buffer_memory_requirements_info2_KHR = VkBufferMemoryRequirementsInfo2KHR;//45

using S_image_memory_requirements_info2_KHR = VkImageMemoryRequirementsInfo2KHR;//46

using S_image_sparse_memory_requirements_info2_KHR = VkImageSparseMemoryRequirementsInfo2KHR;//47

using S_memory_requirements2_KHR = VkMemoryRequirements2KHR;//48

using S_sparse_image_memory_requirements2_KHR = VkSparseImageMemoryRequirements2KHR;//49

using S_physical_device_point_clipping_properties_KHR = VkPhysicalDevicePointClippingPropertiesKHR;//50

using S_memory_dedicated_requirements_KHR = VkMemoryDedicatedRequirementsKHR;//51

using S_memory_dedicated_allocate_info_KHR = VkMemoryDedicatedAllocateInfoKHR;//52

using S_image_view_usage_create_info_KHR = VkImageViewUsageCreateInfoKHR;//53

using S_pipeline_tessellation_domain_origin_state_create_info_KHR = VkPipelineTessellationDomainOriginStateCreateInfoKHR;//54

using S_sampler_ycbcr_conversion_info_KHR = VkSamplerYcbcrConversionInfoKHR;//55

using S_sampler_ycbcr_conversion_create_info_KHR = VkSamplerYcbcrConversionCreateInfoKHR;//56

using S_bind_image_plane_memory_info_KHR = VkBindImagePlaneMemoryInfoKHR;//57

using S_image_plane_memory_requirements_info_KHR = VkImagePlaneMemoryRequirementsInfoKHR;//58

using S_physical_device_sampler_ycbcr_conversion_features_KHR = VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR;//59

using S_sampler_ycbcr_conversion_image_format_properties_KHR = VkSamplerYcbcrConversionImageFormatPropertiesKHR;//60

using S_physical_device_maintenance3_properties_KHR = VkPhysicalDeviceMaintenance3PropertiesKHR;//61

using S_descriptor_set_layout_support_KHR = VkDescriptorSetLayoutSupportKHR;//62

/*	VkOffset2D:*/
struct S_offset_2d{
//63
	int32_t	x;
	int32_t	y;
};

/*	VkOffset3D:*/
struct S_offset_3d{
//64
	int32_t	x;
	int32_t	y;
	int32_t	z;
};

/*	VkExtent2D:*/
struct S_extent_2d{
//65
	uint32_t	width;
	uint32_t	height;
};

/*	VkExtent3D:*/
struct S_extent_3d{
//66
	uint32_t	width;
	uint32_t	height;
	uint32_t	depth;
};

/*	VkViewport:*/
struct S_viewport{
//67
	float	x;
	float	y;
	float	width;
	float	height;
	float	minDepth;
	float	maxDepth;
};

/*	VkRect2D:*/
struct S_rect_2d{
//68
	S_offset_2d	offset;
	S_extent_2d	extent;
};

/*	VkClearRect:*/
struct S_clear_rect{
//69
	S_rect_2d	rect;
	uint32_t	baseArrayLayer;
	uint32_t	layerCount;
};

/*	VkComponentMapping:*/
struct S_component_mapping{
//70
	VkComponentSwizzle	r;
	VkComponentSwizzle	g;
	VkComponentSwizzle	b;
	VkComponentSwizzle	a;
};

/*	VkExtensionProperties:
returnd only*/
struct S_extension_properties{
//71
/*extension name*/
	char	extensionName;
/*version of the extension specification implemented*/
	uint32_t	specVersion;
};

/*	VkLayerProperties:
returnd only*/
struct S_layer_properties{
//72
/*layer name*/
	char	layerName;
/*version of the layer specification implemented*/
	uint32_t	specVersion;
/*build or release version of the layer's library*/
	uint32_t	implementationVersion;
/*Free-form description of the layer*/
	char	description;
};

/*	VkAllocationCallbacks:*/
struct S_allocation_callbacks{
//73
	void*	pUserData;
	PFN_vkAllocationFunction	pfnAllocation;
	PFN_vkReallocationFunction	pfnReallocation;
	PFN_vkFreeFunction	pfnFree;
	PFN_vkInternalAllocationNotification	pfnInternalAllocation;
	PFN_vkInternalFreeNotification	pfnInternalFree;
};

/*	VkQueueFamilyProperties:
returnd only*/
struct S_queue_family_properties{
//74
/*Queue flags*/
	VkQueueFlags	queueFlags;
	uint32_t	queueCount;
	uint32_t	timestampValidBits;
/*Minimum alignment requirement for image transfers*/
	S_extent_3d	minImageTransferGranularity;
};

/*	VkPhysicalDeviceMemoryProperties:
returnd only*/
struct S_physical_device_memory_properties{
//75
	uint32_t	memoryTypeCount;
	S_memory_type	memoryTypes;
	uint32_t	memoryHeapCount;
	S_memory_heap	memoryHeaps;
};

/*	VkMemoryRequirements:
returnd only*/
struct S_memory_requirements{
//76
/*Specified in bytes*/
	VkDeviceSize	size;
/*Specified in bytes*/
	VkDeviceSize	alignment;
/*Bitmask of the allowed memory type indices into memoryTypes[] for this object*/
	uint32_t	memoryTypeBits;
};

/*	VkSparseImageFormatProperties:
returnd only*/
struct S_sparse_image_format_properties{
//77
	VkImageAspectFlags	aspectMask;
	S_extent_3d	imageGranularity;
	VkSparseImageFormatFlags	flags;
};

/*	VkSparseImageMemoryRequirements:
returnd only*/
struct S_sparse_image_memory_requirements{
//78
	S_sparse_image_format_properties	formatProperties;
	uint32_t	imageMipTailFirstLod;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize	imageMipTailSize;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize	imageMipTailOffset;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize	imageMipTailStride;
};

/*	VkMemoryType:
returnd only*/
struct S_memory_type{
//79
/*Memory properties of this memory type*/
	VkMemoryPropertyFlags	propertyFlags;
/*Index of the memory heap allocations of this memory type are taken from*/
	uint32_t	heapIndex;
};

/*	VkMemoryHeap:
returnd only*/
struct S_memory_heap{
//80
/*Available memory in the heap*/
	VkDeviceSize	size;
/*Flags for the heap*/
	VkMemoryHeapFlags	flags;
};

/*	VkFormatProperties:
returnd only*/
struct S_format_properties{
//81
/*Format features in case of linear tiling*/
	VkFormatFeatureFlags	linearTilingFeatures;
/*Format features in case of optimal tiling*/
	VkFormatFeatureFlags	optimalTilingFeatures;
/*Format features supported by buffers*/
	VkFormatFeatureFlags	bufferFeatures;
};

/*	VkImageFormatProperties:
returnd only*/
struct S_image_format_properties{
//82
/*max image dimensions for this resource type*/
	S_extent_3d	maxExtent;
/*max number of mipmap levels for this resource type*/
	uint32_t	maxMipLevels;
/*max array size for this resource type*/
	uint32_t	maxArrayLayers;
/*supported sample counts for this resource type*/
	VkSampleCountFlags	sampleCounts;
/*max size (in bytes) of this resource type*/
	VkDeviceSize	maxResourceSize;
};

/*	VkDescriptorBufferInfo:*/
struct S_descriptor_buffer_info{
//83
/*Buffer used for this descriptor slot.*/
	VkBuffer	buffer;
/*Base offset from buffer start in bytes to update in the descriptor set.*/
	VkDeviceSize	offset;
/*Size in bytes of the buffer resource for this descriptor update.*/
	VkDeviceSize	range;
};

/*	VkDescriptorImageInfo:*/
struct S_descriptor_image_info{
//84
/*Sampler to write to the descriptor in case it is a SAMPLER or COMBINED_IMAGE_SAMPLER descriptor. Ignored otherwise.*/
	VkSampler	sampler;
/*Image view to write to the descriptor in case it is a SAMPLED_IMAGE, STORAGE_IMAGE, COMBINED_IMAGE_SAMPLER, or INPUT_ATTACHMENT descriptor. Ignored otherwise.*/
	VkImageView	imageView;
/*Layout the image is expected to be in when accessed using this descriptor (only used if imageView is not VK_NULL_HANDLE).*/
	VkImageLayout	imageLayout;
};

/*	VkImageSubresource:*/
struct S_image_subresource{
//85
	VkImageAspectFlags	aspectMask;
	uint32_t	mipLevel;
	uint32_t	arrayLayer;
};

/*	VkImageSubresourceLayers:*/
struct S_image_subresource_layers{
//86
	VkImageAspectFlags	aspectMask;
	uint32_t	mipLevel;
	uint32_t	baseArrayLayer;
	uint32_t	layerCount;
};

/*	VkImageSubresourceRange:*/
struct S_image_subresource_range{
//87
	VkImageAspectFlags	aspectMask;
	uint32_t	baseMipLevel;
	uint32_t	levelCount;
	uint32_t	baseArrayLayer;
	uint32_t	layerCount;
};

/*	VkSubresourceLayout:
returnd only*/
struct S_subresource_layout{
//88
/*Specified in bytes*/
	VkDeviceSize	offset;
/*Specified in bytes*/
	VkDeviceSize	size;
/*Specified in bytes*/
	VkDeviceSize	rowPitch;
/*Specified in bytes*/
	VkDeviceSize	arrayPitch;
/*Specified in bytes*/
	VkDeviceSize	depthPitch;
};

/*	VkBufferCopy:*/
struct S_buffer_copy{
//89
/*Specified in bytes*/
	VkDeviceSize	srcOffset;
/*Specified in bytes*/
	VkDeviceSize	dstOffset;
/*Specified in bytes*/
	VkDeviceSize	size;
};

/*	VkSparseMemoryBind:*/
struct S_sparse_memory_bind{
//90
/*Specified in bytes*/
	VkDeviceSize	resourceOffset;
/*Specified in bytes*/
	VkDeviceSize	size;
	VkDeviceMemory	memory;
/*Specified in bytes*/
	VkDeviceSize	memoryOffset;
	VkSparseMemoryBindFlags	flags;
};

/*	VkSparseImageMemoryBind:*/
struct S_sparse_image_memory_bind{
//91
	S_image_subresource	subresource;
	S_offset_3d	offset;
	S_extent_3d	extent;
	VkDeviceMemory	memory;
/*Specified in bytes*/
	VkDeviceSize	memoryOffset;
	VkSparseMemoryBindFlags	flags;
};

/*	VkSparseBufferMemoryBindInfo:*/
struct S_sparse_buffer_memory_bind_info{
//92
	VkBuffer	buffer;
	uint32_t	bindCount;
/*
len:	bindCount*/
	const	S_sparse_memory_bind*	pBinds;
};

/*	VkSparseImageOpaqueMemoryBindInfo:*/
struct S_sparse_image_opaque_memory_bind_info{
//93
	VkImage	image;
	uint32_t	bindCount;
/*
len:	bindCount*/
	const	S_sparse_memory_bind*	pBinds;
};

/*	VkSparseImageMemoryBindInfo:*/
struct S_sparse_image_memory_bind_info{
//94
	VkImage	image;
	uint32_t	bindCount;
/*
len:	bindCount*/
	const	S_sparse_image_memory_bind*	pBinds;
};

/*	VkImageCopy:*/
struct S_image_copy{
//95
	S_image_subresource_layers	srcSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	srcOffset;
	S_image_subresource_layers	dstSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	dstOffset;
/*Specified in pixels for both compressed and uncompressed images*/
	S_extent_3d	extent;
};

/*	VkImageBlit:*/
struct S_image_blit{
//96
	S_image_subresource_layers	srcSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	srcOffsets;
	S_image_subresource_layers	dstSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	dstOffsets;
};

/*	VkBufferImageCopy:*/
struct S_buffer_image_copy{
//97
/*Specified in bytes*/
	VkDeviceSize	bufferOffset;
/*Specified in texels*/
	uint32_t	bufferRowLength;
	uint32_t	bufferImageHeight;
	S_image_subresource_layers	imageSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	imageOffset;
/*Specified in pixels for both compressed and uncompressed images*/
	S_extent_3d	imageExtent;
};

/*	VkImageResolve:*/
struct S_image_resolve{
//98
	S_image_subresource_layers	srcSubresource;
	S_offset_3d	srcOffset;
	S_image_subresource_layers	dstSubresource;
	S_offset_3d	dstOffset;
	S_extent_3d	extent;
};

/*	VkDescriptorSetLayoutBinding:*/
struct S_descriptor_set_layout_binding{
//99
/*Binding number for this entry*/
	uint32_t	binding;
/*Type of the descriptors in this binding*/
	VkDescriptorType	descriptorType;
/*Number of descriptors in this binding*/
	uint32_t	descriptorCount;
/*Shader stages this binding is visible to*/
	VkShaderStageFlags	stageFlags;
/*Immutable samplers (used if descriptor type is SAMPLER or COMBINED_IMAGE_SAMPLER, is either NULL or contains count number of elements)
len:	descriptorCount*/
	const	VkSampler*	pImmutableSamplers;
};

/*	VkDescriptorPoolSize:*/
struct S_descriptor_pool_size{
//100
	VkDescriptorType	type;
	uint32_t	descriptorCount;
};

/*	VkSpecializationMapEntry:*/
struct S_specialization_map_entry{
//101
/*The SpecConstant ID specified in the BIL*/
	uint32_t	constantID;
/*Offset of the value in the data block*/
	uint32_t	offset;
/*Size in bytes of the SpecConstant*/
	size_t	size;
};

/*	VkSpecializationInfo:*/
struct S_specialization_info{
//102
/*Number of entries in the map*/
	uint32_t	mapEntryCount;
/*Array of map entries
len:	mapEntryCount*/
	const	S_specialization_map_entry*	pMapEntries;
/*Size in bytes of pData*/
	size_t	dataSize;
/*Pointer to SpecConstant data
len:	dataSize*/
	const	void*	pData;
};

/*	VkVertexInputBindingDescription:*/
struct S_vertex_input_binding_description{
//103
/*Vertex buffer binding id*/
	uint32_t	binding;
/*Distance between vertices in bytes (0 = no advancement)*/
	uint32_t	stride;
/*The rate at which the vertex data is consumed*/
	VkVertexInputRate	inputRate;
};

/*	VkVertexInputAttributeDescription:*/
struct S_vertex_input_attribute_description{
//104
/*location of the shader vertex attrib*/
	uint32_t	location;
/*Vertex buffer binding id*/
	uint32_t	binding;
/*format of source data*/
	VkFormat	format;
/*Offset of first element in bytes from base of vertex*/
	uint32_t	offset;
};

/*	VkPipelineColorBlendAttachmentState:*/
struct S_pipeline_color_blend_attachment_state{
//105
	VkBool32	blendEnable;
	VkBlendFactor	srcColorBlendFactor;
	VkBlendFactor	dstColorBlendFactor;
	VkBlendOp	colorBlendOp;
	VkBlendFactor	srcAlphaBlendFactor;
	VkBlendFactor	dstAlphaBlendFactor;
	VkBlendOp	alphaBlendOp;
	VkColorComponentFlags	colorWriteMask;
};

/*	VkStencilOpState:*/
struct S_stencil_op_state{
//106
	VkStencilOp	failOp;
	VkStencilOp	passOp;
	VkStencilOp	depthFailOp;
	VkCompareOp	compareOp;
	uint32_t	compareMask;
	uint32_t	writeMask;
	uint32_t	reference;
};

/*	VkPushConstantRange:*/
struct S_push_constant_range{
//107
/*Which stages use the range*/
	VkShaderStageFlags	stageFlags;
/*Start of the range, in bytes*/
	uint32_t	offset;
/*Size of the range, in bytes*/
	uint32_t	size;
};

/*	VkClearDepthStencilValue:*/
struct S_clear_depth_stencil_value{
//108
	float	depth;
	uint32_t	stencil;
};

/*	VkClearAttachment:*/
struct S_clear_attachment{
//109
	VkImageAspectFlags	aspectMask;
	uint32_t	colorAttachment;
	VkClearValue	clearValue;
};

/*	VkAttachmentDescription:*/
struct S_attachment_description{
//110
	VkAttachmentDescriptionFlags	flags;
	VkFormat	format;
	VkSampleCountFlagBits	samples;
/*Load operation for color or depth data*/
	VkAttachmentLoadOp	loadOp;
/*Store operation for color or depth data*/
	VkAttachmentStoreOp	storeOp;
/*Load operation for stencil data*/
	VkAttachmentLoadOp	stencilLoadOp;
/*Store operation for stencil data*/
	VkAttachmentStoreOp	stencilStoreOp;
	VkImageLayout	initialLayout;
	VkImageLayout	finalLayout;
};

/*	VkAttachmentReference:*/
struct S_attachment_reference{
//111
	uint32_t	attachment;
	VkImageLayout	layout;
};

/*	VkSubpassDescription:*/
struct S_subpass_description{
//112
	VkSubpassDescriptionFlags	flags;
/*Must be VK_PIPELINE_BIND_POINT_GRAPHICS for now*/
	VkPipelineBindPoint	pipelineBindPoint;
	uint32_t	inputAttachmentCount;
/*
len:	inputAttachmentCount*/
	const	S_attachment_reference*	pInputAttachments;
	uint32_t	colorAttachmentCount;
/*
len:	colorAttachmentCount*/
	const	S_attachment_reference*	pColorAttachments;
/*
len:	colorAttachmentCount*/
	const	S_attachment_reference*	pResolveAttachments;
	const	S_attachment_reference*	pDepthStencilAttachment;
	uint32_t	preserveAttachmentCount;
/*
len:	preserveAttachmentCount*/
	const	uint32_t*	pPreserveAttachments;
};

/*	VkSubpassDependency:*/
struct S_subpass_dependency{
//113
	uint32_t	srcSubpass;
	uint32_t	dstSubpass;
	VkPipelineStageFlags	srcStageMask;
	VkPipelineStageFlags	dstStageMask;
/*Memory accesses from the source of the dependency to synchronize*/
	VkAccessFlags	srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	VkAccessFlags	dstAccessMask;
	VkDependencyFlags	dependencyFlags;
};

/*	VkPhysicalDeviceFeatures:*/
struct S_physical_device_features{
//114
/*out of bounds buffer accesses are well defined*/
	VkBool32	robustBufferAccess;
/*full 32-bit range of indices for indexed draw calls*/
	VkBool32	fullDrawIndexUint32;
/*image views which are arrays of cube maps*/
	VkBool32	imageCubeArray;
/*blending operations are controlled per-attachment*/
	VkBool32	independentBlend;
/*geometry stage*/
	VkBool32	geometryShader;
/*tessellation control and evaluation stage*/
	VkBool32	tessellationShader;
/*per-sample shading and interpolation*/
	VkBool32	sampleRateShading;
/*blend operations which take two sources*/
	VkBool32	dualSrcBlend;
/*logic operations*/
	VkBool32	logicOp;
/*multi draw indirect*/
	VkBool32	multiDrawIndirect;
/*indirect draws can use non-zero firstInstance*/
	VkBool32	drawIndirectFirstInstance;
/*depth clamping*/
	VkBool32	depthClamp;
/*depth bias clamping*/
	VkBool32	depthBiasClamp;
/*point and wireframe fill modes*/
	VkBool32	fillModeNonSolid;
/*depth bounds test*/
	VkBool32	depthBounds;
/*lines with width greater than 1*/
	VkBool32	wideLines;
/*points with size greater than 1*/
	VkBool32	largePoints;
/*the fragment alpha component can be forced to maximum representable alpha value*/
	VkBool32	alphaToOne;
/*viewport arrays*/
	VkBool32	multiViewport;
/*anisotropic sampler filtering*/
	VkBool32	samplerAnisotropy;
/*ETC texture compression formats*/
	VkBool32	textureCompressionETC2;
/*ASTC LDR texture compression formats*/
	VkBool32	textureCompressionASTC_LDR;
/*BC1-7 texture compressed formats*/
	VkBool32	textureCompressionBC;
/*precise occlusion queries returning actual sample counts*/
	VkBool32	occlusionQueryPrecise;
/*pipeline statistics query*/
	VkBool32	pipelineStatisticsQuery;
/*stores and atomic ops on storage buffers and images are supported in vertex, tessellation, and geometry stages*/
	VkBool32	vertexPipelineStoresAndAtomics;
/*stores and atomic ops on storage buffers and images are supported in the fragment stage*/
	VkBool32	fragmentStoresAndAtomics;
/*tessellation and geometry stages can export point size*/
	VkBool32	shaderTessellationAndGeometryPointSize;
/*image gather with run-time values and independent offsets*/
	VkBool32	shaderImageGatherExtended;
/*the extended set of formats can be used for storage images*/
	VkBool32	shaderStorageImageExtendedFormats;
/*multisample images can be used for storage images*/
	VkBool32	shaderStorageImageMultisample;
/*read from storage image does not require format qualifier*/
	VkBool32	shaderStorageImageReadWithoutFormat;
/*write to storage image does not require format qualifier*/
	VkBool32	shaderStorageImageWriteWithoutFormat;
/*arrays of uniform buffers can be accessed with dynamically uniform indices*/
	VkBool32	shaderUniformBufferArrayDynamicIndexing;
/*arrays of sampled images can be accessed with dynamically uniform indices*/
	VkBool32	shaderSampledImageArrayDynamicIndexing;
/*arrays of storage buffers can be accessed with dynamically uniform indices*/
	VkBool32	shaderStorageBufferArrayDynamicIndexing;
/*arrays of storage images can be accessed with dynamically uniform indices*/
	VkBool32	shaderStorageImageArrayDynamicIndexing;
/*clip distance in shaders*/
	VkBool32	shaderClipDistance;
/*cull distance in shaders*/
	VkBool32	shaderCullDistance;
/*64-bit floats (doubles) in shaders*/
	VkBool32	shaderFloat64;
/*64-bit integers in shaders*/
	VkBool32	shaderInt64;
/*16-bit integers in shaders*/
	VkBool32	shaderInt16;
/*shader can use texture operations that return resource residency information (requires sparseNonResident support)*/
	VkBool32	shaderResourceResidency;
/*shader can use texture operations that specify minimum resource LOD*/
	VkBool32	shaderResourceMinLod;
/*Sparse resources support: Resource memory can be managed at opaque page level rather than object level*/
	VkBool32	sparseBinding;
/*Sparse resources support: GPU can access partially resident buffers */
	VkBool32	sparseResidencyBuffer;
/*Sparse resources support: GPU can access partially resident 2D (non-MSAA non-depth/stencil) images */
	VkBool32	sparseResidencyImage2D;
/*Sparse resources support: GPU can access partially resident 3D images */
	VkBool32	sparseResidencyImage3D;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 2 samples*/
	VkBool32	sparseResidency2Samples;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 4 samples*/
	VkBool32	sparseResidency4Samples;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 8 samples*/
	VkBool32	sparseResidency8Samples;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 16 samples*/
	VkBool32	sparseResidency16Samples;
/*Sparse resources support: GPU can correctly access data aliased into multiple locations (opt-in)*/
	VkBool32	sparseResidencyAliased;
/*multisample rate must be the same for all pipelines in a subpass*/
	VkBool32	variableMultisampleRate;
/*Queries may be inherited from primary to secondary command buffers*/
	VkBool32	inheritedQueries;
};

/*	VkPhysicalDeviceSparseProperties:
returnd only*/
struct S_physical_device_sparse_properties{
//115
/*Sparse resources support: GPU will access all 2D (single sample) sparse resources using the standard sparse image block shapes (based on pixel format)*/
	VkBool32	residencyStandard2DBlockShape;
/*Sparse resources support: GPU will access all 2D (multisample) sparse resources using the standard sparse image block shapes (based on pixel format)*/
	VkBool32	residencyStandard2DMultisampleBlockShape;
/*Sparse resources support: GPU will access all 3D sparse resources using the standard sparse image block shapes (based on pixel format)*/
	VkBool32	residencyStandard3DBlockShape;
/*Sparse resources support: Images with mip level dimensions that are NOT a multiple of the sparse image block dimensions will be placed in the mip tail*/
	VkBool32	residencyAlignedMipSize;
/*Sparse resources support: GPU can consistently access non-resident regions of a resource, all reads return as if data is 0, writes are discarded*/
	VkBool32	residencyNonResidentStrict;
};

/*	VkPhysicalDeviceLimits:
returnd only*/
struct S_physical_device_limits{
//116
/*max 1D image dimension*/
	uint32_t	maxImageDimension1D;
/*max 2D image dimension*/
	uint32_t	maxImageDimension2D;
/*max 3D image dimension*/
	uint32_t	maxImageDimension3D;
/*max cubemap image dimension*/
	uint32_t	maxImageDimensionCube;
/*max layers for image arrays*/
	uint32_t	maxImageArrayLayers;
/*max texel buffer size (fstexels)*/
	uint32_t	maxTexelBufferElements;
/*max uniform buffer range (bytes)*/
	uint32_t	maxUniformBufferRange;
/*max storage buffer range (bytes)*/
	uint32_t	maxStorageBufferRange;
/*max size of the push constants pool (bytes)*/
	uint32_t	maxPushConstantsSize;
/*max number of device memory allocations supported*/
	uint32_t	maxMemoryAllocationCount;
/*max number of samplers that can be allocated on a device*/
	uint32_t	maxSamplerAllocationCount;
/*Granularity (in bytes) at which buffers and images can be bound to adjacent memory for simultaneous usage*/
	VkDeviceSize	bufferImageGranularity;
/*Total address space available for sparse allocations (bytes)*/
	VkDeviceSize	sparseAddressSpaceSize;
/*max number of descriptors sets that can be bound to a pipeline*/
	uint32_t	maxBoundDescriptorSets;
/*max number of samplers allowed per-stage in a descriptor set*/
	uint32_t	maxPerStageDescriptorSamplers;
/*max number of uniform buffers allowed per-stage in a descriptor set*/
	uint32_t	maxPerStageDescriptorUniformBuffers;
/*max number of storage buffers allowed per-stage in a descriptor set*/
	uint32_t	maxPerStageDescriptorStorageBuffers;
/*max number of sampled images allowed per-stage in a descriptor set*/
	uint32_t	maxPerStageDescriptorSampledImages;
/*max number of storage images allowed per-stage in a descriptor set*/
	uint32_t	maxPerStageDescriptorStorageImages;
/*max number of input attachments allowed per-stage in a descriptor set*/
	uint32_t	maxPerStageDescriptorInputAttachments;
/*max number of resources allowed by a single stage*/
	uint32_t	maxPerStageResources;
/*max number of samplers allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetSamplers;
/*max number of uniform buffers allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetUniformBuffers;
/*max number of dynamic uniform buffers allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetUniformBuffersDynamic;
/*max number of storage buffers allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetStorageBuffers;
/*max number of dynamic storage buffers allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetStorageBuffersDynamic;
/*max number of sampled images allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetSampledImages;
/*max number of storage images allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetStorageImages;
/*max number of input attachments allowed in all stages in a descriptor set*/
	uint32_t	maxDescriptorSetInputAttachments;
/*max number of vertex input attribute slots*/
	uint32_t	maxVertexInputAttributes;
/*max number of vertex input binding slots*/
	uint32_t	maxVertexInputBindings;
/*max vertex input attribute offset added to vertex buffer offset*/
	uint32_t	maxVertexInputAttributeOffset;
/*max vertex input binding stride*/
	uint32_t	maxVertexInputBindingStride;
/*max number of output components written by vertex shader*/
	uint32_t	maxVertexOutputComponents;
/*max level supported by tessellation primitive generator*/
	uint32_t	maxTessellationGenerationLevel;
/*max patch size (vertices)*/
	uint32_t	maxTessellationPatchSize;
/*max number of input components per-vertex in TCS*/
	uint32_t	maxTessellationControlPerVertexInputComponents;
/*max number of output components per-vertex in TCS*/
	uint32_t	maxTessellationControlPerVertexOutputComponents;
/*max number of output components per-patch in TCS*/
	uint32_t	maxTessellationControlPerPatchOutputComponents;
/*max total number of per-vertex and per-patch output components in TCS*/
	uint32_t	maxTessellationControlTotalOutputComponents;
/*max number of input components per vertex in TES*/
	uint32_t	maxTessellationEvaluationInputComponents;
/*max number of output components per vertex in TES*/
	uint32_t	maxTessellationEvaluationOutputComponents;
/*max invocation count supported in geometry shader*/
	uint32_t	maxGeometryShaderInvocations;
/*max number of input components read in geometry stage*/
	uint32_t	maxGeometryInputComponents;
/*max number of output components written in geometry stage*/
	uint32_t	maxGeometryOutputComponents;
/*max number of vertices that can be emitted in geometry stage*/
	uint32_t	maxGeometryOutputVertices;
/*max total number of components (all vertices) written in geometry stage*/
	uint32_t	maxGeometryTotalOutputComponents;
/*max number of input components read in fragment stage*/
	uint32_t	maxFragmentInputComponents;
/*max number of output attachments written in fragment stage*/
	uint32_t	maxFragmentOutputAttachments;
/*max number of output attachments written when using dual source blending*/
	uint32_t	maxFragmentDualSrcAttachments;
/*max total number of storage buffers, storage images and output buffers*/
	uint32_t	maxFragmentCombinedOutputResources;
/*max total storage size of work group local storage (bytes)*/
	uint32_t	maxComputeSharedMemorySize;
/*max num of compute work groups that may be dispatched by a single command (x,y,z)*/
	uint32_t	maxComputeWorkGroupCount;
/*max total compute invocations in a single local work group*/
	uint32_t	maxComputeWorkGroupInvocations;
/*max local size of a compute work group (x,y,z)*/
	uint32_t	maxComputeWorkGroupSize;
/*number bits of subpixel precision in screen x and y*/
	uint32_t	subPixelPrecisionBits;
/*number bits of precision for selecting texel weights*/
	uint32_t	subTexelPrecisionBits;
/*number bits of precision for selecting mipmap weights*/
	uint32_t	mipmapPrecisionBits;
/*max index value for indexed draw calls (for 32-bit indices)*/
	uint32_t	maxDrawIndexedIndexValue;
/*max draw count for indirect draw calls*/
	uint32_t	maxDrawIndirectCount;
/*max absolute sampler LOD bias*/
	float	maxSamplerLodBias;
/*max degree of sampler anisotropy*/
	float	maxSamplerAnisotropy;
/*max number of active viewports*/
	uint32_t	maxViewports;
/*max viewport dimensions (x,y)*/
	uint32_t	maxViewportDimensions;
/*viewport bounds range (min,max)*/
	float	viewportBoundsRange;
/*number bits of subpixel precision for viewport*/
	uint32_t	viewportSubPixelBits;
/*min required alignment of pointers returned by MapMemory (bytes)*/
	size_t	minMemoryMapAlignment;
/*min required alignment for texel buffer offsets (bytes) */
	VkDeviceSize	minTexelBufferOffsetAlignment;
/*min required alignment for uniform buffer sizes and offsets (bytes)*/
	VkDeviceSize	minUniformBufferOffsetAlignment;
/*min required alignment for storage buffer offsets (bytes)*/
	VkDeviceSize	minStorageBufferOffsetAlignment;
/*min texel offset for OpTextureSampleOffset*/
	int32_t	minTexelOffset;
/*max texel offset for OpTextureSampleOffset*/
	uint32_t	maxTexelOffset;
/*min texel offset for OpTextureGatherOffset*/
	int32_t	minTexelGatherOffset;
/*max texel offset for OpTextureGatherOffset*/
	uint32_t	maxTexelGatherOffset;
/*furthest negative offset for interpolateAtOffset*/
	float	minInterpolationOffset;
/*furthest positive offset for interpolateAtOffset*/
	float	maxInterpolationOffset;
/*number of subpixel bits for interpolateAtOffset*/
	uint32_t	subPixelInterpolationOffsetBits;
/*max width for a framebuffer*/
	uint32_t	maxFramebufferWidth;
/*max height for a framebuffer*/
	uint32_t	maxFramebufferHeight;
/*max layer count for a layered framebuffer*/
	uint32_t	maxFramebufferLayers;
/*supported color sample counts for a framebuffer*/
	VkSampleCountFlags	framebufferColorSampleCounts;
/*supported depth sample counts for a framebuffer*/
	VkSampleCountFlags	framebufferDepthSampleCounts;
/*supported stencil sample counts for a framebuffer*/
	VkSampleCountFlags	framebufferStencilSampleCounts;
/*supported sample counts for a framebuffer with no attachments*/
	VkSampleCountFlags	framebufferNoAttachmentsSampleCounts;
/*max number of color attachments per subpass*/
	uint32_t	maxColorAttachments;
/*supported color sample counts for a non-integer sampled image*/
	VkSampleCountFlags	sampledImageColorSampleCounts;
/*supported sample counts for an integer image*/
	VkSampleCountFlags	sampledImageIntegerSampleCounts;
/*supported depth sample counts for a sampled image*/
	VkSampleCountFlags	sampledImageDepthSampleCounts;
/*supported stencil sample counts for a sampled image*/
	VkSampleCountFlags	sampledImageStencilSampleCounts;
/*supported sample counts for a storage image*/
	VkSampleCountFlags	storageImageSampleCounts;
/*max number of sample mask words*/
	uint32_t	maxSampleMaskWords;
/*timestamps on graphics and compute queues*/
	VkBool32	timestampComputeAndGraphics;
/*number of nanoseconds it takes for timestamp query value to increment by 1*/
	float	timestampPeriod;
/*max number of clip distances*/
	uint32_t	maxClipDistances;
/*max number of cull distances*/
	uint32_t	maxCullDistances;
/*max combined number of user clipping*/
	uint32_t	maxCombinedClipAndCullDistances;
/*distinct queue priorities available */
	uint32_t	discreteQueuePriorities;
/*range (min,max) of supported point sizes*/
	float	pointSizeRange;
/*range (min,max) of supported line widths*/
	float	lineWidthRange;
/*granularity of supported point sizes*/
	float	pointSizeGranularity;
/*granularity of supported line widths*/
	float	lineWidthGranularity;
/*line rasterization follows preferred rules*/
	VkBool32	strictLines;
/*supports standard sample locations for all supported sample counts*/
	VkBool32	standardSampleLocations;
/*optimal offset of buffer copies*/
	VkDeviceSize	optimalBufferCopyOffsetAlignment;
/*optimal pitch of buffer copies*/
	VkDeviceSize	optimalBufferCopyRowPitchAlignment;
/*minimum size and alignment for non-coherent host-mapped device memory access*/
	VkDeviceSize	nonCoherentAtomSize;
};

/*	VkDrawIndirectCommand:*/
struct S_draw_indirect_command{
//117
	uint32_t	vertexCount;
	uint32_t	instanceCount;
	uint32_t	firstVertex;
	uint32_t	firstInstance;
};

/*	VkDrawIndexedIndirectCommand:*/
struct S_draw_indexed_indirect_command{
//118
	uint32_t	indexCount;
	uint32_t	instanceCount;
	uint32_t	firstIndex;
	int32_t	vertexOffset;
	uint32_t	firstInstance;
};

/*	VkDispatchIndirectCommand:*/
struct S_dispatch_indirect_command{
//119
	uint32_t	x;
	uint32_t	y;
	uint32_t	z;
};

/*	VkDisplayPropertiesKHR:
returnd only*/
struct S_display_properties_KHR{
//120
/*Handle of the display object*/
	VkDisplayKHR	display;
/*Name of the display
len:	null-terminated*/
	const	char*	displayName;
/*In millimeters?*/
	S_extent_2d	physicalDimensions;
/*Max resolution for CRT?*/
	S_extent_2d	physicalResolution;
/*one or more bits from VkSurfaceTransformFlagsKHR*/
	VkSurfaceTransformFlagsKHR	supportedTransforms;
/*VK_TRUE if the overlay plane's z-order can be changed on this display.*/
	VkBool32	planeReorderPossible;
/*VK_TRUE if this is a "smart" display that supports self-refresh/internal buffering.*/
	VkBool32	persistentContent;
};

/*	VkDisplayPlanePropertiesKHR:
returnd only*/
struct S_display_plane_properties_KHR{
//121
/*Display the plane is currently associated with.  Will be VK_NULL_HANDLE if the plane is not in use.*/
	VkDisplayKHR	currentDisplay;
/*Current z-order of the plane.*/
	uint32_t	currentStackIndex;
};

/*	VkDisplayModeParametersKHR:*/
struct S_display_mode_parameters_KHR{
//122
/*Visible scanout region.*/
	S_extent_2d	visibleRegion;
/*Number of times per second the display is updated.*/
	uint32_t	refreshRate;
};

/*	VkDisplayModePropertiesKHR:
returnd only*/
struct S_display_mode_properties_KHR{
//123
/*Handle of this display mode.*/
	VkDisplayModeKHR	displayMode;
/*The parameters this mode uses.*/
	S_display_mode_parameters_KHR	parameters;
};

/*	VkDisplayPlaneCapabilitiesKHR:
returnd only*/
struct S_display_plane_capabilities_KHR{
//124
/*Types of alpha blending supported, if any.*/
	VkDisplayPlaneAlphaFlagsKHR	supportedAlpha;
/*Does the plane have any position and extent restrictions?*/
	S_offset_2d	minSrcPosition;
	S_offset_2d	maxSrcPosition;
	S_extent_2d	minSrcExtent;
	S_extent_2d	maxSrcExtent;
	S_offset_2d	minDstPosition;
	S_offset_2d	maxDstPosition;
	S_extent_2d	minDstExtent;
	S_extent_2d	maxDstExtent;
};

/*	VkSurfaceCapabilitiesKHR:
returnd only*/
struct S_surface_capabilities_KHR{
//125
/*Supported minimum number of images for the surface*/
	uint32_t	minImageCount;
/*Supported maximum number of images for the surface, 0 for unlimited*/
	uint32_t	maxImageCount;
/*Current image width and height for the surface, (0, 0) if undefined*/
	S_extent_2d	currentExtent;
/*Supported minimum image width and height for the surface*/
	S_extent_2d	minImageExtent;
/*Supported maximum image width and height for the surface*/
	S_extent_2d	maxImageExtent;
/*Supported maximum number of image layers for the surface*/
	uint32_t	maxImageArrayLayers;
/*1 or more bits representing the transforms supported*/
	VkSurfaceTransformFlagsKHR	supportedTransforms;
/*The surface's current transform relative to the device's natural orientation*/
	VkSurfaceTransformFlagBitsKHR	currentTransform;
/*1 or more bits representing the alpha compositing modes supported*/
	VkCompositeAlphaFlagsKHR	supportedCompositeAlpha;
/*Supported image usage flags for the surface*/
	VkImageUsageFlags	supportedUsageFlags;
};

/*	VkSurfaceFormatKHR:
returnd only*/
struct S_surface_format_KHR{
//126
/*Supported pair of rendering format*/
	VkFormat	format;
/*and color space for the surface*/
	VkColorSpaceKHR	colorSpace;
};

/*	VkExternalImageFormatPropertiesNV:
returnd only*/
struct S_external_image_format_properties_NV{
//127
	S_image_format_properties	imageFormatProperties;
	VkExternalMemoryFeatureFlagsNV	externalMemoryFeatures;
	VkExternalMemoryHandleTypeFlagsNV	exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlagsNV	compatibleHandleTypes;
};

/*	VkIndirectCommandsTokenNVX:*/
struct S_indirect_commands_token_NVX{
//128
	VkIndirectCommandsTokenTypeNVX	tokenType;
/*buffer containing tableEntries and additional data for indirectCommands*/
	VkBuffer	buffer;
/*offset from the base address of the buffer*/
	VkDeviceSize	offset;
};

/*	VkIndirectCommandsLayoutTokenNVX:*/
struct S_indirect_commands_layout_token_NVX{
//129
	VkIndirectCommandsTokenTypeNVX	tokenType;
/*Binding unit for vertex attribute / descriptor set, offset for pushconstants*/
	uint32_t	bindingUnit;
/*Number of variable dynamic values for descriptor set / push constants*/
	uint32_t	dynamicCount;
/*Rate the which the array is advanced per element (must be power of 2, minimum 1)*/
	uint32_t	divisor;
};

/*	VkObjectTableEntryNVX:*/
struct S_object_table_entry_NVX{
//130
	VkObjectEntryTypeNVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
};

/*	VkObjectTablePipelineEntryNVX:*/
struct S_object_table_pipeline_entry_NVX{
//131
	VkObjectEntryTypeNVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkPipeline	pipeline;
};

/*	VkObjectTableDescriptorSetEntryNVX:*/
struct S_object_table_descriptor_set_entry_NVX{
//132
	VkObjectEntryTypeNVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkPipelineLayout	pipelineLayout;
	VkDescriptorSet	descriptorSet;
};

/*	VkObjectTableVertexBufferEntryNVX:*/
struct S_object_table_vertex_buffer_entry_NVX{
//133
	VkObjectEntryTypeNVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkBuffer	buffer;
};

/*	VkObjectTableIndexBufferEntryNVX:*/
struct S_object_table_index_buffer_entry_NVX{
//134
	VkObjectEntryTypeNVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkBuffer	buffer;
	VkIndexType	indexType;
};

/*	VkObjectTablePushConstantEntryNVX:*/
struct S_object_table_push_constant_entry_NVX{
//135
	VkObjectEntryTypeNVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkPipelineLayout	pipelineLayout;
	VkShaderStageFlags	stageFlags;
};

/*	VkConformanceVersionKHR:*/
struct S_conformance_version_KHR{
//136
	uint8_t	major;
	uint8_t	minor;
	uint8_t	subminor;
	uint8_t	patch;
};

/*	VkPresentRegionKHR:*/
struct S_present_region_KHR{
//137
/*Number of rectangles in pRectangles*/
	uint32_t	rectangleCount;
/*Array of rectangles that have changed in a swapchain's image(s)
len:	rectangleCount*/
	const	S_rect_layer_KHR*	pRectangles;
};

/*	VkRectLayerKHR:*/
struct S_rect_layer_KHR{
//138
/*upper-left corner of a rectangle that has not changed, in pixels of a presentation images*/
	S_offset_2d	offset;
/*Dimensions of a rectangle that has not changed, in pixels of a presentation images*/
	S_extent_2d	extent;
/*Layer of a swapchain's image(s), for stereoscopic-3D images*/
	uint32_t	layer;
};

/*	VkExternalMemoryProperties:
returnd only*/
struct S_external_memory_properties{
//139
	VkExternalMemoryFeatureFlags	externalMemoryFeatures;
	VkExternalMemoryHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlags	compatibleHandleTypes;
};

/*	VkDescriptorUpdateTemplateEntry:*/
struct S_descriptor_update_template_entry{
//140
/*Binding within the destination descriptor set to write*/
	uint32_t	dstBinding;
/*Array element within the destination binding to write*/
	uint32_t	dstArrayElement;
/*Number of descriptors to write*/
	uint32_t	descriptorCount;
/*Descriptor type to write*/
	VkDescriptorType	descriptorType;
/*Offset into pData where the descriptors to update are stored*/
	size_t	offset;
/*Stride between two descriptors in pData when writing more than one descriptor*/
	size_t	stride;
};

/*	VkXYColorEXT:Chromaticity coordinate*/
struct S_xy_color_EXT{
//141
	float	x;
	float	y;
};

/*	VkRefreshCycleDurationGOOGLE:
returnd only*/
struct S_refresh_cycle_duration_GOOGLE{
//142
/*Number of nanoseconds from the start of one refresh cycle to the next*/
	uint64_t	refreshDuration;
};

/*	VkPastPresentationTimingGOOGLE:
returnd only*/
struct S_past_presentation_timing_GOOGLE{
//143
/*Application-provided identifier, previously given to vkQueuePresentKHR*/
	uint32_t	presentID;
/*Earliest time an image should have been presented, previously given to vkQueuePresentKHR*/
	uint64_t	desiredPresentTime;
/*Time the image was actually displayed*/
	uint64_t	actualPresentTime;
/*Earliest time the image could have been displayed*/
	uint64_t	earliestPresentTime;
/*How early vkQueuePresentKHR was processed vs. how soon it needed to be and make earliestPresentTime*/
	uint64_t	presentMargin;
};

/*	VkPresentTimeGOOGLE:*/
struct S_present_time_GOOGLE{
//144
/*Application-provided identifier*/
	uint32_t	presentID;
/*Earliest time an image should be presented*/
	uint64_t	desiredPresentTime;
};

/*	VkViewportWScalingNV:*/
struct S_viewport_w_scaling_NV{
//145
	float	xcoeff;
	float	ycoeff;
};

/*	VkViewportSwizzleNV:*/
struct S_viewport_swizzle_NV{
//146
	VkViewportCoordinateSwizzleNV	x;
	VkViewportCoordinateSwizzleNV	y;
	VkViewportCoordinateSwizzleNV	z;
	VkViewportCoordinateSwizzleNV	w;
};

/*	VkInputAttachmentAspectReference:*/
struct S_input_attachment_aspect_reference{
//147
	uint32_t	subpass;
	uint32_t	inputAttachmentIndex;
	VkImageAspectFlags	aspectMask;
};

/*	VkSampleLocationEXT:*/
struct S_sample_location_EXT{
//148
	float	x;
	float	y;
};

/*	VkAttachmentSampleLocationsEXT:*/
struct S_attachment_sample_locations_EXT{
//149
	uint32_t	attachmentIndex;
	S_sample_locations_info_EXT	sampleLocationsInfo;
};

/*	VkSubpassSampleLocationsEXT:*/
struct S_subpass_sample_locations_EXT{
//150
	uint32_t	subpassIndex;
	S_sample_locations_info_EXT	sampleLocationsInfo;
};

/*	VkShaderResourceUsageAMD:
returnd only*/
struct S_shader_resource_usage_AMD{
//151
	uint32_t	numUsedVgprs;
	uint32_t	numUsedSgprs;
	uint32_t	ldsSizePerLocalWorkGroup;
	size_t	ldsUsageSizeInBytes;
	size_t	scratchMemUsageInBytes;
};

/*	VkShaderStatisticsInfoAMD:
returnd only*/
struct S_shader_statistics_info_AMD{
//152
	VkShaderStageFlags	shaderStageMask;
	S_shader_resource_usage_AMD	resourceUsage;
	uint32_t	numPhysicalVgprs;
	uint32_t	numPhysicalSgprs;
	uint32_t	numAvailableVgprs;
	uint32_t	numAvailableSgprs;
	uint32_t	computeWorkGroupSize;
};

/*	VkVertexInputBindingDivisorDescriptionEXT:*/
struct S_vertex_input_binding_divisor_description_EXT{
//153
	uint32_t	binding;
	uint32_t	divisor;
};

/*	VkShadingRatePaletteNV:*/
struct S_shading_rate_palette_NV{
//154
	uint32_t	shadingRatePaletteEntryCount;
/*
len:	shadingRatePaletteEntryCount*/
	const	VkShadingRatePaletteEntryNV*	pShadingRatePaletteEntries;
};

/*	VkCoarseSampleLocationNV:*/
struct S_coarse_sample_location_NV{
//155
	uint32_t	pixelX;
	uint32_t	pixelY;
	uint32_t	sample;
};

/*	VkCoarseSampleOrderCustomNV:*/
struct S_coarse_sample_order_custom_NV{
//156
	VkShadingRatePaletteEntryNV	shadingRate;
	uint32_t	sampleCount;
	uint32_t	sampleLocationCount;
/*
len:	sampleLocationCount*/
	const	S_coarse_sample_location_NV*	pSampleLocations;
};

/*	VkDrawMeshTasksIndirectCommandNV:*/
struct S_draw_mesh_tasks_indirect_command_NV{
//157
	uint32_t	taskCount;
	uint32_t	firstTask;
};

/*	VkGeometryDataNVX:*/
struct S_geometry_data_NVX{
//158
	S_geometry_triangles_NVX	triangles;
	S_geometry_aabb_NVX	aabbs;
};

/*	VkDrmFormatModifierPropertiesEXT:
returnd only*/
struct S_drm_format_modifier_properties_EXT{
//159
	uint64_t	drmFormatModifier;
	uint32_t	drmFormatModifierPlaneCount;
	VkFormatFeatureFlags	drmFormatModifierTilingFeatures;
};

/*	VkBaseOutStructure:*/
struct S_base_out_structure{
//160
	VkStructureType	sType;
	struct	S_base_out_structure*	pNext;
};

/*	VkBaseInStructure:*/
struct S_base_in_structure{
//161
	VkStructureType	sType;
	const	struct	S_base_in_structure*	pNext;
};

/*	VkApplicationInfo:*/
struct S_application_info{
//162
	VkStructureType	sType;
	const	void*	pNext;
/*
len:	null-terminated*/
	const	char*	pApplicationName;
	uint32_t	applicationVersion;
/*
len:	null-terminated*/
	const	char*	pEngineName;
	uint32_t	engineVersion;
	uint32_t	apiVersion;
};

/*	VkMappedMemoryRange:*/
struct S_mapped_memory_range{
//163
	VkStructureType	sType;
	const	void*	pNext;
/*Mapped memory object*/
	VkDeviceMemory	memory;
/*Offset within the memory object where the range starts*/
	VkDeviceSize	offset;
/*Size of the range within the memory object*/
	VkDeviceSize	size;
};

/*	VkCopyDescriptorSet:*/
struct S_copy_descriptor_set{
//164
	VkStructureType	sType;
	const	void*	pNext;
/*Source descriptor set*/
	VkDescriptorSet	srcSet;
/*Binding within the source descriptor set to copy from*/
	uint32_t	srcBinding;
/*Array element within the source binding to copy from*/
	uint32_t	srcArrayElement;
/*Destination descriptor set*/
	VkDescriptorSet	dstSet;
/*Binding within the destination descriptor set to copy to*/
	uint32_t	dstBinding;
/*Array element within the destination binding to copy to*/
	uint32_t	dstArrayElement;
/*Number of descriptors to write (determines the size of the array pointed by pDescriptors)*/
	uint32_t	descriptorCount;
};

/*	VkBufferViewCreateInfo:*/
struct S_buffer_view_create_info{
//165
	VkStructureType	sType;
	const	void*	pNext;
	VkBufferViewCreateFlags	flags;
	VkBuffer	buffer;
/*Optionally specifies format of elements*/
	VkFormat	format;
/*Specified in bytes*/
	VkDeviceSize	offset;
/*View size specified in bytes*/
	VkDeviceSize	range;
};

/*	VkMemoryBarrier:*/
struct S_memory_barrier{
//166
	VkStructureType	sType;
	const	void*	pNext;
/*Memory accesses from the source of the dependency to synchronize*/
	VkAccessFlags	srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	VkAccessFlags	dstAccessMask;
};

/*	VkBufferMemoryBarrier:*/
struct S_buffer_memory_barrier{
//167
	VkStructureType	sType;
	const	void*	pNext;
/*Memory accesses from the source of the dependency to synchronize*/
	VkAccessFlags	srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	VkAccessFlags	dstAccessMask;
/*Queue family to transition ownership from*/
	uint32_t	srcQueueFamilyIndex;
/*Queue family to transition ownership to*/
	uint32_t	dstQueueFamilyIndex;
/*Buffer to sync*/
	VkBuffer	buffer;
/*Offset within the buffer to sync*/
	VkDeviceSize	offset;
/*Amount of bytes to sync*/
	VkDeviceSize	size;
};

/*	VkPipelineShaderStageCreateInfo:*/
struct S_pipeline_shader_stage_create_info{
//168
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineShaderStageCreateFlags	flags;
/*Shader stage*/
	VkShaderStageFlagBits	stage;
/*Module containing entry point*/
	VkShaderModule	module;
/*Null-terminated entry point name
len:	null-terminated*/
	const	char*	pName;
	const	S_specialization_info*	pSpecializationInfo;
};

/*	VkComputePipelineCreateInfo:*/
struct S_compute_pipeline_create_info{
//169
	VkStructureType	sType;
	const	void*	pNext;
/*Pipeline creation flags*/
	VkPipelineCreateFlags	flags;
	S_pipeline_shader_stage_create_info	stage;
/*Interface layout of the pipeline*/
	VkPipelineLayout	layout;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline	basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t	basePipelineIndex;
};

/*	VkPipelineInputAssemblyStateCreateInfo:*/
struct S_pipeline_input_assembly_state_create_info{
//170
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineInputAssemblyStateCreateFlags	flags;
	VkPrimitiveTopology	topology;
	VkBool32	primitiveRestartEnable;
};

/*	VkPipelineDynamicStateCreateInfo:*/
struct S_pipeline_dynamic_state_create_info{
//171
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineDynamicStateCreateFlags	flags;
	uint32_t	dynamicStateCount;
/*
len:	dynamicStateCount*/
	const	VkDynamicState*	pDynamicStates;
};

/*	VkPipelineDepthStencilStateCreateInfo:*/
struct S_pipeline_depth_stencil_state_create_info{
//172
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineDepthStencilStateCreateFlags	flags;
	VkBool32	depthTestEnable;
	VkBool32	depthWriteEnable;
	VkCompareOp	depthCompareOp;
/*optional (depth_bounds_test)*/
	VkBool32	depthBoundsTestEnable;
	VkBool32	stencilTestEnable;
	S_stencil_op_state	front;
	S_stencil_op_state	back;
	float	minDepthBounds;
	float	maxDepthBounds;
};

/*	VkPipelineCacheCreateInfo:*/
struct S_pipeline_cache_create_info{
//173
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineCacheCreateFlags	flags;
/*Size of initial data to populate cache, in bytes*/
	size_t	initialDataSize;
/*Initial data to populate cache
len:	initialDataSize*/
	const	void*	pInitialData;
};

/*	VkPipelineLayoutCreateInfo:*/
struct S_pipeline_layout_create_info{
//174
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineLayoutCreateFlags	flags;
/*Number of descriptor sets interfaced by the pipeline*/
	uint32_t	setLayoutCount;
/*Array of setCount number of descriptor set layout objects defining the layout of the
len:	setLayoutCount*/
	const	VkDescriptorSetLayout*	pSetLayouts;
/*Number of push-constant ranges used by the pipeline*/
	uint32_t	pushConstantRangeCount;
/*Array of pushConstantRangeCount number of ranges used by various shader stages
len:	pushConstantRangeCount*/
	const	S_push_constant_range*	pPushConstantRanges;
};

/*	VkCommandPoolCreateInfo:*/
struct S_command_pool_create_info{
//175
	VkStructureType	sType;
	const	void*	pNext;
/*Command pool creation flags*/
	VkCommandPoolCreateFlags	flags;
	uint32_t	queueFamilyIndex;
};

/*	VkCommandBufferAllocateInfo:*/
struct S_command_buffer_allocate_info{
//176
	VkStructureType	sType;
	const	void*	pNext;
	VkCommandPool	commandPool;
	VkCommandBufferLevel	level;
	uint32_t	commandBufferCount;
};

/*	VkEventCreateInfo:*/
struct S_event_create_info{
//177
	VkStructureType	sType;
	const	void*	pNext;
/*Event creation flags*/
	VkEventCreateFlags	flags;
};

/*	VkQueryPoolCreateInfo:*/
struct S_query_pool_create_info{
//178
	VkStructureType	sType;
	const	void*	pNext;
	VkQueryPoolCreateFlags	flags;
	VkQueryType	queryType;
	uint32_t	queryCount;
/*Optional*/
	VkQueryPipelineStatisticFlags	pipelineStatistics;
};

/*	VkFramebufferCreateInfo:*/
struct S_framebuffer_create_info{
//179
	VkStructureType	sType;
	const	void*	pNext;
	VkFramebufferCreateFlags	flags;
	VkRenderPass	renderPass;
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	VkImageView*	pAttachments;
	uint32_t	width;
	uint32_t	height;
	uint32_t	layers;
};

/*	VkDisplayModeCreateInfoKHR:*/
struct S_display_mode_create_info_KHR{
//180
	VkStructureType	sType;
	const	void*	pNext;
	VkDisplayModeCreateFlagsKHR	flags;
/*The parameters this mode uses.*/
	S_display_mode_parameters_KHR	parameters;
};

/*	VkDisplaySurfaceCreateInfoKHR:*/
struct S_display_surface_create_info_KHR{
//181
	VkStructureType	sType;
	const	void*	pNext;
	VkDisplaySurfaceCreateFlagsKHR	flags;
/*The mode to use when displaying this surface*/
	VkDisplayModeKHR	displayMode;
/*The plane on which this surface appears.  Must be between 0 and the value returned by vkGetPhysicalDeviceDisplayPlanePropertiesKHR() in pPropertyCount.*/
	uint32_t	planeIndex;
/*The z-order of the plane.*/
	uint32_t	planeStackIndex;
/*Transform to apply to the images as part of the scanout operation*/
	VkSurfaceTransformFlagBitsKHR	transform;
/*Global alpha value.  Must be between 0 and 1, inclusive.  Ignored if alphaMode is not VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR*/
	float	globalAlpha;
/*What type of alpha blending to use.  Must be a bit from vkGetDisplayPlanePropertiesKHR::supportedAlpha.*/
	VkDisplayPlaneAlphaFlagBitsKHR	alphaMode;
/*size of the images to use with this surface*/
	S_extent_2d	imageExtent;
};

/*	VkDisplayPresentInfoKHR:
extends to:	VkPresentInfoKHR*/
struct S_display_present_info_KHR{
//182
	VkStructureType	sType;
	const	void*	pNext;
/*Rectangle within the presentable image to read pixel data from when presenting to the display.*/
	S_rect_2d	srcRect;
/*Rectangle within the current display mode's visible region to display srcRectangle in.*/
	S_rect_2d	dstRect;
/*For smart displays, use buffered mode.  If the display properties member "persistentMode" is VK_FALSE, this member must always be VK_FALSE.*/
	VkBool32	persistent;
};

/*	VkAndroidSurfaceCreateInfoKHR:*/
struct S_android_surface_create_info_KHR{
//183
	VkStructureType	sType;
	const	void*	pNext;
	VkAndroidSurfaceCreateFlagsKHR	flags;
	struct	ANativeWindow*	window;
};

/*	VkMirSurfaceCreateInfoKHR:*/
struct S_mir_surface_create_info_KHR{
//184
	VkStructureType	sType;
	const	void*	pNext;
	VkMirSurfaceCreateFlagsKHR	flags;
	MirConnection*	connection;
	MirSurface*	mirSurface;
};

/*	VkViSurfaceCreateInfoNN:*/
struct S_vi_surface_create_info_NN{
//185
	VkStructureType	sType;
	const	void*	pNext;
	VkViSurfaceCreateFlagsNN	flags;
	void*	window;
};

/*	VkWaylandSurfaceCreateInfoKHR:*/
struct S_wayland_surface_create_info_KHR{
//186
	VkStructureType	sType;
	const	void*	pNext;
	VkWaylandSurfaceCreateFlagsKHR	flags;
	struct	wl_display*	display;
	struct	wl_surface*	surface;
};

/*	VkWin32SurfaceCreateInfoKHR:*/
struct S_win32_surface_create_info_KHR{
//187
	VkStructureType	sType;
	const	void*	pNext;
	VkWin32SurfaceCreateFlagsKHR	flags;
	HINSTANCE	hinstance;
	HWND	hwnd;
};

/*	VkXlibSurfaceCreateInfoKHR:*/
struct S_xlib_surface_create_info_KHR{
//188
	VkStructureType	sType;
	const	void*	pNext;
	VkXlibSurfaceCreateFlagsKHR	flags;
	Display*	dpy;
	Window	window;
};

/*	VkXcbSurfaceCreateInfoKHR:*/
struct S_xcb_surface_create_info_KHR{
//189
	VkStructureType	sType;
	const	void*	pNext;
	VkXcbSurfaceCreateFlagsKHR	flags;
	xcb_connection_t*	connection;
	xcb_window_t	window;
};

/*	VkDebugReportCallbackCreateInfoEXT:
extends to:	VkInstanceCreateInfo*/
struct S_debug_report_callback_create_info_EXT{
//190
	VkStructureType	sType;
	const	void*	pNext;
/*Indicates which events call this callback*/
	VkDebugReportFlagsEXT	flags;
/*Function pointer of a callback function*/
	PFN_vkDebugReportCallbackEXT	pfnCallback;
/*User data provided to callback function*/
	void*	pUserData;
};

/*	VkValidationFlagsEXT:
extends to:	VkInstanceCreateInfo*/
struct S_validation_flags_EXT{
//191
/*Must be VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT*/
	VkStructureType	sType;
	const	void*	pNext;
/*Number of validation checks to disable*/
	uint32_t	disabledValidationCheckCount;
/*Validation checks to disable
len:	disabledValidationCheckCount*/
	const	VkValidationCheckEXT*	pDisabledValidationChecks;
};

/*	VkPipelineRasterizationStateRasterizationOrderAMD:
extends to:	VkPipelineRasterizationStateCreateInfo*/
struct S_pipeline_rasterization_state_rasterization_order_AMD{
//192
	VkStructureType	sType;
	const	void*	pNext;
/*Rasterization order to use for the pipeline*/
	VkRasterizationOrderAMD	rasterizationOrder;
};

/*	VkDebugMarkerObjectNameInfoEXT:*/
struct S_debug_marker_object_name_info_EXT{
//193
	VkStructureType	sType;
	const	void*	pNext;
/*The type of the object*/
	VkDebugReportObjectTypeEXT	objectType;
/*The handle of the object, cast to uint64_t*/
	uint64_t	object;
/*Name to apply to the object
len:	null-terminated*/
	const	char*	pObjectName;
};

/*	VkDebugMarkerObjectTagInfoEXT:*/
struct S_debug_marker_object_tag_info_EXT{
//194
	VkStructureType	sType;
	const	void*	pNext;
/*The type of the object*/
	VkDebugReportObjectTypeEXT	objectType;
/*The handle of the object, cast to uint64_t*/
	uint64_t	object;
/*The name of the tag to set on the object*/
	uint64_t	tagName;
/*The length in bytes of the tag data*/
	size_t	tagSize;
/*Tag data to attach to the object
len:	tagSize*/
	const	void*	pTag;
};

/*	VkDebugMarkerMarkerInfoEXT:*/
struct S_debug_marker_marker_info_EXT{
//195
	VkStructureType	sType;
	const	void*	pNext;
/*Name of the debug marker
len:	null-terminated*/
	const	char*	pMarkerName;
/*Optional color for debug marker*/
	float	color;
};

/*	VkDedicatedAllocationImageCreateInfoNV:
extends to:	VkImageCreateInfo*/
struct S_dedicated_allocation_image_create_info_NV{
//196
	VkStructureType	sType;
	const	void*	pNext;
/*Whether this image uses a dedicated allocation*/
	VkBool32	dedicatedAllocation;
};

/*	VkDedicatedAllocationBufferCreateInfoNV:
extends to:	VkBufferCreateInfo*/
struct S_dedicated_allocation_buffer_create_info_NV{
//197
	VkStructureType	sType;
	const	void*	pNext;
/*Whether this buffer uses a dedicated allocation*/
	VkBool32	dedicatedAllocation;
};

/*	VkDedicatedAllocationMemoryAllocateInfoNV:
extends to:	VkMemoryAllocateInfo*/
struct S_dedicated_allocation_memory_allocate_info_NV{
//198
	VkStructureType	sType;
	const	void*	pNext;
/*Image that this allocation will be bound to*/
	VkImage	image;
/*Buffer that this allocation will be bound to*/
	VkBuffer	buffer;
};

/*	VkExternalMemoryImageCreateInfoNV:
extends to:	VkImageCreateInfo*/
struct S_external_memory_image_create_info_NV{
//199
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlagsNV	handleTypes;
};

/*	VkExportMemoryAllocateInfoNV:
extends to:	VkMemoryAllocateInfo*/
struct S_export_memory_allocate_info_NV{
//200
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlagsNV	handleTypes;
};

/*	VkImportMemoryWin32HandleInfoNV:
extends to:	VkMemoryAllocateInfo*/
struct S_import_memory_win32_handle_info_NV{
//201
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlagsNV	handleType;
	HANDLE	handle;
};

/*	VkExportMemoryWin32HandleInfoNV:
extends to:	VkMemoryAllocateInfo*/
struct S_export_memory_win32_handle_info_NV{
//202
	VkStructureType	sType;
	const	void*	pNext;
	const	SECURITY_ATTRIBUTES*	pAttributes;
	DWORD	dwAccess;
};

/*	VkWin32KeyedMutexAcquireReleaseInfoNV:
extends to:	VkSubmitInfo*/
struct S_win32_keyed_mutex_acquire_release_info_NV{
//203
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	acquireCount;
/*
len:	acquireCount*/
	const	VkDeviceMemory*	pAcquireSyncs;
/*
len:	acquireCount*/
	const	uint64_t*	pAcquireKeys;
/*
len:	acquireCount*/
	const	uint32_t*	pAcquireTimeoutMilliseconds;
	uint32_t	releaseCount;
/*
len:	releaseCount*/
	const	VkDeviceMemory*	pReleaseSyncs;
/*
len:	releaseCount*/
	const	uint64_t*	pReleaseKeys;
};

/*	VkDeviceGeneratedCommandsFeaturesNVX:*/
struct S_device_generated_commands_features_NVX{
//204
	VkStructureType	sType;
	const	void*	pNext;
	VkBool32	computeBindingPointSupport;
};

/*	VkDeviceGeneratedCommandsLimitsNVX:*/
struct S_device_generated_commands_limits_NVX{
//205
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	maxIndirectCommandsLayoutTokenCount;
	uint32_t	maxObjectEntryCounts;
	uint32_t	minSequenceCountBufferOffsetAlignment;
	uint32_t	minSequenceIndexBufferOffsetAlignment;
	uint32_t	minCommandsTokenBufferOffsetAlignment;
};

/*	VkIndirectCommandsLayoutCreateInfoNVX:*/
struct S_indirect_commands_layout_create_info_NVX{
//206
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineBindPoint	pipelineBindPoint;
	VkIndirectCommandsLayoutUsageFlagsNVX	flags;
	uint32_t	tokenCount;
/*
len:	tokenCount*/
	const	S_indirect_commands_layout_token_NVX*	pTokens;
};

/*	VkCmdProcessCommandsInfoNVX:*/
struct S_cmd_process_commands_info_NVX{
//207
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkObjectTableNVX	objectTable;
	VkIndirectCommandsLayoutNVX	indirectCommandsLayout;
	uint32_t	indirectCommandsTokenCount;
/*
len:	indirectCommandsTokenCount*/
	const	S_indirect_commands_token_NVX*	pIndirectCommandsTokens;
	uint32_t	maxSequencesCount;
/*
(externsync)*/
	VkCommandBuffer	targetCommandBuffer;
	VkBuffer	sequencesCountBuffer;
	VkDeviceSize	sequencesCountOffset;
	VkBuffer	sequencesIndexBuffer;
	VkDeviceSize	sequencesIndexOffset;
};

/*	VkCmdReserveSpaceForCommandsInfoNVX:*/
struct S_cmd_reserve_space_for_commands_info_NVX{
//208
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkObjectTableNVX	objectTable;
	VkIndirectCommandsLayoutNVX	indirectCommandsLayout;
	uint32_t	maxSequencesCount;
};

/*	VkObjectTableCreateInfoNVX:*/
struct S_object_table_create_info_NVX{
//209
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	objectCount;
/*
len:	objectCount*/
	const	VkObjectEntryTypeNVX*	pObjectEntryTypes;
/*
len:	objectCount*/
	const	uint32_t*	pObjectEntryCounts;
/*
len:	objectCount*/
	const	VkObjectEntryUsageFlagsNVX*	pObjectEntryUsageFlags;
	uint32_t	maxUniformBuffersPerDescriptor;
	uint32_t	maxStorageBuffersPerDescriptor;
	uint32_t	maxStorageImagesPerDescriptor;
	uint32_t	maxSampledImagesPerDescriptor;
	uint32_t	maxPipelineLayouts;
};

/*	VkPhysicalDeviceMemoryProperties2:
returnd only*/
struct S_physical_device_memory_properties2{
//210
	VkStructureType	sType;
	void*	pNext;
	S_physical_device_memory_properties	memoryProperties;
};

/*	VkSparseImageFormatProperties2:
returnd only*/
struct S_sparse_image_format_properties2{
//211
	VkStructureType	sType;
	void*	pNext;
	S_sparse_image_format_properties	properties;
};

/*	VkPhysicalDeviceSparseImageFormatInfo2:*/
struct S_physical_device_sparse_image_format_info2{
//212
	VkStructureType	sType;
	const	void*	pNext;
	VkFormat	format;
	VkImageType	type;
	VkSampleCountFlagBits	samples;
	VkImageUsageFlags	usage;
	VkImageTiling	tiling;
};

/*	VkPhysicalDevicePushDescriptorPropertiesKHR:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_push_descriptor_properties_KHR{
//213
	VkStructureType	sType;
	void*	pNext;
	uint32_t	maxPushDescriptors;
};

/*	VkPhysicalDeviceDriverPropertiesKHR:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_driver_properties_KHR{
//214
	VkStructureType	sType;
	void*	pNext;
	uint32_t	driverID;
	char	driverName;
	char	driverInfo;
	S_conformance_version_KHR	conformanceVersion;
};

/*	VkPresentRegionsKHR:
extends to:	VkPresentInfoKHR*/
struct S_present_regions_KHR{
//215
	VkStructureType	sType;
	const	void*	pNext;
/*Copy of VkPresentInfoKHR::swapchainCount*/
	uint32_t	swapchainCount;
/*The regions that have changed
len:	swapchainCount*/
	const	S_present_region_KHR*	pRegions;
};

/*	VkPhysicalDeviceVariablePointerFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_variable_pointer_features{
//216
	VkStructureType	sType;
	void*	pNext;
	VkBool32	variablePointersStorageBuffer;
	VkBool32	variablePointers;
};

/*	VkPhysicalDeviceExternalImageFormatInfo:
extends to:	VkPhysicalDeviceImageFormatInfo2*/
struct S_physical_device_external_image_format_info{
//217
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

/*	VkExternalImageFormatProperties:
returnd only
extends to:	VkImageFormatProperties2*/
struct S_external_image_format_properties{
//218
	VkStructureType	sType;
	void*	pNext;
	S_external_memory_properties	externalMemoryProperties;
};

/*	VkPhysicalDeviceExternalBufferInfo:*/
struct S_physical_device_external_buffer_info{
//219
	VkStructureType	sType;
	const	void*	pNext;
	VkBufferCreateFlags	flags;
	VkBufferUsageFlags	usage;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

/*	VkExternalBufferProperties:
returnd only*/
struct S_external_buffer_properties{
//220
	VkStructureType	sType;
	void*	pNext;
	S_external_memory_properties	externalMemoryProperties;
};

/*	VkPhysicalDeviceIDProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_id_properties{
//221
	VkStructureType	sType;
	void*	pNext;
	uint8_t	deviceUUID;
	uint8_t	driverUUID;
	uint8_t	deviceLUID;
	uint32_t	deviceNodeMask;
	VkBool32	deviceLUIDValid;
};

/*	VkExternalMemoryImageCreateInfo:
extends to:	VkImageCreateInfo*/
struct S_external_memory_image_create_info{
//222
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlags	handleTypes;
};

/*	VkExternalMemoryBufferCreateInfo:
extends to:	VkBufferCreateInfo*/
struct S_external_memory_buffer_create_info{
//223
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlags	handleTypes;
};

/*	VkExportMemoryAllocateInfo:
extends to:	VkMemoryAllocateInfo*/
struct S_export_memory_allocate_info{
//224
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlags	handleTypes;
};

/*	VkImportMemoryWin32HandleInfoKHR:
extends to:	VkMemoryAllocateInfo*/
struct S_import_memory_win32_handle_info_KHR{
//225
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
	HANDLE	handle;
	LPCWSTR	name;
};

/*	VkExportMemoryWin32HandleInfoKHR:
extends to:	VkMemoryAllocateInfo*/
struct S_export_memory_win32_handle_info_KHR{
//226
	VkStructureType	sType;
	const	void*	pNext;
	const	SECURITY_ATTRIBUTES*	pAttributes;
	DWORD	dwAccess;
	LPCWSTR	name;
};

/*	VkMemoryWin32HandlePropertiesKHR:
returnd only*/
struct S_memory_win32_handle_properties_KHR{
//227
	VkStructureType	sType;
	void*	pNext;
	uint32_t	memoryTypeBits;
};

/*	VkMemoryGetWin32HandleInfoKHR:*/
struct S_memory_get_win32_handle_info_KHR{
//228
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceMemory	memory;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

/*	VkImportMemoryFdInfoKHR:
extends to:	VkMemoryAllocateInfo*/
struct S_import_memory_fd_info_KHR{
//229
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
	int	fd;
};

/*	VkMemoryFdPropertiesKHR:
returnd only*/
struct S_memory_fd_properties_KHR{
//230
	VkStructureType	sType;
	void*	pNext;
	uint32_t	memoryTypeBits;
};

/*	VkMemoryGetFdInfoKHR:*/
struct S_memory_get_fd_info_KHR{
//231
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceMemory	memory;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

/*	VkWin32KeyedMutexAcquireReleaseInfoKHR:
extends to:	VkSubmitInfo*/
struct S_win32_keyed_mutex_acquire_release_info_KHR{
//232
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	acquireCount;
/*
len:	acquireCount*/
	const	VkDeviceMemory*	pAcquireSyncs;
/*
len:	acquireCount*/
	const	uint64_t*	pAcquireKeys;
/*
len:	acquireCount*/
	const	uint32_t*	pAcquireTimeouts;
	uint32_t	releaseCount;
/*
len:	releaseCount*/
	const	VkDeviceMemory*	pReleaseSyncs;
/*
len:	releaseCount*/
	const	uint64_t*	pReleaseKeys;
};

/*	VkPhysicalDeviceExternalSemaphoreInfo:*/
struct S_physical_device_external_semaphore_info{
//233
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
};

/*	VkExternalSemaphoreProperties:
returnd only*/
struct S_external_semaphore_properties{
//234
	VkStructureType	sType;
	void*	pNext;
	VkExternalSemaphoreHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalSemaphoreHandleTypeFlags	compatibleHandleTypes;
	VkExternalSemaphoreFeatureFlags	externalSemaphoreFeatures;
};

/*	VkExportSemaphoreCreateInfo:
extends to:	VkSemaphoreCreateInfo*/
struct S_export_semaphore_create_info{
//235
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalSemaphoreHandleTypeFlags	handleTypes;
};

/*	VkImportSemaphoreWin32HandleInfoKHR:*/
struct S_import_semaphore_win32_handle_info_KHR{
//236
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkSemaphore	semaphore;
	VkSemaphoreImportFlags	flags;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
	HANDLE	handle;
	LPCWSTR	name;
};

/*	VkExportSemaphoreWin32HandleInfoKHR:
extends to:	VkSemaphoreCreateInfo*/
struct S_export_semaphore_win32_handle_info_KHR{
//237
	VkStructureType	sType;
	const	void*	pNext;
	const	SECURITY_ATTRIBUTES*	pAttributes;
	DWORD	dwAccess;
	LPCWSTR	name;
};

/*	VkD3D12FenceSubmitInfoKHR:
extends to:	VkSubmitInfo*/
struct S_d_3d12_fence_submit_info_KHR{
//238
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	waitSemaphoreValuesCount;
/*
len:	waitSemaphoreValuesCount*/
	const	uint64_t*	pWaitSemaphoreValues;
	uint32_t	signalSemaphoreValuesCount;
/*
len:	signalSemaphoreValuesCount*/
	const	uint64_t*	pSignalSemaphoreValues;
};

/*	VkSemaphoreGetWin32HandleInfoKHR:*/
struct S_semaphore_get_win32_handle_info_KHR{
//239
	VkStructureType	sType;
	const	void*	pNext;
	VkSemaphore	semaphore;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
};

/*	VkImportSemaphoreFdInfoKHR:*/
struct S_import_semaphore_fd_info_KHR{
//240
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkSemaphore	semaphore;
	VkSemaphoreImportFlags	flags;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
	int	fd;
};

/*	VkSemaphoreGetFdInfoKHR:*/
struct S_semaphore_get_fd_info_KHR{
//241
	VkStructureType	sType;
	const	void*	pNext;
	VkSemaphore	semaphore;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
};

/*	VkPhysicalDeviceExternalFenceInfo:*/
struct S_physical_device_external_fence_info{
//242
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalFenceHandleTypeFlagBits	handleType;
};

/*	VkExternalFenceProperties:
returnd only*/
struct S_external_fence_properties{
//243
	VkStructureType	sType;
	void*	pNext;
	VkExternalFenceHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalFenceHandleTypeFlags	compatibleHandleTypes;
	VkExternalFenceFeatureFlags	externalFenceFeatures;
};

/*	VkExportFenceCreateInfo:
extends to:	VkFenceCreateInfo*/
struct S_export_fence_create_info{
//244
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalFenceHandleTypeFlags	handleTypes;
};

/*	VkImportFenceWin32HandleInfoKHR:*/
struct S_import_fence_win32_handle_info_KHR{
//245
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkFence	fence;
	VkFenceImportFlags	flags;
	VkExternalFenceHandleTypeFlagBits	handleType;
	HANDLE	handle;
	LPCWSTR	name;
};

/*	VkExportFenceWin32HandleInfoKHR:
extends to:	VkFenceCreateInfo*/
struct S_export_fence_win32_handle_info_KHR{
//246
	VkStructureType	sType;
	const	void*	pNext;
	const	SECURITY_ATTRIBUTES*	pAttributes;
	DWORD	dwAccess;
	LPCWSTR	name;
};

/*	VkFenceGetWin32HandleInfoKHR:*/
struct S_fence_get_win32_handle_info_KHR{
//247
	VkStructureType	sType;
	const	void*	pNext;
	VkFence	fence;
	VkExternalFenceHandleTypeFlagBits	handleType;
};

/*	VkImportFenceFdInfoKHR:*/
struct S_import_fence_fd_info_KHR{
//248
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkFence	fence;
	VkFenceImportFlags	flags;
	VkExternalFenceHandleTypeFlagBits	handleType;
	int	fd;
};

/*	VkFenceGetFdInfoKHR:*/
struct S_fence_get_fd_info_KHR{
//249
	VkStructureType	sType;
	const	void*	pNext;
	VkFence	fence;
	VkExternalFenceHandleTypeFlagBits	handleType;
};

/*	VkPhysicalDeviceMultiviewFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_multiview_features{
//250
	VkStructureType	sType;
	void*	pNext;
/*Multiple views in a renderpass*/
	VkBool32	multiview;
/*Multiple views in a renderpass w/ geometry shader*/
	VkBool32	multiviewGeometryShader;
/*Multiple views in a renderpass w/ tessellation shader*/
	VkBool32	multiviewTessellationShader;
};

/*	VkPhysicalDeviceMultiviewProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_multiview_properties{
//251
	VkStructureType	sType;
	void*	pNext;
/*max number of views in a subpass*/
	uint32_t	maxMultiviewViewCount;
/*max instance index for a draw in a multiview subpass*/
	uint32_t	maxMultiviewInstanceIndex;
};

/*	VkRenderPassMultiviewCreateInfo:
extends to:	VkRenderPassCreateInfo*/
struct S_render_pass_multiview_create_info{
//252
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	subpassCount;
/*
len:	subpassCount*/
	const	uint32_t*	pViewMasks;
	uint32_t	dependencyCount;
/*
len:	dependencyCount*/
	const	int32_t*	pViewOffsets;
	uint32_t	correlationMaskCount;
/*
len:	correlationMaskCount*/
	const	uint32_t*	pCorrelationMasks;
};

/*	VkSurfaceCapabilities2EXT:
returnd only*/
struct S_surface_capabilities2_EXT{
//253
	VkStructureType	sType;
	void*	pNext;
/*Supported minimum number of images for the surface*/
	uint32_t	minImageCount;
/*Supported maximum number of images for the surface, 0 for unlimited*/
	uint32_t	maxImageCount;
/*Current image width and height for the surface, (0, 0) if undefined*/
	S_extent_2d	currentExtent;
/*Supported minimum image width and height for the surface*/
	S_extent_2d	minImageExtent;
/*Supported maximum image width and height for the surface*/
	S_extent_2d	maxImageExtent;
/*Supported maximum number of image layers for the surface*/
	uint32_t	maxImageArrayLayers;
/*1 or more bits representing the transforms supported*/
	VkSurfaceTransformFlagsKHR	supportedTransforms;
/*The surface's current transform relative to the device's natural orientation*/
	VkSurfaceTransformFlagBitsKHR	currentTransform;
/*1 or more bits representing the alpha compositing modes supported*/
	VkCompositeAlphaFlagsKHR	supportedCompositeAlpha;
/*Supported image usage flags for the surface*/
	VkImageUsageFlags	supportedUsageFlags;
	VkSurfaceCounterFlagsEXT	supportedSurfaceCounters;
};

/*	VkDisplayPowerInfoEXT:*/
struct S_display_power_info_EXT{
//254
	VkStructureType	sType;
	const	void*	pNext;
	VkDisplayPowerStateEXT	powerState;
};

/*	VkDeviceEventInfoEXT:*/
struct S_device_event_info_EXT{
//255
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceEventTypeEXT	deviceEvent;
};

/*	VkDisplayEventInfoEXT:*/
struct S_display_event_info_EXT{
//256
	VkStructureType	sType;
	const	void*	pNext;
	VkDisplayEventTypeEXT	displayEvent;
};

/*	VkSwapchainCounterCreateInfoEXT:
extends to:	VkSwapchainCreateInfoKHR*/
struct S_swapchain_counter_create_info_EXT{
//257
	VkStructureType	sType;
	const	void*	pNext;
	VkSurfaceCounterFlagsEXT	surfaceCounters;
};

/*	VkPhysicalDeviceGroupProperties:
returnd only*/
struct S_physical_device_group_properties{
//258
	VkStructureType	sType;
	void*	pNext;
	uint32_t	physicalDeviceCount;
	VkPhysicalDevice	physicalDevices;
	VkBool32	subsetAllocation;
};

/*	VkMemoryAllocateFlagsInfo:
extends to:	VkMemoryAllocateInfo*/
struct S_memory_allocate_flags_info{
//259
	VkStructureType	sType;
	const	void*	pNext;
	VkMemoryAllocateFlags	flags;
	uint32_t	deviceMask;
};

/*	VkBindBufferMemoryDeviceGroupInfo:
extends to:	VkBindBufferMemoryInfo*/
struct S_bind_buffer_memory_device_group_info{
//260
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	deviceIndexCount;
/*
len:	deviceIndexCount*/
	const	uint32_t*	pDeviceIndices;
};

/*	VkBindImageMemoryDeviceGroupInfo:
extends to:	VkBindImageMemoryInfo*/
struct S_bind_image_memory_device_group_info{
//261
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	deviceIndexCount;
/*
len:	deviceIndexCount*/
	const	uint32_t*	pDeviceIndices;
	uint32_t	splitInstanceBindRegionCount;
/*
len:	splitInstanceBindRegionCount*/
	const	S_rect_2d*	pSplitInstanceBindRegions;
};

/*	VkDeviceGroupRenderPassBeginInfo:
extends to:	VkRenderPassBeginInfo*/
struct S_device_group_render_pass_begin_info{
//262
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	deviceMask;
	uint32_t	deviceRenderAreaCount;
/*
len:	deviceRenderAreaCount*/
	const	S_rect_2d*	pDeviceRenderAreas;
};

/*	VkDeviceGroupCommandBufferBeginInfo:
extends to:	VkCommandBufferBeginInfo*/
struct S_device_group_command_buffer_begin_info{
//263
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	deviceMask;
};

/*	VkDeviceGroupSubmitInfo:
extends to:	VkSubmitInfo*/
struct S_device_group_submit_info{
//264
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const	uint32_t*	pWaitSemaphoreDeviceIndices;
	uint32_t	commandBufferCount;
/*
len:	commandBufferCount*/
	const	uint32_t*	pCommandBufferDeviceMasks;
	uint32_t	signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const	uint32_t*	pSignalSemaphoreDeviceIndices;
};

/*	VkDeviceGroupBindSparseInfo:
extends to:	VkBindSparseInfo*/
struct S_device_group_bind_sparse_info{
//265
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	resourceDeviceIndex;
	uint32_t	memoryDeviceIndex;
};

/*	VkDeviceGroupPresentCapabilitiesKHR:
returnd only*/
struct S_device_group_present_capabilities_KHR{
//266
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	presentMask;
	VkDeviceGroupPresentModeFlagsKHR	modes;
};

/*	VkImageSwapchainCreateInfoKHR:
extends to:	VkImageCreateInfo*/
struct S_image_swapchain_create_info_KHR{
//267
	VkStructureType	sType;
	const	void*	pNext;
	VkSwapchainKHR	swapchain;
};

/*	VkBindImageMemorySwapchainInfoKHR:
extends to:	VkBindImageMemoryInfo*/
struct S_bind_image_memory_swapchain_info_KHR{
//268
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkSwapchainKHR	swapchain;
	uint32_t	imageIndex;
};

/*	VkAcquireNextImageInfoKHR:*/
struct S_acquire_next_image_info_KHR{
//269
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkSwapchainKHR	swapchain;
	uint64_t	timeout;
/*
(externsync)*/
	VkSemaphore	semaphore;
/*
(externsync)*/
	VkFence	fence;
	uint32_t	deviceMask;
};

/*	VkDeviceGroupPresentInfoKHR:
extends to:	VkPresentInfoKHR*/
struct S_device_group_present_info_KHR{
//270
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	swapchainCount;
/*
len:	swapchainCount*/
	const	uint32_t*	pDeviceMasks;
	VkDeviceGroupPresentModeFlagBitsKHR	mode;
};

/*	VkDeviceGroupDeviceCreateInfo:
extends to:	VkDeviceCreateInfo*/
struct S_device_group_device_create_info{
//271
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	physicalDeviceCount;
/*
len:	physicalDeviceCount*/
	const	VkPhysicalDevice*	pPhysicalDevices;
};

/*	VkDeviceGroupSwapchainCreateInfoKHR:
extends to:	VkSwapchainCreateInfoKHR*/
struct S_device_group_swapchain_create_info_KHR{
//272
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceGroupPresentModeFlagsKHR	modes;
};

/*	VkDescriptorUpdateTemplateCreateInfo:*/
struct S_descriptor_update_template_create_info{
//273
	VkStructureType	sType;
	void*	pNext;
	VkDescriptorUpdateTemplateCreateFlags	flags;
/*Number of descriptor update entries to use for the update template*/
	uint32_t	descriptorUpdateEntryCount;
/*Descriptor update entries for the template
len:	descriptorUpdateEntryCount*/
	const	S_descriptor_update_template_entry*	pDescriptorUpdateEntries;
	VkDescriptorUpdateTemplateType	templateType;
	VkDescriptorSetLayout	descriptorSetLayout;
	VkPipelineBindPoint	pipelineBindPoint;
/*If used for push descriptors, this is the only allowed layout*/
	VkPipelineLayout	pipelineLayout;
	uint32_t	set;
};

/*	VkHdrMetadataEXT:*/
struct S_hdr_metadata_EXT{
//274
	VkStructureType	sType;
	const	void*	pNext;
/*Display primary's Red*/
	S_xy_color_EXT	displayPrimaryRed;
/*Display primary's Green*/
	S_xy_color_EXT	displayPrimaryGreen;
/*Display primary's Blue*/
	S_xy_color_EXT	displayPrimaryBlue;
/*Display primary's Blue*/
	S_xy_color_EXT	whitePoint;
/*Display maximum luminance*/
	float	maxLuminance;
/*Display minimum luminance*/
	float	minLuminance;
/*Content maximum luminance*/
	float	maxContentLightLevel;
	float	maxFrameAverageLightLevel;
};

/*	VkPresentTimesInfoGOOGLE:
extends to:	VkPresentInfoKHR*/
struct S_present_times_info_GOOGLE{
//275
	VkStructureType	sType;
	const	void*	pNext;
/*Copy of VkPresentInfoKHR::swapchainCount*/
	uint32_t	swapchainCount;
/*The earliest times to present images
len:	swapchainCount*/
	const	S_present_time_GOOGLE*	pTimes;
};

/*	VkIOSSurfaceCreateInfoMVK:*/
struct S_ios_surface_create_info_MVK{
//276
	VkStructureType	sType;
	const	void*	pNext;
	VkIOSSurfaceCreateFlagsMVK	flags;
	const	void*	pView;
};

/*	VkMacOSSurfaceCreateInfoMVK:*/
struct S_mac_os_surface_create_info_MVK{
//277
	VkStructureType	sType;
	const	void*	pNext;
	VkMacOSSurfaceCreateFlagsMVK	flags;
	const	void*	pView;
};

/*	VkPipelineViewportWScalingStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
struct S_pipeline_viewport_w_scaling_state_create_info_NV{
//278
	VkStructureType	sType;
	const	void*	pNext;
	VkBool32	viewportWScalingEnable;
	uint32_t	viewportCount;
/*
len:	viewportCount*/
	const	S_viewport_w_scaling_NV*	pViewportWScalings;
};

/*	VkPipelineViewportSwizzleStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
struct S_pipeline_viewport_swizzle_state_create_info_NV{
//279
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineViewportSwizzleStateCreateFlagsNV	flags;
	uint32_t	viewportCount;
/*
len:	viewportCount*/
	const	S_viewport_swizzle_NV*	pViewportSwizzles;
};

/*	VkPhysicalDeviceDiscardRectanglePropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_discard_rectangle_properties_EXT{
//280
	VkStructureType	sType;
	void*	pNext;
/*max number of active discard rectangles*/
	uint32_t	maxDiscardRectangles;
};

/*	VkPipelineDiscardRectangleStateCreateInfoEXT:
extends to:	VkGraphicsPipelineCreateInfo*/
struct S_pipeline_discard_rectangle_state_create_info_EXT{
//281
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineDiscardRectangleStateCreateFlagsEXT	flags;
	VkDiscardRectangleModeEXT	discardRectangleMode;
	uint32_t	discardRectangleCount;
/*
len:	discardRectangleCount*/
	const	S_rect_2d*	pDiscardRectangles;
};

/*	VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_multiview_per_view_attributes_properties_NVX{
//282
	VkStructureType	sType;
	void*	pNext;
	VkBool32	perViewPositionAllComponents;
};

/*	VkRenderPassInputAttachmentAspectCreateInfo:
extends to:	VkRenderPassCreateInfo*/
struct S_render_pass_input_attachment_aspect_create_info{
//283
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	aspectReferenceCount;
/*
len:	aspectReferenceCount*/
	const	S_input_attachment_aspect_reference*	pAspectReferences;
};

/*	VkPhysicalDeviceSurfaceInfo2KHR:*/
struct S_physical_device_surface_info2_KHR{
//284
	VkStructureType	sType;
	const	void*	pNext;
	VkSurfaceKHR	surface;
};

/*	VkSurfaceFormat2KHR:
returnd only*/
struct S_surface_format2_KHR{
//285
	VkStructureType	sType;
	void*	pNext;
	S_surface_format_KHR	surfaceFormat;
};

/*	VkDisplayProperties2KHR:
returnd only*/
struct S_display_properties2_KHR{
//286
	VkStructureType	sType;
	void*	pNext;
	S_display_properties_KHR	displayProperties;
};

/*	VkDisplayPlaneProperties2KHR:
returnd only*/
struct S_display_plane_properties2_KHR{
//287
	VkStructureType	sType;
	void*	pNext;
	S_display_plane_properties_KHR	displayPlaneProperties;
};

/*	VkDisplayModeProperties2KHR:
returnd only*/
struct S_display_mode_properties2_KHR{
//288
	VkStructureType	sType;
	void*	pNext;
	S_display_mode_properties_KHR	displayModeProperties;
};

/*	VkDisplayPlaneInfo2KHR:*/
struct S_display_plane_info2_KHR{
//289
	VkStructureType	sType;
	const	void*	pNext;
/*
(externsync)*/
	VkDisplayModeKHR	mode;
	uint32_t	planeIndex;
};

/*	VkDisplayPlaneCapabilities2KHR:
returnd only*/
struct S_display_plane_capabilities2_KHR{
//290
	VkStructureType	sType;
	void*	pNext;
	S_display_plane_capabilities_KHR	capabilities;
};

/*	VkSharedPresentSurfaceCapabilitiesKHR:
returnd only
extends to:	VkSurfaceCapabilities2KHR*/
struct S_shared_present_surface_capabilities_KHR{
//291
	VkStructureType	sType;
	void*	pNext;
/*Supported image usage flags if swapchain created using a shared present mode*/
	VkImageUsageFlags	sharedPresentSupportedUsageFlags;
};

/*	VkPhysicalDevice16BitStorageFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_16bit_storage_features{
//292
	VkStructureType	sType;
	void*	pNext;
/*16-bit integer/floating-point variables supported in BufferBlock*/
	VkBool32	storageBuffer16BitAccess;
/*16-bit integer/floating-point variables supported in BufferBlock and Block*/
	VkBool32	uniformAndStorageBuffer16BitAccess;
/*16-bit integer/floating-point variables supported in PushConstant*/
	VkBool32	storagePushConstant16;
/*16-bit integer/floating-point variables supported in shader inputs and outputs*/
	VkBool32	storageInputOutput16;
};

/*	VkPhysicalDeviceSubgroupProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_subgroup_properties{
//293
	VkStructureType	sType;
	void*	pNext;
/*The size of a subgroup for this queue.*/
	uint32_t	subgroupSize;
/*Bitfield of what shader stages support subgroup operations*/
	VkShaderStageFlags	supportedStages;
/*Bitfield of what subgroup operations are supported.*/
	VkSubgroupFeatureFlags	supportedOperations;
/*Flag to specify whether quad operations are available in all stages.*/
	VkBool32	quadOperationsInAllStages;
};

/*	VkBufferMemoryRequirementsInfo2:*/
struct S_buffer_memory_requirements_info2{
//294
	VkStructureType	sType;
	const	void*	pNext;
	VkBuffer	buffer;
};

/*	VkImageSparseMemoryRequirementsInfo2:*/
struct S_image_sparse_memory_requirements_info2{
//295
	VkStructureType	sType;
	const	void*	pNext;
	VkImage	image;
};

/*	VkSparseImageMemoryRequirements2:
returnd only*/
struct S_sparse_image_memory_requirements2{
//296
	VkStructureType	sType;
	void*	pNext;
	S_sparse_image_memory_requirements	memoryRequirements;
};

/*	VkPhysicalDevicePointClippingProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_point_clipping_properties{
//297
	VkStructureType	sType;
	void*	pNext;
	VkPointClippingBehavior	pointClippingBehavior;
};

/*	VkMemoryDedicatedRequirements:
returnd only
extends to:	VkMemoryRequirements2*/
struct S_memory_dedicated_requirements{
//298
	VkStructureType	sType;
	void*	pNext;
	VkBool32	prefersDedicatedAllocation;
	VkBool32	requiresDedicatedAllocation;
};

/*	VkMemoryDedicatedAllocateInfo:
extends to:	VkMemoryAllocateInfo*/
struct S_memory_dedicated_allocate_info{
//299
	VkStructureType	sType;
	const	void*	pNext;
/*Image that this allocation will be bound to*/
	VkImage	image;
/*Buffer that this allocation will be bound to*/
	VkBuffer	buffer;
};

/*	VkImageViewUsageCreateInfo:
extends to:	VkImageViewCreateInfo*/
struct S_image_view_usage_create_info{
//300
	VkStructureType	sType;
	const	void*	pNext;
	VkImageUsageFlags	usage;
};

/*	VkPipelineTessellationDomainOriginStateCreateInfo:
extends to:	VkPipelineTessellationStateCreateInfo*/
struct S_pipeline_tessellation_domain_origin_state_create_info{
//301
	VkStructureType	sType;
	const	void*	pNext;
	VkTessellationDomainOrigin	domainOrigin;
};

/*	VkSamplerYcbcrConversionInfo:
extends to:	VkSamplerCreateInfo,VkImageViewCreateInfo*/
struct S_sampler_ycbcr_conversion_info{
//302
	VkStructureType	sType;
	const	void*	pNext;
	VkSamplerYcbcrConversion	conversion;
};

/*	VkBindImagePlaneMemoryInfo:
extends to:	VkBindImageMemoryInfo*/
struct S_bind_image_plane_memory_info{
//303
	VkStructureType	sType;
	const	void*	pNext;
	VkImageAspectFlagBits	planeAspect;
};

/*	VkImagePlaneMemoryRequirementsInfo:
extends to:	VkImageMemoryRequirementsInfo2*/
struct S_image_plane_memory_requirements_info{
//304
	VkStructureType	sType;
	const	void*	pNext;
	VkImageAspectFlagBits	planeAspect;
};

/*	VkPhysicalDeviceSamplerYcbcrConversionFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_sampler_ycbcr_conversion_features{
//305
	VkStructureType	sType;
	void*	pNext;
/*Sampler color conversion supported*/
	VkBool32	samplerYcbcrConversion;
};

/*	VkSamplerYcbcrConversionImageFormatProperties:
returnd only
extends to:	VkImageFormatProperties2*/
struct S_sampler_ycbcr_conversion_image_format_properties{
//306
	VkStructureType	sType;
	void*	pNext;
	uint32_t	combinedImageSamplerDescriptorCount;
};

/*	VkTextureLODGatherFormatPropertiesAMD:
returnd only
extends to:	VkImageFormatProperties2*/
struct S_texture_lod_gather_format_properties_AMD{
//307
	VkStructureType	sType;
	void*	pNext;
	VkBool32	supportsTextureGatherLODBiasAMD;
};

/*	VkConditionalRenderingBeginInfoEXT:*/
struct S_conditional_rendering_begin_info_EXT{
//308
	VkStructureType	sType;
	const	void*	pNext;
	VkBuffer	buffer;
	VkDeviceSize	offset;
	VkConditionalRenderingFlagsEXT	flags;
};

/*	VkProtectedSubmitInfo:
extends to:	VkSubmitInfo*/
struct S_protected_submit_info{
//309
	VkStructureType	sType;
	const	void*	pNext;
/*Submit protected command buffers*/
	VkBool32	protectedSubmit;
};

/*	VkPhysicalDeviceProtectedMemoryFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_protected_memory_features{
//310
	VkStructureType	sType;
	void*	pNext;
	VkBool32	protectedMemory;
};

/*	VkPhysicalDeviceProtectedMemoryProperties:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_protected_memory_properties{
//311
	VkStructureType	sType;
	void*	pNext;
	VkBool32	protectedNoFault;
};

/*	VkDeviceQueueInfo2:*/
struct S_device_queue_info2{
//312
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceQueueCreateFlags	flags;
	uint32_t	queueFamilyIndex;
	uint32_t	queueIndex;
};

/*	VkPipelineCoverageToColorStateCreateInfoNV:
extends to:	VkPipelineMultisampleStateCreateInfo*/
struct S_pipeline_coverage_to_color_state_create_info_NV{
//313
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineCoverageToColorStateCreateFlagsNV	flags;
	VkBool32	coverageToColorEnable;
	uint32_t	coverageToColorLocation;
};

/*	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_sampler_filter_minmax_properties_EXT{
//314
	VkStructureType	sType;
	void*	pNext;
	VkBool32	filterMinmaxSingleComponentFormats;
	VkBool32	filterMinmaxImageComponentMapping;
};

/*	VkSampleLocationsInfoEXT:
extends to:	VkImageMemoryBarrier*/
struct S_sample_locations_info_EXT{
//315
	VkStructureType	sType;
	const	void*	pNext;
	VkSampleCountFlagBits	sampleLocationsPerPixel;
	S_extent_2d	sampleLocationGridSize;
	uint32_t	sampleLocationsCount;
/*
len:	sampleLocationsCount*/
	const	S_sample_location_EXT*	pSampleLocations;
};

/*	VkRenderPassSampleLocationsBeginInfoEXT:
extends to:	VkRenderPassBeginInfo*/
struct S_render_pass_sample_locations_begin_info_EXT{
//316
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	attachmentInitialSampleLocationsCount;
/*
len:	attachmentInitialSampleLocationsCount*/
	const	S_attachment_sample_locations_EXT*	pAttachmentInitialSampleLocations;
	uint32_t	postSubpassSampleLocationsCount;
/*
len:	postSubpassSampleLocationsCount*/
	const	S_subpass_sample_locations_EXT*	pPostSubpassSampleLocations;
};

/*	VkPipelineSampleLocationsStateCreateInfoEXT:
extends to:	VkPipelineMultisampleStateCreateInfo*/
struct S_pipeline_sample_locations_state_create_info_EXT{
//317
	VkStructureType	sType;
	const	void*	pNext;
	VkBool32	sampleLocationsEnable;
	S_sample_locations_info_EXT	sampleLocationsInfo;
};

/*	VkPhysicalDeviceSampleLocationsPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_sample_locations_properties_EXT{
//318
	VkStructureType	sType;
	void*	pNext;
	VkSampleCountFlags	sampleLocationSampleCounts;
	S_extent_2d	maxSampleLocationGridSize;
	float	sampleLocationCoordinateRange;
	uint32_t	sampleLocationSubPixelBits;
	VkBool32	variableSampleLocations;
};

/*	VkMultisamplePropertiesEXT:
returnd only*/
struct S_multisample_properties_EXT{
//319
	VkStructureType	sType;
	void*	pNext;
	S_extent_2d	maxSampleLocationGridSize;
};

/*	VkSamplerReductionModeCreateInfoEXT:
extends to:	VkSamplerCreateInfo*/
struct S_sampler_reduction_mode_create_info_EXT{
//320
	VkStructureType	sType;
	const	void*	pNext;
	VkSamplerReductionModeEXT	reductionMode;
};

/*	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_blend_operation_advanced_features_EXT{
//321
	VkStructureType	sType;
	void*	pNext;
	VkBool32	advancedBlendCoherentOperations;
};

/*	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_blend_operation_advanced_properties_EXT{
//322
	VkStructureType	sType;
	void*	pNext;
	uint32_t	advancedBlendMaxColorAttachments;
	VkBool32	advancedBlendIndependentBlend;
	VkBool32	advancedBlendNonPremultipliedSrcColor;
	VkBool32	advancedBlendNonPremultipliedDstColor;
	VkBool32	advancedBlendCorrelatedOverlap;
	VkBool32	advancedBlendAllOperations;
};

/*	VkPipelineColorBlendAdvancedStateCreateInfoEXT:
extends to:	VkPipelineColorBlendStateCreateInfo*/
struct S_pipeline_color_blend_advanced_state_create_info_EXT{
//323
	VkStructureType	sType;
	const	void*	pNext;
	VkBool32	srcPremultiplied;
	VkBool32	dstPremultiplied;
	VkBlendOverlapEXT	blendOverlap;
};

/*	VkPhysicalDeviceInlineUniformBlockFeaturesEXT:
returnd only
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_inline_uniform_block_features_EXT{
//324
	VkStructureType	sType;
	void*	pNext;
	VkBool32	inlineUniformBlock;
	VkBool32	descriptorBindingInlineUniformBlockUpdateAfterBind;
};

/*	VkPhysicalDeviceInlineUniformBlockPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_inline_uniform_block_properties_EXT{
//325
	VkStructureType	sType;
	void*	pNext;
	uint32_t	maxInlineUniformBlockSize;
	uint32_t	maxPerStageDescriptorInlineUniformBlocks;
	uint32_t	maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
	uint32_t	maxDescriptorSetInlineUniformBlocks;
	uint32_t	maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
};

/*	VkWriteDescriptorSetInlineUniformBlockEXT:
extends to:	VkWriteDescriptorSet*/
struct S_write_descriptor_set_inline_uniform_block_EXT{
//326
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	dataSize;
/*
len:	dataSize*/
	const	void*	pData;
};

/*	VkDescriptorPoolInlineUniformBlockCreateInfoEXT:
extends to:	VkDescriptorPoolCreateInfo*/
struct S_descriptor_pool_inline_uniform_block_create_info_EXT{
//327
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	maxInlineUniformBlockBindings;
};

/*	VkPipelineCoverageModulationStateCreateInfoNV:
extends to:	VkPipelineMultisampleStateCreateInfo*/
struct S_pipeline_coverage_modulation_state_create_info_NV{
//328
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineCoverageModulationStateCreateFlagsNV	flags;
	VkCoverageModulationModeNV	coverageModulationMode;
	VkBool32	coverageModulationTableEnable;
	uint32_t	coverageModulationTableCount;
/*
len:	coverageModulationTableCount*/
	const	float*	pCoverageModulationTable;
};

/*	VkImageFormatListCreateInfoKHR:
extends to:	VkImageCreateInfo*/
struct S_image_format_list_create_info_KHR{
//329
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	viewFormatCount;
/*
len:	viewFormatCount*/
	const	VkFormat*	pViewFormats;
};

/*	VkValidationCacheCreateInfoEXT:*/
struct S_validation_cache_create_info_EXT{
//330
	VkStructureType	sType;
	const	void*	pNext;
	VkValidationCacheCreateFlagsEXT	flags;
	size_t	initialDataSize;
/*
len:	initialDataSize*/
	const	void*	pInitialData;
};

/*	VkShaderModuleValidationCacheCreateInfoEXT:
extends to:	VkShaderModuleCreateInfo*/
struct S_shader_module_validation_cache_create_info_EXT{
//331
	VkStructureType	sType;
	const	void*	pNext;
	VkValidationCacheEXT	validationCache;
};

/*	VkPhysicalDeviceMaintenance3Properties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_maintenance3_properties{
//332
	VkStructureType	sType;
	void*	pNext;
	uint32_t	maxPerSetDescriptors;
	VkDeviceSize	maxMemoryAllocationSize;
};

/*	VkPhysicalDeviceShaderDrawParameterFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_shader_draw_parameter_features{
//333
	VkStructureType	sType;
	void*	pNext;
	VkBool32	shaderDrawParameters;
};

/*	VkNativeBufferANDROID:*/
struct S_native_buffer_ANDROID{
//334
	VkStructureType	sType;
	const	void*	pNext;
	const	void*	handle;
	int	stride;
	int	format;
	int	usage;
};

/*	VkDeviceQueueGlobalPriorityCreateInfoEXT:
extends to:	VkDeviceQueueCreateInfo*/
struct S_device_queue_global_priority_create_info_EXT{
//335
	VkStructureType	sType;
	const	void*	pNext;
	VkQueueGlobalPriorityEXT	globalPriority;
};

/*	VkDebugUtilsObjectNameInfoEXT:*/
struct S_debug_utils_object_name_info_EXT{
//336
	VkStructureType	sType;
	const	void*	pNext;
	VkObjectType	objectType;
	uint64_t	objectHandle;
/*
len:	null-terminated*/
	const	char*	pObjectName;
};

/*	VkDebugUtilsObjectTagInfoEXT:*/
struct S_debug_utils_object_tag_info_EXT{
//337
	VkStructureType	sType;
	const	void*	pNext;
	VkObjectType	objectType;
	uint64_t	objectHandle;
	uint64_t	tagName;
	size_t	tagSize;
/*
len:	tagSize*/
	const	void*	pTag;
};

/*	VkDebugUtilsLabelEXT:*/
struct S_debug_utils_label_EXT{
//338
	VkStructureType	sType;
	const	void*	pNext;
/*
len:	null-terminated*/
	const	char*	pLabelName;
	float	color;
};

/*	VkDebugUtilsMessengerCreateInfoEXT:
extends to:	VkInstanceCreateInfo*/
struct S_debug_utils_messenger_create_info_EXT{
//339
	VkStructureType	sType;
	const	void*	pNext;
	VkDebugUtilsMessengerCreateFlagsEXT	flags;
	VkDebugUtilsMessageSeverityFlagsEXT	messageSeverity;
	VkDebugUtilsMessageTypeFlagsEXT	messageType;
	PFN_vkDebugUtilsMessengerCallbackEXT	pfnUserCallback;
	void*	pUserData;
};

/*	VkDebugUtilsMessengerCallbackDataEXT:*/
struct S_debug_utils_messenger_callback_data_EXT{
//340
	VkStructureType	sType;
	const	void*	pNext;
	VkDebugUtilsMessengerCallbackDataFlagsEXT	flags;
/*
len:	null-terminated*/
	const	char*	pMessageIdName;
	int32_t	messageIdNumber;
/*
len:	null-terminated*/
	const	char*	pMessage;
	uint32_t	queueLabelCount;
/*
len:	queueLabelCount*/
	S_debug_utils_label_EXT*	pQueueLabels;
	uint32_t	cmdBufLabelCount;
/*
len:	cmdBufLabelCount*/
	S_debug_utils_label_EXT*	pCmdBufLabels;
	uint32_t	objectCount;
/*
len:	objectCount*/
	S_debug_utils_object_name_info_EXT*	pObjects;
};

/*	VkImportMemoryHostPointerInfoEXT:
extends to:	VkMemoryAllocateInfo*/
struct S_import_memory_host_pointer_info_EXT{
//341
	VkStructureType	sType;
	const	void*	pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
	void*	pHostPointer;
};

/*	VkMemoryHostPointerPropertiesEXT:*/
struct S_memory_host_pointer_properties_EXT{
//342
	VkStructureType	sType;
	void*	pNext;
	uint32_t	memoryTypeBits;
};

/*	VkPhysicalDeviceExternalMemoryHostPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_external_memory_host_properties_EXT{
//343
	VkStructureType	sType;
	void*	pNext;
	VkDeviceSize	minImportedHostPointerAlignment;
};

/*	VkPhysicalDeviceConservativeRasterizationPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_conservative_rasterization_properties_EXT{
//344
	VkStructureType	sType;
/*Pointer to next structure*/
	void*	pNext;
/*The size in pixels the primitive is enlarged at each edge during conservative rasterization*/
	float	primitiveOverestimationSize;
/*The maximum additional overestimation the client can specify in the pipeline state*/
	float	maxExtraPrimitiveOverestimationSize;
/*The granularity of extra overestimation sizes the implementations supports between 0 and maxExtraOverestimationSize*/
	float	extraPrimitiveOverestimationSizeGranularity;
/*true if the implementation supports conservative rasterization underestimation mode*/
	VkBool32	primitiveUnderestimation;
/*true if conservative rasterization also applies to points and lines*/
	VkBool32	conservativePointAndLineRasterization;
/*true if degenerate triangles (those with zero area after snap) are rasterized*/
	VkBool32	degenerateTrianglesRasterized;
/*true if degenerate lines (those with zero length after snap) are rasterized*/
	VkBool32	degenerateLinesRasterized;
/*true if the implementation supports the FullyCoveredEXT SPIR-V builtin fragment shader input variable*/
	VkBool32	fullyCoveredFragmentShaderInputVariable;
/*true if the implementation supports both conservative rasterization and post depth coverage sample coverage mask*/
	VkBool32	conservativeRasterizationPostDepthCoverage;
};

/*	VkPhysicalDeviceShaderCorePropertiesAMD:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_shader_core_properties_AMD{
//345
	VkStructureType	sType;
/*Pointer to next structure*/
	void*	pNext;
/*number of shader engines*/
	uint32_t	shaderEngineCount;
/*number of shader arrays*/
	uint32_t	shaderArraysPerEngineCount;
/*number of CUs per shader array*/
	uint32_t	computeUnitsPerShaderArray;
/*number of SIMDs per compute unit*/
	uint32_t	simdPerComputeUnit;
/*number of wavefront slots in each SIMD*/
	uint32_t	wavefrontsPerSimd;
/*number of threads per wavefront*/
	uint32_t	wavefrontSize;
/*number of physical SGPRs per SIMD*/
	uint32_t	sgprsPerSimd;
/*minimum number of SGPRs that can be allocated by a wave*/
	uint32_t	minSgprAllocation;
/*number of available SGPRs*/
	uint32_t	maxSgprAllocation;
/*SGPRs are allocated in groups of this size*/
	uint32_t	sgprAllocationGranularity;
/*number of physical VGPRs per SIMD*/
	uint32_t	vgprsPerSimd;
/*minimum number of VGPRs that can be allocated by a wave*/
	uint32_t	minVgprAllocation;
/*number of available VGPRs*/
	uint32_t	maxVgprAllocation;
/*VGPRs are allocated in groups of this size*/
	uint32_t	vgprAllocationGranularity;
};

/*	VkPipelineRasterizationConservativeStateCreateInfoEXT:
extends to:	VkPipelineRasterizationStateCreateInfo*/
struct S_pipeline_rasterization_conservative_state_create_info_EXT{
//346
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineRasterizationConservativeStateCreateFlagsEXT	flags;
	VkConservativeRasterizationModeEXT	conservativeRasterizationMode;
	float	extraPrimitiveOverestimationSize;
};

/*	VkPhysicalDeviceDescriptorIndexingFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_descriptor_indexing_features_EXT{
//347
	VkStructureType	sType;
	void*	pNext;
	VkBool32	shaderInputAttachmentArrayDynamicIndexing;
	VkBool32	shaderUniformTexelBufferArrayDynamicIndexing;
	VkBool32	shaderStorageTexelBufferArrayDynamicIndexing;
	VkBool32	shaderUniformBufferArrayNonUniformIndexing;
	VkBool32	shaderSampledImageArrayNonUniformIndexing;
	VkBool32	shaderStorageBufferArrayNonUniformIndexing;
	VkBool32	shaderStorageImageArrayNonUniformIndexing;
	VkBool32	shaderInputAttachmentArrayNonUniformIndexing;
	VkBool32	shaderUniformTexelBufferArrayNonUniformIndexing;
	VkBool32	shaderStorageTexelBufferArrayNonUniformIndexing;
	VkBool32	descriptorBindingUniformBufferUpdateAfterBind;
	VkBool32	descriptorBindingSampledImageUpdateAfterBind;
	VkBool32	descriptorBindingStorageImageUpdateAfterBind;
	VkBool32	descriptorBindingStorageBufferUpdateAfterBind;
	VkBool32	descriptorBindingUniformTexelBufferUpdateAfterBind;
	VkBool32	descriptorBindingStorageTexelBufferUpdateAfterBind;
	VkBool32	descriptorBindingUpdateUnusedWhilePending;
	VkBool32	descriptorBindingPartiallyBound;
	VkBool32	descriptorBindingVariableDescriptorCount;
	VkBool32	runtimeDescriptorArray;
};

/*	VkPhysicalDeviceDescriptorIndexingPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_descriptor_indexing_properties_EXT{
//348
	VkStructureType	sType;
	void*	pNext;
	uint32_t	maxUpdateAfterBindDescriptorsInAllPools;
	VkBool32	shaderUniformBufferArrayNonUniformIndexingNative;
	VkBool32	shaderSampledImageArrayNonUniformIndexingNative;
	VkBool32	shaderStorageBufferArrayNonUniformIndexingNative;
	VkBool32	shaderStorageImageArrayNonUniformIndexingNative;
	VkBool32	shaderInputAttachmentArrayNonUniformIndexingNative;
	VkBool32	robustBufferAccessUpdateAfterBind;
	VkBool32	quadDivergentImplicitLod;
	uint32_t	maxPerStageDescriptorUpdateAfterBindSamplers;
	uint32_t	maxPerStageDescriptorUpdateAfterBindUniformBuffers;
	uint32_t	maxPerStageDescriptorUpdateAfterBindStorageBuffers;
	uint32_t	maxPerStageDescriptorUpdateAfterBindSampledImages;
	uint32_t	maxPerStageDescriptorUpdateAfterBindStorageImages;
	uint32_t	maxPerStageDescriptorUpdateAfterBindInputAttachments;
	uint32_t	maxPerStageUpdateAfterBindResources;
	uint32_t	maxDescriptorSetUpdateAfterBindSamplers;
	uint32_t	maxDescriptorSetUpdateAfterBindUniformBuffers;
	uint32_t	maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
	uint32_t	maxDescriptorSetUpdateAfterBindStorageBuffers;
	uint32_t	maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
	uint32_t	maxDescriptorSetUpdateAfterBindSampledImages;
	uint32_t	maxDescriptorSetUpdateAfterBindStorageImages;
	uint32_t	maxDescriptorSetUpdateAfterBindInputAttachments;
};

/*	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT:
extends to:	VkDescriptorSetLayoutCreateInfo*/
struct S_descriptor_set_layout_binding_flags_create_info_EXT{
//349
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	bindingCount;
/*
len:	bindingCount*/
	const	VkDescriptorBindingFlagsEXT*	pBindingFlags;
};

/*	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT:
extends to:	VkDescriptorSetAllocateInfo*/
struct S_descriptor_set_variable_descriptor_count_allocate_info_EXT{
//350
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	descriptorSetCount;
/*
len:	descriptorSetCount*/
	const	uint32_t*	pDescriptorCounts;
};

/*	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT:
returnd only
extends to:	VkDescriptorSetLayoutSupport*/
struct S_descriptor_set_variable_descriptor_count_layout_support_EXT{
//351
	VkStructureType	sType;
	void*	pNext;
	uint32_t	maxVariableDescriptorCount;
};

/*	VkAttachmentDescription2KHR:*/
struct S_attachment_description2_KHR{
//352
	VkStructureType	sType;
	const	void*	pNext;
	VkAttachmentDescriptionFlags	flags;
	VkFormat	format;
	VkSampleCountFlagBits	samples;
/*Load operation for color or depth data*/
	VkAttachmentLoadOp	loadOp;
/*Store operation for color or depth data*/
	VkAttachmentStoreOp	storeOp;
/*Load operation for stencil data*/
	VkAttachmentLoadOp	stencilLoadOp;
/*Store operation for stencil data*/
	VkAttachmentStoreOp	stencilStoreOp;
	VkImageLayout	initialLayout;
	VkImageLayout	finalLayout;
};

/*	VkAttachmentReference2KHR:*/
struct S_attachment_reference2_KHR{
//353
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	attachment;
	VkImageLayout	layout;
	VkImageAspectFlags	aspectMask;
};

/*	VkSubpassDescription2KHR:*/
struct S_subpass_description2_KHR{
//354
	VkStructureType	sType;
	const	void*	pNext;
	VkSubpassDescriptionFlags	flags;
	VkPipelineBindPoint	pipelineBindPoint;
	uint32_t	viewMask;
	uint32_t	inputAttachmentCount;
/*
len:	inputAttachmentCount*/
	const	S_attachment_reference2_KHR*	pInputAttachments;
	uint32_t	colorAttachmentCount;
/*
len:	colorAttachmentCount*/
	const	S_attachment_reference2_KHR*	pColorAttachments;
/*
len:	colorAttachmentCount*/
	const	S_attachment_reference2_KHR*	pResolveAttachments;
	const	S_attachment_reference2_KHR*	pDepthStencilAttachment;
	uint32_t	preserveAttachmentCount;
/*
len:	preserveAttachmentCount*/
	const	uint32_t*	pPreserveAttachments;
};

/*	VkSubpassDependency2KHR:*/
struct S_subpass_dependency2_KHR{
//355
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	srcSubpass;
	uint32_t	dstSubpass;
	VkPipelineStageFlags	srcStageMask;
	VkPipelineStageFlags	dstStageMask;
	VkAccessFlags	srcAccessMask;
	VkAccessFlags	dstAccessMask;
	VkDependencyFlags	dependencyFlags;
	int32_t	viewOffset;
};

/*	VkRenderPassCreateInfo2KHR:*/
struct S_render_pass_create_info2_KHR{
//356
	VkStructureType	sType;
	const	void*	pNext;
	VkRenderPassCreateFlags	flags;
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	S_attachment_description2_KHR*	pAttachments;
	uint32_t	subpassCount;
/*
len:	subpassCount*/
	const	S_subpass_description2_KHR*	pSubpasses;
	uint32_t	dependencyCount;
/*
len:	dependencyCount*/
	const	S_subpass_dependency2_KHR*	pDependencies;
	uint32_t	correlatedViewMaskCount;
/*
len:	correlatedViewMaskCount*/
	const	uint32_t*	pCorrelatedViewMasks;
};

/*	VkSubpassBeginInfoKHR:*/
struct S_subpass_begin_info_KHR{
//357
	VkStructureType	sType;
	const	void*	pNext;
	VkSubpassContents	contents;
};

/*	VkSubpassEndInfoKHR:*/
struct S_subpass_end_info_KHR{
//358
	VkStructureType	sType;
	const	void*	pNext;
};

/*	VkPipelineVertexInputDivisorStateCreateInfoEXT:
extends to:	VkPipelineVertexInputStateCreateInfo*/
struct S_pipeline_vertex_input_divisor_state_create_info_EXT{
//359
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	vertexBindingDivisorCount;
/*
len:	vertexBindingDivisorCount*/
	const	S_vertex_input_binding_divisor_description_EXT*	pVertexBindingDivisors;
};

/*	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_vertex_attribute_divisor_properties_EXT{
//360
	VkStructureType	sType;
	void*	pNext;
/*max value of vertex attribute divisor*/
	uint32_t	maxVertexAttribDivisor;
};

/*	VkImportAndroidHardwareBufferInfoANDROID:
extends to:	VkMemoryAllocateInfo*/
struct S_import_android_hardware_buffer_info_ANDROID{
//361
	VkStructureType	sType;
	const	void*	pNext;
	struct	AHardwareBuffer*	buffer;
};

/*	VkAndroidHardwareBufferUsageANDROID:
returnd only
extends to:	VkImageFormatProperties2*/
struct S_android_hardware_buffer_usage_ANDROID{
//362
	VkStructureType	sType;
	void*	pNext;
	uint64_t	androidHardwareBufferUsage;
};

/*	VkMemoryGetAndroidHardwareBufferInfoANDROID:*/
struct S_memory_get_android_hardware_buffer_info_ANDROID{
//363
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceMemory	memory;
};

/*	VkAndroidHardwareBufferFormatPropertiesANDROID:
returnd only
extends to:	VkAndroidHardwareBufferPropertiesANDROID*/
struct S_android_hardware_buffer_format_properties_ANDROID{
//364
	VkStructureType	sType;
	void*	pNext;
	VkFormat	format;
	uint64_t	externalFormat;
	VkFormatFeatureFlags	formatFeatures;
	S_component_mapping	samplerYcbcrConversionComponents;
	VkSamplerYcbcrModelConversion	suggestedYcbcrModel;
	VkSamplerYcbcrRange	suggestedYcbcrRange;
	VkChromaLocation	suggestedXChromaOffset;
	VkChromaLocation	suggestedYChromaOffset;
};

/*	VkCommandBufferInheritanceConditionalRenderingInfoEXT:
extends to:	VkCommandBufferInheritanceInfo*/
struct S_command_buffer_inheritance_conditional_rendering_info_EXT{
//365
	VkStructureType	sType;
	const	void*	pNext;
/*Whether this secondary command buffer may be executed during an active conditional rendering*/
	VkBool32	conditionalRenderingEnable;
};

/*	VkExternalFormatANDROID:
extends to:	VkImageCreateInfo,VkSamplerYcbcrConversionCreateInfo*/
struct S_external_format_ANDROID{
//366
	VkStructureType	sType;
	void*	pNext;
	uint64_t	externalFormat;
};

/*	VkPhysicalDevice8BitStorageFeaturesKHR:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_8bit_storage_features_KHR{
//367
	VkStructureType	sType;
	void*	pNext;
/*8-bit integer variables supported in StorageBuffer*/
	VkBool32	storageBuffer8BitAccess;
/*8-bit integer variables supported in StorageBuffer and Uniform*/
	VkBool32	uniformAndStorageBuffer8BitAccess;
/*8-bit integer variables supported in PushConstant*/
	VkBool32	storagePushConstant8;
};

/*	VkPhysicalDeviceConditionalRenderingFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_conditional_rendering_features_EXT{
//368
	VkStructureType	sType;
	void*	pNext;
	VkBool32	conditionalRendering;
	VkBool32	inheritedConditionalRendering;
};

/*	VkPhysicalDeviceVulkanMemoryModelFeaturesKHR:
returnd only
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_vulkan_memory_model_features_KHR{
//369
	VkStructureType	sType;
	void*	pNext;
	VkBool32	vulkanMemoryModel;
	VkBool32	vulkanMemoryModelDeviceScope;
};

/*	VkPhysicalDeviceShaderAtomicInt64FeaturesKHR:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_shader_atomic_int64_features_KHR{
//370
	VkStructureType	sType;
	void*	pNext;
	VkBool32	shaderBufferInt64Atomics;
	VkBool32	shaderSharedInt64Atomics;
};

/*	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_vertex_attribute_divisor_features_EXT{
//371
	VkStructureType	sType;
	void*	pNext;
	VkBool32	vertexAttributeInstanceRateDivisor;
	VkBool32	vertexAttributeInstanceRateZeroDivisor;
};

/*	VkQueueFamilyCheckpointPropertiesNV:
returnd only
extends to:	VkQueueFamilyProperties2*/
struct S_queue_family_checkpoint_properties_NV{
//372
	VkStructureType	sType;
	void*	pNext;
	VkPipelineStageFlags	checkpointExecutionStageMask;
};

/*	VkCheckpointDataNV:
returnd only*/
struct S_checkpoint_data_NV{
//373
	VkStructureType	sType;
	void*	pNext;
	VkPipelineStageFlagBits	stage;
	void*	pCheckpointMarker;
};

/*	VkImageViewASTCDecodeModeEXT:
extends to:	VkImageViewCreateInfo*/
struct S_image_view_astc_decode_mode_EXT{
//374
	VkStructureType	sType;
	const	void*	pNext;
	VkFormat	decodeMode;
};

/*	VkPhysicalDeviceASTCDecodeFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_astc_decode_features_EXT{
//375
	VkStructureType	sType;
	void*	pNext;
	VkBool32	decodeModeSharedExponent;
};

/*	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_representative_fragment_test_features_NV{
//376
	VkStructureType	sType;
	void*	pNext;
	VkBool32	representativeFragmentTest;
};

/*	VkPipelineRepresentativeFragmentTestStateCreateInfoNV:
extends to:	VkGraphicsPipelineCreateInfo*/
struct S_pipeline_representative_fragment_test_state_create_info_NV{
//377
	VkStructureType	sType;
	const	void*	pNext;
	VkBool32	representativeFragmentTestEnable;
};

/*	VkPhysicalDeviceExclusiveScissorFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_exclusive_scissor_features_NV{
//378
	VkStructureType	sType;
	void*	pNext;
	VkBool32	exclusiveScissor;
};

/*	VkPipelineViewportExclusiveScissorStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
struct S_pipeline_viewport_exclusive_scissor_state_create_info_NV{
//379
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	exclusiveScissorCount;
/*
len:	exclusiveScissorCount*/
	const	S_rect_2d*	pExclusiveScissors;
};

/*	VkPhysicalDeviceCornerSampledImageFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_corner_sampled_image_features_NV{
//380
	VkStructureType	sType;
	void*	pNext;
	VkBool32	cornerSampledImage;
};

/*	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_compute_shader_derivatives_features_NV{
//381
	VkStructureType	sType;
	void*	pNext;
	VkBool32	computeDerivativeGroupQuads;
	VkBool32	computeDerivativeGroupLinear;
};

/*	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_fragment_shader_barycentric_features_NV{
//382
	VkStructureType	sType;
	void*	pNext;
	VkBool32	fragmentShaderBarycentric;
};

/*	VkPhysicalDeviceShaderImageFootprintFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_shader_image_footprint_features_NV{
//383
	VkStructureType	sType;
	void*	pNext;
	VkBool32	imageFootprint;
};

/*	VkPipelineViewportShadingRateImageStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
struct S_pipeline_viewport_shading_rate_image_state_create_info_NV{
//384
	VkStructureType	sType;
	const	void*	pNext;
	VkBool32	shadingRateImageEnable;
	uint32_t	viewportCount;
/*
len:	viewportCount*/
	const	S_shading_rate_palette_NV*	pShadingRatePalettes;
};

/*	VkPhysicalDeviceShadingRateImageFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_shading_rate_image_features_NV{
//385
	VkStructureType	sType;
	void*	pNext;
	VkBool32	shadingRateImage;
	VkBool32	shadingRateCoarseSampleOrder;
};

/*	VkPhysicalDeviceShadingRateImagePropertiesNV:
returnd only
extends to:	VkPhysicalDeviceProperties*/
struct S_physical_device_shading_rate_image_properties_NV{
//386
	VkStructureType	sType;
	void*	pNext;
	S_extent_2d	shadingRateTexelSize;
	uint32_t	shadingRatePaletteSize;
	uint32_t	shadingRateMaxCoarseSamples;
};

/*	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
struct S_pipeline_viewport_coarse_sample_order_state_create_info_NV{
//387
	VkStructureType	sType;
	const	void*	pNext;
	VkCoarseSampleOrderTypeNV	sampleOrderType;
	uint32_t	customSampleOrderCount;
/*
len:	customSampleOrderCount*/
	const	S_coarse_sample_order_custom_NV*	pCustomSampleOrders;
};

/*	VkPhysicalDeviceMeshShaderFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
struct S_physical_device_mesh_shader_features_NV{
//388
	VkStructureType	sType;
	void*	pNext;
	VkBool32	taskShader;
	VkBool32	meshShader;
};

/*	VkPhysicalDeviceMeshShaderPropertiesNV:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_mesh_shader_properties_NV{
//389
	VkStructureType	sType;
	void*	pNext;
	uint32_t	maxDrawMeshTasksCount;
	uint32_t	maxTaskWorkGroupInvocations;
	uint32_t	maxTaskWorkGroupSize;
	uint32_t	maxTaskTotalMemorySize;
	uint32_t	maxTaskOutputCount;
	uint32_t	maxMeshWorkGroupInvocations;
	uint32_t	maxMeshWorkGroupSize;
	uint32_t	maxMeshTotalMemorySize;
	uint32_t	maxMeshOutputVertices;
	uint32_t	maxMeshOutputPrimitives;
	uint32_t	maxMeshMultiviewViewCount;
	uint32_t	meshOutputPerVertexGranularity;
	uint32_t	meshOutputPerPrimitiveGranularity;
};

/*	VkRaytracingPipelineCreateInfoNVX:*/
struct S_raytracing_pipeline_create_info_NVX{
//390
	VkStructureType	sType;
	const	void*	pNext;
/*Pipeline creation flags*/
	VkPipelineCreateFlags	flags;
	uint32_t	stageCount;
/*One entry for each active shader stage
len:	stageCount*/
	const	S_pipeline_shader_stage_create_info*	pStages;
/*One entry for each stage used as the query index and for grouping
len:	stageCount*/
	const	uint32_t*	pGroupNumbers;
	uint32_t	maxRecursionDepth;
/*Interface layout of the pipeline*/
	VkPipelineLayout	layout;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline	basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t	basePipelineIndex;
};

/*	VkGeometryTrianglesNVX:*/
struct S_geometry_triangles_NVX{
//391
	VkStructureType	sType;
	const	void*	pNext;
	VkBuffer	vertexData;
	VkDeviceSize	vertexOffset;
	uint32_t	vertexCount;
	VkDeviceSize	vertexStride;
/*VK_FORMAT_R32G32B32_SFLOAT, VK_FORMAT_R32G32B32A32_SFLOAT, VK_FORMAT_R16G16B16_SFLOAT, or VK_FORMAT_R16G16B16A16_SFLOAT*/
	VkFormat	vertexFormat;
	VkBuffer	indexData;
	VkDeviceSize	indexOffset;
	uint32_t	indexCount;
	VkIndexType	indexType;
/*Optional reference to array of floats representing a 3x4 row major affine transformation matrix.*/
	VkBuffer	transformData;
	VkDeviceSize	transformOffset;
};

/*	VkGeometryAABBNVX:*/
struct S_geometry_aabb_NVX{
//392
	VkStructureType	sType;
	const	void*	pNext;
	VkBuffer	aabbData;
	uint32_t	numAABBs;
/*Stride in bytes between AABBs*/
	uint32_t	stride;
/*Offset in bytes of the first AABB in aabbData*/
	VkDeviceSize	offset;
};

/*	VkGeometryNVX:*/
struct S_geometry_NVX{
//393
	VkStructureType	sType;
	const	void*	pNext;
	VkGeometryTypeNVX	geometryType;
	S_geometry_data_NVX	geometry;
	VkGeometryFlagsNVX	flags;
};

/*	VkAccelerationStructureCreateInfoNVX:*/
struct S_acceleration_structure_create_info_NVX{
//394
	VkStructureType	sType;
	const	void*	pNext;
	VkAccelerationStructureTypeNVX	type;
	VkBuildAccelerationStructureFlagsNVX	flags;
	VkDeviceSize	compactedSize;
	uint32_t	instanceCount;
	uint32_t	geometryCount;
/*
len:	geometryCount*/
	const	S_geometry_NVX*	pGeometries;
};

/*	VkBindAccelerationStructureMemoryInfoNVX:*/
struct S_bind_acceleration_structure_memory_info_NVX{
//395
	VkStructureType	sType;
	const	void*	pNext;
	VkAccelerationStructureNVX	accelerationStructure;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
	uint32_t	deviceIndexCount;
/*
len:	deviceIndexCount*/
	const	uint32_t*	pDeviceIndices;
};

/*	VkDescriptorAccelerationStructureInfoNVX:
extends to:	VkWriteDescriptorSet*/
struct S_descriptor_acceleration_structure_info_NVX{
//396
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	accelerationStructureCount;
/*
len:	accelerationStructureCount*/
	const	VkAccelerationStructureNVX*	pAccelerationStructures;
};

/*	VkAccelerationStructureMemoryRequirementsInfoNVX:*/
struct S_acceleration_structure_memory_requirements_info_NVX{
//397
	VkStructureType	sType;
	const	void*	pNext;
	VkAccelerationStructureNVX	accelerationStructure;
};

/*	VkPhysicalDeviceRaytracingPropertiesNVX:
extends to:	VkPhysicalDeviceProperties2*/
struct S_physical_device_raytracing_properties_NVX{
//398
	VkStructureType	sType;
	void*	pNext;
	uint32_t	shaderHeaderSize;
	uint32_t	maxRecursionDepth;
	uint32_t	maxGeometryCount;
};

/*	VkDrmFormatModifierPropertiesListEXT:
extends to:	VkFormatProperties2*/
struct S_drm_format_modifier_properties_list_EXT{
//399
	VkStructureType	sType;
	void*	pNext;
	uint32_t	drmFormatModifierCount;
/*
len:	drmFormatModifierCount*/
	S_drm_format_modifier_properties_EXT*	pDrmFormatModifierProperties;
};

/*	VkPhysicalDeviceImageDrmFormatModifierInfoEXT:
extends to:	VkPhysicalDeviceImageFormatInfo2*/
struct S_physical_device_image_drm_format_modifier_info_EXT{
//400
	VkStructureType	sType;
	const	void*	pNext;
	uint64_t	drmFormatModifier;
};

/*	VkImageDrmFormatModifierListCreateInfoEXT:
extends to:	VkImageCreateInfo*/
struct S_image_drm_format_modifier_list_create_info_EXT{
//401
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	drmFormatModifierCount;
/*
len:	drmFormatModifierCount*/
	const	uint64_t*	pDrmFormatModifiers;
};

/*	VkImageDrmFormatModifierExplicitCreateInfoEXT:
extends to:	VkImageCreateInfo*/
struct S_image_drm_format_modifier_explicit_create_info_EXT{
//402
	VkStructureType	sType;
	const	void*	pNext;
	uint64_t	drmFormatModifier;
	uint32_t	drmFormatModifierPlaneCount;
/*
len:	drmFormatModifierPlaneCount*/
	const	S_subresource_layout*	pPlaneLayouts;
};

/*	VkImageDrmFormatModifierPropertiesEXT:
returnd only*/
struct S_image_drm_format_modifier_properties_EXT{
//403
	VkStructureType	sType;
	void*	pNext;
	uint64_t	drmFormatModifier;
};

/*	VkPhysicalDeviceProperties:
returnd only
extends:
	S_physical_device_shading_rate_image_properties_NV*/
struct S_physical_device_properties{
//404
	uint32_t	apiVersion;
	uint32_t	driverVersion;
	uint32_t	vendorID;
	uint32_t	deviceID;
	VkPhysicalDeviceType	deviceType;
	char	deviceName;
	uint8_t	pipelineCacheUUID;
	S_physical_device_limits	limits;
	S_physical_device_sparse_properties	sparseProperties;
};

/*	VkDeviceQueueCreateInfo:
extends:
	S_device_queue_global_priority_create_info_EXT*/
struct S_device_queue_create_info{
//405
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceQueueCreateFlags	flags;
	uint32_t	queueFamilyIndex;
	uint32_t	queueCount;
/*
len:	queueCount*/
	const	float*	pQueuePriorities;
};

/*	VkInstanceCreateInfo:
extends:
	S_debug_report_callback_create_info_EXT
	S_validation_flags_EXT
	S_debug_utils_messenger_create_info_EXT*/
struct S_instance_create_info{
//406
	VkStructureType	sType;
	const	void*	pNext;
	VkInstanceCreateFlags	flags;
	const	S_application_info*	pApplicationInfo;
	uint32_t	enabledLayerCount;
/*Ordered list of layer names to be enabled
len:	enabledLayerCount,null-terminated*/
	const	char*	const*	ppEnabledLayerNames;
	uint32_t	enabledExtensionCount;
/*Extension names to be enabled
len:	enabledExtensionCount,null-terminated*/
	const	char*	const*	ppEnabledExtensionNames;
};

/*	VkMemoryAllocateInfo:
extends:
	S_dedicated_allocation_memory_allocate_info_NV
	S_export_memory_allocate_info_NV
	S_import_memory_win32_handle_info_NV
	S_export_memory_win32_handle_info_NV
	S_export_memory_allocate_info
	S_import_memory_win32_handle_info_KHR
	S_export_memory_win32_handle_info_KHR
	S_import_memory_fd_info_KHR
	S_memory_allocate_flags_info
	S_memory_dedicated_allocate_info
	S_import_memory_host_pointer_info_EXT
	S_import_android_hardware_buffer_info_ANDROID*/
struct S_memory_allocate_info{
//407
	VkStructureType	sType;
	const	void*	pNext;
/*Size of memory allocation*/
	VkDeviceSize	allocationSize;
/*Index of the of the memory type to allocate from*/
	uint32_t	memoryTypeIndex;
};

/*	VkWriteDescriptorSet:
extends:
	S_write_descriptor_set_inline_uniform_block_EXT
	S_descriptor_acceleration_structure_info_NVX*/
struct S_write_descriptor_set{
//408
	VkStructureType	sType;
	const	void*	pNext;
/*Destination descriptor set*/
	VkDescriptorSet	dstSet;
/*Binding within the destination descriptor set to write*/
	uint32_t	dstBinding;
/*Array element within the destination binding to write*/
	uint32_t	dstArrayElement;
/*Number of descriptors to write (determines the size of the array pointed by pDescriptors)*/
	uint32_t	descriptorCount;
/*Descriptor type to write (determines which members of the array pointed by pDescriptors are going to be used)*/
	VkDescriptorType	descriptorType;
/*Sampler, image view, and layout for SAMPLER, COMBINED_IMAGE_SAMPLER, {SAMPLED,STORAGE}_IMAGE, and INPUT_ATTACHMENT descriptor types.
len:	descriptorCount*/
	const	S_descriptor_image_info*	pImageInfo;
/*Raw buffer, size, and offset for {UNIFORM,STORAGE}_BUFFER[_DYNAMIC] descriptor types.
len:	descriptorCount*/
	const	S_descriptor_buffer_info*	pBufferInfo;
/*Buffer view to write to the descriptor for {UNIFORM,STORAGE}_TEXEL_BUFFER descriptor types.
len:	descriptorCount*/
	const	VkBufferView*	pTexelBufferView;
};

/*	VkBufferCreateInfo:
extends:
	S_dedicated_allocation_buffer_create_info_NV
	S_external_memory_buffer_create_info*/
struct S_buffer_create_info{
//409
	VkStructureType	sType;
	const	void*	pNext;
/*Buffer creation flags*/
	VkBufferCreateFlags	flags;
/*Specified in bytes*/
	VkDeviceSize	size;
/*Buffer usage flags*/
	VkBufferUsageFlags	usage;
	VkSharingMode	sharingMode;
	uint32_t	queueFamilyIndexCount;
/*
len:	queueFamilyIndexCount*/
	const	uint32_t*	pQueueFamilyIndices;
};

/*	VkImageMemoryBarrier:
extends:
	S_sample_locations_info_EXT*/
struct S_image_memory_barrier{
//410
	VkStructureType	sType;
	const	void*	pNext;
/*Memory accesses from the source of the dependency to synchronize*/
	VkAccessFlags	srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	VkAccessFlags	dstAccessMask;
/*Current layout of the image*/
	VkImageLayout	oldLayout;
/*New layout to transition the image to*/
	VkImageLayout	newLayout;
/*Queue family to transition ownership from*/
	uint32_t	srcQueueFamilyIndex;
/*Queue family to transition ownership to*/
	uint32_t	dstQueueFamilyIndex;
/*Image to sync*/
	VkImage	image;
/*Subresource range to sync*/
	S_image_subresource_range	subresourceRange;
};

/*	VkImageCreateInfo:
extends:
	S_dedicated_allocation_image_create_info_NV
	S_external_memory_image_create_info_NV
	S_external_memory_image_create_info
	S_image_swapchain_create_info_KHR
	S_image_format_list_create_info_KHR
	S_external_format_ANDROID
	S_image_drm_format_modifier_list_create_info_EXT
	S_image_drm_format_modifier_explicit_create_info_EXT*/
struct S_image_create_info{
//411
	VkStructureType	sType;
	const	void*	pNext;
/*Image creation flags*/
	VkImageCreateFlags	flags;
	VkImageType	imageType;
	VkFormat	format;
	S_extent_3d	extent;
	uint32_t	mipLevels;
	uint32_t	arrayLayers;
	VkSampleCountFlagBits	samples;
	VkImageTiling	tiling;
/*Image usage flags*/
	VkImageUsageFlags	usage;
/*Cross-queue-family sharing mode*/
	VkSharingMode	sharingMode;
/*Number of queue families to share across*/
	uint32_t	queueFamilyIndexCount;
/*Array of queue family indices to share across
len:	queueFamilyIndexCount*/
	const	uint32_t*	pQueueFamilyIndices;
/*Initial image layout for all subresources*/
	VkImageLayout	initialLayout;
};

/*	VkImageViewCreateInfo:
extends:
	S_image_view_usage_create_info
	S_sampler_ycbcr_conversion_info
	S_image_view_astc_decode_mode_EXT*/
struct S_image_view_create_info{
//412
	VkStructureType	sType;
	const	void*	pNext;
	VkImageViewCreateFlags	flags;
	VkImage	image;
	VkImageViewType	viewType;
	VkFormat	format;
	S_component_mapping	components;
	S_image_subresource_range	subresourceRange;
};

/*	VkBindSparseInfo:
extends:
	S_device_group_bind_sparse_info*/
struct S_bind_sparse_info{
//413
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const	VkSemaphore*	pWaitSemaphores;
	uint32_t	bufferBindCount;
/*
len:	bufferBindCount*/
	const	S_sparse_buffer_memory_bind_info*	pBufferBinds;
	uint32_t	imageOpaqueBindCount;
/*
len:	imageOpaqueBindCount*/
	const	S_sparse_image_opaque_memory_bind_info*	pImageOpaqueBinds;
	uint32_t	imageBindCount;
/*
len:	imageBindCount*/
	const	S_sparse_image_memory_bind_info*	pImageBinds;
	uint32_t	signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const	VkSemaphore*	pSignalSemaphores;
};

/*	VkShaderModuleCreateInfo:
extends:
	S_shader_module_validation_cache_create_info_EXT*/
struct S_shader_module_create_info{
//414
	VkStructureType	sType;
	const	void*	pNext;
	VkShaderModuleCreateFlags	flags;
/*Specified in bytes*/
	size_t	codeSize;
/*Binary code of size codeSizealt
len:	latexmath:[codeSize \over 4]*/
	const	uint32_t*	pCode;
};

/*	VkDescriptorSetLayoutCreateInfo:
extends:
	S_descriptor_set_layout_binding_flags_create_info_EXT*/
struct S_descriptor_set_layout_create_info{
//415
	VkStructureType	sType;
	const	void*	pNext;
	VkDescriptorSetLayoutCreateFlags	flags;
/*Number of bindings in the descriptor set layout*/
	uint32_t	bindingCount;
/*Array of descriptor set layout bindings
len:	bindingCount*/
	const	S_descriptor_set_layout_binding*	pBindings;
};

/*	VkDescriptorPoolCreateInfo:
extends:
	S_descriptor_pool_inline_uniform_block_create_info_EXT*/
struct S_descriptor_pool_create_info{
//416
	VkStructureType	sType;
	const	void*	pNext;
	VkDescriptorPoolCreateFlags	flags;
	uint32_t	maxSets;
	uint32_t	poolSizeCount;
/*
len:	poolSizeCount*/
	const	S_descriptor_pool_size*	pPoolSizes;
};

/*	VkDescriptorSetAllocateInfo:
extends:
	S_descriptor_set_variable_descriptor_count_allocate_info_EXT*/
struct S_descriptor_set_allocate_info{
//417
	VkStructureType	sType;
	const	void*	pNext;
	VkDescriptorPool	descriptorPool;
	uint32_t	descriptorSetCount;
/*
len:	descriptorSetCount*/
	const	VkDescriptorSetLayout*	pSetLayouts;
};

/*	VkPipelineVertexInputStateCreateInfo:
extends:
	S_pipeline_vertex_input_divisor_state_create_info_EXT*/
struct S_pipeline_vertex_input_state_create_info{
//418
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineVertexInputStateCreateFlags	flags;
/*number of bindings*/
	uint32_t	vertexBindingDescriptionCount;
/*
len:	vertexBindingDescriptionCount*/
	const	S_vertex_input_binding_description*	pVertexBindingDescriptions;
/*number of attributes*/
	uint32_t	vertexAttributeDescriptionCount;
/*
len:	vertexAttributeDescriptionCount*/
	const	S_vertex_input_attribute_description*	pVertexAttributeDescriptions;
};

/*	VkPipelineTessellationStateCreateInfo:
extends:
	S_pipeline_tessellation_domain_origin_state_create_info*/
struct S_pipeline_tessellation_state_create_info{
//419
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineTessellationStateCreateFlags	flags;
	uint32_t	patchControlPoints;
};

/*	VkPipelineViewportStateCreateInfo:
extends:
	S_pipeline_viewport_w_scaling_state_create_info_NV
	S_pipeline_viewport_swizzle_state_create_info_NV
	S_pipeline_viewport_exclusive_scissor_state_create_info_NV
	S_pipeline_viewport_shading_rate_image_state_create_info_NV
	S_pipeline_viewport_coarse_sample_order_state_create_info_NV*/
struct S_pipeline_viewport_state_create_info{
//420
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineViewportStateCreateFlags	flags;
	uint32_t	viewportCount;
/*
len:	viewportCount*/
	const	S_viewport*	pViewports;
	uint32_t	scissorCount;
/*
len:	scissorCount*/
	const	S_rect_2d*	pScissors;
};

/*	VkPipelineRasterizationStateCreateInfo:
extends:
	S_pipeline_rasterization_state_rasterization_order_AMD
	S_pipeline_rasterization_conservative_state_create_info_EXT*/
struct S_pipeline_rasterization_state_create_info{
//421
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineRasterizationStateCreateFlags	flags;
	VkBool32	depthClampEnable;
	VkBool32	rasterizerDiscardEnable;
/*optional (GL45)*/
	VkPolygonMode	polygonMode;
	VkCullModeFlags	cullMode;
	VkFrontFace	frontFace;
	VkBool32	depthBiasEnable;
	float	depthBiasConstantFactor;
	float	depthBiasClamp;
	float	depthBiasSlopeFactor;
	float	lineWidth;
};

/*	VkPipelineMultisampleStateCreateInfo:
extends:
	S_pipeline_coverage_to_color_state_create_info_NV
	S_pipeline_sample_locations_state_create_info_EXT
	S_pipeline_coverage_modulation_state_create_info_NV*/
struct S_pipeline_multisample_state_create_info{
//422
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineMultisampleStateCreateFlags	flags;
/*Number of samples used for rasterization*/
	VkSampleCountFlagBits	rasterizationSamples;
/*optional (GL45)*/
	VkBool32	sampleShadingEnable;
/*optional (GL45)*/
	float	minSampleShading;
/*Array of sampleMask wordsalt
len:	latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil]*/
	const	VkSampleMask*	pSampleMask;
	VkBool32	alphaToCoverageEnable;
	VkBool32	alphaToOneEnable;
};

/*	VkPipelineColorBlendStateCreateInfo:
extends:
	S_pipeline_color_blend_advanced_state_create_info_EXT*/
struct S_pipeline_color_blend_state_create_info{
//423
	VkStructureType	sType;
	const	void*	pNext;
	VkPipelineColorBlendStateCreateFlags	flags;
	VkBool32	logicOpEnable;
	VkLogicOp	logicOp;
/*# of pAttachments*/
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	S_pipeline_color_blend_attachment_state*	pAttachments;
	float	blendConstants;
};

/*	VkGraphicsPipelineCreateInfo:
extends:
	S_pipeline_discard_rectangle_state_create_info_EXT
	S_pipeline_representative_fragment_test_state_create_info_NV*/
struct S_graphics_pipeline_create_info{
//424
	VkStructureType	sType;
	const	void*	pNext;
/*Pipeline creation flags*/
	VkPipelineCreateFlags	flags;
	uint32_t	stageCount;
/*One entry for each active shader stage
len:	stageCount*/
	const	S_pipeline_shader_stage_create_info*	pStages;
	const	S_pipeline_vertex_input_state_create_info*	pVertexInputState;
	const	S_pipeline_input_assembly_state_create_info*	pInputAssemblyState;
	const	S_pipeline_tessellation_state_create_info*	pTessellationState;
	const	S_pipeline_viewport_state_create_info*	pViewportState;
	const	S_pipeline_rasterization_state_create_info*	pRasterizationState;
	const	S_pipeline_multisample_state_create_info*	pMultisampleState;
	const	S_pipeline_depth_stencil_state_create_info*	pDepthStencilState;
	const	S_pipeline_color_blend_state_create_info*	pColorBlendState;
	const	S_pipeline_dynamic_state_create_info*	pDynamicState;
/*Interface layout of the pipeline*/
	VkPipelineLayout	layout;
	VkRenderPass	renderPass;
	uint32_t	subpass;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline	basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t	basePipelineIndex;
};

/*	VkSamplerCreateInfo:
extends:
	S_sampler_ycbcr_conversion_info
	S_sampler_reduction_mode_create_info_EXT*/
struct S_sampler_create_info{
//425
	VkStructureType	sType;
	const	void*	pNext;
	VkSamplerCreateFlags	flags;
/*Filter mode for magnification*/
	VkFilter	magFilter;
/*Filter mode for minifiation*/
	VkFilter	minFilter;
/*Mipmap selection mode*/
	VkSamplerMipmapMode	mipmapMode;
	VkSamplerAddressMode	addressModeU;
	VkSamplerAddressMode	addressModeV;
	VkSamplerAddressMode	addressModeW;
	float	mipLodBias;
	VkBool32	anisotropyEnable;
	float	maxAnisotropy;
	VkBool32	compareEnable;
	VkCompareOp	compareOp;
	float	minLod;
	float	maxLod;
	VkBorderColor	borderColor;
	VkBool32	unnormalizedCoordinates;
};

/*	VkCommandBufferInheritanceInfo:
extends:
	S_command_buffer_inheritance_conditional_rendering_info_EXT*/
struct S_command_buffer_inheritance_info{
//426
	VkStructureType	sType;
	const	void*	pNext;
/*Render pass for secondary command buffers*/
	VkRenderPass	renderPass;
	uint32_t	subpass;
/*Framebuffer for secondary command buffers*/
	VkFramebuffer	framebuffer;
/*Whether this secondary command buffer may be executed during an occlusion query*/
	VkBool32	occlusionQueryEnable;
/*Query flags used by this secondary command buffer, if executed during an occlusion query*/
	VkQueryControlFlags	queryFlags;
/*Pipeline statistics that may be counted for this secondary command buffer*/
	VkQueryPipelineStatisticFlags	pipelineStatistics;
};

/*	VkCommandBufferBeginInfo:
extends:
	S_device_group_command_buffer_begin_info*/
struct S_command_buffer_begin_info{
//427
	VkStructureType	sType;
	const	void*	pNext;
/*Command buffer usage flags*/
	VkCommandBufferUsageFlags	flags;
/*Pointer to inheritance info for secondary command buffers*/
	const	S_command_buffer_inheritance_info*	pInheritanceInfo;
};

/*	VkRenderPassBeginInfo:
extends:
	S_device_group_render_pass_begin_info
	S_render_pass_sample_locations_begin_info_EXT*/
struct S_render_pass_begin_info{
//428
	VkStructureType	sType;
	const	void*	pNext;
	VkRenderPass	renderPass;
	VkFramebuffer	framebuffer;
	S_rect_2d	renderArea;
	uint32_t	clearValueCount;
/*
len:	clearValueCount*/
	const	VkClearValue*	pClearValues;
};

/*	VkRenderPassCreateInfo:
extends:
	S_render_pass_multiview_create_info
	S_render_pass_input_attachment_aspect_create_info*/
struct S_render_pass_create_info{
//429
	VkStructureType	sType;
	const	void*	pNext;
	VkRenderPassCreateFlags	flags;
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	S_attachment_description*	pAttachments;
	uint32_t	subpassCount;
/*
len:	subpassCount*/
	const	S_subpass_description*	pSubpasses;
	uint32_t	dependencyCount;
/*
len:	dependencyCount*/
	const	S_subpass_dependency*	pDependencies;
};

/*	VkFenceCreateInfo:
extends:
	S_export_fence_create_info
	S_export_fence_win32_handle_info_KHR*/
struct S_fence_create_info{
//430
	VkStructureType	sType;
	const	void*	pNext;
/*Fence creation flags*/
	VkFenceCreateFlags	flags;
};

/*	VkSemaphoreCreateInfo:
extends:
	S_export_semaphore_create_info
	S_export_semaphore_win32_handle_info_KHR*/
struct S_semaphore_create_info{
//431
	VkStructureType	sType;
	const	void*	pNext;
/*Semaphore creation flags*/
	VkSemaphoreCreateFlags	flags;
};

/*	VkSubmitInfo:
extends:
	S_win32_keyed_mutex_acquire_release_info_NV
	S_win32_keyed_mutex_acquire_release_info_KHR
	S_d_3d12_fence_submit_info_KHR
	S_device_group_submit_info
	S_protected_submit_info*/
struct S_submit_info{
//432
	VkStructureType	sType;
	const	void*	pNext;
	uint32_t	waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const	VkSemaphore*	pWaitSemaphores;
/*
len:	waitSemaphoreCount*/
	const	VkPipelineStageFlags*	pWaitDstStageMask;
	uint32_t	commandBufferCount;
/*
len:	commandBufferCount*/
	const	VkCommandBuffer*	pCommandBuffers;
	uint32_t	signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const	VkSemaphore*	pSignalSemaphores;
};

/*	VkSwapchainCreateInfoKHR:
extends:
	S_swapchain_counter_create_info_EXT
	S_device_group_swapchain_create_info_KHR*/
struct S_swapchain_create_info_KHR{
//433
	VkStructureType	sType;
	const	void*	pNext;
	VkSwapchainCreateFlagsKHR	flags;
/*The swapchain's target surface*/
	VkSurfaceKHR	surface;
/*Minimum number of presentation images the application needs*/
	uint32_t	minImageCount;
/*Format of the presentation images*/
	VkFormat	imageFormat;
/*Colorspace of the presentation images*/
	VkColorSpaceKHR	imageColorSpace;
/*Dimensions of the presentation images*/
	S_extent_2d	imageExtent;
/*Determines the number of views for multiview/stereo presentation*/
	uint32_t	imageArrayLayers;
/*Bits indicating how the presentation images will be used*/
	VkImageUsageFlags	imageUsage;
/*Sharing mode used for the presentation images*/
	VkSharingMode	imageSharingMode;
/*Number of queue families having access to the images in case of concurrent sharing mode*/
	uint32_t	queueFamilyIndexCount;
/*Array of queue family indices having access to the images in case of concurrent sharing mode
len:	queueFamilyIndexCount*/
	const	uint32_t*	pQueueFamilyIndices;
/*The transform, relative to the device's natural orientation, applied to the image content prior to presentation*/
	VkSurfaceTransformFlagBitsKHR	preTransform;
/*The alpha blending mode used when compositing this surface with other surfaces in the window system*/
	VkCompositeAlphaFlagBitsKHR	compositeAlpha;
/*Which presentation mode to use for presents on this swap chain*/
	VkPresentModeKHR	presentMode;
/*Specifies whether presentable images may be affected by window clip regions*/
	VkBool32	clipped;
/*Existing swap chain to replace, if any*/
	VkSwapchainKHR	oldSwapchain;
};

/*	VkPresentInfoKHR:
extends:
	S_display_present_info_KHR
	S_present_regions_KHR
	S_device_group_present_info_KHR
	S_present_times_info_GOOGLE*/
struct S_present_info_KHR{
//434
	VkStructureType	sType;
	const	void*	pNext;
/*Number of semaphores to wait for before presenting*/
	uint32_t	waitSemaphoreCount;
/*Semaphores to wait for before presenting
len:	waitSemaphoreCount*/
	const	VkSemaphore*	pWaitSemaphores;
/*Number of swapchains to present in this call*/
	uint32_t	swapchainCount;
/*Swapchains to present an image from
len:	swapchainCount*/
	const	VkSwapchainKHR*	pSwapchains;
/*Indices of which presentable images to present
len:	swapchainCount*/
	const	uint32_t*	pImageIndices;
/*Optional (i.e. if non-NULL) VkResult for each swapchain
len:	swapchainCount*/
	VkResult*	pResults;
};

/*	VkPhysicalDeviceFeatures2:
extends to:	VkDeviceCreateInfo
extends:
	S_physical_device_variable_pointer_features
	S_physical_device_multiview_features
	S_physical_device_16bit_storage_features
	S_physical_device_sampler_ycbcr_conversion_features
	S_physical_device_protected_memory_features
	S_physical_device_blend_operation_advanced_features_EXT
	S_physical_device_inline_uniform_block_features_EXT
	S_physical_device_shader_draw_parameter_features
	S_physical_device_descriptor_indexing_features_EXT
	S_physical_device_8bit_storage_features_KHR
	S_physical_device_conditional_rendering_features_EXT
	S_physical_device_vulkan_memory_model_features_KHR
	S_physical_device_shader_atomic_int64_features_KHR
	S_physical_device_vertex_attribute_divisor_features_EXT
	S_physical_device_astc_decode_features_EXT
	S_physical_device_representative_fragment_test_features_NV
	S_physical_device_exclusive_scissor_features_NV
	S_physical_device_corner_sampled_image_features_NV
	S_physical_device_compute_shader_derivatives_features_NV
	S_physical_device_fragment_shader_barycentric_features_NV
	S_physical_device_shader_image_footprint_features_NV
	S_physical_device_shading_rate_image_features_NV
	S_physical_device_mesh_shader_features_NV*/
struct S_physical_device_features2{
//435
	VkStructureType	sType;
	void*	pNext;
	S_physical_device_features	features;
};

/*	VkPhysicalDeviceProperties2:
returnd only
extends:
	S_physical_device_push_descriptor_properties_KHR
	S_physical_device_driver_properties_KHR
	S_physical_device_id_properties
	S_physical_device_multiview_properties
	S_physical_device_discard_rectangle_properties_EXT
	S_physical_device_multiview_per_view_attributes_properties_NVX
	S_physical_device_subgroup_properties
	S_physical_device_point_clipping_properties
	S_physical_device_protected_memory_properties
	S_physical_device_sampler_filter_minmax_properties_EXT
	S_physical_device_sample_locations_properties_EXT
	S_physical_device_blend_operation_advanced_properties_EXT
	S_physical_device_inline_uniform_block_properties_EXT
	S_physical_device_maintenance3_properties
	S_physical_device_external_memory_host_properties_EXT
	S_physical_device_conservative_rasterization_properties_EXT
	S_physical_device_shader_core_properties_AMD
	S_physical_device_descriptor_indexing_properties_EXT
	S_physical_device_vertex_attribute_divisor_properties_EXT
	S_physical_device_mesh_shader_properties_NV
	S_physical_device_raytracing_properties_NVX*/
struct S_physical_device_properties2{
//436
	VkStructureType	sType;
	void*	pNext;
	S_physical_device_properties	properties;
};

/*	VkFormatProperties2:
returnd only
extends:
	S_drm_format_modifier_properties_list_EXT*/
struct S_format_properties2{
//437
	VkStructureType	sType;
	void*	pNext;
	S_format_properties	formatProperties;
};

/*	VkImageFormatProperties2:
returnd only
extends:
	S_external_image_format_properties
	S_sampler_ycbcr_conversion_image_format_properties
	S_texture_lod_gather_format_properties_AMD
	S_android_hardware_buffer_usage_ANDROID*/
struct S_image_format_properties2{
//438
	VkStructureType	sType;
	void*	pNext;
	S_image_format_properties	imageFormatProperties;
};

/*	VkPhysicalDeviceImageFormatInfo2:
extends:
	S_physical_device_external_image_format_info
	S_physical_device_image_drm_format_modifier_info_EXT*/
struct S_physical_device_image_format_info2{
//439
	VkStructureType	sType;
	const	void*	pNext;
	VkFormat	format;
	VkImageType	type;
	VkImageTiling	tiling;
	VkImageUsageFlags	usage;
	VkImageCreateFlags	flags;
};

/*	VkQueueFamilyProperties2:
returnd only
extends:
	S_queue_family_checkpoint_properties_NV*/
struct S_queue_family_properties2{
//440
	VkStructureType	sType;
	void*	pNext;
	S_queue_family_properties	queueFamilyProperties;
};

/*	VkBindBufferMemoryInfo:
extends:
	S_bind_buffer_memory_device_group_info*/
struct S_bind_buffer_memory_info{
//441
	VkStructureType	sType;
	const	void*	pNext;
	VkBuffer	buffer;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
};

/*	VkBindImageMemoryInfo:
extends:
	S_bind_image_memory_device_group_info
	S_bind_image_memory_swapchain_info_KHR
	S_bind_image_plane_memory_info*/
struct S_bind_image_memory_info{
//442
	VkStructureType	sType;
	const	void*	pNext;
	VkImage	image;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
};

/*	VkSurfaceCapabilities2KHR:
returnd only
extends:
	S_shared_present_surface_capabilities_KHR*/
struct S_surface_capabilities2_KHR{
//443
	VkStructureType	sType;
	void*	pNext;
	S_surface_capabilities_KHR	surfaceCapabilities;
};

/*	VkImageMemoryRequirementsInfo2:
extends:
	S_image_plane_memory_requirements_info*/
struct S_image_memory_requirements_info2{
//444
	VkStructureType	sType;
	const	void*	pNext;
	VkImage	image;
};

/*	VkMemoryRequirements2:
returnd only
extends:
	S_memory_dedicated_requirements*/
struct S_memory_requirements2{
//445
	VkStructureType	sType;
	void*	pNext;
	S_memory_requirements	memoryRequirements;
};

/*	VkSamplerYcbcrConversionCreateInfo:
extends:
	S_external_format_ANDROID*/
struct S_sampler_ycbcr_conversion_create_info{
//446
	VkStructureType	sType;
	const	void*	pNext;
	VkFormat	format;
	VkSamplerYcbcrModelConversion	ycbcrModel;
	VkSamplerYcbcrRange	ycbcrRange;
	S_component_mapping	components;
	VkChromaLocation	xChromaOffset;
	VkChromaLocation	yChromaOffset;
	VkFilter	chromaFilter;
	VkBool32	forceExplicitReconstruction;
};

/*	VkDescriptorSetLayoutSupport:
returnd only
extends:
	S_descriptor_set_variable_descriptor_count_layout_support_EXT*/
struct S_descriptor_set_layout_support{
//447
	VkStructureType	sType;
	void*	pNext;
	VkBool32	supported;
};

/*	VkAndroidHardwareBufferPropertiesANDROID:
returnd only
extends:
	S_android_hardware_buffer_format_properties_ANDROID*/
struct S_android_hardware_buffer_properties_ANDROID{
//448
	VkStructureType	sType;
	void*	pNext;
	VkDeviceSize	allocationSize;
	uint32_t	memoryTypeBits;
};

/*	VkDeviceCreateInfo:
extends:
	S_physical_device_features2
	S_physical_device_variable_pointer_features
	S_physical_device_multiview_features
	S_device_group_device_create_info
	S_physical_device_16bit_storage_features
	S_physical_device_sampler_ycbcr_conversion_features
	S_physical_device_protected_memory_features
	S_physical_device_blend_operation_advanced_features_EXT
	S_physical_device_inline_uniform_block_features_EXT
	S_physical_device_shader_draw_parameter_features
	S_physical_device_descriptor_indexing_features_EXT
	S_physical_device_8bit_storage_features_KHR
	S_physical_device_conditional_rendering_features_EXT
	S_physical_device_vulkan_memory_model_features_KHR
	S_physical_device_shader_atomic_int64_features_KHR
	S_physical_device_vertex_attribute_divisor_features_EXT
	S_physical_device_astc_decode_features_EXT
	S_physical_device_representative_fragment_test_features_NV
	S_physical_device_exclusive_scissor_features_NV
	S_physical_device_corner_sampled_image_features_NV
	S_physical_device_compute_shader_derivatives_features_NV
	S_physical_device_fragment_shader_barycentric_features_NV
	S_physical_device_shader_image_footprint_features_NV
	S_physical_device_shading_rate_image_features_NV
	S_physical_device_mesh_shader_features_NV*/
struct S_device_create_info{
//449
	VkStructureType	sType;
	const	void*	pNext;
	VkDeviceCreateFlags	flags;
	uint32_t	queueCreateInfoCount;
/*
len:	queueCreateInfoCount*/
	const	S_device_queue_create_info*	pQueueCreateInfos;
	uint32_t	enabledLayerCount;
/*Ordered list of layer names to be enabled
len:	enabledLayerCount,null-terminated*/
	const	char*	const*	ppEnabledLayerNames;
	uint32_t	enabledExtensionCount;
/*
len:	enabledExtensionCount,null-terminated*/
	const	char*	const*	ppEnabledExtensionNames;
	const	S_physical_device_features*	pEnabledFeatures;
};


//449
}}

