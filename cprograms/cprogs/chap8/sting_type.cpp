/*
Author Brian Rundel

*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int alpha = 5;
    int beta = 10;

    alpha = alpha + 5;
    {
        int alpha = 20;
        beta = beta + 5;

    }
    cout << alpha << " " << beta;
return 0;
}
