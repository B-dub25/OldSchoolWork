/*
Author: Brian Rundel
Nearest integer;
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double one, two, three, four, five;
    double sum;

    cout << "Enter five decimals ";
    cin >> one >> two >> three >> four >> five;

    sum = one + two + three + four + five;

    cout << static_cast<int>((sum) + .5);
    return 0;
}
