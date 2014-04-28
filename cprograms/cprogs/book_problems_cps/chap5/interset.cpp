/*
Author: Brian Rundel
This program will take as input the total
loan amount and the interest rate that is
applied to your loan and compute how long
it will take you to pay the loan off.
*/

#include <iostream>

using namespace std;

int main()
{
    double loan,interest, payment, temp, first;
    int years;

    cout << "Welcome to loan calculator " << endl;
    cout << "This program will calculate "
         << "how long it will take to pay off a loan" << endl;
    cout << "Please enter the amount of your loan " ;
    cin >> loan;
    cout << "Please enter the amount of the monthly payment ";
    cin >> payment;
    cout << "Please enter the interest rate ";
    cin >> interest;
    temp = payment;
    interest = (interest / 100);
    interest = (interest / 12);
    first = ( payment - (interest / 12) *  loan );


    while (loan >= 0)
    {

        temp = ( interest * loan);
        loan -= ( payment - temp);

        years++;
    }
       cout << "It will take you " << years << " months"
            << "To pay off a loan for the amount " << temp << endl;
       cout << "with a monthly payment of " << payment << endl;
       return 0;
}
