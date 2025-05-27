// RentBicycle.h
#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include "Bicycle.h"
#include "RentInfo.h"
#include <vector>
#include <string>

using namespace std;

class RentBicycle {
public:
    vector<Bicycle> fetchAvailableBicycles(vector<Bicycle>& list);
    vector<string> rentBicycle(const string& bicycleID, const string& memberID);
};

#endif

