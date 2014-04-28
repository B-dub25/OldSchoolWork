//***********************************************
//
// Author: Brian Rundel
// This program will caculate the the volume of
// the mass you enter
//***********************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double mass,density,volume;

    cout << "Enter the mass in grams of the object. ";
    cin >> mass;
    cout << "Enter the density in grams of the object. ";
    cin >> density;

    volume = mass * density;

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "The volume of the object is "
           << volume;

    return 0;
}
