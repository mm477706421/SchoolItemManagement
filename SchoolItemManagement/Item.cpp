#include "Item.h"

void Item::setItemName(std::string c)
{
	this->itemName = c;
}

void Item::setItemClass(std::string c)
{
	this->itemClass = c;
}

std::string Item::getItemName()
{
	return this->itemName;
}

std::string Item::getItemClass()
{
	return this->itemClass;
}
