/*
Author: Brian Rundel;
This program will play a number guessing game.
if you guess right it will let you know, if
wrong it will let you know if your to high or
low.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    int num;
    int guess;
    bool guessed;

    srand(time(0));
    num = rand() % 100;

    cout << num << endl;
    cout << "This program will play a guessing game with you " << endl;

        guessed = false;
    cout << "Enter a number between 0 - 100 ";

    while(!guessed)
    {
         cin >> guess;
        if (guess == num )
        {
            cout << "You guessed right ";
            guessed = true;
        }
        else if (guess < num )
             {
            cout << "You guessed to low "
                  << "try again " << endl;
             }
        else

            cout << "You guessed to high try again" << endl;

    }

        return 0;
}
