import re

vk_file = open("vk1.1.82.txt","r").read()

the_list = re.findall(r'typedef[ ]*enum[ ]*Vk[\w,\d]*FlagBits[\w,\d,\s,{,},\,=,]*;', vk_file, re.DOTALL)
count =0
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

    my_class_name = "F_"+ (class_name2[:-1].lower())
    print my_class_name

    print sub_name_list
    print new_sub_name_list
    print sub_value_list


