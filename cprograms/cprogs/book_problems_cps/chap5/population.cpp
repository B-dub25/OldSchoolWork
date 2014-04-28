/*
Author: Brian Rundel
This program will take as input the
population of two towns and will deturmine
how long it will take the first town to
become larger the the second town
*/

#include <iostream>

using namespace std;

int main()
{
    int town_A, town_B;
    int years = 0;
    double percent_a = 0.04; double percent_b = 0.02;

    cout << "Enter the population for town A ";
    cin >> town_A;
    cout << "Enter the population of town B ";
    cin >> town_B;

    while (town_A < town_B)
    {

        town_A += (percent_a * town_A);
        town_B += (percent_b * town_B);
        years++;
    }

    cout << "It will take Town A " << years
         << " years to become larger then town B " << endl;
    cout << "The ending population for town A " << town_A << endl;
    cout << "The ending population for town B " << town_B << endl;
     return 0;
}
