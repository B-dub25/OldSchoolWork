/*
Author Brian Rundel
Created on: Nov,15 1:17:00
lab 14 stuctures.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct type_rabbit
{
    string name;
    int iq;
    int carrots;
};
void sort_bunny(type_rabbit h[]);
void sort_iq(type_rabbit iq[]);
int main()
{
    type_rabbit hold;
    int x = 0; int iq_largest = 0;
    int smallest_carrots = 0;
    int smallest = 0; int largest = 0;
    ifstream infile;
    infile.open("rabbits");
    type_rabbit holder[6];
    type_rabbit thi;

    while(infile && x < 6)
    {
        infile>> thi.name >> thi.carrots>>thi.iq  ;
        holder[x] = thi;
        x++;
    }
   for(int i = 0;i < 6; i++)
         {
           cout << left<<setw(8)<<holder[i].name << setw(8) <<
               setw(4)<< right<< holder[i].iq <<setw(4)
               <<  right<<holder[i].carrots << endl;
          }
    for(int i = 0; i < 6;i++)
        {
            for(int x = i + 1;  x < 6;x++)
               {
                if( holder[x].iq < holder[smallest].iq)
                    smallest = x;
                if(holder[x].iq > holder[iq_largest].iq)
                    iq_largest = x;
                if(holder[x].carrots > holder[largest].carrots)
                    largest = x;
                if(holder[x].carrots < holder[smallest_carrots].carrots)
                   smallest_carrots = x;
               }
        }
        cout << "Highest iq " << holder[iq_largest].iq<<"\n";
        cout << "Smallest iq " << holder[smallest].iq<<"\n";
        cout << "Highest carrots " <<  holder[largest].carrots<<"\n";
        cout << "Lest amount of carrots " << holder[smallest_carrots].carrots;
        cout << endl;
        cout << "After sort by name \n";
        sort_bunny(holder);
        cout << endl;
        cout << "After iq sort\n";
        sort_iq(holder);

        return 0;

}
void sort_bunny(type_rabbit h[9])
{
    int k = 0;
    int y,g;
    string n;

    for(y = 0; y < 6; y++)
        {
            k = y;
            for(g = y+1;g<6;g++)
               if(h[g].name < h[k].name)
                     k=g;

     n=h[k].name;
     h[k].name = h[y].name;
     h[y].name = n;
        }

   cout << endl;
   for(int i = 0;i < 6; i++)
         {
           cout << left<<setw(8)<<h[i].name << setw(8) <<
               setw(4)<< right<< h[i].iq <<setw(4)
               <<  right<<h[i].carrots << endl;
          }
}
void sort_iq(type_rabbit iq[])
{
    int k = 0;
    int y,g;
    int temp;
    for(y = 0; y < 6; y++)
        {
            k = y;
            for(g = y+1;g<6;g++)
               if(iq[g].iq < iq[k].iq)
                     k=g;

     temp=iq[k].iq;
     iq[k].iq = iq[y].iq;
     iq[y].iq = temp;
        }

   cout << endl;
   for(int i = 0;i < 6; i++)
         {
           cout << left<<setw(8)<<iq[i].name << setw(8) <<
               setw(4)<< right<< iq[i].iq <<setw(4)
               <<  right<<iq[i].carrots << endl;
          }
}
