import re

vk_file = open("vk1.1.82.txt","r").read()

the_list = re.findall(r'typedef[ ]*enum[ ]*Vk[\w,\d]*FlagBits[\w,\d,\s,{,},\,=,]*;', vk_file, re.DOTALL)
count =0
for itr in the_list:
    #print itr
    class_name0 = re.search('Vk[\w,\d]* ',itr,0).group()[2:]
    sub_name_list = re.findall(r'VK_[\w,\d]* =',itr)
    sub_value_list = re.findall(r'=[ \w\d]*',itr)
    i = 0
    for sub_name in sub_name_list:
        sub_name_list[i] = sub_name.replace(" ","").replace("=","").lower()
        i=i+1
    i=0
    for sub_value in sub_value_list:
        sub_value_list[i] = sub_value.replace(" ","").replace("=","")
        i=i+1

    

