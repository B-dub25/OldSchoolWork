/*
Author:  Brian Rundel
CPS 171 9/11/12
Phil Geyer
********************************************************
This program will calculate the cost of going to college
at WCC, EMU and UM. It will ask for input for the number
of credit hours, cost per mile the student wishes to
use and the distance they have will be driving to school.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double WCC_CREDIT_COST = 96.00;
const double EMU_CREDIT_COST = 256.70; const double EMU_TECH = 12.00;
const double EMU_GENERAL_FEE = 25.40;  const double EMU_UNION = 3.55;
const double EMU_BUSINESS_FEE = 58.20;
const double UM_CREDIT_COST = 874.00;  const double UM_AFTER_FIRST = 514.00;
const double UM_REGISTRATION = 80.00;  const double UM_ASSEMBLY = 7.19;
const double UM_STUDENT_LEGAL = 8.50;  const double UM_GOV_FEE = 1.50;


int main()
{
    int hours,wcc_distance,emu_distance,um_distance;
    double cost_mile,emu_tuition,um_tuition;

    cout << fixed << showpoint << setprecision(2);
    cout << "Welcome to the Tuition calculator by Brian Rundel. " << endl;
    // Get the information needed
    cout << "Enter the number of credits: ";
    cin >> hours;
    cout << "Enter your cost per mile (0.25 is 25 cents ) ";
    cin >> cost_mile;
    cout << "Enter the distance to WCC: ";
    cin >> wcc_distance;
    cout << "Enter the distance to EMU: ";
    cin >> emu_distance;
    cout << "Enter the distance to UM: ";
    cin >> um_distance;
    cout << endl;

    // Calculate the cost for Washtenaw

    cout << "Washtenaw Tuition calculator " << endl;
    cout << "The tuition and fees for " <<  hours << " hour(s) at WCC: "
          << "$" << WCC_CREDIT_COST * hours << endl;
    cout << "The total driving cost at a distance of " << wcc_distance
          << " is $" << cost_mile * wcc_distance << endl;
    cout << "The total cost is : $"<< (WCC_CREDIT_COST * hours) + (cost_mile * wcc_distance ) << endl;
    // Calculate the cost for EMU

    emu_tuition = (EMU_CREDIT_COST * hours) + ( EMU_GENERAL_FEE * hours) + (EMU_TECH * hours)
              +  (EMU_UNION * hours) + EMU_BUSINESS_FEE;
    cout << endl;
    cout << "EMU Tuition calculator " << endl;
    cout << "The tuition and fee for " << hours << " hour(s) at EMU: "
          << emu_tuition << endl;
    cout << "The driving cost is: " << emu_distance * cost_mile << endl;
    cout << "The total cost for EMU : " << emu_tuition + (emu_distance * cost_mile)
         << endl;
    // Calculate the cost for UM
    cout << endl;

    um_tuition = (hours - 1 ) * UM_AFTER_FIRST + UM_CREDIT_COST
               + UM_STUDENT_LEGAL + UM_ASSEMBLY + UM_GOV_FEE + UM_REGISTRATION;
    cout << "Michigan Tuition calculator " << endl;
    cout << "The tuition and fees for " << hours << " hours(s) at UM "
         << um_tuition << endl;
    cout << "The driving cost for UM: " << cost_mile * um_distance << endl;
    cout << "The total cost for UM: " << um_tuition + (cost_mile * um_distance) << endl;
    cout << "Thank you for using Tuition calculator. " << endl;

    return 0;
}
