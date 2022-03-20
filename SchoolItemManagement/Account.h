#pragma once
#include <string>
#include <regex>
#include <windows.h>

struct time
{
	int second;
	int minuite;
	int hour;
	int day;
	int month;
	int year;
};

class Account
{
public:
	bool registeAccount(std::string, bool, std::string);
	bool resetPassWord(std::string,std::string);
	bool setNickName(std::string);
	//1 is male,0 is famale
	void setSex(bool);
    bool checkPass(std::string);
    static bool check(std::string);
	bool getSex();
    std::string getNickName();
	struct time getRegisterTime();
	bool checkToken(std::string);
private:
	std::string token;
	bool setPassWorded;
	std::string passWord;
	std::string nickName;
	struct time registerTime;
	bool sex;
};

