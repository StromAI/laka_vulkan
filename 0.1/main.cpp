#include <common.h>
#include "vk.h"

using namespace laka::vk;

int main()
{
    init_show;
    show_info("hello world!");

    VkResult test_r = VkResult::VK_NOT_READY;
    show_result(test_r);



    system("pause");
}





