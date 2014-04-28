/*
Author Brian Rundel
This program will ask for three integers
and output them in ascending order
*/

#include <iostream>

using namespace std;

int main()
{
    int x,y,z;


    cout << "Enter three numbers ";
    cin >> x >> y >> z;

    if (x < y &&  y < z)
    {
        cout << x << " " << y << " " << z << endl;
    }
    else if ( x > y && x < z )
    {
        cout << y << " " << x << " " << z << endl;
    }
    else if (x < y && x > z)
    {
        cout << z << " " << x << " " << y << endl;
    }
    else if ( x > y && x < z)
    {
        cout << y << " " << x << " " << z << endl;
    }
    else if ( x > y && y > z )
    {
        cout << z << " " << y << " " << x << endl;
    }
    else if (x > y && x > z )
    {
        cout << y << " " << z << " " << x << endl;
    }
 return 0;
}
