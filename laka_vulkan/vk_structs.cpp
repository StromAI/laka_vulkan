/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#include "vk_structs.h"
namespace laka { namespace vk {
S_offset_2d::S_offset_2d(
	int32_t   x_
	,int32_t   y_):
		x(x_)
		,y(y_)
{	}

S_offset_3d::S_offset_3d(
	int32_t   x_
	,int32_t   y_
	,int32_t   z_):
		x(x_)
		,y(y_)
		,z(z_)
{	}

S_extent_2d::S_extent_2d(
	uint32_t   width_
	,uint32_t   height_):
		width(width_)
		,height(height_)
{	}

S_extent_3d::S_extent_3d(
	uint32_t   width_
	,uint32_t   height_
	,uint32_t   depth_):
		width(width_)
		,height(height_)
		,depth(depth_)
{	}

S_viewport::S_viewport(
	float   x_
	,float   y_
	,float   width_
	,float   height_
	,float   minDepth_
	,float   maxDepth_):
		x(x_)
		,y(y_)
		,width(width_)
		,height(height_)
		,minDepth(minDepth_)
		,maxDepth(maxDepth_)
{	}

S_rect_2d::S_rect_2d(
	S_offset_2d  offset_
	,S_extent_2d  extent_):
		offset(offset_)
		,extent(extent_)
{	}

S_clear_rect::S_clear_rect(
	S_rect_2d  rect_
	,uint32_t   baseArrayLayer_
	,uint32_t   layerCount_):
		rect(rect_)
		,baseArrayLayer(baseArrayLayer_)
		,layerCount(layerCount_)
{	}

S_component_mapping::S_component_mapping(
	E_component_swizzle  r_
	,E_component_swizzle  g_
	,E_component_swizzle  b_
	,E_component_swizzle  a_):
		r(r_)
		,g(g_)
		,b(b_)
		,a(a_)
{	}

S_extension_properties::S_extension_properties(
	char [VK_MAX_EXTENSION_NAME_SIZE]  extensionName_
	,uint32_t   specVersion_):
		extensionName(extensionName_)
		,specVersion(specVersion_)
{	}

S_layer_properties::S_layer_properties(
	char [VK_MAX_EXTENSION_NAME_SIZE]  layerName_
	,uint32_t   specVersion_
	,uint32_t   implementationVersion_
	,char [VK_MAX_DESCRIPTION_SIZE]  description_):
		layerName(layerName_)
		,specVersion(specVersion_)
		,implementationVersion(implementationVersion_)
		,description(description_)
{	}

S_allocation_callbacks::S_allocation_callbacks(
	void*            *           pUserData_
	,PFN_vkAllocationFunction   pfnAllocation_
	,PFN_vkReallocationFunction   pfnReallocation_
	,PFN_vkFreeFunction   pfnFree_
	,PFN_vkInternalAllocationNotification   pfnInternalAllocation_
	,PFN_vkInternalFreeNotification   pfnInternalFree_):
		pUserData(pUserData_)
		,pfnAllocation(pfnAllocation_)
		,pfnReallocation(pfnReallocation_)
		,pfnFree(pfnFree_)
		,pfnInternalAllocation(pfnInternalAllocation_)
		,pfnInternalFree(pfnInternalFree_)
{	}

S_queue_family_properties::S_queue_family_properties(
	VkQueueFlags   queueFlags_
	,uint32_t   queueCount_
	,uint32_t   timestampValidBits_
	,S_extent_3d  minImageTransferGranularity_):
		queueFlags(queueFlags_)
		,queueCount(queueCount_)
		,timestampValidBits(timestampValidBits_)
		,minImageTransferGranularity(minImageTransferGranularity_)
{	}

S_physical_device_memory_properties::S_physical_device_memory_properties(
	uint32_t   memoryTypeCount_
	,S_memory_type  memoryTypes_
	,uint32_t   memoryHeapCount_
	,S_memory_heap  memoryHeaps_):
		memoryTypeCount(memoryTypeCount_)
		,memoryTypes(memoryTypes_)
		,memoryHeapCount(memoryHeapCount_)
		,memoryHeaps(memoryHeaps_)
{	}

S_memory_requirements::S_memory_requirements(
	VkDeviceSize   size_
	,VkDeviceSize   alignment_
	,uint32_t   memoryTypeBits_):
		size(size_)
		,alignment(alignment_)
		,memoryTypeBits(memoryTypeBits_)
{	}

S_sparse_image_format_properties::S_sparse_image_format_properties(
	VkImageAspectFlags   aspectMask_
	,S_extent_3d  imageGranularity_
	,VkSparseImageFormatFlags   flags_):
		aspectMask(aspectMask_)
		,imageGranularity(imageGranularity_)
		,flags(flags_)
{	}

S_sparse_image_memory_requirements::S_sparse_image_memory_requirements(
	S_sparse_image_format_properties  formatProperties_
	,uint32_t   imageMipTailFirstLod_
	,VkDeviceSize   imageMipTailSize_
	,VkDeviceSize   imageMipTailOffset_
	,VkDeviceSize   imageMipTailStride_):
		formatProperties(formatProperties_)
		,imageMipTailFirstLod(imageMipTailFirstLod_)
		,imageMipTailSize(imageMipTailSize_)
		,imageMipTailOffset(imageMipTailOffset_)
		,imageMipTailStride(imageMipTailStride_)
{	}

S_memory_type::S_memory_type(
	VkMemoryPropertyFlags   propertyFlags_
	,uint32_t   heapIndex_):
		propertyFlags(propertyFlags_)
		,heapIndex(heapIndex_)
{	}

S_memory_heap::S_memory_heap(
	VkDeviceSize   size_
	,VkMemoryHeapFlags   flags_):
		size(size_)
		,flags(flags_)
{	}

S_format_properties::S_format_properties(
	VkFormatFeatureFlags   linearTilingFeatures_
	,VkFormatFeatureFlags   optimalTilingFeatures_
	,VkFormatFeatureFlags   bufferFeatures_):
		linearTilingFeatures(linearTilingFeatures_)
		,optimalTilingFeatures(optimalTilingFeatures_)
		,bufferFeatures(bufferFeatures_)
{	}

S_image_format_properties::S_image_format_properties(
	S_extent_3d  maxExtent_
	,uint32_t   maxMipLevels_
	,uint32_t   maxArrayLayers_
	,VkSampleCountFlags   sampleCounts_
	,VkDeviceSize   maxResourceSize_):
		maxExtent(maxExtent_)
		,maxMipLevels(maxMipLevels_)
		,maxArrayLayers(maxArrayLayers_)
		,sampleCounts(sampleCounts_)
		,maxResourceSize(maxResourceSize_)
{	}

S_descriptor_buffer_info::S_descriptor_buffer_info(
	VkBuffer   buffer_
	,VkDeviceSize   offset_
	,VkDeviceSize   range_):
		buffer(buffer_)
		,offset(offset_)
		,range(range_)
{	}

S_descriptor_image_info::S_descriptor_image_info(
	VkSampler   sampler_
	,VkImageView   imageView_
	,E_image_layout  imageLayout_):
		sampler(sampler_)
		,imageView(imageView_)
		,imageLayout(imageLayout_)
{	}

S_image_subresource::S_image_subresource(
	VkImageAspectFlags   aspectMask_
	,uint32_t   mipLevel_
	,uint32_t   arrayLayer_):
		aspectMask(aspectMask_)
		,mipLevel(mipLevel_)
		,arrayLayer(arrayLayer_)
{	}

S_image_subresource_layers::S_image_subresource_layers(
	VkImageAspectFlags   aspectMask_
	,uint32_t   mipLevel_
	,uint32_t   baseArrayLayer_
	,uint32_t   layerCount_):
		aspectMask(aspectMask_)
		,mipLevel(mipLevel_)
		,baseArrayLayer(baseArrayLayer_)
		,layerCount(layerCount_)
{	}

S_image_subresource_range::S_image_subresource_range(
	VkImageAspectFlags   aspectMask_
	,uint32_t   baseMipLevel_
	,uint32_t   levelCount_
	,uint32_t   baseArrayLayer_
	,uint32_t   layerCount_):
		aspectMask(aspectMask_)
		,baseMipLevel(baseMipLevel_)
		,levelCount(levelCount_)
		,baseArrayLayer(baseArrayLayer_)
		,layerCount(layerCount_)
{	}

S_subresource_layout::S_subresource_layout(
	VkDeviceSize   offset_
	,VkDeviceSize   size_
	,VkDeviceSize   rowPitch_
	,VkDeviceSize   arrayPitch_
	,VkDeviceSize   depthPitch_):
		offset(offset_)
		,size(size_)
		,rowPitch(rowPitch_)
		,arrayPitch(arrayPitch_)
		,depthPitch(depthPitch_)
{	}

S_buffer_copy::S_buffer_copy(
	VkDeviceSize   srcOffset_
	,VkDeviceSize   dstOffset_
	,VkDeviceSize   size_):
		srcOffset(srcOffset_)
		,dstOffset(dstOffset_)
		,size(size_)
{	}

S_sparse_memory_bind::S_sparse_memory_bind(
	VkDeviceSize   resourceOffset_
	,VkDeviceSize   size_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_
	,VkSparseMemoryBindFlags flags_):
		resourceOffset(resourceOffset_)
		,size(size_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
		,flags(flags_)
{	}

S_sparse_image_memory_bind::S_sparse_image_memory_bind(
	S_image_subresource  subresource_
	,S_offset_3d  offset_
	,S_extent_3d  extent_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_
	,VkSparseMemoryBindFlags flags_):
		subresource(subresource_)
		,offset(offset_)
		,extent(extent_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
		,flags(flags_)
{	}

S_sparse_buffer_memory_bind_info::S_sparse_buffer_memory_bind_info(
	VkBuffer   buffer_
	,uint32_t   bindCount_
	,const S_sparse_memory_bind * pBinds_):
		buffer(buffer_)
		,bindCount(bindCount_)
		,pBinds(pBinds_)
{	}

S_sparse_image_opaque_memory_bind_info::S_sparse_image_opaque_memory_bind_info(
	VkImage   image_
	,uint32_t   bindCount_
	,const S_sparse_memory_bind * pBinds_):
		image(image_)
		,bindCount(bindCount_)
		,pBinds(pBinds_)
{	}

S_sparse_image_memory_bind_info::S_sparse_image_memory_bind_info(
	VkImage   image_
	,uint32_t   bindCount_
	,const S_sparse_image_memory_bind * pBinds_):
		image(image_)
		,bindCount(bindCount_)
		,pBinds(pBinds_)
{	}

S_image_copy::S_image_copy(
	S_image_subresource_layers  srcSubresource_
	,S_offset_3d  srcOffset_
	,S_image_subresource_layers  dstSubresource_
	,S_offset_3d  dstOffset_
	,S_extent_3d  extent_):
		srcSubresource(srcSubresource_)
		,srcOffset(srcOffset_)
		,dstSubresource(dstSubresource_)
		,dstOffset(dstOffset_)
		,extent(extent_)
{	}

S_image_blit::S_image_blit(
	S_image_subresource_layers  srcSubresource_
	,S_offset_3d  srcOffsets_
	,S_image_subresource_layers  dstSubresource_
	,S_offset_3d  dstOffsets_):
		srcSubresource(srcSubresource_)
		,srcOffsets(srcOffsets_)
		,dstSubresource(dstSubresource_)
		,dstOffsets(dstOffsets_)
{	}

S_buffer_image_copy::S_buffer_image_copy(
	VkDeviceSize   bufferOffset_
	,uint32_t   bufferRowLength_
	,uint32_t   bufferImageHeight_
	,S_image_subresource_layers  imageSubresource_
	,S_offset_3d  imageOffset_
	,S_extent_3d  imageExtent_):
		bufferOffset(bufferOffset_)
		,bufferRowLength(bufferRowLength_)
		,bufferImageHeight(bufferImageHeight_)
		,imageSubresource(imageSubresource_)
		,imageOffset(imageOffset_)
		,imageExtent(imageExtent_)
{	}

S_image_resolve::S_image_resolve(
	S_image_subresource_layers  srcSubresource_
	,S_offset_3d  srcOffset_
	,S_image_subresource_layers  dstSubresource_
	,S_offset_3d  dstOffset_
	,S_extent_3d  extent_):
		srcSubresource(srcSubresource_)
		,srcOffset(srcOffset_)
		,dstSubresource(dstSubresource_)
		,dstOffset(dstOffset_)
		,extent(extent_)
{	}

S_descriptor_set_layout_binding::S_descriptor_set_layout_binding(
	uint32_t   binding_
	,E_descriptor_type  descriptorType_
	,uint32_t   descriptorCount_
	,VkShaderStageFlags   stageFlags_
	,const const VkSampler*        *       pImmutableSamplers_):
		binding(binding_)
		,descriptorType(descriptorType_)
		,descriptorCount(descriptorCount_)
		,stageFlags(stageFlags_)
		,pImmutableSamplers(pImmutableSamplers_)
{	}

S_descriptor_pool_size::S_descriptor_pool_size(
	E_descriptor_type  type_
	,uint32_t   descriptorCount_):
		type(type_)
		,descriptorCount(descriptorCount_)
{	}

S_specialization_map_entry::S_specialization_map_entry(
	uint32_t   constantID_
	,uint32_t   offset_
	,_t   size_):
		constantID(constantID_)
		,offset(offset_)
		,size(size_)
{	}

S_specialization_info::S_specialization_info(
	uint32_t   mapEntryCount_
	,const S_specialization_map_entry * pMapEntries_
	,size_t   dataSize_
	,const const void*             *            pData_):
		mapEntryCount(mapEntryCount_)
		,pMapEntries(pMapEntries_)
		,dataSize(dataSize_)
		,pData(pData_)
{	}

S_vertex_input_binding_description::S_vertex_input_binding_description(
	uint32_t   binding_
	,uint32_t   stride_
	,E_vertex_input_rate  inputRate_):
		binding(binding_)
		,stride(stride_)
		,inputRate(inputRate_)
{	}

S_vertex_input_attribute_description::S_vertex_input_attribute_description(
	uint32_t   location_
	,uint32_t   binding_
	,E_format  format_
	,uint32_t   offset_):
		location(location_)
		,binding(binding_)
		,format(format_)
		,offset(offset_)
{	}

S_pipeline_color_blend_attachment_state::S_pipeline_color_blend_attachment_state(
	VkBool32   blendEnable_
	,E_blend_factor  srcColorBlendFactor_
	,E_blend_factor  dstColorBlendFactor_
	,E_blend_op  colorBlendOp_
	,E_blend_factor  srcAlphaBlendFactor_
	,E_blend_factor  dstAlphaBlendFactor_
	,E_blend_op  alphaBlendOp_
	,VkColorComponentFlags   colorWriteMask_):
		blendEnable(blendEnable_)
		,srcColorBlendFactor(srcColorBlendFactor_)
		,dstColorBlendFactor(dstColorBlendFactor_)
		,colorBlendOp(colorBlendOp_)
		,srcAlphaBlendFactor(srcAlphaBlendFactor_)
		,dstAlphaBlendFactor(dstAlphaBlendFactor_)
		,alphaBlendOp(alphaBlendOp_)
		,colorWriteMask(colorWriteMask_)
{	}

S_stencil_op_state::S_stencil_op_state(
	E_stencil_op  failOp_
	,E_stencil_op  passOp_
	,E_stencil_op  depthFailOp_
	,E_compare_op  compareOp_
	,uint32_t   compareMask_
	,uint32_t   writeMask_
	,uint32_t   reference_):
		failOp(failOp_)
		,passOp(passOp_)
		,depthFailOp(depthFailOp_)
		,compareOp(compareOp_)
		,compareMask(compareMask_)
		,writeMask(writeMask_)
		,reference(reference_)
{	}

S_push_constant_range::S_push_constant_range(
	VkShaderStageFlags   stageFlags_
	,uint32_t   offset_
	,uint32_t   size_):
		stageFlags(stageFlags_)
		,offset(offset_)
		,size(size_)
{	}

S_clear_depth_stencil_value::S_clear_depth_stencil_value(
	float   depth_
	,uint32_t   stencil_):
		depth(depth_)
		,stencil(stencil_)
{	}

S_clear_attachment::S_clear_attachment(
	VkImageAspectFlags   aspectMask_
	,uint32_t   colorAttachment_
	,VkClearValue   clearValue_):
		aspectMask(aspectMask_)
		,colorAttachment(colorAttachment_)
		,clearValue(clearValue_)
{	}

S_attachment_description::S_attachment_description(
	VkAttachmentDescriptionFlags   flags_
	,E_format  format_
	,F_sample_count  samples_
	,E_attachment_load_op  loadOp_
	,E_attachment_store_op  storeOp_
	,E_attachment_load_op  stencilLoadOp_
	,E_attachment_store_op  stencilStoreOp_
	,E_image_layout  initialLayout_
	,E_image_layout  finalLayout_):
		flags(flags_)
		,format(format_)
		,samples(samples_)
		,loadOp(loadOp_)
		,storeOp(storeOp_)
		,stencilLoadOp(stencilLoadOp_)
		,stencilStoreOp(stencilStoreOp_)
		,initialLayout(initialLayout_)
		,finalLayout(finalLayout_)
{	}

S_attachment_reference::S_attachment_reference(
	uint32_t   attachment_
	,E_image_layout  layout_):
		attachment(attachment_)
		,layout(layout_)
{	}

S_subpass_description::S_subpass_description(
	VkSubpassDescriptionFlags   flags_
	,E_pipeline_bind_point  pipelineBindPoint_
	,uint32_t   inputAttachmentCount_
	,const S_attachment_reference * pInputAttachments_
	,uint32_t   colorAttachmentCount_
	,const S_attachment_reference * pColorAttachments_
	,const S_attachment_reference * pResolveAttachments_
	,const S_attachment_reference * pDepthStencilAttachment_
	,uint32_t   preserveAttachmentCount_
	,const const uint32_t*  * pPreserveAttachments_):
		flags(flags_)
		,pipelineBindPoint(pipelineBindPoint_)
		,inputAttachmentCount(inputAttachmentCount_)
		,pInputAttachments(pInputAttachments_)
		,colorAttachmentCount(colorAttachmentCount_)
		,pColorAttachments(pColorAttachments_)
		,pResolveAttachments(pResolveAttachments_)
		,pDepthStencilAttachment(pDepthStencilAttachment_)
		,preserveAttachmentCount(preserveAttachmentCount_)
		,pPreserveAttachments(pPreserveAttachments_)
{	}

S_subpass_dependency::S_subpass_dependency(
	uint32_t   srcSubpass_
	,uint32_t   dstSubpass_
	,VkPipelineStageFlags   srcStageMask_
	,VkPipelineStageFlags   dstStageMask_
	,VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,VkDependencyFlags   dependencyFlags_):
		srcSubpass(srcSubpass_)
		,dstSubpass(dstSubpass_)
		,srcStageMask(srcStageMask_)
		,dstStageMask(dstStageMask_)
		,srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
		,dependencyFlags(dependencyFlags_)
{	}

S_physical_device_features::S_physical_device_features(
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
	,VkBool32   inheritedQueries_):
		robustBufferAccess(robustBufferAccess_)
		,fullDrawIndexUint32(fullDrawIndexUint32_)
		,imageCubeArray(imageCubeArray_)
		,independentBlend(independentBlend_)
		,geometryShader(geometryShader_)
		,tessellationShader(tessellationShader_)
		,sampleRateShading(sampleRateShading_)
		,dualSrcBlend(dualSrcBlend_)
		,logicOp(logicOp_)
		,multiDrawIndirect(multiDrawIndirect_)
		,drawIndirectFirstInstance(drawIndirectFirstInstance_)
		,depthClamp(depthClamp_)
		,depthBiasClamp(depthBiasClamp_)
		,fillModeNonSolid(fillModeNonSolid_)
		,depthBounds(depthBounds_)
		,wideLines(wideLines_)
		,largePoints(largePoints_)
		,alphaToOne(alphaToOne_)
		,multiViewport(multiViewport_)
		,samplerAnisotropy(samplerAnisotropy_)
		,textureCompressionETC2(textureCompressionETC2_)
		,textureCompressionASTC_LDR(textureCompressionASTC_LDR_)
		,textureCompressionBC(textureCompressionBC_)
		,occlusionQueryPrecise(occlusionQueryPrecise_)
		,pipelineStatisticsQuery(pipelineStatisticsQuery_)
		,vertexPipelineStoresAndAtomics(vertexPipelineStoresAndAtomics_)
		,fragmentStoresAndAtomics(fragmentStoresAndAtomics_)
		,shaderTessellationAndGeometryPointSize(shaderTessellationAndGeometryPointSize_)
		,shaderImageGatherExtended(shaderImageGatherExtended_)
		,shaderStorageImageExtendedFormats(shaderStorageImageExtendedFormats_)
		,shaderStorageImageMultisample(shaderStorageImageMultisample_)
		,shaderStorageImageReadWithoutFormat(shaderStorageImageReadWithoutFormat_)
		,shaderStorageImageWriteWithoutFormat(shaderStorageImageWriteWithoutFormat_)
		,shaderUniformBufferArrayDynamicIndexing(shaderUniformBufferArrayDynamicIndexing_)
		,shaderSampledImageArrayDynamicIndexing(shaderSampledImageArrayDynamicIndexing_)
		,shaderStorageBufferArrayDynamicIndexing(shaderStorageBufferArrayDynamicIndexing_)
		,shaderStorageImageArrayDynamicIndexing(shaderStorageImageArrayDynamicIndexing_)
		,shaderClipDistance(shaderClipDistance_)
		,shaderCullDistance(shaderCullDistance_)
		,shaderFloat64(shaderFloat64_)
		,shaderInt64(shaderInt64_)
		,shaderInt16(shaderInt16_)
		,shaderResourceResidency(shaderResourceResidency_)
		,shaderResourceMinLod(shaderResourceMinLod_)
		,sparseBinding(sparseBinding_)
		,sparseResidencyBuffer(sparseResidencyBuffer_)
		,sparseResidencyImage2D(sparseResidencyImage2D_)
		,sparseResidencyImage3D(sparseResidencyImage3D_)
		,sparseResidency2Samples(sparseResidency2Samples_)
		,sparseResidency4Samples(sparseResidency4Samples_)
		,sparseResidency8Samples(sparseResidency8Samples_)
		,sparseResidency16Samples(sparseResidency16Samples_)
		,sparseResidencyAliased(sparseResidencyAliased_)
		,variableMultisampleRate(variableMultisampleRate_)
		,inheritedQueries(inheritedQueries_)
{	}

S_physical_device_sparse_properties::S_physical_device_sparse_properties(
	VkBool32   residencyStandard2DBlockShape_
	,VkBool32   residencyStandard2DMultisampleBlockShape_
	,VkBool32   residencyStandard3DBlockShape_
	,VkBool32   residencyAlignedMipSize_
	,VkBool32   residencyNonResidentStrict_):
		residencyStandard2DBlockShape(residencyStandard2DBlockShape_)
		,residencyStandard2DMultisampleBlockShape(residencyStandard2DMultisampleBlockShape_)
		,residencyStandard3DBlockShape(residencyStandard3DBlockShape_)
		,residencyAlignedMipSize(residencyAlignedMipSize_)
		,residencyNonResidentStrict(residencyNonResidentStrict_)
{	}

S_physical_device_limits::S_physical_device_limits(
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
	,VkDeviceSize   nonCoherentAtomSize_):
		maxImageDimension1D(maxImageDimension1D_)
		,maxImageDimension2D(maxImageDimension2D_)
		,maxImageDimension3D(maxImageDimension3D_)
		,maxImageDimensionCube(maxImageDimensionCube_)
		,maxImageArrayLayers(maxImageArrayLayers_)
		,maxTexelBufferElements(maxTexelBufferElements_)
		,maxUniformBufferRange(maxUniformBufferRange_)
		,maxStorageBufferRange(maxStorageBufferRange_)
		,maxPushConstantsSize(maxPushConstantsSize_)
		,maxMemoryAllocationCount(maxMemoryAllocationCount_)
		,maxSamplerAllocationCount(maxSamplerAllocationCount_)
		,bufferImageGranularity(bufferImageGranularity_)
		,sparseAddressSpaceSize(sparseAddressSpaceSize_)
		,maxBoundDescriptorSets(maxBoundDescriptorSets_)
		,maxPerStageDescriptorSamplers(maxPerStageDescriptorSamplers_)
		,maxPerStageDescriptorUniformBuffers(maxPerStageDescriptorUniformBuffers_)
		,maxPerStageDescriptorStorageBuffers(maxPerStageDescriptorStorageBuffers_)
		,maxPerStageDescriptorSampledImages(maxPerStageDescriptorSampledImages_)
		,maxPerStageDescriptorStorageImages(maxPerStageDescriptorStorageImages_)
		,maxPerStageDescriptorInputAttachments(maxPerStageDescriptorInputAttachments_)
		,maxPerStageResources(maxPerStageResources_)
		,maxDescriptorSetSamplers(maxDescriptorSetSamplers_)
		,maxDescriptorSetUniformBuffers(maxDescriptorSetUniformBuffers_)
		,maxDescriptorSetUniformBuffersDynamic(maxDescriptorSetUniformBuffersDynamic_)
		,maxDescriptorSetStorageBuffers(maxDescriptorSetStorageBuffers_)
		,maxDescriptorSetStorageBuffersDynamic(maxDescriptorSetStorageBuffersDynamic_)
		,maxDescriptorSetSampledImages(maxDescriptorSetSampledImages_)
		,maxDescriptorSetStorageImages(maxDescriptorSetStorageImages_)
		,maxDescriptorSetInputAttachments(maxDescriptorSetInputAttachments_)
		,maxVertexInputAttributes(maxVertexInputAttributes_)
		,maxVertexInputBindings(maxVertexInputBindings_)
		,maxVertexInputAttributeOffset(maxVertexInputAttributeOffset_)
		,maxVertexInputBindingStride(maxVertexInputBindingStride_)
		,maxVertexOutputComponents(maxVertexOutputComponents_)
		,maxTessellationGenerationLevel(maxTessellationGenerationLevel_)
		,maxTessellationPatchSize(maxTessellationPatchSize_)
		,maxTessellationControlPerVertexInputComponents(maxTessellationControlPerVertexInputComponents_)
		,maxTessellationControlPerVertexOutputComponents(maxTessellationControlPerVertexOutputComponents_)
		,maxTessellationControlPerPatchOutputComponents(maxTessellationControlPerPatchOutputComponents_)
		,maxTessellationControlTotalOutputComponents(maxTessellationControlTotalOutputComponents_)
		,maxTessellationEvaluationInputComponents(maxTessellationEvaluationInputComponents_)
		,maxTessellationEvaluationOutputComponents(maxTessellationEvaluationOutputComponents_)
		,maxGeometryShaderInvocations(maxGeometryShaderInvocations_)
		,maxGeometryInputComponents(maxGeometryInputComponents_)
		,maxGeometryOutputComponents(maxGeometryOutputComponents_)
		,maxGeometryOutputVertices(maxGeometryOutputVertices_)
		,maxGeometryTotalOutputComponents(maxGeometryTotalOutputComponents_)
		,maxFragmentInputComponents(maxFragmentInputComponents_)
		,maxFragmentOutputAttachments(maxFragmentOutputAttachments_)
		,maxFragmentDualSrcAttachments(maxFragmentDualSrcAttachments_)
		,maxFragmentCombinedOutputResources(maxFragmentCombinedOutputResources_)
		,maxComputeSharedMemorySize(maxComputeSharedMemorySize_)
		,maxComputeWorkGroupCount(maxComputeWorkGroupCount_)
		,maxComputeWorkGroupInvocations(maxComputeWorkGroupInvocations_)
		,maxComputeWorkGroupSize(maxComputeWorkGroupSize_)
		,subPixelPrecisionBits(subPixelPrecisionBits_)
		,subTexelPrecisionBits(subTexelPrecisionBits_)
		,mipmapPrecisionBits(mipmapPrecisionBits_)
		,maxDrawIndexedIndexValue(maxDrawIndexedIndexValue_)
		,maxDrawIndirectCount(maxDrawIndirectCount_)
		,maxSamplerLodBias(maxSamplerLodBias_)
		,maxSamplerAnisotropy(maxSamplerAnisotropy_)
		,maxViewports(maxViewports_)
		,maxViewportDimensions(maxViewportDimensions_)
		,viewportBoundsRange(viewportBoundsRange_)
		,viewportSubPixelBits(viewportSubPixelBits_)
		,minMemoryMapAlignment(minMemoryMapAlignment_)
		,minTexelBufferOffsetAlignment(minTexelBufferOffsetAlignment_)
		,minUniformBufferOffsetAlignment(minUniformBufferOffsetAlignment_)
		,minStorageBufferOffsetAlignment(minStorageBufferOffsetAlignment_)
		,minTexelOffset(minTexelOffset_)
		,maxTexelOffset(maxTexelOffset_)
		,minTexelGatherOffset(minTexelGatherOffset_)
		,maxTexelGatherOffset(maxTexelGatherOffset_)
		,minInterpolationOffset(minInterpolationOffset_)
		,maxInterpolationOffset(maxInterpolationOffset_)
		,subPixelInterpolationOffsetBits(subPixelInterpolationOffsetBits_)
		,maxFramebufferWidth(maxFramebufferWidth_)
		,maxFramebufferHeight(maxFramebufferHeight_)
		,maxFramebufferLayers(maxFramebufferLayers_)
		,framebufferColorSampleCounts(framebufferColorSampleCounts_)
		,framebufferDepthSampleCounts(framebufferDepthSampleCounts_)
		,framebufferStencilSampleCounts(framebufferStencilSampleCounts_)
		,framebufferNoAttachmentsSampleCounts(framebufferNoAttachmentsSampleCounts_)
		,maxColorAttachments(maxColorAttachments_)
		,sampledImageColorSampleCounts(sampledImageColorSampleCounts_)
		,sampledImageIntegerSampleCounts(sampledImageIntegerSampleCounts_)
		,sampledImageDepthSampleCounts(sampledImageDepthSampleCounts_)
		,sampledImageStencilSampleCounts(sampledImageStencilSampleCounts_)
		,storageImageSampleCounts(storageImageSampleCounts_)
		,maxSampleMaskWords(maxSampleMaskWords_)
		,timestampComputeAndGraphics(timestampComputeAndGraphics_)
		,timestampPeriod(timestampPeriod_)
		,maxClipDistances(maxClipDistances_)
		,maxCullDistances(maxCullDistances_)
		,maxCombinedClipAndCullDistances(maxCombinedClipAndCullDistances_)
		,discreteQueuePriorities(discreteQueuePriorities_)
		,pointSizeRange(pointSizeRange_)
		,lineWidthRange(lineWidthRange_)
		,pointSizeGranularity(pointSizeGranularity_)
		,lineWidthGranularity(lineWidthGranularity_)
		,strictLines(strictLines_)
		,standardSampleLocations(standardSampleLocations_)
		,optimalBufferCopyOffsetAlignment(optimalBufferCopyOffsetAlignment_)
		,optimalBufferCopyRowPitchAlignment(optimalBufferCopyRowPitchAlignment_)
		,nonCoherentAtomSize(nonCoherentAtomSize_)
{	}

S_draw_indirect_command::S_draw_indirect_command(
	uint32_t   vertexCount_
	,uint32_t   instanceCount_
	,uint32_t   firstVertex_
	,uint32_t   firstInstance_):
		vertexCount(vertexCount_)
		,instanceCount(instanceCount_)
		,firstVertex(firstVertex_)
		,firstInstance(firstInstance_)
{	}

S_draw_indexed_indirect_command::S_draw_indexed_indirect_command(
	uint32_t   indexCount_
	,uint32_t   instanceCount_
	,uint32_t   firstIndex_
	,int32_t   vertexOffset_
	,uint32_t   firstInstance_):
		indexCount(indexCount_)
		,instanceCount(instanceCount_)
		,firstIndex(firstIndex_)
		,vertexOffset(vertexOffset_)
		,firstInstance(firstInstance_)
{	}

S_dispatch_indirect_command::S_dispatch_indirect_command(
	uint32_t   x_
	,uint32_t   y_
	,uint32_t   z_):
		x(x_)
		,y(y_)
		,z(z_)
{	}

S_display_properties_KHR::S_display_properties_KHR(
	VkDisplayKHR   display_
	,const const char*                       *                      displayName_
	,S_extent_2d  physicalDimensions_
	,S_extent_2d  physicalResolution_
	,VkSurfaceTransformFlagsKHR   supportedTransforms_
	,VkBool32   planeReorderPossible_
	,VkBool32   persistentContent_):
		display(display_)
		,displayName(displayName_)
		,physicalDimensions(physicalDimensions_)
		,physicalResolution(physicalResolution_)
		,supportedTransforms(supportedTransforms_)
		,planeReorderPossible(planeReorderPossible_)
		,persistentContent(persistentContent_)
{	}

S_display_plane_properties_KHR::S_display_plane_properties_KHR(
	VkDisplayKHR   currentDisplay_
	,uint32_t   currentStackIndex_):
		currentDisplay(currentDisplay_)
		,currentStackIndex(currentStackIndex_)
{	}

S_display_mode_parameters_KHR::S_display_mode_parameters_KHR(
	S_extent_2d  visibleRegion_
	,uint32_t   refreshRate_):
		visibleRegion(visibleRegion_)
		,refreshRate(refreshRate_)
{	}

S_display_mode_properties_KHR::S_display_mode_properties_KHR(
	VkDisplayModeKHR   displayMode_
	,S_display_mode_parameters_KHR  parameters_):
		displayMode(displayMode_)
		,parameters(parameters_)
{	}

S_display_plane_capabilities_KHR::S_display_plane_capabilities_KHR(
	VkDisplayPlaneAlphaFlagsKHR   supportedAlpha_
	,S_offset_2d  minSrcPosition_
	,S_offset_2d  maxSrcPosition_
	,S_extent_2d  minSrcExtent_
	,S_extent_2d  maxSrcExtent_
	,S_offset_2d  minDstPosition_
	,S_offset_2d  maxDstPosition_
	,S_extent_2d  minDstExtent_
	,S_extent_2d  maxDstExtent_):
		supportedAlpha(supportedAlpha_)
		,minSrcPosition(minSrcPosition_)
		,maxSrcPosition(maxSrcPosition_)
		,minSrcExtent(minSrcExtent_)
		,maxSrcExtent(maxSrcExtent_)
		,minDstPosition(minDstPosition_)
		,maxDstPosition(maxDstPosition_)
		,minDstExtent(minDstExtent_)
		,maxDstExtent(maxDstExtent_)
{	}

S_surface_capabilities_KHR::S_surface_capabilities_KHR(
	uint32_t   minImageCount_
	,uint32_t   maxImageCount_
	,S_extent_2d  currentExtent_
	,S_extent_2d  minImageExtent_
	,S_extent_2d  maxImageExtent_
	,uint32_t   maxImageArrayLayers_
	,VkSurfaceTransformFlagsKHR   supportedTransforms_
	,F_surface_transform_khr  currentTransform_
	,VkCompositeAlphaFlagsKHR   supportedCompositeAlpha_
	,VkImageUsageFlags   supportedUsageFlags_):
		minImageCount(minImageCount_)
		,maxImageCount(maxImageCount_)
		,currentExtent(currentExtent_)
		,minImageExtent(minImageExtent_)
		,maxImageExtent(maxImageExtent_)
		,maxImageArrayLayers(maxImageArrayLayers_)
		,supportedTransforms(supportedTransforms_)
		,currentTransform(currentTransform_)
		,supportedCompositeAlpha(supportedCompositeAlpha_)
		,supportedUsageFlags(supportedUsageFlags_)
{	}

S_surface_format_KHR::S_surface_format_KHR(
	E_format  format_
	,E_color_space_KHR  colorSpace_):
		format(format_)
		,colorSpace(colorSpace_)
{	}

S_external_image_format_properties_NV::S_external_image_format_properties_NV(
	S_image_format_properties  imageFormatProperties_
	,VkExternalMemoryFeatureFlagsNV   externalMemoryFeatures_
	,VkExternalMemoryHandleTypeFlagsNV   exportFromImportedHandleTypes_
	,VkExternalMemoryHandleTypeFlagsNV   compatibleHandleTypes_):
		imageFormatProperties(imageFormatProperties_)
		,externalMemoryFeatures(externalMemoryFeatures_)
		,exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
		,compatibleHandleTypes(compatibleHandleTypes_)
{	}

S_indirect_commands_token_NVX::S_indirect_commands_token_NVX(
	E_indirect_commands_token_type_NVX  tokenType_
	,VkBuffer   buffer_
	,VkDeviceSize   offset_):
		tokenType(tokenType_)
		,buffer(buffer_)
		,offset(offset_)
{	}

S_indirect_commands_layout_token_NVX::S_indirect_commands_layout_token_NVX(
	E_indirect_commands_token_type_NVX  tokenType_
	,uint32_t   bindingUnit_
	,uint32_t   dynamicCount_
	,uint32_t   divisor_):
		tokenType(tokenType_)
		,bindingUnit(bindingUnit_)
		,dynamicCount(dynamicCount_)
		,divisor(divisor_)
{	}

S_object_table_entry_NVX::S_object_table_entry_NVX(
	E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_):
		type(type_)
		,flags(flags_)
{	}

S_object_table_pipeline_entry_NVX::S_object_table_pipeline_entry_NVX(
	E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkPipeline   pipeline_):
		type(type_)
		,flags(flags_)
		,pipeline(pipeline_)
{	}

S_object_table_descriptor_set_entry_NVX::S_object_table_descriptor_set_entry_NVX(
	E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkPipelineLayout   pipelineLayout_
	,VkDescriptorSet   descriptorSet_):
		type(type_)
		,flags(flags_)
		,pipelineLayout(pipelineLayout_)
		,descriptorSet(descriptorSet_)
{	}

S_object_table_vertex_buffer_entry_NVX::S_object_table_vertex_buffer_entry_NVX(
	E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkBuffer   buffer_):
		type(type_)
		,flags(flags_)
		,buffer(buffer_)
{	}

S_object_table_index_buffer_entry_NVX::S_object_table_index_buffer_entry_NVX(
	E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkBuffer   buffer_
	,E_index_type  indexType_):
		type(type_)
		,flags(flags_)
		,buffer(buffer_)
		,indexType(indexType_)
{	}

S_object_table_push_constant_entry_NVX::S_object_table_push_constant_entry_NVX(
	E_object_entry_type_NVX  type_
	,VkObjectEntryUsageFlagsNVX   flags_
	,VkPipelineLayout   pipelineLayout_
	,VkShaderStageFlags   stageFlags_):
		type(type_)
		,flags(flags_)
		,pipelineLayout(pipelineLayout_)
		,stageFlags(stageFlags_)
{	}

S_conformance_version_KHR::S_conformance_version_KHR(
	uint8_t   major_
	,uint8_t   minor_
	,uint8_t   subminor_
	,uint8_t   patch_):
		major(major_)
		,minor(minor_)
		,subminor(subminor_)
		,patch(patch_)
{	}

S_present_region_KHR::S_present_region_KHR(
	uint32_t   rectangleCount_
	,const S_rect_layer_KHR *   pRectangles_):
		rectangleCount(rectangleCount_)
		,pRectangles(pRectangles_)
{	}

S_rect_layer_KHR::S_rect_layer_KHR(
	S_offset_2d  offset_
	,S_extent_2d  extent_
	,uint32_t   layer_):
		offset(offset_)
		,extent(extent_)
		,layer(layer_)
{	}

S_external_memory_properties::S_external_memory_properties(
	VkExternalMemoryFeatureFlags   externalMemoryFeatures_
	,VkExternalMemoryHandleTypeFlags   exportFromImportedHandleTypes_
	,VkExternalMemoryHandleTypeFlags   compatibleHandleTypes_):
		externalMemoryFeatures(externalMemoryFeatures_)
		,exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
		,compatibleHandleTypes(compatibleHandleTypes_)
{	}

S_descriptor_update_template_entry::S_descriptor_update_template_entry(
	uint32_t   dstBinding_
	,uint32_t   dstArrayElement_
	,uint32_t   descriptorCount_
	,E_descriptor_type  descriptorType_
	,size_t   offset_
	,size_t   stride_):
		dstBinding(dstBinding_)
		,dstArrayElement(dstArrayElement_)
		,descriptorCount(descriptorCount_)
		,descriptorType(descriptorType_)
		,offset(offset_)
		,stride(stride_)
{	}

S_xy_color_EXT::S_xy_color_EXT(
	float   x_
	,float   y_):
		x(x_)
		,y(y_)
{	}

S_refresh_cycle_duration_GOOGLE::S_refresh_cycle_duration_GOOGLE(
	uint64_t   refreshDuration_):
		refreshDuration(refreshDuration_)
{	}

S_past_presentation_timing_GOOGLE::S_past_presentation_timing_GOOGLE(
	uint32_t   presentID_
	,uint64_t   desiredPresentTime_
	,uint64_t   actualPresentTime_
	,uint64_t   earliestPresentTime_
	,uint64_t   presentMargin_):
		presentID(presentID_)
		,desiredPresentTime(desiredPresentTime_)
		,actualPresentTime(actualPresentTime_)
		,earliestPresentTime(earliestPresentTime_)
		,presentMargin(presentMargin_)
{	}

S_present_time_GOOGLE::S_present_time_GOOGLE(
	uint32_t   presentID_
	,uint64_t   desiredPresentTime_):
		presentID(presentID_)
		,desiredPresentTime(desiredPresentTime_)
{	}

S_viewport_w_scaling_NV::S_viewport_w_scaling_NV(
	float   xcoeff_
	,float   ycoeff_):
		xcoeff(xcoeff_)
		,ycoeff(ycoeff_)
{	}

S_viewport_swizzle_NV::S_viewport_swizzle_NV(
	E_viewport_coordinate_swizzle_NV  x_
	,E_viewport_coordinate_swizzle_NV  y_
	,E_viewport_coordinate_swizzle_NV  z_
	,E_viewport_coordinate_swizzle_NV  w_):
		x(x_)
		,y(y_)
		,z(z_)
		,w(w_)
{	}

S_input_attachment_aspect_reference::S_input_attachment_aspect_reference(
	uint32_t   subpass_
	,uint32_t   inputAttachmentIndex_
	,VkImageAspectFlags   aspectMask_):
		subpass(subpass_)
		,inputAttachmentIndex(inputAttachmentIndex_)
		,aspectMask(aspectMask_)
{	}

S_sample_location_EXT::S_sample_location_EXT(
	float   x_
	,float   y_):
		x(x_)
		,y(y_)
{	}

S_attachment_sample_locations_EXT::S_attachment_sample_locations_EXT(
	uint32_t   attachmentIndex_
	,S_sample_locations_info_EXT  sampleLocationsInfo_):
		attachmentIndex(attachmentIndex_)
		,sampleLocationsInfo(sampleLocationsInfo_)
{	}

S_subpass_sample_locations_EXT::S_subpass_sample_locations_EXT(
	uint32_t   subpassIndex_
	,S_sample_locations_info_EXT  sampleLocationsInfo_):
		subpassIndex(subpassIndex_)
		,sampleLocationsInfo(sampleLocationsInfo_)
{	}

S_shader_resource_usage_AMD::S_shader_resource_usage_AMD(
	uint32_t   numUsedVgprs_
	,uint32_t   numUsedSgprs_
	,uint32_t   ldsSizePerLocalWorkGroup_
	,size_t   ldsUsageSizeInBytes_
	,size_t   scratchMemUsageInBytes_):
		numUsedVgprs(numUsedVgprs_)
		,numUsedSgprs(numUsedSgprs_)
		,ldsSizePerLocalWorkGroup(ldsSizePerLocalWorkGroup_)
		,ldsUsageSizeInBytes(ldsUsageSizeInBytes_)
		,scratchMemUsageInBytes(scratchMemUsageInBytes_)
{	}

S_shader_statistics_info_AMD::S_shader_statistics_info_AMD(
	VkShaderStageFlags   shaderStageMask_
	,S_shader_resource_usage_AMD  resourceUsage_
	,uint32_t   numPhysicalVgprs_
	,uint32_t   numPhysicalSgprs_
	,uint32_t   numAvailableVgprs_
	,uint32_t   numAvailableSgprs_
	,uint32_t [3]  computeWorkGroupSize_):
		shaderStageMask(shaderStageMask_)
		,resourceUsage(resourceUsage_)
		,numPhysicalVgprs(numPhysicalVgprs_)
		,numPhysicalSgprs(numPhysicalSgprs_)
		,numAvailableVgprs(numAvailableVgprs_)
		,numAvailableSgprs(numAvailableSgprs_)
		,computeWorkGroupSize(computeWorkGroupSize_)
{	}

S_vertex_input_binding_divisor_description_EXT::S_vertex_input_binding_divisor_description_EXT(
	uint32_t   binding_
	,uint32_t   divisor_):
		binding(binding_)
		,divisor(divisor_)
{	}

S_shading_rate_palette_NV::S_shading_rate_palette_NV(
	uint32_t   shadingRatePaletteEntryCount_
	,const E_shading_rate_palette_entry_NV *  pShadingRatePaletteEntries_):
		shadingRatePaletteEntryCount(shadingRatePaletteEntryCount_)
		,pShadingRatePaletteEntries(pShadingRatePaletteEntries_)
{	}

S_coarse_sample_location_NV::S_coarse_sample_location_NV(
	uint32_t   pixelX_
	,uint32_t   pixelY_
	,uint32_t   sample_):
		pixelX(pixelX_)
		,pixelY(pixelY_)
		,sample(sample_)
{	}

S_coarse_sample_order_custom_NV::S_coarse_sample_order_custom_NV(
	E_shading_rate_palette_entry_NV  shadingRate_
	,uint32_t   sampleCount_
	,uint32_t   sampleLocationCount_
	,const S_coarse_sample_location_NV * pSampleLocations_):
		shadingRate(shadingRate_)
		,sampleCount(sampleCount_)
		,sampleLocationCount(sampleLocationCount_)
		,pSampleLocations(pSampleLocations_)
{	}

S_draw_mesh_tasks_indirect_command_NV::S_draw_mesh_tasks_indirect_command_NV(
	uint32_t   taskCount_
	,uint32_t   firstTask_):
		taskCount(taskCount_)
		,firstTask(firstTask_)
{	}

S_geometry_data_NVX::S_geometry_data_NVX(
	S_geometry_triangles_NVX  triangles_
	,S_geometry_aabb_NVX  aabbs_):
		triangles(triangles_)
		,aabbs(aabbs_)
{	}

S_drm_format_modifier_properties_EXT::S_drm_format_modifier_properties_EXT(
	uint64_t   drmFormatModifier_
	,uint32_t   drmFormatModifierPlaneCount_
	,VkFormatFeatureFlags   drmFormatModifierTilingFeatures_):
		drmFormatModifier(drmFormatModifier_)
		,drmFormatModifierPlaneCount(drmFormatModifierPlaneCount_)
		,drmFormatModifierTilingFeatures(drmFormatModifierTilingFeatures_)
{	}

S_base_out_structure::S_base_out_structure():
		sType(E_structure_type::)
		,pNext(nullptr)
{	}

S_base_in_structure::S_base_in_structure():
		sType(E_structure_type::)
		,pNext(nullptr)
{	}

S_application_info::S_application_info(
	const const char*      *     pApplicationName_
	,uint32_t   applicationVersion_
	,const const char*      *     pEngineName_
	,uint32_t   engineVersion_
	,uint32_t   apiVersion_):
		sType(E_structure_type::e_application_info)
		,pNext(nullptr)
		,pApplicationName(pApplicationName_)
		,applicationVersion(applicationVersion_)
		,pEngineName(pEngineName_)
		,engineVersion(engineVersion_)
		,apiVersion(apiVersion_)
{	}

S_mapped_memory_range::S_mapped_memory_range(
	VkDeviceMemory   memory_
	,VkDeviceSize   offset_
	,VkDeviceSize   size_):
		sType(E_structure_type::e_mapped_memory_range)
		,pNext(nullptr)
		,memory(memory_)
		,offset(offset_)
		,size(size_)
{	}

S_copy_descriptor_set::S_copy_descriptor_set(
	VkDescriptorSet   srcSet_
	,uint32_t   srcBinding_
	,uint32_t   srcArrayElement_
	,VkDescriptorSet   dstSet_
	,uint32_t   dstBinding_
	,uint32_t   dstArrayElement_
	,uint32_t   descriptorCount_):
		sType(E_structure_type::e_copy_descriptor_set)
		,pNext(nullptr)
		,srcSet(srcSet_)
		,srcBinding(srcBinding_)
		,srcArrayElement(srcArrayElement_)
		,dstSet(dstSet_)
		,dstBinding(dstBinding_)
		,dstArrayElement(dstArrayElement_)
		,descriptorCount(descriptorCount_)
{	}

S_buffer_view_create_info::S_buffer_view_create_info(
	VkBufferViewCreateFlags flags_
	,VkBuffer   buffer_
	,E_format  format_
	,VkDeviceSize   offset_
	,VkDeviceSize   range_):
		sType(E_structure_type::e_buffer_view_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,buffer(buffer_)
		,format(format_)
		,offset(offset_)
		,range(range_)
{	}

S_memory_barrier::S_memory_barrier(
	VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_):
		sType(E_structure_type::e_memory_barrier)
		,pNext(nullptr)
		,srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
{	}

S_buffer_memory_barrier::S_buffer_memory_barrier(
	VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,uint32_t   srcQueueFamilyIndex_
	,uint32_t   dstQueueFamilyIndex_
	,VkBuffer   buffer_
	,VkDeviceSize   offset_
	,VkDeviceSize   size_):
		sType(E_structure_type::e_buffer_memory_barrier)
		,pNext(nullptr)
		,srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
		,srcQueueFamilyIndex(srcQueueFamilyIndex_)
		,dstQueueFamilyIndex(dstQueueFamilyIndex_)
		,buffer(buffer_)
		,offset(offset_)
		,size(size_)
{	}

S_pipeline_shader_stage_create_info::S_pipeline_shader_stage_create_info(
	VkPipelineShaderStageCreateFlags   flags_
	,F_shader_stage  stage_
	,VkShaderModule   module_
	,const const char*             *            pName_
	,const S_specialization_info * pSpecializationInfo_):
		sType(E_structure_type::e_pipeline_shader_stage_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,stage(stage_)
		,module(module_)
		,pName(pName_)
		,pSpecializationInfo(pSpecializationInfo_)
{	}

S_compute_pipeline_create_info::S_compute_pipeline_create_info(
	VkPipelineCreateFlags   flags_
	,S_pipeline_shader_stage_create_info  stage_
	,VkPipelineLayout   layout_
	,VkPipeline   basePipelineHandle_
	,int32_t   basePipelineIndex_):
		sType(E_structure_type::e_compute_pipeline_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,stage(stage_)
		,layout(layout_)
		,basePipelineHandle(basePipelineHandle_)
		,basePipelineIndex(basePipelineIndex_)
{	}

S_pipeline_input_assembly_state_create_info::S_pipeline_input_assembly_state_create_info(
	VkPipelineInputAssemblyStateCreateFlags   flags_
	,E_primitive_topology  topology_
	,VkBool32   primitiveRestartEnable_):
		sType(E_structure_type::e_pipeline_input_assembly_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,topology(topology_)
		,primitiveRestartEnable(primitiveRestartEnable_)
{	}

S_pipeline_dynamic_state_create_info::S_pipeline_dynamic_state_create_info(
	VkPipelineDynamicStateCreateFlags   flags_
	,uint32_t   dynamicStateCount_
	,const E_dynamic_state *  pDynamicStates_):
		sType(E_structure_type::e_pipeline_dynamic_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,dynamicStateCount(dynamicStateCount_)
		,pDynamicStates(pDynamicStates_)
{	}

S_pipeline_depth_stencil_state_create_info::S_pipeline_depth_stencil_state_create_info(
	VkPipelineDepthStencilStateCreateFlags   flags_
	,VkBool32   depthTestEnable_
	,VkBool32   depthWriteEnable_
	,E_compare_op  depthCompareOp_
	,VkBool32   depthBoundsTestEnable_
	,VkBool32   stencilTestEnable_
	,S_stencil_op_state  front_
	,S_stencil_op_state  back_
	,float   minDepthBounds_
	,float   maxDepthBounds_):
		sType(E_structure_type::e_pipeline_depth_stencil_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,depthTestEnable(depthTestEnable_)
		,depthWriteEnable(depthWriteEnable_)
		,depthCompareOp(depthCompareOp_)
		,depthBoundsTestEnable(depthBoundsTestEnable_)
		,stencilTestEnable(stencilTestEnable_)
		,front(front_)
		,back(back_)
		,minDepthBounds(minDepthBounds_)
		,maxDepthBounds(maxDepthBounds_)
{	}

S_pipeline_cache_create_info::S_pipeline_cache_create_info(
	VkPipelineCacheCreateFlags   flags_
	,size_t   initialDataSize_
	,const const void*             *            pInitialData_):
		sType(E_structure_type::e_pipeline_cache_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,initialDataSize(initialDataSize_)
		,pInitialData(pInitialData_)
{	}

S_pipeline_layout_create_info::S_pipeline_layout_create_info(
	VkPipelineLayoutCreateFlags   flags_
	,uint32_t   setLayoutCount_
	,const const VkDescriptorSetLayout*  * pSetLayouts_
	,uint32_t   pushConstantRangeCount_
	,const S_push_constant_range * pPushConstantRanges_):
		sType(E_structure_type::e_pipeline_layout_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,setLayoutCount(setLayoutCount_)
		,pSetLayouts(pSetLayouts_)
		,pushConstantRangeCount(pushConstantRangeCount_)
		,pPushConstantRanges(pPushConstantRanges_)
{	}

S_command_pool_create_info::S_command_pool_create_info(
	VkCommandPoolCreateFlags   flags_
	,uint32_t   queueFamilyIndex_):
		sType(E_structure_type::e_command_pool_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,queueFamilyIndex(queueFamilyIndex_)
{	}

S_command_buffer_allocate_info::S_command_buffer_allocate_info(
	VkCommandPool   commandPool_
	,E_command_buffer_level  level_
	,uint32_t   commandBufferCount_):
		sType(E_structure_type::e_command_buffer_allocate_info)
		,pNext(nullptr)
		,commandPool(commandPool_)
		,level(level_)
		,commandBufferCount(commandBufferCount_)
{	}

S_event_create_info::S_event_create_info(
	VkEventCreateFlags   flags_):
		sType(E_structure_type::e_event_create_info)
		,pNext(nullptr)
		,flags(flags_)
{	}

S_query_pool_create_info::S_query_pool_create_info(
	VkQueryPoolCreateFlags   flags_
	,E_query_type  queryType_
	,uint32_t   queryCount_
	,VkQueryPipelineStatisticFlags   pipelineStatistics_):
		sType(E_structure_type::e_query_pool_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,queryType(queryType_)
		,queryCount(queryCount_)
		,pipelineStatistics(pipelineStatistics_)
{	}

S_framebuffer_create_info::S_framebuffer_create_info(
	VkFramebufferCreateFlags   flags_
	,VkRenderPass   renderPass_
	,uint32_t   attachmentCount_
	,const const VkImageView*      *     pAttachments_
	,uint32_t   width_
	,uint32_t   height_
	,uint32_t   layers_):
		sType(E_structure_type::e_framebuffer_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,renderPass(renderPass_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
		,width(width_)
		,height(height_)
		,layers(layers_)
{	}

S_display_mode_create_info_KHR::S_display_mode_create_info_KHR(
	VkDisplayModeCreateFlagsKHR   flags_
	,S_display_mode_parameters_KHR  parameters_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,parameters(parameters_)
{	}

S_display_surface_create_info_KHR::S_display_surface_create_info_KHR(
	VkDisplaySurfaceCreateFlagsKHR   flags_
	,VkDisplayModeKHR   displayMode_
	,uint32_t   planeIndex_
	,uint32_t   planeStackIndex_
	,F_surface_transform_khr  transform_
	,float   globalAlpha_
	,F_display_plane_alpha_khr  alphaMode_
	,S_extent_2d  imageExtent_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,displayMode(displayMode_)
		,planeIndex(planeIndex_)
		,planeStackIndex(planeStackIndex_)
		,transform(transform_)
		,globalAlpha(globalAlpha_)
		,alphaMode(alphaMode_)
		,imageExtent(imageExtent_)
{	}

S_display_present_info_KHR::S_display_present_info_KHR(
	S_rect_2d  srcRect_
	,S_rect_2d  dstRect_
	,VkBool32   persistent_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,srcRect(srcRect_)
		,dstRect(dstRect_)
		,persistent(persistent_)
{	}

S_android_surface_create_info_KHR::S_android_surface_create_info_KHR(
	VkAndroidSurfaceCreateFlagsKHR   flags_
	,struct struct ANativeWindow*     *    window_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,window(window_)
{	}

S_mir_surface_create_info_KHR::S_mir_surface_create_info_KHR(
	VkMirSurfaceCreateFlagsKHR   flags_
	,MirConnection*                    *                   connection_
	,MirSurface*                       *                      mirSurface_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,connection(connection_)
		,mirSurface(mirSurface_)
{	}

S_vi_surface_create_info_NN::S_vi_surface_create_info_NN(
	VkViSurfaceCreateFlagsNN   flags_
	,void*                             *                            window_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,window(window_)
{	}

S_wayland_surface_create_info_KHR::S_wayland_surface_create_info_KHR(
	VkWaylandSurfaceCreateFlagsKHR   flags_
	,struct struct wl_*                *               display_
	,struct struct wl_*                *               surface_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,display(display_)
		,surface(surface_)
{	}

S_win32_surface_create_info_KHR::S_win32_surface_create_info_KHR(
	VkWin32SurfaceCreateFlagsKHR   flags_
	,HINSTANCE   hinstance_
	,HWND   hwnd_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,hinstance(hinstance_)
		,hwnd(hwnd_)
{	}

S_xlib_surface_create_info_KHR::S_xlib_surface_create_info_KHR(
	VkXlibSurfaceCreateFlagsKHR   flags_
	,Display*                          *                         dpy_
	,Window   window_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,dpy(dpy_)
		,window(window_)
{	}

S_xcb_surface_create_info_KHR::S_xcb_surface_create_info_KHR(
	VkXcbSurfaceCreateFlagsKHR   flags_
	,xcb__t*                 *                connection_
	,xcb__t   window_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,connection(connection_)
		,window(window_)
{	}

S_debug_report_callback_create_info_EXT::S_debug_report_callback_create_info_EXT(
	VkDebugReportFlagsEXT   flags_
	,PFN_vkDebugReportCallbackEXT   pfnCallback_
	,void*             *            pUserData_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,pfnCallback(pfnCallback_)
		,pUserData(pUserData_)
{	}

S_validation_flags_EXT::S_validation_flags_EXT(
	uint32_t   disabledValidationCheckCount_
	,const E_validation_check_EXT * pDisabledValidationChecks_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,disabledValidationCheckCount(disabledValidationCheckCount_)
		,pDisabledValidationChecks(pDisabledValidationChecks_)
{	}

S_pipeline_rasterization_state_rasterization_order_AMD::S_pipeline_rasterization_state_rasterization_order_AMD(
	E_rasterization_order_AMD  rasterizationOrder_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,rasterizationOrder(rasterizationOrder_)
{	}

S_debug_marker_object_name_info_EXT::S_debug_marker_object_name_info_EXT(
	E_debug_report_object_type_EXT  objectType_
	,uint64_t   object_
	,const const char*  * pObjectName_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,objectType(objectType_)
		,object(object_)
		,pObjectName(pObjectName_)
{	}

S_debug_marker_object_tag_info_EXT::S_debug_marker_object_tag_info_EXT(
	E_debug_report_object_type_EXT  objectType_
	,uint64_t   object_
	,uint64_t   tagName_
	,size_t   tagSize_
	,const const void*         *        pTag_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,objectType(objectType_)
		,object(object_)
		,tagName(tagName_)
		,tagSize(tagSize_)
		,pTag(pTag_)
{	}

S_debug_marker_marker_info_EXT::S_debug_marker_marker_info_EXT(
	const const char*  * pMarkerName_
	,float [4]  color_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pMarkerName(pMarkerName_)
		,color(color_)
{	}

S_dedicated_allocation_image_create_info_NV::S_dedicated_allocation_image_create_info_NV(
	VkBool32   dedicatedAllocation_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,dedicatedAllocation(dedicatedAllocation_)
{	}

S_dedicated_allocation_buffer_create_info_NV::S_dedicated_allocation_buffer_create_info_NV(
	VkBool32   dedicatedAllocation_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,dedicatedAllocation(dedicatedAllocation_)
{	}

S_dedicated_allocation_memory_allocate_info_NV::S_dedicated_allocation_memory_allocate_info_NV(
	VkImage   image_
	,VkBuffer   buffer_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,image(image_)
		,buffer(buffer_)
{	}

S_external_memory_image_create_info_NV::S_external_memory_image_create_info_NV(
	VkExternalMemoryHandleTypeFlagsNV   handleTypes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleTypes(handleTypes_)
{	}

S_export_memory_allocate_info_NV::S_export_memory_allocate_info_NV(
	VkExternalMemoryHandleTypeFlagsNV   handleTypes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleTypes(handleTypes_)
{	}

S_import_memory_win32_handle_info_NV::S_import_memory_win32_handle_info_NV(
	VkExternalMemoryHandleTypeFlagsNV   handleType_
	,HANDLE   handle_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleType(handleType_)
		,handle(handle_)
{	}

S_export_memory_win32_handle_info_NV::S_export_memory_win32_handle_info_NV(
	const const SECURITY_ATTRIBUTES*        *       pAttributes_
	,DWORD   dwAccess_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
{	}

S_win32_keyed_mutex_acquire_release_info_NV::S_win32_keyed_mutex_acquire_release_info_NV(
	uint32_t   acquireCount_
	,const const VkDeviceMemory*             *            pAcquireSyncs_
	,const const uint64_t*                   *                  pAcquireKeys_
	,const const uint32_t*                   *                  pAcquireTimeoutMilliseconds_
	,uint32_t   releaseCount_
	,const const VkDeviceMemory*             *            pReleaseSyncs_
	,const const uint64_t*                   *                  pReleaseKeys_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,acquireCount(acquireCount_)
		,pAcquireSyncs(pAcquireSyncs_)
		,pAcquireKeys(pAcquireKeys_)
		,pAcquireTimeoutMilliseconds(pAcquireTimeoutMilliseconds_)
		,releaseCount(releaseCount_)
		,pReleaseSyncs(pReleaseSyncs_)
		,pReleaseKeys(pReleaseKeys_)
{	}

S_device_generated_commands_features_NVX::S_device_generated_commands_features_NVX(
	VkBool32   computeBindingPointSupport_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,computeBindingPointSupport(computeBindingPointSupport_)
{	}

S_device_generated_commands_limits_NVX::S_device_generated_commands_limits_NVX(
	uint32_t   maxIndirectCommandsLayoutTokenCount_
	,uint32_t   maxObjectEntryCounts_
	,uint32_t   minSequenceCountBufferOffsetAlignment_
	,uint32_t   minSequenceIndexBufferOffsetAlignment_
	,uint32_t   minCommandsTokenBufferOffsetAlignment_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxIndirectCommandsLayoutTokenCount(maxIndirectCommandsLayoutTokenCount_)
		,maxObjectEntryCounts(maxObjectEntryCounts_)
		,minSequenceCountBufferOffsetAlignment(minSequenceCountBufferOffsetAlignment_)
		,minSequenceIndexBufferOffsetAlignment(minSequenceIndexBufferOffsetAlignment_)
		,minCommandsTokenBufferOffsetAlignment(minCommandsTokenBufferOffsetAlignment_)
{	}

S_indirect_commands_layout_create_info_NVX::S_indirect_commands_layout_create_info_NVX(
	E_pipeline_bind_point  pipelineBindPoint_
	,VkIndirectCommandsLayoutUsageFlagsNVX   flags_
	,uint32_t   tokenCount_
	,const S_indirect_commands_layout_token_NVX *  pTokens_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pipelineBindPoint(pipelineBindPoint_)
		,flags(flags_)
		,tokenCount(tokenCount_)
		,pTokens(pTokens_)
{	}

S_cmd_process_commands_info_NVX::S_cmd_process_commands_info_NVX(
	VkObjectTableNVX   objectTable_
	,VkIndirectCommandsLayoutNVX   indirectCommandsLayout_
	,uint32_t   indirectCommandsTokenCount_
	,const S_indirect_commands_token_NVX *       pIndirectCommandsTokens_
	,uint32_t   maxSequencesCount_
	,VkCommandBuffer   targetCommandBuffer_
	,VkBuffer   sequencesCountBuffer_
	,VkDeviceSize   sequencesCountOffset_
	,VkBuffer   sequencesIndexBuffer_
	,VkDeviceSize   sequencesIndexOffset_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,objectTable(objectTable_)
		,indirectCommandsLayout(indirectCommandsLayout_)
		,indirectCommandsTokenCount(indirectCommandsTokenCount_)
		,pIndirectCommandsTokens(pIndirectCommandsTokens_)
		,maxSequencesCount(maxSequencesCount_)
		,targetCommandBuffer(targetCommandBuffer_)
		,sequencesCountBuffer(sequencesCountBuffer_)
		,sequencesCountOffset(sequencesCountOffset_)
		,sequencesIndexBuffer(sequencesIndexBuffer_)
		,sequencesIndexOffset(sequencesIndexOffset_)
{	}

S_cmd_reserve_space_for_commands_info_NVX::S_cmd_reserve_space_for_commands_info_NVX(
	VkObjectTableNVX   objectTable_
	,VkIndirectCommandsLayoutNVX   indirectCommandsLayout_
	,uint32_t   maxSequencesCount_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,objectTable(objectTable_)
		,indirectCommandsLayout(indirectCommandsLayout_)
		,maxSequencesCount(maxSequencesCount_)
{	}

S_object_table_create_info_NVX::S_object_table_create_info_NVX(
	uint32_t   objectCount_
	,const E_object_entry_type_NVX *       pObjectEntryTypes_
	,const const uint32_t*                    *                   pObjectEntryCounts_
	,const const VkObjectEntryUsageFlagsNVX*  * pObjectEntryUsageFlags_
	,uint32_t   maxUniformBuffersPerDescriptor_
	,uint32_t   maxStorageBuffersPerDescriptor_
	,uint32_t   maxStorageImagesPerDescriptor_
	,uint32_t   maxSampledImagesPerDescriptor_
	,uint32_t   maxPipelineLayouts_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,objectCount(objectCount_)
		,pObjectEntryTypes(pObjectEntryTypes_)
		,pObjectEntryCounts(pObjectEntryCounts_)
		,pObjectEntryUsageFlags(pObjectEntryUsageFlags_)
		,maxUniformBuffersPerDescriptor(maxUniformBuffersPerDescriptor_)
		,maxStorageBuffersPerDescriptor(maxStorageBuffersPerDescriptor_)
		,maxStorageImagesPerDescriptor(maxStorageImagesPerDescriptor_)
		,maxSampledImagesPerDescriptor(maxSampledImagesPerDescriptor_)
		,maxPipelineLayouts(maxPipelineLayouts_)
{	}

S_physical_device_memory_properties2::S_physical_device_memory_properties2(
	S_physical_device_memory_properties  memoryProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memoryProperties(memoryProperties_)
{	}

S_sparse_image_format_properties2::S_sparse_image_format_properties2(
	S_sparse_image_format_properties  properties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,properties(properties_)
{	}

S_physical_device_sparse_image_format_info2::S_physical_device_sparse_image_format_info2(
	E_format  format_
	,E_image_type  type_
	,F_sample_count  samples_
	,VkImageUsageFlags   usage_
	,E_image_tiling  tiling_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,format(format_)
		,type(type_)
		,samples(samples_)
		,usage(usage_)
		,tiling(tiling_)
{	}

S_physical_device_push_descriptor_properties_KHR::S_physical_device_push_descriptor_properties_KHR(
	uint32_t   maxPushDescriptors_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxPushDescriptors(maxPushDescriptors_)
{	}

S_physical_device_driver_properties_KHR::S_physical_device_driver_properties_KHR(
	uint32_t   driverID_
	,char [VK_MAX_DRIVER_NAME_SIZE_KHR]  driverName_
	,char [VK_MAX_DRIVER_INFO_SIZE_KHR]  driverInfo_
	,S_conformance_version_KHR  conformanceVersion_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,driverID(driverID_)
		,driverName(driverName_)
		,driverInfo(driverInfo_)
		,conformanceVersion(conformanceVersion_)
{	}

S_present_regions_KHR::S_present_regions_KHR(
	uint32_t   swapchainCount_
	,const S_present_region_KHR *   pRegions_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,swapchainCount(swapchainCount_)
		,pRegions(pRegions_)
{	}

S_physical_device_variable_pointer_features::S_physical_device_variable_pointer_features(
	VkBool32   variablePointersStorageBuffer_
	,VkBool32   variablePointers_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,variablePointersStorageBuffer(variablePointersStorageBuffer_)
		,variablePointers(variablePointers_)
{	}

S_physical_device_external_image_format_info::S_physical_device_external_image_format_info(
	F_external_memory_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleType(handleType_)
{	}

S_external_image_format_properties::S_external_image_format_properties(
	S_external_memory_properties  externalMemoryProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,externalMemoryProperties(externalMemoryProperties_)
{	}

S_physical_device_external_buffer_info::S_physical_device_external_buffer_info(
	VkBufferCreateFlags   flags_
	,VkBufferUsageFlags   usage_
	,F_external_memory_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,usage(usage_)
		,handleType(handleType_)
{	}

S_external_buffer_properties::S_external_buffer_properties(
	S_external_memory_properties  externalMemoryProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,externalMemoryProperties(externalMemoryProperties_)
{	}

S_physical_device_id_properties::S_physical_device_id_properties(
	uint8_t [VK_UUID_SIZE]  deviceUUID_
	,uint8_t [VK_UUID_SIZE]  driverUUID_
	,uint8_t [VK_LUID_SIZE]  deviceLUID_
	,uint32_t   deviceNodeMask_
	,VkBool32   deviceLUIDValid_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,deviceUUID(deviceUUID_)
		,driverUUID(driverUUID_)
		,deviceLUID(deviceLUID_)
		,deviceNodeMask(deviceNodeMask_)
		,deviceLUIDValid(deviceLUIDValid_)
{	}

S_external_memory_image_create_info::S_external_memory_image_create_info(
	VkExternalMemoryHandleTypeFlags   handleTypes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleTypes(handleTypes_)
{	}

S_external_memory_buffer_create_info::S_external_memory_buffer_create_info(
	VkExternalMemoryHandleTypeFlags   handleTypes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleTypes(handleTypes_)
{	}

S_export_memory_allocate_info::S_export_memory_allocate_info(
	VkExternalMemoryHandleTypeFlags   handleTypes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleTypes(handleTypes_)
{	}

S_import_memory_win32_handle_info_KHR::S_import_memory_win32_handle_info_KHR(
	F_external_memory_handle_type  handleType_
	,HANDLE   handle_
	,LPCWSTR   name_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleType(handleType_)
		,handle(handle_)
		,name(name_)
{	}

S_export_memory_win32_handle_info_KHR::S_export_memory_win32_handle_info_KHR(
	const const SECURITY_ATTRIBUTES*  * pAttributes_
	,DWORD   dwAccess_
	,LPCWSTR   name_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
		,name(name_)
{	}

S_memory_win32_handle_properties_KHR::S_memory_win32_handle_properties_KHR(
	uint32_t   memoryTypeBits_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memoryTypeBits(memoryTypeBits_)
{	}

S_memory_get_win32_handle_info_KHR::S_memory_get_win32_handle_info_KHR(
	VkDeviceMemory   memory_
	,F_external_memory_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memory(memory_)
		,handleType(handleType_)
{	}

S_import_memory_fd_info_KHR::S_import_memory_fd_info_KHR(
	F_external_memory_handle_type  handleType_
	,int   fd_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleType(handleType_)
		,fd(fd_)
{	}

S_memory_fd_properties_KHR::S_memory_fd_properties_KHR(
	uint32_t   memoryTypeBits_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memoryTypeBits(memoryTypeBits_)
{	}

S_memory_get_fd_info_KHR::S_memory_get_fd_info_KHR(
	VkDeviceMemory   memory_
	,F_external_memory_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memory(memory_)
		,handleType(handleType_)
{	}

S_win32_keyed_mutex_acquire_release_info_KHR::S_win32_keyed_mutex_acquire_release_info_KHR(
	uint32_t   acquireCount_
	,const const VkDeviceMemory*  * pAcquireSyncs_
	,const const uint64_t*  * pAcquireKeys_
	,const const uint32_t*  * pAcquireTimeouts_
	,uint32_t   releaseCount_
	,const const VkDeviceMemory*  * pReleaseSyncs_
	,const const uint64_t*  * pReleaseKeys_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,acquireCount(acquireCount_)
		,pAcquireSyncs(pAcquireSyncs_)
		,pAcquireKeys(pAcquireKeys_)
		,pAcquireTimeouts(pAcquireTimeouts_)
		,releaseCount(releaseCount_)
		,pReleaseSyncs(pReleaseSyncs_)
		,pReleaseKeys(pReleaseKeys_)
{	}

S_physical_device_external_semaphore_info::S_physical_device_external_semaphore_info(
	F_external_semaphore_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleType(handleType_)
{	}

S_external_semaphore_properties::S_external_semaphore_properties(
	VkExternalSemaphoreHandleTypeFlags   exportFromImportedHandleTypes_
	,VkExternalSemaphoreHandleTypeFlags   compatibleHandleTypes_
	,VkExternalSemaphoreFeatureFlags   externalSemaphoreFeatures_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
		,compatibleHandleTypes(compatibleHandleTypes_)
		,externalSemaphoreFeatures(externalSemaphoreFeatures_)
{	}

S_export_semaphore_create_info::S_export_semaphore_create_info(
	VkExternalSemaphoreHandleTypeFlags   handleTypes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleTypes(handleTypes_)
{	}

S_import_semaphore_win32_handle_info_KHR::S_import_semaphore_win32_handle_info_KHR(
	VkSemaphore   semaphore_
	,VkSemaphoreImportFlags   flags_
	,F_external_semaphore_handle_type  handleType_
	,HANDLE   handle_
	,LPCWSTR   name_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,semaphore(semaphore_)
		,flags(flags_)
		,handleType(handleType_)
		,handle(handle_)
		,name(name_)
{	}

S_export_semaphore_win32_handle_info_KHR::S_export_semaphore_win32_handle_info_KHR(
	const const SECURITY_ATTRIBUTES*        *       pAttributes_
	,DWORD   dwAccess_
	,LPCWSTR   name_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
		,name(name_)
{	}

S_d_3d12_fence_submit_info_KHR::S_d_3d12_fence_submit_info_KHR(
	uint32_t   waitSemaphoreValuesCount_
	,const const uint64_t*  * pWaitSemaphoreValues_
	,uint32_t   signalSemaphoreValuesCount_
	,const const uint64_t*  * pSignalSemaphoreValues_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,waitSemaphoreValuesCount(waitSemaphoreValuesCount_)
		,pWaitSemaphoreValues(pWaitSemaphoreValues_)
		,signalSemaphoreValuesCount(signalSemaphoreValuesCount_)
		,pSignalSemaphoreValues(pSignalSemaphoreValues_)
{	}

S_semaphore_get_win32_handle_info_KHR::S_semaphore_get_win32_handle_info_KHR(
	VkSemaphore   semaphore_
	,F_external_semaphore_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,semaphore(semaphore_)
		,handleType(handleType_)
{	}

S_import_semaphore_fd_info_KHR::S_import_semaphore_fd_info_KHR(
	VkSemaphore   semaphore_
	,VkSemaphoreImportFlags   flags_
	,F_external_semaphore_handle_type  handleType_
	,int   fd_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,semaphore(semaphore_)
		,flags(flags_)
		,handleType(handleType_)
		,fd(fd_)
{	}

S_semaphore_get_fd_info_KHR::S_semaphore_get_fd_info_KHR(
	VkSemaphore   semaphore_
	,F_external_semaphore_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,semaphore(semaphore_)
		,handleType(handleType_)
{	}

S_physical_device_external_fence_info::S_physical_device_external_fence_info(
	F_external_fence_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleType(handleType_)
{	}

S_external_fence_properties::S_external_fence_properties(
	VkExternalFenceHandleTypeFlags   exportFromImportedHandleTypes_
	,VkExternalFenceHandleTypeFlags   compatibleHandleTypes_
	,VkExternalFenceFeatureFlags   externalFenceFeatures_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
		,compatibleHandleTypes(compatibleHandleTypes_)
		,externalFenceFeatures(externalFenceFeatures_)
{	}

S_export_fence_create_info::S_export_fence_create_info(
	VkExternalFenceHandleTypeFlags   handleTypes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleTypes(handleTypes_)
{	}

S_import_fence_win32_handle_info_KHR::S_import_fence_win32_handle_info_KHR(
	VkFence   fence_
	,VkFenceImportFlags   flags_
	,F_external_fence_handle_type  handleType_
	,HANDLE   handle_
	,LPCWSTR   name_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,fence(fence_)
		,flags(flags_)
		,handleType(handleType_)
		,handle(handle_)
		,name(name_)
{	}

S_export_fence_win32_handle_info_KHR::S_export_fence_win32_handle_info_KHR(
	const const SECURITY_ATTRIBUTES*  * pAttributes_
	,DWORD   dwAccess_
	,LPCWSTR   name_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
		,name(name_)
{	}

S_fence_get_win32_handle_info_KHR::S_fence_get_win32_handle_info_KHR(
	VkFence   fence_
	,F_external_fence_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,fence(fence_)
		,handleType(handleType_)
{	}

S_import_fence_fd_info_KHR::S_import_fence_fd_info_KHR(
	VkFence   fence_
	,VkFenceImportFlags   flags_
	,F_external_fence_handle_type  handleType_
	,int   fd_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,fence(fence_)
		,flags(flags_)
		,handleType(handleType_)
		,fd(fd_)
{	}

S_fence_get_fd_info_KHR::S_fence_get_fd_info_KHR(
	VkFence   fence_
	,F_external_fence_handle_type  handleType_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,fence(fence_)
		,handleType(handleType_)
{	}

S_physical_device_multiview_features::S_physical_device_multiview_features(
	VkBool32   multiview_
	,VkBool32   multiviewGeometryShader_
	,VkBool32   multiviewTessellationShader_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,multiview(multiview_)
		,multiviewGeometryShader(multiviewGeometryShader_)
		,multiviewTessellationShader(multiviewTessellationShader_)
{	}

S_physical_device_multiview_properties::S_physical_device_multiview_properties(
	uint32_t   maxMultiviewViewCount_
	,uint32_t   maxMultiviewInstanceIndex_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxMultiviewViewCount(maxMultiviewViewCount_)
		,maxMultiviewInstanceIndex(maxMultiviewInstanceIndex_)
{	}

S_render_pass_multiview_create_info::S_render_pass_multiview_create_info(
	uint32_t   subpassCount_
	,const const uint32_t*      *     pViewMasks_
	,uint32_t   dependencyCount_
	,const const int32_t*    *   pViewOffsets_
	,uint32_t   correlationMaskCount_
	,const const uint32_t*  * pCorrelationMasks_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,subpassCount(subpassCount_)
		,pViewMasks(pViewMasks_)
		,dependencyCount(dependencyCount_)
		,pViewOffsets(pViewOffsets_)
		,correlationMaskCount(correlationMaskCount_)
		,pCorrelationMasks(pCorrelationMasks_)
{	}

S_surface_capabilities2_EXT::S_surface_capabilities2_EXT(
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
	,VkSurfaceCounterFlagsEXT   supportedSurfaceCounters_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,minImageCount(minImageCount_)
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
{	}

S_display_power_info_EXT::S_display_power_info_EXT(
	E_display_power_state_EXT  powerState_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,powerState(powerState_)
{	}

S_device_event_info_EXT::S_device_event_info_EXT(
	E_device_event_type_EXT  deviceEvent_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,deviceEvent(deviceEvent_)
{	}

S_display_event_info_EXT::S_display_event_info_EXT(
	E_display_event_type_EXT  displayEvent_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,displayEvent(displayEvent_)
{	}

S_swapchain_counter_create_info_EXT::S_swapchain_counter_create_info_EXT(
	VkSurfaceCounterFlagsEXT   surfaceCounters_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,surfaceCounters(surfaceCounters_)
{	}

S_physical_device_group_properties::S_physical_device_group_properties(
	uint32_t   physicalDeviceCount_
	,VkPhysicalDevice [VK_MAX_DEVICE_GROUP_SIZE]  physicalDevices_
	,VkBool32   subsetAllocation_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,physicalDeviceCount(physicalDeviceCount_)
		,physicalDevices(physicalDevices_)
		,subsetAllocation(subsetAllocation_)
{	}

S_memory_allocate_flags_info::S_memory_allocate_flags_info(
	VkMemoryAllocateFlags   flags_
	,uint32_t   deviceMask_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,deviceMask(deviceMask_)
{	}

S_bind_buffer_memory_device_group_info::S_bind_buffer_memory_device_group_info(
	uint32_t   deviceIndexCount_
	,const const uint32_t*   *  pDeviceIndices_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,deviceIndexCount(deviceIndexCount_)
		,pDeviceIndices(pDeviceIndices_)
{	}

S_bind_image_memory_device_group_info::S_bind_image_memory_device_group_info(
	uint32_t   deviceIndexCount_
	,const const uint32_t*   *  pDeviceIndices_
	,uint32_t   splitInstanceBindRegionCount_
	,const S_rect_2d *  pSplitInstanceBindRegions_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,deviceIndexCount(deviceIndexCount_)
		,pDeviceIndices(pDeviceIndices_)
		,splitInstanceBindRegionCount(splitInstanceBindRegionCount_)
		,pSplitInstanceBindRegions(pSplitInstanceBindRegions_)
{	}

S_device_group_render_pass_begin_info::S_device_group_render_pass_begin_info(
	uint32_t   deviceMask_
	,uint32_t   deviceRenderAreaCount_
	,const S_rect_2d *  pDeviceRenderAreas_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,deviceMask(deviceMask_)
		,deviceRenderAreaCount(deviceRenderAreaCount_)
		,pDeviceRenderAreas(pDeviceRenderAreas_)
{	}

S_device_group_command_buffer_begin_info::S_device_group_command_buffer_begin_info(
	uint32_t   deviceMask_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,deviceMask(deviceMask_)
{	}

S_device_group_submit_info::S_device_group_submit_info(
	uint32_t   waitSemaphoreCount_
	,const const uint32_t*     *    pWaitSemaphoreDeviceIndices_
	,uint32_t   commandBufferCount_
	,const const uint32_t*     *    pCommandBufferDeviceMasks_
	,uint32_t   signalSemaphoreCount_
	,const const uint32_t*   *  pSignalSemaphoreDeviceIndices_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphoreDeviceIndices(pWaitSemaphoreDeviceIndices_)
		,commandBufferCount(commandBufferCount_)
		,pCommandBufferDeviceMasks(pCommandBufferDeviceMasks_)
		,signalSemaphoreCount(signalSemaphoreCount_)
		,pSignalSemaphoreDeviceIndices(pSignalSemaphoreDeviceIndices_)
{	}

S_device_group_bind_sparse_info::S_device_group_bind_sparse_info(
	uint32_t   resourceDeviceIndex_
	,uint32_t   memoryDeviceIndex_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,resourceDeviceIndex(resourceDeviceIndex_)
		,memoryDeviceIndex(memoryDeviceIndex_)
{	}

S_device_group_present_capabilities_KHR::S_device_group_present_capabilities_KHR(
	uint32_t [VK_MAX_DEVICE_GROUP_SIZE]  presentMask_
	,VkDeviceGroupPresentModeFlagsKHR   modes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,presentMask(presentMask_)
		,modes(modes_)
{	}

S_image_swapchain_create_info_KHR::S_image_swapchain_create_info_KHR(
	VkSwapchainKHR   swapchain_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,swapchain(swapchain_)
{	}

S_bind_image_memory_swapchain_info_KHR::S_bind_image_memory_swapchain_info_KHR(
	VkSwapchainKHR   swapchain_
	,uint32_t   imageIndex_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,swapchain(swapchain_)
		,imageIndex(imageIndex_)
{	}

S_acquire_next_image_info_KHR::S_acquire_next_image_info_KHR(
	VkSwapchainKHR   swapchain_
	,uint64_t   timeout_
	,VkSemaphore   semaphore_
	,VkFence   fence_
	,uint32_t   deviceMask_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,swapchain(swapchain_)
		,timeout(timeout_)
		,semaphore(semaphore_)
		,fence(fence_)
		,deviceMask(deviceMask_)
{	}

S_device_group_present_info_KHR::S_device_group_present_info_KHR(
	uint32_t   swapchainCount_
	,const const uint32_t*  * pDeviceMasks_
	,F_device_group_present_mode_khr  mode_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,swapchainCount(swapchainCount_)
		,pDeviceMasks(pDeviceMasks_)
		,mode(mode_)
{	}

S_device_group_device_create_info::S_device_group_device_create_info(
	uint32_t   physicalDeviceCount_
	,const const VkPhysicalDevice*   *  pPhysicalDevices_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,physicalDeviceCount(physicalDeviceCount_)
		,pPhysicalDevices(pPhysicalDevices_)
{	}

S_device_group_swapchain_create_info_KHR::S_device_group_swapchain_create_info_KHR(
	VkDeviceGroupPresentModeFlagsKHR   modes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,modes(modes_)
{	}

S_descriptor_update_template_create_info::S_descriptor_update_template_create_info(
	VkDescriptorUpdateTemplateCreateFlags   flags_
	,uint32_t   descriptorUpdateEntryCount_
	,const S_descriptor_update_template_entry * pDescriptorUpdateEntries_
	,E_descriptor_update_template_type  templateType_
	,VkDescriptorSetLayout   descriptorSetLayout_
	,E_pipeline_bind_point  pipelineBindPoint_
	,VkPipelineLayout pipelineLayout_
	,uint32_t   set_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,descriptorUpdateEntryCount(descriptorUpdateEntryCount_)
		,pDescriptorUpdateEntries(pDescriptorUpdateEntries_)
		,templateType(templateType_)
		,descriptorSetLayout(descriptorSetLayout_)
		,pipelineBindPoint(pipelineBindPoint_)
		,pipelineLayout(pipelineLayout_)
		,set(set_)
{	}

S_hdr_metadata_EXT::S_hdr_metadata_EXT(
	S_xy_color_EXT  displayPrimaryRed_
	,S_xy_color_EXT  displayPrimaryGreen_
	,S_xy_color_EXT  displayPrimaryBlue_
	,S_xy_color_EXT  whitePoint_
	,float   maxLuminance_
	,float   minLuminance_
	,float   maxContentLightLevel_
	,float   maxFrameAverageLightLevel_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,displayPrimaryRed(displayPrimaryRed_)
		,displayPrimaryGreen(displayPrimaryGreen_)
		,displayPrimaryBlue(displayPrimaryBlue_)
		,whitePoint(whitePoint_)
		,maxLuminance(maxLuminance_)
		,minLuminance(minLuminance_)
		,maxContentLightLevel(maxContentLightLevel_)
		,maxFrameAverageLightLevel(maxFrameAverageLightLevel_)
{	}

S_present_times_info_GOOGLE::S_present_times_info_GOOGLE(
	uint32_t   swapchainCount_
	,const S_present_time_GOOGLE *   pTimes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,swapchainCount(swapchainCount_)
		,pTimes(pTimes_)
{	}

S_ios_surface_create_info_MVK::S_ios_surface_create_info_MVK(
	VkIOSSurfaceCreateFlagsMVK   flags_
	,const const void*                                     *                                    pView_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,pView(pView_)
{	}

S_mac_os_surface_create_info_MVK::S_mac_os_surface_create_info_MVK(
	VkMacOSSurfaceCreateFlagsMVK   flags_
	,const const void*                                     *                                    pView_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,pView(pView_)
{	}

S_pipeline_viewport_w_scaling_state_create_info_NV::S_pipeline_viewport_w_scaling_state_create_info_NV(
	VkBool32   viewportWScalingEnable_
	,uint32_t   viewportCount_
	,const S_viewport_w_scaling_NV *      pViewportWScalings_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,viewportWScalingEnable(viewportWScalingEnable_)
		,viewportCount(viewportCount_)
		,pViewportWScalings(pViewportWScalings_)
{	}

S_pipeline_viewport_swizzle_state_create_info_NV::S_pipeline_viewport_swizzle_state_create_info_NV(
	VkPipelineViewportSwizzleStateCreateFlagsNV   flags_
	,uint32_t   viewportCount_
	,const S_viewport_swizzle_NV *      pViewportSwizzles_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,viewportCount(viewportCount_)
		,pViewportSwizzles(pViewportSwizzles_)
{	}

S_physical_device_discard_rectangle_properties_EXT::S_physical_device_discard_rectangle_properties_EXT(
	uint32_t   maxDiscardRectangles_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxDiscardRectangles(maxDiscardRectangles_)
{	}

S_pipeline_discard_rectangle_state_create_info_EXT::S_pipeline_discard_rectangle_state_create_info_EXT(
	VkPipelineDiscardRectangleStateCreateFlagsEXT   flags_
	,E_discard_rectangle_mode_EXT  discardRectangleMode_
	,uint32_t   discardRectangleCount_
	,const S_rect_2d * pDiscardRectangles_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,discardRectangleMode(discardRectangleMode_)
		,discardRectangleCount(discardRectangleCount_)
		,pDiscardRectangles(pDiscardRectangles_)
{	}

S_physical_device_multiview_per_view_attributes_properties_NVX::S_physical_device_multiview_per_view_attributes_properties_NVX(
	VkBool32   perViewPositionAllComponents_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,perViewPositionAllComponents(perViewPositionAllComponents_)
{	}

S_render_pass_input_attachment_aspect_create_info::S_render_pass_input_attachment_aspect_create_info(
	uint32_t   aspectReferenceCount_
	,const S_input_attachment_aspect_reference * pAspectReferences_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,aspectReferenceCount(aspectReferenceCount_)
		,pAspectReferences(pAspectReferences_)
{	}

S_physical_device_surface_info2_KHR::S_physical_device_surface_info2_KHR(
	VkSurfaceKHR   surface_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,surface(surface_)
{	}

S_surface_format2_KHR::S_surface_format2_KHR(
	S_surface_format_KHR  surfaceFormat_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,surfaceFormat(surfaceFormat_)
{	}

S_display_properties2_KHR::S_display_properties2_KHR(
	S_display_properties_KHR  displayProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,displayProperties(displayProperties_)
{	}

S_display_plane_properties2_KHR::S_display_plane_properties2_KHR(
	S_display_plane_properties_KHR  displayPlaneProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,displayPlaneProperties(displayPlaneProperties_)
{	}

S_display_mode_properties2_KHR::S_display_mode_properties2_KHR(
	S_display_mode_properties_KHR  displayModeProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,displayModeProperties(displayModeProperties_)
{	}

S_display_plane_info2_KHR::S_display_plane_info2_KHR(
	VkDisplayModeKHR   mode_
	,uint32_t   planeIndex_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,mode(mode_)
		,planeIndex(planeIndex_)
{	}

S_display_plane_capabilities2_KHR::S_display_plane_capabilities2_KHR(
	S_display_plane_capabilities_KHR  capabilities_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,capabilities(capabilities_)
{	}

S_shared_present_surface_capabilities_KHR::S_shared_present_surface_capabilities_KHR(
	VkImageUsageFlags   sharedPresentSupportedUsageFlags_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,sharedPresentSupportedUsageFlags(sharedPresentSupportedUsageFlags_)
{	}

S_physical_device_16bit_storage_features::S_physical_device_16bit_storage_features(
	VkBool32   storageBuffer16BitAccess_
	,VkBool32   uniformAndStorageBuffer16BitAccess_
	,VkBool32   storagePushConstant16_
	,VkBool32   storageInputOutput16_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,storageBuffer16BitAccess(storageBuffer16BitAccess_)
		,uniformAndStorageBuffer16BitAccess(uniformAndStorageBuffer16BitAccess_)
		,storagePushConstant16(storagePushConstant16_)
		,storageInputOutput16(storageInputOutput16_)
{	}

S_physical_device_subgroup_properties::S_physical_device_subgroup_properties(
	uint32_t   subgroupSize_
	,VkShaderStageFlags   supportedStages_
	,VkSubgroupFeatureFlags   supportedOperations_
	,VkBool32   quadOperationsInAllStages_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,subgroupSize(subgroupSize_)
		,supportedStages(supportedStages_)
		,supportedOperations(supportedOperations_)
		,quadOperationsInAllStages(quadOperationsInAllStages_)
{	}

S_buffer_memory_requirements_info2::S_buffer_memory_requirements_info2(
	VkBuffer   buffer_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,buffer(buffer_)
{	}

S_image_sparse_memory_requirements_info2::S_image_sparse_memory_requirements_info2(
	VkImage   image_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,image(image_)
{	}

S_sparse_image_memory_requirements2::S_sparse_image_memory_requirements2(
	S_sparse_image_memory_requirements  memoryRequirements_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memoryRequirements(memoryRequirements_)
{	}

S_physical_device_point_clipping_properties::S_physical_device_point_clipping_properties(
	E_point_clipping_behavior  pointClippingBehavior_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pointClippingBehavior(pointClippingBehavior_)
{	}

S_memory_dedicated_requirements::S_memory_dedicated_requirements(
	VkBool32   prefersDedicatedAllocation_
	,VkBool32   requiresDedicatedAllocation_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,prefersDedicatedAllocation(prefersDedicatedAllocation_)
		,requiresDedicatedAllocation(requiresDedicatedAllocation_)
{	}

S_memory_dedicated_allocate_info::S_memory_dedicated_allocate_info(
	VkImage   image_
	,VkBuffer   buffer_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,image(image_)
		,buffer(buffer_)
{	}

S_image_view_usage_create_info::S_image_view_usage_create_info(
	VkImageUsageFlags   usage_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,usage(usage_)
{	}

S_pipeline_tessellation_domain_origin_state_create_info::S_pipeline_tessellation_domain_origin_state_create_info(
	E_tessellation_domain_origin  domainOrigin_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,domainOrigin(domainOrigin_)
{	}

S_sampler_ycbcr_conversion_info::S_sampler_ycbcr_conversion_info(
	VkSamplerYcbcrConversion   conversion_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,conversion(conversion_)
{	}

S_bind_image_plane_memory_info::S_bind_image_plane_memory_info(
	F_image_aspect  planeAspect_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,planeAspect(planeAspect_)
{	}

S_image_plane_memory_requirements_info::S_image_plane_memory_requirements_info(
	F_image_aspect  planeAspect_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,planeAspect(planeAspect_)
{	}

S_physical_device_sampler_ycbcr_conversion_features::S_physical_device_sampler_ycbcr_conversion_features(
	VkBool32   samplerYcbcrConversion_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,samplerYcbcrConversion(samplerYcbcrConversion_)
{	}

S_sampler_ycbcr_conversion_image_format_properties::S_sampler_ycbcr_conversion_image_format_properties(
	uint32_t   combinedImageSamplerDescriptorCount_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,combinedImageSamplerDescriptorCount(combinedImageSamplerDescriptorCount_)
{	}

S_texture_lod_gather_format_properties_AMD::S_texture_lod_gather_format_properties_AMD(
	VkBool32   supportsTextureGatherLODBiasAMD_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,supportsTextureGatherLODBiasAMD(supportsTextureGatherLODBiasAMD_)
{	}

S_conditional_rendering_begin_info_EXT::S_conditional_rendering_begin_info_EXT(
	VkBuffer   buffer_
	,VkDeviceSize   offset_
	,VkConditionalRenderingFlagsEXT   flags_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,buffer(buffer_)
		,offset(offset_)
		,flags(flags_)
{	}

S_protected_submit_info::S_protected_submit_info(
	VkBool32   protectedSubmit_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,protectedSubmit(protectedSubmit_)
{	}

S_physical_device_protected_memory_features::S_physical_device_protected_memory_features(
	VkBool32   protectedMemory_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,protectedMemory(protectedMemory_)
{	}

S_physical_device_protected_memory_properties::S_physical_device_protected_memory_properties(
	VkBool32   protectedNoFault_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,protectedNoFault(protectedNoFault_)
{	}

S_device_queue_info2::S_device_queue_info2(
	VkDeviceQueueCreateFlags   flags_
	,uint32_t   queueFamilyIndex_
	,uint32_t   queueIndex_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,queueFamilyIndex(queueFamilyIndex_)
		,queueIndex(queueIndex_)
{	}

S_pipeline_coverage_to_color_state_create_info_NV::S_pipeline_coverage_to_color_state_create_info_NV(
	VkPipelineCoverageToColorStateCreateFlagsNV   flags_
	,VkBool32   coverageToColorEnable_
	,uint32_t   coverageToColorLocation_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,coverageToColorEnable(coverageToColorEnable_)
		,coverageToColorLocation(coverageToColorLocation_)
{	}

S_physical_device_sampler_filter_minmax_properties_EXT::S_physical_device_sampler_filter_minmax_properties_EXT(
	VkBool32   filterMinmaxSingleComponentFormats_
	,VkBool32   filterMinmaxImageComponentMapping_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,filterMinmaxSingleComponentFormats(filterMinmaxSingleComponentFormats_)
		,filterMinmaxImageComponentMapping(filterMinmaxImageComponentMapping_)
{	}

S_sample_locations_info_EXT::S_sample_locations_info_EXT(
	F_sample_count  sampleLocationsPerPixel_
	,S_extent_2d  sampleLocationGridSize_
	,uint32_t   sampleLocationsCount_
	,const S_sample_location_EXT * pSampleLocations_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,sampleLocationsPerPixel(sampleLocationsPerPixel_)
		,sampleLocationGridSize(sampleLocationGridSize_)
		,sampleLocationsCount(sampleLocationsCount_)
		,pSampleLocations(pSampleLocations_)
{	}

S_render_pass_sample_locations_begin_info_EXT::S_render_pass_sample_locations_begin_info_EXT(
	uint32_t   attachmentInitialSampleLocationsCount_
	,const S_attachment_sample_locations_EXT * pAttachmentInitialSampleLocations_
	,uint32_t   postSubpassSampleLocationsCount_
	,const S_subpass_sample_locations_EXT * pPostSubpassSampleLocations_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,attachmentInitialSampleLocationsCount(attachmentInitialSampleLocationsCount_)
		,pAttachmentInitialSampleLocations(pAttachmentInitialSampleLocations_)
		,postSubpassSampleLocationsCount(postSubpassSampleLocationsCount_)
		,pPostSubpassSampleLocations(pPostSubpassSampleLocations_)
{	}

S_pipeline_sample_locations_state_create_info_EXT::S_pipeline_sample_locations_state_create_info_EXT(
	VkBool32   sampleLocationsEnable_
	,S_sample_locations_info_EXT  sampleLocationsInfo_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,sampleLocationsEnable(sampleLocationsEnable_)
		,sampleLocationsInfo(sampleLocationsInfo_)
{	}

S_physical_device_sample_locations_properties_EXT::S_physical_device_sample_locations_properties_EXT(
	VkSampleCountFlags   sampleLocationSampleCounts_
	,S_extent_2d  maxSampleLocationGridSize_
	,float [2]  sampleLocationCoordinateRange_
	,uint32_t   sampleLocationSubPixelBits_
	,VkBool32   variableSampleLocations_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,sampleLocationSampleCounts(sampleLocationSampleCounts_)
		,maxSampleLocationGridSize(maxSampleLocationGridSize_)
		,sampleLocationCoordinateRange(sampleLocationCoordinateRange_)
		,sampleLocationSubPixelBits(sampleLocationSubPixelBits_)
		,variableSampleLocations(variableSampleLocations_)
{	}

S_multisample_properties_EXT::S_multisample_properties_EXT(
	S_extent_2d  maxSampleLocationGridSize_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxSampleLocationGridSize(maxSampleLocationGridSize_)
{	}

S_sampler_reduction_mode_create_info_EXT::S_sampler_reduction_mode_create_info_EXT(
	E_sampler_reduction_mode_EXT  reductionMode_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,reductionMode(reductionMode_)
{	}

S_physical_device_blend_operation_advanced_features_EXT::S_physical_device_blend_operation_advanced_features_EXT(
	VkBool32   advancedBlendCoherentOperations_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,advancedBlendCoherentOperations(advancedBlendCoherentOperations_)
{	}

S_physical_device_blend_operation_advanced_properties_EXT::S_physical_device_blend_operation_advanced_properties_EXT(
	uint32_t   advancedBlendMaxColorAttachments_
	,VkBool32   advancedBlendIndependentBlend_
	,VkBool32   advancedBlendNonPremultipliedSrcColor_
	,VkBool32   advancedBlendNonPremultipliedDstColor_
	,VkBool32   advancedBlendCorrelatedOverlap_
	,VkBool32   advancedBlendAllOperations_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,advancedBlendMaxColorAttachments(advancedBlendMaxColorAttachments_)
		,advancedBlendIndependentBlend(advancedBlendIndependentBlend_)
		,advancedBlendNonPremultipliedSrcColor(advancedBlendNonPremultipliedSrcColor_)
		,advancedBlendNonPremultipliedDstColor(advancedBlendNonPremultipliedDstColor_)
		,advancedBlendCorrelatedOverlap(advancedBlendCorrelatedOverlap_)
		,advancedBlendAllOperations(advancedBlendAllOperations_)
{	}

S_pipeline_color_blend_advanced_state_create_info_EXT::S_pipeline_color_blend_advanced_state_create_info_EXT(
	VkBool32   srcPremultiplied_
	,VkBool32   dstPremultiplied_
	,E_blend_overlap_EXT  blendOverlap_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,srcPremultiplied(srcPremultiplied_)
		,dstPremultiplied(dstPremultiplied_)
		,blendOverlap(blendOverlap_)
{	}

S_physical_device_inline_uniform_block_features_EXT::S_physical_device_inline_uniform_block_features_EXT(
	VkBool32   inlineUniformBlock_
	,VkBool32   descriptorBindingInlineUniformBlockUpdateAfterBind_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,inlineUniformBlock(inlineUniformBlock_)
		,descriptorBindingInlineUniformBlockUpdateAfterBind(descriptorBindingInlineUniformBlockUpdateAfterBind_)
{	}

S_physical_device_inline_uniform_block_properties_EXT::S_physical_device_inline_uniform_block_properties_EXT(
	uint32_t   maxInlineUniformBlockSize_
	,uint32_t   maxPerStageDescriptorInlineUniformBlocks_
	,uint32_t   maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_
	,uint32_t   maxDescriptorSetInlineUniformBlocks_
	,uint32_t   maxDescriptorSetUpdateAfterBindInlineUniformBlocks_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxInlineUniformBlockSize(maxInlineUniformBlockSize_)
		,maxPerStageDescriptorInlineUniformBlocks(maxPerStageDescriptorInlineUniformBlocks_)
		,maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_)
		,maxDescriptorSetInlineUniformBlocks(maxDescriptorSetInlineUniformBlocks_)
		,maxDescriptorSetUpdateAfterBindInlineUniformBlocks(maxDescriptorSetUpdateAfterBindInlineUniformBlocks_)
{	}

S_write_descriptor_set_inline_uniform_block_EXT::S_write_descriptor_set_inline_uniform_block_EXT(
	uint32_t   dataSize_
	,const const void*  * pData_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,dataSize(dataSize_)
		,pData(pData_)
{	}

S_descriptor_pool_inline_uniform_block_create_info_EXT::S_descriptor_pool_inline_uniform_block_create_info_EXT(
	uint32_t   maxInlineUniformBlockBindings_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxInlineUniformBlockBindings(maxInlineUniformBlockBindings_)
{	}

S_pipeline_coverage_modulation_state_create_info_NV::S_pipeline_coverage_modulation_state_create_info_NV(
	VkPipelineCoverageModulationStateCreateFlagsNV   flags_
	,E_coverage_modulation_mode_NV  coverageModulationMode_
	,VkBool32   coverageModulationTableEnable_
	,uint32_t   coverageModulationTableCount_
	,const const float*  * pCoverageModulationTable_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,coverageModulationMode(coverageModulationMode_)
		,coverageModulationTableEnable(coverageModulationTableEnable_)
		,coverageModulationTableCount(coverageModulationTableCount_)
		,pCoverageModulationTable(pCoverageModulationTable_)
{	}

S_image_format_list_create_info_KHR::S_image_format_list_create_info_KHR(
	uint32_t   viewFormatCount_
	,const E_format *      pViewFormats_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,viewFormatCount(viewFormatCount_)
		,pViewFormats(pViewFormats_)
{	}

S_validation_cache_create_info_EXT::S_validation_cache_create_info_EXT(
	VkValidationCacheCreateFlagsEXT   flags_
	,size_t   initialDataSize_
	,const const void*             *            pInitialData_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,initialDataSize(initialDataSize_)
		,pInitialData(pInitialData_)
{	}

S_shader_module_validation_cache_create_info_EXT::S_shader_module_validation_cache_create_info_EXT(
	VkValidationCacheEXT   validationCache_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,validationCache(validationCache_)
{	}

S_physical_device_maintenance3_properties::S_physical_device_maintenance3_properties(
	uint32_t   maxPerSetDescriptors_
	,VkDeviceSize   maxMemoryAllocationSize_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxPerSetDescriptors(maxPerSetDescriptors_)
		,maxMemoryAllocationSize(maxMemoryAllocationSize_)
{	}

S_physical_device_shader_draw_parameter_features::S_physical_device_shader_draw_parameter_features(
	VkBool32   shaderDrawParameters_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shaderDrawParameters(shaderDrawParameters_)
{	}

S_native_buffer_ANDROID::S_native_buffer_ANDROID(
	const const void*  * handle_
	,int   stride_
	,int   format_
	,int   usage_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handle(handle_)
		,stride(stride_)
		,format(format_)
		,usage(usage_)
{	}

S_device_queue_global_priority_create_info_EXT::S_device_queue_global_priority_create_info_EXT(
	E_queue_global_priority_EXT  globalPriority_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,globalPriority(globalPriority_)
{	}

S_debug_utils_object_name_info_EXT::S_debug_utils_object_name_info_EXT(
	E_object_type  objectType_
	,uint64_t   objectHandle_
	,const const char*       *      pObjectName_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,objectType(objectType_)
		,objectHandle(objectHandle_)
		,pObjectName(pObjectName_)
{	}

S_debug_utils_object_tag_info_EXT::S_debug_utils_object_tag_info_EXT(
	E_object_type  objectType_
	,uint64_t   objectHandle_
	,uint64_t   tagName_
	,size_t   tagSize_
	,const const void*               *              pTag_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,objectType(objectType_)
		,objectHandle(objectHandle_)
		,tagName(tagName_)
		,tagSize(tagSize_)
		,pTag(pTag_)
{	}

S_debug_utils_label_EXT::S_debug_utils_label_EXT(
	const const char*       *      pLabelName_
	,float [4]  color_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,pLabelName(pLabelName_)
		,color(color_)
{	}

S_debug_utils_messenger_create_info_EXT::S_debug_utils_messenger_create_info_EXT(
	VkDebugUtilsMessengerCreateFlagsEXT   flags_
	,VkDebugUtilsMessageSeverityFlagsEXT   messageSeverity_
	,VkDebugUtilsMessageTypeFlagsEXT   messageType_
	,PFN_vkDebugUtilsMessengerCallbackEXT   pfnUserCallback_
	,void*                                 *                                pUserData_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,messageSeverity(messageSeverity_)
		,messageType(messageType_)
		,pfnUserCallback(pfnUserCallback_)
		,pUserData(pUserData_)
{	}

S_debug_utils_messenger_callback_data_EXT::S_debug_utils_messenger_callback_data_EXT(
	VkDebugUtilsMessengerCallbackDataFlagsEXT   flags_
	,const const char*                                   *                                  pMessageIdName_
	,int32_t   messageIdNumber_
	,const const char*                                                   *                                                  pMessage_
	,uint32_t   queueLabelCount_
	,S_debug_utils_label_EXT *  pQueueLabels_
	,uint32_t   cmdBufLabelCount_
	,S_debug_utils_label_EXT * pCmdBufLabels_
	,uint32_t   objectCount_
	,S_debug_utils_object_name_info_EXT *             pObjects_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,pMessageIdName(pMessageIdName_)
		,messageIdNumber(messageIdNumber_)
		,pMessage(pMessage_)
		,queueLabelCount(queueLabelCount_)
		,pQueueLabels(pQueueLabels_)
		,cmdBufLabelCount(cmdBufLabelCount_)
		,pCmdBufLabels(pCmdBufLabels_)
		,objectCount(objectCount_)
		,pObjects(pObjects_)
{	}

S_import_memory_host_pointer_info_EXT::S_import_memory_host_pointer_info_EXT(
	F_external_memory_handle_type  handleType_
	,void*  * pHostPointer_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,handleType(handleType_)
		,pHostPointer(pHostPointer_)
{	}

S_memory_host_pointer_properties_EXT::S_memory_host_pointer_properties_EXT(
	uint32_t   memoryTypeBits_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memoryTypeBits(memoryTypeBits_)
{	}

S_physical_device_external_memory_host_properties_EXT::S_physical_device_external_memory_host_properties_EXT(
	VkDeviceSize   minImportedHostPointerAlignment_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,minImportedHostPointerAlignment(minImportedHostPointerAlignment_)
{	}

S_physical_device_conservative_rasterization_properties_EXT::S_physical_device_conservative_rasterization_properties_EXT(
	float   primitiveOverestimationSize_
	,float   maxExtraPrimitiveOverestimationSize_
	,float   extraPrimitiveOverestimationSizeGranularity_
	,VkBool32   primitiveUnderestimation_
	,VkBool32   conservativePointAndLineRasterization_
	,VkBool32   degenerateTrianglesRasterized_
	,VkBool32   degenerateLinesRasterized_
	,VkBool32   fullyCoveredFragmentShaderInputVariable_
	,VkBool32   conservativeRasterizationPostDepthCoverage_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,primitiveOverestimationSize(primitiveOverestimationSize_)
		,maxExtraPrimitiveOverestimationSize(maxExtraPrimitiveOverestimationSize_)
		,extraPrimitiveOverestimationSizeGranularity(extraPrimitiveOverestimationSizeGranularity_)
		,primitiveUnderestimation(primitiveUnderestimation_)
		,conservativePointAndLineRasterization(conservativePointAndLineRasterization_)
		,degenerateTrianglesRasterized(degenerateTrianglesRasterized_)
		,degenerateLinesRasterized(degenerateLinesRasterized_)
		,fullyCoveredFragmentShaderInputVariable(fullyCoveredFragmentShaderInputVariable_)
		,conservativeRasterizationPostDepthCoverage(conservativeRasterizationPostDepthCoverage_)
{	}

S_physical_device_shader_core_properties_AMD::S_physical_device_shader_core_properties_AMD(
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
	,uint32_t   vgprAllocationGranularity_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shaderEngineCount(shaderEngineCount_)
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
{	}

S_pipeline_rasterization_conservative_state_create_info_EXT::S_pipeline_rasterization_conservative_state_create_info_EXT(
	VkPipelineRasterizationConservativeStateCreateFlagsEXT   flags_
	,E_conservative_rasterization_mode_EXT  conservativeRasterizationMode_
	,float   extraPrimitiveOverestimationSize_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,conservativeRasterizationMode(conservativeRasterizationMode_)
		,extraPrimitiveOverestimationSize(extraPrimitiveOverestimationSize_)
{	}

S_physical_device_descriptor_indexing_features_EXT::S_physical_device_descriptor_indexing_features_EXT(
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
	,VkBool32   runtimeDescriptorArray_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shaderInputAttachmentArrayDynamicIndexing(shaderInputAttachmentArrayDynamicIndexing_)
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
{	}

S_physical_device_descriptor_indexing_properties_EXT::S_physical_device_descriptor_indexing_properties_EXT(
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
	,uint32_t   maxDescriptorSetUpdateAfterBindInputAttachments_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxUpdateAfterBindDescriptorsInAllPools(maxUpdateAfterBindDescriptorsInAllPools_)
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
{	}

S_descriptor_set_layout_binding_flags_create_info_EXT::S_descriptor_set_layout_binding_flags_create_info_EXT(
	uint32_t   bindingCount_
	,const const VkDescriptorBindingFlagsEXT*  * pBindingFlags_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,bindingCount(bindingCount_)
		,pBindingFlags(pBindingFlags_)
{	}

S_descriptor_set_variable_descriptor_count_allocate_info_EXT::S_descriptor_set_variable_descriptor_count_allocate_info_EXT(
	uint32_t   descriptorSetCount_
	,const const uint32_t*  * pDescriptorCounts_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,descriptorSetCount(descriptorSetCount_)
		,pDescriptorCounts(pDescriptorCounts_)
{	}

S_descriptor_set_variable_descriptor_count_layout_support_EXT::S_descriptor_set_variable_descriptor_count_layout_support_EXT(
	uint32_t   maxVariableDescriptorCount_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxVariableDescriptorCount(maxVariableDescriptorCount_)
{	}

S_attachment_description2_KHR::S_attachment_description2_KHR(
	VkAttachmentDescriptionFlags   flags_
	,E_format  format_
	,F_sample_count  samples_
	,E_attachment_load_op  loadOp_
	,E_attachment_store_op  storeOp_
	,E_attachment_load_op  stencilLoadOp_
	,E_attachment_store_op  stencilStoreOp_
	,E_image_layout  initialLayout_
	,E_image_layout  finalLayout_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,format(format_)
		,samples(samples_)
		,loadOp(loadOp_)
		,storeOp(storeOp_)
		,stencilLoadOp(stencilLoadOp_)
		,stencilStoreOp(stencilStoreOp_)
		,initialLayout(initialLayout_)
		,finalLayout(finalLayout_)
{	}

S_attachment_reference2_KHR::S_attachment_reference2_KHR(
	uint32_t   attachment_
	,E_image_layout  layout_
	,VkImageAspectFlags   aspectMask_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,attachment(attachment_)
		,layout(layout_)
		,aspectMask(aspectMask_)
{	}

S_subpass_description2_KHR::S_subpass_description2_KHR(
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
	,const const uint32_t*                *               pPreserveAttachments_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
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
{	}

S_subpass_dependency2_KHR::S_subpass_dependency2_KHR(
	uint32_t   srcSubpass_
	,uint32_t   dstSubpass_
	,VkPipelineStageFlags   srcStageMask_
	,VkPipelineStageFlags   dstStageMask_
	,VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,VkDependencyFlags   dependencyFlags_
	,int32_t   viewOffset_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,srcSubpass(srcSubpass_)
		,dstSubpass(dstSubpass_)
		,srcStageMask(srcStageMask_)
		,dstStageMask(dstStageMask_)
		,srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
		,dependencyFlags(dependencyFlags_)
		,viewOffset(viewOffset_)
{	}

S_render_pass_create_info2_KHR::S_render_pass_create_info2_KHR(
	VkRenderPassCreateFlags   flags_
	,uint32_t   attachmentCount_
	,const S_attachment_description2_KHR * pAttachments_
	,uint32_t   subpassCount_
	,const S_subpass_description2_KHR *       pSubpasses_
	,uint32_t   dependencyCount_
	,const S_subpass_dependency2_KHR *     pDependencies_
	,uint32_t   correlatedViewMaskCount_
	,const const uint32_t*             *            pCorrelatedViewMasks_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
		,subpassCount(subpassCount_)
		,pSubpasses(pSubpasses_)
		,dependencyCount(dependencyCount_)
		,pDependencies(pDependencies_)
		,correlatedViewMaskCount(correlatedViewMaskCount_)
		,pCorrelatedViewMasks(pCorrelatedViewMasks_)
{	}

S_subpass_begin_info_KHR::S_subpass_begin_info_KHR(
	E_subpass_contents  contents_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,contents(contents_)
{	}

S_subpass_end_info_KHR::S_subpass_end_info_KHR():
		sType(E_structure_type::)
		,pNext(nullptr)
{	}

S_pipeline_vertex_input_divisor_state_create_info_EXT::S_pipeline_vertex_input_divisor_state_create_info_EXT(
	uint32_t   vertexBindingDivisorCount_
	,const S_vertex_input_binding_divisor_description_EXT *      pVertexBindingDivisors_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,vertexBindingDivisorCount(vertexBindingDivisorCount_)
		,pVertexBindingDivisors(pVertexBindingDivisors_)
{	}

S_physical_device_vertex_attribute_divisor_properties_EXT::S_physical_device_vertex_attribute_divisor_properties_EXT(
	uint32_t   maxVertexAttribDivisor_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxVertexAttribDivisor(maxVertexAttribDivisor_)
{	}

S_import_android_hardware_buffer_info_ANDROID::S_import_android_hardware_buffer_info_ANDROID(
	struct struct AHardwareBuffer*             *            buffer_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,buffer(buffer_)
{	}

S_android_hardware_buffer_usage_ANDROID::S_android_hardware_buffer_usage_ANDROID(
	uint64_t   androidHardwareBufferUsage_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,androidHardwareBufferUsage(androidHardwareBufferUsage_)
{	}

S_memory_get_android_hardware_buffer_info_ANDROID::S_memory_get_android_hardware_buffer_info_ANDROID(
	VkDeviceMemory   memory_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memory(memory_)
{	}

S_android_hardware_buffer_format_properties_ANDROID::S_android_hardware_buffer_format_properties_ANDROID(
	E_format  format_
	,uint64_t   externalFormat_
	,VkFormatFeatureFlags   formatFeatures_
	,S_component_mapping  samplerYcbcrConversionComponents_
	,E_sampler_ycbcr_model_conversion  suggestedYcbcrModel_
	,E_sampler_ycbcr_range  suggestedYcbcrRange_
	,E_chroma_location  suggestedXChromaOffset_
	,E_chroma_location  suggestedYChromaOffset_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,format(format_)
		,externalFormat(externalFormat_)
		,formatFeatures(formatFeatures_)
		,samplerYcbcrConversionComponents(samplerYcbcrConversionComponents_)
		,suggestedYcbcrModel(suggestedYcbcrModel_)
		,suggestedYcbcrRange(suggestedYcbcrRange_)
		,suggestedXChromaOffset(suggestedXChromaOffset_)
		,suggestedYChromaOffset(suggestedYChromaOffset_)
{	}

S_command_buffer_inheritance_conditional_rendering_info_EXT::S_command_buffer_inheritance_conditional_rendering_info_EXT(
	VkBool32   conditionalRenderingEnable_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,conditionalRenderingEnable(conditionalRenderingEnable_)
{	}

S_external_format_ANDROID::S_external_format_ANDROID(
	uint64_t   externalFormat_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,externalFormat(externalFormat_)
{	}

S_physical_device_8bit_storage_features_KHR::S_physical_device_8bit_storage_features_KHR(
	VkBool32   storageBuffer8BitAccess_
	,VkBool32   uniformAndStorageBuffer8BitAccess_
	,VkBool32   storagePushConstant8_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,storageBuffer8BitAccess(storageBuffer8BitAccess_)
		,uniformAndStorageBuffer8BitAccess(uniformAndStorageBuffer8BitAccess_)
		,storagePushConstant8(storagePushConstant8_)
{	}

S_physical_device_conditional_rendering_features_EXT::S_physical_device_conditional_rendering_features_EXT(
	VkBool32   conditionalRendering_
	,VkBool32   inheritedConditionalRendering_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,conditionalRendering(conditionalRendering_)
		,inheritedConditionalRendering(inheritedConditionalRendering_)
{	}

S_physical_device_vulkan_memory_model_features_KHR::S_physical_device_vulkan_memory_model_features_KHR(
	VkBool32   vulkanMemoryModel_
	,VkBool32   vulkanMemoryModelDeviceScope_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,vulkanMemoryModel(vulkanMemoryModel_)
		,vulkanMemoryModelDeviceScope(vulkanMemoryModelDeviceScope_)
{	}

S_physical_device_shader_atomic_int64_features_KHR::S_physical_device_shader_atomic_int64_features_KHR(
	VkBool32   shaderBufferInt64Atomics_
	,VkBool32   shaderSharedInt64Atomics_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shaderBufferInt64Atomics(shaderBufferInt64Atomics_)
		,shaderSharedInt64Atomics(shaderSharedInt64Atomics_)
{	}

S_physical_device_vertex_attribute_divisor_features_EXT::S_physical_device_vertex_attribute_divisor_features_EXT(
	VkBool32   vertexAttributeInstanceRateDivisor_
	,VkBool32   vertexAttributeInstanceRateZeroDivisor_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,vertexAttributeInstanceRateDivisor(vertexAttributeInstanceRateDivisor_)
		,vertexAttributeInstanceRateZeroDivisor(vertexAttributeInstanceRateZeroDivisor_)
{	}

S_queue_family_checkpoint_properties_NV::S_queue_family_checkpoint_properties_NV(
	VkPipelineStageFlags   checkpointExecutionStageMask_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,checkpointExecutionStageMask(checkpointExecutionStageMask_)
{	}

S_checkpoint_data_NV::S_checkpoint_data_NV(
	F_pipeline_stage  stage_
	,void*  * pCheckpointMarker_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,stage(stage_)
		,pCheckpointMarker(pCheckpointMarker_)
{	}

S_image_view_astc_decode_mode_EXT::S_image_view_astc_decode_mode_EXT(
	E_format  decodeMode_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,decodeMode(decodeMode_)
{	}

S_physical_device_astc_decode_features_EXT::S_physical_device_astc_decode_features_EXT(
	VkBool32   decodeModeSharedExponent_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,decodeModeSharedExponent(decodeModeSharedExponent_)
{	}

S_physical_device_representative_fragment_test_features_NV::S_physical_device_representative_fragment_test_features_NV(
	VkBool32   representativeFragmentTest_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,representativeFragmentTest(representativeFragmentTest_)
{	}

S_pipeline_representative_fragment_test_state_create_info_NV::S_pipeline_representative_fragment_test_state_create_info_NV(
	VkBool32   representativeFragmentTestEnable_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,representativeFragmentTestEnable(representativeFragmentTestEnable_)
{	}

S_physical_device_exclusive_scissor_features_NV::S_physical_device_exclusive_scissor_features_NV(
	VkBool32   exclusiveScissor_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,exclusiveScissor(exclusiveScissor_)
{	}

S_pipeline_viewport_exclusive_scissor_state_create_info_NV::S_pipeline_viewport_exclusive_scissor_state_create_info_NV(
	uint32_t   exclusiveScissorCount_
	,const S_rect_2d *    pExclusiveScissors_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,exclusiveScissorCount(exclusiveScissorCount_)
		,pExclusiveScissors(pExclusiveScissors_)
{	}

S_physical_device_corner_sampled_image_features_NV::S_physical_device_corner_sampled_image_features_NV(
	VkBool32   cornerSampledImage_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,cornerSampledImage(cornerSampledImage_)
{	}

S_physical_device_compute_shader_derivatives_features_NV::S_physical_device_compute_shader_derivatives_features_NV(
	VkBool32   computeDerivativeGroupQuads_
	,VkBool32   computeDerivativeGroupLinear_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,computeDerivativeGroupQuads(computeDerivativeGroupQuads_)
		,computeDerivativeGroupLinear(computeDerivativeGroupLinear_)
{	}

S_physical_device_fragment_shader_barycentric_features_NV::S_physical_device_fragment_shader_barycentric_features_NV(
	VkBool32   fragmentShaderBarycentric_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,fragmentShaderBarycentric(fragmentShaderBarycentric_)
{	}

S_physical_device_shader_image_footprint_features_NV::S_physical_device_shader_image_footprint_features_NV(
	VkBool32   imageFootprint_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,imageFootprint(imageFootprint_)
{	}

S_pipeline_viewport_shading_rate_image_state_create_info_NV::S_pipeline_viewport_shading_rate_image_state_create_info_NV(
	VkBool32   shadingRateImageEnable_
	,uint32_t   viewportCount_
	,const S_shading_rate_palette_NV *      pShadingRatePalettes_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shadingRateImageEnable(shadingRateImageEnable_)
		,viewportCount(viewportCount_)
		,pShadingRatePalettes(pShadingRatePalettes_)
{	}

S_physical_device_shading_rate_image_features_NV::S_physical_device_shading_rate_image_features_NV(
	VkBool32   shadingRateImage_
	,VkBool32   shadingRateCoarseSampleOrder_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shadingRateImage(shadingRateImage_)
		,shadingRateCoarseSampleOrder(shadingRateCoarseSampleOrder_)
{	}

S_physical_device_shading_rate_image_properties_NV::S_physical_device_shading_rate_image_properties_NV(
	S_extent_2d  shadingRateTexelSize_
	,uint32_t   shadingRatePaletteSize_
	,uint32_t   shadingRateMaxCoarseSamples_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shadingRateTexelSize(shadingRateTexelSize_)
		,shadingRatePaletteSize(shadingRatePaletteSize_)
		,shadingRateMaxCoarseSamples(shadingRateMaxCoarseSamples_)
{	}

S_pipeline_viewport_coarse_sample_order_state_create_info_NV::S_pipeline_viewport_coarse_sample_order_state_create_info_NV(
	E_coarse_sample_order_type_NV  sampleOrderType_
	,uint32_t   customSampleOrderCount_
	,const S_coarse_sample_order_custom_NV *        pCustomSampleOrders_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,sampleOrderType(sampleOrderType_)
		,customSampleOrderCount(customSampleOrderCount_)
		,pCustomSampleOrders(pCustomSampleOrders_)
{	}

S_physical_device_mesh_shader_features_NV::S_physical_device_mesh_shader_features_NV(
	VkBool32   taskShader_
	,VkBool32   meshShader_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,taskShader(taskShader_)
		,meshShader(meshShader_)
{	}

S_physical_device_mesh_shader_properties_NV::S_physical_device_mesh_shader_properties_NV(
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
	,uint32_t   meshOutputPerPrimitiveGranularity_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,maxDrawMeshTasksCount(maxDrawMeshTasksCount_)
		,maxTaskWorkGroupInvocations(maxTaskWorkGroupInvocations_)
		,maxTaskWorkGroupSize(maxTaskWorkGroupSize_)
		,maxTaskTotalMemorySize(maxTaskTotalMemorySize_)
		,maxTaskOutputCount(maxTaskOutputCount_)
		,maxMeshWorkGroupInvocations(maxMeshWorkGroupInvocations_)
		,maxMeshWorkGroupSize(maxMeshWorkGroupSize_)
		,maxMeshTotalMemorySize(maxMeshTotalMemorySize_)
		,maxMeshOutputVertices(maxMeshOutputVertices_)
		,maxMeshOutputPrimitives(maxMeshOutputPrimitives_)
		,maxMeshMultiviewViewCount(maxMeshMultiviewViewCount_)
		,meshOutputPerVertexGranularity(meshOutputPerVertexGranularity_)
		,meshOutputPerPrimitiveGranularity(meshOutputPerPrimitiveGranularity_)
{	}

S_raytracing_pipeline_create_info_NVX::S_raytracing_pipeline_create_info_NVX(
	VkPipelineCreateFlags   flags_
	,uint32_t   stageCount_
	,const S_pipeline_shader_stage_create_info * pStages_
	,const const uint32_t*  * pGroupNumbers_
	,uint32_t   maxRecursionDepth_
	,VkPipelineLayout   layout_
	,VkPipeline   basePipelineHandle_
	,int32_t   basePipelineIndex_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
		,stageCount(stageCount_)
		,pStages(pStages_)
		,pGroupNumbers(pGroupNumbers_)
		,maxRecursionDepth(maxRecursionDepth_)
		,layout(layout_)
		,basePipelineHandle(basePipelineHandle_)
		,basePipelineIndex(basePipelineIndex_)
{	}

S_geometry_triangles_NVX::S_geometry_triangles_NVX(
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
	,VkDeviceSize   transformOffset_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,vertexData(vertexData_)
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
{	}

S_geometry_aabb_NVX::S_geometry_aabb_NVX(
	VkBuffer   aabbData_
	,uint32_t   numAABBs_
	,uint32_t   stride_
	,VkDeviceSize   offset_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,aabbData(aabbData_)
		,numAABBs(numAABBs_)
		,stride(stride_)
		,offset(offset_)
{	}

S_geometry_NVX::S_geometry_NVX(
	E_geometry_type_NVX  geometryType_
	,S_geometry_data_NVX  geometry_
	,VkGeometryFlagsNVX   flags_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,geometryType(geometryType_)
		,geometry(geometry_)
		,flags(flags_)
{	}

S_acceleration_structure_create_info_NVX::S_acceleration_structure_create_info_NVX(
	E_acceleration_structure_type_NVX  type_
	,VkBuildAccelerationStructureFlagsNVX flags_
	,VkDeviceSize   compactedSize_
	,uint32_t   instanceCount_
	,uint32_t   geometryCount_
	,const S_geometry_NVX * pGeometries_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,type(type_)
		,flags(flags_)
		,compactedSize(compactedSize_)
		,instanceCount(instanceCount_)
		,geometryCount(geometryCount_)
		,pGeometries(pGeometries_)
{	}

S_bind_acceleration_structure_memory_info_NVX::S_bind_acceleration_structure_memory_info_NVX(
	VkAccelerationStructureNVX   accelerationStructure_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_
	,uint32_t   deviceIndexCount_
	,const const uint32_t*   *  pDeviceIndices_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,accelerationStructure(accelerationStructure_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
		,deviceIndexCount(deviceIndexCount_)
		,pDeviceIndices(pDeviceIndices_)
{	}

S_descriptor_acceleration_structure_info_NVX::S_descriptor_acceleration_structure_info_NVX(
	uint32_t   accelerationStructureCount_
	,const const VkAccelerationStructureNVX*  * pAccelerationStructures_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,accelerationStructureCount(accelerationStructureCount_)
		,pAccelerationStructures(pAccelerationStructures_)
{	}

S_acceleration_structure_memory_requirements_info_NVX::S_acceleration_structure_memory_requirements_info_NVX(
	VkAccelerationStructureNVX   accelerationStructure_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,accelerationStructure(accelerationStructure_)
{	}

S_physical_device_raytracing_properties_NVX::S_physical_device_raytracing_properties_NVX(
	uint32_t   shaderHeaderSize_
	,uint32_t   maxRecursionDepth_
	,uint32_t   maxGeometryCount_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,shaderHeaderSize(shaderHeaderSize_)
		,maxRecursionDepth(maxRecursionDepth_)
		,maxGeometryCount(maxGeometryCount_)
{	}

S_drm_format_modifier_properties_list_EXT::S_drm_format_modifier_properties_list_EXT(
	uint32_t   drmFormatModifierCount_
	,S_drm_format_modifier_properties_EXT * pDrmFormatModifierProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,drmFormatModifierCount(drmFormatModifierCount_)
		,pDrmFormatModifierProperties(pDrmFormatModifierProperties_)
{	}

S_physical_device_image_drm_format_modifier_info_EXT::S_physical_device_image_drm_format_modifier_info_EXT(
	uint64_t   drmFormatModifier_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,drmFormatModifier(drmFormatModifier_)
{	}

S_image_drm_format_modifier_list_create_info_EXT::S_image_drm_format_modifier_list_create_info_EXT(
	uint32_t   drmFormatModifierCount_
	,const const uint64_t*  * pDrmFormatModifiers_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,drmFormatModifierCount(drmFormatModifierCount_)
		,pDrmFormatModifiers(pDrmFormatModifiers_)
{	}

S_image_drm_format_modifier_explicit_create_info_EXT::S_image_drm_format_modifier_explicit_create_info_EXT(
	uint64_t   drmFormatModifier_
	,uint32_t   drmFormatModifierPlaneCount_
	,const S_subresource_layout * pPlaneLayouts_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,drmFormatModifier(drmFormatModifier_)
		,drmFormatModifierPlaneCount(drmFormatModifierPlaneCount_)
		,pPlaneLayouts(pPlaneLayouts_)
{	}

S_image_drm_format_modifier_properties_EXT::S_image_drm_format_modifier_properties_EXT(
	uint64_t   drmFormatModifier_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,drmFormatModifier(drmFormatModifier_)
{	}

S_physical_device_properties::S_physical_device_properties(
	uint32_t   apiVersion_
	,uint32_t   driverVersion_
	,uint32_t   vendorID_
	,uint32_t   deviceID_
	,E_physical_device_type  deviceType_
	,char [VK_MAX_PHYSICAL_DEVICE_NAME_SIZE]  deviceName_
	,uint8_t [VK_UUID_SIZE]  pipelineCacheUUID_
	,S_physical_device_limits  limits_
	,S_physical_device_sparse_properties  sparseProperties_):
		apiVersion(apiVersion_)
		,driverVersion(driverVersion_)
		,vendorID(vendorID_)
		,deviceID(deviceID_)
		,deviceType(deviceType_)
		,deviceName(deviceName_)
		,pipelineCacheUUID(pipelineCacheUUID_)
		,limits(limits_)
		,sparseProperties(sparseProperties_)
{	}

S_device_queue_create_info::S_device_queue_create_info(
	VkDeviceQueueCreateFlags   flags_
	,uint32_t   queueFamilyIndex_
	,uint32_t   queueCount_
	,const const float*     *    pQueuePriorities_):
		sType(E_structure_type::e_device_queue_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,queueFamilyIndex(queueFamilyIndex_)
		,queueCount(queueCount_)
		,pQueuePriorities(pQueuePriorities_)
{	}

S_instance_create_info::S_instance_create_info(
	VkInstanceCreateFlags   flags_
	,const S_application_info * pApplicationInfo_
	,uint32_t   enabledLayerCount_
	,const const char* const*       * const*      ppEnabledLayerNames_
	,uint32_t   enabledExtensionCount_
	,const const char* const*       * const*      ppEnabledExtensionNames_):
		sType(E_structure_type::e_instance_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,pApplicationInfo(pApplicationInfo_)
		,enabledLayerCount(enabledLayerCount_)
		,ppEnabledLayerNames(ppEnabledLayerNames_)
		,enabledExtensionCount(enabledExtensionCount_)
		,ppEnabledExtensionNames(ppEnabledExtensionNames_)
{	}

S_memory_allocate_info::S_memory_allocate_info(
	VkDeviceSize   allocationSize_
	,uint32_t   memoryTypeIndex_):
		sType(E_structure_type::e_memory_allocate_info)
		,pNext(nullptr)
		,allocationSize(allocationSize_)
		,memoryTypeIndex(memoryTypeIndex_)
{	}

S_write_descriptor_set::S_write_descriptor_set(
	VkDescriptorSet   dstSet_
	,uint32_t   dstBinding_
	,uint32_t   dstArrayElement_
	,uint32_t   descriptorCount_
	,E_descriptor_type  descriptorType_
	,const S_descriptor_image_info * pImageInfo_
	,const S_descriptor_buffer_info * pBufferInfo_
	,const const VkBufferView*     *    pTexelBufferView_):
		sType(E_structure_type::e_write_descriptor_set)
		,pNext(nullptr)
		,dstSet(dstSet_)
		,dstBinding(dstBinding_)
		,dstArrayElement(dstArrayElement_)
		,descriptorCount(descriptorCount_)
		,descriptorType(descriptorType_)
		,pImageInfo(pImageInfo_)
		,pBufferInfo(pBufferInfo_)
		,pTexelBufferView(pTexelBufferView_)
{	}

S_buffer_create_info::S_buffer_create_info(
	VkBufferCreateFlags   flags_
	,VkDeviceSize   size_
	,VkBufferUsageFlags   usage_
	,E_sharing_mode  sharingMode_
	,uint32_t   queueFamilyIndexCount_
	,const const uint32_t*         *        pQueueFamilyIndices_):
		sType(E_structure_type::e_buffer_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,size(size_)
		,usage(usage_)
		,sharingMode(sharingMode_)
		,queueFamilyIndexCount(queueFamilyIndexCount_)
		,pQueueFamilyIndices(pQueueFamilyIndices_)
{	}

S_image_memory_barrier::S_image_memory_barrier(
	VkAccessFlags   srcAccessMask_
	,VkAccessFlags   dstAccessMask_
	,E_image_layout  oldLayout_
	,E_image_layout  newLayout_
	,uint32_t   srcQueueFamilyIndex_
	,uint32_t   dstQueueFamilyIndex_
	,VkImage   image_
	,S_image_subresource_range  subresourceRange_):
		sType(E_structure_type::e_image_memory_barrier)
		,pNext(nullptr)
		,srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
		,oldLayout(oldLayout_)
		,newLayout(newLayout_)
		,srcQueueFamilyIndex(srcQueueFamilyIndex_)
		,dstQueueFamilyIndex(dstQueueFamilyIndex_)
		,image(image_)
		,subresourceRange(subresourceRange_)
{	}

S_image_create_info::S_image_create_info(
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
	,E_image_layout  initialLayout_):
		sType(E_structure_type::e_image_create_info)
		,pNext(nullptr)
		,flags(flags_)
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
{	}

S_image_view_create_info::S_image_view_create_info(
	VkImageViewCreateFlags   flags_
	,VkImage   image_
	,E_image_view_type  viewType_
	,E_format  format_
	,S_component_mapping  components_
	,S_image_subresource_range  subresourceRange_):
		sType(E_structure_type::e_image_view_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,image(image_)
		,viewType(viewType_)
		,format(format_)
		,components(components_)
		,subresourceRange(subresourceRange_)
{	}

S_bind_sparse_info::S_bind_sparse_info(
	uint32_t   waitSemaphoreCount_
	,const const VkSemaphore*      *     pWaitSemaphores_
	,uint32_t   bufferBindCount_
	,const S_sparse_buffer_memory_bind_info * pBufferBinds_
	,uint32_t   imageOpaqueBindCount_
	,const S_sparse_image_opaque_memory_bind_info * pImageOpaqueBinds_
	,uint32_t   imageBindCount_
	,const S_sparse_image_memory_bind_info * pImageBinds_
	,uint32_t   signalSemaphoreCount_
	,const const VkSemaphore*      *     pSignalSemaphores_):
		sType(E_structure_type::e_bind_sparse_info)
		,pNext(nullptr)
		,waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphores(pWaitSemaphores_)
		,bufferBindCount(bufferBindCount_)
		,pBufferBinds(pBufferBinds_)
		,imageOpaqueBindCount(imageOpaqueBindCount_)
		,pImageOpaqueBinds(pImageOpaqueBinds_)
		,imageBindCount(imageBindCount_)
		,pImageBinds(pImageBinds_)
		,signalSemaphoreCount(signalSemaphoreCount_)
		,pSignalSemaphores(pSignalSemaphores_)
{	}

S_shader_module_create_info::S_shader_module_create_info(
	VkShaderModuleCreateFlags   flags_
	,size_t   codeSize_
	,const const uint32_t*             *            pCode_):
		sType(E_structure_type::e_shader_module_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,codeSize(codeSize_)
		,pCode(pCode_)
{	}

S_descriptor_set_layout_create_info::S_descriptor_set_layout_create_info(
	VkDescriptorSetLayoutCreateFlags   flags_
	,uint32_t   bindingCount_
	,const S_descriptor_set_layout_binding * pBindings_):
		sType(E_structure_type::e_descriptor_set_layout_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,bindingCount(bindingCount_)
		,pBindings(pBindings_)
{	}

S_descriptor_pool_create_info::S_descriptor_pool_create_info(
	VkDescriptorPoolCreateFlags   flags_
	,uint32_t   maxSets_
	,uint32_t   poolSizeCount_
	,const S_descriptor_pool_size * pPoolSizes_):
		sType(E_structure_type::e_descriptor_pool_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,maxSets(maxSets_)
		,poolSizeCount(poolSizeCount_)
		,pPoolSizes(pPoolSizes_)
{	}

S_descriptor_set_allocate_info::S_descriptor_set_allocate_info(
	VkDescriptorPool   descriptorPool_
	,uint32_t   descriptorSetCount_
	,const const VkDescriptorSetLayout*  * pSetLayouts_):
		sType(E_structure_type::e_descriptor_set_allocate_info)
		,pNext(nullptr)
		,descriptorPool(descriptorPool_)
		,descriptorSetCount(descriptorSetCount_)
		,pSetLayouts(pSetLayouts_)
{	}

S_pipeline_vertex_input_state_create_info::S_pipeline_vertex_input_state_create_info(
	VkPipelineVertexInputStateCreateFlags   flags_
	,uint32_t   vertexBindingDescriptionCount_
	,const S_vertex_input_binding_description * pVertexBindingDescriptions_
	,uint32_t   vertexAttributeDescriptionCount_
	,const S_vertex_input_attribute_description * pVertexAttributeDescriptions_):
		sType(E_structure_type::e_pipeline_vertex_input_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,vertexBindingDescriptionCount(vertexBindingDescriptionCount_)
		,pVertexBindingDescriptions(pVertexBindingDescriptions_)
		,vertexAttributeDescriptionCount(vertexAttributeDescriptionCount_)
		,pVertexAttributeDescriptions(pVertexAttributeDescriptions_)
{	}

S_pipeline_tessellation_state_create_info::S_pipeline_tessellation_state_create_info(
	VkPipelineTessellationStateCreateFlags   flags_
	,uint32_t   patchControlPoints_):
		sType(E_structure_type::e_pipeline_tessellation_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,patchControlPoints(patchControlPoints_)
{	}

S_pipeline_viewport_state_create_info::S_pipeline_viewport_state_create_info(
	VkPipelineViewportStateCreateFlags   flags_
	,uint32_t   viewportCount_
	,const S_viewport *      pViewports_
	,uint32_t   scissorCount_
	,const S_rect_2d *        pScissors_):
		sType(E_structure_type::e_pipeline_viewport_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,viewportCount(viewportCount_)
		,pViewports(pViewports_)
		,scissorCount(scissorCount_)
		,pScissors(pScissors_)
{	}

S_pipeline_rasterization_state_create_info::S_pipeline_rasterization_state_create_info(
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
	,float   lineWidth_):
		sType(E_structure_type::e_pipeline_rasterization_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
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
{	}

S_pipeline_multisample_state_create_info::S_pipeline_multisample_state_create_info(
	VkPipelineMultisampleStateCreateFlags   flags_
	,F_sample_count  rasterizationSamples_
	,VkBool32   sampleShadingEnable_
	,float   minSampleShading_
	,const const VkSampleMask*     *    pSampleMask_
	,VkBool32   alphaToCoverageEnable_
	,VkBool32   alphaToOneEnable_):
		sType(E_structure_type::e_pipeline_multisample_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,rasterizationSamples(rasterizationSamples_)
		,sampleShadingEnable(sampleShadingEnable_)
		,minSampleShading(minSampleShading_)
		,pSampleMask(pSampleMask_)
		,alphaToCoverageEnable(alphaToCoverageEnable_)
		,alphaToOneEnable(alphaToOneEnable_)
{	}

S_pipeline_color_blend_state_create_info::S_pipeline_color_blend_state_create_info(
	VkPipelineColorBlendStateCreateFlags   flags_
	,VkBool32   logicOpEnable_
	,E_logic_op  logicOp_
	,uint32_t   attachmentCount_
	,const S_pipeline_color_blend_attachment_state * pAttachments_
	,float [4]  blendConstants_):
		sType(E_structure_type::e_pipeline_color_blend_state_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,logicOpEnable(logicOpEnable_)
		,logicOp(logicOp_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
		,blendConstants(blendConstants_)
{	}

S_graphics_pipeline_create_info::S_graphics_pipeline_create_info(
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
	,int32_t   basePipelineIndex_):
		sType(E_structure_type::e_graphics_pipeline_create_info)
		,pNext(nullptr)
		,flags(flags_)
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
{	}

S_sampler_create_info::S_sampler_create_info(
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
	,VkBool32   unnormalizedCoordinates_):
		sType(E_structure_type::e_sampler_create_info)
		,pNext(nullptr)
		,flags(flags_)
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
{	}

S_command_buffer_inheritance_info::S_command_buffer_inheritance_info(
	VkRenderPass   renderPass_
	,uint32_t   subpass_
	,VkFramebuffer   framebuffer_
	,VkBool32   occlusionQueryEnable_
	,VkQueryControlFlags   queryFlags_
	,VkQueryPipelineStatisticFlags   pipelineStatistics_):
		sType(E_structure_type::e_command_buffer_inheritance_info)
		,pNext(nullptr)
		,renderPass(renderPass_)
		,subpass(subpass_)
		,framebuffer(framebuffer_)
		,occlusionQueryEnable(occlusionQueryEnable_)
		,queryFlags(queryFlags_)
		,pipelineStatistics(pipelineStatistics_)
{	}

S_command_buffer_begin_info::S_command_buffer_begin_info(
	VkCommandBufferUsageFlags   flags_
	,const S_command_buffer_inheritance_info *       pInheritanceInfo_):
		sType(E_structure_type::e_command_buffer_begin_info)
		,pNext(nullptr)
		,flags(flags_)
		,pInheritanceInfo(pInheritanceInfo_)
{	}

S_render_pass_begin_info::S_render_pass_begin_info(
	VkRenderPass   renderPass_
	,VkFramebuffer   framebuffer_
	,S_rect_2d  renderArea_
	,uint32_t   clearValueCount_
	,const const VkClearValue*     *    pClearValues_):
		sType(E_structure_type::e_render_pass_begin_info)
		,pNext(nullptr)
		,renderPass(renderPass_)
		,framebuffer(framebuffer_)
		,renderArea(renderArea_)
		,clearValueCount(clearValueCount_)
		,pClearValues(pClearValues_)
{	}

S_render_pass_create_info::S_render_pass_create_info(
	VkRenderPassCreateFlags   flags_
	,uint32_t   attachmentCount_
	,const S_attachment_description * pAttachments_
	,uint32_t   subpassCount_
	,const S_subpass_description * pSubpasses_
	,uint32_t   dependencyCount_
	,const S_subpass_dependency * pDependencies_):
		sType(E_structure_type::e_render_pass_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
		,subpassCount(subpassCount_)
		,pSubpasses(pSubpasses_)
		,dependencyCount(dependencyCount_)
		,pDependencies(pDependencies_)
{	}

S_fence_create_info::S_fence_create_info(
	VkFenceCreateFlags   flags_):
		sType(E_structure_type::e_fence_create_info)
		,pNext(nullptr)
		,flags(flags_)
{	}

S_semaphore_create_info::S_semaphore_create_info(
	VkSemaphoreCreateFlags   flags_):
		sType(E_structure_type::e_semaphore_create_info)
		,pNext(nullptr)
		,flags(flags_)
{	}

S_submit_info::S_submit_info(
	uint32_t   waitSemaphoreCount_
	,const const VkSemaphore*      *     pWaitSemaphores_
	,const const VkPipelineStageFlags*            *           pWaitDstStageMask_
	,uint32_t   commandBufferCount_
	,const const VkCommandBuffer*      *     pCommandBuffers_
	,uint32_t   signalSemaphoreCount_
	,const const VkSemaphore*      *     pSignalSemaphores_):
		sType(E_structure_type::e_submit_info)
		,pNext(nullptr)
		,waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphores(pWaitSemaphores_)
		,pWaitDstStageMask(pWaitDstStageMask_)
		,commandBufferCount(commandBufferCount_)
		,pCommandBuffers(pCommandBuffers_)
		,signalSemaphoreCount(signalSemaphoreCount_)
		,pSignalSemaphores(pSignalSemaphores_)
{	}

S_swapchain_create_info_KHR::S_swapchain_create_info_KHR(
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
	,VkSwapchainKHR   oldSwapchain_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,flags(flags_)
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
{	}

S_present_info_KHR::S_present_info_KHR(
	uint32_t   waitSemaphoreCount_
	,const const VkSemaphore*  * pWaitSemaphores_
	,uint32_t   swapchainCount_
	,const const VkSwapchainKHR*  * pSwapchains_
	,const const uint32_t*  * pImageIndices_
	,E_result * pResults_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphores(pWaitSemaphores_)
		,swapchainCount(swapchainCount_)
		,pSwapchains(pSwapchains_)
		,pImageIndices(pImageIndices_)
		,pResults(pResults_)
{	}

S_physical_device_features2::S_physical_device_features2(
	S_physical_device_features  features_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,features(features_)
{	}

S_physical_device_properties2::S_physical_device_properties2(
	S_physical_device_properties  properties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,properties(properties_)
{	}

S_format_properties2::S_format_properties2(
	S_format_properties  formatProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,formatProperties(formatProperties_)
{	}

S_image_format_properties2::S_image_format_properties2(
	S_image_format_properties  imageFormatProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,imageFormatProperties(imageFormatProperties_)
{	}

S_physical_device_image_format_info2::S_physical_device_image_format_info2(
	E_format  format_
	,E_image_type  type_
	,E_image_tiling  tiling_
	,VkImageUsageFlags   usage_
	,VkImageCreateFlags   flags_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,format(format_)
		,type(type_)
		,tiling(tiling_)
		,usage(usage_)
		,flags(flags_)
{	}

S_queue_family_properties2::S_queue_family_properties2(
	S_queue_family_properties  queueFamilyProperties_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,queueFamilyProperties(queueFamilyProperties_)
{	}

S_bind_buffer_memory_info::S_bind_buffer_memory_info(
	VkBuffer   buffer_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,buffer(buffer_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
{	}

S_bind_image_memory_info::S_bind_image_memory_info(
	VkImage   image_
	,VkDeviceMemory   memory_
	,VkDeviceSize   memoryOffset_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,image(image_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
{	}

S_surface_capabilities2_KHR::S_surface_capabilities2_KHR(
	S_surface_capabilities_KHR  surfaceCapabilities_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,surfaceCapabilities(surfaceCapabilities_)
{	}

S_image_memory_requirements_info2::S_image_memory_requirements_info2(
	VkImage   image_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,image(image_)
{	}

S_memory_requirements2::S_memory_requirements2(
	S_memory_requirements  memoryRequirements_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,memoryRequirements(memoryRequirements_)
{	}

S_sampler_ycbcr_conversion_create_info::S_sampler_ycbcr_conversion_create_info(
	E_format  format_
	,E_sampler_ycbcr_model_conversion  ycbcrModel_
	,E_sampler_ycbcr_range  ycbcrRange_
	,S_component_mapping  components_
	,E_chroma_location  xChromaOffset_
	,E_chroma_location  yChromaOffset_
	,E_filter  chromaFilter_
	,VkBool32   forceExplicitReconstruction_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,format(format_)
		,ycbcrModel(ycbcrModel_)
		,ycbcrRange(ycbcrRange_)
		,components(components_)
		,xChromaOffset(xChromaOffset_)
		,yChromaOffset(yChromaOffset_)
		,chromaFilter(chromaFilter_)
		,forceExplicitReconstruction(forceExplicitReconstruction_)
{	}

S_descriptor_set_layout_support::S_descriptor_set_layout_support(
	VkBool32   supported_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,supported(supported_)
{	}

S_android_hardware_buffer_properties_ANDROID::S_android_hardware_buffer_properties_ANDROID(
	VkDeviceSize   allocationSize_
	,uint32_t   memoryTypeBits_):
		sType(E_structure_type::)
		,pNext(nullptr)
		,allocationSize(allocationSize_)
		,memoryTypeBits(memoryTypeBits_)
{	}

S_device_create_info::S_device_create_info(
	VkDeviceCreateFlags   flags_
	,uint32_t   queueCreateInfoCount_
	,const S_device_queue_create_info * pQueueCreateInfos_
	,uint32_t   enabledLayerCount_
	,const const char* const*       * const*      ppEnabledLayerNames_
	,uint32_t   enabledExtensionCount_
	,const const char* const*       * const*      ppEnabledExtensionNames_
	,const S_physical_device_features * pEnabledFeatures_):
		sType(E_structure_type::e_device_create_info)
		,pNext(nullptr)
		,flags(flags_)
		,queueCreateInfoCount(queueCreateInfoCount_)
		,pQueueCreateInfos(pQueueCreateInfos_)
		,enabledLayerCount(enabledLayerCount_)
		,ppEnabledLayerNames(ppEnabledLayerNames_)
		,enabledExtensionCount(enabledExtensionCount_)
		,ppEnabledExtensionNames(ppEnabledExtensionNames_)
		,pEnabledFeatures(pEnabledFeatures_)
{	}


}}

