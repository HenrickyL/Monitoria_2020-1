#include <iostream>
using namespace std;

int odd(int* v, int n){
        //caso base:
        if(n==1){
                if(v[0]%2 == 0) return 0;
                else return 1;
        }
        //chamada da recursão:
        else{
                if(v[n-1]%2 == 0) return 0 + odd(v,n-1) ;
                else return 1 + odd(v,n-1);
        }
}

int main(){
         int n;
        cout << "N:";
        cin >> n;
        cout << "V[]:\n";
        int v[n];
        for(int i = 0; i< n; i++){
                cin >> v[i];
        } 
        cout << "-------------------\n";
        cout << "tem "<<odd(v,n) << " impares!\n"; 

        return 0;
}