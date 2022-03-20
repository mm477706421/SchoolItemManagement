import datetime
import socket
import json

import account
import notice

ip_port = ('0.0.0.0', 12005)
ser = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
ser.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
ser.bind(ip_port)
ser.listen(10)
print("等待连接....")
while True:
    time = datetime.datetime.now().strftime("%H:%M:%S\t")
    con, address = ser.accept()
    print(time + "收到来自%s的连接" % (address[0]))
    while True:
        try:
            msg = con.recv(2048)
            if msg.decode('utf-8') == 1:
                con.close()
            datajs = json.loads(msg.decode('utf-8'))
            print(time + str(datajs))

            if datajs['flag'] == 'reg':
                username = datajs['username']
                print(time + "注册行为 来自%s" % (address[0]))
                print(time + "用户名:%s,密码:%s" % (datajs['username'], datajs['password']))
                recv_msg = account.check_account(username)
                if recv_msg[0] != "0x000":
                    data = recv_msg[1]
                    con.sendall(data.encode("utf-8"))
                    break
                else:
                    recv_msg = account.reg_account(datajs['username'], datajs['password'], datajs['nickname'],
                                                   datajs['email'], datajs['sex'])
                    data = recv_msg[1]
                    con.sendall(data.encode("utf-8"))
                    break

            if datajs['flag'] == "login":
                print(time + "登录行为 来自%s" % (address[0]))
                print(time + "用户名:%s,密码:%s" % (datajs['username'], datajs['password']))
                username = datajs['username']
                password = datajs['password']
                recv_msg = account.login(username, password)
                if recv_msg[0] != "0x000":
                    data = recv_msg[1]
                    con.sendall(data.encode('utf-8'))
                    break
                else:
                    data = account.create_token(username)
                    con.sendall(data.encode('utf-8'))
                    break

            if datajs['flag'] == "check_token":
                print(time + "验证行为 来自%s" % (address[0]))
                print(time + "用户名:%s,token:%s" % (datajs['username'], datajs['token']))
                recv_msg = account.check_token(datajs['username'], datajs['token'])
                data = recv_msg[1]
                con.sendall(data.encode('utf-8'))
                break

            if datajs['flag'] == "get_notice":
                if datajs['flag2'] == "get_all":
                    print(time + "全部查询行为 来自%s" % (address[0]))
                    print(time + "用户名:%s,token:%s" % (datajs['username'], datajs['token']))
                    recv_msg = notice.get_all_notice(datajs['username'], datajs['token'])
                    data = recv_msg[1]
                    con.sendall(data.encode('utf-8'))
                    break
                else:
                    print(time + "查询行为 来自%s" % (address[0]))
                    print(time + "用户名:%s,token:%s" % (datajs['username'], datajs['token']))
                    recv_msg = notice.get_notice(datajs['username'], datajs['token'],datajs['flag2'])
                    data = recv_msg[1]
                    con.sendall(data.encode('utf-8'))
                    break

            if datajs['flag'] == "get_one_notice":
                print(time + "获取公告行为 来自%s" % (address[0]))
                print(time + "用户名:%s,token:%s" % (datajs['username'], datajs['token']))
                recv_msg = notice.get_one_notice(datajs['username'], datajs['token'],datajs['flag2'])
                data = recv_msg[1]
                con.sendall(data.encode('utf-8'))
                break

            if datajs['flag'] == "submit":
                print(time + "提交公告行为 来自%s" % (address[0]))
                print(time + "用户名:%s,token:%s" % (datajs['username'], datajs['token']))
                recv_msg = notice.submit_notice(datajs['username'], datajs['token'], datajs['title'],datajs['detail'],datajs['man'],datajs['contact'])
                data = recv_msg[1]
                con.sendall(data.encode('utf-8'))
                break


        except Exception as e:
            continue
