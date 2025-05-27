// <<Boundary>> BicycleRegistrationUI
#ifndef BICYCLEREGISTRATIONUI_H
#define BICYCLEREGISTRATIONUI_H

#include <string>
#include <vector>

using namespace std;

class BicycleRegistrationUI {
public:
    void loadRegistrationForm(string& bicycleID, string& productName);
    vector<string> getInputData();
    void submitRegistration();
    void showResult(bool success);
};

#endif
