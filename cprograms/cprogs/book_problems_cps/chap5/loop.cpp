#include <iostream>

using namespace std;

int main()
{
    int num, sum, newnum;
    sum = 0;
    cin >> num;

    do
    {

       sum = num % 10;
       num = num / 10;
       cout << sum << ":";
       cout << endl;
    }
    while (num > 0);
     //cout << sum;
     return 0;
}
