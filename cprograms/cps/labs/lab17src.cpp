/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "labs.h"
#include "labs17.cpp"

using namespace std;

void display(info ar[], int SIZE);
void fill(ifstream&,info ar[],int& x);
void sort(info ar[],int s);
const int SIZE = 20;
int main()
{
    info array[SIZE];
    ifstream infile;  infile.open("file");
    ofstream out;     out.open("outfile");
    int x = 0;
    fill(infile,array,x);
    display(array,x);
    sort(array,x);
    display(array,x);

   return 0;
}

void sort(info ar[],int size)
{
    int x = 0; int smallest;
    int y = 0; info temp; int ag;
    for(x=0;x<size;x++)
    {
        smallest = x;//0
        for(y = 1+x;y<size;y++)
         if(ar[y].get_age(ag) < ar[smallest].get_age(ag))
            smallest = y;//1

    temp = ar[smallest];
    ar[smallest] = ar[x];
    ar[x]=temp;
    }
}

void fill(ifstream& in,info arr[],int& x)
{
    string fi,las; int ag;
    char junk; //int x = 0;
    in >> fi >> las >> ag;
    in.get(junk);
    while(in)
    {
        arr[x].store_info(fi,las,ag);
        in >> fi >> las >> ag;
        in.get(junk);
        x++;
    }
}

void display(info ar[],int size)
{
    string fi_name,las_name; int age;

    cout << "The princes Bride cast members \n";
    for(int y = 0;y<size;y++)
       {
         ar[y].get_info(fi_name,las_name,age);
         cout << left <<setw(11) << fi_name << " "
              << setw(10) << las_name
              << " " << age << "\n";
       }
    cout << endl;
}
