//**********************************************
//
// Author: Brian Rundel
// This program will convert fahrenheit to
// celsius
//**********************************************

#include <iostream>

using namespace std;

int main()
{
    int fahrenheit;
    int celsius;

    cout << "Please enter the fahrenheit. ";
    cin >> fahrenheit;
    cout << endl;

    celsius = static_cast<int>
            (5.0 / 9 * (fahrenheit - 32 ) + 0.5 );     // This is needed to change the decimal back to a integer and the 0.5 is to round up.

    cout << "The fahrenheit = " << fahrenheit
          << " The celsius = " << celsius
           << endl;
    return 0;
}
