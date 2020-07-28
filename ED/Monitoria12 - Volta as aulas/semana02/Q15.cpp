#include <iostream>
using namespace std;

//[1,2,3,4,5] , 6
/*

[1,2,3,4,5]
*/
void vetPrint(int *v, int n){
    for(int i=0;i<n;i++) cout<<v[i]<<", ";

    cout <<"\n";
}

// verificar a soma do pivo com os outros elementos de v
bool auxVerSum(int *v, int n, int pivo, int x){
    //caso base:
    if(n==0){
        return false;
    }else if((v[n-1] + pivo) == x){
        return true;
    }
    //chamada da recursão:
    else{
        return false || auxVerSum(v,n-1,pivo, x);
    }
}
//[1,2,3,4,5] , 10
/*
p: 0
v: [aux: 1,     2,3,4,5] => (aux+v[i] == x) false

p: 1
v: [aux: 2,     1,3,4,5] => (aux+v[i] == x) false

p: 2
v: [aux: 3,     1,2,4,5] => (aux+v[i] == x) false

p: 3
v: [aux: 4,     1,2,3,5] => (aux+v[i] == x) false

p: 4
v: [aux: 5,     1,2,3,4] => (aux+v[i] == x) false


*/
bool sum2Vet(int *v,int n, int x, int pivo=0){ 
    //caso base:
    if(n==pivo){ // ñ podemos mexer no n, usamos o pivo como indice
        return false; //parada
    }
    //chamada da recursão:   
    else{
        //seperar o vetor de sua cabeça
        
        if(pivo>0){ //quando não for o 1º troca
            int aux = v[0];
            v[0] = v[pivo];
            v[pivo] = aux;
        }
        
        //tenho que olhar apartir do v[1] e esse vetor é n-1
        if(auxVerSum(v+1, n-1, v[0], x)){
            return true;
        }else{ //sempre uso o mesmo vetor,mudo so o pivo
            return false || sum2Vet(v,n,x,pivo+1);
        }   
        
    }
}

int main(){

    int n;
    cout << "N: ";
    cin >> n;
    int v[n];
    cout << "Vetor:\n";
    for(int i =0 ; i< n; i++){
        cin >> v[i];
    }
    //recebo o x
    int x;
    cout << "X: ";
    cin >> x;


    //teste
//     int pivo, x;
//     cout << "pivo: ";
//     cin>>pivo;


// // quero saber se a soma do meu pivo com algum elemento da x
//     cout << "Verdade: " <<auxVerSum(v,n,pivo,x); 
    //final
    cout << "Encontrei a soma? " << sum2Vet(v,n,x)<<"\n";
    vetPrint(v,n);
    return 0;
}