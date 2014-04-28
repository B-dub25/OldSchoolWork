/*
Author: Brian Rundel
This program will read in from a file that
holds the account number, account type, the
minimum balance the account should hold and
the current balance the account holder has in
the account
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int account_num,account_bal,account_min;
    char account_type;
    ifstream infile;
    ofstream outfile;
    infile.open("holds");
    outfile.open("output");
    if (!infile)
    {
        cout << "file does not exist ";
        return 1;
    }
    if (outfile)
    {
        cout << "File does not exist. Will create file " << endl;
    }
    else if(!outfile)
    cout << "File does exist " << endl;
    do
    {
        infile >> account_num >> account_type
               >> account_min >> account_bal;
         if (account_min > account_bal)
        {
           outfile << account_num << " " << account_type
                 << " " << account_min
                 << " " << account_bal
                  << " This account is lower then a loud " << endl;
        }
        else
        outfile << account_num << " " << account_type
                 << " " << account_min << " " << account_bal << " "
                 << " This account is okay " << endl;

    }
    while(infile);

     infile.close();
     outfile.close();

    return 0;

}
