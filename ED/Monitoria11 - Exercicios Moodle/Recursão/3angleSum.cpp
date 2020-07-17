#include <iostream>
using namespace std;

void vetPrint(int *v, int n){
    cout << "[";
    for(int i=0;i<n;i++){
        if(i < n-1)
            cout << v[i]<<", ";
        else cout << v[i]<<"]\n";
    }
}

void triangleSum(int *v, int n){
    //caso base:
        //parar, basicamente quando não chamar a recursão
    //chamada da recursão 
    if(n>0){
        //crio um vetor auxiliar menor que o passado
        int aux[n-1];
        // populo o auxiliar com as somas
        for(int i=0; i < n-1; i++){
            aux[i] = v[i]+v[i+1];
        }
    //chamo a recursão para o vetor auxiliar
    triangleSum(aux, n-1);
    /*
        printando o vetor atual so depois da chamada da recursão
        para que printe em ordem invertida.
        A recursão tende a fazer as coisas de tras pra frente,
        logo colocar a chamada da recursão depois do print 
        permite organizar no formato pedido
    */
    vetPrint(v,n);
    }
}





int main(){
    int n;
    cout << "N: ";
    cin >>n;
    int v[n];
    cout << "V:\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    triangleSum(v,n);


    return 0;
}