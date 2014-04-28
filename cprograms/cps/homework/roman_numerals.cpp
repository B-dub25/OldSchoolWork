/*
Author:Brian Rundel
Professor Phil Geyer
MP4 = Roman numberals
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


int firstset(ifstream& infile, char letters);
int secondset(ifstream& infile, char letters,char& operat); // to grab the letters
int roman(char num); //To convert the roman numerals to value.
void calcu(char operat,int& sum,int number,int number2);

int main()
{
    ifstream infile;
    infile.open("numbers");
    char first,operat;
    int sum;
    int value = firstset(infile,roman(first));
    int value2 = secondset(infile,roman(first),operat);

    cout << value << " " << value2 << endl;
    cout << operat << endl;
    calcu(operat,sum,value,value2);

    return 0;
}

int secondset(ifstream& infile, char letters,char& operat)
{
    int value = 0;
    char second;
    infile.ignore(100,' ');
    infile >> letters;
    while(infile)
    {
        value += roman(letters);

        if(letters == '+')
           operat = '+';
        else if (letters == '/')
           operat = '/';
        else if ( letters == '*')
           operat = '*';

        infile >> letters;
    }
      return value;
}

int firstset(ifstream& infile, char letters)
{
    int value = 0;
    infile.get(letters);

    while(infile)
    {
        value += roman(letters);
        if(letters == ' ')
        break;

        infile.get(letters);

    }
      return value;
}

int roman(char num)
{
    int number = 0;

    switch(num)
    {
        case 'M':
                 number += 1000;
        break;
        case 'D':
                 number += 500;
        break;
        case 'C':
                 number += 100;
        break;
        case 'L':
                 number += 50;
        break;
        case 'X':
                 number += 10;
        break;
        case 'V':
                 number += 5;
        break;
        case 'I':
                 number += 1;
        break;
        case ' ':
        break;

    }
        return number;
}
void calcu(char operat, int& sum, int value, int value2)
{
    switch(operat)
    {
        case '+':
                 sum = value + value2;
        break;
        case '-':
                 sum = value - value2;
        break;
        case '/':
                 sum = value / value2;
        break;
        case '*':
                 sum = value * value2;
        break;
        case '%':
                 sum = value % value2;
        break;
    }
     cout << sum << endl;
     int tepm = sum;
     int pwr = 0;

    while (tepm / static_cast<int>(pow(10.0,pwr)) >= 0 )
        {
          pwr++;
          int tenpwr = static_cast<int>(pow(10.0, pwr));
          //tepm = tepm % tenpwr;
          //cout << tepm <<":";
          //
          cout << tepm / tenpwr << endl;
          pwr = pwr - 2;
          tepm = tepm / tenpwr;
        }
}
