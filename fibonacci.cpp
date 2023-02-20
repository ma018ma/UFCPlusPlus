#include <iostream>
#include <string>
using namespace std;

// 0 1 1 2 3 5 8 13 21
//fibonacci(8) -> 0 1 1 2 3 5 8 13 
//fibonacci(5) -> 0 1 1 2 3
//                    1+2=3
//fibonacci(3) -> 0 1 1
void fibonacci(int quanti){
    string risultato = "";

    int a = 0;
    int b = 1;

    if(quanti == 0){
        risultato = "0";
    }
    else if(quanti == 1){
        risultato = "0";
    }
    else if(quanti == 2){
        risultato = "0, 1";
    }
    else{
        int valore = a + b;
        risultato = "0, 1, " += to_string(valore);
    
        for(int i=0; i<10; i++){

        }
    }
    

    cout << "il risultato e " << valore << endl;
}
int main(){

fibonacci(0);
fibonacci(1);
fibonacci(2);

return 0;
}