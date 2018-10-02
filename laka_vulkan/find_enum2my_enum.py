'''
Copyright (c) 2018 gchihiha

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.
'''

import re

vk_file = open("vk1.1.82.txt","r").read()

the_list = re.findall(r'typedef[ ]*enum[ ]*Vk[\w,\d]*[\w,\d,\s,{,},\,=,]*;', vk_file, re.DOTALL)
count =0

the_list2 = the_list[:]

for itr in the_list:
    if itr.find("FlagBits") != -1:
        the_list2.remove(itr)
        

#for element in the_list2:
    #print element



out_cpp_file = open("vk_enums.cpp", "w")
out_h_file = open("vk_enums.h","w")

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
"#include \"vk_enums.h\"\n"\
"namespace laka { namespace vk {\n"

for itr in the_list2:
    class_name0 = re.search('Vk[\w,\d]* ',itr,0).group()[2:]
    sub_name_list = re.findall(r'VK_[\w,\d]* =',itr)
    sub_class_name_list = re.findall(r'[A-Z]+[a-z]+[a-z]*|[A-Z][A-Z]*',class_name0)

    class_name1 = ""
    class_name2 = ""
    i=0
    for temp in sub_class_name_list:
        if i!=0:
            class_name1 += "_"
        class_name1 += temp
        i+=1
    new_class_name  = "E_"+class_name1.lower()
    surplus_name = "VK_" + re.sub("_[A-Z]+[A-Z]+[A-Z]*","",class_name1).upper()

    i=0
    new_sub_name_list = []
    for sub_name_itr in sub_name_list:
        #print "surplus_name :"+surplus_name
        #print "sub_name_itr :"+sub_name_itr
        sub_name_list[i] = sub_name_itr.replace(" =","")
        element_temp = sub_name_list[i].replace(surplus_name,"").lower()[1:]
        temp_0 = ""+element_temp[0]
        print temp_0
        if temp_0.isdigit() or \
        element_temp == "inline" or \
        element_temp == "and" or \
        element_temp == "xor" or \
        element_temp == "or":
            element_temp = "e_"+element_temp

        new_sub_name_list.append(element_temp)
        
        #print "final_name   :"+ new_sub_name_list[i]
        i+=1
    h_code += "enum class "+new_class_name+"{\n"
    i=0
    for new_sub_name in new_sub_name_list:
        h_code += new_sub_name + " = "+sub_name_list[i]+",\n"
        i+=1
    h_code+="};\n\n"


h_code+="\n}}\n"
code+="\n}}\n"

print >> out_cpp_file,"%s" % (code)
out_cpp_file.close()

print >> out_h_file,"%s" % (h_code)
out_h_file.close()

print code
print h_code
