#include<iostream>
#include<string>
using namespace std;
bool doppie(string parola){

    for (int i=0; i<parola.length();i++)
    {
        if (parola[i] == parola[i+1])
        {
        return true;
        }
    }
        return false;

}
int main()
{
    cout<< doppie("marzia");
}