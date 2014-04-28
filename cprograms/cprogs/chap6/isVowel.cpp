/*
Author: Brian Rundel
This program will test if a character
is a vowel
*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool vowel(char c);

int main()
{
    char ch;
    cout << " Enter a letter ";
    cin >> ch;
    vowel(ch);
return 0;
}



bool vowel(char ch)
{
    int coutr = 0;
    while (vowel(ch) == true)
    {
        switch(toupper(ch))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'U':
            coutr++;
            return true;
            break;
            default:
            return false;
        }
      cin >> ch;
    }

}
