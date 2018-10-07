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

file_name = "vk_structs"
cpp_out = ""
h_out = ""

file = open(".\\vk.xml").read()
soup = BeautifulSoup(file)

author_nodes = soup.registry.find_all('tags',attrs={"comment":"Vulkan vendor/author tags for extensions and layers"})
author_name_list = []
author_list = author_nodes[0].find_all('tag')
for author_node in author_list:
    author_name_list.append(author_node.get('name') )
print author_name_list


def get_new_name(old_name):
    old_name = re.search(r'')


struct_list = soup.registry.types.find_all('type',attrs={'category':'struct'})

old2new_dict = dict([])
new2old_dict = dict([])

for struct in struct_list:
    member_list = struct.find_all('member')
    if len(member_list)<=0:
        continue

    old_name = struct.get('name')

    new_name = old_name[2:]
    
    houzhui = ""
    i = 0
    for hz in author_name_list:
        temp = re.search(hz+'$',new_name)
        if temp != None:
            houzhui = temp.group()
            new_name = new_name.replace(houzhui,"")
    
    print old_name
    print houzhui

    if temp!=None:
        houzhui = temp.group()
    sub_names = re.findall(r'[A-Z]+[a-z]*',new_name)
    new_name = ""
    i= 0
    for sub_name in sub_names:
        if i!=0:
            new_name+="_"
        new_name+=sub_name
        i+=1

    fuck_name = "VK_"+ new_name.upper()
    
    if houzhui!="":
        new_name+="_"+houzhui

    new_name = "S_"+new_name.lower()

    '''
    print "----------"+old_name+"-----------"
    print new_name
    print sub_names
    print houzhui
    '''

out_cpp_file = open(file_name+".cpp", "w")
out_h_file = open(file_name+".h","w")

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
"#include \""+file_name+".h\"\n"\
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


