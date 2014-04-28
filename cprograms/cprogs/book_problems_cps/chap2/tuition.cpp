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

void umtuition(double& cost_mile,int& umdistance,int& hours);
void emutuition(double& cost_mile,int& emudistance,int& hours);
void wcctuition(double& cost_mile,int& wccdistance, int& hours);

int main()
{
    int hours,wccdistance,emudistance,umdistance;
    double cost_mile;

    cout << "Welcome to Tuition Calculator by Brian Rundel " << endl;
    cout << endl;
    cout << "Enter the number of credit hours: ";
    cin >> hours;
    cout << "Enter the cost per mile (.25 will be 25 cents) ";
    cin >> cost_mile;
    cout << "Enter the distance to WCC ";
    cin >> wccdistance;
    cout << "Enter the distance to EMU ";
    cin >> emudistance;
    cout << "Enter the distance to UM ";
    cin >> umdistance;


    wcctuition(cost_mile,wccdistance,hours);
    emutuition(cost_mile,emudistance,hours);
    umtuition(cost_mile,umdistance,hours);
    cout << endl;
    cout << "Thank you for using Tuition calculator " << endl;
    return 0;
}
void emutuition(double& cost_mile,int& emudistance,int& hours)
{
    double emutotal;
    emutotal = (EMU_CREDIT_COST * hours) + (hours * EMU_GENERAL_FEE)
              + (EMU_TECH * hours) + (EMU_UNION * hours) + EMU_BUSINESS_FEE;
    cout << endl;
    cout << "Tuition calculator for EMU " << endl;

    cout << "The tuition and fees for " << hours << " hours "
          << "at EMU $" << emutotal << endl;
    cout << "The driving cost for " << emudistance << " miles $"
          << cost_mile * emudistance << endl;
    cout << "The total cost is " << emutotal + (cost_mile * emudistance)
          << endl;
}
void umtuition(double& cost_mile, int& umdistance,int& hours)
{
    double umtotal;
    umtotal = (hours - 1 ) * UM_AFTER_FIRST + UM_CREDIT_COST + UM_REGISTRATION
            + UM_GOV_FEE + UM_STUDENT_LEGAL + UM_ASSEMBLY;
    cout << endl;
    cout << "Michigan tuition calculator " << endl;
    cout << "The tuition and fees for " << hours << " hour(s) "
          << " at UM $" << umtotal << endl;
    cout << "The cost of driving " << umdistance << " miles $"
         << umdistance * cost_mile << endl;
    cout << "The total cost at UM $" << umtotal + (umdistance * cost_mile)
          << endl;
    cout << endl;
}
void wcctuition(double& cost_mile,int& wccdistance,int& hours)
{
       double wcctotal;
         cout << endl;
       wcctotal = WCC_CREDIT_COST * hours;
       cout << "Washtenaw tuition calculator " << endl;

       cout << "The tuition and fees for " << hours << " hour(s) at WCC $"
            << wcctotal << endl;
       cout << "The cost for driving " << wccdistance << " miles "
             << " is $" << wccdistance * cost_mile << endl;
       cout << "The total tuition and fees " << wcctotal + (wccdistance * cost_mile )
             << endl;
       cout << endl;

}




