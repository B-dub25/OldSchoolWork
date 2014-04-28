//*****************************************************
//
// Author : Brian Rundel
// This is to help understand the peek
//
//*****************************************************

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Line 1 : Enter a string: " ;
    cin.get(ch);
    cout << "First cin.get(ch). "
          << "ch = " << ch << endl;
    cin.get(ch);
    cout << "After second cin.get(ch) "
          << "ch =" << ch << endl;

    cin.putback(ch);
    cin.get(ch);
    cout << "Line 2 : cin.putback "
          << "After cin.putback"
             << "ch now is " << ch << endl;

    ch = cin.peek();

    cout << "Line 3: cin.peek " << ch << endl;
    cin.get(ch);
    cout << "After last cin.get(ch) "
          << "ch = " << ch << endl;
    return 0;
}
