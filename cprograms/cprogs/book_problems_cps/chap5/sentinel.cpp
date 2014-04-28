/*
Author: Brian Rundel
This program is the same as sum, but
it uses a sentinel controlled variable
instead of a incremental one.
*/

#include <iostream>

using namespace std;

const int SENTINEL = -99;

int main()
{
    int num,sum;
    int counter = 0;
    cout << "Enter -99 to quit the sum and average program " << endl;

    sum = 0;

    cout << "Enter first number ";
    cin >> num;
    while (num != SENTINEL)
    {
         sum += num;
         counter++;
         cout << "Enter next number " ;
         cin >> num;


    }
    cout << "The sum of the numbers = " << sum << endl;
    cout << "The average of the numbers = " << sum / counter << endl;
    cout << counter;
       return 0;
}
