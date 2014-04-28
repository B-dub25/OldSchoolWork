/*
Author Brian Rundel

*/

#include <iostream>
#include <iomanip>

using namespace std;

const int ROWS = 10;
const int COLS = 8;

void populate(double ara[][COLS]);
void display(double ar[][COLS]);
void times_three(double a[][COLS]);
int largest(double arar[][COLS]);

int main()
{
    int la;

    double array[ROWS][COLS]{0};
    populate(array);
    times_three(array);
    array[5][6]=21.34;
    display(array);
    la = largest(array);
    cout << "The largest is " << la <<"\n";
    return 0;
}
void populate(double ara[][COLS])
{
    for(int r = 0; r < ROWS; r++)
    {
        for(int c = 0; c < COLS; c++)
              ara[r][c] = c + r;
    }
}
void display(double ar[][COLS])
{
    cout << fixed << showpoint << setprecision(2);
    for(int r = 0; r < ROWS; r++)
    {
        for(int c = 0; c < COLS; c++)
             cout << setw(7) << right << ar[r][c];
      cout << endl;
    }
}
void times_three(double a[][COLS])
{
    for(int r = 0; r < ROWS; r++)
    {
        for(int c = 0; c < COLS; c++)
                if(r == 2)
                   a[r][c] += c * 3;
    }
}
int largest(double arar[][COLS])
{
    double larg = 0;
    for (int r = 0; r < ROWS; r++)
        {
            for(int c = 0; c <= COLS; c++)
                if(larg < arar[r][c])
                    larg = arar[r][c];
        }
    return larg;
}
