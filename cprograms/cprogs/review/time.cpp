/*
Author: Brian Rundel
This will take as input the time in seconds
and convert it to hours, minutes and the remaindor
of seconds left
*/

#include <iostream>

using namespace std;

int main()
{
    int seconds, hours, minutes;

    cout << "Enter the time in seconds to convert ";
    cin >> seconds;

    minutes = seconds / 60; // convert the seconds into minutes
    hours = minutes / 60;
    // convert the minutes into hours
    // and store into hours
    minutes = minutes % 60;
    // get the minutes from the seconds by getting the left over of hours
    seconds = seconds % 60;
    // get the left over for the seconds

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
