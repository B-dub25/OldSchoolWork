/*
Author: Brian Rundel
This program will take as input, centimeters
as integer. Then it will convert it into yards
feet and inches
*/

#include <iostream>

using namespace std;

const double CENTIMETERS_BASE = 2.54;

int main()
{
    int centimeters, feet, yards;

    cout << "Enter the total langth in centimeters. \n"
         << "The input must not be a decimal.";
    cin >> centimeters;

    centimeters = centimeters / CENTIMETERS_BASE + 0.5; // convert centimeters to inches and round up
    feet = centimeters / 12;  // convert centimeters into feet for easy coversion
    yards = feet / 3; // get the total yards that is held in feet;
    feet = feet % 3; // get the left over that yards didn't use if any for feet;
    centimeters = centimeters % 12; // get the left over of inches if any;

    cout << "Yards = " << yards << " Foot/Feet = " << feet
    << " Inch(es) = " << centimeters << endl;

    return 0;

}
