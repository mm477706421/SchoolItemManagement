#pragma once
#include<string>
class Item
{
public:
	void setItemName(std::string);
	void setItemClass(std::string);
	std::string getItemName();
	std::string getItemClass();
private:
	std::string itemName;
	std::string itemClass;
};

