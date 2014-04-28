//*********************************************
//
// Author : Brian Rundel
// This program will display numbers in
// ascending order
//*********************************************

#include <iostream>

using namespace std;

int main()
{
    int num,num2,num3,first,sec,thir;

    cout << "Enter three numbers. ";
    cin >> num;
    cout << " another one ";
    cin >> num2;
    cout << "last one ";
    cin >> num3;

if ( num > num2 && num > num3 )
{
    thir = num;
  }
  else if ( num < num2 && num > num3)
  {
      sec = num;
  }
  else
  first = num;

  if (!first)
    ( num2 < num3 )? first = num2 : first = num3;

  if (!sec)
      (num > num3 )? sec = num : sec num = num3;

  cout << first << " " << sec << " " << thir << endl;

  return 0;
}

