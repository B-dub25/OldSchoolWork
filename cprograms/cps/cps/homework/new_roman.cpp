/*
Author: Brian Rundel
CPS 171:
*/

#include <iostream>
#include <fstream>

using namespace std;

int get_roman(ifstream&, char);
int convert(char);
char options(char letters,char& opt);
void calculate(char,int,int,int&);
void new_roman(int,int,char,int&);

int main()
{
    ifstream infile;
    infile.open("numbers");
    char roman,opt;
    int sum = 0;
    int value1 = 0;
    int value2 = 0;

    infile >> roman;
  while(infile)
  {

       if (roman == ' ' && value1 != 0)
          while(infile)
           {

             if(roman == '\n') // this is a new line now so need to put the void in here
              {
                 calculate(opt,value1,value2,sum); // This void will calculate the sum.

                 new_roman(value1,value2,opt,sum); //Place void here for printing the original roman numerals and then converting the sum.
                 //After reset the values so they can recalculate for the next line.
                 value1 = 0; // this is to reset the value after the new line
                 value2 =0; // this does the same
                 break;
              }
             else // Goes with the if roman == a new line.
             options(roman,opt); // this gets the operator and stores it.
             value2 += get_roman(infile,roman); //add the value of the second set of the values.
             infile.get(roman);


           } //End of second while loop.
        else//Goes with the if roman is a space.
            value1 += get_roman(infile,roman); // add the value for the first set of numerals
            infile.get(roman);


  } //End of first while loop.
    return 0;
}
int get_roman(ifstream& infile,char letters)
{

    return convert(letters);
}

int convert(char letters)
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
        default:
                break;
        break;
    }
    return value;
}
char options(char letters,char& opt)
{
    if (letters == '+' )
        opt = '+';
    else if (letters == '/')
        opt = '/';
    else if (letters == '*')
        opt = '*';
    else if (letters == '%')
        opt = '%';
    else if (letters == '-')
        opt = '-';

   return opt;

}
void calculate(char option,int value,int values,int& total)
{
   switch(option)
   {
       case '+':
                total = value + values;
       break;
       case '-':
                total = value - values;
       break;
       case '*':
                total = value * values;
       break;
       case '/':
                total = value / values;
       break;
       case '%':
                total = value % values;
       break;

   }
}

void new_roman(int first,int second,char opt,int& total)
{
    int temp = first;
    int temp2 = second;
    cout << "The first set ";
        for(int i = 0; i < first / 1000; i++)
            cout << 'M';
            first = first % 1000;

        for(int i = 0; i < first / 500; i++)
             cout << 'D';
             first = first % 500;

        for(int i = 0; i < first / 100; i++)
            cout << 'C';
            first = first % 100;

        for(int i = 0; i < first / 50;i++)
             cout << 'L';
             first = first % 50;

        for (int i =0; i < first / 10;i++)
             cout << 'X';
             first = first % 10;

        for (int i = 0; i < first / 5; i++)
             cout << 'V';
             first = first % 5;

        for(int i = 0; i < first; i++)
             cout << 'I';

    cout << " " << "(" << temp << ")." << endl;
    cout << "The second set ";

        for(int i = 0; i < second / 1000; i++)
            cout << 'M';
            second = second % 1000;

       for(int i = 0; i < second / 500; i++)
            cout << 'D';
            second = second % 500;

       for(int i = 0; i < second / 100; i++)
            cout << 'C';
            second = second % 100;

       for(int i = 0; i < second / 50;i++)
          cout << 'L';
          second = second % 50;

       for (int i =0; i < second / 10;i++)
            cout << 'X';
            second = second % 10;

       for (int i = 0; i < second / 5; i++)
             cout << 'V';
             second = second % 5;

      for(int i = 0; i < second; i++)
            cout << 'I';

    cout << " (" << temp2 << ")." << endl;
    cout << "The operator is  " << opt << endl;
    cout << "The result is ";

    int temp_sum = total;

    for(int i = 0; i < total / 1000;i++)
        cout << 'M';
        total = total % 1000;
    for (int i = 0; i < total / 500; i++)
         cout << 'D';
         total = total % 500;
    for (int i = 0; i < total / 100;i++)
         cout << 'C';
         total = total % 100;
    for (int i = 0; i < total / 50;i++)
         cout << 'L';
         total = total % 50;
    for (int i = 0; i < total / 10;i++)
         cout << 'X';
         total = total % 10;
    for(int i = 0; i < total / 5; i++)
         cout << 'V';
         total = total % 5;
    for (int i = 0; i < total / 1; i ++)
         cout << 'I';
         total = 0; // reset sum to zero

    cout <<  "( " << temp_sum << " )." << endl;

    for (int i = 0; i < 50; i++)
        cout << "*";
    cout << endl;
    cout << endl;

}
