/*
Author: Brian Rundel
This programs will compute the class grade
and average for the class
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

    string first, last;
    double score;
    char grade = ' ';
    int counter = 0;
    double sum = 0;
    ifstream infile;
    ofstream outfile;

    infile.open("students");
    outfile.open("student");

    infile >> first >> last >> score;
    while (infile)
    {

        sum += score;
        counter++;

        switch(static_cast<int>(score) / 10)
        {
            case 10:
                    grade = 'A';
            case 9:
                    grade = 'A';
            break;
            case 8:
                   grade = 'B';
            break;
            case 7:
                   grade = 'C';
            break;
            case 6:
                   grade = 'D';
            break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                   grade = 'F';
            break;
        }

         outfile << left << setw(10) << first
                  << setw(10) << last << setw(4)
                   << score << " " << grade << endl;

         infile >> first >> last >> score;

    }

          if (counter != 0 )
          {
              outfile << "Class average: " << sum / counter << endl;
          }

          infile.close();
          outfile.close();

          return 0;

}
