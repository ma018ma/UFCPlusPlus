#include <iostream>

using namespace std;

int main()
{
    int f = 7;
    int i = 0;
    int risultato = 0;
 
    cout <<"stampiamo la tabellina del 7.\n";

    for (i=0;i<11;i++){
        risultato = f*i;
        cout<< f << "x"<< i << "=" << risultato << endl;
    }
}