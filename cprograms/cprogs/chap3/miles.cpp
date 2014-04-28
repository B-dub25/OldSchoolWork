/*
Author: Brian Rundel
This program will output the miles a can drive on a certain tank level
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int mpg;
    double gallons;
    double miles;

    // Ask user for the total gallons in the car
    cout << "Enter the number of gallons in the cars "
          << "tank. ";
    cin >> gallons;
    cout << "Enter the mpg of the car/truck. ";
    cin >> mpg;

    miles = mpg * gallons;

    cout << "The total miles the car can drive is "
          << miles;

    return 0;
}
