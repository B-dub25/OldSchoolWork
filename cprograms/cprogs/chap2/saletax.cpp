// This will calculate the sales tax in the state of Michigan//
//Brian Rundel //
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    string item;
    float itemprice,saletax,tax,total;
    saletax = 0.06;

    cout << "This will calculate the sales tax for a item in Michigan ""\n"
    << "Please enter the item's price ";
    cin >> itemprice;
    cout << "Please enter the item ";
    cin >> item;

    if ( itemprice > 5000.00 )
        {
        cout.setf(ios::fixed);
        cout << "This item is a big priced item""\n";
        tax = itemprice * saletax;
        total = tax + itemprice;
        cout << "The total price for the new " << item;
        printf (" is %.2f ",total);
        }
    else
    {
        tax = itemprice * saletax;
        total = tax + itemprice;
        cout << "The total price for the new " << item;
        printf (" is %.2f ",total);
        }
    return 0;
}
