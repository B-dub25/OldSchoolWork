//*******************************************
//
// Author: Brian Rundel
// This program will convert a letter to its
// coresponding number.
//*******************************************

#include <iostream>

using namespace std;

const char sentinel = '#';
int main()
{
    char letter;




    while (letter != sentinel )
    {
         cout << "Enter # to exit program. " << endl;
         cout << "Enter a letter to convert "
               << "to its corresponding number. ";
         cin >> letter;

         if (letter >= 'A' && letter <= 'Z' )
         {
             switch(letter)
          {
             case 'A':
             case 'B':
             case 'C':
             cout << "The corresponding number to "
                   << letter << " is " << 2 << endl;
            break;
            case 'D':
            case 'E':
            case 'F':
            cout << "The corresponding number to "
                  << letter << " is " << 3 << endl;
            break;
            case 'G':
            case 'H':
            case 'I':
            cout << "The corresponding number to "
                  << letter << " is " << 4 << endl;
            case 'J':
            case 'K':
            case 'L':
            cout << "The corresponding number to "
                  << letter << " is " << 5 << endl;
            break;
            case 'M':
            case 'N':
            case 'O':
            cout << "The crresponding number to "
                  << letter << " is " << 6 << endl;
            break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            cout << "The corresponding number to "
                  << letter << " is " << 7 << endl;
            break;
            case 'T':
            case 'U':
            case 'V':
            cout << "The corresponding number to "
                  << letter << " is " << 8 << endl;
            break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            cout << "The corresponding number to "
                  << letter << " is " << 9 << endl;
            break;
         }

         }
         else if( letter != sentinel )
         cout << "Not a valid entry. Try agian. "
                << endl;
    }
    return 0;
}
