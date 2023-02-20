#include <iostream>
#include <string>
using namespace std;

string stampaNomeCognome(string nome, string cognome)
{
    string faiCiao = "Ciao, " + nome + " " + cognome + "\n";
    return faiCiao;
}
int main()
{
    cout<<stampaNomeCognome("", "");
}