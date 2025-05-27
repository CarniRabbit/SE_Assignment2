#include "Bicycle.h"

Bicycle::Bicycle(string& ID, string& name)
{
	bicycleID = ID;
	productName = name;
	isAvailable = true;
}

string Bicycle::getBicycleID()
{
	return bicycleID;
}

string Bicycle::getProductName()
{
	return productName;
}

bool Bicycle::getIsAvailable()
{
	return isAvailable;
}
