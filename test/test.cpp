#include "../laka_vulkan/common.h"
#include "../laka_vulkan/types.h"

using namespace laka::vk;

int main()
{
	init_show;

	E_format test_e = E_format::e_undefined;

	E_format test_e2 = {};

	if (test_e2 == test_e)
	{
		printf("E_format test_e2 = {}   real value:E_format::e_undefined");
	}

	F_queue flag_q = {F_queue::b_compute,F_queue::b_sparse_binding};
	F_queue flag_q2 = { F_queue::b_transfer,F_queue::b_graphics };
	flag_q2 |= flag_q;

	printf("flag_q2:%d  flag_q:%d  all_flag:%d", 
		flag_q2.flag, flag_q.flag, flag_q.all_flags().flag);

	S_pipeline_shader_stage_create_info s = {};
	S_geometry_aabb_NVX ss = {};

	S_sampler_create_info sc_info = {
		(VkSamplerCreateFlags)0,
		E_filter::e_linear,
		E_filter::e_nearest,
		E_sampler_mipmap_mode::e_nearest,
		E_sampler_address_mode::e_clamp_to_edge,
		E_sampler_address_mode::e_mirrored_repeat,
		E_sampler_address_mode::e_mirrored_repeat,
		(float)0.0,
		(VkBool32)0,
		(float)0.1,
		(VkBool32)0,
		E_compare_op::e_greater,
		(float)0.1,
		(float)0.1,
		E_border_color::e_float_transparent_black,
		VK_FALSE
	};
	

	S_device_create_info s0;




}
