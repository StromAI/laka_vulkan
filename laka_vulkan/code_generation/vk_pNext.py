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
原本是用正则的 很快写完也感觉更方便 但考虑到规范性还是用解析xml来做

有了vk.xml 基本上可以撇开网页文档 只需看这个文件就行
'''

import re
from bs4 import BeautifulSoup

file = open("..\\vk.xml").read()

soup = BeautifulSoup(file)

struct_list = soup.registry.types.find_all('type',attrs={'category':'struct'})

cpp_out = ""
h_out = ""


class Member:
    name_ = ""
    type_ = ""
    values_ = ""
    comment_ = ""
    text_ = ""

sdict = dict([])
ssdict = dict([])
flag_dict = dict([])

def out_declare_member(struct_name_,base_name_):
    name = struct_name_[2:]
    declare = "struct "+name+":public "+base_name_+"{\n"
    for m in ssdict[struct_name_]:
        if m.name_=="pNext" or m.name_ == "sType":
            continue
    
        declare += m.text_+";\n"

    declare = declare+name+"(\n"
    i = 0
    for m in ssdict[struct_name]:
        if m.name_=="pNext" or m.name_ == "sType":
            continue

        if i!=0:
            declare+=",\n"
        if m.type_.find('[') != -1:
            declare += "Array_value<"+re.sub(r'[\[A-Za-z0-9_]*\]',"",m.type_)+">"+m.name_+"_"
        else:
            declare+=m.type_ +" "+m.name_+"_"
        i+=1
    declare = declare+");\n"
    declare = declare + "};\n\n"
    return declare


def out_define(struct_name):
    name= struct_name[2:]
    define = name+"::"+name+"(\n"
    i=0
    for m in ssdict[struct_name]:
        if m.name_=="pNext" or m.name_ == "sType":
            continue

        if i!=0:
            define+=",\n"
        if m.type_.find('[') != -1:
            define += "Array_value<"+re.sub(r'[\[A-Za-z0-9_]*\]',"",m.type_)+">"+m.name_+"_"
        else:
            define+=m.type_ +" "+m.name_+"_"
        i+=1
    define+=")\n:"

    array_init = ""
    i=0
    for m in ssdict[struct_name]:
        if m.name_=="pNext" or m.name_ == "sType":
            continue

        if m.type_.find('[') != -1:
            array_length = re.search(r'\[[A-Za-z0-9_]*\]',m.type_).group().replace("[","").replace("]","")
            array_init += "\nif("+array_length+"<"+m.name_+"_.size() ){ init_show;show_err(\"array "+m.name_+" is too long\");return ;}"
            array_init += "\nelse{ memcpy(&"+m.name_+"[0],"+m.name_+"_.data(),"+m.name_+"_.size() "+");}"
            continue

        if i!=0:
            define+="\n,"
        define+=m.name_+"("+m.name_+"_)"
        i+=1
    define+=\
        "{"+\
        array_init\
        +"\n}\n\n"
    return define


for struct in struct_list:
    struct_name = struct.get('name')
    sdict[struct_name] = list()
    ssdict[struct_name] = list()
    flag_dict[struct_name] = False

    member_list = struct.find_all('member')

    stype_str = ""

    for member in member_list:
        m = Member()
        m.name_ = member.find_all('name')[0].get_text()
        member.type.string = member.type.get_text()+" "
        m.text_ = member.get_text()

        temp = member.comment
        if temp!=None:
            temp = temp.get_text()
            m.text_ = m.text_.replace(temp,"")
        m.type_ = m.text_.replace(m.name_,"")
        
        ssdict[struct_name].append(m)

        temp = member.get('values')
        if temp!=None and m.name_=="sType":
            m.values_ = ",sType("+temp+")"
                


for struct in struct_list:
    struct_name = struct.get('name')
    structextends = struct.get('structextends')

    if structextends != None:
        if structextends.find(",") != -1:
            temp_list = structextends.split(",")
            for temp in temp_list:
                sdict[temp].append(struct_name)
        else:
            sdict[structextends].append(struct_name)

for struct in struct_list:
    struct_name = struct.get('name')
    if len(sdict[struct_name])==0:
        continue
    
    base_name = struct_name[2:]+"_base"

    base_declare =\
        "struct "+base_name+"{\n"\
        "protected:\n"\
            "VkStructureType sType;\n"\
            "const void* pNext;\n"+\
            base_name+"();\n"\
            "~"+base_name+"();\n"\
        "public:\n"+\
            base_name+"& operator<<("+base_name+"& base_);\n"\
        "};\n\n"
    
    base_define = \
        base_name+"::"+base_name+"():pNext(nullptr){};\n"+\
        base_name+"::~"+base_name+"(){};\n\n"+\
        base_name+"& "+base_name+"::operator<<("+base_name+"& base_)"\
        "{\n"\
            "base_.pNext = pNext;\n"\
            "pNext = &base_;\n"\
            "return *this;\n"\
        "}\n\n"

    

    big_name = struct_name[2:]
    big_declare = out_declare_member(struct_name,base_name)

    big_define = out_define(struct_name)

    nexts_declare = ""
    for current_struct_name in sdict[struct_name]:
        if flag_dict[current_struct_name] == True:
            continue
        next_name = current_struct_name[2:]
        nexts_declare = out_declare_member(struct_name,base_name)


    h_out+=base_declare+nexts_declare
    cpp_out+=base_define+big_define



count =0

out_cpp_file = open("..\\"+"vk_pNext.cpp", "w")
out_h_file = open("..\\"+"vk_pNext.h","w")

code = \
"/*\n"\
"Copyright (c) 2018 gchihiha\n\n"\
"This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.\n\n"\
"Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:\n\n"\
"1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.\n\n"\
"2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.\n\n"\
"3. This notice may not be removed or altered from any source distribution.\n\n"\
"*/\n\n"
h_code = code
h_code += \
"#pragma once\n"\
"#include \"vulkan/vulkan.h\"\n"\
"#include \"common.h\"\n"\
"namespace laka { namespace vk {\n"

code+=\
"#include \"vk_pNext.h\"\n"\
"namespace laka { namespace vk {\n"

h_code+=h_out
code+=cpp_out

h_code+="\n}}\n"
code+="\n}}\n"

print >> out_cpp_file,"%s" % (code)
out_cpp_file.close()

print >> out_h_file,"%s" % (h_code)
out_h_file.close()

#print code
#print h_code


