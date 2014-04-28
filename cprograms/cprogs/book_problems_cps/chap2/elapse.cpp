/*
Author Brian Rundel
This program will ask for time in seconds
and convert it to hours minutes and seconds
*/

#include <iostream>

using namespace std;

int main()
{
    int sec,min,hour;

    cout << "Please enter the time in seconds ";
    cin >> sec;

    min = sec / 60;
    sec = sec % 60;
    hour = min / 60;
    min = min % 60;

    cout << hour << ":" << min << ":" << sec;
    return 0;

}
