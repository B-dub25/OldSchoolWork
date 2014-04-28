/*
Author: Brian Rundel
This program will convert feet into inches
*/

#include <iostream>

using namespace std;

const double cent = 2.54;

int main()
{
    int inches;
    int feet;
    double centmeters;

    cout << "Please enter the total length in feet ";
    cin >> feet;
    cout << "Please enter total inches ";
    cin >> inches;

    inches += feet * 12;
    centmeters = inches * cent;

    cout << "The total inches is " << inches ;
    cout << " The total centemeters is " << centmeters;

    return 0;


}
