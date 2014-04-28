/*
Author : Brian Rundel
*/

#include <iostream>

using namespace std;

enum tri_type{EQ, IS, SC,NOTA};
int tri(int,int,int,tri_type&);
void tri_print(tri_type);

int main()
{
  tri_type triangle;
  int x,y,z;
  cin >> x >> y >> z;

  tri(x,y,z,triangle);
  tri_print(triangle);
  return 0;

}

int tri(int a, int b, int c,tri_type& tri)
{
     if (a < b+c && b < a+c && c < a+b)
    {
        if ( a == b && b == c )
            tri = EQ;


          else if ( a == c || b == c || a == b)
               tri = IS;

        else
           tri = SC;
    }
    else
    tri = NOTA;

    return tri;

}
void tri_print(tri_type tri)
{

    switch(tri)
    {
        case EQ: cout << "Equilateral" << endl; break;
        case IS: cout << "Iso " << endl; break;
        case SC: cout << "Scalene" << endl; break;
        case NOTA : cout << "NOTA" << endl; break;
        default : cout << "NOTA" << endl; break;
    }

}
