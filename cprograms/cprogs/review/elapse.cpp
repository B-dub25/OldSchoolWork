/*
Author: Brian Rundel
This program will give you the elapse time.
*/

#include <iostream>

using namespace std;

int main()
{
    int seconds;
    int hours;
    int minutes;

    cout << "Enter seconds ";
    cin >> seconds;
    minutes = (seconds / 60);        // devide the seconds by 60
    cout << minutes << endl;
    seconds = seconds % 60;          // update the seconds
    cout << seconds << endl;
    hours = (minutes / 60.0);        // the remander of minutes / 60
    cout << hours << endl;
    minutes = minutes % 60;          // update minutes
    cout << minutes << endl;
    cout << hours << ":" << minutes << ":" << seconds;

    return 0;
}
