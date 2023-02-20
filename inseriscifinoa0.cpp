#include <iostream>
#include <string>
using namespace std;

bool inseriscifinoa0()
{
    string parola;
    bool risultato;
    do
    {
        cout << "dammi parole e per fnire inserisci 0" << endl;
        cin >> parola;

        for (int i = 0; i < parola.length(); i++)
        {
            if (parola[i] == parola[i + 1])
            {
                risultato = "true";
            }
        }

    } while (parola != "0");
    return risultato;
}
int main()
{
    bool risultato = inseriscifinoa0();
}