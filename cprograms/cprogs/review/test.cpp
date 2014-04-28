#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

int main()
{
    int a ,b;
    int j =0;
    a = 5;
    b = 8;
    for (int i = a; i <= b; i++)
         {
         j = j + i;
        // cout << j<<": ";
        cout << i << " ";
         }
   // cout << j << " ";
    return 0;
}
