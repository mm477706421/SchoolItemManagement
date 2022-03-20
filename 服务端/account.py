import hashlib
import sqlite3
import datetime
import base64


def check_account(username):
    conn = sqlite3.connect('account.sqlite')
    cur = conn.cursor()
    cur.execute(f"SELECT * FROM user WHERE username = \"{username}\"")
    value = cur.fetchall()
    if len(value) > 0:
        conn.commit()
        conn.close()
        return "0x001", "账户已存在"
    else:
        conn.commit()
        conn.close()
        return "0x000", "无异常"


def reg_account(username, password, nickname, email, sex):
    try:
        conn = sqlite3.connect('account.sqlite')
        cur = conn.cursor()
        cur.execute(
            f"INSERT INTO user (username,password,nickname,email,sex) VALUES (\"{username}\",\"{password}\",\"{nickname}\",\"{email}\",{sex});")
        conn.commit()
        conn.close()
        return "0x000", "注册成功"
    except Exception as e:
        return "0x002", "账户注册异常，请重新注册"


def login(username, password):
    try:
        conn = sqlite3.connect('account.sqlite')
        cur = conn.cursor()
        cur.execute(f'SELECT * FROM user WHERE username = \"{username}\" AND password = \"{password}\"')
        result = cur.fetchall()
        if len(result) > 0:
            nickname = result[0][2]
            conn.commit()
            conn.close()
            return "0x000", nickname
        else:
            print("错误：0x004")
            return "0x004", "用户名或密码错误"
    except Exception as e:
        print("错误：0x003")
        return "0x003", "登陆异常"


def create_token(username):
    date = datetime.datetime.now().strftime("%H:%M:%S")
    token = base64.b64encode(str(username + "/" + date).encode('utf-8')).decode('utf-8')
    return token


def check_token(username, token):
    if username == "":
        print("错误：0x005")
        return "0x005", "NULL"
    date = base64.b64decode(token).decode('utf-8')
    if username == date.split("/")[0]:
        return "0x000",token
    else:
        print("错误：0x005")
        return "0x005","NULL"
