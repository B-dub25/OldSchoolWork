// This is a program to find the area of a triangle
// Brian Rundel

#include <iostream>
using namespace std;

int main()
{
    float sideA,sideB,sideC,perimeter,area,hight;

    cout << "This will caculate the area and perimeter""\n"
    << "Please enter the length of all three sides ""\n"
    << "Enter side A first ";

       cin >> sideA;
    cout << "Enter side B now ";
       cin >> sideB;
    cout << "Enter side C now ";
       cin >> sideC;

        perimeter = sideA + sideB + sideC;
        area = .5 * sideC * sideB;

    cout << "The perimeter =" << perimeter << "\n" << "The area =" << area;

        return 0;
}
