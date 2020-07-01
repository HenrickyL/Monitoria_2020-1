#include <iostream>
using namespace std;

//função retorna a soma dos elemetos do vetor
int somaVet(int * v, int n){
        int soma = 0;
        for(int i = 0;  i < n; i++){
                soma+= v[i];
        }
        return soma;
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
}