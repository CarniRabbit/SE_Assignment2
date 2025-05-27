// <<Boundary>> LoginUI
#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>
#include <vector>

using namespace std;

class LoginUI {
public:
    void startInterface();
    void enterIDPW(string& ID, string& PW);
    void submitInfo();
    void showLoginResult(bool success);
};

#endif

