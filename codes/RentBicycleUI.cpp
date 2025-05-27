#include <iostream>
#include <string>
#include "RentBicycleUI.h"
#include "RentBicycle.h"
#include "list.h"


using namespace std;

RentBicycle rentBicycleControl;

void RentBicycleUI::showAvailableBicycles(vector<Bicycle>& list)
{
	vector<Bicycle> bicycles = rentBicycleControl.fetchAvailableBicycles(list);

    vector<Bicycle>::iterator iter;

    for (iter = bicycles.begin(); iter != bicycles.end(); iter++) {
        cout << (*iter).getBicycleID() << " " << (*iter).getProductName() << endl;
    }
}

void RentBicycleUI::SelectRentBicycle(string& bicycleID)
{
    vector<string> rentInfo = rentBicycleControl.rentBicycle(bicycleID, activeSession.getUserID());
    cout << rentInfo.at(0) << " " << rentInfo.at(1) << endl;
}
