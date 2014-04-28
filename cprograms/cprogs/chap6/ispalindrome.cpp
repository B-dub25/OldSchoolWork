/*
Author Brian Rundel
This program will test if a set
of numbers is a palindrome
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isapalidrome(int x);

int main()
{
    int num;
    cout << "Enter a number sequance to test "
          << "for a palidrome ";
    cin >> num;
    if(isapalidrome(num) == true)
    cout << "The sequance is a palidrome. ";

    else
    cout << "The number is not a palidrome. ";

    return 0;
}

bool isapalidrome(int num)
{
    int pwr = 1 ;
    double z;

    if (num < 10 )
    {
        return true;
    }
    else
   {
   while (num / static_cast<int>(pow(num, pwr)) >= 10)   // finds the highest 10th power divisable by num
   pwr++;
   while (num >= 10)
      {
       int tenpwr = static_cast<int>(pow(num, pwr));
     if((num / tenpwr) != (num % 10))
        return false;
    else
    {
        num = num % tenpwr;
        num = num / 10;
        pwr -= 2;
    }
      }
   return true;
    }

}
