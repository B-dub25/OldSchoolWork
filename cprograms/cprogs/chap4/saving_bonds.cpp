//***********************************************
//
// Auhtor: Brian Rundel
// This Program will caculate money saved and
// earned though a summer job. This needs some
// fine tuning
//***********************************************

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//const double payRate = 15.50;
const double totalTax = 0.14;
const double send = 0.10;
const double schoolSupplies = 0.01;
const double savingBonds = 0.25;
const double parentBonds = 0.25;

int main()
{
    double bonds;
    double income,afterAccess,payrate;
    double schoolSup,parnBond;
    double ifNotBond,ifyouGotBonds;
    double v,w,x,y,z;
    int allWeeks;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the number of hours you worked for each week. ";
    cin >> v >> w >> x >> y >> z;
    cout << "Enter payrate. ";
    cin >> payrate;
    cout << "Enter the amount you spent on bonds. ";
    cin >> bonds;


    allWeeks = w + v + x + y + z;
    income = payrate * allWeeks;

    cout << "Your gross pay for the summer is "
          << income << endl;

    w = income * totalTax;
    income -= w;

    cout << "Your net pay is "
           << income << endl;
      if (bonds > 25 )
    {
        bonds = bonds / 100;
        afterAccess = income * send;
        schoolSup = income * schoolSupplies;
        ifyouGotBonds = income * bonds;
        parnBond = ifyouGotBonds * 0.40;
        v = ( income - afterAccess - schoolSup ) * 0.02;
        cout << "Money you spent on accessories. "
              << income - afterAccess << endl;
        cout << "Moeny spent on school supplies. "
              << income - schoolSup << endl;
        cout << "Money you spent buying savings bonds. "
               << ifyouGotBonds << endl;
        cout << "Money your parents spent on bonds. "
              << parnBond << " With addition of 2% "
                << "Because you spent more then 25% on bonds"
                  << endl;
        cout  << v << " Total is " << v + parnBond
                << endl;
    }

 else if (bonds > 0 && bonds <= 25 )
    {
        bonds = bonds / 100;
        afterAccess = income * send;
        schoolSup = income * schoolSupplies;
        ifyouGotBonds = income * savingBonds;
        parnBond = ifyouGotBonds * parentBonds;
        v = ( income - afterAccess - schoolSup ) * 0.01;
        cout << "Money you spent on accessories. "
              << income - afterAccess << endl;
        cout << "Moeny spent on school supplies. "
              << income - schoolSup << endl;
        cout << "Money you spent buying savings bonds. "
               << ifyouGotBonds << endl;
        cout << "Money your parents spent on bonds. "
              << parnBond << " With addition of. "
                << v << " Total is " << v + parnBond
                       << endl;

    }
     else if ( bonds <= 0 )
     {
       afterAccess = income * send;
        schoolSup = income * schoolSupplies;
        v = ( income - afterAccess - schoolSup ) * 0.01;
        cout << "Money you spent on accessories. "
              << income - afterAccess << endl;
        cout << "Moeny spent on school supplies. "
              << income - schoolSup << endl;
        cout << "Money your parents spent on bonds. "
               << v << endl;
     }
    return 0;
}
