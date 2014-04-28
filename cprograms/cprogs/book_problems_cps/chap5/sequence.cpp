/*
Author: Brian Rundel
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int largest = 0;

    cout << "Please enter a number ";
    cin >> num;

    while (num > 1)
    {
        if (num > largest)
            largest = num;
        if (num % 2 == 0)
            num = num / 2;
        else
            num = num * 3 + 1;

        cout << num << ":" ;

    }
        cout << endl;
        cout << "The largest number hit was " << largest;
    return 0;
}
