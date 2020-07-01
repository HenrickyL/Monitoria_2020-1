#include <iostream>
using namespace std;
// 2 função printar os elementos do vetor
        //1 decrescente
        //2 crescente

void decres(int* v, int n){
        //caso base:
        if(n==1) cout << v[n-1] << " ";
        //chamada da recursão
        else{
                cout << v[n-1] << " ";
                //decrementar o vetor
                decres(v,n-1);
        }       
}
void cres(int* v, int n){
        //caso base:
        if(n==1) cout << v[n-1] << "\n";
        //chamada da recursão
        else{
                cres(v,n-1);
                cout << v[n-1] << " ";
        }       
}



int main(){
        int n;
        cout << "N: ";
        cin >> n;
        cout << "V:\n";
        int v[n];
        for(int i=0; i< n; i++) cin >> v[i];
        cout <<"-------------\n";
        cout << "decrescente: ";
        decres(v,n);
        cout << "\ncrescente: ";
        cres(v,n);



        return 0;
}