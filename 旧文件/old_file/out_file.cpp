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
#include <initializer_list>

namespace laka { namespace vk {
    class Ffffuck {
    private:
        Ffffuck(int flags_);

    public:
        int flag;
        enum class Bits {
            VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT = 0x00000001,
            VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT = 0x00000002,
            VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT = 0x00000004,
            VK_SPARSE_IMAGE_FORMAT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF,
        };
        Ffffuck(Bits bits_);
        Ffffuck(Ffffuck const& flag_);
        Ffffuck(std::initializer_list<Bits> bit_list);
        Ffffuck& operator = (Ffffuck flag_);
        Ffffuck operator | (Bits bit_);
        Ffffuck& operator |= (Bits bit_);
        Ffffuck operator | (Ffffuck flag_);
        Ffffuck& operator |= (Ffffuck flag_);
        Ffffuck operator & (Ffffuck flag_);
        Ffffuck& operator &= (Ffffuck flag_);
        Ffffuck operator ^ (Ffffuck flag_);
        Ffffuck& operator ^= (Ffffuck flag_);
        Ffffuck operator ~ ();
        bool operator !();
        bool operator == (Ffffuck flag_);
        bool operator == (Bits bit_);
        bool operator != (Ffffuck flag_);
        bool operator != (Bits bit_);
        operator bool();
        Ffffuck all_flags();
        Ffffuck& clear();
        Ffffuck& e_single_miptail_on();
        Ffffuck& e_single_miptail_off();
    };
    Ffffuck operator|(Ffffuck::Bits bit1_, Ffffuck::Bits bit2_);

}}

#include "vk_bits.h"

namespace laka {
    namespace vk {
		Ffffuck(int flag_):flag(flag_){}
        Ffffuck::Ffffuck(Ffffuck::Bits bits_)
            :flag(static_cast<int>(bits_))
        {}

        Ffffuck::Ffffuck(Ffffuck const& flag_)
            :flag(flag_.flag)
        {}

        Ffffuck::Ffffuck(std::initializer_list<Bits> bit_list)
        {
            for (auto&& bit : bit_list)
            {
                flag |= static_cast<int>(bit);
            }
        }

        Ffffuck& Ffffuck::operator = (Ffffuck flag_)
        {
            flag = flag_.flag;
            return *this;
        }

        Ffffuck Ffffuck::operator | (Bits bit_)
        {
            return flag | static_cast<int>(bit_);
        }

        Ffffuck& Ffffuck::operator |= (Bits bit_)
        {
            flag |= static_cast<int>(bit_);
            return *this;
        }

        Ffffuck Ffffuck::operator | (Ffffuck flag_)
        {
            return flag | flag_.flag;
        }

        Ffffuck& Ffffuck::operator |= (Ffffuck flag_)
        {
            flag |= flag_.flag;
            return *this;
        }

        Ffffuck Ffffuck::operator & (Ffffuck flag_)
        {
            return flag & flag_.flag;
        }

        Ffffuck& Ffffuck::operator &= (Ffffuck flag_)
        {
            flag &= flag_.flag;
            return *this;
        }

        Ffffuck Ffffuck::operator ^ (Ffffuck flag_)
        {
            return flag ^ flag_.flag;
        }

        Ffffuck& Ffffuck::operator ^= (Ffffuck flag_)
        {
            flag ^= flag_.flag;
            return *this;
        }

        Ffffuck Ffffuck::operator ~ ()
        {
            return all_flags().flag^flag;
        }

        bool Ffffuck::operator !()
        {
            return !flag;
        }

        bool Ffffuck::operator == (Ffffuck flag_)
        {
            return flag == flag_.flag;
        }

        bool Ffffuck::operator == (Bits bit_)
        {
            return flag == static_cast<int>(bit_);
        }

        bool Ffffuck::operator != (Ffffuck flag_)
        {
            return flag != flag_.flag;
        }

        bool Ffffuck::operator != (Bits bit_)
        {
            return flag != static_cast<int>(bit_);
        }

        Ffffuck::operator bool()
        {
            return !!flag;
        }

        Ffffuck& Ffffuck::clear()
        {
            flag = 0;
            return *this;
        }

        Ffffuck operator|(Ffffuck::Bits bit1_, Ffffuck::Bits bit2_)
        {
            Ffffuck flags(bit1_);
            return flags | bit2_;
        }

        Ffffuck::Ffffuck(int flags_) :flag(flags_) {}

        Ffffuck Ffffuck::all_flags()
        {
            return VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT |
                VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT |
                VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT;
        }

        Ffffuck& Ffffuck::e_single_miptail_on()
        {
            (flag |= VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT);
            return *this;
        }

        Ffffuck& Ffffuck::e_single_miptail_off()
        {
            flag &= ~VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT;
            return *this;
        }
}}







