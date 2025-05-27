// <<Boundary>> SignUpUI
#include "SignUpUI.h"
#include "User.h"
#include <iostream>
#include "SignUp.h"
#include "list.h"

SignUp signUpControl;

void SignUpUI::enterUserInfo(string& id, string& pw, string& tel) {
    User user = signUpControl.registerUser(id, pw, tel);
    userList.push_back(user);
}

void SignUpUI::showResult(bool success) {

}