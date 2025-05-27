// <<Control>> SignUp
#include "SignUp.h"
#include <iostream>

bool SignUp::validateInfo(string& userID, string& pw) {
    return true;
}

bool SignUp::checkExistID(string& userID) {
    return true;
}

User SignUp::registerUser(string& userID, string& pw, string& telNo) {
    User user(false);

    user.createAccount(userID, pw, telNo);

    return user;
}