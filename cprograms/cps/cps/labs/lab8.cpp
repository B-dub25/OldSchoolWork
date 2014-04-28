/*
Brian Rundel
CPS 171
*/

#include <iostream>
#include <fstream>

using namespace std;

int number(ifstream&,char&, int value);

int main()
{
    char letter;
    int value = 0;
    ifstream infile;
    ofstream out;
    infile.open("file3");
    out.open("outfile");
    infile.get(letter);
    while(infile)
      {
          cout << number(infile,letter,value);
          infile.get(letter);
      }
      return 0;
}
int number(ifstream& infile, char& letter, int val )
{
    switch(letter)
    {
        case 'A':
        case 'B':
        case 'C':
                  val = 2;

        break;
        case 'D':
        case 'E':
        case 'F':
                 val= 3;

        break;
        case 'G':
        case 'H':
        case 'I':
                 val = 4;

        break;
        case 'J':
        case 'K':
        case 'L':
                 val = 5;

        break;
        case 'M':
        case 'N':
        case 'O':
                 val = 6;

        break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
                 val = 7;

        case 'T':
        case 'U':
        case 'V':
                 val = 8;

        break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
                  val = 9;

        break;
    }
    return val;

}
