import datetime
import sqlite3

import account


def get_all_notice(username, token):
    try:
        if account.check_token(username, token)[0] == "0x000":
            conn = sqlite3.connect('account.sqlite')
            cur = conn.cursor()
            cur.execute('SELECT * FROM notice;')
            notice = cur.fetchall()
            result = str(len(notice)) + "".join(" " + str(notice[i][0]) for i in range(len(notice)))
            print("查询结果 " + result)
            return "0x000", result
        else:
            return "0x006", "0"
    except Exception as e:
        print(e.with_traceback())
        return "0x007", "SQL ERROR"


def get_notice(username, token, content):
    try:
        if account.check_token(username, token)[0] == "0x000":
            conn = sqlite3.connect('account.sqlite')
            cur = conn.cursor()
            cur.execute('SELECT * FROM notice WHERE title LIKE ?;', ('%' + content + '%',))
            notice = cur.fetchall()
            result = str(len(notice)) + "".join(" " + str(notice[i][0]) for i in range(len(notice)))
            print("查询结果 " + result)
            return "0x000", result
        else:
            return "0x008", "0"
    except Exception as e:
        return "0x009", "SQL ERROR"


def get_one_notice(username, token, no):
    try:
        if account.check_token(username, token)[0] == "0x000":
            conn = sqlite3.connect('account.sqlite')
            cur = conn.cursor()
            cur.execute('SELECT * FROM notice WHERE no = ?;', (no,))
            notice = cur.fetchall()
            result = str(notice[0][0]) + " " + str(notice[0][1]).replace(" ","-") + " " + str(notice[0][2]) + " " + str(notice[0][3]) + " " + str(notice[0][4])+ " " + str(notice[0][5])
            print(result)
            return "0x000", result
        else:
            return "0x010", "0 1997/01/01-00:00:00 NULL NULL NULL NULL"
    except Exception as e:
        return "0x011", "SQL ERROR"


def submit_notice(username,token,title,detail,man,contact):
    try:
        if account.check_token(username, token)[0] == "0x000":
            conn = sqlite3.connect("account.sqlite")
            date = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
            conn.execute(f'INSERT INTO notice (date,title,detail,name,contact) VALUES (\"{date}\",\"{title}\",\"{detail}\" ,\"{man}\",\"{contact}\")')
            conn.commit()
            conn.close()
            return "0x000" , "0x000"
        else:
            return "0x012","ERROR"
    except Exception as e:
        return "0x013","SQL ERROR"