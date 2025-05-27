// RentalStatus.h
#ifndef RENTALSTATUS_H
#define RENTALSTATUS_H

#include "RentInfo.h"
#include <vector>
#include <string>

using namespace std;

class RentalStatus {
public:
    vector<RentInfo> getCurrentRentals(const string& memberID);
};

#endif