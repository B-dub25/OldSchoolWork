/*
Author : Brian Rundel
This program will go throgh a
sequence. If the number is odd
then it will be X by 3 if not it
will be / by 2
*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    int k = 0;
    int sum;

    cout << "Enter the a number to find the sequence in. ";
    cin >> x;

    while (x > 1)
    {
        sum = x % 10;

        if ( sum % 2 != 0)
        {
            x = x * 3 + 1;
        }
        else if ( sum % 2 == 0)
        {
            x = x / 2;
        }
        cout << x << " ";

        k++;
    }
    cout << " k = " << k;
  return 0;
}
