
#include "sell.h"
#include <iostream>
#include <iomanip>

using namespace std;



product::product()
{
    cash = 0.0;
    amount = 500.00;
}

void product::set_money(double my_cash)
{
    cash = my_cash;
}

double product::update_amount()
{
    double new_amount;
    //cin >> new_amount;
    if(!(cin >> new_amount))
    {
        cin.clear(); //If the input was bad it will clear it
        cin.ignore(10,'\n'); // ignore anymore input until new line character is encountered
        cout << endl;
        check();// call the check function again and start over.
    }
    return cash = cash + new_amount;
}

void product::check()
{
      if(cash < amount)
      {
          print();
          cout << "Enter more money ";
          update_amount();
          check();
      }
}
void product::print_amount() const
{
    cout << "Cost of Item " << amount << "\n";
}
void product::print() const
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Total cash obtained so far " << cash << "\n";
    print_left();
}
void product::print_left() const
{
    print_amount();
    cout << "Amount still needed for the product " << amount - cash << "\n";
}
