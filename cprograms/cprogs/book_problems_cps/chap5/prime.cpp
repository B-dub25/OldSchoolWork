/*
Author: Brian Rundel
This program will deturmine if a number
entered is prime.
*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number to test if prime. ";
    cin >> number;

    if(number == 2 || number == 3)
    cout << "The number is prime. ";

    else if (number % 2 == 0 || number % 3 == 0)
    cout << "The number is not prime ";

     else
        cout << "The number is prime ";

    return 0;
}
