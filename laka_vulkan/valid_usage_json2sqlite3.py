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
            count = count + 1
            c.execute(
                "INSERT INTO sub (sub_name,as_name,valid_usage) VALUES (?, ?, ?)",
                (parmater_list["vuid"],api_struct_name,parmater_list["text"]))

print count
vk_db.commit()