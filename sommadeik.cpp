#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    int sommadeik =0;

   cout<<"dammi un numero"<< endl;
   cin>>numero;

   for(int i = 0;i<=numero;i++){
    sommadeik += i;

   }
   cout<<"la somma dei primi numeri interi per arrivare a "<< numero <<" e' "<< sommadeik;
}