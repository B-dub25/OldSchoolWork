#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int i,j;
    for(i = 1; i <= 5; i++)
    {
        //cout << "Loop one" << i << endl;
        for (j = (i + 1); j <= 5 ; j++)
        cout << setw(5) << j;
        cout << endl;
    }

    return 0;
}
