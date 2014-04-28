//**********************************************
//
// Author: Brian Rundel
// This it a number guessing game. This program
// uses stdclib for the random function, and it
// uses ctime to make sure a differnt seed is
// spoun everytime the program executes.
//**********************************************

#include <iostream>
#include <cstdlib>             // So we can use rand
#include <ctime>               // So we can generate a new number each time.

using namespace std;

int main()
{
    int num;
    int guess;
    bool isguessed;

    srand(time(0));
    num = rand() % 100;
    isguessed = false;

    while (!isguessed)
    {
        cout << "Enter your guess. " << endl;
        cin >> guess;
        if (guess == num)
        {
            cout << "Your guess is rght!!! "
                   << guess << " is " << num << endl;
            isguessed = true;
        }
        else if ( guess < num )
        {
            cout << "You guess too low. Try again.! "
                  << endl;
        }
        else
             cout << "Your guess was to high try again "
                   << endl;
    }
    return 0;
}
