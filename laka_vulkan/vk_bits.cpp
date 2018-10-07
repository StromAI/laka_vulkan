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
F_cull_mode::F_cull_mode():flag(0){}
F_cull_mode::F_cull_mode(F_cull_mode::B bits_):flag(static_cast<int>(bits_)){}
F_cull_mode::F_cull_mode(F_cull_mode const& flag_):flag(flag_.flag){}
F_cull_mode::F_cull_mode(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_cull_mode& F_cull_mode::operator = (F_cull_mode flag_){flag = flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_cull_mode& F_cull_mode::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_cull_mode F_cull_mode::operator | (F_cull_mode flag_){return flag | flag_.flag;}
F_cull_mode& F_cull_mode::operator |= (F_cull_mode flag_){flag |= flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator & (F_cull_mode flag_){return flag & flag_.flag;}
F_cull_mode& F_cull_mode::operator &= (F_cull_mode flag_){flag &= flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator ^ (F_cull_mode flag_){return flag ^ flag_.flag;}
F_cull_mode& F_cull_mode::operator ^= (F_cull_mode flag_){flag ^= flag_.flag;return *this;}
F_cull_mode F_cull_mode::operator ~ (){return all_flags().flag^flag;}
bool F_cull_mode::operator !(){return !flag;}
bool F_cull_mode::operator == (F_cull_mode flag_){return flag == flag_.flag;}
bool F_cull_mode::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_cull_mode::operator != (F_cull_mode flag_){return flag != flag_.flag;}
bool F_cull_mode::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_cull_mode::operator bool(){return !!flag;}
F_cull_mode& F_cull_mode::clear(){flag = 0;return *this;}
F_cull_mode operator|(F_cull_mode::B bit1_, F_cull_mode::B bit2_){F_cull_mode flags(bit1_);return flags | bit2_;}
F_cull_mode::F_cull_mode(int flags_):flag(flags_) {}
F_cull_mode F_cull_mode::all_flags(){
 return VK_CULL_MODE_NONE | 
VK_CULL_MODE_FRONT_BIT | 
VK_CULL_MODE_BACK_BIT | 
VK_CULL_MODE_FRONT_AND_BACK;
}
VkCullModeFlagBits F_cull_mode::get()
{ return (VkCullModeFlagBits)flag;}
F_cull_mode& F_cull_mode::on_none()
{ flag |= VK_CULL_MODE_NONE; return *this; }

F_cull_mode& F_cull_mode::off_none()
{ flag &= ~VK_CULL_MODE_NONE; return *this; }

F_cull_mode& F_cull_mode::on_front()
{ flag |= VK_CULL_MODE_FRONT_BIT; return *this; }

F_cull_mode& F_cull_mode::off_front()
{ flag &= ~VK_CULL_MODE_FRONT_BIT; return *this; }

F_cull_mode& F_cull_mode::on_back()
{ flag |= VK_CULL_MODE_BACK_BIT; return *this; }

F_cull_mode& F_cull_mode::off_back()
{ flag &= ~VK_CULL_MODE_BACK_BIT; return *this; }

F_cull_mode& F_cull_mode::on_front_and_back()
{ flag |= VK_CULL_MODE_FRONT_AND_BACK; return *this; }

F_cull_mode& F_cull_mode::off_front_and_back()
{ flag &= ~VK_CULL_MODE_FRONT_AND_BACK; return *this; }



F_queue::F_queue():flag(0){}
F_queue::F_queue(F_queue::B bits_):flag(static_cast<int>(bits_)){}
F_queue::F_queue(F_queue const& flag_):flag(flag_.flag){}
F_queue::F_queue(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_queue& F_queue::operator = (F_queue flag_){flag = flag_.flag;return *this;}
F_queue F_queue::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_queue& F_queue::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_queue F_queue::operator | (F_queue flag_){return flag | flag_.flag;}
F_queue& F_queue::operator |= (F_queue flag_){flag |= flag_.flag;return *this;}
F_queue F_queue::operator & (F_queue flag_){return flag & flag_.flag;}
F_queue& F_queue::operator &= (F_queue flag_){flag &= flag_.flag;return *this;}
F_queue F_queue::operator ^ (F_queue flag_){return flag ^ flag_.flag;}
F_queue& F_queue::operator ^= (F_queue flag_){flag ^= flag_.flag;return *this;}
F_queue F_queue::operator ~ (){return all_flags().flag^flag;}
bool F_queue::operator !(){return !flag;}
bool F_queue::operator == (F_queue flag_){return flag == flag_.flag;}
bool F_queue::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_queue::operator != (F_queue flag_){return flag != flag_.flag;}
bool F_queue::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_queue::operator bool(){return !!flag;}
F_queue& F_queue::clear(){flag = 0;return *this;}
F_queue operator|(F_queue::B bit1_, F_queue::B bit2_){F_queue flags(bit1_);return flags | bit2_;}
F_queue::F_queue(int flags_):flag(flags_) {}
F_queue F_queue::all_flags(){
 return VK_QUEUE_GRAPHICS_BIT | 
VK_QUEUE_COMPUTE_BIT | 
VK_QUEUE_TRANSFER_BIT | 
VK_QUEUE_SPARSE_BINDING_BIT;
}
VkQueueFlagBits F_queue::get()
{ return (VkQueueFlagBits)flag;}
F_queue& F_queue::on_graphics()
{ flag |= VK_QUEUE_GRAPHICS_BIT; return *this; }

F_queue& F_queue::off_graphics()
{ flag &= ~VK_QUEUE_GRAPHICS_BIT; return *this; }

F_queue& F_queue::on_compute()
{ flag |= VK_QUEUE_COMPUTE_BIT; return *this; }

F_queue& F_queue::off_compute()
{ flag &= ~VK_QUEUE_COMPUTE_BIT; return *this; }

F_queue& F_queue::on_transfer()
{ flag |= VK_QUEUE_TRANSFER_BIT; return *this; }

F_queue& F_queue::off_transfer()
{ flag &= ~VK_QUEUE_TRANSFER_BIT; return *this; }

F_queue& F_queue::on_sparse_binding()
{ flag |= VK_QUEUE_SPARSE_BINDING_BIT; return *this; }

F_queue& F_queue::off_sparse_binding()
{ flag &= ~VK_QUEUE_SPARSE_BINDING_BIT; return *this; }



F_memory_property::F_memory_property():flag(0){}
F_memory_property::F_memory_property(F_memory_property::B bits_):flag(static_cast<int>(bits_)){}
F_memory_property::F_memory_property(F_memory_property const& flag_):flag(flag_.flag){}
F_memory_property::F_memory_property(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_property& F_memory_property::operator = (F_memory_property flag_){flag = flag_.flag;return *this;}
F_memory_property F_memory_property::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_memory_property& F_memory_property::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_property F_memory_property::operator | (F_memory_property flag_){return flag | flag_.flag;}
F_memory_property& F_memory_property::operator |= (F_memory_property flag_){flag |= flag_.flag;return *this;}
F_memory_property F_memory_property::operator & (F_memory_property flag_){return flag & flag_.flag;}
F_memory_property& F_memory_property::operator &= (F_memory_property flag_){flag &= flag_.flag;return *this;}
F_memory_property F_memory_property::operator ^ (F_memory_property flag_){return flag ^ flag_.flag;}
F_memory_property& F_memory_property::operator ^= (F_memory_property flag_){flag ^= flag_.flag;return *this;}
F_memory_property F_memory_property::operator ~ (){return all_flags().flag^flag;}
bool F_memory_property::operator !(){return !flag;}
bool F_memory_property::operator == (F_memory_property flag_){return flag == flag_.flag;}
bool F_memory_property::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_memory_property::operator != (F_memory_property flag_){return flag != flag_.flag;}
bool F_memory_property::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_memory_property::operator bool(){return !!flag;}
F_memory_property& F_memory_property::clear(){flag = 0;return *this;}
F_memory_property operator|(F_memory_property::B bit1_, F_memory_property::B bit2_){F_memory_property flags(bit1_);return flags | bit2_;}
F_memory_property::F_memory_property(int flags_):flag(flags_) {}
F_memory_property F_memory_property::all_flags(){
 return VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT | 
VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | 
VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | 
VK_MEMORY_PROPERTY_HOST_CACHED_BIT | 
VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT;
}
VkMemoryPropertyFlagBits F_memory_property::get()
{ return (VkMemoryPropertyFlagBits)flag;}
F_memory_property& F_memory_property::on_device_local()
{ flag |= VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT; return *this; }

F_memory_property& F_memory_property::off_device_local()
{ flag &= ~VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT; return *this; }

F_memory_property& F_memory_property::on_host_visible()
{ flag |= VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT; return *this; }

F_memory_property& F_memory_property::off_host_visible()
{ flag &= ~VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT; return *this; }

F_memory_property& F_memory_property::on_host_coherent()
{ flag |= VK_MEMORY_PROPERTY_HOST_COHERENT_BIT; return *this; }

F_memory_property& F_memory_property::off_host_coherent()
{ flag &= ~VK_MEMORY_PROPERTY_HOST_COHERENT_BIT; return *this; }

F_memory_property& F_memory_property::on_host_cached()
{ flag |= VK_MEMORY_PROPERTY_HOST_CACHED_BIT; return *this; }

F_memory_property& F_memory_property::off_host_cached()
{ flag &= ~VK_MEMORY_PROPERTY_HOST_CACHED_BIT; return *this; }

F_memory_property& F_memory_property::on_lazily_allocated()
{ flag |= VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT; return *this; }

F_memory_property& F_memory_property::off_lazily_allocated()
{ flag &= ~VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT; return *this; }



F_memory_heap::F_memory_heap():flag(0){}
F_memory_heap::F_memory_heap(F_memory_heap::B bits_):flag(static_cast<int>(bits_)){}
F_memory_heap::F_memory_heap(F_memory_heap const& flag_):flag(flag_.flag){}
F_memory_heap::F_memory_heap(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_heap& F_memory_heap::operator = (F_memory_heap flag_){flag = flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_memory_heap& F_memory_heap::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_heap F_memory_heap::operator | (F_memory_heap flag_){return flag | flag_.flag;}
F_memory_heap& F_memory_heap::operator |= (F_memory_heap flag_){flag |= flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator & (F_memory_heap flag_){return flag & flag_.flag;}
F_memory_heap& F_memory_heap::operator &= (F_memory_heap flag_){flag &= flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator ^ (F_memory_heap flag_){return flag ^ flag_.flag;}
F_memory_heap& F_memory_heap::operator ^= (F_memory_heap flag_){flag ^= flag_.flag;return *this;}
F_memory_heap F_memory_heap::operator ~ (){return all_flags().flag^flag;}
bool F_memory_heap::operator !(){return !flag;}
bool F_memory_heap::operator == (F_memory_heap flag_){return flag == flag_.flag;}
bool F_memory_heap::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_memory_heap::operator != (F_memory_heap flag_){return flag != flag_.flag;}
bool F_memory_heap::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_memory_heap::operator bool(){return !!flag;}
F_memory_heap& F_memory_heap::clear(){flag = 0;return *this;}
F_memory_heap operator|(F_memory_heap::B bit1_, F_memory_heap::B bit2_){F_memory_heap flags(bit1_);return flags | bit2_;}
F_memory_heap::F_memory_heap(int flags_):flag(flags_) {}
F_memory_heap F_memory_heap::all_flags(){
 return VK_MEMORY_HEAP_DEVICE_LOCAL_BIT;
}
VkMemoryHeapFlagBits F_memory_heap::get()
{ return (VkMemoryHeapFlagBits)flag;}
F_memory_heap& F_memory_heap::on_device_local()
{ flag |= VK_MEMORY_HEAP_DEVICE_LOCAL_BIT; return *this; }

F_memory_heap& F_memory_heap::off_device_local()
{ flag &= ~VK_MEMORY_HEAP_DEVICE_LOCAL_BIT; return *this; }



F_access::F_access():flag(0){}
F_access::F_access(F_access::B bits_):flag(static_cast<int>(bits_)){}
F_access::F_access(F_access const& flag_):flag(flag_.flag){}
F_access::F_access(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_access& F_access::operator = (F_access flag_){flag = flag_.flag;return *this;}
F_access F_access::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_access& F_access::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_access F_access::operator | (F_access flag_){return flag | flag_.flag;}
F_access& F_access::operator |= (F_access flag_){flag |= flag_.flag;return *this;}
F_access F_access::operator & (F_access flag_){return flag & flag_.flag;}
F_access& F_access::operator &= (F_access flag_){flag &= flag_.flag;return *this;}
F_access F_access::operator ^ (F_access flag_){return flag ^ flag_.flag;}
F_access& F_access::operator ^= (F_access flag_){flag ^= flag_.flag;return *this;}
F_access F_access::operator ~ (){return all_flags().flag^flag;}
bool F_access::operator !(){return !flag;}
bool F_access::operator == (F_access flag_){return flag == flag_.flag;}
bool F_access::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_access::operator != (F_access flag_){return flag != flag_.flag;}
bool F_access::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_access::operator bool(){return !!flag;}
F_access& F_access::clear(){flag = 0;return *this;}
F_access operator|(F_access::B bit1_, F_access::B bit2_){F_access flags(bit1_);return flags | bit2_;}
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
VK_ACCESS_MEMORY_WRITE_BIT;
}
VkAccessFlagBits F_access::get()
{ return (VkAccessFlagBits)flag;}
F_access& F_access::on_indirect_command_read()
{ flag |= VK_ACCESS_INDIRECT_COMMAND_READ_BIT; return *this; }

F_access& F_access::off_indirect_command_read()
{ flag &= ~VK_ACCESS_INDIRECT_COMMAND_READ_BIT; return *this; }

F_access& F_access::on_index_read()
{ flag |= VK_ACCESS_INDEX_READ_BIT; return *this; }

F_access& F_access::off_index_read()
{ flag &= ~VK_ACCESS_INDEX_READ_BIT; return *this; }

F_access& F_access::on_vertex_attribute_read()
{ flag |= VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT; return *this; }

F_access& F_access::off_vertex_attribute_read()
{ flag &= ~VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT; return *this; }

F_access& F_access::on_uniform_read()
{ flag |= VK_ACCESS_UNIFORM_READ_BIT; return *this; }

F_access& F_access::off_uniform_read()
{ flag &= ~VK_ACCESS_UNIFORM_READ_BIT; return *this; }

F_access& F_access::on_input_attachment_read()
{ flag |= VK_ACCESS_INPUT_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::off_input_attachment_read()
{ flag &= ~VK_ACCESS_INPUT_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::on_shader_read()
{ flag |= VK_ACCESS_SHADER_READ_BIT; return *this; }

F_access& F_access::off_shader_read()
{ flag &= ~VK_ACCESS_SHADER_READ_BIT; return *this; }

F_access& F_access::on_shader_write()
{ flag |= VK_ACCESS_SHADER_WRITE_BIT; return *this; }

F_access& F_access::off_shader_write()
{ flag &= ~VK_ACCESS_SHADER_WRITE_BIT; return *this; }

F_access& F_access::on_color_attachment_read()
{ flag |= VK_ACCESS_COLOR_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::off_color_attachment_read()
{ flag &= ~VK_ACCESS_COLOR_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::on_color_attachment_write()
{ flag |= VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::off_color_attachment_write()
{ flag &= ~VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::on_depth_stencil_attachment_read()
{ flag |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::off_depth_stencil_attachment_read()
{ flag &= ~VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::on_depth_stencil_attachment_write()
{ flag |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::off_depth_stencil_attachment_write()
{ flag &= ~VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::on_transfer_read()
{ flag |= VK_ACCESS_TRANSFER_READ_BIT; return *this; }

F_access& F_access::off_transfer_read()
{ flag &= ~VK_ACCESS_TRANSFER_READ_BIT; return *this; }

F_access& F_access::on_transfer_write()
{ flag |= VK_ACCESS_TRANSFER_WRITE_BIT; return *this; }

F_access& F_access::off_transfer_write()
{ flag &= ~VK_ACCESS_TRANSFER_WRITE_BIT; return *this; }

F_access& F_access::on_host_read()
{ flag |= VK_ACCESS_HOST_READ_BIT; return *this; }

F_access& F_access::off_host_read()
{ flag &= ~VK_ACCESS_HOST_READ_BIT; return *this; }

F_access& F_access::on_host_write()
{ flag |= VK_ACCESS_HOST_WRITE_BIT; return *this; }

F_access& F_access::off_host_write()
{ flag &= ~VK_ACCESS_HOST_WRITE_BIT; return *this; }

F_access& F_access::on_memory_read()
{ flag |= VK_ACCESS_MEMORY_READ_BIT; return *this; }

F_access& F_access::off_memory_read()
{ flag &= ~VK_ACCESS_MEMORY_READ_BIT; return *this; }

F_access& F_access::on_memory_write()
{ flag |= VK_ACCESS_MEMORY_WRITE_BIT; return *this; }

F_access& F_access::off_memory_write()
{ flag &= ~VK_ACCESS_MEMORY_WRITE_BIT; return *this; }



F_buffer_usage::F_buffer_usage():flag(0){}
F_buffer_usage::F_buffer_usage(F_buffer_usage::B bits_):flag(static_cast<int>(bits_)){}
F_buffer_usage::F_buffer_usage(F_buffer_usage const& flag_):flag(flag_.flag){}
F_buffer_usage::F_buffer_usage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_buffer_usage& F_buffer_usage::operator = (F_buffer_usage flag_){flag = flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_buffer_usage& F_buffer_usage::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_buffer_usage F_buffer_usage::operator | (F_buffer_usage flag_){return flag | flag_.flag;}
F_buffer_usage& F_buffer_usage::operator |= (F_buffer_usage flag_){flag |= flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator & (F_buffer_usage flag_){return flag & flag_.flag;}
F_buffer_usage& F_buffer_usage::operator &= (F_buffer_usage flag_){flag &= flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator ^ (F_buffer_usage flag_){return flag ^ flag_.flag;}
F_buffer_usage& F_buffer_usage::operator ^= (F_buffer_usage flag_){flag ^= flag_.flag;return *this;}
F_buffer_usage F_buffer_usage::operator ~ (){return all_flags().flag^flag;}
bool F_buffer_usage::operator !(){return !flag;}
bool F_buffer_usage::operator == (F_buffer_usage flag_){return flag == flag_.flag;}
bool F_buffer_usage::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_buffer_usage::operator != (F_buffer_usage flag_){return flag != flag_.flag;}
bool F_buffer_usage::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_buffer_usage::operator bool(){return !!flag;}
F_buffer_usage& F_buffer_usage::clear(){flag = 0;return *this;}
F_buffer_usage operator|(F_buffer_usage::B bit1_, F_buffer_usage::B bit2_){F_buffer_usage flags(bit1_);return flags | bit2_;}
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
VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT;
}
VkBufferUsageFlagBits F_buffer_usage::get()
{ return (VkBufferUsageFlagBits)flag;}
F_buffer_usage& F_buffer_usage::on_transfer_src()
{ flag |= VK_BUFFER_USAGE_TRANSFER_SRC_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_transfer_src()
{ flag &= ~VK_BUFFER_USAGE_TRANSFER_SRC_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_transfer_dst()
{ flag |= VK_BUFFER_USAGE_TRANSFER_DST_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_transfer_dst()
{ flag &= ~VK_BUFFER_USAGE_TRANSFER_DST_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_uniform_texel_buffer()
{ flag |= VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_uniform_texel_buffer()
{ flag &= ~VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_storage_texel_buffer()
{ flag |= VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_storage_texel_buffer()
{ flag &= ~VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_uniform_buffer()
{ flag |= VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_uniform_buffer()
{ flag &= ~VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_storage_buffer()
{ flag |= VK_BUFFER_USAGE_STORAGE_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_storage_buffer()
{ flag &= ~VK_BUFFER_USAGE_STORAGE_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_index_buffer()
{ flag |= VK_BUFFER_USAGE_INDEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_index_buffer()
{ flag &= ~VK_BUFFER_USAGE_INDEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_vertex_buffer()
{ flag |= VK_BUFFER_USAGE_VERTEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_vertex_buffer()
{ flag &= ~VK_BUFFER_USAGE_VERTEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::on_indirect_buffer()
{ flag |= VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::off_indirect_buffer()
{ flag &= ~VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT; return *this; }



F_buffer_create::F_buffer_create():flag(0){}
F_buffer_create::F_buffer_create(F_buffer_create::B bits_):flag(static_cast<int>(bits_)){}
F_buffer_create::F_buffer_create(F_buffer_create const& flag_):flag(flag_.flag){}
F_buffer_create::F_buffer_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_buffer_create& F_buffer_create::operator = (F_buffer_create flag_){flag = flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_buffer_create& F_buffer_create::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_buffer_create F_buffer_create::operator | (F_buffer_create flag_){return flag | flag_.flag;}
F_buffer_create& F_buffer_create::operator |= (F_buffer_create flag_){flag |= flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator & (F_buffer_create flag_){return flag & flag_.flag;}
F_buffer_create& F_buffer_create::operator &= (F_buffer_create flag_){flag &= flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator ^ (F_buffer_create flag_){return flag ^ flag_.flag;}
F_buffer_create& F_buffer_create::operator ^= (F_buffer_create flag_){flag ^= flag_.flag;return *this;}
F_buffer_create F_buffer_create::operator ~ (){return all_flags().flag^flag;}
bool F_buffer_create::operator !(){return !flag;}
bool F_buffer_create::operator == (F_buffer_create flag_){return flag == flag_.flag;}
bool F_buffer_create::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_buffer_create::operator != (F_buffer_create flag_){return flag != flag_.flag;}
bool F_buffer_create::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_buffer_create::operator bool(){return !!flag;}
F_buffer_create& F_buffer_create::clear(){flag = 0;return *this;}
F_buffer_create operator|(F_buffer_create::B bit1_, F_buffer_create::B bit2_){F_buffer_create flags(bit1_);return flags | bit2_;}
F_buffer_create::F_buffer_create(int flags_):flag(flags_) {}
F_buffer_create F_buffer_create::all_flags(){
 return VK_BUFFER_CREATE_SPARSE_BINDING_BIT | 
VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT | 
VK_BUFFER_CREATE_SPARSE_ALIASED_BIT;
}
VkBufferCreateFlagBits F_buffer_create::get()
{ return (VkBufferCreateFlagBits)flag;}
F_buffer_create& F_buffer_create::on_sparse_binding()
{ flag |= VK_BUFFER_CREATE_SPARSE_BINDING_BIT; return *this; }

F_buffer_create& F_buffer_create::off_sparse_binding()
{ flag &= ~VK_BUFFER_CREATE_SPARSE_BINDING_BIT; return *this; }

F_buffer_create& F_buffer_create::on_sparse_residency()
{ flag |= VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_buffer_create& F_buffer_create::off_sparse_residency()
{ flag &= ~VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_buffer_create& F_buffer_create::on_sparse_aliased()
{ flag |= VK_BUFFER_CREATE_SPARSE_ALIASED_BIT; return *this; }

F_buffer_create& F_buffer_create::off_sparse_aliased()
{ flag &= ~VK_BUFFER_CREATE_SPARSE_ALIASED_BIT; return *this; }



F_shader_stage::F_shader_stage():flag(0){}
F_shader_stage::F_shader_stage(F_shader_stage::B bits_):flag(static_cast<int>(bits_)){}
F_shader_stage::F_shader_stage(F_shader_stage const& flag_):flag(flag_.flag){}
F_shader_stage::F_shader_stage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_shader_stage& F_shader_stage::operator = (F_shader_stage flag_){flag = flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_shader_stage& F_shader_stage::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_shader_stage F_shader_stage::operator | (F_shader_stage flag_){return flag | flag_.flag;}
F_shader_stage& F_shader_stage::operator |= (F_shader_stage flag_){flag |= flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator & (F_shader_stage flag_){return flag & flag_.flag;}
F_shader_stage& F_shader_stage::operator &= (F_shader_stage flag_){flag &= flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator ^ (F_shader_stage flag_){return flag ^ flag_.flag;}
F_shader_stage& F_shader_stage::operator ^= (F_shader_stage flag_){flag ^= flag_.flag;return *this;}
F_shader_stage F_shader_stage::operator ~ (){return all_flags().flag^flag;}
bool F_shader_stage::operator !(){return !flag;}
bool F_shader_stage::operator == (F_shader_stage flag_){return flag == flag_.flag;}
bool F_shader_stage::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_shader_stage::operator != (F_shader_stage flag_){return flag != flag_.flag;}
bool F_shader_stage::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_shader_stage::operator bool(){return !!flag;}
F_shader_stage& F_shader_stage::clear(){flag = 0;return *this;}
F_shader_stage operator|(F_shader_stage::B bit1_, F_shader_stage::B bit2_){F_shader_stage flags(bit1_);return flags | bit2_;}
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
VkShaderStageFlagBits F_shader_stage::get()
{ return (VkShaderStageFlagBits)flag;}
F_shader_stage& F_shader_stage::on_vertex()
{ flag |= VK_SHADER_STAGE_VERTEX_BIT; return *this; }

F_shader_stage& F_shader_stage::off_vertex()
{ flag &= ~VK_SHADER_STAGE_VERTEX_BIT; return *this; }

F_shader_stage& F_shader_stage::on_tessellation_control()
{ flag |= VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT; return *this; }

F_shader_stage& F_shader_stage::off_tessellation_control()
{ flag &= ~VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT; return *this; }

F_shader_stage& F_shader_stage::on_tessellation_evaluation()
{ flag |= VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT; return *this; }

F_shader_stage& F_shader_stage::off_tessellation_evaluation()
{ flag &= ~VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT; return *this; }

F_shader_stage& F_shader_stage::on_geometry()
{ flag |= VK_SHADER_STAGE_GEOMETRY_BIT; return *this; }

F_shader_stage& F_shader_stage::off_geometry()
{ flag &= ~VK_SHADER_STAGE_GEOMETRY_BIT; return *this; }

F_shader_stage& F_shader_stage::on_fragment()
{ flag |= VK_SHADER_STAGE_FRAGMENT_BIT; return *this; }

F_shader_stage& F_shader_stage::off_fragment()
{ flag &= ~VK_SHADER_STAGE_FRAGMENT_BIT; return *this; }

F_shader_stage& F_shader_stage::on_compute()
{ flag |= VK_SHADER_STAGE_COMPUTE_BIT; return *this; }

F_shader_stage& F_shader_stage::off_compute()
{ flag &= ~VK_SHADER_STAGE_COMPUTE_BIT; return *this; }

F_shader_stage& F_shader_stage::on_all_graphics()
{ flag |= VK_SHADER_STAGE_ALL_GRAPHICS; return *this; }

F_shader_stage& F_shader_stage::off_all_graphics()
{ flag &= ~VK_SHADER_STAGE_ALL_GRAPHICS; return *this; }

F_shader_stage& F_shader_stage::on_all()
{ flag |= VK_SHADER_STAGE_ALL; return *this; }

F_shader_stage& F_shader_stage::off_all()
{ flag &= ~VK_SHADER_STAGE_ALL; return *this; }



F_image_usage::F_image_usage():flag(0){}
F_image_usage::F_image_usage(F_image_usage::B bits_):flag(static_cast<int>(bits_)){}
F_image_usage::F_image_usage(F_image_usage const& flag_):flag(flag_.flag){}
F_image_usage::F_image_usage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_usage& F_image_usage::operator = (F_image_usage flag_){flag = flag_.flag;return *this;}
F_image_usage F_image_usage::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_image_usage& F_image_usage::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_usage F_image_usage::operator | (F_image_usage flag_){return flag | flag_.flag;}
F_image_usage& F_image_usage::operator |= (F_image_usage flag_){flag |= flag_.flag;return *this;}
F_image_usage F_image_usage::operator & (F_image_usage flag_){return flag & flag_.flag;}
F_image_usage& F_image_usage::operator &= (F_image_usage flag_){flag &= flag_.flag;return *this;}
F_image_usage F_image_usage::operator ^ (F_image_usage flag_){return flag ^ flag_.flag;}
F_image_usage& F_image_usage::operator ^= (F_image_usage flag_){flag ^= flag_.flag;return *this;}
F_image_usage F_image_usage::operator ~ (){return all_flags().flag^flag;}
bool F_image_usage::operator !(){return !flag;}
bool F_image_usage::operator == (F_image_usage flag_){return flag == flag_.flag;}
bool F_image_usage::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_image_usage::operator != (F_image_usage flag_){return flag != flag_.flag;}
bool F_image_usage::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_image_usage::operator bool(){return !!flag;}
F_image_usage& F_image_usage::clear(){flag = 0;return *this;}
F_image_usage operator|(F_image_usage::B bit1_, F_image_usage::B bit2_){F_image_usage flags(bit1_);return flags | bit2_;}
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
VkImageUsageFlagBits F_image_usage::get()
{ return (VkImageUsageFlagBits)flag;}
F_image_usage& F_image_usage::on_transfer_src()
{ flag |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT; return *this; }

F_image_usage& F_image_usage::off_transfer_src()
{ flag &= ~VK_IMAGE_USAGE_TRANSFER_SRC_BIT; return *this; }

F_image_usage& F_image_usage::on_transfer_dst()
{ flag |= VK_IMAGE_USAGE_TRANSFER_DST_BIT; return *this; }

F_image_usage& F_image_usage::off_transfer_dst()
{ flag &= ~VK_IMAGE_USAGE_TRANSFER_DST_BIT; return *this; }

F_image_usage& F_image_usage::on_sampled()
{ flag |= VK_IMAGE_USAGE_SAMPLED_BIT; return *this; }

F_image_usage& F_image_usage::off_sampled()
{ flag &= ~VK_IMAGE_USAGE_SAMPLED_BIT; return *this; }

F_image_usage& F_image_usage::on_storage()
{ flag |= VK_IMAGE_USAGE_STORAGE_BIT; return *this; }

F_image_usage& F_image_usage::off_storage()
{ flag &= ~VK_IMAGE_USAGE_STORAGE_BIT; return *this; }

F_image_usage& F_image_usage::on_color_attachment()
{ flag |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::off_color_attachment()
{ flag &= ~VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::on_depth_stencil_attachment()
{ flag |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::off_depth_stencil_attachment()
{ flag &= ~VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::on_transient_attachment()
{ flag |= VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::off_transient_attachment()
{ flag &= ~VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::on_input_attachment()
{ flag |= VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::off_input_attachment()
{ flag &= ~VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT; return *this; }



F_image_create::F_image_create():flag(0){}
F_image_create::F_image_create(F_image_create::B bits_):flag(static_cast<int>(bits_)){}
F_image_create::F_image_create(F_image_create const& flag_):flag(flag_.flag){}
F_image_create::F_image_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_create& F_image_create::operator = (F_image_create flag_){flag = flag_.flag;return *this;}
F_image_create F_image_create::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_image_create& F_image_create::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_create F_image_create::operator | (F_image_create flag_){return flag | flag_.flag;}
F_image_create& F_image_create::operator |= (F_image_create flag_){flag |= flag_.flag;return *this;}
F_image_create F_image_create::operator & (F_image_create flag_){return flag & flag_.flag;}
F_image_create& F_image_create::operator &= (F_image_create flag_){flag &= flag_.flag;return *this;}
F_image_create F_image_create::operator ^ (F_image_create flag_){return flag ^ flag_.flag;}
F_image_create& F_image_create::operator ^= (F_image_create flag_){flag ^= flag_.flag;return *this;}
F_image_create F_image_create::operator ~ (){return all_flags().flag^flag;}
bool F_image_create::operator !(){return !flag;}
bool F_image_create::operator == (F_image_create flag_){return flag == flag_.flag;}
bool F_image_create::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_image_create::operator != (F_image_create flag_){return flag != flag_.flag;}
bool F_image_create::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_image_create::operator bool(){return !!flag;}
F_image_create& F_image_create::clear(){flag = 0;return *this;}
F_image_create operator|(F_image_create::B bit1_, F_image_create::B bit2_){F_image_create flags(bit1_);return flags | bit2_;}
F_image_create::F_image_create(int flags_):flag(flags_) {}
F_image_create F_image_create::all_flags(){
 return VK_IMAGE_CREATE_SPARSE_BINDING_BIT | 
VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT | 
VK_IMAGE_CREATE_SPARSE_ALIASED_BIT | 
VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT | 
VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
}
VkImageCreateFlagBits F_image_create::get()
{ return (VkImageCreateFlagBits)flag;}
F_image_create& F_image_create::on_sparse_binding()
{ flag |= VK_IMAGE_CREATE_SPARSE_BINDING_BIT; return *this; }

F_image_create& F_image_create::off_sparse_binding()
{ flag &= ~VK_IMAGE_CREATE_SPARSE_BINDING_BIT; return *this; }

F_image_create& F_image_create::on_sparse_residency()
{ flag |= VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_image_create& F_image_create::off_sparse_residency()
{ flag &= ~VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_image_create& F_image_create::on_sparse_aliased()
{ flag |= VK_IMAGE_CREATE_SPARSE_ALIASED_BIT; return *this; }

F_image_create& F_image_create::off_sparse_aliased()
{ flag &= ~VK_IMAGE_CREATE_SPARSE_ALIASED_BIT; return *this; }

F_image_create& F_image_create::on_mutable_format()
{ flag |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT; return *this; }

F_image_create& F_image_create::off_mutable_format()
{ flag &= ~VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT; return *this; }

F_image_create& F_image_create::on_cube_compatible()
{ flag |= VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT; return *this; }

F_image_create& F_image_create::off_cube_compatible()
{ flag &= ~VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT; return *this; }



F_pipeline_create::F_pipeline_create():flag(0){}
F_pipeline_create::F_pipeline_create(F_pipeline_create::B bits_):flag(static_cast<int>(bits_)){}
F_pipeline_create::F_pipeline_create(F_pipeline_create const& flag_):flag(flag_.flag){}
F_pipeline_create::F_pipeline_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_pipeline_create& F_pipeline_create::operator = (F_pipeline_create flag_){flag = flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_pipeline_create& F_pipeline_create::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_pipeline_create F_pipeline_create::operator | (F_pipeline_create flag_){return flag | flag_.flag;}
F_pipeline_create& F_pipeline_create::operator |= (F_pipeline_create flag_){flag |= flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator & (F_pipeline_create flag_){return flag & flag_.flag;}
F_pipeline_create& F_pipeline_create::operator &= (F_pipeline_create flag_){flag &= flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator ^ (F_pipeline_create flag_){return flag ^ flag_.flag;}
F_pipeline_create& F_pipeline_create::operator ^= (F_pipeline_create flag_){flag ^= flag_.flag;return *this;}
F_pipeline_create F_pipeline_create::operator ~ (){return all_flags().flag^flag;}
bool F_pipeline_create::operator !(){return !flag;}
bool F_pipeline_create::operator == (F_pipeline_create flag_){return flag == flag_.flag;}
bool F_pipeline_create::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_pipeline_create::operator != (F_pipeline_create flag_){return flag != flag_.flag;}
bool F_pipeline_create::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_pipeline_create::operator bool(){return !!flag;}
F_pipeline_create& F_pipeline_create::clear(){flag = 0;return *this;}
F_pipeline_create operator|(F_pipeline_create::B bit1_, F_pipeline_create::B bit2_){F_pipeline_create flags(bit1_);return flags | bit2_;}
F_pipeline_create::F_pipeline_create(int flags_):flag(flags_) {}
F_pipeline_create F_pipeline_create::all_flags(){
 return VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT | 
VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT | 
VK_PIPELINE_CREATE_DERIVATIVE_BIT;
}
VkPipelineCreateFlagBits F_pipeline_create::get()
{ return (VkPipelineCreateFlagBits)flag;}
F_pipeline_create& F_pipeline_create::on_disable_optimization()
{ flag |= VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT; return *this; }

F_pipeline_create& F_pipeline_create::off_disable_optimization()
{ flag &= ~VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT; return *this; }

F_pipeline_create& F_pipeline_create::on_allow_derivatives()
{ flag |= VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT; return *this; }

F_pipeline_create& F_pipeline_create::off_allow_derivatives()
{ flag &= ~VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT; return *this; }

F_pipeline_create& F_pipeline_create::on_derivative()
{ flag |= VK_PIPELINE_CREATE_DERIVATIVE_BIT; return *this; }

F_pipeline_create& F_pipeline_create::off_derivative()
{ flag &= ~VK_PIPELINE_CREATE_DERIVATIVE_BIT; return *this; }



F_color_component::F_color_component():flag(0){}
F_color_component::F_color_component(F_color_component::B bits_):flag(static_cast<int>(bits_)){}
F_color_component::F_color_component(F_color_component const& flag_):flag(flag_.flag){}
F_color_component::F_color_component(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_color_component& F_color_component::operator = (F_color_component flag_){flag = flag_.flag;return *this;}
F_color_component F_color_component::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_color_component& F_color_component::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_color_component F_color_component::operator | (F_color_component flag_){return flag | flag_.flag;}
F_color_component& F_color_component::operator |= (F_color_component flag_){flag |= flag_.flag;return *this;}
F_color_component F_color_component::operator & (F_color_component flag_){return flag & flag_.flag;}
F_color_component& F_color_component::operator &= (F_color_component flag_){flag &= flag_.flag;return *this;}
F_color_component F_color_component::operator ^ (F_color_component flag_){return flag ^ flag_.flag;}
F_color_component& F_color_component::operator ^= (F_color_component flag_){flag ^= flag_.flag;return *this;}
F_color_component F_color_component::operator ~ (){return all_flags().flag^flag;}
bool F_color_component::operator !(){return !flag;}
bool F_color_component::operator == (F_color_component flag_){return flag == flag_.flag;}
bool F_color_component::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_color_component::operator != (F_color_component flag_){return flag != flag_.flag;}
bool F_color_component::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_color_component::operator bool(){return !!flag;}
F_color_component& F_color_component::clear(){flag = 0;return *this;}
F_color_component operator|(F_color_component::B bit1_, F_color_component::B bit2_){F_color_component flags(bit1_);return flags | bit2_;}
F_color_component::F_color_component(int flags_):flag(flags_) {}
F_color_component F_color_component::all_flags(){
 return VK_COLOR_COMPONENT_R_BIT | 
VK_COLOR_COMPONENT_G_BIT | 
VK_COLOR_COMPONENT_B_BIT | 
VK_COLOR_COMPONENT_A_BIT;
}
VkColorComponentFlagBits F_color_component::get()
{ return (VkColorComponentFlagBits)flag;}
F_color_component& F_color_component::on_r()
{ flag |= VK_COLOR_COMPONENT_R_BIT; return *this; }

F_color_component& F_color_component::off_r()
{ flag &= ~VK_COLOR_COMPONENT_R_BIT; return *this; }

F_color_component& F_color_component::on_g()
{ flag |= VK_COLOR_COMPONENT_G_BIT; return *this; }

F_color_component& F_color_component::off_g()
{ flag &= ~VK_COLOR_COMPONENT_G_BIT; return *this; }

F_color_component& F_color_component::on_b()
{ flag |= VK_COLOR_COMPONENT_B_BIT; return *this; }

F_color_component& F_color_component::off_b()
{ flag &= ~VK_COLOR_COMPONENT_B_BIT; return *this; }

F_color_component& F_color_component::on_a()
{ flag |= VK_COLOR_COMPONENT_A_BIT; return *this; }

F_color_component& F_color_component::off_a()
{ flag &= ~VK_COLOR_COMPONENT_A_BIT; return *this; }



F_fence_create::F_fence_create():flag(0){}
F_fence_create::F_fence_create(F_fence_create::B bits_):flag(static_cast<int>(bits_)){}
F_fence_create::F_fence_create(F_fence_create const& flag_):flag(flag_.flag){}
F_fence_create::F_fence_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_fence_create& F_fence_create::operator = (F_fence_create flag_){flag = flag_.flag;return *this;}
F_fence_create F_fence_create::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_fence_create& F_fence_create::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_fence_create F_fence_create::operator | (F_fence_create flag_){return flag | flag_.flag;}
F_fence_create& F_fence_create::operator |= (F_fence_create flag_){flag |= flag_.flag;return *this;}
F_fence_create F_fence_create::operator & (F_fence_create flag_){return flag & flag_.flag;}
F_fence_create& F_fence_create::operator &= (F_fence_create flag_){flag &= flag_.flag;return *this;}
F_fence_create F_fence_create::operator ^ (F_fence_create flag_){return flag ^ flag_.flag;}
F_fence_create& F_fence_create::operator ^= (F_fence_create flag_){flag ^= flag_.flag;return *this;}
F_fence_create F_fence_create::operator ~ (){return all_flags().flag^flag;}
bool F_fence_create::operator !(){return !flag;}
bool F_fence_create::operator == (F_fence_create flag_){return flag == flag_.flag;}
bool F_fence_create::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_fence_create::operator != (F_fence_create flag_){return flag != flag_.flag;}
bool F_fence_create::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_fence_create::operator bool(){return !!flag;}
F_fence_create& F_fence_create::clear(){flag = 0;return *this;}
F_fence_create operator|(F_fence_create::B bit1_, F_fence_create::B bit2_){F_fence_create flags(bit1_);return flags | bit2_;}
F_fence_create::F_fence_create(int flags_):flag(flags_) {}
F_fence_create F_fence_create::all_flags(){
 return VK_FENCE_CREATE_SIGNALED_BIT;
}
VkFenceCreateFlagBits F_fence_create::get()
{ return (VkFenceCreateFlagBits)flag;}
F_fence_create& F_fence_create::on_signaled()
{ flag |= VK_FENCE_CREATE_SIGNALED_BIT; return *this; }

F_fence_create& F_fence_create::off_signaled()
{ flag &= ~VK_FENCE_CREATE_SIGNALED_BIT; return *this; }



F_format_feature::F_format_feature():flag(0){}
F_format_feature::F_format_feature(F_format_feature::B bits_):flag(static_cast<int>(bits_)){}
F_format_feature::F_format_feature(F_format_feature const& flag_):flag(flag_.flag){}
F_format_feature::F_format_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_format_feature& F_format_feature::operator = (F_format_feature flag_){flag = flag_.flag;return *this;}
F_format_feature F_format_feature::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_format_feature& F_format_feature::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_format_feature F_format_feature::operator | (F_format_feature flag_){return flag | flag_.flag;}
F_format_feature& F_format_feature::operator |= (F_format_feature flag_){flag |= flag_.flag;return *this;}
F_format_feature F_format_feature::operator & (F_format_feature flag_){return flag & flag_.flag;}
F_format_feature& F_format_feature::operator &= (F_format_feature flag_){flag &= flag_.flag;return *this;}
F_format_feature F_format_feature::operator ^ (F_format_feature flag_){return flag ^ flag_.flag;}
F_format_feature& F_format_feature::operator ^= (F_format_feature flag_){flag ^= flag_.flag;return *this;}
F_format_feature F_format_feature::operator ~ (){return all_flags().flag^flag;}
bool F_format_feature::operator !(){return !flag;}
bool F_format_feature::operator == (F_format_feature flag_){return flag == flag_.flag;}
bool F_format_feature::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_format_feature::operator != (F_format_feature flag_){return flag != flag_.flag;}
bool F_format_feature::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_format_feature::operator bool(){return !!flag;}
F_format_feature& F_format_feature::clear(){flag = 0;return *this;}
F_format_feature operator|(F_format_feature::B bit1_, F_format_feature::B bit2_){F_format_feature flags(bit1_);return flags | bit2_;}
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
VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT;
}
VkFormatFeatureFlagBits F_format_feature::get()
{ return (VkFormatFeatureFlagBits)flag;}
F_format_feature& F_format_feature::on_sampled_image()
{ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::off_sampled_image()
{ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::on_storage_image()
{ flag |= VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::off_storage_image()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::on_storage_image_atomic()
{ flag |= VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::off_storage_image_atomic()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::on_uniform_texel_buffer()
{ flag |= VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::off_uniform_texel_buffer()
{ flag &= ~VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::on_storage_texel_buffer()
{ flag |= VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::off_storage_texel_buffer()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::on_storage_texel_buffer_atomic()
{ flag |= VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::off_storage_texel_buffer_atomic()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::on_vertex_buffer()
{ flag |= VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::off_vertex_buffer()
{ flag &= ~VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::on_color_attachment()
{ flag |= VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::off_color_attachment()
{ flag &= ~VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::on_color_attachment_blend()
{ flag |= VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT; return *this; }

F_format_feature& F_format_feature::off_color_attachment_blend()
{ flag &= ~VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT; return *this; }

F_format_feature& F_format_feature::on_depth_stencil_attachment()
{ flag |= VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::off_depth_stencil_attachment()
{ flag &= ~VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::on_blit_src()
{ flag |= VK_FORMAT_FEATURE_BLIT_SRC_BIT; return *this; }

F_format_feature& F_format_feature::off_blit_src()
{ flag &= ~VK_FORMAT_FEATURE_BLIT_SRC_BIT; return *this; }

F_format_feature& F_format_feature::on_blit_dst()
{ flag |= VK_FORMAT_FEATURE_BLIT_DST_BIT; return *this; }

F_format_feature& F_format_feature::off_blit_dst()
{ flag &= ~VK_FORMAT_FEATURE_BLIT_DST_BIT; return *this; }

F_format_feature& F_format_feature::on_sampled_image_filter_linear()
{ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT; return *this; }

F_format_feature& F_format_feature::off_sampled_image_filter_linear()
{ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT; return *this; }



F_query_control::F_query_control():flag(0){}
F_query_control::F_query_control(F_query_control::B bits_):flag(static_cast<int>(bits_)){}
F_query_control::F_query_control(F_query_control const& flag_):flag(flag_.flag){}
F_query_control::F_query_control(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_control& F_query_control::operator = (F_query_control flag_){flag = flag_.flag;return *this;}
F_query_control F_query_control::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_query_control& F_query_control::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_control F_query_control::operator | (F_query_control flag_){return flag | flag_.flag;}
F_query_control& F_query_control::operator |= (F_query_control flag_){flag |= flag_.flag;return *this;}
F_query_control F_query_control::operator & (F_query_control flag_){return flag & flag_.flag;}
F_query_control& F_query_control::operator &= (F_query_control flag_){flag &= flag_.flag;return *this;}
F_query_control F_query_control::operator ^ (F_query_control flag_){return flag ^ flag_.flag;}
F_query_control& F_query_control::operator ^= (F_query_control flag_){flag ^= flag_.flag;return *this;}
F_query_control F_query_control::operator ~ (){return all_flags().flag^flag;}
bool F_query_control::operator !(){return !flag;}
bool F_query_control::operator == (F_query_control flag_){return flag == flag_.flag;}
bool F_query_control::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_query_control::operator != (F_query_control flag_){return flag != flag_.flag;}
bool F_query_control::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_query_control::operator bool(){return !!flag;}
F_query_control& F_query_control::clear(){flag = 0;return *this;}
F_query_control operator|(F_query_control::B bit1_, F_query_control::B bit2_){F_query_control flags(bit1_);return flags | bit2_;}
F_query_control::F_query_control(int flags_):flag(flags_) {}
F_query_control F_query_control::all_flags(){
 return VK_QUERY_CONTROL_PRECISE_BIT;
}
VkQueryControlFlagBits F_query_control::get()
{ return (VkQueryControlFlagBits)flag;}
F_query_control& F_query_control::on_precise()
{ flag |= VK_QUERY_CONTROL_PRECISE_BIT; return *this; }

F_query_control& F_query_control::off_precise()
{ flag &= ~VK_QUERY_CONTROL_PRECISE_BIT; return *this; }



F_query_result::F_query_result():flag(0){}
F_query_result::F_query_result(F_query_result::B bits_):flag(static_cast<int>(bits_)){}
F_query_result::F_query_result(F_query_result const& flag_):flag(flag_.flag){}
F_query_result::F_query_result(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_result& F_query_result::operator = (F_query_result flag_){flag = flag_.flag;return *this;}
F_query_result F_query_result::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_query_result& F_query_result::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_result F_query_result::operator | (F_query_result flag_){return flag | flag_.flag;}
F_query_result& F_query_result::operator |= (F_query_result flag_){flag |= flag_.flag;return *this;}
F_query_result F_query_result::operator & (F_query_result flag_){return flag & flag_.flag;}
F_query_result& F_query_result::operator &= (F_query_result flag_){flag &= flag_.flag;return *this;}
F_query_result F_query_result::operator ^ (F_query_result flag_){return flag ^ flag_.flag;}
F_query_result& F_query_result::operator ^= (F_query_result flag_){flag ^= flag_.flag;return *this;}
F_query_result F_query_result::operator ~ (){return all_flags().flag^flag;}
bool F_query_result::operator !(){return !flag;}
bool F_query_result::operator == (F_query_result flag_){return flag == flag_.flag;}
bool F_query_result::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_query_result::operator != (F_query_result flag_){return flag != flag_.flag;}
bool F_query_result::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_query_result::operator bool(){return !!flag;}
F_query_result& F_query_result::clear(){flag = 0;return *this;}
F_query_result operator|(F_query_result::B bit1_, F_query_result::B bit2_){F_query_result flags(bit1_);return flags | bit2_;}
F_query_result::F_query_result(int flags_):flag(flags_) {}
F_query_result F_query_result::all_flags(){
 return VK_QUERY_RESULT_64_BIT | 
VK_QUERY_RESULT_WAIT_BIT | 
VK_QUERY_RESULT_WITH_AVAILABILITY_BIT | 
VK_QUERY_RESULT_PARTIAL_BIT;
}
VkQueryResultFlagBits F_query_result::get()
{ return (VkQueryResultFlagBits)flag;}
F_query_result& F_query_result::on_64()
{ flag |= VK_QUERY_RESULT_64_BIT; return *this; }

F_query_result& F_query_result::off_64()
{ flag &= ~VK_QUERY_RESULT_64_BIT; return *this; }

F_query_result& F_query_result::on_wait()
{ flag |= VK_QUERY_RESULT_WAIT_BIT; return *this; }

F_query_result& F_query_result::off_wait()
{ flag &= ~VK_QUERY_RESULT_WAIT_BIT; return *this; }

F_query_result& F_query_result::on_with_availability()
{ flag |= VK_QUERY_RESULT_WITH_AVAILABILITY_BIT; return *this; }

F_query_result& F_query_result::off_with_availability()
{ flag &= ~VK_QUERY_RESULT_WITH_AVAILABILITY_BIT; return *this; }

F_query_result& F_query_result::on_partial()
{ flag |= VK_QUERY_RESULT_PARTIAL_BIT; return *this; }

F_query_result& F_query_result::off_partial()
{ flag &= ~VK_QUERY_RESULT_PARTIAL_BIT; return *this; }



F_command_buffer_usage::F_command_buffer_usage():flag(0){}
F_command_buffer_usage::F_command_buffer_usage(F_command_buffer_usage::B bits_):flag(static_cast<int>(bits_)){}
F_command_buffer_usage::F_command_buffer_usage(F_command_buffer_usage const& flag_):flag(flag_.flag){}
F_command_buffer_usage::F_command_buffer_usage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_buffer_usage& F_command_buffer_usage::operator = (F_command_buffer_usage flag_){flag = flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_buffer_usage& F_command_buffer_usage::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_buffer_usage F_command_buffer_usage::operator | (F_command_buffer_usage flag_){return flag | flag_.flag;}
F_command_buffer_usage& F_command_buffer_usage::operator |= (F_command_buffer_usage flag_){flag |= flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator & (F_command_buffer_usage flag_){return flag & flag_.flag;}
F_command_buffer_usage& F_command_buffer_usage::operator &= (F_command_buffer_usage flag_){flag &= flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator ^ (F_command_buffer_usage flag_){return flag ^ flag_.flag;}
F_command_buffer_usage& F_command_buffer_usage::operator ^= (F_command_buffer_usage flag_){flag ^= flag_.flag;return *this;}
F_command_buffer_usage F_command_buffer_usage::operator ~ (){return all_flags().flag^flag;}
bool F_command_buffer_usage::operator !(){return !flag;}
bool F_command_buffer_usage::operator == (F_command_buffer_usage flag_){return flag == flag_.flag;}
bool F_command_buffer_usage::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_command_buffer_usage::operator != (F_command_buffer_usage flag_){return flag != flag_.flag;}
bool F_command_buffer_usage::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_command_buffer_usage::operator bool(){return !!flag;}
F_command_buffer_usage& F_command_buffer_usage::clear(){flag = 0;return *this;}
F_command_buffer_usage operator|(F_command_buffer_usage::B bit1_, F_command_buffer_usage::B bit2_){F_command_buffer_usage flags(bit1_);return flags | bit2_;}
F_command_buffer_usage::F_command_buffer_usage(int flags_):flag(flags_) {}
F_command_buffer_usage F_command_buffer_usage::all_flags(){
 return VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT | 
VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT | 
VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
}
VkCommandBufferUsageFlagBits F_command_buffer_usage::get()
{ return (VkCommandBufferUsageFlagBits)flag;}
F_command_buffer_usage& F_command_buffer_usage::on_one_time_submit()
{ flag |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::off_one_time_submit()
{ flag &= ~VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::on_render_pass_continue()
{ flag |= VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::off_render_pass_continue()
{ flag &= ~VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::on_simultaneous_use()
{ flag |= VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::off_simultaneous_use()
{ flag &= ~VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT; return *this; }



F_query_pipeline_statistic::F_query_pipeline_statistic():flag(0){}
F_query_pipeline_statistic::F_query_pipeline_statistic(F_query_pipeline_statistic::B bits_):flag(static_cast<int>(bits_)){}
F_query_pipeline_statistic::F_query_pipeline_statistic(F_query_pipeline_statistic const& flag_):flag(flag_.flag){}
F_query_pipeline_statistic::F_query_pipeline_statistic(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator = (F_query_pipeline_statistic flag_){flag = flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator | (F_query_pipeline_statistic flag_){return flag | flag_.flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator |= (F_query_pipeline_statistic flag_){flag |= flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator & (F_query_pipeline_statistic flag_){return flag & flag_.flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator &= (F_query_pipeline_statistic flag_){flag &= flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator ^ (F_query_pipeline_statistic flag_){return flag ^ flag_.flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::operator ^= (F_query_pipeline_statistic flag_){flag ^= flag_.flag;return *this;}
F_query_pipeline_statistic F_query_pipeline_statistic::operator ~ (){return all_flags().flag^flag;}
bool F_query_pipeline_statistic::operator !(){return !flag;}
bool F_query_pipeline_statistic::operator == (F_query_pipeline_statistic flag_){return flag == flag_.flag;}
bool F_query_pipeline_statistic::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_query_pipeline_statistic::operator != (F_query_pipeline_statistic flag_){return flag != flag_.flag;}
bool F_query_pipeline_statistic::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_query_pipeline_statistic::operator bool(){return !!flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::clear(){flag = 0;return *this;}
F_query_pipeline_statistic operator|(F_query_pipeline_statistic::B bit1_, F_query_pipeline_statistic::B bit2_){F_query_pipeline_statistic flags(bit1_);return flags | bit2_;}
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
VkQueryPipelineStatisticFlagBits F_query_pipeline_statistic::get()
{ return (VkQueryPipelineStatisticFlagBits)flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::on_input_assembly_vertices()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_input_assembly_vertices()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_input_assembly_primitives()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_input_assembly_primitives()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_vertex_shader_invocations()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_vertex_shader_invocations()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_geometry_shader_invocations()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_geometry_shader_invocations()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_geometry_shader_primitives()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_geometry_shader_primitives()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_clipping_invocations()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_clipping_invocations()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_clipping_primitives()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_clipping_primitives()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_fragment_shader_invocations()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_fragment_shader_invocations()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_tessellation_control_shader_patches()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_tessellation_control_shader_patches()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_tessellation_evaluation_shader_invocations()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_tessellation_evaluation_shader_invocations()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::on_compute_shader_invocations()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::off_compute_shader_invocations()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT; return *this; }



F_image_aspect::F_image_aspect():flag(0){}
F_image_aspect::F_image_aspect(F_image_aspect::B bits_):flag(static_cast<int>(bits_)){}
F_image_aspect::F_image_aspect(F_image_aspect const& flag_):flag(flag_.flag){}
F_image_aspect::F_image_aspect(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_image_aspect& F_image_aspect::operator = (F_image_aspect flag_){flag = flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_image_aspect& F_image_aspect::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_image_aspect F_image_aspect::operator | (F_image_aspect flag_){return flag | flag_.flag;}
F_image_aspect& F_image_aspect::operator |= (F_image_aspect flag_){flag |= flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator & (F_image_aspect flag_){return flag & flag_.flag;}
F_image_aspect& F_image_aspect::operator &= (F_image_aspect flag_){flag &= flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator ^ (F_image_aspect flag_){return flag ^ flag_.flag;}
F_image_aspect& F_image_aspect::operator ^= (F_image_aspect flag_){flag ^= flag_.flag;return *this;}
F_image_aspect F_image_aspect::operator ~ (){return all_flags().flag^flag;}
bool F_image_aspect::operator !(){return !flag;}
bool F_image_aspect::operator == (F_image_aspect flag_){return flag == flag_.flag;}
bool F_image_aspect::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_image_aspect::operator != (F_image_aspect flag_){return flag != flag_.flag;}
bool F_image_aspect::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_image_aspect::operator bool(){return !!flag;}
F_image_aspect& F_image_aspect::clear(){flag = 0;return *this;}
F_image_aspect operator|(F_image_aspect::B bit1_, F_image_aspect::B bit2_){F_image_aspect flags(bit1_);return flags | bit2_;}
F_image_aspect::F_image_aspect(int flags_):flag(flags_) {}
F_image_aspect F_image_aspect::all_flags(){
 return VK_IMAGE_ASPECT_COLOR_BIT | 
VK_IMAGE_ASPECT_DEPTH_BIT | 
VK_IMAGE_ASPECT_STENCIL_BIT | 
VK_IMAGE_ASPECT_METADATA_BIT;
}
VkImageAspectFlagBits F_image_aspect::get()
{ return (VkImageAspectFlagBits)flag;}
F_image_aspect& F_image_aspect::on_color()
{ flag |= VK_IMAGE_ASPECT_COLOR_BIT; return *this; }

F_image_aspect& F_image_aspect::off_color()
{ flag &= ~VK_IMAGE_ASPECT_COLOR_BIT; return *this; }

F_image_aspect& F_image_aspect::on_depth()
{ flag |= VK_IMAGE_ASPECT_DEPTH_BIT; return *this; }

F_image_aspect& F_image_aspect::off_depth()
{ flag &= ~VK_IMAGE_ASPECT_DEPTH_BIT; return *this; }

F_image_aspect& F_image_aspect::on_stencil()
{ flag |= VK_IMAGE_ASPECT_STENCIL_BIT; return *this; }

F_image_aspect& F_image_aspect::off_stencil()
{ flag &= ~VK_IMAGE_ASPECT_STENCIL_BIT; return *this; }

F_image_aspect& F_image_aspect::on_metadata()
{ flag |= VK_IMAGE_ASPECT_METADATA_BIT; return *this; }

F_image_aspect& F_image_aspect::off_metadata()
{ flag &= ~VK_IMAGE_ASPECT_METADATA_BIT; return *this; }



F_sparse_image_format::F_sparse_image_format():flag(0){}
F_sparse_image_format::F_sparse_image_format(F_sparse_image_format::B bits_):flag(static_cast<int>(bits_)){}
F_sparse_image_format::F_sparse_image_format(F_sparse_image_format const& flag_):flag(flag_.flag){}
F_sparse_image_format::F_sparse_image_format(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sparse_image_format& F_sparse_image_format::operator = (F_sparse_image_format flag_){flag = flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_sparse_image_format& F_sparse_image_format::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_sparse_image_format F_sparse_image_format::operator | (F_sparse_image_format flag_){return flag | flag_.flag;}
F_sparse_image_format& F_sparse_image_format::operator |= (F_sparse_image_format flag_){flag |= flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator & (F_sparse_image_format flag_){return flag & flag_.flag;}
F_sparse_image_format& F_sparse_image_format::operator &= (F_sparse_image_format flag_){flag &= flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator ^ (F_sparse_image_format flag_){return flag ^ flag_.flag;}
F_sparse_image_format& F_sparse_image_format::operator ^= (F_sparse_image_format flag_){flag ^= flag_.flag;return *this;}
F_sparse_image_format F_sparse_image_format::operator ~ (){return all_flags().flag^flag;}
bool F_sparse_image_format::operator !(){return !flag;}
bool F_sparse_image_format::operator == (F_sparse_image_format flag_){return flag == flag_.flag;}
bool F_sparse_image_format::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_sparse_image_format::operator != (F_sparse_image_format flag_){return flag != flag_.flag;}
bool F_sparse_image_format::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_sparse_image_format::operator bool(){return !!flag;}
F_sparse_image_format& F_sparse_image_format::clear(){flag = 0;return *this;}
F_sparse_image_format operator|(F_sparse_image_format::B bit1_, F_sparse_image_format::B bit2_){F_sparse_image_format flags(bit1_);return flags | bit2_;}
F_sparse_image_format::F_sparse_image_format(int flags_):flag(flags_) {}
F_sparse_image_format F_sparse_image_format::all_flags(){
 return VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT | 
VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT | 
VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT;
}
VkSparseImageFormatFlagBits F_sparse_image_format::get()
{ return (VkSparseImageFormatFlagBits)flag;}
F_sparse_image_format& F_sparse_image_format::on_single_miptail()
{ flag |= VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::off_single_miptail()
{ flag &= ~VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::on_aligned_mip_size()
{ flag |= VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::off_aligned_mip_size()
{ flag &= ~VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::on_nonstandard_block_size()
{ flag |= VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::off_nonstandard_block_size()
{ flag &= ~VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT; return *this; }



F_sparse_memory_bind::F_sparse_memory_bind():flag(0){}
F_sparse_memory_bind::F_sparse_memory_bind(F_sparse_memory_bind::B bits_):flag(static_cast<int>(bits_)){}
F_sparse_memory_bind::F_sparse_memory_bind(F_sparse_memory_bind const& flag_):flag(flag_.flag){}
F_sparse_memory_bind::F_sparse_memory_bind(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sparse_memory_bind& F_sparse_memory_bind::operator = (F_sparse_memory_bind flag_){flag = flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_sparse_memory_bind& F_sparse_memory_bind::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator | (F_sparse_memory_bind flag_){return flag | flag_.flag;}
F_sparse_memory_bind& F_sparse_memory_bind::operator |= (F_sparse_memory_bind flag_){flag |= flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator & (F_sparse_memory_bind flag_){return flag & flag_.flag;}
F_sparse_memory_bind& F_sparse_memory_bind::operator &= (F_sparse_memory_bind flag_){flag &= flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator ^ (F_sparse_memory_bind flag_){return flag ^ flag_.flag;}
F_sparse_memory_bind& F_sparse_memory_bind::operator ^= (F_sparse_memory_bind flag_){flag ^= flag_.flag;return *this;}
F_sparse_memory_bind F_sparse_memory_bind::operator ~ (){return all_flags().flag^flag;}
bool F_sparse_memory_bind::operator !(){return !flag;}
bool F_sparse_memory_bind::operator == (F_sparse_memory_bind flag_){return flag == flag_.flag;}
bool F_sparse_memory_bind::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_sparse_memory_bind::operator != (F_sparse_memory_bind flag_){return flag != flag_.flag;}
bool F_sparse_memory_bind::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_sparse_memory_bind::operator bool(){return !!flag;}
F_sparse_memory_bind& F_sparse_memory_bind::clear(){flag = 0;return *this;}
F_sparse_memory_bind operator|(F_sparse_memory_bind::B bit1_, F_sparse_memory_bind::B bit2_){F_sparse_memory_bind flags(bit1_);return flags | bit2_;}
F_sparse_memory_bind::F_sparse_memory_bind(int flags_):flag(flags_) {}
F_sparse_memory_bind F_sparse_memory_bind::all_flags(){
 return VK_SPARSE_MEMORY_BIND_METADATA_BIT;
}
VkSparseMemoryBindFlagBits F_sparse_memory_bind::get()
{ return (VkSparseMemoryBindFlagBits)flag;}
F_sparse_memory_bind& F_sparse_memory_bind::on_metadata()
{ flag |= VK_SPARSE_MEMORY_BIND_METADATA_BIT; return *this; }

F_sparse_memory_bind& F_sparse_memory_bind::off_metadata()
{ flag &= ~VK_SPARSE_MEMORY_BIND_METADATA_BIT; return *this; }



F_pipeline_stage::F_pipeline_stage():flag(0){}
F_pipeline_stage::F_pipeline_stage(F_pipeline_stage::B bits_):flag(static_cast<int>(bits_)){}
F_pipeline_stage::F_pipeline_stage(F_pipeline_stage const& flag_):flag(flag_.flag){}
F_pipeline_stage::F_pipeline_stage(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_pipeline_stage& F_pipeline_stage::operator = (F_pipeline_stage flag_){flag = flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_pipeline_stage& F_pipeline_stage::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_pipeline_stage F_pipeline_stage::operator | (F_pipeline_stage flag_){return flag | flag_.flag;}
F_pipeline_stage& F_pipeline_stage::operator |= (F_pipeline_stage flag_){flag |= flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator & (F_pipeline_stage flag_){return flag & flag_.flag;}
F_pipeline_stage& F_pipeline_stage::operator &= (F_pipeline_stage flag_){flag &= flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator ^ (F_pipeline_stage flag_){return flag ^ flag_.flag;}
F_pipeline_stage& F_pipeline_stage::operator ^= (F_pipeline_stage flag_){flag ^= flag_.flag;return *this;}
F_pipeline_stage F_pipeline_stage::operator ~ (){return all_flags().flag^flag;}
bool F_pipeline_stage::operator !(){return !flag;}
bool F_pipeline_stage::operator == (F_pipeline_stage flag_){return flag == flag_.flag;}
bool F_pipeline_stage::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_pipeline_stage::operator != (F_pipeline_stage flag_){return flag != flag_.flag;}
bool F_pipeline_stage::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_pipeline_stage::operator bool(){return !!flag;}
F_pipeline_stage& F_pipeline_stage::clear(){flag = 0;return *this;}
F_pipeline_stage operator|(F_pipeline_stage::B bit1_, F_pipeline_stage::B bit2_){F_pipeline_stage flags(bit1_);return flags | bit2_;}
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
VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
}
VkPipelineStageFlagBits F_pipeline_stage::get()
{ return (VkPipelineStageFlagBits)flag;}
F_pipeline_stage& F_pipeline_stage::on_top_of_pipe()
{ flag |= VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_top_of_pipe()
{ flag &= ~VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_draw_indirect()
{ flag |= VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_draw_indirect()
{ flag &= ~VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_vertex_input()
{ flag |= VK_PIPELINE_STAGE_VERTEX_INPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_vertex_input()
{ flag &= ~VK_PIPELINE_STAGE_VERTEX_INPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_vertex_shader()
{ flag |= VK_PIPELINE_STAGE_VERTEX_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_vertex_shader()
{ flag &= ~VK_PIPELINE_STAGE_VERTEX_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_tessellation_control_shader()
{ flag |= VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_tessellation_control_shader()
{ flag &= ~VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_tessellation_evaluation_shader()
{ flag |= VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_tessellation_evaluation_shader()
{ flag &= ~VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_geometry_shader()
{ flag |= VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_geometry_shader()
{ flag &= ~VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_fragment_shader()
{ flag |= VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_fragment_shader()
{ flag &= ~VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_early_fragment_tests()
{ flag |= VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_early_fragment_tests()
{ flag &= ~VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_late_fragment_tests()
{ flag |= VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_late_fragment_tests()
{ flag &= ~VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_color_attachment_output()
{ flag |= VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_color_attachment_output()
{ flag &= ~VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_compute_shader()
{ flag |= VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_compute_shader()
{ flag &= ~VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_transfer()
{ flag |= VK_PIPELINE_STAGE_TRANSFER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_transfer()
{ flag &= ~VK_PIPELINE_STAGE_TRANSFER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_bottom_of_pipe()
{ flag |= VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_bottom_of_pipe()
{ flag &= ~VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_host()
{ flag |= VK_PIPELINE_STAGE_HOST_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_host()
{ flag &= ~VK_PIPELINE_STAGE_HOST_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_all_graphics()
{ flag |= VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_all_graphics()
{ flag &= ~VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::on_all_commands()
{ flag |= VK_PIPELINE_STAGE_ALL_COMMANDS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::off_all_commands()
{ flag &= ~VK_PIPELINE_STAGE_ALL_COMMANDS_BIT; return *this; }



F_command_pool_create::F_command_pool_create():flag(0){}
F_command_pool_create::F_command_pool_create(F_command_pool_create::B bits_):flag(static_cast<int>(bits_)){}
F_command_pool_create::F_command_pool_create(F_command_pool_create const& flag_):flag(flag_.flag){}
F_command_pool_create::F_command_pool_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_pool_create& F_command_pool_create::operator = (F_command_pool_create flag_){flag = flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_pool_create& F_command_pool_create::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_pool_create F_command_pool_create::operator | (F_command_pool_create flag_){return flag | flag_.flag;}
F_command_pool_create& F_command_pool_create::operator |= (F_command_pool_create flag_){flag |= flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator & (F_command_pool_create flag_){return flag & flag_.flag;}
F_command_pool_create& F_command_pool_create::operator &= (F_command_pool_create flag_){flag &= flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator ^ (F_command_pool_create flag_){return flag ^ flag_.flag;}
F_command_pool_create& F_command_pool_create::operator ^= (F_command_pool_create flag_){flag ^= flag_.flag;return *this;}
F_command_pool_create F_command_pool_create::operator ~ (){return all_flags().flag^flag;}
bool F_command_pool_create::operator !(){return !flag;}
bool F_command_pool_create::operator == (F_command_pool_create flag_){return flag == flag_.flag;}
bool F_command_pool_create::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_command_pool_create::operator != (F_command_pool_create flag_){return flag != flag_.flag;}
bool F_command_pool_create::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_command_pool_create::operator bool(){return !!flag;}
F_command_pool_create& F_command_pool_create::clear(){flag = 0;return *this;}
F_command_pool_create operator|(F_command_pool_create::B bit1_, F_command_pool_create::B bit2_){F_command_pool_create flags(bit1_);return flags | bit2_;}
F_command_pool_create::F_command_pool_create(int flags_):flag(flags_) {}
F_command_pool_create F_command_pool_create::all_flags(){
 return VK_COMMAND_POOL_CREATE_TRANSIENT_BIT | 
VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
}
VkCommandPoolCreateFlagBits F_command_pool_create::get()
{ return (VkCommandPoolCreateFlagBits)flag;}
F_command_pool_create& F_command_pool_create::on_transient()
{ flag |= VK_COMMAND_POOL_CREATE_TRANSIENT_BIT; return *this; }

F_command_pool_create& F_command_pool_create::off_transient()
{ flag &= ~VK_COMMAND_POOL_CREATE_TRANSIENT_BIT; return *this; }

F_command_pool_create& F_command_pool_create::on_reset_command_buffer()
{ flag |= VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT; return *this; }

F_command_pool_create& F_command_pool_create::off_reset_command_buffer()
{ flag &= ~VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT; return *this; }



F_command_pool_reset::F_command_pool_reset():flag(0){}
F_command_pool_reset::F_command_pool_reset(F_command_pool_reset::B bits_):flag(static_cast<int>(bits_)){}
F_command_pool_reset::F_command_pool_reset(F_command_pool_reset const& flag_):flag(flag_.flag){}
F_command_pool_reset::F_command_pool_reset(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_pool_reset& F_command_pool_reset::operator = (F_command_pool_reset flag_){flag = flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_pool_reset& F_command_pool_reset::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_pool_reset F_command_pool_reset::operator | (F_command_pool_reset flag_){return flag | flag_.flag;}
F_command_pool_reset& F_command_pool_reset::operator |= (F_command_pool_reset flag_){flag |= flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator & (F_command_pool_reset flag_){return flag & flag_.flag;}
F_command_pool_reset& F_command_pool_reset::operator &= (F_command_pool_reset flag_){flag &= flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator ^ (F_command_pool_reset flag_){return flag ^ flag_.flag;}
F_command_pool_reset& F_command_pool_reset::operator ^= (F_command_pool_reset flag_){flag ^= flag_.flag;return *this;}
F_command_pool_reset F_command_pool_reset::operator ~ (){return all_flags().flag^flag;}
bool F_command_pool_reset::operator !(){return !flag;}
bool F_command_pool_reset::operator == (F_command_pool_reset flag_){return flag == flag_.flag;}
bool F_command_pool_reset::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_command_pool_reset::operator != (F_command_pool_reset flag_){return flag != flag_.flag;}
bool F_command_pool_reset::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_command_pool_reset::operator bool(){return !!flag;}
F_command_pool_reset& F_command_pool_reset::clear(){flag = 0;return *this;}
F_command_pool_reset operator|(F_command_pool_reset::B bit1_, F_command_pool_reset::B bit2_){F_command_pool_reset flags(bit1_);return flags | bit2_;}
F_command_pool_reset::F_command_pool_reset(int flags_):flag(flags_) {}
F_command_pool_reset F_command_pool_reset::all_flags(){
 return VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT;
}
VkCommandPoolResetFlagBits F_command_pool_reset::get()
{ return (VkCommandPoolResetFlagBits)flag;}
F_command_pool_reset& F_command_pool_reset::on_release_resources()
{ flag |= VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT; return *this; }

F_command_pool_reset& F_command_pool_reset::off_release_resources()
{ flag &= ~VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT; return *this; }



F_command_buffer_reset::F_command_buffer_reset():flag(0){}
F_command_buffer_reset::F_command_buffer_reset(F_command_buffer_reset::B bits_):flag(static_cast<int>(bits_)){}
F_command_buffer_reset::F_command_buffer_reset(F_command_buffer_reset const& flag_):flag(flag_.flag){}
F_command_buffer_reset::F_command_buffer_reset(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_command_buffer_reset& F_command_buffer_reset::operator = (F_command_buffer_reset flag_){flag = flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_command_buffer_reset& F_command_buffer_reset::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_command_buffer_reset F_command_buffer_reset::operator | (F_command_buffer_reset flag_){return flag | flag_.flag;}
F_command_buffer_reset& F_command_buffer_reset::operator |= (F_command_buffer_reset flag_){flag |= flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator & (F_command_buffer_reset flag_){return flag & flag_.flag;}
F_command_buffer_reset& F_command_buffer_reset::operator &= (F_command_buffer_reset flag_){flag &= flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator ^ (F_command_buffer_reset flag_){return flag ^ flag_.flag;}
F_command_buffer_reset& F_command_buffer_reset::operator ^= (F_command_buffer_reset flag_){flag ^= flag_.flag;return *this;}
F_command_buffer_reset F_command_buffer_reset::operator ~ (){return all_flags().flag^flag;}
bool F_command_buffer_reset::operator !(){return !flag;}
bool F_command_buffer_reset::operator == (F_command_buffer_reset flag_){return flag == flag_.flag;}
bool F_command_buffer_reset::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_command_buffer_reset::operator != (F_command_buffer_reset flag_){return flag != flag_.flag;}
bool F_command_buffer_reset::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_command_buffer_reset::operator bool(){return !!flag;}
F_command_buffer_reset& F_command_buffer_reset::clear(){flag = 0;return *this;}
F_command_buffer_reset operator|(F_command_buffer_reset::B bit1_, F_command_buffer_reset::B bit2_){F_command_buffer_reset flags(bit1_);return flags | bit2_;}
F_command_buffer_reset::F_command_buffer_reset(int flags_):flag(flags_) {}
F_command_buffer_reset F_command_buffer_reset::all_flags(){
 return VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT;
}
VkCommandBufferResetFlagBits F_command_buffer_reset::get()
{ return (VkCommandBufferResetFlagBits)flag;}
F_command_buffer_reset& F_command_buffer_reset::on_release_resources()
{ flag |= VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT; return *this; }

F_command_buffer_reset& F_command_buffer_reset::off_release_resources()
{ flag &= ~VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT; return *this; }



F_sample_count::F_sample_count():flag(0){}
F_sample_count::F_sample_count(F_sample_count::B bits_):flag(static_cast<int>(bits_)){}
F_sample_count::F_sample_count(F_sample_count const& flag_):flag(flag_.flag){}
F_sample_count::F_sample_count(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_sample_count& F_sample_count::operator = (F_sample_count flag_){flag = flag_.flag;return *this;}
F_sample_count F_sample_count::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_sample_count& F_sample_count::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_sample_count F_sample_count::operator | (F_sample_count flag_){return flag | flag_.flag;}
F_sample_count& F_sample_count::operator |= (F_sample_count flag_){flag |= flag_.flag;return *this;}
F_sample_count F_sample_count::operator & (F_sample_count flag_){return flag & flag_.flag;}
F_sample_count& F_sample_count::operator &= (F_sample_count flag_){flag &= flag_.flag;return *this;}
F_sample_count F_sample_count::operator ^ (F_sample_count flag_){return flag ^ flag_.flag;}
F_sample_count& F_sample_count::operator ^= (F_sample_count flag_){flag ^= flag_.flag;return *this;}
F_sample_count F_sample_count::operator ~ (){return all_flags().flag^flag;}
bool F_sample_count::operator !(){return !flag;}
bool F_sample_count::operator == (F_sample_count flag_){return flag == flag_.flag;}
bool F_sample_count::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_sample_count::operator != (F_sample_count flag_){return flag != flag_.flag;}
bool F_sample_count::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_sample_count::operator bool(){return !!flag;}
F_sample_count& F_sample_count::clear(){flag = 0;return *this;}
F_sample_count operator|(F_sample_count::B bit1_, F_sample_count::B bit2_){F_sample_count flags(bit1_);return flags | bit2_;}
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
VkSampleCountFlagBits F_sample_count::get()
{ return (VkSampleCountFlagBits)flag;}
F_sample_count& F_sample_count::on_1()
{ flag |= VK_SAMPLE_COUNT_1_BIT; return *this; }

F_sample_count& F_sample_count::off_1()
{ flag &= ~VK_SAMPLE_COUNT_1_BIT; return *this; }

F_sample_count& F_sample_count::on_2()
{ flag |= VK_SAMPLE_COUNT_2_BIT; return *this; }

F_sample_count& F_sample_count::off_2()
{ flag &= ~VK_SAMPLE_COUNT_2_BIT; return *this; }

F_sample_count& F_sample_count::on_4()
{ flag |= VK_SAMPLE_COUNT_4_BIT; return *this; }

F_sample_count& F_sample_count::off_4()
{ flag &= ~VK_SAMPLE_COUNT_4_BIT; return *this; }

F_sample_count& F_sample_count::on_8()
{ flag |= VK_SAMPLE_COUNT_8_BIT; return *this; }

F_sample_count& F_sample_count::off_8()
{ flag &= ~VK_SAMPLE_COUNT_8_BIT; return *this; }

F_sample_count& F_sample_count::on_16()
{ flag |= VK_SAMPLE_COUNT_16_BIT; return *this; }

F_sample_count& F_sample_count::off_16()
{ flag &= ~VK_SAMPLE_COUNT_16_BIT; return *this; }

F_sample_count& F_sample_count::on_32()
{ flag |= VK_SAMPLE_COUNT_32_BIT; return *this; }

F_sample_count& F_sample_count::off_32()
{ flag &= ~VK_SAMPLE_COUNT_32_BIT; return *this; }

F_sample_count& F_sample_count::on_64()
{ flag |= VK_SAMPLE_COUNT_64_BIT; return *this; }

F_sample_count& F_sample_count::off_64()
{ flag &= ~VK_SAMPLE_COUNT_64_BIT; return *this; }



F_attachment_description::F_attachment_description():flag(0){}
F_attachment_description::F_attachment_description(F_attachment_description::B bits_):flag(static_cast<int>(bits_)){}
F_attachment_description::F_attachment_description(F_attachment_description const& flag_):flag(flag_.flag){}
F_attachment_description::F_attachment_description(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_attachment_description& F_attachment_description::operator = (F_attachment_description flag_){flag = flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_attachment_description& F_attachment_description::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_attachment_description F_attachment_description::operator | (F_attachment_description flag_){return flag | flag_.flag;}
F_attachment_description& F_attachment_description::operator |= (F_attachment_description flag_){flag |= flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator & (F_attachment_description flag_){return flag & flag_.flag;}
F_attachment_description& F_attachment_description::operator &= (F_attachment_description flag_){flag &= flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator ^ (F_attachment_description flag_){return flag ^ flag_.flag;}
F_attachment_description& F_attachment_description::operator ^= (F_attachment_description flag_){flag ^= flag_.flag;return *this;}
F_attachment_description F_attachment_description::operator ~ (){return all_flags().flag^flag;}
bool F_attachment_description::operator !(){return !flag;}
bool F_attachment_description::operator == (F_attachment_description flag_){return flag == flag_.flag;}
bool F_attachment_description::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_attachment_description::operator != (F_attachment_description flag_){return flag != flag_.flag;}
bool F_attachment_description::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_attachment_description::operator bool(){return !!flag;}
F_attachment_description& F_attachment_description::clear(){flag = 0;return *this;}
F_attachment_description operator|(F_attachment_description::B bit1_, F_attachment_description::B bit2_){F_attachment_description flags(bit1_);return flags | bit2_;}
F_attachment_description::F_attachment_description(int flags_):flag(flags_) {}
F_attachment_description F_attachment_description::all_flags(){
 return VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT;
}
VkAttachmentDescriptionFlagBits F_attachment_description::get()
{ return (VkAttachmentDescriptionFlagBits)flag;}
F_attachment_description& F_attachment_description::on_may_alias()
{ flag |= VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT; return *this; }

F_attachment_description& F_attachment_description::off_may_alias()
{ flag &= ~VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT; return *this; }



F_stencil_face::F_stencil_face():flag(0){}
F_stencil_face::F_stencil_face(F_stencil_face::B bits_):flag(static_cast<int>(bits_)){}
F_stencil_face::F_stencil_face(F_stencil_face const& flag_):flag(flag_.flag){}
F_stencil_face::F_stencil_face(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_stencil_face& F_stencil_face::operator = (F_stencil_face flag_){flag = flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_stencil_face& F_stencil_face::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_stencil_face F_stencil_face::operator | (F_stencil_face flag_){return flag | flag_.flag;}
F_stencil_face& F_stencil_face::operator |= (F_stencil_face flag_){flag |= flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator & (F_stencil_face flag_){return flag & flag_.flag;}
F_stencil_face& F_stencil_face::operator &= (F_stencil_face flag_){flag &= flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator ^ (F_stencil_face flag_){return flag ^ flag_.flag;}
F_stencil_face& F_stencil_face::operator ^= (F_stencil_face flag_){flag ^= flag_.flag;return *this;}
F_stencil_face F_stencil_face::operator ~ (){return all_flags().flag^flag;}
bool F_stencil_face::operator !(){return !flag;}
bool F_stencil_face::operator == (F_stencil_face flag_){return flag == flag_.flag;}
bool F_stencil_face::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_stencil_face::operator != (F_stencil_face flag_){return flag != flag_.flag;}
bool F_stencil_face::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_stencil_face::operator bool(){return !!flag;}
F_stencil_face& F_stencil_face::clear(){flag = 0;return *this;}
F_stencil_face operator|(F_stencil_face::B bit1_, F_stencil_face::B bit2_){F_stencil_face flags(bit1_);return flags | bit2_;}
F_stencil_face::F_stencil_face(int flags_):flag(flags_) {}
F_stencil_face F_stencil_face::all_flags(){
 return VK_STENCIL_FACE_FRONT_BIT | 
VK_STENCIL_FACE_BACK_BIT | 
VK_STENCIL_FRONT_AND_BACK;
}
VkStencilFaceFlagBits F_stencil_face::get()
{ return (VkStencilFaceFlagBits)flag;}
F_stencil_face& F_stencil_face::on_front()
{ flag |= VK_STENCIL_FACE_FRONT_BIT; return *this; }

F_stencil_face& F_stencil_face::off_front()
{ flag &= ~VK_STENCIL_FACE_FRONT_BIT; return *this; }

F_stencil_face& F_stencil_face::on_back()
{ flag |= VK_STENCIL_FACE_BACK_BIT; return *this; }

F_stencil_face& F_stencil_face::off_back()
{ flag &= ~VK_STENCIL_FACE_BACK_BIT; return *this; }

F_stencil_face& F_stencil_face::on_vk_stencil_front_and_back()
{ flag |= VK_STENCIL_FRONT_AND_BACK; return *this; }

F_stencil_face& F_stencil_face::off_vk_stencil_front_and_back()
{ flag &= ~VK_STENCIL_FRONT_AND_BACK; return *this; }



F_descriptor_pool_create::F_descriptor_pool_create():flag(0){}
F_descriptor_pool_create::F_descriptor_pool_create(F_descriptor_pool_create::B bits_):flag(static_cast<int>(bits_)){}
F_descriptor_pool_create::F_descriptor_pool_create(F_descriptor_pool_create const& flag_):flag(flag_.flag){}
F_descriptor_pool_create::F_descriptor_pool_create(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_pool_create& F_descriptor_pool_create::operator = (F_descriptor_pool_create flag_){flag = flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_descriptor_pool_create& F_descriptor_pool_create::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator | (F_descriptor_pool_create flag_){return flag | flag_.flag;}
F_descriptor_pool_create& F_descriptor_pool_create::operator |= (F_descriptor_pool_create flag_){flag |= flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator & (F_descriptor_pool_create flag_){return flag & flag_.flag;}
F_descriptor_pool_create& F_descriptor_pool_create::operator &= (F_descriptor_pool_create flag_){flag &= flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator ^ (F_descriptor_pool_create flag_){return flag ^ flag_.flag;}
F_descriptor_pool_create& F_descriptor_pool_create::operator ^= (F_descriptor_pool_create flag_){flag ^= flag_.flag;return *this;}
F_descriptor_pool_create F_descriptor_pool_create::operator ~ (){return all_flags().flag^flag;}
bool F_descriptor_pool_create::operator !(){return !flag;}
bool F_descriptor_pool_create::operator == (F_descriptor_pool_create flag_){return flag == flag_.flag;}
bool F_descriptor_pool_create::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_descriptor_pool_create::operator != (F_descriptor_pool_create flag_){return flag != flag_.flag;}
bool F_descriptor_pool_create::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_descriptor_pool_create::operator bool(){return !!flag;}
F_descriptor_pool_create& F_descriptor_pool_create::clear(){flag = 0;return *this;}
F_descriptor_pool_create operator|(F_descriptor_pool_create::B bit1_, F_descriptor_pool_create::B bit2_){F_descriptor_pool_create flags(bit1_);return flags | bit2_;}
F_descriptor_pool_create::F_descriptor_pool_create(int flags_):flag(flags_) {}
F_descriptor_pool_create F_descriptor_pool_create::all_flags(){
 return VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
}
VkDescriptorPoolCreateFlagBits F_descriptor_pool_create::get()
{ return (VkDescriptorPoolCreateFlagBits)flag;}
F_descriptor_pool_create& F_descriptor_pool_create::on_free_descriptor_set()
{ flag |= VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT; return *this; }

F_descriptor_pool_create& F_descriptor_pool_create::off_free_descriptor_set()
{ flag &= ~VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT; return *this; }



F_dependency::F_dependency():flag(0){}
F_dependency::F_dependency(F_dependency::B bits_):flag(static_cast<int>(bits_)){}
F_dependency::F_dependency(F_dependency const& flag_):flag(flag_.flag){}
F_dependency::F_dependency(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_dependency& F_dependency::operator = (F_dependency flag_){flag = flag_.flag;return *this;}
F_dependency F_dependency::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_dependency& F_dependency::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_dependency F_dependency::operator | (F_dependency flag_){return flag | flag_.flag;}
F_dependency& F_dependency::operator |= (F_dependency flag_){flag |= flag_.flag;return *this;}
F_dependency F_dependency::operator & (F_dependency flag_){return flag & flag_.flag;}
F_dependency& F_dependency::operator &= (F_dependency flag_){flag &= flag_.flag;return *this;}
F_dependency F_dependency::operator ^ (F_dependency flag_){return flag ^ flag_.flag;}
F_dependency& F_dependency::operator ^= (F_dependency flag_){flag ^= flag_.flag;return *this;}
F_dependency F_dependency::operator ~ (){return all_flags().flag^flag;}
bool F_dependency::operator !(){return !flag;}
bool F_dependency::operator == (F_dependency flag_){return flag == flag_.flag;}
bool F_dependency::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_dependency::operator != (F_dependency flag_){return flag != flag_.flag;}
bool F_dependency::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_dependency::operator bool(){return !!flag;}
F_dependency& F_dependency::clear(){flag = 0;return *this;}
F_dependency operator|(F_dependency::B bit1_, F_dependency::B bit2_){F_dependency flags(bit1_);return flags | bit2_;}
F_dependency::F_dependency(int flags_):flag(flags_) {}
F_dependency F_dependency::all_flags(){
 return VK_DEPENDENCY_BY_REGION_BIT;
}
VkDependencyFlagBits F_dependency::get()
{ return (VkDependencyFlagBits)flag;}
F_dependency& F_dependency::on_by_region()
{ flag |= VK_DEPENDENCY_BY_REGION_BIT; return *this; }

F_dependency& F_dependency::off_by_region()
{ flag &= ~VK_DEPENDENCY_BY_REGION_BIT; return *this; }



F_display_plane_alpha_khr::F_display_plane_alpha_khr():flag(0){}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(F_display_plane_alpha_khr::B bits_):flag(static_cast<int>(bits_)){}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(F_display_plane_alpha_khr const& flag_):flag(flag_.flag){}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator = (F_display_plane_alpha_khr flag_){flag = flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator | (F_display_plane_alpha_khr flag_){return flag | flag_.flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator |= (F_display_plane_alpha_khr flag_){flag |= flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator & (F_display_plane_alpha_khr flag_){return flag & flag_.flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator &= (F_display_plane_alpha_khr flag_){flag &= flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator ^ (F_display_plane_alpha_khr flag_){return flag ^ flag_.flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator ^= (F_display_plane_alpha_khr flag_){flag ^= flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator ~ (){return all_flags().flag^flag;}
bool F_display_plane_alpha_khr::operator !(){return !flag;}
bool F_display_plane_alpha_khr::operator == (F_display_plane_alpha_khr flag_){return flag == flag_.flag;}
bool F_display_plane_alpha_khr::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_display_plane_alpha_khr::operator != (F_display_plane_alpha_khr flag_){return flag != flag_.flag;}
bool F_display_plane_alpha_khr::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_display_plane_alpha_khr::operator bool(){return !!flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::clear(){flag = 0;return *this;}
F_display_plane_alpha_khr operator|(F_display_plane_alpha_khr::B bit1_, F_display_plane_alpha_khr::B bit2_){F_display_plane_alpha_khr flags(bit1_);return flags | bit2_;}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(int flags_):flag(flags_) {}
F_display_plane_alpha_khr F_display_plane_alpha_khr::all_flags(){
 return VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
}
VkDisplayPlaneAlphaFlagBitsKHR F_display_plane_alpha_khr::get()
{ return (VkDisplayPlaneAlphaFlagBitsKHR)flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::on_opaque_bit_khr()
{ flag |= VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::off_opaque_bit_khr()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::on_global_bit_khr()
{ flag |= VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::off_global_bit_khr()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::on_per_pixel_bit_khr()
{ flag |= VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::off_per_pixel_bit_khr()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::on_per_pixel_premultiplied_bit_khr()
{ flag |= VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::off_per_pixel_premultiplied_bit_khr()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR; return *this; }



F_composite_alpha_khr::F_composite_alpha_khr():flag(0){}
F_composite_alpha_khr::F_composite_alpha_khr(F_composite_alpha_khr::B bits_):flag(static_cast<int>(bits_)){}
F_composite_alpha_khr::F_composite_alpha_khr(F_composite_alpha_khr const& flag_):flag(flag_.flag){}
F_composite_alpha_khr::F_composite_alpha_khr(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_composite_alpha_khr& F_composite_alpha_khr::operator = (F_composite_alpha_khr flag_){flag = flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_composite_alpha_khr& F_composite_alpha_khr::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator | (F_composite_alpha_khr flag_){return flag | flag_.flag;}
F_composite_alpha_khr& F_composite_alpha_khr::operator |= (F_composite_alpha_khr flag_){flag |= flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator & (F_composite_alpha_khr flag_){return flag & flag_.flag;}
F_composite_alpha_khr& F_composite_alpha_khr::operator &= (F_composite_alpha_khr flag_){flag &= flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator ^ (F_composite_alpha_khr flag_){return flag ^ flag_.flag;}
F_composite_alpha_khr& F_composite_alpha_khr::operator ^= (F_composite_alpha_khr flag_){flag ^= flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator ~ (){return all_flags().flag^flag;}
bool F_composite_alpha_khr::operator !(){return !flag;}
bool F_composite_alpha_khr::operator == (F_composite_alpha_khr flag_){return flag == flag_.flag;}
bool F_composite_alpha_khr::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_composite_alpha_khr::operator != (F_composite_alpha_khr flag_){return flag != flag_.flag;}
bool F_composite_alpha_khr::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_composite_alpha_khr::operator bool(){return !!flag;}
F_composite_alpha_khr& F_composite_alpha_khr::clear(){flag = 0;return *this;}
F_composite_alpha_khr operator|(F_composite_alpha_khr::B bit1_, F_composite_alpha_khr::B bit2_){F_composite_alpha_khr flags(bit1_);return flags | bit2_;}
F_composite_alpha_khr::F_composite_alpha_khr(int flags_):flag(flags_) {}
F_composite_alpha_khr F_composite_alpha_khr::all_flags(){
 return VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR | 
VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR | 
VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR | 
VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
}
VkCompositeAlphaFlagBitsKHR F_composite_alpha_khr::get()
{ return (VkCompositeAlphaFlagBitsKHR)flag;}
F_composite_alpha_khr& F_composite_alpha_khr::on_opaque_bit_khr()
{ flag |= VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::off_opaque_bit_khr()
{ flag &= ~VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::on_pre_multiplied_bit_khr()
{ flag |= VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::off_pre_multiplied_bit_khr()
{ flag &= ~VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::on_post_multiplied_bit_khr()
{ flag |= VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::off_post_multiplied_bit_khr()
{ flag &= ~VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::on_inherit_bit_khr()
{ flag |= VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::off_inherit_bit_khr()
{ flag &= ~VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; return *this; }



F_surface_transform_khr::F_surface_transform_khr():flag(0){}
F_surface_transform_khr::F_surface_transform_khr(F_surface_transform_khr::B bits_):flag(static_cast<int>(bits_)){}
F_surface_transform_khr::F_surface_transform_khr(F_surface_transform_khr const& flag_):flag(flag_.flag){}
F_surface_transform_khr::F_surface_transform_khr(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_transform_khr& F_surface_transform_khr::operator = (F_surface_transform_khr flag_){flag = flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_surface_transform_khr& F_surface_transform_khr::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_transform_khr F_surface_transform_khr::operator | (F_surface_transform_khr flag_){return flag | flag_.flag;}
F_surface_transform_khr& F_surface_transform_khr::operator |= (F_surface_transform_khr flag_){flag |= flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator & (F_surface_transform_khr flag_){return flag & flag_.flag;}
F_surface_transform_khr& F_surface_transform_khr::operator &= (F_surface_transform_khr flag_){flag &= flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator ^ (F_surface_transform_khr flag_){return flag ^ flag_.flag;}
F_surface_transform_khr& F_surface_transform_khr::operator ^= (F_surface_transform_khr flag_){flag ^= flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator ~ (){return all_flags().flag^flag;}
bool F_surface_transform_khr::operator !(){return !flag;}
bool F_surface_transform_khr::operator == (F_surface_transform_khr flag_){return flag == flag_.flag;}
bool F_surface_transform_khr::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_surface_transform_khr::operator != (F_surface_transform_khr flag_){return flag != flag_.flag;}
bool F_surface_transform_khr::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_surface_transform_khr::operator bool(){return !!flag;}
F_surface_transform_khr& F_surface_transform_khr::clear(){flag = 0;return *this;}
F_surface_transform_khr operator|(F_surface_transform_khr::B bit1_, F_surface_transform_khr::B bit2_){F_surface_transform_khr flags(bit1_);return flags | bit2_;}
F_surface_transform_khr::F_surface_transform_khr(int flags_):flag(flags_) {}
F_surface_transform_khr F_surface_transform_khr::all_flags(){
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
VkSurfaceTransformFlagBitsKHR F_surface_transform_khr::get()
{ return (VkSurfaceTransformFlagBitsKHR)flag;}
F_surface_transform_khr& F_surface_transform_khr::on_identity_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_identity_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_rotate_90_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_rotate_90_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_rotate_180_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_rotate_180_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_rotate_270_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_rotate_270_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_horizontal_mirror_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_horizontal_mirror_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_horizontal_mirror_rotate_90_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_horizontal_mirror_rotate_90_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_horizontal_mirror_rotate_180_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_horizontal_mirror_rotate_180_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_horizontal_mirror_rotate_270_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_horizontal_mirror_rotate_270_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::on_inherit_bit_khr()
{ flag |= VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::off_inherit_bit_khr()
{ flag &= ~VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR; return *this; }



F_debug_report_ext::F_debug_report_ext():flag(0){}
F_debug_report_ext::F_debug_report_ext(F_debug_report_ext::B bits_):flag(static_cast<int>(bits_)){}
F_debug_report_ext::F_debug_report_ext(F_debug_report_ext const& flag_):flag(flag_.flag){}
F_debug_report_ext::F_debug_report_ext(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_report_ext& F_debug_report_ext::operator = (F_debug_report_ext flag_){flag = flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_debug_report_ext& F_debug_report_ext::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_report_ext F_debug_report_ext::operator | (F_debug_report_ext flag_){return flag | flag_.flag;}
F_debug_report_ext& F_debug_report_ext::operator |= (F_debug_report_ext flag_){flag |= flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator & (F_debug_report_ext flag_){return flag & flag_.flag;}
F_debug_report_ext& F_debug_report_ext::operator &= (F_debug_report_ext flag_){flag &= flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator ^ (F_debug_report_ext flag_){return flag ^ flag_.flag;}
F_debug_report_ext& F_debug_report_ext::operator ^= (F_debug_report_ext flag_){flag ^= flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator ~ (){return all_flags().flag^flag;}
bool F_debug_report_ext::operator !(){return !flag;}
bool F_debug_report_ext::operator == (F_debug_report_ext flag_){return flag == flag_.flag;}
bool F_debug_report_ext::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_debug_report_ext::operator != (F_debug_report_ext flag_){return flag != flag_.flag;}
bool F_debug_report_ext::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_debug_report_ext::operator bool(){return !!flag;}
F_debug_report_ext& F_debug_report_ext::clear(){flag = 0;return *this;}
F_debug_report_ext operator|(F_debug_report_ext::B bit1_, F_debug_report_ext::B bit2_){F_debug_report_ext flags(bit1_);return flags | bit2_;}
F_debug_report_ext::F_debug_report_ext(int flags_):flag(flags_) {}
F_debug_report_ext F_debug_report_ext::all_flags(){
 return VK_DEBUG_REPORT_INFORMATION_BIT_EXT | 
VK_DEBUG_REPORT_WARNING_BIT_EXT | 
VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT | 
VK_DEBUG_REPORT_ERROR_BIT_EXT | 
VK_DEBUG_REPORT_DEBUG_BIT_EXT;
}
VkDebugReportFlagBitsEXT F_debug_report_ext::get()
{ return (VkDebugReportFlagBitsEXT)flag;}
F_debug_report_ext& F_debug_report_ext::on_information_bit_ext()
{ flag |= VK_DEBUG_REPORT_INFORMATION_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::off_information_bit_ext()
{ flag &= ~VK_DEBUG_REPORT_INFORMATION_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::on_warning_bit_ext()
{ flag |= VK_DEBUG_REPORT_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::off_warning_bit_ext()
{ flag &= ~VK_DEBUG_REPORT_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::on_performance_warning_bit_ext()
{ flag |= VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::off_performance_warning_bit_ext()
{ flag &= ~VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::on_error_bit_ext()
{ flag |= VK_DEBUG_REPORT_ERROR_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::off_error_bit_ext()
{ flag &= ~VK_DEBUG_REPORT_ERROR_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::on_debug_bit_ext()
{ flag |= VK_DEBUG_REPORT_DEBUG_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::off_debug_bit_ext()
{ flag &= ~VK_DEBUG_REPORT_DEBUG_BIT_EXT; return *this; }



F_external_memory_handle_type_nv::F_external_memory_handle_type_nv():flag(0){}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(F_external_memory_handle_type_nv::B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(F_external_memory_handle_type_nv const& flag_):flag(flag_.flag){}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator = (F_external_memory_handle_type_nv flag_){flag = flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator | (F_external_memory_handle_type_nv flag_){return flag | flag_.flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator |= (F_external_memory_handle_type_nv flag_){flag |= flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator & (F_external_memory_handle_type_nv flag_){return flag & flag_.flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator &= (F_external_memory_handle_type_nv flag_){flag &= flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator ^ (F_external_memory_handle_type_nv flag_){return flag ^ flag_.flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator ^= (F_external_memory_handle_type_nv flag_){flag ^= flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_handle_type_nv::operator !(){return !flag;}
bool F_external_memory_handle_type_nv::operator == (F_external_memory_handle_type_nv flag_){return flag == flag_.flag;}
bool F_external_memory_handle_type_nv::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_handle_type_nv::operator != (F_external_memory_handle_type_nv flag_){return flag != flag_.flag;}
bool F_external_memory_handle_type_nv::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_memory_handle_type_nv::operator bool(){return !!flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::clear(){flag = 0;return *this;}
F_external_memory_handle_type_nv operator|(F_external_memory_handle_type_nv::B bit1_, F_external_memory_handle_type_nv::B bit2_){F_external_memory_handle_type_nv flags(bit1_);return flags | bit2_;}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(int flags_):flag(flags_) {}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::all_flags(){
 return VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV;
}
VkExternalMemoryHandleTypeFlagBitsNV F_external_memory_handle_type_nv::get()
{ return (VkExternalMemoryHandleTypeFlagBitsNV)flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::on_opaque_win32_bit_nv()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::off_opaque_win32_bit_nv()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::on_opaque_win32_kmt_bit_nv()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::off_opaque_win32_kmt_bit_nv()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::on_d3d11_image_bit_nv()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::off_d3d11_image_bit_nv()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::on_d3d11_image_kmt_bit_nv()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::off_d3d11_image_kmt_bit_nv()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV; return *this; }



F_external_memory_feature_nv::F_external_memory_feature_nv():flag(0){}
F_external_memory_feature_nv::F_external_memory_feature_nv(F_external_memory_feature_nv::B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_feature_nv::F_external_memory_feature_nv(F_external_memory_feature_nv const& flag_):flag(flag_.flag){}
F_external_memory_feature_nv::F_external_memory_feature_nv(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator = (F_external_memory_feature_nv flag_){flag = flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator | (F_external_memory_feature_nv flag_){return flag | flag_.flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator |= (F_external_memory_feature_nv flag_){flag |= flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator & (F_external_memory_feature_nv flag_){return flag & flag_.flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator &= (F_external_memory_feature_nv flag_){flag &= flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator ^ (F_external_memory_feature_nv flag_){return flag ^ flag_.flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator ^= (F_external_memory_feature_nv flag_){flag ^= flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_feature_nv::operator !(){return !flag;}
bool F_external_memory_feature_nv::operator == (F_external_memory_feature_nv flag_){return flag == flag_.flag;}
bool F_external_memory_feature_nv::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_feature_nv::operator != (F_external_memory_feature_nv flag_){return flag != flag_.flag;}
bool F_external_memory_feature_nv::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_memory_feature_nv::operator bool(){return !!flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::clear(){flag = 0;return *this;}
F_external_memory_feature_nv operator|(F_external_memory_feature_nv::B bit1_, F_external_memory_feature_nv::B bit2_){F_external_memory_feature_nv flags(bit1_);return flags | bit2_;}
F_external_memory_feature_nv::F_external_memory_feature_nv(int flags_):flag(flags_) {}
F_external_memory_feature_nv F_external_memory_feature_nv::all_flags(){
 return VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV | 
VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV | 
VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV;
}
VkExternalMemoryFeatureFlagBitsNV F_external_memory_feature_nv::get()
{ return (VkExternalMemoryFeatureFlagBitsNV)flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::on_dedicated_only_bit_nv()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::off_dedicated_only_bit_nv()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::on_exportable_bit_nv()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::off_exportable_bit_nv()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::on_importable_bit_nv()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::off_importable_bit_nv()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV; return *this; }



F_subgroup_feature::F_subgroup_feature():flag(0){}
F_subgroup_feature::F_subgroup_feature(F_subgroup_feature::B bits_):flag(static_cast<int>(bits_)){}
F_subgroup_feature::F_subgroup_feature(F_subgroup_feature const& flag_):flag(flag_.flag){}
F_subgroup_feature::F_subgroup_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_subgroup_feature& F_subgroup_feature::operator = (F_subgroup_feature flag_){flag = flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_subgroup_feature& F_subgroup_feature::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_subgroup_feature F_subgroup_feature::operator | (F_subgroup_feature flag_){return flag | flag_.flag;}
F_subgroup_feature& F_subgroup_feature::operator |= (F_subgroup_feature flag_){flag |= flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator & (F_subgroup_feature flag_){return flag & flag_.flag;}
F_subgroup_feature& F_subgroup_feature::operator &= (F_subgroup_feature flag_){flag &= flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator ^ (F_subgroup_feature flag_){return flag ^ flag_.flag;}
F_subgroup_feature& F_subgroup_feature::operator ^= (F_subgroup_feature flag_){flag ^= flag_.flag;return *this;}
F_subgroup_feature F_subgroup_feature::operator ~ (){return all_flags().flag^flag;}
bool F_subgroup_feature::operator !(){return !flag;}
bool F_subgroup_feature::operator == (F_subgroup_feature flag_){return flag == flag_.flag;}
bool F_subgroup_feature::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_subgroup_feature::operator != (F_subgroup_feature flag_){return flag != flag_.flag;}
bool F_subgroup_feature::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_subgroup_feature::operator bool(){return !!flag;}
F_subgroup_feature& F_subgroup_feature::clear(){flag = 0;return *this;}
F_subgroup_feature operator|(F_subgroup_feature::B bit1_, F_subgroup_feature::B bit2_){F_subgroup_feature flags(bit1_);return flags | bit2_;}
F_subgroup_feature::F_subgroup_feature(int flags_):flag(flags_) {}
F_subgroup_feature F_subgroup_feature::all_flags(){
 return VK_SUBGROUP_FEATURE_BASIC_BIT | 
VK_SUBGROUP_FEATURE_VOTE_BIT | 
VK_SUBGROUP_FEATURE_ARITHMETIC_BIT | 
VK_SUBGROUP_FEATURE_BALLOT_BIT | 
VK_SUBGROUP_FEATURE_SHUFFLE_BIT | 
VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT | 
VK_SUBGROUP_FEATURE_CLUSTERED_BIT | 
VK_SUBGROUP_FEATURE_QUAD_BIT;
}
VkSubgroupFeatureFlagBits F_subgroup_feature::get()
{ return (VkSubgroupFeatureFlagBits)flag;}
F_subgroup_feature& F_subgroup_feature::on_basic()
{ flag |= VK_SUBGROUP_FEATURE_BASIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_basic()
{ flag &= ~VK_SUBGROUP_FEATURE_BASIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::on_vote()
{ flag |= VK_SUBGROUP_FEATURE_VOTE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_vote()
{ flag &= ~VK_SUBGROUP_FEATURE_VOTE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::on_arithmetic()
{ flag |= VK_SUBGROUP_FEATURE_ARITHMETIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_arithmetic()
{ flag &= ~VK_SUBGROUP_FEATURE_ARITHMETIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::on_ballot()
{ flag |= VK_SUBGROUP_FEATURE_BALLOT_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_ballot()
{ flag &= ~VK_SUBGROUP_FEATURE_BALLOT_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::on_shuffle()
{ flag |= VK_SUBGROUP_FEATURE_SHUFFLE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_shuffle()
{ flag &= ~VK_SUBGROUP_FEATURE_SHUFFLE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::on_shuffle_relative()
{ flag |= VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_shuffle_relative()
{ flag &= ~VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::on_clustered()
{ flag |= VK_SUBGROUP_FEATURE_CLUSTERED_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_clustered()
{ flag &= ~VK_SUBGROUP_FEATURE_CLUSTERED_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::on_quad()
{ flag |= VK_SUBGROUP_FEATURE_QUAD_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::off_quad()
{ flag &= ~VK_SUBGROUP_FEATURE_QUAD_BIT; return *this; }



F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx():flag(0){}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(F_indirect_commands_layout_usage_nvx::B bits_):flag(static_cast<int>(bits_)){}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(F_indirect_commands_layout_usage_nvx const& flag_):flag(flag_.flag){}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator = (F_indirect_commands_layout_usage_nvx flag_){flag = flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator | (F_indirect_commands_layout_usage_nvx flag_){return flag | flag_.flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator |= (F_indirect_commands_layout_usage_nvx flag_){flag |= flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator & (F_indirect_commands_layout_usage_nvx flag_){return flag & flag_.flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator &= (F_indirect_commands_layout_usage_nvx flag_){flag &= flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator ^ (F_indirect_commands_layout_usage_nvx flag_){return flag ^ flag_.flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator ^= (F_indirect_commands_layout_usage_nvx flag_){flag ^= flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_indirect_commands_layout_usage_nvx::operator !(){return !flag;}
bool F_indirect_commands_layout_usage_nvx::operator == (F_indirect_commands_layout_usage_nvx flag_){return flag == flag_.flag;}
bool F_indirect_commands_layout_usage_nvx::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_indirect_commands_layout_usage_nvx::operator != (F_indirect_commands_layout_usage_nvx flag_){return flag != flag_.flag;}
bool F_indirect_commands_layout_usage_nvx::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_indirect_commands_layout_usage_nvx::operator bool(){return !!flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::clear(){flag = 0;return *this;}
F_indirect_commands_layout_usage_nvx operator|(F_indirect_commands_layout_usage_nvx::B bit1_, F_indirect_commands_layout_usage_nvx::B bit2_){F_indirect_commands_layout_usage_nvx flags(bit1_);return flags | bit2_;}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(int flags_):flag(flags_) {}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::all_flags(){
 return VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX;
}
VkIndirectCommandsLayoutUsageFlagBitsNVX F_indirect_commands_layout_usage_nvx::get()
{ return (VkIndirectCommandsLayoutUsageFlagBitsNVX)flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::on_unordered_sequences_bit_nvx()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::off_unordered_sequences_bit_nvx()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::on_sparse_sequences_bit_nvx()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::off_sparse_sequences_bit_nvx()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::on_empty_executions_bit_nvx()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::off_empty_executions_bit_nvx()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::on_indexed_sequences_bit_nvx()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::off_indexed_sequences_bit_nvx()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX; return *this; }



F_object_entry_usage_nvx::F_object_entry_usage_nvx():flag(0){}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(F_object_entry_usage_nvx::B bits_):flag(static_cast<int>(bits_)){}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(F_object_entry_usage_nvx const& flag_):flag(flag_.flag){}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator = (F_object_entry_usage_nvx flag_){flag = flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator | (F_object_entry_usage_nvx flag_){return flag | flag_.flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator |= (F_object_entry_usage_nvx flag_){flag |= flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator & (F_object_entry_usage_nvx flag_){return flag & flag_.flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator &= (F_object_entry_usage_nvx flag_){flag &= flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator ^ (F_object_entry_usage_nvx flag_){return flag ^ flag_.flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator ^= (F_object_entry_usage_nvx flag_){flag ^= flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_object_entry_usage_nvx::operator !(){return !flag;}
bool F_object_entry_usage_nvx::operator == (F_object_entry_usage_nvx flag_){return flag == flag_.flag;}
bool F_object_entry_usage_nvx::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_object_entry_usage_nvx::operator != (F_object_entry_usage_nvx flag_){return flag != flag_.flag;}
bool F_object_entry_usage_nvx::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_object_entry_usage_nvx::operator bool(){return !!flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::clear(){flag = 0;return *this;}
F_object_entry_usage_nvx operator|(F_object_entry_usage_nvx::B bit1_, F_object_entry_usage_nvx::B bit2_){F_object_entry_usage_nvx flags(bit1_);return flags | bit2_;}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(int flags_):flag(flags_) {}
F_object_entry_usage_nvx F_object_entry_usage_nvx::all_flags(){
 return VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX | 
VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX;
}
VkObjectEntryUsageFlagBitsNVX F_object_entry_usage_nvx::get()
{ return (VkObjectEntryUsageFlagBitsNVX)flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::on_graphics_bit_nvx()
{ flag |= VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX; return *this; }

F_object_entry_usage_nvx& F_object_entry_usage_nvx::off_graphics_bit_nvx()
{ flag &= ~VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX; return *this; }

F_object_entry_usage_nvx& F_object_entry_usage_nvx::on_compute_bit_nvx()
{ flag |= VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX; return *this; }

F_object_entry_usage_nvx& F_object_entry_usage_nvx::off_compute_bit_nvx()
{ flag &= ~VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX; return *this; }



F_external_memory_handle_type::F_external_memory_handle_type():flag(0){}
F_external_memory_handle_type::F_external_memory_handle_type(F_external_memory_handle_type::B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_handle_type::F_external_memory_handle_type(F_external_memory_handle_type const& flag_):flag(flag_.flag){}
F_external_memory_handle_type::F_external_memory_handle_type(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_handle_type& F_external_memory_handle_type::operator = (F_external_memory_handle_type flag_){flag = flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_handle_type& F_external_memory_handle_type::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator | (F_external_memory_handle_type flag_){return flag | flag_.flag;}
F_external_memory_handle_type& F_external_memory_handle_type::operator |= (F_external_memory_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator & (F_external_memory_handle_type flag_){return flag & flag_.flag;}
F_external_memory_handle_type& F_external_memory_handle_type::operator &= (F_external_memory_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator ^ (F_external_memory_handle_type flag_){return flag ^ flag_.flag;}
F_external_memory_handle_type& F_external_memory_handle_type::operator ^= (F_external_memory_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_memory_handle_type F_external_memory_handle_type::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_handle_type::operator !(){return !flag;}
bool F_external_memory_handle_type::operator == (F_external_memory_handle_type flag_){return flag == flag_.flag;}
bool F_external_memory_handle_type::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_handle_type::operator != (F_external_memory_handle_type flag_){return flag != flag_.flag;}
bool F_external_memory_handle_type::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_memory_handle_type::operator bool(){return !!flag;}
F_external_memory_handle_type& F_external_memory_handle_type::clear(){flag = 0;return *this;}
F_external_memory_handle_type operator|(F_external_memory_handle_type::B bit1_, F_external_memory_handle_type::B bit2_){F_external_memory_handle_type flags(bit1_);return flags | bit2_;}
F_external_memory_handle_type::F_external_memory_handle_type(int flags_):flag(flags_) {}
F_external_memory_handle_type F_external_memory_handle_type::all_flags(){
 return VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT;
}
VkExternalMemoryHandleTypeFlagBits F_external_memory_handle_type::get()
{ return (VkExternalMemoryHandleTypeFlagBits)flag;}
F_external_memory_handle_type& F_external_memory_handle_type::on_opaque_fd()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::off_opaque_fd()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::on_opaque_win32()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::off_opaque_win32()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::on_opaque_win32_kmt()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::off_opaque_win32_kmt()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::on_d3d11_texture()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::off_d3d11_texture()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::on_d3d11_texture_kmt()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::off_d3d11_texture_kmt()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::on_d3d12_heap()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::off_d3d12_heap()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::on_d3d12_resource()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::off_d3d12_resource()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT; return *this; }



F_external_memory_feature::F_external_memory_feature():flag(0){}
F_external_memory_feature::F_external_memory_feature(F_external_memory_feature::B bits_):flag(static_cast<int>(bits_)){}
F_external_memory_feature::F_external_memory_feature(F_external_memory_feature const& flag_):flag(flag_.flag){}
F_external_memory_feature::F_external_memory_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_feature& F_external_memory_feature::operator = (F_external_memory_feature flag_){flag = flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_memory_feature& F_external_memory_feature::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_feature F_external_memory_feature::operator | (F_external_memory_feature flag_){return flag | flag_.flag;}
F_external_memory_feature& F_external_memory_feature::operator |= (F_external_memory_feature flag_){flag |= flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator & (F_external_memory_feature flag_){return flag & flag_.flag;}
F_external_memory_feature& F_external_memory_feature::operator &= (F_external_memory_feature flag_){flag &= flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator ^ (F_external_memory_feature flag_){return flag ^ flag_.flag;}
F_external_memory_feature& F_external_memory_feature::operator ^= (F_external_memory_feature flag_){flag ^= flag_.flag;return *this;}
F_external_memory_feature F_external_memory_feature::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_feature::operator !(){return !flag;}
bool F_external_memory_feature::operator == (F_external_memory_feature flag_){return flag == flag_.flag;}
bool F_external_memory_feature::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_feature::operator != (F_external_memory_feature flag_){return flag != flag_.flag;}
bool F_external_memory_feature::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_memory_feature::operator bool(){return !!flag;}
F_external_memory_feature& F_external_memory_feature::clear(){flag = 0;return *this;}
F_external_memory_feature operator|(F_external_memory_feature::B bit1_, F_external_memory_feature::B bit2_){F_external_memory_feature flags(bit1_);return flags | bit2_;}
F_external_memory_feature::F_external_memory_feature(int flags_):flag(flags_) {}
F_external_memory_feature F_external_memory_feature::all_flags(){
 return VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT | 
VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT | 
VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT;
}
VkExternalMemoryFeatureFlagBits F_external_memory_feature::get()
{ return (VkExternalMemoryFeatureFlagBits)flag;}
F_external_memory_feature& F_external_memory_feature::on_dedicated_only()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::off_dedicated_only()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::on_exportable()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::off_exportable()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::on_importable()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::off_importable()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT; return *this; }



F_external_semaphore_handle_type::F_external_semaphore_handle_type():flag(0){}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(F_external_semaphore_handle_type::B bits_):flag(static_cast<int>(bits_)){}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(F_external_semaphore_handle_type const& flag_):flag(flag_.flag){}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator = (F_external_semaphore_handle_type flag_){flag = flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator | (F_external_semaphore_handle_type flag_){return flag | flag_.flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator |= (F_external_semaphore_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator & (F_external_semaphore_handle_type flag_){return flag & flag_.flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator &= (F_external_semaphore_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator ^ (F_external_semaphore_handle_type flag_){return flag ^ flag_.flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::operator ^= (F_external_semaphore_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_semaphore_handle_type F_external_semaphore_handle_type::operator ~ (){return all_flags().flag^flag;}
bool F_external_semaphore_handle_type::operator !(){return !flag;}
bool F_external_semaphore_handle_type::operator == (F_external_semaphore_handle_type flag_){return flag == flag_.flag;}
bool F_external_semaphore_handle_type::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_semaphore_handle_type::operator != (F_external_semaphore_handle_type flag_){return flag != flag_.flag;}
bool F_external_semaphore_handle_type::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_semaphore_handle_type::operator bool(){return !!flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::clear(){flag = 0;return *this;}
F_external_semaphore_handle_type operator|(F_external_semaphore_handle_type::B bit1_, F_external_semaphore_handle_type::B bit2_){F_external_semaphore_handle_type flags(bit1_);return flags | bit2_;}
F_external_semaphore_handle_type::F_external_semaphore_handle_type(int flags_):flag(flags_) {}
F_external_semaphore_handle_type F_external_semaphore_handle_type::all_flags(){
 return VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT | 
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT;
}
VkExternalSemaphoreHandleTypeFlagBits F_external_semaphore_handle_type::get()
{ return (VkExternalSemaphoreHandleTypeFlagBits)flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::on_opaque_fd()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::off_opaque_fd()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::on_opaque_win32()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::off_opaque_win32()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::on_opaque_win32_kmt()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::off_opaque_win32_kmt()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::on_d3d12_fence()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::off_d3d12_fence()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::on_sync_fd()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::off_sync_fd()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }



F_external_semaphore_feature::F_external_semaphore_feature():flag(0){}
F_external_semaphore_feature::F_external_semaphore_feature(F_external_semaphore_feature::B bits_):flag(static_cast<int>(bits_)){}
F_external_semaphore_feature::F_external_semaphore_feature(F_external_semaphore_feature const& flag_):flag(flag_.flag){}
F_external_semaphore_feature::F_external_semaphore_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_semaphore_feature& F_external_semaphore_feature::operator = (F_external_semaphore_feature flag_){flag = flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_semaphore_feature& F_external_semaphore_feature::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator | (F_external_semaphore_feature flag_){return flag | flag_.flag;}
F_external_semaphore_feature& F_external_semaphore_feature::operator |= (F_external_semaphore_feature flag_){flag |= flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator & (F_external_semaphore_feature flag_){return flag & flag_.flag;}
F_external_semaphore_feature& F_external_semaphore_feature::operator &= (F_external_semaphore_feature flag_){flag &= flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator ^ (F_external_semaphore_feature flag_){return flag ^ flag_.flag;}
F_external_semaphore_feature& F_external_semaphore_feature::operator ^= (F_external_semaphore_feature flag_){flag ^= flag_.flag;return *this;}
F_external_semaphore_feature F_external_semaphore_feature::operator ~ (){return all_flags().flag^flag;}
bool F_external_semaphore_feature::operator !(){return !flag;}
bool F_external_semaphore_feature::operator == (F_external_semaphore_feature flag_){return flag == flag_.flag;}
bool F_external_semaphore_feature::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_semaphore_feature::operator != (F_external_semaphore_feature flag_){return flag != flag_.flag;}
bool F_external_semaphore_feature::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_semaphore_feature::operator bool(){return !!flag;}
F_external_semaphore_feature& F_external_semaphore_feature::clear(){flag = 0;return *this;}
F_external_semaphore_feature operator|(F_external_semaphore_feature::B bit1_, F_external_semaphore_feature::B bit2_){F_external_semaphore_feature flags(bit1_);return flags | bit2_;}
F_external_semaphore_feature::F_external_semaphore_feature(int flags_):flag(flags_) {}
F_external_semaphore_feature F_external_semaphore_feature::all_flags(){
 return VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT | 
VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT;
}
VkExternalSemaphoreFeatureFlagBits F_external_semaphore_feature::get()
{ return (VkExternalSemaphoreFeatureFlagBits)flag;}
F_external_semaphore_feature& F_external_semaphore_feature::on_exportable()
{ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_semaphore_feature& F_external_semaphore_feature::off_exportable()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_semaphore_feature& F_external_semaphore_feature::on_importable()
{ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT; return *this; }

F_external_semaphore_feature& F_external_semaphore_feature::off_importable()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT; return *this; }



F_semaphore_import::F_semaphore_import():flag(0){}
F_semaphore_import::F_semaphore_import(F_semaphore_import::B bits_):flag(static_cast<int>(bits_)){}
F_semaphore_import::F_semaphore_import(F_semaphore_import const& flag_):flag(flag_.flag){}
F_semaphore_import::F_semaphore_import(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_semaphore_import& F_semaphore_import::operator = (F_semaphore_import flag_){flag = flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_semaphore_import& F_semaphore_import::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_semaphore_import F_semaphore_import::operator | (F_semaphore_import flag_){return flag | flag_.flag;}
F_semaphore_import& F_semaphore_import::operator |= (F_semaphore_import flag_){flag |= flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator & (F_semaphore_import flag_){return flag & flag_.flag;}
F_semaphore_import& F_semaphore_import::operator &= (F_semaphore_import flag_){flag &= flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator ^ (F_semaphore_import flag_){return flag ^ flag_.flag;}
F_semaphore_import& F_semaphore_import::operator ^= (F_semaphore_import flag_){flag ^= flag_.flag;return *this;}
F_semaphore_import F_semaphore_import::operator ~ (){return all_flags().flag^flag;}
bool F_semaphore_import::operator !(){return !flag;}
bool F_semaphore_import::operator == (F_semaphore_import flag_){return flag == flag_.flag;}
bool F_semaphore_import::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_semaphore_import::operator != (F_semaphore_import flag_){return flag != flag_.flag;}
bool F_semaphore_import::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_semaphore_import::operator bool(){return !!flag;}
F_semaphore_import& F_semaphore_import::clear(){flag = 0;return *this;}
F_semaphore_import operator|(F_semaphore_import::B bit1_, F_semaphore_import::B bit2_){F_semaphore_import flags(bit1_);return flags | bit2_;}
F_semaphore_import::F_semaphore_import(int flags_):flag(flags_) {}
F_semaphore_import F_semaphore_import::all_flags(){
 return VK_SEMAPHORE_IMPORT_TEMPORARY_BIT;
}
VkSemaphoreImportFlagBits F_semaphore_import::get()
{ return (VkSemaphoreImportFlagBits)flag;}
F_semaphore_import& F_semaphore_import::on_temporary()
{ flag |= VK_SEMAPHORE_IMPORT_TEMPORARY_BIT; return *this; }

F_semaphore_import& F_semaphore_import::off_temporary()
{ flag &= ~VK_SEMAPHORE_IMPORT_TEMPORARY_BIT; return *this; }



F_external_fence_handle_type::F_external_fence_handle_type():flag(0){}
F_external_fence_handle_type::F_external_fence_handle_type(F_external_fence_handle_type::B bits_):flag(static_cast<int>(bits_)){}
F_external_fence_handle_type::F_external_fence_handle_type(F_external_fence_handle_type const& flag_):flag(flag_.flag){}
F_external_fence_handle_type::F_external_fence_handle_type(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_fence_handle_type& F_external_fence_handle_type::operator = (F_external_fence_handle_type flag_){flag = flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_fence_handle_type& F_external_fence_handle_type::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator | (F_external_fence_handle_type flag_){return flag | flag_.flag;}
F_external_fence_handle_type& F_external_fence_handle_type::operator |= (F_external_fence_handle_type flag_){flag |= flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator & (F_external_fence_handle_type flag_){return flag & flag_.flag;}
F_external_fence_handle_type& F_external_fence_handle_type::operator &= (F_external_fence_handle_type flag_){flag &= flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator ^ (F_external_fence_handle_type flag_){return flag ^ flag_.flag;}
F_external_fence_handle_type& F_external_fence_handle_type::operator ^= (F_external_fence_handle_type flag_){flag ^= flag_.flag;return *this;}
F_external_fence_handle_type F_external_fence_handle_type::operator ~ (){return all_flags().flag^flag;}
bool F_external_fence_handle_type::operator !(){return !flag;}
bool F_external_fence_handle_type::operator == (F_external_fence_handle_type flag_){return flag == flag_.flag;}
bool F_external_fence_handle_type::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_fence_handle_type::operator != (F_external_fence_handle_type flag_){return flag != flag_.flag;}
bool F_external_fence_handle_type::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_fence_handle_type::operator bool(){return !!flag;}
F_external_fence_handle_type& F_external_fence_handle_type::clear(){flag = 0;return *this;}
F_external_fence_handle_type operator|(F_external_fence_handle_type::B bit1_, F_external_fence_handle_type::B bit2_){F_external_fence_handle_type flags(bit1_);return flags | bit2_;}
F_external_fence_handle_type::F_external_fence_handle_type(int flags_):flag(flags_) {}
F_external_fence_handle_type F_external_fence_handle_type::all_flags(){
 return VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT | 
VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT;
}
VkExternalFenceHandleTypeFlagBits F_external_fence_handle_type::get()
{ return (VkExternalFenceHandleTypeFlagBits)flag;}
F_external_fence_handle_type& F_external_fence_handle_type::on_opaque_fd()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::off_opaque_fd()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::on_opaque_win32()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::off_opaque_win32()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::on_opaque_win32_kmt()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::off_opaque_win32_kmt()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::on_sync_fd()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::off_sync_fd()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }



F_external_fence_feature::F_external_fence_feature():flag(0){}
F_external_fence_feature::F_external_fence_feature(F_external_fence_feature::B bits_):flag(static_cast<int>(bits_)){}
F_external_fence_feature::F_external_fence_feature(F_external_fence_feature const& flag_):flag(flag_.flag){}
F_external_fence_feature::F_external_fence_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_fence_feature& F_external_fence_feature::operator = (F_external_fence_feature flag_){flag = flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_external_fence_feature& F_external_fence_feature::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_fence_feature F_external_fence_feature::operator | (F_external_fence_feature flag_){return flag | flag_.flag;}
F_external_fence_feature& F_external_fence_feature::operator |= (F_external_fence_feature flag_){flag |= flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator & (F_external_fence_feature flag_){return flag & flag_.flag;}
F_external_fence_feature& F_external_fence_feature::operator &= (F_external_fence_feature flag_){flag &= flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator ^ (F_external_fence_feature flag_){return flag ^ flag_.flag;}
F_external_fence_feature& F_external_fence_feature::operator ^= (F_external_fence_feature flag_){flag ^= flag_.flag;return *this;}
F_external_fence_feature F_external_fence_feature::operator ~ (){return all_flags().flag^flag;}
bool F_external_fence_feature::operator !(){return !flag;}
bool F_external_fence_feature::operator == (F_external_fence_feature flag_){return flag == flag_.flag;}
bool F_external_fence_feature::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_external_fence_feature::operator != (F_external_fence_feature flag_){return flag != flag_.flag;}
bool F_external_fence_feature::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_external_fence_feature::operator bool(){return !!flag;}
F_external_fence_feature& F_external_fence_feature::clear(){flag = 0;return *this;}
F_external_fence_feature operator|(F_external_fence_feature::B bit1_, F_external_fence_feature::B bit2_){F_external_fence_feature flags(bit1_);return flags | bit2_;}
F_external_fence_feature::F_external_fence_feature(int flags_):flag(flags_) {}
F_external_fence_feature F_external_fence_feature::all_flags(){
 return VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT | 
VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT;
}
VkExternalFenceFeatureFlagBits F_external_fence_feature::get()
{ return (VkExternalFenceFeatureFlagBits)flag;}
F_external_fence_feature& F_external_fence_feature::on_exportable()
{ flag |= VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_fence_feature& F_external_fence_feature::off_exportable()
{ flag &= ~VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_fence_feature& F_external_fence_feature::on_importable()
{ flag |= VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT; return *this; }

F_external_fence_feature& F_external_fence_feature::off_importable()
{ flag &= ~VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT; return *this; }



F_fence_import::F_fence_import():flag(0){}
F_fence_import::F_fence_import(F_fence_import::B bits_):flag(static_cast<int>(bits_)){}
F_fence_import::F_fence_import(F_fence_import const& flag_):flag(flag_.flag){}
F_fence_import::F_fence_import(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_fence_import& F_fence_import::operator = (F_fence_import flag_){flag = flag_.flag;return *this;}
F_fence_import F_fence_import::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_fence_import& F_fence_import::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_fence_import F_fence_import::operator | (F_fence_import flag_){return flag | flag_.flag;}
F_fence_import& F_fence_import::operator |= (F_fence_import flag_){flag |= flag_.flag;return *this;}
F_fence_import F_fence_import::operator & (F_fence_import flag_){return flag & flag_.flag;}
F_fence_import& F_fence_import::operator &= (F_fence_import flag_){flag &= flag_.flag;return *this;}
F_fence_import F_fence_import::operator ^ (F_fence_import flag_){return flag ^ flag_.flag;}
F_fence_import& F_fence_import::operator ^= (F_fence_import flag_){flag ^= flag_.flag;return *this;}
F_fence_import F_fence_import::operator ~ (){return all_flags().flag^flag;}
bool F_fence_import::operator !(){return !flag;}
bool F_fence_import::operator == (F_fence_import flag_){return flag == flag_.flag;}
bool F_fence_import::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_fence_import::operator != (F_fence_import flag_){return flag != flag_.flag;}
bool F_fence_import::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_fence_import::operator bool(){return !!flag;}
F_fence_import& F_fence_import::clear(){flag = 0;return *this;}
F_fence_import operator|(F_fence_import::B bit1_, F_fence_import::B bit2_){F_fence_import flags(bit1_);return flags | bit2_;}
F_fence_import::F_fence_import(int flags_):flag(flags_) {}
F_fence_import F_fence_import::all_flags(){
 return VK_FENCE_IMPORT_TEMPORARY_BIT;
}
VkFenceImportFlagBits F_fence_import::get()
{ return (VkFenceImportFlagBits)flag;}
F_fence_import& F_fence_import::on_temporary()
{ flag |= VK_FENCE_IMPORT_TEMPORARY_BIT; return *this; }

F_fence_import& F_fence_import::off_temporary()
{ flag &= ~VK_FENCE_IMPORT_TEMPORARY_BIT; return *this; }



F_surface_counter_ext::F_surface_counter_ext():flag(0){}
F_surface_counter_ext::F_surface_counter_ext(F_surface_counter_ext::B bits_):flag(static_cast<int>(bits_)){}
F_surface_counter_ext::F_surface_counter_ext(F_surface_counter_ext const& flag_):flag(flag_.flag){}
F_surface_counter_ext::F_surface_counter_ext(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_counter_ext& F_surface_counter_ext::operator = (F_surface_counter_ext flag_){flag = flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_surface_counter_ext& F_surface_counter_ext::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_counter_ext F_surface_counter_ext::operator | (F_surface_counter_ext flag_){return flag | flag_.flag;}
F_surface_counter_ext& F_surface_counter_ext::operator |= (F_surface_counter_ext flag_){flag |= flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator & (F_surface_counter_ext flag_){return flag & flag_.flag;}
F_surface_counter_ext& F_surface_counter_ext::operator &= (F_surface_counter_ext flag_){flag &= flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator ^ (F_surface_counter_ext flag_){return flag ^ flag_.flag;}
F_surface_counter_ext& F_surface_counter_ext::operator ^= (F_surface_counter_ext flag_){flag ^= flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator ~ (){return all_flags().flag^flag;}
bool F_surface_counter_ext::operator !(){return !flag;}
bool F_surface_counter_ext::operator == (F_surface_counter_ext flag_){return flag == flag_.flag;}
bool F_surface_counter_ext::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_surface_counter_ext::operator != (F_surface_counter_ext flag_){return flag != flag_.flag;}
bool F_surface_counter_ext::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_surface_counter_ext::operator bool(){return !!flag;}
F_surface_counter_ext& F_surface_counter_ext::clear(){flag = 0;return *this;}
F_surface_counter_ext operator|(F_surface_counter_ext::B bit1_, F_surface_counter_ext::B bit2_){F_surface_counter_ext flags(bit1_);return flags | bit2_;}
F_surface_counter_ext::F_surface_counter_ext(int flags_):flag(flags_) {}
F_surface_counter_ext F_surface_counter_ext::all_flags(){
 return VK_SURFACE_COUNTER_VBLANK_EXT;
}
VkSurfaceCounterFlagBitsEXT F_surface_counter_ext::get()
{ return (VkSurfaceCounterFlagBitsEXT)flag;}
F_surface_counter_ext& F_surface_counter_ext::on_vblank_ext()
{ flag |= VK_SURFACE_COUNTER_VBLANK_EXT; return *this; }

F_surface_counter_ext& F_surface_counter_ext::off_vblank_ext()
{ flag &= ~VK_SURFACE_COUNTER_VBLANK_EXT; return *this; }



F_peer_memory_feature::F_peer_memory_feature():flag(0){}
F_peer_memory_feature::F_peer_memory_feature(F_peer_memory_feature::B bits_):flag(static_cast<int>(bits_)){}
F_peer_memory_feature::F_peer_memory_feature(F_peer_memory_feature const& flag_):flag(flag_.flag){}
F_peer_memory_feature::F_peer_memory_feature(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_peer_memory_feature& F_peer_memory_feature::operator = (F_peer_memory_feature flag_){flag = flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_peer_memory_feature& F_peer_memory_feature::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_peer_memory_feature F_peer_memory_feature::operator | (F_peer_memory_feature flag_){return flag | flag_.flag;}
F_peer_memory_feature& F_peer_memory_feature::operator |= (F_peer_memory_feature flag_){flag |= flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator & (F_peer_memory_feature flag_){return flag & flag_.flag;}
F_peer_memory_feature& F_peer_memory_feature::operator &= (F_peer_memory_feature flag_){flag &= flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator ^ (F_peer_memory_feature flag_){return flag ^ flag_.flag;}
F_peer_memory_feature& F_peer_memory_feature::operator ^= (F_peer_memory_feature flag_){flag ^= flag_.flag;return *this;}
F_peer_memory_feature F_peer_memory_feature::operator ~ (){return all_flags().flag^flag;}
bool F_peer_memory_feature::operator !(){return !flag;}
bool F_peer_memory_feature::operator == (F_peer_memory_feature flag_){return flag == flag_.flag;}
bool F_peer_memory_feature::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_peer_memory_feature::operator != (F_peer_memory_feature flag_){return flag != flag_.flag;}
bool F_peer_memory_feature::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_peer_memory_feature::operator bool(){return !!flag;}
F_peer_memory_feature& F_peer_memory_feature::clear(){flag = 0;return *this;}
F_peer_memory_feature operator|(F_peer_memory_feature::B bit1_, F_peer_memory_feature::B bit2_){F_peer_memory_feature flags(bit1_);return flags | bit2_;}
F_peer_memory_feature::F_peer_memory_feature(int flags_):flag(flags_) {}
F_peer_memory_feature F_peer_memory_feature::all_flags(){
 return VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT | 
VK_PEER_MEMORY_FEATURE_COPY_DST_BIT | 
VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT | 
VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT;
}
VkPeerMemoryFeatureFlagBits F_peer_memory_feature::get()
{ return (VkPeerMemoryFeatureFlagBits)flag;}
F_peer_memory_feature& F_peer_memory_feature::on_copy_src()
{ flag |= VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::off_copy_src()
{ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::on_copy_dst()
{ flag |= VK_PEER_MEMORY_FEATURE_COPY_DST_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::off_copy_dst()
{ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_DST_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::on_generic_src()
{ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::off_generic_src()
{ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::on_generic_dst()
{ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::off_generic_dst()
{ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT; return *this; }



F_memory_allocate::F_memory_allocate():flag(0){}
F_memory_allocate::F_memory_allocate(F_memory_allocate::B bits_):flag(static_cast<int>(bits_)){}
F_memory_allocate::F_memory_allocate(F_memory_allocate const& flag_):flag(flag_.flag){}
F_memory_allocate::F_memory_allocate(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_memory_allocate& F_memory_allocate::operator = (F_memory_allocate flag_){flag = flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_memory_allocate& F_memory_allocate::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_memory_allocate F_memory_allocate::operator | (F_memory_allocate flag_){return flag | flag_.flag;}
F_memory_allocate& F_memory_allocate::operator |= (F_memory_allocate flag_){flag |= flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator & (F_memory_allocate flag_){return flag & flag_.flag;}
F_memory_allocate& F_memory_allocate::operator &= (F_memory_allocate flag_){flag &= flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator ^ (F_memory_allocate flag_){return flag ^ flag_.flag;}
F_memory_allocate& F_memory_allocate::operator ^= (F_memory_allocate flag_){flag ^= flag_.flag;return *this;}
F_memory_allocate F_memory_allocate::operator ~ (){return all_flags().flag^flag;}
bool F_memory_allocate::operator !(){return !flag;}
bool F_memory_allocate::operator == (F_memory_allocate flag_){return flag == flag_.flag;}
bool F_memory_allocate::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_memory_allocate::operator != (F_memory_allocate flag_){return flag != flag_.flag;}
bool F_memory_allocate::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_memory_allocate::operator bool(){return !!flag;}
F_memory_allocate& F_memory_allocate::clear(){flag = 0;return *this;}
F_memory_allocate operator|(F_memory_allocate::B bit1_, F_memory_allocate::B bit2_){F_memory_allocate flags(bit1_);return flags | bit2_;}
F_memory_allocate::F_memory_allocate(int flags_):flag(flags_) {}
F_memory_allocate F_memory_allocate::all_flags(){
 return VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT;
}
VkMemoryAllocateFlagBits F_memory_allocate::get()
{ return (VkMemoryAllocateFlagBits)flag;}
F_memory_allocate& F_memory_allocate::on_device_mask()
{ flag |= VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT; return *this; }

F_memory_allocate& F_memory_allocate::off_device_mask()
{ flag &= ~VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT; return *this; }



F_device_group_present_mode_khr::F_device_group_present_mode_khr():flag(0){}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(F_device_group_present_mode_khr::B bits_):flag(static_cast<int>(bits_)){}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(F_device_group_present_mode_khr const& flag_):flag(flag_.flag){}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator = (F_device_group_present_mode_khr flag_){flag = flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator | (F_device_group_present_mode_khr flag_){return flag | flag_.flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator |= (F_device_group_present_mode_khr flag_){flag |= flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator & (F_device_group_present_mode_khr flag_){return flag & flag_.flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator &= (F_device_group_present_mode_khr flag_){flag &= flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator ^ (F_device_group_present_mode_khr flag_){return flag ^ flag_.flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator ^= (F_device_group_present_mode_khr flag_){flag ^= flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator ~ (){return all_flags().flag^flag;}
bool F_device_group_present_mode_khr::operator !(){return !flag;}
bool F_device_group_present_mode_khr::operator == (F_device_group_present_mode_khr flag_){return flag == flag_.flag;}
bool F_device_group_present_mode_khr::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_device_group_present_mode_khr::operator != (F_device_group_present_mode_khr flag_){return flag != flag_.flag;}
bool F_device_group_present_mode_khr::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_device_group_present_mode_khr::operator bool(){return !!flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::clear(){flag = 0;return *this;}
F_device_group_present_mode_khr operator|(F_device_group_present_mode_khr::B bit1_, F_device_group_present_mode_khr::B bit2_){F_device_group_present_mode_khr flags(bit1_);return flags | bit2_;}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(int flags_):flag(flags_) {}
F_device_group_present_mode_khr F_device_group_present_mode_khr::all_flags(){
 return VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR;
}
VkDeviceGroupPresentModeFlagBitsKHR F_device_group_present_mode_khr::get()
{ return (VkDeviceGroupPresentModeFlagBitsKHR)flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::on_local_bit_khr()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::off_local_bit_khr()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::on_remote_bit_khr()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::off_remote_bit_khr()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::on_sum_bit_khr()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::off_sum_bit_khr()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::on_local_multi_device_bit_khr()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::off_local_multi_device_bit_khr()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR; return *this; }



F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext():flag(0){}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(F_debug_utils_message_severity_ext::B bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(F_debug_utils_message_severity_ext const& flag_):flag(flag_.flag){}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator = (F_debug_utils_message_severity_ext flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator | (F_debug_utils_message_severity_ext flag_){return flag | flag_.flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator |= (F_debug_utils_message_severity_ext flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator & (F_debug_utils_message_severity_ext flag_){return flag & flag_.flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator &= (F_debug_utils_message_severity_ext flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator ^ (F_debug_utils_message_severity_ext flag_){return flag ^ flag_.flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator ^= (F_debug_utils_message_severity_ext flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator ~ (){return all_flags().flag^flag;}
bool F_debug_utils_message_severity_ext::operator !(){return !flag;}
bool F_debug_utils_message_severity_ext::operator == (F_debug_utils_message_severity_ext flag_){return flag == flag_.flag;}
bool F_debug_utils_message_severity_ext::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_debug_utils_message_severity_ext::operator != (F_debug_utils_message_severity_ext flag_){return flag != flag_.flag;}
bool F_debug_utils_message_severity_ext::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_debug_utils_message_severity_ext::operator bool(){return !!flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::clear(){flag = 0;return *this;}
F_debug_utils_message_severity_ext operator|(F_debug_utils_message_severity_ext::B bit1_, F_debug_utils_message_severity_ext::B bit2_){F_debug_utils_message_severity_ext flags(bit1_);return flags | bit2_;}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(int flags_):flag(flags_) {}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::all_flags(){
 return VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
}
VkDebugUtilsMessageSeverityFlagBitsEXT F_debug_utils_message_severity_ext::get()
{ return (VkDebugUtilsMessageSeverityFlagBitsEXT)flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::on_verbose_bit_ext()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::off_verbose_bit_ext()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::on_info_bit_ext()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::off_info_bit_ext()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::on_warning_bit_ext()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::off_warning_bit_ext()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::on_error_bit_ext()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::off_error_bit_ext()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT; return *this; }



F_debug_utils_message_type_ext::F_debug_utils_message_type_ext():flag(0){}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(F_debug_utils_message_type_ext::B bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(F_debug_utils_message_type_ext const& flag_):flag(flag_.flag){}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator = (F_debug_utils_message_type_ext flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator | (F_debug_utils_message_type_ext flag_){return flag | flag_.flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator |= (F_debug_utils_message_type_ext flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator & (F_debug_utils_message_type_ext flag_){return flag & flag_.flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator &= (F_debug_utils_message_type_ext flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator ^ (F_debug_utils_message_type_ext flag_){return flag ^ flag_.flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator ^= (F_debug_utils_message_type_ext flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator ~ (){return all_flags().flag^flag;}
bool F_debug_utils_message_type_ext::operator !(){return !flag;}
bool F_debug_utils_message_type_ext::operator == (F_debug_utils_message_type_ext flag_){return flag == flag_.flag;}
bool F_debug_utils_message_type_ext::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_debug_utils_message_type_ext::operator != (F_debug_utils_message_type_ext flag_){return flag != flag_.flag;}
bool F_debug_utils_message_type_ext::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_debug_utils_message_type_ext::operator bool(){return !!flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::clear(){flag = 0;return *this;}
F_debug_utils_message_type_ext operator|(F_debug_utils_message_type_ext::B bit1_, F_debug_utils_message_type_ext::B bit2_){F_debug_utils_message_type_ext flags(bit1_);return flags | bit2_;}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(int flags_):flag(flags_) {}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::all_flags(){
 return VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
}
VkDebugUtilsMessageTypeFlagBitsEXT F_debug_utils_message_type_ext::get()
{ return (VkDebugUtilsMessageTypeFlagBitsEXT)flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::on_general_bit_ext()
{ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::off_general_bit_ext()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::on_validation_bit_ext()
{ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::off_validation_bit_ext()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::on_performance_bit_ext()
{ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::off_performance_bit_ext()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT; return *this; }



F_descriptor_binding_ext::F_descriptor_binding_ext():flag(0){}
F_descriptor_binding_ext::F_descriptor_binding_ext(F_descriptor_binding_ext::B bits_):flag(static_cast<int>(bits_)){}
F_descriptor_binding_ext::F_descriptor_binding_ext(F_descriptor_binding_ext const& flag_):flag(flag_.flag){}
F_descriptor_binding_ext::F_descriptor_binding_ext(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator = (F_descriptor_binding_ext flag_){flag = flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator | (F_descriptor_binding_ext flag_){return flag | flag_.flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator |= (F_descriptor_binding_ext flag_){flag |= flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator & (F_descriptor_binding_ext flag_){return flag & flag_.flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator &= (F_descriptor_binding_ext flag_){flag &= flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator ^ (F_descriptor_binding_ext flag_){return flag ^ flag_.flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator ^= (F_descriptor_binding_ext flag_){flag ^= flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator ~ (){return all_flags().flag^flag;}
bool F_descriptor_binding_ext::operator !(){return !flag;}
bool F_descriptor_binding_ext::operator == (F_descriptor_binding_ext flag_){return flag == flag_.flag;}
bool F_descriptor_binding_ext::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_descriptor_binding_ext::operator != (F_descriptor_binding_ext flag_){return flag != flag_.flag;}
bool F_descriptor_binding_ext::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_descriptor_binding_ext::operator bool(){return !!flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::clear(){flag = 0;return *this;}
F_descriptor_binding_ext operator|(F_descriptor_binding_ext::B bit1_, F_descriptor_binding_ext::B bit2_){F_descriptor_binding_ext flags(bit1_);return flags | bit2_;}
F_descriptor_binding_ext::F_descriptor_binding_ext(int flags_):flag(flags_) {}
F_descriptor_binding_ext F_descriptor_binding_ext::all_flags(){
 return VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT | 
VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT | 
VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT | 
VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT;
}
VkDescriptorBindingFlagBitsEXT F_descriptor_binding_ext::get()
{ return (VkDescriptorBindingFlagBitsEXT)flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::on_update_after_bind_bit_ext()
{ flag |= VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::off_update_after_bind_bit_ext()
{ flag &= ~VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::on_update_unused_while_pending_bit_ext()
{ flag |= VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::off_update_unused_while_pending_bit_ext()
{ flag &= ~VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::on_partially_bound_bit_ext()
{ flag |= VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::off_partially_bound_bit_ext()
{ flag &= ~VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::on_variable_descriptor_count_bit_ext()
{ flag |= VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::off_variable_descriptor_count_bit_ext()
{ flag &= ~VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT; return *this; }



F_conditional_rendering_ext::F_conditional_rendering_ext():flag(0){}
F_conditional_rendering_ext::F_conditional_rendering_ext(F_conditional_rendering_ext::B bits_):flag(static_cast<int>(bits_)){}
F_conditional_rendering_ext::F_conditional_rendering_ext(F_conditional_rendering_ext const& flag_):flag(flag_.flag){}
F_conditional_rendering_ext::F_conditional_rendering_ext(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator = (F_conditional_rendering_ext flag_){flag = flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator | (F_conditional_rendering_ext flag_){return flag | flag_.flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator |= (F_conditional_rendering_ext flag_){flag |= flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator & (F_conditional_rendering_ext flag_){return flag & flag_.flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator &= (F_conditional_rendering_ext flag_){flag &= flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator ^ (F_conditional_rendering_ext flag_){return flag ^ flag_.flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator ^= (F_conditional_rendering_ext flag_){flag ^= flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator ~ (){return all_flags().flag^flag;}
bool F_conditional_rendering_ext::operator !(){return !flag;}
bool F_conditional_rendering_ext::operator == (F_conditional_rendering_ext flag_){return flag == flag_.flag;}
bool F_conditional_rendering_ext::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_conditional_rendering_ext::operator != (F_conditional_rendering_ext flag_){return flag != flag_.flag;}
bool F_conditional_rendering_ext::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_conditional_rendering_ext::operator bool(){return !!flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::clear(){flag = 0;return *this;}
F_conditional_rendering_ext operator|(F_conditional_rendering_ext::B bit1_, F_conditional_rendering_ext::B bit2_){F_conditional_rendering_ext flags(bit1_);return flags | bit2_;}
F_conditional_rendering_ext::F_conditional_rendering_ext(int flags_):flag(flags_) {}
F_conditional_rendering_ext F_conditional_rendering_ext::all_flags(){
 return VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT;
}
VkConditionalRenderingFlagBitsEXT F_conditional_rendering_ext::get()
{ return (VkConditionalRenderingFlagBitsEXT)flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::on_inverted_bit_ext()
{ flag |= VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT; return *this; }

F_conditional_rendering_ext& F_conditional_rendering_ext::off_inverted_bit_ext()
{ flag &= ~VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT; return *this; }



F_geometry_instance_nvx::F_geometry_instance_nvx():flag(0){}
F_geometry_instance_nvx::F_geometry_instance_nvx(F_geometry_instance_nvx::B bits_):flag(static_cast<int>(bits_)){}
F_geometry_instance_nvx::F_geometry_instance_nvx(F_geometry_instance_nvx const& flag_):flag(flag_.flag){}
F_geometry_instance_nvx::F_geometry_instance_nvx(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator = (F_geometry_instance_nvx flag_){flag = flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator | (F_geometry_instance_nvx flag_){return flag | flag_.flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator |= (F_geometry_instance_nvx flag_){flag |= flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator & (F_geometry_instance_nvx flag_){return flag & flag_.flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator &= (F_geometry_instance_nvx flag_){flag &= flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator ^ (F_geometry_instance_nvx flag_){return flag ^ flag_.flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator ^= (F_geometry_instance_nvx flag_){flag ^= flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_geometry_instance_nvx::operator !(){return !flag;}
bool F_geometry_instance_nvx::operator == (F_geometry_instance_nvx flag_){return flag == flag_.flag;}
bool F_geometry_instance_nvx::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_geometry_instance_nvx::operator != (F_geometry_instance_nvx flag_){return flag != flag_.flag;}
bool F_geometry_instance_nvx::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_geometry_instance_nvx::operator bool(){return !!flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::clear(){flag = 0;return *this;}
F_geometry_instance_nvx operator|(F_geometry_instance_nvx::B bit1_, F_geometry_instance_nvx::B bit2_){F_geometry_instance_nvx flags(bit1_);return flags | bit2_;}
F_geometry_instance_nvx::F_geometry_instance_nvx(int flags_):flag(flags_) {}
F_geometry_instance_nvx F_geometry_instance_nvx::all_flags(){
 return VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX | 
VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX | 
VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX | 
VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX;
}
VkGeometryInstanceFlagBitsNVX F_geometry_instance_nvx::get()
{ return (VkGeometryInstanceFlagBitsNVX)flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::on_triangle_cull_disable_bit_nvx()
{ flag |= VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::off_triangle_cull_disable_bit_nvx()
{ flag &= ~VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::on_triangle_cull_flip_winding_bit_nvx()
{ flag |= VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::off_triangle_cull_flip_winding_bit_nvx()
{ flag &= ~VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::on_force_opaque_bit_nvx()
{ flag |= VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::off_force_opaque_bit_nvx()
{ flag &= ~VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::on_force_no_opaque_bit_nvx()
{ flag |= VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::off_force_no_opaque_bit_nvx()
{ flag &= ~VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX; return *this; }



F_geometry_nvx::F_geometry_nvx():flag(0){}
F_geometry_nvx::F_geometry_nvx(F_geometry_nvx::B bits_):flag(static_cast<int>(bits_)){}
F_geometry_nvx::F_geometry_nvx(F_geometry_nvx const& flag_):flag(flag_.flag){}
F_geometry_nvx::F_geometry_nvx(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_geometry_nvx& F_geometry_nvx::operator = (F_geometry_nvx flag_){flag = flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_geometry_nvx& F_geometry_nvx::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_geometry_nvx F_geometry_nvx::operator | (F_geometry_nvx flag_){return flag | flag_.flag;}
F_geometry_nvx& F_geometry_nvx::operator |= (F_geometry_nvx flag_){flag |= flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator & (F_geometry_nvx flag_){return flag & flag_.flag;}
F_geometry_nvx& F_geometry_nvx::operator &= (F_geometry_nvx flag_){flag &= flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator ^ (F_geometry_nvx flag_){return flag ^ flag_.flag;}
F_geometry_nvx& F_geometry_nvx::operator ^= (F_geometry_nvx flag_){flag ^= flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_geometry_nvx::operator !(){return !flag;}
bool F_geometry_nvx::operator == (F_geometry_nvx flag_){return flag == flag_.flag;}
bool F_geometry_nvx::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_geometry_nvx::operator != (F_geometry_nvx flag_){return flag != flag_.flag;}
bool F_geometry_nvx::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_geometry_nvx::operator bool(){return !!flag;}
F_geometry_nvx& F_geometry_nvx::clear(){flag = 0;return *this;}
F_geometry_nvx operator|(F_geometry_nvx::B bit1_, F_geometry_nvx::B bit2_){F_geometry_nvx flags(bit1_);return flags | bit2_;}
F_geometry_nvx::F_geometry_nvx(int flags_):flag(flags_) {}
F_geometry_nvx F_geometry_nvx::all_flags(){
 return VK_GEOMETRY_OPAQUE_BIT_NVX | 
VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX;
}
VkGeometryFlagBitsNVX F_geometry_nvx::get()
{ return (VkGeometryFlagBitsNVX)flag;}
F_geometry_nvx& F_geometry_nvx::on_opaque_bit_nvx()
{ flag |= VK_GEOMETRY_OPAQUE_BIT_NVX; return *this; }

F_geometry_nvx& F_geometry_nvx::off_opaque_bit_nvx()
{ flag &= ~VK_GEOMETRY_OPAQUE_BIT_NVX; return *this; }

F_geometry_nvx& F_geometry_nvx::on_no_duplicate_any_hit_invocation_bit_nvx()
{ flag |= VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX; return *this; }

F_geometry_nvx& F_geometry_nvx::off_no_duplicate_any_hit_invocation_bit_nvx()
{ flag &= ~VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX; return *this; }



F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx():flag(0){}
F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx(F_build_acceleration_structure_nvx::B bits_):flag(static_cast<int>(bits_)){}
F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx(F_build_acceleration_structure_nvx const& flag_):flag(flag_.flag){}
F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx(std::initializer_list<B> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator = (F_build_acceleration_structure_nvx flag_){flag = flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator | (B bit_){return flag | static_cast<int>(bit_);}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator |= (B bit_){flag |= static_cast<int>(bit_);return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator | (F_build_acceleration_structure_nvx flag_){return flag | flag_.flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator |= (F_build_acceleration_structure_nvx flag_){flag |= flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator & (F_build_acceleration_structure_nvx flag_){return flag & flag_.flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator &= (F_build_acceleration_structure_nvx flag_){flag &= flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator ^ (F_build_acceleration_structure_nvx flag_){return flag ^ flag_.flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator ^= (F_build_acceleration_structure_nvx flag_){flag ^= flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_build_acceleration_structure_nvx::operator !(){return !flag;}
bool F_build_acceleration_structure_nvx::operator == (F_build_acceleration_structure_nvx flag_){return flag == flag_.flag;}
bool F_build_acceleration_structure_nvx::operator == (B bit_){return flag == static_cast<int>(bit_);}
bool F_build_acceleration_structure_nvx::operator != (F_build_acceleration_structure_nvx flag_){return flag != flag_.flag;}
bool F_build_acceleration_structure_nvx::operator != (B bit_){return flag != static_cast<int>(bit_);}
F_build_acceleration_structure_nvx::operator bool(){return !!flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::clear(){flag = 0;return *this;}
F_build_acceleration_structure_nvx operator|(F_build_acceleration_structure_nvx::B bit1_, F_build_acceleration_structure_nvx::B bit2_){F_build_acceleration_structure_nvx flags(bit1_);return flags | bit2_;}
F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx(int flags_):flag(flags_) {}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::all_flags(){
 return VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX | 
VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX | 
VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX | 
VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX | 
VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX;
}
VkBuildAccelerationStructureFlagBitsNVX F_build_acceleration_structure_nvx::get()
{ return (VkBuildAccelerationStructureFlagBitsNVX)flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::on_allow_update_bit_nvx()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::off_allow_update_bit_nvx()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::on_allow_compaction_bit_nvx()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::off_allow_compaction_bit_nvx()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::on_prefer_fast_trace_bit_nvx()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::off_prefer_fast_trace_bit_nvx()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::on_prefer_fast_build_bit_nvx()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::off_prefer_fast_build_bit_nvx()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::on_low_memory_bit_nvx()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::off_low_memory_bit_nvx()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX; return *this; }




}}

