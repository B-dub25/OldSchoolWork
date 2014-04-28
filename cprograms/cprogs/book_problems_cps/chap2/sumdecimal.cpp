/*
Author: Brian Rundel
sum of five
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double one, two, three, four, five;
    int sum;

    cout << "Enter five decimals ";
    cin >> one >> two >> three >> four >> five;

    cout << "The numbers entered are\n "
         << one << two << three << four << five <<"\n";

    one = static_cast<int>(one +.5);
    two = static_cast<int>(two + .5);
    three = static_cast<int>(three + .5);
    four = static_cast<int>(four + .5);
    five = static_cast<int>(five + .5);

    sum = one + two + three + four + five;

    cout << "The sum of the decimals is " << sum +<<"\n";
}
