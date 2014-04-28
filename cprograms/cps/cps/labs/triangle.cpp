/*
Auhtor: Brian Rundel
CPS 171 /9/13/12
Professor Phil Geyer

*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;

    infile.open("data");
    outfile.open("out");


    int a, b ,c ;

    infile >> a >> b >> c;

    if (a < b+c && b < a+c && c < a+b)
    {
        if ( a == b && b == c )
        outfile << "Its a equilateral " << endl;

          else if ( a == c || b == c || a == b)
               outfile << "Its a Iso triangle " << endl;
        else

        outfile << "Its a scalene " << endl;
    }
    else
    outfile << " Not a triangle " << endl;

    return 0;
}
