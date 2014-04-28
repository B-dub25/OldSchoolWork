/*
Author Brian Rundel
This program will calculate a persons paycheck
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double FEDERAL_TAX = 0.15;
const double STATE_TAX = 0.035;
const double SOC_SECURITY = 0.0575;
const double MEDICAL = 0.0275;
const double PENTION = 0.05;
const double HEALTH = 75.00;

int main()
{
    cout << fixed << showpoint << setprecision(2);

    double gross,net;
    string name;

    cout << "Enter the employee name ";
    getline(cin,name);
    cout << "Enter the gross pay amount ";
    cin >> gross;

    cout << left << setw(25) << name << endl;
    cout << left << setfill('.') << setw(30)
         << "Gross Amount: " << right << setfill(' ')
         << " $"<< setw(8) << gross << endl;
    cout << left << setfill('.') << setw(30)
         << "Federal Tax: " << setfill(' ') << right
         << " $"<< setw(8) << FEDERAL_TAX * gross << endl;
    cout << left << setfill('.') << setw(30)
         << "State Tax: " << right <<" $" << setfill(' ')
         << setw(8) << STATE_TAX * gross << endl;
    cout << left << setfill('.') << setw(30)
         << "Social Security Tax: " << right
         << setfill(' ') << " $" << setw(8)
         << SOC_SECURITY * gross << endl;
    cout << left << setfill('.') << setw(30)
         << "Medicare/Medicaid Tax: "
         << right << setfill(' ') << " $" <<setw(8)
         << MEDICAL * gross << endl;
    cout << left << setfill('.') << setw(30)
         << "Pension Plan: " << right << setfill(' ')
         << " $" << setw(8) << PENTION * gross << endl;
    cout << left << setfill('.') << setw(30)
         << "Health Insurance: " << right << setfill(' ')
         << " $" << setw(8) << HEALTH << endl;
    net = gross - ( gross * FEDERAL_TAX);
    net = net - (gross * STATE_TAX );
    net = net - (gross * SOC_SECURITY);
    net = net - (gross * MEDICAL);
    net = net - (gross * PENTION);
    net = net - HEALTH;
    cout << left << setfill('.') << setw(30)
         << "Net Pay: " << right << setfill(' ')
         << " $" << setw(8) << net << endl;

    return 0;

}
