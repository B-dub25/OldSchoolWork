/*
Author: Brian Rundel
This program takes a integer as input
and will output the total amount of;
half dollars,quarters, dimes, nickels and penies.
*/

#include <iostream>

using namespace std;

int main()
{
    int change;
    int half;
    int quarters;
    int dimes;
    int nickels;


    cout << "Please enter the ammount of change ";
    cin >> change;
   // calculate the amount of change in the given matter.

    half = change / 50;            // get the total half dollars.
    change = change % 50;         // update changes value.
    quarters = change / 25;      // get the total quarters.
    change = change % 25;       // update changes value.
    dimes = change / 10;       // get the total dimes.
    change = change % 10;     // update change again.
    nickels = change / 5;    // get the total nickels.
    change = change % 5;    // get the total pennies.

    // output the results.
    cout << half << " Half dollars " << quarters << " Quarters "
           << dimes << " Dimes " << nickels << " Nickels " << change << " Pennies ";

   return 0;

}
