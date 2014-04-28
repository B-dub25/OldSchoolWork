/*
Author: Brian Rundel
This program will ask for input assuming its
valid and reports back if its odd,even or zerro
or negitive.
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    while (x != -99)
    {
    cout << "Please enter a number ";
    cin >> x;

    y = x % 2;

    if ( y == 0)
    {
        cout << "The number " << x << " is even" << endl;
    }
    else if (y > 0 )
    {
        cout << "The number " << x << " is odd " << endl;
    }
    else
    cout << "The number " << x << " is negitive " << endl;
    }
    return 0;

}
