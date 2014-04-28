//****************************************
//
// Author : Brian Rundel
// For looping structure
// ***************************************

#include <iostream>

using namespace std;

const int N = 20;

int main()
{
    int counter,number;
    int zeros = 0;
    int odds = 0;
    int evens = 0;

    cout << "Please enter 20 integers. ";

    for (counter = 1; counter <= N; counter++ )
      {

      cout << "Enter a number. ";
      cin >> number;
      cout << number << " ";
      switch(number % 2)
      {
          case 0:
          evens++;
           if (number == 0)
               zeros++;
          break;
          case 1:
          case -1:
          odds++;
          break;
          case 2:
          evens++;
          break;
          default:
          cout << endl;
      }

      }
        cout << "There are " << zeros << " zeros" << endl;
        cout << "There are " << odds << " odds " << endl;
        cout << "There are " << evens << " evens " << endl;
        return 0;
}
