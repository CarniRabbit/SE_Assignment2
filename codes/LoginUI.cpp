// <<Boundary>> LoginUI
#include "LoginUI.h"
#include <iostream>
#include "Login.h"
#include "Session.h"
#include "list.h"

Login loginControl;

void LoginUI::startInterface() {
    cout << "������ �뿩 �ý��ۿ� �����Ͻ� ���� ȯ���մϴ�." << endl;
}

void LoginUI::enterIDPW(string& ID, string& PW) {
    bool isLoginSuccess = loginControl.authenticateUser(ID, PW);

    if (isLoginSuccess) {
        cout << ID << " " << PW << endl;
        activeSession.addSession(ID);
    }

    else
        cout << "�α��� ����" << endl;
}

// void LoginUI::submitInfo() {
//     
// }

void LoginUI::showLoginResult(bool success) {
    
}
