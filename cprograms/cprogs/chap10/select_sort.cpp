/*
Author Brian Rundel
Created on:

*/

#include <iostream>


using namespace std;

const int SIZE = 10;

int main()
{
    int array[SIZE]{36,55,17,35,63,85,12,48,3,66};
    int temp;
    int smaller;
    int i,x;
    for(i = 0; i < SIZE - 1; i++)
    {
        smaller = i;
        for(x = i+1;x<SIZE;x++)
            if(array[x] < array[smaller])
                smaller = x;

    temp = array[smaller];
    array[smaller] = array[i];
    array[i] = temp;
    }
    for(int f = 0; f < SIZE; f++)
        cout << array[f] << " ";
    return 0;

}
