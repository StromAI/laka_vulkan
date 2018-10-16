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

	printf("flag_q2:%d  flag_q:%d  all_flag:%d", flag_q2.flag, flag_q.flag, flag_q.all_flags().flag);

	S_pipeline_shader_stage_create_info s = {};
	S_geometry_aabb_NVX ss = {};
}
