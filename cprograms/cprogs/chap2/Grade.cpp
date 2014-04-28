//*********************************************
//
// Auhtor: Brian Rundel
// This program will read data from a file and
// and then it will caculate the adverage of
// get grades
//*********************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    double test1,test2,test3,test4,test5;
    double adverg;
    string first;
    string last;
    ifstream infile;
    ofstream outfile;

    infile.open("test.txt");
    outfile.open("adverage");

    outfile << fixed << showpoint;
    outfile << setprecision(2);

    cout << "Processing Data " << endl;

    infile >> first >> last;
    outfile << "Student name: " << first << " " << last << endl;

    infile >> test1 >> test2 >> test3 >> test4 >> test5;
    outfile << "Test scorces: " << setw(6) << test1 << setw(6)
     << test2 << setw(6) << test3 << setw(5) << setw(6)
      << test4 << setw(6) << test5
     << endl;

     adverg = ( test1 + test2 + test3 + test4 + test5) / 5;

    outfile << "Adverage test score: " << setw(6) << adverg << endl;

    infile.close();
    outfile.close();

    return 0;
}
