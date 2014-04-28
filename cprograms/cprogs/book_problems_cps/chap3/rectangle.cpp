/*
Author Brian Rundel
This program will get the input from a file and
display the length, width , and parameter of a rectangle.
For a circle it will display the radius, area and circumference
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

const double PI = 3.1416;
int main()
{

    double length,width,parameter,radius,area,circumference,interest;
    int age,income; double newint; char ch;
    ifstream infile;
    string first,last;

    infile.open("data");
    cout << fixed << showpoint << setprecision(2);
    // Get the information
    infile >> length >> width >> radius;
    infile >> first >> last >> age;
    infile >> income >> interest;
    infile >> ch;
    // Rectangle
    cout << "Rectangle: " << endl;
    cout << "Length = " << length << " width = " << width
         << " area = " << length * width << " circumference = "
         << (length * 2) + (width * 2) << endl;
    //Circle
    cout << "Circle: " << endl;
    cout << "Radius = " << radius << " area = "
         << pow(radius,2) * PI << " circumference = " << (radius * 2) * PI << endl;
    //Output the name and such
    cout << "Name: " << first << " " << last << "," << " age " << age << endl;
    newint = (interest / 100) / 12;
    cout << "Beginning balance = " << income << " interest rate = " << interest
           << endl;
    cout << "Balance at end of the month " << (newint * income) + income << endl;

    cout << "The character that after " << ch << " in ASCII set is B" << endl;
    infile.close();

    return 0;

}
