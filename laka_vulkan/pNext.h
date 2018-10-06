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

struct PhysicalDeviceShadingRateImagePropertiesNV:public PhysicalDeviceProperties_base{
VkExtent2D  shadingRateTexelSize;
uint32_t  shadingRatePaletteSize;
uint32_t  shadingRateMaxCoarseSamples;
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

struct DeviceQueueGlobalPriorityCreateInfoEXT:public DeviceQueueCreateInfo_base{
VkQueueGlobalPriorityEXT  globalPriority;
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

struct PhysicalDeviceFeatures2:public DeviceCreateInfo_base{
VkPhysicalDeviceFeatures  features;
};

struct PhysicalDeviceVariablePointerFeatures:public DeviceCreateInfo_base{
VkBool32  variablePointersStorageBuffer;
VkBool32  variablePointers;
};

struct PhysicalDeviceMultiviewFeatures:public DeviceCreateInfo_base{
VkBool32  multiview;
VkBool32  multiviewGeometryShader;
VkBool32  multiviewTessellationShader;
};

struct DeviceGroupDeviceCreateInfo:public DeviceCreateInfo_base{
uint32_t  physicalDeviceCount;
const VkPhysicalDevice *  pPhysicalDevices;
};

struct PhysicalDevice16BitStorageFeatures:public DeviceCreateInfo_base{
VkBool32  storageBuffer16BitAccess;
VkBool32  uniformAndStorageBuffer16BitAccess;
VkBool32  storagePushConstant16;
VkBool32  storageInputOutput16;
};

struct PhysicalDeviceSamplerYcbcrConversionFeatures:public DeviceCreateInfo_base{
VkBool32  samplerYcbcrConversion;
};

struct PhysicalDeviceProtectedMemoryFeatures:public DeviceCreateInfo_base{
VkBool32  protectedMemory;
};

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT:public DeviceCreateInfo_base{
VkBool32  advancedBlendCoherentOperations;
};

struct PhysicalDeviceInlineUniformBlockFeaturesEXT:public DeviceCreateInfo_base{
VkBool32  inlineUniformBlock;
VkBool32  descriptorBindingInlineUniformBlockUpdateAfterBind;
};

struct PhysicalDeviceShaderDrawParameterFeatures:public DeviceCreateInfo_base{
VkBool32  shaderDrawParameters;
};

struct PhysicalDeviceDescriptorIndexingFeaturesEXT:public DeviceCreateInfo_base{
VkBool32  shaderInputAttachmentArrayDynamicIndexing;
VkBool32  shaderUniformTexelBufferArrayDynamicIndexing;
VkBool32  shaderStorageTexelBufferArrayDynamicIndexing;
VkBool32  shaderUniformBufferArrayNonUniformIndexing;
VkBool32  shaderSampledImageArrayNonUniformIndexing;
VkBool32  shaderStorageBufferArrayNonUniformIndexing;
VkBool32  shaderStorageImageArrayNonUniformIndexing;
VkBool32  shaderInputAttachmentArrayNonUniformIndexing;
VkBool32  shaderUniformTexelBufferArrayNonUniformIndexing;
VkBool32  shaderStorageTexelBufferArrayNonUniformIndexing;
VkBool32  descriptorBindingUniformBufferUpdateAfterBind;
VkBool32  descriptorBindingSampledImageUpdateAfterBind;
VkBool32  descriptorBindingStorageImageUpdateAfterBind;
VkBool32  descriptorBindingStorageBufferUpdateAfterBind;
VkBool32  descriptorBindingUniformTexelBufferUpdateAfterBind;
VkBool32  descriptorBindingStorageTexelBufferUpdateAfterBind;
VkBool32  descriptorBindingUpdateUnusedWhilePending;
VkBool32  descriptorBindingPartiallyBound;
VkBool32  descriptorBindingVariableDescriptorCount;
VkBool32  runtimeDescriptorArray;
};

struct PhysicalDevice8BitStorageFeaturesKHR:public DeviceCreateInfo_base{
VkBool32  storageBuffer8BitAccess;
VkBool32  uniformAndStorageBuffer8BitAccess;
VkBool32  storagePushConstant8;
};

struct PhysicalDeviceConditionalRenderingFeaturesEXT:public DeviceCreateInfo_base{
VkBool32  conditionalRendering;
VkBool32  inheritedConditionalRendering;
};

struct PhysicalDeviceVulkanMemoryModelFeaturesKHR:public DeviceCreateInfo_base{
VkBool32  vulkanMemoryModel;
VkBool32  vulkanMemoryModelDeviceScope;
};

struct PhysicalDeviceShaderAtomicInt64FeaturesKHR:public DeviceCreateInfo_base{
VkBool32  shaderBufferInt64Atomics;
VkBool32  shaderSharedInt64Atomics;
};

struct PhysicalDeviceVertexAttributeDivisorFeaturesEXT:public DeviceCreateInfo_base{
VkBool32  vertexAttributeInstanceRateDivisor;
VkBool32  vertexAttributeInstanceRateZeroDivisor;
};

struct PhysicalDeviceASTCDecodeFeaturesEXT:public DeviceCreateInfo_base{
VkBool32  decodeModeSharedExponent;
};

struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV:public DeviceCreateInfo_base{
VkBool32  representativeFragmentTest;
};

struct PhysicalDeviceExclusiveScissorFeaturesNV:public DeviceCreateInfo_base{
VkBool32  exclusiveScissor;
};

struct PhysicalDeviceCornerSampledImageFeaturesNV:public DeviceCreateInfo_base{
VkBool32  cornerSampledImage;
};

struct PhysicalDeviceComputeShaderDerivativesFeaturesNV:public DeviceCreateInfo_base{
VkBool32  computeDerivativeGroupQuads;
VkBool32  computeDerivativeGroupLinear;
};

struct PhysicalDeviceFragmentShaderBarycentricFeaturesNV:public DeviceCreateInfo_base{
VkBool32  fragmentShaderBarycentric;
};

struct PhysicalDeviceShaderImageFootprintFeaturesNV:public DeviceCreateInfo_base{
VkBool32  imageFootprint;
};

struct PhysicalDeviceShadingRateImageFeaturesNV:public DeviceCreateInfo_base{
VkBool32  shadingRateImage;
VkBool32  shadingRateCoarseSampleOrder;
};

struct PhysicalDeviceMeshShaderFeaturesNV:public DeviceCreateInfo_base{
VkBool32  taskShader;
VkBool32  meshShader;
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

struct DebugReportCallbackCreateInfoEXT:public InstanceCreateInfo_base{
VkDebugReportFlagsEXT  flags;
PFN_vkDebugReportCallbackEXT  pfnCallback;
void *            pUserData;
};

struct ValidationFlagsEXT:public InstanceCreateInfo_base{
uint32_t  disabledValidationCheckCount;
const VkValidationCheckEXT * pDisabledValidationChecks;
};

struct DebugUtilsMessengerCreateInfoEXT:public InstanceCreateInfo_base{
VkDebugUtilsMessengerCreateFlagsEXT  flags;
VkDebugUtilsMessageSeverityFlagsEXT  messageSeverity;
VkDebugUtilsMessageTypeFlagsEXT  messageType;
PFN_vkDebugUtilsMessengerCallbackEXT  pfnUserCallback;
void *                                pUserData;
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

struct DedicatedAllocationMemoryAllocateInfoNV:public MemoryAllocateInfo_base{
VkImage  image;
VkBuffer  buffer;
};

struct ExportMemoryAllocateInfoNV:public MemoryAllocateInfo_base{
VkExternalMemoryHandleTypeFlagsNV  handleTypes;
};

struct ImportMemoryWin32HandleInfoNV:public MemoryAllocateInfo_base{
VkExternalMemoryHandleTypeFlagsNV  handleType;
HANDLE  handle;
};

struct ExportMemoryWin32HandleInfoNV:public MemoryAllocateInfo_base{
const SECURITY_ATTRIBUTES *       pAttributes;
DWORD  dwAccess;
};

struct ExportMemoryAllocateInfo:public MemoryAllocateInfo_base{
VkExternalMemoryHandleTypeFlags  handleTypes;
};

struct ImportMemoryWin32HandleInfoKHR:public MemoryAllocateInfo_base{
VkExternalMemoryHandleTypeFlagBits  handleType;
HANDLE  handle;
LPCWSTR  name;
};

struct ExportMemoryWin32HandleInfoKHR:public MemoryAllocateInfo_base{
const SECURITY_ATTRIBUTES * pAttributes;
DWORD  dwAccess;
LPCWSTR  name;
};

struct ImportMemoryFdInfoKHR:public MemoryAllocateInfo_base{
VkExternalMemoryHandleTypeFlagBits  handleType;
int  fd;
};

struct MemoryAllocateFlagsInfo:public MemoryAllocateInfo_base{
VkMemoryAllocateFlags  flags;
uint32_t  deviceMask;
};

struct MemoryDedicatedAllocateInfo:public MemoryAllocateInfo_base{
VkImage  image;
VkBuffer  buffer;
};

struct ImportMemoryHostPointerInfoEXT:public MemoryAllocateInfo_base{
VkExternalMemoryHandleTypeFlagBits  handleType;
void * pHostPointer;
};

struct ImportAndroidHardwareBufferInfoANDROID:public MemoryAllocateInfo_base{
struct AHardwareBuffer *            buffer;
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

struct WriteDescriptorSetInlineUniformBlockEXT:public WriteDescriptorSet_base{
uint32_t  dataSize;
const void * pData;
};

struct DescriptorAccelerationStructureInfoNVX:public WriteDescriptorSet_base{
uint32_t  accelerationStructureCount;
//const VkAccelerationStructureNVX * pAccelerationStructures;
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

struct DedicatedAllocationBufferCreateInfoNV:public BufferCreateInfo_base{
VkBool32  dedicatedAllocation;
};

struct ExternalMemoryBufferCreateInfo:public BufferCreateInfo_base{
VkExternalMemoryHandleTypeFlags  handleTypes;
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

struct SampleLocationsInfoEXT:public ImageMemoryBarrier_base{
VkSampleCountFlagBits  sampleLocationsPerPixel;
VkExtent2D  sampleLocationGridSize;
uint32_t  sampleLocationsCount;
const VkSampleLocationEXT * pSampleLocations;
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

struct DedicatedAllocationImageCreateInfoNV:public ImageCreateInfo_base{
VkBool32  dedicatedAllocation;
};

struct ExternalMemoryImageCreateInfoNV:public ImageCreateInfo_base{
VkExternalMemoryHandleTypeFlagsNV  handleTypes;
};

struct ExternalMemoryImageCreateInfo:public ImageCreateInfo_base{
VkExternalMemoryHandleTypeFlags  handleTypes;
};

struct ImageSwapchainCreateInfoKHR:public ImageCreateInfo_base{
VkSwapchainKHR  swapchain;
};

struct ImageFormatListCreateInfoKHR:public ImageCreateInfo_base{
uint32_t  viewFormatCount;
const VkFormat *      pViewFormats;
};

struct ExternalFormatANDROID:public ImageCreateInfo_base{
uint64_t  externalFormat;
};

struct ImageDrmFormatModifierListCreateInfoEXT:public ImageCreateInfo_base{
uint32_t  drmFormatModifierCount;
const uint64_t * pDrmFormatModifiers;
};

struct ImageDrmFormatModifierExplicitCreateInfoEXT:public ImageCreateInfo_base{
uint64_t  drmFormatModifier;
uint32_t  drmFormatModifierPlaneCount;
const VkSubresourceLayout * pPlaneLayouts;
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

struct ImageViewUsageCreateInfo:public ImageViewCreateInfo_base{
VkImageUsageFlags  usage;
};

struct SamplerYcbcrConversionInfo:public ImageViewCreateInfo_base{
VkSamplerYcbcrConversion  conversion;
};

struct ImageViewASTCDecodeModeEXT:public ImageViewCreateInfo_base{
VkFormat  decodeMode;
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

struct DeviceGroupBindSparseInfo:public BindSparseInfo_base{
uint32_t  resourceDeviceIndex;
uint32_t  memoryDeviceIndex;
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

struct ShaderModuleValidationCacheCreateInfoEXT:public ShaderModuleCreateInfo_base{
VkValidationCacheEXT  validationCache;
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

struct DescriptorSetLayoutBindingFlagsCreateInfoEXT:public DescriptorSetLayoutCreateInfo_base{
uint32_t  bindingCount;
const VkDescriptorBindingFlagsEXT * pBindingFlags;
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

struct DescriptorPoolInlineUniformBlockCreateInfoEXT:public DescriptorPoolCreateInfo_base{
uint32_t  maxInlineUniformBlockBindings;
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

struct DescriptorSetVariableDescriptorCountAllocateInfoEXT:public DescriptorSetAllocateInfo_base{
uint32_t  descriptorSetCount;
const uint32_t * pDescriptorCounts;
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

struct PipelineVertexInputDivisorStateCreateInfoEXT:public PipelineVertexInputStateCreateInfo_base{
uint32_t  vertexBindingDivisorCount;
const VkVertexInputBindingDivisorDescriptionEXT *      pVertexBindingDivisors;
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

struct PipelineTessellationDomainOriginStateCreateInfo:public PipelineTessellationStateCreateInfo_base{
VkTessellationDomainOrigin  domainOrigin;
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

struct PipelineViewportWScalingStateCreateInfoNV:public PipelineViewportStateCreateInfo_base{
VkBool32  viewportWScalingEnable;
uint32_t  viewportCount;
const VkViewportWScalingNV *      pViewportWScalings;
};

struct PipelineViewportSwizzleStateCreateInfoNV:public PipelineViewportStateCreateInfo_base{
VkPipelineViewportSwizzleStateCreateFlagsNV  flags;
uint32_t  viewportCount;
const VkViewportSwizzleNV *      pViewportSwizzles;
};

struct PipelineViewportExclusiveScissorStateCreateInfoNV:public PipelineViewportStateCreateInfo_base{
uint32_t  exclusiveScissorCount;
const VkRect2D *    pExclusiveScissors;
};

struct PipelineViewportShadingRateImageStateCreateInfoNV:public PipelineViewportStateCreateInfo_base{
VkBool32  shadingRateImageEnable;
uint32_t  viewportCount;
//const VkShadingRatePaletteNV *      pShadingRatePalettes;
};

struct PipelineViewportCoarseSampleOrderStateCreateInfoNV:public PipelineViewportStateCreateInfo_base{
//VkCoarseSampleOrderTypeNV  sampleOrderType;
uint32_t  customSampleOrderCount;
//const VkCoarseSampleOrderCustomNV *        pCustomSampleOrders;
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

struct PipelineRasterizationStateRasterizationOrderAMD:public PipelineRasterizationStateCreateInfo_base{
VkRasterizationOrderAMD  rasterizationOrder;
};

struct PipelineRasterizationConservativeStateCreateInfoEXT:public PipelineRasterizationStateCreateInfo_base{
VkPipelineRasterizationConservativeStateCreateFlagsEXT  flags;
VkConservativeRasterizationModeEXT  conservativeRasterizationMode;
float  extraPrimitiveOverestimationSize;
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

struct PipelineCoverageToColorStateCreateInfoNV:public PipelineMultisampleStateCreateInfo_base{
VkPipelineCoverageToColorStateCreateFlagsNV  flags;
VkBool32  coverageToColorEnable;
uint32_t  coverageToColorLocation;
};

struct PipelineSampleLocationsStateCreateInfoEXT:public PipelineMultisampleStateCreateInfo_base{
VkBool32  sampleLocationsEnable;
VkSampleLocationsInfoEXT  sampleLocationsInfo;
};

struct PipelineCoverageModulationStateCreateInfoNV:public PipelineMultisampleStateCreateInfo_base{
VkPipelineCoverageModulationStateCreateFlagsNV  flags;
VkCoverageModulationModeNV  coverageModulationMode;
VkBool32  coverageModulationTableEnable;
uint32_t  coverageModulationTableCount;
const float * pCoverageModulationTable;
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

struct PipelineColorBlendAdvancedStateCreateInfoEXT:public PipelineColorBlendStateCreateInfo_base{
VkBool32  srcPremultiplied;
VkBool32  dstPremultiplied;
VkBlendOverlapEXT  blendOverlap;
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

struct PipelineDiscardRectangleStateCreateInfoEXT:public GraphicsPipelineCreateInfo_base{
VkPipelineDiscardRectangleStateCreateFlagsEXT  flags;
VkDiscardRectangleModeEXT  discardRectangleMode;
uint32_t  discardRectangleCount;
const VkRect2D * pDiscardRectangles;
};

struct PipelineRepresentativeFragmentTestStateCreateInfoNV:public GraphicsPipelineCreateInfo_base{
VkBool32  representativeFragmentTestEnable;
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

struct SamplerReductionModeCreateInfoEXT:public SamplerCreateInfo_base{
VkSamplerReductionModeEXT  reductionMode;
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

struct CommandBufferInheritanceConditionalRenderingInfoEXT:public CommandBufferInheritanceInfo_base{
VkBool32  conditionalRenderingEnable;
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

struct DeviceGroupCommandBufferBeginInfo:public CommandBufferBeginInfo_base{
uint32_t  deviceMask;
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

struct DeviceGroupRenderPassBeginInfo:public RenderPassBeginInfo_base{
uint32_t  deviceMask;
uint32_t  deviceRenderAreaCount;
const VkRect2D *  pDeviceRenderAreas;
};

struct RenderPassSampleLocationsBeginInfoEXT:public RenderPassBeginInfo_base{
uint32_t  attachmentInitialSampleLocationsCount;
const VkAttachmentSampleLocationsEXT * pAttachmentInitialSampleLocations;
uint32_t  postSubpassSampleLocationsCount;
const VkSubpassSampleLocationsEXT * pPostSubpassSampleLocations;
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

struct RenderPassMultiviewCreateInfo:public RenderPassCreateInfo_base{
uint32_t  subpassCount;
const uint32_t *     pViewMasks;
uint32_t  dependencyCount;
const int32_t *   pViewOffsets;
uint32_t  correlationMaskCount;
const uint32_t * pCorrelationMasks;
};

struct RenderPassInputAttachmentAspectCreateInfo:public RenderPassCreateInfo_base{
uint32_t  aspectReferenceCount;
const VkInputAttachmentAspectReference * pAspectReferences;
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

struct ExportFenceCreateInfo:public FenceCreateInfo_base{
VkExternalFenceHandleTypeFlags  handleTypes;
};

struct ExportFenceWin32HandleInfoKHR:public FenceCreateInfo_base{
const SECURITY_ATTRIBUTES * pAttributes;
DWORD  dwAccess;
LPCWSTR  name;
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

struct ExportSemaphoreCreateInfo:public SemaphoreCreateInfo_base{
VkExternalSemaphoreHandleTypeFlags  handleTypes;
};

struct ExportSemaphoreWin32HandleInfoKHR:public SemaphoreCreateInfo_base{
const SECURITY_ATTRIBUTES *       pAttributes;
DWORD  dwAccess;
LPCWSTR  name;
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

struct Win32KeyedMutexAcquireReleaseInfoNV:public SubmitInfo_base{
uint32_t  acquireCount;
const VkDeviceMemory *            pAcquireSyncs;
const uint64_t *                  pAcquireKeys;
const uint32_t *                  pAcquireTimeoutMilliseconds;
uint32_t  releaseCount;
const VkDeviceMemory *            pReleaseSyncs;
const uint64_t *                  pReleaseKeys;
};

struct Win32KeyedMutexAcquireReleaseInfoKHR:public SubmitInfo_base{
uint32_t  acquireCount;
const VkDeviceMemory * pAcquireSyncs;
const uint64_t * pAcquireKeys;
const uint32_t * pAcquireTimeouts;
uint32_t  releaseCount;
const VkDeviceMemory * pReleaseSyncs;
const uint64_t * pReleaseKeys;
};

struct D3D12FenceSubmitInfoKHR:public SubmitInfo_base{
uint32_t  waitSemaphoreValuesCount;
const uint64_t * pWaitSemaphoreValues;
uint32_t  signalSemaphoreValuesCount;
const uint64_t * pSignalSemaphoreValues;
};

struct DeviceGroupSubmitInfo:public SubmitInfo_base{
uint32_t  waitSemaphoreCount;
const uint32_t *    pWaitSemaphoreDeviceIndices;
uint32_t  commandBufferCount;
const uint32_t *    pCommandBufferDeviceMasks;
uint32_t  signalSemaphoreCount;
const uint32_t *  pSignalSemaphoreDeviceIndices;
};

struct ProtectedSubmitInfo:public SubmitInfo_base{
VkBool32  protectedSubmit;
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

struct SwapchainCounterCreateInfoEXT:public SwapchainCreateInfoKHR_base{
VkSurfaceCounterFlagsEXT  surfaceCounters;
};

struct DeviceGroupSwapchainCreateInfoKHR:public SwapchainCreateInfoKHR_base{
VkDeviceGroupPresentModeFlagsKHR  modes;
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

struct DisplayPresentInfoKHR:public PresentInfoKHR_base{
VkRect2D  srcRect;
VkRect2D  dstRect;
VkBool32  persistent;
};

struct PresentRegionsKHR:public PresentInfoKHR_base{
uint32_t  swapchainCount;
const VkPresentRegionKHR *   pRegions;
};

struct DeviceGroupPresentInfoKHR:public PresentInfoKHR_base{
uint32_t  swapchainCount;
const uint32_t * pDeviceMasks;
VkDeviceGroupPresentModeFlagBitsKHR  mode;
};

struct PresentTimesInfoGOOGLE:public PresentInfoKHR_base{
uint32_t  swapchainCount;
const VkPresentTimeGOOGLE *   pTimes;
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

struct PhysicalDeviceProperties2_base{
protected:
VkStructureType sType;
const void* pNext;
PhysicalDeviceProperties2_base();
~PhysicalDeviceProperties2_base();
public:
PhysicalDeviceProperties2_base& operator<<(PhysicalDeviceProperties2_base& base_);
};

struct PhysicalDevicePushDescriptorPropertiesKHR:public PhysicalDeviceProperties2_base{
uint32_t  maxPushDescriptors;
};

struct PhysicalDeviceDriverPropertiesKHR:public PhysicalDeviceProperties2_base{
    uint32_t  driverID;/*
    char  driverName[VK_MAX_DRIVER_NAME_SIZE_KHR];
    char  driverInfo[VK_MAX_DRIVER_INFO_SIZE_KHR];
    VkConformanceVersionKHR  conformanceVersion;*/
};

struct PhysicalDeviceIDProperties:public PhysicalDeviceProperties2_base{
uint8_t  deviceUUID[VK_UUID_SIZE];
uint8_t  driverUUID[VK_UUID_SIZE];
uint8_t  deviceLUID[VK_LUID_SIZE];
uint32_t  deviceNodeMask;
VkBool32  deviceLUIDValid;
};

struct PhysicalDeviceMultiviewProperties:public PhysicalDeviceProperties2_base{
uint32_t  maxMultiviewViewCount;
uint32_t  maxMultiviewInstanceIndex;
};

struct PhysicalDeviceDiscardRectanglePropertiesEXT:public PhysicalDeviceProperties2_base{
uint32_t  maxDiscardRectangles;
};

struct PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX:public PhysicalDeviceProperties2_base{
VkBool32  perViewPositionAllComponents;
};

struct PhysicalDeviceSubgroupProperties:public PhysicalDeviceProperties2_base{
uint32_t  subgroupSize;
VkShaderStageFlags  supportedStages;
VkSubgroupFeatureFlags  supportedOperations;
VkBool32  quadOperationsInAllStages;
};

struct PhysicalDevicePointClippingProperties:public PhysicalDeviceProperties2_base{
VkPointClippingBehavior  pointClippingBehavior;
};

struct PhysicalDeviceProtectedMemoryProperties:public PhysicalDeviceProperties2_base{
VkBool32  protectedNoFault;
};

struct PhysicalDeviceSamplerFilterMinmaxPropertiesEXT:public PhysicalDeviceProperties2_base{
VkBool32  filterMinmaxSingleComponentFormats;
VkBool32  filterMinmaxImageComponentMapping;
};

struct PhysicalDeviceSampleLocationsPropertiesEXT:public PhysicalDeviceProperties2_base{
VkSampleCountFlags  sampleLocationSampleCounts;
VkExtent2D  maxSampleLocationGridSize;
float  sampleLocationCoordinateRange[2];
uint32_t  sampleLocationSubPixelBits;
VkBool32  variableSampleLocations;
};

struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT:public PhysicalDeviceProperties2_base{
uint32_t  advancedBlendMaxColorAttachments;
VkBool32  advancedBlendIndependentBlend;
VkBool32  advancedBlendNonPremultipliedSrcColor;
VkBool32  advancedBlendNonPremultipliedDstColor;
VkBool32  advancedBlendCorrelatedOverlap;
VkBool32  advancedBlendAllOperations;
};

struct PhysicalDeviceInlineUniformBlockPropertiesEXT:public PhysicalDeviceProperties2_base{
uint32_t  maxInlineUniformBlockSize;
uint32_t  maxPerStageDescriptorInlineUniformBlocks;
uint32_t  maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
uint32_t  maxDescriptorSetInlineUniformBlocks;
uint32_t  maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
};

struct PhysicalDeviceMaintenance3Properties:public PhysicalDeviceProperties2_base{
uint32_t  maxPerSetDescriptors;
VkDeviceSize  maxMemoryAllocationSize;
};

struct PhysicalDeviceExternalMemoryHostPropertiesEXT:public PhysicalDeviceProperties2_base{
VkDeviceSize  minImportedHostPointerAlignment;
};

struct PhysicalDeviceConservativeRasterizationPropertiesEXT:public PhysicalDeviceProperties2_base{
float  primitiveOverestimationSize;
float  maxExtraPrimitiveOverestimationSize;
float  extraPrimitiveOverestimationSizeGranularity;
VkBool32  primitiveUnderestimation;
VkBool32  conservativePointAndLineRasterization;
VkBool32  degenerateTrianglesRasterized;
VkBool32  degenerateLinesRasterized;
VkBool32  fullyCoveredFragmentShaderInputVariable;
VkBool32  conservativeRasterizationPostDepthCoverage;
};

struct PhysicalDeviceShaderCorePropertiesAMD:public PhysicalDeviceProperties2_base{
uint32_t  shaderEngineCount;
uint32_t  shaderArraysPerEngineCount;
uint32_t  computeUnitsPerShaderArray;
uint32_t  simdPerComputeUnit;
uint32_t  wavefrontsPerSimd;
uint32_t  wavefrontSize;
uint32_t  sgprsPerSimd;
uint32_t  minSgprAllocation;
uint32_t  maxSgprAllocation;
uint32_t  sgprAllocationGranularity;
uint32_t  vgprsPerSimd;
uint32_t  minVgprAllocation;
uint32_t  maxVgprAllocation;
uint32_t  vgprAllocationGranularity;
};

struct PhysicalDeviceDescriptorIndexingPropertiesEXT:public PhysicalDeviceProperties2_base{
uint32_t  maxUpdateAfterBindDescriptorsInAllPools;
VkBool32  shaderUniformBufferArrayNonUniformIndexingNative;
VkBool32  shaderSampledImageArrayNonUniformIndexingNative;
VkBool32  shaderStorageBufferArrayNonUniformIndexingNative;
VkBool32  shaderStorageImageArrayNonUniformIndexingNative;
VkBool32  shaderInputAttachmentArrayNonUniformIndexingNative;
VkBool32  robustBufferAccessUpdateAfterBind;
VkBool32  quadDivergentImplicitLod;
uint32_t  maxPerStageDescriptorUpdateAfterBindSamplers;
uint32_t  maxPerStageDescriptorUpdateAfterBindUniformBuffers;
uint32_t  maxPerStageDescriptorUpdateAfterBindStorageBuffers;
uint32_t  maxPerStageDescriptorUpdateAfterBindSampledImages;
uint32_t  maxPerStageDescriptorUpdateAfterBindStorageImages;
uint32_t  maxPerStageDescriptorUpdateAfterBindInputAttachments;
uint32_t  maxPerStageUpdateAfterBindResources;
uint32_t  maxDescriptorSetUpdateAfterBindSamplers;
uint32_t  maxDescriptorSetUpdateAfterBindUniformBuffers;
uint32_t  maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
uint32_t  maxDescriptorSetUpdateAfterBindStorageBuffers;
uint32_t  maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
uint32_t  maxDescriptorSetUpdateAfterBindSampledImages;
uint32_t  maxDescriptorSetUpdateAfterBindStorageImages;
uint32_t  maxDescriptorSetUpdateAfterBindInputAttachments;
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT:public PhysicalDeviceProperties2_base{
uint32_t  maxVertexAttribDivisor;
};

struct PhysicalDeviceMeshShaderPropertiesNV:public PhysicalDeviceProperties2_base{
uint32_t  maxDrawMeshTasksCount;
uint32_t  maxTaskWorkGroupInvocations;
uint32_t  maxTaskWorkGroupSize[3];
uint32_t  maxTaskTotalMemorySize;
uint32_t  maxTaskOutputCount;
uint32_t  maxMeshWorkGroupInvocations;
uint32_t  maxMeshWorkGroupSize[3];
uint32_t  maxMeshTotalMemorySize;
uint32_t  maxMeshOutputVertices;
uint32_t  maxMeshOutputPrimitives;
uint32_t  maxMeshMultiviewViewCount;
uint32_t  meshOutputPerVertexGranularity;
uint32_t  meshOutputPerPrimitiveGranularity;
};

struct PhysicalDeviceRaytracingPropertiesNVX:public PhysicalDeviceProperties2_base{
uint32_t  shaderHeaderSize;
uint32_t  maxRecursionDepth;
uint32_t  maxGeometryCount;
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

struct DrmFormatModifierPropertiesListEXT:public FormatProperties2_base{
uint32_t  drmFormatModifierCount;
//VkDrmFormatModifierPropertiesEXT * pDrmFormatModifierProperties;
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

struct ExternalImageFormatProperties:public ImageFormatProperties2_base{
VkExternalMemoryProperties  externalMemoryProperties;
};

struct SamplerYcbcrConversionImageFormatProperties:public ImageFormatProperties2_base{
uint32_t  combinedImageSamplerDescriptorCount;
};

struct TextureLODGatherFormatPropertiesAMD:public ImageFormatProperties2_base{
VkBool32  supportsTextureGatherLODBiasAMD;
};

struct AndroidHardwareBufferUsageANDROID:public ImageFormatProperties2_base{
uint64_t  androidHardwareBufferUsage;
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

struct PhysicalDeviceExternalImageFormatInfo:public PhysicalDeviceImageFormatInfo2_base{
VkExternalMemoryHandleTypeFlagBits  handleType;
};

struct PhysicalDeviceImageDrmFormatModifierInfoEXT:public PhysicalDeviceImageFormatInfo2_base{
uint64_t  drmFormatModifier;
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

struct QueueFamilyCheckpointPropertiesNV:public QueueFamilyProperties2_base{
VkPipelineStageFlags  checkpointExecutionStageMask;
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

struct BindBufferMemoryDeviceGroupInfo:public BindBufferMemoryInfo_base{
uint32_t  deviceIndexCount;
const uint32_t *  pDeviceIndices;
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

struct BindImageMemoryDeviceGroupInfo:public BindImageMemoryInfo_base{
uint32_t  deviceIndexCount;
const uint32_t *  pDeviceIndices;
uint32_t  splitInstanceBindRegionCount;
const VkRect2D *  pSplitInstanceBindRegions;
};

struct BindImageMemorySwapchainInfoKHR:public BindImageMemoryInfo_base{
VkSwapchainKHR  swapchain;
uint32_t  imageIndex;
};

struct BindImagePlaneMemoryInfo:public BindImageMemoryInfo_base{
VkImageAspectFlagBits  planeAspect;
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

struct SharedPresentSurfaceCapabilitiesKHR:public SurfaceCapabilities2KHR_base{
VkImageUsageFlags  sharedPresentSupportedUsageFlags;
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

struct ImagePlaneMemoryRequirementsInfo:public ImageMemoryRequirementsInfo2_base{
VkImageAspectFlagBits  planeAspect;
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

struct MemoryDedicatedRequirements:public MemoryRequirements2_base{
VkBool32  prefersDedicatedAllocation;
VkBool32  requiresDedicatedAllocation;
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

struct DescriptorSetLayoutSupport_base{
protected:
VkStructureType sType;
const void* pNext;
DescriptorSetLayoutSupport_base();
~DescriptorSetLayoutSupport_base();
public:
DescriptorSetLayoutSupport_base& operator<<(DescriptorSetLayoutSupport_base& base_);
};

struct DescriptorSetVariableDescriptorCountLayoutSupportEXT:public DescriptorSetLayoutSupport_base{
uint32_t  maxVariableDescriptorCount;
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

struct AndroidHardwareBufferFormatPropertiesANDROID:public AndroidHardwareBufferPropertiesANDROID_base{
VkFormat  format;
uint64_t  externalFormat;
VkFormatFeatureFlags  formatFeatures;
VkComponentMapping  samplerYcbcrConversionComponents;
VkSamplerYcbcrModelConversion  suggestedYcbcrModel;
VkSamplerYcbcrRange  suggestedYcbcrRange;
VkChromaLocation  suggestedXChromaOffset;
VkChromaLocation  suggestedYChromaOffset;
};


}}

