#include "RentInfo.h"

RentInfo::RentInfo(string bicycleID, string productName, string memberID)
{
	this->bicycleID = bicycleID;
	this->productName = productName;
	this->memberID = memberID;
}

string RentInfo::getBicycleID()
{
	return bicycleID;
}

string RentInfo::getProductName()
{
	return productName;
}
