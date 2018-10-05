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

final_out = ""

for struct in struct_list:
    if struct.get('alias') != None:
        continue

    struct_name = struct.get('name')[2:]
    comment = struct.get('comment')
    if comment == None:
        comment = ""
    
    returnedonly = struct.get('returnedonly')
    if returnedonly == "true":
        returnedonly = "just return only\n"
    else:
        returnedonly = ""

    structextends = struct.get('structextends')
    if structextends == None:
        structextends = ""
    else:
        structextends = "can be pNext insert into:\t"+structextends+"\n"

    comment_out = '/*\n'+returnedonly+structextends+comment+"*/\n"

    out = comment_out+"struct " + struct_name+"{\n"

    member_list = struct.find_all('member')

    member_name_list = []
    member_text_list = []
    for member in member_list:
        member_name = ""
        member_type = ""
        member_values = ""
        member_len = ""
        member_altlen = ""
        member_optional = ""
        member_externsync = ""
        member_noautovalidity = ""
        member_text = ""
        member_out = ""
        
        member.type.string = member.type.get_text()+" "

        member_name = member.find_all('name')[0].get_text()
        member_type = member.type.get_text()
        member_text = member.get_text()

        temp = member.comment
        if temp!=None:
            temp=temp.get_text()
            member_text=member_text.replace(temp,"")
        
        member_name_list.append(member_name)

        
        real_text = member_text
        if member_text.find('[')!=-1:
            real_text = re.sub(r'\[[A-Z_a-z0-9]*\]',"",member_text)
            real_text = real_text.replace(member_type,member_type+"*")
        
        member_text_list.append(real_text)

        temp = member.get('values')
        if temp!=None:
            member_values = " = "+temp

        temp = member.get('len')
        if temp!=None:
            member_len = "(len:"+temp+")"

        temp = member.get('altlen')
        if temp!=None:
            member_altlen = "(altlen)"

        temp = member.get('externsync')
        if temp!=None:
            member_externsync = "(externsync)"

        temp = member.get('noautovalidity')
        if temp!=None:
            member_noautovalidity = "(noautovalidity)"

        temp = member.get('optional')
        if temp!=None:
            if member_text.find('*') != -1:
                member_values = " = nullptr"
            else:
                if member_type == " = HANDLE":
                    member_values = " = INVALID_HANDLE_VALUE"
                else:
                    if member_type == " = LPCWSTR":
                        member_values = " = nullptr"
                    else:
                        if member_type[0] == 'V' and member_type[1]=='k' and member_type.find('Flag')==-1:
                            member_values = " = VK_NULL_HANDLE"
                        else:
                            if member_type.find('Flag')==-1:
                                member_values = " = 0"
        if member_name == "pNext":
            member_values = " = nullptr"

        member_comment = "\t//"+member_len+member_altlen+member_externsync+member_noautovalidity
        temp = member.comment
        if temp!=None:
            member_comment+=temp.get_text()
        if member_comment == "\t//":
            member_comment = ""

        member_out+=member_text+member_values+";"+member_comment+"\n"

        out += member_out
    
    out+="};\n\n"

    final_out+=out

count =0

out_cpp_file = open("vk_structs.cpp", "w")
out_h_file = open("vk_structs.h","w")

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
"namespace laka { namespace vk {\n"

code+=\
"#include \"vk_structs.h\"\n"\
"namespace laka { namespace vk {\n"

h_code+=final_out

h_code+="\n}}\n"
code+="\n}}\n"

print >> out_cpp_file,"%s" % (code)
out_cpp_file.close()

print >> out_h_file,"%s" % (h_code)
out_h_file.close()

#print code
#print h_code