/*
Author: Brian Rundel
This will convert centimeters to
yards, feet and inches;
*/
#include <iostream>

using namespace std;

int main()
{
    int cent, feet , yards;

    cout << "Enter the total centimeters ";
    cin >> cent;

    cent = cent / 2.54 + 0.5;

    feet = cent / 12; // 10 feet
    yards = feet / 3; // gets the total yards
    feet = feet % 3;  // gets the remainder of the yards if any
    cent = cent % 12; // gets the left over inches if any

    cout << "Yards = " << yards << " Feet = " << feet << " Inch(es) = " << cent;

    return 0;



}
