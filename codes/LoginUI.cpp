// <<Boundary>> LoginUI
#include "LoginUI.h"
#include <iostream>
#include "Login.h"
#include "Session.h"
#include "list.h"

Login loginControl;

void LoginUI::startInterface() {
    cout << "자전거 대여 시스템에 접속하신 것을 환영합니다." << endl;
}

void LoginUI::enterIDPW(string& ID, string& PW) {
    bool isLoginSuccess = loginControl.authenticateUser(ID, PW);

    if (isLoginSuccess) {
        cout << ID << " " << PW << endl;
        activeSession.addSession(ID);
    }

    else
        cout << "로그인 실패" << endl;
}

// void LoginUI::submitInfo() {
//     
// }

void LoginUI::showLoginResult(bool success) {
    
}
