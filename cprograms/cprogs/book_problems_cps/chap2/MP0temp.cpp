/*
Filename: MP0temp.cpp
Programming Assignment Zero for CPS 171
Author: Brian Rundel
8/29/12
*****************************************
Today's temp program
This program reads in the temperature in degrees
Farhrenheit and converts it to Celsius and Kelvin.
It expects a valid integer or floating point number as input
*/

#include <iostream>

using namespace std;

const double FAHR_2_CEL_BASE_ADJ = 32.0; // Diff at freezing point
const double FAHR_2_CEL_FACTOR = 5.0 / 9.0; // Ratio for convertion
const double CEL_2_KEL = 273.15;  // Diff for Celsius to Kelvin

int main()
{
    double input_temp;
    double celsius_temp;

    cout << "Please enter the temperature in Fahrenheit degrees: ";
    cin >> input_temp;

    // Now calculate the temperature in Celsius

    celsius_temp = (input_temp - FAHR_2_CEL_BASE_ADJ) *
                    FAHR_2_CEL_FACTOR;
    cout << "A temperature of " << input_temp << " degrees ";
    cout << "Fahrenheit converts to " << celsius_temp;
    cout << " degrees Celsius. \nIn degress Kelvin it is ";
    cout << celsius_temp + CEL_2_KEL << ". \n\nThank you for using "
          << "this delightful program which was \nkeyed into the"
           << "computer by Brian Rundel. " << endl << endl;

return 0;
}
/*
Please enter the temperature in Fahrenheit degrees: 70
A temperature of 70 degrees Fahrenheit converts to 21.1111 degrees Celsius.
In degress Kelvin it is 294.261.

Thank you for using this delightful program which was
keyed into thecomputer by Brian Rundel.
Please enter the temperature in Fahrenheit degrees: 80
A temperature of 80 degrees Fahrenheit converts to 26.6667 degrees Celsius.
In degress Kelvin it is 299.817.

Thank you for using this delightful program which was
keyed into thecomputer by Brian Rundel.Please enter the temperature in Fahrenheit degrees: 80
A temperature of 80 degrees Fahrenheit converts to 26.6667 degrees Celsius.
In degress Kelvin it is 299.817.

Thank you for using this delightful program which was
keyed into thecomputer by Brian Rundel.
Please enter the temperature in Fahrenheit degrees: 90
A temperature of 90 degrees Fahrenheit converts to 32.2222 degrees Celsius.
In degress Kelvin it is 305.372.

Thank you for using this delightful program which was
keyed into thecomputer by Brian Rundel.
*/
