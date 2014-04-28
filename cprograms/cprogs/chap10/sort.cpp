/*
Author Brian Rundel
Created on:

*/

#include <iostream>


using namespace std;

const int SIZE = 10;

int main()
{
    int array[SIZE]{9,7,6,8,5,4,3,1,2,0};

    int temp;
    int i,x;
    int smallest;

    for(i=0; i<SIZE - 1;i++)
    {
        smallest=i; //0
        for(x=1+i;x<SIZE;x++)
          if(array[x] < array[smallest])
             smallest=x; //1

     temp = array[smallest];
     array[smallest] = array[i];
     array[i] = temp;

    }
   for(int r=0;r<SIZE;r++)
      cout << array[r];
    return 0;
}
