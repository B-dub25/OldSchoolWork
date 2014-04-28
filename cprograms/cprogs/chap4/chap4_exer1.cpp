//***************************************************
//
// Author: Brian Rundel
// This program prompts a user for a number and says
// if its positive or negitive or zero
//***************************************************

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number to test. ";
    cin >> number;

    if (number > 0 )
    {
        cout << number << " is positive. "<< endl;
    }
    else if ( number < 0 )
    {
        cout << number << " is negitive. " << endl;
    }
    else
    cout << number << " is zero. " << endl;
    return 0;
}
