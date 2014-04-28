/*
Author: Brian Rundel
CPS 171 sec 02 9/18/12
Professor: Phil Geyer

This program will read as input from a file.
The file will consist of the name of the student;
the address (city state zipp code), the number of
credits and cost per credit hour. The output will
be formated and the output will be placed inside
a file. This program assumes that all data in the
file is valid and of the type string, int and double

DISCLAIMER: I am not responsible for the data file
and the contents, global worming, ninja attacks or
the princess brid not playing in your dvd player.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const double REGISTATION_FEE = 700.00;
const double STUDENT_ASSEMBLY_FEE = 7.19;
const double LEGAL_FEE = 8.50;
const double GOV_FEE = 1.50;
const double LATE_FEE = 1.5;

int main()
{


    //Setting up variables for file input and tuition
    //calculation.
    ifstream infile;
    ofstream outfile;
    double cost_per_credit, tuition,total_tuition;
    string name, street, state;
    int credits;

    //Opening up the file to get the info from
    infile.open("bill");

    //Opening up the file to output to
    outfile.open("due");


    /* Check to see if the file exists and output a error if not
       output the appropreate message and exit with a error code 1 */
     if (!infile)
      {
        outfile << "Could not open file. "
                << "Please check if the files exist or in directory "
                << endl;
        return 1;
      }

    //Setting up foating point to 2 places
    outfile << fixed << showpoint << setprecision(2);

    // Get the name, address, city and state
    getline(infile,name);
    getline(infile,street);
    getline(infile,state);

    // Get the amount of credits the student is taking
    infile >> credits;

    // Get the cost per credit and ignoring the $ sign
    infile.ignore(10,'$');
    infile >> cost_per_credit;

    //Setting up the header for the file
    outfile << "College of Higher Learning Tuition "
            << "Billing Program by Brian Rundel. "
            << endl;

    outfile << endl;

    //Setting the output for the string to 21 width
    //so that the name will start after the string
    //to keep the alignment.

    outfile << left << setfill(' ')
            << setw(21) << "Student Name: " << right
            << name << endl;

    outfile << left << setfill(' ')
            << setw(21) <<"Address: "
            << right << street
            << endl;

    outfile << left << setfill(' ') << setw(21)
            << " " << state << endl;

    outfile << endl;

    //Setup the cost for tuition and other fees
    tuition = cost_per_credit * credits;
    total_tuition = tuition + REGISTATION_FEE + GOV_FEE
                    + LEGAL_FEE + STUDENT_ASSEMBLY_FEE;


    /*Setting up the width of the first set to 29
    of and justifying it to the left and filling
    in the spaces with dots. Then switching the
    justification to right and setting back to the
    fill in back to the default of spaces and
    outputing it to a file. This goes for the rest
    of the output to the closing of the files  */

    /* For constants values see lines 23-27 */

    outfile << left << setfill('.') << setw(29)
            << "Number of credits: " << right
            << setfill(' ') << setw(11)
            << credits << endl;

    outfile << left << setfill('.') << setw(29)
            << "Cost per Credit Hour: " << right
            << setfill(' ') << " $"<< setw(9)
            << cost_per_credit << endl;

    outfile << left << setfill('.') << setw(29)
            << "Tuition Cost: " << right
            << setfill(' ') << " $"<< setw(9)
            << tuition << endl;

    outfile << left << setfill('.') << setw(29)
            << "Registration Fee: " << right
            << setfill(' ') << " $"<< setw(9)
            << REGISTATION_FEE << endl;

    outfile << left << setfill('.') << setw(29)
            << "MSA Fee: " << right
            << setfill(' ') << " $"<< setw(9)
            << STUDENT_ASSEMBLY_FEE << endl;


    outfile << left << setfill('.') << setw(29)
            << "Legal Services Fee: " << right
            << setfill(' ') << " $"<< setw(9)
            << LEGAL_FEE << endl;

    outfile << left << setfill('.') << setw(29)
            << "Student Government Fee: " << right
            << " $" << setw(9) << setfill(' ')
            << GOV_FEE << endl;

    outfile << endl;

    outfile << left << setfill('.') << setw(29)
            << "Total Tuition and Fees: "
            << right << setfill(' ') << " $"
            << setw(9) << total_tuition << endl;

    //Setting the decimal to 1 so the percentage
    //looks like 1.5 instead of 1.50.
    outfile << setprecision(1);

    outfile << left << setfill('.') << setw(29)
            << "Late Charge Percent: " << right
            << setfill(' ') << " "<< setw(10)
            << LATE_FEE << " %"<<endl;

    //Setting the decimal back to two so it can
    //display money output correct.
    outfile << setprecision(2);

    outfile << left << setfill('.') << setw(29)
            << "Late Charge " << right
            << setfill(' ') << " $"<< setw(9)
            << (LATE_FEE / 100) * total_tuition
            << endl;

    outfile << left << setfill('.') << setw(29)
            << "Total Due**: " << right
            << setfill(' ') << " $"<< setw(9)
            <<  (LATE_FEE / 100) * total_tuition
                + total_tuition << endl;

    outfile << endl;

    outfile << "** Transcripts will not be released or "
            << "diplomas issued until paid. " << endl;


    //Closing the input file and output file.

    infile.close();
    outfile.close();

    return 0;
}
