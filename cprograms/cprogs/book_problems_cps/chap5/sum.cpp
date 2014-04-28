/*
Author: Brian Rundel
This program will sum up a number of integers
and give you the average of the numbers.
It will a complish this by using a while loop;
*/

#include <iostream>

using namespace std;

int main()
{
    int numbers, sum , counter;
    int limit;

    sum = 0;
    counter = 0;

     cout << "Enter the number of integers ";
     cin >> limit;

     while (limit > counter)
     {
         cout << "enter a number ";
         cin >> numbers;
         sum += numbers;
         counter++;

     }

     cout << "The average of the numbers is " << sum / counter;
     return 0;

}
