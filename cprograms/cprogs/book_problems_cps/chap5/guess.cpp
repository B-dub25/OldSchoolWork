/*
number guessing game
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
    guessed = false;

    cout << num << endl;
    cout << "This program will play a number guessing game " << endl;
    cout << "You have a total of 5 guesses to get it right " << endl;
    cout << "Please enter your first guess: ";
    while (!guessed)
     {
         cin >> guess;

         if (guess < num )
         {
             cout << "You guessed to low ";
             cout << "Try again: ";

         }
         else if (guess == num )
         {
             cout << "You guessed right! ";
             guessed = true;

         }
         else
         {
            cout << "You guessed to high! Try again ";

         }
     }
    return 0;
}
