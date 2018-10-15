#include "types.h"
namespace laka{ namespace vk{
S_device_queue_create_info& S_device_queue_create_info::n_device_queue_global_priority_create_info_EXT(S_device_queue_global_priority_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_dedicated_allocation_memory_allocate_info_NV(S_dedicated_allocation_memory_allocate_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_export_memory_allocate_info_NV(S_export_memory_allocate_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_import_memory_win32_handle_info_NV(S_import_memory_win32_handle_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_export_memory_win32_handle_info_NV(S_export_memory_win32_handle_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_export_memory_allocate_info(S_export_memory_allocate_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_import_memory_win32_handle_info_KHR(S_import_memory_win32_handle_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_export_memory_win32_handle_info_KHR(S_export_memory_win32_handle_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_import_memory_fd_info_KHR(S_import_memory_fd_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_memory_allocate_flags_info(S_memory_allocate_flags_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_memory_dedicated_allocate_info(S_memory_dedicated_allocate_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_import_memory_host_pointer_info_EXT(S_import_memory_host_pointer_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_allocate_info& S_memory_allocate_info::n_import_android_hardware_buffer_info_ANDROID(S_import_android_hardware_buffer_info_ANDROID const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_buffer_create_info& S_buffer_create_info::n_dedicated_allocation_buffer_create_info_NV(S_dedicated_allocation_buffer_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_buffer_create_info& S_buffer_create_info::n_external_memory_buffer_create_info(S_external_memory_buffer_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_shader_module_create_info& S_shader_module_create_info::n_shader_module_validation_cache_create_info_EXT(S_shader_module_validation_cache_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_descriptor_set_allocate_info& S_descriptor_set_allocate_info::n_descriptor_set_variable_descriptor_count_allocate_info_EXT(S_descriptor_set_variable_descriptor_count_allocate_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_tessellation_state_create_info& S_pipeline_tessellation_state_create_info::n_pipeline_tessellation_domain_origin_state_create_info(S_pipeline_tessellation_domain_origin_state_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_rasterization_state_create_info& S_pipeline_rasterization_state_create_info::n_pipeline_rasterization_state_rasterization_order_AMD(S_pipeline_rasterization_state_rasterization_order_AMD const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_rasterization_state_create_info& S_pipeline_rasterization_state_create_info::n_pipeline_rasterization_conservative_state_create_info_EXT(S_pipeline_rasterization_conservative_state_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_multisample_state_create_info& S_pipeline_multisample_state_create_info::n_pipeline_coverage_to_color_state_create_info_NV(S_pipeline_coverage_to_color_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_multisample_state_create_info& S_pipeline_multisample_state_create_info::n_pipeline_sample_locations_state_create_info_EXT(S_pipeline_sample_locations_state_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_multisample_state_create_info& S_pipeline_multisample_state_create_info::n_pipeline_coverage_modulation_state_create_info_NV(S_pipeline_coverage_modulation_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_sampler_create_info& S_sampler_create_info::n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_sampler_create_info& S_sampler_create_info::n_sampler_reduction_mode_create_info_EXT(S_sampler_reduction_mode_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_command_buffer_inheritance_info& S_command_buffer_inheritance_info::n_command_buffer_inheritance_conditional_rendering_info_EXT(S_command_buffer_inheritance_conditional_rendering_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_fence_create_info& S_fence_create_info::n_export_fence_create_info(S_export_fence_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_fence_create_info& S_fence_create_info::n_export_fence_win32_handle_info_KHR(S_export_fence_win32_handle_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_semaphore_create_info& S_semaphore_create_info::n_export_semaphore_create_info(S_export_semaphore_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_semaphore_create_info& S_semaphore_create_info::n_export_semaphore_win32_handle_info_KHR(S_export_semaphore_win32_handle_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
S_submit_info& S_submit_info::n_win32_keyed_mutex_acquire_release_info_NV(S_win32_keyed_mutex_acquire_release_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
S_submit_info& S_submit_info::n_win32_keyed_mutex_acquire_release_info_KHR(S_win32_keyed_mutex_acquire_release_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}
#endif

S_submit_info& S_submit_info::n_d_3d12_fence_submit_info_KHR(S_d_3d12_fence_submit_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_submit_info& S_submit_info::n_device_group_submit_info(S_device_group_submit_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_submit_info& S_submit_info::n_protected_submit_info(S_protected_submit_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_present_info_KHR& S_present_info_KHR::n_display_present_info_KHR(S_display_present_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_present_info_KHR& S_present_info_KHR::n_present_regions_KHR(S_present_regions_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_present_info_KHR& S_present_info_KHR::n_device_group_present_info_KHR(S_device_group_present_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_present_info_KHR& S_present_info_KHR::n_present_times_info_GOOGLE(S_present_times_info_GOOGLE const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_image_format_info2& S_physical_device_image_format_info2::n_physical_device_external_image_format_info(S_physical_device_external_image_format_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_image_format_info2& S_physical_device_image_format_info2::n_physical_device_image_drm_format_modifier_info_EXT(S_physical_device_image_drm_format_modifier_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_bind_buffer_memory_info& S_bind_buffer_memory_info::n_bind_buffer_memory_device_group_info(S_bind_buffer_memory_device_group_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_bind_image_memory_info& S_bind_image_memory_info::n_bind_image_memory_device_group_info(S_bind_image_memory_device_group_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_bind_image_memory_info& S_bind_image_memory_info::n_bind_image_memory_swapchain_info_KHR(S_bind_image_memory_swapchain_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_bind_image_memory_info& S_bind_image_memory_info::n_bind_image_plane_memory_info(S_bind_image_plane_memory_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_memory_requirements_info2& S_image_memory_requirements_info2::n_image_plane_memory_requirements_info(S_image_plane_memory_requirements_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_descriptor_set_layout_support& S_descriptor_set_layout_support::n_descriptor_set_variable_descriptor_count_layout_support_EXT(S_descriptor_set_variable_descriptor_count_layout_support_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_android_hardware_buffer_properties_ANDROID& S_android_hardware_buffer_properties_ANDROID::n_android_hardware_buffer_format_properties_ANDROID(S_android_hardware_buffer_format_properties_ANDROID const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}
#endif

S_instance_create_info& S_instance_create_info::n_debug_report_callback_create_info_EXT(S_debug_report_callback_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_instance_create_info& S_instance_create_info::n_validation_flags_EXT(S_validation_flags_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_instance_create_info& S_instance_create_info::n_debug_utils_messenger_create_info_EXT(S_debug_utils_messenger_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_write_descriptor_set& S_write_descriptor_set::n_write_descriptor_set_inline_uniform_block_EXT(S_write_descriptor_set_inline_uniform_block_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_write_descriptor_set& S_write_descriptor_set::n_descriptor_acceleration_structure_info_NVX(S_descriptor_acceleration_structure_info_NVX const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_view_create_info& S_image_view_create_info::n_image_view_usage_create_info(S_image_view_usage_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_view_create_info& S_image_view_create_info::n_sampler_ycbcr_conversion_info(S_sampler_ycbcr_conversion_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_view_create_info& S_image_view_create_info::n_image_view_astc_decode_mode_EXT(S_image_view_astc_decode_mode_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_bind_sparse_info& S_bind_sparse_info::n_device_group_bind_sparse_info(S_device_group_bind_sparse_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_descriptor_set_layout_create_info& S_descriptor_set_layout_create_info::n_descriptor_set_layout_binding_flags_create_info_EXT(S_descriptor_set_layout_binding_flags_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_descriptor_pool_create_info& S_descriptor_pool_create_info::n_descriptor_pool_inline_uniform_block_create_info_EXT(S_descriptor_pool_inline_uniform_block_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_color_blend_state_create_info& S_pipeline_color_blend_state_create_info::n_pipeline_color_blend_advanced_state_create_info_EXT(S_pipeline_color_blend_advanced_state_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_command_buffer_begin_info& S_command_buffer_begin_info::n_device_group_command_buffer_begin_info(S_device_group_command_buffer_begin_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_swapchain_create_info_KHR& S_swapchain_create_info_KHR::n_swapchain_counter_create_info_EXT(S_swapchain_counter_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_swapchain_create_info_KHR& S_swapchain_create_info_KHR::n_device_group_swapchain_create_info_KHR(S_device_group_swapchain_create_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_multiview_features(S_physical_device_multiview_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_inline_uniform_block_features_EXT(S_physical_device_inline_uniform_block_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_vulkan_memory_model_features_KHR(S_physical_device_vulkan_memory_model_features_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_shader_atomic_int64_features_KHR(S_physical_device_shader_atomic_int64_features_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_vertex_attribute_divisor_features_EXT(S_physical_device_vertex_attribute_divisor_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_astc_decode_features_EXT(S_physical_device_astc_decode_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_representative_fragment_test_features_NV(S_physical_device_representative_fragment_test_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_exclusive_scissor_features_NV(S_physical_device_exclusive_scissor_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_corner_sampled_image_features_NV(S_physical_device_corner_sampled_image_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_compute_shader_derivatives_features_NV(S_physical_device_compute_shader_derivatives_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_fragment_shader_barycentric_features_NV(S_physical_device_fragment_shader_barycentric_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_shader_image_footprint_features_NV(S_physical_device_shader_image_footprint_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_shading_rate_image_features_NV(S_physical_device_shading_rate_image_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_features2& S_physical_device_features2::n_physical_device_mesh_shader_features_NV(S_physical_device_mesh_shader_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_queue_family_properties2& S_queue_family_properties2::n_queue_family_checkpoint_properties_NV(S_queue_family_checkpoint_properties_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_surface_capabilities2_KHR& S_surface_capabilities2_KHR::n_shared_present_surface_capabilities_KHR(S_shared_present_surface_capabilities_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_memory_requirements2& S_memory_requirements2::n_memory_dedicated_requirements(S_memory_dedicated_requirements const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_sampler_ycbcr_conversion_create_info& S_sampler_ycbcr_conversion_create_info::n_external_format_ANDROID(S_external_format_ANDROID const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties& S_physical_device_properties::n_physical_device_shading_rate_image_properties_NV(S_physical_device_shading_rate_image_properties_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_features2(S_physical_device_features2 const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_variable_pointer_features(S_physical_device_variable_pointer_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_multiview_features(S_physical_device_multiview_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_device_group_device_create_info(S_device_group_device_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_16bit_storage_features(S_physical_device_16bit_storage_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_sampler_ycbcr_conversion_features(S_physical_device_sampler_ycbcr_conversion_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_protected_memory_features(S_physical_device_protected_memory_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_blend_operation_advanced_features_EXT(S_physical_device_blend_operation_advanced_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_inline_uniform_block_features_EXT(S_physical_device_inline_uniform_block_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_shader_draw_parameter_features(S_physical_device_shader_draw_parameter_features const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_descriptor_indexing_features_EXT(S_physical_device_descriptor_indexing_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_8bit_storage_features_KHR(S_physical_device_8bit_storage_features_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_conditional_rendering_features_EXT(S_physical_device_conditional_rendering_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_vulkan_memory_model_features_KHR(S_physical_device_vulkan_memory_model_features_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_shader_atomic_int64_features_KHR(S_physical_device_shader_atomic_int64_features_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_vertex_attribute_divisor_features_EXT(S_physical_device_vertex_attribute_divisor_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_astc_decode_features_EXT(S_physical_device_astc_decode_features_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_representative_fragment_test_features_NV(S_physical_device_representative_fragment_test_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_exclusive_scissor_features_NV(S_physical_device_exclusive_scissor_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_corner_sampled_image_features_NV(S_physical_device_corner_sampled_image_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_compute_shader_derivatives_features_NV(S_physical_device_compute_shader_derivatives_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_fragment_shader_barycentric_features_NV(S_physical_device_fragment_shader_barycentric_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_shader_image_footprint_features_NV(S_physical_device_shader_image_footprint_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_shading_rate_image_features_NV(S_physical_device_shading_rate_image_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_device_create_info& S_device_create_info::n_physical_device_mesh_shader_features_NV(S_physical_device_mesh_shader_features_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_memory_barrier& S_image_memory_barrier::n_sample_locations_info_EXT(S_sample_locations_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_dedicated_allocation_image_create_info_NV(S_dedicated_allocation_image_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_external_memory_image_create_info_NV(S_external_memory_image_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_external_memory_image_create_info(S_external_memory_image_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_image_swapchain_create_info_KHR(S_image_swapchain_create_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_image_format_list_create_info_KHR(S_image_format_list_create_info_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_external_format_ANDROID(S_external_format_ANDROID const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_image_drm_format_modifier_list_create_info_EXT(S_image_drm_format_modifier_list_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_create_info& S_image_create_info::n_image_drm_format_modifier_explicit_create_info_EXT(S_image_drm_format_modifier_explicit_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_vertex_input_state_create_info& S_pipeline_vertex_input_state_create_info::n_pipeline_vertex_input_divisor_state_create_info_EXT(S_pipeline_vertex_input_divisor_state_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_viewport_state_create_info& S_pipeline_viewport_state_create_info::n_pipeline_viewport_w_scaling_state_create_info_NV(S_pipeline_viewport_w_scaling_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_viewport_state_create_info& S_pipeline_viewport_state_create_info::n_pipeline_viewport_swizzle_state_create_info_NV(S_pipeline_viewport_swizzle_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_viewport_state_create_info& S_pipeline_viewport_state_create_info::n_pipeline_viewport_exclusive_scissor_state_create_info_NV(S_pipeline_viewport_exclusive_scissor_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_viewport_state_create_info& S_pipeline_viewport_state_create_info::n_pipeline_viewport_shading_rate_image_state_create_info_NV(S_pipeline_viewport_shading_rate_image_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_pipeline_viewport_state_create_info& S_pipeline_viewport_state_create_info::n_pipeline_viewport_coarse_sample_order_state_create_info_NV(S_pipeline_viewport_coarse_sample_order_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_graphics_pipeline_create_info& S_graphics_pipeline_create_info::n_pipeline_discard_rectangle_state_create_info_EXT(S_pipeline_discard_rectangle_state_create_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_graphics_pipeline_create_info& S_graphics_pipeline_create_info::n_pipeline_representative_fragment_test_state_create_info_NV(S_pipeline_representative_fragment_test_state_create_info_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_render_pass_begin_info& S_render_pass_begin_info::n_device_group_render_pass_begin_info(S_device_group_render_pass_begin_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_render_pass_begin_info& S_render_pass_begin_info::n_render_pass_sample_locations_begin_info_EXT(S_render_pass_sample_locations_begin_info_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_render_pass_create_info& S_render_pass_create_info::n_render_pass_multiview_create_info(S_render_pass_multiview_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_render_pass_create_info& S_render_pass_create_info::n_render_pass_input_attachment_aspect_create_info(S_render_pass_input_attachment_aspect_create_info const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_push_descriptor_properties_KHR(S_physical_device_push_descriptor_properties_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_driver_properties_KHR(S_physical_device_driver_properties_KHR const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_id_properties(S_physical_device_id_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_multiview_properties(S_physical_device_multiview_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_discard_rectangle_properties_EXT(S_physical_device_discard_rectangle_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_multiview_per_view_attributes_properties_NVX(S_physical_device_multiview_per_view_attributes_properties_NVX const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_subgroup_properties(S_physical_device_subgroup_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_point_clipping_properties(S_physical_device_point_clipping_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_protected_memory_properties(S_physical_device_protected_memory_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_sampler_filter_minmax_properties_EXT(S_physical_device_sampler_filter_minmax_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_sample_locations_properties_EXT(S_physical_device_sample_locations_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_blend_operation_advanced_properties_EXT(S_physical_device_blend_operation_advanced_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_inline_uniform_block_properties_EXT(S_physical_device_inline_uniform_block_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_maintenance3_properties(S_physical_device_maintenance3_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_external_memory_host_properties_EXT(S_physical_device_external_memory_host_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_conservative_rasterization_properties_EXT(S_physical_device_conservative_rasterization_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_shader_core_properties_AMD(S_physical_device_shader_core_properties_AMD const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_descriptor_indexing_properties_EXT(S_physical_device_descriptor_indexing_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_vertex_attribute_divisor_properties_EXT(S_physical_device_vertex_attribute_divisor_properties_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_mesh_shader_properties_NV(S_physical_device_mesh_shader_properties_NV const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_physical_device_properties2& S_physical_device_properties2::n_physical_device_raytracing_properties_NVX(S_physical_device_raytracing_properties_NVX const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_format_properties2& S_format_properties2::n_drm_format_modifier_properties_list_EXT(S_drm_format_modifier_properties_list_EXT const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_format_properties2& S_image_format_properties2::n_external_image_format_properties(S_external_image_format_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_format_properties2& S_image_format_properties2::n_sampler_ycbcr_conversion_image_format_properties(S_sampler_ycbcr_conversion_image_format_properties const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

S_image_format_properties2& S_image_format_properties2::n_texture_lod_gather_format_properties_AMD(S_texture_lod_gather_format_properties_AMD const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
S_image_format_properties2& S_image_format_properties2::n_android_hardware_buffer_usage_ANDROID(S_android_hardware_buffer_usage_ANDROID const& next_)
{
void* next = (void*)&next_;void* tail;
if (pNext != nullptr){
do {tail = next;next = ((S_base_structure*)next)->pNext;} 
while (next != nullptr);
((S_base_structure*)tail)->pNext = (void*)pNext;
}
pNext = &next_;
return *this;
}
#endif


}}