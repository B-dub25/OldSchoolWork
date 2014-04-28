#include <iostream>

using namespace std;

int main()
{

        for(int i = 1; i <= 5; i++)
           {
               for (int spaces = 5; spaces >= i; spaces--)
               {
                   cout << " ";
               }
               for(int stars = 2; stars <= i * 2;stars++)
               {
                   cout << "*";
               }
            cout << endl;
           }
         for (int i = 5; i >= 0; i--)
             {
                for (int spaces = 5; spaces >= i; spaces--)
                {
                    cout << " ";
                }

                for(int stars = 2; stars <= (i * 2);stars++)
                {
                    cout << "*";
                }
              cout << endl;
             }
return 0;
}
