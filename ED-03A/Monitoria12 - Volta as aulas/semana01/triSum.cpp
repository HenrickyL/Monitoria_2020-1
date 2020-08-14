#include <iostream>
using namespace std;

void vetPrint(int* v, int n){
    int i = 0;
    // caso base
    if(n == 1){
        cout << v[n-1]<<"\n";
    }
    //chamada da recursão
    else{ 
        cout << v[i] << ", ";
        vetPrint(v+1, n-1); // momento de chamadO
    }
}
// [1,2,3,4,5]

void trianguloSomas(int* v, int n){
    //caso base
    if(n == 1){
        vetPrint(v,n);
    }
    //chamada da recursão
    else{
        //crio um vetor auxiliar menor que o original
        int aux[n-1];
        //faço as somas e vou salvando os resultado no auxiliar
        for(int i=0; i < n-1; i++){
            aux[i] = v[i]+v[i+1];
        }
        
        
        //chamo a recursão para o vetor auxiliar, p/ não alterar o vetor original
        trianguloSomas(aux,n-1);
        vetPrint(v,n);
    }
}

int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n; i++){
        cin >> v[i];
    }
    trianguloSomas(v,n);

    return 0;
}
