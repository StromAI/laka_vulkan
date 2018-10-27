#include <common.h>
#include "vk.h"

using namespace laka::vk;

int main()
{
    init_show;
    show_info("以下一条为测试信息 不是真的");
    VkResult test_r = VkResult::VK_NOT_READY;
    show_result(test_r);



    system("pause");
}





