/*
Author: Brian Rundel
This program will open a file and use its contents
to calculate the total sum of tickets sold and the
total money earned.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << showpoint << setprecision(2);
    double ticket1,ticket2,ticket3,ticket4;
    double num,num2,num3,num4;
    ifstream infile;

    infile.open("tickets");

    infile >> num >> ticket1 >> num2
           >> ticket2 >> num3 >> ticket3
           >> num4 >> ticket4;

    cout << left << setfill('.') << setw(30)
         << "Number of box-tickets "
         << right << setfill(' ') << setw(9) << ticket1
          << left << setw(10) << " Grossing $" << left << setw(8)
          << num * ticket1 << endl;
    cout << left << setfill('.') << setw(30)
         << "Number of side-line "
         << right << setfill(' ') << setw(9) << ticket2
          << left << setw(10) << " Grossing $" << left << setw(8)
          << num2 * ticket2 << endl;

    cout << left << setfill('.') << setw(30)
         << "Number of premium "
         << right << setfill(' ') << setw(9) << ticket3
          << left << setw(10) << " Grossing $" << left << setw(8)
          << num3 * ticket3 << endl;
    cout << left << setfill('.') << setw(30)
         << "Number of general "
         << right << setfill(' ') << setw(9) << ticket4
          << left << setw(10) << " Grossing $" << left << setw(8)
          << num4 * ticket4 << endl;

    return 0;

}
