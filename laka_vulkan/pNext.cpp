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

DeviceQueueCreateInfo_base::DeviceQueueCreateInfo_base():pNext(nullptr){};
DeviceQueueCreateInfo_base::~DeviceQueueCreateInfo_base(){};

DeviceQueueCreateInfo_base& DeviceQueueCreateInfo_base::operator<<(DeviceQueueCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DeviceCreateInfo_base::DeviceCreateInfo_base():pNext(nullptr){};
DeviceCreateInfo_base::~DeviceCreateInfo_base(){};

DeviceCreateInfo_base& DeviceCreateInfo_base::operator<<(DeviceCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

InstanceCreateInfo_base::InstanceCreateInfo_base():pNext(nullptr){};
InstanceCreateInfo_base::~InstanceCreateInfo_base(){};

InstanceCreateInfo_base& InstanceCreateInfo_base::operator<<(InstanceCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

MemoryAllocateInfo_base::MemoryAllocateInfo_base():pNext(nullptr){};
MemoryAllocateInfo_base::~MemoryAllocateInfo_base(){};

MemoryAllocateInfo_base& MemoryAllocateInfo_base::operator<<(MemoryAllocateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

WriteDescriptorSet_base::WriteDescriptorSet_base():pNext(nullptr){};
WriteDescriptorSet_base::~WriteDescriptorSet_base(){};

WriteDescriptorSet_base& WriteDescriptorSet_base::operator<<(WriteDescriptorSet_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BufferCreateInfo_base::BufferCreateInfo_base():pNext(nullptr){};
BufferCreateInfo_base::~BufferCreateInfo_base(){};

BufferCreateInfo_base& BufferCreateInfo_base::operator<<(BufferCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageMemoryBarrier_base::ImageMemoryBarrier_base():pNext(nullptr){};
ImageMemoryBarrier_base::~ImageMemoryBarrier_base(){};

ImageMemoryBarrier_base& ImageMemoryBarrier_base::operator<<(ImageMemoryBarrier_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageCreateInfo_base::ImageCreateInfo_base():pNext(nullptr){};
ImageCreateInfo_base::~ImageCreateInfo_base(){};

ImageCreateInfo_base& ImageCreateInfo_base::operator<<(ImageCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageViewCreateInfo_base::ImageViewCreateInfo_base():pNext(nullptr){};
ImageViewCreateInfo_base::~ImageViewCreateInfo_base(){};

ImageViewCreateInfo_base& ImageViewCreateInfo_base::operator<<(ImageViewCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BindSparseInfo_base::BindSparseInfo_base():pNext(nullptr){};
BindSparseInfo_base::~BindSparseInfo_base(){};

BindSparseInfo_base& BindSparseInfo_base::operator<<(BindSparseInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ShaderModuleCreateInfo_base::ShaderModuleCreateInfo_base():pNext(nullptr){};
ShaderModuleCreateInfo_base::~ShaderModuleCreateInfo_base(){};

ShaderModuleCreateInfo_base& ShaderModuleCreateInfo_base::operator<<(ShaderModuleCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorSetLayoutCreateInfo_base::DescriptorSetLayoutCreateInfo_base():pNext(nullptr){};
DescriptorSetLayoutCreateInfo_base::~DescriptorSetLayoutCreateInfo_base(){};

DescriptorSetLayoutCreateInfo_base& DescriptorSetLayoutCreateInfo_base::operator<<(DescriptorSetLayoutCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorPoolCreateInfo_base::DescriptorPoolCreateInfo_base():pNext(nullptr){};
DescriptorPoolCreateInfo_base::~DescriptorPoolCreateInfo_base(){};

DescriptorPoolCreateInfo_base& DescriptorPoolCreateInfo_base::operator<<(DescriptorPoolCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorSetAllocateInfo_base::DescriptorSetAllocateInfo_base():pNext(nullptr){};
DescriptorSetAllocateInfo_base::~DescriptorSetAllocateInfo_base(){};

DescriptorSetAllocateInfo_base& DescriptorSetAllocateInfo_base::operator<<(DescriptorSetAllocateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineVertexInputStateCreateInfo_base::PipelineVertexInputStateCreateInfo_base():pNext(nullptr){};
PipelineVertexInputStateCreateInfo_base::~PipelineVertexInputStateCreateInfo_base(){};

PipelineVertexInputStateCreateInfo_base& PipelineVertexInputStateCreateInfo_base::operator<<(PipelineVertexInputStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineTessellationStateCreateInfo_base::PipelineTessellationStateCreateInfo_base():pNext(nullptr){};
PipelineTessellationStateCreateInfo_base::~PipelineTessellationStateCreateInfo_base(){};

PipelineTessellationStateCreateInfo_base& PipelineTessellationStateCreateInfo_base::operator<<(PipelineTessellationStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineViewportStateCreateInfo_base::PipelineViewportStateCreateInfo_base():pNext(nullptr){};
PipelineViewportStateCreateInfo_base::~PipelineViewportStateCreateInfo_base(){};

PipelineViewportStateCreateInfo_base& PipelineViewportStateCreateInfo_base::operator<<(PipelineViewportStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineRasterizationStateCreateInfo_base::PipelineRasterizationStateCreateInfo_base():pNext(nullptr){};
PipelineRasterizationStateCreateInfo_base::~PipelineRasterizationStateCreateInfo_base(){};

PipelineRasterizationStateCreateInfo_base& PipelineRasterizationStateCreateInfo_base::operator<<(PipelineRasterizationStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineMultisampleStateCreateInfo_base::PipelineMultisampleStateCreateInfo_base():pNext(nullptr){};
PipelineMultisampleStateCreateInfo_base::~PipelineMultisampleStateCreateInfo_base(){};

PipelineMultisampleStateCreateInfo_base& PipelineMultisampleStateCreateInfo_base::operator<<(PipelineMultisampleStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PipelineColorBlendStateCreateInfo_base::PipelineColorBlendStateCreateInfo_base():pNext(nullptr){};
PipelineColorBlendStateCreateInfo_base::~PipelineColorBlendStateCreateInfo_base(){};

PipelineColorBlendStateCreateInfo_base& PipelineColorBlendStateCreateInfo_base::operator<<(PipelineColorBlendStateCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

GraphicsPipelineCreateInfo_base::GraphicsPipelineCreateInfo_base():pNext(nullptr){};
GraphicsPipelineCreateInfo_base::~GraphicsPipelineCreateInfo_base(){};

GraphicsPipelineCreateInfo_base& GraphicsPipelineCreateInfo_base::operator<<(GraphicsPipelineCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SamplerCreateInfo_base::SamplerCreateInfo_base():pNext(nullptr){};
SamplerCreateInfo_base::~SamplerCreateInfo_base(){};

SamplerCreateInfo_base& SamplerCreateInfo_base::operator<<(SamplerCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

CommandBufferInheritanceInfo_base::CommandBufferInheritanceInfo_base():pNext(nullptr){};
CommandBufferInheritanceInfo_base::~CommandBufferInheritanceInfo_base(){};

CommandBufferInheritanceInfo_base& CommandBufferInheritanceInfo_base::operator<<(CommandBufferInheritanceInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

CommandBufferBeginInfo_base::CommandBufferBeginInfo_base():pNext(nullptr){};
CommandBufferBeginInfo_base::~CommandBufferBeginInfo_base(){};

CommandBufferBeginInfo_base& CommandBufferBeginInfo_base::operator<<(CommandBufferBeginInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

RenderPassBeginInfo_base::RenderPassBeginInfo_base():pNext(nullptr){};
RenderPassBeginInfo_base::~RenderPassBeginInfo_base(){};

RenderPassBeginInfo_base& RenderPassBeginInfo_base::operator<<(RenderPassBeginInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

RenderPassCreateInfo_base::RenderPassCreateInfo_base():pNext(nullptr){};
RenderPassCreateInfo_base::~RenderPassCreateInfo_base(){};

RenderPassCreateInfo_base& RenderPassCreateInfo_base::operator<<(RenderPassCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

FenceCreateInfo_base::FenceCreateInfo_base():pNext(nullptr){};
FenceCreateInfo_base::~FenceCreateInfo_base(){};

FenceCreateInfo_base& FenceCreateInfo_base::operator<<(FenceCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SemaphoreCreateInfo_base::SemaphoreCreateInfo_base():pNext(nullptr){};
SemaphoreCreateInfo_base::~SemaphoreCreateInfo_base(){};

SemaphoreCreateInfo_base& SemaphoreCreateInfo_base::operator<<(SemaphoreCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SubmitInfo_base::SubmitInfo_base():pNext(nullptr){};
SubmitInfo_base::~SubmitInfo_base(){};

SubmitInfo_base& SubmitInfo_base::operator<<(SubmitInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SwapchainCreateInfoKHR_base::SwapchainCreateInfoKHR_base():pNext(nullptr){};
SwapchainCreateInfoKHR_base::~SwapchainCreateInfoKHR_base(){};

SwapchainCreateInfoKHR_base& SwapchainCreateInfoKHR_base::operator<<(SwapchainCreateInfoKHR_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PresentInfoKHR_base::PresentInfoKHR_base():pNext(nullptr){};
PresentInfoKHR_base::~PresentInfoKHR_base(){};

PresentInfoKHR_base& PresentInfoKHR_base::operator<<(PresentInfoKHR_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PhysicalDeviceFeatures2_base::PhysicalDeviceFeatures2_base():pNext(nullptr){};
PhysicalDeviceFeatures2_base::~PhysicalDeviceFeatures2_base(){};

PhysicalDeviceFeatures2_base& PhysicalDeviceFeatures2_base::operator<<(PhysicalDeviceFeatures2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PhysicalDeviceProperties2_base::PhysicalDeviceProperties2_base():pNext(nullptr){};
PhysicalDeviceProperties2_base::~PhysicalDeviceProperties2_base(){};

PhysicalDeviceProperties2_base& PhysicalDeviceProperties2_base::operator<<(PhysicalDeviceProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

FormatProperties2_base::FormatProperties2_base():pNext(nullptr){};
FormatProperties2_base::~FormatProperties2_base(){};

FormatProperties2_base& FormatProperties2_base::operator<<(FormatProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageFormatProperties2_base::ImageFormatProperties2_base():pNext(nullptr){};
ImageFormatProperties2_base::~ImageFormatProperties2_base(){};

ImageFormatProperties2_base& ImageFormatProperties2_base::operator<<(ImageFormatProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

PhysicalDeviceImageFormatInfo2_base::PhysicalDeviceImageFormatInfo2_base():pNext(nullptr){};
PhysicalDeviceImageFormatInfo2_base::~PhysicalDeviceImageFormatInfo2_base(){};

PhysicalDeviceImageFormatInfo2_base& PhysicalDeviceImageFormatInfo2_base::operator<<(PhysicalDeviceImageFormatInfo2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

QueueFamilyProperties2_base::QueueFamilyProperties2_base():pNext(nullptr){};
QueueFamilyProperties2_base::~QueueFamilyProperties2_base(){};

QueueFamilyProperties2_base& QueueFamilyProperties2_base::operator<<(QueueFamilyProperties2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BindBufferMemoryInfo_base::BindBufferMemoryInfo_base():pNext(nullptr){};
BindBufferMemoryInfo_base::~BindBufferMemoryInfo_base(){};

BindBufferMemoryInfo_base& BindBufferMemoryInfo_base::operator<<(BindBufferMemoryInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

BindImageMemoryInfo_base::BindImageMemoryInfo_base():pNext(nullptr){};
BindImageMemoryInfo_base::~BindImageMemoryInfo_base(){};

BindImageMemoryInfo_base& BindImageMemoryInfo_base::operator<<(BindImageMemoryInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SurfaceCapabilities2KHR_base::SurfaceCapabilities2KHR_base():pNext(nullptr){};
SurfaceCapabilities2KHR_base::~SurfaceCapabilities2KHR_base(){};

SurfaceCapabilities2KHR_base& SurfaceCapabilities2KHR_base::operator<<(SurfaceCapabilities2KHR_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

ImageMemoryRequirementsInfo2_base::ImageMemoryRequirementsInfo2_base():pNext(nullptr){};
ImageMemoryRequirementsInfo2_base::~ImageMemoryRequirementsInfo2_base(){};

ImageMemoryRequirementsInfo2_base& ImageMemoryRequirementsInfo2_base::operator<<(ImageMemoryRequirementsInfo2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

MemoryRequirements2_base::MemoryRequirements2_base():pNext(nullptr){};
MemoryRequirements2_base::~MemoryRequirements2_base(){};

MemoryRequirements2_base& MemoryRequirements2_base::operator<<(MemoryRequirements2_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

SamplerYcbcrConversionCreateInfo_base::SamplerYcbcrConversionCreateInfo_base():pNext(nullptr){};
SamplerYcbcrConversionCreateInfo_base::~SamplerYcbcrConversionCreateInfo_base(){};

SamplerYcbcrConversionCreateInfo_base& SamplerYcbcrConversionCreateInfo_base::operator<<(SamplerYcbcrConversionCreateInfo_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

DescriptorSetLayoutSupport_base::DescriptorSetLayoutSupport_base():pNext(nullptr){};
DescriptorSetLayoutSupport_base::~DescriptorSetLayoutSupport_base(){};

DescriptorSetLayoutSupport_base& DescriptorSetLayoutSupport_base::operator<<(DescriptorSetLayoutSupport_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}

AndroidHardwareBufferPropertiesANDROID_base::AndroidHardwareBufferPropertiesANDROID_base():pNext(nullptr){};
AndroidHardwareBufferPropertiesANDROID_base::~AndroidHardwareBufferPropertiesANDROID_base(){};

AndroidHardwareBufferPropertiesANDROID_base& AndroidHardwareBufferPropertiesANDROID_base::operator<<(AndroidHardwareBufferPropertiesANDROID_base& base_){
base_.pNext = pNext;
pNext = &base_;
return *this;
}


}}

