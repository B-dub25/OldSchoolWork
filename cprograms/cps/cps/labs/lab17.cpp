/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
const int SIZE = 20;
class info
{
    public :
            void store_info(string,string,int);
            void get_info(string&,string&,int&);
            int get_age(int&);
            info();
    private:
            string first_name;
            string last_name;
            int age;
};

info::info()
{
    first_name = "NONE";
    last_name = "NONE";
    age = 1000;
}

void info::store_info(string fir,string las,int ag)
{
    first_name = fir;
    last_name = las;
    age = ag;

    if(age < 0)
        cout << "Not even born yet\n";
    if(age >= 130)
        cout << "You're old\n";
}

void info::get_info(string& fir,string& las,int& ag)
{
    fir = first_name;
    las = last_name;
    ag = age;
}

int info::get_age(int& ag)
{
   ag=age;
   return ag;

}

void display(info ar[], int SIZE);
void fill(ifstream&,info ar[]);
void sort(info ar[],int s);

int main()
{
    info array[SIZE];
    ifstream infile;  infile.open("file");
    ofstream out;     out.open("outfile");

    fill(infile,array);
    display(array,SIZE);
    sort(array,SIZE);
    display(array,SIZE);

   return 0;
}

void sort(info ar[],int SIZE)
{
    int x = 0; int smallest;
    int y = 0; info temp; int ag;
    for(x=0;x<SIZE-1;x++)
    {
        smallest = x;//0
        for(y = 1+x;y<SIZE;y++)
         if(ar[y].get_age(ag) < ar[smallest].get_age(ag))
            smallest = y;//1

    temp = ar[smallest];
    ar[smallest] = ar[x];
    ar[x]=temp;
    }
}

void fill(ifstream& in,info arr[])
{
    string fi,las; int ag;
    char junk; int x = 0;
    in >> fi >> las >> ag;
    in.get(junk);
    while(in)
    {
        arr[x].store_info(fi,las,ag);
        x++;
        in >> fi >> las >> ag;
        in.get(junk);
    }
}

void display(info ar[],int SIZE)
{
    string fi_name,las_name; int age;

    cout << "The princes Bride cast members \n";
    for(int y = 0;y<SIZE-1;y++)
       {
         ar[y].get_info(fi_name,las_name,age);
         cout << left <<setw(11) << fi_name << " "
              << setw(10) << las_name
              << " " << age << "\n";
       }
    cout << endl;
}
