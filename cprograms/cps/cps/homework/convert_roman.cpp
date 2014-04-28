/*
Author: Brian Rundel
This will read in from a file that contains characters
represent roman numerals and a operator at the end of
the line and proform the needed operation
*/

#include <iostream>
#include <fstream>

using namespace std;

int numbers(ifstream&,char,int&,int&);
int calculate(char);
void translate(int&,int&);
int main()
{
    ifstream infile;
    infile.open("numbers");
    char firstset, secondset;
    char option;
    int firstvalue = 0;
    int secondvalue = 0;

    while(infile)
    {
       numbers(infile,firstset,firstvalue,secondvalue);
       cout << firstvalue << endl;
       cout << secondvalue;
       //translate(firstvalue,secondvalue);
    }

    return 0;
}

int numbers(ifstream& infile,char letters,int& value, int& val)
{
    //int value = 0;
    infile >> letters;
    while(infile)
    {

        if (letters == ' ')
             while(infile)
               {
                 infile.get(letters);
                 val += calculate(letters);
                 if (letters == '\n')
                     break;

               }
        else
            value += calculate(letters);
            infile.get(letters);

    }

   return value;
}

int calculate(char letters)
{
    int value = 0;
    switch(letters)
    {
        case 'M':
                 value = 1000;
        break;
        case 'D':
                 value = 500;
        break;
        case 'C':
                 value = 100;
        break;
        case 'L':
                 value = 50;
        break;
        case 'X':
                 value = 10;
        break;
        case 'V':
                 value = 5;
        break;
        case 'I':
                 value = 1;
        break;
        case ' ':
                 break;
        default:
        break;
    }
      return value;
}
void translate(int& stuff,int& numb)
{
    int number;
    int five;
    int hundred;
    int fifty;
    int tens;

    if(stuff > 1000)
      {
        number  = stuff / 1000;
        stuff = stuff % 1000;
      }
    if(stuff >= 500 && stuff < 1000)
    {
        five = stuff / 500;
        stuff = stuff % 500;
    }
    if ( stuff > 50 && stuff < 500)
       {
           hundred = stuff / 100;
           stuff = stuff % 100;
       }
    if (stuff >= 50 && stuff < 100 )
       {
          fifty = stuff / 50;
          stuff = stuff % 50;
       }
    if (stuff < 50 )
       {
          tens = stuff / 10;
          stuff = stuff % 10;
       }

}
