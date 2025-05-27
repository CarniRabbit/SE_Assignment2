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

	cout << "���� �α��ε� ID: " << activeSession.getUserID() << endl;
}

void Session::exitSession()
{
	if (activeSession.getIsActive()) {
		cout << "�α׾ƿ��� ����: " << userID << endl;

		userID = "";
		isActive = false;
	}

	else
		cout << "�α׾ƿ��� ������ �����ϴ�." << endl;
}

string Session::getUserID()
{
	return userID;
}

bool Session::getIsActive()
{
	return isActive;
}
