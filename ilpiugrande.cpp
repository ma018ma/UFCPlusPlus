#include<iostream>
using namespace std;

int piuGrande(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;
    }

int main(){

int x, y = 0;
int piuGrande();
cout<<"Dammi due numeri.";
cin>>x, y;
cout<< x <<"+"<< y <<"="<<piuGrande<<endl;

}