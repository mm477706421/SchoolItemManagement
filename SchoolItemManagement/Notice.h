#pragma once
#include<string>
#include "Item.h"
#include "Account.h"
class Notice
{
public:
	Notice();
	Item getItem();
	void setItem(Item);
	bool setPrice(double);
	double getPrice();
	Account getPuber();
	bool setPuber(std::string,Account pu);
private:
	bool created;
	double price;
	Item item;
	Account publisher;
};

