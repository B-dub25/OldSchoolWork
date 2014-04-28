//***************************************************
//
// Author: Brian Rundel
// This program will show how to use setfill and setw
//
//***************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   //string 12345678901234567890 = "12345678901234567890";
    int x = 123;
    int y = 456;

    double z = 34.56;

    cout << "12345678901234567890" << endl;
    cout << setw(4) << x << setw(4) << y << endl;
    cout << endl << endl ;
    cout << "12345678901234567890" << endl;
    cout << setw(2) << x << setw(3) << y << endl << endl;
    cout << "12345678901234567890" << endl;
    cout << setfill('*');
    cout << setw(5)  << x
           << setw(6)  << y << setw(6) << z << endl;
    return 0;
}
