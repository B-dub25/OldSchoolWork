/*
Author Brian Rundel
Lab 4
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int first,second;
    ifstream infile;
    infile.open("file");

    infile >> first >> second;

    while (infile)
    {

        if (first > second)
            cout << first << " is bigger then " << second << endl;
        else if (first < second)
            cout << second <<" is bigger then " << first << endl;
        else
            cout << "The numbers are the same" << endl;

        infile >> first >> second;
    }

    infile.close();
    return 0;

}
