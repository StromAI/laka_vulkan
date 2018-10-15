/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#include "pNext.h"
namespace laka { namespace vk {
PhysicalDeviceProperties_base::PhysicalDeviceProperties_base():pNext(nullptr){};
PhysicalDeviceProperties_base::~PhysicalDeviceProperties_base(){};

PhysicalDeviceProperties_base& PhysicalDeviceProperties_base::operator<<(PhysicalDeviceProperties_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PhysicalDeviceProperties::PhysicalDeviceProperties(
uint32_t   apiVersion_,
uint32_t   driverVersion_,
uint32_t   vendorID_,
uint32_t   deviceID_,
VkPhysicalDeviceType   deviceType_,
Array_value<char  >deviceName_,
Array_value<uint8_t  >pipelineCacheUUID_,
VkPhysicalDeviceLimits   limits_,
VkPhysicalDeviceSparseProperties   sparseProperties_)
:apiVersion(apiVersion_)
,driverVersion(driverVersion_)
,vendorID(vendorID_)
,deviceID(deviceID_)
,deviceType(deviceType_)
,limits(limits_)
,sparseProperties(sparseProperties_){
if(VK_MAX_PHYSICAL_DEVICE_NAME_SIZE<deviceName_.size() ){ init_show;show_err("array deviceName is too long");return ;}
else{ memcpy(&deviceName[0],deviceName_.data(),deviceName_.size() );}
if(VK_UUID_SIZE<pipelineCacheUUID_.size() ){ init_show;show_err("array pipelineCacheUUID is too long");return ;}
else{ memcpy(&pipelineCacheUUID[0],pipelineCacheUUID_.data(),pipelineCacheUUID_.size() );}
}

DeviceQueueCreateInfo_base::DeviceQueueCreateInfo_base():pNext(nullptr){};
DeviceQueueCreateInfo_base::~DeviceQueueCreateInfo_base(){};

DeviceQueueCreateInfo_base& DeviceQueueCreateInfo_base::operator<<(DeviceQueueCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DeviceQueueCreateInfo::DeviceQueueCreateInfo(
VkDeviceQueueCreateFlags   flags_,
uint32_t   queueFamilyIndex_,
uint32_t   queueCount_,
const float *     pQueuePriorities_)
:flags(flags_)
,queueFamilyIndex(queueFamilyIndex_)
,queueCount(queueCount_)
,pQueuePriorities(pQueuePriorities_){
}

DeviceCreateInfo_base::DeviceCreateInfo_base():pNext(nullptr){};
DeviceCreateInfo_base::~DeviceCreateInfo_base(){};

DeviceCreateInfo_base& DeviceCreateInfo_base::operator<<(DeviceCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DeviceCreateInfo::DeviceCreateInfo(
VkDeviceCreateFlags   flags_,
uint32_t   queueCreateInfoCount_,
const VkDeviceQueueCreateInfo *  pQueueCreateInfos_,
uint32_t   enabledLayerCount_,
const char * const*       ppEnabledLayerNames_,
uint32_t   enabledExtensionCount_,
const char * const*       ppEnabledExtensionNames_,
const VkPhysicalDeviceFeatures *  pEnabledFeatures_)
:flags(flags_)
,queueCreateInfoCount(queueCreateInfoCount_)
,pQueueCreateInfos(pQueueCreateInfos_)
,enabledLayerCount(enabledLayerCount_)
,ppEnabledLayerNames(ppEnabledLayerNames_)
,enabledExtensionCount(enabledExtensionCount_)
,ppEnabledExtensionNames(ppEnabledExtensionNames_)
,pEnabledFeatures(pEnabledFeatures_){
}

InstanceCreateInfo_base::InstanceCreateInfo_base():pNext(nullptr){};
InstanceCreateInfo_base::~InstanceCreateInfo_base(){};

InstanceCreateInfo_base& InstanceCreateInfo_base::operator<<(InstanceCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

InstanceCreateInfo::InstanceCreateInfo(
VkInstanceCreateFlags   flags_,
const VkApplicationInfo *  pApplicationInfo_,
uint32_t   enabledLayerCount_,
const char * const*       ppEnabledLayerNames_,
uint32_t   enabledExtensionCount_,
const char * const*       ppEnabledExtensionNames_)
:flags(flags_)
,pApplicationInfo(pApplicationInfo_)
,enabledLayerCount(enabledLayerCount_)
,ppEnabledLayerNames(ppEnabledLayerNames_)
,enabledExtensionCount(enabledExtensionCount_)
,ppEnabledExtensionNames(ppEnabledExtensionNames_){
}

MemoryAllocateInfo_base::MemoryAllocateInfo_base():pNext(nullptr){};
MemoryAllocateInfo_base::~MemoryAllocateInfo_base(){};

MemoryAllocateInfo_base& MemoryAllocateInfo_base::operator<<(MemoryAllocateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

MemoryAllocateInfo::MemoryAllocateInfo(
VkDeviceSize   allocationSize_,
uint32_t   memoryTypeIndex_)
:allocationSize(allocationSize_)
,memoryTypeIndex(memoryTypeIndex_){
}

WriteDescriptorSet_base::WriteDescriptorSet_base():pNext(nullptr){};
WriteDescriptorSet_base::~WriteDescriptorSet_base(){};

WriteDescriptorSet_base& WriteDescriptorSet_base::operator<<(WriteDescriptorSet_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

WriteDescriptorSet::WriteDescriptorSet(
VkDescriptorSet   dstSet_,
uint32_t   dstBinding_,
uint32_t   dstArrayElement_,
uint32_t   descriptorCount_,
VkDescriptorType   descriptorType_,
const VkDescriptorImageInfo *  pImageInfo_,
const VkDescriptorBufferInfo *  pBufferInfo_,
const VkBufferView *     pTexelBufferView_)
:dstSet(dstSet_)
,dstBinding(dstBinding_)
,dstArrayElement(dstArrayElement_)
,descriptorCount(descriptorCount_)
,descriptorType(descriptorType_)
,pImageInfo(pImageInfo_)
,pBufferInfo(pBufferInfo_)
,pTexelBufferView(pTexelBufferView_){
}

BufferCreateInfo_base::BufferCreateInfo_base():pNext(nullptr){};
BufferCreateInfo_base::~BufferCreateInfo_base(){};

BufferCreateInfo_base& BufferCreateInfo_base::operator<<(BufferCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BufferCreateInfo::BufferCreateInfo(
VkBufferCreateFlags   flags_,
VkDeviceSize   size_,
VkBufferUsageFlags   usage_,
VkSharingMode   sharingMode_,
uint32_t   queueFamilyIndexCount_,
const uint32_t *         pQueueFamilyIndices_)
:flags(flags_)
,size(size_)
,usage(usage_)
,sharingMode(sharingMode_)
,queueFamilyIndexCount(queueFamilyIndexCount_)
,pQueueFamilyIndices(pQueueFamilyIndices_){
}

ImageMemoryBarrier_base::ImageMemoryBarrier_base():pNext(nullptr){};
ImageMemoryBarrier_base::~ImageMemoryBarrier_base(){};

ImageMemoryBarrier_base& ImageMemoryBarrier_base::operator<<(ImageMemoryBarrier_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageMemoryBarrier::ImageMemoryBarrier(
VkAccessFlags   srcAccessMask_,
VkAccessFlags   dstAccessMask_,
VkImageLayout   oldLayout_,
VkImageLayout   newLayout_,
uint32_t   srcQueueFamilyIndex_,
uint32_t   dstQueueFamilyIndex_,
VkImage   image_,
VkImageSubresourceRange   subresourceRange_)
:srcAccessMask(srcAccessMask_)
,dstAccessMask(dstAccessMask_)
,oldLayout(oldLayout_)
,newLayout(newLayout_)
,srcQueueFamilyIndex(srcQueueFamilyIndex_)
,dstQueueFamilyIndex(dstQueueFamilyIndex_)
,image(image_)
,subresourceRange(subresourceRange_){
}

ImageCreateInfo_base::ImageCreateInfo_base():pNext(nullptr){};
ImageCreateInfo_base::~ImageCreateInfo_base(){};

ImageCreateInfo_base& ImageCreateInfo_base::operator<<(ImageCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageCreateInfo::ImageCreateInfo(
VkImageCreateFlags   flags_,
VkImageType   imageType_,
VkFormat   format_,
VkExtent3D   extent_,
uint32_t   mipLevels_,
uint32_t   arrayLayers_,
VkSampleCountFlagBits   samples_,
VkImageTiling   tiling_,
VkImageUsageFlags   usage_,
VkSharingMode   sharingMode_,
uint32_t   queueFamilyIndexCount_,
const uint32_t *         pQueueFamilyIndices_,
VkImageLayout   initialLayout_)
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
,initialLayout(initialLayout_){
}

ImageViewCreateInfo_base::ImageViewCreateInfo_base():pNext(nullptr){};
ImageViewCreateInfo_base::~ImageViewCreateInfo_base(){};

ImageViewCreateInfo_base& ImageViewCreateInfo_base::operator<<(ImageViewCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageViewCreateInfo::ImageViewCreateInfo(
VkImageViewCreateFlags   flags_,
VkImage   image_,
VkImageViewType   viewType_,
VkFormat   format_,
VkComponentMapping   components_,
VkImageSubresourceRange   subresourceRange_)
:flags(flags_)
,image(image_)
,viewType(viewType_)
,format(format_)
,components(components_)
,subresourceRange(subresourceRange_){
}

BindSparseInfo_base::BindSparseInfo_base():pNext(nullptr){};
BindSparseInfo_base::~BindSparseInfo_base(){};

BindSparseInfo_base& BindSparseInfo_base::operator<<(BindSparseInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BindSparseInfo::BindSparseInfo(
uint32_t   waitSemaphoreCount_,
const VkSemaphore *      pWaitSemaphores_,
uint32_t   bufferBindCount_,
const VkSparseBufferMemoryBindInfo *  pBufferBinds_,
uint32_t   imageOpaqueBindCount_,
const VkSparseImageOpaqueMemoryBindInfo *  pImageOpaqueBinds_,
uint32_t   imageBindCount_,
const VkSparseImageMemoryBindInfo *  pImageBinds_,
uint32_t   signalSemaphoreCount_,
const VkSemaphore *      pSignalSemaphores_)
:waitSemaphoreCount(waitSemaphoreCount_)
,pWaitSemaphores(pWaitSemaphores_)
,bufferBindCount(bufferBindCount_)
,pBufferBinds(pBufferBinds_)
,imageOpaqueBindCount(imageOpaqueBindCount_)
,pImageOpaqueBinds(pImageOpaqueBinds_)
,imageBindCount(imageBindCount_)
,pImageBinds(pImageBinds_)
,signalSemaphoreCount(signalSemaphoreCount_)
,pSignalSemaphores(pSignalSemaphores_){
}

ShaderModuleCreateInfo_base::ShaderModuleCreateInfo_base():pNext(nullptr){};
ShaderModuleCreateInfo_base::~ShaderModuleCreateInfo_base(){};

ShaderModuleCreateInfo_base& ShaderModuleCreateInfo_base::operator<<(ShaderModuleCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ShaderModuleCreateInfo::ShaderModuleCreateInfo(
VkShaderModuleCreateFlags   flags_,
size_t   codeSize_,
const uint32_t *             pCode_)
:flags(flags_)
,codeSize(codeSize_)
,pCode(pCode_){
}

DescriptorSetLayoutCreateInfo_base::DescriptorSetLayoutCreateInfo_base():pNext(nullptr){};
DescriptorSetLayoutCreateInfo_base::~DescriptorSetLayoutCreateInfo_base(){};

DescriptorSetLayoutCreateInfo_base& DescriptorSetLayoutCreateInfo_base::operator<<(DescriptorSetLayoutCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorSetLayoutCreateInfo::DescriptorSetLayoutCreateInfo(
VkDescriptorSetLayoutCreateFlags   flags_,
uint32_t   bindingCount_,
const VkDescriptorSetLayoutBinding *  pBindings_)
:flags(flags_)
,bindingCount(bindingCount_)
,pBindings(pBindings_){
}

DescriptorPoolCreateInfo_base::DescriptorPoolCreateInfo_base():pNext(nullptr){};
DescriptorPoolCreateInfo_base::~DescriptorPoolCreateInfo_base(){};

DescriptorPoolCreateInfo_base& DescriptorPoolCreateInfo_base::operator<<(DescriptorPoolCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorPoolCreateInfo::DescriptorPoolCreateInfo(
VkDescriptorPoolCreateFlags   flags_,
uint32_t   maxSets_,
uint32_t   poolSizeCount_,
const VkDescriptorPoolSize *  pPoolSizes_)
:flags(flags_)
,maxSets(maxSets_)
,poolSizeCount(poolSizeCount_)
,pPoolSizes(pPoolSizes_){
}

DescriptorSetAllocateInfo_base::DescriptorSetAllocateInfo_base():pNext(nullptr){};
DescriptorSetAllocateInfo_base::~DescriptorSetAllocateInfo_base(){};

DescriptorSetAllocateInfo_base& DescriptorSetAllocateInfo_base::operator<<(DescriptorSetAllocateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorSetAllocateInfo::DescriptorSetAllocateInfo(
VkDescriptorPool   descriptorPool_,
uint32_t   descriptorSetCount_,
const VkDescriptorSetLayout *  pSetLayouts_)
:descriptorPool(descriptorPool_)
,descriptorSetCount(descriptorSetCount_)
,pSetLayouts(pSetLayouts_){
}

PipelineVertexInputStateCreateInfo_base::PipelineVertexInputStateCreateInfo_base():pNext(nullptr){};
PipelineVertexInputStateCreateInfo_base::~PipelineVertexInputStateCreateInfo_base(){};

PipelineVertexInputStateCreateInfo_base& PipelineVertexInputStateCreateInfo_base::operator<<(PipelineVertexInputStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineVertexInputStateCreateInfo::PipelineVertexInputStateCreateInfo(
VkPipelineVertexInputStateCreateFlags   flags_,
uint32_t   vertexBindingDescriptionCount_,
const VkVertexInputBindingDescription *  pVertexBindingDescriptions_,
uint32_t   vertexAttributeDescriptionCount_,
const VkVertexInputAttributeDescription *  pVertexAttributeDescriptions_)
:flags(flags_)
,vertexBindingDescriptionCount(vertexBindingDescriptionCount_)
,pVertexBindingDescriptions(pVertexBindingDescriptions_)
,vertexAttributeDescriptionCount(vertexAttributeDescriptionCount_)
,pVertexAttributeDescriptions(pVertexAttributeDescriptions_){
}

PipelineTessellationStateCreateInfo_base::PipelineTessellationStateCreateInfo_base():pNext(nullptr){};
PipelineTessellationStateCreateInfo_base::~PipelineTessellationStateCreateInfo_base(){};

PipelineTessellationStateCreateInfo_base& PipelineTessellationStateCreateInfo_base::operator<<(PipelineTessellationStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineTessellationStateCreateInfo::PipelineTessellationStateCreateInfo(
VkPipelineTessellationStateCreateFlags   flags_,
uint32_t   patchControlPoints_)
:flags(flags_)
,patchControlPoints(patchControlPoints_){
}

PipelineViewportStateCreateInfo_base::PipelineViewportStateCreateInfo_base():pNext(nullptr){};
PipelineViewportStateCreateInfo_base::~PipelineViewportStateCreateInfo_base(){};

PipelineViewportStateCreateInfo_base& PipelineViewportStateCreateInfo_base::operator<<(PipelineViewportStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineViewportStateCreateInfo::PipelineViewportStateCreateInfo(
VkPipelineViewportStateCreateFlags   flags_,
uint32_t   viewportCount_,
const VkViewport *       pViewports_,
uint32_t   scissorCount_,
const VkRect2D *         pScissors_)
:flags(flags_)
,viewportCount(viewportCount_)
,pViewports(pViewports_)
,scissorCount(scissorCount_)
,pScissors(pScissors_){
}

PipelineRasterizationStateCreateInfo_base::PipelineRasterizationStateCreateInfo_base():pNext(nullptr){};
PipelineRasterizationStateCreateInfo_base::~PipelineRasterizationStateCreateInfo_base(){};

PipelineRasterizationStateCreateInfo_base& PipelineRasterizationStateCreateInfo_base::operator<<(PipelineRasterizationStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineRasterizationStateCreateInfo::PipelineRasterizationStateCreateInfo(
VkPipelineRasterizationStateCreateFlags   flags_,
VkBool32   depthClampEnable_,
VkBool32   rasterizerDiscardEnable_,
VkPolygonMode   polygonMode_,
VkCullModeFlags   cullMode_,
VkFrontFace   frontFace_,
VkBool32   depthBiasEnable_,
float   depthBiasConstantFactor_,
float   depthBiasClamp_,
float   depthBiasSlopeFactor_,
float   lineWidth_)
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
,lineWidth(lineWidth_){
}

PipelineMultisampleStateCreateInfo_base::PipelineMultisampleStateCreateInfo_base():pNext(nullptr){};
PipelineMultisampleStateCreateInfo_base::~PipelineMultisampleStateCreateInfo_base(){};

PipelineMultisampleStateCreateInfo_base& PipelineMultisampleStateCreateInfo_base::operator<<(PipelineMultisampleStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineMultisampleStateCreateInfo::PipelineMultisampleStateCreateInfo(
VkPipelineMultisampleStateCreateFlags   flags_,
VkSampleCountFlagBits   rasterizationSamples_,
VkBool32   sampleShadingEnable_,
float   minSampleShading_,
const VkSampleMask *     pSampleMask_,
VkBool32   alphaToCoverageEnable_,
VkBool32   alphaToOneEnable_)
:flags(flags_)
,rasterizationSamples(rasterizationSamples_)
,sampleShadingEnable(sampleShadingEnable_)
,minSampleShading(minSampleShading_)
,pSampleMask(pSampleMask_)
,alphaToCoverageEnable(alphaToCoverageEnable_)
,alphaToOneEnable(alphaToOneEnable_){
}

PipelineColorBlendStateCreateInfo_base::PipelineColorBlendStateCreateInfo_base():pNext(nullptr){};
PipelineColorBlendStateCreateInfo_base::~PipelineColorBlendStateCreateInfo_base(){};

PipelineColorBlendStateCreateInfo_base& PipelineColorBlendStateCreateInfo_base::operator<<(PipelineColorBlendStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineColorBlendStateCreateInfo::PipelineColorBlendStateCreateInfo(
VkPipelineColorBlendStateCreateFlags   flags_,
VkBool32   logicOpEnable_,
VkLogicOp   logicOp_,
uint32_t   attachmentCount_,
const VkPipelineColorBlendAttachmentState *  pAttachments_,
Array_value<float  >blendConstants_)
:flags(flags_)
,logicOpEnable(logicOpEnable_)
,logicOp(logicOp_)
,attachmentCount(attachmentCount_)
,pAttachments(pAttachments_){
if(4<blendConstants_.size() ){ init_show;show_err("array blendConstants is too long");return ;}
else{ memcpy(&blendConstants[0],blendConstants_.data(),blendConstants_.size() );}
}

GraphicsPipelineCreateInfo_base::GraphicsPipelineCreateInfo_base():pNext(nullptr){};
GraphicsPipelineCreateInfo_base::~GraphicsPipelineCreateInfo_base(){};

GraphicsPipelineCreateInfo_base& GraphicsPipelineCreateInfo_base::operator<<(GraphicsPipelineCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

GraphicsPipelineCreateInfo::GraphicsPipelineCreateInfo(
VkPipelineCreateFlags   flags_,
uint32_t   stageCount_,
const VkPipelineShaderStageCreateInfo *  pStages_,
const VkPipelineVertexInputStateCreateInfo *  pVertexInputState_,
const VkPipelineInputAssemblyStateCreateInfo *  pInputAssemblyState_,
const VkPipelineTessellationStateCreateInfo *  pTessellationState_,
const VkPipelineViewportStateCreateInfo *  pViewportState_,
const VkPipelineRasterizationStateCreateInfo *  pRasterizationState_,
const VkPipelineMultisampleStateCreateInfo *  pMultisampleState_,
const VkPipelineDepthStencilStateCreateInfo *  pDepthStencilState_,
const VkPipelineColorBlendStateCreateInfo *  pColorBlendState_,
const VkPipelineDynamicStateCreateInfo *  pDynamicState_,
VkPipelineLayout   layout_,
VkRenderPass   renderPass_,
uint32_t   subpass_,
VkPipeline   basePipelineHandle_,
int32_t   basePipelineIndex_)
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
,basePipelineIndex(basePipelineIndex_){
}

SamplerCreateInfo_base::SamplerCreateInfo_base():pNext(nullptr){};
SamplerCreateInfo_base::~SamplerCreateInfo_base(){};

SamplerCreateInfo_base& SamplerCreateInfo_base::operator<<(SamplerCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SamplerCreateInfo::SamplerCreateInfo(
VkSamplerCreateFlags   flags_,
VkFilter   magFilter_,
VkFilter   minFilter_,
VkSamplerMipmapMode   mipmapMode_,
VkSamplerAddressMode   addressModeU_,
VkSamplerAddressMode   addressModeV_,
VkSamplerAddressMode   addressModeW_,
float   mipLodBias_,
VkBool32   anisotropyEnable_,
float   maxAnisotropy_,
VkBool32   compareEnable_,
VkCompareOp   compareOp_,
float   minLod_,
float   maxLod_,
VkBorderColor   borderColor_,
VkBool32   unnormalizedCoordinates_)
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
,unnormalizedCoordinates(unnormalizedCoordinates_){
}

CommandBufferInheritanceInfo_base::CommandBufferInheritanceInfo_base():pNext(nullptr){};
CommandBufferInheritanceInfo_base::~CommandBufferInheritanceInfo_base(){};

CommandBufferInheritanceInfo_base& CommandBufferInheritanceInfo_base::operator<<(CommandBufferInheritanceInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

CommandBufferInheritanceInfo::CommandBufferInheritanceInfo(
VkRenderPass   renderPass_,
uint32_t   subpass_,
VkFramebuffer   framebuffer_,
VkBool32   occlusionQueryEnable_,
VkQueryControlFlags   queryFlags_,
VkQueryPipelineStatisticFlags   pipelineStatistics_)
:renderPass(renderPass_)
,subpass(subpass_)
,framebuffer(framebuffer_)
,occlusionQueryEnable(occlusionQueryEnable_)
,queryFlags(queryFlags_)
,pipelineStatistics(pipelineStatistics_){
}

CommandBufferBeginInfo_base::CommandBufferBeginInfo_base():pNext(nullptr){};
CommandBufferBeginInfo_base::~CommandBufferBeginInfo_base(){};

CommandBufferBeginInfo_base& CommandBufferBeginInfo_base::operator<<(CommandBufferBeginInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

CommandBufferBeginInfo::CommandBufferBeginInfo(
VkCommandBufferUsageFlags   flags_,
const VkCommandBufferInheritanceInfo *        pInheritanceInfo_)
:flags(flags_)
,pInheritanceInfo(pInheritanceInfo_){
}

RenderPassBeginInfo_base::RenderPassBeginInfo_base():pNext(nullptr){};
RenderPassBeginInfo_base::~RenderPassBeginInfo_base(){};

RenderPassBeginInfo_base& RenderPassBeginInfo_base::operator<<(RenderPassBeginInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

RenderPassBeginInfo::RenderPassBeginInfo(
VkRenderPass   renderPass_,
VkFramebuffer   framebuffer_,
VkRect2D   renderArea_,
uint32_t   clearValueCount_,
const VkClearValue *     pClearValues_)
:renderPass(renderPass_)
,framebuffer(framebuffer_)
,renderArea(renderArea_)
,clearValueCount(clearValueCount_)
,pClearValues(pClearValues_){
}

RenderPassCreateInfo_base::RenderPassCreateInfo_base():pNext(nullptr){};
RenderPassCreateInfo_base::~RenderPassCreateInfo_base(){};

RenderPassCreateInfo_base& RenderPassCreateInfo_base::operator<<(RenderPassCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

RenderPassCreateInfo::RenderPassCreateInfo(
VkRenderPassCreateFlags   flags_,
uint32_t   attachmentCount_,
const VkAttachmentDescription *  pAttachments_,
uint32_t   subpassCount_,
const VkSubpassDescription *  pSubpasses_,
uint32_t   dependencyCount_,
const VkSubpassDependency *  pDependencies_)
:flags(flags_)
,attachmentCount(attachmentCount_)
,pAttachments(pAttachments_)
,subpassCount(subpassCount_)
,pSubpasses(pSubpasses_)
,dependencyCount(dependencyCount_)
,pDependencies(pDependencies_){
}

FenceCreateInfo_base::FenceCreateInfo_base():pNext(nullptr){};
FenceCreateInfo_base::~FenceCreateInfo_base(){};

FenceCreateInfo_base& FenceCreateInfo_base::operator<<(FenceCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

FenceCreateInfo::FenceCreateInfo(
VkFenceCreateFlags   flags_)
:flags(flags_){
}

SemaphoreCreateInfo_base::SemaphoreCreateInfo_base():pNext(nullptr){};
SemaphoreCreateInfo_base::~SemaphoreCreateInfo_base(){};

SemaphoreCreateInfo_base& SemaphoreCreateInfo_base::operator<<(SemaphoreCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SemaphoreCreateInfo::SemaphoreCreateInfo(
VkSemaphoreCreateFlags   flags_)
:flags(flags_){
}

SubmitInfo_base::SubmitInfo_base():pNext(nullptr){};
SubmitInfo_base::~SubmitInfo_base(){};

SubmitInfo_base& SubmitInfo_base::operator<<(SubmitInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SubmitInfo::SubmitInfo(
uint32_t   waitSemaphoreCount_,
const VkSemaphore *      pWaitSemaphores_,
const VkPipelineStageFlags *            pWaitDstStageMask_,
uint32_t   commandBufferCount_,
const VkCommandBuffer *      pCommandBuffers_,
uint32_t   signalSemaphoreCount_,
const VkSemaphore *      pSignalSemaphores_)
:waitSemaphoreCount(waitSemaphoreCount_)
,pWaitSemaphores(pWaitSemaphores_)
,pWaitDstStageMask(pWaitDstStageMask_)
,commandBufferCount(commandBufferCount_)
,pCommandBuffers(pCommandBuffers_)
,signalSemaphoreCount(signalSemaphoreCount_)
,pSignalSemaphores(pSignalSemaphores_){
}

SwapchainCreateInfoKHR_base::SwapchainCreateInfoKHR_base():pNext(nullptr){};
SwapchainCreateInfoKHR_base::~SwapchainCreateInfoKHR_base(){};

SwapchainCreateInfoKHR_base& SwapchainCreateInfoKHR_base::operator<<(SwapchainCreateInfoKHR_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SwapchainCreateInfoKHR::SwapchainCreateInfoKHR(
VkSwapchainCreateFlagsKHR   flags_,
VkSurfaceKHR   surface_,
uint32_t   minImageCount_,
VkFormat   imageFormat_,
VkColorSpaceKHR   imageColorSpace_,
VkExtent2D   imageExtent_,
uint32_t   imageArrayLayers_,
VkImageUsageFlags   imageUsage_,
VkSharingMode   imageSharingMode_,
uint32_t   queueFamilyIndexCount_,
const uint32_t *                   pQueueFamilyIndices_,
VkSurfaceTransformFlagBitsKHR   preTransform_,
VkCompositeAlphaFlagBitsKHR   compositeAlpha_,
VkPresentModeKHR   presentMode_,
VkBool32   clipped_,
VkSwapchainKHR   oldSwapchain_)
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
,oldSwapchain(oldSwapchain_){
}

PresentInfoKHR_base::PresentInfoKHR_base():pNext(nullptr){};
PresentInfoKHR_base::~PresentInfoKHR_base(){};

PresentInfoKHR_base& PresentInfoKHR_base::operator<<(PresentInfoKHR_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PresentInfoKHR::PresentInfoKHR(
uint32_t   waitSemaphoreCount_,
const VkSemaphore *  pWaitSemaphores_,
uint32_t   swapchainCount_,
const VkSwapchainKHR *  pSwapchains_,
const uint32_t *  pImageIndices_,
VkResult *  pResults_)
:waitSemaphoreCount(waitSemaphoreCount_)
,pWaitSemaphores(pWaitSemaphores_)
,swapchainCount(swapchainCount_)
,pSwapchains(pSwapchains_)
,pImageIndices(pImageIndices_)
,pResults(pResults_){
}

PhysicalDeviceFeatures2_base::PhysicalDeviceFeatures2_base():pNext(nullptr){};
PhysicalDeviceFeatures2_base::~PhysicalDeviceFeatures2_base(){};

PhysicalDeviceFeatures2_base& PhysicalDeviceFeatures2_base::operator<<(PhysicalDeviceFeatures2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PhysicalDeviceFeatures2::PhysicalDeviceFeatures2(
VkPhysicalDeviceFeatures   features_)
:features(features_){
}

PhysicalDeviceProperties2_base::PhysicalDeviceProperties2_base():pNext(nullptr){};
PhysicalDeviceProperties2_base::~PhysicalDeviceProperties2_base(){};

PhysicalDeviceProperties2_base& PhysicalDeviceProperties2_base::operator<<(PhysicalDeviceProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PhysicalDeviceProperties2::PhysicalDeviceProperties2(
VkPhysicalDeviceProperties   properties_)
:properties(properties_){
}

FormatProperties2_base::FormatProperties2_base():pNext(nullptr){};
FormatProperties2_base::~FormatProperties2_base(){};

FormatProperties2_base& FormatProperties2_base::operator<<(FormatProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

FormatProperties2::FormatProperties2(
VkFormatProperties   formatProperties_)
:formatProperties(formatProperties_){
}

ImageFormatProperties2_base::ImageFormatProperties2_base():pNext(nullptr){};
ImageFormatProperties2_base::~ImageFormatProperties2_base(){};

ImageFormatProperties2_base& ImageFormatProperties2_base::operator<<(ImageFormatProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageFormatProperties2::ImageFormatProperties2(
VkImageFormatProperties   imageFormatProperties_)
:imageFormatProperties(imageFormatProperties_){
}

PhysicalDeviceImageFormatInfo2_base::PhysicalDeviceImageFormatInfo2_base():pNext(nullptr){};
PhysicalDeviceImageFormatInfo2_base::~PhysicalDeviceImageFormatInfo2_base(){};

PhysicalDeviceImageFormatInfo2_base& PhysicalDeviceImageFormatInfo2_base::operator<<(PhysicalDeviceImageFormatInfo2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PhysicalDeviceImageFormatInfo2::PhysicalDeviceImageFormatInfo2(
VkFormat   format_,
VkImageType   type_,
VkImageTiling   tiling_,
VkImageUsageFlags   usage_,
VkImageCreateFlags   flags_)
:format(format_)
,type(type_)
,tiling(tiling_)
,usage(usage_)
,flags(flags_){
}

QueueFamilyProperties2_base::QueueFamilyProperties2_base():pNext(nullptr){};
QueueFamilyProperties2_base::~QueueFamilyProperties2_base(){};

QueueFamilyProperties2_base& QueueFamilyProperties2_base::operator<<(QueueFamilyProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

QueueFamilyProperties2::QueueFamilyProperties2(
VkQueueFamilyProperties   queueFamilyProperties_)
:queueFamilyProperties(queueFamilyProperties_){
}

BindBufferMemoryInfo_base::BindBufferMemoryInfo_base():pNext(nullptr){};
BindBufferMemoryInfo_base::~BindBufferMemoryInfo_base(){};

BindBufferMemoryInfo_base& BindBufferMemoryInfo_base::operator<<(BindBufferMemoryInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BindBufferMemoryInfo::BindBufferMemoryInfo(
VkBuffer   buffer_,
VkDeviceMemory   memory_,
VkDeviceSize   memoryOffset_)
:buffer(buffer_)
,memory(memory_)
,memoryOffset(memoryOffset_){
}

BindImageMemoryInfo_base::BindImageMemoryInfo_base():pNext(nullptr){};
BindImageMemoryInfo_base::~BindImageMemoryInfo_base(){};

BindImageMemoryInfo_base& BindImageMemoryInfo_base::operator<<(BindImageMemoryInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BindImageMemoryInfo::BindImageMemoryInfo(
VkImage   image_,
VkDeviceMemory   memory_,
VkDeviceSize   memoryOffset_)
:image(image_)
,memory(memory_)
,memoryOffset(memoryOffset_){
}

SurfaceCapabilities2KHR_base::SurfaceCapabilities2KHR_base():pNext(nullptr){};
SurfaceCapabilities2KHR_base::~SurfaceCapabilities2KHR_base(){};

SurfaceCapabilities2KHR_base& SurfaceCapabilities2KHR_base::operator<<(SurfaceCapabilities2KHR_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SurfaceCapabilities2KHR::SurfaceCapabilities2KHR(
VkSurfaceCapabilitiesKHR   surfaceCapabilities_)
:surfaceCapabilities(surfaceCapabilities_){
}

ImageMemoryRequirementsInfo2_base::ImageMemoryRequirementsInfo2_base():pNext(nullptr){};
ImageMemoryRequirementsInfo2_base::~ImageMemoryRequirementsInfo2_base(){};

ImageMemoryRequirementsInfo2_base& ImageMemoryRequirementsInfo2_base::operator<<(ImageMemoryRequirementsInfo2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageMemoryRequirementsInfo2::ImageMemoryRequirementsInfo2(
VkImage   image_)
:image(image_){
}

MemoryRequirements2_base::MemoryRequirements2_base():pNext(nullptr){};
MemoryRequirements2_base::~MemoryRequirements2_base(){};

MemoryRequirements2_base& MemoryRequirements2_base::operator<<(MemoryRequirements2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

MemoryRequirements2::MemoryRequirements2(
VkMemoryRequirements   memoryRequirements_)
:memoryRequirements(memoryRequirements_){
}

SamplerYcbcrConversionCreateInfo_base::SamplerYcbcrConversionCreateInfo_base():pNext(nullptr){};
SamplerYcbcrConversionCreateInfo_base::~SamplerYcbcrConversionCreateInfo_base(){};

SamplerYcbcrConversionCreateInfo_base& SamplerYcbcrConversionCreateInfo_base::operator<<(SamplerYcbcrConversionCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SamplerYcbcrConversionCreateInfo::SamplerYcbcrConversionCreateInfo(
VkFormat   format_,
VkSamplerYcbcrModelConversion   ycbcrModel_,
VkSamplerYcbcrRange   ycbcrRange_,
VkComponentMapping   components_,
VkChromaLocation   xChromaOffset_,
VkChromaLocation   yChromaOffset_,
VkFilter   chromaFilter_,
VkBool32   forceExplicitReconstruction_)
:format(format_)
,ycbcrModel(ycbcrModel_)
,ycbcrRange(ycbcrRange_)
,components(components_)
,xChromaOffset(xChromaOffset_)
,yChromaOffset(yChromaOffset_)
,chromaFilter(chromaFilter_)
,forceExplicitReconstruction(forceExplicitReconstruction_){
}

DescriptorSetLayoutSupport_base::DescriptorSetLayoutSupport_base():pNext(nullptr){};
DescriptorSetLayoutSupport_base::~DescriptorSetLayoutSupport_base(){};

DescriptorSetLayoutSupport_base& DescriptorSetLayoutSupport_base::operator<<(DescriptorSetLayoutSupport_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorSetLayoutSupport::DescriptorSetLayoutSupport(
VkBool32   supported_)
:supported(supported_){
}

AndroidHardwareBufferPropertiesANDROID_base::AndroidHardwareBufferPropertiesANDROID_base():pNext(nullptr){};
AndroidHardwareBufferPropertiesANDROID_base::~AndroidHardwareBufferPropertiesANDROID_base(){};

AndroidHardwareBufferPropertiesANDROID_base& AndroidHardwareBufferPropertiesANDROID_base::operator<<(AndroidHardwareBufferPropertiesANDROID_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

AndroidHardwareBufferPropertiesANDROID::AndroidHardwareBufferPropertiesANDROID(
VkDeviceSize   allocationSize_,
uint32_t   memoryTypeBits_)
:allocationSize(allocationSize_)
,memoryTypeBits(memoryTypeBits_){
}


}}

