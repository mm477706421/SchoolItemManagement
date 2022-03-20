#include "Account.h"

bool Account::registeAccount(std::string nickName, bool sex, std::string passWord)
{
	if (!this->setPassWorded) {
		setPassWorded = true;
		if (this->setNickName(nickName));
		else {
			return ERROR;
		}
		this->passWord = passWord;
		SYSTEMTIME sys;
		GetLocalTime(&sys);
		struct time registerTimeT;
		registerTimeT.day = sys.wDay;
		registerTimeT.hour = sys.wHour;
		registerTimeT.year = sys.wYear;
		registerTimeT.second = sys.wSecond;
		registerTimeT.minuite = sys.wMinute;
		registerTimeT.month = sys.wMonth;
		this->registerTime = registerTimeT;
		return setPassWorded;
	}
	else {
		return ERROR;
	}
}

std::string Account::getNickName(){
    return this->nickName;
}

bool Account::resetPassWord(std::string currentPass, std::string Pass)
{
	if (currentPass == this->passWord) {
		std::regex e("[a-zA-Z0-9]{8,}+");
		if (std::regex_match(Pass,e)) {
			this->passWord = Pass;
			return true;
		}
		else {
			return ERROR;
		}
	}
	else {
		return ERROR;
	}
}

bool Account::setNickName(std::string nick)
{
	if (nick.length() < 8) {
		this->nickName = nick;
		return true;
	}
	else {
		return ERROR;
	}
}

void Account::setSex(bool s)
{
	this->sex = s;
}

bool Account::checkPass(std::string pass)
{
	if (pass == this->passWord) {
		return true;
	}
	else {
		return false;
	}
}

bool Account::getSex()
{
	return this->sex;
}

struct time Account::getRegisterTime()
{
	return this->registerTime;
}

bool Account::checkToken(std::string token)
{
	if (this->token == token) {
		return true;
	}
	else {
		return false;
	}
}

bool Account::check(std::string pass){
    std::regex e("[a-zA-Z0-9]{8,}+");
    if (std::regex_match(pass,e)) {
        return true;
    }
    else {
        return false;
    }
}
