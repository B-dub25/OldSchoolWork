//********************************************
//
// Author : Brian Rundel
// This will caculate the speeding ticket fee
//********************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double speed,fee,pluse,limit;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter speed. ";
    cin >> speed;
    cout << "Enter speed limit. ";
    cin >> limit;
    speed -= limit ;
    if (speed > 0 && speed  <= 5 )
    {
        fee = 20.00;
        cout << "The spee fee is " << fee;
    }
    else if ( speed > 5 && speed <= 10 )
    {
        fee = 75.00;
        cout << "Speeding fee is " << fee;
    }
    else if ( speed > 10 && speed <= 15 )
    {
        fee = 150.00;
        cout << "Speeding fee is " << fee;
    }
    else if ( speed > 15 )
    {
        fee = 150.00;
        pluse = (speed - 15)  * 20.00;
        cout << "Speeding ticket is " << fee
              << " The additional fees are "
                << pluse << " total fee is "
                  << fee + pluse;
    }
    else
    cout << "No ticket needed ";
    return 0;
}
