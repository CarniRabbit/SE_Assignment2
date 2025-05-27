// <<Entity>> Bicycle
#ifndef BICYCLE_H
#define BICYCLE_H
#include <string>

using namespace std;

class Bicycle {
private:
    string bicycleID;
    string productName;
    bool isAvailable;

public:
    Bicycle(string& ID, string& name);
    bool isValidID();
    void saveBicycle();
    void setAvailable(bool value);
    string getBicycleID();
    string getProductName();
    bool getIsAvailable();
};

#endif

