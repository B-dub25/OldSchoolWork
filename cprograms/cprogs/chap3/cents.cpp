//*****************************************************************
//
// Author Brian Rundel
// This program will give you the cents of half dollars and quarters ect..
//
//*****************************************************************

#include <iostream>
#include <cmath>

using namespace std;

    const int halfDollars = 50;
    const int quarters = 25;
    const int dimes = 10;
    const int nickels = 5;
    const int pennies = 1;

int main()

{
    int change;

    cout <<  "Please enter the total cents. ";
    cin >> change;
    cout <<  "The change you entered is " << change << endl;

    cout <<  "The number of half dollars get have is " << change / halfDollars << endl;
    change = change % halfDollars;
    cout <<  "The number of quarters you get is " << change / quarters << endl;
    change = change % quarters;
    cout <<  "The number of dimes you get is " << change / dimes << endl;
    change = change % dimes;
    cout <<  "The number of nickels you get is " << change / nickels << endl;
    change = change % nickels;
    cout <<  "The number of pennies you get is " << change / pennies << endl;

    return 0;

}
