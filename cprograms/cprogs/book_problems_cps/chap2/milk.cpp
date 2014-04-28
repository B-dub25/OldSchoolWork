/*
Author: Brian Rundel
This program will take as input the amount of milk
and calculate the amount of cartons it will produce
and how much it will cost to produce it. After of
which it will calculate the profit.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double liters = 3.78;
const double cost = 0.38;
const double profit = 0.27;

void milkcl(double& total_liters);
void unknown(double& total_liters, double& prof);

int main()
{
    int answer;
    double total_liters;
    double prof;
    cout << fixed << showpoint << setprecision(2);
    do
    {
    cout << "1. If you know the cost of liters. " << endl;
    cout << "2. If you want to use the default value " << endl;
    cout << "0. To exit " << endl;
    cout << "Enter a choice: ";
    cin >> answer;


    switch(answer)
     {
    case 2:
    milkcl(total_liters);
    break;

    case 1:
    unknown(total_liters,prof);
    break;
     }  // end of switch statement block
    } // end of while block
    while(answer != 0);

    return 0;
}

void milkcl(double& total_liters)
{

    cout << "Please enter the total amount of "
           << "milk produced this morning ";
    cin >> total_liters;

    cout << "Total milk entered: " << total_liters << endl;
    total_liters /= liters + .5 ; // round up to the closest decimal
    cout << "Total liters produced: " << total_liters << endl;
    cout << "Default cost: " << cost << endl;
    cout << "Cost from producing the milk: " << total_liters * cost << endl;
    cout << "Profit produced: " << total_liters * profit << endl;
    cout << endl;

}

void unknown(double& total_liters, double& prof)
{
    cout << "Enter the total milk produced: ";
    cin >> total_liters;
    cout << "Enter the cost of producing: ";
    cin >> prof;

    cout << "Total milk entered: " << total_liters << endl;
    total_liters /= liters + .5;
    cout << "Total liters produced: " << total_liters << endl;
    cout << "Cost from producing: " << total_liters * prof << endl;
    cout << "Profit from producing: " << total_liters * profit << endl;
    cout << endl;

}
