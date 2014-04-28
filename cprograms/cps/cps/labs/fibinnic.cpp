#include <iostream>

using namespace std;

int main()
{
    int position, first, second, current, counter;

    cout << "Enter the position of the number ";
    cin >> position;
    cout << "Enter the first and second number ";
    cin >> first >> second;

    if ( position == 1)
         current = 1;
    else if (position == 2)
        current = 2;
    else
        counter = 3;

    while (counter <= position)
    {
        current = second + first;
        first   = second;
        second  = current;
        counter++;
    }
    cout << "The number at position " << position
         << " is " << current;
    return 0;

}
