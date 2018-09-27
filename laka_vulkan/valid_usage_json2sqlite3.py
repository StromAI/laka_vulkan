import json
import sqlite3
import sys

reload(sys)
sys.setdefaultencoding('utf-8')


j = json.load(open("validusage.json"))

vk_db = sqlite3.connect("vk_1.1.85.db")
c = vk_db.cursor()

count =0
for api_struct_name in j:
    for tj in j[api_struct_name]:
        for parmater_list in j[api_struct_name][tj]:
            str = tj.replace("(","")
            str2 = str.replace(")","")
            str_list = str2.split("+")
            for s in str_list:
                ss = s.split(",")
                for ss_ in ss:
                    print ss_