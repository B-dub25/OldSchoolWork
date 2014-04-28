/*
Author: Brian Rundel
This will calculate the fees for a accounting
firm
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double cost();

int main()
{
      cout << "Program is going to process your info. ";
      cost();

      return 0;


}

double cost()
{
    double time;
    double hourly;
    double income;
    double bill,charges;
    string nocharge = "No consulting charge. ";
    // Get the values for the varibles from the user//
    cout << "Enter the hourly rate for the consultion time. ";
    cin >> hourly;
    cout << "Enter the total time of consultion in minutes. ";
    cin >> time;
    cout << "What is your income. ";
    cin >> income;


     if (income <= 25000)
     {
         income = 1;
     }
     else
     income = 2;

       switch (static_cast<int>(income))
       {
           case 2:
           time = time - 20;
           if (time > 20 )
           {
               bill = hourly * .70 * (time / 60);
           }
           else
           cout << "No fee.";
           break;

           case 1:
           time = time - 30;
           if ( time > 0)
           {
               bill = (hourly * .40) * (time / 60);

           }
           break;
       }

        return bill;
}
