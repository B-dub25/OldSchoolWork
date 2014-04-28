/*
Brian Rundel
lab 7
*/
#include <iostream>
#include <fstream>

using namespace std;

void numbers(ifstream&,int&,int&,int&);
void triangle(int, int, int, ofstream&);

int main()
{
    ifstream infile;
    infile.open("file2");
    ofstream out;
    out.open("fileout");
    int a, b, c;

    numbers(infile,a,b,c);
    cout << a << " " << b << " " << c << endl;
    triangle(a,b,c,out);
    return 0;
}
void numbers(ifstream& infile,int& a,int& b,int& c)
{
    infile >> a >> b >> c;
}

void triangle(int a,int b,int c,ofstream& out)
{

   if (a < b+c && b < a+c && c < a+b)
      {
        if ( a == b && b == c )
         out << "Its a equilateral " << endl;

          else if ( a == c || b == c || a == b)
               out << "Its a Iso triangle " << endl;
        else

        out << "Its a scalene " << endl;
    }
    else
    out << " Not a triangle " << endl;
}
