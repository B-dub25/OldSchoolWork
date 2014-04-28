/*
Autor: Brian Rundel
*/

#include <iostream>
#include <fstream>

using namespace std;

int firstinfo(ifstream& infile, char letters);
int secondinfo(ifstream& infile, char letters, char& option);
int convert(char numbers);
void calculate(char,int&,int,int);
int main()
{
    ifstream infile;
    int sum;
    char letters; char option;
    infile.open("numbers");

    int value = firstinfo(infile,letters);
    int value2 = secondinfo(infile,letters,option);
    calculate(option,sum,value,value2);
    cout << sum;
}

int firstinfo(ifstream& infile, char letters)
{
    int value = 0;
    infile.get(letters);

    while(infile)
    {

        value += convert(letters);
        infile.get(letters);
        if (letters == ' ')
            break;
    }
       return value;
}
//This will get the second set and it will place the operator in a variable
int secondinfo(ifstream& infile, char letters, char& option)
{
    int value = 0;
    infile.ignore(100,' ');
    infile >> letters;
    while(infile)
    {
        value += convert(letters);
        if (letters == '+')
            option = '+';
        else if (letters == '/')
              option = '/';
        else if (letters == '*')
              option = '*';
        else if (letters == '%')
              option = '%';
        else if (letters == '-')
             option = '-';

            infile >> letters;

    }

       return value;
}
int convert(char numbers)
{
    int value = 0;
    switch(numbers)
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
        default:
             break;
    }
    return value;
}
void calculate(char option, int& sum, int value,int value2)
{
    sum = 0;
    switch(option)
    {
        case '+':
                 sum = value + value2;
        break;
        case '*':
                 sum = value * value2;
        break;
        case '/':
                 sum = value / value2;
        break;
        case '-':
                 sum = value - value2;
        break;
        case '%':
                 sum = value % value2;
        break;
        default:
        cout << "Invalid " << endl;
        break;
    }
}
void diplay(int sum);
