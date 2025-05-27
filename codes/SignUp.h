// <<Control>> SignUp
#ifndef SIGNUP_H
#define SIGNUP_H

#include "User.h"
#include <string>

using namespace std;

class SignUp {
public:
    bool validateInfo(string& userID, string& pw);
    bool checkExistID(string& userID);
    User registerUser(string& userID, string& pw, string& telNo);
};

#endif
