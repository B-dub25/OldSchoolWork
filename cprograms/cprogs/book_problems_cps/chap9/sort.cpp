#include <iostream>

using namespace std;

void init(int aray[],int&);
void add(int ar[],int&,int);
void subtract(int arra[],int&s);
void display(int a[],int);

const int MAX_SIZE = 30;

int main()
{
    int size = 20;
    int array[size];
    cout << "Elements in array \n";
    init(array,size);
    display(array,size);
    add(array,size,MAX_SIZE);
    cout << "Array after elements added \n";
    display(array,size);
    subtract(array,size);
    cout << "After deleting the elements \n";
    display(array,size);
    return 0;
}

void init(int arra[],int& s)
{
    for(int i = 0;i < s;i++ )
         arra[i] = (i + 1) * 5;
}

void display(int a[],int siz)
{
    for(int i = 0;i< siz; i++)
        cout << a[i] << " ";
    cout << '\n';
}

void add(int arr[],int& size_of,int max)
{

   int i = 0; int el;
   int static counter = 0;
   cout << "Enter a element to add ";
   cin >> el;

   i = size_of - 1;
   while(i >= 0 && el < arr[i] )
         {
             arr[i+1] = arr[i];
             i--;
         }

   arr[i+1] = el;
   size_of++;
   counter++;
   if(counter < 5)
      add(arr,size_of,max); // recursive function :-)
}

void subtract(int arra[],int& siz)
{
    int static counter = 0;
    int det; int i = 0;
    cout << "Enter numbers to delete ";
    cin >> det;

    while(i < siz && det != arra[i])
          i++;

    if(i >= siz)
      {
          cout << "Element not found!\n";
      }
      else
    while(i < siz - 1)
    {
        arra[i] = arra[i + 1];
        i++;
    }
  siz--;

  counter++;
  if(counter != 3)
      subtract(arra,siz);
}
