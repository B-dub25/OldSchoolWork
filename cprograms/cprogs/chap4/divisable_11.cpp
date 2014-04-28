/*
Author: Brian Rundel
This progam will see if the number you
enter is divisible by 11

*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum,summ;
    int temp,temp2,temp3;
    int count = 0;
 cin >> num;
 temp = num;
    while ( temp > 0)
    {
       temp = temp / 10;
       count++;
    }

    cout << count << endl;
    for ( int i = 1 ; i <= count ; i++ )
    {
        temp = sum;
        sum = num % 10;
        num = num / 10;
        temp = num % 10;
        temp2 = num / 10;
        temp3 = temp;
        cout << sum << " " <<temp2 << " second num "<< temp3 << " " << i
              << " " << endl;


    }
    return 0;
}
