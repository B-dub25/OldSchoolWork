/*
Author Brian Rundel
This program will ask for input three sides of a triangle
and reports if its a right triangle or not
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,sides,square;

    cout << "Enter size for side A ";
    cin >> a;
    cout << "Enter size for side B ";
    cin >> b;
    cout << "Enter size for side C ";
    cin >> c;

    sides = pow(a,2.0) + pow(b,2.0);

    square = pow(c,2.0);

    if (square == sides)
    {
        cout << "The triangle is a right triangle " << endl;
    }
    else
    cout << "The triangle is not a right triangle " << endl;

    return 0;
}
