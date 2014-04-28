/*
Author: Brian Rundel
This program will calculate the how many boxs
of cookies and containers it will take to ship
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int BOXES = 24; const int CONTAINERS = 75;

int main()
{
    int cookies, box , contain;
    int leftover;
    cout << "Enter the number of cookies produced ";
    cin >> cookies;

    box = cookies / BOXES;
    leftover = box % CONTAINERS;

    if ( box > 75 )
    {
        contain = box / CONTAINERS;

      cout << contain << " containers are needed to ship "
            << box << " boxes ";
      if (leftover > 0 )
      cout << " with " << leftover
           << " boxes of cookies left over ";
      else
      cout << "There is no left overs ";
    }
    else
    {
        cout << "There is not enough boxes to fill a container ";
    }

  return 0;
}
