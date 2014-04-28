/*
Author: Brian Rundel
This program will take a integer as input
the total liters of milk and compute the
total cartons needed to hold the milk and
the total cost from producting the milk
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double LITERS = 3.78; const double COST = 0.38;
const double PROFIT = 0.27;

int main()
{
    double liters,cartons, total_cost, total_profit;
    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the total liters of milk produced this morning ";
    cin >> liters;

    cartons = static_cast<int>(liters / LITERS + 0.5 );

    total_cost = liters * COST;
    total_profit = cartons * PROFIT;

    cout << left << setw(15) << "Total liters " << setw(16)
         << "Total cartons " << setw(16) << "Total profit "
         << setw(16) << "Total cost " << endl;
    cout << left << setw(15) << liters << setw(16)
         << cartons << setw(16) << total_profit
         << setw(15) << total_cost
         << endl;

     return 0;


}
