#include <iostream>
using namespace std;

void mutiply(int* v, int n, int x){
        //caso base:
        //chamada da recursão:
        if(n>0){
                v[n-1] = v[n-1]*x;
                mutiply(v, n-1, x);
        }
}

void printVet(int*v, int n){
        if(n>0){
                printVet(v,  n-1);
                cout << " " <<v[n-1];
        }else cout << "\n";
}

int main(){
        int n;
        cout << "N: ";
        cin >> n;
        cout << "V[]:\n";
        int v[n];
        for(int i = 0; i< n; i++){
                cin >> v[i];
        } 
        cout << "-------------------\n";
        printVet(v, n);
        int x;
        cout << "\nX: ";
        cin >> x;
        mutiply(v, n,  x);
        printVet(v, n);
        cout << "\n";
        return 0;
}