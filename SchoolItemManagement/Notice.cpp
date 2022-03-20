#include "Notice.h"
#include<iostream>


Item Notice::getItem()
{
	return this->item;
}

void Notice::setItem(Item it)
{
	this->item = it;
}

bool Notice::setPrice(double p)
{
	if (p > 0) {
		this->price = p;
		return true;
	}
	else
	{
		return false;
	}
}

double Notice::getPrice()
{
	return this->price;
}

Account Notice::getPuber()
{
	return this->publisher;
}

bool Notice::setPuber(std::string token,Account pu)
{
	if (!created) {
		this->publisher = pu;
		created = true;
		return true;
	}
	else {
		if (this->publisher.checkToken(token)) {
			this->publisher = pu;
			return true;
		}
		else {
			return false;
		}
	}
}
