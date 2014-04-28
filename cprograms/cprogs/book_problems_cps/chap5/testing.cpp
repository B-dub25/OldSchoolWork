#include <iostream>

using namespace std;

int main()
{

    int num;
    int sum;
    int count = 0;

    cout << "Enter anything but a number to quit anytime " << endl;
    while(cin)
    {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        count++;
    }

   cout << "The sum of the numbers = " << sum
        << "The average is = " << sum / count << endl;
    cout << count;

    return 0;
}
