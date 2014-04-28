/*
Author: Brian Rundel
This program is report if a number
is prime or not
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int sum;
    int prime;

    cout << "Enter a number to test. ";
    cin >> num;
    while ( num != -999)
       {
       if ( num == 1)
       {
           cout << "It is not prime" << endl;
       }
     else if ( num % 2 == 1 || num == 2 )
        {
            cout << "Its prime. " << endl;
        }
       else if (num != 2 && num % 2 == 0  )
       {
           cout << num << " Is not prime" << endl;
       }
       cout << "Enter a number to test or -999 to quit."
             << endl;
       cin >> num;
       }
    return 0;

}
