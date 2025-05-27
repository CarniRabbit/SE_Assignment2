// <<Boundary>> RentBicycleUI
#ifndef RENTBICYCLEUI_H
#define RENTBICYCLEUI_H

#include "Bicycle.h"
#include <vector>

using namespace std;

class RentBicycleUI {
public:
    void showAvailableBicycles(vector<Bicycle>& list);
    void SelectRentBicycle(string& bicycleID);
    void showRentMessage(bool success);
};

#endif
