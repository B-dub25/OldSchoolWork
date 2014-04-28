/*
Author Brian Rundel
This program will take as input a
set of numbers and converts it to seconds
*/

#include <iostream>

using namespace std;

int main()
{
    int hours,min,sec;

    cout << "Enter the total hours ";
    cin >> hours;
    cout << "Enter the total minutes ";
    cin >> min;
    cout << "Enter the total seconds ";
    cin >> sec;

    hours = (hours * 60) * 60;
    min *= 60;
    sec = (hours + min ) + sec;

    cout << "The total in seconds is " << sec;

    return 0;

}
