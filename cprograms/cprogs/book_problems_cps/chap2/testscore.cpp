/*
Author: Brian Rundel
Average test score
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double score1, score2, score3;

    cout << "Enter three test scores ";

    cin >> score1 >> score2 >> score3;

    cout << (score1 + score2 + score3 ) / 3.0;
    return 0;

}
