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
struct PhysicalDeviceProperties_base{
protected:
VkStructureType sType;
const void* pNext;
PhysicalDeviceProperties_base();
~PhysicalDeviceProperties_base();
public:
PhysicalDeviceProperties_base& operator<<(PhysicalDeviceProperties_base& base_);
};

struct PhysicalDeviceProperties:public PhysicalDeviceProperties_base{
uint32_t  apiVersion;
uint32_t  driverVersion;
uint32_t  vendorID;
uint32_t  deviceID;
VkPhysicalDeviceType  deviceType;
char  deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
uint8_t  pipelineCacheUUID[VK_UUID_SIZE];
VkPhysicalDeviceLimits  limits;
VkPhysicalDeviceSparseProperties  sparseProperties;
PhysicalDeviceProperties(
uint32_t   apiVersion_,
uint32_t   driverVersion_,
uint32_t   vendorID_,
uint32_t   deviceID_,
VkPhysicalDeviceType   deviceType_,
Array_value<char  >deviceName_,
Array_value<uint8_t  >pipelineCacheUUID_,
VkPhysicalDeviceLimits   limits_,
VkPhysicalDeviceSparseProperties   sparseProperties_);
};

struct DeviceQueueCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
DeviceQueueCreateInfo_base();
~DeviceQueueCreateInfo_base();
public:
DeviceQueueCreateInfo_base& operator<<(DeviceQueueCreateInfo_base& base_);
};

struct DeviceQueueCreateInfo:public DeviceQueueCreateInfo_base{
VkDeviceQueueCreateFlags  flags;
uint32_t  queueFamilyIndex;
uint32_t  queueCount;
const float *    pQueuePriorities;
DeviceQueueCreateInfo(
VkDeviceQueueCreateFlags   flags_,
uint32_t   queueFamilyIndex_,
uint32_t   queueCount_,
const float *     pQueuePriorities_);
};

struct DeviceCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
DeviceCreateInfo_base();
~DeviceCreateInfo_base();
public:
DeviceCreateInfo_base& operator<<(DeviceCreateInfo_base& base_);
};

struct DeviceCreateInfo:public DeviceCreateInfo_base{
VkDeviceCreateFlags  flags;
uint32_t  queueCreateInfoCount;
const VkDeviceQueueCreateInfo * pQueueCreateInfos;
uint32_t  enabledLayerCount;
const char * const*      ppEnabledLayerNames;
uint32_t  enabledExtensionCount;
const char * const*      ppEnabledExtensionNames;
const VkPhysicalDeviceFeatures * pEnabledFeatures;
DeviceCreateInfo(
VkDeviceCreateFlags   flags_,
uint32_t   queueCreateInfoCount_,
const VkDeviceQueueCreateInfo *  pQueueCreateInfos_,
uint32_t   enabledLayerCount_,
const char * const*       ppEnabledLayerNames_,
uint32_t   enabledExtensionCount_,
const char * const*       ppEnabledExtensionNames_,
const VkPhysicalDeviceFeatures *  pEnabledFeatures_);
};

struct InstanceCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
InstanceCreateInfo_base();
~InstanceCreateInfo_base();
public:
InstanceCreateInfo_base& operator<<(InstanceCreateInfo_base& base_);
};

struct InstanceCreateInfo:public InstanceCreateInfo_base{
VkInstanceCreateFlags  flags;
const VkApplicationInfo * pApplicationInfo;
uint32_t  enabledLayerCount;
const char * const*      ppEnabledLayerNames;
uint32_t  enabledExtensionCount;
const char * const*      ppEnabledExtensionNames;
InstanceCreateInfo(
VkInstanceCreateFlags   flags_,
const VkApplicationInfo *  pApplicationInfo_,
uint32_t   enabledLayerCount_,
const char * const*       ppEnabledLayerNames_,
uint32_t   enabledExtensionCount_,
const char * const*       ppEnabledExtensionNames_);
};

struct MemoryAllocateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
MemoryAllocateInfo_base();
~MemoryAllocateInfo_base();
public:
MemoryAllocateInfo_base& operator<<(MemoryAllocateInfo_base& base_);
};

struct MemoryAllocateInfo:public MemoryAllocateInfo_base{
VkDeviceSize  allocationSize;
uint32_t  memoryTypeIndex;
MemoryAllocateInfo(
VkDeviceSize   allocationSize_,
uint32_t   memoryTypeIndex_);
};

struct WriteDescriptorSet_base{
protected:
VkStructureType sType;
const void* pNext;
WriteDescriptorSet_base();
~WriteDescriptorSet_base();
public:
WriteDescriptorSet_base& operator<<(WriteDescriptorSet_base& base_);
};

struct WriteDescriptorSet:public WriteDescriptorSet_base{
VkDescriptorSet  dstSet;
uint32_t  dstBinding;
uint32_t  dstArrayElement;
uint32_t  descriptorCount;
VkDescriptorType  descriptorType;
const VkDescriptorImageInfo * pImageInfo;
const VkDescriptorBufferInfo * pBufferInfo;
const VkBufferView *    pTexelBufferView;
WriteDescriptorSet(
VkDescriptorSet   dstSet_,
uint32_t   dstBinding_,
uint32_t   dstArrayElement_,
uint32_t   descriptorCount_,
VkDescriptorType   descriptorType_,
const VkDescriptorImageInfo *  pImageInfo_,
const VkDescriptorBufferInfo *  pBufferInfo_,
const VkBufferView *     pTexelBufferView_);
};

struct BufferCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
BufferCreateInfo_base();
~BufferCreateInfo_base();
public:
BufferCreateInfo_base& operator<<(BufferCreateInfo_base& base_);
};

struct BufferCreateInfo:public BufferCreateInfo_base{
VkBufferCreateFlags  flags;
VkDeviceSize  size;
VkBufferUsageFlags  usage;
VkSharingMode  sharingMode;
uint32_t  queueFamilyIndexCount;
const uint32_t *        pQueueFamilyIndices;
BufferCreateInfo(
VkBufferCreateFlags   flags_,
VkDeviceSize   size_,
VkBufferUsageFlags   usage_,
VkSharingMode   sharingMode_,
uint32_t   queueFamilyIndexCount_,
const uint32_t *         pQueueFamilyIndices_);
};

struct ImageMemoryBarrier_base{
protected:
VkStructureType sType;
const void* pNext;
ImageMemoryBarrier_base();
~ImageMemoryBarrier_base();
public:
ImageMemoryBarrier_base& operator<<(ImageMemoryBarrier_base& base_);
};

struct ImageMemoryBarrier:public ImageMemoryBarrier_base{
VkAccessFlags  srcAccessMask;
VkAccessFlags  dstAccessMask;
VkImageLayout  oldLayout;
VkImageLayout  newLayout;
uint32_t  srcQueueFamilyIndex;
uint32_t  dstQueueFamilyIndex;
VkImage  image;
VkImageSubresourceRange  subresourceRange;
ImageMemoryBarrier(
VkAccessFlags   srcAccessMask_,
VkAccessFlags   dstAccessMask_,
VkImageLayout   oldLayout_,
VkImageLayout   newLayout_,
uint32_t   srcQueueFamilyIndex_,
uint32_t   dstQueueFamilyIndex_,
VkImage   image_,
VkImageSubresourceRange   subresourceRange_);
};

struct ImageCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
ImageCreateInfo_base();
~ImageCreateInfo_base();
public:
ImageCreateInfo_base& operator<<(ImageCreateInfo_base& base_);
};

struct ImageCreateInfo:public ImageCreateInfo_base{
VkImageCreateFlags  flags;
VkImageType  imageType;
VkFormat  format;
VkExtent3D  extent;
uint32_t  mipLevels;
uint32_t  arrayLayers;
VkSampleCountFlagBits  samples;
VkImageTiling  tiling;
VkImageUsageFlags  usage;
VkSharingMode  sharingMode;
uint32_t  queueFamilyIndexCount;
const uint32_t *        pQueueFamilyIndices;
VkImageLayout  initialLayout;
ImageCreateInfo(
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
VkImageLayout   initialLayout_);
};

struct ImageViewCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
ImageViewCreateInfo_base();
~ImageViewCreateInfo_base();
public:
ImageViewCreateInfo_base& operator<<(ImageViewCreateInfo_base& base_);
};

struct ImageViewCreateInfo:public ImageViewCreateInfo_base{
VkImageViewCreateFlags  flags;
VkImage  image;
VkImageViewType  viewType;
VkFormat  format;
VkComponentMapping  components;
VkImageSubresourceRange  subresourceRange;
ImageViewCreateInfo(
VkImageViewCreateFlags   flags_,
VkImage   image_,
VkImageViewType   viewType_,
VkFormat   format_,
VkComponentMapping   components_,
VkImageSubresourceRange   subresourceRange_);
};

struct BindSparseInfo_base{
protected:
VkStructureType sType;
const void* pNext;
BindSparseInfo_base();
~BindSparseInfo_base();
public:
BindSparseInfo_base& operator<<(BindSparseInfo_base& base_);
};

struct BindSparseInfo:public BindSparseInfo_base{
uint32_t  waitSemaphoreCount;
const VkSemaphore *     pWaitSemaphores;
uint32_t  bufferBindCount;
const VkSparseBufferMemoryBindInfo * pBufferBinds;
uint32_t  imageOpaqueBindCount;
const VkSparseImageOpaqueMemoryBindInfo * pImageOpaqueBinds;
uint32_t  imageBindCount;
const VkSparseImageMemoryBindInfo * pImageBinds;
uint32_t  signalSemaphoreCount;
const VkSemaphore *     pSignalSemaphores;
BindSparseInfo(
uint32_t   waitSemaphoreCount_,
const VkSemaphore *      pWaitSemaphores_,
uint32_t   bufferBindCount_,
const VkSparseBufferMemoryBindInfo *  pBufferBinds_,
uint32_t   imageOpaqueBindCount_,
const VkSparseImageOpaqueMemoryBindInfo *  pImageOpaqueBinds_,
uint32_t   imageBindCount_,
const VkSparseImageMemoryBindInfo *  pImageBinds_,
uint32_t   signalSemaphoreCount_,
const VkSemaphore *      pSignalSemaphores_);
};

struct ShaderModuleCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
ShaderModuleCreateInfo_base();
~ShaderModuleCreateInfo_base();
public:
ShaderModuleCreateInfo_base& operator<<(ShaderModuleCreateInfo_base& base_);
};

struct ShaderModuleCreateInfo:public ShaderModuleCreateInfo_base{
VkShaderModuleCreateFlags  flags;
size_t  codeSize;
const uint32_t *            pCode;
ShaderModuleCreateInfo(
VkShaderModuleCreateFlags   flags_,
size_t   codeSize_,
const uint32_t *             pCode_);
};

struct DescriptorSetLayoutCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
DescriptorSetLayoutCreateInfo_base();
~DescriptorSetLayoutCreateInfo_base();
public:
DescriptorSetLayoutCreateInfo_base& operator<<(DescriptorSetLayoutCreateInfo_base& base_);
};

struct DescriptorSetLayoutCreateInfo:public DescriptorSetLayoutCreateInfo_base{
VkDescriptorSetLayoutCreateFlags  flags;
uint32_t  bindingCount;
const VkDescriptorSetLayoutBinding * pBindings;
DescriptorSetLayoutCreateInfo(
VkDescriptorSetLayoutCreateFlags   flags_,
uint32_t   bindingCount_,
const VkDescriptorSetLayoutBinding *  pBindings_);
};

struct DescriptorPoolCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
DescriptorPoolCreateInfo_base();
~DescriptorPoolCreateInfo_base();
public:
DescriptorPoolCreateInfo_base& operator<<(DescriptorPoolCreateInfo_base& base_);
};

struct DescriptorPoolCreateInfo:public DescriptorPoolCreateInfo_base{
VkDescriptorPoolCreateFlags  flags;
uint32_t  maxSets;
uint32_t  poolSizeCount;
const VkDescriptorPoolSize * pPoolSizes;
DescriptorPoolCreateInfo(
VkDescriptorPoolCreateFlags   flags_,
uint32_t   maxSets_,
uint32_t   poolSizeCount_,
const VkDescriptorPoolSize *  pPoolSizes_);
};

struct DescriptorSetAllocateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
DescriptorSetAllocateInfo_base();
~DescriptorSetAllocateInfo_base();
public:
DescriptorSetAllocateInfo_base& operator<<(DescriptorSetAllocateInfo_base& base_);
};

struct DescriptorSetAllocateInfo:public DescriptorSetAllocateInfo_base{
VkDescriptorPool  descriptorPool;
uint32_t  descriptorSetCount;
const VkDescriptorSetLayout * pSetLayouts;
DescriptorSetAllocateInfo(
VkDescriptorPool   descriptorPool_,
uint32_t   descriptorSetCount_,
const VkDescriptorSetLayout *  pSetLayouts_);
};

struct PipelineVertexInputStateCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
PipelineVertexInputStateCreateInfo_base();
~PipelineVertexInputStateCreateInfo_base();
public:
PipelineVertexInputStateCreateInfo_base& operator<<(PipelineVertexInputStateCreateInfo_base& base_);
};

struct PipelineVertexInputStateCreateInfo:public PipelineVertexInputStateCreateInfo_base{
VkPipelineVertexInputStateCreateFlags  flags;
uint32_t  vertexBindingDescriptionCount;
const VkVertexInputBindingDescription * pVertexBindingDescriptions;
uint32_t  vertexAttributeDescriptionCount;
const VkVertexInputAttributeDescription * pVertexAttributeDescriptions;
PipelineVertexInputStateCreateInfo(
VkPipelineVertexInputStateCreateFlags   flags_,
uint32_t   vertexBindingDescriptionCount_,
const VkVertexInputBindingDescription *  pVertexBindingDescriptions_,
uint32_t   vertexAttributeDescriptionCount_,
const VkVertexInputAttributeDescription *  pVertexAttributeDescriptions_);
};

struct PipelineTessellationStateCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
PipelineTessellationStateCreateInfo_base();
~PipelineTessellationStateCreateInfo_base();
public:
PipelineTessellationStateCreateInfo_base& operator<<(PipelineTessellationStateCreateInfo_base& base_);
};

struct PipelineTessellationStateCreateInfo:public PipelineTessellationStateCreateInfo_base{
VkPipelineTessellationStateCreateFlags  flags;
uint32_t  patchControlPoints;
PipelineTessellationStateCreateInfo(
VkPipelineTessellationStateCreateFlags   flags_,
uint32_t   patchControlPoints_);
};

struct PipelineViewportStateCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
PipelineViewportStateCreateInfo_base();
~PipelineViewportStateCreateInfo_base();
public:
PipelineViewportStateCreateInfo_base& operator<<(PipelineViewportStateCreateInfo_base& base_);
};

struct PipelineViewportStateCreateInfo:public PipelineViewportStateCreateInfo_base{
VkPipelineViewportStateCreateFlags  flags;
uint32_t  viewportCount;
const VkViewport *      pViewports;
uint32_t  scissorCount;
const VkRect2D *        pScissors;
PipelineViewportStateCreateInfo(
VkPipelineViewportStateCreateFlags   flags_,
uint32_t   viewportCount_,
const VkViewport *       pViewports_,
uint32_t   scissorCount_,
const VkRect2D *         pScissors_);
};

struct PipelineRasterizationStateCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
PipelineRasterizationStateCreateInfo_base();
~PipelineRasterizationStateCreateInfo_base();
public:
PipelineRasterizationStateCreateInfo_base& operator<<(PipelineRasterizationStateCreateInfo_base& base_);
};

struct PipelineRasterizationStateCreateInfo:public PipelineRasterizationStateCreateInfo_base{
VkPipelineRasterizationStateCreateFlags  flags;
VkBool32  depthClampEnable;
VkBool32  rasterizerDiscardEnable;
VkPolygonMode  polygonMode;
VkCullModeFlags  cullMode;
VkFrontFace  frontFace;
VkBool32  depthBiasEnable;
float  depthBiasConstantFactor;
float  depthBiasClamp;
float  depthBiasSlopeFactor;
float  lineWidth;
PipelineRasterizationStateCreateInfo(
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
float   lineWidth_);
};

struct PipelineMultisampleStateCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
PipelineMultisampleStateCreateInfo_base();
~PipelineMultisampleStateCreateInfo_base();
public:
PipelineMultisampleStateCreateInfo_base& operator<<(PipelineMultisampleStateCreateInfo_base& base_);
};

struct PipelineMultisampleStateCreateInfo:public PipelineMultisampleStateCreateInfo_base{
VkPipelineMultisampleStateCreateFlags  flags;
VkSampleCountFlagBits  rasterizationSamples;
VkBool32  sampleShadingEnable;
float  minSampleShading;
const VkSampleMask *    pSampleMask;
VkBool32  alphaToCoverageEnable;
VkBool32  alphaToOneEnable;
PipelineMultisampleStateCreateInfo(
VkPipelineMultisampleStateCreateFlags   flags_,
VkSampleCountFlagBits   rasterizationSamples_,
VkBool32   sampleShadingEnable_,
float   minSampleShading_,
const VkSampleMask *     pSampleMask_,
VkBool32   alphaToCoverageEnable_,
VkBool32   alphaToOneEnable_);
};

struct PipelineColorBlendStateCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
PipelineColorBlendStateCreateInfo_base();
~PipelineColorBlendStateCreateInfo_base();
public:
PipelineColorBlendStateCreateInfo_base& operator<<(PipelineColorBlendStateCreateInfo_base& base_);
};

struct PipelineColorBlendStateCreateInfo:public PipelineColorBlendStateCreateInfo_base{
VkPipelineColorBlendStateCreateFlags  flags;
VkBool32  logicOpEnable;
VkLogicOp  logicOp;
uint32_t  attachmentCount;
const VkPipelineColorBlendAttachmentState * pAttachments;
float  blendConstants[4];
PipelineColorBlendStateCreateInfo(
VkPipelineColorBlendStateCreateFlags   flags_,
VkBool32   logicOpEnable_,
VkLogicOp   logicOp_,
uint32_t   attachmentCount_,
const VkPipelineColorBlendAttachmentState *  pAttachments_,
Array_value<float  >blendConstants_);
};

struct GraphicsPipelineCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
GraphicsPipelineCreateInfo_base();
~GraphicsPipelineCreateInfo_base();
public:
GraphicsPipelineCreateInfo_base& operator<<(GraphicsPipelineCreateInfo_base& base_);
};

struct GraphicsPipelineCreateInfo:public GraphicsPipelineCreateInfo_base{
VkPipelineCreateFlags  flags;
uint32_t  stageCount;
const VkPipelineShaderStageCreateInfo * pStages;
const VkPipelineVertexInputStateCreateInfo * pVertexInputState;
const VkPipelineInputAssemblyStateCreateInfo * pInputAssemblyState;
const VkPipelineTessellationStateCreateInfo * pTessellationState;
const VkPipelineViewportStateCreateInfo * pViewportState;
const VkPipelineRasterizationStateCreateInfo * pRasterizationState;
const VkPipelineMultisampleStateCreateInfo * pMultisampleState;
const VkPipelineDepthStencilStateCreateInfo * pDepthStencilState;
const VkPipelineColorBlendStateCreateInfo * pColorBlendState;
const VkPipelineDynamicStateCreateInfo * pDynamicState;
VkPipelineLayout  layout;
VkRenderPass  renderPass;
uint32_t  subpass;
VkPipeline  basePipelineHandle;
int32_t  basePipelineIndex;
GraphicsPipelineCreateInfo(
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
int32_t   basePipelineIndex_);
};

struct SamplerCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
SamplerCreateInfo_base();
~SamplerCreateInfo_base();
public:
SamplerCreateInfo_base& operator<<(SamplerCreateInfo_base& base_);
};

struct SamplerCreateInfo:public SamplerCreateInfo_base{
VkSamplerCreateFlags  flags;
VkFilter  magFilter;
VkFilter  minFilter;
VkSamplerMipmapMode  mipmapMode;
VkSamplerAddressMode  addressModeU;
VkSamplerAddressMode  addressModeV;
VkSamplerAddressMode  addressModeW;
float  mipLodBias;
VkBool32  anisotropyEnable;
float  maxAnisotropy;
VkBool32  compareEnable;
VkCompareOp  compareOp;
float  minLod;
float  maxLod;
VkBorderColor  borderColor;
VkBool32  unnormalizedCoordinates;
SamplerCreateInfo(
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
VkBool32   unnormalizedCoordinates_);
};

struct CommandBufferInheritanceInfo_base{
protected:
VkStructureType sType;
const void* pNext;
CommandBufferInheritanceInfo_base();
~CommandBufferInheritanceInfo_base();
public:
CommandBufferInheritanceInfo_base& operator<<(CommandBufferInheritanceInfo_base& base_);
};

struct CommandBufferInheritanceInfo:public CommandBufferInheritanceInfo_base{
VkRenderPass  renderPass;
uint32_t  subpass;
VkFramebuffer  framebuffer;
VkBool32  occlusionQueryEnable;
VkQueryControlFlags  queryFlags;
VkQueryPipelineStatisticFlags  pipelineStatistics;
CommandBufferInheritanceInfo(
VkRenderPass   renderPass_,
uint32_t   subpass_,
VkFramebuffer   framebuffer_,
VkBool32   occlusionQueryEnable_,
VkQueryControlFlags   queryFlags_,
VkQueryPipelineStatisticFlags   pipelineStatistics_);
};

struct CommandBufferBeginInfo_base{
protected:
VkStructureType sType;
const void* pNext;
CommandBufferBeginInfo_base();
~CommandBufferBeginInfo_base();
public:
CommandBufferBeginInfo_base& operator<<(CommandBufferBeginInfo_base& base_);
};

struct CommandBufferBeginInfo:public CommandBufferBeginInfo_base{
VkCommandBufferUsageFlags  flags;
const VkCommandBufferInheritanceInfo *       pInheritanceInfo;
CommandBufferBeginInfo(
VkCommandBufferUsageFlags   flags_,
const VkCommandBufferInheritanceInfo *        pInheritanceInfo_);
};

struct RenderPassBeginInfo_base{
protected:
VkStructureType sType;
const void* pNext;
RenderPassBeginInfo_base();
~RenderPassBeginInfo_base();
public:
RenderPassBeginInfo_base& operator<<(RenderPassBeginInfo_base& base_);
};

struct RenderPassBeginInfo:public RenderPassBeginInfo_base{
VkRenderPass  renderPass;
VkFramebuffer  framebuffer;
VkRect2D  renderArea;
uint32_t  clearValueCount;
const VkClearValue *    pClearValues;
RenderPassBeginInfo(
VkRenderPass   renderPass_,
VkFramebuffer   framebuffer_,
VkRect2D   renderArea_,
uint32_t   clearValueCount_,
const VkClearValue *     pClearValues_);
};

struct RenderPassCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
RenderPassCreateInfo_base();
~RenderPassCreateInfo_base();
public:
RenderPassCreateInfo_base& operator<<(RenderPassCreateInfo_base& base_);
};

struct RenderPassCreateInfo:public RenderPassCreateInfo_base{
VkRenderPassCreateFlags  flags;
uint32_t  attachmentCount;
const VkAttachmentDescription * pAttachments;
uint32_t  subpassCount;
const VkSubpassDescription * pSubpasses;
uint32_t  dependencyCount;
const VkSubpassDependency * pDependencies;
RenderPassCreateInfo(
VkRenderPassCreateFlags   flags_,
uint32_t   attachmentCount_,
const VkAttachmentDescription *  pAttachments_,
uint32_t   subpassCount_,
const VkSubpassDescription *  pSubpasses_,
uint32_t   dependencyCount_,
const VkSubpassDependency *  pDependencies_);
};

struct FenceCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
FenceCreateInfo_base();
~FenceCreateInfo_base();
public:
FenceCreateInfo_base& operator<<(FenceCreateInfo_base& base_);
};

struct FenceCreateInfo:public FenceCreateInfo_base{
VkFenceCreateFlags  flags;
FenceCreateInfo(
VkFenceCreateFlags   flags_);
};

struct SemaphoreCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
SemaphoreCreateInfo_base();
~SemaphoreCreateInfo_base();
public:
SemaphoreCreateInfo_base& operator<<(SemaphoreCreateInfo_base& base_);
};

struct SemaphoreCreateInfo:public SemaphoreCreateInfo_base{
VkSemaphoreCreateFlags  flags;
SemaphoreCreateInfo(
VkSemaphoreCreateFlags   flags_);
};

struct SubmitInfo_base{
protected:
VkStructureType sType;
const void* pNext;
SubmitInfo_base();
~SubmitInfo_base();
public:
SubmitInfo_base& operator<<(SubmitInfo_base& base_);
};

struct SubmitInfo:public SubmitInfo_base{
uint32_t  waitSemaphoreCount;
const VkSemaphore *     pWaitSemaphores;
const VkPipelineStageFlags *           pWaitDstStageMask;
uint32_t  commandBufferCount;
const VkCommandBuffer *     pCommandBuffers;
uint32_t  signalSemaphoreCount;
const VkSemaphore *     pSignalSemaphores;
SubmitInfo(
uint32_t   waitSemaphoreCount_,
const VkSemaphore *      pWaitSemaphores_,
const VkPipelineStageFlags *            pWaitDstStageMask_,
uint32_t   commandBufferCount_,
const VkCommandBuffer *      pCommandBuffers_,
uint32_t   signalSemaphoreCount_,
const VkSemaphore *      pSignalSemaphores_);
};

struct SwapchainCreateInfoKHR_base{
protected:
VkStructureType sType;
const void* pNext;
SwapchainCreateInfoKHR_base();
~SwapchainCreateInfoKHR_base();
public:
SwapchainCreateInfoKHR_base& operator<<(SwapchainCreateInfoKHR_base& base_);
};

struct SwapchainCreateInfoKHR:public SwapchainCreateInfoKHR_base{
VkSwapchainCreateFlagsKHR  flags;
VkSurfaceKHR  surface;
uint32_t  minImageCount;
VkFormat  imageFormat;
VkColorSpaceKHR  imageColorSpace;
VkExtent2D  imageExtent;
uint32_t  imageArrayLayers;
VkImageUsageFlags  imageUsage;
VkSharingMode  imageSharingMode;
uint32_t  queueFamilyIndexCount;
const uint32_t *                  pQueueFamilyIndices;
VkSurfaceTransformFlagBitsKHR  preTransform;
VkCompositeAlphaFlagBitsKHR  compositeAlpha;
VkPresentModeKHR  presentMode;
VkBool32  clipped;
VkSwapchainKHR  oldSwapchain;
SwapchainCreateInfoKHR(
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
VkSwapchainKHR   oldSwapchain_);
};

struct PresentInfoKHR_base{
protected:
VkStructureType sType;
const void* pNext;
PresentInfoKHR_base();
~PresentInfoKHR_base();
public:
PresentInfoKHR_base& operator<<(PresentInfoKHR_base& base_);
};

struct PresentInfoKHR:public PresentInfoKHR_base{
uint32_t  waitSemaphoreCount;
const VkSemaphore * pWaitSemaphores;
uint32_t  swapchainCount;
const VkSwapchainKHR * pSwapchains;
const uint32_t * pImageIndices;
VkResult * pResults;
PresentInfoKHR(
uint32_t   waitSemaphoreCount_,
const VkSemaphore *  pWaitSemaphores_,
uint32_t   swapchainCount_,
const VkSwapchainKHR *  pSwapchains_,
const uint32_t *  pImageIndices_,
VkResult *  pResults_);
};

struct PhysicalDeviceFeatures2_base{
protected:
VkStructureType sType;
const void* pNext;
PhysicalDeviceFeatures2_base();
~PhysicalDeviceFeatures2_base();
public:
PhysicalDeviceFeatures2_base& operator<<(PhysicalDeviceFeatures2_base& base_);
};

struct PhysicalDeviceFeatures2:public PhysicalDeviceFeatures2_base{
VkPhysicalDeviceFeatures  features;
PhysicalDeviceFeatures2(
VkPhysicalDeviceFeatures   features_);
};

struct PhysicalDeviceProperties2_base{
protected:
VkStructureType sType;
const void* pNext;
PhysicalDeviceProperties2_base();
~PhysicalDeviceProperties2_base();
public:
PhysicalDeviceProperties2_base& operator<<(PhysicalDeviceProperties2_base& base_);
};

struct PhysicalDeviceProperties2:public PhysicalDeviceProperties2_base{
VkPhysicalDeviceProperties  properties;
PhysicalDeviceProperties2(
VkPhysicalDeviceProperties   properties_);
};

struct FormatProperties2_base{
protected:
VkStructureType sType;
const void* pNext;
FormatProperties2_base();
~FormatProperties2_base();
public:
FormatProperties2_base& operator<<(FormatProperties2_base& base_);
};

struct FormatProperties2:public FormatProperties2_base{
VkFormatProperties  formatProperties;
FormatProperties2(
VkFormatProperties   formatProperties_);
};

struct ImageFormatProperties2_base{
protected:
VkStructureType sType;
const void* pNext;
ImageFormatProperties2_base();
~ImageFormatProperties2_base();
public:
ImageFormatProperties2_base& operator<<(ImageFormatProperties2_base& base_);
};

struct ImageFormatProperties2:public ImageFormatProperties2_base{
VkImageFormatProperties  imageFormatProperties;
ImageFormatProperties2(
VkImageFormatProperties   imageFormatProperties_);
};

struct PhysicalDeviceImageFormatInfo2_base{
protected:
VkStructureType sType;
const void* pNext;
PhysicalDeviceImageFormatInfo2_base();
~PhysicalDeviceImageFormatInfo2_base();
public:
PhysicalDeviceImageFormatInfo2_base& operator<<(PhysicalDeviceImageFormatInfo2_base& base_);
};

struct PhysicalDeviceImageFormatInfo2:public PhysicalDeviceImageFormatInfo2_base{
VkFormat  format;
VkImageType  type;
VkImageTiling  tiling;
VkImageUsageFlags  usage;
VkImageCreateFlags  flags;
PhysicalDeviceImageFormatInfo2(
VkFormat   format_,
VkImageType   type_,
VkImageTiling   tiling_,
VkImageUsageFlags   usage_,
VkImageCreateFlags   flags_);
};

struct QueueFamilyProperties2_base{
protected:
VkStructureType sType;
const void* pNext;
QueueFamilyProperties2_base();
~QueueFamilyProperties2_base();
public:
QueueFamilyProperties2_base& operator<<(QueueFamilyProperties2_base& base_);
};

struct QueueFamilyProperties2:public QueueFamilyProperties2_base{
VkQueueFamilyProperties  queueFamilyProperties;
QueueFamilyProperties2(
VkQueueFamilyProperties   queueFamilyProperties_);
};

struct BindBufferMemoryInfo_base{
protected:
VkStructureType sType;
const void* pNext;
BindBufferMemoryInfo_base();
~BindBufferMemoryInfo_base();
public:
BindBufferMemoryInfo_base& operator<<(BindBufferMemoryInfo_base& base_);
};

struct BindBufferMemoryInfo:public BindBufferMemoryInfo_base{
VkBuffer  buffer;
VkDeviceMemory  memory;
VkDeviceSize  memoryOffset;
BindBufferMemoryInfo(
VkBuffer   buffer_,
VkDeviceMemory   memory_,
VkDeviceSize   memoryOffset_);
};

struct BindImageMemoryInfo_base{
protected:
VkStructureType sType;
const void* pNext;
BindImageMemoryInfo_base();
~BindImageMemoryInfo_base();
public:
BindImageMemoryInfo_base& operator<<(BindImageMemoryInfo_base& base_);
};

struct BindImageMemoryInfo:public BindImageMemoryInfo_base{
VkImage  image;
VkDeviceMemory  memory;
VkDeviceSize  memoryOffset;
BindImageMemoryInfo(
VkImage   image_,
VkDeviceMemory   memory_,
VkDeviceSize   memoryOffset_);
};

struct SurfaceCapabilities2KHR_base{
protected:
VkStructureType sType;
const void* pNext;
SurfaceCapabilities2KHR_base();
~SurfaceCapabilities2KHR_base();
public:
SurfaceCapabilities2KHR_base& operator<<(SurfaceCapabilities2KHR_base& base_);
};

struct SurfaceCapabilities2KHR:public SurfaceCapabilities2KHR_base{
VkSurfaceCapabilitiesKHR  surfaceCapabilities;
SurfaceCapabilities2KHR(
VkSurfaceCapabilitiesKHR   surfaceCapabilities_);
};

struct ImageMemoryRequirementsInfo2_base{
protected:
VkStructureType sType;
const void* pNext;
ImageMemoryRequirementsInfo2_base();
~ImageMemoryRequirementsInfo2_base();
public:
ImageMemoryRequirementsInfo2_base& operator<<(ImageMemoryRequirementsInfo2_base& base_);
};

struct ImageMemoryRequirementsInfo2:public ImageMemoryRequirementsInfo2_base{
VkImage  image;
ImageMemoryRequirementsInfo2(
VkImage   image_);
};

struct MemoryRequirements2_base{
protected:
VkStructureType sType;
const void* pNext;
MemoryRequirements2_base();
~MemoryRequirements2_base();
public:
MemoryRequirements2_base& operator<<(MemoryRequirements2_base& base_);
};

struct MemoryRequirements2:public MemoryRequirements2_base{
VkMemoryRequirements  memoryRequirements;
MemoryRequirements2(
VkMemoryRequirements   memoryRequirements_);
};

struct SamplerYcbcrConversionCreateInfo_base{
protected:
VkStructureType sType;
const void* pNext;
SamplerYcbcrConversionCreateInfo_base();
~SamplerYcbcrConversionCreateInfo_base();
public:
SamplerYcbcrConversionCreateInfo_base& operator<<(SamplerYcbcrConversionCreateInfo_base& base_);
};

struct SamplerYcbcrConversionCreateInfo:public SamplerYcbcrConversionCreateInfo_base{
VkFormat  format;
VkSamplerYcbcrModelConversion  ycbcrModel;
VkSamplerYcbcrRange  ycbcrRange;
VkComponentMapping  components;
VkChromaLocation  xChromaOffset;
VkChromaLocation  yChromaOffset;
VkFilter  chromaFilter;
VkBool32  forceExplicitReconstruction;
SamplerYcbcrConversionCreateInfo(
VkFormat   format_,
VkSamplerYcbcrModelConversion   ycbcrModel_,
VkSamplerYcbcrRange   ycbcrRange_,
VkComponentMapping   components_,
VkChromaLocation   xChromaOffset_,
VkChromaLocation   yChromaOffset_,
VkFilter   chromaFilter_,
VkBool32   forceExplicitReconstruction_);
};

struct DescriptorSetLayoutSupport_base{
protected:
VkStructureType sType;
const void* pNext;
DescriptorSetLayoutSupport_base();
~DescriptorSetLayoutSupport_base();
public:
DescriptorSetLayoutSupport_base& operator<<(DescriptorSetLayoutSupport_base& base_);
};

struct DescriptorSetLayoutSupport:public DescriptorSetLayoutSupport_base{
VkBool32  supported;
DescriptorSetLayoutSupport(
VkBool32   supported_);
};

struct AndroidHardwareBufferPropertiesANDROID_base{
protected:
VkStructureType sType;
const void* pNext;
AndroidHardwareBufferPropertiesANDROID_base();
~AndroidHardwareBufferPropertiesANDROID_base();
public:
AndroidHardwareBufferPropertiesANDROID_base& operator<<(AndroidHardwareBufferPropertiesANDROID_base& base_);
};

struct AndroidHardwareBufferPropertiesANDROID:public AndroidHardwareBufferPropertiesANDROID_base{
VkDeviceSize  allocationSize;
uint32_t  memoryTypeBits;
AndroidHardwareBufferPropertiesANDROID(
VkDeviceSize   allocationSize_,
uint32_t   memoryTypeBits_);
};


}}

