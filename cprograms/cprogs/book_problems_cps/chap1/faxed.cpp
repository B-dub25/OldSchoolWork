/*
Author: Brian Rundel
Faxed
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double service_fee = 3.00; const double first_ten = 0.20;
    const double after = 0.10;
    double total;
    int pages; int pages2;
    cout << fixed << showpoint << setprecision(2);
    cout << "Please enter the number of pages to be faxed ";
    cin >> pages;

    if (pages > 10 )
    {
        pages2 = pages - 10;
        total = (pages2 * after) + ((pages - pages2 ) * first_ten)
              + service_fee;
    }
    else
    total = pages * first_ten + service_fee;

    cout << "The total for " << pages << " will be " << total;

    return 0;
}
