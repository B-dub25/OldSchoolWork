//*******************************************
//
// Author Brian Rundel
// This program shows how static_cast works.
//
//*******************************************

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d,total;

    cout << "Enter the first decimal number. ";
    cin >> a;
    cout << "Enter the second. ";
    cin >> b;
    cout << "Enter the third. ";
    cin >> c;
    cout << "Whew!Almost done! Enter the last please.  ";
    cin >> d;
    cout << pow(10,2) << endl;
    total = a + b + c + d;
    cout << static_cast<int>(total);
    return 0;
}
