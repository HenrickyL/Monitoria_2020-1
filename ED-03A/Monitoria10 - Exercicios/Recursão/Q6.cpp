#include <iostream>
using namespace std;


int fat(int n){
        //caso base:
    if(n == 0 || n == 1){
        return 1;
    }else{ // chamada da recursão
        return n * fat(n-1);
    }
}

int sumFat(int* v, int n){
        //caso base:
        if(n==1){
                return fat(v[0]);
        }
        //chamada da recursão:
        else{
                return fat(v[n-1]) + sumFat(v,n-1);
        }
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
        cout << "SumFat(V): " <<  sumFat(v,  n) << "\n"; 

        return 0;
}