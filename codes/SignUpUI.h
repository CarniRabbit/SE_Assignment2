// <<Boundary>> SignUpUI
#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>
#include <vector>
#include "User.h"

using namespace std;

class SignUpUI {
public:
    void enterUserInfo(string& id, string& pw, string& tel); // id, pw, tel
    void submitSignUp();
    void showResult(bool success);
};

#endif
