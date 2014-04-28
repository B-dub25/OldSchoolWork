/*
Author: Brian Rundel
This program will out put the total seconds
into hours, minutes and seconds;
*/

#include <iostream>

using namespace std;

int main()
{
    int seconds, minutes,hours;

    cout << "Enter the total time in seconds ";
    cin >> seconds;

    minutes = seconds / 60;
    hours = minutes / 60;
    minutes = minutes % 60;
    seconds = seconds % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;
}
