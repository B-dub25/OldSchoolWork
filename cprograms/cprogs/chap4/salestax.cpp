//*****************************************************
//
// Author: Brian Rundel
// This program will caculate the cost of faxing pages
// international.
//*****************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const double service_charge = 3.00;
const double first_ten = 0.20;
const double after_ten = 0.10;

int main()
{
    int pages,total;
    double due;

    cout << fixed << showpoint << setprecision(2);

    cout << "How many pages are being faxed.? ";
    cin >> pages;

    if (pages > 10 )
    {
        total = pages - 10;
        due = (total * after_ten) + first_ten * ( pages - total ) + service_charge;
        cout << "Total amount do is " << due;
    }
   else if ( pages <= 10)
   {
   due = pages * first_ten  + service_charge;
   cout << "Total amount do is " << due;
   }
return 0;
}
