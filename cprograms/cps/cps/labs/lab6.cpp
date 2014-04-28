/*
Author: Brian Rundel
lab 6
*/

#include <iostream>
#include <iomanip>
using namespace std;

int sum(int num,int num2,int num3);
double average(int aver );

int main()
{
    cout << fixed << showpoint << setprecision(2);
    int num, num2,num3;
    int aver;
    cout << "Enter three numbers ";
    cin >> num >> num2 >> num3;
    cout << "The total is " << sum(num,num2,num3) << endl;
    cout << average(sum(num,num2,num3));



    return 0;

}

int sum(int num, int num2,int num3)
{
    int total;
    total = num + num2 + num3;

    return total;
}
double average(int aver)
{
    return aver / 3.0;
}
