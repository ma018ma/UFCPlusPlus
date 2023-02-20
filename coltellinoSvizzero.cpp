          #include <iostream>
#include <string>
#include <math.h>
using namespace std;
//dati 2 valori x e y, stampa il maggiore tra i due
int piuGrande(int x, int y)
{

    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
//dato un numero, stampa se esso e divisibile per due 
bool isEven(int numero)
{

    if (numero % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//dato un prezzo e un interesse in %, calcola il prezzo totale compreso di interesse
double costoTotale(double prezzo, int interesse)
{
    return prezzo + (prezzo * interesse / 100);
}
//inserisci la tua eta, se maggiore di 18 puoi bere
void buttaFuori(int eta)
{
    if (eta >= 18)
    {
        std::cout<<"vai a bere";
    }
    else
    {
        std::cout<<"vai a casa";
    }
}
//dati 3 numeri, ti stampo la sequenza dei numeri in ordine decrescente
void decrescente(int a, int b, int c)
{
    if (a <= b and a <= c)
    {
        if (b <= c)
        {
            std::cout<< c << " " << b << " " << a;
        }
        else
        {
           std::cout<< b << " " << c << " " << a;
        }
    }
    else if (b <= a and b <= c)
    {
        if (a <= c)
        {
            std::cout<< b << " " << a << " " << b;
        }
        else
        {
            std::cout<< b << " " << c << " " << a;
        }
    }
    else if (c <= a and c <= b)
    {
        if (a <= b)
        {
            std::cout << c << " " << a << " " << b;
        }
        else
        {
            std::cout << c << " " << b << " " << a;
        }
    }
}
//con stampa nome, stampera il nome marzia in un rettangolo
void stampaNome(string marzia)
{
    {
        std::cout << "+------+\n";
        std::cout << "|""marzia""|\n";
        std::cout << "+------+\n";
    }
}
//inserisci 3 numeri, ti dirà se il numero b è compreso tra a e c
int isBetween(int a, int b, int c)
{
    if ((a <= b && b <= c) or (a >= b && b >= c))
    {
        std::cout << "b e compreso";
    }
    else
    {
        std::cout << "b non e compreso";
    }
    return 0;
}
//inserisci 3 valori, sviluppera l equazione in modo da darti i due risultati reali o 0 risultati
void equazione(int a, int b, int c)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "non ci soluzioni." << endl;
    }
    else if (delta == 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "le soluzioni sono:" << x1 << "e" << x2 << endl;
    }
    else
    {
        cout<<"non ci sono soluzioni";
    }
}
//inserisci un anno, ti dira se e bisistile
bool bisestile(int anno)
{
    if ((anno % 4 == 0 && anno %100 != 0) || (anno % 400 == 0))
        {
            return true;
        }
            else 
        {    
            return false;
        }
}
//ti stampa la tabellina intera di un numero fino a 10
void stampaTabelline(int numero)
{
    for (int i = 0; i <= 10; i++)
    {   
        int risultato = numero * i;
        cout<<i<<"x"<<numero<<"="<<risultato<<endl;
    }
}
//ti stampa la tabellina di un numero fino a m volte
void stampaTabelline(int n, int m)
{   int risultato;
    for (int i = 0; i <= m; i++){
    risultato  =n * i;
    std::cout<<i<<"x"<<n<<"="<<risultato<<endl;
    }
}
// dato un numero stampa se è paro o no
void stampaPari(int n)
{
    if (n%2 == 0)
    {
        cout<< n << "\n";
    }
    else
    {
        cout<<"non e paro";
    }
}

int main()
{
    cout<<piuGrande(5, 3)<<endl;
    cout<<isEven(6)<<endl;
    cout<<costoTotale(120, 8)<<endl;
    buttaFuori(46);
    cout<<endl;
    decrescente(6, 40, 18);
    cout<<endl;
    stampaNome("");
    cout<<endl;
    isBetween(6, 7, 8);
    cout<<endl;
    equazione(6, 4, 2);
    cout<<endl;
    cout<<bisestile(1900);
    cout<<endl;
    stampaTabelline(6);
    cout<<endl;
    stampaTabelline(5, 9);
    cout<<endl;
    stampaPari(78);
    cout<<endl;
}