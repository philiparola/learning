#include <iostream>

using namespace std;

int main()

{

	int Value1;
	int Value2;
	char Operation;

	cout << "Please enter first value." << endl;
	cin >> Value1;
	cout << "Please enter second value." << endl;
	cin >> Value2;

	
	cout << "Do you want to Add, Subtract (Sub), Multiply (Mult), or Divide (Div)?" << endl;
	cin >> Operation;

	switch (Operation)

		{
			case 'Add':
			cout << Value1 + Value2 << endl;
			break;

			case 'Sub':
			cout << Value1 - Value2 << endl;
			break;

			case 'Mult':
			cout << Value1 * Value2 << endl;
			break;

			case 'Div':
			cout << Value1 / Value2 << endl;
			break;

			default:
			cout << "Invalid operation." << endl;
			return 19;

	   }

//Make sure to ensure capitolization errors dont matter

system("pause");

}