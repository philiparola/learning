#include <iostream>

using namespace std;

int main()
{
    struct Account
    {
       char First[16];
       char Last[16];
       float Balance;
    };
    Account UserList[100];
    char Selection;
    while(true)
    {
    cout << "Select option from menu." << endl;
    cout << "Enter '1' to search for existing account." << endl;
    cout << "Enter '2' to create new account." << endl;
    int AccountID;
    cout << "Enter '3' to exit." << endl;
    cin >> Selection;
switch(Selection)
//Switch tells what to do with multiple inputs; case handles individual input and default tells what to do with any other input not specified.
    {
                 case '1':
                 cout << "Enter account number.";
                 cin >> AccountID;
                 cout << "First name: " << UserList[AccountID].First << endl;
                 cout << "Last name: " << UserList[AccountID].Last << endl;
                 cout << "Account balance: " << UserList[AccountID].Balance << endl;
                 break;
                 
                 case '2':
                      cout << "Please enter account number you want to create (number must be LESS THAN 100!).";
                      cin >> AccountID;
                      cout << "Please enter your first name." << endl;
                      cin >> UserList[AccountID].First;
                      cout << "Please enter your last name." << endl;
                      cin >> UserList[AccountID].Last;
                      cout << "Please enter your starting balance." << endl;
                      cin >> UserList[AccountID].Balance;
                      break;
                      
                 case '3':
                      return 0;
                      
                 default:
                         cout << "Invalid entry.";
    }             
}
    system("pause");
    
    return 0;
}