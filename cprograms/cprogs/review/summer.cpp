/*
Author : Brian Rundel
This program will take as input from the user
the payrate, and caclulate the gross pay after
taxes
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        double payrate; double parents_help;
        double taxes; double spending;
        double school_assec ;
        double saving_bonds;
        double pay; double net;
        int hours;

        cout << "Enter your payrate ";
        cin >> payrate;
        cout << "Enter the total hours you worked ";
        cin >> hours;

        pay = payrate * hours;
        taxes = pay * 0.14;
        net = pay;
        pay = pay - taxes;
        spending = pay * 0.10;
        pay = pay - spending;
        school_assec = pay * 0.01;
        pay = pay - school_assec;

    return 0;



}
