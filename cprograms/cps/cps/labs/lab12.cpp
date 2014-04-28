/*

*/

#include <iostream>

using namespace std;

const int MAX = 30;
int size = 20;

int add_element(int a[],int&);
int display(int d[],int);
int delete_element(int r[],int&);

int main()
{

    int array[size];
    for(int i = 0;i < size; i++)
        array[i] = (i + 1) * 5;
    add_element(array,size);
    add_element(array,size);
    add_element(array,size);
    add_element(array,size);
    add_element(array,size);
    display(array,size);
    delete_element(array,size);
    delete_element(array,size);
    delete_element(array,size);
    delete_element(array,size);
    display(array,size);

    return 0;
}
int add_element(int arr[],int& ma)
{
    int i = ma -1; // set the counter to one less then the size of the array
    int el; // declairing the new element

    cout << "Enter a element to add ";
    cin >> el; // entering a number to incert a new element
    // while i is more the 0 and the array element is larger then the new element
    while(i >= 0 && el < arr[i])
       {
           arr[i+1] = arr[i]; // add the element to the array index plus one
           i--; // take away of the counter until the element
       }

    arr[i+1] = el; //
    ma++;

   return 0;
}
int display(int ar[],int s)
{
    for (int i = 0; i < s; i++)
         cout << ar[i] << " ";
    return 0;
}
int delete_element(int e[],int& el)
{
    int del;
    cout << "\n";
    cout << "Enter numbers to delete ";
    cin >> del;

    int i = 0;
    while(i < el && del != e[i])
       i++;
    if(i >= el)
       cout << "Element not fount\n";
    else
    {
        el -= 1;
        for(i;i < el ; i++)
            e[i] = e[i+1];
    }

    return 0;
}
