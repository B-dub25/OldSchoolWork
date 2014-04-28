#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    int i;
    cin >> a;
    for (i = 1 ;i <= 3; i++)
    {
        cin >> a;
        b += a;
    }
    cout << b;
    return 0;
}
