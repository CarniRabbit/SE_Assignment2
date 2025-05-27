// BicycleRegistration.h
#ifndef BICYCLEREGISTRATION_H
#define BICYCLEREGISTRATION_H

#include "Bicycle.h"
#include <string>

using namespace std;

class BicycleRegistration {
public:
    bool validateInput(string& bicycleID, string& bicycleName);
    Bicycle registerBicycle(string& bicycleID, string& bicycleName);
};

#endif