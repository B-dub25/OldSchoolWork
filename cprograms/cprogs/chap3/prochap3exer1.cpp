//**************************************************************
//
// Author: Brian Rundel
// This is the programming exercise from chapter 3 problem # 1
//**************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const double PI = 3.1416;

int main()
{
    double langht,width,radius,iterest;

    int regnum,regnum2;
    string firstname,last;
    char ch;
    int chh;
    ifstream infile;
    ofstream outfile;

    infile.open("indata.txt");         // getting data from the file indata.txt
    outfile.open("outdata.txt");       // setting up for the output in the file outdata

    infile >> langht >> width >> radius;              // This is putting the data line by line in the variables
    infile >> firstname >> last;
    infile >> regnum >> regnum2 >> iterest >> ch;

    double parameter = static_cast<double>(langht * 2 + (width * 2));
    double area = static_cast<double>((radius * radius) * PI);
    double circum = static_cast<double>( PI * (radius * 2 ));

    outfile << fixed << showpoint;
    outfile << setprecision(2);

    outfile << "Rectangle: " << endl;
    outfile << endl;
    outfile << "Lenght = " << langht <<"," << " width = "
             << width <<"," <<" area = " << langht * width <<","
               << "parameter = " << parameter << endl;
    outfile << "Circle :" << endl;
    outfile << endl;
    outfile << "Radius =" << radius << ", " << "area = " << area
             << "cirumferenece = " << circum << endl;

    outfile << "Name: " << firstname << " " << last
              << "age: " << static_cast<int>(regnum) << endl;

    outfile << "Beging balance = " << "$" << regnum2 << ","
             << " interest = " << " " << iterest << endl;

    outfile << "Balance at the end of mounth = "
            << static_cast<double>((0.035 * regnum2)/ 12 + regnum2) << endl;

    outfile << endl;
    chh = static_cast<int>(ch+1);
    outfile << "This character that comes after " << ch
             << " in the ASCII set is "
               << static_cast<char>(chh) <<endl;
    infile.close();
    outfile.close();

    return 0;


}
