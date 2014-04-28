/*
Author: Brian Rundel
This program will output any odd numbers
from the first number to the second number
entered
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int first , second;
    int sum = 0; int squaresum = 0;
    int counter = 0;
    int oddsqr = 0;
    char a = 'A';
    cout << "Enter two numbers the first has to be less ";
    cin >> first >> second;

    while (first <= second )
    {
       if (first % 2 != 0)
           {
           cout << first << ":";
           oddsqr = oddsqr + pow(first,2) ;

           }


       if (first % 2 == 0)
           {
           sum += first;
           squaresum += pow(first,2);
           }
    first++;
    }
     cout << endl;

    while (a <= 'Z')
      {
          cout << a << ":" ;
          a++;
      }



    cout << endl;
    cout << "The sum of the odd numbers squared = " << oddsqr << endl;
    cout << "The sum of the even numbers squared = " << squaresum << endl;
    return 0;
}
