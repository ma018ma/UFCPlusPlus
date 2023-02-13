// Scrivereunprogrammacherisolva l’equazione di secondo grado prendendo in input a, b, c
#include <iostream>
#include <string>
#include <cmath>
int main()
{
    double a;
    double b;
    double c;
    double x1;
    double x2;

    std::cout << "dammi tre numeri ti faccio l equazione\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    std::cout << "x1="<< x1 << "\n"
              << "x2=" << x2;
}