#include <iostream>

using namespace std;

#define NUMBER_OF_FLOORS 5

//f(x) = 2x+7
int f(int x)
{
	return 2 * x + 7;
}

void dropoff(int current_floor)
{
	cout << "Dropping off at floor " << current_floor + 1 << endl;
}

void pickup(int current_floor)
{
	cout << "stopping and picking up at floor " << current_floor + 1 << endl;
}

bool askquestion()
{
	char input = 0;
	while(true)
	{
		cin >> input;
		switch(input)
		{
		case 'y':
			return true;
			break;
		case 'Y':
			return true;
			break;
		case 'n':
			return false;
			break;
		case 'N':
			return false;
			break;
		default:
			cout << "invalid input use Y or N"  << endl;
	 }
	}
}

int main()
{
    int myvalue = 0;
    int current_floor = NUMBER_OF_FLOORS;

	bool pickups[NUMBER_OF_FLOORS] = {false, false, false, false, false};
	bool dropoffs[NUMBER_OF_FLOORS] = {false, false, false, false, false};

	while (current_floor > 0)
	{
		cout << "is floor " << current_floor << " requesting for pickup? (y/n)" << endl;
		pickups[current_floor - 1] = askquestion();
		cout << "is floor " << current_floor << " requesting for dropoff? (y/n)" << endl;
		dropoffs[current_floor - 1] = askquestion();
		//current_floor = current_floor - 1;
		current_floor--;
	}
	
	//from top to bottom
	for(int i = NUMBER_OF_FLOORS; i > 0; i--)
	{
		if (pickups[i] == true)
		{
			pickup(i);
		}
	}


	//from bottom to top
	for(int i = 0; i < NUMBER_OF_FLOORS; i++)
	{
		if (dropoffs[i] == true)
		{
			dropoff(i);
		}
	}
	
	//int myarray[10] = {0,1,2,3,4,5,6,7,8,9,};

	//cout << myarray[current_floor] << endl;

	cout << "number of floors: " << NUMBER_OF_FLOORS << endl;
	cout << "We are currently on floor " << current_floor + 1<< endl;

	//cin >> myvalue;4
	//cout << f(myvalue) << endl;
	return 0;
};
