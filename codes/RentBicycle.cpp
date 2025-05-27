#include <iostream>
#include "RentBicycle.h"
#include "list.h"

using namespace std;

vector<Bicycle> RentBicycle::fetchAvailableBicycles(vector<Bicycle>& list)
{
    vector<Bicycle> availableBicycles;
    vector<Bicycle>::iterator iter;

    for (iter = bicycleList.begin(); iter != bicycleList.end(); iter++) {
        if ((*iter).getIsAvailable()) {
            availableBicycles.push_back((*iter));
        }
    }

    return availableBicycles;
}

vector<string> RentBicycle::rentBicycle(const string& bicycleID, const string& memberID)
{
    vector<Bicycle>::iterator iter;

    for (iter = bicycleList.begin(); iter != bicycleList.end(); iter++) {
        if ((*iter).getBicycleID() == bicycleID) {
            RentInfo rentInfo((*iter).getBicycleID(), (*iter).getProductName(), activeSession.getUserID());
            currentRentInfo.push_back(rentInfo);
            return { (*iter).getBicycleID(), (*iter).getProductName() };
        }
    }

    return { " ", " " };
}
