#include <iostream>
using namespace std;
//questão 6 da lista
void decrescente(int n){
       //caso base -  caso de parada
       
       //chamada da recursão
        if(n >= 0) {
                cout << n << " ";
                decrescente(n-1);
        }
}


int main(){   // recursão
        int n;
        cout << "N:";
         cin >> n;
        decrescente(n);
        cout << "\n"; 

        return 0;
}
