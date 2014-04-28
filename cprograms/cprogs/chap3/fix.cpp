//*******************************************************
//
// Author : Brian Rundel
//
// This program will demistraight how fixed and
// scientific notation works
//*******************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main()
{
    double radius = 12.67;
    double hight = 12.00;

    cout << fixed << showpoint;

    cout << setprecision(2);

    cout << "Line 1: setpercision(2) " << endl;
    cout  << " radius = " << radius << " hight = "
           << hight << " volume = "
             << PI * radius * radius * hight << endl;

    cout << setprecision(3);

    cout << "Setprecision(3) " << endl;

    cout  << "radius = " << radius << "hight = " << hight
            << "volume = " << PI * radius * radius * hight << endl;

    cout << setprecision(4);

    cout << "Setprecision(4)" <<endl;

    cout << "Radius = " << radius << "Hight = " << hight
         << "volume = " << PI * radius * radius * hight << endl;

         return 0;
}
