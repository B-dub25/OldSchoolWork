/*
Author : Brian Rundel
This program will ask a user to enter two
numbers. And then it will output the odd
numbers between those numbers */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int first;
    int second;
    int primary;
    int sum;
    int counter = 0 ;
    int oddSum,x;

    cout << "Enter two integers. ";
    cin >> first >> second;
    if ( first < second)
    {
        cout << "First number has to be bigger .";
        return 1;
    }
primary = second;

    while (primary <= first )
    {
     if ( primary % 2 == 1)
       {
           cout << primary << " ";

       }
    if ( primary % 2 == 0)
    {
        sum += primary;
    }
    primary++;
    }
 primary = second;
      cout << endl;
      cout << "sum of all evens = " << sum << endl;
     return 0;

}
