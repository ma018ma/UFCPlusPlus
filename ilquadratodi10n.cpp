#include <iostream>

using namespace std;

int main()
{
    int i;
    int somma = 0;

    for(i=0;i<=10;i++){
        somma += i*i;
    }
    cout<< somma;
}