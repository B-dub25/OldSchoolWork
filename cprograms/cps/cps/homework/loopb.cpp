#include <iostream>
#include <fstream>

using namespace std;

int fileinfo(ifstream&,char,int&);
int second(ifstream&,char,char&,int&);
int calculate(char);

int main()
{
    ifstream infile;
    infile.open("numbers");
    int value = 0;
    int total = 0;
    char pek;
    char letters, secondset,option;

    fileinfo(infile,letters,total);
    while(infile)
    {

        pek = infile.peek();
        if ( pek == ' ')
        while(infile)
          second(infile,secondset,option,value);

        fileinfo(infile,letters,total);
    cout << total << endl;
    cout << value << endl;
    cout << option;

    }


    return 0;

}

int fileinfo(ifstream& infile, char letters,int& total)
{
    infile.get(letters);
    total += calculate(letters);
    return total;
}

int second(ifstream& infile, char secondset,char& option,int& value)
{
    infile.get(secondset);

       if (secondset == '+')
           option = '+';
       else if (secondset == '/')
           option = '/';
       else if (secondset == '*')
           option = '*';
       else if (secondset == '-')
           option = '-';
       else if (secondset == '%')
           option = '%';

       value +=calculate(secondset);
       return value;
}

int calculate(char letters)
{
    int value = 0;
    switch(letters)
    {
        case 'M':
                 value += 1000;
        break;
        case 'D':
                 value += 500;
        break;
        case 'C':
                 value += 100;
        break;
        case 'L':
                 value += 50;
        break;
        case 'X':
                 value += 10;
        break;
        case 'V':
                 value += 5;
        break ;
        case 'I':
                 value += 1;
        break;
        default:
                break;
    }
    return value;
}
