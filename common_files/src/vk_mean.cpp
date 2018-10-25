#include "vk_mean.h"
using namespace std;


shared_ptr<string> mean(VkResult e_)
{
    static const char* mean0[] = {
        "VK_SUCCESS: ����ɹ����",
        "VK_NOT_READY: դ�����ѯ��δ���",
        "VK_TIMEOUT: �ȴ�������ָ����ʱ����û�����",
        "VK_EVENT_SET: �¼������ź�",
        "VK_EVENT_RESET: �¼����ź�",
    };

    static const char* mean1[] = {
        "VK_INCOMPLETE: ����������ڽ����˵̫С��",
        "VK_ERROR_OUT_OF_HOST_MEMORY: �����ڴ����ʧ�ܡ�",
        "VK_ERROR_OUT_OF_DEVICE_MEMORY: �豸�ڴ����ʧ�ܡ�",
        "VK_ERROR_INITIALIZATION_FAILED: ����ʵ���ض���ԭ���޷���ɶ���ĳ�ʼ����",
        "VK_ERROR_DEVICE_LOST: �߼��������豸�Ѿ���ʧ��",
        "VK_ERROR_MEMORY_MAP_FAILED: �ڴ����ӳ��ʧ�ܡ�",
        "VK_ERROR_LAYER_NOT_PRESENT: �����ͼ�㲻���ڻ��޷����ء�",
        "VK_ERROR_EXTENSION_NOT_PRESENT: �������չ����֧�֡�",
        "VK_ERROR_FEATURE_NOT_PRESENT: ����������Բ���֧�֡�",
        "VK_ERROR_INCOMPATIBLE_DRIVER: �������Vulkan�汾������������֧�֣����������ض���ʵ�ֵ�ԭ��������ݡ�",
        "VK_ERROR_TOO_MANY_OBJECTS: ����̫��Ķ����Ѿ���������",
        "VK_ERROR_FORMAT_NOT_SUPPORTED: ���豸��֧������ĸ�ʽ��",
        "VK_ERROR_FRAGMENTED_POOL: ���ڳص��ڴ���Ƭ���ط���ʧ�ܡ���������Է����������豸�ڴ�����Ӧ�µķ��䣬��ֻ�ܷ������ֵ����Ӧ������VK_ERROR_OUT_OF_POOL_MEMORY_KHR���أ���ǰ���Ǹ�ʵ��ȷ���ط���ʧ����������Ƭ��ɵġ�",
    };

    static const char* mean2[] = {
        "VK_ERROR_SURFACE_LOST_KHR: ���治�ٿ��á�",
        "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: ����Ĵ����ѱ�Vulkan������APIʹ�ã���ֹ�ٴ�ʹ�øô��ڡ�",
        "VK_SUBOPTIMAL_KHR: ���������پ�ȷƥ��������ԣ����Կ����ڳɹ����ֵ����档",
        "VK_ERROR_OUT_OF_DATE_KHR: һ�������Ѿ��ı䣬�������뽻�������ݣ�ʹ�ý������Ľ�һ���ı�ʾ����ʧ�ܡ�Ӧ�ó�������ѯ�µı������ԣ���������ϣ���������ֵ�����ʱ���´�����������",
        "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR: ������ʹ�õ���ʾ����ʹ����ͬ�Ŀɳ���ͼ�񲼾֣����Է�ֹ����ͼ��ķ�ʽ�����ݡ�",
        "VK_ERROR_VALIDATION_FAILED_EXT: ",
        "VK_ERROR_INVALID_SHADER_NV: һ��������ɫ��δ�ܱ�������ӡ�������ã�����ϸ�ڻ�ͨ��VK_EXT_debug_report�����Ӧ�ó���",
        "VK_ERROR_OUT_OF_POOL_MEMORY_KHR: ���ڴ����ʧ�ܡ���������Է����������豸�ڴ�����Ӧ�µķ��䣬��ֻ�ܷ������ֵ�����ʧ�ܿ϶������ڳص���Ƭ��ɵģ���Ӧ�÷���VK_ERROR_FRAGMENTED_POOL��",
        "VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR: �ⲿ�������ָ�����͵���Ч�����",
        "VK_ERROR_NOT_PERMITTED_EXT: ",
    };

    shared_ptr<string> ret;

    if (e_ >= 0 && e_ <= 5)
    {
        ret.reset(new string(mean0[e_]));
        return ret;
    }
    if (e_ <= -1 && e_ >= -12)
    {
        return shared_ptr<string>(new string(mean1[e_*-1]));
    }

    switch (e_)
    {
    case(VK_ERROR_SURFACE_LOST_KHR):return shared_ptr<string>(new string(mean2[0]));
    case (VK_ERROR_NATIVE_WINDOW_IN_USE_KHR): return shared_ptr<string>(new string(mean2[1]));
    case (VK_SUBOPTIMAL_KHR):return shared_ptr<string>(new string(mean2[2]));
    case(VK_ERROR_OUT_OF_DATE_KHR): return shared_ptr<string>(new string(mean2[3]));
    case (VK_ERROR_INCOMPATIBLE_DISPLAY_KHR):return shared_ptr<string>(new string(mean2[4]));
    case(VK_ERROR_VALIDATION_FAILED_EXT):return shared_ptr<string>(new string(mean2[5]));
    case (VK_ERROR_INVALID_SHADER_NV):return shared_ptr<string>(new string(mean2[6]));
    case(VK_ERROR_OUT_OF_POOL_MEMORY_KHR):return shared_ptr<string>(new string(mean2[7]));
    case (VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR):return shared_ptr<string>(new string(mean2[8]));
    case(VK_ERROR_NOT_PERMITTED_EXT):return shared_ptr<string>(new string(mean2[9]));
    default:
        return shared_ptr<string>(new string("Unknow_mean"));
        break;
    }
}
