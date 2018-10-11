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

using namespace std;

S_base_out_structure::S_base_out_structure(
)
{
}

S_base_in_structure::S_base_in_structure(
)
{
}

S_application_info::S_application_info(
	 const char*     pApplicationName_
	,uint32_t  applicationVersion_
	,const char*     pEngineName_
	,uint32_t  engineVersion_
	,uint32_t  apiVersion_)
		:pApplicationName(pApplicationName_)
		,applicationVersion(applicationVersion_)
		,pEngineName(pEngineName_)
		,engineVersion(engineVersion_)
		,apiVersion(apiVersion_)
{
}

S_mapped_memory_range::S_mapped_memory_range(
	 VkDeviceMemory  memory_
	,VkDeviceSize  offset_
	,VkDeviceSize  size_)
		:memory(memory_)
		,offset(offset_)
		,size(size_)
{
}

S_copy_descriptor_set::S_copy_descriptor_set(
	 VkDescriptorSet  srcSet_
	,uint32_t  srcBinding_
	,uint32_t  srcArrayElement_
	,VkDescriptorSet  dstSet_
	,uint32_t  dstBinding_
	,uint32_t  dstArrayElement_
	,uint32_t  descriptorCount_)
		:srcSet(srcSet_)
		,srcBinding(srcBinding_)
		,srcArrayElement(srcArrayElement_)
		,dstSet(dstSet_)
		,dstBinding(dstBinding_)
		,dstArrayElement(dstArrayElement_)
		,descriptorCount(descriptorCount_)
{
}

S_buffer_view_create_info::S_buffer_view_create_info(
	 VkBufferViewCreateFlags flags_
	,VkBuffer  buffer_
	,E_format  format_
	,VkDeviceSize  offset_
	,VkDeviceSize  range_)
		:flags(flags_)
		,buffer(buffer_)
		,format(format_)
		,offset(offset_)
		,range(range_)
{
}

S_memory_barrier::S_memory_barrier(
	 F_access  srcAccessMask_
	,F_access  dstAccessMask_)
		:srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
{
}

S_buffer_memory_barrier::S_buffer_memory_barrier(
	 F_access  srcAccessMask_
	,F_access  dstAccessMask_
	,uint32_t  srcQueueFamilyIndex_
	,uint32_t  dstQueueFamilyIndex_
	,VkBuffer  buffer_
	,VkDeviceSize  offset_
	,VkDeviceSize  size_)
		:srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
		,srcQueueFamilyIndex(srcQueueFamilyIndex_)
		,dstQueueFamilyIndex(dstQueueFamilyIndex_)
		,buffer(buffer_)
		,offset(offset_)
		,size(size_)
{
}

S_pipeline_shader_stage_create_info::S_pipeline_shader_stage_create_info(
	 VkPipelineShaderStageCreateFlags  flags_
	,F_shader_stage  stage_
	,VkShaderModule  module_
	,const char*            pName_
	,const S_specialization_info* pSpecializationInfo_)
		:flags(flags_)
		,stage(stage_)
		,module(module_)
		,pName(pName_)
		,pSpecializationInfo(pSpecializationInfo_)
{
}

S_compute_pipeline_create_info::S_compute_pipeline_create_info(
	 F_pipeline_create  flags_
	,S_pipeline_shader_stage_create_info  stage_
	,VkPipelineLayout  layout_
	,VkPipeline  basePipelineHandle_
	,int32_t  basePipelineIndex_)
		:flags(flags_)
		,stage(stage_)
		,layout(layout_)
		,basePipelineHandle(basePipelineHandle_)
		,basePipelineIndex(basePipelineIndex_)
{
}

S_pipeline_input_assembly_state_create_info::S_pipeline_input_assembly_state_create_info(
	 VkPipelineInputAssemblyStateCreateFlags  flags_
	,E_primitive_topology  topology_
	,VkBool32  primitiveRestartEnable_)
		:flags(flags_)
		,topology(topology_)
		,primitiveRestartEnable(primitiveRestartEnable_)
{
}

S_pipeline_dynamic_state_create_info::S_pipeline_dynamic_state_create_info(
	 VkPipelineDynamicStateCreateFlags  flags_
	,uint32_t  dynamicStateCount_
	,const E_dynamic_state*  pDynamicStates_)
		:flags(flags_)
		,dynamicStateCount(dynamicStateCount_)
		,pDynamicStates(pDynamicStates_)
{
}

S_pipeline_depth_stencil_state_create_info::S_pipeline_depth_stencil_state_create_info(
	 VkPipelineDepthStencilStateCreateFlags  flags_
	,VkBool32  depthTestEnable_
	,VkBool32  depthWriteEnable_
	,E_compare_op  depthCompareOp_
	,VkBool32  depthBoundsTestEnable_
	,VkBool32  stencilTestEnable_
	,S_stencil_op_state  front_
	,S_stencil_op_state  back_
	,float  minDepthBounds_
	,float  maxDepthBounds_)
		:flags(flags_)
		,depthTestEnable(depthTestEnable_)
		,depthWriteEnable(depthWriteEnable_)
		,depthCompareOp(depthCompareOp_)
		,depthBoundsTestEnable(depthBoundsTestEnable_)
		,stencilTestEnable(stencilTestEnable_)
		,front(front_)
		,back(back_)
		,minDepthBounds(minDepthBounds_)
		,maxDepthBounds(maxDepthBounds_)
{
}

S_pipeline_cache_create_info::S_pipeline_cache_create_info(
	 VkPipelineCacheCreateFlags  flags_
	,size_t  initialDataSize_
	,const void*            pInitialData_)
		:flags(flags_)
		,initialDataSize(initialDataSize_)
		,pInitialData(pInitialData_)
{
}

S_pipeline_layout_create_info::S_pipeline_layout_create_info(
	 VkPipelineLayoutCreateFlags  flags_
	,uint32_t  setLayoutCount_
	,const VkDescriptorSetLayout* pSetLayouts_
	,uint32_t  pushConstantRangeCount_
	,const S_push_constant_range* pPushConstantRanges_)
		:flags(flags_)
		,setLayoutCount(setLayoutCount_)
		,pSetLayouts(pSetLayouts_)
		,pushConstantRangeCount(pushConstantRangeCount_)
		,pPushConstantRanges(pPushConstantRanges_)
{
}

S_command_pool_create_info::S_command_pool_create_info(
	 F_command_pool_create  flags_
	,uint32_t  queueFamilyIndex_)
		:flags(flags_)
		,queueFamilyIndex(queueFamilyIndex_)
{
}

S_command_buffer_allocate_info::S_command_buffer_allocate_info(
	 VkCommandPool  commandPool_
	,E_command_buffer_level  level_
	,uint32_t  commandBufferCount_)
		:commandPool(commandPool_)
		,level(level_)
		,commandBufferCount(commandBufferCount_)
{
}

S_event_create_info::S_event_create_info(
	 VkEventCreateFlags  flags_)
		:flags(flags_)
{
}

S_query_pool_create_info::S_query_pool_create_info(
	 VkQueryPoolCreateFlags  flags_
	,E_query_type  queryType_
	,uint32_t  queryCount_
	,F_query_pipeline_statistic  pipelineStatistics_)
		:flags(flags_)
		,queryType(queryType_)
		,queryCount(queryCount_)
		,pipelineStatistics(pipelineStatistics_)
{
}

S_framebuffer_create_info::S_framebuffer_create_info(
	 VkFramebufferCreateFlags  flags_
	,VkRenderPass  renderPass_
	,uint32_t  attachmentCount_
	,const VkImageView*     pAttachments_
	,uint32_t  width_
	,uint32_t  height_
	,uint32_t  layers_)
		:flags(flags_)
		,renderPass(renderPass_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
		,width(width_)
		,height(height_)
		,layers(layers_)
{
}

S_display_mode_create_info_KHR::S_display_mode_create_info_KHR(
	 VkDisplayModeCreateFlagsKHR  flags_
	,S_display_mode_parameters_KHR  parameters_)
		:flags(flags_)
		,parameters(parameters_)
{
}

S_display_surface_create_info_KHR::S_display_surface_create_info_KHR(
	 VkDisplaySurfaceCreateFlagsKHR  flags_
	,VkDisplayModeKHR  displayMode_
	,uint32_t  planeIndex_
	,uint32_t  planeStackIndex_
	,F_surface_transform_khr  transform_
	,float  globalAlpha_
	,F_display_plane_alpha_khr  alphaMode_
	,S_extent_2d  imageExtent_)
		:flags(flags_)
		,displayMode(displayMode_)
		,planeIndex(planeIndex_)
		,planeStackIndex(planeStackIndex_)
		,transform(transform_)
		,globalAlpha(globalAlpha_)
		,alphaMode(alphaMode_)
		,imageExtent(imageExtent_)
{
}

S_display_present_info_KHR::S_display_present_info_KHR(
	 S_rect_2d  srcRect_
	,S_rect_2d  dstRect_
	,VkBool32  persistent_)
		:srcRect(srcRect_)
		,dstRect(dstRect_)
		,persistent(persistent_)
{
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_surface_create_info_KHR::S_android_surface_create_info_KHR(
	 VkAndroidSurfaceCreateFlagsKHR  flags_
	,struct ANativeWindow*    window_)
		:flags(flags_)
		,window(window_)
{
}

#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
S_mir_surface_create_info_KHR::S_mir_surface_create_info_KHR(
	 VkMirSurfaceCreateFlagsKHR  flags_
	,MirConnection*                   connection_
	,MirSurface*                      mirSurface_)
		:flags(flags_)
		,connection(connection_)
		,mirSurface(mirSurface_)
{
}

#endif

#ifdef VK_USE_PLATFORM_VI_NN
S_vi_surface_create_info_NN::S_vi_surface_create_info_NN(
	 VkViSurfaceCreateFlagsNN  flags_
	,void*                            window_)
		:flags(flags_)
		,window(window_)
{
}

#endif

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
S_wayland_surface_create_info_KHR::S_wayland_surface_create_info_KHR(
	 VkWaylandSurfaceCreateFlagsKHR  flags_
	,struct wl_display*               display_
	,struct wl_surface*               surface_)
		:flags(flags_)
		,display(display_)
		,surface(surface_)
{
}

#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
S_win32_surface_create_info_KHR::S_win32_surface_create_info_KHR(
	 VkWin32SurfaceCreateFlagsKHR  flags_
	,HINSTANCE  hinstance_
	,HWND  hwnd_)
		:flags(flags_)
		,hinstance(hinstance_)
		,hwnd(hwnd_)
{
}

#endif

#ifdef VK_USE_PLATFORM_XLIB_KHR
S_xlib_surface_create_info_KHR::S_xlib_surface_create_info_KHR(
	 VkXlibSurfaceCreateFlagsKHR  flags_
	,Display*                         dpy_
	,Window  window_)
		:flags(flags_)
		,dpy(dpy_)
		,window(window_)
{
}

#endif

#ifdef VK_USE_PLATFORM_XCB_KHR
S_xcb_surface_create_info_KHR::S_xcb_surface_create_info_KHR(
	 VkXcbSurfaceCreateFlagsKHR  flags_
	,xcb_connection_t*                connection_
	,xcb_window_t  window_)
		:flags(flags_)
		,connection(connection_)
		,window(window_)
{
}

#endif

S_debug_report_callback_create_info_EXT::S_debug_report_callback_create_info_EXT(
	 F_debug_report_ext  flags_
	,PFN_vkDebugReportCallbackEXT  pfnCallback_
	,void*            pUserData_)
		:flags(flags_)
		,pfnCallback(pfnCallback_)
		,pUserData(pUserData_)
{
}

S_validation_flags_EXT::S_validation_flags_EXT(
	 uint32_t  disabledValidationCheckCount_
	,const E_validation_check_EXT* pDisabledValidationChecks_)
		:disabledValidationCheckCount(disabledValidationCheckCount_)
		,pDisabledValidationChecks(pDisabledValidationChecks_)
{
}

S_pipeline_rasterization_state_rasterization_order_AMD::S_pipeline_rasterization_state_rasterization_order_AMD(
	 E_rasterization_order_AMD  rasterizationOrder_)
		:rasterizationOrder(rasterizationOrder_)
{
}

S_debug_marker_object_name_info_EXT::S_debug_marker_object_name_info_EXT(
	 E_debug_report_object_type_EXT  objectType_
	,uint64_t  object_
	,const char* pObjectName_)
		:objectType(objectType_)
		,object(object_)
		,pObjectName(pObjectName_)
{
}

S_debug_marker_object_tag_info_EXT::S_debug_marker_object_tag_info_EXT(
	 E_debug_report_object_type_EXT  objectType_
	,uint64_t  object_
	,uint64_t  tagName_
	,size_t  tagSize_
	,const void*        pTag_)
		:objectType(objectType_)
		,object(object_)
		,tagName(tagName_)
		,tagSize(tagSize_)
		,pTag(pTag_)
{
}

S_debug_marker_marker_info_EXT::S_debug_marker_marker_info_EXT(
	 const char* pMarkerName_
	,std::array< float ,4 > color_)
		:pMarkerName(pMarkerName_)
{
memcpy(&color,color_.data(),4*sizeof(decltype(color)) );
}

S_dedicated_allocation_image_create_info_NV::S_dedicated_allocation_image_create_info_NV(
	 VkBool32  dedicatedAllocation_)
		:dedicatedAllocation(dedicatedAllocation_)
{
}

S_dedicated_allocation_buffer_create_info_NV::S_dedicated_allocation_buffer_create_info_NV(
	 VkBool32  dedicatedAllocation_)
		:dedicatedAllocation(dedicatedAllocation_)
{
}

S_dedicated_allocation_memory_allocate_info_NV::S_dedicated_allocation_memory_allocate_info_NV(
	 VkImage  image_
	,VkBuffer  buffer_)
		:image(image_)
		,buffer(buffer_)
{
}

S_external_memory_image_create_info_NV::S_external_memory_image_create_info_NV(
	 F_external_memory_handle_type_nv  handleTypes_)
		:handleTypes(handleTypes_)
{
}

S_export_memory_allocate_info_NV::S_export_memory_allocate_info_NV(
	 F_external_memory_handle_type_nv  handleTypes_)
		:handleTypes(handleTypes_)
{
}

S_import_memory_win32_handle_info_NV::S_import_memory_win32_handle_info_NV(
	 F_external_memory_handle_type_nv  handleType_
	,HANDLE  handle_)
		:handleType(handleType_)
		,handle(handle_)
{
}

S_export_memory_win32_handle_info_NV::S_export_memory_win32_handle_info_NV(
	 const SECURITY_ATTRIBUTES*       pAttributes_
	,DWORD  dwAccess_)
		:pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
{
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
S_win32_keyed_mutex_acquire_release_info_NV::S_win32_keyed_mutex_acquire_release_info_NV(
	 uint32_t  acquireCount_
	,const VkDeviceMemory*            pAcquireSyncs_
	,const uint64_t*                  pAcquireKeys_
	,const uint32_t*                  pAcquireTimeoutMilliseconds_
	,uint32_t  releaseCount_
	,const VkDeviceMemory*            pReleaseSyncs_
	,const uint64_t*                  pReleaseKeys_)
		:acquireCount(acquireCount_)
		,pAcquireSyncs(pAcquireSyncs_)
		,pAcquireKeys(pAcquireKeys_)
		,pAcquireTimeoutMilliseconds(pAcquireTimeoutMilliseconds_)
		,releaseCount(releaseCount_)
		,pReleaseSyncs(pReleaseSyncs_)
		,pReleaseKeys(pReleaseKeys_)
{
}

#endif

S_device_generated_commands_features_NVX::S_device_generated_commands_features_NVX(
	 VkBool32  computeBindingPointSupport_)
		:computeBindingPointSupport(computeBindingPointSupport_)
{
}

S_device_generated_commands_limits_NVX::S_device_generated_commands_limits_NVX(
	 uint32_t  maxIndirectCommandsLayoutTokenCount_
	,uint32_t  maxObjectEntryCounts_
	,uint32_t  minSequenceCountBufferOffsetAlignment_
	,uint32_t  minSequenceIndexBufferOffsetAlignment_
	,uint32_t  minCommandsTokenBufferOffsetAlignment_)
		:maxIndirectCommandsLayoutTokenCount(maxIndirectCommandsLayoutTokenCount_)
		,maxObjectEntryCounts(maxObjectEntryCounts_)
		,minSequenceCountBufferOffsetAlignment(minSequenceCountBufferOffsetAlignment_)
		,minSequenceIndexBufferOffsetAlignment(minSequenceIndexBufferOffsetAlignment_)
		,minCommandsTokenBufferOffsetAlignment(minCommandsTokenBufferOffsetAlignment_)
{
}

S_indirect_commands_layout_create_info_NVX::S_indirect_commands_layout_create_info_NVX(
	 E_pipeline_bind_point  pipelineBindPoint_
	,F_indirect_commands_layout_usage_nvx  flags_
	,uint32_t  tokenCount_
	,const S_indirect_commands_layout_token_NVX*  pTokens_)
		:pipelineBindPoint(pipelineBindPoint_)
		,flags(flags_)
		,tokenCount(tokenCount_)
		,pTokens(pTokens_)
{
}

S_cmd_process_commands_info_NVX::S_cmd_process_commands_info_NVX(
	 VkObjectTableNVX  objectTable_
	,VkIndirectCommandsLayoutNVX  indirectCommandsLayout_
	,uint32_t  indirectCommandsTokenCount_
	,const S_indirect_commands_token_NVX*       pIndirectCommandsTokens_
	,uint32_t  maxSequencesCount_
	,VkCommandBuffer  targetCommandBuffer_
	,VkBuffer  sequencesCountBuffer_
	,VkDeviceSize  sequencesCountOffset_
	,VkBuffer  sequencesIndexBuffer_
	,VkDeviceSize  sequencesIndexOffset_)
		:objectTable(objectTable_)
		,indirectCommandsLayout(indirectCommandsLayout_)
		,indirectCommandsTokenCount(indirectCommandsTokenCount_)
		,pIndirectCommandsTokens(pIndirectCommandsTokens_)
		,maxSequencesCount(maxSequencesCount_)
		,targetCommandBuffer(targetCommandBuffer_)
		,sequencesCountBuffer(sequencesCountBuffer_)
		,sequencesCountOffset(sequencesCountOffset_)
		,sequencesIndexBuffer(sequencesIndexBuffer_)
		,sequencesIndexOffset(sequencesIndexOffset_)
{
}

S_cmd_reserve_space_for_commands_info_NVX::S_cmd_reserve_space_for_commands_info_NVX(
	 VkObjectTableNVX  objectTable_
	,VkIndirectCommandsLayoutNVX  indirectCommandsLayout_
	,uint32_t  maxSequencesCount_)
		:objectTable(objectTable_)
		,indirectCommandsLayout(indirectCommandsLayout_)
		,maxSequencesCount(maxSequencesCount_)
{
}

S_object_table_create_info_NVX::S_object_table_create_info_NVX(
	 uint32_t  objectCount_
	,const E_object_entry_type_NVX*       pObjectEntryTypes_
	,const uint32_t*                   pObjectEntryCounts_
	,const F_object_entry_usage_nvx* pObjectEntryUsageFlags_
	,uint32_t  maxUniformBuffersPerDescriptor_
	,uint32_t  maxStorageBuffersPerDescriptor_
	,uint32_t  maxStorageImagesPerDescriptor_
	,uint32_t  maxSampledImagesPerDescriptor_
	,uint32_t  maxPipelineLayouts_)
		:objectCount(objectCount_)
		,pObjectEntryTypes(pObjectEntryTypes_)
		,pObjectEntryCounts(pObjectEntryCounts_)
		,pObjectEntryUsageFlags(pObjectEntryUsageFlags_)
		,maxUniformBuffersPerDescriptor(maxUniformBuffersPerDescriptor_)
		,maxStorageBuffersPerDescriptor(maxStorageBuffersPerDescriptor_)
		,maxStorageImagesPerDescriptor(maxStorageImagesPerDescriptor_)
		,maxSampledImagesPerDescriptor(maxSampledImagesPerDescriptor_)
		,maxPipelineLayouts(maxPipelineLayouts_)
{
}

S_physical_device_memory_properties2::S_physical_device_memory_properties2(
	 S_physical_device_memory_properties  memoryProperties_)
		:memoryProperties(memoryProperties_)
{
}

S_sparse_image_format_properties2::S_sparse_image_format_properties2(
	 S_sparse_image_format_properties  properties_)
		:properties(properties_)
{
}

S_physical_device_sparse_image_format_info2::S_physical_device_sparse_image_format_info2(
	 E_format  format_
	,E_image_type  type_
	,F_sample_count  samples_
	,F_image_usage  usage_
	,E_image_tiling  tiling_)
		:format(format_)
		,type(type_)
		,samples(samples_)
		,usage(usage_)
		,tiling(tiling_)
{
}

S_physical_device_push_descriptor_properties_KHR::S_physical_device_push_descriptor_properties_KHR(
	 uint32_t  maxPushDescriptors_)
		:maxPushDescriptors(maxPushDescriptors_)
{
}

S_physical_device_driver_properties_KHR::S_physical_device_driver_properties_KHR(
	 uint32_t  driverID_
	,std::array< char ,VK_MAX_DRIVER_NAME_SIZE_KHR > driverName_
	,std::array< char ,VK_MAX_DRIVER_INFO_SIZE_KHR > driverInfo_
	,S_conformance_version_KHR  conformanceVersion_)
		:driverID(driverID_)
		,conformanceVersion(conformanceVersion_)
{
memcpy(&driverName,driverName_.data(),VK_MAX_DRIVER_NAME_SIZE_KHR*sizeof(decltype(driverName)) );
memcpy(&driverInfo,driverInfo_.data(),VK_MAX_DRIVER_INFO_SIZE_KHR*sizeof(decltype(driverInfo)) );
}

S_present_regions_KHR::S_present_regions_KHR(
	 uint32_t  swapchainCount_
	,const S_present_region_KHR*   pRegions_)
		:swapchainCount(swapchainCount_)
		,pRegions(pRegions_)
{
}

S_physical_device_variable_pointer_features::S_physical_device_variable_pointer_features(
	 VkBool32  variablePointersStorageBuffer_
	,VkBool32  variablePointers_)
		:variablePointersStorageBuffer(variablePointersStorageBuffer_)
		,variablePointers(variablePointers_)
{
}

S_physical_device_external_image_format_info::S_physical_device_external_image_format_info(
	 F_external_memory_handle_type  handleType_)
		:handleType(handleType_)
{
}

S_external_image_format_properties::S_external_image_format_properties(
	 S_external_memory_properties  externalMemoryProperties_)
		:externalMemoryProperties(externalMemoryProperties_)
{
}

S_physical_device_external_buffer_info::S_physical_device_external_buffer_info(
	 F_buffer_create  flags_
	,F_buffer_usage  usage_
	,F_external_memory_handle_type  handleType_)
		:flags(flags_)
		,usage(usage_)
		,handleType(handleType_)
{
}

S_external_buffer_properties::S_external_buffer_properties(
	 S_external_memory_properties  externalMemoryProperties_)
		:externalMemoryProperties(externalMemoryProperties_)
{
}

S_physical_device_id_properties::S_physical_device_id_properties(
	 std::array< uint8_t ,VK_UUID_SIZE > deviceUUID_
	,std::array< uint8_t ,VK_UUID_SIZE > driverUUID_
	,std::array< uint8_t ,VK_LUID_SIZE > deviceLUID_
	,uint32_t  deviceNodeMask_
	,VkBool32  deviceLUIDValid_)
		:deviceNodeMask(deviceNodeMask_)
		,deviceLUIDValid(deviceLUIDValid_)
{
memcpy(&deviceUUID,deviceUUID_.data(),VK_UUID_SIZE*sizeof(decltype(deviceUUID)) );
memcpy(&driverUUID,driverUUID_.data(),VK_UUID_SIZE*sizeof(decltype(driverUUID)) );
memcpy(&deviceLUID,deviceLUID_.data(),VK_LUID_SIZE*sizeof(decltype(deviceLUID)) );
}

S_external_memory_image_create_info::S_external_memory_image_create_info(
	 F_external_memory_handle_type  handleTypes_)
		:handleTypes(handleTypes_)
{
}

S_external_memory_buffer_create_info::S_external_memory_buffer_create_info(
	 F_external_memory_handle_type  handleTypes_)
		:handleTypes(handleTypes_)
{
}

S_export_memory_allocate_info::S_export_memory_allocate_info(
	 F_external_memory_handle_type  handleTypes_)
		:handleTypes(handleTypes_)
{
}

S_import_memory_win32_handle_info_KHR::S_import_memory_win32_handle_info_KHR(
	 F_external_memory_handle_type  handleType_
	,HANDLE  handle_
	,LPCWSTR  name_)
		:handleType(handleType_)
		,handle(handle_)
		,name(name_)
{
}

S_export_memory_win32_handle_info_KHR::S_export_memory_win32_handle_info_KHR(
	 const SECURITY_ATTRIBUTES* pAttributes_
	,DWORD  dwAccess_
	,LPCWSTR  name_)
		:pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
		,name(name_)
{
}

S_memory_win32_handle_properties_KHR::S_memory_win32_handle_properties_KHR(
	 uint32_t  memoryTypeBits_)
		:memoryTypeBits(memoryTypeBits_)
{
}

S_memory_get_win32_handle_info_KHR::S_memory_get_win32_handle_info_KHR(
	 VkDeviceMemory  memory_
	,F_external_memory_handle_type  handleType_)
		:memory(memory_)
		,handleType(handleType_)
{
}

S_import_memory_fd_info_KHR::S_import_memory_fd_info_KHR(
	 F_external_memory_handle_type  handleType_
	,int  fd_)
		:handleType(handleType_)
		,fd(fd_)
{
}

S_memory_fd_properties_KHR::S_memory_fd_properties_KHR(
	 uint32_t  memoryTypeBits_)
		:memoryTypeBits(memoryTypeBits_)
{
}

S_memory_get_fd_info_KHR::S_memory_get_fd_info_KHR(
	 VkDeviceMemory  memory_
	,F_external_memory_handle_type  handleType_)
		:memory(memory_)
		,handleType(handleType_)
{
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
S_win32_keyed_mutex_acquire_release_info_KHR::S_win32_keyed_mutex_acquire_release_info_KHR(
	 uint32_t  acquireCount_
	,const VkDeviceMemory* pAcquireSyncs_
	,const uint64_t* pAcquireKeys_
	,const uint32_t* pAcquireTimeouts_
	,uint32_t  releaseCount_
	,const VkDeviceMemory* pReleaseSyncs_
	,const uint64_t* pReleaseKeys_)
		:acquireCount(acquireCount_)
		,pAcquireSyncs(pAcquireSyncs_)
		,pAcquireKeys(pAcquireKeys_)
		,pAcquireTimeouts(pAcquireTimeouts_)
		,releaseCount(releaseCount_)
		,pReleaseSyncs(pReleaseSyncs_)
		,pReleaseKeys(pReleaseKeys_)
{
}

#endif

S_physical_device_external_semaphore_info::S_physical_device_external_semaphore_info(
	 F_external_semaphore_handle_type  handleType_)
		:handleType(handleType_)
{
}

S_external_semaphore_properties::S_external_semaphore_properties(
	 F_external_semaphore_handle_type  exportFromImportedHandleTypes_
	,F_external_semaphore_handle_type  compatibleHandleTypes_
	,F_external_semaphore_feature  externalSemaphoreFeatures_)
		:exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
		,compatibleHandleTypes(compatibleHandleTypes_)
		,externalSemaphoreFeatures(externalSemaphoreFeatures_)
{
}

S_export_semaphore_create_info::S_export_semaphore_create_info(
	 F_external_semaphore_handle_type  handleTypes_)
		:handleTypes(handleTypes_)
{
}

S_import_semaphore_win32_handle_info_KHR::S_import_semaphore_win32_handle_info_KHR(
	 VkSemaphore  semaphore_
	,F_semaphore_import  flags_
	,F_external_semaphore_handle_type  handleType_
	,HANDLE  handle_
	,LPCWSTR  name_)
		:semaphore(semaphore_)
		,flags(flags_)
		,handleType(handleType_)
		,handle(handle_)
		,name(name_)
{
}

S_export_semaphore_win32_handle_info_KHR::S_export_semaphore_win32_handle_info_KHR(
	 const SECURITY_ATTRIBUTES*       pAttributes_
	,DWORD  dwAccess_
	,LPCWSTR  name_)
		:pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
		,name(name_)
{
}

S_d_3d12_fence_submit_info_KHR::S_d_3d12_fence_submit_info_KHR(
	 uint32_t  waitSemaphoreValuesCount_
	,const uint64_t* pWaitSemaphoreValues_
	,uint32_t  signalSemaphoreValuesCount_
	,const uint64_t* pSignalSemaphoreValues_)
		:waitSemaphoreValuesCount(waitSemaphoreValuesCount_)
		,pWaitSemaphoreValues(pWaitSemaphoreValues_)
		,signalSemaphoreValuesCount(signalSemaphoreValuesCount_)
		,pSignalSemaphoreValues(pSignalSemaphoreValues_)
{
}

S_semaphore_get_win32_handle_info_KHR::S_semaphore_get_win32_handle_info_KHR(
	 VkSemaphore  semaphore_
	,F_external_semaphore_handle_type  handleType_)
		:semaphore(semaphore_)
		,handleType(handleType_)
{
}

S_import_semaphore_fd_info_KHR::S_import_semaphore_fd_info_KHR(
	 VkSemaphore  semaphore_
	,F_semaphore_import  flags_
	,F_external_semaphore_handle_type  handleType_
	,int  fd_)
		:semaphore(semaphore_)
		,flags(flags_)
		,handleType(handleType_)
		,fd(fd_)
{
}

S_semaphore_get_fd_info_KHR::S_semaphore_get_fd_info_KHR(
	 VkSemaphore  semaphore_
	,F_external_semaphore_handle_type  handleType_)
		:semaphore(semaphore_)
		,handleType(handleType_)
{
}

S_physical_device_external_fence_info::S_physical_device_external_fence_info(
	 F_external_fence_handle_type  handleType_)
		:handleType(handleType_)
{
}

S_external_fence_properties::S_external_fence_properties(
	 F_external_fence_handle_type  exportFromImportedHandleTypes_
	,F_external_fence_handle_type  compatibleHandleTypes_
	,F_external_fence_feature  externalFenceFeatures_)
		:exportFromImportedHandleTypes(exportFromImportedHandleTypes_)
		,compatibleHandleTypes(compatibleHandleTypes_)
		,externalFenceFeatures(externalFenceFeatures_)
{
}

S_export_fence_create_info::S_export_fence_create_info(
	 F_external_fence_handle_type  handleTypes_)
		:handleTypes(handleTypes_)
{
}

S_import_fence_win32_handle_info_KHR::S_import_fence_win32_handle_info_KHR(
	 VkFence  fence_
	,F_fence_import  flags_
	,F_external_fence_handle_type  handleType_
	,HANDLE  handle_
	,LPCWSTR  name_)
		:fence(fence_)
		,flags(flags_)
		,handleType(handleType_)
		,handle(handle_)
		,name(name_)
{
}

S_export_fence_win32_handle_info_KHR::S_export_fence_win32_handle_info_KHR(
	 const SECURITY_ATTRIBUTES* pAttributes_
	,DWORD  dwAccess_
	,LPCWSTR  name_)
		:pAttributes(pAttributes_)
		,dwAccess(dwAccess_)
		,name(name_)
{
}

S_fence_get_win32_handle_info_KHR::S_fence_get_win32_handle_info_KHR(
	 VkFence  fence_
	,F_external_fence_handle_type  handleType_)
		:fence(fence_)
		,handleType(handleType_)
{
}

S_import_fence_fd_info_KHR::S_import_fence_fd_info_KHR(
	 VkFence  fence_
	,F_fence_import  flags_
	,F_external_fence_handle_type  handleType_
	,int  fd_)
		:fence(fence_)
		,flags(flags_)
		,handleType(handleType_)
		,fd(fd_)
{
}

S_fence_get_fd_info_KHR::S_fence_get_fd_info_KHR(
	 VkFence  fence_
	,F_external_fence_handle_type  handleType_)
		:fence(fence_)
		,handleType(handleType_)
{
}

S_physical_device_multiview_features::S_physical_device_multiview_features(
	 VkBool32  multiview_
	,VkBool32  multiviewGeometryShader_
	,VkBool32  multiviewTessellationShader_)
		:multiview(multiview_)
		,multiviewGeometryShader(multiviewGeometryShader_)
		,multiviewTessellationShader(multiviewTessellationShader_)
{
}

S_physical_device_multiview_properties::S_physical_device_multiview_properties(
	 uint32_t  maxMultiviewViewCount_
	,uint32_t  maxMultiviewInstanceIndex_)
		:maxMultiviewViewCount(maxMultiviewViewCount_)
		,maxMultiviewInstanceIndex(maxMultiviewInstanceIndex_)
{
}

S_render_pass_multiview_create_info::S_render_pass_multiview_create_info(
	 uint32_t  subpassCount_
	,const uint32_t*     pViewMasks_
	,uint32_t  dependencyCount_
	,const int32_t*   pViewOffsets_
	,uint32_t  correlationMaskCount_
	,const uint32_t* pCorrelationMasks_)
		:subpassCount(subpassCount_)
		,pViewMasks(pViewMasks_)
		,dependencyCount(dependencyCount_)
		,pViewOffsets(pViewOffsets_)
		,correlationMaskCount(correlationMaskCount_)
		,pCorrelationMasks(pCorrelationMasks_)
{
}

S_surface_capabilities2_EXT::S_surface_capabilities2_EXT(
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
	,F_surface_counter_ext  supportedSurfaceCounters_)
		:minImageCount(minImageCount_)
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
{
}

S_display_power_info_EXT::S_display_power_info_EXT(
	 E_display_power_state_EXT  powerState_)
		:powerState(powerState_)
{
}

S_device_event_info_EXT::S_device_event_info_EXT(
	 E_device_event_type_EXT  deviceEvent_)
		:deviceEvent(deviceEvent_)
{
}

S_display_event_info_EXT::S_display_event_info_EXT(
	 E_display_event_type_EXT  displayEvent_)
		:displayEvent(displayEvent_)
{
}

S_swapchain_counter_create_info_EXT::S_swapchain_counter_create_info_EXT(
	 F_surface_counter_ext  surfaceCounters_)
		:surfaceCounters(surfaceCounters_)
{
}

S_physical_device_group_properties::S_physical_device_group_properties(
	 uint32_t  physicalDeviceCount_
	,std::array< VkPhysicalDevice ,VK_MAX_DEVICE_GROUP_SIZE > physicalDevices_
	,VkBool32  subsetAllocation_)
		:physicalDeviceCount(physicalDeviceCount_)
		,subsetAllocation(subsetAllocation_)
{
memcpy(&physicalDevices,physicalDevices_.data(),VK_MAX_DEVICE_GROUP_SIZE*sizeof(decltype(physicalDevices)) );
}

S_memory_allocate_flags_info::S_memory_allocate_flags_info(
	 F_memory_allocate  flags_
	,uint32_t  deviceMask_)
		:flags(flags_)
		,deviceMask(deviceMask_)
{
}

S_bind_buffer_memory_device_group_info::S_bind_buffer_memory_device_group_info(
	 uint32_t  deviceIndexCount_
	,const uint32_t*  pDeviceIndices_)
		:deviceIndexCount(deviceIndexCount_)
		,pDeviceIndices(pDeviceIndices_)
{
}

S_bind_image_memory_device_group_info::S_bind_image_memory_device_group_info(
	 uint32_t  deviceIndexCount_
	,const uint32_t*  pDeviceIndices_
	,uint32_t  splitInstanceBindRegionCount_
	,const S_rect_2d*  pSplitInstanceBindRegions_)
		:deviceIndexCount(deviceIndexCount_)
		,pDeviceIndices(pDeviceIndices_)
		,splitInstanceBindRegionCount(splitInstanceBindRegionCount_)
		,pSplitInstanceBindRegions(pSplitInstanceBindRegions_)
{
}

S_device_group_render_pass_begin_info::S_device_group_render_pass_begin_info(
	 uint32_t  deviceMask_
	,uint32_t  deviceRenderAreaCount_
	,const S_rect_2d*  pDeviceRenderAreas_)
		:deviceMask(deviceMask_)
		,deviceRenderAreaCount(deviceRenderAreaCount_)
		,pDeviceRenderAreas(pDeviceRenderAreas_)
{
}

S_device_group_command_buffer_begin_info::S_device_group_command_buffer_begin_info(
	 uint32_t  deviceMask_)
		:deviceMask(deviceMask_)
{
}

S_device_group_submit_info::S_device_group_submit_info(
	 uint32_t  waitSemaphoreCount_
	,const uint32_t*    pWaitSemaphoreDeviceIndices_
	,uint32_t  commandBufferCount_
	,const uint32_t*    pCommandBufferDeviceMasks_
	,uint32_t  signalSemaphoreCount_
	,const uint32_t*  pSignalSemaphoreDeviceIndices_)
		:waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphoreDeviceIndices(pWaitSemaphoreDeviceIndices_)
		,commandBufferCount(commandBufferCount_)
		,pCommandBufferDeviceMasks(pCommandBufferDeviceMasks_)
		,signalSemaphoreCount(signalSemaphoreCount_)
		,pSignalSemaphoreDeviceIndices(pSignalSemaphoreDeviceIndices_)
{
}

S_device_group_bind_sparse_info::S_device_group_bind_sparse_info(
	 uint32_t  resourceDeviceIndex_
	,uint32_t  memoryDeviceIndex_)
		:resourceDeviceIndex(resourceDeviceIndex_)
		,memoryDeviceIndex(memoryDeviceIndex_)
{
}

S_device_group_present_capabilities_KHR::S_device_group_present_capabilities_KHR(
	 std::array< uint32_t ,VK_MAX_DEVICE_GROUP_SIZE > presentMask_
	,F_device_group_present_mode_khr  modes_)
		:modes(modes_)
{
memcpy(&presentMask,presentMask_.data(),VK_MAX_DEVICE_GROUP_SIZE*sizeof(decltype(presentMask)) );
}

S_image_swapchain_create_info_KHR::S_image_swapchain_create_info_KHR(
	 VkSwapchainKHR  swapchain_)
		:swapchain(swapchain_)
{
}

S_bind_image_memory_swapchain_info_KHR::S_bind_image_memory_swapchain_info_KHR(
	 VkSwapchainKHR  swapchain_
	,uint32_t  imageIndex_)
		:swapchain(swapchain_)
		,imageIndex(imageIndex_)
{
}

S_acquire_next_image_info_KHR::S_acquire_next_image_info_KHR(
	 VkSwapchainKHR  swapchain_
	,uint64_t  timeout_
	,VkSemaphore  semaphore_
	,VkFence  fence_
	,uint32_t  deviceMask_)
		:swapchain(swapchain_)
		,timeout(timeout_)
		,semaphore(semaphore_)
		,fence(fence_)
		,deviceMask(deviceMask_)
{
}

S_device_group_present_info_KHR::S_device_group_present_info_KHR(
	 uint32_t  swapchainCount_
	,const uint32_t* pDeviceMasks_
	,F_device_group_present_mode_khr  mode_)
		:swapchainCount(swapchainCount_)
		,pDeviceMasks(pDeviceMasks_)
		,mode(mode_)
{
}

S_device_group_device_create_info::S_device_group_device_create_info(
	 uint32_t  physicalDeviceCount_
	,const VkPhysicalDevice*  pPhysicalDevices_)
		:physicalDeviceCount(physicalDeviceCount_)
		,pPhysicalDevices(pPhysicalDevices_)
{
}

S_device_group_swapchain_create_info_KHR::S_device_group_swapchain_create_info_KHR(
	 F_device_group_present_mode_khr  modes_)
		:modes(modes_)
{
}

S_descriptor_update_template_create_info::S_descriptor_update_template_create_info(
	 VkDescriptorUpdateTemplateCreateFlags  flags_
	,uint32_t  descriptorUpdateEntryCount_
	,const S_descriptor_update_template_entry* pDescriptorUpdateEntries_
	,E_descriptor_update_template_type  templateType_
	,VkDescriptorSetLayout  descriptorSetLayout_
	,E_pipeline_bind_point  pipelineBindPoint_
	,VkPipelineLayout pipelineLayout_
	,uint32_t  set_)
		:flags(flags_)
		,descriptorUpdateEntryCount(descriptorUpdateEntryCount_)
		,pDescriptorUpdateEntries(pDescriptorUpdateEntries_)
		,templateType(templateType_)
		,descriptorSetLayout(descriptorSetLayout_)
		,pipelineBindPoint(pipelineBindPoint_)
		,pipelineLayout(pipelineLayout_)
		,set(set_)
{
}

S_hdr_metadata_EXT::S_hdr_metadata_EXT(
	 S_xy_color_EXT  displayPrimaryRed_
	,S_xy_color_EXT  displayPrimaryGreen_
	,S_xy_color_EXT  displayPrimaryBlue_
	,S_xy_color_EXT  whitePoint_
	,float  maxLuminance_
	,float  minLuminance_
	,float  maxContentLightLevel_
	,float  maxFrameAverageLightLevel_)
		:displayPrimaryRed(displayPrimaryRed_)
		,displayPrimaryGreen(displayPrimaryGreen_)
		,displayPrimaryBlue(displayPrimaryBlue_)
		,whitePoint(whitePoint_)
		,maxLuminance(maxLuminance_)
		,minLuminance(minLuminance_)
		,maxContentLightLevel(maxContentLightLevel_)
		,maxFrameAverageLightLevel(maxFrameAverageLightLevel_)
{
}

S_present_times_info_GOOGLE::S_present_times_info_GOOGLE(
	 uint32_t  swapchainCount_
	,const S_present_time_GOOGLE*   pTimes_)
		:swapchainCount(swapchainCount_)
		,pTimes(pTimes_)
{
}

#ifdef VK_USE_PLATFORM_IOS_MVK
S_ios_surface_create_info_MVK::S_ios_surface_create_info_MVK(
	 VkIOSSurfaceCreateFlagsMVK  flags_
	,const void*                                    pView_)
		:flags(flags_)
		,pView(pView_)
{
}

#endif

#ifdef VK_USE_PLATFORM_MACOS_MVK
S_mac_os_surface_create_info_MVK::S_mac_os_surface_create_info_MVK(
	 VkMacOSSurfaceCreateFlagsMVK  flags_
	,const void*                                    pView_)
		:flags(flags_)
		,pView(pView_)
{
}

#endif

S_pipeline_viewport_w_scaling_state_create_info_NV::S_pipeline_viewport_w_scaling_state_create_info_NV(
	 VkBool32  viewportWScalingEnable_
	,uint32_t  viewportCount_
	,const S_viewport_w_scaling_NV*      pViewportWScalings_)
		:viewportWScalingEnable(viewportWScalingEnable_)
		,viewportCount(viewportCount_)
		,pViewportWScalings(pViewportWScalings_)
{
}

S_pipeline_viewport_swizzle_state_create_info_NV::S_pipeline_viewport_swizzle_state_create_info_NV(
	 VkPipelineViewportSwizzleStateCreateFlagsNV  flags_
	,uint32_t  viewportCount_
	,const S_viewport_swizzle_NV*      pViewportSwizzles_)
		:flags(flags_)
		,viewportCount(viewportCount_)
		,pViewportSwizzles(pViewportSwizzles_)
{
}

S_physical_device_discard_rectangle_properties_EXT::S_physical_device_discard_rectangle_properties_EXT(
	 uint32_t  maxDiscardRectangles_)
		:maxDiscardRectangles(maxDiscardRectangles_)
{
}

S_pipeline_discard_rectangle_state_create_info_EXT::S_pipeline_discard_rectangle_state_create_info_EXT(
	 VkPipelineDiscardRectangleStateCreateFlagsEXT  flags_
	,E_discard_rectangle_mode_EXT  discardRectangleMode_
	,uint32_t  discardRectangleCount_
	,const S_rect_2d* pDiscardRectangles_)
		:flags(flags_)
		,discardRectangleMode(discardRectangleMode_)
		,discardRectangleCount(discardRectangleCount_)
		,pDiscardRectangles(pDiscardRectangles_)
{
}

S_physical_device_multiview_per_view_attributes_properties_NVX::S_physical_device_multiview_per_view_attributes_properties_NVX(
	 VkBool32  perViewPositionAllComponents_)
		:perViewPositionAllComponents(perViewPositionAllComponents_)
{
}

S_render_pass_input_attachment_aspect_create_info::S_render_pass_input_attachment_aspect_create_info(
	 uint32_t  aspectReferenceCount_
	,const S_input_attachment_aspect_reference* pAspectReferences_)
		:aspectReferenceCount(aspectReferenceCount_)
		,pAspectReferences(pAspectReferences_)
{
}

S_physical_device_surface_info2_KHR::S_physical_device_surface_info2_KHR(
	 VkSurfaceKHR  surface_)
		:surface(surface_)
{
}

S_surface_format2_KHR::S_surface_format2_KHR(
	 S_surface_format_KHR  surfaceFormat_)
		:surfaceFormat(surfaceFormat_)
{
}

S_display_properties2_KHR::S_display_properties2_KHR(
	 S_display_properties_KHR  displayProperties_)
		:displayProperties(displayProperties_)
{
}

S_display_plane_properties2_KHR::S_display_plane_properties2_KHR(
	 S_display_plane_properties_KHR  displayPlaneProperties_)
		:displayPlaneProperties(displayPlaneProperties_)
{
}

S_display_mode_properties2_KHR::S_display_mode_properties2_KHR(
	 S_display_mode_properties_KHR  displayModeProperties_)
		:displayModeProperties(displayModeProperties_)
{
}

S_display_plane_info2_KHR::S_display_plane_info2_KHR(
	 VkDisplayModeKHR  mode_
	,uint32_t  planeIndex_)
		:mode(mode_)
		,planeIndex(planeIndex_)
{
}

S_display_plane_capabilities2_KHR::S_display_plane_capabilities2_KHR(
	 S_display_plane_capabilities_KHR  capabilities_)
		:capabilities(capabilities_)
{
}

S_shared_present_surface_capabilities_KHR::S_shared_present_surface_capabilities_KHR(
	 F_image_usage  sharedPresentSupportedUsageFlags_)
		:sharedPresentSupportedUsageFlags(sharedPresentSupportedUsageFlags_)
{
}

S_physical_device_16bit_storage_features::S_physical_device_16bit_storage_features(
	 VkBool32  storageBuffer16BitAccess_
	,VkBool32  uniformAndStorageBuffer16BitAccess_
	,VkBool32  storagePushConstant16_
	,VkBool32  storageInputOutput16_)
		:storageBuffer16BitAccess(storageBuffer16BitAccess_)
		,uniformAndStorageBuffer16BitAccess(uniformAndStorageBuffer16BitAccess_)
		,storagePushConstant16(storagePushConstant16_)
		,storageInputOutput16(storageInputOutput16_)
{
}

S_physical_device_subgroup_properties::S_physical_device_subgroup_properties(
	 uint32_t  subgroupSize_
	,F_shader_stage  supportedStages_
	,F_subgroup_feature  supportedOperations_
	,VkBool32  quadOperationsInAllStages_)
		:subgroupSize(subgroupSize_)
		,supportedStages(supportedStages_)
		,supportedOperations(supportedOperations_)
		,quadOperationsInAllStages(quadOperationsInAllStages_)
{
}

S_buffer_memory_requirements_info2::S_buffer_memory_requirements_info2(
	 VkBuffer  buffer_)
		:buffer(buffer_)
{
}

S_image_sparse_memory_requirements_info2::S_image_sparse_memory_requirements_info2(
	 VkImage  image_)
		:image(image_)
{
}

S_sparse_image_memory_requirements2::S_sparse_image_memory_requirements2(
	 S_sparse_image_memory_requirements  memoryRequirements_)
		:memoryRequirements(memoryRequirements_)
{
}

S_physical_device_point_clipping_properties::S_physical_device_point_clipping_properties(
	 E_point_clipping_behavior  pointClippingBehavior_)
		:pointClippingBehavior(pointClippingBehavior_)
{
}

S_memory_dedicated_requirements::S_memory_dedicated_requirements(
	 VkBool32  prefersDedicatedAllocation_
	,VkBool32  requiresDedicatedAllocation_)
		:prefersDedicatedAllocation(prefersDedicatedAllocation_)
		,requiresDedicatedAllocation(requiresDedicatedAllocation_)
{
}

S_memory_dedicated_allocate_info::S_memory_dedicated_allocate_info(
	 VkImage  image_
	,VkBuffer  buffer_)
		:image(image_)
		,buffer(buffer_)
{
}

S_image_view_usage_create_info::S_image_view_usage_create_info(
	 F_image_usage  usage_)
		:usage(usage_)
{
}

S_pipeline_tessellation_domain_origin_state_create_info::S_pipeline_tessellation_domain_origin_state_create_info(
	 E_tessellation_domain_origin  domainOrigin_)
		:domainOrigin(domainOrigin_)
{
}

S_sampler_ycbcr_conversion_info::S_sampler_ycbcr_conversion_info(
	 VkSamplerYcbcrConversion  conversion_)
		:conversion(conversion_)
{
}

S_bind_image_plane_memory_info::S_bind_image_plane_memory_info(
	 F_image_aspect  planeAspect_)
		:planeAspect(planeAspect_)
{
}

S_image_plane_memory_requirements_info::S_image_plane_memory_requirements_info(
	 F_image_aspect  planeAspect_)
		:planeAspect(planeAspect_)
{
}

S_physical_device_sampler_ycbcr_conversion_features::S_physical_device_sampler_ycbcr_conversion_features(
	 VkBool32  samplerYcbcrConversion_)
		:samplerYcbcrConversion(samplerYcbcrConversion_)
{
}

S_sampler_ycbcr_conversion_image_format_properties::S_sampler_ycbcr_conversion_image_format_properties(
	 uint32_t  combinedImageSamplerDescriptorCount_)
		:combinedImageSamplerDescriptorCount(combinedImageSamplerDescriptorCount_)
{
}

S_texture_lod_gather_format_properties_AMD::S_texture_lod_gather_format_properties_AMD(
	 VkBool32  supportsTextureGatherLODBiasAMD_)
		:supportsTextureGatherLODBiasAMD(supportsTextureGatherLODBiasAMD_)
{
}

S_conditional_rendering_begin_info_EXT::S_conditional_rendering_begin_info_EXT(
	 VkBuffer  buffer_
	,VkDeviceSize  offset_
	,F_conditional_rendering_ext  flags_)
		:buffer(buffer_)
		,offset(offset_)
		,flags(flags_)
{
}

S_protected_submit_info::S_protected_submit_info(
	 VkBool32  protectedSubmit_)
		:protectedSubmit(protectedSubmit_)
{
}

S_physical_device_protected_memory_features::S_physical_device_protected_memory_features(
	 VkBool32  protectedMemory_)
		:protectedMemory(protectedMemory_)
{
}

S_physical_device_protected_memory_properties::S_physical_device_protected_memory_properties(
	 VkBool32  protectedNoFault_)
		:protectedNoFault(protectedNoFault_)
{
}

S_device_queue_info2::S_device_queue_info2(
	 F_device_queue_create  flags_
	,uint32_t  queueFamilyIndex_
	,uint32_t  queueIndex_)
		:flags(flags_)
		,queueFamilyIndex(queueFamilyIndex_)
		,queueIndex(queueIndex_)
{
}

S_pipeline_coverage_to_color_state_create_info_NV::S_pipeline_coverage_to_color_state_create_info_NV(
	 VkPipelineCoverageToColorStateCreateFlagsNV  flags_
	,VkBool32  coverageToColorEnable_
	,uint32_t  coverageToColorLocation_)
		:flags(flags_)
		,coverageToColorEnable(coverageToColorEnable_)
		,coverageToColorLocation(coverageToColorLocation_)
{
}

S_physical_device_sampler_filter_minmax_properties_EXT::S_physical_device_sampler_filter_minmax_properties_EXT(
	 VkBool32  filterMinmaxSingleComponentFormats_
	,VkBool32  filterMinmaxImageComponentMapping_)
		:filterMinmaxSingleComponentFormats(filterMinmaxSingleComponentFormats_)
		,filterMinmaxImageComponentMapping(filterMinmaxImageComponentMapping_)
{
}

S_sample_locations_info_EXT::S_sample_locations_info_EXT(
	 F_sample_count  sampleLocationsPerPixel_
	,S_extent_2d  sampleLocationGridSize_
	,uint32_t  sampleLocationsCount_
	,const S_sample_location_EXT* pSampleLocations_)
		:sampleLocationsPerPixel(sampleLocationsPerPixel_)
		,sampleLocationGridSize(sampleLocationGridSize_)
		,sampleLocationsCount(sampleLocationsCount_)
		,pSampleLocations(pSampleLocations_)
{
}

S_render_pass_sample_locations_begin_info_EXT::S_render_pass_sample_locations_begin_info_EXT(
	 uint32_t  attachmentInitialSampleLocationsCount_
	,const S_attachment_sample_locations_EXT* pAttachmentInitialSampleLocations_
	,uint32_t  postSubpassSampleLocationsCount_
	,const S_subpass_sample_locations_EXT* pPostSubpassSampleLocations_)
		:attachmentInitialSampleLocationsCount(attachmentInitialSampleLocationsCount_)
		,pAttachmentInitialSampleLocations(pAttachmentInitialSampleLocations_)
		,postSubpassSampleLocationsCount(postSubpassSampleLocationsCount_)
		,pPostSubpassSampleLocations(pPostSubpassSampleLocations_)
{
}

S_pipeline_sample_locations_state_create_info_EXT::S_pipeline_sample_locations_state_create_info_EXT(
	 VkBool32  sampleLocationsEnable_
	,S_sample_locations_info_EXT  sampleLocationsInfo_)
		:sampleLocationsEnable(sampleLocationsEnable_)
		,sampleLocationsInfo(sampleLocationsInfo_)
{
}

S_physical_device_sample_locations_properties_EXT::S_physical_device_sample_locations_properties_EXT(
	 F_sample_count  sampleLocationSampleCounts_
	,S_extent_2d  maxSampleLocationGridSize_
	,std::array< float ,2 > sampleLocationCoordinateRange_
	,uint32_t  sampleLocationSubPixelBits_
	,VkBool32  variableSampleLocations_)
		:sampleLocationSampleCounts(sampleLocationSampleCounts_)
		,maxSampleLocationGridSize(maxSampleLocationGridSize_)
		,sampleLocationSubPixelBits(sampleLocationSubPixelBits_)
		,variableSampleLocations(variableSampleLocations_)
{
memcpy(&sampleLocationCoordinateRange,sampleLocationCoordinateRange_.data(),2*sizeof(decltype(sampleLocationCoordinateRange)) );
}

S_multisample_properties_EXT::S_multisample_properties_EXT(
	 S_extent_2d  maxSampleLocationGridSize_)
		:maxSampleLocationGridSize(maxSampleLocationGridSize_)
{
}

S_sampler_reduction_mode_create_info_EXT::S_sampler_reduction_mode_create_info_EXT(
	 E_sampler_reduction_mode_EXT  reductionMode_)
		:reductionMode(reductionMode_)
{
}

S_physical_device_blend_operation_advanced_features_EXT::S_physical_device_blend_operation_advanced_features_EXT(
	 VkBool32  advancedBlendCoherentOperations_)
		:advancedBlendCoherentOperations(advancedBlendCoherentOperations_)
{
}

S_physical_device_blend_operation_advanced_properties_EXT::S_physical_device_blend_operation_advanced_properties_EXT(
	 uint32_t  advancedBlendMaxColorAttachments_
	,VkBool32  advancedBlendIndependentBlend_
	,VkBool32  advancedBlendNonPremultipliedSrcColor_
	,VkBool32  advancedBlendNonPremultipliedDstColor_
	,VkBool32  advancedBlendCorrelatedOverlap_
	,VkBool32  advancedBlendAllOperations_)
		:advancedBlendMaxColorAttachments(advancedBlendMaxColorAttachments_)
		,advancedBlendIndependentBlend(advancedBlendIndependentBlend_)
		,advancedBlendNonPremultipliedSrcColor(advancedBlendNonPremultipliedSrcColor_)
		,advancedBlendNonPremultipliedDstColor(advancedBlendNonPremultipliedDstColor_)
		,advancedBlendCorrelatedOverlap(advancedBlendCorrelatedOverlap_)
		,advancedBlendAllOperations(advancedBlendAllOperations_)
{
}

S_pipeline_color_blend_advanced_state_create_info_EXT::S_pipeline_color_blend_advanced_state_create_info_EXT(
	 VkBool32  srcPremultiplied_
	,VkBool32  dstPremultiplied_
	,E_blend_overlap_EXT  blendOverlap_)
		:srcPremultiplied(srcPremultiplied_)
		,dstPremultiplied(dstPremultiplied_)
		,blendOverlap(blendOverlap_)
{
}

S_physical_device_inline_uniform_block_features_EXT::S_physical_device_inline_uniform_block_features_EXT(
	 VkBool32  inlineUniformBlock_
	,VkBool32  descriptorBindingInlineUniformBlockUpdateAfterBind_)
		:inlineUniformBlock(inlineUniformBlock_)
		,descriptorBindingInlineUniformBlockUpdateAfterBind(descriptorBindingInlineUniformBlockUpdateAfterBind_)
{
}

S_physical_device_inline_uniform_block_properties_EXT::S_physical_device_inline_uniform_block_properties_EXT(
	 uint32_t  maxInlineUniformBlockSize_
	,uint32_t  maxPerStageDescriptorInlineUniformBlocks_
	,uint32_t  maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_
	,uint32_t  maxDescriptorSetInlineUniformBlocks_
	,uint32_t  maxDescriptorSetUpdateAfterBindInlineUniformBlocks_)
		:maxInlineUniformBlockSize(maxInlineUniformBlockSize_)
		,maxPerStageDescriptorInlineUniformBlocks(maxPerStageDescriptorInlineUniformBlocks_)
		,maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks(maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks_)
		,maxDescriptorSetInlineUniformBlocks(maxDescriptorSetInlineUniformBlocks_)
		,maxDescriptorSetUpdateAfterBindInlineUniformBlocks(maxDescriptorSetUpdateAfterBindInlineUniformBlocks_)
{
}

S_write_descriptor_set_inline_uniform_block_EXT::S_write_descriptor_set_inline_uniform_block_EXT(
	 uint32_t  dataSize_
	,const void* pData_)
		:dataSize(dataSize_)
		,pData(pData_)
{
}

S_descriptor_pool_inline_uniform_block_create_info_EXT::S_descriptor_pool_inline_uniform_block_create_info_EXT(
	 uint32_t  maxInlineUniformBlockBindings_)
		:maxInlineUniformBlockBindings(maxInlineUniformBlockBindings_)
{
}

S_pipeline_coverage_modulation_state_create_info_NV::S_pipeline_coverage_modulation_state_create_info_NV(
	 VkPipelineCoverageModulationStateCreateFlagsNV  flags_
	,E_coverage_modulation_mode_NV  coverageModulationMode_
	,VkBool32  coverageModulationTableEnable_
	,uint32_t  coverageModulationTableCount_
	,const float* pCoverageModulationTable_)
		:flags(flags_)
		,coverageModulationMode(coverageModulationMode_)
		,coverageModulationTableEnable(coverageModulationTableEnable_)
		,coverageModulationTableCount(coverageModulationTableCount_)
		,pCoverageModulationTable(pCoverageModulationTable_)
{
}

S_image_format_list_create_info_KHR::S_image_format_list_create_info_KHR(
	 uint32_t  viewFormatCount_
	,const E_format*      pViewFormats_)
		:viewFormatCount(viewFormatCount_)
		,pViewFormats(pViewFormats_)
{
}

S_validation_cache_create_info_EXT::S_validation_cache_create_info_EXT(
	 VkValidationCacheCreateFlagsEXT  flags_
	,size_t  initialDataSize_
	,const void*            pInitialData_)
		:flags(flags_)
		,initialDataSize(initialDataSize_)
		,pInitialData(pInitialData_)
{
}

S_shader_module_validation_cache_create_info_EXT::S_shader_module_validation_cache_create_info_EXT(
	 VkValidationCacheEXT  validationCache_)
		:validationCache(validationCache_)
{
}

S_physical_device_maintenance3_properties::S_physical_device_maintenance3_properties(
	 uint32_t  maxPerSetDescriptors_
	,VkDeviceSize  maxMemoryAllocationSize_)
		:maxPerSetDescriptors(maxPerSetDescriptors_)
		,maxMemoryAllocationSize(maxMemoryAllocationSize_)
{
}

S_physical_device_shader_draw_parameter_features::S_physical_device_shader_draw_parameter_features(
	 VkBool32  shaderDrawParameters_)
		:shaderDrawParameters(shaderDrawParameters_)
{
}

S_native_buffer_ANDROID::S_native_buffer_ANDROID(
	 const void* handle_
	,int  stride_
	,int  format_
	,int  usage_)
		:handle(handle_)
		,stride(stride_)
		,format(format_)
		,usage(usage_)
{
}

S_device_queue_global_priority_create_info_EXT::S_device_queue_global_priority_create_info_EXT(
	 E_queue_global_priority_EXT  globalPriority_)
		:globalPriority(globalPriority_)
{
}

S_debug_utils_object_name_info_EXT::S_debug_utils_object_name_info_EXT(
	 E_object_type  objectType_
	,uint64_t  objectHandle_
	,const char*      pObjectName_)
		:objectType(objectType_)
		,objectHandle(objectHandle_)
		,pObjectName(pObjectName_)
{
}

S_debug_utils_object_tag_info_EXT::S_debug_utils_object_tag_info_EXT(
	 E_object_type  objectType_
	,uint64_t  objectHandle_
	,uint64_t  tagName_
	,size_t  tagSize_
	,const void*              pTag_)
		:objectType(objectType_)
		,objectHandle(objectHandle_)
		,tagName(tagName_)
		,tagSize(tagSize_)
		,pTag(pTag_)
{
}

S_debug_utils_label_EXT::S_debug_utils_label_EXT(
	 const char*      pLabelName_
	,std::array< float ,4 > color_)
		:pLabelName(pLabelName_)
{
memcpy(&color,color_.data(),4*sizeof(decltype(color)) );
}

S_debug_utils_messenger_create_info_EXT::S_debug_utils_messenger_create_info_EXT(
	 VkDebugUtilsMessengerCreateFlagsEXT  flags_
	,F_debug_utils_message_severity_ext  messageSeverity_
	,F_debug_utils_message_type_ext  messageType_
	,PFN_vkDebugUtilsMessengerCallbackEXT  pfnUserCallback_
	,void*                                pUserData_)
		:flags(flags_)
		,messageSeverity(messageSeverity_)
		,messageType(messageType_)
		,pfnUserCallback(pfnUserCallback_)
		,pUserData(pUserData_)
{
}

S_debug_utils_messenger_callback_data_EXT::S_debug_utils_messenger_callback_data_EXT(
	 VkDebugUtilsMessengerCallbackDataFlagsEXT  flags_
	,const char*                                  pMessageIdName_
	,int32_t  messageIdNumber_
	,const char*                                                  pMessage_
	,uint32_t  queueLabelCount_
	,S_debug_utils_label_EXT*  pQueueLabels_
	,uint32_t  cmdBufLabelCount_
	,S_debug_utils_label_EXT* pCmdBufLabels_
	,uint32_t  objectCount_
	,S_debug_utils_object_name_info_EXT*             pObjects_)
		:flags(flags_)
		,pMessageIdName(pMessageIdName_)
		,messageIdNumber(messageIdNumber_)
		,pMessage(pMessage_)
		,queueLabelCount(queueLabelCount_)
		,pQueueLabels(pQueueLabels_)
		,cmdBufLabelCount(cmdBufLabelCount_)
		,pCmdBufLabels(pCmdBufLabels_)
		,objectCount(objectCount_)
		,pObjects(pObjects_)
{
}

S_import_memory_host_pointer_info_EXT::S_import_memory_host_pointer_info_EXT(
	 F_external_memory_handle_type  handleType_
	,void* pHostPointer_)
		:handleType(handleType_)
		,pHostPointer(pHostPointer_)
{
}

S_memory_host_pointer_properties_EXT::S_memory_host_pointer_properties_EXT(
	 uint32_t  memoryTypeBits_)
		:memoryTypeBits(memoryTypeBits_)
{
}

S_physical_device_external_memory_host_properties_EXT::S_physical_device_external_memory_host_properties_EXT(
	 VkDeviceSize  minImportedHostPointerAlignment_)
		:minImportedHostPointerAlignment(minImportedHostPointerAlignment_)
{
}

S_physical_device_conservative_rasterization_properties_EXT::S_physical_device_conservative_rasterization_properties_EXT(
	 float  primitiveOverestimationSize_
	,float  maxExtraPrimitiveOverestimationSize_
	,float  extraPrimitiveOverestimationSizeGranularity_
	,VkBool32  primitiveUnderestimation_
	,VkBool32  conservativePointAndLineRasterization_
	,VkBool32  degenerateTrianglesRasterized_
	,VkBool32  degenerateLinesRasterized_
	,VkBool32  fullyCoveredFragmentShaderInputVariable_
	,VkBool32  conservativeRasterizationPostDepthCoverage_)
		:primitiveOverestimationSize(primitiveOverestimationSize_)
		,maxExtraPrimitiveOverestimationSize(maxExtraPrimitiveOverestimationSize_)
		,extraPrimitiveOverestimationSizeGranularity(extraPrimitiveOverestimationSizeGranularity_)
		,primitiveUnderestimation(primitiveUnderestimation_)
		,conservativePointAndLineRasterization(conservativePointAndLineRasterization_)
		,degenerateTrianglesRasterized(degenerateTrianglesRasterized_)
		,degenerateLinesRasterized(degenerateLinesRasterized_)
		,fullyCoveredFragmentShaderInputVariable(fullyCoveredFragmentShaderInputVariable_)
		,conservativeRasterizationPostDepthCoverage(conservativeRasterizationPostDepthCoverage_)
{
}

S_physical_device_shader_core_properties_AMD::S_physical_device_shader_core_properties_AMD(
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
	,uint32_t  vgprAllocationGranularity_)
		:shaderEngineCount(shaderEngineCount_)
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
{
}

S_pipeline_rasterization_conservative_state_create_info_EXT::S_pipeline_rasterization_conservative_state_create_info_EXT(
	 VkPipelineRasterizationConservativeStateCreateFlagsEXT  flags_
	,E_conservative_rasterization_mode_EXT  conservativeRasterizationMode_
	,float  extraPrimitiveOverestimationSize_)
		:flags(flags_)
		,conservativeRasterizationMode(conservativeRasterizationMode_)
		,extraPrimitiveOverestimationSize(extraPrimitiveOverestimationSize_)
{
}

S_physical_device_descriptor_indexing_features_EXT::S_physical_device_descriptor_indexing_features_EXT(
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
	,VkBool32  runtimeDescriptorArray_)
		:shaderInputAttachmentArrayDynamicIndexing(shaderInputAttachmentArrayDynamicIndexing_)
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
{
}

S_physical_device_descriptor_indexing_properties_EXT::S_physical_device_descriptor_indexing_properties_EXT(
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
	,uint32_t  maxDescriptorSetUpdateAfterBindInputAttachments_)
		:maxUpdateAfterBindDescriptorsInAllPools(maxUpdateAfterBindDescriptorsInAllPools_)
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
{
}

S_descriptor_set_layout_binding_flags_create_info_EXT::S_descriptor_set_layout_binding_flags_create_info_EXT(
	 uint32_t  bindingCount_
	,const F_descriptor_binding_ext* pBindingFlags_)
		:bindingCount(bindingCount_)
		,pBindingFlags(pBindingFlags_)
{
}

S_descriptor_set_variable_descriptor_count_allocate_info_EXT::S_descriptor_set_variable_descriptor_count_allocate_info_EXT(
	 uint32_t  descriptorSetCount_
	,const uint32_t* pDescriptorCounts_)
		:descriptorSetCount(descriptorSetCount_)
		,pDescriptorCounts(pDescriptorCounts_)
{
}

S_descriptor_set_variable_descriptor_count_layout_support_EXT::S_descriptor_set_variable_descriptor_count_layout_support_EXT(
	 uint32_t  maxVariableDescriptorCount_)
		:maxVariableDescriptorCount(maxVariableDescriptorCount_)
{
}

S_attachment_description2_KHR::S_attachment_description2_KHR(
	 F_attachment_description  flags_
	,E_format  format_
	,F_sample_count  samples_
	,E_attachment_load_op  loadOp_
	,E_attachment_store_op  storeOp_
	,E_attachment_load_op  stencilLoadOp_
	,E_attachment_store_op  stencilStoreOp_
	,E_image_layout  initialLayout_
	,E_image_layout  finalLayout_)
		:flags(flags_)
		,format(format_)
		,samples(samples_)
		,loadOp(loadOp_)
		,storeOp(storeOp_)
		,stencilLoadOp(stencilLoadOp_)
		,stencilStoreOp(stencilStoreOp_)
		,initialLayout(initialLayout_)
		,finalLayout(finalLayout_)
{
}

S_attachment_reference2_KHR::S_attachment_reference2_KHR(
	 uint32_t  attachment_
	,E_image_layout  layout_
	,F_image_aspect  aspectMask_)
		:attachment(attachment_)
		,layout(layout_)
		,aspectMask(aspectMask_)
{
}

S_subpass_description2_KHR::S_subpass_description2_KHR(
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
	,const uint32_t*               pPreserveAttachments_)
		:flags(flags_)
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
{
}

S_subpass_dependency2_KHR::S_subpass_dependency2_KHR(
	 uint32_t  srcSubpass_
	,uint32_t  dstSubpass_
	,F_pipeline_stage  srcStageMask_
	,F_pipeline_stage  dstStageMask_
	,F_access  srcAccessMask_
	,F_access  dstAccessMask_
	,F_dependency  dependencyFlags_
	,int32_t  viewOffset_)
		:srcSubpass(srcSubpass_)
		,dstSubpass(dstSubpass_)
		,srcStageMask(srcStageMask_)
		,dstStageMask(dstStageMask_)
		,srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
		,dependencyFlags(dependencyFlags_)
		,viewOffset(viewOffset_)
{
}

S_render_pass_create_info2_KHR::S_render_pass_create_info2_KHR(
	 F_render_pass_create  flags_
	,uint32_t  attachmentCount_
	,const S_attachment_description2_KHR* pAttachments_
	,uint32_t  subpassCount_
	,const S_subpass_description2_KHR*       pSubpasses_
	,uint32_t  dependencyCount_
	,const S_subpass_dependency2_KHR*     pDependencies_
	,uint32_t  correlatedViewMaskCount_
	,const uint32_t*            pCorrelatedViewMasks_)
		:flags(flags_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
		,subpassCount(subpassCount_)
		,pSubpasses(pSubpasses_)
		,dependencyCount(dependencyCount_)
		,pDependencies(pDependencies_)
		,correlatedViewMaskCount(correlatedViewMaskCount_)
		,pCorrelatedViewMasks(pCorrelatedViewMasks_)
{
}

S_subpass_begin_info_KHR::S_subpass_begin_info_KHR(
	 E_subpass_contents  contents_)
		:contents(contents_)
{
}

S_subpass_end_info_KHR::S_subpass_end_info_KHR(
)
{
}

S_pipeline_vertex_input_divisor_state_create_info_EXT::S_pipeline_vertex_input_divisor_state_create_info_EXT(
	 uint32_t  vertexBindingDivisorCount_
	,const S_vertex_input_binding_divisor_description_EXT*      pVertexBindingDivisors_)
		:vertexBindingDivisorCount(vertexBindingDivisorCount_)
		,pVertexBindingDivisors(pVertexBindingDivisors_)
{
}

S_physical_device_vertex_attribute_divisor_properties_EXT::S_physical_device_vertex_attribute_divisor_properties_EXT(
	 uint32_t  maxVertexAttribDivisor_)
		:maxVertexAttribDivisor(maxVertexAttribDivisor_)
{
}

S_import_android_hardware_buffer_info_ANDROID::S_import_android_hardware_buffer_info_ANDROID(
	 struct AHardwareBuffer*            buffer_)
		:buffer(buffer_)
{
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_hardware_buffer_usage_ANDROID::S_android_hardware_buffer_usage_ANDROID(
	 uint64_t  androidHardwareBufferUsage_)
		:androidHardwareBufferUsage(androidHardwareBufferUsage_)
{
}

#endif

S_memory_get_android_hardware_buffer_info_ANDROID::S_memory_get_android_hardware_buffer_info_ANDROID(
	 VkDeviceMemory  memory_)
		:memory(memory_)
{
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_hardware_buffer_format_properties_ANDROID::S_android_hardware_buffer_format_properties_ANDROID(
	 E_format  format_
	,uint64_t  externalFormat_
	,F_format_feature  formatFeatures_
	,S_component_mapping  samplerYcbcrConversionComponents_
	,E_sampler_ycbcr_model_conversion  suggestedYcbcrModel_
	,E_sampler_ycbcr_range  suggestedYcbcrRange_
	,E_chroma_location  suggestedXChromaOffset_
	,E_chroma_location  suggestedYChromaOffset_)
		:format(format_)
		,externalFormat(externalFormat_)
		,formatFeatures(formatFeatures_)
		,samplerYcbcrConversionComponents(samplerYcbcrConversionComponents_)
		,suggestedYcbcrModel(suggestedYcbcrModel_)
		,suggestedYcbcrRange(suggestedYcbcrRange_)
		,suggestedXChromaOffset(suggestedXChromaOffset_)
		,suggestedYChromaOffset(suggestedYChromaOffset_)
{
}

#endif

S_command_buffer_inheritance_conditional_rendering_info_EXT::S_command_buffer_inheritance_conditional_rendering_info_EXT(
	 VkBool32  conditionalRenderingEnable_)
		:conditionalRenderingEnable(conditionalRenderingEnable_)
{
}

S_external_format_ANDROID::S_external_format_ANDROID(
	 uint64_t  externalFormat_)
		:externalFormat(externalFormat_)
{
}

S_physical_device_8bit_storage_features_KHR::S_physical_device_8bit_storage_features_KHR(
	 VkBool32  storageBuffer8BitAccess_
	,VkBool32  uniformAndStorageBuffer8BitAccess_
	,VkBool32  storagePushConstant8_)
		:storageBuffer8BitAccess(storageBuffer8BitAccess_)
		,uniformAndStorageBuffer8BitAccess(uniformAndStorageBuffer8BitAccess_)
		,storagePushConstant8(storagePushConstant8_)
{
}

S_physical_device_conditional_rendering_features_EXT::S_physical_device_conditional_rendering_features_EXT(
	 VkBool32  conditionalRendering_
	,VkBool32  inheritedConditionalRendering_)
		:conditionalRendering(conditionalRendering_)
		,inheritedConditionalRendering(inheritedConditionalRendering_)
{
}

S_physical_device_vulkan_memory_model_features_KHR::S_physical_device_vulkan_memory_model_features_KHR(
	 VkBool32  vulkanMemoryModel_
	,VkBool32  vulkanMemoryModelDeviceScope_)
		:vulkanMemoryModel(vulkanMemoryModel_)
		,vulkanMemoryModelDeviceScope(vulkanMemoryModelDeviceScope_)
{
}

S_physical_device_shader_atomic_int64_features_KHR::S_physical_device_shader_atomic_int64_features_KHR(
	 VkBool32  shaderBufferInt64Atomics_
	,VkBool32  shaderSharedInt64Atomics_)
		:shaderBufferInt64Atomics(shaderBufferInt64Atomics_)
		,shaderSharedInt64Atomics(shaderSharedInt64Atomics_)
{
}

S_physical_device_vertex_attribute_divisor_features_EXT::S_physical_device_vertex_attribute_divisor_features_EXT(
	 VkBool32  vertexAttributeInstanceRateDivisor_
	,VkBool32  vertexAttributeInstanceRateZeroDivisor_)
		:vertexAttributeInstanceRateDivisor(vertexAttributeInstanceRateDivisor_)
		,vertexAttributeInstanceRateZeroDivisor(vertexAttributeInstanceRateZeroDivisor_)
{
}

S_queue_family_checkpoint_properties_NV::S_queue_family_checkpoint_properties_NV(
	 F_pipeline_stage  checkpointExecutionStageMask_)
		:checkpointExecutionStageMask(checkpointExecutionStageMask_)
{
}

S_checkpoint_data_NV::S_checkpoint_data_NV(
	 F_pipeline_stage  stage_
	,void* pCheckpointMarker_)
		:stage(stage_)
		,pCheckpointMarker(pCheckpointMarker_)
{
}

S_image_view_astc_decode_mode_EXT::S_image_view_astc_decode_mode_EXT(
	 E_format  decodeMode_)
		:decodeMode(decodeMode_)
{
}

S_physical_device_astc_decode_features_EXT::S_physical_device_astc_decode_features_EXT(
	 VkBool32  decodeModeSharedExponent_)
		:decodeModeSharedExponent(decodeModeSharedExponent_)
{
}

S_physical_device_representative_fragment_test_features_NV::S_physical_device_representative_fragment_test_features_NV(
	 VkBool32  representativeFragmentTest_)
		:representativeFragmentTest(representativeFragmentTest_)
{
}

S_pipeline_representative_fragment_test_state_create_info_NV::S_pipeline_representative_fragment_test_state_create_info_NV(
	 VkBool32  representativeFragmentTestEnable_)
		:representativeFragmentTestEnable(representativeFragmentTestEnable_)
{
}

S_physical_device_exclusive_scissor_features_NV::S_physical_device_exclusive_scissor_features_NV(
	 VkBool32  exclusiveScissor_)
		:exclusiveScissor(exclusiveScissor_)
{
}

S_pipeline_viewport_exclusive_scissor_state_create_info_NV::S_pipeline_viewport_exclusive_scissor_state_create_info_NV(
	 uint32_t  exclusiveScissorCount_
	,const S_rect_2d*    pExclusiveScissors_)
		:exclusiveScissorCount(exclusiveScissorCount_)
		,pExclusiveScissors(pExclusiveScissors_)
{
}

S_physical_device_corner_sampled_image_features_NV::S_physical_device_corner_sampled_image_features_NV(
	 VkBool32  cornerSampledImage_)
		:cornerSampledImage(cornerSampledImage_)
{
}

S_physical_device_compute_shader_derivatives_features_NV::S_physical_device_compute_shader_derivatives_features_NV(
	 VkBool32  computeDerivativeGroupQuads_
	,VkBool32  computeDerivativeGroupLinear_)
		:computeDerivativeGroupQuads(computeDerivativeGroupQuads_)
		,computeDerivativeGroupLinear(computeDerivativeGroupLinear_)
{
}

S_physical_device_fragment_shader_barycentric_features_NV::S_physical_device_fragment_shader_barycentric_features_NV(
	 VkBool32  fragmentShaderBarycentric_)
		:fragmentShaderBarycentric(fragmentShaderBarycentric_)
{
}

S_physical_device_shader_image_footprint_features_NV::S_physical_device_shader_image_footprint_features_NV(
	 VkBool32  imageFootprint_)
		:imageFootprint(imageFootprint_)
{
}

S_pipeline_viewport_shading_rate_image_state_create_info_NV::S_pipeline_viewport_shading_rate_image_state_create_info_NV(
	 VkBool32  shadingRateImageEnable_
	,uint32_t  viewportCount_
	,const S_shading_rate_palette_NV*      pShadingRatePalettes_)
		:shadingRateImageEnable(shadingRateImageEnable_)
		,viewportCount(viewportCount_)
		,pShadingRatePalettes(pShadingRatePalettes_)
{
}

S_physical_device_shading_rate_image_features_NV::S_physical_device_shading_rate_image_features_NV(
	 VkBool32  shadingRateImage_
	,VkBool32  shadingRateCoarseSampleOrder_)
		:shadingRateImage(shadingRateImage_)
		,shadingRateCoarseSampleOrder(shadingRateCoarseSampleOrder_)
{
}

S_physical_device_shading_rate_image_properties_NV::S_physical_device_shading_rate_image_properties_NV(
	 S_extent_2d  shadingRateTexelSize_
	,uint32_t  shadingRatePaletteSize_
	,uint32_t  shadingRateMaxCoarseSamples_)
		:shadingRateTexelSize(shadingRateTexelSize_)
		,shadingRatePaletteSize(shadingRatePaletteSize_)
		,shadingRateMaxCoarseSamples(shadingRateMaxCoarseSamples_)
{
}

S_pipeline_viewport_coarse_sample_order_state_create_info_NV::S_pipeline_viewport_coarse_sample_order_state_create_info_NV(
	 E_coarse_sample_order_type_NV  sampleOrderType_
	,uint32_t  customSampleOrderCount_
	,const S_coarse_sample_order_custom_NV*        pCustomSampleOrders_)
		:sampleOrderType(sampleOrderType_)
		,customSampleOrderCount(customSampleOrderCount_)
		,pCustomSampleOrders(pCustomSampleOrders_)
{
}

S_physical_device_mesh_shader_features_NV::S_physical_device_mesh_shader_features_NV(
	 VkBool32  taskShader_
	,VkBool32  meshShader_)
		:taskShader(taskShader_)
		,meshShader(meshShader_)
{
}

S_physical_device_mesh_shader_properties_NV::S_physical_device_mesh_shader_properties_NV(
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
	,uint32_t  meshOutputPerPrimitiveGranularity_)
		:maxDrawMeshTasksCount(maxDrawMeshTasksCount_)
		,maxTaskWorkGroupInvocations(maxTaskWorkGroupInvocations_)
		,maxTaskTotalMemorySize(maxTaskTotalMemorySize_)
		,maxTaskOutputCount(maxTaskOutputCount_)
		,maxMeshWorkGroupInvocations(maxMeshWorkGroupInvocations_)
		,maxMeshTotalMemorySize(maxMeshTotalMemorySize_)
		,maxMeshOutputVertices(maxMeshOutputVertices_)
		,maxMeshOutputPrimitives(maxMeshOutputPrimitives_)
		,maxMeshMultiviewViewCount(maxMeshMultiviewViewCount_)
		,meshOutputPerVertexGranularity(meshOutputPerVertexGranularity_)
		,meshOutputPerPrimitiveGranularity(meshOutputPerPrimitiveGranularity_)
{
memcpy(&maxTaskWorkGroupSize,maxTaskWorkGroupSize_.data(),3*sizeof(decltype(maxTaskWorkGroupSize)) );
memcpy(&maxMeshWorkGroupSize,maxMeshWorkGroupSize_.data(),3*sizeof(decltype(maxMeshWorkGroupSize)) );
}

S_raytracing_pipeline_create_info_NVX::S_raytracing_pipeline_create_info_NVX(
	 F_pipeline_create  flags_
	,uint32_t  stageCount_
	,const S_pipeline_shader_stage_create_info* pStages_
	,const uint32_t* pGroupNumbers_
	,uint32_t  maxRecursionDepth_
	,VkPipelineLayout  layout_
	,VkPipeline  basePipelineHandle_
	,int32_t  basePipelineIndex_)
		:flags(flags_)
		,stageCount(stageCount_)
		,pStages(pStages_)
		,pGroupNumbers(pGroupNumbers_)
		,maxRecursionDepth(maxRecursionDepth_)
		,layout(layout_)
		,basePipelineHandle(basePipelineHandle_)
		,basePipelineIndex(basePipelineIndex_)
{
}

S_geometry_triangles_NVX::S_geometry_triangles_NVX(
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
	,VkDeviceSize  transformOffset_)
		:vertexData(vertexData_)
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
{
}

S_geometry_aabb_NVX::S_geometry_aabb_NVX(
	 VkBuffer  aabbData_
	,uint32_t  numAABBs_
	,uint32_t  stride_
	,VkDeviceSize  offset_)
		:aabbData(aabbData_)
		,numAABBs(numAABBs_)
		,stride(stride_)
		,offset(offset_)
{
}

S_geometry_NVX::S_geometry_NVX(
	 E_geometry_type_NVX  geometryType_
	,S_geometry_data_NVX  geometry_
	,F_geometry_nvx  flags_)
		:geometryType(geometryType_)
		,geometry(geometry_)
		,flags(flags_)
{
}

S_acceleration_structure_create_info_NVX::S_acceleration_structure_create_info_NVX(
	 E_acceleration_structure_type_NVX  type_
	,F_build_acceleration_structure_nvx flags_
	,VkDeviceSize  compactedSize_
	,uint32_t  instanceCount_
	,uint32_t  geometryCount_
	,const S_geometry_NVX* pGeometries_)
		:type(type_)
		,flags(flags_)
		,compactedSize(compactedSize_)
		,instanceCount(instanceCount_)
		,geometryCount(geometryCount_)
		,pGeometries(pGeometries_)
{
}

S_bind_acceleration_structure_memory_info_NVX::S_bind_acceleration_structure_memory_info_NVX(
	 VkAccelerationStructureNVX  accelerationStructure_
	,VkDeviceMemory  memory_
	,VkDeviceSize  memoryOffset_
	,uint32_t  deviceIndexCount_
	,const uint32_t*  pDeviceIndices_)
		:accelerationStructure(accelerationStructure_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
		,deviceIndexCount(deviceIndexCount_)
		,pDeviceIndices(pDeviceIndices_)
{
}

S_descriptor_acceleration_structure_info_NVX::S_descriptor_acceleration_structure_info_NVX(
	 uint32_t  accelerationStructureCount_
	,const VkAccelerationStructureNVX* pAccelerationStructures_)
		:accelerationStructureCount(accelerationStructureCount_)
		,pAccelerationStructures(pAccelerationStructures_)
{
}

S_acceleration_structure_memory_requirements_info_NVX::S_acceleration_structure_memory_requirements_info_NVX(
	 VkAccelerationStructureNVX  accelerationStructure_)
		:accelerationStructure(accelerationStructure_)
{
}

S_physical_device_raytracing_properties_NVX::S_physical_device_raytracing_properties_NVX(
	 uint32_t  shaderHeaderSize_
	,uint32_t  maxRecursionDepth_
	,uint32_t  maxGeometryCount_)
		:shaderHeaderSize(shaderHeaderSize_)
		,maxRecursionDepth(maxRecursionDepth_)
		,maxGeometryCount(maxGeometryCount_)
{
}

S_drm_format_modifier_properties_list_EXT::S_drm_format_modifier_properties_list_EXT(
	 uint32_t  drmFormatModifierCount_
	,S_drm_format_modifier_properties_EXT* pDrmFormatModifierProperties_)
		:drmFormatModifierCount(drmFormatModifierCount_)
		,pDrmFormatModifierProperties(pDrmFormatModifierProperties_)
{
}

S_physical_device_image_drm_format_modifier_info_EXT::S_physical_device_image_drm_format_modifier_info_EXT(
	 uint64_t  drmFormatModifier_)
		:drmFormatModifier(drmFormatModifier_)
{
}

S_image_drm_format_modifier_list_create_info_EXT::S_image_drm_format_modifier_list_create_info_EXT(
	 uint32_t  drmFormatModifierCount_
	,const uint64_t* pDrmFormatModifiers_)
		:drmFormatModifierCount(drmFormatModifierCount_)
		,pDrmFormatModifiers(pDrmFormatModifiers_)
{
}

S_image_drm_format_modifier_explicit_create_info_EXT::S_image_drm_format_modifier_explicit_create_info_EXT(
	 uint64_t  drmFormatModifier_
	,uint32_t  drmFormatModifierPlaneCount_
	,const S_subresource_layout* pPlaneLayouts_)
		:drmFormatModifier(drmFormatModifier_)
		,drmFormatModifierPlaneCount(drmFormatModifierPlaneCount_)
		,pPlaneLayouts(pPlaneLayouts_)
{
}

S_image_drm_format_modifier_properties_EXT::S_image_drm_format_modifier_properties_EXT(
	 uint64_t  drmFormatModifier_)
		:drmFormatModifier(drmFormatModifier_)
{
}

S_device_queue_create_info::S_device_queue_create_info(
	 F_device_queue_create  flags_
	,uint32_t  queueFamilyIndex_
	,uint32_t  queueCount_
	,const float*    pQueuePriorities_)
		:flags(flags_)
		,queueFamilyIndex(queueFamilyIndex_)
		,queueCount(queueCount_)
		,pQueuePriorities(pQueuePriorities_)
{
}

S_instance_create_info::S_instance_create_info(
	 VkInstanceCreateFlags  flags_
	,const S_application_info* pApplicationInfo_
	,uint32_t  enabledLayerCount_
	,const char* const*      ppEnabledLayerNames_
	,uint32_t  enabledExtensionCount_
	,const char* const*      ppEnabledExtensionNames_)
		:flags(flags_)
		,pApplicationInfo(pApplicationInfo_)
		,enabledLayerCount(enabledLayerCount_)
		,ppEnabledLayerNames(ppEnabledLayerNames_)
		,enabledExtensionCount(enabledExtensionCount_)
		,ppEnabledExtensionNames(ppEnabledExtensionNames_)
{
}

S_memory_allocate_info::S_memory_allocate_info(
	 VkDeviceSize  allocationSize_
	,uint32_t  memoryTypeIndex_)
		:allocationSize(allocationSize_)
		,memoryTypeIndex(memoryTypeIndex_)
{
}

S_write_descriptor_set::S_write_descriptor_set(
	 VkDescriptorSet  dstSet_
	,uint32_t  dstBinding_
	,uint32_t  dstArrayElement_
	,uint32_t  descriptorCount_
	,E_descriptor_type  descriptorType_
	,const S_descriptor_image_info* pImageInfo_
	,const S_descriptor_buffer_info* pBufferInfo_
	,const VkBufferView*    pTexelBufferView_)
		:dstSet(dstSet_)
		,dstBinding(dstBinding_)
		,dstArrayElement(dstArrayElement_)
		,descriptorCount(descriptorCount_)
		,descriptorType(descriptorType_)
		,pImageInfo(pImageInfo_)
		,pBufferInfo(pBufferInfo_)
		,pTexelBufferView(pTexelBufferView_)
{
}

S_buffer_create_info::S_buffer_create_info(
	 F_buffer_create  flags_
	,VkDeviceSize  size_
	,F_buffer_usage  usage_
	,E_sharing_mode  sharingMode_
	,uint32_t  queueFamilyIndexCount_
	,const uint32_t*        pQueueFamilyIndices_)
		:flags(flags_)
		,size(size_)
		,usage(usage_)
		,sharingMode(sharingMode_)
		,queueFamilyIndexCount(queueFamilyIndexCount_)
		,pQueueFamilyIndices(pQueueFamilyIndices_)
{
}

S_image_memory_barrier::S_image_memory_barrier(
	 F_access  srcAccessMask_
	,F_access  dstAccessMask_
	,E_image_layout  oldLayout_
	,E_image_layout  newLayout_
	,uint32_t  srcQueueFamilyIndex_
	,uint32_t  dstQueueFamilyIndex_
	,VkImage  image_
	,S_image_subresource_range  subresourceRange_)
		:srcAccessMask(srcAccessMask_)
		,dstAccessMask(dstAccessMask_)
		,oldLayout(oldLayout_)
		,newLayout(newLayout_)
		,srcQueueFamilyIndex(srcQueueFamilyIndex_)
		,dstQueueFamilyIndex(dstQueueFamilyIndex_)
		,image(image_)
		,subresourceRange(subresourceRange_)
{
}

S_image_create_info::S_image_create_info(
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
	,E_image_layout  initialLayout_)
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
		,initialLayout(initialLayout_)
{
}

S_image_view_create_info::S_image_view_create_info(
	 VkImageViewCreateFlags  flags_
	,VkImage  image_
	,E_image_view_type  viewType_
	,E_format  format_
	,S_component_mapping  components_
	,S_image_subresource_range  subresourceRange_)
		:flags(flags_)
		,image(image_)
		,viewType(viewType_)
		,format(format_)
		,components(components_)
		,subresourceRange(subresourceRange_)
{
}

S_bind_sparse_info::S_bind_sparse_info(
	 uint32_t  waitSemaphoreCount_
	,const VkSemaphore*     pWaitSemaphores_
	,uint32_t  bufferBindCount_
	,const S_sparse_buffer_memory_bind_info* pBufferBinds_
	,uint32_t  imageOpaqueBindCount_
	,const S_sparse_image_opaque_memory_bind_info* pImageOpaqueBinds_
	,uint32_t  imageBindCount_
	,const S_sparse_image_memory_bind_info* pImageBinds_
	,uint32_t  signalSemaphoreCount_
	,const VkSemaphore*     pSignalSemaphores_)
		:waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphores(pWaitSemaphores_)
		,bufferBindCount(bufferBindCount_)
		,pBufferBinds(pBufferBinds_)
		,imageOpaqueBindCount(imageOpaqueBindCount_)
		,pImageOpaqueBinds(pImageOpaqueBinds_)
		,imageBindCount(imageBindCount_)
		,pImageBinds(pImageBinds_)
		,signalSemaphoreCount(signalSemaphoreCount_)
		,pSignalSemaphores(pSignalSemaphores_)
{
}

S_shader_module_create_info::S_shader_module_create_info(
	 VkShaderModuleCreateFlags  flags_
	,size_t  codeSize_
	,const uint32_t*            pCode_)
		:flags(flags_)
		,codeSize(codeSize_)
		,pCode(pCode_)
{
}

S_descriptor_set_layout_create_info::S_descriptor_set_layout_create_info(
	 F_descriptor_set_layout_create  flags_
	,uint32_t  bindingCount_
	,const S_descriptor_set_layout_binding* pBindings_)
		:flags(flags_)
		,bindingCount(bindingCount_)
		,pBindings(pBindings_)
{
}

S_descriptor_pool_create_info::S_descriptor_pool_create_info(
	 F_descriptor_pool_create  flags_
	,uint32_t  maxSets_
	,uint32_t  poolSizeCount_
	,const S_descriptor_pool_size* pPoolSizes_)
		:flags(flags_)
		,maxSets(maxSets_)
		,poolSizeCount(poolSizeCount_)
		,pPoolSizes(pPoolSizes_)
{
}

S_descriptor_set_allocate_info::S_descriptor_set_allocate_info(
	 VkDescriptorPool  descriptorPool_
	,uint32_t  descriptorSetCount_
	,const VkDescriptorSetLayout* pSetLayouts_)
		:descriptorPool(descriptorPool_)
		,descriptorSetCount(descriptorSetCount_)
		,pSetLayouts(pSetLayouts_)
{
}

S_pipeline_vertex_input_state_create_info::S_pipeline_vertex_input_state_create_info(
	 VkPipelineVertexInputStateCreateFlags  flags_
	,uint32_t  vertexBindingDescriptionCount_
	,const S_vertex_input_binding_description* pVertexBindingDescriptions_
	,uint32_t  vertexAttributeDescriptionCount_
	,const S_vertex_input_attribute_description* pVertexAttributeDescriptions_)
		:flags(flags_)
		,vertexBindingDescriptionCount(vertexBindingDescriptionCount_)
		,pVertexBindingDescriptions(pVertexBindingDescriptions_)
		,vertexAttributeDescriptionCount(vertexAttributeDescriptionCount_)
		,pVertexAttributeDescriptions(pVertexAttributeDescriptions_)
{
}

S_pipeline_tessellation_state_create_info::S_pipeline_tessellation_state_create_info(
	 VkPipelineTessellationStateCreateFlags  flags_
	,uint32_t  patchControlPoints_)
		:flags(flags_)
		,patchControlPoints(patchControlPoints_)
{
}

S_pipeline_viewport_state_create_info::S_pipeline_viewport_state_create_info(
	 VkPipelineViewportStateCreateFlags  flags_
	,uint32_t  viewportCount_
	,const S_viewport*      pViewports_
	,uint32_t  scissorCount_
	,const S_rect_2d*        pScissors_)
		:flags(flags_)
		,viewportCount(viewportCount_)
		,pViewports(pViewports_)
		,scissorCount(scissorCount_)
		,pScissors(pScissors_)
{
}

S_pipeline_rasterization_state_create_info::S_pipeline_rasterization_state_create_info(
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
	,float  lineWidth_)
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
		,lineWidth(lineWidth_)
{
}

S_pipeline_multisample_state_create_info::S_pipeline_multisample_state_create_info(
	 VkPipelineMultisampleStateCreateFlags  flags_
	,F_sample_count  rasterizationSamples_
	,VkBool32  sampleShadingEnable_
	,float  minSampleShading_
	,const VkSampleMask*    pSampleMask_
	,VkBool32  alphaToCoverageEnable_
	,VkBool32  alphaToOneEnable_)
		:flags(flags_)
		,rasterizationSamples(rasterizationSamples_)
		,sampleShadingEnable(sampleShadingEnable_)
		,minSampleShading(minSampleShading_)
		,pSampleMask(pSampleMask_)
		,alphaToCoverageEnable(alphaToCoverageEnable_)
		,alphaToOneEnable(alphaToOneEnable_)
{
}

S_pipeline_color_blend_state_create_info::S_pipeline_color_blend_state_create_info(
	 VkPipelineColorBlendStateCreateFlags  flags_
	,VkBool32  logicOpEnable_
	,E_logic_op  logicOp_
	,uint32_t  attachmentCount_
	,const S_pipeline_color_blend_attachment_state* pAttachments_
	,std::array< float ,4 > blendConstants_)
		:flags(flags_)
		,logicOpEnable(logicOpEnable_)
		,logicOp(logicOp_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
{
memcpy(&blendConstants,blendConstants_.data(),4*sizeof(decltype(blendConstants)) );
}

S_graphics_pipeline_create_info::S_graphics_pipeline_create_info(
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
	,int32_t  basePipelineIndex_)
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
		,basePipelineIndex(basePipelineIndex_)
{
}

S_sampler_create_info::S_sampler_create_info(
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
	,VkBool32  unnormalizedCoordinates_)
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
		,unnormalizedCoordinates(unnormalizedCoordinates_)
{
}

S_command_buffer_inheritance_info::S_command_buffer_inheritance_info(
	 VkRenderPass  renderPass_
	,uint32_t  subpass_
	,VkFramebuffer  framebuffer_
	,VkBool32  occlusionQueryEnable_
	,F_query_control  queryFlags_
	,F_query_pipeline_statistic  pipelineStatistics_)
		:renderPass(renderPass_)
		,subpass(subpass_)
		,framebuffer(framebuffer_)
		,occlusionQueryEnable(occlusionQueryEnable_)
		,queryFlags(queryFlags_)
		,pipelineStatistics(pipelineStatistics_)
{
}

S_command_buffer_begin_info::S_command_buffer_begin_info(
	 F_command_buffer_usage  flags_
	,const S_command_buffer_inheritance_info*       pInheritanceInfo_)
		:flags(flags_)
		,pInheritanceInfo(pInheritanceInfo_)
{
}

S_render_pass_begin_info::S_render_pass_begin_info(
	 VkRenderPass  renderPass_
	,VkFramebuffer  framebuffer_
	,S_rect_2d  renderArea_
	,uint32_t  clearValueCount_
	,const VkClearValue*    pClearValues_)
		:renderPass(renderPass_)
		,framebuffer(framebuffer_)
		,renderArea(renderArea_)
		,clearValueCount(clearValueCount_)
		,pClearValues(pClearValues_)
{
}

S_render_pass_create_info::S_render_pass_create_info(
	 F_render_pass_create  flags_
	,uint32_t  attachmentCount_
	,const S_attachment_description* pAttachments_
	,uint32_t  subpassCount_
	,const S_subpass_description* pSubpasses_
	,uint32_t  dependencyCount_
	,const S_subpass_dependency* pDependencies_)
		:flags(flags_)
		,attachmentCount(attachmentCount_)
		,pAttachments(pAttachments_)
		,subpassCount(subpassCount_)
		,pSubpasses(pSubpasses_)
		,dependencyCount(dependencyCount_)
		,pDependencies(pDependencies_)
{
}

S_fence_create_info::S_fence_create_info(
	 F_fence_create  flags_)
		:flags(flags_)
{
}

S_semaphore_create_info::S_semaphore_create_info(
	 VkSemaphoreCreateFlags  flags_)
		:flags(flags_)
{
}

S_submit_info::S_submit_info(
	 uint32_t  waitSemaphoreCount_
	,const VkSemaphore*     pWaitSemaphores_
	,const F_pipeline_stage*           pWaitDstStageMask_
	,uint32_t  commandBufferCount_
	,const VkCommandBuffer*     pCommandBuffers_
	,uint32_t  signalSemaphoreCount_
	,const VkSemaphore*     pSignalSemaphores_)
		:waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphores(pWaitSemaphores_)
		,pWaitDstStageMask(pWaitDstStageMask_)
		,commandBufferCount(commandBufferCount_)
		,pCommandBuffers(pCommandBuffers_)
		,signalSemaphoreCount(signalSemaphoreCount_)
		,pSignalSemaphores(pSignalSemaphores_)
{
}

S_swapchain_create_info_KHR::S_swapchain_create_info_KHR(
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
	,VkSwapchainKHR  oldSwapchain_)
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
		,oldSwapchain(oldSwapchain_)
{
}

S_present_info_KHR::S_present_info_KHR(
	 uint32_t  waitSemaphoreCount_
	,const VkSemaphore* pWaitSemaphores_
	,uint32_t  swapchainCount_
	,const VkSwapchainKHR* pSwapchains_
	,const uint32_t* pImageIndices_
	,E_result* pResults_)
		:waitSemaphoreCount(waitSemaphoreCount_)
		,pWaitSemaphores(pWaitSemaphores_)
		,swapchainCount(swapchainCount_)
		,pSwapchains(pSwapchains_)
		,pImageIndices(pImageIndices_)
		,pResults(pResults_)
{
}

S_physical_device_features2::S_physical_device_features2(
	 S_physical_device_features  features_)
		:features(features_)
{
}

S_physical_device_properties2::S_physical_device_properties2(
	 S_physical_device_properties  properties_)
		:properties(properties_)
{
}

S_format_properties2::S_format_properties2(
	 S_format_properties  formatProperties_)
		:formatProperties(formatProperties_)
{
}

S_image_format_properties2::S_image_format_properties2(
	 S_image_format_properties  imageFormatProperties_)
		:imageFormatProperties(imageFormatProperties_)
{
}

S_physical_device_image_format_info2::S_physical_device_image_format_info2(
	 E_format  format_
	,E_image_type  type_
	,E_image_tiling  tiling_
	,F_image_usage  usage_
	,F_image_create  flags_)
		:format(format_)
		,type(type_)
		,tiling(tiling_)
		,usage(usage_)
		,flags(flags_)
{
}

S_queue_family_properties2::S_queue_family_properties2(
	 S_queue_family_properties  queueFamilyProperties_)
		:queueFamilyProperties(queueFamilyProperties_)
{
}

S_bind_buffer_memory_info::S_bind_buffer_memory_info(
	 VkBuffer  buffer_
	,VkDeviceMemory  memory_
	,VkDeviceSize  memoryOffset_)
		:buffer(buffer_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
{
}

S_bind_image_memory_info::S_bind_image_memory_info(
	 VkImage  image_
	,VkDeviceMemory  memory_
	,VkDeviceSize  memoryOffset_)
		:image(image_)
		,memory(memory_)
		,memoryOffset(memoryOffset_)
{
}

S_surface_capabilities2_KHR::S_surface_capabilities2_KHR(
	 S_surface_capabilities_KHR  surfaceCapabilities_)
		:surfaceCapabilities(surfaceCapabilities_)
{
}

S_image_memory_requirements_info2::S_image_memory_requirements_info2(
	 VkImage  image_)
		:image(image_)
{
}

S_memory_requirements2::S_memory_requirements2(
	 S_memory_requirements  memoryRequirements_)
		:memoryRequirements(memoryRequirements_)
{
}

S_sampler_ycbcr_conversion_create_info::S_sampler_ycbcr_conversion_create_info(
	 E_format  format_
	,E_sampler_ycbcr_model_conversion  ycbcrModel_
	,E_sampler_ycbcr_range  ycbcrRange_
	,S_component_mapping  components_
	,E_chroma_location  xChromaOffset_
	,E_chroma_location  yChromaOffset_
	,E_filter  chromaFilter_
	,VkBool32  forceExplicitReconstruction_)
		:format(format_)
		,ycbcrModel(ycbcrModel_)
		,ycbcrRange(ycbcrRange_)
		,components(components_)
		,xChromaOffset(xChromaOffset_)
		,yChromaOffset(yChromaOffset_)
		,chromaFilter(chromaFilter_)
		,forceExplicitReconstruction(forceExplicitReconstruction_)
{
}

S_descriptor_set_layout_support::S_descriptor_set_layout_support(
	 VkBool32  supported_)
		:supported(supported_)
{
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_hardware_buffer_properties_ANDROID::S_android_hardware_buffer_properties_ANDROID(
	 VkDeviceSize  allocationSize_
	,uint32_t  memoryTypeBits_)
		:allocationSize(allocationSize_)
		,memoryTypeBits(memoryTypeBits_)
{
}

#endif

S_device_create_info::S_device_create_info(
	 VkDeviceCreateFlags  flags_
	,uint32_t  queueCreateInfoCount_
	,const S_device_queue_create_info* pQueueCreateInfos_
	,uint32_t  enabledLayerCount_
	,const char* const*      ppEnabledLayerNames_
	,uint32_t  enabledExtensionCount_
	,const char* const*      ppEnabledExtensionNames_
	,const S_physical_device_features* pEnabledFeatures_)
		:flags(flags_)
		,queueCreateInfoCount(queueCreateInfoCount_)
		,pQueueCreateInfos(pQueueCreateInfos_)
		,enabledLayerCount(enabledLayerCount_)
		,ppEnabledLayerNames(ppEnabledLayerNames_)
		,enabledExtensionCount(enabledExtensionCount_)
		,ppEnabledExtensionNames(ppEnabledExtensionNames_)
		,pEnabledFeatures(pEnabledFeatures_)
{
}


}}
