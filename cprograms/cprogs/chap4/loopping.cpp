//*********************************************
//
// Author: Brian Rundel
// This program will see if a number is / by 3
//
//*********************************************

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int sum, number,temp;


    cout << "Enter a number. ";
    cin >> number;
    sum = 0;
    do
    {
      sum = sum + number % 10;
      number = number / 10;

    }
    while(number>0);
    cout << "The sum = " << sum << endl;
    if (sum % 3 == 0)
    {
        cout << "The sum of the numbers is "
          << " and its devisable by 3" << endl;
    }
    else if ( number % 9 == 0)
    {
        cout << "The sum of the number is " << sum
              << " and its devisable by 9" << endl;
    }
    else
      cout << "its not devisable by 3 or 9" << endl;
  return 0;
}
