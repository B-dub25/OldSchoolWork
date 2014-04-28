#include <iostream>
#include <string>

int main()
{
    std::string one,two;

    std::cin >> one >> two;

    if(one == two)
       std::cout << one + '!' << std::endl;

    return 0;
}
