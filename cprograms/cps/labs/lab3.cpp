/*
Author: Brian Rundel
This will show the combinations of colors

*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch, ch1;

    cout << "Enter the to letters ";
    cin >> ch >> ch1;
    ch = toupper(ch);
    ch1 = toupper(ch1);


      if (ch == 'R' && ch1 == 'R')
         cout << "The color is red "<< endl;
        else if (ch == 'R' || ch1 == 'R')
               if (ch1 == 'Y' || ch == 'Y')
                 cout << "The color is orange";
               else if ( ch == 'B' || ch1 == 'B')
               cout << "The color is violet";
        // first ch is not red
        else if (ch == 'B' && ch1 == 'B')
              cout << "The color is blue ";
              else if (ch == 'B' || ch1 == 'B')
                    if (ch == 'Y'|| ch1 == 'Y')
                        cout << "The color is green";
                    else if (ch == 'R' || ch1 == 'R')
                        cout << "Color Violet";
          if (ch == 'Y' && ch1 == 'Y')
               cout << "Color yellow";
            else  if (ch != 'R' || ch != 'B' || ch != 'Y')
                   if (ch1 != 'R' || ch1 != 'B' || ch1 != 'Y')
            cout << "Invalid";

    return 0;
}
