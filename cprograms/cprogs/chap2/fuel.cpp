//************************************************************
//
// Author: Brian Rundel
// This program will prompt the user for the total fuel in a
// cars tank. Then it will prompt for the miles per-gallon
// the car gets. Then it will compute the total miles the car
// can go without refueling.
//
//************************************************************

#include <iostream>

using namespace std;

int main()
{
    int tank;
    double mpg;
    double refill;

    cout << "Enter the total gallons of gas in you're tank. ";
    cin >> tank;
    cout << "Now enter the miles per gallon you get. ";
    cin >> mpg;
    refill = mpg * tank;
    cout << "You can go " << refill << " before having to refill. " << endl;

    return 0;
}

