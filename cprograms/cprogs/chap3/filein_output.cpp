//****************************************************
//
// Author: Brian Rundel
// This program shows how the file input output
// works. This uses the fstream header file to use
// the predefind function ifstream and ofstream
//****************************************************

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream indata;
    ofstream outdata;

    indata.open("file.txt");
    outdata.open("fix.bak");


    cout << indata << endl;
    cout << endl;
     outdata << indata << endl;
    indata.close();
    outdata.close();
    return 0;

}
