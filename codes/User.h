// <<Entity>> User
#ifndef USER_H
#define USER_H
#include <string>
#include <vector>

using namespace std;

class RentInfo; // forward declaration

class User {
private:
    string userID;
    string password;
    bool isAdmin;
    string telNo;
    vector<RentInfo*> rentInfos;

public:
    User(bool isAdmin);
    string encryptPassword();
    bool verifyPassword(const string& inputPassword);
    void createAccount(string& id, string& pw, string& tel);
    string getUserID();
    string getPassword();
    bool getIsAdmin();
    string getTelNo();
};

#endif
