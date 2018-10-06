#coding=utf-8
'''
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.
'''

import re
from bs4 import BeautifulSoup

file = open(".\\vk.xml").read()

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

for struct in struct_list:
    struct_name = struct.get('name')
    sdict[struct_name] = list()
    ssdict[struct_name] = list()
    flag_dict[struct_name] = False

    member_list = struct.find_all('member')

    for member in member_list:
        m = Member()
        m.name_ = member.find_all('name')[0].get_text()
        m.type_ = member.type.get_text()
        member.type.string = member.type.get_text()+" "
        m.text_ = member.get_text()

        temp = member.comment
        if temp!=None:
            temp = temp.get_text()
            m.text_ = m.text_.replace(temp,"")
        
        ssdict[struct_name].append(m)


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
    big_declare = "struct "+big_name+":public "+base_name+"{\n"
    for m in ssdict[struct_name]:
        if m.name_ != "pNext" and m.name_ != "sType":
            big_declare = big_declare + m.text_+";\n"
    big_declare = big_declare + "};\n"

    nexts_declare = ""
    for current_struct_name in sdict[struct_name]:
        if flag_dict[current_struct_name] == True:
            continue
        next_name = current_struct_name[2:]
        nexts_declare = nexts_declare + "struct "+next_name+":public "+base_name+"{\n"
        for m in ssdict[current_struct_name]:
            if m.name_ != "pNext" and m.name_ != "sType":
                pass
                nexts_declare = nexts_declare + m.text_+";\n"
        flag_dict[current_struct_name] = True
        nexts_declare = nexts_declare + "};\n\n"

    h_out+=base_declare+nexts_declare
    cpp_out+=base_define



count =0

out_cpp_file = open("pNext.cpp", "w")
out_h_file = open("pNext.h","w")

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
"#include \"pNext.h\"\n"\
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


