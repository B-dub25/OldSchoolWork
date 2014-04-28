/*
Author Brian Rundel
CPS 171 9/11/12
Phil Geyer
This program will calculate the cost to for school at
WCC, EMU and UM. The program will ask for input of the
distance you have to drive, the cost per mile for you
and the amount of credit hours you are planning on taking
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double WCC_CREDIT = 96.00;
const double EMU_CREDIT = 256.70;     const double EMU_GENERAL = 25.40;
const double EMU_TECH = 12.00;        const double EMU_STUDENT_UNION = 3.55;
const double EMU_BUSINESS_FEE = 58.20;
const double UM_FIRST_CREDIT = 874.00;const double UM_AFTER = 514.00;
const double UM_REGISTRATION = 80.00; const double UM_STUDENT_ASSEMBLY = 7.19;
const double UM_LEGAL_FEE = 8.50;     const double UM_GOV_FEE = 1.50;

int main()
{
    double mile_cost,umcost,emucost,wcc_cost;
    int umdistance,emudistance,wccdistance,hours;

     cout << fixed << showpoint << setprecision(2);
    //Get the information needed for the program.
    cout << "Welcome to the Tuition Calculator by Brian Rundel." << endl;
    cout << endl;
    cout << "Enter the number of credits: ";
    cin >> hours;
    cout << "Enter your cost per mile (example: 0.25 of 25 cents ): ";
    cin >> mile_cost;
    cout << "Enter the distance to WCC: ";
    cin >> wccdistance;
    cout << "Enter the distance to EMU: ";
    cin >> emudistance;
    cout << "Enter the distance to UM: ";
    cin >> umdistance;
    //Do the calculations for the cost;

    umcost = ((hours -1 ) * UM_AFTER) + UM_FIRST_CREDIT + UM_REGISTRATION
           + UM_LEGAL_FEE + UM_STUDENT_ASSEMBLY + UM_GOV_FEE;
    wcc_cost = hours * WCC_CREDIT;
    emucost = (hours * EMU_CREDIT) + (hours * EMU_BUSINESS_FEE) + (hours * EMU_GENERAL)
            + (hours * EMU_STUDENT_UNION) + (hours * EMU_TECH);
    // out put the results
    cout << endl;

    cout << "Tuition For Washtenaw " << endl;
    cout << "Tuition and fees for " << hours << " cedit hour(s) at WCC total: $"
         << wcc_cost << endl;
    cout << "The cost of driving " << wccdistance << " mile(s) "
         << "total: $" << mile_cost * wccdistance << endl;
    cout << "The total cost for WCC: $" << wcc_cost + (mile_cost * wccdistance) << endl;
    cout << endl;

    cout << "Tuition For Eastern University " << endl;
    cout << "Tuition and fees for " << hours << " credit hour(s) at EMU total: $"
         << emucost << endl;
    cout << "The cost for driving " << emudistance << " mile(s) "
         << "total: $" << mile_cost * emudistance << endl;
    cout << "The total cost for EMU: $" << emucost + (mile_cost * emudistance) << endl;
    cout << endl;

    cout << "Tuition For Michigan University " << endl;
    cout << "Tuition and fees for " << hours << " credit hour(s) at UM total: $"
         << umcost << endl;
    cout << "The cost for driving " << umdistance << " miles(s) "
         << "total: $" << mile_cost * umdistance << endl;
    cout << "The total cost for UM: $" << umcost + (mile_cost * umdistance) << endl;
    cout << endl;

    cout << "Thank you for using Tuition Calculator by Brian Rundel " << endl;

    return 0;
}
