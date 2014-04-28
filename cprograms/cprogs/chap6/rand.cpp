/*
Author: Brian Rundel
The dice game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(int num);

int main()
{
    int num;
    cout << "Enter a number to see how may rolls it takes ";
    cin >> num;
    cout << " It took " << rollDice(num);
    return 0;
}






int rollDice(int num)
{
    int dice1;
    int dice2;
    int sum;
    int rollcount;

    srand(time(0));

    do
    {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        rollcount++;

    }
    while( sum != num);
    return rollcount;
}
