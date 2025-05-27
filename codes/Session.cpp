#include "Session.h"
#include "list.h"
#include <iostream>

void Session::setIsActive(bool isActive)
{
	this->isActive = isActive;
}

void Session::addSession(string& ID)
{
	userID = ID;
	isActive = true;

	cout << "현재 로그인된 ID: " << activeSession.getUserID() << endl;
}

void Session::exitSession()
{
	if (activeSession.getIsActive()) {
		cout << "로그아웃한 계정: " << userID << endl;

		userID = "";
		isActive = false;
	}

	else
		cout << "로그아웃할 계정이 없습니다." << endl;
}

string Session::getUserID()
{
	return userID;
}

bool Session::getIsActive()
{
	return isActive;
}
