/*
Author: Brian Rundel
This program will find the selling price after the
price increase precent.
*/

#include <iostream>

using namespace std;

int main()
{
    double price, precent;

    cout << "Enter the original price ";
    cin >> price;
    cout << "Enter the precent increase ";
    cin >> precent;

    precent = precent / 100;

    cout << "The price of " << price << " with a increase "
         << " of " << precent << " would be " <<  price + (price * precent);

    return 0;
}
