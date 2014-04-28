/*
Author: Brian Rundel
This program will take as input hours, minutes and seconds
as a integer. Then convert it to nothing but seconds;
*/

#include <iostream>

using namespace std;

int main()
{
    int hours, minutes, seconds, time;

    cout << "Enter the total hours ";
    cin >> hours;
    cout << "Enter the total minutes ";
    cin >> minutes;
    cout << "Enter the total seconds ";
    cin >> seconds;

    time = ((hours *60 ) * 60) + (minutes * 60) + seconds;

    cout << "The time in seconds is " << time;
    return 0;
}
