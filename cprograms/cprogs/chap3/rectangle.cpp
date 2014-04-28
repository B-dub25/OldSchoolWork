// Finding the area of a rectangle
// Brian Rundel

#include <iostream>
using namespace std;

int main()
{
    int length,width,perimeter,area;
    cout << "Please enter the hight ";
    cin >> length;
    cout << "Now please enter the width ";
    cin >> width;
    perimeter = 2 * ( length + width );
    area = length * width;
    cout << "The perimeter ="<< perimeter <<"\n";
    cout << "The area ="<< area <<"\n";
    return 0;
}
