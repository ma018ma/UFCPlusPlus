#include <iostream>
using namespace std;
int calcolasomma(int x ){
    int somma = 0;
    for (int i=0;i<=x;i++){

        somma += i;
    }
    return somma;
}
int main()
{ 
    int risultato = calcolasomma(200);
    cout << risultato << endl;
}