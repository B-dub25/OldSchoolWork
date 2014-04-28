




#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "enter three numbers. ";
    cin >>a >> b >> c;

    if (a>c && c>b)
    {
        cout << b << " " << " " << c << " " << a;

    }
    else if (a>b && b>c )
    {
      cout << c <<" " <<  b << " " << a;
    }
    else if ( b<a && c>b )
    {
        cout << b << " " << a << " " << c;
    }

    else if( b>a && a>c )
    {
        cout << c << "" << b << " " << a;
    }
    else if ( c < b &&  b > a )
    {
      cout << b << " " << a << " " << c;
    }
return 0;
}
