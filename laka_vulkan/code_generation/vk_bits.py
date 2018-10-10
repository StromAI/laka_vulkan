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

file_name = "vk_bits"
cpp_out = ""
h_out = ""


file = open("..\\vk.xml").read()
soup = BeautifulSoup(file)
enum_list = soup.registry.find_all('enums',attrs={'type':'bitmask'})

author_nodes = soup.registry.find_all('tags',attrs={"comment":"Vulkan vendor/author tags for extensions and layers"})
author_name_list = []
author_list = author_nodes[0].find_all('tag')
for author_node in author_list:
    author_name_list.append(author_node.get('name') )

print author_name_list

for enum in enum_list:
    name = enum.get('name').replace("Vk","").replace("FlagBits","")
    sub_names = re.findall(r'[A-Z]+[a-z]*',name)
    class_name = ""
    for sub_name in sub_names:
        class_name+=sub_name+"_"
        
    class_name = re.sub(r'_$',"",class_name)
    fuck_name = re.sub(r'_[A-Z]+[A-Z]*$',"",class_name).upper()

    fuck_name = "VK_"+fuck_name.upper()

    name="F_"+class_name.lower()

    member_list = enum.find_all('enum')
    if len(member_list)<=0:
        continue


    h_out+=\
    "class "+name+" {\n"+\
    "private:\n"+\
        name+"(int flag_);\n"+\
    "public:\n"\
        "int flag;\n"\
        "enum B{\n"

    new_m_name_list = []

    for member in member_list:
        m_name = member.get('name')
        if m_name.find("_MAX_NUM") != -1:
            continue
        new_m_name = "b_"+m_name.replace(fuck_name+"_","")
        new_m_name = re.sub(r'_BIT$',"",new_m_name).lower()
        new_m_name_list.append(new_m_name)
        h_out+=new_m_name+" = "+m_name+",\n"
        
    h_out+="};\n"
    h_out+=\
    "{0}();\n"\
    "{0}(B bits_);\n"\
    "{0}({0} const& flag_);\n"\
    "{0}(std::initializer_list<B> bit_list);\n"\
    "{0}& operator = ({0} flag_);\n"\
    "{0} operator | (B bit_);\n"\
    "{0}& operator |= (B bit_);\n"\
    "{0} operator | ({0} flag_);\n"\
    "{0}& operator |= ({0} flag_);\n"\
    "{0} operator & ({0} flag_);\n"\
    "{0}& operator &= ({0} flag_);\n"\
    "{0} operator ^ ({0} flag_);\n"\
    "{0}& operator ^= ({0} flag_);\n"\
    "{0} operator ~ ();\n"\
    "bool operator !();\n"\
    "bool operator == ({0} flag_);\n"\
    "bool operator == (B bit_);\n"\
    "bool operator != ({0} flag_);\n"\
    "bool operator != (B bit_);\n"\
    "operator bool();\n"\
    "{0} all_flags();\n"\
    "{0}& clear();\n".format(name).replace("@","{").replace("$","}")

    h_out+=enum.get('name') + " get();\n"
    
    for new_m_nmae in new_m_name_list:
        h_out+=name+"& "+"on_"+new_m_nmae[2:]+"();\n"
        h_out+=name+"& "+"off_"+new_m_nmae[2:]+"();\n"
    h_out+="};\n"
    h_out+=name+" operator|("+name+"::B bit1_,"+name+"::B bit2_);\n\n\n"

    cpp_out+=\
    "{0}::{0}():flag(0)@$\n"\
    "{0}::{0}({0}::B bits_):flag(static_cast<int>(bits_))@$\n"\
    "{0}::{0}({0} const& flag_):flag(flag_.flag)@$\n"\
    "{0}::{0}(std::initializer_list<B> bit_list)@for (auto&& bit : bit_list)@flag |= static_cast<int>(bit);$$\n"\
    "{0}& {0}::operator = ({0} flag_)@flag = flag_.flag;return *this;$\n"\
    "{0} {0}::operator | (B bit_)@return flag | static_cast<int>(bit_);$\n"\
    "{0}& {0}::operator |= (B bit_)@flag |= static_cast<int>(bit_);return *this;$\n"\
    "{0} {0}::operator | ({0} flag_)@return flag | flag_.flag;$\n"\
    "{0}& {0}::operator |= ({0} flag_)@flag |= flag_.flag;return *this;$\n"\
    "{0} {0}::operator & ({0} flag_)@return flag & flag_.flag;$\n"\
    "{0}& {0}::operator &= ({0} flag_)@flag &= flag_.flag;return *this;$\n"\
    "{0} {0}::operator ^ ({0} flag_)@return flag ^ flag_.flag;$\n"\
    "{0}& {0}::operator ^= ({0} flag_)@flag ^= flag_.flag;return *this;$\n"\
    "{0} {0}::operator ~ ()@return all_flags().flag^flag;$\n"\
    "bool {0}::operator !()@return !flag;$\n"\
    "bool {0}::operator == ({0} flag_)@return flag == flag_.flag;$\n"\
    "bool {0}::operator == (B bit_)@return flag == static_cast<int>(bit_);$\n"\
    "bool {0}::operator != ({0} flag_)@return flag != flag_.flag;$\n"\
    "bool {0}::operator != (B bit_)@return flag != static_cast<int>(bit_);$\n"\
    "{0}::operator bool()@return !!flag;$\n"\
    "{0}& {0}::clear()@flag = 0;return *this;$\n"\
    "{0} operator|({0}::B bit1_, {0}::B bit2_)@{0} flags(bit1_);return flags | bit2_;$\n"\
    "{0}::{0}(int flags_):flag(flags_) @$\n{0} {0}::all_flags()@\n return "\
        .format(name).replace("@","{").replace("$","}")
    i = 0
    for member in member_list:
        m_name = member.get('name')
        if i!=0:
            cpp_out+=" | \n"
        cpp_out+=m_name
        i+=1
    cpp_out+=";\n}\n"

    cpp_out += enum.get('name') +" "+name+ "::get()\n{ return (" + enum.get('name') + ")flag;}\n"

    i = 0
    for member in member_list:
        m_name = member.get('name')
        cpp_out += name+"& "+name+ "::"+\
                "on_"+new_m_name_list[i][2:] + "()\n{ flag |= " + m_name + "; return *this; }\n\n"
        cpp_out += name+"& "+name+ "::" +\
                "off_"+new_m_name_list[i][2:] +"()\n{ flag &= ~" + m_name + "; return *this; }\n\n"
        i+=1
    cpp_out+="\n\n"


print cpp_out

count =0

out_cpp_file = open("..\\"+file_name+".cpp", "w")
out_h_file = open("..\\"+file_name+".h","w")

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


