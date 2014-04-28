/*
Author Brian Rundel
Created on:

*/

#include <iostream>


using namespace std;

const int SIZE = 11;

int main()
{
    int array[SIZE]{2,10,17,45,49,55,68,85,92,98,110};
    int first = 0;
    int last = SIZE - 1;
    int mid = (last + first) / 2;
    int search;
    bool found = false;
    cin >> search;

    while(first <= last  &&!found)
    {
        mid = (last + first) / 2;
        if(array[mid] < search)
            first = mid + 1;
        else if (array[mid] > search)
             last = mid - 1;
        else
             found = true;

    }
    if(found)
       cout << "Item found "
            << array[mid];
    return 0;
}
