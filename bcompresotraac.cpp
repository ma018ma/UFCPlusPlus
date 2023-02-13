#include <iostream>
#include <string>

int main()
{
    int a;
    int b;
    int c;
    std::cout << "dammi tre numeri\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if ((a <= b && b <= c) or (a >= b && b >= c))
    {
        std::cout << "b e compreso";
    }
    else
    {
        std::cout << "b non e compreso";
    }
}