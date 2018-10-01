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
        

for element in the_list2:
    print element



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
    print class_name0
'''
for itr in the_list:
    #print itr
    class_name0 = re.search('Vk[\w,\d]* ',itr,0).group()[2:]
    sub_name_list = re.findall(r'VK_[\w,\d]* =',itr)
    sub_value_list = re.findall(r'=[ \w\d]*',itr)

    str_index = class_name0.find("FlagBits")
    class_name1 = class_name0[:str_index]

    class_sub_name_list = re.findall(r'[A-Z][a-z]*',class_name1)
    class_name2 = ""
    for sub_name_temp in class_sub_name_list:
        class_name2 += sub_name_temp
        class_name2 += "_"
    class_name3 = "VK_" + class_name2[:-1].upper()

    new_sub_name_list = []
    i = 0
    for sub_name in sub_name_list:
        sub_name_list[i] = re.sub(r'[ =]',"",sub_name,0)
        new_sub_name_list.append("e"+sub_name_list[i].replace(class_name3,""))
        new_sub_name_list[i] = re.sub(r'_BIT',"",new_sub_name_list[i],0).lower()
        i+=1
    i=0
    for sub_value in sub_value_list:
        sub_value_list[i] = sub_value.replace(" ","").replace("=","")
        i+=1

    my_class_name = "F_"+ (class_name2[:-1].lower())+class_name0[str_index:].replace("FlagBits","").rstrip()
    h_code += \
    "class "+ my_class_name +" {\n" +\
    "private:\n"\
    "int flag;\n"\
    +my_class_name+"(int flag_);\n"\
    "public:\n"\
    "enum class Bits {\n"
    i=0
    for sub_name_temp in new_sub_name_list:
        if sub_name_temp.find("_MAX_NUM") != -1:
            continue
        h_code+=sub_name_temp+" = "+sub_name_list[i]+",\n"
        i+=1
    h_code += "};\n\n"
    h_code += \
    "{0}();\n"\
    "{0}(Bits bits_);\n"\
    "{0}({0} const& flag_);\n"\
    "{0}(std::initializer_list<Bits> bit_list);\n"\
    "{0}& operator = ({0} flag_);\n"\
    "{0} operator | (Bits bit_);\n"\
    "{0}& operator |= (Bits bit_);\n"\
    "{0} operator | ({0} flag_);\n"\
    "{0}& operator |= ({0} flag_);\n"\
    "{0} operator & ({0} flag_);\n"\
    "{0}& operator &= ({0} flag_);\n"\
    "{0} operator ^ ({0} flag_);\n"\
    "{0}& operator ^= ({0} flag_);\n"\
    "{0} operator ~ ();\n"\
    "bool operator !();\n"\
    "bool operator == ({0} flag_);\n"\
    "bool operator == (Bits bit_);\n"\
    "bool operator != ({0} flag_);\n"\
    "bool operator != (Bits bit_);\n"\
    "operator bool();\n"\
    "{0} all_flags();\n"\
    "{0}& clear();\n".format(my_class_name).replace("@","{").replace("$","}")

    i=0
    for sub_name_temp in new_sub_name_list:
        h_code+=my_class_name+"& "+sub_name_temp+"_on();\n"
        h_code+=my_class_name+"& "+sub_name_temp+"_off();\n"
        i+=1
    h_code+="};\n"
    h_code+= my_class_name+" operator|(" +my_class_name+ "::Bits bit1_, "+my_class_name+"::Bits bit2_);"

    code += \
    "{0}::{0}():flag(0)@$\n"\
    "{0}::{0}({0}::Bits bits_):flag(static_cast<int>(bits_))@$\n"\
    "{0}::{0}({0} const& flag_):flag(flag_.flag)@$\n"\
    "{0}::{0}(std::initializer_list<Bits> bit_list)@for (auto&& bit : bit_list)@flag |= static_cast<int>(bit);$$\n"\
    "{0}& {0}::operator = ({0} flag_)@flag = flag_.flag;return *this;$\n"\
    "{0} {0}::operator | (Bits bit_)@return flag | static_cast<int>(bit_);$\n"\
    "{0}& {0}::operator |= (Bits bit_)@flag |= static_cast<int>(bit_);return *this;$\n"\
    "{0} {0}::operator | ({0} flag_)@return flag | flag_.flag;$\n"\
    "{0}& {0}::operator |= ({0} flag_)@flag |= flag_.flag;return *this;$\n"\
    "{0} {0}::operator & ({0} flag_)@return flag & flag_.flag;$\n"\
    "{0}& {0}::operator &= ({0} flag_)@flag &= flag_.flag;return *this;$\n"\
    "{0} {0}::operator ^ ({0} flag_)@return flag ^ flag_.flag;$\n"\
    "{0}& {0}::operator ^= ({0} flag_)@flag ^= flag_.flag;return *this;$\n"\
    "{0} {0}::operator ~ ()@return all_flags().flag^flag;$\n"\
    "bool {0}::operator !()@return !flag;$\n"\
    "bool {0}::operator == ({0} flag_)@return flag == flag_.flag;$\n"\
    "bool {0}::operator == (Bits bit_)@return flag == static_cast<int>(bit_);$\n"\
    "bool {0}::operator != ({0} flag_)@return flag != flag_.flag;$\n"\
    "bool {0}::operator != (Bits bit_)@return flag != static_cast<int>(bit_);$\n"\
    "{0}::operator bool()@return !!flag;$\n"\
    "{0}& {0}::clear()@flag = 0;return *this;$\n"\
    "{0} operator|({0}::Bits bit1_, {0}::Bits bit2_)@{0} flags(bit1_);return flags | bit2_;$\n"\
    "{0}::{0}(int flags_):flag(flags_) @$\n{0} {0}::all_flags()@\n return "\
        .format(my_class_name).replace("@","{").replace("$","}")

    i = 0
    for sub_name_temp in sub_name_list:
        if i!=0:
            code+=" | \n"
        code+=sub_name_temp
        i+=1
    code+=";\n}\n"

    i = 0
    for sub_name_temp in sub_name_list:
        code += my_class_name+"& "+my_class_name+ "::"+ \
                new_sub_name_list[i] +"_on(){ flag |= " + sub_name_temp + "; return *this; }"
        code += my_class_name+"& "+my_class_name+ "::"+ \
                new_sub_name_list[i] +"_off(){ flag &= ~" + sub_name_temp + "; return *this; }"
        i+=1
    code+="\n\n"
    #print my_class_name
    #print sub_name_list
    #print new_sub_name_list
    #print sub_value_list
    


h_code+="\n}}\n"
code+="\n}}\n"

print >> out_cpp_file,"%s" % (code)
out_cpp_file.close()

print >> out_h_file,"%s" % (h_code)
out_h_file.close()

print code
print h_code

'''
