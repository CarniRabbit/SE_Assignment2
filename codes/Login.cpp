// <<Control>> Login
#include "Login.h"
#include <iostream>
#include "list.h"

bool Login::authenticateUser(const string& id, const string& pw) {
    if (id == "admin" && pw == "admin") {
        return true;
    }
    
    vector<User>::iterator iter;

    for (iter = userList.begin(); iter != userList.end(); iter++) {
        if ((*iter).getUserID() == id && (*iter).getPassword() == pw) {
            return true;
        }
    }

    return false;
}

void Login::redirectToMainPage() {
    cout << "메인 페이지로 돌아갑니다." << endl;
}