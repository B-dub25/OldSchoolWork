/*
Author: Brian Rundel
*/
#include <iostream>

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
    }//end of control loop
    for (int rows = 5; rows >= 0; rows--)
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
    }//end of control loop
}
