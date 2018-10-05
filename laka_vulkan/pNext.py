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


sdict = dict([])
for struct in struct_list:
    struct_name = struct.get('name')
    sdict[struct_name] = list()

for struct in struct_list:
    struct_name = struct.get('name')
    
    structextends = struct.get('structextends')
    if structextends != None:
        sdict[struct_name].append(structextends)

for struct in struct_list:
    if len(sdict[struct_name])>=0:
        print sdict[struct_name]



    


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