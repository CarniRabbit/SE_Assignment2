#include "RentalStatusUI.h"
#include "list.h"
#include <iostream>

void RentalStatusUI::showCurrentRentals()
{
    vector<RentInfo>::iterator iter;

    for (iter = currentRentInfo.begin(); iter != currentRentInfo.end(); iter++) {
        cout << (*iter).getBicycleID() << " " << (*iter).getProductName() << endl;
    }
}
