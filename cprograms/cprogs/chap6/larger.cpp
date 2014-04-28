/*
Author: Brian Rundel
This program shows how user defined
functions work.
*/

#include <iostream>

using namespace std;

double larger(double x, double y);
double three(double x, double y, double z);

int main()
{
    double num,num1,num2;

    cout << "Enter three numbers ";
    cin >> num >> num1 >> num2;

    cout << "The larger number of " << larger(num,num1)
          << endl;
    cout << "The larger number of " << larger(num1, num2)
          << endl;
    cout << "The larger number between all is "
           << three(num,num1,num2) << endl;

    return 0;
}
double larger(double x,double y)  // user defined functions don't need to be int`ed
 {
     if ( x >= y)
     {
         return x;
     }
     return y;
 }

double three(double x, double y, double z)   // this function calls the larger function to get the result.
 {
     return larger(x , larger(y,z));
 }
