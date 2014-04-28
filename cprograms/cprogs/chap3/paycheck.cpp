//****************************************************
//
// Author : Brian Rundel
// This program will caculate the total pay check
// and all deductions after taxes and show all of
// the deductions. Storing it all in a file for later
//****************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const double federal = 0.15;
const double state = 0.035 ;
const double social = 0.0575;
const double medicare = 0.0275;
const double pension = 0.05;
const double health = 75.00;

int main()
{
    string name;
    double paycheck;
    double net;                                          // Total pay after all
    double afterfed,aftermed,afterstate,aftersoc,afterpen;       // After taxes
    ofstream outfile;
    outfile.open("aftertax");

    cout << "Enter your full name. ";
    getline(cin, name);
    cout << "Enter your gross paycheck ";
    cin >> paycheck;
    cout << "Processing data." << endl;

    afterfed = paycheck * federal;
    afterstate = paycheck * state;
    aftersoc = paycheck * social;
    afterpen = paycheck * pension;
    aftermed = paycheck * medicare;
    net = paycheck -
    ( afterfed + afterstate + aftersoc + afterpen + aftermed + health );

    outfile << fixed << showpoint;
    outfile << setprecision(2);

    outfile << name << endl;

    outfile << left << setw(35) << setfill('.')
    <<"Gross Amount: " << right
       << "$ " << setw(6) << setfill(' ')
           << paycheck << endl;

    outfile << left << setw(35) << setfill('.')
             << "Federal Tax: " << right
               <<"$ " << setw(7) << setfill(' ')
               << afterfed << endl;

    outfile << left << setw(35) << setfill('.')
              << "State Tax: " << right
                << "$ " << setw(7) << setfill(' ')
                << afterstate << endl;

    outfile << left << setw(35) << setfill('.')
             << "Social Security Tax: "
               << "$ " << right << setw(7)
                << setfill(' ') << aftersoc
                  << endl;

    outfile << left << setw(35) << setfill('.')
              << "Medicare/Medicaid Tax: "
                << "$ " << right << setw(7)
                  << setfill(' ') << aftermed
                     << endl;

    outfile << left << setw(35) << setfill('.')
              << "Pension Plan: " << right << "$ "
                << setw(7) << setfill(' ')
                   << afterpen << endl;

    outfile << left << setw(35) << setfill('.')
              << "Health Insurance: " << right
                << "$ " << setw(7) << setfill(' ')
                   << health << endl;

    outfile << left << setw(35) << setfill('.')
             << "Net Pay: " << right << "$ " << setw(6)
              << setfill(' ') << net << endl;

    outfile.close();

    return 0;

}
