#include <iostream>

using namespace std;

int main()
{
    int num;
    int thou,hund,fifty,ten,one;

    cin >> num;

    if (num > 1000)
        {
        thou = num / 1000;
        num = num % 1000;
        hund =num / 100;
        num = num % 100;
        if (num > 50)
        {
        fifty = num / 50;
        num %= 50;
        }
        num = num / 10;
        }
        cout << thou << ":" << hund << ":" << fifty
             << ":" << num;
    return 0;
}
