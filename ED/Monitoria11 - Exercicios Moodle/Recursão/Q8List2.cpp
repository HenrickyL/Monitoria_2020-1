#include<iostream>
#include<math.h>
using namespace std;
/*
Ideia: Utilizo a variavel de valor padrão k para verificar
a divisibilidade de n, onde ao incrementar o k posso vericiar
se n é divisivel por algum dos seus anteriores 
*/
bool ePrimo(int n, int k=2){ //k < n
    //caso base 
    if(k>= n) // pode usar sqrt(n) tambem (matematica permite)  
        return true;
        // se k se igualar a n então não existe nenhum Nº
        // que divida n alem dele mesmo, logo primo 
    else{
        // vefico se k divide n
        if(n % k == 0) return false; // não é primo
        else //chamo a recursão
            return ePrimo(n,k+1); // olho a divisibilidade por k+1
    }
}

void printPrimos(int n){
    //caso base:
    //chamada da recursão:
    if(n>0){
        if(ePrimo(n)){
        cout << n << " ";
        }
        printPrimos(n-1);
    }

}
  

int main(){
    int n;
    cout << "N: ";
    cin >> n;

    printPrimos(n);
    cout << "\n";

    return 0;
}