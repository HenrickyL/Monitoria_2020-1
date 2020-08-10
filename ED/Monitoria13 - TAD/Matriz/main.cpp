#include<iostream>
using namespace std;
#include "matriz.h"
int main(){
    int n, m;
    cin >> n >> m;
    int aux;
    matriz M(n,m);
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>>aux;
            M.add(aux,i,j);
        }
    }
    M.print();
    cout << "Qual posição vc quer veriricar?\n";
    cin>>n>>m;
    cout << ">> "<<M.at(n,m)<<"\n";
    cout <<"lin: " <<M.getL() <<", col: "<<M.getC()<<"\n";

    return 0;
}