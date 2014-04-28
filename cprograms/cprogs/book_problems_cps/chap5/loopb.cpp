#include <iostream>

using namespace std;

int main()
{
    int first, second, current;
    int n =0;
    int counter = 0;
    int position;
    cout << "enter the first number ";
    cin >> first;
    cout << "enter the second number ";
    cin >> second;
    cout << "Enter the position ";
    cin >> position;

    if (position == 1)
        current = 1;
    else if (position == 2)
         current = 2;
    else
         counter = 3;
    while(counter <= position)
    {
        current = second + first;
        first = second;
        second = current;
        counter++;

    }
    //cout << current << ":" << counter;
    return 0;
}
