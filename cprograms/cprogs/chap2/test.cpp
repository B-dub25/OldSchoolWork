//*******************************************************************
//
// Author: Brian Rundel
// This program will convert feet and inches into centimeters
// That the user will input into the program
//
//*******************************************************************


#include <iostream>      // Thats so we can use cout cin

using namespace std;     // So we can use the idenifiers declared in iostream like cin,cout and endl without the std:: prefix

int main()               // If there is only one function it has to be main
{
     int feet, inches, totalInches;
     double totalCent;
     const double centimeters = 2.54;         // centimeters need to stay the same so we make it constant

      cout << "Please provide the feet to convert. ";
      cin >> feet;
      cout << "Please provide the inches that are included in the feet. ";
      cin >> inches;

      totalInches = (12 * feet ) + inches;
      totalCent = centimeters * totalInches;
      cout << "The total inches in " << feet << " feet";
      cout << ", " << inches << " inches";
      cout << " is " << totalInches << endl;
      cout << "The total centimeters is " << totalCent << endl;

      return 0;
}
