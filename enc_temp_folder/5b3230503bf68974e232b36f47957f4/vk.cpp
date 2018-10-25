#include "vk.h"
#include "vk_mean.h"


using namespace std;

namespace laka { namespace vk {
#include "classes.h"

#if 1   /*  global  */
    static Module_handle vk_module_handle = load_module_must("vulkan-1.dll");
    inline Module_handle get_vk_module() { return vk_module_handle; }
    static auto vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)
        load_module_function_must( vk_module_handle, "vkGetInstanceProcAddr" );
    inline PFN_vkVoidFunction get_instance_proc_address(
        VkInstance instance_, const char* function_name_)
    {
        return vkGetInstanceProcAddr(instance_, function_name_);
    }
    template<typename Execute_function>
    PFN_vkVoidFunction return_vk_api(
        VkInstance instance_,
        const char* function_name_,
        Execute_function excute_)
    {
        init_show;
        show_debug("加载vulkan函数:{0}", function_name_);
        auto fp = get_instance_proc_address(instance_, function_name_);
        if (fp != NULL)
        {
            show_debug("\t成功获得函数地址:{}", (size_t)fp);
        }
        else
        {
            show_err("\t获取函数地址失败");
            excute_();
        }
        return fp;
    }
    template <typename Execute_function>
    PFN_vkVoidFunction return_vk_api(const char* function_name_, Execute_function excute_)
    {
        return return_vk_api(nullptr, function_name_, excute_);
    }
    inline PFN_vkVoidFunction return_vk_api(const char* function_name_)
    {
        return return_vk_api(function_name_, []() {});
    }
    inline PFN_vkVoidFunction return_vk_api(VkInstance instance_, const char* function_name_)
    {
        return return_vk_api(instance_, function_name_, []() {});
    }
    inline PFN_vkVoidFunction return_vk_api_must(const char* function_name_)
    {
        return return_vk_api(function_name_, []() {abort(); });
    }
    inline PFN_vkVoidFunction return_vk_api_must(VkInstance instance_, const char* function_name_)
    {
        return return_vk_api(instance_, function_name_, []() {abort(); });
    }
    void show_result(VkResult ret_)
    {
        init_show;
        if (ret_ >= 0)
        {
            show_debug("{}", mean(ret_)->c_str());
        }
        else
        {
            show_err("{}", mean(ret_)->c_str());
        }
    }
    void show_result_assert(VkResult ret_)
    {
        init_show;
        if (ret_ > 0)
        {
            show_debug("{}", mean(ret_)->c_str());
        }
        else
        {
            show_err("{}", mean(ret_)->c_str());
            assert(ret_ >= 0);
        }
    }
    std::string version_str(uint32_t version)
    {
        std::string s(
            std::to_string(VK_VERSION_MAJOR(version)) + "." + 
            std::to_string(VK_VERSION_MINOR(version)) + "." + 
            std::to_string(VK_VERSION_PATCH(version))
        );
        return s;
    }
#define static_declare_load_vk_api(api_name__) \
    static auto api_name__ = \
    (PFN_ ## api_name__)return_vk_api_must(#api_name__);
    table_vk_api_global(static_declare_load_vk_api ZK, , , YK);
    
    uint32_t get_instance_version()
    {
        init_show;

        uint32_t version;
        auto ret = vkEnumerateInstanceVersion(&version);
        if (ret < 0)
        {
            show_debug("无法获取实例版本");
            return 0;
        }
        return version;
    }

    static S_allocation_callbacks acb;
    S_allocation_callbacks* default_allocation_cb() { return &acb; }

    class Layer_properties {
    public:
        Layer_properties()
        {
            init_show;
            uint32_t count;
            auto ret = vkEnumerateInstanceLayerProperties(&count, nullptr);
            show_result(ret);
            if_show(count >= 0, "vulkan支持的层的数量为:{}", count);

            properties.resize(count);
            ret = vkEnumerateInstanceLayerProperties(&count, &properties[0]);
            show_result(ret);
        }
        vector<VkLayerProperties> properties;
        vector<vector<VkExtensionProperties>> layer_extension_properties;
    };
    static Layer_properties layer_properties;

    class Extension_properties {
    public:
        Extension_properties()
        {
            init_show;
            auto layer_count = layer_properties.properties.size();

            layer_properties.layer_extension_properties.resize(layer_count);

            for (size_t i = 0; i < layer_count; ++i)
            {
                uint32_t count = 0;
                auto ret = vkEnumerateInstanceExtensionProperties(
                    layer_properties.properties[i].layerName, &count, nullptr);
                show_result(ret);
                if_show(count >= 0, "{0}层扩展属性数量:{1}",
                    layer_properties.properties[i].layerName, count);

                if (count <= 0)
                {
                    continue;
                }

                layer_properties.layer_extension_properties[i].resize(count);
                ret = vkEnumerateInstanceExtensionProperties(
                    layer_properties.properties[i].layerName,
                    &count,
                    &(layer_properties.layer_extension_properties[i][0])
                );
                show_result(ret);

                show_debug("{0}层所有扩展:", layer_properties.properties[i].layerName);

                for (auto& x : layer_properties.layer_extension_properties[i])
                {
                    show_debug("\t{}", x.extensionName);
                }
            }

            uint32_t count = 0;
            auto ret = vkEnumerateInstanceExtensionProperties(
                nullptr, &count, nullptr);
            show_result(ret);
            if_show(count >= 0, "总扩展属性数量:{}", count);

            properties.resize(count);
            if (count > 0)
            {
                ret = vkEnumerateInstanceExtensionProperties(
                    nullptr, &count, &properties[0]);
                show_result(ret);
            }

            show_debug("所有扩展属性:");
            for (auto& itr : properties)
            {
                show_debug("\t名称:{} 版本:{}", itr.extensionName, itr.specVersion);
            }
        }
        vector<VkExtensionProperties> properties;
    };
    static Extension_properties extension_properties;

    //PFN_vkVoidFunction Device::return_api(const char* api_name_)
    //{
    //    init_show;
    //    //show_function_name;
    //    auto ret = instance->api.vkGetDeviceProcAddr(handle, api_name_);

    //    if (ret == nullptr)
    //    {
    //        show_wrn("加载{}失败", api_name_);
    //    }
    //    else
    //    {
    //        show_debug("加载{}成功", api_name_);
    //    }
    //    return ret;
    //}

#endif  /*  global  */


}}
