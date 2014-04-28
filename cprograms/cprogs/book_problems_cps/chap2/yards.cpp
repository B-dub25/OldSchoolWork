/*
Author: Brian Rundel
This program will convert centimeters to;
yards , feet and inches
*/

#include <iostream>

using namespace std;

int main()
{
    int cent;
    int yards;
    int feet;

    cout << "Enter the total centimeters ";
    cin >> cent;

    cent = cent / 2.54 + .5;
    cent = cent / 12;
    yards = cent / 3;
    feet = cent % 3;
    cent = cent / 3;
    cout << yards  << " yard(s) " << feet << " feet " << cent << " inch(es)";
    return 0;
}
