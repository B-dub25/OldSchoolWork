/*
Author: Brian Rundel
This program will take as input five decimals
adds them together and converts it to the rearest sum.
*/

#include <iostream>

using namespace std;

int main()
{
    double dec1,dec2,dec3,dec4,dec5;
    double sum;

    cout << "Enter 5 decimals to add. ";
    cin >> dec1 >> dec2 >> dec3 >> dec4 >> dec5;

    sum = dec1 + dec2 + dec3 + dec4 + dec5 + .5;

    cout << "The sum is "<< static_cast<int>(sum);

    return 0;
}
