/*
Author Brian Rundel

Lab 5

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    for (int rows = 0; rows <= 5; rows++)
        {
            for (int spaces = 5; spaces >= rows; spaces--)
            {
                cout << " ";
            }
            for (int stars = 0; stars <= (rows * 2); stars++)
            {
                cout << "*";
            }
           cout << endl;
        }
     for (int row = 5; row >= 0; row--)
         {
             for (int space = 5; space >= row; space--)
                  {
                      cout << " ";
                  }
             for (int star = 0; star <= (row * 2); star++)
                 {
                     cout << "*";
                 }
             cout << endl;
         }
    return 0;
}
