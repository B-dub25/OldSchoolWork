/*
Author: Brian Rundel 9/4/12
CPS 171 Tuesday Thursday class
Lab work
This program will give you the product , sum and average of some numbers
*/

#include <iostream>

using namespace std;

int main()
{
    int num,num1,num2,num3;

    cout << "Enter four numbers please ";
    cin >> num >> num1 >> num2 >> num3;

    cout << "The sum is : " << num + num1 + num2 + num3<< endl;
    cout << "The product is " << (num * num1 * num2 * num3 ) << endl;
    cout << "The average is " <<  (num + num1 + num2 + num3) / 4.0   << endl;



    return 0;

}
/*
Enter four numbers please 2 3 4 5
The sum is : 14
The product is 120
The average is 3.5
Enter four numbers please 2 4 6 7
The sum is : 19
The product is 336
The average is 4.75
*/
