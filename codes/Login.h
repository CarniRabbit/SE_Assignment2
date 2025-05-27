// <<Control>> Login
#ifndef LOGIN_H
#define LOGIN_H
#include "User.h"

using namespace std;

class Login {
public:
    bool authenticateUser(const string& id, const string& pw);
    void redirectToMainPage();
    void showError(bool isSuccess);
};

#endif

