// <<Entity>> User
#include "User.h"
#include <iostream>

User::User(bool isAdmin)
{
    userID = "admin";
    password = "admin";
    telNo = "00000000000";
    isAdmin = isAdmin;
}

string User::encryptPassword() {
    return "";
}

bool User::verifyPassword(const string& inputPassword) {
    return true;
}

void User::createAccount(string& id, string& pw, string& tel) {
    userID = id;
    password = pw;
    telNo = tel;
    isAdmin = false;
}

string User::getUserID()
{
    return userID;
}

string User::getPassword()
{
    return password;
}

bool User::getIsAdmin()
{
    return isAdmin;
}

string User::getTelNo()
{
    return telNo;
}
