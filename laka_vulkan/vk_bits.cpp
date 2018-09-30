/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#include "vk_bits.h"
namespace laka { namespace vk {
F_queue::F_queue():flag(0){}
F_queue::F_queue(F_queue::Bits bits_):flag(static_cast<int>(bits_)){}
F_queue::F_queue(F_queue const& flag_):flag(flag_.flag){}
F_queue::F_queue(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_queue& F_queue::operator = (F_queue flag_){flag = flag_.flag;return *this;}
F_queue F_queue::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_queue& F_queue::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_queue F_queue::operator | (F_queue flag_){return flag | flag_.flag;}
F_queue& F_queue::operator |= (F_queue flag_){flag |= flag_.flag;return *this;}
F_queue F_queue::operator & (F_queue flag_){return flag & flag_.flag;}
F_queue& F_queue::operator &= (F_queue flag_){flag &= flag_.flag;return *this;}
F_queue F_queue::operator ^ (F_queue flag_){return flag ^ flag_.flag;}
F_queue& F_queue::operator ^= (F_queue flag_){flag ^= flag_.flag;return *this;}
F_queue F_queue::operator ~ (){return all_flags().flag^flag;}
bool F_queue::operator !(){return !flag;}
bool F_queue::operator == (F_queue flag_){return flag == flag_.flag;}
bool F_queue::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_queue::operator != (F_queue flag_){return flag != flag_.flag;}
bool F_queue::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_queue::operator bool(){return !!flag;}
F_queue& F_queue::clear(){flag = 0;return *this;}
F_queue operator|(F_queue::Bits bit1_, F_queue::Bits bit2_){F_queue flags(bit1_);return flags | bit2_;}
F_queue::F_queue(int flags_):flag(flags_) {}
F_queue F_queue::all_flags(){
 return VK_QUEUE_GRAPHICS_BIT | 
VK_QUEUE_COMPUTE_BIT | 
VK_QUEUE_TRANSFER_BIT | 
VK_QUEUE_SPARSE_BINDING_BIT | 
VK_QUEUE_PROTECTED_BIT;
}
F_queue& F_queue::e_graphics_on(){ flag |= VK_QUEUE_GRAPHICS_BIT; return *this; }F_queue& F_queue::e_graphics_off(){ flag &= ~VK_QUEUE_GRAPHICS_BIT; return *this; }F_queue& F_queue::e_compute_on(){ flag |= VK_QUEUE_COMPUTE_BIT; return *this; }F_queue& F_queue::e_compute_off(){ flag &= ~VK_QUEUE_COMPUTE_BIT; return *this; }F_queue& F_queue::e_transfer_on(){ flag |= VK_QUEUE_TRANSFER_BIT; return *this; }F_queue& F_queue::e_transfer_off(){ flag &= ~VK_QUEUE_TRANSFER_BIT; return *this; }F_queue& F_queue::e_sparse_binding_on(){ flag |= VK_QUEUE_SPARSE_BINDING_BIT; return *this; }F_queue& F_queue::e_sparse_binding_off(){ flag &= ~VK_QUEUE_SPARSE_BINDING_BIT; return *this; }F_queue& F_queue::e_protected_on(){ flag |= VK_QUEUE_PROTECTED_BIT; return *this; }F_queue& F_queue::e_protected_off(){ flag &= ~VK_QUEUE_PROTECTED_BIT; return *this; }

F_device_queue_create::F_device_queue_create():flag(0){}
F_device_queue_create::F_device_queue_create(F_device_queue_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_device_queue_create::F_device_queue_create(F_device_queue_create const& flag_):flag(flag_.flag){}
F_device_queue_create::F_device_queue_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_device_queue_create& F_device_queue_create::operator = (F_device_queue_create flag_){flag = flag_.flag;return *this;}
F_device_queue_create F_device_queue_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_device_queue_create& F_device_queue_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_device_queue_create F_device_queue_create::operator | (F_device_queue_create flag_){return flag | flag_.flag;}
F_device_queue_create& F_device_queue_create::operator |= (F_device_queue_create flag_){flag |= flag_.flag;return *this;}
F_device_queue_create F_device_queue_create::operator & (F_device_queue_create flag_){return flag & flag_.flag;}
F_device_queue_create& F_device_queue_create::operator &= (F_device_queue_create flag_){flag &= flag_.flag;return *this;}
F_device_queue_create F_device_queue_create::operator ^ (F_device_queue_create flag_){return flag ^ flag_.flag;}
F_device_queue_create& F_device_queue_create::operator ^= (F_device_queue_create flag_){flag ^= flag_.flag;return *this;}
F_device_queue_create F_device_queue_create::operator ~ (){return all_flags().flag^flag;}
bool F_device_queue_create::operator !(){return !flag;}
bool F_device_queue_create::operator == (F_device_queue_create flag_){return flag == flag_.flag;}
bool F_device_queue_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_device_queue_create::operator != (F_device_queue_create flag_){return flag != flag_.flag;}
bool F_device_queue_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_device_queue_create::operator bool(){return !!flag;}
F_device_queue_create& F_device_queue_create::clear(){flag = 0;return *this;}
F_device_queue_create operator|(F_device_queue_create::Bits bit1_, F_device_queue_create::Bits bit2_){F_device_queue_create flags(bit1_);return flags | bit2_;}
F_device_queue_create::F_device_queue_create(int flags_):flag(flags_) {}
F_device_queue_create F_device_queue_create::all_flags(){
 return VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT;
}
F_device_queue_create& F_device_queue_create::e_protected_on(){ flag |= VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT; return *this; }F_device_queue_create& F_device_queue_create::e_protected_off(){ flag &= ~VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT; return *this; }

F_command_pool_create::F_command_pool_create():flag(0){}
F_command_pool_create::F_command_pool_create(F_command_pool_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_command_pool_create::F_command_pool_create(F_command_pool_create const& flag_):flag(flag_.flag){}
F_command_pool_create::F_command_pool_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_pool_create& F_command_pool_create::operator = (F_command_pool_create flag_){flag = flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_command_pool_create& F_command_pool_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_pool_create F_command_pool_create::operator | (F_command_pool_create flag_){return flag | flag_.flag;}
F_command_pool_create& F_command_pool_create::operator |= (F_command_pool_create flag_){flag |= flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator & (F_command_pool_create flag_){return flag & flag_.flag;}
F_command_pool_create& F_command_pool_create::operator &= (F_command_pool_create flag_){flag &= flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator ^ (F_command_pool_create flag_){return flag ^ flag_.flag;}
F_command_pool_create& F_command_pool_create::operator ^= (F_command_pool_create flag_){flag ^= flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator ~ (){return all_flags().flag^flag;}
bool F_command_pool_create::operator !(){return !flag;}
bool F_command_pool_create::operator == (F_command_pool_create flag_){return flag == flag_.flag;}
bool F_command_pool_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_command_pool_create::operator != (F_command_pool_create flag_){return flag != flag_.flag;}
bool F_command_pool_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_command_pool_create::operator bool(){return !!flag;}
F_command_pool_create& F_command_pool_create::clear(){flag = 0;return *this;}
F_command_pool_create operator|(F_command_pool_create::Bits bit1_, F_command_pool_create::Bits bit2_){F_command_pool_create flags(bit1_);return flags | bit2_;}
F_command_pool_create::F_command_pool_create(int flags_):flag(flags_) {}
F_command_pool_create F_command_pool_create::all_flags(){
 return VK_COMMAND_POOL_CREATE_TRANSIENT_BIT | 
VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT | 
VK_COMMAND_POOL_CREATE_PROTECTED_BIT;
}
F_command_pool_create& F_command_pool_create::e_transient_on(){ flag |= VK_COMMAND_POOL_CREATE_TRANSIENT_BIT; return *this; }F_command_pool_create& F_command_pool_create::e_transient_off(){ flag &= ~VK_COMMAND_POOL_CREATE_TRANSIENT_BIT; return *this; }F_command_pool_create& F_command_pool_create::e_reset_command_buffer_on(){ flag |= VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT; return *this; }F_command_pool_create& F_command_pool_create::e_reset_command_buffer_off(){ flag &= ~VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT; return *this; }F_command_pool_create& F_command_pool_create::e_protected_on(){ flag |= VK_COMMAND_POOL_CREATE_PROTECTED_BIT; return *this; }F_command_pool_create& F_command_pool_create::e_protected_off(){ flag &= ~VK_COMMAND_POOL_CREATE_PROTECTED_BIT; return *this; }

F_command_pool_reset::F_command_pool_reset():flag(0){}
F_command_pool_reset::F_command_pool_reset(F_command_pool_reset::Bits bits_):flag(static_cast<int>(bits_)){}
F_command_pool_reset::F_command_pool_reset(F_command_pool_reset const& flag_):flag(flag_.flag){}
F_command_pool_reset::F_command_pool_reset(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_pool_reset& F_command_pool_reset::operator = (F_command_pool_reset flag_){flag = flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_command_pool_reset& F_command_pool_reset::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_pool_reset F_command_pool_reset::operator | (F_command_pool_reset flag_){return flag | flag_.flag;}
F_command_pool_reset& F_command_pool_reset::operator |= (F_command_pool_reset flag_){flag |= flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator & (F_command_pool_reset flag_){return flag & flag_.flag;}
F_command_pool_reset& F_command_pool_reset::operator &= (F_command_pool_reset flag_){flag &= flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator ^ (F_command_pool_reset flag_){return flag ^ flag_.flag;}
F_command_pool_reset& F_command_pool_reset::operator ^= (F_command_pool_reset flag_){flag ^= flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator ~ (){return all_flags().flag^flag;}
bool F_command_pool_reset::operator !(){return !flag;}
bool F_command_pool_reset::operator == (F_command_pool_reset flag_){return flag == flag_.flag;}
bool F_command_pool_reset::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_command_pool_reset::operator != (F_command_pool_reset flag_){return flag != flag_.flag;}
bool F_command_pool_reset::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_command_pool_reset::operator bool(){return !!flag;}
F_command_pool_reset& F_command_pool_reset::clear(){flag = 0;return *this;}
F_command_pool_reset operator|(F_command_pool_reset::Bits bit1_, F_command_pool_reset::Bits bit2_){F_command_pool_reset flags(bit1_);return flags | bit2_;}
F_command_pool_reset::F_command_pool_reset(int flags_):flag(flags_) {}
F_command_pool_reset F_command_pool_reset::all_flags(){
 return VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT;
}
F_command_pool_reset& F_command_pool_reset::e_release_resources_on(){ flag |= VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT; return *this; }F_command_pool_reset& F_command_pool_reset::e_release_resources_off(){ flag &= ~VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT; return *this; }

F_command_buffer_reset::F_command_buffer_reset():flag(0){}
F_command_buffer_reset::F_command_buffer_reset(F_command_buffer_reset::Bits bits_):flag(static_cast<int>(bits_)){}
F_command_buffer_reset::F_command_buffer_reset(F_command_buffer_reset const& flag_):flag(flag_.flag){}
F_command_buffer_reset::F_command_buffer_reset(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_buffer_reset& F_command_buffer_reset::operator = (F_command_buffer_reset flag_){flag = flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_command_buffer_reset& F_command_buffer_reset::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_buffer_reset F_command_buffer_reset::operator | (F_command_buffer_reset flag_){return flag | flag_.flag;}
F_command_buffer_reset& F_command_buffer_reset::operator |= (F_command_buffer_reset flag_){flag |= flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator & (F_command_buffer_reset flag_){return flag & flag_.flag;}
F_command_buffer_reset& F_command_buffer_reset::operator &= (F_command_buffer_reset flag_){flag &= flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator ^ (F_command_buffer_reset flag_){return flag ^ flag_.flag;}
F_command_buffer_reset& F_command_buffer_reset::operator ^= (F_command_buffer_reset flag_){flag ^= flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator ~ (){return all_flags().flag^flag;}
bool F_command_buffer_reset::operator !(){return !flag;}
bool F_command_buffer_reset::operator == (F_command_buffer_reset flag_){return flag == flag_.flag;}
bool F_command_buffer_reset::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_command_buffer_reset::operator != (F_command_buffer_reset flag_){return flag != flag_.flag;}
bool F_command_buffer_reset::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_command_buffer_reset::operator bool(){return !!flag;}
F_command_buffer_reset& F_command_buffer_reset::clear(){flag = 0;return *this;}
F_command_buffer_reset operator|(F_command_buffer_reset::Bits bit1_, F_command_buffer_reset::Bits bit2_){F_command_buffer_reset flags(bit1_);return flags | bit2_;}
F_command_buffer_reset::F_command_buffer_reset(int flags_):flag(flags_) {}
F_command_buffer_reset F_command_buffer_reset::all_flags(){
 return VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT;
}
F_command_buffer_reset& F_command_buffer_reset::e_release_resources_on(){ flag |= VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT; return *this; }F_command_buffer_reset& F_command_buffer_reset::e_release_resources_off(){ flag &= ~VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT; return *this; }

F_command_buffer_usage::F_command_buffer_usage():flag(0){}
F_command_buffer_usage::F_command_buffer_usage(F_command_buffer_usage::Bits bits_):flag(static_cast<int>(bits_)){}
F_command_buffer_usage::F_command_buffer_usage(F_command_buffer_usage const& flag_):flag(flag_.flag){}
F_command_buffer_usage::F_command_buffer_usage(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_buffer_usage& F_command_buffer_usage::operator = (F_command_buffer_usage flag_){flag = flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_command_buffer_usage& F_command_buffer_usage::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_buffer_usage F_command_buffer_usage::operator | (F_command_buffer_usage flag_){return flag | flag_.flag;}
F_command_buffer_usage& F_command_buffer_usage::operator |= (F_command_buffer_usage flag_){flag |= flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator & (F_command_buffer_usage flag_){return flag & flag_.flag;}
F_command_buffer_usage& F_command_buffer_usage::operator &= (F_command_buffer_usage flag_){flag &= flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator ^ (F_command_buffer_usage flag_){return flag ^ flag_.flag;}
F_command_buffer_usage& F_command_buffer_usage::operator ^= (F_command_buffer_usage flag_){flag ^= flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator ~ (){return all_flags().flag^flag;}
bool F_command_buffer_usage::operator !(){return !flag;}
bool F_command_buffer_usage::operator == (F_command_buffer_usage flag_){return flag == flag_.flag;}
bool F_command_buffer_usage::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_command_buffer_usage::operator != (F_command_buffer_usage flag_){return flag != flag_.flag;}
bool F_command_buffer_usage::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_command_buffer_usage::operator bool(){return !!flag;}
F_command_buffer_usage& F_command_buffer_usage::clear(){flag = 0;return *this;}
F_command_buffer_usage operator|(F_command_buffer_usage::Bits bit1_, F_command_buffer_usage::Bits bit2_){F_command_buffer_usage flags(bit1_);return flags | bit2_;}
F_command_buffer_usage::F_command_buffer_usage(int flags_):flag(flags_) {}
F_command_buffer_usage F_command_buffer_usage::all_flags(){
 return VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT | 
VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT | 
VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
}
F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_on(){ flag |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; return *this; }F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_off(){ flag &= ~VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; return *this; }F_command_buffer_usage& F_command_buffer_usage::e_render_pass_continue_on(){ flag |= VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT; return *this; }F_command_buffer_usage& F_command_buffer_usage::e_render_pass_continue_off(){ flag &= ~VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT; return *this; }F_command_buffer_usage& F_command_buffer_usage::e_simultaneous_use_on(){ flag |= VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT; return *this; }F_command_buffer_usage& F_command_buffer_usage::e_simultaneous_use_off(){ flag &= ~VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT; return *this; }

F_pipeline_stage::F_pipeline_stage():flag(0){}
F_pipeline_stage::F_pipeline_stage(F_pipeline_stage::Bits bits_):flag(static_cast<int>(bits_)){}
F_pipeline_stage::F_pipeline_stage(F_pipeline_stage const& flag_):flag(flag_.flag){}
F_pipeline_stage::F_pipeline_stage(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_pipeline_stage& F_pipeline_stage::operator = (F_pipeline_stage flag_){flag = flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_pipeline_stage& F_pipeline_stage::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_pipeline_stage F_pipeline_stage::operator | (F_pipeline_stage flag_){return flag | flag_.flag;}
F_pipeline_stage& F_pipeline_stage::operator |= (F_pipeline_stage flag_){flag |= flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator & (F_pipeline_stage flag_){return flag & flag_.flag;}
F_pipeline_stage& F_pipeline_stage::operator &= (F_pipeline_stage flag_){flag &= flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator ^ (F_pipeline_stage flag_){return flag ^ flag_.flag;}
F_pipeline_stage& F_pipeline_stage::operator ^= (F_pipeline_stage flag_){flag ^= flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator ~ (){return all_flags().flag^flag;}
bool F_pipeline_stage::operator !(){return !flag;}
bool F_pipeline_stage::operator == (F_pipeline_stage flag_){return flag == flag_.flag;}
bool F_pipeline_stage::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_pipeline_stage::operator != (F_pipeline_stage flag_){return flag != flag_.flag;}
bool F_pipeline_stage::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_pipeline_stage::operator bool(){return !!flag;}
F_pipeline_stage& F_pipeline_stage::clear(){flag = 0;return *this;}
F_pipeline_stage operator|(F_pipeline_stage::Bits bit1_, F_pipeline_stage::Bits bit2_){F_pipeline_stage flags(bit1_);return flags | bit2_;}
F_pipeline_stage::F_pipeline_stage(int flags_):flag(flags_) {}
F_pipeline_stage F_pipeline_stage::all_flags(){
 return VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT | 
VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT | 
VK_PIPELINE_STAGE_VERTEX_INPUT_BIT | 
VK_PIPELINE_STAGE_VERTEX_SHADER_BIT | 
VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT | 
VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT | 
VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT | 
VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT | 
VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT | 
VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT | 
VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT | 
VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT | 
VK_PIPELINE_STAGE_TRANSFER_BIT | 
VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT | 
VK_PIPELINE_STAGE_HOST_BIT | 
VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT | 
VK_PIPELINE_STAGE_ALL_COMMANDS_BIT | 
VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT | 
VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX;
}
F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on(){ flag |= VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off(){ flag &= ~VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_draw_indirect_on(){ flag |= VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_draw_indirect_off(){ flag &= ~VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_vertex_input_on(){ flag |= VK_PIPELINE_STAGE_VERTEX_INPUT_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_vertex_input_off(){ flag &= ~VK_PIPELINE_STAGE_VERTEX_INPUT_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_vertex_shader_on(){ flag |= VK_PIPELINE_STAGE_VERTEX_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_vertex_shader_off(){ flag &= ~VK_PIPELINE_STAGE_VERTEX_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_tessellation_control_shader_on(){ flag |= VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_tessellation_control_shader_off(){ flag &= ~VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_tessellation_evaluation_shader_on(){ flag |= VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_tessellation_evaluation_shader_off(){ flag &= ~VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_geometry_shader_on(){ flag |= VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_geometry_shader_off(){ flag &= ~VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_fragment_shader_on(){ flag |= VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_fragment_shader_off(){ flag &= ~VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_early_fragment_tests_on(){ flag |= VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_early_fragment_tests_off(){ flag &= ~VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_late_fragment_tests_on(){ flag |= VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_late_fragment_tests_off(){ flag &= ~VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_color_attachment_output_on(){ flag |= VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_color_attachment_output_off(){ flag &= ~VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_compute_shader_on(){ flag |= VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_compute_shader_off(){ flag &= ~VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_transfer_on(){ flag |= VK_PIPELINE_STAGE_TRANSFER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_transfer_off(){ flag &= ~VK_PIPELINE_STAGE_TRANSFER_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_bottom_of_pipe_on(){ flag |= VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_bottom_of_pipe_off(){ flag &= ~VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_host_on(){ flag |= VK_PIPELINE_STAGE_HOST_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_host_off(){ flag &= ~VK_PIPELINE_STAGE_HOST_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_all_graphics_on(){ flag |= VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_all_graphics_off(){ flag &= ~VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_all_commands_on(){ flag |= VK_PIPELINE_STAGE_ALL_COMMANDS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_all_commands_off(){ flag &= ~VK_PIPELINE_STAGE_ALL_COMMANDS_BIT; return *this; }F_pipeline_stage& F_pipeline_stage::e_conditional_rendering_ext_on(){ flag |= VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT; return *this; }F_pipeline_stage& F_pipeline_stage::e_conditional_rendering_ext_off(){ flag &= ~VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT; return *this; }F_pipeline_stage& F_pipeline_stage::e_command_process_nvx_on(){ flag |= VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX; return *this; }F_pipeline_stage& F_pipeline_stage::e_command_process_nvx_off(){ flag &= ~VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX; return *this; }

F_access::F_access():flag(0){}
F_access::F_access(F_access::Bits bits_):flag(static_cast<int>(bits_)){}
F_access::F_access(F_access const& flag_):flag(flag_.flag){}
F_access::F_access(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_access& F_access::operator = (F_access flag_){flag = flag_.flag;return *this;}
F_access F_access::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_access& F_access::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_access F_access::operator | (F_access flag_){return flag | flag_.flag;}
F_access& F_access::operator |= (F_access flag_){flag |= flag_.flag;return *this;}
F_access F_access::operator & (F_access flag_){return flag & flag_.flag;}
F_access& F_access::operator &= (F_access flag_){flag &= flag_.flag;return *this;}
F_access F_access::operator ^ (F_access flag_){return flag ^ flag_.flag;}
F_access& F_access::operator ^= (F_access flag_){flag ^= flag_.flag;return *this;}
F_access F_access::operator ~ (){return all_flags().flag^flag;}
bool F_access::operator !(){return !flag;}
bool F_access::operator == (F_access flag_){return flag == flag_.flag;}
bool F_access::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_access::operator != (F_access flag_){return flag != flag_.flag;}
bool F_access::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_access::operator bool(){return !!flag;}
F_access& F_access::clear(){flag = 0;return *this;}
F_access operator|(F_access::Bits bit1_, F_access::Bits bit2_){F_access flags(bit1_);return flags | bit2_;}
F_access::F_access(int flags_):flag(flags_) {}
F_access F_access::all_flags(){
 return VK_ACCESS_INDIRECT_COMMAND_READ_BIT | 
VK_ACCESS_INDEX_READ_BIT | 
VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT | 
VK_ACCESS_UNIFORM_READ_BIT | 
VK_ACCESS_INPUT_ATTACHMENT_READ_BIT | 
VK_ACCESS_SHADER_READ_BIT | 
VK_ACCESS_SHADER_WRITE_BIT | 
VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | 
VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT | 
VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | 
VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT | 
VK_ACCESS_TRANSFER_READ_BIT | 
VK_ACCESS_TRANSFER_WRITE_BIT | 
VK_ACCESS_HOST_READ_BIT | 
VK_ACCESS_HOST_WRITE_BIT | 
VK_ACCESS_MEMORY_READ_BIT | 
VK_ACCESS_MEMORY_WRITE_BIT | 
VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT | 
VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX | 
VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX | 
VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT;
}
F_access& F_access::e_indirect_command_read_on(){ flag |= VK_ACCESS_INDIRECT_COMMAND_READ_BIT; return *this; }F_access& F_access::e_indirect_command_read_off(){ flag &= ~VK_ACCESS_INDIRECT_COMMAND_READ_BIT; return *this; }F_access& F_access::e_index_read_on(){ flag |= VK_ACCESS_INDEX_READ_BIT; return *this; }F_access& F_access::e_index_read_off(){ flag &= ~VK_ACCESS_INDEX_READ_BIT; return *this; }F_access& F_access::e_vertex_attribute_read_on(){ flag |= VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT; return *this; }F_access& F_access::e_vertex_attribute_read_off(){ flag &= ~VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT; return *this; }F_access& F_access::e_uniform_read_on(){ flag |= VK_ACCESS_UNIFORM_READ_BIT; return *this; }F_access& F_access::e_uniform_read_off(){ flag &= ~VK_ACCESS_UNIFORM_READ_BIT; return *this; }F_access& F_access::e_input_attachment_read_on(){ flag |= VK_ACCESS_INPUT_ATTACHMENT_READ_BIT; return *this; }F_access& F_access::e_input_attachment_read_off(){ flag &= ~VK_ACCESS_INPUT_ATTACHMENT_READ_BIT; return *this; }F_access& F_access::e_shader_read_on(){ flag |= VK_ACCESS_SHADER_READ_BIT; return *this; }F_access& F_access::e_shader_read_off(){ flag &= ~VK_ACCESS_SHADER_READ_BIT; return *this; }F_access& F_access::e_shader_write_on(){ flag |= VK_ACCESS_SHADER_WRITE_BIT; return *this; }F_access& F_access::e_shader_write_off(){ flag &= ~VK_ACCESS_SHADER_WRITE_BIT; return *this; }F_access& F_access::e_color_attachment_read_on(){ flag |= VK_ACCESS_COLOR_ATTACHMENT_READ_BIT; return *this; }F_access& F_access::e_color_attachment_read_off(){ flag &= ~VK_ACCESS_COLOR_ATTACHMENT_READ_BIT; return *this; }F_access& F_access::e_color_attachment_write_on(){ flag |= VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT; return *this; }F_access& F_access::e_color_attachment_write_off(){ flag &= ~VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT; return *this; }F_access& F_access::e_depth_stencil_attachment_read_on(){ flag |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT; return *this; }F_access& F_access::e_depth_stencil_attachment_read_off(){ flag &= ~VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT; return *this; }F_access& F_access::e_depth_stencil_attachment_write_on(){ flag |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT; return *this; }F_access& F_access::e_depth_stencil_attachment_write_off(){ flag &= ~VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT; return *this; }F_access& F_access::e_transfer_read_on(){ flag |= VK_ACCESS_TRANSFER_READ_BIT; return *this; }F_access& F_access::e_transfer_read_off(){ flag &= ~VK_ACCESS_TRANSFER_READ_BIT; return *this; }F_access& F_access::e_transfer_write_on(){ flag |= VK_ACCESS_TRANSFER_WRITE_BIT; return *this; }F_access& F_access::e_transfer_write_off(){ flag &= ~VK_ACCESS_TRANSFER_WRITE_BIT; return *this; }F_access& F_access::e_host_read_on(){ flag |= VK_ACCESS_HOST_READ_BIT; return *this; }F_access& F_access::e_host_read_off(){ flag &= ~VK_ACCESS_HOST_READ_BIT; return *this; }F_access& F_access::e_host_write_on(){ flag |= VK_ACCESS_HOST_WRITE_BIT; return *this; }F_access& F_access::e_host_write_off(){ flag &= ~VK_ACCESS_HOST_WRITE_BIT; return *this; }F_access& F_access::e_memory_read_on(){ flag |= VK_ACCESS_MEMORY_READ_BIT; return *this; }F_access& F_access::e_memory_read_off(){ flag &= ~VK_ACCESS_MEMORY_READ_BIT; return *this; }F_access& F_access::e_memory_write_on(){ flag |= VK_ACCESS_MEMORY_WRITE_BIT; return *this; }F_access& F_access::e_memory_write_off(){ flag &= ~VK_ACCESS_MEMORY_WRITE_BIT; return *this; }F_access& F_access::e_conditional_rendering_read_ext_on(){ flag |= VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT; return *this; }F_access& F_access::e_conditional_rendering_read_ext_off(){ flag &= ~VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT; return *this; }F_access& F_access::e_command_process_read_nvx_on(){ flag |= VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX; return *this; }F_access& F_access::e_command_process_read_nvx_off(){ flag &= ~VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX; return *this; }F_access& F_access::e_command_process_write_nvx_on(){ flag |= VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX; return *this; }F_access& F_access::e_command_process_write_nvx_off(){ flag &= ~VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX; return *this; }F_access& F_access::e_color_attachment_read_noncoherent_ext_on(){ flag |= VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT; return *this; }F_access& F_access::e_color_attachment_read_noncoherent_ext_off(){ flag &= ~VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT; return *this; }

F_fence_create::F_fence_create():flag(0){}
F_fence_create::F_fence_create(F_fence_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_fence_create::F_fence_create(F_fence_create const& flag_):flag(flag_.flag){}
F_fence_create::F_fence_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_fence_create& F_fence_create::operator = (F_fence_create flag_){flag = flag_.flag;return *this;}
F_fence_create F_fence_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_fence_create& F_fence_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_fence_create F_fence_create::operator | (F_fence_create flag_){return flag | flag_.flag;}
F_fence_create& F_fence_create::operator |= (F_fence_create flag_){flag |= flag_.flag;return *this;}
F_fence_create F_fence_create::operator & (F_fence_create flag_){return flag & flag_.flag;}
F_fence_create& F_fence_create::operator &= (F_fence_create flag_){flag &= flag_.flag;return *this;}
F_fence_create F_fence_create::operator ^ (F_fence_create flag_){return flag ^ flag_.flag;}
F_fence_create& F_fence_create::operator ^= (F_fence_create flag_){flag ^= flag_.flag;return *this;}
F_fence_create F_fence_create::operator ~ (){return all_flags().flag^flag;}
bool F_fence_create::operator !(){return !flag;}
bool F_fence_create::operator == (F_fence_create flag_){return flag == flag_.flag;}
bool F_fence_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_fence_create::operator != (F_fence_create flag_){return flag != flag_.flag;}
bool F_fence_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_fence_create::operator bool(){return !!flag;}
F_fence_create& F_fence_create::clear(){flag = 0;return *this;}
F_fence_create operator|(F_fence_create::Bits bit1_, F_fence_create::Bits bit2_){F_fence_create flags(bit1_);return flags | bit2_;}
F_fence_create::F_fence_create(int flags_):flag(flags_) {}
F_fence_create F_fence_create::all_flags(){
 return VK_FENCE_CREATE_SIGNALED_BIT;
}
F_fence_create& F_fence_create::e_signaled_on(){ flag |= VK_FENCE_CREATE_SIGNALED_BIT; return *this; }F_fence_create& F_fence_create::e_signaled_off(){ flag &= ~VK_FENCE_CREATE_SIGNALED_BIT; return *this; }

F_fence_import::F_fence_import():flag(0){}
F_fence_import::F_fence_import(F_fence_import::Bits bits_):flag(static_cast<int>(bits_)){}
F_fence_import::F_fence_import(F_fence_import const& flag_):flag(flag_.flag){}
F_fence_import::F_fence_import(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_fence_import& F_fence_import::operator = (F_fence_import flag_){flag = flag_.flag;return *this;}
F_fence_import F_fence_import::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_fence_import& F_fence_import::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_fence_import F_fence_import::operator | (F_fence_import flag_){return flag | flag_.flag;}
F_fence_import& F_fence_import::operator |= (F_fence_import flag_){flag |= flag_.flag;return *this;}
F_fence_import F_fence_import::operator & (F_fence_import flag_){return flag & flag_.flag;}
F_fence_import& F_fence_import::operator &= (F_fence_import flag_){flag &= flag_.flag;return *this;}
F_fence_import F_fence_import::operator ^ (F_fence_import flag_){return flag ^ flag_.flag;}
F_fence_import& F_fence_import::operator ^= (F_fence_import flag_){flag ^= flag_.flag;return *this;}
F_fence_import F_fence_import::operator ~ (){return all_flags().flag^flag;}
bool F_fence_import::operator !(){return !flag;}
bool F_fence_import::operator == (F_fence_import flag_){return flag == flag_.flag;}
bool F_fence_import::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_fence_import::operator != (F_fence_import flag_){return flag != flag_.flag;}
bool F_fence_import::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_fence_import::operator bool(){return !!flag;}
F_fence_import& F_fence_import::clear(){flag = 0;return *this;}
F_fence_import operator|(F_fence_import::Bits bit1_, F_fence_import::Bits bit2_){F_fence_import flags(bit1_);return flags | bit2_;}
F_fence_import::F_fence_import(int flags_):flag(flags_) {}
F_fence_import F_fence_import::all_flags(){
 return VK_FENCE_IMPORT_TEMPORARY_BIT | 
VK_FENCE_IMPORT_TEMPORARY_BIT_KHR;
}
F_fence_import& F_fence_import::e_temporary_on(){ flag |= VK_FENCE_IMPORT_TEMPORARY_BIT; return *this; }F_fence_import& F_fence_import::e_temporary_off(){ flag &= ~VK_FENCE_IMPORT_TEMPORARY_BIT; return *this; }F_fence_import& F_fence_import::e_temporary_khr_on(){ flag |= VK_FENCE_IMPORT_TEMPORARY_BIT_KHR; return *this; }F_fence_import& F_fence_import::e_temporary_khr_off(){ flag &= ~VK_FENCE_IMPORT_TEMPORARY_BIT_KHR; return *this; }

F_semaphore_import::F_semaphore_import():flag(0){}
F_semaphore_import::F_semaphore_import(F_semaphore_import::Bits bits_):flag(static_cast<int>(bits_)){}
F_semaphore_import::F_semaphore_import(F_semaphore_import const& flag_):flag(flag_.flag){}
F_semaphore_import::F_semaphore_import(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_semaphore_import& F_semaphore_import::operator = (F_semaphore_import flag_){flag = flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_semaphore_import& F_semaphore_import::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_semaphore_import F_semaphore_import::operator | (F_semaphore_import flag_){return flag | flag_.flag;}
F_semaphore_import& F_semaphore_import::operator |= (F_semaphore_import flag_){flag |= flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator & (F_semaphore_import flag_){return flag & flag_.flag;}
F_semaphore_import& F_semaphore_import::operator &= (F_semaphore_import flag_){flag &= flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator ^ (F_semaphore_import flag_){return flag ^ flag_.flag;}
F_semaphore_import& F_semaphore_import::operator ^= (F_semaphore_import flag_){flag ^= flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator ~ (){return all_flags().flag^flag;}
bool F_semaphore_import::operator !(){return !flag;}
bool F_semaphore_import::operator == (F_semaphore_import flag_){return flag == flag_.flag;}
bool F_semaphore_import::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_semaphore_import::operator != (F_semaphore_import flag_){return flag != flag_.flag;}
bool F_semaphore_import::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_semaphore_import::operator bool(){return !!flag;}
F_semaphore_import& F_semaphore_import::clear(){flag = 0;return *this;}
F_semaphore_import operator|(F_semaphore_import::Bits bit1_, F_semaphore_import::Bits bit2_){F_semaphore_import flags(bit1_);return flags | bit2_;}
F_semaphore_import::F_semaphore_import(int flags_):flag(flags_) {}
F_semaphore_import F_semaphore_import::all_flags(){
 return VK_SEMAPHORE_IMPORT_TEMPORARY_BIT | 
VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR;
}
F_semaphore_import& F_semaphore_import::e_temporary_on(){ flag |= VK_SEMAPHORE_IMPORT_TEMPORARY_BIT; return *this; }F_semaphore_import& F_semaphore_import::e_temporary_off(){ flag &= ~VK_SEMAPHORE_IMPORT_TEMPORARY_BIT; return *this; }F_semaphore_import& F_semaphore_import::e_temporary_khr_on(){ flag |= VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR; return *this; }F_semaphore_import& F_semaphore_import::e_temporary_khr_off(){ flag &= ~VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR; return *this; }

F_dependency::F_dependency():flag(0){}
F_dependency::F_dependency(F_dependency::Bits bits_):flag(static_cast<int>(bits_)){}
F_dependency::F_dependency(F_dependency const& flag_):flag(flag_.flag){}
F_dependency::F_dependency(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_dependency& F_dependency::operator = (F_dependency flag_){flag = flag_.flag;return *this;}
F_dependency F_dependency::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_dependency& F_dependency::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_dependency F_dependency::operator | (F_dependency flag_){return flag | flag_.flag;}
F_dependency& F_dependency::operator |= (F_dependency flag_){flag |= flag_.flag;return *this;}
F_dependency F_dependency::operator & (F_dependency flag_){return flag & flag_.flag;}
F_dependency& F_dependency::operator &= (F_dependency flag_){flag &= flag_.flag;return *this;}
F_dependency F_dependency::operator ^ (F_dependency flag_){return flag ^ flag_.flag;}
F_dependency& F_dependency::operator ^= (F_dependency flag_){flag ^= flag_.flag;return *this;}
F_dependency F_dependency::operator ~ (){return all_flags().flag^flag;}
bool F_dependency::operator !(){return !flag;}
bool F_dependency::operator == (F_dependency flag_){return flag == flag_.flag;}
bool F_dependency::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_dependency::operator != (F_dependency flag_){return flag != flag_.flag;}
bool F_dependency::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_dependency::operator bool(){return !!flag;}
F_dependency& F_dependency::clear(){flag = 0;return *this;}
F_dependency operator|(F_dependency::Bits bit1_, F_dependency::Bits bit2_){F_dependency flags(bit1_);return flags | bit2_;}
F_dependency::F_dependency(int flags_):flag(flags_) {}
F_dependency F_dependency::all_flags(){
 return VK_DEPENDENCY_BY_REGION_BIT | 
VK_DEPENDENCY_DEVICE_GROUP_BIT | 
VK_DEPENDENCY_VIEW_LOCAL_BIT | 
VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR | 
VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR;
}
F_dependency& F_dependency::e_by_region_on(){ flag |= VK_DEPENDENCY_BY_REGION_BIT; return *this; }F_dependency& F_dependency::e_by_region_off(){ flag &= ~VK_DEPENDENCY_BY_REGION_BIT; return *this; }F_dependency& F_dependency::e_device_group_on(){ flag |= VK_DEPENDENCY_DEVICE_GROUP_BIT; return *this; }F_dependency& F_dependency::e_device_group_off(){ flag &= ~VK_DEPENDENCY_DEVICE_GROUP_BIT; return *this; }F_dependency& F_dependency::e_view_local_on(){ flag |= VK_DEPENDENCY_VIEW_LOCAL_BIT; return *this; }F_dependency& F_dependency::e_view_local_off(){ flag &= ~VK_DEPENDENCY_VIEW_LOCAL_BIT; return *this; }F_dependency& F_dependency::e_view_local_khr_on(){ flag |= VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR; return *this; }F_dependency& F_dependency::e_view_local_khr_off(){ flag &= ~VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR; return *this; }F_dependency& F_dependency::e_device_group_khr_on(){ flag |= VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR; return *this; }F_dependency& F_dependency::e_device_group_khr_off(){ flag &= ~VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR; return *this; }

F_attachment_description::F_attachment_description():flag(0){}
F_attachment_description::F_attachment_description(F_attachment_description::Bits bits_):flag(static_cast<int>(bits_)){}
F_attachment_description::F_attachment_description(F_attachment_description const& flag_):flag(flag_.flag){}
F_attachment_description::F_attachment_description(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_attachment_description& F_attachment_description::operator = (F_attachment_description flag_){flag = flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_attachment_description& F_attachment_description::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_attachment_description F_attachment_description::operator | (F_attachment_description flag_){return flag | flag_.flag;}
F_attachment_description& F_attachment_description::operator |= (F_attachment_description flag_){flag |= flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator & (F_attachment_description flag_){return flag & flag_.flag;}
F_attachment_description& F_attachment_description::operator &= (F_attachment_description flag_){flag &= flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator ^ (F_attachment_description flag_){return flag ^ flag_.flag;}
F_attachment_description& F_attachment_description::operator ^= (F_attachment_description flag_){flag ^= flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator ~ (){return all_flags().flag^flag;}
bool F_attachment_description::operator !(){return !flag;}
bool F_attachment_description::operator == (F_attachment_description flag_){return flag == flag_.flag;}
bool F_attachment_description::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_attachment_description::operator != (F_attachment_description flag_){return flag != flag_.flag;}
bool F_attachment_description::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_attachment_description::operator bool(){return !!flag;}
F_attachment_description& F_attachment_description::clear(){flag = 0;return *this;}
F_attachment_description operator|(F_attachment_description::Bits bit1_, F_attachment_description::Bits bit2_){F_attachment_description flags(bit1_);return flags | bit2_;}
F_attachment_description::F_attachment_description(int flags_):flag(flags_) {}
F_attachment_description F_attachment_description::all_flags(){
 return VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT;
}
F_attachment_description& F_attachment_description::e_may_alias_on(){ flag |= VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT; return *this; }F_attachment_description& F_attachment_description::e_may_alias_off(){ flag &= ~VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT; return *this; }

F_subpass_description::F_subpass_description():flag(0){}
F_subpass_description::F_subpass_description(F_subpass_description::Bits bits_):flag(static_cast<int>(bits_)){}
F_subpass_description::F_subpass_description(F_subpass_description const& flag_):flag(flag_.flag){}
F_subpass_description::F_subpass_description(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_subpass_description& F_subpass_description::operator = (F_subpass_description flag_){flag = flag_.flag;return *this;}
F_subpass_description F_subpass_description::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_subpass_description& F_subpass_description::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_subpass_description F_subpass_description::operator | (F_subpass_description flag_){return flag | flag_.flag;}
F_subpass_description& F_subpass_description::operator |= (F_subpass_description flag_){flag |= flag_.flag;return *this;}
F_subpass_description F_subpass_description::operator & (F_subpass_description flag_){return flag & flag_.flag;}
F_subpass_description& F_subpass_description::operator &= (F_subpass_description flag_){flag &= flag_.flag;return *this;}
F_subpass_description F_subpass_description::operator ^ (F_subpass_description flag_){return flag ^ flag_.flag;}
F_subpass_description& F_subpass_description::operator ^= (F_subpass_description flag_){flag ^= flag_.flag;return *this;}
F_subpass_description F_subpass_description::operator ~ (){return all_flags().flag^flag;}
bool F_subpass_description::operator !(){return !flag;}
bool F_subpass_description::operator == (F_subpass_description flag_){return flag == flag_.flag;}
bool F_subpass_description::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_subpass_description::operator != (F_subpass_description flag_){return flag != flag_.flag;}
bool F_subpass_description::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_subpass_description::operator bool(){return !!flag;}
F_subpass_description& F_subpass_description::clear(){flag = 0;return *this;}
F_subpass_description operator|(F_subpass_description::Bits bit1_, F_subpass_description::Bits bit2_){F_subpass_description flags(bit1_);return flags | bit2_;}
F_subpass_description::F_subpass_description(int flags_):flag(flags_) {}
F_subpass_description F_subpass_description::all_flags(){
 return VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX | 
VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX;
}
F_subpass_description& F_subpass_description::e_per_view_attributes_nvx_on(){ flag |= VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX; return *this; }F_subpass_description& F_subpass_description::e_per_view_attributes_nvx_off(){ flag &= ~VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX; return *this; }F_subpass_description& F_subpass_description::e_per_view_position_x_only_nvx_on(){ flag |= VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX; return *this; }F_subpass_description& F_subpass_description::e_per_view_position_x_only_nvx_off(){ flag &= ~VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX; return *this; }

F_shader_stage::F_shader_stage():flag(0){}
F_shader_stage::F_shader_stage(F_shader_stage::Bits bits_):flag(static_cast<int>(bits_)){}
F_shader_stage::F_shader_stage(F_shader_stage const& flag_):flag(flag_.flag){}
F_shader_stage::F_shader_stage(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_shader_stage& F_shader_stage::operator = (F_shader_stage flag_){flag = flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_shader_stage& F_shader_stage::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_shader_stage F_shader_stage::operator | (F_shader_stage flag_){return flag | flag_.flag;}
F_shader_stage& F_shader_stage::operator |= (F_shader_stage flag_){flag |= flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator & (F_shader_stage flag_){return flag & flag_.flag;}
F_shader_stage& F_shader_stage::operator &= (F_shader_stage flag_){flag &= flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator ^ (F_shader_stage flag_){return flag ^ flag_.flag;}
F_shader_stage& F_shader_stage::operator ^= (F_shader_stage flag_){flag ^= flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator ~ (){return all_flags().flag^flag;}
bool F_shader_stage::operator !(){return !flag;}
bool F_shader_stage::operator == (F_shader_stage flag_){return flag == flag_.flag;}
bool F_shader_stage::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_shader_stage::operator != (F_shader_stage flag_){return flag != flag_.flag;}
bool F_shader_stage::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_shader_stage::operator bool(){return !!flag;}
F_shader_stage& F_shader_stage::clear(){flag = 0;return *this;}
F_shader_stage operator|(F_shader_stage::Bits bit1_, F_shader_stage::Bits bit2_){F_shader_stage flags(bit1_);return flags | bit2_;}
F_shader_stage::F_shader_stage(int flags_):flag(flags_) {}
F_shader_stage F_shader_stage::all_flags(){
 return VK_SHADER_STAGE_VERTEX_BIT | 
VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT | 
VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT | 
VK_SHADER_STAGE_GEOMETRY_BIT | 
VK_SHADER_STAGE_FRAGMENT_BIT | 
VK_SHADER_STAGE_COMPUTE_BIT | 
VK_SHADER_STAGE_ALL_GRAPHICS | 
VK_SHADER_STAGE_ALL;
}
F_shader_stage& F_shader_stage::e_vertex_on(){ flag |= VK_SHADER_STAGE_VERTEX_BIT; return *this; }F_shader_stage& F_shader_stage::e_vertex_off(){ flag &= ~VK_SHADER_STAGE_VERTEX_BIT; return *this; }F_shader_stage& F_shader_stage::e_tessellation_control_on(){ flag |= VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT; return *this; }F_shader_stage& F_shader_stage::e_tessellation_control_off(){ flag &= ~VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT; return *this; }F_shader_stage& F_shader_stage::e_tessellation_evaluation_on(){ flag |= VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT; return *this; }F_shader_stage& F_shader_stage::e_tessellation_evaluation_off(){ flag &= ~VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT; return *this; }F_shader_stage& F_shader_stage::e_geometry_on(){ flag |= VK_SHADER_STAGE_GEOMETRY_BIT; return *this; }F_shader_stage& F_shader_stage::e_geometry_off(){ flag &= ~VK_SHADER_STAGE_GEOMETRY_BIT; return *this; }F_shader_stage& F_shader_stage::e_fragment_on(){ flag |= VK_SHADER_STAGE_FRAGMENT_BIT; return *this; }F_shader_stage& F_shader_stage::e_fragment_off(){ flag &= ~VK_SHADER_STAGE_FRAGMENT_BIT; return *this; }F_shader_stage& F_shader_stage::e_compute_on(){ flag |= VK_SHADER_STAGE_COMPUTE_BIT; return *this; }F_shader_stage& F_shader_stage::e_compute_off(){ flag &= ~VK_SHADER_STAGE_COMPUTE_BIT; return *this; }F_shader_stage& F_shader_stage::e_all_graphics_on(){ flag |= VK_SHADER_STAGE_ALL_GRAPHICS; return *this; }F_shader_stage& F_shader_stage::e_all_graphics_off(){ flag &= ~VK_SHADER_STAGE_ALL_GRAPHICS; return *this; }F_shader_stage& F_shader_stage::e_all_on(){ flag |= VK_SHADER_STAGE_ALL; return *this; }F_shader_stage& F_shader_stage::e_all_off(){ flag &= ~VK_SHADER_STAGE_ALL; return *this; }

F_pipeline_create::F_pipeline_create():flag(0){}
F_pipeline_create::F_pipeline_create(F_pipeline_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_pipeline_create::F_pipeline_create(F_pipeline_create const& flag_):flag(flag_.flag){}
F_pipeline_create::F_pipeline_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_pipeline_create& F_pipeline_create::operator = (F_pipeline_create flag_){flag = flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_pipeline_create& F_pipeline_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_pipeline_create F_pipeline_create::operator | (F_pipeline_create flag_){return flag | flag_.flag;}
F_pipeline_create& F_pipeline_create::operator |= (F_pipeline_create flag_){flag |= flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator & (F_pipeline_create flag_){return flag & flag_.flag;}
F_pipeline_create& F_pipeline_create::operator &= (F_pipeline_create flag_){flag &= flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator ^ (F_pipeline_create flag_){return flag ^ flag_.flag;}
F_pipeline_create& F_pipeline_create::operator ^= (F_pipeline_create flag_){flag ^= flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator ~ (){return all_flags().flag^flag;}
bool F_pipeline_create::operator !(){return !flag;}
bool F_pipeline_create::operator == (F_pipeline_create flag_){return flag == flag_.flag;}
bool F_pipeline_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_pipeline_create::operator != (F_pipeline_create flag_){return flag != flag_.flag;}
bool F_pipeline_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_pipeline_create::operator bool(){return !!flag;}
F_pipeline_create& F_pipeline_create::clear(){flag = 0;return *this;}
F_pipeline_create operator|(F_pipeline_create::Bits bit1_, F_pipeline_create::Bits bit2_){F_pipeline_create flags(bit1_);return flags | bit2_;}
F_pipeline_create::F_pipeline_create(int flags_):flag(flags_) {}
F_pipeline_create F_pipeline_create::all_flags(){
 return VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT | 
VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT | 
VK_PIPELINE_CREATE_DERIVATIVE_BIT | 
VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT | 
VK_PIPELINE_CREATE_DISPATCH_BASE | 
VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR | 
VK_PIPELINE_CREATE_DISPATCH_BASE_KHR;
}
F_pipeline_create& F_pipeline_create::e_disable_optimization_on(){ flag |= VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_disable_optimization_off(){ flag &= ~VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_allow_derivatives_on(){ flag |= VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_allow_derivatives_off(){ flag &= ~VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_derivative_on(){ flag |= VK_PIPELINE_CREATE_DERIVATIVE_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_derivative_off(){ flag &= ~VK_PIPELINE_CREATE_DERIVATIVE_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_view_index_from_device_index_on(){ flag |= VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_view_index_from_device_index_off(){ flag &= ~VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT; return *this; }F_pipeline_create& F_pipeline_create::e_dispatch_base_on(){ flag |= VK_PIPELINE_CREATE_DISPATCH_BASE; return *this; }F_pipeline_create& F_pipeline_create::e_dispatch_base_off(){ flag &= ~VK_PIPELINE_CREATE_DISPATCH_BASE; return *this; }F_pipeline_create& F_pipeline_create::e_view_index_from_device_index_khr_on(){ flag |= VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR; return *this; }F_pipeline_create& F_pipeline_create::e_view_index_from_device_index_khr_off(){ flag &= ~VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR; return *this; }F_pipeline_create& F_pipeline_create::e_dispatch_base_khr_on(){ flag |= VK_PIPELINE_CREATE_DISPATCH_BASE_KHR; return *this; }F_pipeline_create& F_pipeline_create::e_dispatch_base_khr_off(){ flag &= ~VK_PIPELINE_CREATE_DISPATCH_BASE_KHR; return *this; }

F_memory_heap::F_memory_heap():flag(0){}
F_memory_heap::F_memory_heap(F_memory_heap::Bits bits_):flag(static_cast<int>(bits_)){}
F_memory_heap::F_memory_heap(F_memory_heap const& flag_):flag(flag_.flag){}
F_memory_heap::F_memory_heap(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_heap& F_memory_heap::operator = (F_memory_heap flag_){flag = flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_memory_heap& F_memory_heap::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_heap F_memory_heap::operator | (F_memory_heap flag_){return flag | flag_.flag;}
F_memory_heap& F_memory_heap::operator |= (F_memory_heap flag_){flag |= flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator & (F_memory_heap flag_){return flag & flag_.flag;}
F_memory_heap& F_memory_heap::operator &= (F_memory_heap flag_){flag &= flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator ^ (F_memory_heap flag_){return flag ^ flag_.flag;}
F_memory_heap& F_memory_heap::operator ^= (F_memory_heap flag_){flag ^= flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator ~ (){return all_flags().flag^flag;}
bool F_memory_heap::operator !(){return !flag;}
bool F_memory_heap::operator == (F_memory_heap flag_){return flag == flag_.flag;}
bool F_memory_heap::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_memory_heap::operator != (F_memory_heap flag_){return flag != flag_.flag;}
bool F_memory_heap::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_memory_heap::operator bool(){return !!flag;}
F_memory_heap& F_memory_heap::clear(){flag = 0;return *this;}
F_memory_heap operator|(F_memory_heap::Bits bit1_, F_memory_heap::Bits bit2_){F_memory_heap flags(bit1_);return flags | bit2_;}
F_memory_heap::F_memory_heap(int flags_):flag(flags_) {}
F_memory_heap F_memory_heap::all_flags(){
 return VK_MEMORY_HEAP_DEVICE_LOCAL_BIT | 
VK_MEMORY_HEAP_MULTI_INSTANCE_BIT | 
VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR;
}
F_memory_heap& F_memory_heap::e_device_local_on(){ flag |= VK_MEMORY_HEAP_DEVICE_LOCAL_BIT; return *this; }F_memory_heap& F_memory_heap::e_device_local_off(){ flag &= ~VK_MEMORY_HEAP_DEVICE_LOCAL_BIT; return *this; }F_memory_heap& F_memory_heap::e_multi_instance_on(){ flag |= VK_MEMORY_HEAP_MULTI_INSTANCE_BIT; return *this; }F_memory_heap& F_memory_heap::e_multi_instance_off(){ flag &= ~VK_MEMORY_HEAP_MULTI_INSTANCE_BIT; return *this; }F_memory_heap& F_memory_heap::e_multi_instance_khr_on(){ flag |= VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR; return *this; }F_memory_heap& F_memory_heap::e_multi_instance_khr_off(){ flag &= ~VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR; return *this; }

F_memory_property::F_memory_property():flag(0){}
F_memory_property::F_memory_property(F_memory_property::Bits bits_):flag(static_cast<int>(bits_)){}
F_memory_property::F_memory_property(F_memory_property const& flag_):flag(flag_.flag){}
F_memory_property::F_memory_property(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_property& F_memory_property::operator = (F_memory_property flag_){flag = flag_.flag;return *this;}
F_memory_property F_memory_property::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_memory_property& F_memory_property::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_property F_memory_property::operator | (F_memory_property flag_){return flag | flag_.flag;}
F_memory_property& F_memory_property::operator |= (F_memory_property flag_){flag |= flag_.flag;return *this;}
F_memory_property F_memory_property::operator & (F_memory_property flag_){return flag & flag_.flag;}
F_memory_property& F_memory_property::operator &= (F_memory_property flag_){flag &= flag_.flag;return *this;}
F_memory_property F_memory_property::operator ^ (F_memory_property flag_){return flag ^ flag_.flag;}
F_memory_property& F_memory_property::operator ^= (F_memory_property flag_){flag ^= flag_.flag;return *this;}
F_memory_property F_memory_property::operator ~ (){return all_flags().flag^flag;}
bool F_memory_property::operator !(){return !flag;}
bool F_memory_property::operator == (F_memory_property flag_){return flag == flag_.flag;}
bool F_memory_property::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_memory_property::operator != (F_memory_property flag_){return flag != flag_.flag;}
bool F_memory_property::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_memory_property::operator bool(){return !!flag;}
F_memory_property& F_memory_property::clear(){flag = 0;return *this;}
F_memory_property operator|(F_memory_property::Bits bit1_, F_memory_property::Bits bit2_){F_memory_property flags(bit1_);return flags | bit2_;}
F_memory_property::F_memory_property(int flags_):flag(flags_) {}
F_memory_property F_memory_property::all_flags(){
 return VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT | 
VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | 
VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | 
VK_MEMORY_PROPERTY_HOST_CACHED_BIT | 
VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT | 
VK_MEMORY_PROPERTY_PROTECTED_BIT;
}
F_memory_property& F_memory_property::e_device_local_on(){ flag |= VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT; return *this; }F_memory_property& F_memory_property::e_device_local_off(){ flag &= ~VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT; return *this; }F_memory_property& F_memory_property::e_host_visible_on(){ flag |= VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT; return *this; }F_memory_property& F_memory_property::e_host_visible_off(){ flag &= ~VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT; return *this; }F_memory_property& F_memory_property::e_host_coherent_on(){ flag |= VK_MEMORY_PROPERTY_HOST_COHERENT_BIT; return *this; }F_memory_property& F_memory_property::e_host_coherent_off(){ flag &= ~VK_MEMORY_PROPERTY_HOST_COHERENT_BIT; return *this; }F_memory_property& F_memory_property::e_host_cached_on(){ flag |= VK_MEMORY_PROPERTY_HOST_CACHED_BIT; return *this; }F_memory_property& F_memory_property::e_host_cached_off(){ flag &= ~VK_MEMORY_PROPERTY_HOST_CACHED_BIT; return *this; }F_memory_property& F_memory_property::e_lazily_allocated_on(){ flag |= VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT; return *this; }F_memory_property& F_memory_property::e_lazily_allocated_off(){ flag &= ~VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT; return *this; }F_memory_property& F_memory_property::e_protected_on(){ flag |= VK_MEMORY_PROPERTY_PROTECTED_BIT; return *this; }F_memory_property& F_memory_property::e_protected_off(){ flag &= ~VK_MEMORY_PROPERTY_PROTECTED_BIT; return *this; }

F_external_memory_handle_typeNV::F_external_memory_handle_typeNV():flag(0){}
F_external_memory_handle_typeNV::F_external_memory_handle_typeNV(F_external_memory_handle_typeNV::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_memory_handle_typeNV::F_external_memory_handle_typeNV(F_external_memory_handle_typeNV const& flag_):flag(flag_.flag){}
F_external_memory_handle_typeNV::F_external_memory_handle_typeNV(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::operator = (F_external_memory_handle_typeNV flag_){flag = flag_.flag;return *this;}
F_external_memory_handle_typeNV F_external_memory_handle_typeNV::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_handle_typeNV F_external_memory_handle_typeNV::operator | (F_external_memory_handle_typeNV flag_){return flag | flag_.flag;}
F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::operator |= (F_external_memory_handle_typeNV flag_){flag |= flag_.flag;return *this;}
F_external_memory_handle_typeNV F_external_memory_handle_typeNV::operator & (F_external_memory_handle_typeNV flag_){return flag & flag_.flag;}
F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::operator &= (F_external_memory_handle_typeNV flag_){flag &= flag_.flag;return *this;}
F_external_memory_handle_typeNV F_external_memory_handle_typeNV::operator ^ (F_external_memory_handle_typeNV flag_){return flag ^ flag_.flag;}
F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::operator ^= (F_external_memory_handle_typeNV flag_){flag ^= flag_.flag;return *this;}
F_external_memory_handle_typeNV F_external_memory_handle_typeNV::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_handle_typeNV::operator !(){return !flag;}
bool F_external_memory_handle_typeNV::operator == (F_external_memory_handle_typeNV flag_){return flag == flag_.flag;}
bool F_external_memory_handle_typeNV::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_handle_typeNV::operator != (F_external_memory_handle_typeNV flag_){return flag != flag_.flag;}
bool F_external_memory_handle_typeNV::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_memory_handle_typeNV::operator bool(){return !!flag;}
F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::clear(){flag = 0;return *this;}
F_external_memory_handle_typeNV operator|(F_external_memory_handle_typeNV::Bits bit1_, F_external_memory_handle_typeNV::Bits bit2_){F_external_memory_handle_typeNV flags(bit1_);return flags | bit2_;}
F_external_memory_handle_typeNV::F_external_memory_handle_typeNV(int flags_):flag(flags_) {}
F_external_memory_handle_typeNV F_external_memory_handle_typeNV::all_flags(){
 return VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV;
}
F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_opaque_win32_nv_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV; return *this; }F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_opaque_win32_nv_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV; return *this; }F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_opaque_win32_kmt_nv_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV; return *this; }F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_opaque_win32_kmt_nv_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV; return *this; }F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_d3d11_image_nv_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV; return *this; }F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_d3d11_image_nv_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV; return *this; }F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_d3d11_image_kmt_nv_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV; return *this; }F_external_memory_handle_typeNV& F_external_memory_handle_typeNV::e_d3d11_image_kmt_nv_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV; return *this; }

F_memory_allocate::F_memory_allocate():flag(0){}
F_memory_allocate::F_memory_allocate(F_memory_allocate::Bits bits_):flag(static_cast<int>(bits_)){}
F_memory_allocate::F_memory_allocate(F_memory_allocate const& flag_):flag(flag_.flag){}
F_memory_allocate::F_memory_allocate(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_allocate& F_memory_allocate::operator = (F_memory_allocate flag_){flag = flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_memory_allocate& F_memory_allocate::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_allocate F_memory_allocate::operator | (F_memory_allocate flag_){return flag | flag_.flag;}
F_memory_allocate& F_memory_allocate::operator |= (F_memory_allocate flag_){flag |= flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator & (F_memory_allocate flag_){return flag & flag_.flag;}
F_memory_allocate& F_memory_allocate::operator &= (F_memory_allocate flag_){flag &= flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator ^ (F_memory_allocate flag_){return flag ^ flag_.flag;}
F_memory_allocate& F_memory_allocate::operator ^= (F_memory_allocate flag_){flag ^= flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator ~ (){return all_flags().flag^flag;}
bool F_memory_allocate::operator !(){return !flag;}
bool F_memory_allocate::operator == (F_memory_allocate flag_){return flag == flag_.flag;}
bool F_memory_allocate::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_memory_allocate::operator != (F_memory_allocate flag_){return flag != flag_.flag;}
bool F_memory_allocate::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_memory_allocate::operator bool(){return !!flag;}
F_memory_allocate& F_memory_allocate::clear(){flag = 0;return *this;}
F_memory_allocate operator|(F_memory_allocate::Bits bit1_, F_memory_allocate::Bits bit2_){F_memory_allocate flags(bit1_);return flags | bit2_;}
F_memory_allocate::F_memory_allocate(int flags_):flag(flags_) {}
F_memory_allocate F_memory_allocate::all_flags(){
 return VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT | 
VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR;
}
F_memory_allocate& F_memory_allocate::e_device_mask_on(){ flag |= VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT; return *this; }F_memory_allocate& F_memory_allocate::e_device_mask_off(){ flag &= ~VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT; return *this; }F_memory_allocate& F_memory_allocate::e_device_mask_khr_on(){ flag |= VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR; return *this; }F_memory_allocate& F_memory_allocate::e_device_mask_khr_off(){ flag &= ~VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR; return *this; }

F_peer_memory_feature::F_peer_memory_feature():flag(0){}
F_peer_memory_feature::F_peer_memory_feature(F_peer_memory_feature::Bits bits_):flag(static_cast<int>(bits_)){}
F_peer_memory_feature::F_peer_memory_feature(F_peer_memory_feature const& flag_):flag(flag_.flag){}
F_peer_memory_feature::F_peer_memory_feature(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_peer_memory_feature& F_peer_memory_feature::operator = (F_peer_memory_feature flag_){flag = flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_peer_memory_feature& F_peer_memory_feature::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_peer_memory_feature F_peer_memory_feature::operator | (F_peer_memory_feature flag_){return flag | flag_.flag;}
F_peer_memory_feature& F_peer_memory_feature::operator |= (F_peer_memory_feature flag_){flag |= flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator & (F_peer_memory_feature flag_){return flag & flag_.flag;}
F_peer_memory_feature& F_peer_memory_feature::operator &= (F_peer_memory_feature flag_){flag &= flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator ^ (F_peer_memory_feature flag_){return flag ^ flag_.flag;}
F_peer_memory_feature& F_peer_memory_feature::operator ^= (F_peer_memory_feature flag_){flag ^= flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator ~ (){return all_flags().flag^flag;}
bool F_peer_memory_feature::operator !(){return !flag;}
bool F_peer_memory_feature::operator == (F_peer_memory_feature flag_){return flag == flag_.flag;}
bool F_peer_memory_feature::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_peer_memory_feature::operator != (F_peer_memory_feature flag_){return flag != flag_.flag;}
bool F_peer_memory_feature::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_peer_memory_feature::operator bool(){return !!flag;}
F_peer_memory_feature& F_peer_memory_feature::clear(){flag = 0;return *this;}
F_peer_memory_feature operator|(F_peer_memory_feature::Bits bit1_, F_peer_memory_feature::Bits bit2_){F_peer_memory_feature flags(bit1_);return flags | bit2_;}
F_peer_memory_feature::F_peer_memory_feature(int flags_):flag(flags_) {}
F_peer_memory_feature F_peer_memory_feature::all_flags(){
 return VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT | 
VK_PEER_MEMORY_FEATURE_COPY_DST_BIT | 
VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT | 
VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT | 
VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR | 
VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR | 
VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR | 
VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR;
}
F_peer_memory_feature& F_peer_memory_feature::e_copy_src_on(){ flag |= VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_copy_src_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_copy_dst_on(){ flag |= VK_PEER_MEMORY_FEATURE_COPY_DST_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_copy_dst_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_DST_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_src_on(){ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_src_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_dst_on(){ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_dst_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_copy_src_khr_on(){ flag |= VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_copy_src_khr_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_copy_dst_khr_on(){ flag |= VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_copy_dst_khr_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_src_khr_on(){ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_src_khr_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_dst_khr_on(){ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR; return *this; }F_peer_memory_feature& F_peer_memory_feature::e_generic_dst_khr_off(){ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR; return *this; }

F_buffer_usage::F_buffer_usage():flag(0){}
F_buffer_usage::F_buffer_usage(F_buffer_usage::Bits bits_):flag(static_cast<int>(bits_)){}
F_buffer_usage::F_buffer_usage(F_buffer_usage const& flag_):flag(flag_.flag){}
F_buffer_usage::F_buffer_usage(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_buffer_usage& F_buffer_usage::operator = (F_buffer_usage flag_){flag = flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_buffer_usage& F_buffer_usage::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_buffer_usage F_buffer_usage::operator | (F_buffer_usage flag_){return flag | flag_.flag;}
F_buffer_usage& F_buffer_usage::operator |= (F_buffer_usage flag_){flag |= flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator & (F_buffer_usage flag_){return flag & flag_.flag;}
F_buffer_usage& F_buffer_usage::operator &= (F_buffer_usage flag_){flag &= flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator ^ (F_buffer_usage flag_){return flag ^ flag_.flag;}
F_buffer_usage& F_buffer_usage::operator ^= (F_buffer_usage flag_){flag ^= flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator ~ (){return all_flags().flag^flag;}
bool F_buffer_usage::operator !(){return !flag;}
bool F_buffer_usage::operator == (F_buffer_usage flag_){return flag == flag_.flag;}
bool F_buffer_usage::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_buffer_usage::operator != (F_buffer_usage flag_){return flag != flag_.flag;}
bool F_buffer_usage::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_buffer_usage::operator bool(){return !!flag;}
F_buffer_usage& F_buffer_usage::clear(){flag = 0;return *this;}
F_buffer_usage operator|(F_buffer_usage::Bits bit1_, F_buffer_usage::Bits bit2_){F_buffer_usage flags(bit1_);return flags | bit2_;}
F_buffer_usage::F_buffer_usage(int flags_):flag(flags_) {}
F_buffer_usage F_buffer_usage::all_flags(){
 return VK_BUFFER_USAGE_TRANSFER_SRC_BIT | 
VK_BUFFER_USAGE_TRANSFER_DST_BIT | 
VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT | 
VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT | 
VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT | 
VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | 
VK_BUFFER_USAGE_INDEX_BUFFER_BIT | 
VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | 
VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT | 
VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT;
}
F_buffer_usage& F_buffer_usage::e_transfer_src_on(){ flag |= VK_BUFFER_USAGE_TRANSFER_SRC_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_transfer_src_off(){ flag &= ~VK_BUFFER_USAGE_TRANSFER_SRC_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_transfer_dst_on(){ flag |= VK_BUFFER_USAGE_TRANSFER_DST_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_transfer_dst_off(){ flag &= ~VK_BUFFER_USAGE_TRANSFER_DST_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_uniform_texel_buffer_on(){ flag |= VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_uniform_texel_buffer_off(){ flag &= ~VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_storage_texel_buffer_on(){ flag |= VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_storage_texel_buffer_off(){ flag &= ~VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_uniform_buffer_on(){ flag |= VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_uniform_buffer_off(){ flag &= ~VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_storage_buffer_on(){ flag |= VK_BUFFER_USAGE_STORAGE_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_storage_buffer_off(){ flag &= ~VK_BUFFER_USAGE_STORAGE_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_index_buffer_on(){ flag |= VK_BUFFER_USAGE_INDEX_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_index_buffer_off(){ flag &= ~VK_BUFFER_USAGE_INDEX_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_vertex_buffer_on(){ flag |= VK_BUFFER_USAGE_VERTEX_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_vertex_buffer_off(){ flag &= ~VK_BUFFER_USAGE_VERTEX_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_indirect_buffer_on(){ flag |= VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_indirect_buffer_off(){ flag &= ~VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT; return *this; }F_buffer_usage& F_buffer_usage::e_conditional_rendering_ext_on(){ flag |= VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT; return *this; }F_buffer_usage& F_buffer_usage::e_conditional_rendering_ext_off(){ flag &= ~VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT; return *this; }

F_buffer_create::F_buffer_create():flag(0){}
F_buffer_create::F_buffer_create(F_buffer_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_buffer_create::F_buffer_create(F_buffer_create const& flag_):flag(flag_.flag){}
F_buffer_create::F_buffer_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_buffer_create& F_buffer_create::operator = (F_buffer_create flag_){flag = flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_buffer_create& F_buffer_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_buffer_create F_buffer_create::operator | (F_buffer_create flag_){return flag | flag_.flag;}
F_buffer_create& F_buffer_create::operator |= (F_buffer_create flag_){flag |= flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator & (F_buffer_create flag_){return flag & flag_.flag;}
F_buffer_create& F_buffer_create::operator &= (F_buffer_create flag_){flag &= flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator ^ (F_buffer_create flag_){return flag ^ flag_.flag;}
F_buffer_create& F_buffer_create::operator ^= (F_buffer_create flag_){flag ^= flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator ~ (){return all_flags().flag^flag;}
bool F_buffer_create::operator !(){return !flag;}
bool F_buffer_create::operator == (F_buffer_create flag_){return flag == flag_.flag;}
bool F_buffer_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_buffer_create::operator != (F_buffer_create flag_){return flag != flag_.flag;}
bool F_buffer_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_buffer_create::operator bool(){return !!flag;}
F_buffer_create& F_buffer_create::clear(){flag = 0;return *this;}
F_buffer_create operator|(F_buffer_create::Bits bit1_, F_buffer_create::Bits bit2_){F_buffer_create flags(bit1_);return flags | bit2_;}
F_buffer_create::F_buffer_create(int flags_):flag(flags_) {}
F_buffer_create F_buffer_create::all_flags(){
 return VK_BUFFER_CREATE_SPARSE_BINDING_BIT | 
VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT | 
VK_BUFFER_CREATE_SPARSE_ALIASED_BIT | 
VK_BUFFER_CREATE_PROTECTED_BIT;
}
F_buffer_create& F_buffer_create::e_sparse_binding_on(){ flag |= VK_BUFFER_CREATE_SPARSE_BINDING_BIT; return *this; }F_buffer_create& F_buffer_create::e_sparse_binding_off(){ flag &= ~VK_BUFFER_CREATE_SPARSE_BINDING_BIT; return *this; }F_buffer_create& F_buffer_create::e_sparse_residency_on(){ flag |= VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT; return *this; }F_buffer_create& F_buffer_create::e_sparse_residency_off(){ flag &= ~VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT; return *this; }F_buffer_create& F_buffer_create::e_sparse_aliased_on(){ flag |= VK_BUFFER_CREATE_SPARSE_ALIASED_BIT; return *this; }F_buffer_create& F_buffer_create::e_sparse_aliased_off(){ flag &= ~VK_BUFFER_CREATE_SPARSE_ALIASED_BIT; return *this; }F_buffer_create& F_buffer_create::e_protected_on(){ flag |= VK_BUFFER_CREATE_PROTECTED_BIT; return *this; }F_buffer_create& F_buffer_create::e_protected_off(){ flag &= ~VK_BUFFER_CREATE_PROTECTED_BIT; return *this; }

F_image_usage::F_image_usage():flag(0){}
F_image_usage::F_image_usage(F_image_usage::Bits bits_):flag(static_cast<int>(bits_)){}
F_image_usage::F_image_usage(F_image_usage const& flag_):flag(flag_.flag){}
F_image_usage::F_image_usage(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_usage& F_image_usage::operator = (F_image_usage flag_){flag = flag_.flag;return *this;}
F_image_usage F_image_usage::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_image_usage& F_image_usage::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_usage F_image_usage::operator | (F_image_usage flag_){return flag | flag_.flag;}
F_image_usage& F_image_usage::operator |= (F_image_usage flag_){flag |= flag_.flag;return *this;}
F_image_usage F_image_usage::operator & (F_image_usage flag_){return flag & flag_.flag;}
F_image_usage& F_image_usage::operator &= (F_image_usage flag_){flag &= flag_.flag;return *this;}
F_image_usage F_image_usage::operator ^ (F_image_usage flag_){return flag ^ flag_.flag;}
F_image_usage& F_image_usage::operator ^= (F_image_usage flag_){flag ^= flag_.flag;return *this;}
F_image_usage F_image_usage::operator ~ (){return all_flags().flag^flag;}
bool F_image_usage::operator !(){return !flag;}
bool F_image_usage::operator == (F_image_usage flag_){return flag == flag_.flag;}
bool F_image_usage::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_image_usage::operator != (F_image_usage flag_){return flag != flag_.flag;}
bool F_image_usage::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_image_usage::operator bool(){return !!flag;}
F_image_usage& F_image_usage::clear(){flag = 0;return *this;}
F_image_usage operator|(F_image_usage::Bits bit1_, F_image_usage::Bits bit2_){F_image_usage flags(bit1_);return flags | bit2_;}
F_image_usage::F_image_usage(int flags_):flag(flags_) {}
F_image_usage F_image_usage::all_flags(){
 return VK_IMAGE_USAGE_TRANSFER_SRC_BIT | 
VK_IMAGE_USAGE_TRANSFER_DST_BIT | 
VK_IMAGE_USAGE_SAMPLED_BIT | 
VK_IMAGE_USAGE_STORAGE_BIT | 
VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | 
VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | 
VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT | 
VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
}
F_image_usage& F_image_usage::e_transfer_src_on(){ flag |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT; return *this; }F_image_usage& F_image_usage::e_transfer_src_off(){ flag &= ~VK_IMAGE_USAGE_TRANSFER_SRC_BIT; return *this; }F_image_usage& F_image_usage::e_transfer_dst_on(){ flag |= VK_IMAGE_USAGE_TRANSFER_DST_BIT; return *this; }F_image_usage& F_image_usage::e_transfer_dst_off(){ flag &= ~VK_IMAGE_USAGE_TRANSFER_DST_BIT; return *this; }F_image_usage& F_image_usage::e_sampled_on(){ flag |= VK_IMAGE_USAGE_SAMPLED_BIT; return *this; }F_image_usage& F_image_usage::e_sampled_off(){ flag &= ~VK_IMAGE_USAGE_SAMPLED_BIT; return *this; }F_image_usage& F_image_usage::e_storage_on(){ flag |= VK_IMAGE_USAGE_STORAGE_BIT; return *this; }F_image_usage& F_image_usage::e_storage_off(){ flag &= ~VK_IMAGE_USAGE_STORAGE_BIT; return *this; }F_image_usage& F_image_usage::e_color_attachment_on(){ flag |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; return *this; }F_image_usage& F_image_usage::e_color_attachment_off(){ flag &= ~VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; return *this; }F_image_usage& F_image_usage::e_depth_stencil_attachment_on(){ flag |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }F_image_usage& F_image_usage::e_depth_stencil_attachment_off(){ flag &= ~VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }F_image_usage& F_image_usage::e_transient_attachment_on(){ flag |= VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT; return *this; }F_image_usage& F_image_usage::e_transient_attachment_off(){ flag &= ~VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT; return *this; }F_image_usage& F_image_usage::e_input_attachment_on(){ flag |= VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT; return *this; }F_image_usage& F_image_usage::e_input_attachment_off(){ flag &= ~VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT; return *this; }

F_image_create::F_image_create():flag(0){}
F_image_create::F_image_create(F_image_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_image_create::F_image_create(F_image_create const& flag_):flag(flag_.flag){}
F_image_create::F_image_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_create& F_image_create::operator = (F_image_create flag_){flag = flag_.flag;return *this;}
F_image_create F_image_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_image_create& F_image_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_create F_image_create::operator | (F_image_create flag_){return flag | flag_.flag;}
F_image_create& F_image_create::operator |= (F_image_create flag_){flag |= flag_.flag;return *this;}
F_image_create F_image_create::operator & (F_image_create flag_){return flag & flag_.flag;}
F_image_create& F_image_create::operator &= (F_image_create flag_){flag &= flag_.flag;return *this;}
F_image_create F_image_create::operator ^ (F_image_create flag_){return flag ^ flag_.flag;}
F_image_create& F_image_create::operator ^= (F_image_create flag_){flag ^= flag_.flag;return *this;}
F_image_create F_image_create::operator ~ (){return all_flags().flag^flag;}
bool F_image_create::operator !(){return !flag;}
bool F_image_create::operator == (F_image_create flag_){return flag == flag_.flag;}
bool F_image_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_image_create::operator != (F_image_create flag_){return flag != flag_.flag;}
bool F_image_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_image_create::operator bool(){return !!flag;}
F_image_create& F_image_create::clear(){flag = 0;return *this;}
F_image_create operator|(F_image_create::Bits bit1_, F_image_create::Bits bit2_){F_image_create flags(bit1_);return flags | bit2_;}
F_image_create::F_image_create(int flags_):flag(flags_) {}
F_image_create F_image_create::all_flags(){
 return VK_IMAGE_CREATE_SPARSE_BINDING_BIT | 
VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT | 
VK_IMAGE_CREATE_SPARSE_ALIASED_BIT | 
VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT | 
VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT | 
VK_IMAGE_CREATE_ALIAS_BIT | 
VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT | 
VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT | 
VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT | 
VK_IMAGE_CREATE_EXTENDED_USAGE_BIT | 
VK_IMAGE_CREATE_PROTECTED_BIT | 
VK_IMAGE_CREATE_DISJOINT_BIT | 
VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT | 
VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR | 
VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR | 
VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR | 
VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR | 
VK_IMAGE_CREATE_DISJOINT_BIT_KHR | 
VK_IMAGE_CREATE_ALIAS_BIT_KHR;
}
F_image_create& F_image_create::e_sparse_binding_on(){ flag |= VK_IMAGE_CREATE_SPARSE_BINDING_BIT; return *this; }F_image_create& F_image_create::e_sparse_binding_off(){ flag &= ~VK_IMAGE_CREATE_SPARSE_BINDING_BIT; return *this; }F_image_create& F_image_create::e_sparse_residency_on(){ flag |= VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT; return *this; }F_image_create& F_image_create::e_sparse_residency_off(){ flag &= ~VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT; return *this; }F_image_create& F_image_create::e_sparse_aliased_on(){ flag |= VK_IMAGE_CREATE_SPARSE_ALIASED_BIT; return *this; }F_image_create& F_image_create::e_sparse_aliased_off(){ flag &= ~VK_IMAGE_CREATE_SPARSE_ALIASED_BIT; return *this; }F_image_create& F_image_create::e_mutable_format_on(){ flag |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT; return *this; }F_image_create& F_image_create::e_mutable_format_off(){ flag &= ~VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT; return *this; }F_image_create& F_image_create::e_cube_compatible_on(){ flag |= VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT; return *this; }F_image_create& F_image_create::e_cube_compatible_off(){ flag &= ~VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT; return *this; }F_image_create& F_image_create::e_alias_on(){ flag |= VK_IMAGE_CREATE_ALIAS_BIT; return *this; }F_image_create& F_image_create::e_alias_off(){ flag &= ~VK_IMAGE_CREATE_ALIAS_BIT; return *this; }F_image_create& F_image_create::e_split_instance_bind_regions_on(){ flag |= VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT; return *this; }F_image_create& F_image_create::e_split_instance_bind_regions_off(){ flag &= ~VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT; return *this; }F_image_create& F_image_create::e_2d_array_compatible_on(){ flag |= VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT; return *this; }F_image_create& F_image_create::e_2d_array_compatible_off(){ flag &= ~VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT; return *this; }F_image_create& F_image_create::e_block_texel_view_compatible_on(){ flag |= VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT; return *this; }F_image_create& F_image_create::e_block_texel_view_compatible_off(){ flag &= ~VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT; return *this; }F_image_create& F_image_create::e_extended_usage_on(){ flag |= VK_IMAGE_CREATE_EXTENDED_USAGE_BIT; return *this; }F_image_create& F_image_create::e_extended_usage_off(){ flag &= ~VK_IMAGE_CREATE_EXTENDED_USAGE_BIT; return *this; }F_image_create& F_image_create::e_protected_on(){ flag |= VK_IMAGE_CREATE_PROTECTED_BIT; return *this; }F_image_create& F_image_create::e_protected_off(){ flag &= ~VK_IMAGE_CREATE_PROTECTED_BIT; return *this; }F_image_create& F_image_create::e_disjoint_on(){ flag |= VK_IMAGE_CREATE_DISJOINT_BIT; return *this; }F_image_create& F_image_create::e_disjoint_off(){ flag &= ~VK_IMAGE_CREATE_DISJOINT_BIT; return *this; }F_image_create& F_image_create::e_sample_locations_compatible_depth_ext_on(){ flag |= VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT; return *this; }F_image_create& F_image_create::e_sample_locations_compatible_depth_ext_off(){ flag &= ~VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT; return *this; }F_image_create& F_image_create::e_split_instance_bind_regions_khr_on(){ flag |= VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR; return *this; }F_image_create& F_image_create::e_split_instance_bind_regions_khr_off(){ flag &= ~VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR; return *this; }F_image_create& F_image_create::e_2d_array_compatible_khr_on(){ flag |= VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR; return *this; }F_image_create& F_image_create::e_2d_array_compatible_khr_off(){ flag &= ~VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR; return *this; }F_image_create& F_image_create::e_block_texel_view_compatible_khr_on(){ flag |= VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR; return *this; }F_image_create& F_image_create::e_block_texel_view_compatible_khr_off(){ flag &= ~VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR; return *this; }F_image_create& F_image_create::e_extended_usage_khr_on(){ flag |= VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR; return *this; }F_image_create& F_image_create::e_extended_usage_khr_off(){ flag &= ~VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR; return *this; }F_image_create& F_image_create::e_disjoint_khr_on(){ flag |= VK_IMAGE_CREATE_DISJOINT_BIT_KHR; return *this; }F_image_create& F_image_create::e_disjoint_khr_off(){ flag &= ~VK_IMAGE_CREATE_DISJOINT_BIT_KHR; return *this; }F_image_create& F_image_create::e_alias_khr_on(){ flag |= VK_IMAGE_CREATE_ALIAS_BIT_KHR; return *this; }F_image_create& F_image_create::e_alias_khr_off(){ flag &= ~VK_IMAGE_CREATE_ALIAS_BIT_KHR; return *this; }

F_image_aspect::F_image_aspect():flag(0){}
F_image_aspect::F_image_aspect(F_image_aspect::Bits bits_):flag(static_cast<int>(bits_)){}
F_image_aspect::F_image_aspect(F_image_aspect const& flag_):flag(flag_.flag){}
F_image_aspect::F_image_aspect(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_aspect& F_image_aspect::operator = (F_image_aspect flag_){flag = flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_image_aspect& F_image_aspect::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_aspect F_image_aspect::operator | (F_image_aspect flag_){return flag | flag_.flag;}
F_image_aspect& F_image_aspect::operator |= (F_image_aspect flag_){flag |= flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator & (F_image_aspect flag_){return flag & flag_.flag;}
F_image_aspect& F_image_aspect::operator &= (F_image_aspect flag_){flag &= flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator ^ (F_image_aspect flag_){return flag ^ flag_.flag;}
F_image_aspect& F_image_aspect::operator ^= (F_image_aspect flag_){flag ^= flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator ~ (){return all_flags().flag^flag;}
bool F_image_aspect::operator !(){return !flag;}
bool F_image_aspect::operator == (F_image_aspect flag_){return flag == flag_.flag;}
bool F_image_aspect::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_image_aspect::operator != (F_image_aspect flag_){return flag != flag_.flag;}
bool F_image_aspect::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_image_aspect::operator bool(){return !!flag;}
F_image_aspect& F_image_aspect::clear(){flag = 0;return *this;}
F_image_aspect operator|(F_image_aspect::Bits bit1_, F_image_aspect::Bits bit2_){F_image_aspect flags(bit1_);return flags | bit2_;}
F_image_aspect::F_image_aspect(int flags_):flag(flags_) {}
F_image_aspect F_image_aspect::all_flags(){
 return VK_IMAGE_ASPECT_COLOR_BIT | 
VK_IMAGE_ASPECT_DEPTH_BIT | 
VK_IMAGE_ASPECT_STENCIL_BIT | 
VK_IMAGE_ASPECT_METADATA_BIT | 
VK_IMAGE_ASPECT_PLANE_0_BIT | 
VK_IMAGE_ASPECT_PLANE_1_BIT | 
VK_IMAGE_ASPECT_PLANE_2_BIT | 
VK_IMAGE_ASPECT_PLANE_0_BIT_KHR | 
VK_IMAGE_ASPECT_PLANE_1_BIT_KHR | 
VK_IMAGE_ASPECT_PLANE_2_BIT_KHR;
}
F_image_aspect& F_image_aspect::e_color_on(){ flag |= VK_IMAGE_ASPECT_COLOR_BIT; return *this; }F_image_aspect& F_image_aspect::e_color_off(){ flag &= ~VK_IMAGE_ASPECT_COLOR_BIT; return *this; }F_image_aspect& F_image_aspect::e_depth_on(){ flag |= VK_IMAGE_ASPECT_DEPTH_BIT; return *this; }F_image_aspect& F_image_aspect::e_depth_off(){ flag &= ~VK_IMAGE_ASPECT_DEPTH_BIT; return *this; }F_image_aspect& F_image_aspect::e_stencil_on(){ flag |= VK_IMAGE_ASPECT_STENCIL_BIT; return *this; }F_image_aspect& F_image_aspect::e_stencil_off(){ flag &= ~VK_IMAGE_ASPECT_STENCIL_BIT; return *this; }F_image_aspect& F_image_aspect::e_metadata_on(){ flag |= VK_IMAGE_ASPECT_METADATA_BIT; return *this; }F_image_aspect& F_image_aspect::e_metadata_off(){ flag &= ~VK_IMAGE_ASPECT_METADATA_BIT; return *this; }F_image_aspect& F_image_aspect::e_plane_0_on(){ flag |= VK_IMAGE_ASPECT_PLANE_0_BIT; return *this; }F_image_aspect& F_image_aspect::e_plane_0_off(){ flag &= ~VK_IMAGE_ASPECT_PLANE_0_BIT; return *this; }F_image_aspect& F_image_aspect::e_plane_1_on(){ flag |= VK_IMAGE_ASPECT_PLANE_1_BIT; return *this; }F_image_aspect& F_image_aspect::e_plane_1_off(){ flag &= ~VK_IMAGE_ASPECT_PLANE_1_BIT; return *this; }F_image_aspect& F_image_aspect::e_plane_2_on(){ flag |= VK_IMAGE_ASPECT_PLANE_2_BIT; return *this; }F_image_aspect& F_image_aspect::e_plane_2_off(){ flag &= ~VK_IMAGE_ASPECT_PLANE_2_BIT; return *this; }F_image_aspect& F_image_aspect::e_plane_0_khr_on(){ flag |= VK_IMAGE_ASPECT_PLANE_0_BIT_KHR; return *this; }F_image_aspect& F_image_aspect::e_plane_0_khr_off(){ flag &= ~VK_IMAGE_ASPECT_PLANE_0_BIT_KHR; return *this; }F_image_aspect& F_image_aspect::e_plane_1_khr_on(){ flag |= VK_IMAGE_ASPECT_PLANE_1_BIT_KHR; return *this; }F_image_aspect& F_image_aspect::e_plane_1_khr_off(){ flag &= ~VK_IMAGE_ASPECT_PLANE_1_BIT_KHR; return *this; }F_image_aspect& F_image_aspect::e_plane_2_khr_on(){ flag |= VK_IMAGE_ASPECT_PLANE_2_BIT_KHR; return *this; }F_image_aspect& F_image_aspect::e_plane_2_khr_off(){ flag &= ~VK_IMAGE_ASPECT_PLANE_2_BIT_KHR; return *this; }

F_descriptor_set_layout_create::F_descriptor_set_layout_create():flag(0){}
F_descriptor_set_layout_create::F_descriptor_set_layout_create(F_descriptor_set_layout_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_descriptor_set_layout_create::F_descriptor_set_layout_create(F_descriptor_set_layout_create const& flag_):flag(flag_.flag){}
F_descriptor_set_layout_create::F_descriptor_set_layout_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_set_layout_create& F_descriptor_set_layout_create::operator = (F_descriptor_set_layout_create flag_){flag = flag_.flag;return *this;}
F_descriptor_set_layout_create F_descriptor_set_layout_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_descriptor_set_layout_create& F_descriptor_set_layout_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_set_layout_create F_descriptor_set_layout_create::operator | (F_descriptor_set_layout_create flag_){return flag | flag_.flag;}
F_descriptor_set_layout_create& F_descriptor_set_layout_create::operator |= (F_descriptor_set_layout_create flag_){flag |= flag_.flag;return *this;}
F_descriptor_set_layout_create F_descriptor_set_layout_create::operator & (F_descriptor_set_layout_create flag_){return flag & flag_.flag;}
F_descriptor_set_layout_create& F_descriptor_set_layout_create::operator &= (F_descriptor_set_layout_create flag_){flag &= flag_.flag;return *this;}
F_descriptor_set_layout_create F_descriptor_set_layout_create::operator ^ (F_descriptor_set_layout_create flag_){return flag ^ flag_.flag;}
F_descriptor_set_layout_create& F_descriptor_set_layout_create::operator ^= (F_descriptor_set_layout_create flag_){flag ^= flag_.flag;return *this;}
F_descriptor_set_layout_create F_descriptor_set_layout_create::operator ~ (){return all_flags().flag^flag;}
bool F_descriptor_set_layout_create::operator !(){return !flag;}
bool F_descriptor_set_layout_create::operator == (F_descriptor_set_layout_create flag_){return flag == flag_.flag;}
bool F_descriptor_set_layout_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_descriptor_set_layout_create::operator != (F_descriptor_set_layout_create flag_){return flag != flag_.flag;}
bool F_descriptor_set_layout_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_descriptor_set_layout_create::operator bool(){return !!flag;}
F_descriptor_set_layout_create& F_descriptor_set_layout_create::clear(){flag = 0;return *this;}
F_descriptor_set_layout_create operator|(F_descriptor_set_layout_create::Bits bit1_, F_descriptor_set_layout_create::Bits bit2_){F_descriptor_set_layout_create flags(bit1_);return flags | bit2_;}
F_descriptor_set_layout_create::F_descriptor_set_layout_create(int flags_):flag(flags_) {}
F_descriptor_set_layout_create F_descriptor_set_layout_create::all_flags(){
 return VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR | 
VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT;
}
F_descriptor_set_layout_create& F_descriptor_set_layout_create::e_push_descriptor_khr_on(){ flag |= VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR; return *this; }F_descriptor_set_layout_create& F_descriptor_set_layout_create::e_push_descriptor_khr_off(){ flag &= ~VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR; return *this; }F_descriptor_set_layout_create& F_descriptor_set_layout_create::e_update_after_bind_pool_ext_on(){ flag |= VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT; return *this; }F_descriptor_set_layout_create& F_descriptor_set_layout_create::e_update_after_bind_pool_ext_off(){ flag &= ~VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT; return *this; }

F_descriptor_bindingEXT::F_descriptor_bindingEXT():flag(0){}
F_descriptor_bindingEXT::F_descriptor_bindingEXT(F_descriptor_bindingEXT::Bits bits_):flag(static_cast<int>(bits_)){}
F_descriptor_bindingEXT::F_descriptor_bindingEXT(F_descriptor_bindingEXT const& flag_):flag(flag_.flag){}
F_descriptor_bindingEXT::F_descriptor_bindingEXT(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_bindingEXT& F_descriptor_bindingEXT::operator = (F_descriptor_bindingEXT flag_){flag = flag_.flag;return *this;}
F_descriptor_bindingEXT F_descriptor_bindingEXT::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_descriptor_bindingEXT& F_descriptor_bindingEXT::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_bindingEXT F_descriptor_bindingEXT::operator | (F_descriptor_bindingEXT flag_){return flag | flag_.flag;}
F_descriptor_bindingEXT& F_descriptor_bindingEXT::operator |= (F_descriptor_bindingEXT flag_){flag |= flag_.flag;return *this;}
F_descriptor_bindingEXT F_descriptor_bindingEXT::operator & (F_descriptor_bindingEXT flag_){return flag & flag_.flag;}
F_descriptor_bindingEXT& F_descriptor_bindingEXT::operator &= (F_descriptor_bindingEXT flag_){flag &= flag_.flag;return *this;}
F_descriptor_bindingEXT F_descriptor_bindingEXT::operator ^ (F_descriptor_bindingEXT flag_){return flag ^ flag_.flag;}
F_descriptor_bindingEXT& F_descriptor_bindingEXT::operator ^= (F_descriptor_bindingEXT flag_){flag ^= flag_.flag;return *this;}
F_descriptor_bindingEXT F_descriptor_bindingEXT::operator ~ (){return all_flags().flag^flag;}
bool F_descriptor_bindingEXT::operator !(){return !flag;}
bool F_descriptor_bindingEXT::operator == (F_descriptor_bindingEXT flag_){return flag == flag_.flag;}
bool F_descriptor_bindingEXT::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_descriptor_bindingEXT::operator != (F_descriptor_bindingEXT flag_){return flag != flag_.flag;}
bool F_descriptor_bindingEXT::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_descriptor_bindingEXT::operator bool(){return !!flag;}
F_descriptor_bindingEXT& F_descriptor_bindingEXT::clear(){flag = 0;return *this;}
F_descriptor_bindingEXT operator|(F_descriptor_bindingEXT::Bits bit1_, F_descriptor_bindingEXT::Bits bit2_){F_descriptor_bindingEXT flags(bit1_);return flags | bit2_;}
F_descriptor_bindingEXT::F_descriptor_bindingEXT(int flags_):flag(flags_) {}
F_descriptor_bindingEXT F_descriptor_bindingEXT::all_flags(){
 return VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT | 
VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT | 
VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT | 
VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT;
}
F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_update_after_bind_ext_on(){ flag |= VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT; return *this; }F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_update_after_bind_ext_off(){ flag &= ~VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT; return *this; }F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_update_unused_while_pending_ext_on(){ flag |= VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT; return *this; }F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_update_unused_while_pending_ext_off(){ flag &= ~VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT; return *this; }F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_partially_bound_ext_on(){ flag |= VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT; return *this; }F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_partially_bound_ext_off(){ flag &= ~VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT; return *this; }F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_variable_descriptor_count_ext_on(){ flag |= VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT; return *this; }F_descriptor_bindingEXT& F_descriptor_bindingEXT::e_variable_descriptor_count_ext_off(){ flag &= ~VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT; return *this; }

F_descriptor_pool_create::F_descriptor_pool_create():flag(0){}
F_descriptor_pool_create::F_descriptor_pool_create(F_descriptor_pool_create::Bits bits_):flag(static_cast<int>(bits_)){}
F_descriptor_pool_create::F_descriptor_pool_create(F_descriptor_pool_create const& flag_):flag(flag_.flag){}
F_descriptor_pool_create::F_descriptor_pool_create(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_pool_create& F_descriptor_pool_create::operator = (F_descriptor_pool_create flag_){flag = flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_descriptor_pool_create& F_descriptor_pool_create::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator | (F_descriptor_pool_create flag_){return flag | flag_.flag;}
F_descriptor_pool_create& F_descriptor_pool_create::operator |= (F_descriptor_pool_create flag_){flag |= flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator & (F_descriptor_pool_create flag_){return flag & flag_.flag;}
F_descriptor_pool_create& F_descriptor_pool_create::operator &= (F_descriptor_pool_create flag_){flag &= flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator ^ (F_descriptor_pool_create flag_){return flag ^ flag_.flag;}
F_descriptor_pool_create& F_descriptor_pool_create::operator ^= (F_descriptor_pool_create flag_){flag ^= flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator ~ (){return all_flags().flag^flag;}
bool F_descriptor_pool_create::operator !(){return !flag;}
bool F_descriptor_pool_create::operator == (F_descriptor_pool_create flag_){return flag == flag_.flag;}
bool F_descriptor_pool_create::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_descriptor_pool_create::operator != (F_descriptor_pool_create flag_){return flag != flag_.flag;}
bool F_descriptor_pool_create::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_descriptor_pool_create::operator bool(){return !!flag;}
F_descriptor_pool_create& F_descriptor_pool_create::clear(){flag = 0;return *this;}
F_descriptor_pool_create operator|(F_descriptor_pool_create::Bits bit1_, F_descriptor_pool_create::Bits bit2_){F_descriptor_pool_create flags(bit1_);return flags | bit2_;}
F_descriptor_pool_create::F_descriptor_pool_create(int flags_):flag(flags_) {}
F_descriptor_pool_create F_descriptor_pool_create::all_flags(){
 return VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT | 
VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT;
}
F_descriptor_pool_create& F_descriptor_pool_create::e_free_descriptor_set_on(){ flag |= VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT; return *this; }F_descriptor_pool_create& F_descriptor_pool_create::e_free_descriptor_set_off(){ flag &= ~VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT; return *this; }F_descriptor_pool_create& F_descriptor_pool_create::e_update_after_bind_ext_on(){ flag |= VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT; return *this; }F_descriptor_pool_create& F_descriptor_pool_create::e_update_after_bind_ext_off(){ flag &= ~VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT; return *this; }

F_query_control::F_query_control():flag(0){}
F_query_control::F_query_control(F_query_control::Bits bits_):flag(static_cast<int>(bits_)){}
F_query_control::F_query_control(F_query_control const& flag_):flag(flag_.flag){}
F_query_control::F_query_control(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_control& F_query_control::operator = (F_query_control flag_){flag = flag_.flag;return *this;}
F_query_control F_query_control::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_query_control& F_query_control::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_control F_query_control::operator | (F_query_control flag_){return flag | flag_.flag;}
F_query_control& F_query_control::operator |= (F_query_control flag_){flag |= flag_.flag;return *this;}
F_query_control F_query_control::operator & (F_query_control flag_){return flag & flag_.flag;}
F_query_control& F_query_control::operator &= (F_query_control flag_){flag &= flag_.flag;return *this;}
F_query_control F_query_control::operator ^ (F_query_control flag_){return flag ^ flag_.flag;}
F_query_control& F_query_control::operator ^= (F_query_control flag_){flag ^= flag_.flag;return *this;}
F_query_control F_query_control::operator ~ (){return all_flags().flag^flag;}
bool F_query_control::operator !(){return !flag;}
bool F_query_control::operator == (F_query_control flag_){return flag == flag_.flag;}
bool F_query_control::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_query_control::operator != (F_query_control flag_){return flag != flag_.flag;}
bool F_query_control::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_query_control::operator bool(){return !!flag;}
F_query_control& F_query_control::clear(){flag = 0;return *this;}
F_query_control operator|(F_query_control::Bits bit1_, F_query_control::Bits bit2_){F_query_control flags(bit1_);return flags | bit2_;}
F_query_control::F_query_control(int flags_):flag(flags_) {}
F_query_control F_query_control::all_flags(){
 return VK_QUERY_CONTROL_PRECISE_BIT;
}
F_query_control& F_query_control::e_precise_on(){ flag |= VK_QUERY_CONTROL_PRECISE_BIT; return *this; }F_query_control& F_query_control::e_precise_off(){ flag &= ~VK_QUERY_CONTROL_PRECISE_BIT; return *this; }

F_query_result::F_query_result():flag(0){}
F_query_result::F_query_result(F_query_result::Bits bits_):flag(static_cast<int>(bits_)){}
F_query_result::F_query_result(F_query_result const& flag_):flag(flag_.flag){}
F_query_result::F_query_result(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_result& F_query_result::operator = (F_query_result flag_){flag = flag_.flag;return *this;}
F_query_result F_query_result::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_query_result& F_query_result::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_result F_query_result::operator | (F_query_result flag_){return flag | flag_.flag;}
F_query_result& F_query_result::operator |= (F_query_result flag_){flag |= flag_.flag;return *this;}
F_query_result F_query_result::operator & (F_query_result flag_){return flag & flag_.flag;}
F_query_result& F_query_result::operator &= (F_query_result flag_){flag &= flag_.flag;return *this;}
F_query_result F_query_result::operator ^ (F_query_result flag_){return flag ^ flag_.flag;}
F_query_result& F_query_result::operator ^= (F_query_result flag_){flag ^= flag_.flag;return *this;}
F_query_result F_query_result::operator ~ (){return all_flags().flag^flag;}
bool F_query_result::operator !(){return !flag;}
bool F_query_result::operator == (F_query_result flag_){return flag == flag_.flag;}
bool F_query_result::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_query_result::operator != (F_query_result flag_){return flag != flag_.flag;}
bool F_query_result::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_query_result::operator bool(){return !!flag;}
F_query_result& F_query_result::clear(){flag = 0;return *this;}
F_query_result operator|(F_query_result::Bits bit1_, F_query_result::Bits bit2_){F_query_result flags(bit1_);return flags | bit2_;}
F_query_result::F_query_result(int flags_):flag(flags_) {}
F_query_result F_query_result::all_flags(){
 return VK_QUERY_RESULT_64_BIT | 
VK_QUERY_RESULT_WAIT_BIT | 
VK_QUERY_RESULT_WITH_AVAILABILITY_BIT | 
VK_QUERY_RESULT_PARTIAL_BIT;
}
F_query_result& F_query_result::e_64_on(){ flag |= VK_QUERY_RESULT_64_BIT; return *this; }F_query_result& F_query_result::e_64_off(){ flag &= ~VK_QUERY_RESULT_64_BIT; return *this; }F_query_result& F_query_result::e_wait_on(){ flag |= VK_QUERY_RESULT_WAIT_BIT; return *this; }F_query_result& F_query_result::e_wait_off(){ flag &= ~VK_QUERY_RESULT_WAIT_BIT; return *this; }F_query_result& F_query_result::e_with_availability_on(){ flag |= VK_QUERY_RESULT_WITH_AVAILABILITY_BIT; return *this; }F_query_result& F_query_result::e_with_availability_off(){ flag &= ~VK_QUERY_RESULT_WITH_AVAILABILITY_BIT; return *this; }F_query_result& F_query_result::e_partial_on(){ flag |= VK_QUERY_RESULT_PARTIAL_BIT; return *this; }F_query_result& F_query_result::e_partial_off(){ flag &= ~VK_QUERY_RESULT_PARTIAL_BIT; return *this; }

F_query_pipeline_statistic::F_query_pipeline_statistic():flag(0){}
F_query_pipeline_statistic::F_query_pipeline_statistic(F_query_pipeline_statistic::Bits bits_):flag(static_cast<int>(bits_)){}
F_query_pipeline_statistic::F_query_pipeline_statistic(F_query_pipeline_statistic const& flag_):flag(flag_.flag){}
F_query_pipeline_statistic::F_query_pipeline_statistic(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator = (F_query_pipeline_statistic flag_){flag = flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator | (F_query_pipeline_statistic flag_){return flag | flag_.flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator |= (F_query_pipeline_statistic flag_){flag |= flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator & (F_query_pipeline_statistic flag_){return flag & flag_.flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator &= (F_query_pipeline_statistic flag_){flag &= flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator ^ (F_query_pipeline_statistic flag_){return flag ^ flag_.flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator ^= (F_query_pipeline_statistic flag_){flag ^= flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator ~ (){return all_flags().flag^flag;}
bool F_query_pipeline_statistic::operator !(){return !flag;}
bool F_query_pipeline_statistic::operator == (F_query_pipeline_statistic flag_){return flag == flag_.flag;}
bool F_query_pipeline_statistic::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_query_pipeline_statistic::operator != (F_query_pipeline_statistic flag_){return flag != flag_.flag;}
bool F_query_pipeline_statistic::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_query_pipeline_statistic::operator bool(){return !!flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::clear(){flag = 0;return *this;}
F_query_pipeline_statistic operator|(F_query_pipeline_statistic::Bits bit1_, F_query_pipeline_statistic::Bits bit2_){F_query_pipeline_statistic flags(bit1_);return flags | bit2_;}
F_query_pipeline_statistic::F_query_pipeline_statistic(int flags_):flag(flags_) {}
F_query_pipeline_statistic F_query_pipeline_statistic::all_flags(){
 return VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT | 
VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT | 
VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT | 
VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT | 
VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT | 
VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT | 
VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT | 
VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT | 
VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT | 
VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT | 
VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT;
}
F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_primitives_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_primitives_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_vertex_shader_invocations_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_vertex_shader_invocations_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_geometry_shader_invocations_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_geometry_shader_invocations_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_geometry_shader_primitives_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_geometry_shader_primitives_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_clipping_invocations_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_clipping_invocations_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_clipping_primitives_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_clipping_primitives_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_fragment_shader_invocations_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_fragment_shader_invocations_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_tessellation_control_shader_patches_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_tessellation_control_shader_patches_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_tessellation_evaluation_shader_invocations_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_tessellation_evaluation_shader_invocations_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_compute_shader_invocations_on(){ flag |= VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT; return *this; }F_query_pipeline_statistic& F_query_pipeline_statistic::e_compute_shader_invocations_off(){ flag &= ~VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT; return *this; }

F_conditional_renderingEXT::F_conditional_renderingEXT():flag(0){}
F_conditional_renderingEXT::F_conditional_renderingEXT(F_conditional_renderingEXT::Bits bits_):flag(static_cast<int>(bits_)){}
F_conditional_renderingEXT::F_conditional_renderingEXT(F_conditional_renderingEXT const& flag_):flag(flag_.flag){}
F_conditional_renderingEXT::F_conditional_renderingEXT(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_conditional_renderingEXT& F_conditional_renderingEXT::operator = (F_conditional_renderingEXT flag_){flag = flag_.flag;return *this;}
F_conditional_renderingEXT F_conditional_renderingEXT::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_conditional_renderingEXT& F_conditional_renderingEXT::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_conditional_renderingEXT F_conditional_renderingEXT::operator | (F_conditional_renderingEXT flag_){return flag | flag_.flag;}
F_conditional_renderingEXT& F_conditional_renderingEXT::operator |= (F_conditional_renderingEXT flag_){flag |= flag_.flag;return *this;}
F_conditional_renderingEXT F_conditional_renderingEXT::operator & (F_conditional_renderingEXT flag_){return flag & flag_.flag;}
F_conditional_renderingEXT& F_conditional_renderingEXT::operator &= (F_conditional_renderingEXT flag_){flag &= flag_.flag;return *this;}
F_conditional_renderingEXT F_conditional_renderingEXT::operator ^ (F_conditional_renderingEXT flag_){return flag ^ flag_.flag;}
F_conditional_renderingEXT& F_conditional_renderingEXT::operator ^= (F_conditional_renderingEXT flag_){flag ^= flag_.flag;return *this;}
F_conditional_renderingEXT F_conditional_renderingEXT::operator ~ (){return all_flags().flag^flag;}
bool F_conditional_renderingEXT::operator !(){return !flag;}
bool F_conditional_renderingEXT::operator == (F_conditional_renderingEXT flag_){return flag == flag_.flag;}
bool F_conditional_renderingEXT::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_conditional_renderingEXT::operator != (F_conditional_renderingEXT flag_){return flag != flag_.flag;}
bool F_conditional_renderingEXT::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_conditional_renderingEXT::operator bool(){return !!flag;}
F_conditional_renderingEXT& F_conditional_renderingEXT::clear(){flag = 0;return *this;}
F_conditional_renderingEXT operator|(F_conditional_renderingEXT::Bits bit1_, F_conditional_renderingEXT::Bits bit2_){F_conditional_renderingEXT flags(bit1_);return flags | bit2_;}
F_conditional_renderingEXT::F_conditional_renderingEXT(int flags_):flag(flags_) {}
F_conditional_renderingEXT F_conditional_renderingEXT::all_flags(){
 return VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT;
}
F_conditional_renderingEXT& F_conditional_renderingEXT::e_inverted_ext_on(){ flag |= VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT; return *this; }F_conditional_renderingEXT& F_conditional_renderingEXT::e_inverted_ext_off(){ flag &= ~VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT; return *this; }

F_cull_mode::F_cull_mode():flag(0){}
F_cull_mode::F_cull_mode(F_cull_mode::Bits bits_):flag(static_cast<int>(bits_)){}
F_cull_mode::F_cull_mode(F_cull_mode const& flag_):flag(flag_.flag){}
F_cull_mode::F_cull_mode(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_cull_mode& F_cull_mode::operator = (F_cull_mode flag_){flag = flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_cull_mode& F_cull_mode::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_cull_mode F_cull_mode::operator | (F_cull_mode flag_){return flag | flag_.flag;}
F_cull_mode& F_cull_mode::operator |= (F_cull_mode flag_){flag |= flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator & (F_cull_mode flag_){return flag & flag_.flag;}
F_cull_mode& F_cull_mode::operator &= (F_cull_mode flag_){flag &= flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator ^ (F_cull_mode flag_){return flag ^ flag_.flag;}
F_cull_mode& F_cull_mode::operator ^= (F_cull_mode flag_){flag ^= flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator ~ (){return all_flags().flag^flag;}
bool F_cull_mode::operator !(){return !flag;}
bool F_cull_mode::operator == (F_cull_mode flag_){return flag == flag_.flag;}
bool F_cull_mode::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_cull_mode::operator != (F_cull_mode flag_){return flag != flag_.flag;}
bool F_cull_mode::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_cull_mode::operator bool(){return !!flag;}
F_cull_mode& F_cull_mode::clear(){flag = 0;return *this;}
F_cull_mode operator|(F_cull_mode::Bits bit1_, F_cull_mode::Bits bit2_){F_cull_mode flags(bit1_);return flags | bit2_;}
F_cull_mode::F_cull_mode(int flags_):flag(flags_) {}
F_cull_mode F_cull_mode::all_flags(){
 return VK_CULL_MODE_NONE | 
VK_CULL_MODE_FRONT_BIT | 
VK_CULL_MODE_BACK_BIT | 
VK_CULL_MODE_FRONT_AND_BACK;
}
F_cull_mode& F_cull_mode::e_none_on(){ flag |= VK_CULL_MODE_NONE; return *this; }F_cull_mode& F_cull_mode::e_none_off(){ flag &= ~VK_CULL_MODE_NONE; return *this; }F_cull_mode& F_cull_mode::e_front_on(){ flag |= VK_CULL_MODE_FRONT_BIT; return *this; }F_cull_mode& F_cull_mode::e_front_off(){ flag &= ~VK_CULL_MODE_FRONT_BIT; return *this; }F_cull_mode& F_cull_mode::e_back_on(){ flag |= VK_CULL_MODE_BACK_BIT; return *this; }F_cull_mode& F_cull_mode::e_back_off(){ flag &= ~VK_CULL_MODE_BACK_BIT; return *this; }F_cull_mode& F_cull_mode::e_front_and_back_on(){ flag |= VK_CULL_MODE_FRONT_AND_BACK; return *this; }F_cull_mode& F_cull_mode::e_front_and_back_off(){ flag &= ~VK_CULL_MODE_FRONT_AND_BACK; return *this; }

F_stencil_face::F_stencil_face():flag(0){}
F_stencil_face::F_stencil_face(F_stencil_face::Bits bits_):flag(static_cast<int>(bits_)){}
F_stencil_face::F_stencil_face(F_stencil_face const& flag_):flag(flag_.flag){}
F_stencil_face::F_stencil_face(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_stencil_face& F_stencil_face::operator = (F_stencil_face flag_){flag = flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_stencil_face& F_stencil_face::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_stencil_face F_stencil_face::operator | (F_stencil_face flag_){return flag | flag_.flag;}
F_stencil_face& F_stencil_face::operator |= (F_stencil_face flag_){flag |= flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator & (F_stencil_face flag_){return flag & flag_.flag;}
F_stencil_face& F_stencil_face::operator &= (F_stencil_face flag_){flag &= flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator ^ (F_stencil_face flag_){return flag ^ flag_.flag;}
F_stencil_face& F_stencil_face::operator ^= (F_stencil_face flag_){flag ^= flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator ~ (){return all_flags().flag^flag;}
bool F_stencil_face::operator !(){return !flag;}
bool F_stencil_face::operator == (F_stencil_face flag_){return flag == flag_.flag;}
bool F_stencil_face::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_stencil_face::operator != (F_stencil_face flag_){return flag != flag_.flag;}
bool F_stencil_face::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_stencil_face::operator bool(){return !!flag;}
F_stencil_face& F_stencil_face::clear(){flag = 0;return *this;}
F_stencil_face operator|(F_stencil_face::Bits bit1_, F_stencil_face::Bits bit2_){F_stencil_face flags(bit1_);return flags | bit2_;}
F_stencil_face::F_stencil_face(int flags_):flag(flags_) {}
F_stencil_face F_stencil_face::all_flags(){
 return VK_STENCIL_FACE_FRONT_BIT | 
VK_STENCIL_FACE_BACK_BIT | 
VK_STENCIL_FRONT_AND_BACK;
}
F_stencil_face& F_stencil_face::e_front_on(){ flag |= VK_STENCIL_FACE_FRONT_BIT; return *this; }F_stencil_face& F_stencil_face::e_front_off(){ flag &= ~VK_STENCIL_FACE_FRONT_BIT; return *this; }F_stencil_face& F_stencil_face::e_back_on(){ flag |= VK_STENCIL_FACE_BACK_BIT; return *this; }F_stencil_face& F_stencil_face::e_back_off(){ flag &= ~VK_STENCIL_FACE_BACK_BIT; return *this; }F_stencil_face& F_stencil_face::evk_stencil_front_and_back_on(){ flag |= VK_STENCIL_FRONT_AND_BACK; return *this; }F_stencil_face& F_stencil_face::evk_stencil_front_and_back_off(){ flag &= ~VK_STENCIL_FRONT_AND_BACK; return *this; }

F_color_component::F_color_component():flag(0){}
F_color_component::F_color_component(F_color_component::Bits bits_):flag(static_cast<int>(bits_)){}
F_color_component::F_color_component(F_color_component const& flag_):flag(flag_.flag){}
F_color_component::F_color_component(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_color_component& F_color_component::operator = (F_color_component flag_){flag = flag_.flag;return *this;}
F_color_component F_color_component::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_color_component& F_color_component::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_color_component F_color_component::operator | (F_color_component flag_){return flag | flag_.flag;}
F_color_component& F_color_component::operator |= (F_color_component flag_){flag |= flag_.flag;return *this;}
F_color_component F_color_component::operator & (F_color_component flag_){return flag & flag_.flag;}
F_color_component& F_color_component::operator &= (F_color_component flag_){flag &= flag_.flag;return *this;}
F_color_component F_color_component::operator ^ (F_color_component flag_){return flag ^ flag_.flag;}
F_color_component& F_color_component::operator ^= (F_color_component flag_){flag ^= flag_.flag;return *this;}
F_color_component F_color_component::operator ~ (){return all_flags().flag^flag;}
bool F_color_component::operator !(){return !flag;}
bool F_color_component::operator == (F_color_component flag_){return flag == flag_.flag;}
bool F_color_component::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_color_component::operator != (F_color_component flag_){return flag != flag_.flag;}
bool F_color_component::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_color_component::operator bool(){return !!flag;}
F_color_component& F_color_component::clear(){flag = 0;return *this;}
F_color_component operator|(F_color_component::Bits bit1_, F_color_component::Bits bit2_){F_color_component flags(bit1_);return flags | bit2_;}
F_color_component::F_color_component(int flags_):flag(flags_) {}
F_color_component F_color_component::all_flags(){
 return VK_COLOR_COMPONENT_R_BIT | 
VK_COLOR_COMPONENT_G_BIT | 
VK_COLOR_COMPONENT_B_BIT | 
VK_COLOR_COMPONENT_A_BIT;
}
F_color_component& F_color_component::e_r_on(){ flag |= VK_COLOR_COMPONENT_R_BIT; return *this; }F_color_component& F_color_component::e_r_off(){ flag &= ~VK_COLOR_COMPONENT_R_BIT; return *this; }F_color_component& F_color_component::e_g_on(){ flag |= VK_COLOR_COMPONENT_G_BIT; return *this; }F_color_component& F_color_component::e_g_off(){ flag &= ~VK_COLOR_COMPONENT_G_BIT; return *this; }F_color_component& F_color_component::e_b_on(){ flag |= VK_COLOR_COMPONENT_B_BIT; return *this; }F_color_component& F_color_component::e_b_off(){ flag &= ~VK_COLOR_COMPONENT_B_BIT; return *this; }F_color_component& F_color_component::e_a_on(){ flag |= VK_COLOR_COMPONENT_A_BIT; return *this; }F_color_component& F_color_component::e_a_off(){ flag &= ~VK_COLOR_COMPONENT_A_BIT; return *this; }

F_object_entry_usageNVX::F_object_entry_usageNVX():flag(0){}
F_object_entry_usageNVX::F_object_entry_usageNVX(F_object_entry_usageNVX::Bits bits_):flag(static_cast<int>(bits_)){}
F_object_entry_usageNVX::F_object_entry_usageNVX(F_object_entry_usageNVX const& flag_):flag(flag_.flag){}
F_object_entry_usageNVX::F_object_entry_usageNVX(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_object_entry_usageNVX& F_object_entry_usageNVX::operator = (F_object_entry_usageNVX flag_){flag = flag_.flag;return *this;}
F_object_entry_usageNVX F_object_entry_usageNVX::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_object_entry_usageNVX& F_object_entry_usageNVX::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_object_entry_usageNVX F_object_entry_usageNVX::operator | (F_object_entry_usageNVX flag_){return flag | flag_.flag;}
F_object_entry_usageNVX& F_object_entry_usageNVX::operator |= (F_object_entry_usageNVX flag_){flag |= flag_.flag;return *this;}
F_object_entry_usageNVX F_object_entry_usageNVX::operator & (F_object_entry_usageNVX flag_){return flag & flag_.flag;}
F_object_entry_usageNVX& F_object_entry_usageNVX::operator &= (F_object_entry_usageNVX flag_){flag &= flag_.flag;return *this;}
F_object_entry_usageNVX F_object_entry_usageNVX::operator ^ (F_object_entry_usageNVX flag_){return flag ^ flag_.flag;}
F_object_entry_usageNVX& F_object_entry_usageNVX::operator ^= (F_object_entry_usageNVX flag_){flag ^= flag_.flag;return *this;}
F_object_entry_usageNVX F_object_entry_usageNVX::operator ~ (){return all_flags().flag^flag;}
bool F_object_entry_usageNVX::operator !(){return !flag;}
bool F_object_entry_usageNVX::operator == (F_object_entry_usageNVX flag_){return flag == flag_.flag;}
bool F_object_entry_usageNVX::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_object_entry_usageNVX::operator != (F_object_entry_usageNVX flag_){return flag != flag_.flag;}
bool F_object_entry_usageNVX::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_object_entry_usageNVX::operator bool(){return !!flag;}
F_object_entry_usageNVX& F_object_entry_usageNVX::clear(){flag = 0;return *this;}
F_object_entry_usageNVX operator|(F_object_entry_usageNVX::Bits bit1_, F_object_entry_usageNVX::Bits bit2_){F_object_entry_usageNVX flags(bit1_);return flags | bit2_;}
F_object_entry_usageNVX::F_object_entry_usageNVX(int flags_):flag(flags_) {}
F_object_entry_usageNVX F_object_entry_usageNVX::all_flags(){
 return VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX | 
VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX;
}
F_object_entry_usageNVX& F_object_entry_usageNVX::e_graphics_nvx_on(){ flag |= VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX; return *this; }F_object_entry_usageNVX& F_object_entry_usageNVX::e_graphics_nvx_off(){ flag &= ~VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX; return *this; }F_object_entry_usageNVX& F_object_entry_usageNVX::e_compute_nvx_on(){ flag |= VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX; return *this; }F_object_entry_usageNVX& F_object_entry_usageNVX::e_compute_nvx_off(){ flag &= ~VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX; return *this; }

F_indirect_commands_layout_usageNVX::F_indirect_commands_layout_usageNVX():flag(0){}
F_indirect_commands_layout_usageNVX::F_indirect_commands_layout_usageNVX(F_indirect_commands_layout_usageNVX::Bits bits_):flag(static_cast<int>(bits_)){}
F_indirect_commands_layout_usageNVX::F_indirect_commands_layout_usageNVX(F_indirect_commands_layout_usageNVX const& flag_):flag(flag_.flag){}
F_indirect_commands_layout_usageNVX::F_indirect_commands_layout_usageNVX(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::operator = (F_indirect_commands_layout_usageNVX flag_){flag = flag_.flag;return *this;}
F_indirect_commands_layout_usageNVX F_indirect_commands_layout_usageNVX::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_indirect_commands_layout_usageNVX F_indirect_commands_layout_usageNVX::operator | (F_indirect_commands_layout_usageNVX flag_){return flag | flag_.flag;}
F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::operator |= (F_indirect_commands_layout_usageNVX flag_){flag |= flag_.flag;return *this;}
F_indirect_commands_layout_usageNVX F_indirect_commands_layout_usageNVX::operator & (F_indirect_commands_layout_usageNVX flag_){return flag & flag_.flag;}
F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::operator &= (F_indirect_commands_layout_usageNVX flag_){flag &= flag_.flag;return *this;}
F_indirect_commands_layout_usageNVX F_indirect_commands_layout_usageNVX::operator ^ (F_indirect_commands_layout_usageNVX flag_){return flag ^ flag_.flag;}
F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::operator ^= (F_indirect_commands_layout_usageNVX flag_){flag ^= flag_.flag;return *this;}
F_indirect_commands_layout_usageNVX F_indirect_commands_layout_usageNVX::operator ~ (){return all_flags().flag^flag;}
bool F_indirect_commands_layout_usageNVX::operator !(){return !flag;}
bool F_indirect_commands_layout_usageNVX::operator == (F_indirect_commands_layout_usageNVX flag_){return flag == flag_.flag;}
bool F_indirect_commands_layout_usageNVX::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_indirect_commands_layout_usageNVX::operator != (F_indirect_commands_layout_usageNVX flag_){return flag != flag_.flag;}
bool F_indirect_commands_layout_usageNVX::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_indirect_commands_layout_usageNVX::operator bool(){return !!flag;}
F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::clear(){flag = 0;return *this;}
F_indirect_commands_layout_usageNVX operator|(F_indirect_commands_layout_usageNVX::Bits bit1_, F_indirect_commands_layout_usageNVX::Bits bit2_){F_indirect_commands_layout_usageNVX flags(bit1_);return flags | bit2_;}
F_indirect_commands_layout_usageNVX::F_indirect_commands_layout_usageNVX(int flags_):flag(flags_) {}
F_indirect_commands_layout_usageNVX F_indirect_commands_layout_usageNVX::all_flags(){
 return VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX;
}
F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_unordered_sequences_nvx_on(){ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX; return *this; }F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_unordered_sequences_nvx_off(){ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX; return *this; }F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_sparse_sequences_nvx_on(){ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX; return *this; }F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_sparse_sequences_nvx_off(){ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX; return *this; }F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_empty_executions_nvx_on(){ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX; return *this; }F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_empty_executions_nvx_off(){ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX; return *this; }F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_indexed_sequences_nvx_on(){ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX; return *this; }F_indirect_commands_layout_usageNVX& F_indirect_commands_layout_usageNVX::e_indexed_sequences_nvx_off(){ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX; return *this; }

F_sparse_image_format::F_sparse_image_format():flag(0){}
F_sparse_image_format::F_sparse_image_format(F_sparse_image_format::Bits bits_):flag(static_cast<int>(bits_)){}
F_sparse_image_format::F_sparse_image_format(F_sparse_image_format const& flag_):flag(flag_.flag){}
F_sparse_image_format::F_sparse_image_format(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sparse_image_format& F_sparse_image_format::operator = (F_sparse_image_format flag_){flag = flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_sparse_image_format& F_sparse_image_format::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_sparse_image_format F_sparse_image_format::operator | (F_sparse_image_format flag_){return flag | flag_.flag;}
F_sparse_image_format& F_sparse_image_format::operator |= (F_sparse_image_format flag_){flag |= flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator & (F_sparse_image_format flag_){return flag & flag_.flag;}
F_sparse_image_format& F_sparse_image_format::operator &= (F_sparse_image_format flag_){flag &= flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator ^ (F_sparse_image_format flag_){return flag ^ flag_.flag;}
F_sparse_image_format& F_sparse_image_format::operator ^= (F_sparse_image_format flag_){flag ^= flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator ~ (){return all_flags().flag^flag;}
bool F_sparse_image_format::operator !(){return !flag;}
bool F_sparse_image_format::operator == (F_sparse_image_format flag_){return flag == flag_.flag;}
bool F_sparse_image_format::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_sparse_image_format::operator != (F_sparse_image_format flag_){return flag != flag_.flag;}
bool F_sparse_image_format::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_sparse_image_format::operator bool(){return !!flag;}
F_sparse_image_format& F_sparse_image_format::clear(){flag = 0;return *this;}
F_sparse_image_format operator|(F_sparse_image_format::Bits bit1_, F_sparse_image_format::Bits bit2_){F_sparse_image_format flags(bit1_);return flags | bit2_;}
F_sparse_image_format::F_sparse_image_format(int flags_):flag(flags_) {}
F_sparse_image_format F_sparse_image_format::all_flags(){
 return VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT | 
VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT | 
VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT;
}
F_sparse_image_format& F_sparse_image_format::e_single_miptail_on(){ flag |= VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT; return *this; }F_sparse_image_format& F_sparse_image_format::e_single_miptail_off(){ flag &= ~VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT; return *this; }F_sparse_image_format& F_sparse_image_format::e_aligned_mip_size_on(){ flag |= VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT; return *this; }F_sparse_image_format& F_sparse_image_format::e_aligned_mip_size_off(){ flag &= ~VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT; return *this; }F_sparse_image_format& F_sparse_image_format::e_nonstandard_block_size_on(){ flag |= VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT; return *this; }F_sparse_image_format& F_sparse_image_format::e_nonstandard_block_size_off(){ flag &= ~VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT; return *this; }

F_sparse_memory_bind::F_sparse_memory_bind():flag(0){}
F_sparse_memory_bind::F_sparse_memory_bind(F_sparse_memory_bind::Bits bits_):flag(static_cast<int>(bits_)){}
F_sparse_memory_bind::F_sparse_memory_bind(F_sparse_memory_bind const& flag_):flag(flag_.flag){}
F_sparse_memory_bind::F_sparse_memory_bind(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sparse_memory_bind& F_sparse_memory_bind::operator = (F_sparse_memory_bind flag_){flag = flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_sparse_memory_bind& F_sparse_memory_bind::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator | (F_sparse_memory_bind flag_){return flag | flag_.flag;}
F_sparse_memory_bind& F_sparse_memory_bind::operator |= (F_sparse_memory_bind flag_){flag |= flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator & (F_sparse_memory_bind flag_){return flag & flag_.flag;}
F_sparse_memory_bind& F_sparse_memory_bind::operator &= (F_sparse_memory_bind flag_){flag &= flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator ^ (F_sparse_memory_bind flag_){return flag ^ flag_.flag;}
F_sparse_memory_bind& F_sparse_memory_bind::operator ^= (F_sparse_memory_bind flag_){flag ^= flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator ~ (){return all_flags().flag^flag;}
bool F_sparse_memory_bind::operator !(){return !flag;}
bool F_sparse_memory_bind::operator == (F_sparse_memory_bind flag_){return flag == flag_.flag;}
bool F_sparse_memory_bind::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_sparse_memory_bind::operator != (F_sparse_memory_bind flag_){return flag != flag_.flag;}
bool F_sparse_memory_bind::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_sparse_memory_bind::operator bool(){return !!flag;}
F_sparse_memory_bind& F_sparse_memory_bind::clear(){flag = 0;return *this;}
F_sparse_memory_bind operator|(F_sparse_memory_bind::Bits bit1_, F_sparse_memory_bind::Bits bit2_){F_sparse_memory_bind flags(bit1_);return flags | bit2_;}
F_sparse_memory_bind::F_sparse_memory_bind(int flags_):flag(flags_) {}
F_sparse_memory_bind F_sparse_memory_bind::all_flags(){
 return VK_SPARSE_MEMORY_BIND_METADATA_BIT;
}
F_sparse_memory_bind& F_sparse_memory_bind::e_metadata_on(){ flag |= VK_SPARSE_MEMORY_BIND_METADATA_BIT; return *this; }F_sparse_memory_bind& F_sparse_memory_bind::e_metadata_off(){ flag &= ~VK_SPARSE_MEMORY_BIND_METADATA_BIT; return *this; }

F_display_plane_alphaKHR::F_display_plane_alphaKHR():flag(0){}
F_display_plane_alphaKHR::F_display_plane_alphaKHR(F_display_plane_alphaKHR::Bits bits_):flag(static_cast<int>(bits_)){}
F_display_plane_alphaKHR::F_display_plane_alphaKHR(F_display_plane_alphaKHR const& flag_):flag(flag_.flag){}
F_display_plane_alphaKHR::F_display_plane_alphaKHR(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_display_plane_alphaKHR& F_display_plane_alphaKHR::operator = (F_display_plane_alphaKHR flag_){flag = flag_.flag;return *this;}
F_display_plane_alphaKHR F_display_plane_alphaKHR::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_display_plane_alphaKHR& F_display_plane_alphaKHR::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_display_plane_alphaKHR F_display_plane_alphaKHR::operator | (F_display_plane_alphaKHR flag_){return flag | flag_.flag;}
F_display_plane_alphaKHR& F_display_plane_alphaKHR::operator |= (F_display_plane_alphaKHR flag_){flag |= flag_.flag;return *this;}
F_display_plane_alphaKHR F_display_plane_alphaKHR::operator & (F_display_plane_alphaKHR flag_){return flag & flag_.flag;}
F_display_plane_alphaKHR& F_display_plane_alphaKHR::operator &= (F_display_plane_alphaKHR flag_){flag &= flag_.flag;return *this;}
F_display_plane_alphaKHR F_display_plane_alphaKHR::operator ^ (F_display_plane_alphaKHR flag_){return flag ^ flag_.flag;}
F_display_plane_alphaKHR& F_display_plane_alphaKHR::operator ^= (F_display_plane_alphaKHR flag_){flag ^= flag_.flag;return *this;}
F_display_plane_alphaKHR F_display_plane_alphaKHR::operator ~ (){return all_flags().flag^flag;}
bool F_display_plane_alphaKHR::operator !(){return !flag;}
bool F_display_plane_alphaKHR::operator == (F_display_plane_alphaKHR flag_){return flag == flag_.flag;}
bool F_display_plane_alphaKHR::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_display_plane_alphaKHR::operator != (F_display_plane_alphaKHR flag_){return flag != flag_.flag;}
bool F_display_plane_alphaKHR::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_display_plane_alphaKHR::operator bool(){return !!flag;}
F_display_plane_alphaKHR& F_display_plane_alphaKHR::clear(){flag = 0;return *this;}
F_display_plane_alphaKHR operator|(F_display_plane_alphaKHR::Bits bit1_, F_display_plane_alphaKHR::Bits bit2_){F_display_plane_alphaKHR flags(bit1_);return flags | bit2_;}
F_display_plane_alphaKHR::F_display_plane_alphaKHR(int flags_):flag(flags_) {}
F_display_plane_alphaKHR F_display_plane_alphaKHR::all_flags(){
 return VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
}
F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_opaque_khr_on(){ flag |= VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR; return *this; }F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_opaque_khr_off(){ flag &= ~VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR; return *this; }F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_global_khr_on(){ flag |= VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR; return *this; }F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_global_khr_off(){ flag &= ~VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR; return *this; }F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_per_pixel_khr_on(){ flag |= VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR; return *this; }F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_per_pixel_khr_off(){ flag &= ~VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR; return *this; }F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_per_pixel_premultiplied_khr_on(){ flag |= VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR; return *this; }F_display_plane_alphaKHR& F_display_plane_alphaKHR::e_per_pixel_premultiplied_khr_off(){ flag &= ~VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR; return *this; }

F_surface_counterEXT::F_surface_counterEXT():flag(0){}
F_surface_counterEXT::F_surface_counterEXT(F_surface_counterEXT::Bits bits_):flag(static_cast<int>(bits_)){}
F_surface_counterEXT::F_surface_counterEXT(F_surface_counterEXT const& flag_):flag(flag_.flag){}
F_surface_counterEXT::F_surface_counterEXT(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_counterEXT& F_surface_counterEXT::operator = (F_surface_counterEXT flag_){flag = flag_.flag;return *this;}
F_surface_counterEXT F_surface_counterEXT::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_surface_counterEXT& F_surface_counterEXT::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_counterEXT F_surface_counterEXT::operator | (F_surface_counterEXT flag_){return flag | flag_.flag;}
F_surface_counterEXT& F_surface_counterEXT::operator |= (F_surface_counterEXT flag_){flag |= flag_.flag;return *this;}
F_surface_counterEXT F_surface_counterEXT::operator & (F_surface_counterEXT flag_){return flag & flag_.flag;}
F_surface_counterEXT& F_surface_counterEXT::operator &= (F_surface_counterEXT flag_){flag &= flag_.flag;return *this;}
F_surface_counterEXT F_surface_counterEXT::operator ^ (F_surface_counterEXT flag_){return flag ^ flag_.flag;}
F_surface_counterEXT& F_surface_counterEXT::operator ^= (F_surface_counterEXT flag_){flag ^= flag_.flag;return *this;}
F_surface_counterEXT F_surface_counterEXT::operator ~ (){return all_flags().flag^flag;}
bool F_surface_counterEXT::operator !(){return !flag;}
bool F_surface_counterEXT::operator == (F_surface_counterEXT flag_){return flag == flag_.flag;}
bool F_surface_counterEXT::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_surface_counterEXT::operator != (F_surface_counterEXT flag_){return flag != flag_.flag;}
bool F_surface_counterEXT::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_surface_counterEXT::operator bool(){return !!flag;}
F_surface_counterEXT& F_surface_counterEXT::clear(){flag = 0;return *this;}
F_surface_counterEXT operator|(F_surface_counterEXT::Bits bit1_, F_surface_counterEXT::Bits bit2_){F_surface_counterEXT flags(bit1_);return flags | bit2_;}
F_surface_counterEXT::F_surface_counterEXT(int flags_):flag(flags_) {}
F_surface_counterEXT F_surface_counterEXT::all_flags(){
 return VK_SURFACE_COUNTER_VBLANK_EXT;
}
F_surface_counterEXT& F_surface_counterEXT::e_vblank_ext_on(){ flag |= VK_SURFACE_COUNTER_VBLANK_EXT; return *this; }F_surface_counterEXT& F_surface_counterEXT::e_vblank_ext_off(){ flag &= ~VK_SURFACE_COUNTER_VBLANK_EXT; return *this; }

F_surface_transformKHR::F_surface_transformKHR():flag(0){}
F_surface_transformKHR::F_surface_transformKHR(F_surface_transformKHR::Bits bits_):flag(static_cast<int>(bits_)){}
F_surface_transformKHR::F_surface_transformKHR(F_surface_transformKHR const& flag_):flag(flag_.flag){}
F_surface_transformKHR::F_surface_transformKHR(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_transformKHR& F_surface_transformKHR::operator = (F_surface_transformKHR flag_){flag = flag_.flag;return *this;}
F_surface_transformKHR F_surface_transformKHR::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_surface_transformKHR& F_surface_transformKHR::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_transformKHR F_surface_transformKHR::operator | (F_surface_transformKHR flag_){return flag | flag_.flag;}
F_surface_transformKHR& F_surface_transformKHR::operator |= (F_surface_transformKHR flag_){flag |= flag_.flag;return *this;}
F_surface_transformKHR F_surface_transformKHR::operator & (F_surface_transformKHR flag_){return flag & flag_.flag;}
F_surface_transformKHR& F_surface_transformKHR::operator &= (F_surface_transformKHR flag_){flag &= flag_.flag;return *this;}
F_surface_transformKHR F_surface_transformKHR::operator ^ (F_surface_transformKHR flag_){return flag ^ flag_.flag;}
F_surface_transformKHR& F_surface_transformKHR::operator ^= (F_surface_transformKHR flag_){flag ^= flag_.flag;return *this;}
F_surface_transformKHR F_surface_transformKHR::operator ~ (){return all_flags().flag^flag;}
bool F_surface_transformKHR::operator !(){return !flag;}
bool F_surface_transformKHR::operator == (F_surface_transformKHR flag_){return flag == flag_.flag;}
bool F_surface_transformKHR::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_surface_transformKHR::operator != (F_surface_transformKHR flag_){return flag != flag_.flag;}
bool F_surface_transformKHR::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_surface_transformKHR::operator bool(){return !!flag;}
F_surface_transformKHR& F_surface_transformKHR::clear(){flag = 0;return *this;}
F_surface_transformKHR operator|(F_surface_transformKHR::Bits bit1_, F_surface_transformKHR::Bits bit2_){F_surface_transformKHR flags(bit1_);return flags | bit2_;}
F_surface_transformKHR::F_surface_transformKHR(int flags_):flag(flags_) {}
F_surface_transformKHR F_surface_transformKHR::all_flags(){
 return VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR | 
VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR | 
VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR | 
VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR | 
VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR | 
VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR | 
VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR | 
VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR | 
VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR;
}
F_surface_transformKHR& F_surface_transformKHR::e_identity_khr_on(){ flag |= VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_identity_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_rotate_90_khr_on(){ flag |= VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_rotate_90_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_rotate_180_khr_on(){ flag |= VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_rotate_180_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_rotate_270_khr_on(){ flag |= VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_rotate_270_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_khr_on(){ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_rotate_90_khr_on(){ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_rotate_90_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_rotate_180_khr_on(){ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_rotate_180_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_rotate_270_khr_on(){ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_horizontal_mirror_rotate_270_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_inherit_khr_on(){ flag |= VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR; return *this; }F_surface_transformKHR& F_surface_transformKHR::e_inherit_khr_off(){ flag &= ~VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR; return *this; }

F_composite_alphaKHR::F_composite_alphaKHR():flag(0){}
F_composite_alphaKHR::F_composite_alphaKHR(F_composite_alphaKHR::Bits bits_):flag(static_cast<int>(bits_)){}
F_composite_alphaKHR::F_composite_alphaKHR(F_composite_alphaKHR const& flag_):flag(flag_.flag){}
F_composite_alphaKHR::F_composite_alphaKHR(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_composite_alphaKHR& F_composite_alphaKHR::operator = (F_composite_alphaKHR flag_){flag = flag_.flag;return *this;}
F_composite_alphaKHR F_composite_alphaKHR::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_composite_alphaKHR& F_composite_alphaKHR::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_composite_alphaKHR F_composite_alphaKHR::operator | (F_composite_alphaKHR flag_){return flag | flag_.flag;}
F_composite_alphaKHR& F_composite_alphaKHR::operator |= (F_composite_alphaKHR flag_){flag |= flag_.flag;return *this;}
F_composite_alphaKHR F_composite_alphaKHR::operator & (F_composite_alphaKHR flag_){return flag & flag_.flag;}
F_composite_alphaKHR& F_composite_alphaKHR::operator &= (F_composite_alphaKHR flag_){flag &= flag_.flag;return *this;}
F_composite_alphaKHR F_composite_alphaKHR::operator ^ (F_composite_alphaKHR flag_){return flag ^ flag_.flag;}
F_composite_alphaKHR& F_composite_alphaKHR::operator ^= (F_composite_alphaKHR flag_){flag ^= flag_.flag;return *this;}
F_composite_alphaKHR F_composite_alphaKHR::operator ~ (){return all_flags().flag^flag;}
bool F_composite_alphaKHR::operator !(){return !flag;}
bool F_composite_alphaKHR::operator == (F_composite_alphaKHR flag_){return flag == flag_.flag;}
bool F_composite_alphaKHR::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_composite_alphaKHR::operator != (F_composite_alphaKHR flag_){return flag != flag_.flag;}
bool F_composite_alphaKHR::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_composite_alphaKHR::operator bool(){return !!flag;}
F_composite_alphaKHR& F_composite_alphaKHR::clear(){flag = 0;return *this;}
F_composite_alphaKHR operator|(F_composite_alphaKHR::Bits bit1_, F_composite_alphaKHR::Bits bit2_){F_composite_alphaKHR flags(bit1_);return flags | bit2_;}
F_composite_alphaKHR::F_composite_alphaKHR(int flags_):flag(flags_) {}
F_composite_alphaKHR F_composite_alphaKHR::all_flags(){
 return VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR | 
VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR | 
VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR | 
VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
}
F_composite_alphaKHR& F_composite_alphaKHR::e_opaque_khr_on(){ flag |= VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR; return *this; }F_composite_alphaKHR& F_composite_alphaKHR::e_opaque_khr_off(){ flag &= ~VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR; return *this; }F_composite_alphaKHR& F_composite_alphaKHR::e_pre_multiplied_khr_on(){ flag |= VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR; return *this; }F_composite_alphaKHR& F_composite_alphaKHR::e_pre_multiplied_khr_off(){ flag &= ~VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR; return *this; }F_composite_alphaKHR& F_composite_alphaKHR::e_post_multiplied_khr_on(){ flag |= VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR; return *this; }F_composite_alphaKHR& F_composite_alphaKHR::e_post_multiplied_khr_off(){ flag &= ~VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR; return *this; }F_composite_alphaKHR& F_composite_alphaKHR::e_inherit_khr_on(){ flag |= VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; return *this; }F_composite_alphaKHR& F_composite_alphaKHR::e_inherit_khr_off(){ flag &= ~VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; return *this; }

F_device_group_present_modeKHR::F_device_group_present_modeKHR():flag(0){}
F_device_group_present_modeKHR::F_device_group_present_modeKHR(F_device_group_present_modeKHR::Bits bits_):flag(static_cast<int>(bits_)){}
F_device_group_present_modeKHR::F_device_group_present_modeKHR(F_device_group_present_modeKHR const& flag_):flag(flag_.flag){}
F_device_group_present_modeKHR::F_device_group_present_modeKHR(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_device_group_present_modeKHR& F_device_group_present_modeKHR::operator = (F_device_group_present_modeKHR flag_){flag = flag_.flag;return *this;}
F_device_group_present_modeKHR F_device_group_present_modeKHR::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_device_group_present_modeKHR& F_device_group_present_modeKHR::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_device_group_present_modeKHR F_device_group_present_modeKHR::operator | (F_device_group_present_modeKHR flag_){return flag | flag_.flag;}
F_device_group_present_modeKHR& F_device_group_present_modeKHR::operator |= (F_device_group_present_modeKHR flag_){flag |= flag_.flag;return *this;}
F_device_group_present_modeKHR F_device_group_present_modeKHR::operator & (F_device_group_present_modeKHR flag_){return flag & flag_.flag;}
F_device_group_present_modeKHR& F_device_group_present_modeKHR::operator &= (F_device_group_present_modeKHR flag_){flag &= flag_.flag;return *this;}
F_device_group_present_modeKHR F_device_group_present_modeKHR::operator ^ (F_device_group_present_modeKHR flag_){return flag ^ flag_.flag;}
F_device_group_present_modeKHR& F_device_group_present_modeKHR::operator ^= (F_device_group_present_modeKHR flag_){flag ^= flag_.flag;return *this;}
F_device_group_present_modeKHR F_device_group_present_modeKHR::operator ~ (){return all_flags().flag^flag;}
bool F_device_group_present_modeKHR::operator !(){return !flag;}
bool F_device_group_present_modeKHR::operator == (F_device_group_present_modeKHR flag_){return flag == flag_.flag;}
bool F_device_group_present_modeKHR::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_device_group_present_modeKHR::operator != (F_device_group_present_modeKHR flag_){return flag != flag_.flag;}
bool F_device_group_present_modeKHR::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_device_group_present_modeKHR::operator bool(){return !!flag;}
F_device_group_present_modeKHR& F_device_group_present_modeKHR::clear(){flag = 0;return *this;}
F_device_group_present_modeKHR operator|(F_device_group_present_modeKHR::Bits bit1_, F_device_group_present_modeKHR::Bits bit2_){F_device_group_present_modeKHR flags(bit1_);return flags | bit2_;}
F_device_group_present_modeKHR::F_device_group_present_modeKHR(int flags_):flag(flags_) {}
F_device_group_present_modeKHR F_device_group_present_modeKHR::all_flags(){
 return VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR;
}
F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_local_khr_on(){ flag |= VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR; return *this; }F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_local_khr_off(){ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR; return *this; }F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_remote_khr_on(){ flag |= VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR; return *this; }F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_remote_khr_off(){ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR; return *this; }F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_sum_khr_on(){ flag |= VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR; return *this; }F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_sum_khr_off(){ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR; return *this; }F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_local_multi_device_khr_on(){ flag |= VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR; return *this; }F_device_group_present_modeKHR& F_device_group_present_modeKHR::e_local_multi_device_khr_off(){ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR; return *this; }

F_swapchain_createKHR::F_swapchain_createKHR():flag(0){}
F_swapchain_createKHR::F_swapchain_createKHR(F_swapchain_createKHR::Bits bits_):flag(static_cast<int>(bits_)){}
F_swapchain_createKHR::F_swapchain_createKHR(F_swapchain_createKHR const& flag_):flag(flag_.flag){}
F_swapchain_createKHR::F_swapchain_createKHR(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_swapchain_createKHR& F_swapchain_createKHR::operator = (F_swapchain_createKHR flag_){flag = flag_.flag;return *this;}
F_swapchain_createKHR F_swapchain_createKHR::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_swapchain_createKHR& F_swapchain_createKHR::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_swapchain_createKHR F_swapchain_createKHR::operator | (F_swapchain_createKHR flag_){return flag | flag_.flag;}
F_swapchain_createKHR& F_swapchain_createKHR::operator |= (F_swapchain_createKHR flag_){flag |= flag_.flag;return *this;}
F_swapchain_createKHR F_swapchain_createKHR::operator & (F_swapchain_createKHR flag_){return flag & flag_.flag;}
F_swapchain_createKHR& F_swapchain_createKHR::operator &= (F_swapchain_createKHR flag_){flag &= flag_.flag;return *this;}
F_swapchain_createKHR F_swapchain_createKHR::operator ^ (F_swapchain_createKHR flag_){return flag ^ flag_.flag;}
F_swapchain_createKHR& F_swapchain_createKHR::operator ^= (F_swapchain_createKHR flag_){flag ^= flag_.flag;return *this;}
F_swapchain_createKHR F_swapchain_createKHR::operator ~ (){return all_flags().flag^flag;}
bool F_swapchain_createKHR::operator !(){return !flag;}
bool F_swapchain_createKHR::operator == (F_swapchain_createKHR flag_){return flag == flag_.flag;}
bool F_swapchain_createKHR::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_swapchain_createKHR::operator != (F_swapchain_createKHR flag_){return flag != flag_.flag;}
bool F_swapchain_createKHR::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_swapchain_createKHR::operator bool(){return !!flag;}
F_swapchain_createKHR& F_swapchain_createKHR::clear(){flag = 0;return *this;}
F_swapchain_createKHR operator|(F_swapchain_createKHR::Bits bit1_, F_swapchain_createKHR::Bits bit2_){F_swapchain_createKHR flags(bit1_);return flags | bit2_;}
F_swapchain_createKHR::F_swapchain_createKHR(int flags_):flag(flags_) {}
F_swapchain_createKHR F_swapchain_createKHR::all_flags(){
 return VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR | 
VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR;
}
F_swapchain_createKHR& F_swapchain_createKHR::e_split_instance_bind_regions_khr_on(){ flag |= VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR; return *this; }F_swapchain_createKHR& F_swapchain_createKHR::e_split_instance_bind_regions_khr_off(){ flag &= ~VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR; return *this; }F_swapchain_createKHR& F_swapchain_createKHR::e_protected_khr_on(){ flag |= VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR; return *this; }F_swapchain_createKHR& F_swapchain_createKHR::e_protected_khr_off(){ flag &= ~VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR; return *this; }

F_sample_count::F_sample_count():flag(0){}
F_sample_count::F_sample_count(F_sample_count::Bits bits_):flag(static_cast<int>(bits_)){}
F_sample_count::F_sample_count(F_sample_count const& flag_):flag(flag_.flag){}
F_sample_count::F_sample_count(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sample_count& F_sample_count::operator = (F_sample_count flag_){flag = flag_.flag;return *this;}
F_sample_count F_sample_count::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_sample_count& F_sample_count::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_sample_count F_sample_count::operator | (F_sample_count flag_){return flag | flag_.flag;}
F_sample_count& F_sample_count::operator |= (F_sample_count flag_){flag |= flag_.flag;return *this;}
F_sample_count F_sample_count::operator & (F_sample_count flag_){return flag & flag_.flag;}
F_sample_count& F_sample_count::operator &= (F_sample_count flag_){flag &= flag_.flag;return *this;}
F_sample_count F_sample_count::operator ^ (F_sample_count flag_){return flag ^ flag_.flag;}
F_sample_count& F_sample_count::operator ^= (F_sample_count flag_){flag ^= flag_.flag;return *this;}
F_sample_count F_sample_count::operator ~ (){return all_flags().flag^flag;}
bool F_sample_count::operator !(){return !flag;}
bool F_sample_count::operator == (F_sample_count flag_){return flag == flag_.flag;}
bool F_sample_count::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_sample_count::operator != (F_sample_count flag_){return flag != flag_.flag;}
bool F_sample_count::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_sample_count::operator bool(){return !!flag;}
F_sample_count& F_sample_count::clear(){flag = 0;return *this;}
F_sample_count operator|(F_sample_count::Bits bit1_, F_sample_count::Bits bit2_){F_sample_count flags(bit1_);return flags | bit2_;}
F_sample_count::F_sample_count(int flags_):flag(flags_) {}
F_sample_count F_sample_count::all_flags(){
 return VK_SAMPLE_COUNT_1_BIT | 
VK_SAMPLE_COUNT_2_BIT | 
VK_SAMPLE_COUNT_4_BIT | 
VK_SAMPLE_COUNT_8_BIT | 
VK_SAMPLE_COUNT_16_BIT | 
VK_SAMPLE_COUNT_32_BIT | 
VK_SAMPLE_COUNT_64_BIT;
}
F_sample_count& F_sample_count::e_1_on(){ flag |= VK_SAMPLE_COUNT_1_BIT; return *this; }F_sample_count& F_sample_count::e_1_off(){ flag &= ~VK_SAMPLE_COUNT_1_BIT; return *this; }F_sample_count& F_sample_count::e_2_on(){ flag |= VK_SAMPLE_COUNT_2_BIT; return *this; }F_sample_count& F_sample_count::e_2_off(){ flag &= ~VK_SAMPLE_COUNT_2_BIT; return *this; }F_sample_count& F_sample_count::e_4_on(){ flag |= VK_SAMPLE_COUNT_4_BIT; return *this; }F_sample_count& F_sample_count::e_4_off(){ flag &= ~VK_SAMPLE_COUNT_4_BIT; return *this; }F_sample_count& F_sample_count::e_8_on(){ flag |= VK_SAMPLE_COUNT_8_BIT; return *this; }F_sample_count& F_sample_count::e_8_off(){ flag &= ~VK_SAMPLE_COUNT_8_BIT; return *this; }F_sample_count& F_sample_count::e_16_on(){ flag |= VK_SAMPLE_COUNT_16_BIT; return *this; }F_sample_count& F_sample_count::e_16_off(){ flag &= ~VK_SAMPLE_COUNT_16_BIT; return *this; }F_sample_count& F_sample_count::e_32_on(){ flag |= VK_SAMPLE_COUNT_32_BIT; return *this; }F_sample_count& F_sample_count::e_32_off(){ flag &= ~VK_SAMPLE_COUNT_32_BIT; return *this; }F_sample_count& F_sample_count::e_64_on(){ flag |= VK_SAMPLE_COUNT_64_BIT; return *this; }F_sample_count& F_sample_count::e_64_off(){ flag &= ~VK_SAMPLE_COUNT_64_BIT; return *this; }

F_subgroup_feature::F_subgroup_feature():flag(0){}
F_subgroup_feature::F_subgroup_feature(F_subgroup_feature::Bits bits_):flag(static_cast<int>(bits_)){}
F_subgroup_feature::F_subgroup_feature(F_subgroup_feature const& flag_):flag(flag_.flag){}
F_subgroup_feature::F_subgroup_feature(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_subgroup_feature& F_subgroup_feature::operator = (F_subgroup_feature flag_){flag = flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_subgroup_feature& F_subgroup_feature::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_subgroup_feature F_subgroup_feature::operator | (F_subgroup_feature flag_){return flag | flag_.flag;}
F_subgroup_feature& F_subgroup_feature::operator |= (F_subgroup_feature flag_){flag |= flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator & (F_subgroup_feature flag_){return flag & flag_.flag;}
F_subgroup_feature& F_subgroup_feature::operator &= (F_subgroup_feature flag_){flag &= flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator ^ (F_subgroup_feature flag_){return flag ^ flag_.flag;}
F_subgroup_feature& F_subgroup_feature::operator ^= (F_subgroup_feature flag_){flag ^= flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator ~ (){return all_flags().flag^flag;}
bool F_subgroup_feature::operator !(){return !flag;}
bool F_subgroup_feature::operator == (F_subgroup_feature flag_){return flag == flag_.flag;}
bool F_subgroup_feature::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_subgroup_feature::operator != (F_subgroup_feature flag_){return flag != flag_.flag;}
bool F_subgroup_feature::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_subgroup_feature::operator bool(){return !!flag;}
F_subgroup_feature& F_subgroup_feature::clear(){flag = 0;return *this;}
F_subgroup_feature operator|(F_subgroup_feature::Bits bit1_, F_subgroup_feature::Bits bit2_){F_subgroup_feature flags(bit1_);return flags | bit2_;}
F_subgroup_feature::F_subgroup_feature(int flags_):flag(flags_) {}
F_subgroup_feature F_subgroup_feature::all_flags(){
 return VK_SUBGROUP_FEATURE_BASIC_BIT | 
VK_SUBGROUP_FEATURE_VOTE_BIT | 
VK_SUBGROUP_FEATURE_ARITHMETIC_BIT | 
VK_SUBGROUP_FEATURE_BALLOT_BIT | 
VK_SUBGROUP_FEATURE_SHUFFLE_BIT | 
VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT | 
VK_SUBGROUP_FEATURE_CLUSTERED_BIT | 
VK_SUBGROUP_FEATURE_QUAD_BIT | 
VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV;
}
F_subgroup_feature& F_subgroup_feature::e_basic_on(){ flag |= VK_SUBGROUP_FEATURE_BASIC_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_basic_off(){ flag &= ~VK_SUBGROUP_FEATURE_BASIC_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_vote_on(){ flag |= VK_SUBGROUP_FEATURE_VOTE_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_vote_off(){ flag &= ~VK_SUBGROUP_FEATURE_VOTE_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_arithmetic_on(){ flag |= VK_SUBGROUP_FEATURE_ARITHMETIC_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_arithmetic_off(){ flag &= ~VK_SUBGROUP_FEATURE_ARITHMETIC_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_ballot_on(){ flag |= VK_SUBGROUP_FEATURE_BALLOT_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_ballot_off(){ flag &= ~VK_SUBGROUP_FEATURE_BALLOT_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_shuffle_on(){ flag |= VK_SUBGROUP_FEATURE_SHUFFLE_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_shuffle_off(){ flag &= ~VK_SUBGROUP_FEATURE_SHUFFLE_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_shuffle_relative_on(){ flag |= VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_shuffle_relative_off(){ flag &= ~VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_clustered_on(){ flag |= VK_SUBGROUP_FEATURE_CLUSTERED_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_clustered_off(){ flag &= ~VK_SUBGROUP_FEATURE_CLUSTERED_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_quad_on(){ flag |= VK_SUBGROUP_FEATURE_QUAD_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_quad_off(){ flag &= ~VK_SUBGROUP_FEATURE_QUAD_BIT; return *this; }F_subgroup_feature& F_subgroup_feature::e_partitioned_nv_on(){ flag |= VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV; return *this; }F_subgroup_feature& F_subgroup_feature::e_partitioned_nv_off(){ flag &= ~VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV; return *this; }

F_format_feature::F_format_feature():flag(0){}
F_format_feature::F_format_feature(F_format_feature::Bits bits_):flag(static_cast<int>(bits_)){}
F_format_feature::F_format_feature(F_format_feature const& flag_):flag(flag_.flag){}
F_format_feature::F_format_feature(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_format_feature& F_format_feature::operator = (F_format_feature flag_){flag = flag_.flag;return *this;}
F_format_feature F_format_feature::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_format_feature& F_format_feature::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_format_feature F_format_feature::operator | (F_format_feature flag_){return flag | flag_.flag;}
F_format_feature& F_format_feature::operator |= (F_format_feature flag_){flag |= flag_.flag;return *this;}
F_format_feature F_format_feature::operator & (F_format_feature flag_){return flag & flag_.flag;}
F_format_feature& F_format_feature::operator &= (F_format_feature flag_){flag &= flag_.flag;return *this;}
F_format_feature F_format_feature::operator ^ (F_format_feature flag_){return flag ^ flag_.flag;}
F_format_feature& F_format_feature::operator ^= (F_format_feature flag_){flag ^= flag_.flag;return *this;}
F_format_feature F_format_feature::operator ~ (){return all_flags().flag^flag;}
bool F_format_feature::operator !(){return !flag;}
bool F_format_feature::operator == (F_format_feature flag_){return flag == flag_.flag;}
bool F_format_feature::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_format_feature::operator != (F_format_feature flag_){return flag != flag_.flag;}
bool F_format_feature::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_format_feature::operator bool(){return !!flag;}
F_format_feature& F_format_feature::clear(){flag = 0;return *this;}
F_format_feature operator|(F_format_feature::Bits bit1_, F_format_feature::Bits bit2_){F_format_feature flags(bit1_);return flags | bit2_;}
F_format_feature::F_format_feature(int flags_):flag(flags_) {}
F_format_feature F_format_feature::all_flags(){
 return VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | 
VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT | 
VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT | 
VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT | 
VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT | 
VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT | 
VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT | 
VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT | 
VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT | 
VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT | 
VK_FORMAT_FEATURE_BLIT_SRC_BIT | 
VK_FORMAT_FEATURE_BLIT_DST_BIT | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT | 
VK_FORMAT_FEATURE_TRANSFER_SRC_BIT | 
VK_FORMAT_FEATURE_TRANSFER_DST_BIT | 
VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT | 
VK_FORMAT_FEATURE_DISJOINT_BIT | 
VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT | 
VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR | 
VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR | 
VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR | 
VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR | 
VK_FORMAT_FEATURE_DISJOINT_BIT_KHR | 
VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR;
}
F_format_feature& F_format_feature::e_sampled_image_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT; return *this; }F_format_feature& F_format_feature::e_storage_image_on(){ flag |= VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT; return *this; }F_format_feature& F_format_feature::e_storage_image_off(){ flag &= ~VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT; return *this; }F_format_feature& F_format_feature::e_storage_image_atomic_on(){ flag |= VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT; return *this; }F_format_feature& F_format_feature::e_storage_image_atomic_off(){ flag &= ~VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT; return *this; }F_format_feature& F_format_feature::e_uniform_texel_buffer_on(){ flag |= VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }F_format_feature& F_format_feature::e_uniform_texel_buffer_off(){ flag &= ~VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }F_format_feature& F_format_feature::e_storage_texel_buffer_on(){ flag |= VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT; return *this; }F_format_feature& F_format_feature::e_storage_texel_buffer_off(){ flag &= ~VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT; return *this; }F_format_feature& F_format_feature::e_storage_texel_buffer_atomic_on(){ flag |= VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT; return *this; }F_format_feature& F_format_feature::e_storage_texel_buffer_atomic_off(){ flag &= ~VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT; return *this; }F_format_feature& F_format_feature::e_vertex_buffer_on(){ flag |= VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT; return *this; }F_format_feature& F_format_feature::e_vertex_buffer_off(){ flag &= ~VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT; return *this; }F_format_feature& F_format_feature::e_color_attachment_on(){ flag |= VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT; return *this; }F_format_feature& F_format_feature::e_color_attachment_off(){ flag &= ~VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT; return *this; }F_format_feature& F_format_feature::e_color_attachment_blend_on(){ flag |= VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT; return *this; }F_format_feature& F_format_feature::e_color_attachment_blend_off(){ flag &= ~VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT; return *this; }F_format_feature& F_format_feature::e_depth_stencil_attachment_on(){ flag |= VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }F_format_feature& F_format_feature::e_depth_stencil_attachment_off(){ flag &= ~VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }F_format_feature& F_format_feature::e_blit_src_on(){ flag |= VK_FORMAT_FEATURE_BLIT_SRC_BIT; return *this; }F_format_feature& F_format_feature::e_blit_src_off(){ flag &= ~VK_FORMAT_FEATURE_BLIT_SRC_BIT; return *this; }F_format_feature& F_format_feature::e_blit_dst_on(){ flag |= VK_FORMAT_FEATURE_BLIT_DST_BIT; return *this; }F_format_feature& F_format_feature::e_blit_dst_off(){ flag &= ~VK_FORMAT_FEATURE_BLIT_DST_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_filter_linear_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_filter_linear_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT; return *this; }F_format_feature& F_format_feature::e_transfer_src_on(){ flag |= VK_FORMAT_FEATURE_TRANSFER_SRC_BIT; return *this; }F_format_feature& F_format_feature::e_transfer_src_off(){ flag &= ~VK_FORMAT_FEATURE_TRANSFER_SRC_BIT; return *this; }F_format_feature& F_format_feature::e_transfer_dst_on(){ flag |= VK_FORMAT_FEATURE_TRANSFER_DST_BIT; return *this; }F_format_feature& F_format_feature::e_transfer_dst_off(){ flag &= ~VK_FORMAT_FEATURE_TRANSFER_DST_BIT; return *this; }F_format_feature& F_format_feature::e_midpoint_chroma_samples_on(){ flag |= VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT; return *this; }F_format_feature& F_format_feature::e_midpoint_chroma_samples_off(){ flag &= ~VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_linear_filter_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_linear_filter_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_separate_reconstruction_filter_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_separate_reconstruction_filter_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT; return *this; }F_format_feature& F_format_feature::e_disjoint_on(){ flag |= VK_FORMAT_FEATURE_DISJOINT_BIT; return *this; }F_format_feature& F_format_feature::e_disjoint_off(){ flag &= ~VK_FORMAT_FEATURE_DISJOINT_BIT; return *this; }F_format_feature& F_format_feature::e_cosited_chroma_samples_on(){ flag |= VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT; return *this; }F_format_feature& F_format_feature::e_cosited_chroma_samples_off(){ flag &= ~VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT; return *this; }F_format_feature& F_format_feature::e_sampled_image_filter_cubic_img_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG; return *this; }F_format_feature& F_format_feature::e_sampled_image_filter_cubic_img_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG; return *this; }F_format_feature& F_format_feature::e_sampled_image_filter_minmax_ext_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT; return *this; }F_format_feature& F_format_feature::e_sampled_image_filter_minmax_ext_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT; return *this; }F_format_feature& F_format_feature::e_transfer_src_khr_on(){ flag |= VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_transfer_src_khr_off(){ flag &= ~VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_transfer_dst_khr_on(){ flag |= VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_transfer_dst_khr_off(){ flag &= ~VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_midpoint_chroma_samples_khr_on(){ flag |= VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_midpoint_chroma_samples_khr_off(){ flag &= ~VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_linear_filter_khr_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_linear_filter_khr_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_separate_reconstruction_filter_khr_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_separate_reconstruction_filter_khr_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_khr_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_khr_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_khr_on(){ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_khr_off(){ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_disjoint_khr_on(){ flag |= VK_FORMAT_FEATURE_DISJOINT_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_disjoint_khr_off(){ flag &= ~VK_FORMAT_FEATURE_DISJOINT_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_cosited_chroma_samples_khr_on(){ flag |= VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR; return *this; }F_format_feature& F_format_feature::e_cosited_chroma_samples_khr_off(){ flag &= ~VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR; return *this; }

F_external_memory_featureNV::F_external_memory_featureNV():flag(0){}
F_external_memory_featureNV::F_external_memory_featureNV(F_external_memory_featureNV::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_memory_featureNV::F_external_memory_featureNV(F_external_memory_featureNV const& flag_):flag(flag_.flag){}
F_external_memory_featureNV::F_external_memory_featureNV(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_featureNV& F_external_memory_featureNV::operator = (F_external_memory_featureNV flag_){flag = flag_.flag;return *this;}
F_external_memory_featureNV F_external_memory_featureNV::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_memory_featureNV& F_external_memory_featureNV::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_featureNV F_external_memory_featureNV::operator | (F_external_memory_featureNV flag_){return flag | flag_.flag;}
F_external_memory_featureNV& F_external_memory_featureNV::operator |= (F_external_memory_featureNV flag_){flag |= flag_.flag;return *this;}
F_external_memory_featureNV F_external_memory_featureNV::operator & (F_external_memory_featureNV flag_){return flag & flag_.flag;}
F_external_memory_featureNV& F_external_memory_featureNV::operator &= (F_external_memory_featureNV flag_){flag &= flag_.flag;return *this;}
F_external_memory_featureNV F_external_memory_featureNV::operator ^ (F_external_memory_featureNV flag_){return flag ^ flag_.flag;}
F_external_memory_featureNV& F_external_memory_featureNV::operator ^= (F_external_memory_featureNV flag_){flag ^= flag_.flag;return *this;}
F_external_memory_featureNV F_external_memory_featureNV::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_featureNV::operator !(){return !flag;}
bool F_external_memory_featureNV::operator == (F_external_memory_featureNV flag_){return flag == flag_.flag;}
bool F_external_memory_featureNV::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_featureNV::operator != (F_external_memory_featureNV flag_){return flag != flag_.flag;}
bool F_external_memory_featureNV::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_memory_featureNV::operator bool(){return !!flag;}
F_external_memory_featureNV& F_external_memory_featureNV::clear(){flag = 0;return *this;}
F_external_memory_featureNV operator|(F_external_memory_featureNV::Bits bit1_, F_external_memory_featureNV::Bits bit2_){F_external_memory_featureNV flags(bit1_);return flags | bit2_;}
F_external_memory_featureNV::F_external_memory_featureNV(int flags_):flag(flags_) {}
F_external_memory_featureNV F_external_memory_featureNV::all_flags(){
 return VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV | 
VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV | 
VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV;
}
F_external_memory_featureNV& F_external_memory_featureNV::e_dedicated_only_nv_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV; return *this; }F_external_memory_featureNV& F_external_memory_featureNV::e_dedicated_only_nv_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV; return *this; }F_external_memory_featureNV& F_external_memory_featureNV::e_exportable_nv_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV; return *this; }F_external_memory_featureNV& F_external_memory_featureNV::e_exportable_nv_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV; return *this; }F_external_memory_featureNV& F_external_memory_featureNV::e_importable_nv_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV; return *this; }F_external_memory_featureNV& F_external_memory_featureNV::e_importable_nv_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV; return *this; }

F_external_memory_handle_type::F_external_memory_handle_type():flag(0){}
F_external_memory_handle_type::F_external_memory_handle_type(F_external_memory_handle_type::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_memory_handle_type::F_external_memory_handle_type(F_external_memory_handle_type const& flag_):flag(flag_.flag){}
F_external_memory_handle_type::F_external_memory_handle_type(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_handle_type& F_external_memory_handle_type::operator = (F_external_memory_handle_type flag_){flag = flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_memory_handle_type& F_external_memory_handle_type::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator | (F_external_memory_handle_type flag_){return flag | flag_.flag;}
F_external_memory_handle_type& F_external_memory_handle_type::operator |= (F_external_memory_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator & (F_external_memory_handle_type flag_){return flag & flag_.flag;}
F_external_memory_handle_type& F_external_memory_handle_type::operator &= (F_external_memory_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator ^ (F_external_memory_handle_type flag_){return flag ^ flag_.flag;}
F_external_memory_handle_type& F_external_memory_handle_type::operator ^= (F_external_memory_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_handle_type::operator !(){return !flag;}
bool F_external_memory_handle_type::operator == (F_external_memory_handle_type flag_){return flag == flag_.flag;}
bool F_external_memory_handle_type::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_handle_type::operator != (F_external_memory_handle_type flag_){return flag != flag_.flag;}
bool F_external_memory_handle_type::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_memory_handle_type::operator bool(){return !!flag;}
F_external_memory_handle_type& F_external_memory_handle_type::clear(){flag = 0;return *this;}
F_external_memory_handle_type operator|(F_external_memory_handle_type::Bits bit1_, F_external_memory_handle_type::Bits bit2_){F_external_memory_handle_type flags(bit1_);return flags | bit2_;}
F_external_memory_handle_type::F_external_memory_handle_type(int flags_):flag(flags_) {}
F_external_memory_handle_type F_external_memory_handle_type::all_flags(){
 return VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR;
}
F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_kmt_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_kmt_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_kmt_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_kmt_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_heap_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_heap_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_resource_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_resource_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_dma_buf_ext_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_dma_buf_ext_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_android_hardware_buffer_android_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_android_hardware_buffer_android_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_host_allocation_ext_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_host_allocation_ext_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_host_mapped_foreign_memory_ext_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_host_mapped_foreign_memory_ext_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_khr_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_khr_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_kmt_khr_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_win32_kmt_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_khr_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_kmt_khr_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d11_texture_kmt_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_heap_khr_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_heap_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_resource_khr_on(){ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR; return *this; }F_external_memory_handle_type& F_external_memory_handle_type::e_d3d12_resource_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR; return *this; }

F_external_memory_feature::F_external_memory_feature():flag(0){}
F_external_memory_feature::F_external_memory_feature(F_external_memory_feature::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_memory_feature::F_external_memory_feature(F_external_memory_feature const& flag_):flag(flag_.flag){}
F_external_memory_feature::F_external_memory_feature(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_feature& F_external_memory_feature::operator = (F_external_memory_feature flag_){flag = flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_memory_feature& F_external_memory_feature::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_feature F_external_memory_feature::operator | (F_external_memory_feature flag_){return flag | flag_.flag;}
F_external_memory_feature& F_external_memory_feature::operator |= (F_external_memory_feature flag_){flag |= flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator & (F_external_memory_feature flag_){return flag & flag_.flag;}
F_external_memory_feature& F_external_memory_feature::operator &= (F_external_memory_feature flag_){flag &= flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator ^ (F_external_memory_feature flag_){return flag ^ flag_.flag;}
F_external_memory_feature& F_external_memory_feature::operator ^= (F_external_memory_feature flag_){flag ^= flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_feature::operator !(){return !flag;}
bool F_external_memory_feature::operator == (F_external_memory_feature flag_){return flag == flag_.flag;}
bool F_external_memory_feature::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_feature::operator != (F_external_memory_feature flag_){return flag != flag_.flag;}
bool F_external_memory_feature::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_memory_feature::operator bool(){return !!flag;}
F_external_memory_feature& F_external_memory_feature::clear(){flag = 0;return *this;}
F_external_memory_feature operator|(F_external_memory_feature::Bits bit1_, F_external_memory_feature::Bits bit2_){F_external_memory_feature flags(bit1_);return flags | bit2_;}
F_external_memory_feature::F_external_memory_feature(int flags_):flag(flags_) {}
F_external_memory_feature F_external_memory_feature::all_flags(){
 return VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT | 
VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT | 
VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT | 
VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR | 
VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR | 
VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR;
}
F_external_memory_feature& F_external_memory_feature::e_dedicated_only_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT; return *this; }F_external_memory_feature& F_external_memory_feature::e_dedicated_only_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT; return *this; }F_external_memory_feature& F_external_memory_feature::e_exportable_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT; return *this; }F_external_memory_feature& F_external_memory_feature::e_exportable_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT; return *this; }F_external_memory_feature& F_external_memory_feature::e_importable_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT; return *this; }F_external_memory_feature& F_external_memory_feature::e_importable_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT; return *this; }F_external_memory_feature& F_external_memory_feature::e_dedicated_only_khr_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR; return *this; }F_external_memory_feature& F_external_memory_feature::e_dedicated_only_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR; return *this; }F_external_memory_feature& F_external_memory_feature::e_exportable_khr_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR; return *this; }F_external_memory_feature& F_external_memory_feature::e_exportable_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR; return *this; }F_external_memory_feature& F_external_memory_feature::e_importable_khr_on(){ flag |= VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR; return *this; }F_external_memory_feature& F_external_memory_feature::e_importable_khr_off(){ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR; return *this; }

F_external_semaphore_handle_type::F_external_semaphore_handle_type():flag(0){}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(F_external_semaphore_handle_type::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(F_external_semaphore_handle_type const& flag_):flag(flag_.flag){}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator = (F_external_semaphore_handle_type flag_){flag = flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator | (F_external_semaphore_handle_type flag_){return flag | flag_.flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator |= (F_external_semaphore_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator & (F_external_semaphore_handle_type flag_){return flag & flag_.flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator &= (F_external_semaphore_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator ^ (F_external_semaphore_handle_type flag_){return flag ^ flag_.flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator ^= (F_external_semaphore_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator ~ (){return all_flags().flag^flag;}
bool F_external_semaphore_handle_type::operator !(){return !flag;}
bool F_external_semaphore_handle_type::operator == (F_external_semaphore_handle_type flag_){return flag == flag_.flag;}
bool F_external_semaphore_handle_type::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_semaphore_handle_type::operator != (F_external_semaphore_handle_type flag_){return flag != flag_.flag;}
bool F_external_semaphore_handle_type::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_semaphore_handle_type::operator bool(){return !!flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::clear(){flag = 0;return *this;}
F_external_semaphore_handle_type operator|(F_external_semaphore_handle_type::Bits bit1_, F_external_semaphore_handle_type::Bits bit2_){F_external_semaphore_handle_type flags(bit1_);return flags | bit2_;}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(int flags_):flag(flags_) {}
F_external_semaphore_handle_type F_external_semaphore_handle_type::all_flags(){
 return VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_kmt_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_kmt_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_d3d12_fence_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_d3d12_fence_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_sync_fd_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_sync_fd_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_khr_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_khr_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_khr_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_khr_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_kmt_khr_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_win32_kmt_khr_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_d3d12_fence_khr_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_d3d12_fence_khr_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_sync_fd_khr_on(){ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR; return *this; }F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_sync_fd_khr_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR; return *this; }

F_external_semaphore_feature::F_external_semaphore_feature():flag(0){}
F_external_semaphore_feature::F_external_semaphore_feature(F_external_semaphore_feature::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_semaphore_feature::F_external_semaphore_feature(F_external_semaphore_feature const& flag_):flag(flag_.flag){}
F_external_semaphore_feature::F_external_semaphore_feature(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_semaphore_feature& F_external_semaphore_feature::operator = (F_external_semaphore_feature flag_){flag = flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_semaphore_feature& F_external_semaphore_feature::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator | (F_external_semaphore_feature flag_){return flag | flag_.flag;}
F_external_semaphore_feature& F_external_semaphore_feature::operator |= (F_external_semaphore_feature flag_){flag |= flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator & (F_external_semaphore_feature flag_){return flag & flag_.flag;}
F_external_semaphore_feature& F_external_semaphore_feature::operator &= (F_external_semaphore_feature flag_){flag &= flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator ^ (F_external_semaphore_feature flag_){return flag ^ flag_.flag;}
F_external_semaphore_feature& F_external_semaphore_feature::operator ^= (F_external_semaphore_feature flag_){flag ^= flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator ~ (){return all_flags().flag^flag;}
bool F_external_semaphore_feature::operator !(){return !flag;}
bool F_external_semaphore_feature::operator == (F_external_semaphore_feature flag_){return flag == flag_.flag;}
bool F_external_semaphore_feature::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_semaphore_feature::operator != (F_external_semaphore_feature flag_){return flag != flag_.flag;}
bool F_external_semaphore_feature::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_semaphore_feature::operator bool(){return !!flag;}
F_external_semaphore_feature& F_external_semaphore_feature::clear(){flag = 0;return *this;}
F_external_semaphore_feature operator|(F_external_semaphore_feature::Bits bit1_, F_external_semaphore_feature::Bits bit2_){F_external_semaphore_feature flags(bit1_);return flags | bit2_;}
F_external_semaphore_feature::F_external_semaphore_feature(int flags_):flag(flags_) {}
F_external_semaphore_feature F_external_semaphore_feature::all_flags(){
 return VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT | 
VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT | 
VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR | 
VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR;
}
F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_on(){ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT; return *this; }F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT; return *this; }F_external_semaphore_feature& F_external_semaphore_feature::e_importable_on(){ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT; return *this; }F_external_semaphore_feature& F_external_semaphore_feature::e_importable_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT; return *this; }F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_khr_on(){ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR; return *this; }F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_khr_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR; return *this; }F_external_semaphore_feature& F_external_semaphore_feature::e_importable_khr_on(){ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR; return *this; }F_external_semaphore_feature& F_external_semaphore_feature::e_importable_khr_off(){ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR; return *this; }

F_external_fence_handle_type::F_external_fence_handle_type():flag(0){}
F_external_fence_handle_type::F_external_fence_handle_type(F_external_fence_handle_type::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_fence_handle_type::F_external_fence_handle_type(F_external_fence_handle_type const& flag_):flag(flag_.flag){}
F_external_fence_handle_type::F_external_fence_handle_type(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_fence_handle_type& F_external_fence_handle_type::operator = (F_external_fence_handle_type flag_){flag = flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_fence_handle_type& F_external_fence_handle_type::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator | (F_external_fence_handle_type flag_){return flag | flag_.flag;}
F_external_fence_handle_type& F_external_fence_handle_type::operator |= (F_external_fence_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator & (F_external_fence_handle_type flag_){return flag & flag_.flag;}
F_external_fence_handle_type& F_external_fence_handle_type::operator &= (F_external_fence_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator ^ (F_external_fence_handle_type flag_){return flag ^ flag_.flag;}
F_external_fence_handle_type& F_external_fence_handle_type::operator ^= (F_external_fence_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator ~ (){return all_flags().flag^flag;}
bool F_external_fence_handle_type::operator !(){return !flag;}
bool F_external_fence_handle_type::operator == (F_external_fence_handle_type flag_){return flag == flag_.flag;}
bool F_external_fence_handle_type::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_fence_handle_type::operator != (F_external_fence_handle_type flag_){return flag != flag_.flag;}
bool F_external_fence_handle_type::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_fence_handle_type::operator bool(){return !!flag;}
F_external_fence_handle_type& F_external_fence_handle_type::clear(){flag = 0;return *this;}
F_external_fence_handle_type operator|(F_external_fence_handle_type::Bits bit1_, F_external_fence_handle_type::Bits bit2_){F_external_fence_handle_type flags(bit1_);return flags | bit2_;}
F_external_fence_handle_type::F_external_fence_handle_type(int flags_):flag(flags_) {}
F_external_fence_handle_type F_external_fence_handle_type::all_flags(){
 return VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
}
F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_kmt_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_kmt_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_sync_fd_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_sync_fd_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_khr_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_khr_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_khr_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_khr_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_kmt_khr_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_win32_kmt_khr_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_sync_fd_khr_on(){ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR; return *this; }F_external_fence_handle_type& F_external_fence_handle_type::e_sync_fd_khr_off(){ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR; return *this; }

F_external_fence_feature::F_external_fence_feature():flag(0){}
F_external_fence_feature::F_external_fence_feature(F_external_fence_feature::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_fence_feature::F_external_fence_feature(F_external_fence_feature const& flag_):flag(flag_.flag){}
F_external_fence_feature::F_external_fence_feature(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_fence_feature& F_external_fence_feature::operator = (F_external_fence_feature flag_){flag = flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_fence_feature& F_external_fence_feature::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_fence_feature F_external_fence_feature::operator | (F_external_fence_feature flag_){return flag | flag_.flag;}
F_external_fence_feature& F_external_fence_feature::operator |= (F_external_fence_feature flag_){flag |= flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator & (F_external_fence_feature flag_){return flag & flag_.flag;}
F_external_fence_feature& F_external_fence_feature::operator &= (F_external_fence_feature flag_){flag &= flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator ^ (F_external_fence_feature flag_){return flag ^ flag_.flag;}
F_external_fence_feature& F_external_fence_feature::operator ^= (F_external_fence_feature flag_){flag ^= flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator ~ (){return all_flags().flag^flag;}
bool F_external_fence_feature::operator !(){return !flag;}
bool F_external_fence_feature::operator == (F_external_fence_feature flag_){return flag == flag_.flag;}
bool F_external_fence_feature::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_fence_feature::operator != (F_external_fence_feature flag_){return flag != flag_.flag;}
bool F_external_fence_feature::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_fence_feature::operator bool(){return !!flag;}
F_external_fence_feature& F_external_fence_feature::clear(){flag = 0;return *this;}
F_external_fence_feature operator|(F_external_fence_feature::Bits bit1_, F_external_fence_feature::Bits bit2_){F_external_fence_feature flags(bit1_);return flags | bit2_;}
F_external_fence_feature::F_external_fence_feature(int flags_):flag(flags_) {}
F_external_fence_feature F_external_fence_feature::all_flags(){
 return VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT | 
VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT | 
VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR | 
VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR;
}
F_external_fence_feature& F_external_fence_feature::e_exportable_on(){ flag |= VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT; return *this; }F_external_fence_feature& F_external_fence_feature::e_exportable_off(){ flag &= ~VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT; return *this; }F_external_fence_feature& F_external_fence_feature::e_importable_on(){ flag |= VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT; return *this; }F_external_fence_feature& F_external_fence_feature::e_importable_off(){ flag &= ~VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT; return *this; }F_external_fence_feature& F_external_fence_feature::e_exportable_khr_on(){ flag |= VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR; return *this; }F_external_fence_feature& F_external_fence_feature::e_exportable_khr_off(){ flag &= ~VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR; return *this; }F_external_fence_feature& F_external_fence_feature::e_importable_khr_on(){ flag |= VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR; return *this; }F_external_fence_feature& F_external_fence_feature::e_importable_khr_off(){ flag &= ~VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR; return *this; }

F_debug_utils_message_severityEXT::F_debug_utils_message_severityEXT():flag(0){}
F_debug_utils_message_severityEXT::F_debug_utils_message_severityEXT(F_debug_utils_message_severityEXT::Bits bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_severityEXT::F_debug_utils_message_severityEXT(F_debug_utils_message_severityEXT const& flag_):flag(flag_.flag){}
F_debug_utils_message_severityEXT::F_debug_utils_message_severityEXT(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::operator = (F_debug_utils_message_severityEXT flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_severityEXT F_debug_utils_message_severityEXT::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_severityEXT F_debug_utils_message_severityEXT::operator | (F_debug_utils_message_severityEXT flag_){return flag | flag_.flag;}
F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::operator |= (F_debug_utils_message_severityEXT flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_severityEXT F_debug_utils_message_severityEXT::operator & (F_debug_utils_message_severityEXT flag_){return flag & flag_.flag;}
F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::operator &= (F_debug_utils_message_severityEXT flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_severityEXT F_debug_utils_message_severityEXT::operator ^ (F_debug_utils_message_severityEXT flag_){return flag ^ flag_.flag;}
F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::operator ^= (F_debug_utils_message_severityEXT flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_severityEXT F_debug_utils_message_severityEXT::operator ~ (){return all_flags().flag^flag;}
bool F_debug_utils_message_severityEXT::operator !(){return !flag;}
bool F_debug_utils_message_severityEXT::operator == (F_debug_utils_message_severityEXT flag_){return flag == flag_.flag;}
bool F_debug_utils_message_severityEXT::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_debug_utils_message_severityEXT::operator != (F_debug_utils_message_severityEXT flag_){return flag != flag_.flag;}
bool F_debug_utils_message_severityEXT::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_debug_utils_message_severityEXT::operator bool(){return !!flag;}
F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::clear(){flag = 0;return *this;}
F_debug_utils_message_severityEXT operator|(F_debug_utils_message_severityEXT::Bits bit1_, F_debug_utils_message_severityEXT::Bits bit2_){F_debug_utils_message_severityEXT flags(bit1_);return flags | bit2_;}
F_debug_utils_message_severityEXT::F_debug_utils_message_severityEXT(int flags_):flag(flags_) {}
F_debug_utils_message_severityEXT F_debug_utils_message_severityEXT::all_flags(){
 return VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
}
F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_verbose_ext_on(){ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT; return *this; }F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_verbose_ext_off(){ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT; return *this; }F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_info_ext_on(){ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT; return *this; }F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_info_ext_off(){ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT; return *this; }F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_warning_ext_on(){ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT; return *this; }F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_warning_ext_off(){ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT; return *this; }F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_error_ext_on(){ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT; return *this; }F_debug_utils_message_severityEXT& F_debug_utils_message_severityEXT::e_error_ext_off(){ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT; return *this; }

F_debug_utils_message_typeEXT::F_debug_utils_message_typeEXT():flag(0){}
F_debug_utils_message_typeEXT::F_debug_utils_message_typeEXT(F_debug_utils_message_typeEXT::Bits bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_typeEXT::F_debug_utils_message_typeEXT(F_debug_utils_message_typeEXT const& flag_):flag(flag_.flag){}
F_debug_utils_message_typeEXT::F_debug_utils_message_typeEXT(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::operator = (F_debug_utils_message_typeEXT flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_typeEXT F_debug_utils_message_typeEXT::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_typeEXT F_debug_utils_message_typeEXT::operator | (F_debug_utils_message_typeEXT flag_){return flag | flag_.flag;}
F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::operator |= (F_debug_utils_message_typeEXT flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_typeEXT F_debug_utils_message_typeEXT::operator & (F_debug_utils_message_typeEXT flag_){return flag & flag_.flag;}
F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::operator &= (F_debug_utils_message_typeEXT flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_typeEXT F_debug_utils_message_typeEXT::operator ^ (F_debug_utils_message_typeEXT flag_){return flag ^ flag_.flag;}
F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::operator ^= (F_debug_utils_message_typeEXT flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_typeEXT F_debug_utils_message_typeEXT::operator ~ (){return all_flags().flag^flag;}
bool F_debug_utils_message_typeEXT::operator !(){return !flag;}
bool F_debug_utils_message_typeEXT::operator == (F_debug_utils_message_typeEXT flag_){return flag == flag_.flag;}
bool F_debug_utils_message_typeEXT::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_debug_utils_message_typeEXT::operator != (F_debug_utils_message_typeEXT flag_){return flag != flag_.flag;}
bool F_debug_utils_message_typeEXT::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_debug_utils_message_typeEXT::operator bool(){return !!flag;}
F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::clear(){flag = 0;return *this;}
F_debug_utils_message_typeEXT operator|(F_debug_utils_message_typeEXT::Bits bit1_, F_debug_utils_message_typeEXT::Bits bit2_){F_debug_utils_message_typeEXT flags(bit1_);return flags | bit2_;}
F_debug_utils_message_typeEXT::F_debug_utils_message_typeEXT(int flags_):flag(flags_) {}
F_debug_utils_message_typeEXT F_debug_utils_message_typeEXT::all_flags(){
 return VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
}
F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::e_general_ext_on(){ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT; return *this; }F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::e_general_ext_off(){ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT; return *this; }F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::e_validation_ext_on(){ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT; return *this; }F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::e_validation_ext_off(){ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT; return *this; }F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::e_performance_ext_on(){ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT; return *this; }F_debug_utils_message_typeEXT& F_debug_utils_message_typeEXT::e_performance_ext_off(){ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT; return *this; }

F_debug_reportEXT::F_debug_reportEXT():flag(0){}
F_debug_reportEXT::F_debug_reportEXT(F_debug_reportEXT::Bits bits_):flag(static_cast<int>(bits_)){}
F_debug_reportEXT::F_debug_reportEXT(F_debug_reportEXT const& flag_):flag(flag_.flag){}
F_debug_reportEXT::F_debug_reportEXT(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_reportEXT& F_debug_reportEXT::operator = (F_debug_reportEXT flag_){flag = flag_.flag;return *this;}
F_debug_reportEXT F_debug_reportEXT::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_debug_reportEXT& F_debug_reportEXT::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_reportEXT F_debug_reportEXT::operator | (F_debug_reportEXT flag_){return flag | flag_.flag;}
F_debug_reportEXT& F_debug_reportEXT::operator |= (F_debug_reportEXT flag_){flag |= flag_.flag;return *this;}
F_debug_reportEXT F_debug_reportEXT::operator & (F_debug_reportEXT flag_){return flag & flag_.flag;}
F_debug_reportEXT& F_debug_reportEXT::operator &= (F_debug_reportEXT flag_){flag &= flag_.flag;return *this;}
F_debug_reportEXT F_debug_reportEXT::operator ^ (F_debug_reportEXT flag_){return flag ^ flag_.flag;}
F_debug_reportEXT& F_debug_reportEXT::operator ^= (F_debug_reportEXT flag_){flag ^= flag_.flag;return *this;}
F_debug_reportEXT F_debug_reportEXT::operator ~ (){return all_flags().flag^flag;}
bool F_debug_reportEXT::operator !(){return !flag;}
bool F_debug_reportEXT::operator == (F_debug_reportEXT flag_){return flag == flag_.flag;}
bool F_debug_reportEXT::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_debug_reportEXT::operator != (F_debug_reportEXT flag_){return flag != flag_.flag;}
bool F_debug_reportEXT::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_debug_reportEXT::operator bool(){return !!flag;}
F_debug_reportEXT& F_debug_reportEXT::clear(){flag = 0;return *this;}
F_debug_reportEXT operator|(F_debug_reportEXT::Bits bit1_, F_debug_reportEXT::Bits bit2_){F_debug_reportEXT flags(bit1_);return flags | bit2_;}
F_debug_reportEXT::F_debug_reportEXT(int flags_):flag(flags_) {}
F_debug_reportEXT F_debug_reportEXT::all_flags(){
 return VK_DEBUG_REPORT_INFORMATION_BIT_EXT | 
VK_DEBUG_REPORT_WARNING_BIT_EXT | 
VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT | 
VK_DEBUG_REPORT_ERROR_BIT_EXT | 
VK_DEBUG_REPORT_DEBUG_BIT_EXT;
}
F_debug_reportEXT& F_debug_reportEXT::e_information_ext_on(){ flag |= VK_DEBUG_REPORT_INFORMATION_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_information_ext_off(){ flag &= ~VK_DEBUG_REPORT_INFORMATION_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_warning_ext_on(){ flag |= VK_DEBUG_REPORT_WARNING_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_warning_ext_off(){ flag &= ~VK_DEBUG_REPORT_WARNING_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_performance_warning_ext_on(){ flag |= VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_performance_warning_ext_off(){ flag &= ~VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_error_ext_on(){ flag |= VK_DEBUG_REPORT_ERROR_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_error_ext_off(){ flag &= ~VK_DEBUG_REPORT_ERROR_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_debug_ext_on(){ flag |= VK_DEBUG_REPORT_DEBUG_BIT_EXT; return *this; }F_debug_reportEXT& F_debug_reportEXT::e_debug_ext_off(){ flag &= ~VK_DEBUG_REPORT_DEBUG_BIT_EXT; return *this; }


}}

