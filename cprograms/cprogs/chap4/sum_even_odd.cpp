/*
Auhtor: Brian Rundel
This program will print the odd numbers
sum and the even numbers sum
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum,temp;
    int even;
    int odd;

    cout << "Enter a string of integers to "
         << "compute. ";
    cin >> num;
    temp = num;
    while (num > 0 )
    {

        sum = num % 10;
        num = num / 10;

        if (sum % 2 == 0 )
        {
            even = even + sum;

        }
    }
    cout << "The sum of the evens are "
          << even << " " << temp << endl;
    cout << "The sum of the odds are "
          << odd << endl;
    return 0;
}
