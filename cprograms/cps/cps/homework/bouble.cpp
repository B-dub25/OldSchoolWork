/*
Author Brian Rundel


*/

#include <iostream>
using namespace std;
const int SIZE = 10;

int main()
{
    int array[SIZE]{9,5,7,8,3,10,19,11,4,1};
    int index;
    int location;
    int smallest;
    int temp;

    for(index = 0; index < SIZE - 1; index++)
       {
           smallest = index;
           for (location = index + 1; location < SIZE; location++)
                if(array[location] < array[smallest])
                    smallest = location;

        temp = array[smallest];
        array[smallest] = array[index];
        array[index] = temp;
       }
       for(int i = 0; i < SIZE; i++)
           cout << array[i] << " ";

    return 0;
}
