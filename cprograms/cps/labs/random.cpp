/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(0));
    cout << rand() << "\n";
    //cout << rand() % 10000 * 111;
}
