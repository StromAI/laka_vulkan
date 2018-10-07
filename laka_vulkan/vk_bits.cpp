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
VkCullModeFlagBits F_cull_mode::get()
{ return (VkCullModeFlagBits)flag;}
F_cull_mode& F_cull_mode::e_none_on()
{ flag |= VK_CULL_MODE_NONE; return *this; }

F_cull_mode& F_cull_mode::e_none_off()
{ flag &= ~VK_CULL_MODE_NONE; return *this; }

F_cull_mode& F_cull_mode::e_none_on()
{ flag |= VK_CULL_MODE_FRONT_BIT; return *this; }

F_cull_mode& F_cull_mode::e_none_off()
{ flag &= ~VK_CULL_MODE_FRONT_BIT; return *this; }

F_cull_mode& F_cull_mode::e_none_on()
{ flag |= VK_CULL_MODE_BACK_BIT; return *this; }

F_cull_mode& F_cull_mode::e_none_off()
{ flag &= ~VK_CULL_MODE_BACK_BIT; return *this; }

F_cull_mode& F_cull_mode::e_none_on()
{ flag |= VK_CULL_MODE_FRONT_AND_BACK; return *this; }

F_cull_mode& F_cull_mode::e_none_off()
{ flag &= ~VK_CULL_MODE_FRONT_AND_BACK; return *this; }



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
VK_QUEUE_SPARSE_BINDING_BIT;
}
VkQueueFlagBits F_queue::get()
{ return (VkQueueFlagBits)flag;}
F_queue& F_queue::e_graphics_on()
{ flag |= VK_QUEUE_GRAPHICS_BIT; return *this; }

F_queue& F_queue::e_graphics_off()
{ flag &= ~VK_QUEUE_GRAPHICS_BIT; return *this; }

F_queue& F_queue::e_graphics_on()
{ flag |= VK_QUEUE_COMPUTE_BIT; return *this; }

F_queue& F_queue::e_graphics_off()
{ flag &= ~VK_QUEUE_COMPUTE_BIT; return *this; }

F_queue& F_queue::e_graphics_on()
{ flag |= VK_QUEUE_TRANSFER_BIT; return *this; }

F_queue& F_queue::e_graphics_off()
{ flag &= ~VK_QUEUE_TRANSFER_BIT; return *this; }

F_queue& F_queue::e_graphics_on()
{ flag |= VK_QUEUE_SPARSE_BINDING_BIT; return *this; }

F_queue& F_queue::e_graphics_off()
{ flag &= ~VK_QUEUE_SPARSE_BINDING_BIT; return *this; }



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
VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT;
}
VkMemoryPropertyFlagBits F_memory_property::get()
{ return (VkMemoryPropertyFlagBits)flag;}
F_memory_property& F_memory_property::e_device_local_on()
{ flag |= VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_off()
{ flag &= ~VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_on()
{ flag |= VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_off()
{ flag &= ~VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_on()
{ flag |= VK_MEMORY_PROPERTY_HOST_COHERENT_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_off()
{ flag &= ~VK_MEMORY_PROPERTY_HOST_COHERENT_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_on()
{ flag |= VK_MEMORY_PROPERTY_HOST_CACHED_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_off()
{ flag &= ~VK_MEMORY_PROPERTY_HOST_CACHED_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_on()
{ flag |= VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT; return *this; }

F_memory_property& F_memory_property::e_device_local_off()
{ flag &= ~VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT; return *this; }



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
 return VK_MEMORY_HEAP_DEVICE_LOCAL_BIT;
}
VkMemoryHeapFlagBits F_memory_heap::get()
{ return (VkMemoryHeapFlagBits)flag;}
F_memory_heap& F_memory_heap::e_device_local_on()
{ flag |= VK_MEMORY_HEAP_DEVICE_LOCAL_BIT; return *this; }

F_memory_heap& F_memory_heap::e_device_local_off()
{ flag &= ~VK_MEMORY_HEAP_DEVICE_LOCAL_BIT; return *this; }



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
VK_ACCESS_MEMORY_WRITE_BIT;
}
VkAccessFlagBits F_access::get()
{ return (VkAccessFlagBits)flag;}
F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_INDIRECT_COMMAND_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_INDIRECT_COMMAND_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_INDEX_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_INDEX_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_UNIFORM_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_UNIFORM_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_INPUT_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_INPUT_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_SHADER_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_SHADER_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_SHADER_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_SHADER_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_COLOR_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_COLOR_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_TRANSFER_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_TRANSFER_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_TRANSFER_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_TRANSFER_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_HOST_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_HOST_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_HOST_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_HOST_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_MEMORY_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_MEMORY_READ_BIT; return *this; }

F_access& F_access::e_indirect_command_read_on()
{ flag |= VK_ACCESS_MEMORY_WRITE_BIT; return *this; }

F_access& F_access::e_indirect_command_read_off()
{ flag &= ~VK_ACCESS_MEMORY_WRITE_BIT; return *this; }



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
VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT;
}
VkBufferUsageFlagBits F_buffer_usage::get()
{ return (VkBufferUsageFlagBits)flag;}
F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_TRANSFER_SRC_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_TRANSFER_SRC_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_TRANSFER_DST_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_TRANSFER_DST_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_STORAGE_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_STORAGE_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_INDEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_INDEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_VERTEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_VERTEX_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_on()
{ flag |= VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT; return *this; }

F_buffer_usage& F_buffer_usage::e_transfer_src_off()
{ flag &= ~VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT; return *this; }



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
VK_BUFFER_CREATE_SPARSE_ALIASED_BIT;
}
VkBufferCreateFlagBits F_buffer_create::get()
{ return (VkBufferCreateFlagBits)flag;}
F_buffer_create& F_buffer_create::e_sparse_binding_on()
{ flag |= VK_BUFFER_CREATE_SPARSE_BINDING_BIT; return *this; }

F_buffer_create& F_buffer_create::e_sparse_binding_off()
{ flag &= ~VK_BUFFER_CREATE_SPARSE_BINDING_BIT; return *this; }

F_buffer_create& F_buffer_create::e_sparse_binding_on()
{ flag |= VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_buffer_create& F_buffer_create::e_sparse_binding_off()
{ flag &= ~VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_buffer_create& F_buffer_create::e_sparse_binding_on()
{ flag |= VK_BUFFER_CREATE_SPARSE_ALIASED_BIT; return *this; }

F_buffer_create& F_buffer_create::e_sparse_binding_off()
{ flag &= ~VK_BUFFER_CREATE_SPARSE_ALIASED_BIT; return *this; }



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
VkShaderStageFlagBits F_shader_stage::get()
{ return (VkShaderStageFlagBits)flag;}
F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_VERTEX_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_VERTEX_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_GEOMETRY_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_GEOMETRY_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_FRAGMENT_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_FRAGMENT_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_COMPUTE_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_COMPUTE_BIT; return *this; }

F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_ALL_GRAPHICS; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_ALL_GRAPHICS; return *this; }

F_shader_stage& F_shader_stage::e_vertex_on()
{ flag |= VK_SHADER_STAGE_ALL; return *this; }

F_shader_stage& F_shader_stage::e_vertex_off()
{ flag &= ~VK_SHADER_STAGE_ALL; return *this; }



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
VkImageUsageFlagBits F_image_usage::get()
{ return (VkImageUsageFlagBits)flag;}
F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_TRANSFER_SRC_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_TRANSFER_DST_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_TRANSFER_DST_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_SAMPLED_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_SAMPLED_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_STORAGE_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_STORAGE_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_on()
{ flag |= VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT; return *this; }

F_image_usage& F_image_usage::e_transfer_src_off()
{ flag &= ~VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT; return *this; }



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
VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
}
VkImageCreateFlagBits F_image_create::get()
{ return (VkImageCreateFlagBits)flag;}
F_image_create& F_image_create::e_sparse_binding_on()
{ flag |= VK_IMAGE_CREATE_SPARSE_BINDING_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_off()
{ flag &= ~VK_IMAGE_CREATE_SPARSE_BINDING_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_on()
{ flag |= VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_off()
{ flag &= ~VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_on()
{ flag |= VK_IMAGE_CREATE_SPARSE_ALIASED_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_off()
{ flag &= ~VK_IMAGE_CREATE_SPARSE_ALIASED_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_on()
{ flag |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_off()
{ flag &= ~VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_on()
{ flag |= VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT; return *this; }

F_image_create& F_image_create::e_sparse_binding_off()
{ flag &= ~VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT; return *this; }



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
VK_PIPELINE_CREATE_DERIVATIVE_BIT;
}
VkPipelineCreateFlagBits F_pipeline_create::get()
{ return (VkPipelineCreateFlagBits)flag;}
F_pipeline_create& F_pipeline_create::e_disable_optimization_on()
{ flag |= VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT; return *this; }

F_pipeline_create& F_pipeline_create::e_disable_optimization_off()
{ flag &= ~VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT; return *this; }

F_pipeline_create& F_pipeline_create::e_disable_optimization_on()
{ flag |= VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT; return *this; }

F_pipeline_create& F_pipeline_create::e_disable_optimization_off()
{ flag &= ~VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT; return *this; }

F_pipeline_create& F_pipeline_create::e_disable_optimization_on()
{ flag |= VK_PIPELINE_CREATE_DERIVATIVE_BIT; return *this; }

F_pipeline_create& F_pipeline_create::e_disable_optimization_off()
{ flag &= ~VK_PIPELINE_CREATE_DERIVATIVE_BIT; return *this; }



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
VkColorComponentFlagBits F_color_component::get()
{ return (VkColorComponentFlagBits)flag;}
F_color_component& F_color_component::e_r_on()
{ flag |= VK_COLOR_COMPONENT_R_BIT; return *this; }

F_color_component& F_color_component::e_r_off()
{ flag &= ~VK_COLOR_COMPONENT_R_BIT; return *this; }

F_color_component& F_color_component::e_r_on()
{ flag |= VK_COLOR_COMPONENT_G_BIT; return *this; }

F_color_component& F_color_component::e_r_off()
{ flag &= ~VK_COLOR_COMPONENT_G_BIT; return *this; }

F_color_component& F_color_component::e_r_on()
{ flag |= VK_COLOR_COMPONENT_B_BIT; return *this; }

F_color_component& F_color_component::e_r_off()
{ flag &= ~VK_COLOR_COMPONENT_B_BIT; return *this; }

F_color_component& F_color_component::e_r_on()
{ flag |= VK_COLOR_COMPONENT_A_BIT; return *this; }

F_color_component& F_color_component::e_r_off()
{ flag &= ~VK_COLOR_COMPONENT_A_BIT; return *this; }



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
VkFenceCreateFlagBits F_fence_create::get()
{ return (VkFenceCreateFlagBits)flag;}
F_fence_create& F_fence_create::e_signaled_on()
{ flag |= VK_FENCE_CREATE_SIGNALED_BIT; return *this; }

F_fence_create& F_fence_create::e_signaled_off()
{ flag &= ~VK_FENCE_CREATE_SIGNALED_BIT; return *this; }



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
VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT;
}
VkFormatFeatureFlagBits F_format_feature::get()
{ return (VkFormatFeatureFlagBits)flag;}
F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_BLIT_SRC_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_BLIT_SRC_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_BLIT_DST_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_BLIT_DST_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_on()
{ flag |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT; return *this; }

F_format_feature& F_format_feature::e_sampled_image_off()
{ flag &= ~VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT; return *this; }



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
VkQueryControlFlagBits F_query_control::get()
{ return (VkQueryControlFlagBits)flag;}
F_query_control& F_query_control::e_precise_on()
{ flag |= VK_QUERY_CONTROL_PRECISE_BIT; return *this; }

F_query_control& F_query_control::e_precise_off()
{ flag &= ~VK_QUERY_CONTROL_PRECISE_BIT; return *this; }



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
VkQueryResultFlagBits F_query_result::get()
{ return (VkQueryResultFlagBits)flag;}
F_query_result& F_query_result::e_64_on()
{ flag |= VK_QUERY_RESULT_64_BIT; return *this; }

F_query_result& F_query_result::e_64_off()
{ flag &= ~VK_QUERY_RESULT_64_BIT; return *this; }

F_query_result& F_query_result::e_64_on()
{ flag |= VK_QUERY_RESULT_WAIT_BIT; return *this; }

F_query_result& F_query_result::e_64_off()
{ flag &= ~VK_QUERY_RESULT_WAIT_BIT; return *this; }

F_query_result& F_query_result::e_64_on()
{ flag |= VK_QUERY_RESULT_WITH_AVAILABILITY_BIT; return *this; }

F_query_result& F_query_result::e_64_off()
{ flag &= ~VK_QUERY_RESULT_WITH_AVAILABILITY_BIT; return *this; }

F_query_result& F_query_result::e_64_on()
{ flag |= VK_QUERY_RESULT_PARTIAL_BIT; return *this; }

F_query_result& F_query_result::e_64_off()
{ flag &= ~VK_QUERY_RESULT_PARTIAL_BIT; return *this; }



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
VkCommandBufferUsageFlagBits F_command_buffer_usage::get()
{ return (VkCommandBufferUsageFlagBits)flag;}
F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_on()
{ flag |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_off()
{ flag &= ~VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_on()
{ flag |= VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_off()
{ flag &= ~VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_on()
{ flag |= VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT; return *this; }

F_command_buffer_usage& F_command_buffer_usage::e_one_time_submit_off()
{ flag &= ~VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT; return *this; }



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
VkQueryPipelineStatisticFlagBits F_query_pipeline_statistic::get()
{ return (VkQueryPipelineStatisticFlagBits)flag;}
F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_on()
{ flag |= VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT; return *this; }

F_query_pipeline_statistic& F_query_pipeline_statistic::e_input_assembly_vertices_off()
{ flag &= ~VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT; return *this; }



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
VK_IMAGE_ASPECT_METADATA_BIT;
}
VkImageAspectFlagBits F_image_aspect::get()
{ return (VkImageAspectFlagBits)flag;}
F_image_aspect& F_image_aspect::e_color_on()
{ flag |= VK_IMAGE_ASPECT_COLOR_BIT; return *this; }

F_image_aspect& F_image_aspect::e_color_off()
{ flag &= ~VK_IMAGE_ASPECT_COLOR_BIT; return *this; }

F_image_aspect& F_image_aspect::e_color_on()
{ flag |= VK_IMAGE_ASPECT_DEPTH_BIT; return *this; }

F_image_aspect& F_image_aspect::e_color_off()
{ flag &= ~VK_IMAGE_ASPECT_DEPTH_BIT; return *this; }

F_image_aspect& F_image_aspect::e_color_on()
{ flag |= VK_IMAGE_ASPECT_STENCIL_BIT; return *this; }

F_image_aspect& F_image_aspect::e_color_off()
{ flag &= ~VK_IMAGE_ASPECT_STENCIL_BIT; return *this; }

F_image_aspect& F_image_aspect::e_color_on()
{ flag |= VK_IMAGE_ASPECT_METADATA_BIT; return *this; }

F_image_aspect& F_image_aspect::e_color_off()
{ flag &= ~VK_IMAGE_ASPECT_METADATA_BIT; return *this; }



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
VkSparseImageFormatFlagBits F_sparse_image_format::get()
{ return (VkSparseImageFormatFlagBits)flag;}
F_sparse_image_format& F_sparse_image_format::e_single_miptail_on()
{ flag |= VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::e_single_miptail_off()
{ flag &= ~VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::e_single_miptail_on()
{ flag |= VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::e_single_miptail_off()
{ flag &= ~VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::e_single_miptail_on()
{ flag |= VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT; return *this; }

F_sparse_image_format& F_sparse_image_format::e_single_miptail_off()
{ flag &= ~VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT; return *this; }



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
VkSparseMemoryBindFlagBits F_sparse_memory_bind::get()
{ return (VkSparseMemoryBindFlagBits)flag;}
F_sparse_memory_bind& F_sparse_memory_bind::e_metadata_on()
{ flag |= VK_SPARSE_MEMORY_BIND_METADATA_BIT; return *this; }

F_sparse_memory_bind& F_sparse_memory_bind::e_metadata_off()
{ flag &= ~VK_SPARSE_MEMORY_BIND_METADATA_BIT; return *this; }



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
VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
}
VkPipelineStageFlagBits F_pipeline_stage::get()
{ return (VkPipelineStageFlagBits)flag;}
F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_VERTEX_INPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_VERTEX_INPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_VERTEX_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_VERTEX_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_TRANSFER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_TRANSFER_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_HOST_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_HOST_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_on()
{ flag |= VK_PIPELINE_STAGE_ALL_COMMANDS_BIT; return *this; }

F_pipeline_stage& F_pipeline_stage::e_top_of_pipe_off()
{ flag &= ~VK_PIPELINE_STAGE_ALL_COMMANDS_BIT; return *this; }



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
VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
}
VkCommandPoolCreateFlagBits F_command_pool_create::get()
{ return (VkCommandPoolCreateFlagBits)flag;}
F_command_pool_create& F_command_pool_create::e_transient_on()
{ flag |= VK_COMMAND_POOL_CREATE_TRANSIENT_BIT; return *this; }

F_command_pool_create& F_command_pool_create::e_transient_off()
{ flag &= ~VK_COMMAND_POOL_CREATE_TRANSIENT_BIT; return *this; }

F_command_pool_create& F_command_pool_create::e_transient_on()
{ flag |= VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT; return *this; }

F_command_pool_create& F_command_pool_create::e_transient_off()
{ flag &= ~VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT; return *this; }



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
VkCommandPoolResetFlagBits F_command_pool_reset::get()
{ return (VkCommandPoolResetFlagBits)flag;}
F_command_pool_reset& F_command_pool_reset::e_release_resources_on()
{ flag |= VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT; return *this; }

F_command_pool_reset& F_command_pool_reset::e_release_resources_off()
{ flag &= ~VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT; return *this; }



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
VkCommandBufferResetFlagBits F_command_buffer_reset::get()
{ return (VkCommandBufferResetFlagBits)flag;}
F_command_buffer_reset& F_command_buffer_reset::e_release_resources_on()
{ flag |= VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT; return *this; }

F_command_buffer_reset& F_command_buffer_reset::e_release_resources_off()
{ flag &= ~VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT; return *this; }



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
VkSampleCountFlagBits F_sample_count::get()
{ return (VkSampleCountFlagBits)flag;}
F_sample_count& F_sample_count::e_1_on()
{ flag |= VK_SAMPLE_COUNT_1_BIT; return *this; }

F_sample_count& F_sample_count::e_1_off()
{ flag &= ~VK_SAMPLE_COUNT_1_BIT; return *this; }

F_sample_count& F_sample_count::e_1_on()
{ flag |= VK_SAMPLE_COUNT_2_BIT; return *this; }

F_sample_count& F_sample_count::e_1_off()
{ flag &= ~VK_SAMPLE_COUNT_2_BIT; return *this; }

F_sample_count& F_sample_count::e_1_on()
{ flag |= VK_SAMPLE_COUNT_4_BIT; return *this; }

F_sample_count& F_sample_count::e_1_off()
{ flag &= ~VK_SAMPLE_COUNT_4_BIT; return *this; }

F_sample_count& F_sample_count::e_1_on()
{ flag |= VK_SAMPLE_COUNT_8_BIT; return *this; }

F_sample_count& F_sample_count::e_1_off()
{ flag &= ~VK_SAMPLE_COUNT_8_BIT; return *this; }

F_sample_count& F_sample_count::e_1_on()
{ flag |= VK_SAMPLE_COUNT_16_BIT; return *this; }

F_sample_count& F_sample_count::e_1_off()
{ flag &= ~VK_SAMPLE_COUNT_16_BIT; return *this; }

F_sample_count& F_sample_count::e_1_on()
{ flag |= VK_SAMPLE_COUNT_32_BIT; return *this; }

F_sample_count& F_sample_count::e_1_off()
{ flag &= ~VK_SAMPLE_COUNT_32_BIT; return *this; }

F_sample_count& F_sample_count::e_1_on()
{ flag |= VK_SAMPLE_COUNT_64_BIT; return *this; }

F_sample_count& F_sample_count::e_1_off()
{ flag &= ~VK_SAMPLE_COUNT_64_BIT; return *this; }



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
VkAttachmentDescriptionFlagBits F_attachment_description::get()
{ return (VkAttachmentDescriptionFlagBits)flag;}
F_attachment_description& F_attachment_description::e_may_alias_on()
{ flag |= VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT; return *this; }

F_attachment_description& F_attachment_description::e_may_alias_off()
{ flag &= ~VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT; return *this; }



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
VkStencilFaceFlagBits F_stencil_face::get()
{ return (VkStencilFaceFlagBits)flag;}
F_stencil_face& F_stencil_face::e_front_on()
{ flag |= VK_STENCIL_FACE_FRONT_BIT; return *this; }

F_stencil_face& F_stencil_face::e_front_off()
{ flag &= ~VK_STENCIL_FACE_FRONT_BIT; return *this; }

F_stencil_face& F_stencil_face::e_front_on()
{ flag |= VK_STENCIL_FACE_BACK_BIT; return *this; }

F_stencil_face& F_stencil_face::e_front_off()
{ flag &= ~VK_STENCIL_FACE_BACK_BIT; return *this; }

F_stencil_face& F_stencil_face::e_front_on()
{ flag |= VK_STENCIL_FRONT_AND_BACK; return *this; }

F_stencil_face& F_stencil_face::e_front_off()
{ flag &= ~VK_STENCIL_FRONT_AND_BACK; return *this; }



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
 return VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
}
VkDescriptorPoolCreateFlagBits F_descriptor_pool_create::get()
{ return (VkDescriptorPoolCreateFlagBits)flag;}
F_descriptor_pool_create& F_descriptor_pool_create::e_free_descriptor_set_on()
{ flag |= VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT; return *this; }

F_descriptor_pool_create& F_descriptor_pool_create::e_free_descriptor_set_off()
{ flag &= ~VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT; return *this; }



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
 return VK_DEPENDENCY_BY_REGION_BIT;
}
VkDependencyFlagBits F_dependency::get()
{ return (VkDependencyFlagBits)flag;}
F_dependency& F_dependency::e_by_region_on()
{ flag |= VK_DEPENDENCY_BY_REGION_BIT; return *this; }

F_dependency& F_dependency::e_by_region_off()
{ flag &= ~VK_DEPENDENCY_BY_REGION_BIT; return *this; }



F_display_plane_alpha_khr::F_display_plane_alpha_khr():flag(0){}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(F_display_plane_alpha_khr::Bits bits_):flag(static_cast<int>(bits_)){}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(F_display_plane_alpha_khr const& flag_):flag(flag_.flag){}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator = (F_display_plane_alpha_khr flag_){flag = flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator | (F_display_plane_alpha_khr flag_){return flag | flag_.flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator |= (F_display_plane_alpha_khr flag_){flag |= flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator & (F_display_plane_alpha_khr flag_){return flag & flag_.flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator &= (F_display_plane_alpha_khr flag_){flag &= flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator ^ (F_display_plane_alpha_khr flag_){return flag ^ flag_.flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::operator ^= (F_display_plane_alpha_khr flag_){flag ^= flag_.flag;return *this;}
F_display_plane_alpha_khr F_display_plane_alpha_khr::operator ~ (){return all_flags().flag^flag;}
bool F_display_plane_alpha_khr::operator !(){return !flag;}
bool F_display_plane_alpha_khr::operator == (F_display_plane_alpha_khr flag_){return flag == flag_.flag;}
bool F_display_plane_alpha_khr::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_display_plane_alpha_khr::operator != (F_display_plane_alpha_khr flag_){return flag != flag_.flag;}
bool F_display_plane_alpha_khr::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_display_plane_alpha_khr::operator bool(){return !!flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::clear(){flag = 0;return *this;}
F_display_plane_alpha_khr operator|(F_display_plane_alpha_khr::Bits bit1_, F_display_plane_alpha_khr::Bits bit2_){F_display_plane_alpha_khr flags(bit1_);return flags | bit2_;}
F_display_plane_alpha_khr::F_display_plane_alpha_khr(int flags_):flag(flags_) {}
F_display_plane_alpha_khr F_display_plane_alpha_khr::all_flags(){
 return VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR | 
VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
}
VkDisplayPlaneAlphaFlagBitsKHR F_display_plane_alpha_khr::get()
{ return (VkDisplayPlaneAlphaFlagBitsKHR)flag;}
F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR; return *this; }

F_display_plane_alpha_khr& F_display_plane_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR; return *this; }



F_composite_alpha_khr::F_composite_alpha_khr():flag(0){}
F_composite_alpha_khr::F_composite_alpha_khr(F_composite_alpha_khr::Bits bits_):flag(static_cast<int>(bits_)){}
F_composite_alpha_khr::F_composite_alpha_khr(F_composite_alpha_khr const& flag_):flag(flag_.flag){}
F_composite_alpha_khr::F_composite_alpha_khr(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_composite_alpha_khr& F_composite_alpha_khr::operator = (F_composite_alpha_khr flag_){flag = flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_composite_alpha_khr& F_composite_alpha_khr::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator | (F_composite_alpha_khr flag_){return flag | flag_.flag;}
F_composite_alpha_khr& F_composite_alpha_khr::operator |= (F_composite_alpha_khr flag_){flag |= flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator & (F_composite_alpha_khr flag_){return flag & flag_.flag;}
F_composite_alpha_khr& F_composite_alpha_khr::operator &= (F_composite_alpha_khr flag_){flag &= flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator ^ (F_composite_alpha_khr flag_){return flag ^ flag_.flag;}
F_composite_alpha_khr& F_composite_alpha_khr::operator ^= (F_composite_alpha_khr flag_){flag ^= flag_.flag;return *this;}
F_composite_alpha_khr F_composite_alpha_khr::operator ~ (){return all_flags().flag^flag;}
bool F_composite_alpha_khr::operator !(){return !flag;}
bool F_composite_alpha_khr::operator == (F_composite_alpha_khr flag_){return flag == flag_.flag;}
bool F_composite_alpha_khr::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_composite_alpha_khr::operator != (F_composite_alpha_khr flag_){return flag != flag_.flag;}
bool F_composite_alpha_khr::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_composite_alpha_khr::operator bool(){return !!flag;}
F_composite_alpha_khr& F_composite_alpha_khr::clear(){flag = 0;return *this;}
F_composite_alpha_khr operator|(F_composite_alpha_khr::Bits bit1_, F_composite_alpha_khr::Bits bit2_){F_composite_alpha_khr flags(bit1_);return flags | bit2_;}
F_composite_alpha_khr::F_composite_alpha_khr(int flags_):flag(flags_) {}
F_composite_alpha_khr F_composite_alpha_khr::all_flags(){
 return VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR | 
VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR | 
VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR | 
VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
}
VkCompositeAlphaFlagBitsKHR F_composite_alpha_khr::get()
{ return (VkCompositeAlphaFlagBitsKHR)flag;}
F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_on()
{ flag |= VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; return *this; }

F_composite_alpha_khr& F_composite_alpha_khr::e_opaque_bit_khr_off()
{ flag &= ~VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; return *this; }



F_surface_transform_khr::F_surface_transform_khr():flag(0){}
F_surface_transform_khr::F_surface_transform_khr(F_surface_transform_khr::Bits bits_):flag(static_cast<int>(bits_)){}
F_surface_transform_khr::F_surface_transform_khr(F_surface_transform_khr const& flag_):flag(flag_.flag){}
F_surface_transform_khr::F_surface_transform_khr(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_transform_khr& F_surface_transform_khr::operator = (F_surface_transform_khr flag_){flag = flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_surface_transform_khr& F_surface_transform_khr::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_transform_khr F_surface_transform_khr::operator | (F_surface_transform_khr flag_){return flag | flag_.flag;}
F_surface_transform_khr& F_surface_transform_khr::operator |= (F_surface_transform_khr flag_){flag |= flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator & (F_surface_transform_khr flag_){return flag & flag_.flag;}
F_surface_transform_khr& F_surface_transform_khr::operator &= (F_surface_transform_khr flag_){flag &= flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator ^ (F_surface_transform_khr flag_){return flag ^ flag_.flag;}
F_surface_transform_khr& F_surface_transform_khr::operator ^= (F_surface_transform_khr flag_){flag ^= flag_.flag;return *this;}
F_surface_transform_khr F_surface_transform_khr::operator ~ (){return all_flags().flag^flag;}
bool F_surface_transform_khr::operator !(){return !flag;}
bool F_surface_transform_khr::operator == (F_surface_transform_khr flag_){return flag == flag_.flag;}
bool F_surface_transform_khr::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_surface_transform_khr::operator != (F_surface_transform_khr flag_){return flag != flag_.flag;}
bool F_surface_transform_khr::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_surface_transform_khr::operator bool(){return !!flag;}
F_surface_transform_khr& F_surface_transform_khr::clear(){flag = 0;return *this;}
F_surface_transform_khr operator|(F_surface_transform_khr::Bits bit1_, F_surface_transform_khr::Bits bit2_){F_surface_transform_khr flags(bit1_);return flags | bit2_;}
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
F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_on()
{ flag |= VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR; return *this; }

F_surface_transform_khr& F_surface_transform_khr::e_identity_bit_khr_off()
{ flag &= ~VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR; return *this; }



F_debug_report_ext::F_debug_report_ext():flag(0){}
F_debug_report_ext::F_debug_report_ext(F_debug_report_ext::Bits bits_):flag(static_cast<int>(bits_)){}
F_debug_report_ext::F_debug_report_ext(F_debug_report_ext const& flag_):flag(flag_.flag){}
F_debug_report_ext::F_debug_report_ext(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_report_ext& F_debug_report_ext::operator = (F_debug_report_ext flag_){flag = flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_debug_report_ext& F_debug_report_ext::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_report_ext F_debug_report_ext::operator | (F_debug_report_ext flag_){return flag | flag_.flag;}
F_debug_report_ext& F_debug_report_ext::operator |= (F_debug_report_ext flag_){flag |= flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator & (F_debug_report_ext flag_){return flag & flag_.flag;}
F_debug_report_ext& F_debug_report_ext::operator &= (F_debug_report_ext flag_){flag &= flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator ^ (F_debug_report_ext flag_){return flag ^ flag_.flag;}
F_debug_report_ext& F_debug_report_ext::operator ^= (F_debug_report_ext flag_){flag ^= flag_.flag;return *this;}
F_debug_report_ext F_debug_report_ext::operator ~ (){return all_flags().flag^flag;}
bool F_debug_report_ext::operator !(){return !flag;}
bool F_debug_report_ext::operator == (F_debug_report_ext flag_){return flag == flag_.flag;}
bool F_debug_report_ext::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_debug_report_ext::operator != (F_debug_report_ext flag_){return flag != flag_.flag;}
bool F_debug_report_ext::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_debug_report_ext::operator bool(){return !!flag;}
F_debug_report_ext& F_debug_report_ext::clear(){flag = 0;return *this;}
F_debug_report_ext operator|(F_debug_report_ext::Bits bit1_, F_debug_report_ext::Bits bit2_){F_debug_report_ext flags(bit1_);return flags | bit2_;}
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
F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_on()
{ flag |= VK_DEBUG_REPORT_INFORMATION_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_off()
{ flag &= ~VK_DEBUG_REPORT_INFORMATION_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_on()
{ flag |= VK_DEBUG_REPORT_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_off()
{ flag &= ~VK_DEBUG_REPORT_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_on()
{ flag |= VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_off()
{ flag &= ~VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_on()
{ flag |= VK_DEBUG_REPORT_ERROR_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_off()
{ flag &= ~VK_DEBUG_REPORT_ERROR_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_on()
{ flag |= VK_DEBUG_REPORT_DEBUG_BIT_EXT; return *this; }

F_debug_report_ext& F_debug_report_ext::e_information_bit_ext_off()
{ flag &= ~VK_DEBUG_REPORT_DEBUG_BIT_EXT; return *this; }



F_external_memory_handle_type_nv::F_external_memory_handle_type_nv():flag(0){}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(F_external_memory_handle_type_nv::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(F_external_memory_handle_type_nv const& flag_):flag(flag_.flag){}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator = (F_external_memory_handle_type_nv flag_){flag = flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator | (F_external_memory_handle_type_nv flag_){return flag | flag_.flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator |= (F_external_memory_handle_type_nv flag_){flag |= flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator & (F_external_memory_handle_type_nv flag_){return flag & flag_.flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator &= (F_external_memory_handle_type_nv flag_){flag &= flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator ^ (F_external_memory_handle_type_nv flag_){return flag ^ flag_.flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::operator ^= (F_external_memory_handle_type_nv flag_){flag ^= flag_.flag;return *this;}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_handle_type_nv::operator !(){return !flag;}
bool F_external_memory_handle_type_nv::operator == (F_external_memory_handle_type_nv flag_){return flag == flag_.flag;}
bool F_external_memory_handle_type_nv::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_handle_type_nv::operator != (F_external_memory_handle_type_nv flag_){return flag != flag_.flag;}
bool F_external_memory_handle_type_nv::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_memory_handle_type_nv::operator bool(){return !!flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::clear(){flag = 0;return *this;}
F_external_memory_handle_type_nv operator|(F_external_memory_handle_type_nv::Bits bit1_, F_external_memory_handle_type_nv::Bits bit2_){F_external_memory_handle_type_nv flags(bit1_);return flags | bit2_;}
F_external_memory_handle_type_nv::F_external_memory_handle_type_nv(int flags_):flag(flags_) {}
F_external_memory_handle_type_nv F_external_memory_handle_type_nv::all_flags(){
 return VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV | 
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV;
}
VkExternalMemoryHandleTypeFlagBitsNV F_external_memory_handle_type_nv::get()
{ return (VkExternalMemoryHandleTypeFlagBitsNV)flag;}
F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV; return *this; }

F_external_memory_handle_type_nv& F_external_memory_handle_type_nv::e_opaque_win32_bit_nv_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV; return *this; }



F_external_memory_feature_nv::F_external_memory_feature_nv():flag(0){}
F_external_memory_feature_nv::F_external_memory_feature_nv(F_external_memory_feature_nv::Bits bits_):flag(static_cast<int>(bits_)){}
F_external_memory_feature_nv::F_external_memory_feature_nv(F_external_memory_feature_nv const& flag_):flag(flag_.flag){}
F_external_memory_feature_nv::F_external_memory_feature_nv(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator = (F_external_memory_feature_nv flag_){flag = flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator | (F_external_memory_feature_nv flag_){return flag | flag_.flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator |= (F_external_memory_feature_nv flag_){flag |= flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator & (F_external_memory_feature_nv flag_){return flag & flag_.flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator &= (F_external_memory_feature_nv flag_){flag &= flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator ^ (F_external_memory_feature_nv flag_){return flag ^ flag_.flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::operator ^= (F_external_memory_feature_nv flag_){flag ^= flag_.flag;return *this;}
F_external_memory_feature_nv F_external_memory_feature_nv::operator ~ (){return all_flags().flag^flag;}
bool F_external_memory_feature_nv::operator !(){return !flag;}
bool F_external_memory_feature_nv::operator == (F_external_memory_feature_nv flag_){return flag == flag_.flag;}
bool F_external_memory_feature_nv::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_external_memory_feature_nv::operator != (F_external_memory_feature_nv flag_){return flag != flag_.flag;}
bool F_external_memory_feature_nv::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_external_memory_feature_nv::operator bool(){return !!flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::clear(){flag = 0;return *this;}
F_external_memory_feature_nv operator|(F_external_memory_feature_nv::Bits bit1_, F_external_memory_feature_nv::Bits bit2_){F_external_memory_feature_nv flags(bit1_);return flags | bit2_;}
F_external_memory_feature_nv::F_external_memory_feature_nv(int flags_):flag(flags_) {}
F_external_memory_feature_nv F_external_memory_feature_nv::all_flags(){
 return VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV | 
VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV | 
VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV;
}
VkExternalMemoryFeatureFlagBitsNV F_external_memory_feature_nv::get()
{ return (VkExternalMemoryFeatureFlagBitsNV)flag;}
F_external_memory_feature_nv& F_external_memory_feature_nv::e_dedicated_only_bit_nv_on()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::e_dedicated_only_bit_nv_off()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::e_dedicated_only_bit_nv_on()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::e_dedicated_only_bit_nv_off()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::e_dedicated_only_bit_nv_on()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV; return *this; }

F_external_memory_feature_nv& F_external_memory_feature_nv::e_dedicated_only_bit_nv_off()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV; return *this; }



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
VK_SUBGROUP_FEATURE_QUAD_BIT;
}
VkSubgroupFeatureFlagBits F_subgroup_feature::get()
{ return (VkSubgroupFeatureFlagBits)flag;}
F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_BASIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_BASIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_VOTE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_VOTE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_ARITHMETIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_ARITHMETIC_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_BALLOT_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_BALLOT_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_SHUFFLE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_SHUFFLE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_CLUSTERED_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_CLUSTERED_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_on()
{ flag |= VK_SUBGROUP_FEATURE_QUAD_BIT; return *this; }

F_subgroup_feature& F_subgroup_feature::e_basic_off()
{ flag &= ~VK_SUBGROUP_FEATURE_QUAD_BIT; return *this; }



F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx():flag(0){}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(F_indirect_commands_layout_usage_nvx::Bits bits_):flag(static_cast<int>(bits_)){}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(F_indirect_commands_layout_usage_nvx const& flag_):flag(flag_.flag){}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator = (F_indirect_commands_layout_usage_nvx flag_){flag = flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator | (F_indirect_commands_layout_usage_nvx flag_){return flag | flag_.flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator |= (F_indirect_commands_layout_usage_nvx flag_){flag |= flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator & (F_indirect_commands_layout_usage_nvx flag_){return flag & flag_.flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator &= (F_indirect_commands_layout_usage_nvx flag_){flag &= flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator ^ (F_indirect_commands_layout_usage_nvx flag_){return flag ^ flag_.flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::operator ^= (F_indirect_commands_layout_usage_nvx flag_){flag ^= flag_.flag;return *this;}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_indirect_commands_layout_usage_nvx::operator !(){return !flag;}
bool F_indirect_commands_layout_usage_nvx::operator == (F_indirect_commands_layout_usage_nvx flag_){return flag == flag_.flag;}
bool F_indirect_commands_layout_usage_nvx::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_indirect_commands_layout_usage_nvx::operator != (F_indirect_commands_layout_usage_nvx flag_){return flag != flag_.flag;}
bool F_indirect_commands_layout_usage_nvx::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_indirect_commands_layout_usage_nvx::operator bool(){return !!flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::clear(){flag = 0;return *this;}
F_indirect_commands_layout_usage_nvx operator|(F_indirect_commands_layout_usage_nvx::Bits bit1_, F_indirect_commands_layout_usage_nvx::Bits bit2_){F_indirect_commands_layout_usage_nvx flags(bit1_);return flags | bit2_;}
F_indirect_commands_layout_usage_nvx::F_indirect_commands_layout_usage_nvx(int flags_):flag(flags_) {}
F_indirect_commands_layout_usage_nvx F_indirect_commands_layout_usage_nvx::all_flags(){
 return VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX | 
VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX;
}
VkIndirectCommandsLayoutUsageFlagBitsNVX F_indirect_commands_layout_usage_nvx::get()
{ return (VkIndirectCommandsLayoutUsageFlagBitsNVX)flag;}
F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_on()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_off()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_on()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_off()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_on()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_off()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_on()
{ flag |= VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX; return *this; }

F_indirect_commands_layout_usage_nvx& F_indirect_commands_layout_usage_nvx::e_unordered_sequences_bit_nvx_off()
{ flag &= ~VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX; return *this; }



F_object_entry_usage_nvx::F_object_entry_usage_nvx():flag(0){}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(F_object_entry_usage_nvx::Bits bits_):flag(static_cast<int>(bits_)){}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(F_object_entry_usage_nvx const& flag_):flag(flag_.flag){}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator = (F_object_entry_usage_nvx flag_){flag = flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator | (F_object_entry_usage_nvx flag_){return flag | flag_.flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator |= (F_object_entry_usage_nvx flag_){flag |= flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator & (F_object_entry_usage_nvx flag_){return flag & flag_.flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator &= (F_object_entry_usage_nvx flag_){flag &= flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator ^ (F_object_entry_usage_nvx flag_){return flag ^ flag_.flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::operator ^= (F_object_entry_usage_nvx flag_){flag ^= flag_.flag;return *this;}
F_object_entry_usage_nvx F_object_entry_usage_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_object_entry_usage_nvx::operator !(){return !flag;}
bool F_object_entry_usage_nvx::operator == (F_object_entry_usage_nvx flag_){return flag == flag_.flag;}
bool F_object_entry_usage_nvx::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_object_entry_usage_nvx::operator != (F_object_entry_usage_nvx flag_){return flag != flag_.flag;}
bool F_object_entry_usage_nvx::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_object_entry_usage_nvx::operator bool(){return !!flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::clear(){flag = 0;return *this;}
F_object_entry_usage_nvx operator|(F_object_entry_usage_nvx::Bits bit1_, F_object_entry_usage_nvx::Bits bit2_){F_object_entry_usage_nvx flags(bit1_);return flags | bit2_;}
F_object_entry_usage_nvx::F_object_entry_usage_nvx(int flags_):flag(flags_) {}
F_object_entry_usage_nvx F_object_entry_usage_nvx::all_flags(){
 return VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX | 
VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX;
}
VkObjectEntryUsageFlagBitsNVX F_object_entry_usage_nvx::get()
{ return (VkObjectEntryUsageFlagBitsNVX)flag;}
F_object_entry_usage_nvx& F_object_entry_usage_nvx::e_graphics_bit_nvx_on()
{ flag |= VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX; return *this; }

F_object_entry_usage_nvx& F_object_entry_usage_nvx::e_graphics_bit_nvx_off()
{ flag &= ~VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX; return *this; }

F_object_entry_usage_nvx& F_object_entry_usage_nvx::e_graphics_bit_nvx_on()
{ flag |= VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX; return *this; }

F_object_entry_usage_nvx& F_object_entry_usage_nvx::e_graphics_bit_nvx_off()
{ flag &= ~VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX; return *this; }



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
VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT;
}
VkExternalMemoryHandleTypeFlagBits F_external_memory_handle_type::get()
{ return (VkExternalMemoryHandleTypeFlagBits)flag;}
F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT; return *this; }

F_external_memory_handle_type& F_external_memory_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT; return *this; }



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
VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT;
}
VkExternalMemoryFeatureFlagBits F_external_memory_feature::get()
{ return (VkExternalMemoryFeatureFlagBits)flag;}
F_external_memory_feature& F_external_memory_feature::e_dedicated_only_on()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::e_dedicated_only_off()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::e_dedicated_only_on()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::e_dedicated_only_off()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::e_dedicated_only_on()
{ flag |= VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT; return *this; }

F_external_memory_feature& F_external_memory_feature::e_dedicated_only_off()
{ flag &= ~VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT; return *this; }



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
VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT;
}
VkExternalSemaphoreHandleTypeFlagBits F_external_semaphore_handle_type::get()
{ return (VkExternalSemaphoreHandleTypeFlagBits)flag;}
F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }

F_external_semaphore_handle_type& F_external_semaphore_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }



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
VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT;
}
VkExternalSemaphoreFeatureFlagBits F_external_semaphore_feature::get()
{ return (VkExternalSemaphoreFeatureFlagBits)flag;}
F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_on()
{ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_off()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_on()
{ flag |= VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT; return *this; }

F_external_semaphore_feature& F_external_semaphore_feature::e_exportable_off()
{ flag &= ~VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT; return *this; }



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
 return VK_SEMAPHORE_IMPORT_TEMPORARY_BIT;
}
VkSemaphoreImportFlagBits F_semaphore_import::get()
{ return (VkSemaphoreImportFlagBits)flag;}
F_semaphore_import& F_semaphore_import::e_temporary_on()
{ flag |= VK_SEMAPHORE_IMPORT_TEMPORARY_BIT; return *this; }

F_semaphore_import& F_semaphore_import::e_temporary_off()
{ flag &= ~VK_SEMAPHORE_IMPORT_TEMPORARY_BIT; return *this; }



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
VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT;
}
VkExternalFenceHandleTypeFlagBits F_external_fence_handle_type::get()
{ return (VkExternalFenceHandleTypeFlagBits)flag;}
F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_on()
{ flag |= VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }

F_external_fence_handle_type& F_external_fence_handle_type::e_opaque_fd_off()
{ flag &= ~VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT; return *this; }



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
VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT;
}
VkExternalFenceFeatureFlagBits F_external_fence_feature::get()
{ return (VkExternalFenceFeatureFlagBits)flag;}
F_external_fence_feature& F_external_fence_feature::e_exportable_on()
{ flag |= VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_fence_feature& F_external_fence_feature::e_exportable_off()
{ flag &= ~VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT; return *this; }

F_external_fence_feature& F_external_fence_feature::e_exportable_on()
{ flag |= VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT; return *this; }

F_external_fence_feature& F_external_fence_feature::e_exportable_off()
{ flag &= ~VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT; return *this; }



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
 return VK_FENCE_IMPORT_TEMPORARY_BIT;
}
VkFenceImportFlagBits F_fence_import::get()
{ return (VkFenceImportFlagBits)flag;}
F_fence_import& F_fence_import::e_temporary_on()
{ flag |= VK_FENCE_IMPORT_TEMPORARY_BIT; return *this; }

F_fence_import& F_fence_import::e_temporary_off()
{ flag &= ~VK_FENCE_IMPORT_TEMPORARY_BIT; return *this; }



F_surface_counter_ext::F_surface_counter_ext():flag(0){}
F_surface_counter_ext::F_surface_counter_ext(F_surface_counter_ext::Bits bits_):flag(static_cast<int>(bits_)){}
F_surface_counter_ext::F_surface_counter_ext(F_surface_counter_ext const& flag_):flag(flag_.flag){}
F_surface_counter_ext::F_surface_counter_ext(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_surface_counter_ext& F_surface_counter_ext::operator = (F_surface_counter_ext flag_){flag = flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_surface_counter_ext& F_surface_counter_ext::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_surface_counter_ext F_surface_counter_ext::operator | (F_surface_counter_ext flag_){return flag | flag_.flag;}
F_surface_counter_ext& F_surface_counter_ext::operator |= (F_surface_counter_ext flag_){flag |= flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator & (F_surface_counter_ext flag_){return flag & flag_.flag;}
F_surface_counter_ext& F_surface_counter_ext::operator &= (F_surface_counter_ext flag_){flag &= flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator ^ (F_surface_counter_ext flag_){return flag ^ flag_.flag;}
F_surface_counter_ext& F_surface_counter_ext::operator ^= (F_surface_counter_ext flag_){flag ^= flag_.flag;return *this;}
F_surface_counter_ext F_surface_counter_ext::operator ~ (){return all_flags().flag^flag;}
bool F_surface_counter_ext::operator !(){return !flag;}
bool F_surface_counter_ext::operator == (F_surface_counter_ext flag_){return flag == flag_.flag;}
bool F_surface_counter_ext::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_surface_counter_ext::operator != (F_surface_counter_ext flag_){return flag != flag_.flag;}
bool F_surface_counter_ext::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_surface_counter_ext::operator bool(){return !!flag;}
F_surface_counter_ext& F_surface_counter_ext::clear(){flag = 0;return *this;}
F_surface_counter_ext operator|(F_surface_counter_ext::Bits bit1_, F_surface_counter_ext::Bits bit2_){F_surface_counter_ext flags(bit1_);return flags | bit2_;}
F_surface_counter_ext::F_surface_counter_ext(int flags_):flag(flags_) {}
F_surface_counter_ext F_surface_counter_ext::all_flags(){
 return VK_SURFACE_COUNTER_VBLANK_EXT;
}
VkSurfaceCounterFlagBitsEXT F_surface_counter_ext::get()
{ return (VkSurfaceCounterFlagBitsEXT)flag;}
F_surface_counter_ext& F_surface_counter_ext::e_vblank_ext_on()
{ flag |= VK_SURFACE_COUNTER_VBLANK_EXT; return *this; }

F_surface_counter_ext& F_surface_counter_ext::e_vblank_ext_off()
{ flag &= ~VK_SURFACE_COUNTER_VBLANK_EXT; return *this; }



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
VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT;
}
VkPeerMemoryFeatureFlagBits F_peer_memory_feature::get()
{ return (VkPeerMemoryFeatureFlagBits)flag;}
F_peer_memory_feature& F_peer_memory_feature::e_copy_src_on()
{ flag |= VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::e_copy_src_off()
{ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::e_copy_src_on()
{ flag |= VK_PEER_MEMORY_FEATURE_COPY_DST_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::e_copy_src_off()
{ flag &= ~VK_PEER_MEMORY_FEATURE_COPY_DST_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::e_copy_src_on()
{ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::e_copy_src_off()
{ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::e_copy_src_on()
{ flag |= VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT; return *this; }

F_peer_memory_feature& F_peer_memory_feature::e_copy_src_off()
{ flag &= ~VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT; return *this; }



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
 return VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT;
}
VkMemoryAllocateFlagBits F_memory_allocate::get()
{ return (VkMemoryAllocateFlagBits)flag;}
F_memory_allocate& F_memory_allocate::e_device_mask_on()
{ flag |= VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT; return *this; }

F_memory_allocate& F_memory_allocate::e_device_mask_off()
{ flag &= ~VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT; return *this; }



F_device_group_present_mode_khr::F_device_group_present_mode_khr():flag(0){}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(F_device_group_present_mode_khr::Bits bits_):flag(static_cast<int>(bits_)){}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(F_device_group_present_mode_khr const& flag_):flag(flag_.flag){}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator = (F_device_group_present_mode_khr flag_){flag = flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator | (F_device_group_present_mode_khr flag_){return flag | flag_.flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator |= (F_device_group_present_mode_khr flag_){flag |= flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator & (F_device_group_present_mode_khr flag_){return flag & flag_.flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator &= (F_device_group_present_mode_khr flag_){flag &= flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator ^ (F_device_group_present_mode_khr flag_){return flag ^ flag_.flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::operator ^= (F_device_group_present_mode_khr flag_){flag ^= flag_.flag;return *this;}
F_device_group_present_mode_khr F_device_group_present_mode_khr::operator ~ (){return all_flags().flag^flag;}
bool F_device_group_present_mode_khr::operator !(){return !flag;}
bool F_device_group_present_mode_khr::operator == (F_device_group_present_mode_khr flag_){return flag == flag_.flag;}
bool F_device_group_present_mode_khr::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_device_group_present_mode_khr::operator != (F_device_group_present_mode_khr flag_){return flag != flag_.flag;}
bool F_device_group_present_mode_khr::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_device_group_present_mode_khr::operator bool(){return !!flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::clear(){flag = 0;return *this;}
F_device_group_present_mode_khr operator|(F_device_group_present_mode_khr::Bits bit1_, F_device_group_present_mode_khr::Bits bit2_){F_device_group_present_mode_khr flags(bit1_);return flags | bit2_;}
F_device_group_present_mode_khr::F_device_group_present_mode_khr(int flags_):flag(flags_) {}
F_device_group_present_mode_khr F_device_group_present_mode_khr::all_flags(){
 return VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR | 
VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR;
}
VkDeviceGroupPresentModeFlagBitsKHR F_device_group_present_mode_khr::get()
{ return (VkDeviceGroupPresentModeFlagBitsKHR)flag;}
F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_on()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_off()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_on()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_off()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_on()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_off()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_on()
{ flag |= VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR; return *this; }

F_device_group_present_mode_khr& F_device_group_present_mode_khr::e_local_bit_khr_off()
{ flag &= ~VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR; return *this; }



F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext():flag(0){}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(F_debug_utils_message_severity_ext::Bits bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(F_debug_utils_message_severity_ext const& flag_):flag(flag_.flag){}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator = (F_debug_utils_message_severity_ext flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator | (F_debug_utils_message_severity_ext flag_){return flag | flag_.flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator |= (F_debug_utils_message_severity_ext flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator & (F_debug_utils_message_severity_ext flag_){return flag & flag_.flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator &= (F_debug_utils_message_severity_ext flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator ^ (F_debug_utils_message_severity_ext flag_){return flag ^ flag_.flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::operator ^= (F_debug_utils_message_severity_ext flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::operator ~ (){return all_flags().flag^flag;}
bool F_debug_utils_message_severity_ext::operator !(){return !flag;}
bool F_debug_utils_message_severity_ext::operator == (F_debug_utils_message_severity_ext flag_){return flag == flag_.flag;}
bool F_debug_utils_message_severity_ext::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_debug_utils_message_severity_ext::operator != (F_debug_utils_message_severity_ext flag_){return flag != flag_.flag;}
bool F_debug_utils_message_severity_ext::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_debug_utils_message_severity_ext::operator bool(){return !!flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::clear(){flag = 0;return *this;}
F_debug_utils_message_severity_ext operator|(F_debug_utils_message_severity_ext::Bits bit1_, F_debug_utils_message_severity_ext::Bits bit2_){F_debug_utils_message_severity_ext flags(bit1_);return flags | bit2_;}
F_debug_utils_message_severity_ext::F_debug_utils_message_severity_ext(int flags_):flag(flags_) {}
F_debug_utils_message_severity_ext F_debug_utils_message_severity_ext::all_flags(){
 return VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
}
VkDebugUtilsMessageSeverityFlagBitsEXT F_debug_utils_message_severity_ext::get()
{ return (VkDebugUtilsMessageSeverityFlagBitsEXT)flag;}
F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_on()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_off()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_on()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_off()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_on()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_off()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_on()
{ flag |= VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT; return *this; }

F_debug_utils_message_severity_ext& F_debug_utils_message_severity_ext::e_verbose_bit_ext_off()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT; return *this; }



F_debug_utils_message_type_ext::F_debug_utils_message_type_ext():flag(0){}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(F_debug_utils_message_type_ext::Bits bits_):flag(static_cast<int>(bits_)){}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(F_debug_utils_message_type_ext const& flag_):flag(flag_.flag){}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator = (F_debug_utils_message_type_ext flag_){flag = flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator | (F_debug_utils_message_type_ext flag_){return flag | flag_.flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator |= (F_debug_utils_message_type_ext flag_){flag |= flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator & (F_debug_utils_message_type_ext flag_){return flag & flag_.flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator &= (F_debug_utils_message_type_ext flag_){flag &= flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator ^ (F_debug_utils_message_type_ext flag_){return flag ^ flag_.flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::operator ^= (F_debug_utils_message_type_ext flag_){flag ^= flag_.flag;return *this;}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::operator ~ (){return all_flags().flag^flag;}
bool F_debug_utils_message_type_ext::operator !(){return !flag;}
bool F_debug_utils_message_type_ext::operator == (F_debug_utils_message_type_ext flag_){return flag == flag_.flag;}
bool F_debug_utils_message_type_ext::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_debug_utils_message_type_ext::operator != (F_debug_utils_message_type_ext flag_){return flag != flag_.flag;}
bool F_debug_utils_message_type_ext::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_debug_utils_message_type_ext::operator bool(){return !!flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::clear(){flag = 0;return *this;}
F_debug_utils_message_type_ext operator|(F_debug_utils_message_type_ext::Bits bit1_, F_debug_utils_message_type_ext::Bits bit2_){F_debug_utils_message_type_ext flags(bit1_);return flags | bit2_;}
F_debug_utils_message_type_ext::F_debug_utils_message_type_ext(int flags_):flag(flags_) {}
F_debug_utils_message_type_ext F_debug_utils_message_type_ext::all_flags(){
 return VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT | 
VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
}
VkDebugUtilsMessageTypeFlagBitsEXT F_debug_utils_message_type_ext::get()
{ return (VkDebugUtilsMessageTypeFlagBitsEXT)flag;}
F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::e_general_bit_ext_on()
{ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::e_general_bit_ext_off()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::e_general_bit_ext_on()
{ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::e_general_bit_ext_off()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::e_general_bit_ext_on()
{ flag |= VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT; return *this; }

F_debug_utils_message_type_ext& F_debug_utils_message_type_ext::e_general_bit_ext_off()
{ flag &= ~VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT; return *this; }



F_descriptor_binding_ext::F_descriptor_binding_ext():flag(0){}
F_descriptor_binding_ext::F_descriptor_binding_ext(F_descriptor_binding_ext::Bits bits_):flag(static_cast<int>(bits_)){}
F_descriptor_binding_ext::F_descriptor_binding_ext(F_descriptor_binding_ext const& flag_):flag(flag_.flag){}
F_descriptor_binding_ext::F_descriptor_binding_ext(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator = (F_descriptor_binding_ext flag_){flag = flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator | (F_descriptor_binding_ext flag_){return flag | flag_.flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator |= (F_descriptor_binding_ext flag_){flag |= flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator & (F_descriptor_binding_ext flag_){return flag & flag_.flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator &= (F_descriptor_binding_ext flag_){flag &= flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator ^ (F_descriptor_binding_ext flag_){return flag ^ flag_.flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::operator ^= (F_descriptor_binding_ext flag_){flag ^= flag_.flag;return *this;}
F_descriptor_binding_ext F_descriptor_binding_ext::operator ~ (){return all_flags().flag^flag;}
bool F_descriptor_binding_ext::operator !(){return !flag;}
bool F_descriptor_binding_ext::operator == (F_descriptor_binding_ext flag_){return flag == flag_.flag;}
bool F_descriptor_binding_ext::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_descriptor_binding_ext::operator != (F_descriptor_binding_ext flag_){return flag != flag_.flag;}
bool F_descriptor_binding_ext::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_descriptor_binding_ext::operator bool(){return !!flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::clear(){flag = 0;return *this;}
F_descriptor_binding_ext operator|(F_descriptor_binding_ext::Bits bit1_, F_descriptor_binding_ext::Bits bit2_){F_descriptor_binding_ext flags(bit1_);return flags | bit2_;}
F_descriptor_binding_ext::F_descriptor_binding_ext(int flags_):flag(flags_) {}
F_descriptor_binding_ext F_descriptor_binding_ext::all_flags(){
 return VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT | 
VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT | 
VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT | 
VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT;
}
VkDescriptorBindingFlagBitsEXT F_descriptor_binding_ext::get()
{ return (VkDescriptorBindingFlagBitsEXT)flag;}
F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_on()
{ flag |= VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_off()
{ flag &= ~VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_on()
{ flag |= VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_off()
{ flag &= ~VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_on()
{ flag |= VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_off()
{ flag &= ~VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_on()
{ flag |= VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT; return *this; }

F_descriptor_binding_ext& F_descriptor_binding_ext::e_update_after_bind_bit_ext_off()
{ flag &= ~VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT; return *this; }


#if 0
F_conditional_rendering_ext::F_conditional_rendering_ext():flag(0){}
F_conditional_rendering_ext::F_conditional_rendering_ext(F_conditional_rendering_ext::Bits bits_):flag(static_cast<int>(bits_)){}
F_conditional_rendering_ext::F_conditional_rendering_ext(F_conditional_rendering_ext const& flag_):flag(flag_.flag){}
F_conditional_rendering_ext::F_conditional_rendering_ext(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator = (F_conditional_rendering_ext flag_){flag = flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator | (F_conditional_rendering_ext flag_){return flag | flag_.flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator |= (F_conditional_rendering_ext flag_){flag |= flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator & (F_conditional_rendering_ext flag_){return flag & flag_.flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator &= (F_conditional_rendering_ext flag_){flag &= flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator ^ (F_conditional_rendering_ext flag_){return flag ^ flag_.flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::operator ^= (F_conditional_rendering_ext flag_){flag ^= flag_.flag;return *this;}
F_conditional_rendering_ext F_conditional_rendering_ext::operator ~ (){return all_flags().flag^flag;}
bool F_conditional_rendering_ext::operator !(){return !flag;}
bool F_conditional_rendering_ext::operator == (F_conditional_rendering_ext flag_){return flag == flag_.flag;}
bool F_conditional_rendering_ext::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_conditional_rendering_ext::operator != (F_conditional_rendering_ext flag_){return flag != flag_.flag;}
bool F_conditional_rendering_ext::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_conditional_rendering_ext::operator bool(){return !!flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::clear(){flag = 0;return *this;}
F_conditional_rendering_ext operator|(F_conditional_rendering_ext::Bits bit1_, F_conditional_rendering_ext::Bits bit2_){F_conditional_rendering_ext flags(bit1_);return flags | bit2_;}
F_conditional_rendering_ext::F_conditional_rendering_ext(int flags_):flag(flags_) {}
F_conditional_rendering_ext F_conditional_rendering_ext::all_flags(){
 return VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT;
}
VkConditionalRenderingFlagBitsEXT F_conditional_rendering_ext::get()
{ return (VkConditionalRenderingFlagBitsEXT)flag;}
F_conditional_rendering_ext& F_conditional_rendering_ext::e_inverted_bit_ext_on()
{ flag |= VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT; return *this; }

F_conditional_rendering_ext& F_conditional_rendering_ext::e_inverted_bit_ext_off()
{ flag &= ~VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT; return *this; }



F_geometry_instance_nvx::F_geometry_instance_nvx():flag(0){}
F_geometry_instance_nvx::F_geometry_instance_nvx(F_geometry_instance_nvx::Bits bits_):flag(static_cast<int>(bits_)){}
F_geometry_instance_nvx::F_geometry_instance_nvx(F_geometry_instance_nvx const& flag_):flag(flag_.flag){}
F_geometry_instance_nvx::F_geometry_instance_nvx(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator = (F_geometry_instance_nvx flag_){flag = flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator | (F_geometry_instance_nvx flag_){return flag | flag_.flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator |= (F_geometry_instance_nvx flag_){flag |= flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator & (F_geometry_instance_nvx flag_){return flag & flag_.flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator &= (F_geometry_instance_nvx flag_){flag &= flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator ^ (F_geometry_instance_nvx flag_){return flag ^ flag_.flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::operator ^= (F_geometry_instance_nvx flag_){flag ^= flag_.flag;return *this;}
F_geometry_instance_nvx F_geometry_instance_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_geometry_instance_nvx::operator !(){return !flag;}
bool F_geometry_instance_nvx::operator == (F_geometry_instance_nvx flag_){return flag == flag_.flag;}
bool F_geometry_instance_nvx::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_geometry_instance_nvx::operator != (F_geometry_instance_nvx flag_){return flag != flag_.flag;}
bool F_geometry_instance_nvx::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_geometry_instance_nvx::operator bool(){return !!flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::clear(){flag = 0;return *this;}
F_geometry_instance_nvx operator|(F_geometry_instance_nvx::Bits bit1_, F_geometry_instance_nvx::Bits bit2_){F_geometry_instance_nvx flags(bit1_);return flags | bit2_;}
F_geometry_instance_nvx::F_geometry_instance_nvx(int flags_):flag(flags_) {}
F_geometry_instance_nvx F_geometry_instance_nvx::all_flags(){
 return VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX | 
VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX | 
VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX | 
VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX;
}
VkGeometryInstanceFlagBitsNVX F_geometry_instance_nvx::get()
{ return (VkGeometryInstanceFlagBitsNVX)flag;}
F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_on()
{ flag |= VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_off()
{ flag &= ~VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_on()
{ flag |= VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_off()
{ flag &= ~VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_FLIP_WINDING_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_on()
{ flag |= VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_off()
{ flag &= ~VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_on()
{ flag |= VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX; return *this; }

F_geometry_instance_nvx& F_geometry_instance_nvx::e_triangle_cull_disable_bit_nvx_off()
{ flag &= ~VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NVX; return *this; }



F_geometry_nvx::F_geometry_nvx():flag(0){}
F_geometry_nvx::F_geometry_nvx(F_geometry_nvx::Bits bits_):flag(static_cast<int>(bits_)){}
F_geometry_nvx::F_geometry_nvx(F_geometry_nvx const& flag_):flag(flag_.flag){}
F_geometry_nvx::F_geometry_nvx(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_geometry_nvx& F_geometry_nvx::operator = (F_geometry_nvx flag_){flag = flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_geometry_nvx& F_geometry_nvx::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_geometry_nvx F_geometry_nvx::operator | (F_geometry_nvx flag_){return flag | flag_.flag;}
F_geometry_nvx& F_geometry_nvx::operator |= (F_geometry_nvx flag_){flag |= flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator & (F_geometry_nvx flag_){return flag & flag_.flag;}
F_geometry_nvx& F_geometry_nvx::operator &= (F_geometry_nvx flag_){flag &= flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator ^ (F_geometry_nvx flag_){return flag ^ flag_.flag;}
F_geometry_nvx& F_geometry_nvx::operator ^= (F_geometry_nvx flag_){flag ^= flag_.flag;return *this;}
F_geometry_nvx F_geometry_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_geometry_nvx::operator !(){return !flag;}
bool F_geometry_nvx::operator == (F_geometry_nvx flag_){return flag == flag_.flag;}
bool F_geometry_nvx::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_geometry_nvx::operator != (F_geometry_nvx flag_){return flag != flag_.flag;}
bool F_geometry_nvx::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_geometry_nvx::operator bool(){return !!flag;}
F_geometry_nvx& F_geometry_nvx::clear(){flag = 0;return *this;}
F_geometry_nvx operator|(F_geometry_nvx::Bits bit1_, F_geometry_nvx::Bits bit2_){F_geometry_nvx flags(bit1_);return flags | bit2_;}
F_geometry_nvx::F_geometry_nvx(int flags_):flag(flags_) {}
F_geometry_nvx F_geometry_nvx::all_flags(){
 return VK_GEOMETRY_OPAQUE_BIT_NVX | 
VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX;
}
VkGeometryFlagBitsNVX F_geometry_nvx::get()
{ return (VkGeometryFlagBitsNVX)flag;}
F_geometry_nvx& F_geometry_nvx::e_opaque_bit_nvx_on()
{ flag |= VK_GEOMETRY_OPAQUE_BIT_NVX; return *this; }

F_geometry_nvx& F_geometry_nvx::e_opaque_bit_nvx_off()
{ flag &= ~VK_GEOMETRY_OPAQUE_BIT_NVX; return *this; }

F_geometry_nvx& F_geometry_nvx::e_opaque_bit_nvx_on()
{ flag |= VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX; return *this; }

F_geometry_nvx& F_geometry_nvx::e_opaque_bit_nvx_off()
{ flag &= ~VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NVX; return *this; }



F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx():flag(0){}
F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx(F_build_acceleration_structure_nvx::Bits bits_):flag(static_cast<int>(bits_)){}
F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx(F_build_acceleration_structure_nvx const& flag_):flag(flag_.flag){}
F_build_acceleration_structure_nvx::F_build_acceleration_structure_nvx(std::initializer_list<Bits> bit_list){for (auto&& bit : bit_list){flag |= static_cast<int>(bit);}}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator = (F_build_acceleration_structure_nvx flag_){flag = flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator | (Bits bit_){return flag | static_cast<int>(bit_);}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator |= (Bits bit_){flag |= static_cast<int>(bit_);return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator | (F_build_acceleration_structure_nvx flag_){return flag | flag_.flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator |= (F_build_acceleration_structure_nvx flag_){flag |= flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator & (F_build_acceleration_structure_nvx flag_){return flag & flag_.flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator &= (F_build_acceleration_structure_nvx flag_){flag &= flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator ^ (F_build_acceleration_structure_nvx flag_){return flag ^ flag_.flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::operator ^= (F_build_acceleration_structure_nvx flag_){flag ^= flag_.flag;return *this;}
F_build_acceleration_structure_nvx F_build_acceleration_structure_nvx::operator ~ (){return all_flags().flag^flag;}
bool F_build_acceleration_structure_nvx::operator !(){return !flag;}
bool F_build_acceleration_structure_nvx::operator == (F_build_acceleration_structure_nvx flag_){return flag == flag_.flag;}
bool F_build_acceleration_structure_nvx::operator == (Bits bit_){return flag == static_cast<int>(bit_);}
bool F_build_acceleration_structure_nvx::operator != (F_build_acceleration_structure_nvx flag_){return flag != flag_.flag;}
bool F_build_acceleration_structure_nvx::operator != (Bits bit_){return flag != static_cast<int>(bit_);}
F_build_acceleration_structure_nvx::operator bool(){return !!flag;}
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::clear(){flag = 0;return *this;}
F_build_acceleration_structure_nvx operator|(F_build_acceleration_structure_nvx::Bits bit1_, F_build_acceleration_structure_nvx::Bits bit2_){F_build_acceleration_structure_nvx flags(bit1_);return flags | bit2_;}
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
F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_on()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_off()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_on()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_off()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_on()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_off()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_on()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_off()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_on()
{ flag |= VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX; return *this; }

F_build_acceleration_structure_nvx& F_build_acceleration_structure_nvx::e_allow_update_bit_nvx_off()
{ flag &= ~VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NVX; return *this; }
#endif



}}

