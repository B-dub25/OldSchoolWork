// This is a simple project to test //

#include <iostream>
using namespace std;

int main()
{
   cout << "5 / 2.0 = " << 5 / 2.0 << endl;
   cout << "2.0 / 5 =" << 2.0 / 5 << endl;
   cout << "5 * 4 + 4 / 3 - 6 = " << 5 * 4 + 4 / 3 - 6 << endl;
   cout << "5 * 4 + ((4 / 3 ) - 6 )= " << 5 * 4 + (( 4 / 3) - 6) << endl;
   cout << "static_cast<char> 65 =" << static_cast<char>(65) <<" in ASCII code"<< endl;
   cout << "static_cast<int> A =" << static_cast<int>('A') << " in ASCII code" << endl;
    return 0;
}
