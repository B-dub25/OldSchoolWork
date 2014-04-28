//*****************************************
//
// Author: Brian Rundel
// This progam will read data from a file
// and caculate the adverage of the grades
// ****************************************

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    string first,last;
    double grade;
    double sum = 0;
    int count = 0 ;
    char letter = ' ';
    infile.open("stugrades");
    outfile.open("advgrades");

    if(!infile)
    {
        cout << "file not found, or does not exist.";
        return 1;

    }
    cout << "Processing data. " << endl;

    outfile << fixed << showpoint << setprecision(2) << endl;
    infile >> first >> last;
    infile >> grade;

    sum = sum + grade;

    while (infile)
{
        sum = sum + grade;
        count++;
        switch(static_cast<int> (grade) / 10)
        {
            case  1:
            case  2:
            case  3:
            case  4:
            case  5:
            letter = 'F';
            break;
            case  6:
            letter = 'D';
            break;
            case  7:
            letter = 'C';
            break;
            case  8:
            letter = 'B';
            break;
            case  9:
            case 10:
            letter = 'A';
            break;
            default:
            cout << "Invalid score" << endl;
        } // end of switch
        outfile << left << setw(12) << first << setw(12)
                 << last << right << setw(4) << grade
                    << setw(2) << letter << " "<< count
                      << endl;
        infile >> first >> last;
        infile >> grade;
        } // while loop is done.
        outfile << endl;

        infile.close();
        outfile.close();
        return 0;

}
