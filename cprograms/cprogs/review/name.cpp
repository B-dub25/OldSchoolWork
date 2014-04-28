/*
Author Brian Rundel

*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    double hours, payrate;
    double salary;

    cout << "Please enter your name ";
    getline(cin, name);
    cout << "Enter the hours worked ";
    cin >> hours;
    cout << "Enter you payrate ";
    cin >> payrate;


    cout << fixed << showpoint << setprecision(2);

    salary = hours * payrate;

    cout << left << setw(7) << "Name: "
         << name << endl;
    cout << left << setw(10) << "Pay Rate: "
         << "$" << payrate << endl;
    cout << left << setw(14) << "Hours Worked: "
         << hours << endl;
    cout << left << setw(9) << "Salary: "
         << "$"<< salary << endl;
    return 0;
}
