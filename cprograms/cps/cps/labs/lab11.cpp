/*
Author Brian Rundel

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const int MAX = 50;

int main()
{
    double array[MAX];
    double larger;
    int position ;
    int i = 0;
    int x = 0;
    int bigger;
    cout << fixed << showpoint << setprecision(1);

    for (i = 0; i < MAX / 2 ; i++)
         {

           array[i] = pow(i,2.0);
         }

    for (x = MAX / 2; x < MAX; x++)
        {
           array[x]= x * 3;
        }
    for (x = 0; x < MAX -1; x++)
    {
        if(x % 8 == 0)
             cout << endl;
         else
         cout << right << setw(6) << array[x] << " ";

    }


     for (x = 0; x < MAX - 1; x++)
    {
        bigger = x;

        for (i = x + 1; i < MAX; i++)
        {
            if(array[bigger] > array[i])
                  {
                  position = x;
                  larger = array[bigger];
                  }

        }
    }
    cout << "The largest is " << larger << " at " << position;
    return 0;
}
