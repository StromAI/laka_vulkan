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
#include <array>
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
	int32_t x;
	int32_t y;
};

/*	VkOffset3D:*/
typedef struct S_offset_3d{
	int32_t x;
	int32_t y;
	int32_t z;
};

/*	VkExtent2D:*/
typedef struct S_extent_2d{
	uint32_t width;
	uint32_t height;
};

/*	VkExtent3D:*/
typedef struct S_extent_3d{
	uint32_t width;
	uint32_t height;
	uint32_t depth;
};

/*	VkViewport:*/
typedef struct S_viewport{
	float x;
	float y;
	float width;
	float height;
	float minDepth;
	float maxDepth;
};

/*	VkRect2D:*/
typedef struct S_rect_2d{
	S_offset_2d offset;
	S_extent_2d extent;
};

/*	VkClearRect:*/
typedef struct S_clear_rect{
	S_rect_2d rect;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};

/*	VkComponentMapping:*/
typedef struct S_component_mapping{
	E_component_swizzle r;
	E_component_swizzle g;
	E_component_swizzle b;
	E_component_swizzle a;
};

/*	VkExtensionProperties:
returnd only*/
typedef struct S_extension_properties{
/*extension name*/
	char extensionName[VK_MAX_EXTENSION_NAME_SIZE];
/*version of the extension specification implemented*/
	uint32_t specVersion;
};

/*	VkLayerProperties:
returnd only*/
typedef struct S_layer_properties{
/*layer name*/
	char layerName[VK_MAX_EXTENSION_NAME_SIZE];
/*version of the layer specification implemented*/
	uint32_t specVersion;
/*build or release version of the layer's library*/
	uint32_t implementationVersion;
/*Free-form description of the layer*/
	char description[VK_MAX_DESCRIPTION_SIZE];
};

/*	VkAllocationCallbacks:*/
typedef struct S_allocation_callbacks{
/*|optional|	*/
	void* pUserData;
	PFN_vkAllocationFunction pfnAllocation;
	PFN_vkReallocationFunction pfnReallocation;
	PFN_vkFreeFunction pfnFree;
/*|optional|	*/
	PFN_vkInternalAllocationNotification pfnInternalAllocation;
/*|optional|	*/
	PFN_vkInternalFreeNotification pfnInternalFree;
};

/*	VkQueueFamilyProperties:
returnd only*/
typedef struct S_queue_family_properties{
/*Queue flags*/
	F_queue queueFlags;
	uint32_t queueCount;
	uint32_t timestampValidBits;
/*Minimum alignment requirement for image transfers*/
	S_extent_3d minImageTransferGranularity;
};

/*	VkPhysicalDeviceMemoryProperties:
returnd only*/
typedef struct S_physical_device_memory_properties{
	uint32_t memoryTypeCount;
	S_memory_type memoryTypes[VK_MAX_MEMORY_TYPES];
	uint32_t memoryHeapCount;
	S_memory_heap memoryHeaps[VK_MAX_MEMORY_HEAPS];
};

/*	VkMemoryRequirements:
returnd only*/
typedef struct S_memory_requirements{
/*Specified in bytes*/
	VkDeviceSize size;
/*Specified in bytes*/
	VkDeviceSize alignment;
/*Bitmask of the allowed memory type indices into memoryTypes[] for this object*/
	uint32_t memoryTypeBits;
};

/*	VkSparseImageFormatProperties:
returnd only*/
typedef struct S_sparse_image_format_properties{
/*|optional|	*/
	F_image_aspect aspectMask;
	S_extent_3d imageGranularity;
/*|optional|	*/
	F_sparse_image_format flags;
};

/*	VkSparseImageMemoryRequirements:
returnd only*/
typedef struct S_sparse_image_memory_requirements{
	S_sparse_image_format_properties formatProperties;
	uint32_t imageMipTailFirstLod;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize imageMipTailSize;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize imageMipTailOffset;
/*Specified in bytes, must be a multiple of sparse block size in bytes / alignment*/
	VkDeviceSize imageMipTailStride;
};

/*	VkMemoryType:
returnd only*/
typedef struct S_memory_type{
/*Memory properties of this memory type*/
	F_memory_property propertyFlags;
/*Index of the memory heap allocations of this memory type are taken from*/
	uint32_t heapIndex;
};

/*	VkMemoryHeap:
returnd only*/
typedef struct S_memory_heap{
/*Available memory in the heap*/
	VkDeviceSize size;
/*Flags for the heap*/
	F_memory_heap flags;
};

/*	VkFormatProperties:
returnd only*/
typedef struct S_format_properties{
/*Format features in case of linear tiling*/
	F_format_feature linearTilingFeatures;
/*Format features in case of optimal tiling*/
	F_format_feature optimalTilingFeatures;
/*Format features supported by buffers*/
	F_format_feature bufferFeatures;
};

/*	VkImageFormatProperties:
returnd only*/
typedef struct S_image_format_properties{
/*max image dimensions for this resource type*/
	S_extent_3d maxExtent;
/*max number of mipmap levels for this resource type*/
	uint32_t maxMipLevels;
/*max array size for this resource type*/
	uint32_t maxArrayLayers;
/*supported sample counts for this resource type*/
	F_sample_count sampleCounts;
/*max size (in bytes) of this resource type*/
	VkDeviceSize maxResourceSize;
};

/*	VkDescriptorBufferInfo:*/
typedef struct S_descriptor_buffer_info{
/*Buffer used for this descriptor slot.*/
	VkBuffer buffer;
/*Base offset from buffer start in bytes to update in the descriptor set.*/
	VkDeviceSize offset;
/*Size in bytes of the buffer resource for this descriptor update.*/
	VkDeviceSize range;
};

/*	VkDescriptorImageInfo:*/
typedef struct S_descriptor_image_info{
/*Sampler to write to the descriptor in case it is a SAMPLER or COMBINED_IMAGE_SAMPLER descriptor. Ignored otherwise.*/
	VkSampler sampler;
/*Image view to write to the descriptor in case it is a SAMPLED_IMAGE, STORAGE_IMAGE, COMBINED_IMAGE_SAMPLER, or INPUT_ATTACHMENT descriptor. Ignored otherwise.*/
	VkImageView imageView;
/*Layout the image is expected to be in when accessed using this descriptor (only used if imageView is not VK_NULL_HANDLE).*/
	E_image_layout imageLayout;
};

/*	VkImageSubresource:*/
typedef struct S_image_subresource{
	F_image_aspect aspectMask;
	uint32_t mipLevel;
	uint32_t arrayLayer;
};

/*	VkImageSubresourceLayers:*/
typedef struct S_image_subresource_layers{
	F_image_aspect aspectMask;
	uint32_t mipLevel;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};

/*	VkImageSubresourceRange:*/
typedef struct S_image_subresource_range{
	F_image_aspect aspectMask;
	uint32_t baseMipLevel;
	uint32_t levelCount;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};

/*	VkSubresourceLayout:
returnd only*/
typedef struct S_subresource_layout{
/*Specified in bytes*/
	VkDeviceSize offset;
/*Specified in bytes*/
	VkDeviceSize size;
/*Specified in bytes*/
	VkDeviceSize rowPitch;
/*Specified in bytes*/
	VkDeviceSize arrayPitch;
/*Specified in bytes*/
	VkDeviceSize depthPitch;
};

/*	VkBufferCopy:*/
typedef struct S_buffer_copy{
/*Specified in bytes*/
	VkDeviceSize srcOffset;
/*Specified in bytes*/
	VkDeviceSize dstOffset;
/*Specified in bytes*/
	VkDeviceSize size;
};

/*	VkSparseMemoryBind:*/
typedef struct S_sparse_memory_bind{
/*Specified in bytes*/
	VkDeviceSize resourceOffset;
/*Specified in bytes*/
	VkDeviceSize size;
/*|optional|	*/
	VkDeviceMemory memory;
/*Specified in bytes*/
	VkDeviceSize memoryOffset;
/*|optional|	*/
	F_sparse_memory_bind flags;
};

/*	VkSparseImageMemoryBind:*/
typedef struct S_sparse_image_memory_bind{
	S_image_subresource subresource;
	S_offset_3d offset;
	S_extent_3d extent;
/*|optional|	*/
	VkDeviceMemory memory;
/*Specified in bytes*/
	VkDeviceSize memoryOffset;
/*|optional|	*/
	F_sparse_memory_bind flags;
};

/*	VkSparseBufferMemoryBindInfo:*/
typedef struct S_sparse_buffer_memory_bind_info{
	VkBuffer buffer;
	uint32_t bindCount;
/*
len:	bindCount*/
	const S_sparse_memory_bind* pBinds;
};

/*	VkSparseImageOpaqueMemoryBindInfo:*/
typedef struct S_sparse_image_opaque_memory_bind_info{
	VkImage image;
	uint32_t bindCount;
/*
len:	bindCount*/
	const S_sparse_memory_bind* pBinds;
};

/*	VkSparseImageMemoryBindInfo:*/
typedef struct S_sparse_image_memory_bind_info{
	VkImage image;
	uint32_t bindCount;
/*
len:	bindCount*/
	const S_sparse_image_memory_bind* pBinds;
};

/*	VkImageCopy:*/
typedef struct S_image_copy{
	S_image_subresource_layers srcSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d srcOffset;
	S_image_subresource_layers dstSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d dstOffset;
/*Specified in pixels for both compressed and uncompressed images*/
	S_extent_3d extent;
};

/*	VkImageBlit:*/
typedef struct S_image_blit{
	S_image_subresource_layers srcSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d srcOffsets[2];
	S_image_subresource_layers dstSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d dstOffsets[2];
};

/*	VkBufferImageCopy:*/
typedef struct S_buffer_image_copy{
/*Specified in bytes*/
	VkDeviceSize bufferOffset;
/*Specified in texels*/
	uint32_t bufferRowLength;
	uint32_t bufferImageHeight;
	S_image_subresource_layers imageSubresource;
/*Specified in pixels for both compressed and uncompressed images*/
	S_offset_3d imageOffset;
/*Specified in pixels for both compressed and uncompressed images*/
	S_extent_3d imageExtent;
};

/*	VkImageResolve:*/
typedef struct S_image_resolve{
	S_image_subresource_layers srcSubresource;
	S_offset_3d srcOffset;
	S_image_subresource_layers dstSubresource;
	S_offset_3d dstOffset;
	S_extent_3d extent;
};

/*	VkDescriptorSetLayoutBinding:*/
typedef struct S_descriptor_set_layout_binding{
/*Binding number for this entry*/
	uint32_t binding;
/*Type of the descriptors in this binding*/
	E_descriptor_type descriptorType;
/*Number of descriptors in this binding*/
	uint32_t descriptorCount;
/*Shader stages this binding is visible to*/
	F_shader_stage stageFlags;
/*Immutable samplers (used if descriptor type is SAMPLER or COMBINED_IMAGE_SAMPLER, is either NULL or contains count number of elements)
len:	descriptorCount*/
	const VkSampler* pImmutableSamplers;
};

/*	VkDescriptorPoolSize:*/
typedef struct S_descriptor_pool_size{
	E_descriptor_type type;
	uint32_t descriptorCount;
};

/*	VkSpecializationMapEntry:*/
typedef struct S_specialization_map_entry{
/*The SpecConstant ID specified in the BIL*/
	uint32_t constantID;
/*Offset of the value in the data block*/
	uint32_t offset;
/*Size in bytes of the SpecConstant*/
	size_t size;
};

/*	VkSpecializationInfo:*/
typedef struct S_specialization_info{
/*Number of entries in the map*/
	uint32_t mapEntryCount;
/*Array of map entries
len:	mapEntryCount*/
	const S_specialization_map_entry* pMapEntries;
/*Size in bytes of pData*/
	size_t dataSize;
/*Pointer to SpecConstant data
len:	dataSize*/
	const void* pData;
};

/*	VkVertexInputBindingDescription:*/
typedef struct S_vertex_input_binding_description{
/*Vertex buffer binding id*/
	uint32_t binding;
/*Distance between vertices in bytes (0 = no advancement)*/
	uint32_t stride;
/*The rate at which the vertex data is consumed*/
	E_vertex_input_rate inputRate;
};

/*	VkVertexInputAttributeDescription:*/
typedef struct S_vertex_input_attribute_description{
/*location of the shader vertex attrib*/
	uint32_t location;
/*Vertex buffer binding id*/
	uint32_t binding;
/*format of source data*/
	E_format format;
/*Offset of first element in bytes from base of vertex*/
	uint32_t offset;
};

/*	VkPipelineColorBlendAttachmentState:*/
typedef struct S_pipeline_color_blend_attachment_state{
	VkBool32 blendEnable;
	E_blend_factor srcColorBlendFactor;
	E_blend_factor dstColorBlendFactor;
	E_blend_op colorBlendOp;
	E_blend_factor srcAlphaBlendFactor;
	E_blend_factor dstAlphaBlendFactor;
	E_blend_op alphaBlendOp;
/*|optional|	*/
	F_color_component colorWriteMask;
};

/*	VkStencilOpState:*/
typedef struct S_stencil_op_state{
	E_stencil_op failOp;
	E_stencil_op passOp;
	E_stencil_op depthFailOp;
	E_compare_op compareOp;
	uint32_t compareMask;
	uint32_t writeMask;
	uint32_t reference;
};

/*	VkPushConstantRange:*/
typedef struct S_push_constant_range{
/*Which stages use the range*/
	F_shader_stage stageFlags;
/*Start of the range, in bytes*/
	uint32_t offset;
/*Size of the range, in bytes*/
	uint32_t size;
};

/*	VkClearDepthStencilValue:*/
typedef struct S_clear_depth_stencil_value{
	float depth;
	uint32_t stencil;
};

/*	VkClearAttachment:*/
typedef struct S_clear_attachment{
	F_image_aspect aspectMask;
	uint32_t colorAttachment;
	VkClearValue clearValue;
};

/*	VkAttachmentDescription:*/
typedef struct S_attachment_description{
/*|optional|	*/
	F_attachment_description flags;
	E_format format;
	F_sample_count samples;
/*Load operation for color or depth data*/
	E_attachment_load_op loadOp;
/*Store operation for color or depth data*/
	E_attachment_store_op storeOp;
/*Load operation for stencil data*/
	E_attachment_load_op stencilLoadOp;
/*Store operation for stencil data*/
	E_attachment_store_op stencilStoreOp;
	E_image_layout initialLayout;
	E_image_layout finalLayout;
};

/*	VkAttachmentReference:*/
typedef struct S_attachment_reference{
	uint32_t attachment;
	E_image_layout layout;
};

/*	VkSubpassDescription:*/
typedef struct S_subpass_description{
/*|optional|	*/
	F_subpass_description flags;
/*Must be VK_PIPELINE_BIND_POINT_GRAPHICS for now*/
	E_pipeline_bind_point pipelineBindPoint;
/*|optional|	*/
	uint32_t inputAttachmentCount;
/*
len:	inputAttachmentCount*/
	const S_attachment_reference* pInputAttachments;
/*|optional|	*/
	uint32_t colorAttachmentCount;
/*
len:	colorAttachmentCount*/
	const S_attachment_reference* pColorAttachments;
/*|optional|	
len:	colorAttachmentCount*/
	const S_attachment_reference* pResolveAttachments;
/*|optional|	*/
	const S_attachment_reference* pDepthStencilAttachment;
/*|optional|	*/
	uint32_t preserveAttachmentCount;
/*
len:	preserveAttachmentCount*/
	const uint32_t* pPreserveAttachments;
};

/*	VkSubpassDependency:*/
typedef struct S_subpass_dependency{
	uint32_t srcSubpass;
	uint32_t dstSubpass;
	F_pipeline_stage srcStageMask;
	F_pipeline_stage dstStageMask;
/*Memory accesses from the source of the dependency to synchronize*/
	F_access srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	F_access dstAccessMask;
/*|optional|	*/
	F_dependency dependencyFlags;
};

/*	VkPhysicalDeviceFeatures:*/
typedef struct S_physical_device_features{
/*out of bounds buffer accesses are well defined*/
	VkBool32 robustBufferAccess;
/*full 32-bit range of indices for indexed draw calls*/
	VkBool32 fullDrawIndexUint32;
/*image views which are arrays of cube maps*/
	VkBool32 imageCubeArray;
/*blending operations are controlled per-attachment*/
	VkBool32 independentBlend;
/*geometry stage*/
	VkBool32 geometryShader;
/*tessellation control and evaluation stage*/
	VkBool32 tessellationShader;
/*per-sample shading and interpolation*/
	VkBool32 sampleRateShading;
/*blend operations which take two sources*/
	VkBool32 dualSrcBlend;
/*logic operations*/
	VkBool32 logicOp;
/*multi draw indirect*/
	VkBool32 multiDrawIndirect;
/*indirect draws can use non-zero firstInstance*/
	VkBool32 drawIndirectFirstInstance;
/*depth clamping*/
	VkBool32 depthClamp;
/*depth bias clamping*/
	VkBool32 depthBiasClamp;
/*point and wireframe fill modes*/
	VkBool32 fillModeNonSolid;
/*depth bounds test*/
	VkBool32 depthBounds;
/*lines with width greater than 1*/
	VkBool32 wideLines;
/*points with size greater than 1*/
	VkBool32 largePoints;
/*the fragment alpha component can be forced to maximum representable alpha value*/
	VkBool32 alphaToOne;
/*viewport arrays*/
	VkBool32 multiViewport;
/*anisotropic sampler filtering*/
	VkBool32 samplerAnisotropy;
/*ETC texture compression formats*/
	VkBool32 textureCompressionETC2;
/*ASTC LDR texture compression formats*/
	VkBool32 textureCompressionASTC_LDR;
/*BC1-7 texture compressed formats*/
	VkBool32 textureCompressionBC;
/*precise occlusion queries returning actual sample counts*/
	VkBool32 occlusionQueryPrecise;
/*pipeline statistics query*/
	VkBool32 pipelineStatisticsQuery;
/*stores and atomic ops on storage buffers and images are supported in vertex, tessellation, and geometry stages*/
	VkBool32 vertexPipelineStoresAndAtomics;
/*stores and atomic ops on storage buffers and images are supported in the fragment stage*/
	VkBool32 fragmentStoresAndAtomics;
/*tessellation and geometry stages can export point size*/
	VkBool32 shaderTessellationAndGeometryPointSize;
/*image gather with run-time values and independent offsets*/
	VkBool32 shaderImageGatherExtended;
/*the extended set of formats can be used for storage images*/
	VkBool32 shaderStorageImageExtendedFormats;
/*multisample images can be used for storage images*/
	VkBool32 shaderStorageImageMultisample;
/*read from storage image does not require format qualifier*/
	VkBool32 shaderStorageImageReadWithoutFormat;
/*write to storage image does not require format qualifier*/
	VkBool32 shaderStorageImageWriteWithoutFormat;
/*arrays of uniform buffers can be accessed with dynamically uniform indices*/
	VkBool32 shaderUniformBufferArrayDynamicIndexing;
/*arrays of sampled images can be accessed with dynamically uniform indices*/
	VkBool32 shaderSampledImageArrayDynamicIndexing;
/*arrays of storage buffers can be accessed with dynamically uniform indices*/
	VkBool32 shaderStorageBufferArrayDynamicIndexing;
/*arrays of storage images can be accessed with dynamically uniform indices*/
	VkBool32 shaderStorageImageArrayDynamicIndexing;
/*clip distance in shaders*/
	VkBool32 shaderClipDistance;
/*cull distance in shaders*/
	VkBool32 shaderCullDistance;
/*64-bit floats (doubles) in shaders*/
	VkBool32 shaderFloat64;
/*64-bit integers in shaders*/
	VkBool32 shaderInt64;
/*16-bit integers in shaders*/
	VkBool32 shaderInt16;
/*shader can use texture operations that return resource residency information (requires sparseNonResident support)*/
	VkBool32 shaderResourceResidency;
/*shader can use texture operations that specify minimum resource LOD*/
	VkBool32 shaderResourceMinLod;
/*Sparse resources support: Resource memory can be managed at opaque page level rather than object level*/
	VkBool32 sparseBinding;
/*Sparse resources support: GPU can access partially resident buffers */
	VkBool32 sparseResidencyBuffer;
/*Sparse resources support: GPU can access partially resident 2D (non-MSAA non-depth/stencil) images */
	VkBool32 sparseResidencyImage2D;
/*Sparse resources support: GPU can access partially resident 3D images */
	VkBool32 sparseResidencyImage3D;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 2 samples*/
	VkBool32 sparseResidency2Samples;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 4 samples*/
	VkBool32 sparseResidency4Samples;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 8 samples*/
	VkBool32 sparseResidency8Samples;
/*Sparse resources support: GPU can access partially resident MSAA 2D images with 16 samples*/
	VkBool32 sparseResidency16Samples;
/*Sparse resources support: GPU can correctly access data aliased into multiple locations (opt-in)*/
	VkBool32 sparseResidencyAliased;
/*multisample rate must be the same for all pipelines in a subpass*/
	VkBool32 variableMultisampleRate;
/*Queries may be inherited from primary to secondary command buffers*/
	VkBool32 inheritedQueries;
};

/*	VkPhysicalDeviceSparseProperties:
returnd only*/
typedef struct S_physical_device_sparse_properties{
/*Sparse resources support: GPU will access all 2D (single sample) sparse resources using the standard sparse image block shapes (based on pixel format)*/
	VkBool32 residencyStandard2DBlockShape;
/*Sparse resources support: GPU will access all 2D (multisample) sparse resources using the standard sparse image block shapes (based on pixel format)*/
	VkBool32 residencyStandard2DMultisampleBlockShape;
/*Sparse resources support: GPU will access all 3D sparse resources using the standard sparse image block shapes (based on pixel format)*/
	VkBool32 residencyStandard3DBlockShape;
/*Sparse resources support: Images with mip level dimensions that are NOT a multiple of the sparse image block dimensions will be placed in the mip tail*/
	VkBool32 residencyAlignedMipSize;
/*Sparse resources support: GPU can consistently access non-resident regions of a resource, all reads return as if data is 0, writes are discarded*/
	VkBool32 residencyNonResidentStrict;
};

/*	VkPhysicalDeviceLimits:
returnd only*/
typedef struct S_physical_device_limits{
/*max 1D image dimension*/
	uint32_t maxImageDimension1D;
/*max 2D image dimension*/
	uint32_t maxImageDimension2D;
/*max 3D image dimension*/
	uint32_t maxImageDimension3D;
/*max cubemap image dimension*/
	uint32_t maxImageDimensionCube;
/*max layers for image arrays*/
	uint32_t maxImageArrayLayers;
/*max texel buffer size (fstexels)*/
	uint32_t maxTexelBufferElements;
/*max uniform buffer range (bytes)*/
	uint32_t maxUniformBufferRange;
/*max storage buffer range (bytes)*/
	uint32_t maxStorageBufferRange;
/*max size of the push constants pool (bytes)*/
	uint32_t maxPushConstantsSize;
/*max number of device memory allocations supported*/
	uint32_t maxMemoryAllocationCount;
/*max number of samplers that can be allocated on a device*/
	uint32_t maxSamplerAllocationCount;
/*Granularity (in bytes) at which buffers and images can be bound to adjacent memory for simultaneous usage*/
	VkDeviceSize bufferImageGranularity;
/*Total address space available for sparse allocations (bytes)*/
	VkDeviceSize sparseAddressSpaceSize;
/*max number of descriptors sets that can be bound to a pipeline*/
	uint32_t maxBoundDescriptorSets;
/*max number of samplers allowed per-stage in a descriptor set*/
	uint32_t maxPerStageDescriptorSamplers;
/*max number of uniform buffers allowed per-stage in a descriptor set*/
	uint32_t maxPerStageDescriptorUniformBuffers;
/*max number of storage buffers allowed per-stage in a descriptor set*/
	uint32_t maxPerStageDescriptorStorageBuffers;
/*max number of sampled images allowed per-stage in a descriptor set*/
	uint32_t maxPerStageDescriptorSampledImages;
/*max number of storage images allowed per-stage in a descriptor set*/
	uint32_t maxPerStageDescriptorStorageImages;
/*max number of input attachments allowed per-stage in a descriptor set*/
	uint32_t maxPerStageDescriptorInputAttachments;
/*max number of resources allowed by a single stage*/
	uint32_t maxPerStageResources;
/*max number of samplers allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetSamplers;
/*max number of uniform buffers allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetUniformBuffers;
/*max number of dynamic uniform buffers allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetUniformBuffersDynamic;
/*max number of storage buffers allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetStorageBuffers;
/*max number of dynamic storage buffers allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetStorageBuffersDynamic;
/*max number of sampled images allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetSampledImages;
/*max number of storage images allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetStorageImages;
/*max number of input attachments allowed in all stages in a descriptor set*/
	uint32_t maxDescriptorSetInputAttachments;
/*max number of vertex input attribute slots*/
	uint32_t maxVertexInputAttributes;
/*max number of vertex input binding slots*/
	uint32_t maxVertexInputBindings;
/*max vertex input attribute offset added to vertex buffer offset*/
	uint32_t maxVertexInputAttributeOffset;
/*max vertex input binding stride*/
	uint32_t maxVertexInputBindingStride;
/*max number of output components written by vertex shader*/
	uint32_t maxVertexOutputComponents;
/*max level supported by tessellation primitive generator*/
	uint32_t maxTessellationGenerationLevel;
/*max patch size (vertices)*/
	uint32_t maxTessellationPatchSize;
/*max number of input components per-vertex in TCS*/
	uint32_t maxTessellationControlPerVertexInputComponents;
/*max number of output components per-vertex in TCS*/
	uint32_t maxTessellationControlPerVertexOutputComponents;
/*max number of output components per-patch in TCS*/
	uint32_t maxTessellationControlPerPatchOutputComponents;
/*max total number of per-vertex and per-patch output components in TCS*/
	uint32_t maxTessellationControlTotalOutputComponents;
/*max number of input components per vertex in TES*/
	uint32_t maxTessellationEvaluationInputComponents;
/*max number of output components per vertex in TES*/
	uint32_t maxTessellationEvaluationOutputComponents;
/*max invocation count supported in geometry shader*/
	uint32_t maxGeometryShaderInvocations;
/*max number of input components read in geometry stage*/
	uint32_t maxGeometryInputComponents;
/*max number of output components written in geometry stage*/
	uint32_t maxGeometryOutputComponents;
/*max number of vertices that can be emitted in geometry stage*/
	uint32_t maxGeometryOutputVertices;
/*max total number of components (all vertices) written in geometry stage*/
	uint32_t maxGeometryTotalOutputComponents;
/*max number of input components read in fragment stage*/
	uint32_t maxFragmentInputComponents;
/*max number of output attachments written in fragment stage*/
	uint32_t maxFragmentOutputAttachments;
/*max number of output attachments written when using dual source blending*/
	uint32_t maxFragmentDualSrcAttachments;
/*max total number of storage buffers, storage images and output buffers*/
	uint32_t maxFragmentCombinedOutputResources;
/*max total storage size of work group local storage (bytes)*/
	uint32_t maxComputeSharedMemorySize;
/*max num of compute work groups that may be dispatched by a single command (x,y,z)*/
	uint32_t maxComputeWorkGroupCount[3];
/*max total compute invocations in a single local work group*/
	uint32_t maxComputeWorkGroupInvocations;
/*max local size of a compute work group (x,y,z)*/
	uint32_t maxComputeWorkGroupSize[3];
/*number bits of subpixel precision in screen x and y*/
	uint32_t subPixelPrecisionBits;
/*number bits of precision for selecting texel weights*/
	uint32_t subTexelPrecisionBits;
/*number bits of precision for selecting mipmap weights*/
	uint32_t mipmapPrecisionBits;
/*max index value for indexed draw calls (for 32-bit indices)*/
	uint32_t maxDrawIndexedIndexValue;
/*max draw count for indirect draw calls*/
	uint32_t maxDrawIndirectCount;
/*max absolute sampler LOD bias*/
	float maxSamplerLodBias;
/*max degree of sampler anisotropy*/
	float maxSamplerAnisotropy;
/*max number of active viewports*/
	uint32_t maxViewports;
/*max viewport dimensions (x,y)*/
	uint32_t maxViewportDimensions[2];
/*viewport bounds range (min,max)*/
	float viewportBoundsRange[2];
/*number bits of subpixel precision for viewport*/
	uint32_t viewportSubPixelBits;
/*min required alignment of pointers returned by MapMemory (bytes)*/
	size_t minMemoryMapAlignment;
/*min required alignment for texel buffer offsets (bytes) */
	VkDeviceSize minTexelBufferOffsetAlignment;
/*min required alignment for uniform buffer sizes and offsets (bytes)*/
	VkDeviceSize minUniformBufferOffsetAlignment;
/*min required alignment for storage buffer offsets (bytes)*/
	VkDeviceSize minStorageBufferOffsetAlignment;
/*min texel offset for OpTextureSampleOffset*/
	int32_t minTexelOffset;
/*max texel offset for OpTextureSampleOffset*/
	uint32_t maxTexelOffset;
/*min texel offset for OpTextureGatherOffset*/
	int32_t minTexelGatherOffset;
/*max texel offset for OpTextureGatherOffset*/
	uint32_t maxTexelGatherOffset;
/*furthest negative offset for interpolateAtOffset*/
	float minInterpolationOffset;
/*furthest positive offset for interpolateAtOffset*/
	float maxInterpolationOffset;
/*number of subpixel bits for interpolateAtOffset*/
	uint32_t subPixelInterpolationOffsetBits;
/*max width for a framebuffer*/
	uint32_t maxFramebufferWidth;
/*max height for a framebuffer*/
	uint32_t maxFramebufferHeight;
/*max layer count for a layered framebuffer*/
	uint32_t maxFramebufferLayers;
/*supported color sample counts for a framebuffer*/
	F_sample_count framebufferColorSampleCounts;
/*supported depth sample counts for a framebuffer*/
	F_sample_count framebufferDepthSampleCounts;
/*supported stencil sample counts for a framebuffer*/
	F_sample_count framebufferStencilSampleCounts;
/*supported sample counts for a framebuffer with no attachments*/
	F_sample_count framebufferNoAttachmentsSampleCounts;
/*max number of color attachments per subpass*/
	uint32_t maxColorAttachments;
/*supported color sample counts for a non-integer sampled image*/
	F_sample_count sampledImageColorSampleCounts;
/*supported sample counts for an integer image*/
	F_sample_count sampledImageIntegerSampleCounts;
/*supported depth sample counts for a sampled image*/
	F_sample_count sampledImageDepthSampleCounts;
/*supported stencil sample counts for a sampled image*/
	F_sample_count sampledImageStencilSampleCounts;
/*supported sample counts for a storage image*/
	F_sample_count storageImageSampleCounts;
/*max number of sample mask words*/
	uint32_t maxSampleMaskWords;
/*timestamps on graphics and compute queues*/
	VkBool32 timestampComputeAndGraphics;
/*number of nanoseconds it takes for timestamp query value to increment by 1*/
	float timestampPeriod;
/*max number of clip distances*/
	uint32_t maxClipDistances;
/*max number of cull distances*/
	uint32_t maxCullDistances;
/*max combined number of user clipping*/
	uint32_t maxCombinedClipAndCullDistances;
/*distinct queue priorities available */
	uint32_t discreteQueuePriorities;
/*range (min,max) of supported point sizes*/
	float pointSizeRange[2];
/*range (min,max) of supported line widths*/
	float lineWidthRange[2];
/*granularity of supported point sizes*/
	float pointSizeGranularity;
/*granularity of supported line widths*/
	float lineWidthGranularity;
/*line rasterization follows preferred rules*/
	VkBool32 strictLines;
/*supports standard sample locations for all supported sample counts*/
	VkBool32 standardSampleLocations;
/*optimal offset of buffer copies*/
	VkDeviceSize optimalBufferCopyOffsetAlignment;
/*optimal pitch of buffer copies*/
	VkDeviceSize optimalBufferCopyRowPitchAlignment;
/*minimum size and alignment for non-coherent host-mapped device memory access*/
	VkDeviceSize nonCoherentAtomSize;
};

/*	VkDrawIndirectCommand:*/
typedef struct S_draw_indirect_command{
	uint32_t vertexCount;
	uint32_t instanceCount;
	uint32_t firstVertex;
	uint32_t firstInstance;
};

/*	VkDrawIndexedIndirectCommand:*/
typedef struct S_draw_indexed_indirect_command{
	uint32_t indexCount;
	uint32_t instanceCount;
	uint32_t firstIndex;
	int32_t vertexOffset;
	uint32_t firstInstance;
};

/*	VkDispatchIndirectCommand:*/
typedef struct S_dispatch_indirect_command{
	uint32_t x;
	uint32_t y;
	uint32_t z;
};

/*	VkDisplayPropertiesKHR:
returnd only*/
typedef struct S_display_properties_KHR{
/*Handle of the display object*/
	VkDisplayKHR display;
/*Name of the display
len:	null-terminated*/
	const char* displayName;
/*In millimeters?*/
	S_extent_2d physicalDimensions;
/*Max resolution for CRT?*/
	S_extent_2d physicalResolution;
/*one or more bits from VkSurfaceTransformFlagsKHR*/
	F_surface_transform_khr supportedTransforms;
/*VK_TRUE if the overlay plane's z-order can be changed on this display.*/
	VkBool32 planeReorderPossible;
/*VK_TRUE if this is a "smart" display that supports self-refresh/internal buffering.*/
	VkBool32 persistentContent;
};

/*	VkDisplayPlanePropertiesKHR:
returnd only*/
typedef struct S_display_plane_properties_KHR{
/*Display the plane is currently associated with.  Will be VK_NULL_HANDLE if the plane is not in use.*/
	VkDisplayKHR currentDisplay;
/*Current z-order of the plane.*/
	uint32_t currentStackIndex;
};

/*	VkDisplayModeParametersKHR:*/
typedef struct S_display_mode_parameters_KHR{
/*Visible scanout region.*/
	S_extent_2d visibleRegion;
/*Number of times per second the display is updated.*/
	uint32_t refreshRate;
};

/*	VkDisplayModePropertiesKHR:
returnd only*/
typedef struct S_display_mode_properties_KHR{
/*Handle of this display mode.*/
	VkDisplayModeKHR displayMode;
/*The parameters this mode uses.*/
	S_display_mode_parameters_KHR parameters;
};

/*	VkDisplayPlaneCapabilitiesKHR:
returnd only*/
typedef struct S_display_plane_capabilities_KHR{
/*Types of alpha blending supported, if any.*/
	F_display_plane_alpha_khr supportedAlpha;
/*Does the plane have any position and extent restrictions?*/
	S_offset_2d minSrcPosition;
	S_offset_2d maxSrcPosition;
	S_extent_2d minSrcExtent;
	S_extent_2d maxSrcExtent;
	S_offset_2d minDstPosition;
	S_offset_2d maxDstPosition;
	S_extent_2d minDstExtent;
	S_extent_2d maxDstExtent;
};

/*	VkSurfaceCapabilitiesKHR:
returnd only*/
typedef struct S_surface_capabilities_KHR{
/*Supported minimum number of images for the surface*/
	uint32_t minImageCount;
/*Supported maximum number of images for the surface, 0 for unlimited*/
	uint32_t maxImageCount;
/*Current image width and height for the surface, (0, 0) if undefined*/
	S_extent_2d currentExtent;
/*Supported minimum image width and height for the surface*/
	S_extent_2d minImageExtent;
/*Supported maximum image width and height for the surface*/
	S_extent_2d maxImageExtent;
/*Supported maximum number of image layers for the surface*/
	uint32_t maxImageArrayLayers;
/*1 or more bits representing the transforms supported*/
	F_surface_transform_khr supportedTransforms;
/*The surface's current transform relative to the device's natural orientation*/
	F_surface_transform_khr currentTransform;
/*1 or more bits representing the alpha compositing modes supported*/
	F_composite_alpha_khr supportedCompositeAlpha;
/*Supported image usage flags for the surface*/
	F_image_usage supportedUsageFlags;
};

/*	VkSurfaceFormatKHR:
returnd only*/
typedef struct S_surface_format_KHR{
/*Supported pair of rendering format*/
	E_format format;
/*and color space for the surface*/
	E_color_space_KHR colorSpace;
};

/*	VkExternalImageFormatPropertiesNV:
returnd only*/
typedef struct S_external_image_format_properties_NV{
	S_image_format_properties imageFormatProperties;
/*|optional|	*/
	F_external_memory_feature_nv externalMemoryFeatures;
/*|optional|	*/
	F_external_memory_handle_type_nv exportFromImportedHandleTypes;
/*|optional|	*/
	F_external_memory_handle_type_nv compatibleHandleTypes;
};

/*	VkIndirectCommandsTokenNVX:*/
typedef struct S_indirect_commands_token_NVX{
	E_indirect_commands_token_type_NVX tokenType;
/*buffer containing tableEntries and additional data for indirectCommands*/
	VkBuffer buffer;
/*offset from the base address of the buffer*/
	VkDeviceSize offset;
};

/*	VkIndirectCommandsLayoutTokenNVX:*/
typedef struct S_indirect_commands_layout_token_NVX{
	E_indirect_commands_token_type_NVX tokenType;
/*Binding unit for vertex attribute / descriptor set, offset for pushconstants*/
	uint32_t bindingUnit;
/*Number of variable dynamic values for descriptor set / push constants*/
	uint32_t dynamicCount;
/*Rate the which the array is advanced per element (must be power of 2, minimum 1)*/
	uint32_t divisor;
};

/*	VkObjectTableEntryNVX:*/
typedef struct S_object_table_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_nvx flags;
};

/*	VkObjectTablePipelineEntryNVX:*/
typedef struct S_object_table_pipeline_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_nvx flags;
	VkPipeline pipeline;
};

/*	VkObjectTableDescriptorSetEntryNVX:*/
typedef struct S_object_table_descriptor_set_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_nvx flags;
	VkPipelineLayout pipelineLayout;
	VkDescriptorSet descriptorSet;
};

/*	VkObjectTableVertexBufferEntryNVX:*/
typedef struct S_object_table_vertex_buffer_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_nvx flags;
	VkBuffer buffer;
};

/*	VkObjectTableIndexBufferEntryNVX:*/
typedef struct S_object_table_index_buffer_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_nvx flags;
	VkBuffer buffer;
	E_index_type indexType;
};

/*	VkObjectTablePushConstantEntryNVX:*/
typedef struct S_object_table_push_constant_entry_NVX{
	E_object_entry_type_NVX type;
	F_object_entry_usage_nvx flags;
	VkPipelineLayout pipelineLayout;
	F_shader_stage stageFlags;
};

/*	VkConformanceVersionKHR:*/
typedef struct S_conformance_version_KHR{
	uint8_t major;
	uint8_t minor;
	uint8_t subminor;
	uint8_t patch;
};

/*	VkPresentRegionKHR:*/
typedef struct S_present_region_KHR{
/*Number of rectangles in pRectangles*/
	uint32_t rectangleCount;
/*Array of rectangles that have changed in a swapchain's image(s)
len:	rectangleCount*/
	const S_rect_layer_KHR* pRectangles;
};

/*	VkRectLayerKHR:*/
typedef struct S_rect_layer_KHR{
/*upper-left corner of a rectangle that has not changed, in pixels of a presentation images*/
	S_offset_2d offset;
/*Dimensions of a rectangle that has not changed, in pixels of a presentation images*/
	S_extent_2d extent;
/*Layer of a swapchain's image(s), for stereoscopic-3D images*/
	uint32_t layer;
};

/*	VkExternalMemoryProperties:
returnd only*/
typedef struct S_external_memory_properties{
	F_external_memory_feature externalMemoryFeatures;
/*|optional|	*/
	F_external_memory_handle_type exportFromImportedHandleTypes;
	F_external_memory_handle_type compatibleHandleTypes;
};

/*	VkDescriptorUpdateTemplateEntry:*/
typedef struct S_descriptor_update_template_entry{
/*Binding within the destination descriptor set to write*/
	uint32_t dstBinding;
/*Array element within the destination binding to write*/
	uint32_t dstArrayElement;
/*Number of descriptors to write*/
	uint32_t descriptorCount;
/*Descriptor type to write*/
	E_descriptor_type descriptorType;
/*Offset into pData where the descriptors to update are stored*/
	size_t offset;
/*Stride between two descriptors in pData when writing more than one descriptor*/
	size_t stride;
};

/*	VkXYColorEXT:Chromaticity coordinate*/
typedef struct S_xy_color_EXT{
	float x;
	float y;
};

/*	VkRefreshCycleDurationGOOGLE:
returnd only*/
typedef struct S_refresh_cycle_duration_GOOGLE{
/*Number of nanoseconds from the start of one refresh cycle to the next*/
	uint64_t refreshDuration;
};

/*	VkPastPresentationTimingGOOGLE:
returnd only*/
typedef struct S_past_presentation_timing_GOOGLE{
/*Application-provided identifier, previously given to vkQueuePresentKHR*/
	uint32_t presentID;
/*Earliest time an image should have been presented, previously given to vkQueuePresentKHR*/
	uint64_t desiredPresentTime;
/*Time the image was actually displayed*/
	uint64_t actualPresentTime;
/*Earliest time the image could have been displayed*/
	uint64_t earliestPresentTime;
/*How early vkQueuePresentKHR was processed vs. how soon it needed to be and make earliestPresentTime*/
	uint64_t presentMargin;
};

/*	VkPresentTimeGOOGLE:*/
typedef struct S_present_time_GOOGLE{
/*Application-provided identifier*/
	uint32_t presentID;
/*Earliest time an image should be presented*/
	uint64_t desiredPresentTime;
};

/*	VkViewportWScalingNV:*/
typedef struct S_viewport_w_scaling_NV{
	float xcoeff;
	float ycoeff;
};

/*	VkViewportSwizzleNV:*/
typedef struct S_viewport_swizzle_NV{
	E_viewport_coordinate_swizzle_NV x;
	E_viewport_coordinate_swizzle_NV y;
	E_viewport_coordinate_swizzle_NV z;
	E_viewport_coordinate_swizzle_NV w;
};

/*	VkInputAttachmentAspectReference:*/
typedef struct S_input_attachment_aspect_reference{
	uint32_t subpass;
	uint32_t inputAttachmentIndex;
	F_image_aspect aspectMask;
};

/*	VkSampleLocationEXT:*/
typedef struct S_sample_location_EXT{
	float x;
	float y;
};

/*	VkAttachmentSampleLocationsEXT:*/
typedef struct S_attachment_sample_locations_EXT{
	uint32_t attachmentIndex;
	S_sample_locations_info_EXT sampleLocationsInfo;
};

/*	VkSubpassSampleLocationsEXT:*/
typedef struct S_subpass_sample_locations_EXT{
	uint32_t subpassIndex;
	S_sample_locations_info_EXT sampleLocationsInfo;
};

/*	VkShaderResourceUsageAMD:
returnd only*/
typedef struct S_shader_resource_usage_AMD{
	uint32_t numUsedVgprs;
	uint32_t numUsedSgprs;
	uint32_t ldsSizePerLocalWorkGroup;
	size_t ldsUsageSizeInBytes;
	size_t scratchMemUsageInBytes;
};

/*	VkShaderStatisticsInfoAMD:
returnd only*/
typedef struct S_shader_statistics_info_AMD{
	F_shader_stage shaderStageMask;
	S_shader_resource_usage_AMD resourceUsage;
	uint32_t numPhysicalVgprs;
	uint32_t numPhysicalSgprs;
	uint32_t numAvailableVgprs;
	uint32_t numAvailableSgprs;
	uint32_t computeWorkGroupSize[3];
};

/*	VkVertexInputBindingDivisorDescriptionEXT:*/
typedef struct S_vertex_input_binding_divisor_description_EXT{
	uint32_t binding;
	uint32_t divisor;
};

/*	VkShadingRatePaletteNV:*/
typedef struct S_shading_rate_palette_NV{
	uint32_t shadingRatePaletteEntryCount;
/*
len:	shadingRatePaletteEntryCount*/
	const E_shading_rate_palette_entry_NV* pShadingRatePaletteEntries;
};

/*	VkCoarseSampleLocationNV:*/
typedef struct S_coarse_sample_location_NV{
	uint32_t pixelX;
	uint32_t pixelY;
	uint32_t sample;
};

/*	VkCoarseSampleOrderCustomNV:*/
typedef struct S_coarse_sample_order_custom_NV{
	E_shading_rate_palette_entry_NV shadingRate;
	uint32_t sampleCount;
	uint32_t sampleLocationCount;
/*
len:	sampleLocationCount*/
	const S_coarse_sample_location_NV* pSampleLocations;
};

/*	VkDrawMeshTasksIndirectCommandNV:*/
typedef struct S_draw_mesh_tasks_indirect_command_NV{
	uint32_t taskCount;
	uint32_t firstTask;
};

/*	VkGeometryDataNVX:*/
typedef struct S_geometry_data_NVX{
	S_geometry_triangles_NVX triangles;
	S_geometry_aabb_NVX aabbs;
};

/*	VkDrmFormatModifierPropertiesEXT:
returnd only*/
typedef struct S_drm_format_modifier_properties_EXT{
	uint64_t drmFormatModifier;
	uint32_t drmFormatModifierPlaneCount;
	F_format_feature drmFormatModifierTilingFeatures;
};

/*	VkBaseOutStructure:*/
typedef struct S_base_out_structure{
private:
	VkStructureType sTpye ;
	void* pNext = nullptr;
public:

S_base_out_structure(
);
};

/*	VkBaseInStructure:*/
typedef struct S_base_in_structure{
private:
	VkStructureType sTpye ;
	void* pNext = nullptr;
public:

S_base_in_structure(
);
};

/*	VkApplicationInfo:*/
typedef struct S_application_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	void* pNext = nullptr;
public:
/*|optional|	
len:	null-terminated*/
	const char* pApplicationName;
	uint32_t applicationVersion;
/*|optional|	
len:	null-terminated*/
	const char* pEngineName;
	uint32_t engineVersion;
	uint32_t apiVersion;

S_application_info(
	 const char*     pApplicationName_
	,uint32_t  applicationVersion_
	,const char*     pEngineName_
	,uint32_t  engineVersion_
	,uint32_t  apiVersion_);
};

/*	VkMappedMemoryRange:*/
typedef struct S_mapped_memory_range{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
	void* pNext = nullptr;
public:
/*Mapped memory object*/
	VkDeviceMemory memory;
/*Offset within the memory object where the range starts*/
	VkDeviceSize offset;
/*Size of the range within the memory object*/
	VkDeviceSize size;

S_mapped_memory_range(
	 VkDeviceMemory  memory_
	,VkDeviceSize  offset_
	,VkDeviceSize  size_);
};

/*	VkCopyDescriptorSet:*/
typedef struct S_copy_descriptor_set{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
	void* pNext = nullptr;
public:
/*Source descriptor set*/
	VkDescriptorSet srcSet;
/*Binding within the source descriptor set to copy from*/
	uint32_t srcBinding;
/*Array element within the source binding to copy from*/
	uint32_t srcArrayElement;
/*Destination descriptor set*/
	VkDescriptorSet dstSet;
/*Binding within the destination descriptor set to copy to*/
	uint32_t dstBinding;
/*Array element within the destination binding to copy to*/
	uint32_t dstArrayElement;
/*Number of descriptors to write (determines the size of the array pointed by pDescriptors)*/
	uint32_t descriptorCount;

S_copy_descriptor_set(
	 VkDescriptorSet  srcSet_
	,uint32_t  srcBinding_
	,uint32_t  srcArrayElement_
	,VkDescriptorSet  dstSet_
	,uint32_t  dstBinding_
	,uint32_t  dstArrayElement_
	,uint32_t  descriptorCount_);
};

/*	VkBufferViewCreateInfo:*/
typedef struct S_buffer_view_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkBufferViewCreateFlags flags;
	VkBuffer buffer;
/*Optionally specifies format of elements*/
	E_format format;
/*Specified in bytes*/
	VkDeviceSize offset;
/*View size specified in bytes*/
	VkDeviceSize range;

S_buffer_view_create_info(
	 VkBufferViewCreateFlags flags_
	,VkBuffer  buffer_
	,E_format  format_
	,VkDeviceSize  offset_
	,VkDeviceSize  range_);
};

/*	VkMemoryBarrier:*/
typedef struct S_memory_barrier{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
	void* pNext = nullptr;
public:
/*Memory accesses from the source of the dependency to synchronize*/
	F_access srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	F_access dstAccessMask;

S_memory_barrier(
	 F_access  srcAccessMask_
	,F_access  dstAccessMask_);
};

/*	VkBufferMemoryBarrier:*/
typedef struct S_buffer_memory_barrier{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
	void* pNext = nullptr;
public:
/*Memory accesses from the source of the dependency to synchronize*/
	F_access srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	F_access dstAccessMask;
/*Queue family to transition ownership from*/
	uint32_t srcQueueFamilyIndex;
/*Queue family to transition ownership to*/
	uint32_t dstQueueFamilyIndex;
/*Buffer to sync*/
	VkBuffer buffer;
/*Offset within the buffer to sync*/
	VkDeviceSize offset;
/*Amount of bytes to sync*/
	VkDeviceSize size;

S_buffer_memory_barrier(
	 F_access  srcAccessMask_
	,F_access  dstAccessMask_
	,uint32_t  srcQueueFamilyIndex_
	,uint32_t  dstQueueFamilyIndex_
	,VkBuffer  buffer_
	,VkDeviceSize  offset_
	,VkDeviceSize  size_);
};

/*	VkPipelineShaderStageCreateInfo:*/
typedef struct S_pipeline_shader_stage_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineShaderStageCreateFlags flags;
/*Shader stage*/
	F_shader_stage stage;
/*Module containing entry point*/
	VkShaderModule module;
/*Null-terminated entry point name
len:	null-terminated*/
	const char* pName;
/*|optional|	*/
	const S_specialization_info* pSpecializationInfo;

S_pipeline_shader_stage_create_info(
	 VkPipelineShaderStageCreateFlags  flags_
	,F_shader_stage  stage_
	,VkShaderModule  module_
	,const char*            pName_
	,const S_specialization_info* pSpecializationInfo_);
};

/*	VkComputePipelineCreateInfo:*/
typedef struct S_compute_pipeline_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Pipeline creation flags*/
	F_pipeline_create flags;
	S_pipeline_shader_stage_create_info stage;
/*Interface layout of the pipeline*/
	VkPipelineLayout layout;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t basePipelineIndex;

S_compute_pipeline_create_info(
	 F_pipeline_create  flags_
	,S_pipeline_shader_stage_create_info  stage_
	,VkPipelineLayout  layout_
	,VkPipeline  basePipelineHandle_
	,int32_t  basePipelineIndex_);
};

/*	VkPipelineInputAssemblyStateCreateInfo:*/
typedef struct S_pipeline_input_assembly_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineInputAssemblyStateCreateFlags flags;
	E_primitive_topology topology;
	VkBool32 primitiveRestartEnable;

S_pipeline_input_assembly_state_create_info(
	 VkPipelineInputAssemblyStateCreateFlags  flags_
	,E_primitive_topology  topology_
	,VkBool32  primitiveRestartEnable_);
};

/*	VkPipelineDynamicStateCreateInfo:*/
typedef struct S_pipeline_dynamic_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineDynamicStateCreateFlags flags;
	uint32_t dynamicStateCount;
/*
len:	dynamicStateCount*/
	const E_dynamic_state* pDynamicStates;

S_pipeline_dynamic_state_create_info(
	 VkPipelineDynamicStateCreateFlags  flags_
	,uint32_t  dynamicStateCount_
	,const E_dynamic_state*  pDynamicStates_);
};

/*	VkPipelineDepthStencilStateCreateInfo:*/
typedef struct S_pipeline_depth_stencil_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineDepthStencilStateCreateFlags flags;
	VkBool32 depthTestEnable;
	VkBool32 depthWriteEnable;
	E_compare_op depthCompareOp;
/*optional (depth_bounds_test)*/
	VkBool32 depthBoundsTestEnable;
	VkBool32 stencilTestEnable;
	S_stencil_op_state front;
	S_stencil_op_state back;
	float minDepthBounds;
	float maxDepthBounds;

S_pipeline_depth_stencil_state_create_info(
	 VkPipelineDepthStencilStateCreateFlags  flags_
	,VkBool32  depthTestEnable_
	,VkBool32  depthWriteEnable_
	,E_compare_op  depthCompareOp_
	,VkBool32  depthBoundsTestEnable_
	,VkBool32  stencilTestEnable_
	,S_stencil_op_state  front_
	,S_stencil_op_state  back_
	,float  minDepthBounds_
	,float  maxDepthBounds_);
};

/*	VkPipelineCacheCreateInfo:*/
typedef struct S_pipeline_cache_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineCacheCreateFlags flags;
/*Size of initial data to populate cache, in bytes*/
	size_t initialDataSize;
/*Initial data to populate cache
len:	initialDataSize*/
	const void* pInitialData;

S_pipeline_cache_create_info(
	 VkPipelineCacheCreateFlags  flags_
	,size_t  initialDataSize_
	,const void*            pInitialData_);
};

/*	VkPipelineLayoutCreateInfo:*/
typedef struct S_pipeline_layout_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineLayoutCreateFlags flags;
/*Number of descriptor sets interfaced by the pipeline*/
	uint32_t setLayoutCount;
/*Array of setCount number of descriptor set layout objects defining the layout of the
len:	setLayoutCount*/
	const VkDescriptorSetLayout* pSetLayouts;
/*Number of push-constant ranges used by the pipeline*/
	uint32_t pushConstantRangeCount;
/*Array of pushConstantRangeCount number of ranges used by various shader stages
len:	pushConstantRangeCount*/
	const S_push_constant_range* pPushConstantRanges;

S_pipeline_layout_create_info(
	 VkPipelineLayoutCreateFlags  flags_
	,uint32_t  setLayoutCount_
	,const VkDescriptorSetLayout* pSetLayouts_
	,uint32_t  pushConstantRangeCount_
	,const S_push_constant_range* pPushConstantRanges_);
};

/*	VkCommandPoolCreateInfo:*/
typedef struct S_command_pool_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Command pool creation flags*/
	F_command_pool_create flags;
	uint32_t queueFamilyIndex;

S_command_pool_create_info(
	 F_command_pool_create  flags_
	,uint32_t  queueFamilyIndex_);
};

/*	VkCommandBufferAllocateInfo:*/
typedef struct S_command_buffer_allocate_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	void* pNext = nullptr;
public:
	VkCommandPool commandPool;
	E_command_buffer_level level;
	uint32_t commandBufferCount;

S_command_buffer_allocate_info(
	 VkCommandPool  commandPool_
	,E_command_buffer_level  level_
	,uint32_t  commandBufferCount_);
};

/*	VkEventCreateInfo:*/
typedef struct S_event_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Event creation flags*/
	VkEventCreateFlags flags;

S_event_create_info(
	 VkEventCreateFlags  flags_);
};

/*	VkQueryPoolCreateInfo:*/
typedef struct S_query_pool_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkQueryPoolCreateFlags flags;
	E_query_type queryType;
	uint32_t queryCount;
/*Optional*/
	F_query_pipeline_statistic pipelineStatistics;

S_query_pool_create_info(
	 VkQueryPoolCreateFlags  flags_
	,E_query_type  queryType_
	,uint32_t  queryCount_
	,F_query_pipeline_statistic  pipelineStatistics_);
};

/*	VkFramebufferCreateInfo:*/
typedef struct S_framebuffer_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkFramebufferCreateFlags flags;
	VkRenderPass renderPass;
/*|optional|	*/
	uint32_t attachmentCount;
/*
len:	attachmentCount*/
	const VkImageView* pAttachments;
	uint32_t width;
	uint32_t height;
	uint32_t layers;

S_framebuffer_create_info(
	 VkFramebufferCreateFlags  flags_
	,VkRenderPass  renderPass_
	,uint32_t  attachmentCount_
	,const VkImageView*     pAttachments_
	,uint32_t  width_
	,uint32_t  height_
	,uint32_t  layers_);
};

/*	VkDisplayModeCreateInfoKHR:*/
typedef struct S_display_mode_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkDisplayModeCreateFlagsKHR flags;
/*The parameters this mode uses.*/
	S_display_mode_parameters_KHR parameters;

S_display_mode_create_info_KHR(
	 VkDisplayModeCreateFlagsKHR  flags_
	,S_display_mode_parameters_KHR  parameters_);
};

/*	VkDisplaySurfaceCreateInfoKHR:*/
typedef struct S_display_surface_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkDisplaySurfaceCreateFlagsKHR flags;
/*The mode to use when displaying this surface*/
	VkDisplayModeKHR displayMode;
/*The plane on which this surface appears.  Must be between 0 and the value returned by vkGetPhysicalDeviceDisplayPlanePropertiesKHR() in pPropertyCount.*/
	uint32_t planeIndex;
/*The z-order of the plane.*/
	uint32_t planeStackIndex;
/*Transform to apply to the images as part of the scanout operation*/
	F_surface_transform_khr transform;
/*Global alpha value.  Must be between 0 and 1, inclusive.  Ignored if alphaMode is not VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR*/
	float globalAlpha;
/*What type of alpha blending to use.  Must be a bit from vkGetDisplayPlanePropertiesKHR::supportedAlpha.*/
	F_display_plane_alpha_khr alphaMode;
/*size of the images to use with this surface*/
	S_extent_2d imageExtent;

S_display_surface_create_info_KHR(
	 VkDisplaySurfaceCreateFlagsKHR  flags_
	,VkDisplayModeKHR  displayMode_
	,uint32_t  planeIndex_
	,uint32_t  planeStackIndex_
	,F_surface_transform_khr  transform_
	,float  globalAlpha_
	,F_display_plane_alpha_khr  alphaMode_
	,S_extent_2d  imageExtent_);
};

/*	VkDisplayPresentInfoKHR:
extends to:	VkPresentInfoKHR*/
typedef struct S_display_present_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
	void* pNext = nullptr;
public:
/*Rectangle within the presentable image to read pixel data from when presenting to the display.*/
	S_rect_2d srcRect;
/*Rectangle within the current display mode's visible region to display srcRectangle in.*/
	S_rect_2d dstRect;
/*For smart displays, use buffered mode.  If the display properties member "persistentMode" is VK_FALSE, this member must always be VK_FALSE.*/
	VkBool32 persistent;

S_display_present_info_KHR(
	 S_rect_2d  srcRect_
	,S_rect_2d  dstRect_
	,VkBool32  persistent_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidSurfaceCreateInfoKHR:*/
typedef struct S_android_surface_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkAndroidSurfaceCreateFlagsKHR flags;
	struct ANativeWindow* window;

S_android_surface_create_info_KHR(
	 VkAndroidSurfaceCreateFlagsKHR  flags_
	,struct ANativeWindow*    window_);
};

#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
/*	VkMirSurfaceCreateInfoKHR:*/
typedef struct S_mir_surface_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkMirSurfaceCreateFlagsKHR flags;
	MirConnection* connection;
	MirSurface* mirSurface;

S_mir_surface_create_info_KHR(
	 VkMirSurfaceCreateFlagsKHR  flags_
	,MirConnection*                   connection_
	,MirSurface*                      mirSurface_);
};

#endif

#ifdef VK_USE_PLATFORM_VI_NN
/*	VkViSurfaceCreateInfoNN:*/
typedef struct S_vi_surface_create_info_NN{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkViSurfaceCreateFlagsNN flags;
	void* window;

S_vi_surface_create_info_NN(
	 VkViSurfaceCreateFlagsNN  flags_
	,void*                            window_);
};

#endif

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
/*	VkWaylandSurfaceCreateInfoKHR:*/
typedef struct S_wayland_surface_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkWaylandSurfaceCreateFlagsKHR flags;
	struct wl_display* display;
	struct wl_surface* surface;

S_wayland_surface_create_info_KHR(
	 VkWaylandSurfaceCreateFlagsKHR  flags_
	,struct wl_display*               display_
	,struct wl_surface*               surface_);
};

#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
/*	VkWin32SurfaceCreateInfoKHR:*/
typedef struct S_win32_surface_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkWin32SurfaceCreateFlagsKHR flags;
	HINSTANCE hinstance;
	HWND hwnd;

S_win32_surface_create_info_KHR(
	 VkWin32SurfaceCreateFlagsKHR  flags_
	,HINSTANCE  hinstance_
	,HWND  hwnd_);
};

#endif

#ifdef VK_USE_PLATFORM_XLIB_KHR
/*	VkXlibSurfaceCreateInfoKHR:*/
typedef struct S_xlib_surface_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkXlibSurfaceCreateFlagsKHR flags;
	Display* dpy;
	Window window;

S_xlib_surface_create_info_KHR(
	 VkXlibSurfaceCreateFlagsKHR  flags_
	,Display*                         dpy_
	,Window  window_);
};

#endif

#ifdef VK_USE_PLATFORM_XCB_KHR
/*	VkXcbSurfaceCreateInfoKHR:*/
typedef struct S_xcb_surface_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkXcbSurfaceCreateFlagsKHR flags;
	xcb_connection_t* connection;
	xcb_window_t window;

S_xcb_surface_create_info_KHR(
	 VkXcbSurfaceCreateFlagsKHR  flags_
	,xcb_connection_t*                connection_
	,xcb_window_t  window_);
};

#endif

/*	VkDebugReportCallbackCreateInfoEXT:
extends to:	VkInstanceCreateInfo*/
typedef struct S_debug_report_callback_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*Indicates which events call this callback*/
	F_debug_report_ext flags;
/*Function pointer of a callback function*/
	PFN_vkDebugReportCallbackEXT pfnCallback;
/*User data provided to callback function*/
	void* pUserData;

S_debug_report_callback_create_info_EXT(
	 F_debug_report_ext  flags_
	,PFN_vkDebugReportCallbackEXT  pfnCallback_
	,void*            pUserData_);
};

/*	VkValidationFlagsEXT:
extends to:	VkInstanceCreateInfo*/
typedef struct S_validation_flags_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
	void* pNext = nullptr;
public:
/*Number of validation checks to disable*/
	uint32_t disabledValidationCheckCount;
/*Validation checks to disable
len:	disabledValidationCheckCount*/
	const E_validation_check_EXT* pDisabledValidationChecks;

S_validation_flags_EXT(
	 uint32_t  disabledValidationCheckCount_
	,const E_validation_check_EXT* pDisabledValidationChecks_);
};

/*	VkPipelineRasterizationStateRasterizationOrderAMD:
extends to:	VkPipelineRasterizationStateCreateInfo*/
typedef struct S_pipeline_rasterization_state_rasterization_order_AMD{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
	void* pNext = nullptr;
public:
/*Rasterization order to use for the pipeline*/
	E_rasterization_order_AMD rasterizationOrder;

S_pipeline_rasterization_state_rasterization_order_AMD(
	 E_rasterization_order_AMD  rasterizationOrder_);
};

/*	VkDebugMarkerObjectNameInfoEXT:*/
typedef struct S_debug_marker_object_name_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
	void* pNext = nullptr;
public:
/*The type of the object*/
	E_debug_report_object_type_EXT objectType;
/*The handle of the object, cast to uint64_t*/
	uint64_t object;
/*Name to apply to the object
len:	null-terminated*/
	const char* pObjectName;

S_debug_marker_object_name_info_EXT(
	 E_debug_report_object_type_EXT  objectType_
	,uint64_t  object_
	,const char* pObjectName_);
};

/*	VkDebugMarkerObjectTagInfoEXT:*/
typedef struct S_debug_marker_object_tag_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
	void* pNext = nullptr;
public:
/*The type of the object*/
	E_debug_report_object_type_EXT objectType;
/*The handle of the object, cast to uint64_t*/
	uint64_t object;
/*The name of the tag to set on the object*/
	uint64_t tagName;
/*The length in bytes of the tag data*/
	size_t tagSize;
/*Tag data to attach to the object
len:	tagSize*/
	const void* pTag;

S_debug_marker_object_tag_info_EXT(
	 E_debug_report_object_type_EXT  objectType_
	,uint64_t  object_
	,uint64_t  tagName_
	,size_t  tagSize_
	,const void*        pTag_);
};

/*	VkDebugMarkerMarkerInfoEXT:*/
typedef struct S_debug_marker_marker_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
	void* pNext = nullptr;
public:
/*Name of the debug marker
len:	null-terminated*/
	const char* pMarkerName;
/*Optional color for debug marker*/
	float color[4];

S_debug_marker_marker_info_EXT(
	 const char* pMarkerName_
	,std::array< float ,4 > color_);
};

/*	VkDedicatedAllocationImageCreateInfoNV:
extends to:	VkImageCreateInfo*/
typedef struct S_dedicated_allocation_image_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
/*Whether this image uses a dedicated allocation*/
	VkBool32 dedicatedAllocation;

S_dedicated_allocation_image_create_info_NV(
	 VkBool32  dedicatedAllocation_);
};

/*	VkDedicatedAllocationBufferCreateInfoNV:
extends to:	VkBufferCreateInfo*/
typedef struct S_dedicated_allocation_buffer_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
/*Whether this buffer uses a dedicated allocation*/
	VkBool32 dedicatedAllocation;

S_dedicated_allocation_buffer_create_info_NV(
	 VkBool32  dedicatedAllocation_);
};

/*	VkDedicatedAllocationMemoryAllocateInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_dedicated_allocation_memory_allocate_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
	void* pNext = nullptr;
public:
/*Image that this allocation will be bound to*/
	VkImage image;
/*Buffer that this allocation will be bound to*/
	VkBuffer buffer;

S_dedicated_allocation_memory_allocate_info_NV(
	 VkImage  image_
	,VkBuffer  buffer_);
};

/*	VkExternalMemoryImageCreateInfoNV:
extends to:	VkImageCreateInfo*/
typedef struct S_external_memory_image_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type_nv handleTypes;

S_external_memory_image_create_info_NV(
	 F_external_memory_handle_type_nv  handleTypes_);
};

/*	VkExportMemoryAllocateInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_allocate_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type_nv handleTypes;

S_export_memory_allocate_info_NV(
	 F_external_memory_handle_type_nv  handleTypes_);
};

/*	VkImportMemoryWin32HandleInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_win32_handle_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type_nv handleType;
/*|optional|	*/
	HANDLE handle;

S_import_memory_win32_handle_info_NV(
	 F_external_memory_handle_type_nv  handleType_
	,HANDLE  handle_);
};

/*	VkExportMemoryWin32HandleInfoNV:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_win32_handle_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	const SECURITY_ATTRIBUTES* pAttributes;
/*|optional|	*/
	DWORD dwAccess;

S_export_memory_win32_handle_info_NV(
	 const SECURITY_ATTRIBUTES*       pAttributes_
	,DWORD  dwAccess_);
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
/*	VkWin32KeyedMutexAcquireReleaseInfoNV:
extends to:	VkSubmitInfo*/
typedef struct S_win32_keyed_mutex_acquire_release_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t acquireCount;
/*
len:	acquireCount*/
	const VkDeviceMemory* pAcquireSyncs;
/*
len:	acquireCount*/
	const uint64_t* pAcquireKeys;
/*
len:	acquireCount*/
	const uint32_t* pAcquireTimeoutMilliseconds;
/*|optional|	*/
	uint32_t releaseCount;
/*
len:	releaseCount*/
	const VkDeviceMemory* pReleaseSyncs;
/*
len:	releaseCount*/
	const uint64_t* pReleaseKeys;

S_win32_keyed_mutex_acquire_release_info_NV(
	 uint32_t  acquireCount_
	,const VkDeviceMemory*            pAcquireSyncs_
	,const uint64_t*                  pAcquireKeys_
	,const uint32_t*                  pAcquireTimeoutMilliseconds_
	,uint32_t  releaseCount_
	,const VkDeviceMemory*            pReleaseSyncs_
	,const uint64_t*                  pReleaseKeys_);
};

#endif

/*	VkDeviceGeneratedCommandsFeaturesNVX:*/
typedef struct S_device_generated_commands_features_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX;
	void* pNext = nullptr;
public:
	VkBool32 computeBindingPointSupport;

S_device_generated_commands_features_NVX(
	 VkBool32  computeBindingPointSupport_);
};

/*	VkDeviceGeneratedCommandsLimitsNVX:*/
typedef struct S_device_generated_commands_limits_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;
	void* pNext = nullptr;
public:
	uint32_t maxIndirectCommandsLayoutTokenCount;
	uint32_t maxObjectEntryCounts;
	uint32_t minSequenceCountBufferOffsetAlignment;
	uint32_t minSequenceIndexBufferOffsetAlignment;
	uint32_t minCommandsTokenBufferOffsetAlignment;

S_device_generated_commands_limits_NVX(
	 uint32_t  maxIndirectCommandsLayoutTokenCount_
	,uint32_t  maxObjectEntryCounts_
	,uint32_t  minSequenceCountBufferOffsetAlignment_
	,uint32_t  minSequenceIndexBufferOffsetAlignment_
	,uint32_t  minCommandsTokenBufferOffsetAlignment_);
};

/*	VkIndirectCommandsLayoutCreateInfoNVX:*/
typedef struct S_indirect_commands_layout_create_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;
	void* pNext = nullptr;
public:
	E_pipeline_bind_point pipelineBindPoint;
	F_indirect_commands_layout_usage_nvx flags;
	uint32_t tokenCount;
/*
len:	tokenCount*/
	const S_indirect_commands_layout_token_NVX* pTokens;

S_indirect_commands_layout_create_info_NVX(
	 E_pipeline_bind_point  pipelineBindPoint_
	,F_indirect_commands_layout_usage_nvx  flags_
	,uint32_t  tokenCount_
	,const S_indirect_commands_layout_token_NVX*  pTokens_);
};

/*	VkCmdProcessCommandsInfoNVX:*/
typedef struct S_cmd_process_commands_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkObjectTableNVX objectTable;
	VkIndirectCommandsLayoutNVX indirectCommandsLayout;
	uint32_t indirectCommandsTokenCount;
/*
len:	indirectCommandsTokenCount*/
	const S_indirect_commands_token_NVX* pIndirectCommandsTokens;
	uint32_t maxSequencesCount;
/*|optional|	
(externsync)*/
	VkCommandBuffer targetCommandBuffer;
/*|optional|	*/
	VkBuffer sequencesCountBuffer;
/*|optional|	*/
	VkDeviceSize sequencesCountOffset;
/*|optional|	*/
	VkBuffer sequencesIndexBuffer;
/*|optional|	*/
	VkDeviceSize sequencesIndexOffset;

S_cmd_process_commands_info_NVX(
	 VkObjectTableNVX  objectTable_
	,VkIndirectCommandsLayoutNVX  indirectCommandsLayout_
	,uint32_t  indirectCommandsTokenCount_
	,const S_indirect_commands_token_NVX*       pIndirectCommandsTokens_
	,uint32_t  maxSequencesCount_
	,VkCommandBuffer  targetCommandBuffer_
	,VkBuffer  sequencesCountBuffer_
	,VkDeviceSize  sequencesCountOffset_
	,VkBuffer  sequencesIndexBuffer_
	,VkDeviceSize  sequencesIndexOffset_);
};

/*	VkCmdReserveSpaceForCommandsInfoNVX:*/
typedef struct S_cmd_reserve_space_for_commands_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkObjectTableNVX objectTable;
	VkIndirectCommandsLayoutNVX indirectCommandsLayout;
	uint32_t maxSequencesCount;

S_cmd_reserve_space_for_commands_info_NVX(
	 VkObjectTableNVX  objectTable_
	,VkIndirectCommandsLayoutNVX  indirectCommandsLayout_
	,uint32_t  maxSequencesCount_);
};

/*	VkObjectTableCreateInfoNVX:*/
typedef struct S_object_table_create_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;
	void* pNext = nullptr;
public:
	uint32_t objectCount;
/*
len:	objectCount*/
	const E_object_entry_type_NVX* pObjectEntryTypes;
/*
len:	objectCount*/
	const uint32_t* pObjectEntryCounts;
/*
len:	objectCount*/
	const F_object_entry_usage_nvx* pObjectEntryUsageFlags;
	uint32_t maxUniformBuffersPerDescriptor;
	uint32_t maxStorageBuffersPerDescriptor;
	uint32_t maxStorageImagesPerDescriptor;
	uint32_t maxSampledImagesPerDescriptor;
	uint32_t maxPipelineLayouts;

S_object_table_create_info_NVX(
	 uint32_t  objectCount_
	,const E_object_entry_type_NVX*       pObjectEntryTypes_
	,const uint32_t*                   pObjectEntryCounts_
	,const F_object_entry_usage_nvx* pObjectEntryUsageFlags_
	,uint32_t  maxUniformBuffersPerDescriptor_
	,uint32_t  maxStorageBuffersPerDescriptor_
	,uint32_t  maxStorageImagesPerDescriptor_
	,uint32_t  maxSampledImagesPerDescriptor_
	,uint32_t  maxPipelineLayouts_);
};

/*	VkPhysicalDeviceMemoryProperties2:
returnd only*/
typedef struct S_physical_device_memory_properties2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
	void* pNext = nullptr;
public:
	S_physical_device_memory_properties memoryProperties;

S_physical_device_memory_properties2(
	 S_physical_device_memory_properties  memoryProperties_);
};

/*	VkSparseImageFormatProperties2:
returnd only*/
typedef struct S_sparse_image_format_properties2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;
	void* pNext = nullptr;
public:
	S_sparse_image_format_properties properties;

S_sparse_image_format_properties2(
	 S_sparse_image_format_properties  properties_);
};

/*	VkPhysicalDeviceSparseImageFormatInfo2:*/
typedef struct S_physical_device_sparse_image_format_info2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
	void* pNext = nullptr;
public:
	E_format format;
	E_image_type type;
	F_sample_count samples;
	F_image_usage usage;
	E_image_tiling tiling;

S_physical_device_sparse_image_format_info2(
	 E_format  format_
	,E_image_type  type_
	,F_sample_count  samples_
	,F_image_usage  usage_
	,E_image_tiling  tiling_);
};

/*	VkPhysicalDevicePushDescriptorPropertiesKHR:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_push_descriptor_properties_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
	void* pNext = nullptr;
public:
	uint32_t maxPushDescriptors;

S_physical_device_push_descriptor_properties_KHR(
	 uint32_t  maxPushDescriptors_);
};

/*	VkPhysicalDeviceDriverPropertiesKHR:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_driver_properties_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR;
	void* pNext = nullptr;
public:
	uint32_t driverID;
	char driverName[VK_MAX_DRIVER_NAME_SIZE_KHR];
	char driverInfo[VK_MAX_DRIVER_INFO_SIZE_KHR];
	S_conformance_version_KHR conformanceVersion;

S_physical_device_driver_properties_KHR(
	 uint32_t  driverID_
	,std::array< char ,VK_MAX_DRIVER_NAME_SIZE_KHR > driverName_
	,std::array< char ,VK_MAX_DRIVER_INFO_SIZE_KHR > driverInfo_
	,S_conformance_version_KHR  conformanceVersion_);
};

/*	VkPresentRegionsKHR:
extends to:	VkPresentInfoKHR*/
typedef struct S_present_regions_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
	void* pNext = nullptr;
public:
/*Copy of VkPresentInfoKHR::swapchainCount*/
	uint32_t swapchainCount;
/*The regions that have changed
len:	swapchainCount*/
	const S_present_region_KHR* pRegions;

S_present_regions_KHR(
	 uint32_t  swapchainCount_
	,const S_present_region_KHR*   pRegions_);
};

/*	VkPhysicalDeviceVariablePointerFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_variable_pointer_features{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES;
	void* pNext = nullptr;
public:
	VkBool32 variablePointersStorageBuffer;
	VkBool32 variablePointers;

S_physical_device_variable_pointer_features(
	 VkBool32  variablePointersStorageBuffer_
	,VkBool32  variablePointers_);
};

/*	VkPhysicalDeviceExternalImageFormatInfo:
extends to:	VkPhysicalDeviceImageFormatInfo2*/
typedef struct S_physical_device_external_image_format_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type handleType;

S_physical_device_external_image_format_info(
	 F_external_memory_handle_type  handleType_);
};

/*	VkExternalImageFormatProperties:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_external_image_format_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES;
	void* pNext = nullptr;
public:
	S_external_memory_properties externalMemoryProperties;

S_external_image_format_properties(
	 S_external_memory_properties  externalMemoryProperties_);
};

/*	VkPhysicalDeviceExternalBufferInfo:*/
typedef struct S_physical_device_external_buffer_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_buffer_create flags;
	F_buffer_usage usage;
	F_external_memory_handle_type handleType;

S_physical_device_external_buffer_info(
	 F_buffer_create  flags_
	,F_buffer_usage  usage_
	,F_external_memory_handle_type  handleType_);
};

/*	VkExternalBufferProperties:
returnd only*/
typedef struct S_external_buffer_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES;
	void* pNext = nullptr;
public:
	S_external_memory_properties externalMemoryProperties;

S_external_buffer_properties(
	 S_external_memory_properties  externalMemoryProperties_);
};

/*	VkPhysicalDeviceIDProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_id_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
	void* pNext = nullptr;
public:
	uint8_t deviceUUID[VK_UUID_SIZE];
	uint8_t driverUUID[VK_UUID_SIZE];
	uint8_t deviceLUID[VK_LUID_SIZE];
	uint32_t deviceNodeMask;
	VkBool32 deviceLUIDValid;

S_physical_device_id_properties(
	 std::array< uint8_t ,VK_UUID_SIZE > deviceUUID_
	,std::array< uint8_t ,VK_UUID_SIZE > driverUUID_
	,std::array< uint8_t ,VK_LUID_SIZE > deviceLUID_
	,uint32_t  deviceNodeMask_
	,VkBool32  deviceLUIDValid_);
};

/*	VkExternalMemoryImageCreateInfo:
extends to:	VkImageCreateInfo*/
typedef struct S_external_memory_image_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
	void* pNext = nullptr;
public:
	F_external_memory_handle_type handleTypes;

S_external_memory_image_create_info(
	 F_external_memory_handle_type  handleTypes_);
};

/*	VkExternalMemoryBufferCreateInfo:
extends to:	VkBufferCreateInfo*/
typedef struct S_external_memory_buffer_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type handleTypes;

S_external_memory_buffer_create_info(
	 F_external_memory_handle_type  handleTypes_);
};

/*	VkExportMemoryAllocateInfo:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_allocate_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type handleTypes;

S_export_memory_allocate_info(
	 F_external_memory_handle_type  handleTypes_);
};

/*	VkImportMemoryWin32HandleInfoKHR:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type handleType;
/*|optional|	*/
	HANDLE handle;
/*|optional|	*/
	LPCWSTR name;

S_import_memory_win32_handle_info_KHR(
	 F_external_memory_handle_type  handleType_
	,HANDLE  handle_
	,LPCWSTR  name_);
};

/*	VkExportMemoryWin32HandleInfoKHR:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_export_memory_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	const SECURITY_ATTRIBUTES* pAttributes;
	DWORD dwAccess;
	LPCWSTR name;

S_export_memory_win32_handle_info_KHR(
	 const SECURITY_ATTRIBUTES* pAttributes_
	,DWORD  dwAccess_
	,LPCWSTR  name_);
};

/*	VkMemoryWin32HandlePropertiesKHR:
returnd only*/
typedef struct S_memory_win32_handle_properties_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR;
	void* pNext = nullptr;
public:
	uint32_t memoryTypeBits;

S_memory_win32_handle_properties_KHR(
	 uint32_t  memoryTypeBits_);
};

/*	VkMemoryGetWin32HandleInfoKHR:*/
typedef struct S_memory_get_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
	VkDeviceMemory memory;
	F_external_memory_handle_type handleType;

S_memory_get_win32_handle_info_KHR(
	 VkDeviceMemory  memory_
	,F_external_memory_handle_type  handleType_);
};

/*	VkImportMemoryFdInfoKHR:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_fd_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_memory_handle_type handleType;
	int fd;

S_import_memory_fd_info_KHR(
	 F_external_memory_handle_type  handleType_
	,int  fd_);
};

/*	VkMemoryFdPropertiesKHR:
returnd only*/
typedef struct S_memory_fd_properties_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;
	void* pNext = nullptr;
public:
	uint32_t memoryTypeBits;

S_memory_fd_properties_KHR(
	 uint32_t  memoryTypeBits_);
};

/*	VkMemoryGetFdInfoKHR:*/
typedef struct S_memory_get_fd_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;
	void* pNext = nullptr;
public:
	VkDeviceMemory memory;
	F_external_memory_handle_type handleType;

S_memory_get_fd_info_KHR(
	 VkDeviceMemory  memory_
	,F_external_memory_handle_type  handleType_);
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
/*	VkWin32KeyedMutexAcquireReleaseInfoKHR:
extends to:	VkSubmitInfo*/
typedef struct S_win32_keyed_mutex_acquire_release_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t acquireCount;
/*
len:	acquireCount*/
	const VkDeviceMemory* pAcquireSyncs;
/*
len:	acquireCount*/
	const uint64_t* pAcquireKeys;
/*
len:	acquireCount*/
	const uint32_t* pAcquireTimeouts;
/*|optional|	*/
	uint32_t releaseCount;
/*
len:	releaseCount*/
	const VkDeviceMemory* pReleaseSyncs;
/*
len:	releaseCount*/
	const uint64_t* pReleaseKeys;

S_win32_keyed_mutex_acquire_release_info_KHR(
	 uint32_t  acquireCount_
	,const VkDeviceMemory* pAcquireSyncs_
	,const uint64_t* pAcquireKeys_
	,const uint32_t* pAcquireTimeouts_
	,uint32_t  releaseCount_
	,const VkDeviceMemory* pReleaseSyncs_
	,const uint64_t* pReleaseKeys_);
};

#endif

/*	VkPhysicalDeviceExternalSemaphoreInfo:*/
typedef struct S_physical_device_external_semaphore_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
	void* pNext = nullptr;
public:
	F_external_semaphore_handle_type handleType;

S_physical_device_external_semaphore_info(
	 F_external_semaphore_handle_type  handleType_);
};

/*	VkExternalSemaphoreProperties:
returnd only*/
typedef struct S_external_semaphore_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
	void* pNext = nullptr;
public:
	F_external_semaphore_handle_type exportFromImportedHandleTypes;
	F_external_semaphore_handle_type compatibleHandleTypes;
/*|optional|	*/
	F_external_semaphore_feature externalSemaphoreFeatures;

S_external_semaphore_properties(
	 F_external_semaphore_handle_type  exportFromImportedHandleTypes_
	,F_external_semaphore_handle_type  compatibleHandleTypes_
	,F_external_semaphore_feature  externalSemaphoreFeatures_);
};

/*	VkExportSemaphoreCreateInfo:
extends to:	VkSemaphoreCreateInfo*/
typedef struct S_export_semaphore_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_semaphore_handle_type handleTypes;

S_export_semaphore_create_info(
	 F_external_semaphore_handle_type  handleTypes_);
};

/*	VkImportSemaphoreWin32HandleInfoKHR:*/
typedef struct S_import_semaphore_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkSemaphore semaphore;
/*|optional|	*/
	F_semaphore_import flags;
/*|optional|	*/
	F_external_semaphore_handle_type handleType;
/*|optional|	*/
	HANDLE handle;
/*|optional|	*/
	LPCWSTR name;

S_import_semaphore_win32_handle_info_KHR(
	 VkSemaphore  semaphore_
	,F_semaphore_import  flags_
	,F_external_semaphore_handle_type  handleType_
	,HANDLE  handle_
	,LPCWSTR  name_);
};

/*	VkExportSemaphoreWin32HandleInfoKHR:
extends to:	VkSemaphoreCreateInfo*/
typedef struct S_export_semaphore_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	const SECURITY_ATTRIBUTES* pAttributes;
	DWORD dwAccess;
	LPCWSTR name;

S_export_semaphore_win32_handle_info_KHR(
	 const SECURITY_ATTRIBUTES*       pAttributes_
	,DWORD  dwAccess_
	,LPCWSTR  name_);
};

/*	VkD3D12FenceSubmitInfoKHR:
extends to:	VkSubmitInfo*/
typedef struct S_d_3d12_fence_submit_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t waitSemaphoreValuesCount;
/*|optional|	
len:	waitSemaphoreValuesCount*/
	const uint64_t* pWaitSemaphoreValues;
/*|optional|	*/
	uint32_t signalSemaphoreValuesCount;
/*|optional|	
len:	signalSemaphoreValuesCount*/
	const uint64_t* pSignalSemaphoreValues;

S_d_3d12_fence_submit_info_KHR(
	 uint32_t  waitSemaphoreValuesCount_
	,const uint64_t* pWaitSemaphoreValues_
	,uint32_t  signalSemaphoreValuesCount_
	,const uint64_t* pSignalSemaphoreValues_);
};

/*	VkSemaphoreGetWin32HandleInfoKHR:*/
typedef struct S_semaphore_get_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
	VkSemaphore semaphore;
	F_external_semaphore_handle_type handleType;

S_semaphore_get_win32_handle_info_KHR(
	 VkSemaphore  semaphore_
	,F_external_semaphore_handle_type  handleType_);
};

/*	VkImportSemaphoreFdInfoKHR:*/
typedef struct S_import_semaphore_fd_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkSemaphore semaphore;
/*|optional|	*/
	F_semaphore_import flags;
	F_external_semaphore_handle_type handleType;
	int fd;

S_import_semaphore_fd_info_KHR(
	 VkSemaphore  semaphore_
	,F_semaphore_import  flags_
	,F_external_semaphore_handle_type  handleType_
	,int  fd_);
};

/*	VkSemaphoreGetFdInfoKHR:*/
typedef struct S_semaphore_get_fd_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR;
	void* pNext = nullptr;
public:
	VkSemaphore semaphore;
	F_external_semaphore_handle_type handleType;

S_semaphore_get_fd_info_KHR(
	 VkSemaphore  semaphore_
	,F_external_semaphore_handle_type  handleType_);
};

/*	VkPhysicalDeviceExternalFenceInfo:*/
typedef struct S_physical_device_external_fence_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;
	void* pNext = nullptr;
public:
	F_external_fence_handle_type handleType;

S_physical_device_external_fence_info(
	 F_external_fence_handle_type  handleType_);
};

/*	VkExternalFenceProperties:
returnd only*/
typedef struct S_external_fence_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;
	void* pNext = nullptr;
public:
	F_external_fence_handle_type exportFromImportedHandleTypes;
	F_external_fence_handle_type compatibleHandleTypes;
/*|optional|	*/
	F_external_fence_feature externalFenceFeatures;

S_external_fence_properties(
	 F_external_fence_handle_type  exportFromImportedHandleTypes_
	,F_external_fence_handle_type  compatibleHandleTypes_
	,F_external_fence_feature  externalFenceFeatures_);
};

/*	VkExportFenceCreateInfo:
extends to:	VkFenceCreateInfo*/
typedef struct S_export_fence_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_external_fence_handle_type handleTypes;

S_export_fence_create_info(
	 F_external_fence_handle_type  handleTypes_);
};

/*	VkImportFenceWin32HandleInfoKHR:*/
typedef struct S_import_fence_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkFence fence;
/*|optional|	*/
	F_fence_import flags;
/*|optional|	*/
	F_external_fence_handle_type handleType;
/*|optional|	*/
	HANDLE handle;
/*|optional|	*/
	LPCWSTR name;

S_import_fence_win32_handle_info_KHR(
	 VkFence  fence_
	,F_fence_import  flags_
	,F_external_fence_handle_type  handleType_
	,HANDLE  handle_
	,LPCWSTR  name_);
};

/*	VkExportFenceWin32HandleInfoKHR:
extends to:	VkFenceCreateInfo*/
typedef struct S_export_fence_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	const SECURITY_ATTRIBUTES* pAttributes;
	DWORD dwAccess;
	LPCWSTR name;

S_export_fence_win32_handle_info_KHR(
	 const SECURITY_ATTRIBUTES* pAttributes_
	,DWORD  dwAccess_
	,LPCWSTR  name_);
};

/*	VkFenceGetWin32HandleInfoKHR:*/
typedef struct S_fence_get_win32_handle_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR;
	void* pNext = nullptr;
public:
	VkFence fence;
	F_external_fence_handle_type handleType;

S_fence_get_win32_handle_info_KHR(
	 VkFence  fence_
	,F_external_fence_handle_type  handleType_);
};

/*	VkImportFenceFdInfoKHR:*/
typedef struct S_import_fence_fd_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkFence fence;
/*|optional|	*/
	F_fence_import flags;
	F_external_fence_handle_type handleType;
	int fd;

S_import_fence_fd_info_KHR(
	 VkFence  fence_
	,F_fence_import  flags_
	,F_external_fence_handle_type  handleType_
	,int  fd_);
};

/*	VkFenceGetFdInfoKHR:*/
typedef struct S_fence_get_fd_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR;
	void* pNext = nullptr;
public:
	VkFence fence;
	F_external_fence_handle_type handleType;

S_fence_get_fd_info_KHR(
	 VkFence  fence_
	,F_external_fence_handle_type  handleType_);
};

/*	VkPhysicalDeviceMultiviewFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_multiview_features{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
	void* pNext = nullptr;
public:
/*Multiple views in a renderpass*/
	VkBool32 multiview;
/*Multiple views in a renderpass w/ geometry shader*/
	VkBool32 multiviewGeometryShader;
/*Multiple views in a renderpass w/ tessellation shader*/
	VkBool32 multiviewTessellationShader;

S_physical_device_multiview_features(
	 VkBool32  multiview_
	,VkBool32  multiviewGeometryShader_
	,VkBool32  multiviewTessellationShader_);
};

/*	VkPhysicalDeviceMultiviewProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_multiview_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
	void* pNext = nullptr;
public:
/*max number of views in a subpass*/
	uint32_t maxMultiviewViewCount;
/*max instance index for a draw in a multiview subpass*/
	uint32_t maxMultiviewInstanceIndex;

S_physical_device_multiview_properties(
	 uint32_t  maxMultiviewViewCount_
	,uint32_t  maxMultiviewInstanceIndex_);
};

/*	VkRenderPassMultiviewCreateInfo:
extends to:	VkRenderPassCreateInfo*/
typedef struct S_render_pass_multiview_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t subpassCount;
/*
len:	subpassCount*/
	const uint32_t* pViewMasks;
/*|optional|	*/
	uint32_t dependencyCount;
/*
len:	dependencyCount*/
	const int32_t* pViewOffsets;
/*|optional|	*/
	uint32_t correlationMaskCount;
/*
len:	correlationMaskCount*/
	const uint32_t* pCorrelationMasks;

S_render_pass_multiview_create_info(
	 uint32_t  subpassCount_
	,const uint32_t*     pViewMasks_
	,uint32_t  dependencyCount_
	,const int32_t*   pViewOffsets_
	,uint32_t  correlationMaskCount_
	,const uint32_t* pCorrelationMasks_);
};

/*	VkSurfaceCapabilities2EXT:
returnd only*/
typedef struct S_surface_capabilities2_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT;
	void* pNext = nullptr;
public:
/*Supported minimum number of images for the surface*/
	uint32_t minImageCount;
/*Supported maximum number of images for the surface, 0 for unlimited*/
	uint32_t maxImageCount;
/*Current image width and height for the surface, (0, 0) if undefined*/
	S_extent_2d currentExtent;
/*Supported minimum image width and height for the surface*/
	S_extent_2d minImageExtent;
/*Supported maximum image width and height for the surface*/
	S_extent_2d maxImageExtent;
/*Supported maximum number of image layers for the surface*/
	uint32_t maxImageArrayLayers;
/*1 or more bits representing the transforms supported*/
	F_surface_transform_khr supportedTransforms;
/*The surface's current transform relative to the device's natural orientation*/
	F_surface_transform_khr currentTransform;
/*1 or more bits representing the alpha compositing modes supported*/
	F_composite_alpha_khr supportedCompositeAlpha;
/*Supported image usage flags for the surface*/
	F_image_usage supportedUsageFlags;
/*|optional|	*/
	F_surface_counter_ext supportedSurfaceCounters;

S_surface_capabilities2_EXT(
	 uint32_t  minImageCount_
	,uint32_t  maxImageCount_
	,S_extent_2d  currentExtent_
	,S_extent_2d  minImageExtent_
	,S_extent_2d  maxImageExtent_
	,uint32_t  maxImageArrayLayers_
	,F_surface_transform_khr  supportedTransforms_
	,F_surface_transform_khr  currentTransform_
	,F_composite_alpha_khr  supportedCompositeAlpha_
	,F_image_usage  supportedUsageFlags_
	,F_surface_counter_ext  supportedSurfaceCounters_);
};

/*	VkDisplayPowerInfoEXT:*/
typedef struct S_display_power_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
	void* pNext = nullptr;
public:
	E_display_power_state_EXT powerState;

S_display_power_info_EXT(
	 E_display_power_state_EXT  powerState_);
};

/*	VkDeviceEventInfoEXT:*/
typedef struct S_device_event_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
	void* pNext = nullptr;
public:
	E_device_event_type_EXT deviceEvent;

S_device_event_info_EXT(
	 E_device_event_type_EXT  deviceEvent_);
};

/*	VkDisplayEventInfoEXT:*/
typedef struct S_display_event_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
	void* pNext = nullptr;
public:
	E_display_event_type_EXT displayEvent;

S_display_event_info_EXT(
	 E_display_event_type_EXT  displayEvent_);
};

/*	VkSwapchainCounterCreateInfoEXT:
extends to:	VkSwapchainCreateInfoKHR*/
typedef struct S_swapchain_counter_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_surface_counter_ext surfaceCounters;

S_swapchain_counter_create_info_EXT(
	 F_surface_counter_ext  surfaceCounters_);
};

/*	VkPhysicalDeviceGroupProperties:
returnd only*/
typedef struct S_physical_device_group_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES;
	void* pNext = nullptr;
public:
	uint32_t physicalDeviceCount;
	VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE];
	VkBool32 subsetAllocation;

S_physical_device_group_properties(
	 uint32_t  physicalDeviceCount_
	,std::array< VkPhysicalDevice ,VK_MAX_DEVICE_GROUP_SIZE > physicalDevices_
	,VkBool32  subsetAllocation_);
};

/*	VkMemoryAllocateFlagsInfo:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_memory_allocate_flags_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_memory_allocate flags;
	uint32_t deviceMask;

S_memory_allocate_flags_info(
	 F_memory_allocate  flags_
	,uint32_t  deviceMask_);
};

/*	VkBindBufferMemoryDeviceGroupInfo:
extends to:	VkBindBufferMemoryInfo*/
typedef struct S_bind_buffer_memory_device_group_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t deviceIndexCount;
/*
len:	deviceIndexCount*/
	const uint32_t* pDeviceIndices;

S_bind_buffer_memory_device_group_info(
	 uint32_t  deviceIndexCount_
	,const uint32_t*  pDeviceIndices_);
};

/*	VkBindImageMemoryDeviceGroupInfo:
extends to:	VkBindImageMemoryInfo*/
typedef struct S_bind_image_memory_device_group_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t deviceIndexCount;
/*
len:	deviceIndexCount*/
	const uint32_t* pDeviceIndices;
/*|optional|	*/
	uint32_t splitInstanceBindRegionCount;
/*
len:	splitInstanceBindRegionCount*/
	const S_rect_2d* pSplitInstanceBindRegions;

S_bind_image_memory_device_group_info(
	 uint32_t  deviceIndexCount_
	,const uint32_t*  pDeviceIndices_
	,uint32_t  splitInstanceBindRegionCount_
	,const S_rect_2d*  pSplitInstanceBindRegions_);
};

/*	VkDeviceGroupRenderPassBeginInfo:
extends to:	VkRenderPassBeginInfo*/
typedef struct S_device_group_render_pass_begin_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;
	void* pNext = nullptr;
public:
	uint32_t deviceMask;
/*|optional|	*/
	uint32_t deviceRenderAreaCount;
/*
len:	deviceRenderAreaCount*/
	const S_rect_2d* pDeviceRenderAreas;

S_device_group_render_pass_begin_info(
	 uint32_t  deviceMask_
	,uint32_t  deviceRenderAreaCount_
	,const S_rect_2d*  pDeviceRenderAreas_);
};

/*	VkDeviceGroupCommandBufferBeginInfo:
extends to:	VkCommandBufferBeginInfo*/
typedef struct S_device_group_command_buffer_begin_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
	void* pNext = nullptr;
public:
	uint32_t deviceMask;

S_device_group_command_buffer_begin_info(
	 uint32_t  deviceMask_);
};

/*	VkDeviceGroupSubmitInfo:
extends to:	VkSubmitInfo*/
typedef struct S_device_group_submit_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const uint32_t* pWaitSemaphoreDeviceIndices;
/*|optional|	*/
	uint32_t commandBufferCount;
/*
len:	commandBufferCount*/
	const uint32_t* pCommandBufferDeviceMasks;
/*|optional|	*/
	uint32_t signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const uint32_t* pSignalSemaphoreDeviceIndices;

S_device_group_submit_info(
	 uint32_t  waitSemaphoreCount_
	,const uint32_t*    pWaitSemaphoreDeviceIndices_
	,uint32_t  commandBufferCount_
	,const uint32_t*    pCommandBufferDeviceMasks_
	,uint32_t  signalSemaphoreCount_
	,const uint32_t*  pSignalSemaphoreDeviceIndices_);
};

/*	VkDeviceGroupBindSparseInfo:
extends to:	VkBindSparseInfo*/
typedef struct S_device_group_bind_sparse_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;
	void* pNext = nullptr;
public:
	uint32_t resourceDeviceIndex;
	uint32_t memoryDeviceIndex;

S_device_group_bind_sparse_info(
	 uint32_t  resourceDeviceIndex_
	,uint32_t  memoryDeviceIndex_);
};

/*	VkDeviceGroupPresentCapabilitiesKHR:
returnd only*/
typedef struct S_device_group_present_capabilities_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
	void* pNext = nullptr;
public:
	uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE];
	F_device_group_present_mode_khr modes;

S_device_group_present_capabilities_KHR(
	 std::array< uint32_t ,VK_MAX_DEVICE_GROUP_SIZE > presentMask_
	,F_device_group_present_mode_khr  modes_);
};

/*	VkImageSwapchainCreateInfoKHR:
extends to:	VkImageCreateInfo*/
typedef struct S_image_swapchain_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkSwapchainKHR swapchain;

S_image_swapchain_create_info_KHR(
	 VkSwapchainKHR  swapchain_);
};

/*	VkBindImageMemorySwapchainInfoKHR:
extends to:	VkBindImageMemoryInfo*/
typedef struct S_bind_image_memory_swapchain_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkSwapchainKHR swapchain;
	uint32_t imageIndex;

S_bind_image_memory_swapchain_info_KHR(
	 VkSwapchainKHR  swapchain_
	,uint32_t  imageIndex_);
};

/*	VkAcquireNextImageInfoKHR:*/
typedef struct S_acquire_next_image_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkSwapchainKHR swapchain;
	uint64_t timeout;
/*|optional|	
(externsync)*/
	VkSemaphore semaphore;
/*|optional|	
(externsync)*/
	VkFence fence;
	uint32_t deviceMask;

S_acquire_next_image_info_KHR(
	 VkSwapchainKHR  swapchain_
	,uint64_t  timeout_
	,VkSemaphore  semaphore_
	,VkFence  fence_
	,uint32_t  deviceMask_);
};

/*	VkDeviceGroupPresentInfoKHR:
extends to:	VkPresentInfoKHR*/
typedef struct S_device_group_present_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t swapchainCount;
/*
len:	swapchainCount*/
	const uint32_t* pDeviceMasks;
	F_device_group_present_mode_khr mode;

S_device_group_present_info_KHR(
	 uint32_t  swapchainCount_
	,const uint32_t* pDeviceMasks_
	,F_device_group_present_mode_khr  mode_);
};

/*	VkDeviceGroupDeviceCreateInfo:
extends to:	VkDeviceCreateInfo*/
typedef struct S_device_group_device_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t physicalDeviceCount;
/*
len:	physicalDeviceCount*/
	const VkPhysicalDevice* pPhysicalDevices;

S_device_group_device_create_info(
	 uint32_t  physicalDeviceCount_
	,const VkPhysicalDevice*  pPhysicalDevices_);
};

/*	VkDeviceGroupSwapchainCreateInfoKHR:
extends to:	VkSwapchainCreateInfoKHR*/
typedef struct S_device_group_swapchain_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
	F_device_group_present_mode_khr modes;

S_device_group_swapchain_create_info_KHR(
	 F_device_group_present_mode_khr  modes_);
};

/*	VkDescriptorUpdateTemplateCreateInfo:*/
typedef struct S_descriptor_update_template_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkDescriptorUpdateTemplateCreateFlags flags;
/*Number of descriptor update entries to use for the update template*/
	uint32_t descriptorUpdateEntryCount;
/*Descriptor update entries for the template
len:	descriptorUpdateEntryCount*/
	const S_descriptor_update_template_entry* pDescriptorUpdateEntries;
	E_descriptor_update_template_type templateType;
/*|optional|	*/
	VkDescriptorSetLayout descriptorSetLayout;
	E_pipeline_bind_point pipelineBindPoint;
/*If used for push descriptors, this is the only allowed layout*/
	VkPipelineLayout pipelineLayout;
	uint32_t set;

S_descriptor_update_template_create_info(
	 VkDescriptorUpdateTemplateCreateFlags  flags_
	,uint32_t  descriptorUpdateEntryCount_
	,const S_descriptor_update_template_entry* pDescriptorUpdateEntries_
	,E_descriptor_update_template_type  templateType_
	,VkDescriptorSetLayout  descriptorSetLayout_
	,E_pipeline_bind_point  pipelineBindPoint_
	,VkPipelineLayout pipelineLayout_
	,uint32_t  set_);
};

/*	VkHdrMetadataEXT:*/
typedef struct S_hdr_metadata_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
	void* pNext = nullptr;
public:
/*Display primary's Red*/
	S_xy_color_EXT displayPrimaryRed;
/*Display primary's Green*/
	S_xy_color_EXT displayPrimaryGreen;
/*Display primary's Blue*/
	S_xy_color_EXT displayPrimaryBlue;
/*Display primary's Blue*/
	S_xy_color_EXT whitePoint;
/*Display maximum luminance*/
	float maxLuminance;
/*Display minimum luminance*/
	float minLuminance;
/*Content maximum luminance*/
	float maxContentLightLevel;
	float maxFrameAverageLightLevel;

S_hdr_metadata_EXT(
	 S_xy_color_EXT  displayPrimaryRed_
	,S_xy_color_EXT  displayPrimaryGreen_
	,S_xy_color_EXT  displayPrimaryBlue_
	,S_xy_color_EXT  whitePoint_
	,float  maxLuminance_
	,float  minLuminance_
	,float  maxContentLightLevel_
	,float  maxFrameAverageLightLevel_);
};

/*	VkPresentTimesInfoGOOGLE:
extends to:	VkPresentInfoKHR*/
typedef struct S_present_times_info_GOOGLE{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
	void* pNext = nullptr;
public:
/*Copy of VkPresentInfoKHR::swapchainCount*/
	uint32_t swapchainCount;
/*The earliest times to present images
len:	swapchainCount*/
	const S_present_time_GOOGLE* pTimes;

S_present_times_info_GOOGLE(
	 uint32_t  swapchainCount_
	,const S_present_time_GOOGLE*   pTimes_);
};

#ifdef VK_USE_PLATFORM_IOS_MVK
/*	VkIOSSurfaceCreateInfoMVK:*/
typedef struct S_ios_surface_create_info_MVK{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkIOSSurfaceCreateFlagsMVK flags;
	const void* pView;

S_ios_surface_create_info_MVK(
	 VkIOSSurfaceCreateFlagsMVK  flags_
	,const void*                                    pView_);
};

#endif

#ifdef VK_USE_PLATFORM_MACOS_MVK
/*	VkMacOSSurfaceCreateInfoMVK:*/
typedef struct S_mac_os_surface_create_info_MVK{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkMacOSSurfaceCreateFlagsMVK flags;
	const void* pView;

S_mac_os_surface_create_info_MVK(
	 VkMacOSSurfaceCreateFlagsMVK  flags_
	,const void*                                    pView_);
};

#endif

/*	VkPipelineViewportWScalingStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_w_scaling_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
	VkBool32 viewportWScalingEnable;
	uint32_t viewportCount;
/*
len:	viewportCount*/
	const S_viewport_w_scaling_NV* pViewportWScalings;

S_pipeline_viewport_w_scaling_state_create_info_NV(
	 VkBool32  viewportWScalingEnable_
	,uint32_t  viewportCount_
	,const S_viewport_w_scaling_NV*      pViewportWScalings_);
};

/*	VkPipelineViewportSwizzleStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_swizzle_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineViewportSwizzleStateCreateFlagsNV flags;
	uint32_t viewportCount;
/*|optional|	
len:	viewportCount*/
	const S_viewport_swizzle_NV* pViewportSwizzles;

S_pipeline_viewport_swizzle_state_create_info_NV(
	 VkPipelineViewportSwizzleStateCreateFlagsNV  flags_
	,uint32_t  viewportCount_
	,const S_viewport_swizzle_NV*      pViewportSwizzles_);
};

/*	VkPhysicalDeviceDiscardRectanglePropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_discard_rectangle_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
/*max number of active discard rectangles*/
	uint32_t maxDiscardRectangles;

S_physical_device_discard_rectangle_properties_EXT(
	 uint32_t  maxDiscardRectangles_);
};

/*	VkPipelineDiscardRectangleStateCreateInfoEXT:
extends to:	VkGraphicsPipelineCreateInfo*/
typedef struct S_pipeline_discard_rectangle_state_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineDiscardRectangleStateCreateFlagsEXT flags;
	E_discard_rectangle_mode_EXT discardRectangleMode;
/*|optional|	*/
	uint32_t discardRectangleCount;
/*|optional|	
len:	discardRectangleCount*/
	const S_rect_2d* pDiscardRectangles;

S_pipeline_discard_rectangle_state_create_info_EXT(
	 VkPipelineDiscardRectangleStateCreateFlagsEXT  flags_
	,E_discard_rectangle_mode_EXT  discardRectangleMode_
	,uint32_t  discardRectangleCount_
	,const S_rect_2d* pDiscardRectangles_);
};

/*	VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_multiview_per_view_attributes_properties_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
	void* pNext = nullptr;
public:
	VkBool32 perViewPositionAllComponents;

S_physical_device_multiview_per_view_attributes_properties_NVX(
	 VkBool32  perViewPositionAllComponents_);
};

/*	VkRenderPassInputAttachmentAspectCreateInfo:
extends to:	VkRenderPassCreateInfo*/
typedef struct S_render_pass_input_attachment_aspect_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;
	void* pNext = nullptr;
public:
	uint32_t aspectReferenceCount;
/*
len:	aspectReferenceCount*/
	const S_input_attachment_aspect_reference* pAspectReferences;

S_render_pass_input_attachment_aspect_create_info(
	 uint32_t  aspectReferenceCount_
	,const S_input_attachment_aspect_reference* pAspectReferences_);
};

/*	VkPhysicalDeviceSurfaceInfo2KHR:*/
typedef struct S_physical_device_surface_info2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;
	void* pNext = nullptr;
public:
	VkSurfaceKHR surface;

S_physical_device_surface_info2_KHR(
	 VkSurfaceKHR  surface_);
};

/*	VkSurfaceFormat2KHR:
returnd only*/
typedef struct S_surface_format2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR;
	void* pNext = nullptr;
public:
	S_surface_format_KHR surfaceFormat;

S_surface_format2_KHR(
	 S_surface_format_KHR  surfaceFormat_);
};

/*	VkDisplayProperties2KHR:
returnd only*/
typedef struct S_display_properties2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR;
	void* pNext = nullptr;
public:
	S_display_properties_KHR displayProperties;

S_display_properties2_KHR(
	 S_display_properties_KHR  displayProperties_);
};

/*	VkDisplayPlaneProperties2KHR:
returnd only*/
typedef struct S_display_plane_properties2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR;
	void* pNext = nullptr;
public:
	S_display_plane_properties_KHR displayPlaneProperties;

S_display_plane_properties2_KHR(
	 S_display_plane_properties_KHR  displayPlaneProperties_);
};

/*	VkDisplayModeProperties2KHR:
returnd only*/
typedef struct S_display_mode_properties2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;
	void* pNext = nullptr;
public:
	S_display_mode_properties_KHR displayModeProperties;

S_display_mode_properties2_KHR(
	 S_display_mode_properties_KHR  displayModeProperties_);
};

/*	VkDisplayPlaneInfo2KHR:*/
typedef struct S_display_plane_info2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR;
	void* pNext = nullptr;
public:
/*
(externsync)*/
	VkDisplayModeKHR mode;
	uint32_t planeIndex;

S_display_plane_info2_KHR(
	 VkDisplayModeKHR  mode_
	,uint32_t  planeIndex_);
};

/*	VkDisplayPlaneCapabilities2KHR:
returnd only*/
typedef struct S_display_plane_capabilities2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR;
	void* pNext = nullptr;
public:
	S_display_plane_capabilities_KHR capabilities;

S_display_plane_capabilities2_KHR(
	 S_display_plane_capabilities_KHR  capabilities_);
};

/*	VkSharedPresentSurfaceCapabilitiesKHR:
returnd only
extends to:	VkSurfaceCapabilities2KHR*/
typedef struct S_shared_present_surface_capabilities_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
	void* pNext = nullptr;
public:
/*Supported image usage flags if swapchain created using a shared present mode*/
	F_image_usage sharedPresentSupportedUsageFlags;

S_shared_present_surface_capabilities_KHR(
	 F_image_usage  sharedPresentSupportedUsageFlags_);
};

/*	VkPhysicalDevice16BitStorageFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_16bit_storage_features{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
	void* pNext = nullptr;
public:
/*16-bit integer/floating-point variables supported in BufferBlock*/
	VkBool32 storageBuffer16BitAccess;
/*16-bit integer/floating-point variables supported in BufferBlock and Block*/
	VkBool32 uniformAndStorageBuffer16BitAccess;
/*16-bit integer/floating-point variables supported in PushConstant*/
	VkBool32 storagePushConstant16;
/*16-bit integer/floating-point variables supported in shader inputs and outputs*/
	VkBool32 storageInputOutput16;

S_physical_device_16bit_storage_features(
	 VkBool32  storageBuffer16BitAccess_
	,VkBool32  uniformAndStorageBuffer16BitAccess_
	,VkBool32  storagePushConstant16_
	,VkBool32  storageInputOutput16_);
};

/*	VkPhysicalDeviceSubgroupProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_subgroup_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
	void* pNext = nullptr;
public:
/*The size of a subgroup for this queue.*/
	uint32_t subgroupSize;
/*Bitfield of what shader stages support subgroup operations*/
	F_shader_stage supportedStages;
/*Bitfield of what subgroup operations are supported.*/
	F_subgroup_feature supportedOperations;
/*Flag to specify whether quad operations are available in all stages.*/
	VkBool32 quadOperationsInAllStages;

S_physical_device_subgroup_properties(
	 uint32_t  subgroupSize_
	,F_shader_stage  supportedStages_
	,F_subgroup_feature  supportedOperations_
	,VkBool32  quadOperationsInAllStages_);
};

/*	VkBufferMemoryRequirementsInfo2:*/
typedef struct S_buffer_memory_requirements_info2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
	void* pNext = nullptr;
public:
	VkBuffer buffer;

S_buffer_memory_requirements_info2(
	 VkBuffer  buffer_);
};

/*	VkImageSparseMemoryRequirementsInfo2:*/
typedef struct S_image_sparse_memory_requirements_info2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
	void* pNext = nullptr;
public:
	VkImage image;

S_image_sparse_memory_requirements_info2(
	 VkImage  image_);
};

/*	VkSparseImageMemoryRequirements2:
returnd only*/
typedef struct S_sparse_image_memory_requirements2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;
	void* pNext = nullptr;
public:
	S_sparse_image_memory_requirements memoryRequirements;

S_sparse_image_memory_requirements2(
	 S_sparse_image_memory_requirements  memoryRequirements_);
};

/*	VkPhysicalDevicePointClippingProperties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_point_clipping_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;
	void* pNext = nullptr;
public:
	E_point_clipping_behavior pointClippingBehavior;

S_physical_device_point_clipping_properties(
	 E_point_clipping_behavior  pointClippingBehavior_);
};

/*	VkMemoryDedicatedRequirements:
returnd only
extends to:	VkMemoryRequirements2*/
typedef struct S_memory_dedicated_requirements{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
	void* pNext = nullptr;
public:
	VkBool32 prefersDedicatedAllocation;
	VkBool32 requiresDedicatedAllocation;

S_memory_dedicated_requirements(
	 VkBool32  prefersDedicatedAllocation_
	,VkBool32  requiresDedicatedAllocation_);
};

/*	VkMemoryDedicatedAllocateInfo:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_memory_dedicated_allocate_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
	void* pNext = nullptr;
public:
/*Image that this allocation will be bound to*/
	VkImage image;
/*Buffer that this allocation will be bound to*/
	VkBuffer buffer;

S_memory_dedicated_allocate_info(
	 VkImage  image_
	,VkBuffer  buffer_);
};

/*	VkImageViewUsageCreateInfo:
extends to:	VkImageViewCreateInfo*/
typedef struct S_image_view_usage_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO;
	void* pNext = nullptr;
public:
	F_image_usage usage;

S_image_view_usage_create_info(
	 F_image_usage  usage_);
};

/*	VkPipelineTessellationDomainOriginStateCreateInfo:
extends to:	VkPipelineTessellationStateCreateInfo*/
typedef struct S_pipeline_tessellation_domain_origin_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
	E_tessellation_domain_origin domainOrigin;

S_pipeline_tessellation_domain_origin_state_create_info(
	 E_tessellation_domain_origin  domainOrigin_);
};

/*	VkSamplerYcbcrConversionInfo:
extends to:	VkSamplerCreateInfo,VkImageViewCreateInfo*/
typedef struct S_sampler_ycbcr_conversion_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO;
	void* pNext = nullptr;
public:
	VkSamplerYcbcrConversion conversion;

S_sampler_ycbcr_conversion_info(
	 VkSamplerYcbcrConversion  conversion_);
};

/*	VkBindImagePlaneMemoryInfo:
extends to:	VkBindImageMemoryInfo*/
typedef struct S_bind_image_plane_memory_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO;
	void* pNext = nullptr;
public:
	F_image_aspect planeAspect;

S_bind_image_plane_memory_info(
	 F_image_aspect  planeAspect_);
};

/*	VkImagePlaneMemoryRequirementsInfo:
extends to:	VkImageMemoryRequirementsInfo2*/
typedef struct S_image_plane_memory_requirements_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
	void* pNext = nullptr;
public:
	F_image_aspect planeAspect;

S_image_plane_memory_requirements_info(
	 F_image_aspect  planeAspect_);
};

/*	VkPhysicalDeviceSamplerYcbcrConversionFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_sampler_ycbcr_conversion_features{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
	void* pNext = nullptr;
public:
/*Sampler color conversion supported*/
	VkBool32 samplerYcbcrConversion;

S_physical_device_sampler_ycbcr_conversion_features(
	 VkBool32  samplerYcbcrConversion_);
};

/*	VkSamplerYcbcrConversionImageFormatProperties:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_sampler_ycbcr_conversion_image_format_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;
	void* pNext = nullptr;
public:
	uint32_t combinedImageSamplerDescriptorCount;

S_sampler_ycbcr_conversion_image_format_properties(
	 uint32_t  combinedImageSamplerDescriptorCount_);
};

/*	VkTextureLODGatherFormatPropertiesAMD:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_texture_lod_gather_format_properties_AMD{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;
	void* pNext = nullptr;
public:
	VkBool32 supportsTextureGatherLODBiasAMD;

S_texture_lod_gather_format_properties_AMD(
	 VkBool32  supportsTextureGatherLODBiasAMD_);
};

/*	VkConditionalRenderingBeginInfoEXT:*/
typedef struct S_conditional_rendering_begin_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;
	void* pNext = nullptr;
public:
	VkBuffer buffer;
	VkDeviceSize offset;
/*|optional|	*/
	F_conditional_rendering_ext flags;

S_conditional_rendering_begin_info_EXT(
	 VkBuffer  buffer_
	,VkDeviceSize  offset_
	,F_conditional_rendering_ext  flags_);
};

/*	VkProtectedSubmitInfo:
extends to:	VkSubmitInfo*/
typedef struct S_protected_submit_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;
	void* pNext = nullptr;
public:
/*Submit protected command buffers*/
	VkBool32 protectedSubmit;

S_protected_submit_info(
	 VkBool32  protectedSubmit_);
};

/*	VkPhysicalDeviceProtectedMemoryFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_protected_memory_features{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
	void* pNext = nullptr;
public:
	VkBool32 protectedMemory;

S_physical_device_protected_memory_features(
	 VkBool32  protectedMemory_);
};

/*	VkPhysicalDeviceProtectedMemoryProperties:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_protected_memory_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;
	void* pNext = nullptr;
public:
	VkBool32 protectedNoFault;

S_physical_device_protected_memory_properties(
	 VkBool32  protectedNoFault_);
};

/*	VkDeviceQueueInfo2:*/
typedef struct S_device_queue_info2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;
	void* pNext = nullptr;
public:
	F_device_queue_create flags;
	uint32_t queueFamilyIndex;
	uint32_t queueIndex;

S_device_queue_info2(
	 F_device_queue_create  flags_
	,uint32_t  queueFamilyIndex_
	,uint32_t  queueIndex_);
};

/*	VkPipelineCoverageToColorStateCreateInfoNV:
extends to:	VkPipelineMultisampleStateCreateInfo*/
typedef struct S_pipeline_coverage_to_color_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineCoverageToColorStateCreateFlagsNV flags;
	VkBool32 coverageToColorEnable;
/*|optional|	*/
	uint32_t coverageToColorLocation;

S_pipeline_coverage_to_color_state_create_info_NV(
	 VkPipelineCoverageToColorStateCreateFlagsNV  flags_
	,VkBool32  coverageToColorEnable_
	,uint32_t  coverageToColorLocation_);
};

/*	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_sampler_filter_minmax_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	VkBool32 filterMinmaxSingleComponentFormats;
	VkBool32 filterMinmaxImageComponentMapping;

S_physical_device_sampler_filter_minmax_properties_EXT(
	 VkBool32  filterMinmaxSingleComponentFormats_
	,VkBool32  filterMinmaxImageComponentMapping_);
};

/*	VkSampleLocationsInfoEXT:
extends to:	VkImageMemoryBarrier*/
typedef struct S_sample_locations_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT;
	void* pNext = nullptr;
public:
	F_sample_count sampleLocationsPerPixel;
	S_extent_2d sampleLocationGridSize;
	uint32_t sampleLocationsCount;
/*
len:	sampleLocationsCount*/
	const S_sample_location_EXT* pSampleLocations;

S_sample_locations_info_EXT(
	 F_sample_count  sampleLocationsPerPixel_
	,S_extent_2d  sampleLocationGridSize_
	,uint32_t  sampleLocationsCount_
	,const S_sample_location_EXT* pSampleLocations_);
};

/*	VkRenderPassSampleLocationsBeginInfoEXT:
extends to:	VkRenderPassBeginInfo*/
typedef struct S_render_pass_sample_locations_begin_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t attachmentInitialSampleLocationsCount;
/*
len:	attachmentInitialSampleLocationsCount*/
	const S_attachment_sample_locations_EXT* pAttachmentInitialSampleLocations;
/*|optional|	*/
	uint32_t postSubpassSampleLocationsCount;
/*
len:	postSubpassSampleLocationsCount*/
	const S_subpass_sample_locations_EXT* pPostSubpassSampleLocations;

S_render_pass_sample_locations_begin_info_EXT(
	 uint32_t  attachmentInitialSampleLocationsCount_
	,const S_attachment_sample_locations_EXT* pAttachmentInitialSampleLocations_
	,uint32_t  postSubpassSampleLocationsCount_
	,const S_subpass_sample_locations_EXT* pPostSubpassSampleLocations_);
};

/*	VkPipelineSampleLocationsStateCreateInfoEXT:
extends to:	VkPipelineMultisampleStateCreateInfo*/
typedef struct S_pipeline_sample_locations_state_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	VkBool32 sampleLocationsEnable;
	S_sample_locations_info_EXT sampleLocationsInfo;

S_pipeline_sample_locations_state_create_info_EXT(
	 VkBool32  sampleLocationsEnable_
	,S_sample_locations_info_EXT  sampleLocationsInfo_);
};

/*	VkPhysicalDeviceSampleLocationsPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_sample_locations_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	F_sample_count sampleLocationSampleCounts;
	S_extent_2d maxSampleLocationGridSize;
	float sampleLocationCoordinateRange[2];
	uint32_t sampleLocationSubPixelBits;
	VkBool32 variableSampleLocations;

S_physical_device_sample_locations_properties_EXT(
	 F_sample_count  sampleLocationSampleCounts_
	,S_extent_2d  maxSampleLocationGridSize_
	,std::array< float ,2 > sampleLocationCoordinateRange_
	,uint32_t  sampleLocationSubPixelBits_
	,VkBool32  variableSampleLocations_);
};

/*	VkMultisamplePropertiesEXT:
returnd only*/
typedef struct S_multisample_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	S_extent_2d maxSampleLocationGridSize;

S_multisample_properties_EXT(
	 S_extent_2d  maxSampleLocationGridSize_);
};

/*	VkSamplerReductionModeCreateInfoEXT:
extends to:	VkSamplerCreateInfo*/
typedef struct S_sampler_reduction_mode_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	E_sampler_reduction_mode_EXT reductionMode;

S_sampler_reduction_mode_create_info_EXT(
	 E_sampler_reduction_mode_EXT  reductionMode_);
};

/*	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_blend_operation_advanced_features_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
	void* pNext = nullptr;
public:
	VkBool32 advancedBlendCoherentOperations;

S_physical_device_blend_operation_advanced_features_EXT(
	 VkBool32  advancedBlendCoherentOperations_);
};

/*	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_blend_operation_advanced_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	uint32_t advancedBlendMaxColorAttachments;
	VkBool32 advancedBlendIndependentBlend;
	VkBool32 advancedBlendNonPremultipliedSrcColor;
	VkBool32 advancedBlendNonPremultipliedDstColor;
	VkBool32 advancedBlendCorrelatedOverlap;
	VkBool32 advancedBlendAllOperations;

S_physical_device_blend_operation_advanced_properties_EXT(
	 uint32_t  advancedBlendMaxColorAttachments_
	,VkBool32  advancedBlendIndependentBlend_
	,VkBool32  advancedBlendNonPremultipliedSrcColor_
	,VkBool32  advancedBlendNonPremultipliedDstColor_
	,VkBool32  advancedBlendCorrelatedOverlap_
	,VkBool32  advancedBlendAllOperations_);
};

/*	VkPipelineColorBlendAdvancedStateCreateInfoEXT:
extends to:	VkPipelineColorBlendStateCreateInfo*/
typedef struct S_pipeline_color_blend_advanced_state_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	VkBool32 srcPremultiplied;
	VkBool32 dstPremultiplied;
	E_blend_overlap_EXT blendOverlap;

S_pipeline_color_blend_advanced_state_create_info_EXT(
	 VkBool32  srcPremultiplied_
	,VkBool32  dstPremultiplied_
	,E_blend_overlap_EXT  blendOverlap_);
};

/*	VkPhysicalDeviceInlineUniformBlockFeaturesEXT:
returnd only
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_inline_uniform_block_features_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;
	void* pNext = nullptr;
public:
	VkBool32 inlineUniformBlock;
	VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind;

S_physical_device_inline_uniform_block_features_EXT(
	 VkBool32  inlineUniformBlock_
	,VkBool32  descriptorBindingInlineUniformBlockUpdateAfterBind_);
};

/*	VkPhysicalDeviceInlineUniformBlockPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_inline_uniform_block_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	uint32_t maxInlineUniformBlockSize;
	uint32_t maxPerStageDescriptorInlineUniformBlocks;
	uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
	uint32_t maxDescriptorSetInlineUniformBlocks;
	uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks;

S_physical_device_inline_uniform_block_properties_EXT(
	 uint32_t  maxInlineUniformBlockSize_
	,uint32_t  maxPerStageDescriptorInlineUniformBlocks_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_
	,uint32_t  maxDescriptorSetInlineUniformBlocks_
	,uint32_t  maxDescriptorSetUpdateAfterBindInlineUniformBlocks_);
};

/*	VkWriteDescriptorSetInlineUniformBlockEXT:
extends to:	VkWriteDescriptorSet*/
typedef struct S_write_descriptor_set_inline_uniform_block_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT;
	void* pNext = nullptr;
public:
	uint32_t dataSize;
/*
len:	dataSize*/
	const void* pData;

S_write_descriptor_set_inline_uniform_block_EXT(
	 uint32_t  dataSize_
	,const void* pData_);
};

/*	VkDescriptorPoolInlineUniformBlockCreateInfoEXT:
extends to:	VkDescriptorPoolCreateInfo*/
typedef struct S_descriptor_pool_inline_uniform_block_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	uint32_t maxInlineUniformBlockBindings;

S_descriptor_pool_inline_uniform_block_create_info_EXT(
	 uint32_t  maxInlineUniformBlockBindings_);
};

/*	VkPipelineCoverageModulationStateCreateInfoNV:
extends to:	VkPipelineMultisampleStateCreateInfo*/
typedef struct S_pipeline_coverage_modulation_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineCoverageModulationStateCreateFlagsNV flags;
	E_coverage_modulation_mode_NV coverageModulationMode;
	VkBool32 coverageModulationTableEnable;
	uint32_t coverageModulationTableCount;
/*|optional|	
len:	coverageModulationTableCount*/
	const float* pCoverageModulationTable;

S_pipeline_coverage_modulation_state_create_info_NV(
	 VkPipelineCoverageModulationStateCreateFlagsNV  flags_
	,E_coverage_modulation_mode_NV  coverageModulationMode_
	,VkBool32  coverageModulationTableEnable_
	,uint32_t  coverageModulationTableCount_
	,const float* pCoverageModulationTable_);
};

/*	VkImageFormatListCreateInfoKHR:
extends to:	VkImageCreateInfo*/
typedef struct S_image_format_list_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t viewFormatCount;
/*
len:	viewFormatCount*/
	const E_format* pViewFormats;

S_image_format_list_create_info_KHR(
	 uint32_t  viewFormatCount_
	,const E_format*      pViewFormats_);
};

/*	VkValidationCacheCreateInfoEXT:*/
typedef struct S_validation_cache_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkValidationCacheCreateFlagsEXT flags;
/*|optional|	*/
	size_t initialDataSize;
/*
len:	initialDataSize*/
	const void* pInitialData;

S_validation_cache_create_info_EXT(
	 VkValidationCacheCreateFlagsEXT  flags_
	,size_t  initialDataSize_
	,const void*            pInitialData_);
};

/*	VkShaderModuleValidationCacheCreateInfoEXT:
extends to:	VkShaderModuleCreateInfo*/
typedef struct S_shader_module_validation_cache_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	VkValidationCacheEXT validationCache;

S_shader_module_validation_cache_create_info_EXT(
	 VkValidationCacheEXT  validationCache_);
};

/*	VkPhysicalDeviceMaintenance3Properties:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_maintenance3_properties{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
	void* pNext = nullptr;
public:
	uint32_t maxPerSetDescriptors;
	VkDeviceSize maxMemoryAllocationSize;

S_physical_device_maintenance3_properties(
	 uint32_t  maxPerSetDescriptors_
	,VkDeviceSize  maxMemoryAllocationSize_);
};

/*	VkPhysicalDeviceShaderDrawParameterFeatures:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shader_draw_parameter_features{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES;
	void* pNext = nullptr;
public:
	VkBool32 shaderDrawParameters;

S_physical_device_shader_draw_parameter_features(
	 VkBool32  shaderDrawParameters_);
};

/*	VkNativeBufferANDROID:*/
typedef struct S_native_buffer_ANDROID{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID;
	void* pNext = nullptr;
public:
	const void* handle;
	int stride;
	int format;
	int usage;

S_native_buffer_ANDROID(
	 const void* handle_
	,int  stride_
	,int  format_
	,int  usage_);
};

/*	VkDeviceQueueGlobalPriorityCreateInfoEXT:
extends to:	VkDeviceQueueCreateInfo*/
typedef struct S_device_queue_global_priority_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	E_queue_global_priority_EXT globalPriority;

S_device_queue_global_priority_create_info_EXT(
	 E_queue_global_priority_EXT  globalPriority_);
};

/*	VkDebugUtilsObjectNameInfoEXT:*/
typedef struct S_debug_utils_object_name_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
	void* pNext = nullptr;
public:
	E_object_type objectType;
	uint64_t objectHandle;
/*|optional|	
len:	null-terminated*/
	const char* pObjectName;

S_debug_utils_object_name_info_EXT(
	 E_object_type  objectType_
	,uint64_t  objectHandle_
	,const char*      pObjectName_);
};

/*	VkDebugUtilsObjectTagInfoEXT:*/
typedef struct S_debug_utils_object_tag_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
	void* pNext = nullptr;
public:
	E_object_type objectType;
	uint64_t objectHandle;
	uint64_t tagName;
	size_t tagSize;
/*
len:	tagSize*/
	const void* pTag;

S_debug_utils_object_tag_info_EXT(
	 E_object_type  objectType_
	,uint64_t  objectHandle_
	,uint64_t  tagName_
	,size_t  tagSize_
	,const void*              pTag_);
};

/*	VkDebugUtilsLabelEXT:*/
typedef struct S_debug_utils_label_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
	void* pNext = nullptr;
public:
/*
len:	null-terminated*/
	const char* pLabelName;
/*|optional|	*/
	float color[4];

S_debug_utils_label_EXT(
	 const char*      pLabelName_
	,std::array< float ,4 > color_);
};

/*	VkDebugUtilsMessengerCreateInfoEXT:
extends to:	VkInstanceCreateInfo*/
typedef struct S_debug_utils_messenger_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkDebugUtilsMessengerCreateFlagsEXT flags;
	F_debug_utils_message_severity_ext messageSeverity;
	F_debug_utils_message_type_ext messageType;
	PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback;
/*|optional|	*/
	void* pUserData;

S_debug_utils_messenger_create_info_EXT(
	 VkDebugUtilsMessengerCreateFlagsEXT  flags_
	,F_debug_utils_message_severity_ext  messageSeverity_
	,F_debug_utils_message_type_ext  messageType_
	,PFN_vkDebugUtilsMessengerCallbackEXT  pfnUserCallback_
	,void*                                pUserData_);
};

/*	VkDebugUtilsMessengerCallbackDataEXT:*/
typedef struct S_debug_utils_messenger_callback_data_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkDebugUtilsMessengerCallbackDataFlagsEXT flags;
/*|optional|	
len:	null-terminated*/
	const char* pMessageIdName;
/*|optional|	*/
	int32_t messageIdNumber;
/*
len:	null-terminated*/
	const char* pMessage;
/*|optional|	*/
	uint32_t queueLabelCount;
/*|optional|	
len:	queueLabelCount*/
	S_debug_utils_label_EXT* pQueueLabels;
/*|optional|	*/
	uint32_t cmdBufLabelCount;
/*|optional|	
len:	cmdBufLabelCount*/
	S_debug_utils_label_EXT* pCmdBufLabels;
	uint32_t objectCount;
/*
len:	objectCount*/
	S_debug_utils_object_name_info_EXT* pObjects;

S_debug_utils_messenger_callback_data_EXT(
	 VkDebugUtilsMessengerCallbackDataFlagsEXT  flags_
	,const char*                                  pMessageIdName_
	,int32_t  messageIdNumber_
	,const char*                                                  pMessage_
	,uint32_t  queueLabelCount_
	,S_debug_utils_label_EXT*  pQueueLabels_
	,uint32_t  cmdBufLabelCount_
	,S_debug_utils_label_EXT* pCmdBufLabels_
	,uint32_t  objectCount_
	,S_debug_utils_object_name_info_EXT*             pObjects_);
};

/*	VkImportMemoryHostPointerInfoEXT:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_memory_host_pointer_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
	void* pNext = nullptr;
public:
	F_external_memory_handle_type handleType;
/*|optional|	*/
	void* pHostPointer;

S_import_memory_host_pointer_info_EXT(
	 F_external_memory_handle_type  handleType_
	,void* pHostPointer_);
};

/*	VkMemoryHostPointerPropertiesEXT:*/
typedef struct S_memory_host_pointer_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	uint32_t memoryTypeBits;

S_memory_host_pointer_properties_EXT(
	 uint32_t  memoryTypeBits_);
};

/*	VkPhysicalDeviceExternalMemoryHostPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_external_memory_host_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	VkDeviceSize minImportedHostPointerAlignment;

S_physical_device_external_memory_host_properties_EXT(
	 VkDeviceSize  minImportedHostPointerAlignment_);
};

/*	VkPhysicalDeviceConservativeRasterizationPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_conservative_rasterization_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
/*The size in pixels the primitive is enlarged at each edge during conservative rasterization*/
	float primitiveOverestimationSize;
/*The maximum additional overestimation the client can specify in the pipeline state*/
	float maxExtraPrimitiveOverestimationSize;
/*The granularity of extra overestimation sizes the implementations supports between 0 and maxExtraOverestimationSize*/
	float extraPrimitiveOverestimationSizeGranularity;
/*true if the implementation supports conservative rasterization underestimation mode*/
	VkBool32 primitiveUnderestimation;
/*true if conservative rasterization also applies to points and lines*/
	VkBool32 conservativePointAndLineRasterization;
/*true if degenerate triangles (those with zero area after snap) are rasterized*/
	VkBool32 degenerateTrianglesRasterized;
/*true if degenerate lines (those with zero length after snap) are rasterized*/
	VkBool32 degenerateLinesRasterized;
/*true if the implementation supports the FullyCoveredEXT SPIR-V builtin fragment shader input variable*/
	VkBool32 fullyCoveredFragmentShaderInputVariable;
/*true if the implementation supports both conservative rasterization and post depth coverage sample coverage mask*/
	VkBool32 conservativeRasterizationPostDepthCoverage;

S_physical_device_conservative_rasterization_properties_EXT(
	 float  primitiveOverestimationSize_
	,float  maxExtraPrimitiveOverestimationSize_
	,float  extraPrimitiveOverestimationSizeGranularity_
	,VkBool32  primitiveUnderestimation_
	,VkBool32  conservativePointAndLineRasterization_
	,VkBool32  degenerateTrianglesRasterized_
	,VkBool32  degenerateLinesRasterized_
	,VkBool32  fullyCoveredFragmentShaderInputVariable_
	,VkBool32  conservativeRasterizationPostDepthCoverage_);
};

/*	VkPhysicalDeviceShaderCorePropertiesAMD:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_shader_core_properties_AMD{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
	void* pNext = nullptr;
public:
/*number of shader engines*/
	uint32_t shaderEngineCount;
/*number of shader arrays*/
	uint32_t shaderArraysPerEngineCount;
/*number of CUs per shader array*/
	uint32_t computeUnitsPerShaderArray;
/*number of SIMDs per compute unit*/
	uint32_t simdPerComputeUnit;
/*number of wavefront slots in each SIMD*/
	uint32_t wavefrontsPerSimd;
/*number of threads per wavefront*/
	uint32_t wavefrontSize;
/*number of physical SGPRs per SIMD*/
	uint32_t sgprsPerSimd;
/*minimum number of SGPRs that can be allocated by a wave*/
	uint32_t minSgprAllocation;
/*number of available SGPRs*/
	uint32_t maxSgprAllocation;
/*SGPRs are allocated in groups of this size*/
	uint32_t sgprAllocationGranularity;
/*number of physical VGPRs per SIMD*/
	uint32_t vgprsPerSimd;
/*minimum number of VGPRs that can be allocated by a wave*/
	uint32_t minVgprAllocation;
/*number of available VGPRs*/
	uint32_t maxVgprAllocation;
/*VGPRs are allocated in groups of this size*/
	uint32_t vgprAllocationGranularity;

S_physical_device_shader_core_properties_AMD(
	 uint32_t  shaderEngineCount_
	,uint32_t  shaderArraysPerEngineCount_
	,uint32_t  computeUnitsPerShaderArray_
	,uint32_t  simdPerComputeUnit_
	,uint32_t  wavefrontsPerSimd_
	,uint32_t  wavefrontSize_
	,uint32_t  sgprsPerSimd_
	,uint32_t  minSgprAllocation_
	,uint32_t  maxSgprAllocation_
	,uint32_t  sgprAllocationGranularity_
	,uint32_t  vgprsPerSimd_
	,uint32_t  minVgprAllocation_
	,uint32_t  maxVgprAllocation_
	,uint32_t  vgprAllocationGranularity_);
};

/*	VkPipelineRasterizationConservativeStateCreateInfoEXT:
extends to:	VkPipelineRasterizationStateCreateInfo*/
typedef struct S_pipeline_rasterization_conservative_state_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineRasterizationConservativeStateCreateFlagsEXT flags;
	E_conservative_rasterization_mode_EXT conservativeRasterizationMode;
	float extraPrimitiveOverestimationSize;

S_pipeline_rasterization_conservative_state_create_info_EXT(
	 VkPipelineRasterizationConservativeStateCreateFlagsEXT  flags_
	,E_conservative_rasterization_mode_EXT  conservativeRasterizationMode_
	,float  extraPrimitiveOverestimationSize_);
};

/*	VkPhysicalDeviceDescriptorIndexingFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_descriptor_indexing_features_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT;
	void* pNext = nullptr;
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

S_physical_device_descriptor_indexing_features_EXT(
	 VkBool32  shaderInputAttachmentArrayDynamicIndexing_
	,VkBool32  shaderUniformTexelBufferArrayDynamicIndexing_
	,VkBool32  shaderStorageTexelBufferArrayDynamicIndexing_
	,VkBool32  shaderUniformBufferArrayNonUniformIndexing_
	,VkBool32  shaderSampledImageArrayNonUniformIndexing_
	,VkBool32  shaderStorageBufferArrayNonUniformIndexing_
	,VkBool32  shaderStorageImageArrayNonUniformIndexing_
	,VkBool32  shaderInputAttachmentArrayNonUniformIndexing_
	,VkBool32  shaderUniformTexelBufferArrayNonUniformIndexing_
	,VkBool32  shaderStorageTexelBufferArrayNonUniformIndexing_
	,VkBool32  descriptorBindingUniformBufferUpdateAfterBind_
	,VkBool32  descriptorBindingSampledImageUpdateAfterBind_
	,VkBool32  descriptorBindingStorageImageUpdateAfterBind_
	,VkBool32  descriptorBindingStorageBufferUpdateAfterBind_
	,VkBool32  descriptorBindingUniformTexelBufferUpdateAfterBind_
	,VkBool32  descriptorBindingStorageTexelBufferUpdateAfterBind_
	,VkBool32  descriptorBindingUpdateUnusedWhilePending_
	,VkBool32  descriptorBindingPartiallyBound_
	,VkBool32  descriptorBindingVariableDescriptorCount_
	,VkBool32  runtimeDescriptorArray_);
};

/*	VkPhysicalDeviceDescriptorIndexingPropertiesEXT:
returnd only
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_descriptor_indexing_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT;
	void* pNext = nullptr;
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

S_physical_device_descriptor_indexing_properties_EXT(
	 uint32_t  maxUpdateAfterBindDescriptorsInAllPools_
	,VkBool32  shaderUniformBufferArrayNonUniformIndexingNative_
	,VkBool32  shaderSampledImageArrayNonUniformIndexingNative_
	,VkBool32  shaderStorageBufferArrayNonUniformIndexingNative_
	,VkBool32  shaderStorageImageArrayNonUniformIndexingNative_
	,VkBool32  shaderInputAttachmentArrayNonUniformIndexingNative_
	,VkBool32  robustBufferAccessUpdateAfterBind_
	,VkBool32  quadDivergentImplicitLod_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindSamplers_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindUniformBuffers_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindStorageBuffers_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindSampledImages_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindStorageImages_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindInputAttachments_
	,uint32_t  maxPerStageUpdateAfterBindResources_
	,uint32_t  maxDescriptorSetUpdateAfterBindSamplers_
	,uint32_t  maxDescriptorSetUpdateAfterBindUniformBuffers_
	,uint32_t  maxDescriptorSetUpdateAfterBindUniformBuffersDynamic_
	,uint32_t  maxDescriptorSetUpdateAfterBindStorageBuffers_
	,uint32_t  maxDescriptorSetUpdateAfterBindStorageBuffersDynamic_
	,uint32_t  maxDescriptorSetUpdateAfterBindSampledImages_
	,uint32_t  maxDescriptorSetUpdateAfterBindStorageImages_
	,uint32_t  maxDescriptorSetUpdateAfterBindInputAttachments_);
};

/*	VkDescriptorSetLayoutBindingFlagsCreateInfoEXT:
extends to:	VkDescriptorSetLayoutCreateInfo*/
typedef struct S_descriptor_set_layout_binding_flags_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t bindingCount;
/*|optional|	
len:	bindingCount*/
	const F_descriptor_binding_ext* pBindingFlags;

S_descriptor_set_layout_binding_flags_create_info_EXT(
	 uint32_t  bindingCount_
	,const F_descriptor_binding_ext* pBindingFlags_);
};

/*	VkDescriptorSetVariableDescriptorCountAllocateInfoEXT:
extends to:	VkDescriptorSetAllocateInfo*/
typedef struct S_descriptor_set_variable_descriptor_count_allocate_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t descriptorSetCount;
/*
len:	descriptorSetCount*/
	const uint32_t* pDescriptorCounts;

S_descriptor_set_variable_descriptor_count_allocate_info_EXT(
	 uint32_t  descriptorSetCount_
	,const uint32_t* pDescriptorCounts_);
};

/*	VkDescriptorSetVariableDescriptorCountLayoutSupportEXT:
returnd only
extends to:	VkDescriptorSetLayoutSupport*/
typedef struct S_descriptor_set_variable_descriptor_count_layout_support_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT;
	void* pNext = nullptr;
public:
	uint32_t maxVariableDescriptorCount;

S_descriptor_set_variable_descriptor_count_layout_support_EXT(
	 uint32_t  maxVariableDescriptorCount_);
};

/*	VkAttachmentDescription2KHR:*/
typedef struct S_attachment_description2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_attachment_description flags;
	E_format format;
	F_sample_count samples;
/*Load operation for color or depth data*/
	E_attachment_load_op loadOp;
/*Store operation for color or depth data*/
	E_attachment_store_op storeOp;
/*Load operation for stencil data*/
	E_attachment_load_op stencilLoadOp;
/*Store operation for stencil data*/
	E_attachment_store_op stencilStoreOp;
	E_image_layout initialLayout;
	E_image_layout finalLayout;

S_attachment_description2_KHR(
	 F_attachment_description  flags_
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR;
	void* pNext = nullptr;
public:
	uint32_t attachment;
	E_image_layout layout;
	F_image_aspect aspectMask;

S_attachment_reference2_KHR(
	 uint32_t  attachment_
	,E_image_layout  layout_
	,F_image_aspect  aspectMask_);
};

/*	VkSubpassDescription2KHR:*/
typedef struct S_subpass_description2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_subpass_description flags;
	E_pipeline_bind_point pipelineBindPoint;
	uint32_t viewMask;
/*|optional|	*/
	uint32_t inputAttachmentCount;
/*
len:	inputAttachmentCount*/
	const S_attachment_reference2_KHR* pInputAttachments;
/*|optional|	*/
	uint32_t colorAttachmentCount;
/*
len:	colorAttachmentCount*/
	const S_attachment_reference2_KHR* pColorAttachments;
/*|optional|	
len:	colorAttachmentCount*/
	const S_attachment_reference2_KHR* pResolveAttachments;
/*|optional|	*/
	const S_attachment_reference2_KHR* pDepthStencilAttachment;
/*|optional|	*/
	uint32_t preserveAttachmentCount;
/*
len:	preserveAttachmentCount*/
	const uint32_t* pPreserveAttachments;

S_subpass_description2_KHR(
	 F_subpass_description  flags_
	,E_pipeline_bind_point  pipelineBindPoint_
	,uint32_t  viewMask_
	,uint32_t  inputAttachmentCount_
	,const S_attachment_reference2_KHR* pInputAttachments_
	,uint32_t  colorAttachmentCount_
	,const S_attachment_reference2_KHR* pColorAttachments_
	,const S_attachment_reference2_KHR* pResolveAttachments_
	,const S_attachment_reference2_KHR*            pDepthStencilAttachment_
	,uint32_t  preserveAttachmentCount_
	,const uint32_t*               pPreserveAttachments_);
};

/*	VkSubpassDependency2KHR:*/
typedef struct S_subpass_dependency2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR;
	void* pNext = nullptr;
public:
	uint32_t srcSubpass;
	uint32_t dstSubpass;
	F_pipeline_stage srcStageMask;
	F_pipeline_stage dstStageMask;
/*|optional|	*/
	F_access srcAccessMask;
/*|optional|	*/
	F_access dstAccessMask;
/*|optional|	*/
	F_dependency dependencyFlags;
/*|optional|	*/
	int32_t viewOffset;

S_subpass_dependency2_KHR(
	 uint32_t  srcSubpass_
	,uint32_t  dstSubpass_
	,F_pipeline_stage  srcStageMask_
	,F_pipeline_stage  dstStageMask_
	,F_access  srcAccessMask_
	,F_access  dstAccessMask_
	,F_dependency  dependencyFlags_
	,int32_t  viewOffset_);
};

/*	VkRenderPassCreateInfo2KHR:*/
typedef struct S_render_pass_create_info2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_render_pass_create flags;
/*|optional|	*/
	uint32_t attachmentCount;
/*
len:	attachmentCount*/
	const S_attachment_description2_KHR* pAttachments;
	uint32_t subpassCount;
/*
len:	subpassCount*/
	const S_subpass_description2_KHR* pSubpasses;
/*|optional|	*/
	uint32_t dependencyCount;
/*
len:	dependencyCount*/
	const S_subpass_dependency2_KHR* pDependencies;
/*|optional|	*/
	uint32_t correlatedViewMaskCount;
/*
len:	correlatedViewMaskCount*/
	const uint32_t* pCorrelatedViewMasks;

S_render_pass_create_info2_KHR(
	 F_render_pass_create  flags_
	,uint32_t  attachmentCount_
	,const S_attachment_description2_KHR* pAttachments_
	,uint32_t  subpassCount_
	,const S_subpass_description2_KHR*       pSubpasses_
	,uint32_t  dependencyCount_
	,const S_subpass_dependency2_KHR*     pDependencies_
	,uint32_t  correlatedViewMaskCount_
	,const uint32_t*            pCorrelatedViewMasks_);
};

/*	VkSubpassBeginInfoKHR:*/
typedef struct S_subpass_begin_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR;
	void* pNext = nullptr;
public:
	E_subpass_contents contents;

S_subpass_begin_info_KHR(
	 E_subpass_contents  contents_);
};

/*	VkSubpassEndInfoKHR:*/
typedef struct S_subpass_end_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR;
	void* pNext = nullptr;
public:

S_subpass_end_info_KHR(
);
};

/*	VkPipelineVertexInputDivisorStateCreateInfoEXT:
extends to:	VkPipelineVertexInputStateCreateInfo*/
typedef struct S_pipeline_vertex_input_divisor_state_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	uint32_t vertexBindingDivisorCount;
/*
len:	vertexBindingDivisorCount*/
	const S_vertex_input_binding_divisor_description_EXT* pVertexBindingDivisors;

S_pipeline_vertex_input_divisor_state_create_info_EXT(
	 uint32_t  vertexBindingDivisorCount_
	,const S_vertex_input_binding_divisor_description_EXT*      pVertexBindingDivisors_);
};

/*	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_vertex_attribute_divisor_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
/*max value of vertex attribute divisor*/
	uint32_t maxVertexAttribDivisor;

S_physical_device_vertex_attribute_divisor_properties_EXT(
	 uint32_t  maxVertexAttribDivisor_);
};

/*	VkImportAndroidHardwareBufferInfoANDROID:
extends to:	VkMemoryAllocateInfo*/
typedef struct S_import_android_hardware_buffer_info_ANDROID{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
	void* pNext = nullptr;
public:
	struct AHardwareBuffer* buffer;

S_import_android_hardware_buffer_info_ANDROID(
	 struct AHardwareBuffer*            buffer_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidHardwareBufferUsageANDROID:
returnd only
extends to:	VkImageFormatProperties2*/
typedef struct S_android_hardware_buffer_usage_ANDROID{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID;
	void* pNext = nullptr;
public:
	uint64_t androidHardwareBufferUsage;

S_android_hardware_buffer_usage_ANDROID(
	 uint64_t  androidHardwareBufferUsage_);
};

#endif

/*	VkMemoryGetAndroidHardwareBufferInfoANDROID:*/
typedef struct S_memory_get_android_hardware_buffer_info_ANDROID{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
	void* pNext = nullptr;
public:
	VkDeviceMemory memory;

S_memory_get_android_hardware_buffer_info_ANDROID(
	 VkDeviceMemory  memory_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidHardwareBufferFormatPropertiesANDROID:
returnd only
extends to:	VkAndroidHardwareBufferPropertiesANDROID*/
typedef struct S_android_hardware_buffer_format_properties_ANDROID{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID;
	void* pNext = nullptr;
public:
	E_format format;
	uint64_t externalFormat;
	F_format_feature formatFeatures;
	S_component_mapping samplerYcbcrConversionComponents;
	E_sampler_ycbcr_model_conversion suggestedYcbcrModel;
	E_sampler_ycbcr_range suggestedYcbcrRange;
	E_chroma_location suggestedXChromaOffset;
	E_chroma_location suggestedYChromaOffset;

S_android_hardware_buffer_format_properties_ANDROID(
	 E_format  format_
	,uint64_t  externalFormat_
	,F_format_feature  formatFeatures_
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;
	void* pNext = nullptr;
public:
/*Whether this secondary command buffer may be executed during an active conditional rendering*/
	VkBool32 conditionalRenderingEnable;

S_command_buffer_inheritance_conditional_rendering_info_EXT(
	 VkBool32  conditionalRenderingEnable_);
};

/*	VkExternalFormatANDROID:
extends to:	VkImageCreateInfo,VkSamplerYcbcrConversionCreateInfo*/
typedef struct S_external_format_ANDROID{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID;
	void* pNext = nullptr;
public:
	uint64_t externalFormat;

S_external_format_ANDROID(
	 uint64_t  externalFormat_);
};

/*	VkPhysicalDevice8BitStorageFeaturesKHR:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_8bit_storage_features_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR;
	void* pNext = nullptr;
public:
/*8-bit integer variables supported in StorageBuffer*/
	VkBool32 storageBuffer8BitAccess;
/*8-bit integer variables supported in StorageBuffer and Uniform*/
	VkBool32 uniformAndStorageBuffer8BitAccess;
/*8-bit integer variables supported in PushConstant*/
	VkBool32 storagePushConstant8;

S_physical_device_8bit_storage_features_KHR(
	 VkBool32  storageBuffer8BitAccess_
	,VkBool32  uniformAndStorageBuffer8BitAccess_
	,VkBool32  storagePushConstant8_);
};

/*	VkPhysicalDeviceConditionalRenderingFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_conditional_rendering_features_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
	void* pNext = nullptr;
public:
	VkBool32 conditionalRendering;
	VkBool32 inheritedConditionalRendering;

S_physical_device_conditional_rendering_features_EXT(
	 VkBool32  conditionalRendering_
	,VkBool32  inheritedConditionalRendering_);
};

/*	VkPhysicalDeviceVulkanMemoryModelFeaturesKHR:
returnd only
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_vulkan_memory_model_features_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR;
	void* pNext = nullptr;
public:
	VkBool32 vulkanMemoryModel;
	VkBool32 vulkanMemoryModelDeviceScope;

S_physical_device_vulkan_memory_model_features_KHR(
	 VkBool32  vulkanMemoryModel_
	,VkBool32  vulkanMemoryModelDeviceScope_);
};

/*	VkPhysicalDeviceShaderAtomicInt64FeaturesKHR:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shader_atomic_int64_features_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR;
	void* pNext = nullptr;
public:
	VkBool32 shaderBufferInt64Atomics;
	VkBool32 shaderSharedInt64Atomics;

S_physical_device_shader_atomic_int64_features_KHR(
	 VkBool32  shaderBufferInt64Atomics_
	,VkBool32  shaderSharedInt64Atomics_);
};

/*	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_vertex_attribute_divisor_features_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
	void* pNext = nullptr;
public:
	VkBool32 vertexAttributeInstanceRateDivisor;
	VkBool32 vertexAttributeInstanceRateZeroDivisor;

S_physical_device_vertex_attribute_divisor_features_EXT(
	 VkBool32  vertexAttributeInstanceRateDivisor_
	,VkBool32  vertexAttributeInstanceRateZeroDivisor_);
};

/*	VkQueueFamilyCheckpointPropertiesNV:
returnd only
extends to:	VkQueueFamilyProperties2*/
typedef struct S_queue_family_checkpoint_properties_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;
	void* pNext = nullptr;
public:
	F_pipeline_stage checkpointExecutionStageMask;

S_queue_family_checkpoint_properties_NV(
	 F_pipeline_stage  checkpointExecutionStageMask_);
};

/*	VkCheckpointDataNV:
returnd only*/
typedef struct S_checkpoint_data_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;
	void* pNext = nullptr;
public:
	F_pipeline_stage stage;
	void* pCheckpointMarker;

S_checkpoint_data_NV(
	 F_pipeline_stage  stage_
	,void* pCheckpointMarker_);
};

/*	VkImageViewASTCDecodeModeEXT:
extends to:	VkImageViewCreateInfo*/
typedef struct S_image_view_astc_decode_mode_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;
	void* pNext = nullptr;
public:
	E_format decodeMode;

S_image_view_astc_decode_mode_EXT(
	 E_format  decodeMode_);
};

/*	VkPhysicalDeviceASTCDecodeFeaturesEXT:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_astc_decode_features_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
	void* pNext = nullptr;
public:
	VkBool32 decodeModeSharedExponent;

S_physical_device_astc_decode_features_EXT(
	 VkBool32  decodeModeSharedExponent_);
};

/*	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_representative_fragment_test_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 representativeFragmentTest;

S_physical_device_representative_fragment_test_features_NV(
	 VkBool32  representativeFragmentTest_);
};

/*	VkPipelineRepresentativeFragmentTestStateCreateInfoNV:
extends to:	VkGraphicsPipelineCreateInfo*/
typedef struct S_pipeline_representative_fragment_test_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
	VkBool32 representativeFragmentTestEnable;

S_pipeline_representative_fragment_test_state_create_info_NV(
	 VkBool32  representativeFragmentTestEnable_);
};

/*	VkPhysicalDeviceExclusiveScissorFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_exclusive_scissor_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 exclusiveScissor;

S_physical_device_exclusive_scissor_features_NV(
	 VkBool32  exclusiveScissor_);
};

/*	VkPipelineViewportExclusiveScissorStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_exclusive_scissor_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t exclusiveScissorCount;
/*|optional|	
len:	exclusiveScissorCount*/
	const S_rect_2d* pExclusiveScissors;

S_pipeline_viewport_exclusive_scissor_state_create_info_NV(
	 uint32_t  exclusiveScissorCount_
	,const S_rect_2d*    pExclusiveScissors_);
};

/*	VkPhysicalDeviceCornerSampledImageFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_corner_sampled_image_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 cornerSampledImage;

S_physical_device_corner_sampled_image_features_NV(
	 VkBool32  cornerSampledImage_);
};

/*	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_compute_shader_derivatives_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 computeDerivativeGroupQuads;
	VkBool32 computeDerivativeGroupLinear;

S_physical_device_compute_shader_derivatives_features_NV(
	 VkBool32  computeDerivativeGroupQuads_
	,VkBool32  computeDerivativeGroupLinear_);
};

/*	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_fragment_shader_barycentric_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 fragmentShaderBarycentric;

S_physical_device_fragment_shader_barycentric_features_NV(
	 VkBool32  fragmentShaderBarycentric_);
};

/*	VkPhysicalDeviceShaderImageFootprintFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shader_image_footprint_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 imageFootprint;

S_physical_device_shader_image_footprint_features_NV(
	 VkBool32  imageFootprint_);
};

/*	VkPipelineViewportShadingRateImageStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_shading_rate_image_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
	VkBool32 shadingRateImageEnable;
/*|optional|	*/
	uint32_t viewportCount;
/*|optional|	
len:	viewportCount*/
	const S_shading_rate_palette_NV* pShadingRatePalettes;

S_pipeline_viewport_shading_rate_image_state_create_info_NV(
	 VkBool32  shadingRateImageEnable_
	,uint32_t  viewportCount_
	,const S_shading_rate_palette_NV*      pShadingRatePalettes_);
};

/*	VkPhysicalDeviceShadingRateImageFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_shading_rate_image_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 shadingRateImage;
	VkBool32 shadingRateCoarseSampleOrder;

S_physical_device_shading_rate_image_features_NV(
	 VkBool32  shadingRateImage_
	,VkBool32  shadingRateCoarseSampleOrder_);
};

/*	VkPhysicalDeviceShadingRateImagePropertiesNV:
returnd only
extends to:	VkPhysicalDeviceProperties*/
typedef struct S_physical_device_shading_rate_image_properties_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;
	void* pNext = nullptr;
public:
	S_extent_2d shadingRateTexelSize;
	uint32_t shadingRatePaletteSize;
	uint32_t shadingRateMaxCoarseSamples;

S_physical_device_shading_rate_image_properties_NV(
	 S_extent_2d  shadingRateTexelSize_
	,uint32_t  shadingRatePaletteSize_
	,uint32_t  shadingRateMaxCoarseSamples_);
};

/*	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV:
extends to:	VkPipelineViewportStateCreateInfo*/
typedef struct S_pipeline_viewport_coarse_sample_order_state_create_info_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;
	void* pNext = nullptr;
public:
	E_coarse_sample_order_type_NV sampleOrderType;
/*|optional|	*/
	uint32_t customSampleOrderCount;
/*
len:	customSampleOrderCount*/
	const S_coarse_sample_order_custom_NV* pCustomSampleOrders;

S_pipeline_viewport_coarse_sample_order_state_create_info_NV(
	 E_coarse_sample_order_type_NV  sampleOrderType_
	,uint32_t  customSampleOrderCount_
	,const S_coarse_sample_order_custom_NV*        pCustomSampleOrders_);
};

/*	VkPhysicalDeviceMeshShaderFeaturesNV:
extends to:	VkPhysicalDeviceFeatures2,VkDeviceCreateInfo*/
typedef struct S_physical_device_mesh_shader_features_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
	void* pNext = nullptr;
public:
	VkBool32 taskShader;
	VkBool32 meshShader;

S_physical_device_mesh_shader_features_NV(
	 VkBool32  taskShader_
	,VkBool32  meshShader_);
};

/*	VkPhysicalDeviceMeshShaderPropertiesNV:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_mesh_shader_properties_NV{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;
	void* pNext = nullptr;
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

S_physical_device_mesh_shader_properties_NV(
	 uint32_t  maxDrawMeshTasksCount_
	,uint32_t  maxTaskWorkGroupInvocations_
	,std::array< uint32_t ,3 > maxTaskWorkGroupSize_
	,uint32_t  maxTaskTotalMemorySize_
	,uint32_t  maxTaskOutputCount_
	,uint32_t  maxMeshWorkGroupInvocations_
	,std::array< uint32_t ,3 > maxMeshWorkGroupSize_
	,uint32_t  maxMeshTotalMemorySize_
	,uint32_t  maxMeshOutputVertices_
	,uint32_t  maxMeshOutputPrimitives_
	,uint32_t  maxMeshMultiviewViewCount_
	,uint32_t  meshOutputPerVertexGranularity_
	,uint32_t  meshOutputPerPrimitiveGranularity_);
};

/*	VkRaytracingPipelineCreateInfoNVX:*/
typedef struct S_raytracing_pipeline_create_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_RAYTRACING_PIPELINE_CREATE_INFO_NVX;
	void* pNext = nullptr;
public:
/*Pipeline creation flags*/
	F_pipeline_create flags;
	uint32_t stageCount;
/*One entry for each active shader stage
len:	stageCount*/
	const S_pipeline_shader_stage_create_info* pStages;
/*One entry for each stage used as the query index and for grouping
len:	stageCount*/
	const uint32_t* pGroupNumbers;
	uint32_t maxRecursionDepth;
/*Interface layout of the pipeline*/
	VkPipelineLayout layout;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t basePipelineIndex;

S_raytracing_pipeline_create_info_NVX(
	 F_pipeline_create  flags_
	,uint32_t  stageCount_
	,const S_pipeline_shader_stage_create_info* pStages_
	,const uint32_t* pGroupNumbers_
	,uint32_t  maxRecursionDepth_
	,VkPipelineLayout  layout_
	,VkPipeline  basePipelineHandle_
	,int32_t  basePipelineIndex_);
};

/*	VkGeometryTrianglesNVX:*/
typedef struct S_geometry_triangles_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NVX;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkBuffer vertexData;
	VkDeviceSize vertexOffset;
	uint32_t vertexCount;
	VkDeviceSize vertexStride;
/*VK_FORMAT_R32G32B32_SFLOAT, VK_FORMAT_R32G32B32A32_SFLOAT, VK_FORMAT_R16G16B16_SFLOAT, or VK_FORMAT_R16G16B16A16_SFLOAT*/
	E_format vertexFormat;
/*|optional|	*/
	VkBuffer indexData;
	VkDeviceSize indexOffset;
	uint32_t indexCount;
	E_index_type indexType;
/*Optional reference to array of floats representing a 3x4 row major affine transformation matrix.*/
	VkBuffer transformData;
	VkDeviceSize transformOffset;

S_geometry_triangles_NVX(
	 VkBuffer  vertexData_
	,VkDeviceSize  vertexOffset_
	,uint32_t  vertexCount_
	,VkDeviceSize  vertexStride_
	,E_format  vertexFormat_
	,VkBuffer  indexData_
	,VkDeviceSize  indexOffset_
	,uint32_t  indexCount_
	,E_index_type  indexType_
	,VkBuffer  transformData_
	,VkDeviceSize  transformOffset_);
};

/*	VkGeometryAABBNVX:*/
typedef struct S_geometry_aabb_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_GEOMETRY_AABB_NVX;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkBuffer aabbData;
	uint32_t numAABBs;
/*Stride in bytes between AABBs*/
	uint32_t stride;
/*Offset in bytes of the first AABB in aabbData*/
	VkDeviceSize offset;

S_geometry_aabb_NVX(
	 VkBuffer  aabbData_
	,uint32_t  numAABBs_
	,uint32_t  stride_
	,VkDeviceSize  offset_);
};

/*	VkGeometryNVX:*/
typedef struct S_geometry_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_GEOMETRY_NVX;
	void* pNext = nullptr;
public:
	E_geometry_type_NVX geometryType;
	S_geometry_data_NVX geometry;
/*|optional|	*/
	F_geometry_nvx flags;

S_geometry_NVX(
	 E_geometry_type_NVX  geometryType_
	,S_geometry_data_NVX  geometry_
	,F_geometry_nvx  flags_);
};

/*	VkAccelerationStructureCreateInfoNVX:*/
typedef struct S_acceleration_structure_create_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NVX;
	void* pNext = nullptr;
public:
	E_acceleration_structure_type_NVX type;
/*|optional|	*/
	F_build_acceleration_structure_nvx flags;
	VkDeviceSize compactedSize;
/*|optional|	*/
	uint32_t instanceCount;
/*|optional|	*/
	uint32_t geometryCount;
/*
len:	geometryCount*/
	const S_geometry_NVX* pGeometries;

S_acceleration_structure_create_info_NVX(
	 E_acceleration_structure_type_NVX  type_
	,F_build_acceleration_structure_nvx flags_
	,VkDeviceSize  compactedSize_
	,uint32_t  instanceCount_
	,uint32_t  geometryCount_
	,const S_geometry_NVX* pGeometries_);
};

/*	VkBindAccelerationStructureMemoryInfoNVX:*/
typedef struct S_bind_acceleration_structure_memory_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NVX;
	void* pNext = nullptr;
public:
	VkAccelerationStructureNVX accelerationStructure;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
/*|optional|	*/
	uint32_t deviceIndexCount;
/*
len:	deviceIndexCount*/
	const uint32_t* pDeviceIndices;

S_bind_acceleration_structure_memory_info_NVX(
	 VkAccelerationStructureNVX  accelerationStructure_
	,VkDeviceMemory  memory_
	,VkDeviceSize  memoryOffset_
	,uint32_t  deviceIndexCount_
	,const uint32_t*  pDeviceIndices_);
};

/*	VkDescriptorAccelerationStructureInfoNVX:
extends to:	VkWriteDescriptorSet*/
typedef struct S_descriptor_acceleration_structure_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_ACCELERATION_STRUCTURE_INFO_NVX;
	void* pNext = nullptr;
public:
	uint32_t accelerationStructureCount;
/*
len:	accelerationStructureCount*/
	const VkAccelerationStructureNVX* pAccelerationStructures;

S_descriptor_acceleration_structure_info_NVX(
	 uint32_t  accelerationStructureCount_
	,const VkAccelerationStructureNVX* pAccelerationStructures_);
};

/*	VkAccelerationStructureMemoryRequirementsInfoNVX:*/
typedef struct S_acceleration_structure_memory_requirements_info_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NVX;
	void* pNext = nullptr;
public:
	VkAccelerationStructureNVX accelerationStructure;

S_acceleration_structure_memory_requirements_info_NVX(
	 VkAccelerationStructureNVX  accelerationStructure_);
};

/*	VkPhysicalDeviceRaytracingPropertiesNVX:
extends to:	VkPhysicalDeviceProperties2*/
typedef struct S_physical_device_raytracing_properties_NVX{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAYTRACING_PROPERTIES_NVX;
	void* pNext = nullptr;
public:
	uint32_t shaderHeaderSize;
	uint32_t maxRecursionDepth;
	uint32_t maxGeometryCount;

S_physical_device_raytracing_properties_NVX(
	 uint32_t  shaderHeaderSize_
	,uint32_t  maxRecursionDepth_
	,uint32_t  maxGeometryCount_);
};

/*	VkDrmFormatModifierPropertiesListEXT:
extends to:	VkFormatProperties2*/
typedef struct S_drm_format_modifier_properties_list_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t drmFormatModifierCount;
/*|optional|	
len:	drmFormatModifierCount*/
	S_drm_format_modifier_properties_EXT* pDrmFormatModifierProperties;

S_drm_format_modifier_properties_list_EXT(
	 uint32_t  drmFormatModifierCount_
	,S_drm_format_modifier_properties_EXT* pDrmFormatModifierProperties_);
};

/*	VkPhysicalDeviceImageDrmFormatModifierInfoEXT:
extends to:	VkPhysicalDeviceImageFormatInfo2*/
typedef struct S_physical_device_image_drm_format_modifier_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;
	void* pNext = nullptr;
public:
	uint64_t drmFormatModifier;

S_physical_device_image_drm_format_modifier_info_EXT(
	 uint64_t  drmFormatModifier_);
};

/*	VkImageDrmFormatModifierListCreateInfoEXT:
extends to:	VkImageCreateInfo*/
typedef struct S_image_drm_format_modifier_list_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	uint32_t drmFormatModifierCount;
/*
len:	drmFormatModifierCount*/
	const uint64_t* pDrmFormatModifiers;

S_image_drm_format_modifier_list_create_info_EXT(
	 uint32_t  drmFormatModifierCount_
	,const uint64_t* pDrmFormatModifiers_);
};

/*	VkImageDrmFormatModifierExplicitCreateInfoEXT:
extends to:	VkImageCreateInfo*/
typedef struct S_image_drm_format_modifier_explicit_create_info_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_EXCPLICIT_DRM_FORMAT_MODIFIER_CREATE_INFO_EXT;
	void* pNext = nullptr;
public:
	uint64_t drmFormatModifier;
/*|optional|	*/
	uint32_t drmFormatModifierPlaneCount;
/*
len:	drmFormatModifierPlaneCount*/
	const S_subresource_layout* pPlaneLayouts;

S_image_drm_format_modifier_explicit_create_info_EXT(
	 uint64_t  drmFormatModifier_
	,uint32_t  drmFormatModifierPlaneCount_
	,const S_subresource_layout* pPlaneLayouts_);
};

/*	VkImageDrmFormatModifierPropertiesEXT:
returnd only*/
typedef struct S_image_drm_format_modifier_properties_EXT{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;
	void* pNext = nullptr;
public:
	uint64_t drmFormatModifier;

S_image_drm_format_modifier_properties_EXT(
	 uint64_t  drmFormatModifier_);
};

/*	VkPhysicalDeviceProperties:
returnd only
extends:
	S_physical_device_shading_rate_image_properties_NV*/
typedef struct S_physical_device_properties{
	uint32_t apiVersion;
	uint32_t driverVersion;
	uint32_t vendorID;
	uint32_t deviceID;
	E_physical_device_type deviceType;
	char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
	uint8_t pipelineCacheUUID[VK_UUID_SIZE];
	S_physical_device_limits limits;
	S_physical_device_sparse_properties sparseProperties;
};

/*	VkDeviceQueueCreateInfo:
extends:
	S_device_queue_global_priority_create_info_EXT*/
typedef struct S_device_queue_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_device_queue_create flags;
	uint32_t queueFamilyIndex;
	uint32_t queueCount;
/*
len:	queueCount*/
	const float* pQueuePriorities;

S_device_queue_create_info(
	 F_device_queue_create  flags_
	,uint32_t  queueFamilyIndex_
	,uint32_t  queueCount_
	,const float*    pQueuePriorities_);
};

/*	VkInstanceCreateInfo:
extends:
	S_debug_report_callback_create_info_EXT
	S_validation_flags_EXT
	S_debug_utils_messenger_create_info_EXT*/
typedef struct S_instance_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkInstanceCreateFlags flags;
/*|optional|	*/
	const S_application_info* pApplicationInfo;
/*|optional|	*/
	uint32_t enabledLayerCount;
/*Ordered list of layer names to be enabled
len:	enabledLayerCount,null-terminated*/
	const char* const* ppEnabledLayerNames;
/*|optional|	*/
	uint32_t enabledExtensionCount;
/*Extension names to be enabled
len:	enabledExtensionCount,null-terminated*/
	const char* const* ppEnabledExtensionNames;

S_instance_create_info(
	 VkInstanceCreateFlags  flags_
	,const S_application_info* pApplicationInfo_
	,uint32_t  enabledLayerCount_
	,const char* const*      ppEnabledLayerNames_
	,uint32_t  enabledExtensionCount_
	,const char* const*      ppEnabledExtensionNames_);
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
	void* pNext = nullptr;
public:
/*Size of memory allocation*/
	VkDeviceSize allocationSize;
/*Index of the of the memory type to allocate from*/
	uint32_t memoryTypeIndex;

S_memory_allocate_info(
	 VkDeviceSize  allocationSize_
	,uint32_t  memoryTypeIndex_);
};

/*	VkWriteDescriptorSet:
extends:
	S_write_descriptor_set_inline_uniform_block_EXT
	S_descriptor_acceleration_structure_info_NVX*/
typedef struct S_write_descriptor_set{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
	void* pNext = nullptr;
public:
/*Destination descriptor set*/
	VkDescriptorSet dstSet;
/*Binding within the destination descriptor set to write*/
	uint32_t dstBinding;
/*Array element within the destination binding to write*/
	uint32_t dstArrayElement;
/*Number of descriptors to write (determines the size of the array pointed by pDescriptors)*/
	uint32_t descriptorCount;
/*Descriptor type to write (determines which members of the array pointed by pDescriptors are going to be used)*/
	E_descriptor_type descriptorType;
/*Sampler, image view, and layout for SAMPLER, COMBINED_IMAGE_SAMPLER, {SAMPLED,STORAGE}_IMAGE, and INPUT_ATTACHMENT descriptor types.
len:	descriptorCount*/
	const S_descriptor_image_info* pImageInfo;
/*Raw buffer, size, and offset for {UNIFORM,STORAGE}_BUFFER[_DYNAMIC] descriptor types.
len:	descriptorCount*/
	const S_descriptor_buffer_info* pBufferInfo;
/*Buffer view to write to the descriptor for {UNIFORM,STORAGE}_TEXEL_BUFFER descriptor types.
len:	descriptorCount*/
	const VkBufferView* pTexelBufferView;

S_write_descriptor_set(
	 VkDescriptorSet  dstSet_
	,uint32_t  dstBinding_
	,uint32_t  dstArrayElement_
	,uint32_t  descriptorCount_
	,E_descriptor_type  descriptorType_
	,const S_descriptor_image_info* pImageInfo_
	,const S_descriptor_buffer_info* pBufferInfo_
	,const VkBufferView*    pTexelBufferView_);
};

/*	VkBufferCreateInfo:
extends:
	S_dedicated_allocation_buffer_create_info_NV
	S_external_memory_buffer_create_info*/
typedef struct S_buffer_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Buffer creation flags*/
	F_buffer_create flags;
/*Specified in bytes*/
	VkDeviceSize size;
/*Buffer usage flags*/
	F_buffer_usage usage;
	E_sharing_mode sharingMode;
/*|optional|	*/
	uint32_t queueFamilyIndexCount;
/*
len:	queueFamilyIndexCount*/
	const uint32_t* pQueueFamilyIndices;

S_buffer_create_info(
	 F_buffer_create  flags_
	,VkDeviceSize  size_
	,F_buffer_usage  usage_
	,E_sharing_mode  sharingMode_
	,uint32_t  queueFamilyIndexCount_
	,const uint32_t*        pQueueFamilyIndices_);
};

/*	VkImageMemoryBarrier:
extends:
	S_sample_locations_info_EXT*/
typedef struct S_image_memory_barrier{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
	void* pNext = nullptr;
public:
/*Memory accesses from the source of the dependency to synchronize*/
	F_access srcAccessMask;
/*Memory accesses from the destination of the dependency to synchronize*/
	F_access dstAccessMask;
/*Current layout of the image*/
	E_image_layout oldLayout;
/*New layout to transition the image to*/
	E_image_layout newLayout;
/*Queue family to transition ownership from*/
	uint32_t srcQueueFamilyIndex;
/*Queue family to transition ownership to*/
	uint32_t dstQueueFamilyIndex;
/*Image to sync*/
	VkImage image;
/*Subresource range to sync*/
	S_image_subresource_range subresourceRange;

S_image_memory_barrier(
	 F_access  srcAccessMask_
	,F_access  dstAccessMask_
	,E_image_layout  oldLayout_
	,E_image_layout  newLayout_
	,uint32_t  srcQueueFamilyIndex_
	,uint32_t  dstQueueFamilyIndex_
	,VkImage  image_
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Image creation flags*/
	F_image_create flags;
	E_image_type imageType;
	E_format format;
	S_extent_3d extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	F_sample_count samples;
	E_image_tiling tiling;
/*Image usage flags*/
	F_image_usage usage;
/*Cross-queue-family sharing mode*/
	E_sharing_mode sharingMode;
/*Number of queue families to share across*/
	uint32_t queueFamilyIndexCount;
/*Array of queue family indices to share across
len:	queueFamilyIndexCount*/
	const uint32_t* pQueueFamilyIndices;
/*Initial image layout for all subresources*/
	E_image_layout initialLayout;

S_image_create_info(
	 F_image_create  flags_
	,E_image_type  imageType_
	,E_format  format_
	,S_extent_3d  extent_
	,uint32_t  mipLevels_
	,uint32_t  arrayLayers_
	,F_sample_count  samples_
	,E_image_tiling  tiling_
	,F_image_usage  usage_
	,E_sharing_mode  sharingMode_
	,uint32_t  queueFamilyIndexCount_
	,const uint32_t*        pQueueFamilyIndices_
	,E_image_layout  initialLayout_);
};

/*	VkImageViewCreateInfo:
extends:
	S_image_view_usage_create_info
	S_sampler_ycbcr_conversion_info
	S_image_view_astc_decode_mode_EXT*/
typedef struct S_image_view_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkImageViewCreateFlags flags;
	VkImage image;
	E_image_view_type viewType;
	E_format format;
	S_component_mapping components;
	S_image_subresource_range subresourceRange;

S_image_view_create_info(
	 VkImageViewCreateFlags  flags_
	,VkImage  image_
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const VkSemaphore* pWaitSemaphores;
/*|optional|	*/
	uint32_t bufferBindCount;
/*
len:	bufferBindCount*/
	const S_sparse_buffer_memory_bind_info* pBufferBinds;
/*|optional|	*/
	uint32_t imageOpaqueBindCount;
/*
len:	imageOpaqueBindCount*/
	const S_sparse_image_opaque_memory_bind_info* pImageOpaqueBinds;
/*|optional|	*/
	uint32_t imageBindCount;
/*
len:	imageBindCount*/
	const S_sparse_image_memory_bind_info* pImageBinds;
/*|optional|	*/
	uint32_t signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const VkSemaphore* pSignalSemaphores;

S_bind_sparse_info(
	 uint32_t  waitSemaphoreCount_
	,const VkSemaphore*     pWaitSemaphores_
	,uint32_t  bufferBindCount_
	,const S_sparse_buffer_memory_bind_info* pBufferBinds_
	,uint32_t  imageOpaqueBindCount_
	,const S_sparse_image_opaque_memory_bind_info* pImageOpaqueBinds_
	,uint32_t  imageBindCount_
	,const S_sparse_image_memory_bind_info* pImageBinds_
	,uint32_t  signalSemaphoreCount_
	,const VkSemaphore*     pSignalSemaphores_);
};

/*	VkShaderModuleCreateInfo:
extends:
	S_shader_module_validation_cache_create_info_EXT*/
typedef struct S_shader_module_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkShaderModuleCreateFlags flags;
/*Specified in bytes*/
	size_t codeSize;
/*Binary code of size codeSizealt
len:	latexmath:[codeSize \over 4]*/
	const uint32_t* pCode;

S_shader_module_create_info(
	 VkShaderModuleCreateFlags  flags_
	,size_t  codeSize_
	,const uint32_t*            pCode_);
};

/*	VkDescriptorSetLayoutCreateInfo:
extends:
	S_descriptor_set_layout_binding_flags_create_info_EXT*/
typedef struct S_descriptor_set_layout_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_descriptor_set_layout_create flags;
/*Number of bindings in the descriptor set layout*/
	uint32_t bindingCount;
/*Array of descriptor set layout bindings
len:	bindingCount*/
	const S_descriptor_set_layout_binding* pBindings;

S_descriptor_set_layout_create_info(
	 F_descriptor_set_layout_create  flags_
	,uint32_t  bindingCount_
	,const S_descriptor_set_layout_binding* pBindings_);
};

/*	VkDescriptorPoolCreateInfo:
extends:
	S_descriptor_pool_inline_uniform_block_create_info_EXT*/
typedef struct S_descriptor_pool_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_descriptor_pool_create flags;
	uint32_t maxSets;
	uint32_t poolSizeCount;
/*
len:	poolSizeCount*/
	const S_descriptor_pool_size* pPoolSizes;

S_descriptor_pool_create_info(
	 F_descriptor_pool_create  flags_
	,uint32_t  maxSets_
	,uint32_t  poolSizeCount_
	,const S_descriptor_pool_size* pPoolSizes_);
};

/*	VkDescriptorSetAllocateInfo:
extends:
	S_descriptor_set_variable_descriptor_count_allocate_info_EXT*/
typedef struct S_descriptor_set_allocate_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
	void* pNext = nullptr;
public:
	VkDescriptorPool descriptorPool;
	uint32_t descriptorSetCount;
/*
len:	descriptorSetCount*/
	const VkDescriptorSetLayout* pSetLayouts;

S_descriptor_set_allocate_info(
	 VkDescriptorPool  descriptorPool_
	,uint32_t  descriptorSetCount_
	,const VkDescriptorSetLayout* pSetLayouts_);
};

/*	VkPipelineVertexInputStateCreateInfo:
extends:
	S_pipeline_vertex_input_divisor_state_create_info_EXT*/
typedef struct S_pipeline_vertex_input_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineVertexInputStateCreateFlags flags;
/*number of bindings*/
	uint32_t vertexBindingDescriptionCount;
/*
len:	vertexBindingDescriptionCount*/
	const S_vertex_input_binding_description* pVertexBindingDescriptions;
/*number of attributes*/
	uint32_t vertexAttributeDescriptionCount;
/*
len:	vertexAttributeDescriptionCount*/
	const S_vertex_input_attribute_description* pVertexAttributeDescriptions;

S_pipeline_vertex_input_state_create_info(
	 VkPipelineVertexInputStateCreateFlags  flags_
	,uint32_t  vertexBindingDescriptionCount_
	,const S_vertex_input_binding_description* pVertexBindingDescriptions_
	,uint32_t  vertexAttributeDescriptionCount_
	,const S_vertex_input_attribute_description* pVertexAttributeDescriptions_);
};

/*	VkPipelineTessellationStateCreateInfo:
extends:
	S_pipeline_tessellation_domain_origin_state_create_info*/
typedef struct S_pipeline_tessellation_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineTessellationStateCreateFlags flags;
	uint32_t patchControlPoints;

S_pipeline_tessellation_state_create_info(
	 VkPipelineTessellationStateCreateFlags  flags_
	,uint32_t  patchControlPoints_);
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
/*|optional|	
len:	viewportCount*/
	const S_viewport* pViewports;
	uint32_t scissorCount;
/*|optional|	
len:	scissorCount*/
	const S_rect_2d* pScissors;

S_pipeline_viewport_state_create_info(
	 VkPipelineViewportStateCreateFlags  flags_
	,uint32_t  viewportCount_
	,const S_viewport*      pViewports_
	,uint32_t  scissorCount_
	,const S_rect_2d*        pScissors_);
};

/*	VkPipelineRasterizationStateCreateInfo:
extends:
	S_pipeline_rasterization_state_rasterization_order_AMD
	S_pipeline_rasterization_conservative_state_create_info_EXT*/
typedef struct S_pipeline_rasterization_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
/*optional (GL45)*/
	E_polygon_mode polygonMode;
/*|optional|	*/
	F_cull_mode cullMode;
	E_front_face frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;

S_pipeline_rasterization_state_create_info(
	 VkPipelineRasterizationStateCreateFlags  flags_
	,VkBool32  depthClampEnable_
	,VkBool32  rasterizerDiscardEnable_
	,E_polygon_mode  polygonMode_
	,F_cull_mode  cullMode_
	,E_front_face  frontFace_
	,VkBool32  depthBiasEnable_
	,float  depthBiasConstantFactor_
	,float  depthBiasClamp_
	,float  depthBiasSlopeFactor_
	,float  lineWidth_);
};

/*	VkPipelineMultisampleStateCreateInfo:
extends:
	S_pipeline_coverage_to_color_state_create_info_NV
	S_pipeline_sample_locations_state_create_info_EXT
	S_pipeline_coverage_modulation_state_create_info_NV*/
typedef struct S_pipeline_multisample_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineMultisampleStateCreateFlags flags;
/*Number of samples used for rasterization*/
	F_sample_count rasterizationSamples;
/*optional (GL45)*/
	VkBool32 sampleShadingEnable;
/*optional (GL45)*/
	float minSampleShading;
/*Array of sampleMask wordsalt
len:	latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil]*/
	const VkSampleMask* pSampleMask;
	VkBool32 alphaToCoverageEnable;
	VkBool32 alphaToOneEnable;

S_pipeline_multisample_state_create_info(
	 VkPipelineMultisampleStateCreateFlags  flags_
	,F_sample_count  rasterizationSamples_
	,VkBool32  sampleShadingEnable_
	,float  minSampleShading_
	,const VkSampleMask*    pSampleMask_
	,VkBool32  alphaToCoverageEnable_
	,VkBool32  alphaToOneEnable_);
};

/*	VkPipelineColorBlendStateCreateInfo:
extends:
	S_pipeline_color_blend_advanced_state_create_info_EXT*/
typedef struct S_pipeline_color_blend_state_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkPipelineColorBlendStateCreateFlags flags;
	VkBool32 logicOpEnable;
	E_logic_op logicOp;
/*# of pAttachments*/
	uint32_t attachmentCount;
/*
len:	attachmentCount*/
	const S_pipeline_color_blend_attachment_state* pAttachments;
	float blendConstants[4];

S_pipeline_color_blend_state_create_info(
	 VkPipelineColorBlendStateCreateFlags  flags_
	,VkBool32  logicOpEnable_
	,E_logic_op  logicOp_
	,uint32_t  attachmentCount_
	,const S_pipeline_color_blend_attachment_state* pAttachments_
	,std::array< float ,4 > blendConstants_);
};

/*	VkGraphicsPipelineCreateInfo:
extends:
	S_pipeline_discard_rectangle_state_create_info_EXT
	S_pipeline_representative_fragment_test_state_create_info_NV*/
typedef struct S_graphics_pipeline_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Pipeline creation flags*/
	F_pipeline_create flags;
	uint32_t stageCount;
/*One entry for each active shader stage
len:	stageCount*/
	const S_pipeline_shader_stage_create_info* pStages;
/*|optional|	*/
	const S_pipeline_vertex_input_state_create_info* pVertexInputState;
/*|optional|	*/
	const S_pipeline_input_assembly_state_create_info* pInputAssemblyState;
/*|optional|	*/
	const S_pipeline_tessellation_state_create_info* pTessellationState;
/*|optional|	*/
	const S_pipeline_viewport_state_create_info* pViewportState;
	const S_pipeline_rasterization_state_create_info* pRasterizationState;
/*|optional|	*/
	const S_pipeline_multisample_state_create_info* pMultisampleState;
/*|optional|	*/
	const S_pipeline_depth_stencil_state_create_info* pDepthStencilState;
/*|optional|	*/
	const S_pipeline_color_blend_state_create_info* pColorBlendState;
/*|optional|	*/
	const S_pipeline_dynamic_state_create_info* pDynamicState;
/*Interface layout of the pipeline*/
	VkPipelineLayout layout;
	VkRenderPass renderPass;
	uint32_t subpass;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero, it specifies the handle of the base pipeline this is a derivative of*/
	VkPipeline basePipelineHandle;
/*If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1, it specifies an index into pCreateInfos of the base pipeline this is a derivative of*/
	int32_t basePipelineIndex;

S_graphics_pipeline_create_info(
	 F_pipeline_create  flags_
	,uint32_t  stageCount_
	,const S_pipeline_shader_stage_create_info* pStages_
	,const S_pipeline_vertex_input_state_create_info* pVertexInputState_
	,const S_pipeline_input_assembly_state_create_info* pInputAssemblyState_
	,const S_pipeline_tessellation_state_create_info* pTessellationState_
	,const S_pipeline_viewport_state_create_info* pViewportState_
	,const S_pipeline_rasterization_state_create_info* pRasterizationState_
	,const S_pipeline_multisample_state_create_info* pMultisampleState_
	,const S_pipeline_depth_stencil_state_create_info* pDepthStencilState_
	,const S_pipeline_color_blend_state_create_info* pColorBlendState_
	,const S_pipeline_dynamic_state_create_info* pDynamicState_
	,VkPipelineLayout  layout_
	,VkRenderPass  renderPass_
	,uint32_t  subpass_
	,VkPipeline  basePipelineHandle_
	,int32_t  basePipelineIndex_);
};

/*	VkSamplerCreateInfo:
extends:
	S_sampler_ycbcr_conversion_info
	S_sampler_reduction_mode_create_info_EXT*/
typedef struct S_sampler_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkSamplerCreateFlags flags;
/*Filter mode for magnification*/
	E_filter magFilter;
/*Filter mode for minifiation*/
	E_filter minFilter;
/*Mipmap selection mode*/
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

S_sampler_create_info(
	 VkSamplerCreateFlags  flags_
	,E_filter  magFilter_
	,E_filter  minFilter_
	,E_sampler_mipmap_mode  mipmapMode_
	,E_sampler_address_mode  addressModeU_
	,E_sampler_address_mode  addressModeV_
	,E_sampler_address_mode  addressModeW_
	,float  mipLodBias_
	,VkBool32  anisotropyEnable_
	,float  maxAnisotropy_
	,VkBool32  compareEnable_
	,E_compare_op  compareOp_
	,float  minLod_
	,float  maxLod_
	,E_border_color  borderColor_
	,VkBool32  unnormalizedCoordinates_);
};

/*	VkCommandBufferInheritanceInfo:
extends:
	S_command_buffer_inheritance_conditional_rendering_info_EXT*/
typedef struct S_command_buffer_inheritance_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
	void* pNext = nullptr;
public:
/*Render pass for secondary command buffers*/
	VkRenderPass renderPass;
	uint32_t subpass;
/*Framebuffer for secondary command buffers*/
	VkFramebuffer framebuffer;
/*Whether this secondary command buffer may be executed during an occlusion query*/
	VkBool32 occlusionQueryEnable;
/*Query flags used by this secondary command buffer, if executed during an occlusion query*/
	F_query_control queryFlags;
/*Pipeline statistics that may be counted for this secondary command buffer*/
	F_query_pipeline_statistic pipelineStatistics;

S_command_buffer_inheritance_info(
	 VkRenderPass  renderPass_
	,uint32_t  subpass_
	,VkFramebuffer  framebuffer_
	,VkBool32  occlusionQueryEnable_
	,F_query_control  queryFlags_
	,F_query_pipeline_statistic  pipelineStatistics_);
};

/*	VkCommandBufferBeginInfo:
extends:
	S_device_group_command_buffer_begin_info*/
typedef struct S_command_buffer_begin_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
	void* pNext = nullptr;
public:
/*Command buffer usage flags*/
	F_command_buffer_usage flags;
/*Pointer to inheritance info for secondary command buffers*/
	const S_command_buffer_inheritance_info* pInheritanceInfo;

S_command_buffer_begin_info(
	 F_command_buffer_usage  flags_
	,const S_command_buffer_inheritance_info*       pInheritanceInfo_);
};

/*	VkRenderPassBeginInfo:
extends:
	S_device_group_render_pass_begin_info
	S_render_pass_sample_locations_begin_info_EXT*/
typedef struct S_render_pass_begin_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
	void* pNext = nullptr;
public:
	VkRenderPass renderPass;
	VkFramebuffer framebuffer;
	S_rect_2d renderArea;
/*|optional|	*/
	uint32_t clearValueCount;
/*
len:	clearValueCount*/
	const VkClearValue* pClearValues;

S_render_pass_begin_info(
	 VkRenderPass  renderPass_
	,VkFramebuffer  framebuffer_
	,S_rect_2d  renderArea_
	,uint32_t  clearValueCount_
	,const VkClearValue*    pClearValues_);
};

/*	VkRenderPassCreateInfo:
extends:
	S_render_pass_multiview_create_info
	S_render_pass_input_attachment_aspect_create_info*/
typedef struct S_render_pass_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_render_pass_create flags;
/*|optional|	*/
	uint32_t attachmentCount;
/*
len:	attachmentCount*/
	const S_attachment_description* pAttachments;
	uint32_t subpassCount;
/*
len:	subpassCount*/
	const S_subpass_description* pSubpasses;
/*|optional|	*/
	uint32_t dependencyCount;
/*
len:	dependencyCount*/
	const S_subpass_dependency* pDependencies;

S_render_pass_create_info(
	 F_render_pass_create  flags_
	,uint32_t  attachmentCount_
	,const S_attachment_description* pAttachments_
	,uint32_t  subpassCount_
	,const S_subpass_description* pSubpasses_
	,uint32_t  dependencyCount_
	,const S_subpass_dependency* pDependencies_);
};

/*	VkFenceCreateInfo:
extends:
	S_export_fence_create_info
	S_export_fence_win32_handle_info_KHR*/
typedef struct S_fence_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Fence creation flags*/
	F_fence_create flags;

S_fence_create_info(
	 F_fence_create  flags_);
};

/*	VkSemaphoreCreateInfo:
extends:
	S_export_semaphore_create_info
	S_export_semaphore_win32_handle_info_KHR*/
typedef struct S_semaphore_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*Semaphore creation flags*/
	VkSemaphoreCreateFlags flags;

S_semaphore_create_info(
	 VkSemaphoreCreateFlags  flags_);
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SUBMIT_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	uint32_t waitSemaphoreCount;
/*
len:	waitSemaphoreCount*/
	const VkSemaphore* pWaitSemaphores;
/*
len:	waitSemaphoreCount*/
	const F_pipeline_stage* pWaitDstStageMask;
/*|optional|	*/
	uint32_t commandBufferCount;
/*
len:	commandBufferCount*/
	const VkCommandBuffer* pCommandBuffers;
/*|optional|	*/
	uint32_t signalSemaphoreCount;
/*
len:	signalSemaphoreCount*/
	const VkSemaphore* pSignalSemaphores;

S_submit_info(
	 uint32_t  waitSemaphoreCount_
	,const VkSemaphore*     pWaitSemaphores_
	,const F_pipeline_stage*           pWaitDstStageMask_
	,uint32_t  commandBufferCount_
	,const VkCommandBuffer*     pCommandBuffers_
	,uint32_t  signalSemaphoreCount_
	,const VkSemaphore*     pSignalSemaphores_);
};

/*	VkSwapchainCreateInfoKHR:
extends:
	S_swapchain_counter_create_info_EXT
	S_device_group_swapchain_create_info_KHR*/
typedef struct S_swapchain_create_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
	void* pNext = nullptr;
public:
/*|optional|	*/
	F_swapchain_create_khr flags;
/*The swapchain's target surface*/
	VkSurfaceKHR surface;
/*Minimum number of presentation images the application needs*/
	uint32_t minImageCount;
/*Format of the presentation images*/
	E_format imageFormat;
/*Colorspace of the presentation images*/
	E_color_space_KHR imageColorSpace;
/*Dimensions of the presentation images*/
	S_extent_2d imageExtent;
/*Determines the number of views for multiview/stereo presentation*/
	uint32_t imageArrayLayers;
/*Bits indicating how the presentation images will be used*/
	F_image_usage imageUsage;
/*Sharing mode used for the presentation images*/
	E_sharing_mode imageSharingMode;
/*Number of queue families having access to the images in case of concurrent sharing mode*/
	uint32_t queueFamilyIndexCount;
/*Array of queue family indices having access to the images in case of concurrent sharing mode
len:	queueFamilyIndexCount*/
	const uint32_t* pQueueFamilyIndices;
/*The transform, relative to the device's natural orientation, applied to the image content prior to presentation*/
	F_surface_transform_khr preTransform;
/*The alpha blending mode used when compositing this surface with other surfaces in the window system*/
	F_composite_alpha_khr compositeAlpha;
/*Which presentation mode to use for presents on this swap chain*/
	E_present_mode_KHR presentMode;
/*Specifies whether presentable images may be affected by window clip regions*/
	VkBool32 clipped;
/*Existing swap chain to replace, if any*/
	VkSwapchainKHR oldSwapchain;

S_swapchain_create_info_KHR(
	 F_swapchain_create_khr  flags_
	,VkSurfaceKHR  surface_
	,uint32_t  minImageCount_
	,E_format  imageFormat_
	,E_color_space_KHR  imageColorSpace_
	,S_extent_2d  imageExtent_
	,uint32_t  imageArrayLayers_
	,F_image_usage  imageUsage_
	,E_sharing_mode  imageSharingMode_
	,uint32_t  queueFamilyIndexCount_
	,const uint32_t*                  pQueueFamilyIndices_
	,F_surface_transform_khr  preTransform_
	,F_composite_alpha_khr  compositeAlpha_
	,E_present_mode_KHR  presentMode_
	,VkBool32  clipped_
	,VkSwapchainKHR  oldSwapchain_);
};

/*	VkPresentInfoKHR:
extends:
	S_display_present_info_KHR
	S_present_regions_KHR
	S_device_group_present_info_KHR
	S_present_times_info_GOOGLE*/
typedef struct S_present_info_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
	void* pNext = nullptr;
public:
/*Number of semaphores to wait for before presenting*/
	uint32_t waitSemaphoreCount;
/*Semaphores to wait for before presenting
len:	waitSemaphoreCount*/
	const VkSemaphore* pWaitSemaphores;
/*Number of swapchains to present in this call*/
	uint32_t swapchainCount;
/*Swapchains to present an image from
len:	swapchainCount*/
	const VkSwapchainKHR* pSwapchains;
/*Indices of which presentable images to present
len:	swapchainCount*/
	const uint32_t* pImageIndices;
/*Optional (i.e. if non-NULL) VkResult for each swapchain
len:	swapchainCount*/
	E_result* pResults;

S_present_info_KHR(
	 uint32_t  waitSemaphoreCount_
	,const VkSemaphore* pWaitSemaphores_
	,uint32_t  swapchainCount_
	,const VkSwapchainKHR* pSwapchains_
	,const uint32_t* pImageIndices_
	,E_result* pResults_);
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
	void* pNext = nullptr;
public:
	S_physical_device_features features;

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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
	void* pNext = nullptr;
public:
	S_physical_device_properties properties;

S_physical_device_properties2(
	 S_physical_device_properties  properties_);
};

/*	VkFormatProperties2:
returnd only
extends:
	S_drm_format_modifier_properties_list_EXT*/
typedef struct S_format_properties2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
	void* pNext = nullptr;
public:
	S_format_properties formatProperties;

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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
	void* pNext = nullptr;
public:
	S_image_format_properties imageFormatProperties;

S_image_format_properties2(
	 S_image_format_properties  imageFormatProperties_);
};

/*	VkPhysicalDeviceImageFormatInfo2:
extends:
	S_physical_device_external_image_format_info
	S_physical_device_image_drm_format_modifier_info_EXT*/
typedef struct S_physical_device_image_format_info2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
	void* pNext = nullptr;
public:
	E_format format;
	E_image_type type;
	E_image_tiling tiling;
	F_image_usage usage;
/*|optional|	*/
	F_image_create flags;

S_physical_device_image_format_info2(
	 E_format  format_
	,E_image_type  type_
	,E_image_tiling  tiling_
	,F_image_usage  usage_
	,F_image_create  flags_);
};

/*	VkQueueFamilyProperties2:
returnd only
extends:
	S_queue_family_checkpoint_properties_NV*/
typedef struct S_queue_family_properties2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;
	void* pNext = nullptr;
public:
	S_queue_family_properties queueFamilyProperties;

S_queue_family_properties2(
	 S_queue_family_properties  queueFamilyProperties_);
};

/*	VkBindBufferMemoryInfo:
extends:
	S_bind_buffer_memory_device_group_info*/
typedef struct S_bind_buffer_memory_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;
	void* pNext = nullptr;
public:
	VkBuffer buffer;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;

S_bind_buffer_memory_info(
	 VkBuffer  buffer_
	,VkDeviceMemory  memory_
	,VkDeviceSize  memoryOffset_);
};

/*	VkBindImageMemoryInfo:
extends:
	S_bind_image_memory_device_group_info
	S_bind_image_memory_swapchain_info_KHR
	S_bind_image_plane_memory_info*/
typedef struct S_bind_image_memory_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO;
	void* pNext = nullptr;
public:
	VkImage image;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;

S_bind_image_memory_info(
	 VkImage  image_
	,VkDeviceMemory  memory_
	,VkDeviceSize  memoryOffset_);
};

/*	VkSurfaceCapabilities2KHR:
returnd only
extends:
	S_shared_present_surface_capabilities_KHR*/
typedef struct S_surface_capabilities2_KHR{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR;
	void* pNext = nullptr;
public:
	S_surface_capabilities_KHR surfaceCapabilities;

S_surface_capabilities2_KHR(
	 S_surface_capabilities_KHR  surfaceCapabilities_);
};

/*	VkImageMemoryRequirementsInfo2:
extends:
	S_image_plane_memory_requirements_info*/
typedef struct S_image_memory_requirements_info2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
	void* pNext = nullptr;
public:
	VkImage image;

S_image_memory_requirements_info2(
	 VkImage  image_);
};

/*	VkMemoryRequirements2:
returnd only
extends:
	S_memory_dedicated_requirements*/
typedef struct S_memory_requirements2{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
	void* pNext = nullptr;
public:
	S_memory_requirements memoryRequirements;

S_memory_requirements2(
	 S_memory_requirements  memoryRequirements_);
};

/*	VkSamplerYcbcrConversionCreateInfo:
extends:
	S_external_format_ANDROID*/
typedef struct S_sampler_ycbcr_conversion_create_info{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
	void* pNext = nullptr;
public:
	E_format format;
	E_sampler_ycbcr_model_conversion ycbcrModel;
	E_sampler_ycbcr_range ycbcrRange;
	S_component_mapping components;
	E_chroma_location xChromaOffset;
	E_chroma_location yChromaOffset;
	E_filter chromaFilter;
	VkBool32 forceExplicitReconstruction;

S_sampler_ycbcr_conversion_create_info(
	 E_format  format_
	,E_sampler_ycbcr_model_conversion  ycbcrModel_
	,E_sampler_ycbcr_range  ycbcrRange_
	,S_component_mapping  components_
	,E_chroma_location  xChromaOffset_
	,E_chroma_location  yChromaOffset_
	,E_filter  chromaFilter_
	,VkBool32  forceExplicitReconstruction_);
};

/*	VkDescriptorSetLayoutSupport:
returnd only
extends:
	S_descriptor_set_variable_descriptor_count_layout_support_EXT*/
typedef struct S_descriptor_set_layout_support{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT;
	void* pNext = nullptr;
public:
	VkBool32 supported;

S_descriptor_set_layout_support(
	 VkBool32  supported_);
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
/*	VkAndroidHardwareBufferPropertiesANDROID:
returnd only
extends:
	S_android_hardware_buffer_format_properties_ANDROID*/
typedef struct S_android_hardware_buffer_properties_ANDROID{
private:
	VkStructureType sTpye = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID;
	void* pNext = nullptr;
public:
	VkDeviceSize allocationSize;
	uint32_t memoryTypeBits;

S_android_hardware_buffer_properties_ANDROID(
	 VkDeviceSize  allocationSize_
	,uint32_t  memoryTypeBits_);
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
	VkStructureType sTpye = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
	void* pNext = nullptr;
public:
/*|optional|	*/
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
/*
len:	queueCreateInfoCount*/
	const S_device_queue_create_info* pQueueCreateInfos;
/*|optional|	*/
	uint32_t enabledLayerCount;
/*Ordered list of layer names to be enabled
len:	enabledLayerCount,null-terminated*/
	const char* const* ppEnabledLayerNames;
/*|optional|	*/
	uint32_t enabledExtensionCount;
/*
len:	enabledExtensionCount,null-terminated*/
	const char* const* ppEnabledExtensionNames;
/*|optional|	*/
	const S_physical_device_features* pEnabledFeatures;

S_device_create_info(
	 VkDeviceCreateFlags  flags_
	,uint32_t  queueCreateInfoCount_
	,const S_device_queue_create_info* pQueueCreateInfos_
	,uint32_t  enabledLayerCount_
	,const char* const*      ppEnabledLayerNames_
	,uint32_t  enabledExtensionCount_
	,const char* const*      ppEnabledExtensionNames_
	,const S_physical_device_features* pEnabledFeatures_);
};


//449
}}
