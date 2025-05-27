// <<Entity>> RentInfo
#ifndef RENTINFO_H
#define RENTINFO_H
#include <string>

using namespace std;

class RentInfo {
private:
    string bicycleID;
    string productName;
    string memberID;
    string rentalDate;
public:
    RentInfo(string bicycleID, string productName, string memberID);
    string getBicycleID();
    string getProductName();
};

#endif
