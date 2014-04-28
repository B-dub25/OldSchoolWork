/*
Author: Brian Rundel
This program will calculate the largest number
*/

#include <iostream>

using namespace std;

double larg(double x, double y);
double thee(double x, double y, double z);

int main()
{
    double q,w,e;

    cout << "Enter three numbers to test out ";
    cin >> q >> w >> e;

    cout << "The numbers you entered are " << q << " "
         << w << " " << e << endl;
    cout << "The larger number of " << q << " and " << w
          << " is " << larg(q,w) << endl;
    cout << "The largest number of " << q << " " <<
         w << " " << e << " " << thee(q,w,e);

   return 0;
}

double larg(double x, double y)
{
    if (x >= y)
    {
        return x;
    }
    return y;
}

double thee(double x, double y , double z)
{
   return  larg(x,larg(z,y));
}
