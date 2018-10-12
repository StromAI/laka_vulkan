#coding=utf-8
'''
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.
'''

'''
那丫太乱 这就重写
'''
#todo:处理struct 成员初始值 包括不限于sType
#todo:生成pNext struct    并写入注释
#todo:为存在私有成员的struct 添加方便使用的函数
#todo:处理数组成员 count+数组 的成员
#todo:确定struct 的父子关系 写入注释
#todo:将所有成员函数写在类定义中 若发现复杂的函数还是写在cpp中

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

wsi_nodes = soup.registry.platforms.find_all('platform')
wsi_list = []
wsi_dict = dict([])
for p_node in wsi_nodes:
    name = p_node.get('name')
    macro = p_node.get('protect')
    wsi_list.append(name)
    wsi_dict[name] = macro

class MyName:
    my_name = ""
    vk_name = ""
    fuck_name = ""
    sub_names = []
    houzhui = ""
    def prt(this_):
        print ("---------------------------------------")
        print ("vk name:\t"+this_.vk_name)
        print ("my name:\t"+this_.my_name)
        print ("houzhui name:\t"+this_.houzhui)
        print ("fuck name:\t"+this_.fuck_name)
        print ("sub name:")
        print (this_.sub_names)

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
    baba = []
    have_sType = 0

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

all_type_dict = dict([])
name_dict = dict([])
disable_names = ["VkDriverIdKHR"]

all_out = \
"#pragma once\n"\
"#include \"vulkan/vulkan.h\"\n"\
"#include \"common.h\"\n"\
"#include <array>\n\n"\
"namespace laka { namespace vk {\n"

#处理enum
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

    enum_out += \
    "enum class " + my_name.my_name + "{\n"

    if de == 1:
        enum_out += "#if 0\n"

    member_list = enum.find_all('enum')
    if len(member_list) <= 0:
        enum_out+= "using " + my_name.my_name + " = " + enum_vk_name + ";\n\n"
        continue

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

    if de == 1:
        enum_out += "#endif \n\n"

    enum_out += "};\n\n"

    all_type_dict[e_obj.vk_name] = e_obj

#flag bits

flagbits_out = ""
flag_bits_list = soup.registry.find_all('enums',attrs={'type':'bitmask'})
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

    member_list = enum.find_all('enum')
    if len(member_list)<=0:
        flagbits_out+="using "+fb_obj.my_name+" = \n\t\t\t"+fb_obj.vk_name+";\n\n"
        continue
    flagbits_out+=\
        "class " + fb_obj.my_name + " {\n" + \
        "private:\n" + \
        fb_obj.my_name + "(int flag_);\n" + \
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
    "operator bool()@return !!flag;$\n" \
    "{0}& clear()@flag = 0;return *this;$\n" \
    "{0}(int flags_):flag(flags_) @$\n{0} all_flags()@\nreturn " \
        .format(fb_obj.my_name).replace("@", "{").replace("$", "}")
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

    flagbits_out+="};\n"


    flagbits_out+="{0} inline operator|({0}::B bit1_, {0}::B bit2_)@{0} flags(bit1_);return flags | bit2_;$\n\n"\
        .format(fb_obj.my_name).replace("@","{").replace("$","}")

    all_type_dict[fb_obj.vk_name] = fb_obj


#处理struct.....
struct_out = ""

struct_list = soup.registry.types.find_all('type', attrs={'category' : 'struct'})
struct_dict = dict([])
s_list = []

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

        default_value_temp = member.get('values')
        if default_value_temp != None:
            m.default_value = default_value_temp
            #...

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

        m.text = m.o_text.replace(m.o_comment, "")

        m.comment += m.noautovalidity+m.externsync+m.altlen+m.len+"\n"+m.o_comment

        if m.name == "sType":
            s_obj.have_sType = 1

        s_obj.members.append(m)

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

    ex_list = s.struct_extends_to.split(",")
    for ex in ex_list:
        if ex == "":
            continue
        struct_dict[ex].struct_extends.append(s.vk_name)

for struct in struct_list:
    s = struct_dict[struct.get('name')]
    comment = "\t"+s.vk_name+"\n"

    if struct.get('alias') != None:
        s.comment = comment+s.comment
        s_list.append(s)
        continue

    if s.returned_only != "":
        comment+=s.returned_only+"\n"
    if s.struct_extends_to != "":
        comment += "ex to: "+s.struct_extends_to+"\n"
    if len(s.struct_extends)>0:
        comment+="ex:\n"
        for ex_ in s.struct_extends:
            comment += "\t"+ex_+"\n"
    s.comment = comment+s.comment
    s_list.append(s)

#最先输出 alias
i = 0
while i<len(s_list):
    s = s_list[i]
    if s.alias != "alias":
        i+=1
        continue
    struct_out += "/*"+s.comment+"*/\n"
    struct_out += "using "+s.my_name+" = \n\t\t\t\t"+s.vk_name+";\n\n"

    s.g = 1
    s_list.pop(i)


#输出与没有这堆struct作为成员的结构
struct_out+="\n/*---------------- 无依赖的 struct ---------------------*/\n\n"

i = 0
while i < len(s_list):
    s = s_list[i]

    if s.have_sType == 1:
        i+=1
        continue

    is_ok = 1
    for m in s.members:
        if struct_dict.get(m.type_only) == None:
            continue
        else:
            is_ok = 0

    if is_ok == 0:
        i+=1
        continue

    struct_out += "/*"+s.comment+"*/\n"
    struct_out+="struct\t\t"+s.my_name+"{\n"
    for m in s.members:
        struct_out+="\t"+m.final_text+";\n"
    struct_out += "};\n"

    s.g = 1

    s_list.pop(i)

all_out += enum_out+flagbits_out+struct_out
all_out += "\n}}\n"



types_file = open("..\\types.h","w")
types_file.write(all_out)



























































