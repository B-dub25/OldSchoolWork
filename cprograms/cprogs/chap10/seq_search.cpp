/*
Author Brian Rundel


*/

#include <iostream>

using namespace std;

const int size = 10;
int main()
{

    int index = 0;
    int array[size]{3,4,5,6,7,8,9,10,11,12};
    bool triger = false;
    int search;
    cin >> search;
    while(!triger && index < size)
    {
        if(search == array[index])
             triger = true;
        else
           index++;
    }
    if(triger)
       cout << "Item found";
    else
       cout << "Not found";
    return 0;
}
