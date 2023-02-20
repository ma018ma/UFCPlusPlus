#include<iostream>
#include<string>
using namespace std;

string parolamaggiore(string parola)
{
    string parolalunga; 
    std::cout<<"dammi 10 parole"<<endl;
    for (int i=0;i<10;i++)
    {
        cin>>parola;
        if (parola.length()>parolalunga.length())
        {
        parolalunga=parola;
        } 
    }
    cout<<"questa e' la parola piu' lunga:"<< parolalunga<<"."<<endl;
}

int main()
{
    std::cout<<parolamaggiore("");
}