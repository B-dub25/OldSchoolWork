//*******************************************
//
// Author: Brian Rundel
// This will caculate the monthly wages of a
// salesperson.
//*******************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double payrate,totalsales,commision;
    double bonus,month,hours;
    int years;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter number of years worked for the company. ";
    cin >> years;
    cout << "Enter the payrate. ";
    cin >> payrate;
    cout << "Total sales for the month. ";
    cin >> totalsales;
    cout << "Enter the hours you work per week. ";
    cin >> hours;


    if (years <= 5 )
    {
      bonus = 10.00;
    }
    else
    bonus = 20.00;

    if (totalsales <= 5000 && totalsales >= 10000 )
    {
        commision = 0.03;
    }
    else if (totalsales > 10000)
    {
        commision = 0.06;
    }

    hours *= 4;
    month = (payrate * hours ) +  commision * totalsales
            + ( bonus * years);
    cout << hours << " " << years << " " << bonus
          << " " << commision << " " << totalsales << endl;
    cout << "Your monthly gross check comes to. "
          << month << endl;
          return 0;
}
