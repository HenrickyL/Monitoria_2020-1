#include <iostream>
using namespace std;

int  somaVet(int* v, int n){
        //caso base:
        if(n == 1){
                return v[0];
        }
        //chamada da recursão
        else{
                int soma = v[n-1] +  somaVet(v, n-1);
                return soma;
        }
}



int main(){
        cout << "N:";
        int n;
        cin >> n;
        cout << "Elementos:\n";
        int v[n];
        for(int i=0; i< n; i++){
                cin >> v[i];
        }
        cout << "-----------------\n";
        cout << "A soma dos elementos de V é: " << somaVet(v,n) << "\n";
        return 0;

        return 0;
}