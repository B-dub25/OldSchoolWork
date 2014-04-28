/*
* Author : Brian Rundel
* This program will caculate the time
* it will take to payoff a loan. It
* takes as input the loan amount and
* the interest rate per-year and the
* monthly payment.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int months = 0;
    double loan;
    double princ;
    double rate;
    double monthly;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the loan amount. ";
    cin >> loan;
    cout << "Enter the interest rate. ";
    cin >> rate;
    cout << "Enter the monthly payment. ";
    cin >> monthly;

    while ( loan > 0 )
    {
    rate = static_cast<double>(rate / 12 ) / 100;
    princ = static_cast<double>(loan * rate);
    monthly = monthly - princ;
    loan = loan - monthly;
    //cout << princ << " " << loan << " " << monthly;
    months++;
    }
    cout << "It will take " << months <<" to pay off "
          << "the loan ." << endl;


    return 0;


}
