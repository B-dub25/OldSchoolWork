//******************************************
//
// Author: Brian Rundel
// Program to read customer data and output
// and updates account information.
//******************************************

#include <iostream>
#include <fstream>
#include <iomanip>

const double chkFee = 25.00;
const double savFee = 10.00;
const double savinter = 0.04;
const double chkinter = 0.03;
const double moreinter = 0.05;

using namespace std;

int main()
{
    ifstream infile;

    int account,counter;
    double accountbal,minim,newbal;
    char  accountType;

    counter = 0;

    infile.open("bankData");

    cout << fixed << showpoint << setprecision(2);
  while (counter < 5 )
   {
    infile >> account >> accountType
             >> minim >> accountbal;

    switch(accountType)
    {
        case 'S':
        if ( accountbal - minim > 0 )
        {
            newbal = accountbal * savinter + accountbal;

            cout << "Account: "
                 << account << " " << accountType
                  << " " << "New Balance: " << " " << newbal
                  << endl;

        }
        else if (accountbal - minim < 0 )
        {
            cout << "Account: " << account
                  << " is below the required balance "
                    << minim << " a fee " << savFee
                        << endl;
        }
        break;

        case 'C':
        if (account - minim <= 5000 )
        {
             newbal = accountbal * 0.05 + accountbal;

            cout << "Account: " << account
                    << " " << accountType
                     << " " << minim
                        << " " << "New Balance: "
                         << newbal << endl;
        }

        else if ( accountbal - minim > 5000 )
        {
            newbal = accountbal * 0.03 + accountbal;
            cout << "Account: ";
            cout << account << " " << accountType
                  << " " << minim << " New Balance: "
                    << newbal << endl;

        }

       else
        {
            cout << "Account: " << account
                  << " is below required balance "
                   << minim <<  " a fee of "
                     << chkFee << endl;
        }
       break;

       default:
       cout << "NA" << endl;

    }
    counter++;
   }
   return 0;
}
