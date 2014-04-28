//**********************************************
//
// Auhtor: Brian Rundel
// This program will caculate the grade of a
// student.
//**********************************************

#include <iostream>

using namespace std;

int main()
{
    int grade;

    cout << "enter your grade. ";
    cin >> grade;

    if (grade >= 90 )
    {
        cout << "Your grade is a A";
    }
    else if( grade >= 80 )
    {
        cout << "Your grade is a B";
    }
    else if (grade >= 70 )
    {
        cout << "Your grade is a C ";
    }
    else if ( grade >= 60 )
    {
        cout << "Your grade is a D";
    }
    else
    cout << "Your grade is a F";
  return 0;
}
