//********************************************************
//
// Auhtor:Brian Rundel
//
// This program will mimic a caculator as you would input
//
//********************************************************

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double P = 3.14159;

int main()
{
    double a,c,x;
    char b;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter a equation for the calculate. ";
    cin >>a>>b>>c;

    switch (b)
    {
        case '+':

        x = a + c;
        cout << a << " " << b << " "
              << c << " = " << x;
        break;

        case '-':

         x = a - c;
         cout << a << " " << " - "
               << c << " = " << x;
        break;

        case '*':

        x = a * c;

        cout << a << " * " << c
              << " = " << x;
        break;

        case '/':

        x = a / b;

        cout << a << " / " << c
              << " = " << x;
        break;

        default:

        cout << "Not a operater ";
    }

    return 0;
}
