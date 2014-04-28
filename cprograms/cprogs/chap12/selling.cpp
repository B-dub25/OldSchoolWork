#include "sell.h"
#include "sellimp.cpp"
#include  <iostream>

using namespace std;

int main()
{
    product item;
    double cas;
    cout << "Enter money to buy product ";
    cin >> cas;
    item.set_money(cas);
    item.check();
    return 0;
}
