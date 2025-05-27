#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "SignUpUI.h"
#include "LoginUI.h"
#include "MainUI.h"
#include "BicycleRegistrationUI.h"
#include "RentBicycleUI.h"
#include "RentalStatusUI.h"
#include "User.h"
#include "list.h"

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();

ofstream out_fp;
ofstream in_fp;

vector<User> userList;
vector<Bicycle> bicycleList;
Session activeSession;
vector<RentInfo> currentRentInfo;

int main()
{
	// 파일 입출력을 위한 초기화
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	// ...
	
	doTask();

	// ...

	out_fp.close();
	in_fp.close();

	return 0;
}

void doTask()
{
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	// UI 로딩
	SignUpUI signUpUI;
	LoginUI loginUI;
	MainUI mainUI;
	BicycleRegistrationUI bicycleRegistrationUI;
	RentBicycleUI rentBicycleUI;
	RentalStatusUI rentalStatusUI;


	User admin(true);
	userList.push_back(admin);

	activeSession.setIsActive(false);

	cout << "* 파일이 읽어지지 않아 수동으로 입력하도록 구현했습니다" << endl;

	while (!is_program_exit)
	{
		string line;
		getline(cin, line);  // 전체 라인 입력 받기

		istringstream iss(line);
		string word;
		vector<string> tokens;

		while (iss >> word) {
			tokens.push_back(word);
		}

		menu_level_1 = stoi(tokens[0]);
		menu_level_2 = stoi(tokens[1]);

		// cout << menu_level_1 << " " << menu_level_2 << endl;

		// in_fp >> menu_level_1 >> menu_level_2;

		switch (menu_level_1)
		{
		case 1:
			switch (menu_level_2)
			{
			case 1: // 1.1 회원가입
				string ID = tokens[2];
				string PW = tokens[3];
				string tel = tokens[4];

				signUpUI.enterUserInfo(ID, PW, tel);

				cout << "1.1 회원가입" << endl;
				cout << userList.back().getUserID() << " " << userList.back().getPassword() << " " << userList.back().getTelNo() << endl;

				break;
			}
			break;
		
		case 2:
			switch (menu_level_2)
			{
			case 1: // 2.1 로그인
				{
					string ID = tokens[2];
					string PW = tokens[3];

					cout << "2.1 로그인" << endl;
					loginUI.enterIDPW(ID, PW);
					break;
				}

			case 2: // 2.2 로그아웃
				{
					cout << "2.2 로그아웃" << endl;
					mainUI.clickLogout();
					break;
				}
			}
			break;
		
		case 3: 
			switch (menu_level_2)
			{
			case 1: // 3.1 자전거 등록
				{
					string bicycleID = tokens[2];
					string productName = tokens[3];

					if (activeSession.getIsActive() && activeSession.getUserID() == "admin") {
						bicycleRegistrationUI.loadRegistrationForm(bicycleID, productName);

						cout << "3.1 자전거 등록" << endl;
						cout << bicycleList.back().getBicycleID() << " " << bicycleList.back().getProductName() << endl;
					}

					else {
						cout << "관리자 권한이 없습니다." << endl;
					}
					
					break;
				}
				
			}
			break;
		
		case 4:
			switch (menu_level_2)
			{
			case 1: // 4.1 자전거 대여
				{
					string bicycleID = tokens[2];

					if (activeSession.getIsActive()) {
						rentBicycleUI.showAvailableBicycles(bicycleList);

						cout << "4.1 자전거 대여" << endl;
						rentBicycleUI.SelectRentBicycle(bicycleID);
					}

					else
						cout << "로그인 후 이용 가능합니다." << endl;

					break;
				}
			}
			break;

		case 5:
			switch (menu_level_2)
			{
			case 1: // 5.1 자전거 대여 리스트
				rentalStatusUI.showCurrentRentals();
				break;
			}
			break;
		case 6:
			switch (menu_level_2)
			{
			case 1: // 6.1 종료
				is_program_exit = 1;
				break;
			}
			break;
		}

	}
}