/*
Author: Brian Rundel
This program will chagne a given input of quarters
nickels dimes into pennies.
*/

#include <iostream>

using namespace std;

int main()
{
    int change, pennies, nickles, dimes, quarters;

    cout << "Please enter the total change you were given ";
    cin >> change;


    quarters = change / 25;
    change = change % 25;
    dimes = change / 10;
    change = change % 10;
    nickles = change / 5;
    change = change % 5;

    cout << "The total change to be given back to you is\n"
         << "Quarters = " << quarters << " Dimes = " << dimes
         << " Nickles = " << nickles << " Pennies = " << change << endl;
    cout << "The total pennies = " << pennies << endl;

    return 0;
}
