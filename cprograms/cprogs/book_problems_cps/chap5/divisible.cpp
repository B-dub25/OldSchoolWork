/*
Author: Brian Rundel
This program will add and subtract numbers
in a sequence to see if the sum is divisible
by 11
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int num; int summ = 0;

    cout << "Enter a set of numbers to see if its divisible by 11 ";
    cin >> num;
    summ = num;
    while(num > 0)
    {

        sum += num % 10;
        num = num / 10;
        sum -= num % 10;
        num = num / 10;

    }
        if (sum % 11 == 0)
        cout << "The sum of " << summ << " equals "
             << sum << " Therefore its divisible by 11 ";
        else
            cout << summ << " is not divisible by 11 ";

    return 0;

}
