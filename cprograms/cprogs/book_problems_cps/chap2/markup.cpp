/*
Author: Brian Rundel
This program will take as input the original price
of a item, the percentage of the markup, the sales
tax and then output the total price and profit of
the item
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double total;
    double org_price, markup;
    double percent;
    double tax;
    double temp;

    cout << fixed << showpoint << setprecision(2);
    cout << "Please enter the original price of the item ";
    cin >> org_price;
    cout << "Please enter the markup percent ";
    cin >> percent;
    cout << "Please enter the sales tax ";
    cin >> tax;

    percent = percent / 100;
    tax = tax / 100;

    total = org_price * percent + org_price;
    temp = org_price * percent * tax;

    cout << "The original price is " << org_price << endl;
    cout << "The markup percent is " << percent << endl;
    cout << "The sales tax percent " << tax << endl;
    cout << "The markup total is " << org_price * percent + org_price << endl;
    cout << "The total sales tax is " << total * tax << endl;
    cout << "The total price is " << (total * tax) + total << endl;
    cout << "The total profit is " << org_price * percent;

    return 0;


}
