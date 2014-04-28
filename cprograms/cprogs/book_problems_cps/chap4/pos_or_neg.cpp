/*
Auhtor Brian Rundel
This program will prompt a user to enter a number
and the outputs if the number is positive of negitive
or a zero
*/

#include <iostream>

using namespace std;

int main()
{

    int number;
    do
    {
    cout << "Enter a number ";
    cin >> number;

    if (number > 0)
    {
        cout << "Number is positive " << endl;
    }
    else if (number < 0 )
         {
       cout << "Number is negitive " << endl;
         }
   else
   cout << "number is zero" << endl;
    }
    while (number != -99);
    return 0;
}
