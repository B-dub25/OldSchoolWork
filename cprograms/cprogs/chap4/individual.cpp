/*
Author : Brian Rundel.
This program will print the numbers
out as individual numbers i.e
123456 will print 6 5 4 3 2 1.
*/
#include <iostream>

using namespace std;

int main()
{
    int num,sum;
    cin >> num;
    while ( num > 0)

    {
        sum = num % 10;
        num = num / 10;
        cout << sum << " ";
    }
   return 0;
}
