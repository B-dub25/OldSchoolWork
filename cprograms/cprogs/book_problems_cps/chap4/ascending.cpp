/*
Author: Brian Rundel
This program will prompt a user for 3 numbers and then
output them in ascending order
*/

#include <iostream>

using namespace std;

int main()
{
    int num,num2,num3;

    cout << "Enter three numbers ";
    cin >> num >> num2 >> num3;

    if (num > num2 && num3 > num2)
    {
        cout << num2 << " " << num << " " << num3;
    }
    else if (num < num2 && num3 > num2 )
    {
        cout << num << " " << num2 << " " << num3;
    }
   else if (num > num2 && num > num3)
   {
       cout << num3 << " " << num2 << " " << num;
   }
return 0;
}
