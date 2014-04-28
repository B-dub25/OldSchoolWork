/*
Author : Brian Rundel
This program will caculate the total of the milk profit on milk earned, the
total cartons of milk and tax.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double hold = 3.78;
const double cost = 0.38;
const double pro = 0.27;

int main()
{
    cout << fixed << showpoint << setprecision(2); // seting the floating point to 2

    int cartons;
    double gallons;
    double profit;
    double costs;
    // get the total gallons and convert it to number of cartons
    cout << "Enter the amount of milk that was producted in the morning. "
          << endl;
    cin >> gallons;
    // convert the gallons to
    cartons = gallons / hold + .5;

    costs = cartons * cost;

    profit = cartons * pro;

    cout << "The total cartons produced " << cartons << endl;
    cout << "The total cost for the cartons " << costs << endl;
    cout << "The total profit for the seller " << profit << endl;

     return 0;

}
