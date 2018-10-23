#coding=utf-8
'''
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.
''' 

#封装这些结构是为了什么?
#1 使用自己的命名规范
#2 安全性 引导性
#3 免除使用sType
#4 封装pNext

#todo:将struct父子关系链写进每个struct注释
#todo:为pNext的封装结构添加{xxxx,xxxx,xxxx}用法
#todo:纯struct去掉默认构造函数
import re
from bs4 import BeautifulSoup


my_format = \
"/*\n"\
"Copyright (c) 2018 gchihiha\n\n"\
"This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.\n\n"\
"Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:\n\n"\
"1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.\n\n"\
"2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.\n\n"\
"3. This notice may not be removed or altered from any source distribution.\n\n"\
"*/\n\n"

xmlfile = open("..\\vk.xml").read()
soup = BeautifulSoup(xmlfile)

author_nodes = soup.registry.find_all('tags',attrs={"comment":"Vulkan vendor/author tags for extensions and layers"})
author_name_list = []
author_list = author_nodes[0].find_all('tag')
for author_node in author_list:
    author_name_list.append(author_node.get('name') )

handle_nodes = soup.registry.types.find_all("type",attrs = {"category" : "handle"})
handle_list = []
for handle_node in handle_nodes:
    temp = handle_node.find_all('name')
    if len(temp)>0:
        handle_list.append(temp[0].get_text() )

wsi_nodes = soup.registry.platforms.find_all('platform')
wsi_list = []
wsi_dict = dict([])
for p_node in wsi_nodes:
    name = p_node.get('name')
    macro = p_node.get('protect')
    wsi_list.append(name)
    wsi_dict[name] = macro

wsi_struct_dict = dict([])
wsi_struct_dict["VkNativeBufferANDROID"] = "VK_USE_PLATFORM_ANDROID_KHR"
wsi_struct_dict["VkImportAndroidHardwareBufferInfoANDROID"] = "VK_USE_PLATFORM_ANDROID_KHR"
wsi_struct_dict["VkMemoryGetAndroidHardwareBufferInfoANDROID"] = "VK_USE_PLATFORM_ANDROID_KHR"
wsi_struct_dict["VkExternalFormatANDROID"] = "VK_USE_PLATFORM_ANDROID_KHR"
wsi_struct_dict["VkPhysicalDeviceShaderAtomicInt64FeaturesKHR"] = "LAKA_UNKNOW"
wsi_struct_dict["VkPhysicalDeviceImageDrmFormatModifierInfoEXT"] = "LAKA_UNKNOW"
wsi_struct_dict["VkImageDrmFormatModifierListCreateInfoEXT"] = "LAKA_UNKNOW"
wsi_struct_dict["VkImageDrmFormatModifierPropertiesEXT"] = "LAKA_UNKNOW"
wsi_struct_dict["VkPhysicalDeviceDriverPropertiesKHR"] = "LAKA_UNKNOW"
wsi_struct_dict["VkDrmFormatModifierPropertiesListEXT"] = "LAKA_UNKNOW"
wsi_struct_dict["VkImageDrmFormatModifierExplicitCreateInfoEXT"] = "LAKA_UNKNOW"
wsi_struct_dict["VkImportMemoryWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkExportMemoryWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkMemoryWin32HandlePropertiesKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkExportMemoryWin32HandleInfoNV"] = "VK_USE_PLATFORM_WIN32_NV"
wsi_struct_dict["VkImportMemoryWin32HandleInfoNV"] = "VK_USE_PLATFORM_WIN32_NV"
wsi_struct_dict["VkMemoryGetWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkImportSemaphoreWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkExportSemaphoreWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkD3D12FenceSubmitInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkSemaphoreGetWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkImportFenceWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkExportFenceWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkFenceGetWin32HandleInfoKHR"] = "VK_USE_PLATFORM_WIN32_KHR"
wsi_struct_dict["VkConformanceVersionKHR"] = "LAKA_UNKNOW"
wsi_struct_dict["VkDrmFormatModifierPropertiesEXT"] = "LAKA_UNKNOW"

cpp = []

class MyName:
    my_name = ""
    vk_name = ""
    fuck_name = ""
    sub_names = []
    houzhui = ""

def get_my_name(vk_name_,qianzhui_,vk_):
    my_name = MyName()
    my_name.vk_name = vk_name_
    temp1 = re.sub(r'^'+vk_,"",vk_name_)
    temp2 = temp1
    for hz in author_name_list:
        temp3 = re.search( str(hz+"$"),temp1)
        if temp3 != None:
            my_name.houzhui = temp3.group()
            temp2 = re.sub( my_name.houzhui+"$" ,"",temp2)
    temp_list1 = temp_list1 = re.findall(r'[A-Z][a-z]+|[A-Z]|[0-9]+',temp2)
    temp_list2 = []
    i=0
    while i<len(temp_list1):
        temp_sub1 = ""
        if temp_list1[i].isupper():
            while i<len(temp_list1) and temp_list1[i].isupper():
                temp_sub1 += temp_list1[i]
                i+=1
            temp_list2.append(temp_sub1)
        else:
            if temp_list1[i].isdigit():
                while i<len(temp_list1) and temp_list1[i].isdigit():
                    temp_sub1 += temp_list1[i]
                    i+=1
                temp_list2.append(temp_sub1)
            else:
                temp_sub1 += temp_list1[i]
                i+=1
                temp_list2.append(temp_sub1)
    temp_list3 = []
    i=0
    j=0
    while i<len(temp_list2):
        temp_sub = temp_list2[i]
        if temp_list2[i].isdigit():
            if i+1<len(temp_list2):
                if temp_list2[i+1] == 'D' or temp_list2[i+1] == 'Bit':
                    temp_sub = temp_list2[i]+temp_list2[i+1]
                    i+=1
                else:
                    if j>0 :
                        temp_list3[j-1]+=temp_sub
                        i+=1
                        continue
            else:
                if j>0 :
                    temp_list3[j-1]+=temp_sub
                    i+=1
                    continue
        temp_list3.append(temp_sub)
        i+=1
        j+=1
    my_name.sub_names = temp_list3[:]
    my_name.my_name = qianzhui_
    my_name.fuck_name = vk_
    for sub_name in my_name.sub_names:
        my_name.my_name += "_"+sub_name.lower()
        my_name.fuck_name += "_"+sub_name

    if my_name.houzhui!="":
        my_name.my_name+="_"+my_name.houzhui
    return my_name

class Member:
    vk_name = ""
    name = ""           #成员名
    o_text = ""         #原文本
    type_text = ""      #类型相关文本
    type_only = ""      #类型 的字符串
    array = ""          #数组长度\
    o_array = ""        #带[]的数组描述
    default_value = ""  #该成员默认值
    final_text = ""     #最终的声明字符串
    alias = ""
    len = ""            #
    altlen = ""         #
    optional=""         #
    externsync = ""     #
    noautovalidity = "" #
    o_comment = ""      #
    comment = ""        #
    default_value2 = "" #打洞 非常无语

class Struct:
    vk_name = ""
    my_name = ""
    category = ""
    comment = ""
    members = []
    alias = ""
    g = 0
    returned_only = ""
    struct_extends = []
    struct_extends_to = ""
    struct_extends_to_array = []
    baba = []
    have_sType = 0
    is_wsi = 0
    wsi_macro = ""


all_type_dict = dict([])
name_dict = dict([])
disable_names = ["VkDriverIdKHR"]

all_out = \
"#pragma once\n"\
"#include \"vulkan/vulkan.h\"\n"\
"#include \"common.h\"\n\n"\
"#include <type_traits>\n"\
"#include <array>\n\n"\
"namespace laka { namespace vk {\n"

#========================= 处理enum ===========================
enum_file_name = "vk_enums"
enum_out = ""
enum_list = soup.registry.find_all('enums',attrs={'type':'enum'})
for enum in enum_list:
    enum_vk_name = enum.get('name')
    my_name = get_my_name(enum_vk_name, "E", "Vk")
    name_dict[my_name.my_name] = my_name
    name_dict[my_name.vk_name] = my_name

    comment = ""
    comment_temp = enum.get('comment')
    if comment_temp != None:
        comment = comment_temp
    enum_out += "/*\t" + enum_vk_name + "\n" + comment + "*/\n"

    de = 0
    for disable_name in disable_names:
        if my_name.vk_name == disable_name:
            de = 1
            break

    if de == 1:
        enum_out += "#if 0\n"

    member_list = enum.find_all('enum')
    if len(member_list) <= 0:
        enum_out+= "using " + my_name.my_name + " = " + enum_vk_name + ";\n\n"
        continue

    enum_out += \
        "struct "+my_name.my_name+"{\nenum{\n"
    #"enum class " + my_name.my_name + "{\n"


    e_obj = Struct()
    e_obj.vk_name = my_name.vk_name
    e_obj.my_name = my_name.my_name
    e_obj.category = "enum"
    e_obj.g = 1
    e_obj.members = list()
    e_obj.comment = comment

    for member in member_list:
        m_vk_name = member.get('name')
        m_my_name = get_my_name(m_vk_name, "e", "VK")
        m_my_name.my_name = "e"+m_vk_name.replace(my_name.fuck_name.upper(),"").lower()
        m_my_name.my_name = m_my_name.my_name.replace(my_name.fuck_name.lower(), "")

        name_dict[m_my_name.my_name] = m_my_name
        name_dict[m_my_name.vk_name] = m_my_name

        mobj = Member()

        m_comment = member.get('comment')
        if m_comment != None:
            mobj.o_comment = m_comment
        m_alias = member.get('alias')
        if m_alias != None:
            mobj.alias = m_alias
        mobj.name = m_my_name
        mobj.vk_name = m_my_name.vk_name

        mobj.final_text = m_my_name.my_name + " = " + m_vk_name + ",\n"
        enum_out += mobj.final_text
        e_obj.members.append(mobj)

    enum_out += \
        "#flag;\n"\
        "{0}()@#\n"\
        "{0}(decltype(flag) flag_):flag(flag_) @#\n"\
        "{0}({0} const& e_):flag(e_.flag) @#\n"\
        "{0}({1} flag_) :flag(static_cast<decltype(flag)>(flag_) ) @#\n"\
        "operator {1}&() @ return reinterpret_cast<{1}&>(*this); #\n"\
        "{0}& operator = ({0} e_) @ flag = e_.flag; return *this; #\n"\
        "bool operator== ({0} e_) @ return flag == e_.flag; #\n"\
        "bool operator== ({1} e_) @ return flag == static_cast<decltype(flag)>(e_); #\n"\
        "bool operator!= ({0} e_) @ return !(*this == e_); #\n"\
        "bool operator!= ({1} e_) @ return !(*this == e_); #\n"\
        "#;\n\n"\
            .format(my_name.my_name,my_name.vk_name).replace("@","{").replace("#","}")

    if de == 1:
        enum_out +=  "#endif \n\n"

    all_type_dict[e_obj.vk_name] = e_obj

#========================= flag bits =======================
flagbits_out = ""
flag_bits_list = soup.registry.find_all('enums', attrs={'type':'bitmask'})
fb_obj_list = []
for enum in flag_bits_list:
    vk_name = enum.get('name')
    temp_name = enum.get('name').replace("FlagBits", "")
    my_name = get_my_name(temp_name,"F","Vk")
    my_name.vk_name = vk_name

    name_dict[my_name.my_name] = my_name
    name_dict[my_name.vk_name] = my_name
    name_dict[my_name.vk_name.replace("FlagBits","Flags")] = my_name

    fb_obj = Struct()
    fb_obj.vk_name = vk_name
    fb_obj.my_name = my_name.my_name

    alias_temp = enum.get('alias')
    if alias_temp != None:
        fb_obj.alias = alias_temp
    comment_temp = enum.get('comment')
    if comment_temp != None:
        fb_obj.comment = comment_temp

    fb_obj.g = 1
    fb_obj.category = "flagbits"

    flagbits_out+="/*\t"+fb_obj.vk_name+fb_obj.comment+"*/\n"

    if fb_obj.vk_name == "VkRenderPassCreateFlagBits":
        flagbits_out+="using "+fb_obj.my_name+" = VkFlags;\n\n"
        continue

    member_list = enum.find_all('enum')
    if len(member_list)<=0:
        flagbits_out+="using "+fb_obj.my_name+" = \n\t\t\t"+fb_obj.vk_name+";\n\n"

        continue
    flagbits_out+=\
        "class " + fb_obj.my_name + " {\n" + \
        "private:\n" + \
        fb_obj.my_name + "(int flag_):flag(flag_){};\n" + \
        "public:\n" \
        "int flag;\n" \
        "enum B{\n"

    fb_obj.members = list()
    for member in member_list:
        m_vk_name = member.get('name')
        if m_vk_name.find("_MAX_NUM") != -1:
            continue
        m_my_name = "b_"+m_vk_name.replace("_BIT","").replace(my_name.fuck_name.upper()+"_","").lower()
        m_obj = Member()
        m_obj.vk_name = m_vk_name
        m_obj.name = m_my_name

        comment_temp = member.get('comment')

        if comment_temp != None:
            m_obj.o_comment = comment_temp
            flagbits_out += "/*"+comment_temp+"*/\n"

        m_obj.final_text = "\t"+m_obj.name+" = "+m_obj.vk_name+",\n"
        flagbits_out += m_obj.final_text

        fb_obj.members.append(m_obj)

    flagbits_out += "};\n"

    flagbits_out += \
    "{0}():flag(0)@$\n" \
    "{0}(B bits_):flag(static_cast<int>(bits_))@$\n" \
    "{0}({0} const& flag_):flag(flag_.flag)@$\n" \
    "{0}(std::initializer_list<B> bit_list)@for (auto&& bit : bit_list)@flag |= static_cast<int>(bit);$$\n" \
    "operator {1} const &()@return *this;$\n" \
    "{0}& operator = ({0} flag_)@flag = flag_.flag;return *this;$\n" \
    "{0} operator | (B bit_)@return flag | static_cast<int>(bit_);$\n" \
    "{0}& operator |= (B bit_)@flag |= static_cast<int>(bit_);return *this;$\n" \
    "{0} operator | ({0} flag_)@return flag | flag_.flag;$\n" \
    "{0}& operator |= ({0} flag_)@flag |= flag_.flag;return *this;$\n" \
    "{0} operator & ({0} flag_)@return flag & flag_.flag;$\n" \
    "{0}& operator &= ({0} flag_)@flag &= flag_.flag;return *this;$\n" \
    "{0} operator ^ ({0} flag_)@return flag ^ flag_.flag;$\n" \
    "{0}& operator ^= ({0} flag_)@flag ^= flag_.flag;return *this;$\n" \
    "{0} operator ~ ()@return all_flags().flag^flag;$\n" \
    "bool operator !()@return !flag;$\n" \
    "bool operator == ({0} flag_)@return flag == flag_.flag;$\n" \
    "bool operator == (B bit_)@return flag == static_cast<int>(bit_);$\n" \
    "bool operator != ({0} flag_)@return flag != flag_.flag;$\n" \
    "bool operator != (B bit_)@return flag != static_cast<int>(bit_);$\n" \
    "{0}& clear()@flag = 0;return *this;$\n" \
    "{0} all_flags()@\nreturn " \
        .format(fb_obj.my_name,fb_obj.vk_name).replace("@", "{").replace("$", "}")
    #"operator bool()@return !!flag;$\n" \
    count = 0
    for m in fb_obj.members:
        if count != 0:
            flagbits_out+=" | "
        flagbits_out += m.name
        count+=1
    flagbits_out+=";\n}\n"

    for m in fb_obj.members:
        flagbits_out += fb_obj.my_name+"& on_"+m.name.replace("b_","")+"()" \
                          "{ flag |= "+m.name+"; return *this; }\n"
        flagbits_out += fb_obj.my_name + "& off_"+m.name.replace("b_","")+"()"\
                          "{ flag &= ~" + m.name+"; return *this; }\n"

    flagbits_out+=fb_obj.vk_name+" get_vkfb(){ return "+fb_obj.vk_name+"(flag); }\n"
    flagbits_out+="};\n"


    flagbits_out+="{0} inline operator|({0}::B bit1_, {0}::B bit2_)@{0} flags(bit1_);return flags | bit2_;$\nbool inline operator==({0} f1_, {0} f2_) @ return f1_.flag== f2_.flag; $\n\n"\
        .format(fb_obj.my_name).replace("@","{").replace("$","}")

    all_type_dict[fb_obj.vk_name] = fb_obj
    fb_obj_list.append(fb_obj)

'''
flags_list = soup.registry.types.find_all('type', attrs={'category':'bitmask'})
for flags in flags_list:
    if len(flags.find_all('name'))>0:
        flags_name = flags.find_all('name')[0].get_text()
        my_name = name_dict.get(flags_name.replace("Flags","FlagBits") )
        if my_name != None:
            name_dict[flags_name] = my_name
'''

#========================== 处理struct ========================
struct_out = ""

struct_list = soup.registry.types.find_all('type', attrs={'category' : 'struct'})
struct_dict = dict([])
s_list = []

def out_struct(s,cpp_out_str):
    out = ""
    temp_h_out = ""
    if s.g == 1 or s.vk_name == "VkBaseOutStructure" or s.vk_name == "VkBaseInStructure":
        return out

    for m in s.members:
        temp = struct_dict.get(m.type_only)
        if temp != None:
            out+=out_struct(temp,cpp_out_str)

    for ex in s.struct_extends:
        temp = struct_dict.get(ex)
        if temp != None:
            out+=out_struct(temp,cpp_out_str)
    print(s.my_name)
    out += "/*"+s.comment+"*/\n"
    #平台相关struct用宏包起
    if s.is_wsi == 1:
        out += "#ifdef "+s.wsi_macro+"\n"

    have_const = 0
    temp_h_out += "struct\t\t" + s.my_name + "{\n"
    count = 0
    for m in s.members:
        if m.name == "sType":
            temp_h_out+="private:\n"
            m.final_text = m.final_text.replace("E_structure_type","VkStructureType")
        if m.comment.lstrip().isspace():
            m.comment+="\t/* "+m.comment.replace("\n","")+" */\n"

        temp_h_out += "\t"+m.final_text
        if m.name == "sType" or m.name == "pNext":
            temp_h_out+=" = "+ m.default_value
        temp_h_out += ";\n"

        if m.name == "pNext" and (count+1) < len(s.members):
            temp_h_out += "public:\n"

        if m.final_text.find("const") != -1:
            have_const = 1

        count+=1

    #构造函数

    temp_h_out += \
        "\noperator {1}*()\n" \
        "\t@\treturn reinterpret_cast<{1}*>(this);\t$\n" \
        "operator const {1}*() const\n" \
        "\t@\treturn reinterpret_cast<const {1}*>(const_cast<decltype(this)>(this));\t$\n" \
        "{0}& operator=( {1} const & rhs ) \n" \
        "\t@\tmemcpy( this, &rhs, sizeof( {0} ) ); return *this;\t$\n" \
        "operator {1} const&() const \n" \
        "\t@\treturn *reinterpret_cast<const {1}*>(this);\t$\n" \
        "operator {1} &() \n" \
        "\t@\treturn *reinterpret_cast<{1}*>(this);\t$\n\n" \
            .format(s.my_name, s.vk_name).replace("@", "{").replace("$", "}")

    #"{0}( {1} const & rhs )\n" \
    #"\t@\tmemcpy( this, &rhs, sizeof( {0} ) );\t$\n" \

    if s.have_sType == 1:
        temp_h_out+="\n"+s.my_name+"(){}\n"
        temp_h_out+=s.my_name+"("+s.vk_name+"& rhs)\n\t{\tmemcpy( this, &rhs, sizeof( "+s.my_name+" ) );\t}\n"
    if s.have_sType == 1 and len(s.members) > 2:
        temp_h_out += s.my_name+"("
        count = 0
        for m in s.members:
            if m.name == "sType" or m.name == "pNext":
                continue
            if count != 0:
                temp_h_out+=","
            de_temp = ""
            if m.final_text.find("[") == -1:
                de_temp+=m.final_text+"_"
            else:
                de_temp+=m.final_text.replace("[","_[")
            temp_h_out+="\n\t"+de_temp
            #if m.default_value != "" and m.default_value != None:
                #out+=" = "+m.default_value
            count+=1
        temp_h_out+=")"
        count = 0
        for m in s.members:
            if m.name == "sType" or m.name == "pNext" or m.final_text.find('[') != -1:
                continue
            if count == 0:
                temp_h_out+="\n\t:"
            else:
                temp_h_out+="\n\t,"
            temp_h_out+=m.name+"("+m.name+"_)"
            count+=1
        temp_h_out+="\n{"
        count_temp = 0
        for m in s.members:
            if m.final_text.find('[') == -1:
                continue
            if count_temp == 0:
                temp_h_out += "\n"
            count_temp += 1
            temp_h_out+="memcpy("+m.name+","+m.name+"_,"+"sizeof("+m.name+") );\n"
        temp_h_out+="}\n"

        #temp_h_out += s.vk_name + "*const get_vkptr(){return reinterpret_cast<" + s.vk_name + "*>(this);}\n"

        count = 0
        for ex2 in s.struct_extends_to_array:
            if count == 0:
                temp_h_out+="\n"
            ex2_s = struct_dict[ex2]
            if ex2_s.is_wsi == 1:
                temp_h_out+="#ifdef "+ex2_s.wsi_macro+"\n"
            temp_h_out+="friend "+ex2_s.my_name+";\n"
            if ex2_s.is_wsi == 1:
                temp_h_out+="#endif\n"
            count+=1

#pNext
    cpp_str = ""
    count = 0
    for ex in s.struct_extends:
        if count == 0:
            temp_h_out+="\n"
        ex_s = struct_dict[ex]
        if ex_s.is_wsi==1:
            temp_h_out+="#ifdef "+ex_s.wsi_macro+"\n"
        temp_h_out += s.my_name+"& n_"+ex_s.my_name.replace("S_","")+"("+ex_s.my_name+" const& next_);\n"
        if ex_s.is_wsi==1:
            temp_h_out+="#endif\n"


        if ex_s.is_wsi==1:
            cpp_str+="#ifdef "+ex_s.wsi_macro+"\n"
        cpp_str += s.my_name + "& "+s.my_name+"::\nn_"+ex_s.my_name.replace("S_","")+"("+ex_s.my_name+" const& next_)\n{\n"+\
                        "void* next = (void*)&next_;void* tail;\n" \
                        "if (pNext != nullptr){\n" \
                        "do {tail = next;next = ((S_base_structure*)next)->pNext;} \n" \
                        "while (next != nullptr);\n" \
                        "((S_base_structure*)tail)->pNext = (void*)pNext;\n" \
                        "}\n" \
                        "pNext = (void*)&next_;\n"\
                        "return *this;\n}\n"
        if ex_s.is_wsi==1:
            cpp_str+="#endif\n"
        else:
            cpp_str+="\n"
        count += 1

    temp_h_out2 = ""
    cpp_str2 = ""
    N_name = s.my_name.replace("S_","N_")
    #用于函数参数pNext的快捷结构
    if count!=0:
        temp_h_out2+="\nstruct "+N_name+"{\nprivate:\n\tvoid* pNext = nullptr;\npublic:\n"\
        "operator void*() { return pNext; }"
        count2 = 0
        for ex in s.struct_extends:
            if count2 == 0:
                temp_h_out2+="\n"
            ex_s = struct_dict[ex]
            if ex_s.is_wsi==1:
                temp_h_out2+="#ifdef "+ex_s.wsi_macro+"\n"
            temp_h_out2 += N_name+"& n_"+ex_s.my_name.replace("S_","")+"("+ex_s.my_name+" const& next_);\n"
            if ex_s.is_wsi==1:
                temp_h_out2+="#endif\n"


            if ex_s.is_wsi==1:
                cpp_str2+="#ifdef "+ex_s.wsi_macro+"\n"
            cpp_str2 += N_name + "& "+N_name+"::\nn_"+ex_s.my_name.replace("S_","")+"("+ex_s.my_name+" const& next_)\n{\n"+\
                            "void* next = (void*)&next_;void* tail;\n" \
                            "if (pNext != nullptr){\n" \
                            "do {tail = next;next = ((S_base_structure*)next)->pNext;} \n" \
                            "while (next != nullptr);\n" \
                            "((S_base_structure*)tail)->pNext = (void*)pNext;\n" \
                            "}\n" \
                            "pNext = (void*)&next_;\n"\
                            "return *this;\n}\n"
            if ex_s.is_wsi==1:
                cpp_str2+="#endif\n"
            else:
                cpp_str2+="\n"
            count2 += 1

    if count>0:
        cpp_out_str.append(cpp_str2)
        out += temp_h_out2 + "};\n"

    cpp_out_str.append(cpp_str)
    out+=temp_h_out
    if count>0:
        out+="void set_pNext("+N_name+" n_){pNext = n_;}\n"
    out+="};\n"

    # 处理pNext
    is_ex_to = len(s.struct_extends_to_array) > 0
    is_ex_base = len(s.struct_extends) > 0
    is_pNext = is_ex_base or is_ex_to

    if s.have_sType==1:
        temp_h_out += "static_assert(\n\tsizeof(" + s.my_name + ") == sizeof(" + s.vk_name + "),\n\t\"struct and wrapper have different size!\");\n"

    #宏结束
    if s.is_wsi == 1:
        out += "#endif //"+s.wsi_macro+"\n\n"
    else:
        out+="\n"

    s.g = 1
    return out


#=============信息采集===============
for struct in struct_list:
    s_obj = Struct()

    s_obj.vk_name = struct.get('name')

    my_name = get_my_name(s_obj.vk_name, "S", "Vk")
    name_dict[s_obj.vk_name] = my_name
    name_dict[s_obj.my_name] = my_name

    s_obj.my_name = my_name.my_name

    s_obj.g = 0
    s_obj.category = "struct"
    s_obj.members = list()
    s_obj.baba = list()
    s_obj.struct_extends = list()
    s_obj.struct_extends_to_array = list()

    alias_temp = struct.get('alias')
    if alias_temp != None:
        s_obj.alias = "alias"

    returned_only_temp = struct.get('returnedonly')
    if returned_only_temp != None:
        s_obj.returned_only = "(returnedonly)"

    struct_extends_temp = struct.get('structextends')
    if struct_extends_temp!=None:
        s_obj.struct_extends_to = struct_extends_temp

    comment_temp = struct.get('comment')
    if comment_temp != None:
        s_obj.comment = comment_temp

    member_list = struct.find_all('member')
    for member in member_list:
        m = Member()
        m.name = member.find_all('name')[0].get_text()
        m.o_text = member.get_text()

        m_optional_temp = member.get('optional')
        if m_optional_temp != None:
            m.comment = "|optional|\t"

        m.type_only = member.type.get_text()

        m_comment_temp = member.comment
        if m_comment_temp != None:
            m.o_comment = m_comment_temp.get_text()

        altlen_temp = member.get('altlen')
        if altlen_temp != None:
            m.altlen = "alt"

        len_temp = member.get('len')
        if len_temp != None:
            m.len = "len:"+len_temp

        externsync_temp = member.get('externsync')
        if externsync_temp != None:
            m.externsync = "(externsync)"

        noautovalidity_temp = member.get('noautovalidity')
        if noautovalidity_temp != None:
            m.noautovalidity = "(noautovalidity)"

        default_values_temp = member.get('values')
        if default_values_temp != None:
            m.default_value2 = default_values_temp

        m.text = m.o_text.replace(m.o_comment, "")

        m.comment += m.noautovalidity+m.externsync+m.altlen+m.len+"\n"+m.o_comment

        if m.name == "sType":
            s_obj.have_sType = 1

        s_obj.members.append(m)

    sub_name0 = name_dict[s_obj.vk_name].sub_names[0].lower()
    if sub_name0 == "mac":
        sub_name0 += name_dict[s_obj.vk_name].sub_names[1].lower()

    # 判断是否平台相关
    sub_name_0 = name_dict[s_obj.vk_name].sub_names[0].lower()
    if sub_name_0 == "mac":
        sub_name_0 += name_dict[s_obj.vk_name].sub_names[1].lower()
    for wsi_name_temp in wsi_list:
        if sub_name_0 == wsi_name_temp:
            s_obj.is_wsi = 1
            s_obj.wsi_macro = wsi_dict[sub_name0]
            break

    temp = wsi_struct_dict.get(s_obj.vk_name)
    if temp != None:
        s_obj.is_wsi = 1
        s_obj.wsi_macro = temp

    struct_dict[s_obj.vk_name] = s_obj

for struct in struct_list:
    if struct.get('alias') != None:
        continue
    s = struct_dict[struct.get('name')]

    for m in s.members:
        array_temp = re.search(r'\[.*\]',m.text)
        if array_temp!= None:
            m.o_array = array_temp.group()
            m.array = m.o_array.replace("[","").replace("]","")

        my_name = name_dict.get(m.type_only)

        if my_name != None:
            m.final_text = m.text.replace(m.type_only,my_name.my_name+" ")
        else:
            m.final_text = m.text.replace(m.type_only,m.type_only+" ")
        m.final_text=re.sub(r' [ ]+',' ',m.final_text)

        temp = name_dict.get(m.type_only)
        if m.text.find("[")!=-1:
            m.default_value = "{}"
        else:
            if m.text.find("*") != -1:
                m.default_value = "nullptr"
            else:
                if temp != None:
                    if temp.my_name[:2] == "S_":
                        m.default_value = "{}"
                    if temp.my_name[:2] == "E_":
                        if len(all_type_dict[temp.vk_name].members)>0:
                            m.default_value = temp.my_name+"::"+all_type_dict[temp.vk_name].members[0].name.my_name
                    if temp.my_name[:2] == "F_":
                        m.default_value = "{}"
                else:
                    m.default_value = "0"

        if m.name == "sType":
            m.default_value = m.default_value2
            #print(m.default_value2)
        if m.name == "pNext":
            m.default_value = "nullptr"
            m.final_text = m.final_text.replace("const","")
        if m.type_only == "VkClearValue":
            m.default_value = "{}"
        is_handle = 0
        for handle in handle_list:
            if m.type_only == handle:
                is_handle = 1
                break
        if is_handle == 1:
            m.default_value = "VK_NULL_HANDLE"

    ex_list = s.struct_extends_to.split(",")
    s.struct_extends_to_array = ex_list[:]
    if s.struct_extends_to_array[0] == "":
        s.struct_extends_to_array.pop(0)
    for ex in ex_list:
        if ex == "":
            continue
        struct_dict[ex].struct_extends.append(s.vk_name)

struct_out+="struct S_base_structure\n{VkStructureType sType; void * pNext = nullptr;};\n\n"

for struct in struct_list:
    if struct.get('alias') != None:
        continue
    s = struct_dict[struct.get('name')]

    comment = "\t"+s.vk_name+"\n"

    if s.returned_only != "":
        comment+=s.returned_only+"\n"
    if s.struct_extends_to != "":
        comment += "ex to: "+s.struct_extends_to+"\n"
    if len(s.struct_extends)>0:
        comment+="ex:\n"
        for ex_ in s.struct_extends:
            comment += "\t"+ex_+"\n"

    s.comment = comment+s.comment

struct_out+="#if 1\n"
for struct in struct_list:
    if struct.get('alias') != None:
        continue
    s = struct_dict[struct.get('name')]
    if s.vk_name == "VkBaseOutStructure" or s.vk_name == "VkBaseInStructure":
        continue

    struct_out+="struct "+s.my_name+";\n"
struct_out+="#endif\n\n"

for struct in struct_list:
    if struct.get('alias') != None:
        continue
    s = struct_dict[struct.get('name')]

    struct_out+=out_struct(s, cpp)

all_out += enum_out+flagbits_out+struct_out
all_out += "\n}}\n"

types_file = open("..\\types.h","w")
types_file.write(all_out)


cpp_out = "#include \"types.h\"\n"\
            "namespace laka{ namespace vk{\n"
for code in cpp:
    cpp_out += code
cpp_out+="\n}}" \

cpp_file = open("..\\types.cpp","w")
cpp_file.write(cpp_out)



