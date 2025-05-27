#include "BicycleRegistration.h"
#include "list.h"
#include <iostream>

Bicycle BicycleRegistration::registerBicycle(string& bicycleID, string& bicycleName)
{
    Bicycle bicycle(bicycleID, bicycleName);

    bicycleList.push_back(bicycle);

    return bicycle;
}
