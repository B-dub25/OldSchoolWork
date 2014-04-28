// Program to caculate the pay and overtime if any//
// Brian Rundel //
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
float reg,newpay,bi_hours,hours,pay,overtime,overpay;
string answer;

     cout << "Enter who many hours you are scheduled. ";
     cin >> hours;
     cout << "Do you get paid every two weeks? ";
     cin >> answer;

   if ( answer == "yes" )  // need to know if the pay is bi-weekly of weekly.
    {
 bi_hours = hours * 2;
     cout << "Enter your pay rate. ";
     cin >> pay;
     if ( bi_hours > 80 )
     {
overtime = bi_hours - 80;
reg = bi_hours - overtime;
overpay = .5 * pay + pay * overtime ;
newpay = reg * pay + overpay;
      cout << "Your total pay with over time is " << newpay;
     }
    else if ( bi_hours < 80 )
    cout << "Your total pay is " << hours * pay;
    }
    else if ( answer == "no")
    {
     if ( hours > 40 )
     {
      overtime = hours - 40;
      overpay = .5 * pay + pay * overtime;
      reg = hours - overtime;
      newpay = reg * pay + overpay;
      cout << "Your total pay is " << newpay;
     }
    else
    {
     cout << "Your total pay is " << hours * pay;
    }
    return 0;
     }
}
