/*
Author Brian Rundel
Created on:

*/

#include <iostream>
#include <string>

using namespace std;

class testing
{
    public:
           void print() const;
           void set(string,string,int);
           void search(const testing,string);
           testing();
   private:
           string first;
           string last;
           int age;
};
testing::testing()
{
    first = " ";
    last = " ";
    age = 0;
}
void testing::print() const
{
    cout << first << " " << last << age<<"\n";
}
void testing::set(string fir,string las, int ag )
{
    first = fir;
    last = las;
    age = ag;
}
void testing::search(const testing fir, string searchitem)
{
        if(fir.first == searchitem)
            cout << fir.first;
        else
            cout << searchitem << " Not found \n";
}
int main()
{
    testing array[2];
    string fir,las,sear;
    int ag;
    string in;

    for(int x = 0; x < 2;x++)
        {
         cin >> fir>>las>>ag;
         array[x].set(fir,las,ag);
        }
    cin >> sear;
        for(int x = 0; x < 2;x++)
        array[x].search(array[x],sear);
}

