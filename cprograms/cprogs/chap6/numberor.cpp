/*
Author : Brian Rundel
This program will calculate the number of odd and even numbers

*/

#include <iostream>

using namespace std;

void getnumber(int& num);
void classify(int number, int& zerro, int& even, int& odd);
void printout(int zerro, int even, int odd);

int main()
{
    int number;
    int zerro = 0;
    int even = 0;
    int odd = 0;

    cout << "Enter 20 integers to classify if they are, "
            << " odd, even or zerro ";
    int N = 20;
    for ( int i = 1; i <= N; i++ )
    {
        getnumber(number);
        classify(number,even,zerro,odd);
    }
    printout(even,zerro,odd);
    return 0;
}


void getnumber(int& num)
{

    cin >> num;
}

// TODO (brian#1#): FIX the zerros countvoid classify(int num, int& even, int& zerro, int& odd  )
{
    switch(num % 2)
    {
        case 0:
        even++;
           if (num == 0)
           zerro++;
        break;
        case 1:
        case -1:
        odd++;
        break;

    }
}

void printout(int even, int zerro, int odd)
{
    cout << "There is " << even << " " <<  zerro
             << " evens including zerros." << endl;
    cout << "There is " << odd << " odd numbers ";
}
