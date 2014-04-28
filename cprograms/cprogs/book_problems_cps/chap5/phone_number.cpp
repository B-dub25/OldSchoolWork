/*
Author: Brian Rundel
This program will ask for a phone number and out
put the approperate characters for the numbers entered
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
   cout << fixed << setprecision(0);
   int p, num, newnum, temp;
   cin >> num;
   temp = num;
   p = 4;
   num = num / pow(10,p);
   num = num % pow(10,p);
   cout << num << " ";
   cout << num / pow(10,p);


   return 0;
}
