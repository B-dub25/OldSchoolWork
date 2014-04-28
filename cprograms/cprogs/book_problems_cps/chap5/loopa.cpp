#include <iostream>

using namespace std;

int main()
{
    int first, second, current;
    int position;
    int counter = 0;

    cout << "Enter the first and second numbers ";
    cin >> first >> second;
    cout << "Enter the position of the number ";
    cin >> position;

    if (position == 1)
        current = first; // if the position is 1 the the result will be 1
    else if (position == 2) // if the position is 2 the result will be 2
        current = 2;
    else
        counter = 3;    //if all those are not true the the counter is 3 because
                       //we would start on the third calcultion within the loop

    while (counter <= position)
    {
        current = second + first; // setting the current to the value of first + second
        first = second;  // second takes over the value of first
        second = current; // second takes the value of current
        counter++; // add one to the counter
    }

    return 0;
}
