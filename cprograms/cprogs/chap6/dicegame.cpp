//*******************************************
//
// Author: Brian Rundel
// The dice game
//*******************************************

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dieroll(int num );

int main()
{
    int num;
    cout << "Get ready for the dice game!!!! "
           << "Enter a number to try to reach.";
    cin >> num;
    cout << "It took " << dieroll(num) << " to reach your "
           << "goal" << endl;
    return 0;
}


int dieroll(int num)
{
    srand(time(0));

      int sum = 0;
      int counter = 0;
      int die1;
      int die2;

    do
    {
     die1 = rand() % 6 + 1;
     die2 = rand() % 6 + 1;
     cout << die1 << " " << die2 << " " ;
     sum += die1 + die2;
     counter++;
     if (sum == num )
     {
         break;
     }
    }
  while (num >= sum );
  cout << "     sum>>>" << sum;
return counter;
}
