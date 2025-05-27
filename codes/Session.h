// <<Entity>> Session
#ifndef SESSION_H
#define SESSION_H

#include "User.h"

class Session {
private:
    string userID;
    bool isActive;

public:
    void setIsActive(bool isActive);
    void addSession(string& ID);
    void exitSession();
    string getUserID();
    bool getIsActive();
};

#endif
#pragma once
