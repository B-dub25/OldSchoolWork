/*
Author: Brian Rundel
This program will take as input the type
of cell phone plan you have and calculates
the monthly bill. It assumes that all values
are valid and computes the bill off the the
first of 50 minutes are free and after which
its .20c a minute
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

const double REGULAR_SERVICE = 10.00;  const double AFTER_MINUTES = 0.20;
const double PREMIUM_SERVICE = 20.00;  const int AFTER_SIX_PM = 100;
const int SIX_AM_TO_PM = 75;        const double AFTER_SIX_PM_MIN = 0.05;
const double SIX_AM_TO_PM_MIN = 0.10;
int main()
{
    int minutes,total_minutes,after_six,account_num;
    double reg_bill,business_bill;
    char account;

    cout << fixed << showpoint << setprecision(2);

    cout << "Please enter the account number ";
    cin >> account_num;
    cout << "Enter the the account type please. ";
    cin >> account;

    switch(toupper(account))
    {
        case 'R':
         cout << "Enter the number of minutes used ";
         cin >> minutes;
         if (minutes > 50 )
         {
             reg_bill = ( minutes - 50 ) * 0.20 + 10.00;
             cout << "Account number: " << account_num  << endl;
             cout << "Account type: " << account << endl;
             cout << "Total minutes:" << minutes - 50 << endl;
             cout << "Total bill: " << reg_bill << endl;

         }
         else
         reg_bill = 10.00;
             cout << "Account number: " << account_num  << endl;
             cout << "Account type: " << account << endl;
             cout << "Total minutes:" << minutes - 50 << endl;
             cout << "Total bill: " << reg_bill << endl;
             break;

        case 'P':

        cout << "Enter the total minutes used durring 6:00 am - 6:00 pm ";
        cin >> minutes;

        if (minutes > 75 )
        {
        total_minutes = minutes - 75;
        business_bill = total_minutes * 0.10;
        }

        else
        {
        total_minutes = minutes;
        }

        cout << "Enter the total minutes used durring 6:00 am - 6:00 pm ";
        cin >> after_six;

        if (after_six > 100)
        {
            total_minutes += (after_six - 100);
            business_bill += (( after_six - 100) * 0.20) + 25.00;
        }

        cout << "Account number: " << account_num  << endl;
             cout << "Account type: " << account << endl;
             cout << "Total minutes:" << total_minutes << endl;
             cout << "Total bill: " << business_bill << endl;

        total_minutes = after_six;
        business_bill += 25.00;
        cout << "Account number: " << account_num  << endl;
             cout << "Account type: " << account << endl;
             cout << "Total minutes:" << total_minutes << endl;
             cout << "Total bill: " << business_bill << endl;
        break;

        default:
        cout << "Invalid input " << endl;
    }
    return 0;

}
