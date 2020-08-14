#include <iostream>
using namespace std;
// printar de forma decrescente os numeros entre n e 0

void printaAnteriores(int n){ // n = 5 -> 5 4 3 2 10
        //caso base : caso de parada
        if(n ==0){
                cout << n << "\n";
        }
        //chamada da recursão
        else{
                cout <<  n << " ";
                printaAnteriores(n -1);
        }
}

/*
while( n> 0){
        print(n)
        n--; n = n -1
        escopo

}


*/


int main(){
        printaAnteriores(5); 

        return 0;
}