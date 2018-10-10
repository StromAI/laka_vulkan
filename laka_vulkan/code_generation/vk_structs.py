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
#todo:整理代码
#todo:加入enum
#todo:加入flags
#todo:生成pNext
#todo:解决WSI问题 宏开关

file_name = "vk_structs"
cpp_out = ""
h_out = ""

file = open("..\\vk.xml").read()
soup = BeautifulSoup(file)

author_nodes = soup.registry.find_all('tags',attrs={"comment":"Vulkan vendor/author tags for extensions and layers"})
author_name_list = []
author_list = author_nodes[0].find_all('tag')
for author_node in author_list:
    author_name_list.append(author_node.get('name') )

platform_nodes = soup.registry.platforms.find_all('platform')
platform_list = []
for p_node in platform_nodes:
    platform_list.append(p_node.get('name') )
print platform_list

class MyName:
    my_name = ""
    vk_name = ""
    fuck_name = ""
    sub_names = []
    houzhui = ""
    def prt(this_):
        print "---------------------------------------"
        print "vk name:\t"+this_.vk_name
        print "my name:\t"+this_.my_name
        print "houzhui name:\t"+this_.houzhui
        print "fuck name:\t"+this_.fuck_name
        print "sub name:"
        print this_.sub_names

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
    temp_list1 = re.findall(r'[A-Z][a-z]+|[A-Z]|[0-9]+',temp2)
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
        print "--------------------------------------------"
        print "vk name\t:" +this_.vk_name
        print "my name\t:"+this_.my_name
        print this_.returned_only
        print this_.comment
        print "extends to:\t"+ this_.struct_extends_to
        print "extends:\t"
        print this_.struct_extends
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
    def prt(this_):
        print "\t-----------------------"
        print "\tname:\t"+this_.m_name
        print "\ttype:\t"+this_.m_type
        print "\ttype only:\t"+this_.m_type_only
        print "\tarray:\t"+this_.m_array
        print "\tvalue:\t"+this_.m_value
        print "\tlen:\t"+this_.m_len
        print "\taltlen:\t"+this_.m_altlen
        print "\toptional:\t"+this_.m_optional
        print "\texternsync:\t"+this_.m_externsync
        print "\tnoautovalidity\t"+this_.m_noautovalidity
        print "\ttext:\t"+this_.text
        print "\tcomment:\t"+this_.comment

struct_list = soup.registry.types.find_all('type',attrs={'category':'struct'})

name_dict = dict([])
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


        if m.text.find('[')!=-1:
            m.text = re.sub(r'\[[A-Z_a-z0-9]*\]',"",m.text).replace(m.m_type,m.m_type+"*")

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
        h_out += "using " + struct.my_name + " = " + struct.vk_name + ";//" + str(count + 1) + "\n\n"
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

        h_out += \
        struct3.comment+\
        "struct "+struct3.my_name+"{"+"\n//"+str(count+1)+"\n"
        for m in struct3.members:
            new_type_name = old_type_name = m.m_type_only
            temp = name_dict.get(old_type_name)
            if temp!=None:
                new_type_name = temp.my_name
            out = m.text.replace(old_type_name,new_type_name+" ",1)+";\n"
            out = re.sub(r' [ ]*\*', "*", out)
            out = re.sub(r' [ ]*',"\t",out)
            if m.comment!="":
                h_out+="/*"+m.comment+"*/\n"
            h_out+="\t"+out
        h_out+="};\n\n"

        struct3.g=1
        count+=1

h_out += "\n//"+str(len(struct_dict))

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


