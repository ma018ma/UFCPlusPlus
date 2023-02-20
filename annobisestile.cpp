// Example program
#include <iostream>
#include <string>
int main()

{
    int numero;
    std::cout << "inserisci un anno:";
    std::cin >> numero;

    if ((numero % 4 == 0 && numero % 100 != 0) || (numero %400 == 0))
    {
        std::cout << "questo anno e bisestile";
    }
    else
    {
        std::cout << "questo anno non e bisestile";
    }
}
