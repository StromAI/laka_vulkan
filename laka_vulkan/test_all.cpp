/*
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

*/

#include "test.h"
#include "vk.h"

#include <vector>

#include "vk_mean.h"

using namespace std;
using namespace laka::vk;


//要想方便地使用 又要利用类型系统保证安全
//class Ffffuck {
//private:
//    Ffffuck(int flags_) :flag(flags_) {}
//
//public:
//    int flag;
//    enum class Bits {
//        VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT = 0x00000001,
//        VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT = 0x00000002,
//        VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT = 0x00000004,
//        VK_SPARSE_IMAGE_FORMAT_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF,
//    };
//
//    Ffffuck(Bits bits_)
//        :flag(static_cast<int>(bits_) ) 
//    {}
//
//    Ffffuck(Ffffuck const& flag_) 
//        :flag(flag_.flag) 
//    {}
//    
//    Ffffuck(initializer_list<Bits> bit_list)
//    {
//        for (auto&& bit : bit_list)
//        {
//            flag |= static_cast<int>(bit);
//        }
//    }
//
//    Ffffuck& operator = (Ffffuck flag_)
//    {
//        flag = flag_.flag;
//        return *this;
//    }
//
//    Ffffuck operator | (Bits bit_)
//    {
//        return flag | static_cast<int>(bit_);
//    }
//
//    Ffffuck& operator |= (Bits bit_)
//    {
//        flag |= static_cast<int>(bit_);
//        return *this;
//    }
//
//    Ffffuck operator | (Ffffuck flag_)
//    {
//        return flag | flag_.flag;
//    }
//
//    Ffffuck& operator |= (Ffffuck flag_)
//    {
//        flag |= flag_.flag;
//        return *this;
//    }
//    
//    Ffffuck operator & (Ffffuck flag_)
//    {
//        return flag & flag_.flag;
//    }
//
//    Ffffuck& operator &= (Ffffuck flag_)
//    {
//        flag &= flag_.flag;
//        return *this;
//    }
//
//    Ffffuck operator ^ (Ffffuck flag_)
//    {
//        return flag ^ flag_.flag;
//    }
//
//    Ffffuck& operator ^= (Ffffuck flag_)
//    {
//        flag ^= flag_.flag;
//        return *this;
//    }
//
//    Ffffuck operator ~ ()
//    {
//        return all_flags().flag^flag;
//    }
//
//    bool operator !()
//    {
//        return !flag;
//    }
//
//    bool operator == (Ffffuck flag_)
//    {
//        return flag == flag_.flag;
//    }
//
//    bool operator == (Bits bit_)
//    {
//        return flag == static_cast<int>(bit_);
//    }
//
//    bool operator != (Ffffuck flag_)
//    {
//        return flag != flag_.flag;
//    }
//
//    bool operator != (Bits bit_)
//    {
//        return flag != static_cast<int>(bit_);
//    }
//
//    operator bool()
//    {
//        return !!flag;
//    }
//
//    Ffffuck all_flags()
//    {
//        return VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT |
//            VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT |
//            VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT;
//    }
//
//    Ffffuck& clear()
//    {
//        flag = 0;
//        return *this;
//    }
//
//    Ffffuck& e_single_miptail_on() 
//    {
//        (flag |= VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT);
//        return *this;
//    }
//
//    Ffffuck& e_single_miptail_off()
//    {
//        flag &= ~VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT;
//        return *this;
//    }
//};
//
//Ffffuck operator|(Ffffuck::Bits bit1_, Ffffuck::Bits bit2_)
//{
//    Ffffuck flags(bit1_);
//    return flags | bit2_;
//}


/*
/*
struct name:    VkBindImageMemoryInfo
VkBindImageMemoryDeviceGroupInfo
VkBindImageMemorySwapchainInfoKHR
VkBindImagePlaneMemoryInfo
//*/

/*
VkBindImageMemoryInfo
VkBindImageMemoryDeviceGroupInfo
VkBindImageMemorySwapchainInfoKHR
VkBindImagePlaneMemoryInfo
*/

/*
struct BindImageMemoryInfo_base {
protected:
    VkStructureType    sType;
    const void*        pNext;

    BindImageMemoryInfo_base();
    ~BindImageMemoryInfo_base();
public:
    BindImageMemoryInfo_base& operator<<(BindImageMemoryInfo_base& shit);
};

BindImageMemoryInfo_base::BindImageMemoryInfo_base() :pNext(nullptr) {};
BindImageMemoryInfo_base::~BindImageMemoryInfo_base() {};

BindImageMemoryInfo_base& BindImageMemoryInfo_base::operator<<(BindImageMemoryInfo_base& shit_)
{
    shit_.pNext = pNext;
    pNext = &shit_;
    return *this;
}

struct BindImageMemoryInfo :public BindImageMemoryInfo_base {
    VkImage            image;
    VkDeviceMemory     memory;
    VkDeviceSize       memoryOffset;
};

struct BindImageMemroyDeviceGroupInfo :public BindImageMemoryInfo_base{
    uint32_t           deviceIndexCount;
    const uint32_t*    pDeviceIndices;
    uint32_t           splitInstanceBindRegionCount;
    const VkRect2D*    pSplitInstanceBindRegions;
};

//*/




//dfasdfsafds
class Test_fuck {
    void* pNext;
};
class Fuck1 :public Test_fuck {};
class Fuck2 :public Test_fuck {};
class Fuck3 :public Test_fuck {};
//fdsafsdfsd
void test_function(Test_fuck& t)
{
}

void fun(F_queue flags_)
{

}

void test_all()
{
    init_show;

    Test_fuck fuck;
    Fuck1 fuck1;
    Fuck2 fuck2;
    Fuck3 fuck3;

    //封装后的位标的用法
    fun({});
    fun(F_queue::B::b_graphics | F_queue::B::b_compute);
    fun({ F_queue::B::b_compute ,F_queue::B::b_compute});
    F_queue flag_q;
    flag_q.on_compute().on_graphics();//为了能这么用,特意搞成生成代码.
    fun(flag_q);

	vector<int> v_int{0,1,2};

	array<int,3> a_int{3,4,5};

	Array_value<int> array_vint(v_int);

	Array_value<int> array_aint(a_int);
	show_info("实例版本:{}", version_str(get_instance_version()));

	auto instance = Instance::get_new(
		{ VK_KHR_SURFACE_EXTENSION_NAME,surface_extension_name }
	);

	show_info("实例句柄:{}", (void*)instance->handle);
	show_info("空间分配回调函数结构体指针:{}", (void*)instance->allocator_callbacks_ptr);
	show_info("物理设备组数量:", instance->physical_device_groups.size());
	int index = 0;
	for (auto&& group : instance->physical_device_groups)
	{
		show_info("从组{0}创建的逻辑设备是否支持通过VkMemoryAllocateFlagsInfo的deviceMask成员在设备子集上分配设备内存: {1}\n设备数:{2}", index++, group.properties.subsetAllocation == VK_TRUE ? "是" : "否", group.properties.physicalDeviceCount);

		for (int i = 0; i < group.properties.physicalDeviceCount; i++)
		{
			show_info(
				"\n设备 {0} 的实际句柄:{1}"
				"\n设备 {0} 的保存句柄:{2}",
				i,
				(void*)(group.properties.physicalDevices[i]),
				(void*)group.physical_devices[i]->handle
			);
		}
	}

	show_info("全部设备信息:");
	index = 0;
	for (auto&& physical_device : instance->physical_devices)
	{
		show_info(
			"\n设备{}信息:"
			"\n句柄:{}"
			"\n队列数:{}"
			"\n队列信息:",
			index,
			(void*)physical_device.handle,
			physical_device.queue_familys.size()
		);

		for (auto&& qf : physical_device.queue_familys)
		{
			show_info(
				"\n索引:{}"
				"\n队列数:{}"
				, qf.index
				, qf.properties.queueCount
			);
		}

		auto pd_lp = physical_device.get_layer_propertiess();
		show_info("设备层信息:");
		for (auto&& lp : *pd_lp)
		{
			show_info(mean(lp)->c_str());

			auto pd_ext = physical_device.get_extension_properties(lp.layerName);
			show_info("层扩展信息:");
			for (auto&& ext : *pd_ext)
			{
				show_info(mean(ext)->c_str());
			}
		}

		show_info("设备特性:{}", mean(*physical_device.get_features())->c_str());

		//show_info("设备属性:{}", mean(*physical_device.get_properties())->c_str() );

		index++;
	}

	auto dc = instance->get_a_device_creator(
		[](Pramater_choose_physical_device& choose_pd)->bool {
		return true;
	},
		[](Pramater_choose_queue_family& choose_qf)->bool {
		for (auto&& qf_info : choose_qf.give_you_queue_family_info_)
		{
			User_choose_queue_info fuck;
			fuck.queue_family_index = qf_info.index;
			fuck.queue_priorities.resize(10);
			for (auto&& qp : fuck.queue_priorities)
			{
				qp = 1.0;
			}
			choose_qf.waiting_for_your_filled_info_.push_back(fuck);
		}
		return true;
	});

	auto device = dc->get_a_device(instance->physical_devices[0]);

	auto semaphore = device->get_a_semaphore();

	auto fence = device->get_a_fence();

	auto event_temp = device->get_a_event();

    auto buffer = device->get_a_buffer(
        2048, 
        F_buffer_create::b_sparse_binding, 
        F_buffer_usage::b_storage_texel_buffer, 
        E_sharing_mode::e_concurrent,
        { 0,1 }
    );
}