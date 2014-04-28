//********************************************
// Author : Brian Rundel
//
// This program will caculate if the triangle
// is a right one or not.
//********************************************

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c;
    double all_sides;
    double square;

    cout << "Enter the for side a ";
    cin >>a;
    cout << "Enter for side b ";
    cin >> b;
    cout << "Enter for side c. ";
    cin >> c;

    all_sides = static_cast<int>( b + c );

    square = static_cast<int>(pow(a, 2.00));

    if ( all_sides == square )
    {
        cout << "Triangle is a right triangle. ";
    }
    else
    {
        cout << "Triangle is not a right triangle. ";
        cout << square;
    }
    return 0;
}
