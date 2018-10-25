#include "../laka_vulkan/common.h"
#include "../laka_vulkan/types.h"

using namespace laka::vk;

template <typename Laka_vk_class__, typename Handle_type__, typename Api_ptr_type__>
class Group_base {
public:
    std::vector<Handle_type__> handles;
    Api_ptr_type__ api;

    Group_base() :api(nullptr), handles(0) {}
    Group_base(Api_ptr_type__ api_) :api(api_), handles(0) {}
    Group_base(
        Api_ptr_type__ api_,
        Array_value<const Handle_type__> handles_)
        :handles(handles_.size())
        , api(api_)
    {
        handles.resize(handles_.size());
        memcpy(
            &handles[0],
            handles_.data(),
            handles_.size() * sizeof(Handle_type__)
        );
    }
    Group_base& operator << (Group_base& group_)
    {
        handles.insert(
            handles.end(),
            group_.handles.begin(),
            group_.handles.end()
        );
        return *this;
    }
    Group_base& operator << (Laka_vk_class__& obj_)
    {
        handles.push_back(const_cast<Handle_type__>(obj_.handle));
        return *this;
    }
    Group_base& operator << (const Handle_type__ handle_)
    {
        handles.push_back(const_cast<Handle_type__>(handle_));
        return *this;
    }
    operator Handle_type__*()
    {
        if (handles.size() == 0) return nullptr;

        return &handles[0];
    }
    operator std::vector<Handle_type__>&()
    {
        return handles;
    }
    operator Array_value<const Handle_type__>()
    {
        Array_value<const Handle_type__> nothing;
        if (handles.size() == 0)
        {
            return nothing;
        }
        
        Array_value<const Handle_type__> array_obj(
            static_cast<uint32_t>(handles.size() ),
            &handles[0]
        );
        return array_obj;
    }
};

class Semaphore_test :public std::enable_shared_from_this<Semaphore_test> {
public:
    using Sptr = std::shared_ptr<Semaphore_test>;

    const VkSemaphore handle;
    void* device;

    class Group:public Group_base<Semaphore_test,VkSemaphore,void*> {
    public:
        void print_test()
        {
            int count_temp = 0;
            for (auto&& itor:handles)
            {
                printf("handle%d:%d\n", count_temp++, (int)itor);
            }
        }
        Group(void* api_)
            :Group_base(api_)
        {}
    };

    Semaphore_test(int i_)
        :handle( (VkSemaphore)i_ )
        ,device(nullptr)
    {}
};

void fun(VkSemaphore*const handles_)
{
    printf("ok\n");
}

void fun2(Array_value<const VkSemaphore> handles)
{
    printf("ok2\n");
}

int main()
{
	init_show;

    Semaphore_test a(10), b(20), c(30), d(40), e(50), f(60);
    Semaphore_test a2(11), b2(21), c2(31), d2(41), e2(51), f2(61);
    Semaphore_test x(100);

    Semaphore_test::Group g(nullptr);
    g << a.handle<< b.handle << c.handle << d.handle << e.handle << f.handle;

    Semaphore_test::Group g2(nullptr);
    g2 << a2.handle << b2.handle << c2.handle << d2.handle << e2.handle << f2.handle;

    g.print_test();
    printf("============\n");
    g << g2;
    g.print_test();
    printf("============\n");
    g << x;
    g.print_test();

    fun(g);

    fun2(g);

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
	
    
}
