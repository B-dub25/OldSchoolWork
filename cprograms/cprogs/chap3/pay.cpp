// This will compute the your pay for the hours you work
// Brian Rundel

#include <iostream>
#include <stdio.h>

using namespace std;
      int main()
      {
        char answer;
        float hours,pay,payn,overtime,overpay;
        float bi;
          cout << "Enter the hours you work per week. ";
          cin >> hours;
          cout << "Now enter your pay rate. ";
          cin >> pay;
          cout << "Do you get payed every bi-week?(y=yes\n=no) ";
          cin >> answer;

          if ( hours > 40 )
          {
           cout << "you worked over time. And your gross is ";
           overtime = hours - 40 ;
           overpay = .5 * pay + pay * overtime;

          }

    if ( answer == 'y' )
        {
        bi = 2 * (hours  * pay );  // If you get paid every two weeks then we need to caculate differently
        cout << " Your gross pay is " << bi + overpay ;
        }
        else
        if ( answer == 'n')
        {
            payn = pay * hours;
            cout << payn + overpay;
        }
      return 0;
      }
