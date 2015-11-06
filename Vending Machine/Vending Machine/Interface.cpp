#include <iostream>

using namespace std;

int main()
{
    bool success = false;
    char input;
    char input2;
    int money = 0;
    
    cout << "Please insert whole dollars only: ";
    cin >> money;
    
    cout << "please select order (letters only, q is coin return): ";
    cin >> input;
    
    if (input == 'q')
    {
        cout << "returning: $" << money << endl;
    }     
    else
    {
        
        while (success != true)
        {
             cout << "please confirm order by entering selection again: ";
             cin >> input2;
            
             if (input2 != input)
             {
                   cout << "confirmation is not sucessful" << endl;

                   
             }           
             else
             {
                success = true;
             }   
             }
                cout << "Dispensing selection: " << input << endl;   
    }

    system("pause");
    
    return 0;
}
