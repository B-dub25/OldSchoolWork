/*
Author Brian Rundel
CPS 171 Tuesday/Thursday class
This program takes as input a name, hours worked
and then outputs the salary of the person
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void getname(string& name );
void salary(double& payrate, double& hours_worked, double& pay);

int main()
{
    //Declair the variables for the functions
    double payrate;
    double hours_worked;
    double pay;
    string name;

    cout << fixed << showpoint << setprecision(2);

    getname(name);
    salary(payrate,hours_worked,pay);

    cout << "Name: " << name << endl;
    cout << "Pay Rate: " <<"$" << payrate << endl;
    cout << "Hours worked: " << hours_worked << endl;
    cout << "Salary: " << "$" << pay;
    return 0;

}

//get the employee name
void getname(string& name )
{
    cout << "Enter employee name ";
    getline (cin,name);

}

// function to calculate the salary
void salary(double& payrate, double& hours_worked,double& pay )
{
    cout << "Enter employee payrate. ";
    cin >> payrate;
    //cout << endl;
    cout << "Enter the hours worked ";
    cin >> hours_worked;
    pay = payrate * hours_worked;
}
