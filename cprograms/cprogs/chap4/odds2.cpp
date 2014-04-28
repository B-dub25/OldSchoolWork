/*
* Author: Brian Rundel
* This program will compute the odd and
* even numbers. The powers of the odd numbers
* and display them.
*/
#include <iostream>         // So we can use cout and cin
#include <cmath>            // So we can use the functions sqrt and pow log ect...
#include <string>

using namespace std;        // So we can use cin/cout without a prefix i.e std::

int main()
{
    int first,second,primary;
    int sum;
    int even,square;
    int odds;
    int counter = 0;
    string mystring = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Enter two integers."
          << "The first must be smaller then the second. " << endl;
    cin >> first >> second;

    if (first > second)
    {
        cout << "The first is larger. Try again ";
        return 1;
    }

primary = first;
       while ( first <= second )
       {
         if ( first % 2 == 0)
         {
             sum = sum + first;

         }
         else if (first % 2 == 1 )
         {
             cout << first << " ";
             odds = pow(first, 2);
             counter = counter + odds;
         }
        first++;
       }

      cout << endl;
      cout << "The sum of the evens = " << sum  ;
      cout << endl;
      cout << "The sum of the odd squares = " << counter << endl;
      cout << mystring;

    return 0;
}
