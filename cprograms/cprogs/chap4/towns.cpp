/*
Author : Brian Rundel
This program will calculate how many years
town A will take to be greater, then town B.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int townA,newpopA;
    int townB,newpopB;
    int counter = 1;
    double growthA,growthB;

    cout << "Enter the population of town A. ";
    cin >> townA;
    cout << "Enter the population of town B. ";
    cin >> townB;
    cout << "Enter growth rate of town A. ";
    cin >> growthA;
    cout << "Enter growth rate of town B. ";
    cin >> growthB;

    growthA = growthA / 100;
    growthB = growthB / 100;


    while (townA + newpopA <= townB + newpopB )
    {
        newpopA = townA * growthA * counter;
        newpopB = townB * growthB * counter;

     counter++;
    }
    townA = townA + newpopA;
    townB = townB + newpopB;
    cout << "It will take " << counter << " years "
          << "for town A to bypass town B,"
            << "at the current growth rate "<< endl;
    cout << "Town A has a population of " << townA << endl;
    cout << "Town B has a population of " << townB << endl;
return 0;
}
