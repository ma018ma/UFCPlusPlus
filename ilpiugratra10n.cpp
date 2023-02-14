#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n = 0;
    int mag = 0;

    for (int i = 0; i < 10; i++)
    {   
        cout << "mi dai un numero?";
        cin >> n;
        if (n > mag){
           mag = n ;
        }
    }
cout<<"il piu grande e " << mag;
}
