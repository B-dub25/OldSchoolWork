//*************************************************
//
// Author: Brian Rundel
// This program is used to compute the adverage of
// test scores that the user defines
//*************************************************

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double total,test1,test2,test3,test4;

    cout << "Please enter test score. ";
    cin >> test1;
    cout << "Enter score second score. ";
    cin >> test2;
    cout << "Enter the third score. ";
    cin >> test3;
    cout << "Enter the last score. ";
    cin >> test4;

    total = test1 + test2 + test3 + test4;
    printf ("The adverage is %.2f", total / 4 );

    return 0;

}
