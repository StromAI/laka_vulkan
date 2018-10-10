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
#include "vk_enums.h"
#include "vk_bits.h"
namespace laka { namespace vk {
using S_physical_device_features2_KHR = 
				VkPhysicalDeviceFeatures2KHR;//1

using S_physical_device_properties2_KHR = 
				VkPhysicalDeviceProperties2KHR;//2

using S_format_properties2_KHR = 
				VkFormatProperties2KHR;//3

using S_image_format_properties2_KHR = 
				VkImageFormatProperties2KHR;//4

using S_physical_device_image_format_info2_KHR = 
				VkPhysicalDeviceImageFormatInfo2KHR;//5

using S_queue_family_properties2_KHR = 
				VkQueueFamilyProperties2KHR;//6

using S_physical_device_memory_properties2_KHR = 
				VkPhysicalDeviceMemoryProperties2KHR;//7

using S_sparse_image_format_properties2_KHR = 
				VkSparseImageFormatProperties2KHR;//8

using S_physical_device_sparse_image_format_info2_KHR = 
				VkPhysicalDeviceSparseImageFormatInfo2KHR;//9

using S_physical_device_variable_pointer_features_KHR = 
				VkPhysicalDeviceVariablePointerFeaturesKHR;//10

using S_external_memory_properties_KHR = 
				VkExternalMemoryPropertiesKHR;//11

using S_physical_device_external_image_format_info_KHR = 
				VkPhysicalDeviceExternalImageFormatInfoKHR;//12

using S_external_image_format_properties_KHR = 
				VkExternalImageFormatPropertiesKHR;//13

using S_physical_device_external_buffer_info_KHR = 
				VkPhysicalDeviceExternalBufferInfoKHR;//14

using S_external_buffer_properties_KHR = 
				VkExternalBufferPropertiesKHR;//15

using S_physical_device_id_properties_KHR = 
				VkPhysicalDeviceIDPropertiesKHR;//16

using S_external_memory_image_create_info_KHR = 
				VkExternalMemoryImageCreateInfoKHR;//17

using S_external_memory_buffer_create_info_KHR = 
				VkExternalMemoryBufferCreateInfoKHR;//18

using S_export_memory_allocate_info_KHR = 
				VkExportMemoryAllocateInfoKHR;//19

using S_physical_device_external_semaphore_info_KHR = 
				VkPhysicalDeviceExternalSemaphoreInfoKHR;//20

using S_external_semaphore_properties_KHR = 
				VkExternalSemaphorePropertiesKHR;//21

using S_export_semaphore_create_info_KHR = 
				VkExportSemaphoreCreateInfoKHR;//22

using S_physical_device_external_fence_info_KHR = 
				VkPhysicalDeviceExternalFenceInfoKHR;//23

using S_external_fence_properties_KHR = 
				VkExternalFencePropertiesKHR;//24

using S_export_fence_create_info_KHR = 
				VkExportFenceCreateInfoKHR;//25

using S_physical_device_multiview_features_KHR = 
				VkPhysicalDeviceMultiviewFeaturesKHR;//26

using S_physical_device_multiview_properties_KHR = 
				VkPhysicalDeviceMultiviewPropertiesKHR;//27

using S_render_pass_multiview_create_info_KHR = 
				VkRenderPassMultiviewCreateInfoKHR;//28

using S_physical_device_group_properties_KHR = 
				VkPhysicalDeviceGroupPropertiesKHR;//29

using S_memory_allocate_flags_info_KHR = 
				VkMemoryAllocateFlagsInfoKHR;//30

using S_bind_buffer_memory_info_KHR = 
				VkBindBufferMemoryInfoKHR;//31

using S_bind_buffer_memory_device_group_info_KHR = 
				VkBindBufferMemoryDeviceGroupInfoKHR;//32

using S_bind_image_memory_info_KHR = 
				VkBindImageMemoryInfoKHR;//33

using S_bind_image_memory_device_group_info_KHR = 
				VkBindImageMemoryDeviceGroupInfoKHR;//34

using S_device_group_render_pass_begin_info_KHR = 
				VkDeviceGroupRenderPassBeginInfoKHR;//35

using S_device_group_command_buffer_begin_info_KHR = 
				VkDeviceGroupCommandBufferBeginInfoKHR;//36

using S_device_group_submit_info_KHR = 
				VkDeviceGroupSubmitInfoKHR;//37

using S_device_group_bind_sparse_info_KHR = 
				VkDeviceGroupBindSparseInfoKHR;//38

using S_device_group_device_create_info_KHR = 
				VkDeviceGroupDeviceCreateInfoKHR;//39

using S_descriptor_update_template_entry_KHR = 
				VkDescriptorUpdateTemplateEntryKHR;//40

using S_descriptor_update_template_create_info_KHR = 
				VkDescriptorUpdateTemplateCreateInfoKHR;//41

using S_input_attachment_aspect_reference_KHR = 
				VkInputAttachmentAspectReferenceKHR;//42

using S_render_pass_input_attachment_aspect_create_info_KHR = 
				VkRenderPassInputAttachmentAspectCreateInfoKHR;//43

using S_physical_device_16bit_storage_features_KHR = 
				VkPhysicalDevice16BitStorageFeaturesKHR;//44

using S_buffer_memory_requirements_info2_KHR = 
				VkBufferMemoryRequirementsInfo2KHR;//45

using S_image_memory_requirements_info2_KHR = 
				VkImageMemoryRequirementsInfo2KHR;//46

using S_image_sparse_memory_requirements_info2_KHR = 
				VkImageSparseMemoryRequirementsInfo2KHR;//47

using S_memory_requirements2_KHR = 
				VkMemoryRequirements2KHR;//48

using S_sparse_image_memory_requirements2_KHR = 
				VkSparseImageMemoryRequirements2KHR;//49

using S_physical_device_point_clipping_properties_KHR = 
				VkPhysicalDevicePointClippingPropertiesKHR;//50

using S_memory_dedicated_requirements_KHR = 
				VkMemoryDedicatedRequirementsKHR;//51

using S_memory_dedicated_allocate_info_KHR = 
				VkMemoryDedicatedAllocateInfoKHR;//52

using S_image_view_usage_create_info_KHR = 
				VkImageViewUsageCreateInfoKHR;//53

using S_pipeline_tessellation_domain_origin_state_create_info_KHR = 
				VkPipelineTessellationDomainOriginStateCreateInfoKHR;//54

using S_sampler_ycbcr_conversion_info_KHR = 
				VkSamplerYcbcrConversionInfoKHR;//55

using S_sampler_ycbcr_conversion_create_info_KHR = 
				VkSamplerYcbcrConversionCreateInfoKHR;//56

using S_bind_image_plane_memory_info_KHR = 
				VkBindImagePlaneMemoryInfoKHR;//57

using S_image_plane_memory_requirements_info_KHR = 
				VkImagePlaneMemoryRequirementsInfoKHR;//58

using S_physical_device_sampler_ycbcr_conversion_features_KHR = 
				VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR;//59

using S_sampler_ycbcr_conversion_image_format_properties_KHR = 
				VkSamplerYcbcrConversionImageFormatPropertiesKHR;//60

using S_physical_device_maintenance3_properties_KHR = 
				VkPhysicalDeviceMaintenance3PropertiesKHR;//61

using S_descriptor_set_layout_support_KHR = 
				VkDescriptorSetLayoutSupportKHR;//62

/*	VkOffset2D:*/
typedef struct S_offset_2d{
	int32_t	x;
	int32_t	y;
S_offset_2d(
	 int32_t   x_
	,int32_t   y_);
};

/*	VkOffset3D:*/
typedef struct S_offset_3d{
	int32_t	x;
	int32_t	y;
	int32_t	z;
S_offset_3d(
	 int32_t   x_
	,int32_t   y_
	,int32_t   z_);
};

/*	VkExtent2D:*/
typedef struct S_extent_2d{
	uint32_t	width;
	uint32_t	height;
S_extent_2d(
	 uint32_t   width_
	,uint32_t   height_);
};

/*	VkExtent3D:*/
typedef struct S_extent_3d{
	uint32_t	width;
	uint32_t	height;
	uint32_t	depth;
S_extent_3d(
	 uint32_t   width_
	,uint32_t   height_
	,uint32_t   depth_);
};

/*	VkViewport:*/
typedef struct S_viewport{
	float	x;
	float	y;
	float	width;
	float	height;
	float	minDepth;
	float	maxDepth;
S_viewport(
	 float   x_
	,float   y_
	,float   width_
	,float   height_
	,float   minDepth_
	,float   maxDepth_);
};

/*	VkRect2D:*/
typedef struct S_rect_2d{
	S_offset_2d	offset;
	S_extent_2d	extent;
S_rect_2d(
	 S_offset_2d  offset_
	,S_extent_2d  extent_);
};

/*	VkClearRect:*/
typedef struct S_clear_rect{
	S_rect_2d	rect;
	uint32_t	baseArrayLayer;
	uint32_t	layerCount;
S_clear_rect(
	 S_rect_2d  rect_
	,uint32_t   baseArrayLayer_
	,uint32_t   layerCount_);
};

/*	VkComponentMapping:*/
typedef struct S_component_mapping{
	E_component_swizzle	r;
	E_component_swizzle	g;
	E_component_swizzle	b;
	E_component_swizzle	a;
S_component_mapping(
	 E_component_swizzle  r_
	,E_component_swizzle  g_
	,E_component_swizzle  b_
	,E_component_swizzle  a_);
};

/*	VkExtensionProperties:
returnd only*/
typedef struct S_extension_properties{
/*extension name*/
	char	extensionName;
/*version of the extension specification implemented*/
	uint32_t	specVersion;
S_extension_properties(
	 char [VK_MAX_EXTENSION_NAME_SIZE]  extensionName_
	,uint32_t   specVersion_);
};

/*	VkLayerProperties:
returnd only*/
typedef struct S_layer_properties{
/*layer name*/
	char	layerName;
/*version of the layer specification implemented*/
	uint32_t	specVersion;
/*build or release version of the layer's library*/
	uint32_t	implementationVersion;
/*Free-form description of the layer*/
	char	description;
S_layer_properties(
	 char [VK_MAX_EXTENSION_NAME_SIZE]  layerName_
	,uint32_t   specVersion_
	,uint32_t   implementationVersion_
	,char [VK_MAX_DESCRIPTION_SIZE]  description_);
};

/*	VkAllocationCallbacks:*/
typedef struct S_allocation_callbacks{
/*|optional|	*/
	void*	pUserData;
	PFN_vkAllocationFunction	pfnAllocation;
	PFN_vkReallocationFunction	pfnReallocation;
	PFN_vkFreeFunction	pfnFree;
/*|optional|	*/
	PFN_vkInternalAllocationNotification	pfnInternalAllocation;
/*|optional|	*/
	PFN_vkInternalFreeNotification	pfnInternalFree;
S_allocation_callbacks(
	 void*            *           pUserData_
	,PFN_vkAllocationFunction   pfnAllocation_
	,PFN_vkReallocationFunction   pfnReallocation_
	,PFN_vkFreeFunction   pfnFree_
	,PFN_vkInternalAllocationNotification   pfnInternalAllocation_
	,PFN_vkInternalFreeNotification   pfnInternalFree_);
};

/*	VkQueueFamilyProperties:
returnd only*/
typedef struct S_queue_family_properties{
/*Queue flags*/
	VkQueueFlags	queueFlags;
	uint32_t	queueCount;
	uint32_t	timestampValidBits;
/*Minimum alignment requirement for image transfers*/
	S_extent_3d	minImageTransferGranularity;
S_queue_family_properties(
	 VkQueueFlags   queueFlags_
	,uint32_t   queueCount_
	,uint32_t   timestampValidBits_
	,S_extent_3d  minImageTransferGranularity_);
};

/*	VkPhysicalDeviceMemoryProperties:
returnd only*/
typedef struct S_physical_device_memory_properties{
	uint32_t	memoryTypeCount;
	S_memory_type	memoryTypes;
	uint32_t	memoryHeapCount;
	S_memory_heap	memoryHeaps;
S_physical_device_memory_properties(
	 uint32_t   memoryTypeCount_
	,S_memory_type  memoryTypes_
	,uint32_t   memoryHeapCount_
	,S_memory_heap  memoryHeaps_);
};

/*	VkMemoryRequirements:
returnd only*/
typedef struct S_memory_requirements{
/*Specified in bytes*/
	VkDeviceSize	size;
/*Specified in bytes*/
	VkDeviceSize	alignment;
/*Bitmask of the allowed memory type indices into memoryTypes[] for this object*/
	uint32_t	memoryTypeBits;
S_memory_requirements(
	 VkDeviceSize   size_
	,VkDeviceSize   alignment_
	,uint32_t   memoryTypeBits_);
};

/*	VkSparseImageFormatProperties:
returnd only*/
typedef struct S_sparse_image_format_properties{
/*|optional|	*/
	VkImageAspectFlags	aspectMask;
	S_extent_3d	imageGranularity;
/*|optional|	*/
	VkSparseImageFormatFlags	flags;
S_sparse_image_format_properties(
	 VkImageAspectFlags   aspectMask_
	,S_extent_3d  imageGranularity_
	,VkSparseImageFormatFlags   flags_);
};

/*	VkSparseImageMemoryRequirements:
returnd only*/
typedef struct S_sparse_image_memory_requirements{
	S_sparse_image_format_properties	formatProperties;
	uint32_t	imageMipTailFirstLod;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize	imageMipTailSize;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize	imageMipTailOffset;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize	imageMipTailStride;
S_sparse_image_memory_requirements(
	 S_sparse_image_format_properties  formatProperties_
	,uint32_t   imageMipTailFirstLod_
	,VkDeviceSize   imageMipTailSize_
	,VkDeviceSize   imageMipTailOffset_
	,VkDeviceSize   imageMipTailStride_);
};

/*	VkMemoryType:
returnd only*/
typedef struct S_memory_type{
/*Memory properties of this memory type*/
	VkMemoryPropertyFlags	propertyFlags;
/*Index of the memory heap allocations of this memory type are taken from*/
	uint32_t	heapIndex;
S_memory_type(
	 VkMemoryPropertyFlags   propertyFlags_
	,uint32_t   heapIndex_);
};

/*	VkMemoryHeap:
returnd only*/
typedef struct S_memory_heap{
/*Available memory in the heap*/
	VkDeviceSize	size;
/*Flags for the heap*/
	VkMemoryHeapFlags	flags;
S_memory_heap(
	 VkDeviceSize   size_
	,VkMemoryHeapFlags   flags_);
};

/*	VkFormatProperties:
returnd only*/
typedef struct S_format_properties{
/*Format features in case of linear tiling*/
	VkFormatFeatureFlags	linearTilingFeatures;
/*Format features in case of optimal tiling*/
	VkFormatFeatureFlags	optimalTilingFeatures;
/*Format features supported by buffers*/
	VkFormatFeatureFlags	bufferFeatures;
S_format_properties(
	 VkFormatFeatureFlags   linearTilingFeatures_
	,VkFormatFeatureFlags   optimalTilingFeatures_
	,VkFormatFeatureFlags   bufferFeatures_);
};

/*	VkImageFormatProperties:
returnd only*/
typedef struct S_image_format_properties{
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
S_image_format_properties(
	 S_extent_3d  maxExtent_
	,uint32_t   maxMipLevels_
	,uint32_t   maxArrayLayers_
	,VkSampleCountFlags   sampleCounts_
	,VkDeviceSize   maxResourceSize_);
};

/*	VkDescriptorBufferInfo:*/
typedef struct S_descriptor_buffer_info{
/*Buffer used for this descriptor slot.*/
	VkBuffer	buffer;
/*Base offset from buffer start in bytes to update in the descriptor set.*/
	VkDeviceSize	offset;
/*Size in bytes of the buffer resource for this descriptor update.*/
	VkDeviceSize	range;
S_descriptor_buffer_info(
	 VkBuffer   buffer_
	,VkDeviceSize   offset_
	,VkDeviceSize   range_);
};

/*	VkDescriptorImageInfo:*/
typedef struct S_descriptor_image_info{
/*Sampler to write to the descriptor in case it is a SAMPLER or COMBINED_IMAGE_SAMPLER descriptor. Ignored otherwise.*/
	VkSampler	sampler;
/*Image view to write to the descriptor in case it is a SAMPLED_IMAGE, STORAGE_IMAGE, COMBINED_IMAGE_SAMPLER, or INPUT_ATTACHMENT descriptor. Ignored otherwise.*/
	VkImageView	imageView;
/*Layout the image is expected to be in when accessed using this descriptor (only used if imageView is not VK_NULL_HANDLE).*/
	E_image_layout	imageLayout;
S_descriptor_image_info(
	 VkSampler   sampler_
	,VkImageView   imageView_
	,E_image_layout  imageLayout_);
};

/*	VkImageSubresource:*/
typedef struct S_image_subresource{
	VkImageAspectFlags	aspectMask;
	uint32_t	mipLevel;
	uint32_t	arrayLayer;
S_image_subresource(
	 VkImageAspectFlags   aspectMask_
	,uint32_t   mipLevel_
	,uint32_t   arrayLayer_);
};

/*	VkImageSubresourceLayers:*/
typedef struct S_image_subresource_layers{
	VkImageAspectFlags	aspectMask;
	uint32_t	mipLevel;
	uint32_t	baseArrayLayer;
	uint32_t	layerCount;
S_image_subresource_layers(
	 VkImageAspectFlags   aspectMask_
	,uint32_t   mipLevel_
	,uint32_t   baseArrayLayer_
	,uint32_t   layerCount_);
};

/*	VkImageSubresourceRange:*/
typedef struct S_image_subresource_range{
	VkImageAspectFlags	aspectMask;
	uint32_t	baseMipLevel;
	uint32_t	levelCount;
	uint32_t	baseArrayLayer;
	uint32_t	layerCount;
S_image_subresource_range(
	 VkImageAspectFlags   aspectMask_
	,uint32_t   baseMipLevel_
	,uint32_t   levelCount_
	,uint32_t   baseArrayLayer_
	,uint32_t   layerCount_);
};

/*	VkSubresourceLayout:
returnd only*/
typedef struct S_subresource_layout{
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
S_subresource_layout(
	 VkDeviceSize   offset_
	,VkDeviceSize   size_
	,VkDeviceSize   rowPitch_
	,VkDeviceSize   arrayPitch_
	,VkDeviceSize   depthPitch_);
};

/*	VkBufferCopy:*/
typedef struct S_buffer_copy{
/*Specified in bytes*/
	VkDeviceSize	srcOffset;
/*Specified in bytes*/
	VkDeviceSize	dstOffset;
/*Specified in bytes*/
	VkDeviceSize	size;
S_buffer_copy(
	 VkDeviceSize   srcOffset_
	,VkDeviceSize   dstOffset_
	,VkDeviceSize   size_);
};

/*	VkSparseMemoryBind:*/
typedef struct S_sparse_memory_bind{
/*Specified in bytes*/
	VkDeviceSize	resourceOffset;
/*Specified in bytes*/
	VkDeviceSize	size;
/*|optional|	*/
	VkDeviceMemory	memory;
/*Specified in bytes*/
	VkDeviceSize	memoryOffset;
/*|optional|	*/
	VkSparseMemoryBindFlags	flags;
S_sparse_memory_bind(
	 VkDeviceSize   resourceOffset_
	,VkDeviceSize   size_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_
	,VkSparseMemoryBindFlags flags_);
};

/*	VkSparseImageMemoryBind:*/
typedef struct S_sparse_image_memory_bind{
	S_image_subresource	subresource;
	S_offset_3d	offset;
	S_extent_3d	extent;
/*|optional|	*/
	VkDeviceMemory	memory;
/*Specified in bytes*/
	VkDeviceSize	memoryOffset;
/*|optional|	*/
	VkSparseMemoryBindFlags	flags;
S_sparse_image_memory_bind(
	 S_image_subresource  subresource_
	,S_offset_3d  offset_
	,S_extent_3d  extent_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_
	,VkSparseMemoryBindFlags flags_);
};

/*	VkSparseBufferMemoryBindInfo:*/
typedef struct S_sparse_buffer_memory_bind_info{
	VkBuffer	buffer;
	uint32_t	bindCount;
/*
len:	bindCount*/
	const	S_sparse_memory_bind*	pBinds;
S_sparse_buffer_memory_bind_info(
	 VkBuffer   buffer_
	,uint32_t   bindCount_
	,const S_sparse_memory_bind * pBinds_);
};

/*	VkSparseImageOpaqueMemoryBindInfo:*/
typedef struct S_sparse_image_opaque_memory_bind_info{
	VkImage	image;
	uint32_t	bindCount;
/*
len:	bindCount*/
	const	S_sparse_memory_bind*	pBinds;
S_sparse_image_opaque_memory_bind_info(
	 VkImage   image_
	,uint32_t   bindCount_
	,const S_sparse_memory_bind * pBinds_);
};

/*	VkSparseImageMemoryBindInfo:*/
typedef struct S_sparse_image_memory_bind_info{
	VkImage	image;
	uint32_t	bindCount;
/*
len:	bindCount*/
	const	S_sparse_image_memory_bind*	pBinds;
S_sparse_image_memory_bind_info(
	 VkImage   image_
	,uint32_t   bindCount_
	,const S_sparse_image_memory_bind * pBinds_);
};

/*	VkImageCopy:*/
typedef struct S_image_copy{
	S_image_subresource_layers	srcSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	srcOffset;
	S_image_subresource_layers	dstSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	dstOffset;
/*Specified in pixels for both compressed and uncompressed images*/
	S_extent_3d	extent;
S_image_copy(
	 S_image_subresource_layers  srcSubresource_
	,S_offset_3d  srcOffset_
	,S_image_subresource_layers  dstSubresource_
	,S_offset_3d  dstOffset_
	,S_extent_3d  extent_);
};

/*	VkImageBlit:*/
typedef struct S_image_blit{
	S_image_subresource_layers	srcSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	srcOffsets;
	S_image_subresource_layers	dstSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d	dstOffsets;
S_image_blit(
	 S_image_subresource_layers  srcSubresource_
	,S_offset_3d  srcOffsets_
	,S_image_subresource_layers  dstSubresource_
	,S_offset_3d  dstOffsets_);
};

/*	VkBufferImageCopy:*/
typedef struct S_buffer_image_copy{
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
S_buffer_image_copy(
	 VkDeviceSize   bufferOffset_
	,uint32_t   bufferRowLength_
	,uint32_t   bufferImageHeight_
	,S_image_subresource_layers  imageSubresource_
	,S_offset_3d  imageOffset_
	,S_extent_3d  imageExtent_);
};

/*	VkImageResolve:*/
typedef struct S_image_resolve{
	S_image_subresource_layers	srcSubresource;
	S_offset_3d	srcOffset;
	S_image_subresource_layers	dstSubresource;
	S_offset_3d	dstOffset;
	S_extent_3d	extent;
S_image_resolve(
	 S_image_subresource_layers  srcSubresource_
	,S_offset_3d  srcOffset_
	,S_image_subresource_layers  dstSubresource_
	,S_offset_3d  dstOffset_
	,S_extent_3d  extent_);
};

/*	VkDescriptorSetLayoutBinding:*/
typedef struct S_descriptor_set_layout_binding{
/*Binding number for this entry*/
	uint32_t	binding;
/*Type of the descriptors in this binding*/
	E_descriptor_type	descriptorType;
/*Number of descriptors in this binding*/
	uint32_t	descriptorCount;
/*Shader stages this binding is visible to*/
	VkShaderStageFlags	stageFlags;
/*Immutable samplers (used if descriptor type is SAMPLER or COMBINED_IMAGE_SAMPLER, is either NULL or contains count number of elements)
len:	descriptorCount*/
	const	VkSampler*	pImmutableSamplers;
S_descriptor_set_layout_binding(
	 uint32_t   binding_
	,E_descriptor_type  descriptorType_
	,uint32_t   descriptorCount_
	,VkShaderStageFlags   stageFlags_
	,const const VkSampler*        *       pImmutableSamplers_);
};

/*	VkDescriptorPoolSize:*/
typedef struct S_descriptor_pool_size{
	E_descriptor_type	type;
	uint32_t	descriptorCount;
S_descriptor_pool_size(
	 E_descriptor_type  type_
	,uint32_t   descriptorCount_);
};

/*	VkSpecializationMapEntry:*/
typedef struct S_specialization_map_entry{
/*The SpecConstant ID specified in the BIL*/
	uint32_t	constantID;
/*Offset of the value in the data block*/
	uint32_t	offset;
/*Size in bytes of the SpecConstant*/
	size_t	size;
S_specialization_map_entry(
	 uint32_t   constantID_
	,uint32_t   offset_
	,_t   size_);
};

/*	VkSpecializationInfo:*/
typedef struct S_specialization_info{
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
S_specialization_info(
	 uint32_t   mapEntryCount_
	,const S_specialization_map_entry * pMapEntries_
	,size_t   dataSize_
	,const const void*             *            pData_);
};

/*	VkVertexInputBindingDescription:*/
typedef struct S_vertex_input_binding_description{
/*Vertex buffer binding id*/
	uint32_t	binding;
/*Distance between vertices in bytes (0 = no advancement)*/
	uint32_t	stride;
/*The rate at which the vertex data is consumed*/
	E_vertex_input_rate	inputRate;
S_vertex_input_binding_description(
	 uint32_t   binding_
	,uint32_t   stride_
	,E_vertex_input_rate  inputRate_);
};

/*	VkVertexInputAttributeDescription:*/
typedef struct S_vertex_input_attribute_description{
/*location of the shader vertex attrib*/
	uint32_t	location;
/*Vertex buffer binding id*/
	uint32_t	binding;
/*format of source data*/
	E_format	format;
/*Offset of first element in bytes from base of vertex*/
	uint32_t	offset;
S_vertex_input_attribute_description(
	 uint32_t   location_
	,uint32_t   binding_
	,E_format  format_
	,uint32_t   offset_);
};

/*	VkPipelineColorBlendAttachmentState:*/
typedef struct S_pipeline_color_blend_attachment_state{
	VkBool32	blendEnable;
	E_blend_factor	srcColorBlendFactor;
	E_blend_factor	dstColorBlendFactor;
	E_blend_op	colorBlendOp;
	E_blend_factor	srcAlphaBlendFactor;
	E_blend_factor	dstAlphaBlendFactor;
	E_blend_op	alphaBlendOp;
/*|optional|	*/
	VkColorComponentFlags	colorWriteMask;
S_pipeline_color_blend_attachment_state(
	 VkBool32   blendEnable_
	,E_blend_factor  srcColorBlendFactor_
	,E_blend_factor  dstColorBlendFactor_
	,E_blend_op  colorBlendOp_
	,E_blend_factor  srcAlphaBlendFactor_
	,E_blend_factor  dstAlphaBlendFactor_
	,E_blend_op  alphaBlendOp_
	,VkColorComponentFlags   colorWriteMask_);
};

/*	VkStencilOpState:*/
typedef struct S_stencil_op_state{
	E_stencil_op	failOp;
	E_stencil_op	passOp;
	E_stencil_op	depthFailOp;
	E_compare_op	compareOp;
	uint32_t	compareMask;
	uint32_t	writeMask;
	uint32_t	reference;
S_stencil_op_state(
	 E_stencil_op  failOp_
	,E_stencil_op  passOp_
	,E_stencil_op  depthFailOp_
	,E_compare_op  compareOp_
	,uint32_t   compareMask_
	,uint32_t   writeMask_
	,uint32_t   reference_);
};

/*	VkPushConstantRange:*/
typedef struct S_push_constant_range{
/*Which stages use the range*/
	VkShaderStageFlags	stageFlags;
/*Start of the range, in bytes*/
	uint32_t	offset;
/*Size of the range, in bytes*/
	uint32_t	size;
S_push_constant_range(
	 VkShaderStageFlags   stageFlags_
	,uint32_t   offset_
	,uint32_t   size_);
};

/*	VkClearDepthStencilValue:*/
typedef struct S_clear_depth_stencil_value{
	float	depth;
	uint32_t	stencil;
S_clear_depth_stencil_value(
	 float   depth_
	,uint32_t   stencil_);
};

/*	VkClearAttachment:*/
typedef struct S_clear_attachment{
	VkImageAspectFlags	aspectMask;
	uint32_t	colorAttachment;
	VkClearValue	clearValue;
S_clear_attachment(
	 VkImageAspectFlags   aspectMask_
	,uint32_t   colorAttachment_
	,VkClearValue   clearValue_);
};

/*	VkAttachmentDescription:*/
typedef struct S_attachment_description{
/*|optional|	*/
	VkAttachmentDescriptionFlags	flags;
	E_format	format;
	F_sample_count	samples;
/*Load operation for color or depth data*/
	E_attachment_load_op	loadOp;
/*Store operation for color or depth data*/
	E_attachment_store_op	storeOp;
/*Load operation for stencil data*/
	E_attachment_load_op	stencilLoadOp;
/*Store operation for stencil data*/
	E_attachment_store_op	stencilStoreOp;
	E_image_layout	initialLayout;
	E_image_layout	finalLayout;
S_attachment_description(
	 VkAttachmentDescriptionFlags   flags_
	,E_format  format_
	,F_sample_count  samples_
	,E_attachment_load_op  loadOp_
	,E_attachment_store_op  storeOp_
	,E_attachment_load_op  stencilLoadOp_
	,E_attachment_store_op  stencilStoreOp_
	,E_image_layout  initialLayout_
	,E_image_layout  finalLayout_);
};

/*	VkAttachmentReference:*/
typedef struct S_attachment_reference{
	uint32_t	attachment;
	E_image_layout	layout;
S_attachment_reference(
	 uint32_t   attachment_
	,E_image_layout  layout_);
};

/*	VkSubpassDescription:*/
typedef struct S_subpass_description{
/*|optional|	*/
	VkSubpassDescriptionFlags	flags;
/*Must be VK_PIPELINE_BIND_POINT_GRAPHICS for now*/
	E_pipeline_bind_point	pipelineBindPoint;
/*|optional|	*/
	uint32_t	inputAttachmentCount;
/*
len:	inputAttachmentCount*/
	const	S_attachment_reference*	pInputAttachments;
/*|optional|	*/
	uint32_t	colorAttachmentCount;
/*
len:	colorAttachmentCount*/
	const	S_attachment_reference*	pColorAttachments;
/*|optional|	
len:	colorAttachmentCount*/
	const	S_attachment_reference*	pResolveAttachments;
/*|optional|	*/
	const	S_attachment_reference*	pDepthStencilAttachment;
/*|optional|	*/
	uint32_t	preserveAttachmentCount;
/*
len:	preserveAttachmentCount*/
	const	uint32_t*	pPreserveAttachments;
S_subpass_description(
	 VkSubpassDescriptionFlags   flags_
	,E_pipeline_bind_point  pipelineBindPoint_
	,uint32_t   inputAttachmentCount_
	,const S_attachment_reference * pInputAttachments_
	,uint32_t   colorAttachmentCount_
	,const S_attachment_reference * pColorAttachments_
	,const S_attachment_reference * pResolveAttachments_
	,const S_attachment_reference * pDepthStencilAttachment_
	,uint32_t   preserveAttachmentCount_
	,const const uint32_t*  * pPreserveAttachments_);
};

/*	VkSubpassDependency:*/
typedef struct S_subpass_dependency{
	uint32_t	srcSubpass;
	uint32_t	dstSubpass;
	VkPipelineStageFlags	srcStageMask;
	VkPipelineStageFlags	dstStageMask;
/*Memory accesses from the source of the dependency to synchronize*/
	VkAccessFlags	srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	VkAccessFlags	dstAccessMask;
/*|optional|	*/
	VkDependencyFlags	dependencyFlags;
S_subpass_dependency(
	 uint32_t   srcSubpass_
	,uint32_t   dstSubpass_
	,VkPipelineStageFlags   srcStageMask_
	,VkPipelineStageFlags   dstStageMask_
	,VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,VkDependencyFlags   dependencyFlags_);
};

/*	VkPhysicalDeviceFeatures:*/
typedef struct S_physical_device_features{
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
S_physical_device_features(
	 VkBool32   robustBufferAccess_
	,VkBool32   fullDrawIndexUint32_
	,VkBool32   imageCubeArray_
	,VkBool32   independentBlend_
	,VkBool32   geometryShader_
	,VkBool32   tessellationShader_
	,VkBool32   sampleRateShading_
	,VkBool32   dualSrcBlend_
	,VkBool32   logicOp_
	,VkBool32   multiDrawIndirect_
	,VkBool32   drawIndirectFirstInstance_
	,VkBool32   depthClamp_
	,VkBool32   depthBiasClamp_
	,VkBool32   fillModeNonSolid_
	,VkBool32   depthBounds_
	,VkBool32   wideLines_
	,VkBool32   largePoints_
	,VkBool32   alphaToOne_
	,VkBool32   multiViewport_
	,VkBool32   samplerAnisotropy_
	,VkBool32   textureCompressionETC2_
	,VkBool32   textureCompressionASTC_LDR_
	,VkBool32   textureCompressionBC_
	,VkBool32   occlusionQueryPrecise_
	,VkBool32   pipelineStatisticsQuery_
	,VkBool32   vertexPipelineStoresAndAtomics_
	,VkBool32   fragmentStoresAndAtomics_
	,VkBool32   shaderTessellationAndGeometryPointSize_
	,VkBool32   shaderImageGatherExtended_
	,VkBool32   shaderStorageImageExtendedFormats_
	,VkBool32   shaderStorageImageMultisample_
	,VkBool32   shaderStorageImageReadWithoutFormat_
	,VkBool32   shaderStorageImageWriteWithoutFormat_
	,VkBool32   shaderUniformBufferArrayDynamicIndexing_
	,VkBool32   shaderSampledImageArrayDynamicIndexing_
	,VkBool32   shaderStorageBufferArrayDynamicIndexing_
	,VkBool32   shaderStorageImageArrayDynamicIndexing_
	,VkBool32   shaderClipDistance_
	,VkBool32   shaderCullDistance_
	,VkBool32   shaderFloat64_
	,VkBool32   shaderInt64_
	,VkBool32   shaderInt16_
	,VkBool32   shaderResourceResidency_
	,VkBool32   shaderResourceMinLod_
	,VkBool32   sparseBinding_
	,VkBool32   sparseResidencyBuffer_
	,VkBool32   sparseResidencyImage2D_
	,VkBool32   sparseResidencyImage3D_
	,VkBool32   sparseResidency2Samples_
	,VkBool32   sparseResidency4Samples_
	,VkBool32   sparseResidency8Samples_
	,VkBool32   sparseResidency16Samples_
	,VkBool32   sparseResidencyAliased_
	,VkBool32   variableMultisampleRate_
	,VkBool32   inheritedQueries_);
};

/*	VkPhysicalDeviceSparseProperties:
returnd only*/
typedef struct S_physical_device_sparse_properties{
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
S_physical_device_sparse_properties(
	 VkBool32   residencyStandard2DBlockShape_
	,VkBool32   residencyStandard2DMultisampleBlockShape_
	,VkBool32   residencyStandard3DBlockShape_
	,VkBool32   residencyAlignedMipSize_
	,VkBool32   residencyNonResidentStrict_);
};

/*	VkPhysicalDeviceLimits:
returnd only*/
typedef struct S_physical_device_limits{
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
S_physical_device_limits(
	 uint32_t   maxImageDimension1D_
	,uint32_t   maxImageDimension2D_
	,uint32_t   maxImageDimension3D_
	,uint32_t   maxImageDimensionCube_
	,uint32_t   maxImageArrayLayers_
	,uint32_t   maxTexelBufferElements_
	,uint32_t   maxUniformBufferRange_
	,uint32_t   maxStorageBufferRange_
	,uint32_t   maxPushConstantsSize_
	,uint32_t   maxMemoryAllocationCount_
	,uint32_t   maxSamplerAllocationCount_
	,VkDeviceSize   bufferImageGranularity_
	,VkDeviceSize   sparseAddressSpaceSize_
	,uint32_t   maxBoundDescriptorSets_
	,uint32_t   maxPerStageDescriptorSamplers_
	,uint32_t   maxPerStageDescriptorUniformBuffers_
	,uint32_t   maxPerStageDescriptorStorageBuffers_
	,uint32_t   maxPerStageDescriptorSampledImages_
	,uint32_t   maxPerStageDescriptorStorageImages_
	,uint32_t   maxPerStageDescriptorInputAttachments_
	,uint32_t   maxPerStageResources_
	,uint32_t   maxDescriptorSetSamplers_
	,uint32_t   maxDescriptorSetUniformBuffers_
	,uint32_t   maxDescriptorSetUniformBuffersDynamic_
	,uint32_t   maxDescriptorSetStorageBuffers_
	,uint32_t   maxDescriptorSetStorageBuffersDynamic_
	,uint32_t   maxDescriptorSetSampledImages_
	,uint32_t   maxDescriptorSetStorageImages_
	,uint32_t   maxDescriptorSetInputAttachments_
	,uint32_t   maxVertexInputAttributes_
	,uint32_t   maxVertexInputBindings_
	,uint32_t   maxVertexInputAttributeOffset_
	,uint32_t   maxVertexInputBindingStride_
	,uint32_t   maxVertexOutputComponents_
	,uint32_t   maxTessellationGenerationLevel_
	,uint32_t   maxTessellationPatchSize_
	,uint32_t   maxTessellationControlPerVertexInputComponents_
	,uint32_t   maxTessellationControlPerVertexOutputComponents_
	,uint32_t   maxTessellationControlPerPatchOutputComponents_
	,uint32_t   maxTessellationControlTotalOutputComponents_
	,uint32_t   maxTessellationEvaluationInputComponents_
	,uint32_t   maxTessellationEvaluationOutputComponents_
	,uint32_t   maxGeometryShaderInvocations_
	,uint32_t   maxGeometryInputComponents_
	,uint32_t   maxGeometryOutputComponents_
	,uint32_t   maxGeometryOutputVertices_
	,uint32_t   maxGeometryTotalOutputComponents_
	,uint32_t   maxFragmentInputComponents_
	,uint32_t   maxFragmentOutputAttachments_
	,uint32_t   maxFragmentDualSrcAttachments_
	,uint32_t   maxFragmentCombinedOutputResources_
	,uint32_t   maxComputeSharedMemorySize_
	,uint32_t [3]  maxComputeWorkGroupCount_
	,uint32_t   maxComputeWorkGroupInvocations_
	,uint32_t [3]  maxComputeWorkGroupSize_
	,uint32_t   subPixelPrecisionBits_
	,uint32_t   subTexelPrecisionBits_
	,uint32_t   mipmapPrecisionBits_
	,uint32_t   maxDrawIndexedIndexValue_
	,uint32_t   maxDrawIndirectCount_
	,float   maxSamplerLodBias_
	,float   maxSamplerAnisotropy_
	,uint32_t   maxViewports_
	,uint32_t [2]  maxViewportDimensions_
	,float [2]  viewportBoundsRange_
	,uint32_t   viewportSubPixelBits_
	,size_t   minMemoryMapAlignment_
	,VkDeviceSize   minTexelBufferOffsetAlignment_
	,VkDeviceSize   minUniformBufferOffsetAlignment_
	,VkDeviceSize   minStorageBufferOffsetAlignment_
	,int32_t   minTexelOffset_
	,uint32_t   maxTexelOffset_
	,int32_t   minTexelGatherOffset_
	,uint32_t   maxTexelGatherOffset_
	,float   minInterpolationOffset_
	,float   maxInterpolationOffset_
	,uint32_t   subPixelInterpolationOffsetBits_
	,uint32_t   maxFramebufferWidth_
	,uint32_t   maxFramebufferHeight_
	,uint32_t   maxFramebufferLayers_
	,VkSampleCountFlags   framebufferColorSampleCounts_
	,VkSampleCountFlags   framebufferDepthSampleCounts_
	,VkSampleCountFlags   framebufferStencilSampleCounts_
	,VkSampleCountFlags   framebufferNoAttachmentsSampleCounts_
	,uint32_t   maxColorAttachments_
	,VkSampleCountFlags   sampledImageColorSampleCounts_
	,VkSampleCountFlags   sampledImageIntegerSampleCounts_
	,VkSampleCountFlags   sampledImageDepthSampleCounts_
	,VkSampleCountFlags   sampledImageStencilSampleCounts_
	,VkSampleCountFlags   storageImageSampleCounts_
	,uint32_t   maxSampleMaskWords_
	,VkBool32   timestampComputeAndGraphics_
	,float   timestampPeriod_
	,uint32_t   maxClipDistances_
	,uint32_t   maxCullDistances_
	,uint32_t   maxCombinedClipAndCullDistances_
	,uint32_t   discreteQueuePriorities_
	,float [2]  pointSizeRange_
	,float [2]  lineWidthRange_
	,float   pointSizeGranularity_
	,float   lineWidthGranularity_
	,VkBool32   strictLines_
	,VkBool32   standardSampleLocations_
	,VkDeviceSize   optimalBufferCopyOffsetAlignment_
	,VkDeviceSize   optimalBufferCopyRowPitchAlignment_
	,VkDeviceSize   nonCoherentAtomSize_);
};

/*	VkDrawIndirectCommand:*/
typedef struct S_draw_indirect_command{
	uint32_t	vertexCount;
	uint32_t	instanceCount;
	uint32_t	firstVertex;
	uint32_t	firstInstance;
S_draw_indirect_command(
	 uint32_t   vertexCount_
	,uint32_t   instanceCount_
	,uint32_t   firstVertex_
	,uint32_t   firstInstance_);
};

/*	VkDrawIndexedIndirectCommand:*/
typedef struct S_draw_indexed_indirect_command{
	uint32_t	indexCount;
	uint32_t	instanceCount;
	uint32_t	firstIndex;
	int32_t	vertexOffset;
	uint32_t	firstInstance;
S_draw_indexed_indirect_command(
	 uint32_t   indexCount_
	,uint32_t   instanceCount_
	,uint32_t   firstIndex_
	,int32_t   vertexOffset_
	,uint32_t   firstInstance_);
};

/*	VkDispatchIndirectCommand:*/
typedef struct S_dispatch_indirect_command{
	uint32_t	x;
	uint32_t	y;
	uint32_t	z;
S_dispatch_indirect_command(
	 uint32_t   x_
	,uint32_t   y_
	,uint32_t   z_);
};

/*	VkDisplayPropertiesKHR:
returnd only*/
typedef struct S_display_properties_KHR{
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
S_display_properties_KHR(
	 VkDisplayKHR   display_
	,const const char*                       *                      displayName_
	,S_extent_2d  physicalDimensions_
	,S_extent_2d  physicalResolution_
	,VkSurfaceTransformFlagsKHR   supportedTransforms_
	,VkBool32   planeReorderPossible_
	,VkBool32   persistentContent_);
};

/*	VkDisplayPlanePropertiesKHR:
returnd only*/
typedef struct S_display_plane_properties_KHR{
/*Display the plane is currently associated with.  Will be VK_NULL_HANDLE if the plane is not in use.*/
	VkDisplayKHR	currentDisplay;
/*Current z-order of the plane.*/
	uint32_t	currentStackIndex;
S_display_plane_properties_KHR(
	 VkDisplayKHR   currentDisplay_
	,uint32_t   currentStackIndex_);
};

/*	VkDisplayModeParametersKHR:*/
typedef struct S_display_mode_parameters_KHR{
/*Visible scanout region.*/
	S_extent_2d	visibleRegion;
/*Number of times per second the display is updated.*/
	uint32_t	refreshRate;
S_display_mode_parameters_KHR(
	 S_extent_2d  visibleRegion_
	,uint32_t   refreshRate_);
};

/*	VkDisplayModePropertiesKHR:
returnd only*/
typedef struct S_display_mode_properties_KHR{
/*Handle of this display mode.*/
	VkDisplayModeKHR	displayMode;
/*The parameters this mode uses.*/
	S_display_mode_parameters_KHR	parameters;
S_display_mode_properties_KHR(
	 VkDisplayModeKHR   displayMode_
	,S_display_mode_parameters_KHR  parameters_);
};

/*	VkDisplayPlaneCapabilitiesKHR:
returnd only*/
typedef struct S_display_plane_capabilities_KHR{
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
S_display_plane_capabilities_KHR(
	 VkDisplayPlaneAlphaFlagsKHR   supportedAlpha_
	,S_offset_2d  minSrcPosition_
	,S_offset_2d  maxSrcPosition_
	,S_extent_2d  minSrcExtent_
	,S_extent_2d  maxSrcExtent_
	,S_offset_2d  minDstPosition_
	,S_offset_2d  maxDstPosition_
	,S_extent_2d  minDstExtent_
	,S_extent_2d  maxDstExtent_);
};

/*	VkSurfaceCapabilitiesKHR:
returnd only*/
typedef struct S_surface_capabilities_KHR{
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
	F_surface_transform_khr	currentTransform;
/*1 or more bits representing the alpha compositing modes supported*/
	VkCompositeAlphaFlagsKHR	supportedCompositeAlpha;
/*Supported image usage flags for the surface*/
	VkImageUsageFlags	supportedUsageFlags;
S_surface_capabilities_KHR(
	 uint32_t   minImageCount_
	,uint32_t   maxImageCount_
	,S_extent_2d  currentExtent_
	,S_extent_2d  minImageExtent_
	,S_extent_2d  maxImageExtent_
	,uint32_t   maxImageArrayLayers_
	,VkSurfaceTransformFlagsKHR   supportedTransforms_
	,F_surface_transform_khr  currentTransform_
	,VkCompositeAlphaFlagsKHR   supportedCompositeAlpha_
	,VkImageUsageFlags   supportedUsageFlags_);
};

/*	VkSurfaceFormatKHR:
returnd only*/
typedef struct S_surface_format_KHR{
/*Supported pair of rendering format*/
	E_format	format;
/*and color space for the surface*/
	E_color_space_KHR	colorSpace;
S_surface_format_KHR(
	 E_format  format_
	,E_color_space_KHR  colorSpace_);
};

/*	VkExternalImageFormatPropertiesNV:
returnd only*/
typedef struct S_external_image_format_properties_NV{
	S_image_format_properties	imageFormatProperties;
/*|optional|	*/
	VkExternalMemoryFeatureFlagsNV	externalMemoryFeatures;
/*|optional|	*/
	VkExternalMemoryHandleTypeFlagsNV	exportFromImportedHandleTypes;
/*|optional|	*/
	VkExternalMemoryHandleTypeFlagsNV	compatibleHandleTypes;
S_external_image_format_properties_NV(
	 S_image_format_properties  imageFormatProperties_
	,VkExternalMemoryFeatureFlagsNV   externalMemoryFeatures_
	,VkExternalMemoryHandleTypeFlagsNV   exportFromImportedHandleTypes_
	,VkExternalMemoryHandleTypeFlagsNV   compatibleHandleTypes_);
};

/*	VkIndirectCommandsTokenNVX:*/
typedef struct S_indirect_commands_token_NVX{
	E_indirect_commands_token_type_NVX	tokenType;
/*buffer containing tableEntries and additional data for indirectCommands*/
	VkBuffer	buffer;
/*offset from the base address of the buffer*/
	VkDeviceSize	offset;
S_indirect_commands_token_NVX(
	 E_indirect_commands_token_type_NVX  tokenType_
	,VkBuffer   buffer_
	,VkDeviceSize   offset_);
};

/*	VkIndirectCommandsLayoutTokenNVX:*/
typedef struct S_indirect_commands_layout_token_NVX{
	E_indirect_commands_token_type_NVX	tokenType;
/*Binding unit for vertex attribute / descriptor set, offset for pushconstants*/
	uint32_t	bindingUnit;
/*Number of variable dynamic values for descriptor set / push constants*/
	uint32_t	dynamicCount;
/*Rate the which the array is advanced per element (must be power of 2, minimum 1)*/
	uint32_t	divisor;
S_indirect_commands_layout_token_NVX(
	 E_indirect_commands_token_type_NVX  tokenType_
	,uint32_t   bindingUnit_
	,uint32_t   dynamicCount_
	,uint32_t   divisor_);
};

/*	VkObjectTableEntryNVX:*/
typedef struct S_object_table_entry_NVX{
	E_object_entry_type_NVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
S_object_table_entry_NVX(
	 E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_);
};

/*	VkObjectTablePipelineEntryNVX:*/
typedef struct S_object_table_pipeline_entry_NVX{
	E_object_entry_type_NVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkPipeline	pipeline;
S_object_table_pipeline_entry_NVX(
	 E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkPipeline   pipeline_);
};

/*	VkObjectTableDescriptorSetEntryNVX:*/
typedef struct S_object_table_descriptor_set_entry_NVX{
	E_object_entry_type_NVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkPipelineLayout	pipelineLayout;
	VkDescriptorSet	descriptorSet;
S_object_table_descriptor_set_entry_NVX(
	 E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkPipelineLayout   pipelineLayout_
	,VkDescriptorSet   descriptorSet_);
};

/*	VkObjectTableVertexBufferEntryNVX:*/
typedef struct S_object_table_vertex_buffer_entry_NVX{
	E_object_entry_type_NVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkBuffer	buffer;
S_object_table_vertex_buffer_entry_NVX(
	 E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkBuffer   buffer_);
};

/*	VkObjectTableIndexBufferEntryNVX:*/
typedef struct S_object_table_index_buffer_entry_NVX{
	E_object_entry_type_NVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkBuffer	buffer;
	E_index_type	indexType;
S_object_table_index_buffer_entry_NVX(
	 E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkBuffer   buffer_
	,E_index_type  indexType_);
};

/*	VkObjectTablePushConstantEntryNVX:*/
typedef struct S_object_table_push_constant_entry_NVX{
	E_object_entry_type_NVX	type;
	VkObjectEntryUsageFlagsNVX	flags;
	VkPipelineLayout	pipelineLayout;
	VkShaderStageFlags	stageFlags;
S_object_table_push_constant_entry_NVX(
	 E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkPipelineLayout   pipelineLayout_
	,VkShaderStageFlags   stageFlags_);
};

/*	VkConformanceVersionKHR:*/
typedef struct S_conformance_version_KHR{
	uint8_t	major;
	uint8_t	minor;
	uint8_t	subminor;
	uint8_t	patch;
S_conformance_version_KHR(
	 uint8_t   major_
	,uint8_t   minor_
	,uint8_t   subminor_
	,uint8_t   patch_);
};

/*	VkPresentRegionKHR:*/
typedef struct S_present_region_KHR{
/*Number of rectangles in pRectangles*/
	uint32_t	rectangleCount;
/*Array of rectangles that have changed in a swapchain's image(s)
len:	rectangleCount*/
	const	S_rect_layer_KHR*	pRectangles;
S_present_region_KHR(
	 uint32_t   rectangleCount_
	,const S_rect_layer_KHR *   pRectangles_);
};

/*	VkRectLayerKHR:*/
typedef struct S_rect_layer_KHR{
/*upper-left corner of a rectangle that has not changed, in pixels of a presentation images*/
	S_offset_2d	offset;
/*Dimensions of a rectangle that has not changed, in pixels of a presentation images*/
	S_extent_2d	extent;
/*Layer of a swapchain's image(s), for stereoscopic-3D images*/
	uint32_t	layer;
S_rect_layer_KHR(
	 S_offset_2d  offset_
	,S_extent_2d  extent_
	,uint32_t   layer_);
};

/*	VkExternalMemoryProperties:
returnd only*/
typedef struct S_external_memory_properties{
	VkExternalMemoryFeatureFlags	externalMemoryFeatures;
/*|optional|	*/
	VkExternalMemoryHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlags	compatibleHandleTypes;
S_external_memory_properties(
	 VkExternalMemoryFeatureFlags   externalMemoryFeatures_
	,VkExternalMemoryHandleTypeFlags   exportFromImportedHandleTypes_
	,VkExternalMemoryHandleTypeFlags   compatibleHandleTypes_);
};

/*	VkDescriptorUpdateTemplateEntry:*/
typedef struct S_descriptor_update_template_entry{
/*Binding within the destination descriptor set to write*/
	uint32_t	dstBinding;
/*Array element within the destination binding to write*/
	uint32_t	dstArrayElement;
/*Number of descriptors to write*/
	uint32_t	descriptorCount;
/*Descriptor type to write*/
	E_descriptor_type	descriptorType;
/*Offset into pData where the descriptors to update are stored*/
	size_t	offset;
/*Stride between two descriptors in pData when writing more than one descriptor*/
	size_t	stride;
S_descriptor_update_template_entry(
	 uint32_t   dstBinding_
	,uint32_t   dstArrayElement_
	,uint32_t   descriptorCount_
	,E_descriptor_type  descriptorType_
	,size_t   offset_
	,size_t   stride_);
};

/*	VkXYColorEXT:Chromaticity coordinate*/
typedef struct S_xy_color_EXT{
	float	x;
	float	y;
S_xy_color_EXT(
	 float   x_
	,float   y_);
};

/*	VkRefreshCycleDurationGOOGLE:
returnd only*/
typedef struct S_refresh_cycle_duration_GOOGLE{
/*Number of nanoseconds from the start of one refresh cycle to the next*/
	uint64_t	refreshDuration;
S_refresh_cycle_duration_GOOGLE(
	 uint64_t   refreshDuration_);
};

/*	VkPastPresentationTimingGOOGLE:
returnd only*/
typedef struct S_past_presentation_timing_GOOGLE{
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
S_past_presentation_timing_GOOGLE(
	 uint32_t   presentID_
	,uint64_t   desiredPresentTime_
	,uint64_t   actualPresentTime_
	,uint64_t   earliestPresentTime_
	,uint64_t   presentMargin_);
};

/*	VkPresentTimeGOOGLE:*/
typedef struct S_present_time_GOOGLE{
/*Application-provided identifier*/
	uint32_t	presentID;
/*Earliest time an image should be presented*/
	uint64_t	desiredPresentTime;
S_present_time_GOOGLE(
	 uint32_t   presentID_
	,uint64_t   desiredPresentTime_);
};

/*	VkViewportWScalingNV:*/
typedef struct S_viewport_w_scaling_NV{
	float	xcoeff;
	float	ycoeff;
S_viewport_w_scaling_NV(
	 float   xcoeff_
	,float   ycoeff_);
};

/*	VkViewportSwizzleNV:*/
typedef struct S_viewport_swizzle_NV{
	E_viewport_coordinate_swizzle_NV	x;
	E_viewport_coordinate_swizzle_NV	y;
	E_viewport_coordinate_swizzle_NV	z;
	E_viewport_coordinate_swizzle_NV	w;
S_viewport_swizzle_NV(
	 E_viewport_coordinate_swizzle_NV  x_
	,E_viewport_coordinate_swizzle_NV  y_
	,E_viewport_coordinate_swizzle_NV  z_
	,E_viewport_coordinate_swizzle_NV  w_);
};

/*	VkInputAttachmentAspectReference:*/
typedef struct S_input_attachment_aspect_reference{
	uint32_t	subpass;
	uint32_t	inputAttachmentIndex;
	VkImageAspectFlags	aspectMask;
S_input_attachment_aspect_reference(
	 uint32_t   subpass_
	,uint32_t   inputAttachmentIndex_
	,VkImageAspectFlags   aspectMask_);
};

/*	VkSampleLocationEXT:*/
typedef struct S_sample_location_EXT{
	float	x;
	float	y;
S_sample_location_EXT(
	 float   x_
	,float   y_);
};

/*	VkAttachmentSampleLocationsEXT:*/
typedef struct S_attachment_sample_locations_EXT{
	uint32_t	attachmentIndex;
	S_sample_locations_info_EXT	sampleLocationsInfo;
S_attachment_sample_locations_EXT(
	 uint32_t   attachmentIndex_
	,S_sample_locations_info_EXT  sampleLocationsInfo_);
};

/*	VkSubpassSampleLocationsEXT:*/
typedef struct S_subpass_sample_locations_EXT{
	uint32_t	subpassIndex;
	S_sample_locations_info_EXT	sampleLocationsInfo;
S_subpass_sample_locations_EXT(
	 uint32_t   subpassIndex_
	,S_sample_locations_info_EXT  sampleLocationsInfo_);
};

/*	VkShaderResourceUsageAMD:
returnd only*/
typedef struct S_shader_resource_usage_AMD{
	uint32_t	numUsedVgprs;
	uint32_t	numUsedSgprs;
	uint32_t	ldsSizePerLocalWorkGroup;
	size_t	ldsUsageSizeInBytes;
	size_t	scratchMemUsageInBytes;
S_shader_resource_usage_AMD(
	 uint32_t   numUsedVgprs_
	,uint32_t   numUsedSgprs_
	,uint32_t   ldsSizePerLocalWorkGroup_
	,size_t   ldsUsageSizeInBytes_
	,size_t   scratchMemUsageInBytes_);
};

/*	VkShaderStatisticsInfoAMD:
returnd only*/
typedef struct S_shader_statistics_info_AMD{
	VkShaderStageFlags	shaderStageMask;
	S_shader_resource_usage_AMD	resourceUsage;
	uint32_t	numPhysicalVgprs;
	uint32_t	numPhysicalSgprs;
	uint32_t	numAvailableVgprs;
	uint32_t	numAvailableSgprs;
	uint32_t	computeWorkGroupSize;
S_shader_statistics_info_AMD(
	 VkShaderStageFlags   shaderStageMask_
	,S_shader_resource_usage_AMD  resourceUsage_
	,uint32_t   numPhysicalVgprs_
	,uint32_t   numPhysicalSgprs_
	,uint32_t   numAvailableVgprs_
	,uint32_t   numAvailableSgprs_
	,uint32_t [3]  computeWorkGroupSize_);
};

/*	VkVertexInputBindingDivisorDescriptionEXT:*/
typedef struct S_vertex_input_binding_divisor_description_EXT{
	uint32_t	binding;
	uint32_t	divisor;
S_vertex_input_binding_divisor_description_EXT(
	 uint32_t   binding_
	,uint32_t   divisor_);
};

/*	VkShadingRatePaletteNV:*/
typedef struct S_shading_rate_palette_NV{
	uint32_t	shadingRatePaletteEntryCount;
/*
len:	shadingRatePaletteEntryCount*/
	const	E_shading_rate_palette_entry_NV*	pShadingRatePaletteEntries;
S_shading_rate_palette_NV(
	 uint32_t   shadingRatePaletteEntryCount_
	,const E_shading_rate_palette_entry_NV *  pShadingRatePaletteEntries_);
};

/*	VkCoarseSampleLocationNV:*/
typedef struct S_coarse_sample_location_NV{
	uint32_t	pixelX;
	uint32_t	pixelY;
	uint32_t	sample;
S_coarse_sample_location_NV(
	 uint32_t   pixelX_
	,uint32_t   pixelY_
	,uint32_t   sample_);
};

/*	VkCoarseSampleOrderCustomNV:*/
typedef struct S_coarse_sample_order_custom_NV{
	E_shading_rate_palette_entry_NV	shadingRate;
	uint32_t	sampleCount;
	uint32_t	sampleLocationCount;
/*
len:	sampleLocationCount*/
	const	S_coarse_sample_location_NV*	pSampleLocations;
S_coarse_sample_order_custom_NV(
	 E_shading_rate_palette_entry_NV  shadingRate_
	,uint32_t   sampleCount_
	,uint32_t   sampleLocationCount_
	,const S_coarse_sample_location_NV * pSampleLocations_);
};

/*	VkDrawMeshTasksIndirectCommandNV:*/
typedef struct S_draw_mesh_tasks_indirect_command_NV{
	uint32_t	taskCount;
	uint32_t	firstTask;
S_draw_mesh_tasks_indirect_command_NV(
	 uint32_t   taskCount_
	,uint32_t   firstTask_);
};

/*	VkGeometryDataNVX:*/
typedef struct S_geometry_data_NVX{
	S_geometry_triangles_NVX	triangles;
	S_geometry_aabb_NVX	aabbs;
S_geometry_data_NVX(
	 S_geometry_triangles_NVX  triangles_
	,S_geometry_aabb_NVX  aabbs_);
};

/*	VkDrmFormatModifierPropertiesEXT:
returnd only*/
typedef struct S_drm_format_modifier_properties_EXT{
	uint64_t	drmFormatModifier;
	uint32_t	drmFormatModifierPlaneCount;
	VkFormatFeatureFlags	drmFormatModifierTilingFeatures;
S_drm_format_modifier_properties_EXT(
	 uint64_t   drmFormatModifier_
	,uint32_t   drmFormatModifierPlaneCount_
	,VkFormatFeatureFlags   drmFormatModifierTilingFeatures_);
};

/*	VkBaseOutStructure:*/
typedef struct S_base_out_structure{
private:
	E_structure_type	sType;
	struct	S_base_out_structure*	pNext;
public:
S_base_out_structure(
);
};

/*	VkBaseInStructure:*/
typedef struct S_base_in_structure{
private:
	E_structure_type	sType;
	const	struct	S_base_in_structure*	pNext;
public:
S_base_in_structure(
);
};

/*	VkApplicationInfo:*/
typedef struct S_application_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	
len:	null-terminated*/
	const	char*	pApplicationName;
	uint32_t	applicationVersion;
/*|optional|	
len:	null-terminated*/
	const	char*	pEngineName;
	uint32_t	engineVersion;
	uint32_t	apiVersion;
S_application_info(
	 const const char*      *     pApplicationName_
	,uint32_t   applicationVersion_
	,const const char*      *     pEngineName_
	,uint32_t   engineVersion_
	,uint32_t   apiVersion_);
};

/*	VkMappedMemoryRange:*/
typedef struct S_mapped_memory_range{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Mapped memory object*/
	VkDeviceMemory	memory;
/*Offset within the memory object where the range starts*/
	VkDeviceSize	offset;
/*Size of the range within the memory object*/
	VkDeviceSize	size;
S_mapped_memory_range(
	 VkDeviceMemory   memory_
	,VkDeviceSize   offset_
	,VkDeviceSize   size_);
};

/*	VkCopyDescriptorSet:*/
typedef struct S_copy_descriptor_set{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
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
S_copy_descriptor_set(
	 VkDescriptorSet   srcSet_
	,uint32_t   srcBinding_
	,uint32_t   srcArrayElement_
	,VkDescriptorSet   dstSet_
	,uint32_t   dstBinding_
	,uint32_t   dstArrayElement_
	,uint32_t   descriptorCount_);
};

/*	VkBufferViewCreateInfo:*/
typedef struct S_buffer_view_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkBufferViewCreateFlags	flags;
	VkBuffer	buffer;
/*Optionally specifies format of elements*/
	E_format	format;
/*Specified in bytes*/
	VkDeviceSize	offset;
/*View size specified in bytes*/
	VkDeviceSize	range;
S_buffer_view_create_info(
	 VkBufferViewCreateFlags flags_
	,VkBuffer   buffer_
	,E_format  format_
	,VkDeviceSize   offset_
	,VkDeviceSize   range_);
};

/*	VkMemoryBarrier:*/
typedef struct S_memory_barrier{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Memory accesses from the source of the dependency to synchronize*/
	VkAccessFlags	srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	VkAccessFlags	dstAccessMask;
S_memory_barrier(
	 VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_);
};

/*	VkBufferMemoryBarrier:*/
typedef struct S_buffer_memory_barrier{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
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
S_buffer_memory_barrier(
	 VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,uint32_t   srcQueueFamilyIndex_
	,uint32_t   dstQueueFamilyIndex_
	,VkBuffer   buffer_
	,VkDeviceSize   offset_
	,VkDeviceSize   size_);
};

/*	VkPipelineShaderStageCreateInfo:*/
typedef struct S_pipeline_shader_stage_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineShaderStageCreateFlags	flags;
/*Shader stage*/
	F_shader_stage	stage;
/*Module containing entry point*/
	VkShaderModule	module;
/*Null-terminated entry point name
len:	null-terminated*/
	const	char*	pName;
/*|optional|	*/
	const	S_specialization_info*	pSpecializationInfo;
S_pipeline_shader_stage_create_info(
	 VkPipelineShaderStageCreateFlags   flags_
	,F_shader_stage  stage_
	,VkShaderModule   module_
	,const const char*             *            pName_
	,const S_specialization_info * pSpecializationInfo_);
};

/*	VkComputePipelineCreateInfo:*/
typedef struct S_compute_pipeline_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Pipeline creation flags*/
	VkPipelineCreateFlags	flags;
	S_pipeline_shader_stage_create_info	stage;
/*Interface layout of the pipeline*/
	VkPipelineLayout	layout;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline	basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t	basePipelineIndex;
S_compute_pipeline_create_info(
	 VkPipelineCreateFlags   flags_
	,S_pipeline_shader_stage_create_info  stage_
	,VkPipelineLayout   layout_
	,VkPipeline   basePipelineHandle_
	,int32_t   basePipelineIndex_);
};

/*	VkPipelineInputAssemblyStateCreateInfo:*/
typedef struct S_pipeline_input_assembly_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineInputAssemblyStateCreateFlags	flags;
	E_primitive_topology	topology;
	VkBool32	primitiveRestartEnable;
S_pipeline_input_assembly_state_create_info(
	 VkPipelineInputAssemblyStateCreateFlags   flags_
	,E_primitive_topology  topology_
	,VkBool32   primitiveRestartEnable_);
};

/*	VkPipelineDynamicStateCreateInfo:*/
typedef struct S_pipeline_dynamic_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineDynamicStateCreateFlags	flags;
	uint32_t	dynamicStateCount;
/*
len:	dynamicStateCount*/
	const	E_dynamic_state*	pDynamicStates;
S_pipeline_dynamic_state_create_info(
	 VkPipelineDynamicStateCreateFlags   flags_
	,uint32_t   dynamicStateCount_
	,const E_dynamic_state *  pDynamicStates_);
};

/*	VkPipelineDepthStencilStateCreateInfo:*/
typedef struct S_pipeline_depth_stencil_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineDepthStencilStateCreateFlags	flags;
	VkBool32	depthTestEnable;
	VkBool32	depthWriteEnable;
	E_compare_op	depthCompareOp;
/*optional (depth_bounds_test)*/
	VkBool32	depthBoundsTestEnable;
	VkBool32	stencilTestEnable;
	S_stencil_op_state	front;
	S_stencil_op_state	back;
	float	minDepthBounds;
	float	maxDepthBounds;
S_pipeline_depth_stencil_state_create_info(
	 VkPipelineDepthStencilStateCreateFlags   flags_
	,VkBool32   depthTestEnable_
	,VkBool32   depthWriteEnable_
	,E_compare_op  depthCompareOp_
	,VkBool32   depthBoundsTestEnable_
	,VkBool32   stencilTestEnable_
	,S_stencil_op_state  front_
	,S_stencil_op_state  back_
	,float   minDepthBounds_
	,float   maxDepthBounds_);
};

/*	VkPipelineCacheCreateInfo:*/
typedef struct S_pipeline_cache_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineCacheCreateFlags	flags;
/*Size of initial data to populate cache, in bytes*/
	size_t	initialDataSize;
/*Initial data to populate cache
len:	initialDataSize*/
	const	void*	pInitialData;
S_pipeline_cache_create_info(
	 VkPipelineCacheCreateFlags   flags_
	,size_t   initialDataSize_
	,const const void*             *            pInitialData_);
};

/*	VkPipelineLayoutCreateInfo:*/
typedef struct S_pipeline_layout_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
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
S_pipeline_layout_create_info(
	 VkPipelineLayoutCreateFlags   flags_
	,uint32_t   setLayoutCount_
	,const const VkDescriptorSetLayout*  * pSetLayouts_
	,uint32_t   pushConstantRangeCount_
	,const S_push_constant_range * pPushConstantRanges_);
};

/*	VkCommandPoolCreateInfo:*/
typedef struct S_command_pool_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Command pool creation flags*/
	VkCommandPoolCreateFlags	flags;
	uint32_t	queueFamilyIndex;
S_command_pool_create_info(
	 VkCommandPoolCreateFlags   flags_
	,uint32_t   queueFamilyIndex_);
};

/*	VkCommandBufferAllocateInfo:*/
typedef struct S_command_buffer_allocate_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkCommandPool	commandPool;
	E_command_buffer_level	level;
	uint32_t	commandBufferCount;
S_command_buffer_allocate_info(
	 VkCommandPool   commandPool_
	,E_command_buffer_level  level_
	,uint32_t   commandBufferCount_);
};

/*	VkEventCreateInfo:*/
typedef struct S_event_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Event creation flags*/
	VkEventCreateFlags	flags;
S_event_create_info(
	 VkEventCreateFlags   flags_);
};

/*	VkQueryPoolCreateInfo:*/
typedef struct S_query_pool_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkQueryPoolCreateFlags	flags;
	E_query_type	queryType;
	uint32_t	queryCount;
/*Optional*/
	VkQueryPipelineStatisticFlags	pipelineStatistics;
S_query_pool_create_info(
	 VkQueryPoolCreateFlags   flags_
	,E_query_type  queryType_
	,uint32_t   queryCount_
	,VkQueryPipelineStatisticFlags   pipelineStatistics_);
};

/*	VkFramebufferCreateInfo:*/
typedef struct S_framebuffer_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkFramebufferCreateFlags	flags;
	VkRenderPass	renderPass;
/*|optional|	*/
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	VkImageView*	pAttachments;
	uint32_t	width;
	uint32_t	height;
	uint32_t	layers;
S_framebuffer_create_info(
	 VkFramebufferCreateFlags   flags_
	,VkRenderPass   renderPass_
	,uint32_t   attachmentCount_
	,const const VkImageView*      *     pAttachments_
	,uint32_t   width_
	,uint32_t   height_
	,uint32_t   layers_);
};

/*	VkDisplayModeCreateInfoKHR:*/
typedef struct S_display_mode_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkDisplayModeCreateFlagsKHR	flags;
/*The parameters this mode uses.*/
	S_display_mode_parameters_KHR	parameters;
S_display_mode_create_info_KHR(
	 VkDisplayModeCreateFlagsKHR   flags_
	,S_display_mode_parameters_KHR  parameters_);
};

/*	VkDisplaySurfaceCreateInfoKHR:*/
typedef struct S_display_surface_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkDisplaySurfaceCreateFlagsKHR	flags;
/*The mode to use when displaying this surface*/
	VkDisplayModeKHR	displayMode;
/*The plane on which this surface appears.  Must be between 0 and the value returned by vkGetPhysicalDeviceDisplayPlanePropertiesKHR() in pPropertyCount.*/
	uint32_t	planeIndex;
/*The z-order of the plane.*/
	uint32_t	planeStackIndex;
/*Transform to apply to the images as part of the scanout operation*/
	F_surface_transform_khr	transform;
/*Global alpha value.  Must be between 0 and 1, inclusive.  Ignored if alphaMode is not VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR*/
	float	globalAlpha;
/*What type of alpha blending to use.  Must be a bit from vkGetDisplayPlanePropertiesKHR::supportedAlpha.*/
	F_display_plane_alpha_khr	alphaMode;
/*size of the images to use with this surface*/
	S_extent_2d	imageExtent;
S_display_surface_create_info_KHR(
	 VkDisplaySurfaceCreateFlagsKHR   flags_
	,VkDisplayModeKHR   displayMode_
	,uint32_t   planeIndex_
	,uint32_t   planeStackIndex_
	,F_surface_transform_khr  transform_
	,float   globalAlpha_
	,F_display_plane_alpha_khr  alphaMode_
	,S_extent_2d  imageExtent_);
};

/*	VkDisplayPresentInfoKHR:
extends to:	VkPresentInfoKHR*/
typedef struct S_display_present_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Rectangle within the presentable image to read pixel data from when presenting to the display.*/
	S_rect_2d	srcRect;
/*Rectangle within the current display mode's visible region to display srcRectangle in.*/
	S_rect_2d	dstRect;
/*For smart displays, use buffered mode.  If the display properties member "persistentMode" is VK_FALSE, this member must always be VK_FALSE.*/
	VkBool32	persistent;
S_display_present_info_KHR(
	 S_rect_2d  srcRect_
	,S_rect_2d  dstRect_
	,VkBool32   persistent_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidSurfaceCreateInfoKHR:*/
typedef struct S_android_surface_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkAndroidSurfaceCreateFlagsKHR	flags;
	struct	ANativeWindow*	window;
S_android_surface_create_info_KHR(
	 VkAndroidSurfaceCreateFlagsKHR   flags_
	,struct struct ANativeWindow*     *    window_);
};

#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
/*	VkMirSurfaceCreateInfoKHR:*/
typedef struct S_mir_surface_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkMirSurfaceCreateFlagsKHR	flags;
	MirConnection*	connection;
	MirSurface*	mirSurface;
S_mir_surface_create_info_KHR(
	 VkMirSurfaceCreateFlagsKHR   flags_
	,MirConnection*                    *                   connection_
	,MirSurface*                       *                      mirSurface_);
};

#endif

#ifdef VK_USE_PLATFORM_VI_NN
/*	VkViSurfaceCreateInfoNN:*/
typedef struct S_vi_surface_create_info_NN{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkViSurfaceCreateFlagsNN	flags;
	void*	window;
S_vi_surface_create_info_NN(
	 VkViSurfaceCreateFlagsNN   flags_
	,void*                             *                            window_);
};

#endif

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
/*	VkWaylandSurfaceCreateInfoKHR:*/
typedef struct S_wayland_surface_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkWaylandSurfaceCreateFlagsKHR	flags;
	struct	wl_display*	display;
	struct	wl_surface*	surface;
S_wayland_surface_create_info_KHR(
	 VkWaylandSurfaceCreateFlagsKHR   flags_
	,struct struct wl_*                *               display_
	,struct struct wl_*                *               surface_);
};

#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
/*	VkWin32SurfaceCreateInfoKHR:*/
typedef struct S_win32_surface_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkWin32SurfaceCreateFlagsKHR	flags;
	HINSTANCE	hinstance;
	HWND	hwnd;
S_win32_surface_create_info_KHR(
	 VkWin32SurfaceCreateFlagsKHR   flags_
	,HINSTANCE   hinstance_
	,HWND   hwnd_);
};

#endif

#ifdef VK_USE_PLATFORM_XLIB_KHR
/*	VkXlibSurfaceCreateInfoKHR:*/
typedef struct S_xlib_surface_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkXlibSurfaceCreateFlagsKHR	flags;
	Display*	dpy;
	Window	window;
S_xlib_surface_create_info_KHR(
	 VkXlibSurfaceCreateFlagsKHR   flags_
	,Display*                          *                         dpy_
	,Window   window_);
};

#endif

#ifdef VK_USE_PLATFORM_XCB_KHR
/*	VkXcbSurfaceCreateInfoKHR:*/
typedef struct S_xcb_surface_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkXcbSurfaceCreateFlagsKHR	flags;
	xcb_connection_t*	connection;
	xcb_window_t	window;
S_xcb_surface_create_info_KHR(
	 VkXcbSurfaceCreateFlagsKHR   flags_
	,xcb__t*                 *                connection_
	,xcb__t   window_);
};

#endif

/*	VkDebugReportCallbackCreateInfoEXT:
extends to:	VkInstanceCreateInfo*/
typedef struct S_debug_report_callback_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Indicates which events call this callback*/
	VkDebugReportFlagsEXT	flags;
/*Function pointer of a callback function*/
	PFN_vkDebugReportCallbackEXT	pfnCallback;
/*User data provided to callback function*/
	void*	pUserData;
S_debug_report_callback_create_info_EXT(
	 VkDebugReportFlagsEXT   flags_
	,PFN_vkDebugReportCallbackEXT   pfnCallback_
	,void*             *            pUserData_);
};

/*	VkValidationFlagsEXT:
extends to:	VkInstanceCreateInfo*/
typedef struct S_validation_flags_EXT{
private:
/*Must be VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT*/
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Number of validation checks to disable*/
	uint32_t	disabledValidationCheckCount;
/*Validation checks to disable
len:	disabledValidationCheckCount*/
	const	E_validation_check_EXT*	pDisabledValidationChecks;
S_validation_flags_EXT(
	 uint32_t   disabledValidationCheckCount_
	,const E_validation_check_EXT * pDisabledValidationChecks_);
};

/*	VkPipelineRasterizationStateRasterizationOrderAMD:
extends to:	VkPipelineRasterizationStateCreateInfo*/
typedef struct S_pipeline_rasterization_state_rasterization_order_AMD{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Rasterization order to use for the pipeline*/
	E_rasterization_order_AMD	rasterizationOrder;
S_pipeline_rasterization_state_rasterization_order_AMD(
	 E_rasterization_order_AMD  rasterizationOrder_);
};

/*	VkDebugMarkerObjectNameInfoEXT:*/
typedef struct S_debug_marker_object_name_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*The type of the object*/
	E_debug_report_object_type_EXT	objectType;
/*The handle of the object, cast to uint64_t*/
	uint64_t	object;
/*Name to apply to the object
len:	null-terminated*/
	const	char*	pObjectName;
S_debug_marker_object_name_info_EXT(
	 E_debug_report_object_type_EXT  objectType_
	,uint64_t   object_
	,const const char*  * pObjectName_);
};

/*	VkDebugMarkerObjectTagInfoEXT:*/
typedef struct S_debug_marker_object_tag_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*The type of the object*/
	E_debug_report_object_type_EXT	objectType;
/*The handle of the object, cast to uint64_t*/
	uint64_t	object;
/*The name of the tag to set on the object*/
	uint64_t	tagName;
/*The length in bytes of the tag data*/
	size_t	tagSize;
/*Tag data to attach to the object
len:	tagSize*/
	const	void*	pTag;
S_debug_marker_object_tag_info_EXT(
	 E_debug_report_object_type_EXT  objectType_
	,uint64_t   object_
	,uint64_t   tagName_
	,size_t   tagSize_
	,const const void*         *        pTag_);
};

/*	VkDebugMarkerMarkerInfoEXT:*/
typedef struct S_debug_marker_marker_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Name of the debug marker
len:	null-terminated*/
	const	char*	pMarkerName;
/*Optional color for debug marker*/
	float	color;
S_debug_marker_marker_info_EXT(
	 const const char*  * pMarkerName_
	,float [4]  color_);
};

/*	VkDedicatedAllocationImageCreateInfoNV:
extends to:	VkImageCreateInfo*/
typedef struct S_dedicated_allocation_image_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Whether this image uses a dedicated allocation*/
	VkBool32	dedicatedAllocation;
S_dedicated_allocation_image_create_info_NV(
	 VkBool32   dedicatedAllocation_);
};

/*	VkDedicatedAllocationBufferCreateInfoNV:
extends to:	VkBufferCreateInfo*/
typedef struct S_dedicated_allocation_buffer_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Whether this buffer uses a dedicated allocation*/
	VkBool32	dedicatedAllocation;
S_dedicated_allocation_buffer_create_info_NV(
	 VkBool32   dedicatedAllocation_);
};

/*	VkDedicatedAllocationMemoryAllocateInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_dedicated_allocation_memory_allocate_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Image that this allocation will be bound to*/
	VkImage	image;
/*Buffer that this allocation will be bound to*/
	VkBuffer	buffer;
S_dedicated_allocation_memory_allocate_info_NV(
	 VkImage   image_
	,VkBuffer   buffer_);
};

/*	VkExternalMemoryImageCreateInfoNV:
extends to:	VkImageCreateInfo*/
typedef struct S_external_memory_image_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkExternalMemoryHandleTypeFlagsNV	handleTypes;
S_external_memory_image_create_info_NV(
	 VkExternalMemoryHandleTypeFlagsNV   handleTypes_);
};

/*	VkExportMemoryAllocateInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_allocate_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkExternalMemoryHandleTypeFlagsNV	handleTypes;
S_export_memory_allocate_info_NV(
	 VkExternalMemoryHandleTypeFlagsNV   handleTypes_);
};

/*	VkImportMemoryWin32HandleInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_win32_handle_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkExternalMemoryHandleTypeFlagsNV	handleType;
/*|optional|	*/
	HANDLE	handle;
S_import_memory_win32_handle_info_NV(
	 VkExternalMemoryHandleTypeFlagsNV   handleType_
	,HANDLE   handle_);
};

/*	VkExportMemoryWin32HandleInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_win32_handle_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	const	SECURITY_ATTRIBUTES*	pAttributes;
/*|optional|	*/
	DWORD	dwAccess;
S_export_memory_win32_handle_info_NV(
	 const const SECURITY_ATTRIBUTES*        *       pAttributes_
	,DWORD   dwAccess_);
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
/*	VkWin32KeyedMutexAcquireReleaseInfoNV:
extends to:	VkSubmitInfo*/
typedef struct S_win32_keyed_mutex_acquire_release_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
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
/*|optional|	*/
	uint32_t	releaseCount;
/*
len:	releaseCount*/
	const	VkDeviceMemory*	pReleaseSyncs;
/*
len:	releaseCount*/
	const	uint64_t*	pReleaseKeys;
S_win32_keyed_mutex_acquire_release_info_NV(
	 uint32_t   acquireCount_
	,const const VkDeviceMemory*             *            pAcquireSyncs_
	,const const uint64_t*                   *                  pAcquireKeys_
	,const const uint32_t*                   *                  pAcquireTimeoutMilliseconds_
	,uint32_t   releaseCount_
	,const const VkDeviceMemory*             *            pReleaseSyncs_
	,const const uint64_t*                   *                  pReleaseKeys_);
};

#endif

/*	VkDeviceGeneratedCommandsFeaturesNVX:*/
typedef struct S_device_generated_commands_features_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBool32	computeBindingPointSupport;
S_device_generated_commands_features_NVX(
	 VkBool32   computeBindingPointSupport_);
};

/*	VkDeviceGeneratedCommandsLimitsNVX:*/
typedef struct S_device_generated_commands_limits_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	maxIndirectCommandsLayoutTokenCount;
	uint32_t	maxObjectEntryCounts;
	uint32_t	minSequenceCountBufferOffsetAlignment;
	uint32_t	minSequenceIndexBufferOffsetAlignment;
	uint32_t	minCommandsTokenBufferOffsetAlignment;
S_device_generated_commands_limits_NVX(
	 uint32_t   maxIndirectCommandsLayoutTokenCount_
	,uint32_t   maxObjectEntryCounts_
	,uint32_t   minSequenceCountBufferOffsetAlignment_
	,uint32_t   minSequenceIndexBufferOffsetAlignment_
	,uint32_t   minCommandsTokenBufferOffsetAlignment_);
};

/*	VkIndirectCommandsLayoutCreateInfoNVX:*/
typedef struct S_indirect_commands_layout_create_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_pipeline_bind_point	pipelineBindPoint;
	VkIndirectCommandsLayoutUsageFlagsNVX	flags;
	uint32_t	tokenCount;
/*
len:	tokenCount*/
	const	S_indirect_commands_layout_token_NVX*	pTokens;
S_indirect_commands_layout_create_info_NVX(
	 E_pipeline_bind_point  pipelineBindPoint_
	,VkIndirectCommandsLayoutUsageFlagsNVX   flags_
	,uint32_t   tokenCount_
	,const S_indirect_commands_layout_token_NVX *  pTokens_);
};

/*	VkCmdProcessCommandsInfoNVX:*/
typedef struct S_cmd_process_commands_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkObjectTableNVX	objectTable;
	VkIndirectCommandsLayoutNVX	indirectCommandsLayout;
	uint32_t	indirectCommandsTokenCount;
/*
len:	indirectCommandsTokenCount*/
	const	S_indirect_commands_token_NVX*	pIndirectCommandsTokens;
	uint32_t	maxSequencesCount;
/*|optional|	
(externsync)*/
	VkCommandBuffer	targetCommandBuffer;
/*|optional|	*/
	VkBuffer	sequencesCountBuffer;
/*|optional|	*/
	VkDeviceSize	sequencesCountOffset;
/*|optional|	*/
	VkBuffer	sequencesIndexBuffer;
/*|optional|	*/
	VkDeviceSize	sequencesIndexOffset;
S_cmd_process_commands_info_NVX(
	 VkObjectTableNVX   objectTable_
	,VkIndirectCommandsLayoutNVX   indirectCommandsLayout_
	,uint32_t   indirectCommandsTokenCount_
	,const S_indirect_commands_token_NVX *       pIndirectCommandsTokens_
	,uint32_t   maxSequencesCount_
	,VkCommandBuffer   targetCommandBuffer_
	,VkBuffer   sequencesCountBuffer_
	,VkDeviceSize   sequencesCountOffset_
	,VkBuffer   sequencesIndexBuffer_
	,VkDeviceSize   sequencesIndexOffset_);
};

/*	VkCmdReserveSpaceForCommandsInfoNVX:*/
typedef struct S_cmd_reserve_space_for_commands_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkObjectTableNVX	objectTable;
	VkIndirectCommandsLayoutNVX	indirectCommandsLayout;
	uint32_t	maxSequencesCount;
S_cmd_reserve_space_for_commands_info_NVX(
	 VkObjectTableNVX   objectTable_
	,VkIndirectCommandsLayoutNVX   indirectCommandsLayout_
	,uint32_t   maxSequencesCount_);
};

/*	VkObjectTableCreateInfoNVX:*/
typedef struct S_object_table_create_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	objectCount;
/*
len:	objectCount*/
	const	E_object_entry_type_NVX*	pObjectEntryTypes;
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
S_object_table_create_info_NVX(
	 uint32_t   objectCount_
	,const E_object_entry_type_NVX *       pObjectEntryTypes_
	,const const uint32_t*                    *                   pObjectEntryCounts_
	,const const VkObjectEntryUsageFlagsNVX*  * pObjectEntryUsageFlags_
	,uint32_t   maxUniformBuffersPerDescriptor_
	,uint32_t   maxStorageBuffersPerDescriptor_
	,uint32_t   maxStorageImagesPerDescriptor_
	,uint32_t   maxSampledImagesPerDescriptor_
	,uint32_t   maxPipelineLayouts_);
};

/*	VkPhysicalDeviceMemoryProperties2:
returnd only*/
typedef struct S_physical_device_memory_properties2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_physical_device_memory_properties	memoryProperties;
S_physical_device_memory_properties2(
	 S_physical_device_memory_properties  memoryProperties_);
};

/*	VkSparseImageFormatProperties2:
returnd only*/
typedef struct S_sparse_image_format_properties2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_sparse_image_format_properties	properties;
S_sparse_image_format_properties2(
	 S_sparse_image_format_properties  properties_);
};

/*	VkPhysicalDeviceSparseImageFormatInfo2:*/
typedef struct S_physical_device_sparse_image_format_info2{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_format	format;
	E_image_type	type;
	F_sample_count	samples;
	VkImageUsageFlags	usage;
	E_image_tiling	tiling;
S_physical_device_sparse_image_format_info2(
	 E_format  format_
	,E_image_type  type_
	,F_sample_count  samples_
	,VkImageUsageFlags   usage_
	,E_image_tiling  tiling_);
};

/*	VkPhysicalDevicePushDescriptorPropertiesKHR:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_push_descriptor_properties_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	maxPushDescriptors;
S_physical_device_push_descriptor_properties_KHR(
	 uint32_t   maxPushDescriptors_);
};

/*	VkPhysicalDeviceDriverPropertiesKHR:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_driver_properties_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	driverID;
	char	driverName;
	char	driverInfo;
	S_conformance_version_KHR	conformanceVersion;
S_physical_device_driver_properties_KHR(
	 uint32_t   driverID_
	,char [VK_MAX_DRIVER_NAME_SIZE_KHR]  driverName_
	,char [VK_MAX_DRIVER_INFO_SIZE_KHR]  driverInfo_
	,S_conformance_version_KHR  conformanceVersion_);
};

/*	VkPresentRegionsKHR:
extends to:	VkPresentInfoKHR*/
typedef struct S_present_regions_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Copy of VkPresentInfoKHR::swapchainCount*/
	uint32_t	swapchainCount;
/*The regions that have changed
len:	swapchainCount*/
	const	S_present_region_KHR*	pRegions;
S_present_regions_KHR(
	 uint32_t   swapchainCount_
	,const S_present_region_KHR *   pRegions_);
};

/*	VkPhysicalDeviceVariablePointerFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_variable_pointer_features{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	variablePointersStorageBuffer;
	VkBool32	variablePointers;
S_physical_device_variable_pointer_features(
	 VkBool32   variablePointersStorageBuffer_
	,VkBool32   variablePointers_);
};

/*	VkPhysicalDeviceExternalImageFormatInfo:
extends to:	VkPhysicalDeviceImageFormatInfo2*/
typedef struct S_physical_device_external_image_format_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	F_external_memory_handle_type	handleType;
S_physical_device_external_image_format_info(
	 F_external_memory_handle_type  handleType_);
};

/*	VkExternalImageFormatProperties:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_external_image_format_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_external_memory_properties	externalMemoryProperties;
S_external_image_format_properties(
	 S_external_memory_properties  externalMemoryProperties_);
};

/*	VkPhysicalDeviceExternalBufferInfo:*/
typedef struct S_physical_device_external_buffer_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkBufferCreateFlags	flags;
	VkBufferUsageFlags	usage;
	F_external_memory_handle_type	handleType;
S_physical_device_external_buffer_info(
	 VkBufferCreateFlags   flags_
	,VkBufferUsageFlags   usage_
	,F_external_memory_handle_type  handleType_);
};

/*	VkExternalBufferProperties:
returnd only*/
typedef struct S_external_buffer_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_external_memory_properties	externalMemoryProperties;
S_external_buffer_properties(
	 S_external_memory_properties  externalMemoryProperties_);
};

/*	VkPhysicalDeviceIDProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_id_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint8_t	deviceUUID;
	uint8_t	driverUUID;
	uint8_t	deviceLUID;
	uint32_t	deviceNodeMask;
	VkBool32	deviceLUIDValid;
S_physical_device_id_properties(
	 uint8_t [VK_UUID_SIZE]  deviceUUID_
	,uint8_t [VK_UUID_SIZE]  driverUUID_
	,uint8_t [VK_LUID_SIZE]  deviceLUID_
	,uint32_t   deviceNodeMask_
	,VkBool32   deviceLUIDValid_);
};

/*	VkExternalMemoryImageCreateInfo:
extends to:	VkImageCreateInfo*/
typedef struct S_external_memory_image_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkExternalMemoryHandleTypeFlags	handleTypes;
S_external_memory_image_create_info(
	 VkExternalMemoryHandleTypeFlags   handleTypes_);
};

/*	VkExternalMemoryBufferCreateInfo:
extends to:	VkBufferCreateInfo*/
typedef struct S_external_memory_buffer_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkExternalMemoryHandleTypeFlags	handleTypes;
S_external_memory_buffer_create_info(
	 VkExternalMemoryHandleTypeFlags   handleTypes_);
};

/*	VkExportMemoryAllocateInfo:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_allocate_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkExternalMemoryHandleTypeFlags	handleTypes;
S_export_memory_allocate_info(
	 VkExternalMemoryHandleTypeFlags   handleTypes_);
};

/*	VkImportMemoryWin32HandleInfoKHR:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	F_external_memory_handle_type	handleType;
/*|optional|	*/
	HANDLE	handle;
/*|optional|	*/
	LPCWSTR	name;
S_import_memory_win32_handle_info_KHR(
	 F_external_memory_handle_type  handleType_
	,HANDLE   handle_
	,LPCWSTR   name_);
};

/*	VkExportMemoryWin32HandleInfoKHR:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	const	SECURITY_ATTRIBUTES*	pAttributes;
	DWORD	dwAccess;
	LPCWSTR	name;
S_export_memory_win32_handle_info_KHR(
	 const const SECURITY_ATTRIBUTES*  * pAttributes_
	,DWORD   dwAccess_
	,LPCWSTR   name_);
};

/*	VkMemoryWin32HandlePropertiesKHR:
returnd only*/
typedef struct S_memory_win32_handle_properties_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	memoryTypeBits;
S_memory_win32_handle_properties_KHR(
	 uint32_t   memoryTypeBits_);
};

/*	VkMemoryGetWin32HandleInfoKHR:*/
typedef struct S_memory_get_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkDeviceMemory	memory;
	F_external_memory_handle_type	handleType;
S_memory_get_win32_handle_info_KHR(
	 VkDeviceMemory   memory_
	,F_external_memory_handle_type  handleType_);
};

/*	VkImportMemoryFdInfoKHR:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_fd_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	F_external_memory_handle_type	handleType;
	int	fd;
S_import_memory_fd_info_KHR(
	 F_external_memory_handle_type  handleType_
	,int   fd_);
};

/*	VkMemoryFdPropertiesKHR:
returnd only*/
typedef struct S_memory_fd_properties_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	memoryTypeBits;
S_memory_fd_properties_KHR(
	 uint32_t   memoryTypeBits_);
};

/*	VkMemoryGetFdInfoKHR:*/
typedef struct S_memory_get_fd_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkDeviceMemory	memory;
	F_external_memory_handle_type	handleType;
S_memory_get_fd_info_KHR(
	 VkDeviceMemory   memory_
	,F_external_memory_handle_type  handleType_);
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
/*	VkWin32KeyedMutexAcquireReleaseInfoKHR:
extends to:	VkSubmitInfo*/
typedef struct S_win32_keyed_mutex_acquire_release_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
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
/*|optional|	*/
	uint32_t	releaseCount;
/*
len:	releaseCount*/
	const	VkDeviceMemory*	pReleaseSyncs;
/*
len:	releaseCount*/
	const	uint64_t*	pReleaseKeys;
S_win32_keyed_mutex_acquire_release_info_KHR(
	 uint32_t   acquireCount_
	,const const VkDeviceMemory*  * pAcquireSyncs_
	,const const uint64_t*  * pAcquireKeys_
	,const const uint32_t*  * pAcquireTimeouts_
	,uint32_t   releaseCount_
	,const const VkDeviceMemory*  * pReleaseSyncs_
	,const const uint64_t*  * pReleaseKeys_);
};

#endif

/*	VkPhysicalDeviceExternalSemaphoreInfo:*/
typedef struct S_physical_device_external_semaphore_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	F_external_semaphore_handle_type	handleType;
S_physical_device_external_semaphore_info(
	 F_external_semaphore_handle_type  handleType_);
};

/*	VkExternalSemaphoreProperties:
returnd only*/
typedef struct S_external_semaphore_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkExternalSemaphoreHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalSemaphoreHandleTypeFlags	compatibleHandleTypes;
/*|optional|	*/
	VkExternalSemaphoreFeatureFlags	externalSemaphoreFeatures;
S_external_semaphore_properties(
	 VkExternalSemaphoreHandleTypeFlags   exportFromImportedHandleTypes_
	,VkExternalSemaphoreHandleTypeFlags   compatibleHandleTypes_
	,VkExternalSemaphoreFeatureFlags   externalSemaphoreFeatures_);
};

/*	VkExportSemaphoreCreateInfo:
extends to:	VkSemaphoreCreateInfo*/
typedef struct S_export_semaphore_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkExternalSemaphoreHandleTypeFlags	handleTypes;
S_export_semaphore_create_info(
	 VkExternalSemaphoreHandleTypeFlags   handleTypes_);
};

/*	VkImportSemaphoreWin32HandleInfoKHR:*/
typedef struct S_import_semaphore_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkSemaphore	semaphore;
/*|optional|	*/
	VkSemaphoreImportFlags	flags;
/*|optional|	*/
	F_external_semaphore_handle_type	handleType;
/*|optional|	*/
	HANDLE	handle;
/*|optional|	*/
	LPCWSTR	name;
S_import_semaphore_win32_handle_info_KHR(
	 VkSemaphore   semaphore_
	,VkSemaphoreImportFlags   flags_
	,F_external_semaphore_handle_type  handleType_
	,HANDLE   handle_
	,LPCWSTR   name_);
};

/*	VkExportSemaphoreWin32HandleInfoKHR:
extends to:	VkSemaphoreCreateInfo*/
typedef struct S_export_semaphore_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	const	SECURITY_ATTRIBUTES*	pAttributes;
	DWORD	dwAccess;
	LPCWSTR	name;
S_export_semaphore_win32_handle_info_KHR(
	 const const SECURITY_ATTRIBUTES*        *       pAttributes_
	,DWORD   dwAccess_
	,LPCWSTR   name_);
};

/*	VkD3D12FenceSubmitInfoKHR:
extends to:	VkSubmitInfo*/
typedef struct S_d_3d12_fence_submit_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	waitSemaphoreValuesCount;
/*|optional|	
len:	waitSemaphoreValuesCount*/
	const	uint64_t*	pWaitSemaphoreValues;
/*|optional|	*/
	uint32_t	signalSemaphoreValuesCount;
/*|optional|	
len:	signalSemaphoreValuesCount*/
	const	uint64_t*	pSignalSemaphoreValues;
S_d_3d12_fence_submit_info_KHR(
	 uint32_t   waitSemaphoreValuesCount_
	,const const uint64_t*  * pWaitSemaphoreValues_
	,uint32_t   signalSemaphoreValuesCount_
	,const const uint64_t*  * pSignalSemaphoreValues_);
};

/*	VkSemaphoreGetWin32HandleInfoKHR:*/
typedef struct S_semaphore_get_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkSemaphore	semaphore;
	F_external_semaphore_handle_type	handleType;
S_semaphore_get_win32_handle_info_KHR(
	 VkSemaphore   semaphore_
	,F_external_semaphore_handle_type  handleType_);
};

/*	VkImportSemaphoreFdInfoKHR:*/
typedef struct S_import_semaphore_fd_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkSemaphore	semaphore;
/*|optional|	*/
	VkSemaphoreImportFlags	flags;
	F_external_semaphore_handle_type	handleType;
	int	fd;
S_import_semaphore_fd_info_KHR(
	 VkSemaphore   semaphore_
	,VkSemaphoreImportFlags   flags_
	,F_external_semaphore_handle_type  handleType_
	,int   fd_);
};

/*	VkSemaphoreGetFdInfoKHR:*/
typedef struct S_semaphore_get_fd_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkSemaphore	semaphore;
	F_external_semaphore_handle_type	handleType;
S_semaphore_get_fd_info_KHR(
	 VkSemaphore   semaphore_
	,F_external_semaphore_handle_type  handleType_);
};

/*	VkPhysicalDeviceExternalFenceInfo:*/
typedef struct S_physical_device_external_fence_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	F_external_fence_handle_type	handleType;
S_physical_device_external_fence_info(
	 F_external_fence_handle_type  handleType_);
};

/*	VkExternalFenceProperties:
returnd only*/
typedef struct S_external_fence_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkExternalFenceHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalFenceHandleTypeFlags	compatibleHandleTypes;
/*|optional|	*/
	VkExternalFenceFeatureFlags	externalFenceFeatures;
S_external_fence_properties(
	 VkExternalFenceHandleTypeFlags   exportFromImportedHandleTypes_
	,VkExternalFenceHandleTypeFlags   compatibleHandleTypes_
	,VkExternalFenceFeatureFlags   externalFenceFeatures_);
};

/*	VkExportFenceCreateInfo:
extends to:	VkFenceCreateInfo*/
typedef struct S_export_fence_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkExternalFenceHandleTypeFlags	handleTypes;
S_export_fence_create_info(
	 VkExternalFenceHandleTypeFlags   handleTypes_);
};

/*	VkImportFenceWin32HandleInfoKHR:*/
typedef struct S_import_fence_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkFence	fence;
/*|optional|	*/
	VkFenceImportFlags	flags;
/*|optional|	*/
	F_external_fence_handle_type	handleType;
/*|optional|	*/
	HANDLE	handle;
/*|optional|	*/
	LPCWSTR	name;
S_import_fence_win32_handle_info_KHR(
	 VkFence   fence_
	,VkFenceImportFlags   flags_
	,F_external_fence_handle_type  handleType_
	,HANDLE   handle_
	,LPCWSTR   name_);
};

/*	VkExportFenceWin32HandleInfoKHR:
extends to:	VkFenceCreateInfo*/
typedef struct S_export_fence_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	const	SECURITY_ATTRIBUTES*	pAttributes;
	DWORD	dwAccess;
	LPCWSTR	name;
S_export_fence_win32_handle_info_KHR(
	 const const SECURITY_ATTRIBUTES*  * pAttributes_
	,DWORD   dwAccess_
	,LPCWSTR   name_);
};

/*	VkFenceGetWin32HandleInfoKHR:*/
typedef struct S_fence_get_win32_handle_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkFence	fence;
	F_external_fence_handle_type	handleType;
S_fence_get_win32_handle_info_KHR(
	 VkFence   fence_
	,F_external_fence_handle_type  handleType_);
};

/*	VkImportFenceFdInfoKHR:*/
typedef struct S_import_fence_fd_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkFence	fence;
/*|optional|	*/
	VkFenceImportFlags	flags;
	F_external_fence_handle_type	handleType;
	int	fd;
S_import_fence_fd_info_KHR(
	 VkFence   fence_
	,VkFenceImportFlags   flags_
	,F_external_fence_handle_type  handleType_
	,int   fd_);
};

/*	VkFenceGetFdInfoKHR:*/
typedef struct S_fence_get_fd_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkFence	fence;
	F_external_fence_handle_type	handleType;
S_fence_get_fd_info_KHR(
	 VkFence   fence_
	,F_external_fence_handle_type  handleType_);
};

/*	VkPhysicalDeviceMultiviewFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_multiview_features{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*Multiple views in a renderpass*/
	VkBool32	multiview;
/*Multiple views in a renderpass w/ geometry shader*/
	VkBool32	multiviewGeometryShader;
/*Multiple views in a renderpass w/ tessellation shader*/
	VkBool32	multiviewTessellationShader;
S_physical_device_multiview_features(
	 VkBool32   multiview_
	,VkBool32   multiviewGeometryShader_
	,VkBool32   multiviewTessellationShader_);
};

/*	VkPhysicalDeviceMultiviewProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_multiview_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*max number of views in a subpass*/
	uint32_t	maxMultiviewViewCount;
/*max instance index for a draw in a multiview subpass*/
	uint32_t	maxMultiviewInstanceIndex;
S_physical_device_multiview_properties(
	 uint32_t   maxMultiviewViewCount_
	,uint32_t   maxMultiviewInstanceIndex_);
};

/*	VkRenderPassMultiviewCreateInfo:
extends to:	VkRenderPassCreateInfo*/
typedef struct S_render_pass_multiview_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	subpassCount;
/*
len:	subpassCount*/
	const	uint32_t*	pViewMasks;
/*|optional|	*/
	uint32_t	dependencyCount;
/*
len:	dependencyCount*/
	const	int32_t*	pViewOffsets;
/*|optional|	*/
	uint32_t	correlationMaskCount;
/*
len:	correlationMaskCount*/
	const	uint32_t*	pCorrelationMasks;
S_render_pass_multiview_create_info(
	 uint32_t   subpassCount_
	,const const uint32_t*      *     pViewMasks_
	,uint32_t   dependencyCount_
	,const const int32_t*    *   pViewOffsets_
	,uint32_t   correlationMaskCount_
	,const const uint32_t*  * pCorrelationMasks_);
};

/*	VkSurfaceCapabilities2EXT:
returnd only*/
typedef struct S_surface_capabilities2_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
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
	F_surface_transform_khr	currentTransform;
/*1 or more bits representing the alpha compositing modes supported*/
	VkCompositeAlphaFlagsKHR	supportedCompositeAlpha;
/*Supported image usage flags for the surface*/
	VkImageUsageFlags	supportedUsageFlags;
/*|optional|	*/
	VkSurfaceCounterFlagsEXT	supportedSurfaceCounters;
S_surface_capabilities2_EXT(
	 uint32_t   minImageCount_
	,uint32_t   maxImageCount_
	,S_extent_2d  currentExtent_
	,S_extent_2d  minImageExtent_
	,S_extent_2d  maxImageExtent_
	,uint32_t   maxImageArrayLayers_
	,VkSurfaceTransformFlagsKHR   supportedTransforms_
	,F_surface_transform_khr  currentTransform_
	,VkCompositeAlphaFlagsKHR   supportedCompositeAlpha_
	,VkImageUsageFlags   supportedUsageFlags_
	,VkSurfaceCounterFlagsEXT   supportedSurfaceCounters_);
};

/*	VkDisplayPowerInfoEXT:*/
typedef struct S_display_power_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_display_power_state_EXT	powerState;
S_display_power_info_EXT(
	 E_display_power_state_EXT  powerState_);
};

/*	VkDeviceEventInfoEXT:*/
typedef struct S_device_event_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_device_event_type_EXT	deviceEvent;
S_device_event_info_EXT(
	 E_device_event_type_EXT  deviceEvent_);
};

/*	VkDisplayEventInfoEXT:*/
typedef struct S_display_event_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_display_event_type_EXT	displayEvent;
S_display_event_info_EXT(
	 E_display_event_type_EXT  displayEvent_);
};

/*	VkSwapchainCounterCreateInfoEXT:
extends to:	VkSwapchainCreateInfoKHR*/
typedef struct S_swapchain_counter_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkSurfaceCounterFlagsEXT	surfaceCounters;
S_swapchain_counter_create_info_EXT(
	 VkSurfaceCounterFlagsEXT   surfaceCounters_);
};

/*	VkPhysicalDeviceGroupProperties:
returnd only*/
typedef struct S_physical_device_group_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	physicalDeviceCount;
	VkPhysicalDevice	physicalDevices;
	VkBool32	subsetAllocation;
S_physical_device_group_properties(
	 uint32_t   physicalDeviceCount_
	,VkPhysicalDevice [VK_MAX_DEVICE_GROUP_SIZE]  physicalDevices_
	,VkBool32   subsetAllocation_);
};

/*	VkMemoryAllocateFlagsInfo:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_memory_allocate_flags_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkMemoryAllocateFlags	flags;
	uint32_t	deviceMask;
S_memory_allocate_flags_info(
	 VkMemoryAllocateFlags   flags_
	,uint32_t   deviceMask_);
};

/*	VkBindBufferMemoryDeviceGroupInfo:
extends to:	VkBindBufferMemoryInfo*/
typedef struct S_bind_buffer_memory_device_group_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	deviceIndexCount;
/*
len:	deviceIndexCount*/
	const	uint32_t*	pDeviceIndices;
S_bind_buffer_memory_device_group_info(
	 uint32_t   deviceIndexCount_
	,const const uint32_t*   *  pDeviceIndices_);
};

/*	VkBindImageMemoryDeviceGroupInfo:
extends to:	VkBindImageMemoryInfo*/
typedef struct S_bind_image_memory_device_group_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	deviceIndexCount;
/*
len:	deviceIndexCount*/
	const	uint32_t*	pDeviceIndices;
/*|optional|	*/
	uint32_t	splitInstanceBindRegionCount;
/*
len:	splitInstanceBindRegionCount*/
	const	S_rect_2d*	pSplitInstanceBindRegions;
S_bind_image_memory_device_group_info(
	 uint32_t   deviceIndexCount_
	,const const uint32_t*   *  pDeviceIndices_
	,uint32_t   splitInstanceBindRegionCount_
	,const S_rect_2d *  pSplitInstanceBindRegions_);
};

/*	VkDeviceGroupRenderPassBeginInfo:
extends to:	VkRenderPassBeginInfo*/
typedef struct S_device_group_render_pass_begin_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	deviceMask;
/*|optional|	*/
	uint32_t	deviceRenderAreaCount;
/*
len:	deviceRenderAreaCount*/
	const	S_rect_2d*	pDeviceRenderAreas;
S_device_group_render_pass_begin_info(
	 uint32_t   deviceMask_
	,uint32_t   deviceRenderAreaCount_
	,const S_rect_2d *  pDeviceRenderAreas_);
};

/*	VkDeviceGroupCommandBufferBeginInfo:
extends to:	VkCommandBufferBeginInfo*/
typedef struct S_device_group_command_buffer_begin_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	deviceMask;
S_device_group_command_buffer_begin_info(
	 uint32_t   deviceMask_);
};

/*	VkDeviceGroupSubmitInfo:
extends to:	VkSubmitInfo*/
typedef struct S_device_group_submit_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const	uint32_t*	pWaitSemaphoreDeviceIndices;
/*|optional|	*/
	uint32_t	commandBufferCount;
/*
len:	commandBufferCount*/
	const	uint32_t*	pCommandBufferDeviceMasks;
/*|optional|	*/
	uint32_t	signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const	uint32_t*	pSignalSemaphoreDeviceIndices;
S_device_group_submit_info(
	 uint32_t   waitSemaphoreCount_
	,const const uint32_t*     *    pWaitSemaphoreDeviceIndices_
	,uint32_t   commandBufferCount_
	,const const uint32_t*     *    pCommandBufferDeviceMasks_
	,uint32_t   signalSemaphoreCount_
	,const const uint32_t*   *  pSignalSemaphoreDeviceIndices_);
};

/*	VkDeviceGroupBindSparseInfo:
extends to:	VkBindSparseInfo*/
typedef struct S_device_group_bind_sparse_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	resourceDeviceIndex;
	uint32_t	memoryDeviceIndex;
S_device_group_bind_sparse_info(
	 uint32_t   resourceDeviceIndex_
	,uint32_t   memoryDeviceIndex_);
};

/*	VkDeviceGroupPresentCapabilitiesKHR:
returnd only*/
typedef struct S_device_group_present_capabilities_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	presentMask;
	VkDeviceGroupPresentModeFlagsKHR	modes;
S_device_group_present_capabilities_KHR(
	 uint32_t [VK_MAX_DEVICE_GROUP_SIZE]  presentMask_
	,VkDeviceGroupPresentModeFlagsKHR   modes_);
};

/*	VkImageSwapchainCreateInfoKHR:
extends to:	VkImageCreateInfo*/
typedef struct S_image_swapchain_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkSwapchainKHR	swapchain;
S_image_swapchain_create_info_KHR(
	 VkSwapchainKHR   swapchain_);
};

/*	VkBindImageMemorySwapchainInfoKHR:
extends to:	VkBindImageMemoryInfo*/
typedef struct S_bind_image_memory_swapchain_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkSwapchainKHR	swapchain;
	uint32_t	imageIndex;
S_bind_image_memory_swapchain_info_KHR(
	 VkSwapchainKHR   swapchain_
	,uint32_t   imageIndex_);
};

/*	VkAcquireNextImageInfoKHR:*/
typedef struct S_acquire_next_image_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkSwapchainKHR	swapchain;
	uint64_t	timeout;
/*|optional|	
(externsync)*/
	VkSemaphore	semaphore;
/*|optional|	
(externsync)*/
	VkFence	fence;
	uint32_t	deviceMask;
S_acquire_next_image_info_KHR(
	 VkSwapchainKHR   swapchain_
	,uint64_t   timeout_
	,VkSemaphore   semaphore_
	,VkFence   fence_
	,uint32_t   deviceMask_);
};

/*	VkDeviceGroupPresentInfoKHR:
extends to:	VkPresentInfoKHR*/
typedef struct S_device_group_present_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	swapchainCount;
/*
len:	swapchainCount*/
	const	uint32_t*	pDeviceMasks;
	F_device_group_present_mode_khr	mode;
S_device_group_present_info_KHR(
	 uint32_t   swapchainCount_
	,const const uint32_t*  * pDeviceMasks_
	,F_device_group_present_mode_khr  mode_);
};

/*	VkDeviceGroupDeviceCreateInfo:
extends to:	VkDeviceCreateInfo*/
typedef struct S_device_group_device_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	physicalDeviceCount;
/*
len:	physicalDeviceCount*/
	const	VkPhysicalDevice*	pPhysicalDevices;
S_device_group_device_create_info(
	 uint32_t   physicalDeviceCount_
	,const const VkPhysicalDevice*   *  pPhysicalDevices_);
};

/*	VkDeviceGroupSwapchainCreateInfoKHR:
extends to:	VkSwapchainCreateInfoKHR*/
typedef struct S_device_group_swapchain_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkDeviceGroupPresentModeFlagsKHR	modes;
S_device_group_swapchain_create_info_KHR(
	 VkDeviceGroupPresentModeFlagsKHR   modes_);
};

/*	VkDescriptorUpdateTemplateCreateInfo:*/
typedef struct S_descriptor_update_template_create_info{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*|optional|	*/
	VkDescriptorUpdateTemplateCreateFlags	flags;
/*Number of descriptor update entries to use for the update template*/
	uint32_t	descriptorUpdateEntryCount;
/*Descriptor update entries for the template
len:	descriptorUpdateEntryCount*/
	const	S_descriptor_update_template_entry*	pDescriptorUpdateEntries;
	E_descriptor_update_template_type	templateType;
/*|optional|	*/
	VkDescriptorSetLayout	descriptorSetLayout;
	E_pipeline_bind_point	pipelineBindPoint;
/*If used for push descriptors, this is the only allowed layout*/
	VkPipelineLayout	pipelineLayout;
	uint32_t	set;
S_descriptor_update_template_create_info(
	 VkDescriptorUpdateTemplateCreateFlags   flags_
	,uint32_t   descriptorUpdateEntryCount_
	,const S_descriptor_update_template_entry * pDescriptorUpdateEntries_
	,E_descriptor_update_template_type  templateType_
	,VkDescriptorSetLayout   descriptorSetLayout_
	,E_pipeline_bind_point  pipelineBindPoint_
	,VkPipelineLayout pipelineLayout_
	,uint32_t   set_);
};

/*	VkHdrMetadataEXT:*/
typedef struct S_hdr_metadata_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
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
S_hdr_metadata_EXT(
	 S_xy_color_EXT  displayPrimaryRed_
	,S_xy_color_EXT  displayPrimaryGreen_
	,S_xy_color_EXT  displayPrimaryBlue_
	,S_xy_color_EXT  whitePoint_
	,float   maxLuminance_
	,float   minLuminance_
	,float   maxContentLightLevel_
	,float   maxFrameAverageLightLevel_);
};

/*	VkPresentTimesInfoGOOGLE:
extends to:	VkPresentInfoKHR*/
typedef struct S_present_times_info_GOOGLE{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Copy of VkPresentInfoKHR::swapchainCount*/
	uint32_t	swapchainCount;
/*The earliest times to present images
len:	swapchainCount*/
	const	S_present_time_GOOGLE*	pTimes;
S_present_times_info_GOOGLE(
	 uint32_t   swapchainCount_
	,const S_present_time_GOOGLE *   pTimes_);
};

#ifdef VK_USE_PLATFORM_IOS_MVK
/*	VkIOSSurfaceCreateInfoMVK:*/
typedef struct S_ios_surface_create_info_MVK{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkIOSSurfaceCreateFlagsMVK	flags;
	const	void*	pView;
S_ios_surface_create_info_MVK(
	 VkIOSSurfaceCreateFlagsMVK   flags_
	,const const void*                                     *                                    pView_);
};

#endif

#ifdef VK_USE_PLATFORM_MACOS_MVK
/*	VkMacOSSurfaceCreateInfoMVK:*/
typedef struct S_mac_os_surface_create_info_MVK{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkMacOSSurfaceCreateFlagsMVK	flags;
	const	void*	pView;
S_mac_os_surface_create_info_MVK(
	 VkMacOSSurfaceCreateFlagsMVK   flags_
	,const const void*                                     *                                    pView_);
};

#endif

/*	VkPipelineViewportWScalingStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_w_scaling_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBool32	viewportWScalingEnable;
	uint32_t	viewportCount;
/*
len:	viewportCount*/
	const	S_viewport_w_scaling_NV*	pViewportWScalings;
S_pipeline_viewport_w_scaling_state_create_info_NV(
	 VkBool32   viewportWScalingEnable_
	,uint32_t   viewportCount_
	,const S_viewport_w_scaling_NV *      pViewportWScalings_);
};

/*	VkPipelineViewportSwizzleStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_swizzle_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineViewportSwizzleStateCreateFlagsNV	flags;
	uint32_t	viewportCount;
/*|optional|	
len:	viewportCount*/
	const	S_viewport_swizzle_NV*	pViewportSwizzles;
S_pipeline_viewport_swizzle_state_create_info_NV(
	 VkPipelineViewportSwizzleStateCreateFlagsNV   flags_
	,uint32_t   viewportCount_
	,const S_viewport_swizzle_NV *      pViewportSwizzles_);
};

/*	VkPhysicalDeviceDiscardRectanglePropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_discard_rectangle_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*max number of active discard rectangles*/
	uint32_t	maxDiscardRectangles;
S_physical_device_discard_rectangle_properties_EXT(
	 uint32_t   maxDiscardRectangles_);
};

/*	VkPipelineDiscardRectangleStateCreateInfoEXT:
extends to:	VkGraphicsPipelineCreateInfo*/
typedef struct S_pipeline_discard_rectangle_state_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineDiscardRectangleStateCreateFlagsEXT	flags;
	E_discard_rectangle_mode_EXT	discardRectangleMode;
/*|optional|	*/
	uint32_t	discardRectangleCount;
/*|optional|	
len:	discardRectangleCount*/
	const	S_rect_2d*	pDiscardRectangles;
S_pipeline_discard_rectangle_state_create_info_EXT(
	 VkPipelineDiscardRectangleStateCreateFlagsEXT   flags_
	,E_discard_rectangle_mode_EXT  discardRectangleMode_
	,uint32_t   discardRectangleCount_
	,const S_rect_2d * pDiscardRectangles_);
};

/*	VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_multiview_per_view_attributes_properties_NVX{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	perViewPositionAllComponents;
S_physical_device_multiview_per_view_attributes_properties_NVX(
	 VkBool32   perViewPositionAllComponents_);
};

/*	VkRenderPassInputAttachmentAspectCreateInfo:
extends to:	VkRenderPassCreateInfo*/
typedef struct S_render_pass_input_attachment_aspect_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	aspectReferenceCount;
/*
len:	aspectReferenceCount*/
	const	S_input_attachment_aspect_reference*	pAspectReferences;
S_render_pass_input_attachment_aspect_create_info(
	 uint32_t   aspectReferenceCount_
	,const S_input_attachment_aspect_reference * pAspectReferences_);
};

/*	VkPhysicalDeviceSurfaceInfo2KHR:*/
typedef struct S_physical_device_surface_info2_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkSurfaceKHR	surface;
S_physical_device_surface_info2_KHR(
	 VkSurfaceKHR   surface_);
};

/*	VkSurfaceFormat2KHR:
returnd only*/
typedef struct S_surface_format2_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_surface_format_KHR	surfaceFormat;
S_surface_format2_KHR(
	 S_surface_format_KHR  surfaceFormat_);
};

/*	VkDisplayProperties2KHR:
returnd only*/
typedef struct S_display_properties2_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_display_properties_KHR	displayProperties;
S_display_properties2_KHR(
	 S_display_properties_KHR  displayProperties_);
};

/*	VkDisplayPlaneProperties2KHR:
returnd only*/
typedef struct S_display_plane_properties2_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_display_plane_properties_KHR	displayPlaneProperties;
S_display_plane_properties2_KHR(
	 S_display_plane_properties_KHR  displayPlaneProperties_);
};

/*	VkDisplayModeProperties2KHR:
returnd only*/
typedef struct S_display_mode_properties2_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_display_mode_properties_KHR	displayModeProperties;
S_display_mode_properties2_KHR(
	 S_display_mode_properties_KHR  displayModeProperties_);
};

/*	VkDisplayPlaneInfo2KHR:*/
typedef struct S_display_plane_info2_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
(externsync)*/
	VkDisplayModeKHR	mode;
	uint32_t	planeIndex;
S_display_plane_info2_KHR(
	 VkDisplayModeKHR   mode_
	,uint32_t   planeIndex_);
};

/*	VkDisplayPlaneCapabilities2KHR:
returnd only*/
typedef struct S_display_plane_capabilities2_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_display_plane_capabilities_KHR	capabilities;
S_display_plane_capabilities2_KHR(
	 S_display_plane_capabilities_KHR  capabilities_);
};

/*	VkSharedPresentSurfaceCapabilitiesKHR:
returnd only
extends to:	VkSurfaceCapabilities2KHR*/
typedef struct S_shared_present_surface_capabilities_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*Supported image usage flags if swapchain created using a shared present mode*/
	VkImageUsageFlags	sharedPresentSupportedUsageFlags;
S_shared_present_surface_capabilities_KHR(
	 VkImageUsageFlags   sharedPresentSupportedUsageFlags_);
};

/*	VkPhysicalDevice16BitStorageFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_16bit_storage_features{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*16-bit integer/floating-point variables supported in BufferBlock*/
	VkBool32	storageBuffer16BitAccess;
/*16-bit integer/floating-point variables supported in BufferBlock and Block*/
	VkBool32	uniformAndStorageBuffer16BitAccess;
/*16-bit integer/floating-point variables supported in PushConstant*/
	VkBool32	storagePushConstant16;
/*16-bit integer/floating-point variables supported in shader inputs and outputs*/
	VkBool32	storageInputOutput16;
S_physical_device_16bit_storage_features(
	 VkBool32   storageBuffer16BitAccess_
	,VkBool32   uniformAndStorageBuffer16BitAccess_
	,VkBool32   storagePushConstant16_
	,VkBool32   storageInputOutput16_);
};

/*	VkPhysicalDeviceSubgroupProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_subgroup_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*The size of a subgroup for this queue.*/
	uint32_t	subgroupSize;
/*Bitfield of what shader stages support subgroup operations*/
	VkShaderStageFlags	supportedStages;
/*Bitfield of what subgroup operations are supported.*/
	VkSubgroupFeatureFlags	supportedOperations;
/*Flag to specify whether quad operations are available in all stages.*/
	VkBool32	quadOperationsInAllStages;
S_physical_device_subgroup_properties(
	 uint32_t   subgroupSize_
	,VkShaderStageFlags   supportedStages_
	,VkSubgroupFeatureFlags   supportedOperations_
	,VkBool32   quadOperationsInAllStages_);
};

/*	VkBufferMemoryRequirementsInfo2:*/
typedef struct S_buffer_memory_requirements_info2{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBuffer	buffer;
S_buffer_memory_requirements_info2(
	 VkBuffer   buffer_);
};

/*	VkImageSparseMemoryRequirementsInfo2:*/
typedef struct S_image_sparse_memory_requirements_info2{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkImage	image;
S_image_sparse_memory_requirements_info2(
	 VkImage   image_);
};

/*	VkSparseImageMemoryRequirements2:
returnd only*/
typedef struct S_sparse_image_memory_requirements2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_sparse_image_memory_requirements	memoryRequirements;
S_sparse_image_memory_requirements2(
	 S_sparse_image_memory_requirements  memoryRequirements_);
};

/*	VkPhysicalDevicePointClippingProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_point_clipping_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	E_point_clipping_behavior	pointClippingBehavior;
S_physical_device_point_clipping_properties(
	 E_point_clipping_behavior  pointClippingBehavior_);
};

/*	VkMemoryDedicatedRequirements:
returnd only
extends to:	VkMemoryRequirements2*/
typedef struct S_memory_dedicated_requirements{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	prefersDedicatedAllocation;
	VkBool32	requiresDedicatedAllocation;
S_memory_dedicated_requirements(
	 VkBool32   prefersDedicatedAllocation_
	,VkBool32   requiresDedicatedAllocation_);
};

/*	VkMemoryDedicatedAllocateInfo:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_memory_dedicated_allocate_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Image that this allocation will be bound to*/
	VkImage	image;
/*Buffer that this allocation will be bound to*/
	VkBuffer	buffer;
S_memory_dedicated_allocate_info(
	 VkImage   image_
	,VkBuffer   buffer_);
};

/*	VkImageViewUsageCreateInfo:
extends to:	VkImageViewCreateInfo*/
typedef struct S_image_view_usage_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkImageUsageFlags	usage;
S_image_view_usage_create_info(
	 VkImageUsageFlags   usage_);
};

/*	VkPipelineTessellationDomainOriginStateCreateInfo:
extends to:	VkPipelineTessellationStateCreateInfo*/
typedef struct S_pipeline_tessellation_domain_origin_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_tessellation_domain_origin	domainOrigin;
S_pipeline_tessellation_domain_origin_state_create_info(
	 E_tessellation_domain_origin  domainOrigin_);
};

/*	VkSamplerYcbcrConversionInfo:
extends to:	VkSamplerCreateInfo,VkImageViewCreateInfo*/
typedef struct S_sampler_ycbcr_conversion_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkSamplerYcbcrConversion	conversion;
S_sampler_ycbcr_conversion_info(
	 VkSamplerYcbcrConversion   conversion_);
};

/*	VkBindImagePlaneMemoryInfo:
extends to:	VkBindImageMemoryInfo*/
typedef struct S_bind_image_plane_memory_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	F_image_aspect	planeAspect;
S_bind_image_plane_memory_info(
	 F_image_aspect  planeAspect_);
};

/*	VkImagePlaneMemoryRequirementsInfo:
extends to:	VkImageMemoryRequirementsInfo2*/
typedef struct S_image_plane_memory_requirements_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	F_image_aspect	planeAspect;
S_image_plane_memory_requirements_info(
	 F_image_aspect  planeAspect_);
};

/*	VkPhysicalDeviceSamplerYcbcrConversionFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_sampler_ycbcr_conversion_features{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*Sampler color conversion supported*/
	VkBool32	samplerYcbcrConversion;
S_physical_device_sampler_ycbcr_conversion_features(
	 VkBool32   samplerYcbcrConversion_);
};

/*	VkSamplerYcbcrConversionImageFormatProperties:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_sampler_ycbcr_conversion_image_format_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	combinedImageSamplerDescriptorCount;
S_sampler_ycbcr_conversion_image_format_properties(
	 uint32_t   combinedImageSamplerDescriptorCount_);
};

/*	VkTextureLODGatherFormatPropertiesAMD:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_texture_lod_gather_format_properties_AMD{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	supportsTextureGatherLODBiasAMD;
S_texture_lod_gather_format_properties_AMD(
	 VkBool32   supportsTextureGatherLODBiasAMD_);
};

/*	VkConditionalRenderingBeginInfoEXT:*/
typedef struct S_conditional_rendering_begin_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBuffer	buffer;
	VkDeviceSize	offset;
/*|optional|	*/
	VkConditionalRenderingFlagsEXT	flags;
S_conditional_rendering_begin_info_EXT(
	 VkBuffer   buffer_
	,VkDeviceSize   offset_
	,VkConditionalRenderingFlagsEXT   flags_);
};

/*	VkProtectedSubmitInfo:
extends to:	VkSubmitInfo*/
typedef struct S_protected_submit_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Submit protected command buffers*/
	VkBool32	protectedSubmit;
S_protected_submit_info(
	 VkBool32   protectedSubmit_);
};

/*	VkPhysicalDeviceProtectedMemoryFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_protected_memory_features{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	protectedMemory;
S_physical_device_protected_memory_features(
	 VkBool32   protectedMemory_);
};

/*	VkPhysicalDeviceProtectedMemoryProperties:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_protected_memory_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	protectedNoFault;
S_physical_device_protected_memory_properties(
	 VkBool32   protectedNoFault_);
};

/*	VkDeviceQueueInfo2:*/
typedef struct S_device_queue_info2{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkDeviceQueueCreateFlags	flags;
	uint32_t	queueFamilyIndex;
	uint32_t	queueIndex;
S_device_queue_info2(
	 VkDeviceQueueCreateFlags   flags_
	,uint32_t   queueFamilyIndex_
	,uint32_t   queueIndex_);
};

/*	VkPipelineCoverageToColorStateCreateInfoNV:
extends to:	VkPipelineMultisampleStateCreateInfo*/
typedef struct S_pipeline_coverage_to_color_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineCoverageToColorStateCreateFlagsNV	flags;
	VkBool32	coverageToColorEnable;
/*|optional|	*/
	uint32_t	coverageToColorLocation;
S_pipeline_coverage_to_color_state_create_info_NV(
	 VkPipelineCoverageToColorStateCreateFlagsNV   flags_
	,VkBool32   coverageToColorEnable_
	,uint32_t   coverageToColorLocation_);
};

/*	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_sampler_filter_minmax_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	filterMinmaxSingleComponentFormats;
	VkBool32	filterMinmaxImageComponentMapping;
S_physical_device_sampler_filter_minmax_properties_EXT(
	 VkBool32   filterMinmaxSingleComponentFormats_
	,VkBool32   filterMinmaxImageComponentMapping_);
};

/*	VkSampleLocationsInfoEXT:
extends to:	VkImageMemoryBarrier*/
typedef struct S_sample_locations_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	F_sample_count	sampleLocationsPerPixel;
	S_extent_2d	sampleLocationGridSize;
	uint32_t	sampleLocationsCount;
/*
len:	sampleLocationsCount*/
	const	S_sample_location_EXT*	pSampleLocations;
S_sample_locations_info_EXT(
	 F_sample_count  sampleLocationsPerPixel_
	,S_extent_2d  sampleLocationGridSize_
	,uint32_t   sampleLocationsCount_
	,const S_sample_location_EXT * pSampleLocations_);
};

/*	VkRenderPassSampleLocationsBeginInfoEXT:
extends to:	VkRenderPassBeginInfo*/
typedef struct S_render_pass_sample_locations_begin_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	attachmentInitialSampleLocationsCount;
/*
len:	attachmentInitialSampleLocationsCount*/
	const	S_attachment_sample_locations_EXT*	pAttachmentInitialSampleLocations;
/*|optional|	*/
	uint32_t	postSubpassSampleLocationsCount;
/*
len:	postSubpassSampleLocationsCount*/
	const	S_subpass_sample_locations_EXT*	pPostSubpassSampleLocations;
S_render_pass_sample_locations_begin_info_EXT(
	 uint32_t   attachmentInitialSampleLocationsCount_
	,const S_attachment_sample_locations_EXT * pAttachmentInitialSampleLocations_
	,uint32_t   postSubpassSampleLocationsCount_
	,const S_subpass_sample_locations_EXT * pPostSubpassSampleLocations_);
};

/*	VkPipelineSampleLocationsStateCreateInfoEXT:
extends to:	VkPipelineMultisampleStateCreateInfo*/
typedef struct S_pipeline_sample_locations_state_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBool32	sampleLocationsEnable;
	S_sample_locations_info_EXT	sampleLocationsInfo;
S_pipeline_sample_locations_state_create_info_EXT(
	 VkBool32   sampleLocationsEnable_
	,S_sample_locations_info_EXT  sampleLocationsInfo_);
};

/*	VkPhysicalDeviceSampleLocationsPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_sample_locations_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkSampleCountFlags	sampleLocationSampleCounts;
	S_extent_2d	maxSampleLocationGridSize;
	float	sampleLocationCoordinateRange;
	uint32_t	sampleLocationSubPixelBits;
	VkBool32	variableSampleLocations;
S_physical_device_sample_locations_properties_EXT(
	 VkSampleCountFlags   sampleLocationSampleCounts_
	,S_extent_2d  maxSampleLocationGridSize_
	,float [2]  sampleLocationCoordinateRange_
	,uint32_t   sampleLocationSubPixelBits_
	,VkBool32   variableSampleLocations_);
};

/*	VkMultisamplePropertiesEXT:
returnd only*/
typedef struct S_multisample_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_extent_2d	maxSampleLocationGridSize;
S_multisample_properties_EXT(
	 S_extent_2d  maxSampleLocationGridSize_);
};

/*	VkSamplerReductionModeCreateInfoEXT:
extends to:	VkSamplerCreateInfo*/
typedef struct S_sampler_reduction_mode_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_sampler_reduction_mode_EXT	reductionMode;
S_sampler_reduction_mode_create_info_EXT(
	 E_sampler_reduction_mode_EXT  reductionMode_);
};

/*	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_blend_operation_advanced_features_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	advancedBlendCoherentOperations;
S_physical_device_blend_operation_advanced_features_EXT(
	 VkBool32   advancedBlendCoherentOperations_);
};

/*	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_blend_operation_advanced_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	advancedBlendMaxColorAttachments;
	VkBool32	advancedBlendIndependentBlend;
	VkBool32	advancedBlendNonPremultipliedSrcColor;
	VkBool32	advancedBlendNonPremultipliedDstColor;
	VkBool32	advancedBlendCorrelatedOverlap;
	VkBool32	advancedBlendAllOperations;
S_physical_device_blend_operation_advanced_properties_EXT(
	 uint32_t   advancedBlendMaxColorAttachments_
	,VkBool32   advancedBlendIndependentBlend_
	,VkBool32   advancedBlendNonPremultipliedSrcColor_
	,VkBool32   advancedBlendNonPremultipliedDstColor_
	,VkBool32   advancedBlendCorrelatedOverlap_
	,VkBool32   advancedBlendAllOperations_);
};

/*	VkPipelineColorBlendAdvancedStateCreateInfoEXT:
extends to:	VkPipelineColorBlendStateCreateInfo*/
typedef struct S_pipeline_color_blend_advanced_state_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBool32	srcPremultiplied;
	VkBool32	dstPremultiplied;
	E_blend_overlap_EXT	blendOverlap;
S_pipeline_color_blend_advanced_state_create_info_EXT(
	 VkBool32   srcPremultiplied_
	,VkBool32   dstPremultiplied_
	,E_blend_overlap_EXT  blendOverlap_);
};

/*	VkPhysicalDeviceInlineUniformBlockFeaturesEXT:
returnd only
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_inline_uniform_block_features_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	inlineUniformBlock;
	VkBool32	descriptorBindingInlineUniformBlockUpdateAfterBind;
S_physical_device_inline_uniform_block_features_EXT(
	 VkBool32   inlineUniformBlock_
	,VkBool32   descriptorBindingInlineUniformBlockUpdateAfterBind_);
};

/*	VkPhysicalDeviceInlineUniformBlockPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_inline_uniform_block_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	maxInlineUniformBlockSize;
	uint32_t	maxPerStageDescriptorInlineUniformBlocks;
	uint32_t	maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
	uint32_t	maxDescriptorSetInlineUniformBlocks;
	uint32_t	maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
S_physical_device_inline_uniform_block_properties_EXT(
	 uint32_t   maxInlineUniformBlockSize_
	,uint32_t   maxPerStageDescriptorInlineUniformBlocks_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_
	,uint32_t   maxDescriptorSetInlineUniformBlocks_
	,uint32_t   maxDescriptorSetUpdateAfterBindInlineUniformBlocks_);
};

/*	VkWriteDescriptorSetInlineUniformBlockEXT:
extends to:	VkWriteDescriptorSet*/
typedef struct S_write_descriptor_set_inline_uniform_block_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	dataSize;
/*
len:	dataSize*/
	const	void*	pData;
S_write_descriptor_set_inline_uniform_block_EXT(
	 uint32_t   dataSize_
	,const const void*  * pData_);
};

/*	VkDescriptorPoolInlineUniformBlockCreateInfoEXT:
extends to:	VkDescriptorPoolCreateInfo*/
typedef struct S_descriptor_pool_inline_uniform_block_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	maxInlineUniformBlockBindings;
S_descriptor_pool_inline_uniform_block_create_info_EXT(
	 uint32_t   maxInlineUniformBlockBindings_);
};

/*	VkPipelineCoverageModulationStateCreateInfoNV:
extends to:	VkPipelineMultisampleStateCreateInfo*/
typedef struct S_pipeline_coverage_modulation_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineCoverageModulationStateCreateFlagsNV	flags;
	E_coverage_modulation_mode_NV	coverageModulationMode;
	VkBool32	coverageModulationTableEnable;
	uint32_t	coverageModulationTableCount;
/*|optional|	
len:	coverageModulationTableCount*/
	const	float*	pCoverageModulationTable;
S_pipeline_coverage_modulation_state_create_info_NV(
	 VkPipelineCoverageModulationStateCreateFlagsNV   flags_
	,E_coverage_modulation_mode_NV  coverageModulationMode_
	,VkBool32   coverageModulationTableEnable_
	,uint32_t   coverageModulationTableCount_
	,const const float*  * pCoverageModulationTable_);
};

/*	VkImageFormatListCreateInfoKHR:
extends to:	VkImageCreateInfo*/
typedef struct S_image_format_list_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	viewFormatCount;
/*
len:	viewFormatCount*/
	const	E_format*	pViewFormats;
S_image_format_list_create_info_KHR(
	 uint32_t   viewFormatCount_
	,const E_format *      pViewFormats_);
};

/*	VkValidationCacheCreateInfoEXT:*/
typedef struct S_validation_cache_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkValidationCacheCreateFlagsEXT	flags;
/*|optional|	*/
	size_t	initialDataSize;
/*
len:	initialDataSize*/
	const	void*	pInitialData;
S_validation_cache_create_info_EXT(
	 VkValidationCacheCreateFlagsEXT   flags_
	,size_t   initialDataSize_
	,const const void*             *            pInitialData_);
};

/*	VkShaderModuleValidationCacheCreateInfoEXT:
extends to:	VkShaderModuleCreateInfo*/
typedef struct S_shader_module_validation_cache_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkValidationCacheEXT	validationCache;
S_shader_module_validation_cache_create_info_EXT(
	 VkValidationCacheEXT   validationCache_);
};

/*	VkPhysicalDeviceMaintenance3Properties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_maintenance3_properties{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	maxPerSetDescriptors;
	VkDeviceSize	maxMemoryAllocationSize;
S_physical_device_maintenance3_properties(
	 uint32_t   maxPerSetDescriptors_
	,VkDeviceSize   maxMemoryAllocationSize_);
};

/*	VkPhysicalDeviceShaderDrawParameterFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shader_draw_parameter_features{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	shaderDrawParameters;
S_physical_device_shader_draw_parameter_features(
	 VkBool32   shaderDrawParameters_);
};

/*	VkNativeBufferANDROID:*/
typedef struct S_native_buffer_ANDROID{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	const	void*	handle;
	int	stride;
	int	format;
	int	usage;
S_native_buffer_ANDROID(
	 const const void*  * handle_
	,int   stride_
	,int   format_
	,int   usage_);
};

/*	VkDeviceQueueGlobalPriorityCreateInfoEXT:
extends to:	VkDeviceQueueCreateInfo*/
typedef struct S_device_queue_global_priority_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_queue_global_priority_EXT	globalPriority;
S_device_queue_global_priority_create_info_EXT(
	 E_queue_global_priority_EXT  globalPriority_);
};

/*	VkDebugUtilsObjectNameInfoEXT:*/
typedef struct S_debug_utils_object_name_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_object_type	objectType;
	uint64_t	objectHandle;
/*|optional|	
len:	null-terminated*/
	const	char*	pObjectName;
S_debug_utils_object_name_info_EXT(
	 E_object_type  objectType_
	,uint64_t   objectHandle_
	,const const char*       *      pObjectName_);
};

/*	VkDebugUtilsObjectTagInfoEXT:*/
typedef struct S_debug_utils_object_tag_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_object_type	objectType;
	uint64_t	objectHandle;
	uint64_t	tagName;
	size_t	tagSize;
/*
len:	tagSize*/
	const	void*	pTag;
S_debug_utils_object_tag_info_EXT(
	 E_object_type  objectType_
	,uint64_t   objectHandle_
	,uint64_t   tagName_
	,size_t   tagSize_
	,const const void*               *              pTag_);
};

/*	VkDebugUtilsLabelEXT:*/
typedef struct S_debug_utils_label_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*
len:	null-terminated*/
	const	char*	pLabelName;
/*|optional|	*/
	float	color;
S_debug_utils_label_EXT(
	 const const char*       *      pLabelName_
	,float [4]  color_);
};

/*	VkDebugUtilsMessengerCreateInfoEXT:
extends to:	VkInstanceCreateInfo*/
typedef struct S_debug_utils_messenger_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkDebugUtilsMessengerCreateFlagsEXT	flags;
	VkDebugUtilsMessageSeverityFlagsEXT	messageSeverity;
	VkDebugUtilsMessageTypeFlagsEXT	messageType;
	PFN_vkDebugUtilsMessengerCallbackEXT	pfnUserCallback;
/*|optional|	*/
	void*	pUserData;
S_debug_utils_messenger_create_info_EXT(
	 VkDebugUtilsMessengerCreateFlagsEXT   flags_
	,VkDebugUtilsMessageSeverityFlagsEXT   messageSeverity_
	,VkDebugUtilsMessageTypeFlagsEXT   messageType_
	,PFN_vkDebugUtilsMessengerCallbackEXT   pfnUserCallback_
	,void*                                 *                                pUserData_);
};

/*	VkDebugUtilsMessengerCallbackDataEXT:*/
typedef struct S_debug_utils_messenger_callback_data_EXT{
private:
	E_structure_type	sType;
/*|optional|	*/
	const	void*	pNext;
public:
/*|optional|	*/
	VkDebugUtilsMessengerCallbackDataFlagsEXT	flags;
/*|optional|	
len:	null-terminated*/
	const	char*	pMessageIdName;
/*|optional|	*/
	int32_t	messageIdNumber;
/*
len:	null-terminated*/
	const	char*	pMessage;
/*|optional|	*/
	uint32_t	queueLabelCount;
/*|optional|	
len:	queueLabelCount*/
	S_debug_utils_label_EXT*	pQueueLabels;
/*|optional|	*/
	uint32_t	cmdBufLabelCount;
/*|optional|	
len:	cmdBufLabelCount*/
	S_debug_utils_label_EXT*	pCmdBufLabels;
	uint32_t	objectCount;
/*
len:	objectCount*/
	S_debug_utils_object_name_info_EXT*	pObjects;
S_debug_utils_messenger_callback_data_EXT(
	 VkDebugUtilsMessengerCallbackDataFlagsEXT   flags_
	,const const char*                                   *                                  pMessageIdName_
	,int32_t   messageIdNumber_
	,const const char*                                                   *                                                  pMessage_
	,uint32_t   queueLabelCount_
	,S_debug_utils_label_EXT *  pQueueLabels_
	,uint32_t   cmdBufLabelCount_
	,S_debug_utils_label_EXT * pCmdBufLabels_
	,uint32_t   objectCount_
	,S_debug_utils_object_name_info_EXT *             pObjects_);
};

/*	VkImportMemoryHostPointerInfoEXT:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_host_pointer_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	F_external_memory_handle_type	handleType;
/*|optional|	*/
	void*	pHostPointer;
S_import_memory_host_pointer_info_EXT(
	 F_external_memory_handle_type  handleType_
	,void*  * pHostPointer_);
};

/*	VkMemoryHostPointerPropertiesEXT:*/
typedef struct S_memory_host_pointer_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	memoryTypeBits;
S_memory_host_pointer_properties_EXT(
	 uint32_t   memoryTypeBits_);
};

/*	VkPhysicalDeviceExternalMemoryHostPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_external_memory_host_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkDeviceSize	minImportedHostPointerAlignment;
S_physical_device_external_memory_host_properties_EXT(
	 VkDeviceSize   minImportedHostPointerAlignment_);
};

/*	VkPhysicalDeviceConservativeRasterizationPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_conservative_rasterization_properties_EXT{
private:
	E_structure_type	sType;
/*Pointer to next structure*/
	void*	pNext;
public:
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
S_physical_device_conservative_rasterization_properties_EXT(
	 float   primitiveOverestimationSize_
	,float   maxExtraPrimitiveOverestimationSize_
	,float   extraPrimitiveOverestimationSizeGranularity_
	,VkBool32   primitiveUnderestimation_
	,VkBool32   conservativePointAndLineRasterization_
	,VkBool32   degenerateTrianglesRasterized_
	,VkBool32   degenerateLinesRasterized_
	,VkBool32   fullyCoveredFragmentShaderInputVariable_
	,VkBool32   conservativeRasterizationPostDepthCoverage_);
};

/*	VkPhysicalDeviceShaderCorePropertiesAMD:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_shader_core_properties_AMD{
private:
	E_structure_type	sType;
/*Pointer to next structure*/
	void*	pNext;
public:
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
S_physical_device_shader_core_properties_AMD(
	 uint32_t   shaderEngineCount_
	,uint32_t   shaderArraysPerEngineCount_
	,uint32_t   computeUnitsPerShaderArray_
	,uint32_t   simdPerComputeUnit_
	,uint32_t   wavefrontsPerSimd_
	,uint32_t   wavefrontSize_
	,uint32_t   sgprsPerSimd_
	,uint32_t   minSgprAllocation_
	,uint32_t   maxSgprAllocation_
	,uint32_t   sgprAllocationGranularity_
	,uint32_t   vgprsPerSimd_
	,uint32_t   minVgprAllocation_
	,uint32_t   maxVgprAllocation_
	,uint32_t   vgprAllocationGranularity_);
};

/*	VkPipelineRasterizationConservativeStateCreateInfoEXT:
extends to:	VkPipelineRasterizationStateCreateInfo*/
typedef struct S_pipeline_rasterization_conservative_state_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineRasterizationConservativeStateCreateFlagsEXT	flags;
	E_conservative_rasterization_mode_EXT	conservativeRasterizationMode;
	float	extraPrimitiveOverestimationSize;
S_pipeline_rasterization_conservative_state_create_info_EXT(
	 VkPipelineRasterizationConservativeStateCreateFlagsEXT   flags_
	,E_conservative_rasterization_mode_EXT  conservativeRasterizationMode_
	,float   extraPrimitiveOverestimationSize_);
};

/*	VkPhysicalDeviceDescriptorIndexingFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_descriptor_indexing_features_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
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
S_physical_device_descriptor_indexing_features_EXT(
	 VkBool32   shaderInputAttachmentArrayDynamicIndexing_
	,VkBool32   shaderUniformTexelBufferArrayDynamicIndexing_
	,VkBool32   shaderStorageTexelBufferArrayDynamicIndexing_
	,VkBool32   shaderUniformBufferArrayNonUniformIndexing_
	,VkBool32   shaderSampledImageArrayNonUniformIndexing_
	,VkBool32   shaderStorageBufferArrayNonUniformIndexing_
	,VkBool32   shaderStorageImageArrayNonUniformIndexing_
	,VkBool32   shaderInputAttachmentArrayNonUniformIndexing_
	,VkBool32   shaderUniformTexelBufferArrayNonUniformIndexing_
	,VkBool32   shaderStorageTexelBufferArrayNonUniformIndexing_
	,VkBool32   descriptorBindingUniformBufferUpdateAfterBind_
	,VkBool32   descriptorBindingSampledImageUpdateAfterBind_
	,VkBool32   descriptorBindingStorageImageUpdateAfterBind_
	,VkBool32   descriptorBindingStorageBufferUpdateAfterBind_
	,VkBool32   descriptorBindingUniformTexelBufferUpdateAfterBind_
	,VkBool32   descriptorBindingStorageTexelBufferUpdateAfterBind_
	,VkBool32   descriptorBindingUpdateUnusedWhilePending_
	,VkBool32   descriptorBindingPartiallyBound_
	,VkBool32   descriptorBindingVariableDescriptorCount_
	,VkBool32   runtimeDescriptorArray_);
};

/*	VkPhysicalDeviceDescriptorIndexingPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_descriptor_indexing_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
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
S_physical_device_descriptor_indexing_properties_EXT(
	 uint32_t   maxUpdateAfterBindDescriptorsInAllPools_
	,VkBool32   shaderUniformBufferArrayNonUniformIndexingNative_
	,VkBool32   shaderSampledImageArrayNonUniformIndexingNative_
	,VkBool32   shaderStorageBufferArrayNonUniformIndexingNative_
	,VkBool32   shaderStorageImageArrayNonUniformIndexingNative_
	,VkBool32   shaderInputAttachmentArrayNonUniformIndexingNative_
	,VkBool32   robustBufferAccessUpdateAfterBind_
	,VkBool32   quadDivergentImplicitLod_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindSamplers_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindUniformBuffers_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindStorageBuffers_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindSampledImages_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindStorageImages_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindInputAttachments_
	,uint32_t   maxPerStageUpdateAfterBindResources_
	,uint32_t   maxDescriptorSetUpdateAfterBindSamplers_
	,uint32_t   maxDescriptorSetUpdateAfterBindUniformBuffers_
	,uint32_t   maxDescriptorSetUpdateAfterBindUniformBuffersDynamic_
	,uint32_t   maxDescriptorSetUpdateAfterBindStorageBuffers_
	,uint32_t   maxDescriptorSetUpdateAfterBindStorageBuffersDynamic_
	,uint32_t   maxDescriptorSetUpdateAfterBindSampledImages_
	,uint32_t   maxDescriptorSetUpdateAfterBindStorageImages_
	,uint32_t   maxDescriptorSetUpdateAfterBindInputAttachments_);
};

/*	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT:
extends to:	VkDescriptorSetLayoutCreateInfo*/
typedef struct S_descriptor_set_layout_binding_flags_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	bindingCount;
/*|optional|	
len:	bindingCount*/
	const	VkDescriptorBindingFlagsEXT*	pBindingFlags;
S_descriptor_set_layout_binding_flags_create_info_EXT(
	 uint32_t   bindingCount_
	,const const VkDescriptorBindingFlagsEXT*  * pBindingFlags_);
};

/*	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT:
extends to:	VkDescriptorSetAllocateInfo*/
typedef struct S_descriptor_set_variable_descriptor_count_allocate_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	descriptorSetCount;
/*
len:	descriptorSetCount*/
	const	uint32_t*	pDescriptorCounts;
S_descriptor_set_variable_descriptor_count_allocate_info_EXT(
	 uint32_t   descriptorSetCount_
	,const const uint32_t*  * pDescriptorCounts_);
};

/*	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT:
returnd only
extends to:	VkDescriptorSetLayoutSupport*/
typedef struct S_descriptor_set_variable_descriptor_count_layout_support_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	maxVariableDescriptorCount;
S_descriptor_set_variable_descriptor_count_layout_support_EXT(
	 uint32_t   maxVariableDescriptorCount_);
};

/*	VkAttachmentDescription2KHR:*/
typedef struct S_attachment_description2_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkAttachmentDescriptionFlags	flags;
	E_format	format;
	F_sample_count	samples;
/*Load operation for color or depth data*/
	E_attachment_load_op	loadOp;
/*Store operation for color or depth data*/
	E_attachment_store_op	storeOp;
/*Load operation for stencil data*/
	E_attachment_load_op	stencilLoadOp;
/*Store operation for stencil data*/
	E_attachment_store_op	stencilStoreOp;
	E_image_layout	initialLayout;
	E_image_layout	finalLayout;
S_attachment_description2_KHR(
	 VkAttachmentDescriptionFlags   flags_
	,E_format  format_
	,F_sample_count  samples_
	,E_attachment_load_op  loadOp_
	,E_attachment_store_op  storeOp_
	,E_attachment_load_op  stencilLoadOp_
	,E_attachment_store_op  stencilStoreOp_
	,E_image_layout  initialLayout_
	,E_image_layout  finalLayout_);
};

/*	VkAttachmentReference2KHR:*/
typedef struct S_attachment_reference2_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	attachment;
	E_image_layout	layout;
	VkImageAspectFlags	aspectMask;
S_attachment_reference2_KHR(
	 uint32_t   attachment_
	,E_image_layout  layout_
	,VkImageAspectFlags   aspectMask_);
};

/*	VkSubpassDescription2KHR:*/
typedef struct S_subpass_description2_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkSubpassDescriptionFlags	flags;
	E_pipeline_bind_point	pipelineBindPoint;
	uint32_t	viewMask;
/*|optional|	*/
	uint32_t	inputAttachmentCount;
/*
len:	inputAttachmentCount*/
	const	S_attachment_reference2_KHR*	pInputAttachments;
/*|optional|	*/
	uint32_t	colorAttachmentCount;
/*
len:	colorAttachmentCount*/
	const	S_attachment_reference2_KHR*	pColorAttachments;
/*|optional|	
len:	colorAttachmentCount*/
	const	S_attachment_reference2_KHR*	pResolveAttachments;
/*|optional|	*/
	const	S_attachment_reference2_KHR*	pDepthStencilAttachment;
/*|optional|	*/
	uint32_t	preserveAttachmentCount;
/*
len:	preserveAttachmentCount*/
	const	uint32_t*	pPreserveAttachments;
S_subpass_description2_KHR(
	 VkSubpassDescriptionFlags   flags_
	,E_pipeline_bind_point  pipelineBindPoint_
	,uint32_t   viewMask_
	,uint32_t   inputAttachmentCount_
	,const S_attachment_reference2_KHR * pInputAttachments_
	,uint32_t   colorAttachmentCount_
	,const S_attachment_reference2_KHR * pColorAttachments_
	,const S_attachment_reference2_KHR * pResolveAttachments_
	,const S_attachment_reference2_KHR *            pDepthStencilAttachment_
	,uint32_t   preserveAttachmentCount_
	,const const uint32_t*                *               pPreserveAttachments_);
};

/*	VkSubpassDependency2KHR:*/
typedef struct S_subpass_dependency2_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	srcSubpass;
	uint32_t	dstSubpass;
	VkPipelineStageFlags	srcStageMask;
	VkPipelineStageFlags	dstStageMask;
/*|optional|	*/
	VkAccessFlags	srcAccessMask;
/*|optional|	*/
	VkAccessFlags	dstAccessMask;
/*|optional|	*/
	VkDependencyFlags	dependencyFlags;
/*|optional|	*/
	int32_t	viewOffset;
S_subpass_dependency2_KHR(
	 uint32_t   srcSubpass_
	,uint32_t   dstSubpass_
	,VkPipelineStageFlags   srcStageMask_
	,VkPipelineStageFlags   dstStageMask_
	,VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,VkDependencyFlags   dependencyFlags_
	,int32_t   viewOffset_);
};

/*	VkRenderPassCreateInfo2KHR:*/
typedef struct S_render_pass_create_info2_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkRenderPassCreateFlags	flags;
/*|optional|	*/
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	S_attachment_description2_KHR*	pAttachments;
	uint32_t	subpassCount;
/*
len:	subpassCount*/
	const	S_subpass_description2_KHR*	pSubpasses;
/*|optional|	*/
	uint32_t	dependencyCount;
/*
len:	dependencyCount*/
	const	S_subpass_dependency2_KHR*	pDependencies;
/*|optional|	*/
	uint32_t	correlatedViewMaskCount;
/*
len:	correlatedViewMaskCount*/
	const	uint32_t*	pCorrelatedViewMasks;
S_render_pass_create_info2_KHR(
	 VkRenderPassCreateFlags   flags_
	,uint32_t   attachmentCount_
	,const S_attachment_description2_KHR * pAttachments_
	,uint32_t   subpassCount_
	,const S_subpass_description2_KHR *       pSubpasses_
	,uint32_t   dependencyCount_
	,const S_subpass_dependency2_KHR *     pDependencies_
	,uint32_t   correlatedViewMaskCount_
	,const const uint32_t*             *            pCorrelatedViewMasks_);
};

/*	VkSubpassBeginInfoKHR:*/
typedef struct S_subpass_begin_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_subpass_contents	contents;
S_subpass_begin_info_KHR(
	 E_subpass_contents  contents_);
};

/*	VkSubpassEndInfoKHR:*/
typedef struct S_subpass_end_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
S_subpass_end_info_KHR(
);
};

/*	VkPipelineVertexInputDivisorStateCreateInfoEXT:
extends to:	VkPipelineVertexInputStateCreateInfo*/
typedef struct S_pipeline_vertex_input_divisor_state_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	vertexBindingDivisorCount;
/*
len:	vertexBindingDivisorCount*/
	const	S_vertex_input_binding_divisor_description_EXT*	pVertexBindingDivisors;
S_pipeline_vertex_input_divisor_state_create_info_EXT(
	 uint32_t   vertexBindingDivisorCount_
	,const S_vertex_input_binding_divisor_description_EXT *      pVertexBindingDivisors_);
};

/*	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_vertex_attribute_divisor_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*max value of vertex attribute divisor*/
	uint32_t	maxVertexAttribDivisor;
S_physical_device_vertex_attribute_divisor_properties_EXT(
	 uint32_t   maxVertexAttribDivisor_);
};

/*	VkImportAndroidHardwareBufferInfoANDROID:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_android_hardware_buffer_info_ANDROID{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	struct	AHardwareBuffer*	buffer;
S_import_android_hardware_buffer_info_ANDROID(
	 struct struct AHardwareBuffer*             *            buffer_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidHardwareBufferUsageANDROID:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_android_hardware_buffer_usage_ANDROID{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint64_t	androidHardwareBufferUsage;
S_android_hardware_buffer_usage_ANDROID(
	 uint64_t   androidHardwareBufferUsage_);
};

#endif

/*	VkMemoryGetAndroidHardwareBufferInfoANDROID:*/
typedef struct S_memory_get_android_hardware_buffer_info_ANDROID{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkDeviceMemory	memory;
S_memory_get_android_hardware_buffer_info_ANDROID(
	 VkDeviceMemory   memory_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidHardwareBufferFormatPropertiesANDROID:
returnd only
extends to:	VkAndroidHardwareBufferPropertiesANDROID*/
typedef struct S_android_hardware_buffer_format_properties_ANDROID{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	E_format	format;
	uint64_t	externalFormat;
	VkFormatFeatureFlags	formatFeatures;
	S_component_mapping	samplerYcbcrConversionComponents;
	E_sampler_ycbcr_model_conversion	suggestedYcbcrModel;
	E_sampler_ycbcr_range	suggestedYcbcrRange;
	E_chroma_location	suggestedXChromaOffset;
	E_chroma_location	suggestedYChromaOffset;
S_android_hardware_buffer_format_properties_ANDROID(
	 E_format  format_
	,uint64_t   externalFormat_
	,VkFormatFeatureFlags   formatFeatures_
	,S_component_mapping  samplerYcbcrConversionComponents_
	,E_sampler_ycbcr_model_conversion  suggestedYcbcrModel_
	,E_sampler_ycbcr_range  suggestedYcbcrRange_
	,E_chroma_location  suggestedXChromaOffset_
	,E_chroma_location  suggestedYChromaOffset_);
};

#endif

/*	VkCommandBufferInheritanceConditionalRenderingInfoEXT:
extends to:	VkCommandBufferInheritanceInfo*/
typedef struct S_command_buffer_inheritance_conditional_rendering_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Whether this secondary command buffer may be executed during an active conditional rendering*/
	VkBool32	conditionalRenderingEnable;
S_command_buffer_inheritance_conditional_rendering_info_EXT(
	 VkBool32   conditionalRenderingEnable_);
};

/*	VkExternalFormatANDROID:
extends to:	VkImageCreateInfo,VkSamplerYcbcrConversionCreateInfo*/
typedef struct S_external_format_ANDROID{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint64_t	externalFormat;
S_external_format_ANDROID(
	 uint64_t   externalFormat_);
};

/*	VkPhysicalDevice8BitStorageFeaturesKHR:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_8bit_storage_features_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*8-bit integer variables supported in StorageBuffer*/
	VkBool32	storageBuffer8BitAccess;
/*8-bit integer variables supported in StorageBuffer and Uniform*/
	VkBool32	uniformAndStorageBuffer8BitAccess;
/*8-bit integer variables supported in PushConstant*/
	VkBool32	storagePushConstant8;
S_physical_device_8bit_storage_features_KHR(
	 VkBool32   storageBuffer8BitAccess_
	,VkBool32   uniformAndStorageBuffer8BitAccess_
	,VkBool32   storagePushConstant8_);
};

/*	VkPhysicalDeviceConditionalRenderingFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_conditional_rendering_features_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	conditionalRendering;
	VkBool32	inheritedConditionalRendering;
S_physical_device_conditional_rendering_features_EXT(
	 VkBool32   conditionalRendering_
	,VkBool32   inheritedConditionalRendering_);
};

/*	VkPhysicalDeviceVulkanMemoryModelFeaturesKHR:
returnd only
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_vulkan_memory_model_features_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	vulkanMemoryModel;
	VkBool32	vulkanMemoryModelDeviceScope;
S_physical_device_vulkan_memory_model_features_KHR(
	 VkBool32   vulkanMemoryModel_
	,VkBool32   vulkanMemoryModelDeviceScope_);
};

/*	VkPhysicalDeviceShaderAtomicInt64FeaturesKHR:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shader_atomic_int64_features_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	shaderBufferInt64Atomics;
	VkBool32	shaderSharedInt64Atomics;
S_physical_device_shader_atomic_int64_features_KHR(
	 VkBool32   shaderBufferInt64Atomics_
	,VkBool32   shaderSharedInt64Atomics_);
};

/*	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_vertex_attribute_divisor_features_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	vertexAttributeInstanceRateDivisor;
	VkBool32	vertexAttributeInstanceRateZeroDivisor;
S_physical_device_vertex_attribute_divisor_features_EXT(
	 VkBool32   vertexAttributeInstanceRateDivisor_
	,VkBool32   vertexAttributeInstanceRateZeroDivisor_);
};

/*	VkQueueFamilyCheckpointPropertiesNV:
returnd only
extends to:	VkQueueFamilyProperties2*/
typedef struct S_queue_family_checkpoint_properties_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkPipelineStageFlags	checkpointExecutionStageMask;
S_queue_family_checkpoint_properties_NV(
	 VkPipelineStageFlags   checkpointExecutionStageMask_);
};

/*	VkCheckpointDataNV:
returnd only*/
typedef struct S_checkpoint_data_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	F_pipeline_stage	stage;
	void*	pCheckpointMarker;
S_checkpoint_data_NV(
	 F_pipeline_stage  stage_
	,void*  * pCheckpointMarker_);
};

/*	VkImageViewASTCDecodeModeEXT:
extends to:	VkImageViewCreateInfo*/
typedef struct S_image_view_astc_decode_mode_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_format	decodeMode;
S_image_view_astc_decode_mode_EXT(
	 E_format  decodeMode_);
};

/*	VkPhysicalDeviceASTCDecodeFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_astc_decode_features_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	decodeModeSharedExponent;
S_physical_device_astc_decode_features_EXT(
	 VkBool32   decodeModeSharedExponent_);
};

/*	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_representative_fragment_test_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	representativeFragmentTest;
S_physical_device_representative_fragment_test_features_NV(
	 VkBool32   representativeFragmentTest_);
};

/*	VkPipelineRepresentativeFragmentTestStateCreateInfoNV:
extends to:	VkGraphicsPipelineCreateInfo*/
typedef struct S_pipeline_representative_fragment_test_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBool32	representativeFragmentTestEnable;
S_pipeline_representative_fragment_test_state_create_info_NV(
	 VkBool32   representativeFragmentTestEnable_);
};

/*	VkPhysicalDeviceExclusiveScissorFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_exclusive_scissor_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	exclusiveScissor;
S_physical_device_exclusive_scissor_features_NV(
	 VkBool32   exclusiveScissor_);
};

/*	VkPipelineViewportExclusiveScissorStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_exclusive_scissor_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	exclusiveScissorCount;
/*|optional|	
len:	exclusiveScissorCount*/
	const	S_rect_2d*	pExclusiveScissors;
S_pipeline_viewport_exclusive_scissor_state_create_info_NV(
	 uint32_t   exclusiveScissorCount_
	,const S_rect_2d *    pExclusiveScissors_);
};

/*	VkPhysicalDeviceCornerSampledImageFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_corner_sampled_image_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	cornerSampledImage;
S_physical_device_corner_sampled_image_features_NV(
	 VkBool32   cornerSampledImage_);
};

/*	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_compute_shader_derivatives_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	computeDerivativeGroupQuads;
	VkBool32	computeDerivativeGroupLinear;
S_physical_device_compute_shader_derivatives_features_NV(
	 VkBool32   computeDerivativeGroupQuads_
	,VkBool32   computeDerivativeGroupLinear_);
};

/*	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_fragment_shader_barycentric_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	fragmentShaderBarycentric;
S_physical_device_fragment_shader_barycentric_features_NV(
	 VkBool32   fragmentShaderBarycentric_);
};

/*	VkPhysicalDeviceShaderImageFootprintFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shader_image_footprint_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	imageFootprint;
S_physical_device_shader_image_footprint_features_NV(
	 VkBool32   imageFootprint_);
};

/*	VkPipelineViewportShadingRateImageStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_shading_rate_image_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBool32	shadingRateImageEnable;
/*|optional|	*/
	uint32_t	viewportCount;
/*|optional|	
len:	viewportCount*/
	const	S_shading_rate_palette_NV*	pShadingRatePalettes;
S_pipeline_viewport_shading_rate_image_state_create_info_NV(
	 VkBool32   shadingRateImageEnable_
	,uint32_t   viewportCount_
	,const S_shading_rate_palette_NV *      pShadingRatePalettes_);
};

/*	VkPhysicalDeviceShadingRateImageFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shading_rate_image_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	shadingRateImage;
	VkBool32	shadingRateCoarseSampleOrder;
S_physical_device_shading_rate_image_features_NV(
	 VkBool32   shadingRateImage_
	,VkBool32   shadingRateCoarseSampleOrder_);
};

/*	VkPhysicalDeviceShadingRateImagePropertiesNV:
returnd only
extends to:	VkPhysicalDeviceProperties*/
typedef struct S_physical_device_shading_rate_image_properties_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_extent_2d	shadingRateTexelSize;
	uint32_t	shadingRatePaletteSize;
	uint32_t	shadingRateMaxCoarseSamples;
S_physical_device_shading_rate_image_properties_NV(
	 S_extent_2d  shadingRateTexelSize_
	,uint32_t   shadingRatePaletteSize_
	,uint32_t   shadingRateMaxCoarseSamples_);
};

/*	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_coarse_sample_order_state_create_info_NV{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_coarse_sample_order_type_NV	sampleOrderType;
/*|optional|	*/
	uint32_t	customSampleOrderCount;
/*
len:	customSampleOrderCount*/
	const	S_coarse_sample_order_custom_NV*	pCustomSampleOrders;
S_pipeline_viewport_coarse_sample_order_state_create_info_NV(
	 E_coarse_sample_order_type_NV  sampleOrderType_
	,uint32_t   customSampleOrderCount_
	,const S_coarse_sample_order_custom_NV *        pCustomSampleOrders_);
};

/*	VkPhysicalDeviceMeshShaderFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_mesh_shader_features_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	taskShader;
	VkBool32	meshShader;
S_physical_device_mesh_shader_features_NV(
	 VkBool32   taskShader_
	,VkBool32   meshShader_);
};

/*	VkPhysicalDeviceMeshShaderPropertiesNV:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_mesh_shader_properties_NV{
private:
	E_structure_type	sType;
	void*	pNext;
public:
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
S_physical_device_mesh_shader_properties_NV(
	 uint32_t   maxDrawMeshTasksCount_
	,uint32_t   maxTaskWorkGroupInvocations_
	,uint32_t [3]  maxTaskWorkGroupSize_
	,uint32_t   maxTaskTotalMemorySize_
	,uint32_t   maxTaskOutputCount_
	,uint32_t   maxMeshWorkGroupInvocations_
	,uint32_t [3]  maxMeshWorkGroupSize_
	,uint32_t   maxMeshTotalMemorySize_
	,uint32_t   maxMeshOutputVertices_
	,uint32_t   maxMeshOutputPrimitives_
	,uint32_t   maxMeshMultiviewViewCount_
	,uint32_t   meshOutputPerVertexGranularity_
	,uint32_t   meshOutputPerPrimitiveGranularity_);
};

/*	VkRaytracingPipelineCreateInfoNVX:*/
typedef struct S_raytracing_pipeline_create_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
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
S_raytracing_pipeline_create_info_NVX(
	 VkPipelineCreateFlags   flags_
	,uint32_t   stageCount_
	,const S_pipeline_shader_stage_create_info * pStages_
	,const const uint32_t*  * pGroupNumbers_
	,uint32_t   maxRecursionDepth_
	,VkPipelineLayout   layout_
	,VkPipeline   basePipelineHandle_
	,int32_t   basePipelineIndex_);
};

/*	VkGeometryTrianglesNVX:*/
typedef struct S_geometry_triangles_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkBuffer	vertexData;
	VkDeviceSize	vertexOffset;
	uint32_t	vertexCount;
	VkDeviceSize	vertexStride;
/*VK_FORMAT_R32G32B32_SFLOAT, VK_FORMAT_R32G32B32A32_SFLOAT, VK_FORMAT_R16G16B16_SFLOAT, or VK_FORMAT_R16G16B16A16_SFLOAT*/
	E_format	vertexFormat;
/*|optional|	*/
	VkBuffer	indexData;
	VkDeviceSize	indexOffset;
	uint32_t	indexCount;
	E_index_type	indexType;
/*Optional reference to array of floats representing a 3x4 row major affine transformation matrix.*/
	VkBuffer	transformData;
	VkDeviceSize	transformOffset;
S_geometry_triangles_NVX(
	 VkBuffer   vertexData_
	,VkDeviceSize   vertexOffset_
	,uint32_t   vertexCount_
	,VkDeviceSize   vertexStride_
	,E_format  vertexFormat_
	,VkBuffer   indexData_
	,VkDeviceSize   indexOffset_
	,uint32_t   indexCount_
	,E_index_type  indexType_
	,VkBuffer   transformData_
	,VkDeviceSize   transformOffset_);
};

/*	VkGeometryAABBNVX:*/
typedef struct S_geometry_aabb_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkBuffer	aabbData;
	uint32_t	numAABBs;
/*Stride in bytes between AABBs*/
	uint32_t	stride;
/*Offset in bytes of the first AABB in aabbData*/
	VkDeviceSize	offset;
S_geometry_aabb_NVX(
	 VkBuffer   aabbData_
	,uint32_t   numAABBs_
	,uint32_t   stride_
	,VkDeviceSize   offset_);
};

/*	VkGeometryNVX:*/
typedef struct S_geometry_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_geometry_type_NVX	geometryType;
	S_geometry_data_NVX	geometry;
/*|optional|	*/
	VkGeometryFlagsNVX	flags;
S_geometry_NVX(
	 E_geometry_type_NVX  geometryType_
	,S_geometry_data_NVX  geometry_
	,VkGeometryFlagsNVX   flags_);
};

/*	VkAccelerationStructureCreateInfoNVX:*/
typedef struct S_acceleration_structure_create_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_acceleration_structure_type_NVX	type;
/*|optional|	*/
	VkBuildAccelerationStructureFlagsNVX	flags;
	VkDeviceSize	compactedSize;
/*|optional|	*/
	uint32_t	instanceCount;
/*|optional|	*/
	uint32_t	geometryCount;
/*
len:	geometryCount*/
	const	S_geometry_NVX*	pGeometries;
S_acceleration_structure_create_info_NVX(
	 E_acceleration_structure_type_NVX  type_
	,VkBuildAccelerationStructureFlagsNVX flags_
	,VkDeviceSize   compactedSize_
	,uint32_t   instanceCount_
	,uint32_t   geometryCount_
	,const S_geometry_NVX * pGeometries_);
};

/*	VkBindAccelerationStructureMemoryInfoNVX:*/
typedef struct S_bind_acceleration_structure_memory_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkAccelerationStructureNVX	accelerationStructure;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
/*|optional|	*/
	uint32_t	deviceIndexCount;
/*
len:	deviceIndexCount*/
	const	uint32_t*	pDeviceIndices;
S_bind_acceleration_structure_memory_info_NVX(
	 VkAccelerationStructureNVX   accelerationStructure_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_
	,uint32_t   deviceIndexCount_
	,const const uint32_t*   *  pDeviceIndices_);
};

/*	VkDescriptorAccelerationStructureInfoNVX:
extends to:	VkWriteDescriptorSet*/
typedef struct S_descriptor_acceleration_structure_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	accelerationStructureCount;
/*
len:	accelerationStructureCount*/
	const	VkAccelerationStructureNVX*	pAccelerationStructures;
S_descriptor_acceleration_structure_info_NVX(
	 uint32_t   accelerationStructureCount_
	,const const VkAccelerationStructureNVX*  * pAccelerationStructures_);
};

/*	VkAccelerationStructureMemoryRequirementsInfoNVX:*/
typedef struct S_acceleration_structure_memory_requirements_info_NVX{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkAccelerationStructureNVX	accelerationStructure;
S_acceleration_structure_memory_requirements_info_NVX(
	 VkAccelerationStructureNVX   accelerationStructure_);
};

/*	VkPhysicalDeviceRaytracingPropertiesNVX:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_raytracing_properties_NVX{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint32_t	shaderHeaderSize;
	uint32_t	maxRecursionDepth;
	uint32_t	maxGeometryCount;
S_physical_device_raytracing_properties_NVX(
	 uint32_t   shaderHeaderSize_
	,uint32_t   maxRecursionDepth_
	,uint32_t   maxGeometryCount_);
};

/*	VkDrmFormatModifierPropertiesListEXT:
extends to:	VkFormatProperties2*/
typedef struct S_drm_format_modifier_properties_list_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
/*|optional|	*/
	uint32_t	drmFormatModifierCount;
/*|optional|	
len:	drmFormatModifierCount*/
	S_drm_format_modifier_properties_EXT*	pDrmFormatModifierProperties;
S_drm_format_modifier_properties_list_EXT(
	 uint32_t   drmFormatModifierCount_
	,S_drm_format_modifier_properties_EXT * pDrmFormatModifierProperties_);
};

/*	VkPhysicalDeviceImageDrmFormatModifierInfoEXT:
extends to:	VkPhysicalDeviceImageFormatInfo2*/
typedef struct S_physical_device_image_drm_format_modifier_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint64_t	drmFormatModifier;
S_physical_device_image_drm_format_modifier_info_EXT(
	 uint64_t   drmFormatModifier_);
};

/*	VkImageDrmFormatModifierListCreateInfoEXT:
extends to:	VkImageCreateInfo*/
typedef struct S_image_drm_format_modifier_list_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint32_t	drmFormatModifierCount;
/*
len:	drmFormatModifierCount*/
	const	uint64_t*	pDrmFormatModifiers;
S_image_drm_format_modifier_list_create_info_EXT(
	 uint32_t   drmFormatModifierCount_
	,const const uint64_t*  * pDrmFormatModifiers_);
};

/*	VkImageDrmFormatModifierExplicitCreateInfoEXT:
extends to:	VkImageCreateInfo*/
typedef struct S_image_drm_format_modifier_explicit_create_info_EXT{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	uint64_t	drmFormatModifier;
/*|optional|	*/
	uint32_t	drmFormatModifierPlaneCount;
/*
len:	drmFormatModifierPlaneCount*/
	const	S_subresource_layout*	pPlaneLayouts;
S_image_drm_format_modifier_explicit_create_info_EXT(
	 uint64_t   drmFormatModifier_
	,uint32_t   drmFormatModifierPlaneCount_
	,const S_subresource_layout * pPlaneLayouts_);
};

/*	VkImageDrmFormatModifierPropertiesEXT:
returnd only*/
typedef struct S_image_drm_format_modifier_properties_EXT{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	uint64_t	drmFormatModifier;
S_image_drm_format_modifier_properties_EXT(
	 uint64_t   drmFormatModifier_);
};

/*	VkPhysicalDeviceProperties:
returnd only
extends:
	S_physical_device_shading_rate_image_properties_NV*/
typedef struct S_physical_device_properties{
	uint32_t	apiVersion;
	uint32_t	driverVersion;
	uint32_t	vendorID;
	uint32_t	deviceID;
	E_physical_device_type	deviceType;
	char	deviceName;
	uint8_t	pipelineCacheUUID;
	S_physical_device_limits	limits;
	S_physical_device_sparse_properties	sparseProperties;
S_physical_device_properties(
	 uint32_t   apiVersion_
	,uint32_t   driverVersion_
	,uint32_t   vendorID_
	,uint32_t   deviceID_
	,E_physical_device_type  deviceType_
	,char [VK_MAX_PHYSICAL_DEVICE_NAME_SIZE]  deviceName_
	,uint8_t [VK_UUID_SIZE]  pipelineCacheUUID_
	,S_physical_device_limits  limits_
	,S_physical_device_sparse_properties  sparseProperties_);
};

/*	VkDeviceQueueCreateInfo:
extends:
	S_device_queue_global_priority_create_info_EXT*/
typedef struct S_device_queue_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkDeviceQueueCreateFlags	flags;
	uint32_t	queueFamilyIndex;
	uint32_t	queueCount;
/*
len:	queueCount*/
	const	float*	pQueuePriorities;
S_device_queue_create_info(
	 VkDeviceQueueCreateFlags   flags_
	,uint32_t   queueFamilyIndex_
	,uint32_t   queueCount_
	,const const float*     *    pQueuePriorities_);
};

/*	VkInstanceCreateInfo:
extends:
	S_debug_report_callback_create_info_EXT
	S_validation_flags_EXT
	S_debug_utils_messenger_create_info_EXT*/
typedef struct S_instance_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkInstanceCreateFlags	flags;
/*|optional|	*/
	const	S_application_info*	pApplicationInfo;
/*|optional|	*/
	uint32_t	enabledLayerCount;
/*Ordered list of layer names to be enabled
len:	enabledLayerCount,null-terminated*/
	const	char*	const*	ppEnabledLayerNames;
/*|optional|	*/
	uint32_t	enabledExtensionCount;
/*Extension names to be enabled
len:	enabledExtensionCount,null-terminated*/
	const	char*	const*	ppEnabledExtensionNames;
S_instance_create_info(
	 VkInstanceCreateFlags   flags_
	,const S_application_info * pApplicationInfo_
	,uint32_t   enabledLayerCount_
	,const const char* const*       * const*      ppEnabledLayerNames_
	,uint32_t   enabledExtensionCount_
	,const const char* const*       * const*      ppEnabledExtensionNames_);
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
typedef struct S_memory_allocate_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Size of memory allocation*/
	VkDeviceSize	allocationSize;
/*Index of the of the memory type to allocate from*/
	uint32_t	memoryTypeIndex;
S_memory_allocate_info(
	 VkDeviceSize   allocationSize_
	,uint32_t   memoryTypeIndex_);
};

/*	VkWriteDescriptorSet:
extends:
	S_write_descriptor_set_inline_uniform_block_EXT
	S_descriptor_acceleration_structure_info_NVX*/
typedef struct S_write_descriptor_set{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Destination descriptor set*/
	VkDescriptorSet	dstSet;
/*Binding within the destination descriptor set to write*/
	uint32_t	dstBinding;
/*Array element within the destination binding to write*/
	uint32_t	dstArrayElement;
/*Number of descriptors to write (determines the size of the array pointed by pDescriptors)*/
	uint32_t	descriptorCount;
/*Descriptor type to write (determines which members of the array pointed by pDescriptors are going to be used)*/
	E_descriptor_type	descriptorType;
/*Sampler, image view, and layout for SAMPLER, COMBINED_IMAGE_SAMPLER, {SAMPLED,STORAGE}_IMAGE, and INPUT_ATTACHMENT descriptor types.
len:	descriptorCount*/
	const	S_descriptor_image_info*	pImageInfo;
/*Raw buffer, size, and offset for {UNIFORM,STORAGE}_BUFFER[_DYNAMIC] descriptor types.
len:	descriptorCount*/
	const	S_descriptor_buffer_info*	pBufferInfo;
/*Buffer view to write to the descriptor for {UNIFORM,STORAGE}_TEXEL_BUFFER descriptor types.
len:	descriptorCount*/
	const	VkBufferView*	pTexelBufferView;
S_write_descriptor_set(
	 VkDescriptorSet   dstSet_
	,uint32_t   dstBinding_
	,uint32_t   dstArrayElement_
	,uint32_t   descriptorCount_
	,E_descriptor_type  descriptorType_
	,const S_descriptor_image_info * pImageInfo_
	,const S_descriptor_buffer_info * pBufferInfo_
	,const const VkBufferView*     *    pTexelBufferView_);
};

/*	VkBufferCreateInfo:
extends:
	S_dedicated_allocation_buffer_create_info_NV
	S_external_memory_buffer_create_info*/
typedef struct S_buffer_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Buffer creation flags*/
	VkBufferCreateFlags	flags;
/*Specified in bytes*/
	VkDeviceSize	size;
/*Buffer usage flags*/
	VkBufferUsageFlags	usage;
	E_sharing_mode	sharingMode;
/*|optional|	*/
	uint32_t	queueFamilyIndexCount;
/*
len:	queueFamilyIndexCount*/
	const	uint32_t*	pQueueFamilyIndices;
S_buffer_create_info(
	 VkBufferCreateFlags   flags_
	,VkDeviceSize   size_
	,VkBufferUsageFlags   usage_
	,E_sharing_mode  sharingMode_
	,uint32_t   queueFamilyIndexCount_
	,const const uint32_t*         *        pQueueFamilyIndices_);
};

/*	VkImageMemoryBarrier:
extends:
	S_sample_locations_info_EXT*/
typedef struct S_image_memory_barrier{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Memory accesses from the source of the dependency to synchronize*/
	VkAccessFlags	srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	VkAccessFlags	dstAccessMask;
/*Current layout of the image*/
	E_image_layout	oldLayout;
/*New layout to transition the image to*/
	E_image_layout	newLayout;
/*Queue family to transition ownership from*/
	uint32_t	srcQueueFamilyIndex;
/*Queue family to transition ownership to*/
	uint32_t	dstQueueFamilyIndex;
/*Image to sync*/
	VkImage	image;
/*Subresource range to sync*/
	S_image_subresource_range	subresourceRange;
S_image_memory_barrier(
	 VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,E_image_layout  oldLayout_
	,E_image_layout  newLayout_
	,uint32_t   srcQueueFamilyIndex_
	,uint32_t   dstQueueFamilyIndex_
	,VkImage   image_
	,S_image_subresource_range  subresourceRange_);
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
typedef struct S_image_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Image creation flags*/
	VkImageCreateFlags	flags;
	E_image_type	imageType;
	E_format	format;
	S_extent_3d	extent;
	uint32_t	mipLevels;
	uint32_t	arrayLayers;
	F_sample_count	samples;
	E_image_tiling	tiling;
/*Image usage flags*/
	VkImageUsageFlags	usage;
/*Cross-queue-family sharing mode*/
	E_sharing_mode	sharingMode;
/*Number of queue families to share across*/
	uint32_t	queueFamilyIndexCount;
/*Array of queue family indices to share across
len:	queueFamilyIndexCount*/
	const	uint32_t*	pQueueFamilyIndices;
/*Initial image layout for all subresources*/
	E_image_layout	initialLayout;
S_image_create_info(
	 VkImageCreateFlags   flags_
	,E_image_type  imageType_
	,E_format  format_
	,S_extent_3d  extent_
	,uint32_t   mipLevels_
	,uint32_t   arrayLayers_
	,F_sample_count  samples_
	,E_image_tiling  tiling_
	,VkImageUsageFlags   usage_
	,E_sharing_mode  sharingMode_
	,uint32_t   queueFamilyIndexCount_
	,const const uint32_t*         *        pQueueFamilyIndices_
	,E_image_layout  initialLayout_);
};

/*	VkImageViewCreateInfo:
extends:
	S_image_view_usage_create_info
	S_sampler_ycbcr_conversion_info
	S_image_view_astc_decode_mode_EXT*/
typedef struct S_image_view_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkImageViewCreateFlags	flags;
	VkImage	image;
	E_image_view_type	viewType;
	E_format	format;
	S_component_mapping	components;
	S_image_subresource_range	subresourceRange;
S_image_view_create_info(
	 VkImageViewCreateFlags   flags_
	,VkImage   image_
	,E_image_view_type  viewType_
	,E_format  format_
	,S_component_mapping  components_
	,S_image_subresource_range  subresourceRange_);
};

/*	VkBindSparseInfo:
extends:
	S_device_group_bind_sparse_info*/
typedef struct S_bind_sparse_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const	VkSemaphore*	pWaitSemaphores;
/*|optional|	*/
	uint32_t	bufferBindCount;
/*
len:	bufferBindCount*/
	const	S_sparse_buffer_memory_bind_info*	pBufferBinds;
/*|optional|	*/
	uint32_t	imageOpaqueBindCount;
/*
len:	imageOpaqueBindCount*/
	const	S_sparse_image_opaque_memory_bind_info*	pImageOpaqueBinds;
/*|optional|	*/
	uint32_t	imageBindCount;
/*
len:	imageBindCount*/
	const	S_sparse_image_memory_bind_info*	pImageBinds;
/*|optional|	*/
	uint32_t	signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const	VkSemaphore*	pSignalSemaphores;
S_bind_sparse_info(
	 uint32_t   waitSemaphoreCount_
	,const const VkSemaphore*      *     pWaitSemaphores_
	,uint32_t   bufferBindCount_
	,const S_sparse_buffer_memory_bind_info * pBufferBinds_
	,uint32_t   imageOpaqueBindCount_
	,const S_sparse_image_opaque_memory_bind_info * pImageOpaqueBinds_
	,uint32_t   imageBindCount_
	,const S_sparse_image_memory_bind_info * pImageBinds_
	,uint32_t   signalSemaphoreCount_
	,const const VkSemaphore*      *     pSignalSemaphores_);
};

/*	VkShaderModuleCreateInfo:
extends:
	S_shader_module_validation_cache_create_info_EXT*/
typedef struct S_shader_module_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkShaderModuleCreateFlags	flags;
/*Specified in bytes*/
	size_t	codeSize;
/*Binary code of size codeSizealt
len:	latexmath:[codeSize \over 4]*/
	const	uint32_t*	pCode;
S_shader_module_create_info(
	 VkShaderModuleCreateFlags   flags_
	,size_t   codeSize_
	,const const uint32_t*             *            pCode_);
};

/*	VkDescriptorSetLayoutCreateInfo:
extends:
	S_descriptor_set_layout_binding_flags_create_info_EXT*/
typedef struct S_descriptor_set_layout_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkDescriptorSetLayoutCreateFlags	flags;
/*Number of bindings in the descriptor set layout*/
	uint32_t	bindingCount;
/*Array of descriptor set layout bindings
len:	bindingCount*/
	const	S_descriptor_set_layout_binding*	pBindings;
S_descriptor_set_layout_create_info(
	 VkDescriptorSetLayoutCreateFlags   flags_
	,uint32_t   bindingCount_
	,const S_descriptor_set_layout_binding * pBindings_);
};

/*	VkDescriptorPoolCreateInfo:
extends:
	S_descriptor_pool_inline_uniform_block_create_info_EXT*/
typedef struct S_descriptor_pool_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkDescriptorPoolCreateFlags	flags;
	uint32_t	maxSets;
	uint32_t	poolSizeCount;
/*
len:	poolSizeCount*/
	const	S_descriptor_pool_size*	pPoolSizes;
S_descriptor_pool_create_info(
	 VkDescriptorPoolCreateFlags   flags_
	,uint32_t   maxSets_
	,uint32_t   poolSizeCount_
	,const S_descriptor_pool_size * pPoolSizes_);
};

/*	VkDescriptorSetAllocateInfo:
extends:
	S_descriptor_set_variable_descriptor_count_allocate_info_EXT*/
typedef struct S_descriptor_set_allocate_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkDescriptorPool	descriptorPool;
	uint32_t	descriptorSetCount;
/*
len:	descriptorSetCount*/
	const	VkDescriptorSetLayout*	pSetLayouts;
S_descriptor_set_allocate_info(
	 VkDescriptorPool   descriptorPool_
	,uint32_t   descriptorSetCount_
	,const const VkDescriptorSetLayout*  * pSetLayouts_);
};

/*	VkPipelineVertexInputStateCreateInfo:
extends:
	S_pipeline_vertex_input_divisor_state_create_info_EXT*/
typedef struct S_pipeline_vertex_input_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
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
S_pipeline_vertex_input_state_create_info(
	 VkPipelineVertexInputStateCreateFlags   flags_
	,uint32_t   vertexBindingDescriptionCount_
	,const S_vertex_input_binding_description * pVertexBindingDescriptions_
	,uint32_t   vertexAttributeDescriptionCount_
	,const S_vertex_input_attribute_description * pVertexAttributeDescriptions_);
};

/*	VkPipelineTessellationStateCreateInfo:
extends:
	S_pipeline_tessellation_domain_origin_state_create_info*/
typedef struct S_pipeline_tessellation_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineTessellationStateCreateFlags	flags;
	uint32_t	patchControlPoints;
S_pipeline_tessellation_state_create_info(
	 VkPipelineTessellationStateCreateFlags   flags_
	,uint32_t   patchControlPoints_);
};

/*	VkPipelineViewportStateCreateInfo:
extends:
	S_pipeline_viewport_w_scaling_state_create_info_NV
	S_pipeline_viewport_swizzle_state_create_info_NV
	S_pipeline_viewport_exclusive_scissor_state_create_info_NV
	S_pipeline_viewport_shading_rate_image_state_create_info_NV
	S_pipeline_viewport_coarse_sample_order_state_create_info_NV*/
typedef struct S_pipeline_viewport_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineViewportStateCreateFlags	flags;
	uint32_t	viewportCount;
/*|optional|	
len:	viewportCount*/
	const	S_viewport*	pViewports;
	uint32_t	scissorCount;
/*|optional|	
len:	scissorCount*/
	const	S_rect_2d*	pScissors;
S_pipeline_viewport_state_create_info(
	 VkPipelineViewportStateCreateFlags   flags_
	,uint32_t   viewportCount_
	,const S_viewport *      pViewports_
	,uint32_t   scissorCount_
	,const S_rect_2d *        pScissors_);
};

/*	VkPipelineRasterizationStateCreateInfo:
extends:
	S_pipeline_rasterization_state_rasterization_order_AMD
	S_pipeline_rasterization_conservative_state_create_info_EXT*/
typedef struct S_pipeline_rasterization_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineRasterizationStateCreateFlags	flags;
	VkBool32	depthClampEnable;
	VkBool32	rasterizerDiscardEnable;
/*optional (GL45)*/
	E_polygon_mode	polygonMode;
/*|optional|	*/
	VkCullModeFlags	cullMode;
	E_front_face	frontFace;
	VkBool32	depthBiasEnable;
	float	depthBiasConstantFactor;
	float	depthBiasClamp;
	float	depthBiasSlopeFactor;
	float	lineWidth;
S_pipeline_rasterization_state_create_info(
	 VkPipelineRasterizationStateCreateFlags   flags_
	,VkBool32   depthClampEnable_
	,VkBool32   rasterizerDiscardEnable_
	,E_polygon_mode  polygonMode_
	,VkCullModeFlags   cullMode_
	,E_front_face  frontFace_
	,VkBool32   depthBiasEnable_
	,float   depthBiasConstantFactor_
	,float   depthBiasClamp_
	,float   depthBiasSlopeFactor_
	,float   lineWidth_);
};

/*	VkPipelineMultisampleStateCreateInfo:
extends:
	S_pipeline_coverage_to_color_state_create_info_NV
	S_pipeline_sample_locations_state_create_info_EXT
	S_pipeline_coverage_modulation_state_create_info_NV*/
typedef struct S_pipeline_multisample_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineMultisampleStateCreateFlags	flags;
/*Number of samples used for rasterization*/
	F_sample_count	rasterizationSamples;
/*optional (GL45)*/
	VkBool32	sampleShadingEnable;
/*optional (GL45)*/
	float	minSampleShading;
/*Array of sampleMask wordsalt
len:	latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil]*/
	const	VkSampleMask*	pSampleMask;
	VkBool32	alphaToCoverageEnable;
	VkBool32	alphaToOneEnable;
S_pipeline_multisample_state_create_info(
	 VkPipelineMultisampleStateCreateFlags   flags_
	,F_sample_count  rasterizationSamples_
	,VkBool32   sampleShadingEnable_
	,float   minSampleShading_
	,const const VkSampleMask*     *    pSampleMask_
	,VkBool32   alphaToCoverageEnable_
	,VkBool32   alphaToOneEnable_);
};

/*	VkPipelineColorBlendStateCreateInfo:
extends:
	S_pipeline_color_blend_advanced_state_create_info_EXT*/
typedef struct S_pipeline_color_blend_state_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkPipelineColorBlendStateCreateFlags	flags;
	VkBool32	logicOpEnable;
	E_logic_op	logicOp;
/*# of pAttachments*/
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	S_pipeline_color_blend_attachment_state*	pAttachments;
	float	blendConstants;
S_pipeline_color_blend_state_create_info(
	 VkPipelineColorBlendStateCreateFlags   flags_
	,VkBool32   logicOpEnable_
	,E_logic_op  logicOp_
	,uint32_t   attachmentCount_
	,const S_pipeline_color_blend_attachment_state * pAttachments_
	,float [4]  blendConstants_);
};

/*	VkGraphicsPipelineCreateInfo:
extends:
	S_pipeline_discard_rectangle_state_create_info_EXT
	S_pipeline_representative_fragment_test_state_create_info_NV*/
typedef struct S_graphics_pipeline_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Pipeline creation flags*/
	VkPipelineCreateFlags	flags;
	uint32_t	stageCount;
/*One entry for each active shader stage
len:	stageCount*/
	const	S_pipeline_shader_stage_create_info*	pStages;
/*|optional|	*/
	const	S_pipeline_vertex_input_state_create_info*	pVertexInputState;
/*|optional|	*/
	const	S_pipeline_input_assembly_state_create_info*	pInputAssemblyState;
/*|optional|	*/
	const	S_pipeline_tessellation_state_create_info*	pTessellationState;
/*|optional|	*/
	const	S_pipeline_viewport_state_create_info*	pViewportState;
	const	S_pipeline_rasterization_state_create_info*	pRasterizationState;
/*|optional|	*/
	const	S_pipeline_multisample_state_create_info*	pMultisampleState;
/*|optional|	*/
	const	S_pipeline_depth_stencil_state_create_info*	pDepthStencilState;
/*|optional|	*/
	const	S_pipeline_color_blend_state_create_info*	pColorBlendState;
/*|optional|	*/
	const	S_pipeline_dynamic_state_create_info*	pDynamicState;
/*Interface layout of the pipeline*/
	VkPipelineLayout	layout;
	VkRenderPass	renderPass;
	uint32_t	subpass;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline	basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t	basePipelineIndex;
S_graphics_pipeline_create_info(
	 VkPipelineCreateFlags   flags_
	,uint32_t   stageCount_
	,const S_pipeline_shader_stage_create_info * pStages_
	,const S_pipeline_vertex_input_state_create_info * pVertexInputState_
	,const S_pipeline_input_assembly_state_create_info * pInputAssemblyState_
	,const S_pipeline_tessellation_state_create_info * pTessellationState_
	,const S_pipeline_viewport_state_create_info * pViewportState_
	,const S_pipeline_rasterization_state_create_info * pRasterizationState_
	,const S_pipeline_multisample_state_create_info * pMultisampleState_
	,const S_pipeline_depth_stencil_state_create_info * pDepthStencilState_
	,const S_pipeline_color_blend_state_create_info * pColorBlendState_
	,const S_pipeline_dynamic_state_create_info * pDynamicState_
	,VkPipelineLayout   layout_
	,VkRenderPass   renderPass_
	,uint32_t   subpass_
	,VkPipeline   basePipelineHandle_
	,int32_t   basePipelineIndex_);
};

/*	VkSamplerCreateInfo:
extends:
	S_sampler_ycbcr_conversion_info
	S_sampler_reduction_mode_create_info_EXT*/
typedef struct S_sampler_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkSamplerCreateFlags	flags;
/*Filter mode for magnification*/
	E_filter	magFilter;
/*Filter mode for minifiation*/
	E_filter	minFilter;
/*Mipmap selection mode*/
	E_sampler_mipmap_mode	mipmapMode;
	E_sampler_address_mode	addressModeU;
	E_sampler_address_mode	addressModeV;
	E_sampler_address_mode	addressModeW;
	float	mipLodBias;
	VkBool32	anisotropyEnable;
	float	maxAnisotropy;
	VkBool32	compareEnable;
	E_compare_op	compareOp;
	float	minLod;
	float	maxLod;
	E_border_color	borderColor;
	VkBool32	unnormalizedCoordinates;
S_sampler_create_info(
	 VkSamplerCreateFlags   flags_
	,E_filter  magFilter_
	,E_filter  minFilter_
	,E_sampler_mipmap_mode  mipmapMode_
	,E_sampler_address_mode  addressModeU_
	,E_sampler_address_mode  addressModeV_
	,E_sampler_address_mode  addressModeW_
	,float   mipLodBias_
	,VkBool32   anisotropyEnable_
	,float   maxAnisotropy_
	,VkBool32   compareEnable_
	,E_compare_op  compareOp_
	,float   minLod_
	,float   maxLod_
	,E_border_color  borderColor_
	,VkBool32   unnormalizedCoordinates_);
};

/*	VkCommandBufferInheritanceInfo:
extends:
	S_command_buffer_inheritance_conditional_rendering_info_EXT*/
typedef struct S_command_buffer_inheritance_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
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
S_command_buffer_inheritance_info(
	 VkRenderPass   renderPass_
	,uint32_t   subpass_
	,VkFramebuffer   framebuffer_
	,VkBool32   occlusionQueryEnable_
	,VkQueryControlFlags   queryFlags_
	,VkQueryPipelineStatisticFlags   pipelineStatistics_);
};

/*	VkCommandBufferBeginInfo:
extends:
	S_device_group_command_buffer_begin_info*/
typedef struct S_command_buffer_begin_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Command buffer usage flags*/
	VkCommandBufferUsageFlags	flags;
/*Pointer to inheritance info for secondary command buffers*/
	const	S_command_buffer_inheritance_info*	pInheritanceInfo;
S_command_buffer_begin_info(
	 VkCommandBufferUsageFlags   flags_
	,const S_command_buffer_inheritance_info *       pInheritanceInfo_);
};

/*	VkRenderPassBeginInfo:
extends:
	S_device_group_render_pass_begin_info
	S_render_pass_sample_locations_begin_info_EXT*/
typedef struct S_render_pass_begin_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkRenderPass	renderPass;
	VkFramebuffer	framebuffer;
	S_rect_2d	renderArea;
/*|optional|	*/
	uint32_t	clearValueCount;
/*
len:	clearValueCount*/
	const	VkClearValue*	pClearValues;
S_render_pass_begin_info(
	 VkRenderPass   renderPass_
	,VkFramebuffer   framebuffer_
	,S_rect_2d  renderArea_
	,uint32_t   clearValueCount_
	,const const VkClearValue*     *    pClearValues_);
};

/*	VkRenderPassCreateInfo:
extends:
	S_render_pass_multiview_create_info
	S_render_pass_input_attachment_aspect_create_info*/
typedef struct S_render_pass_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkRenderPassCreateFlags	flags;
/*|optional|	*/
	uint32_t	attachmentCount;
/*
len:	attachmentCount*/
	const	S_attachment_description*	pAttachments;
	uint32_t	subpassCount;
/*
len:	subpassCount*/
	const	S_subpass_description*	pSubpasses;
/*|optional|	*/
	uint32_t	dependencyCount;
/*
len:	dependencyCount*/
	const	S_subpass_dependency*	pDependencies;
S_render_pass_create_info(
	 VkRenderPassCreateFlags   flags_
	,uint32_t   attachmentCount_
	,const S_attachment_description * pAttachments_
	,uint32_t   subpassCount_
	,const S_subpass_description * pSubpasses_
	,uint32_t   dependencyCount_
	,const S_subpass_dependency * pDependencies_);
};

/*	VkFenceCreateInfo:
extends:
	S_export_fence_create_info
	S_export_fence_win32_handle_info_KHR*/
typedef struct S_fence_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Fence creation flags*/
	VkFenceCreateFlags	flags;
S_fence_create_info(
	 VkFenceCreateFlags   flags_);
};

/*	VkSemaphoreCreateInfo:
extends:
	S_export_semaphore_create_info
	S_export_semaphore_win32_handle_info_KHR*/
typedef struct S_semaphore_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*Semaphore creation flags*/
	VkSemaphoreCreateFlags	flags;
S_semaphore_create_info(
	 VkSemaphoreCreateFlags   flags_);
};

/*	VkSubmitInfo:
extends:
	S_win32_keyed_mutex_acquire_release_info_NV
	S_win32_keyed_mutex_acquire_release_info_KHR
	S_d_3d12_fence_submit_info_KHR
	S_device_group_submit_info
	S_protected_submit_info*/
typedef struct S_submit_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	uint32_t	waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const	VkSemaphore*	pWaitSemaphores;
/*
len:	waitSemaphoreCount*/
	const	VkPipelineStageFlags*	pWaitDstStageMask;
/*|optional|	*/
	uint32_t	commandBufferCount;
/*
len:	commandBufferCount*/
	const	VkCommandBuffer*	pCommandBuffers;
/*|optional|	*/
	uint32_t	signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const	VkSemaphore*	pSignalSemaphores;
S_submit_info(
	 uint32_t   waitSemaphoreCount_
	,const const VkSemaphore*      *     pWaitSemaphores_
	,const const VkPipelineStageFlags*            *           pWaitDstStageMask_
	,uint32_t   commandBufferCount_
	,const const VkCommandBuffer*      *     pCommandBuffers_
	,uint32_t   signalSemaphoreCount_
	,const const VkSemaphore*      *     pSignalSemaphores_);
};

/*	VkSwapchainCreateInfoKHR:
extends:
	S_swapchain_counter_create_info_EXT
	S_device_group_swapchain_create_info_KHR*/
typedef struct S_swapchain_create_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkSwapchainCreateFlagsKHR	flags;
/*The swapchain's target surface*/
	VkSurfaceKHR	surface;
/*Minimum number of presentation images the application needs*/
	uint32_t	minImageCount;
/*Format of the presentation images*/
	E_format	imageFormat;
/*Colorspace of the presentation images*/
	E_color_space_KHR	imageColorSpace;
/*Dimensions of the presentation images*/
	S_extent_2d	imageExtent;
/*Determines the number of views for multiview/stereo presentation*/
	uint32_t	imageArrayLayers;
/*Bits indicating how the presentation images will be used*/
	VkImageUsageFlags	imageUsage;
/*Sharing mode used for the presentation images*/
	E_sharing_mode	imageSharingMode;
/*Number of queue families having access to the images in case of concurrent sharing mode*/
	uint32_t	queueFamilyIndexCount;
/*Array of queue family indices having access to the images in case of concurrent sharing mode
len:	queueFamilyIndexCount*/
	const	uint32_t*	pQueueFamilyIndices;
/*The transform, relative to the device's natural orientation, applied to the image content prior to presentation*/
	F_surface_transform_khr	preTransform;
/*The alpha blending mode used when compositing this surface with other surfaces in the window system*/
	F_composite_alpha_khr	compositeAlpha;
/*Which presentation mode to use for presents on this swap chain*/
	E_present_mode_KHR	presentMode;
/*Specifies whether presentable images may be affected by window clip regions*/
	VkBool32	clipped;
/*Existing swap chain to replace, if any*/
	VkSwapchainKHR	oldSwapchain;
S_swapchain_create_info_KHR(
	 VkSwapchainCreateFlagsKHR   flags_
	,VkSurfaceKHR   surface_
	,uint32_t   minImageCount_
	,E_format  imageFormat_
	,E_color_space_KHR  imageColorSpace_
	,S_extent_2d  imageExtent_
	,uint32_t   imageArrayLayers_
	,VkImageUsageFlags   imageUsage_
	,E_sharing_mode  imageSharingMode_
	,uint32_t   queueFamilyIndexCount_
	,const const uint32_t*                   *                  pQueueFamilyIndices_
	,F_surface_transform_khr  preTransform_
	,F_composite_alpha_khr  compositeAlpha_
	,E_present_mode_KHR  presentMode_
	,VkBool32   clipped_
	,VkSwapchainKHR   oldSwapchain_);
};

/*	VkPresentInfoKHR:
extends:
	S_display_present_info_KHR
	S_present_regions_KHR
	S_device_group_present_info_KHR
	S_present_times_info_GOOGLE*/
typedef struct S_present_info_KHR{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
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
	E_result*	pResults;
S_present_info_KHR(
	 uint32_t   waitSemaphoreCount_
	,const const VkSemaphore*  * pWaitSemaphores_
	,uint32_t   swapchainCount_
	,const const VkSwapchainKHR*  * pSwapchains_
	,const const uint32_t*  * pImageIndices_
	,E_result * pResults_);
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
typedef struct S_physical_device_features2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_physical_device_features	features;
S_physical_device_features2(
	 S_physical_device_features  features_);
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
typedef struct S_physical_device_properties2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_physical_device_properties	properties;
S_physical_device_properties2(
	 S_physical_device_properties  properties_);
};

/*	VkFormatProperties2:
returnd only
extends:
	S_drm_format_modifier_properties_list_EXT*/
typedef struct S_format_properties2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_format_properties	formatProperties;
S_format_properties2(
	 S_format_properties  formatProperties_);
};

/*	VkImageFormatProperties2:
returnd only
extends:
	S_external_image_format_properties
	S_sampler_ycbcr_conversion_image_format_properties
	S_texture_lod_gather_format_properties_AMD
	S_android_hardware_buffer_usage_ANDROID*/
typedef struct S_image_format_properties2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_image_format_properties	imageFormatProperties;
S_image_format_properties2(
	 S_image_format_properties  imageFormatProperties_);
};

/*	VkPhysicalDeviceImageFormatInfo2:
extends:
	S_physical_device_external_image_format_info
	S_physical_device_image_drm_format_modifier_info_EXT*/
typedef struct S_physical_device_image_format_info2{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_format	format;
	E_image_type	type;
	E_image_tiling	tiling;
	VkImageUsageFlags	usage;
/*|optional|	*/
	VkImageCreateFlags	flags;
S_physical_device_image_format_info2(
	 E_format  format_
	,E_image_type  type_
	,E_image_tiling  tiling_
	,VkImageUsageFlags   usage_
	,VkImageCreateFlags   flags_);
};

/*	VkQueueFamilyProperties2:
returnd only
extends:
	S_queue_family_checkpoint_properties_NV*/
typedef struct S_queue_family_properties2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_queue_family_properties	queueFamilyProperties;
S_queue_family_properties2(
	 S_queue_family_properties  queueFamilyProperties_);
};

/*	VkBindBufferMemoryInfo:
extends:
	S_bind_buffer_memory_device_group_info*/
typedef struct S_bind_buffer_memory_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkBuffer	buffer;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
S_bind_buffer_memory_info(
	 VkBuffer   buffer_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_);
};

/*	VkBindImageMemoryInfo:
extends:
	S_bind_image_memory_device_group_info
	S_bind_image_memory_swapchain_info_KHR
	S_bind_image_plane_memory_info*/
typedef struct S_bind_image_memory_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkImage	image;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
S_bind_image_memory_info(
	 VkImage   image_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_);
};

/*	VkSurfaceCapabilities2KHR:
returnd only
extends:
	S_shared_present_surface_capabilities_KHR*/
typedef struct S_surface_capabilities2_KHR{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_surface_capabilities_KHR	surfaceCapabilities;
S_surface_capabilities2_KHR(
	 S_surface_capabilities_KHR  surfaceCapabilities_);
};

/*	VkImageMemoryRequirementsInfo2:
extends:
	S_image_plane_memory_requirements_info*/
typedef struct S_image_memory_requirements_info2{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	VkImage	image;
S_image_memory_requirements_info2(
	 VkImage   image_);
};

/*	VkMemoryRequirements2:
returnd only
extends:
	S_memory_dedicated_requirements*/
typedef struct S_memory_requirements2{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	S_memory_requirements	memoryRequirements;
S_memory_requirements2(
	 S_memory_requirements  memoryRequirements_);
};

/*	VkSamplerYcbcrConversionCreateInfo:
extends:
	S_external_format_ANDROID*/
typedef struct S_sampler_ycbcr_conversion_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
	E_format	format;
	E_sampler_ycbcr_model_conversion	ycbcrModel;
	E_sampler_ycbcr_range	ycbcrRange;
	S_component_mapping	components;
	E_chroma_location	xChromaOffset;
	E_chroma_location	yChromaOffset;
	E_filter	chromaFilter;
	VkBool32	forceExplicitReconstruction;
S_sampler_ycbcr_conversion_create_info(
	 E_format  format_
	,E_sampler_ycbcr_model_conversion  ycbcrModel_
	,E_sampler_ycbcr_range  ycbcrRange_
	,S_component_mapping  components_
	,E_chroma_location  xChromaOffset_
	,E_chroma_location  yChromaOffset_
	,E_filter  chromaFilter_
	,VkBool32   forceExplicitReconstruction_);
};

/*	VkDescriptorSetLayoutSupport:
returnd only
extends:
	S_descriptor_set_variable_descriptor_count_layout_support_EXT*/
typedef struct S_descriptor_set_layout_support{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkBool32	supported;
S_descriptor_set_layout_support(
	 VkBool32   supported_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidHardwareBufferPropertiesANDROID:
returnd only
extends:
	S_android_hardware_buffer_format_properties_ANDROID*/
typedef struct S_android_hardware_buffer_properties_ANDROID{
private:
	E_structure_type	sType;
	void*	pNext;
public:
	VkDeviceSize	allocationSize;
	uint32_t	memoryTypeBits;
S_android_hardware_buffer_properties_ANDROID(
	 VkDeviceSize   allocationSize_
	,uint32_t   memoryTypeBits_);
};

#endif

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
typedef struct S_device_create_info{
private:
	E_structure_type	sType;
	const	void*	pNext;
public:
/*|optional|	*/
	VkDeviceCreateFlags	flags;
	uint32_t	queueCreateInfoCount;
/*
len:	queueCreateInfoCount*/
	const	S_device_queue_create_info*	pQueueCreateInfos;
/*|optional|	*/
	uint32_t	enabledLayerCount;
/*Ordered list of layer names to be enabled
len:	enabledLayerCount,null-terminated*/
	const	char*	const*	ppEnabledLayerNames;
/*|optional|	*/
	uint32_t	enabledExtensionCount;
/*
len:	enabledExtensionCount,null-terminated*/
	const	char*	const*	ppEnabledExtensionNames;
/*|optional|	*/
	const	S_physical_device_features*	pEnabledFeatures;
S_device_create_info(
	 VkDeviceCreateFlags   flags_
	,uint32_t   queueCreateInfoCount_
	,const S_device_queue_create_info * pQueueCreateInfos_
	,uint32_t   enabledLayerCount_
	,const const char* const*       * const*      ppEnabledLayerNames_
	,uint32_t   enabledExtensionCount_
	,const const char* const*       * const*      ppEnabledExtensionNames_
	,const S_physical_device_features * pEnabledFeatures_);
};


//449
}}

