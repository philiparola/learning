// This is the main DLL file.

#include "stdafx.h"
#include "ATM 2.0.h"
#include "iostream"

using namespace std;

int main()
{
	struct Account
	{
		char FirstName[16];
		char LastName[16];
		int AccountID[100];
		int AccountPIN[9999];
		float Balance;
	};
	Account UserList[100];
	char Selection;

	while(true)
	{
		cout << "Press 1 to access an existing account." << endl;
		cout << "Press 2 to create a new account." << endl;
		int AccountID;
		cout << "Press 3 to exit." << endl;
		cin >> Selection;

		switch(Selection)
		{
		case "1":
			
			cout << "Enter account number." << endl;
			cin >> InputAccountID;
			cout << "Enter account PIN." << endl;
			cin << InputAccountPIN;
			if (InputAccountPIN == AccountPIN)
			{
				cout << First.Name << Last.Name << endl;
				cout <<  Balance << endl;
				cout << "Would you like to:" << endl;
				cout << "Withdraw (Press 'w')" << endl;
				cout << "Deposit (Press 'd')" << endl;
				cout << "Log out (Press 'q')" << endl;
				cin << SelectionLogged;
			}
			else
				{
					cout << "Invalid PIN number." << endl;
				}
			break;
		case '2':
			cout << "Create new account ID" << endl;
			cin >> AccountID;
			cout << "Please enter your First Name" << endl;
			cin >> UserList[AccountID].First;
			cout << "Please enter your Last Name" << endl;
			cin >> UserList[AccountID].Last;
			cout << "Please enter your starting balance." << endl;
            cin >> UserList[AccountID].Balance;
			break;

		case '3':
			return 0;

		default
			cout << "Invalid entry" << endl;

		}
		system ("pause");
		}
	}

