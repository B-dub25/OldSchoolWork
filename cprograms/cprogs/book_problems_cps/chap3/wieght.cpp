/*
Author: Brian Rundel
This program will ask for your weight in kilograms
and output it in pounds
*/

#include <iostream>
#include <iomanip>

using namespace std;
const double KILOGRAMS = 2.2;

int main()
{
    cout << fixed << showpoint << setprecision(2);
    double weight,pounds;

    cout << "Enter your wieght in kilograms ";
    cin >> weight;

    pounds = weight * KILOGRAMS ;

    cout << "You weight " << pounds << " lb " << endl;

    return 0;

}
