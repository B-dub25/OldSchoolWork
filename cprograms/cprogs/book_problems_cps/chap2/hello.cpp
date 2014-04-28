/*
Author : Brian Rundel
CPS 171 Tuesday / Thursday class.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("output");
    out << "hello world!!! this is Brian Rundel";

    cout << "Hello World!!! This is Brian Rundel";

    out.close();

    return 0;
}
/*
This will output and put it in a file.
Hello World!!! This is Brian Rundel
*/
