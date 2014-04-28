#include <iostream>

using namespace std;

int main()
{
    int num,sum;
    cout << "Enter a number ";
    cin >> num;

    while (num > 0 )
    {
        sum = num % 10;
        num = num / 10;
        cout << sum;
    }
  return 0;
}
