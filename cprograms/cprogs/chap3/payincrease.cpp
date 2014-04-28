//*******************************************************
//
// Author: Brian Rundel
// This program will find what the pay increase will be
// for employees using the data from a file. This will
// format it properly and then save it to a file.
//*******************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string first1,first2,first3,last1,last2,last3;
    double inc,inc2,inc3;
    double payrate1,payrate2,payrate3;
    double increase1,increase2,increase3;

    ifstream infile;
    ofstream outfile;

    infile.open("Ch3_ex8");
    outfile.open("ch3_EX8");

    infile >> last1 >> first1
            >> payrate1 >> increase1;

    infile >> last2 >> first2
             >> payrate2 >> increase2;

    infile >> last3 >> first3
            >> payrate3 >> increase3;

    increase1 /= 100;
    increase2 /= 100;
    increase3 /= 100;
    inc = payrate1 * increase1;
    inc2 = payrate2 * increase2;
    inc3 = payrate3 * increase3;

    outfile << fixed << showpoint;
    outfile << setprecision(2);

    outfile << left << setw(35) << "Employees Name: "
              << right << setw(7)
                  << "Salary" << endl;

    outfile << left << last1 << " "
                  << setw(27) << setfill('.') << first1 << " "
                  << right << setw(8) << setfill(' ')
                    << payrate1 + inc << endl;

    outfile << left << last2 << " " << setw(28)
              << setfill('.') << first2 << " "
                << right << setw(8) << setfill(' ')
                 << payrate2 + inc2 << endl;

    outfile << left << last3 << " " << setw(28)
             << setfill('.') << first3 << " "
              << right << setw(8) << setfill(' ')
                << payrate3 + inc3 << endl;

    outfile.close();

         return 0;

}
