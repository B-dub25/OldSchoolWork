/*
Author: Brian Rundel
This program will convert centimeters into, yards,feet and inches
*/

#include <iostream>

using namespace std;

int main()
{
    int centimeters;
    int inches;
    int feet;
    int yards;

      cout << "Enter centimeters. ";
      cin >> centimeters;

      centimeters = centimeters / 2.54 + .5; // convert to inches and round up to nearest whole.
      feet = centimeters / 12;      // break it down to feet.
      yards = feet / 3;             // see how many yards are in the feet total
      inches = 12 % feet;           // get the left over in inches
      feet = feet % 3;              // get the feet


      cout << "yard(s) = " << yards << " feet = " << feet
            << " inches = " << inches;

      return 0;
}
