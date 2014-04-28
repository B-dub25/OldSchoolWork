/*
Author Brian Rundel
This program will mimic a calculator. It will ask for
input and assume all values are valid ones. It will
oupt put the instuctions on how to use it and display
the results
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

void function(double x, double y, double z);
void calcul(double x, char ch, double y);
void square(double x);

int main()
{
    double x,y,z;
    char ch;
    int answer;

    do
    {
        cout << "1: for function calculator " << endl;
        cout << "2: for simple calculator " << endl;
        cout << "3: for square root finder " << endl;
        cout << "4: to exit " << endl;
        cout << "Enter choice: ";
        cin >> answer;

        switch(answer)
        {
            case 1:
                   function(x,y,z);
            break;
            case 2:
                   calcul(x,ch,y);
            break;
            case 3:
                   square(x);
            break;
            case 4:
                 break;
            default:
            cout << "Invalid input " << endl;

        }

    }
    while (answer != 4);

    return 0;
}

void function(double x, double y, double z)
{
    cout << "Welcome to function calculator. "
          << "This will only handle three number " << endl;

    cout << "Enter the coefficinet ";
    cin >> x;
    cout << "Enter the value of x ";
    cin >> y;
    cout << "Enter the last number ";
    cin >> z;
    cout << "f(x)= " << x * y + z << endl;

}

void calcul(double x, char ch, double y)
{
    cout << "Welcome to basic calculator "
         << " use * for timing; / for devision " << endl;

    cout << "Enter the equation ";
    cin >> x >> ch >> y;

    switch(ch)
    {
    case '+':
             cout << "The answer for " << x << ch << y
                  << " = " << x + y << endl;
    break;

    case '-':
             cout << "The answer for " << x << ch << y
                  << " = " << x - y << endl;
    break;
    case '/':
             cout << "The answer for " << x << ch << y
                  << " = " << x / y << endl;
    break;
    case '*':
             cout << "The answer for " << x << ch << y
                  << " = " << x * y << endl;
    break;
    default:
    cout << "Invalid in put " << endl;
    }
}

void square(double x)
{
    cout << "Welcome to square root finder " << endl;

    cout << "Enter the number you want to find the square root of ";
    cin >> x;

    cout << "The suare root of  " << x << " is " << sqrt(x) << endl;


}
