//******************************************************
//
// Author : Brian Rundel
// Prompts a user for their weight in kilograms and
// converts the weight in to the equivalent weight in
// pounds.
//******************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const double kilogram = 2.2;

int main()
{
    double weight;

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Please enter your weight in pounds. ";
    cin >> weight;
    cout << endl;
    cout << "Processing." << endl;

    cout << "Your weight in pounds is "
          << weight * kilogram << "\n";

    return 0;
}
