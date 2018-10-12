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
The C++ ISO standard says:
"A function defined within a class definition is an inline function."
But, this doesn't mean the function will necessarily be inlined: 
generally nowadays, it appears that the compiler will decide if inlining the function will lead to any benefits.
出于保守 都是将函数定义干脆写在cpp文件中的 所以优化时还必须注意成员函数的复杂程度 尽量简短
'''


import re
from bs4 import BeautifulSoup
#todo:处理struct 成员初始值 包括不限于sType
#todo:生成pNext struct    并写入注释
#todo:为存在私有成员的struct 添加方便使用的函数
#todo:处理数组成员 count+数组 的成员
#todo:确定struct 的父子关系 写入注释
#todo:将所有成员函数写在类定义中 若发现复杂的函数还是写在cpp中
#这些翻着语法手册搞的东西 补丁式写作法 可以说是非常辣鸡的代码 todo:搞完重写一遍 加上注释方便查看

my_format = \
"/*\n"\
"Copyright (c) 2018 gchihiha\n\n"\
"This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.\n\n"\
"Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:\n\n"\
"1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.\n\n"\
"2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.\n\n"\
"3. This notice may not be removed or altered from any source distribution.\n\n"\
"*/\n\n"

file = open("..\\vk.xml").read()
soup = BeautifulSoup(file)

author_nodes = soup.registry.find_all('tags',attrs={"comment":"Vulkan vendor/author tags for extensions and layers"})
author_name_list = []
author_list = author_nodes[0].find_all('tag')
for author_node in author_list:
    author_name_list.append(author_node.get('name') )

platform_nodes = soup.registry.platforms.find_all('platform')
platform_list = []
wsi_dict = dict([])
for p_node in platform_nodes:
    name = p_node.get('name')
    macro = p_node.get('protect')
    platform_list.append(name)
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

name_dict = dict([])


#处理enum
enum_file_name = "vk_enums"

cpp_out = ""
h_out = ""

enum_list = soup.registry.find_all('enums',attrs={'type':'enum'})
for enum in enum_list:
    enum_vk_name = enum.get('name')
    my_name = get_my_name(enum_vk_name, "E", "Vk")
    name_dict[my_name.my_name] = my_name
    name_dict[my_name.vk_name] = my_name

    comment0=""
    comment_temp = enum.get('comment')
    if comment_temp !=None:
        comment0 = comment_temp
    h_out += "/*\t" + enum_vk_name +"\n"+ comment0 +"*/\n"

    de = 0
    if my_name.vk_name == "VkDriverIdKHR":
        de = 1

    h_out += \
    "enum class " + my_name.my_name + "{\n"

    if de == 1:
        h_out += "#if 0\n"

    member_list = enum.find_all('enum')
    if len(member_list) <= 0:
        h_out+="using "+my_name.my_name+" = "+enum_vk_name+";\n\n"
        continue

    for member in member_list:
        m_vk_name = member.get('name')
        m_my_name = get_my_name(m_vk_name, "e", "VK")
        m_my_name.my_name = "e"+m_vk_name.replace(my_name.fuck_name.upper(),"").lower()
        m_my_name.my_name = m_my_name.my_name.replace(my_name.fuck_name.lower(), "")

        name_dict[m_my_name.my_name] = m_my_name
        name_dict[m_my_name.vk_name] = m_my_name

        h_out += m_my_name.my_name + " = " + m_vk_name + ",\n"

    if de == 1:
        h_out += "#endif \n\n"

    h_out += "};\n\n"


out_h_file = open("..\\" + enum_file_name + ".h", "w")

code = my_format
h_code = code
h_code += \
"#pragma once\n"\
"#include \"vulkan/vulkan.h\"\n"\
"#include \"common.h\"\n"\
"namespace laka { namespace vk {\n"
h_code+=h_out+\
"\n}}\n"

out_h_file.write(h_code)
out_h_file.close()


#处理flag bits
flagbits_file_name = "vk_bits"

cpp_out = ""
h_out = ""

flag_bits_list = soup.registry.find_all('enums',attrs={'type':'bitmask'})
for enum in flag_bits_list:

    vk_name = name = enum.get('name').replace("FlagBits", "")

    sub_names = re.findall(r'[A-Z]+[a-z]*', name)
    class_name = ""
    for sub_name in sub_names:
        class_name += sub_name + "_"

    class_name = re.sub(r'_$', "", class_name)
    class_name = re.sub("^Vk","",class_name)
    fuck_name = "VK"+re.sub(r'_[A-Z]+[A-Z]*$', "", class_name).upper()

    name = "F" + class_name.lower()

    my_name = get_my_name(enum.get('name').replace("FlagBits", ""),"F","Vk")
    my_name.my_name = name
    my_name.vk_name = enum.get('name')
    name_dict[my_name.my_name] = my_name
    name_dict[my_name.vk_name] = my_name

    name_dict[my_name.vk_name.replace("FlagBits","Flags")] = my_name

    comment = ""
    temp = enum.get('comment')
    if temp!=None:
        comment = "\n"+temp
    h_out+="/*\t"+vk_name+comment+"*/\n"

    #if enum.get('name') == 'VkRenderPassCreateFlagBits':
        #h_out+="/**/\n\n"
        #continue

    member_list = enum.find_all('enum')
    if len(member_list) <= 0:
        h_out+="using "+my_name.my_name+" = \n\t\t\t"+my_name.vk_name+";\n\n"
        continue

    h_out += \
        "class " + name + " {\n" + \
        "private:\n" + \
        name + "(int flag_);\n" + \
        "public:\n" \
        "int flag;\n" \
        "enum B{\n"

    new_m_name_list = []
    for member in member_list:
        m_name = member.get('name')
        if m_name.find("_MAX_NUM") != -1:
            continue
        new_m_name = "b_" + m_name.replace(fuck_name + "_", "")
        new_m_name = re.sub(r'_BIT$', "", new_m_name).lower()
        new_m_name_list.append(new_m_name)

        m_comment = ""
        temp = member.get('comment')
        if temp!=None:
            m_comment+=temp
        if m_comment!="":
            h_out += "/*"+m_comment+"*/\n"
        h_out += "\t"+new_m_name + " = " + m_name + ",\n"


    h_out += "};\n"
    h_out += \
        "{0}();\n" \
        "{0}(B bits_);\n" \
        "{0}({0} const& flag_);\n" \
        "{0}(std::initializer_list<B> bit_list);\n" \
        "{0}& operator = ({0} flag_);\n" \
        "{0} operator | (B bit_);\n" \
        "{0}& operator |= (B bit_);\n" \
        "{0} operator | ({0} flag_);\n" \
        "{0}& operator |= ({0} flag_);\n" \
        "{0} operator & ({0} flag_);\n" \
        "{0}& operator &= ({0} flag_);\n" \
        "{0} operator ^ ({0} flag_);\n" \
        "{0}& operator ^= ({0} flag_);\n" \
        "{0} operator ~ ();\n" \
        "bool operator !();\n" \
        "bool operator == ({0} flag_);\n" \
        "bool operator == (B bit_);\n" \
        "bool operator != ({0} flag_);\n" \
        "bool operator != (B bit_);\n" \
        "operator bool();\n" \
        "{0} all_flags();\n" \
        "{0}& clear();\n".format(name).replace("@", "{").replace("$", "}")

    h_out += enum.get('name') + " get();\n"

    for new_m_nmae in new_m_name_list:
        h_out += name + "& " + "on_" + new_m_nmae[2:] + "();\n"
        h_out += name + "& " + "off_" + new_m_nmae[2:] + "();\n"
    h_out += "};\n"
    h_out += name + " operator|(" + name + "::B bit1_," + name + "::B bit2_);\n\n\n"

    cpp_out += \
        "{0}::{0}():flag(0)@$\n" \
        "{0}::{0}({0}::B bits_):flag(static_cast<int>(bits_))@$\n" \
        "{0}::{0}({0} const& flag_):flag(flag_.flag)@$\n" \
        "{0}::{0}(std::initializer_list<B> bit_list)@for (auto&& bit : bit_list)@flag |= static_cast<int>(bit);$$\n" \
        "{0}& {0}::operator = ({0} flag_)@flag = flag_.flag;return *this;$\n" \
        "{0} {0}::operator | (B bit_)@return flag | static_cast<int>(bit_);$\n" \
        "{0}& {0}::operator |= (B bit_)@flag |= static_cast<int>(bit_);return *this;$\n" \
        "{0} {0}::operator | ({0} flag_)@return flag | flag_.flag;$\n" \
        "{0}& {0}::operator |= ({0} flag_)@flag |= flag_.flag;return *this;$\n" \
        "{0} {0}::operator & ({0} flag_)@return flag & flag_.flag;$\n" \
        "{0}& {0}::operator &= ({0} flag_)@flag &= flag_.flag;return *this;$\n" \
        "{0} {0}::operator ^ ({0} flag_)@return flag ^ flag_.flag;$\n" \
        "{0}& {0}::operator ^= ({0} flag_)@flag ^= flag_.flag;return *this;$\n" \
        "{0} {0}::operator ~ ()@return all_flags().flag^flag;$\n" \
        "bool {0}::operator !()@return !flag;$\n" \
        "bool {0}::operator == ({0} flag_)@return flag == flag_.flag;$\n" \
        "bool {0}::operator == (B bit_)@return flag == static_cast<int>(bit_);$\n" \
        "bool {0}::operator != ({0} flag_)@return flag != flag_.flag;$\n" \
        "bool {0}::operator != (B bit_)@return flag != static_cast<int>(bit_);$\n" \
        "{0}::operator bool()@return !!flag;$\n" \
        "{0}& {0}::clear()@flag = 0;return *this;$\n" \
        "{0} operator|({0}::B bit1_, {0}::B bit2_)@{0} flags(bit1_);return flags | bit2_;$\n" \
        "{0}::{0}(int flags_):flag(flags_) @$\n{0} {0}::all_flags()@\n return " \
            .format(name).replace("@", "{").replace("$", "}")
    i = 0
    for member in member_list:
        m_name = member.get('name')
        if i != 0:
            cpp_out += " | \n"
        cpp_out += m_name
        i += 1
    cpp_out += ";\n}\n"

    cpp_out += enum.get('name') + " " + name + "::get()\n{ return (" + enum.get('name') + ")flag;}\n"

    i = 0
    for member in member_list:
        m_name = member.get('name')
        cpp_out += name + "& " + name + "::" + \
                   "on_" + new_m_name_list[i][2:] + "()\n{ flag |= " + m_name + "; return *this; }\n\n"
        cpp_out += name + "& " + name + "::" + \
                   "off_" + new_m_name_list[i][2:] + "()\n{ flag &= ~" + m_name + "; return *this; }\n\n"
        i += 1
    cpp_out += "\n\n"

code = my_format
h_code = code
h_code += \
"#pragma once\n"\
"#include \"vulkan/vulkan.h\"\n"\
"#include \"common.h\"\n"\
"namespace laka { namespace vk {\n"

code+=\
"#include \""+flagbits_file_name+".h\"\n"\
"namespace laka { namespace vk {\n"

h_code+=h_out
code+=cpp_out

h_code+="\n}}\n"
code+="\n}}\n"


out_cpp_file = open("..\\"+flagbits_file_name+".cpp", "w")
out_h_file = open("..\\"+flagbits_file_name+".h","w")

out_cpp_file.write(code)
out_cpp_file.close()

out_h_file.write(h_code)
out_h_file.close()

#处理struct=====================================
struct_file_name = "vk_structs"

cpp_out = ""
h_out = ""

class Struct:
    alias = ""
    g = 0
    vk_name = ""
    my_name = ""
    comment = ""
    returned_only = ""
    struct_extends = []
    struct_extends_to = ""
    baba = []
    members = []

    def prt(this_):
        print ("--------------------------------------------")
        print ("vk name\t:" +this_.vk_name)
        print ("my name\t:"+this_.my_name)
        print (this_.returned_only)
        print (this_.comment)
        print ("extends to:\t"+ this_.struct_extends_to)
        print ("extends:\t")
        print (this_.struct_extends)
        for m in this_.members:
            m.prt()

class S_member:
    m_name = ""
    m_type = ""
    m_type_only = ""
    m_array = ""
    m_value = ""
    m_len = ""
    m_altlen = ""
    m_optional=""
    m_externsync = ""
    m_noautovalidity = ""
    text = ""
    comment = ""
    type_text = ""
    array_len = ""

    def prt(this_):
        print ("\t-----------------------")
        print ("\tname:\t"+this_.m_name)
        print ("\ttype:\t"+this_.m_type)
        print ("\ttype only:\t"+this_.m_type_only)
        print ("\tarray:\t"+this_.m_array)
        print ("\tvalue:\t"+this_.m_value)
        print ("\tlen:\t"+this_.m_len)
        print ("\taltlen:\t"+this_.m_altlen)
        print ("\toptional:\t"+this_.m_optional)
        print ("\texternsync:\t"+this_.m_externsync)
        print ("\tnoautovalidity\t"+this_.m_noautovalidity)
        print ("\ttext:\t"+this_.text)
        print ("\tcomment:\t"+this_.comment)

struct_list = soup.registry.types.find_all('type',attrs={'category':'struct'})
struct_dict = dict([])

for struct in struct_list:
    struct_vk_name = struct.get('name')
    my_name = get_my_name(struct_vk_name, "S", "Vk")
    name_dict[my_name.my_name] = my_name
    name_dict[my_name.vk_name] = my_name

    my_struct = Struct()
    if struct.get('alias') != None:
        my_struct.alias = struct.get('alias')
    my_struct.vk_name = struct_vk_name
    my_struct.my_name = my_name.my_name
    my_struct.returned_only = struct.get('returnedonly')
    my_struct.members = list()
    my_struct.struct_extends = list()
    my_struct.baba = list()

    temp = struct.get('structextends')
    if temp!=None:
        my_struct.struct_extends_to = temp

    comment = struct.get('comment')
    if comment == None:
        my_struct.comment = ""
    else:
        my_struct.comment = comment

    member_list = struct.find_all('member')
    #if len(member_list)>0:
    for member in member_list:
        m = S_member()
        m.m_name = member.find_all('name')[0].get_text()
        m.text = member.get_text()

        m.comment = ""
        temp = member.get('optional')
        if temp != None:
            m.comment = "|optional|\t"

        temp = member.comment
        temp1 = ""
        if temp!=None:
            m.comment = temp1 = temp.get_text()

        m.text = m.text.replace(temp1,"")
        m.m_type = m.text.replace(m.m_name,"")
        m.m_type_only=member.type.get_text()

        m.m_array = ""
        temp = re.search(r'\[[A-Za-z0-9_]*\]',m.text)
        if temp!=None:
            m.m_array = temp.group().replace("[","").replace("]","")


        #if m.text.find('[')!=-1:
            #m.text = re.sub(r'\[[A-Z_a-z0-9]*\]',"",m.text).replace(m.m_type,m.m_type+"*")

        temp = member.get('values')
        if temp!=None:
            m.m_value = temp

        temp = member.get('altlen')
        if temp!=None:
            m.altlen = "altlen"
            m.comment += "alt"

        temp = member.get('len')
        if temp!=None:
            m.m_len = temp
            m.comment+="\nlen:\t"+temp

        temp = member.get('externsync')
        if temp!=None:
            m.m_externsync = "(externsync)"
            m.comment+="\n"+m.m_externsync

        temp = member.get('noautovalidity')
        if temp!=None:
            m.m_noautovalidity = "(noautovalidity)"

        my_struct.members.append(m)

    struct_dict[struct_vk_name] = my_struct

    #pNext
for struct2 in struct_list:
    if struct2.alias == "":
        continue

    struct_name = struct2.get('name')
    structextends = struct2.get('structextends')
    if structextends != None:
        temp_list = structextends.split(",")
        for temp in temp_list:
            struct_dict[temp].struct_extends.append(struct_name)

#comment
for struct in struct_list:
    if struct.alias == "":
        continue
    struct_name = struct.get('name')

    my_struct = struct_dict[struct_name]

    o = ""
    if my_struct.returned_only == "true":
        o = "\nreturnd only"

    comment = "/*\t"+struct_name+":"+o
    ex_to = ""
    if my_struct.struct_extends_to != "":
        ex_to+="\nextends to:\t"+my_struct.struct_extends_to
    ex_from = ""
    if len(my_struct.struct_extends)>0:
        ex_from += "\nextends:"
        for ex in my_struct.struct_extends:
            new_name = name_dict[ex]
            ex_from+="\n\t"+new_name.my_name
    comment+=ex_to+ex_from+my_struct.comment+"*/\n"
    my_struct.comment=comment

count = 0
for struct_node in struct_list:
    struct = struct_dict[struct_node.get('name')]

    if struct.alias != "":
        h_out += "using " + struct.my_name + " = \n\t\t\t\t" + struct.vk_name + ";//" + str(count + 1) + "\n\n"
        struct.g = 1
        count += 1
        continue

exist_no_sType = 1
no_sType_count = -1
while count<len(struct_dict):
    if no_sType_count == 0:
        exist_no_sType = 0

    no_sType_count = 0

    for struct_ in struct_list:
        struct3 = struct_dict[struct_.get('name')]
        if struct3.g == 1:
            continue
        not_ok = 0
        for m in struct3.members:
            name = m.m_name
            s = struct_dict.get(name)
            if s == None:
                continue
                if s.g == 0:
                    not_ok = 1
                    break

        for s_name in struct3.struct_extends:
            s = struct_dict.get(s_name)
            if s.g == 0:
                not_ok = 1
                break

        if not_ok == 1:
            continue

        is_nosType = 1
        for m in struct3.members:
            if m.m_name == "sType" or m.m_name == "pNext":
                is_nosType = 0
                break
        if is_nosType == 0 and exist_no_sType == 1:
            continue
        else:
            no_sType_count += 1

        sub_name_0 = name_dict[struct3.vk_name].sub_names[0].lower()
        if sub_name_0 == "mac":
            sub_name_0 += name_dict[struct3.vk_name].sub_names[1].lower()
        is_wsi = 0
        for wsi_name in platform_list:
            if  sub_name_0 == wsi_name:
                is_wsi = 1
                break

        if is_wsi == 1:
            h_out+="#ifdef "+wsi_dict[wsi_name]+"\n"

        is_have_stype_pNext = 0

        #成员声明
        h_out += \
        struct3.comment+\
        "typedef struct "+struct3.my_name+"{\n"#+"\n//"+str(count+1)+"\n"
        for m in struct3.members:
            if m.m_name == 'sType':
                h_out+="private:\n\tVkStructureType sTpye "
                if struct3.vk_name != "VkBaseOutStructure" and struct3.vk_name!="VkBaseInStructure":
                    h_out+="= "+m.m_value
                h_out+=";\n"
                is_have_stype_pNext = 1
                continue
            if m.m_name == 'pNext':
                h_out+="\tvoid* pNext = nullptr;\npublic:\n"
                is_have_stype_pNext = 1
                continue
            new_type_name = old_type_name = m.m_type_only
            temp = name_dict.get(old_type_name)
            if temp!=None:
                new_type_name = temp.my_name
            out = m.text.replace(old_type_name,new_type_name+" ",1)+";\n"
            out = re.sub(r' [ ]*\*', "*", out)
            out = re.sub(r'[ \t]+'," ",out)
            mValue = ""
            if struct3.returned_only != "true":
                mValue += " = "
                print (new_type_name)


            if m.comment!="":
                h_out+="/*"+m.comment+"*/\n"
            h_out+="\t"+out
        if is_have_stype_pNext == 0:
            h_out+="};\n\n"
            if is_wsi == 1:
                cpp_out+="#endif\n\n"

            struct3.g=1
            count+=1
            continue

        #构造函数声明
        h_out+="\n"+struct3.my_name+"(\n"
        temp = 0
        sm_str = ""
        for m in struct3.members:
            if m.m_name == 'sType' or m.m_name =='pNext':
                continue
            if temp!=0:
                sm_str+="\n\t,"
            else:
                sm_str+="\t "
            temp += 1

            the_text = m.text
            temp_new_type = name_dict.get(m.m_type_only)
            type_only = m.m_type_only
            if temp_new_type != None:
                type_only = temp_new_type.my_name
            the_text = the_text.replace(m.m_type_only, type_only + " ")
            the_text = re.sub(r' [ ]*]','\t',the_text)
            the_text = re.sub(r'[ \t]*\*','*',the_text)

            array_len = ""
            if the_text.find('[') == -1:
                the_text = the_text+"_"
            else:
                the_text = the_text.replace("[","_[")
                array_len = re.search(r'\[.*\]',the_text).group()
                temp_type = the_text.replace(array_len,"").replace(m.m_name+"_","")
                temp_type = re.sub(r'[ ]+',' ',temp_type)
                array_len = array_len.replace('[','').replace(']','')
                m.type_text = temp_type
                m.array_len = array_len
                the_text = "std::array< "+temp_type+","+array_len+" > "+m.m_name+"_"
            m.declare = the_text
            sm_str+=the_text
        h_out+=sm_str

        h_out+=");\n};\n\n"
        if is_wsi == 1:
            h_out+="#endif\n\n"

        #构造函数定义
        if is_wsi == 1:
            cpp_out+="#ifdef "+wsi_dict[wsi_name]+"\n"

        cpp_out += struct3.my_name +"::"+struct3.my_name+"(\n"+sm_str+")"
        temp = 0
        for m in struct3.members:
            if m.m_name == 'sType' or m.m_name =='pNext':
                continue
            if m.text.find('[') != -1:
                continue

            cpp_out += "\n\t\t"
            if temp==0:
                cpp_out+=":"
            else:
                cpp_out+=","
            temp+=1
            cpp_out+=m.m_name+"("+m.m_name+"_)"
        cpp_out+="\n{\n"

        for m in struct3.members:
            if m.text.find('[') == -1:
                continue
            cpp_out+="memcpy(&"+m.m_name+","+m.m_name+"_.data(),"+\
                     m.array_len+"*sizeof("+"decltype("+m.m_name+")) );\n"




        cpp_out+="}\n\n"
        if is_wsi == 1:
            cpp_out+="#endif\n\n"

        struct3.g=1
        count+=1

h_out += "\n//"+str(len(struct_dict))

out_cpp_file = open("..\\" + struct_file_name + ".cpp", "w")
out_h_file = open("..\\" + struct_file_name + ".h", "w")

code = my_format
h_code = code
h_code += \
"#pragma once\n"\
"#include \"vulkan/vulkan.h\"\n"\
"#include \"common.h\"\n"\
"#include <array>\n"\
"#include \""+enum_file_name+".h\"\n"\
"#include \""+flagbits_file_name+".h\"\n"\
"namespace laka { namespace vk {\n"

code+=\
"#include \"" + struct_file_name + ".h\"\n"\
"namespace laka { namespace vk {\n\nusing namespace std;\n\n"

h_code+=h_out
code+=cpp_out

h_code+="\n}}\n"
code+="\n}}\n"

out_cpp_file.write(code)
out_cpp_file.close()

out_h_file.write(h_code)
out_h_file.close()

#print code
#print h_code


