#include <iostream>
using namespace std;

// int min1(int* v, int n){
//         //caso base
//         if(n==1){

//         }
//         //chamada da recursão
//         else{
//                 int menor = v[n-1];
//                 if(v[n-2] < menor)
//         }
// }

void min2(int *v, int n, int* m){
        //caso base
        // if(n==0){

        // }
        //chamada da recursão
        if(n>0){
                if(v[n-1] < *m){
                        *m = v[n-1];
                }
                min2(v,n-1,m);
        }
}

int main(){
        int n;
        cout << "N:";
        cin >> n;
        cout << "V[]:\n";
        int v[n];
        int menor;
        for(int i = 0; i< n; i++){
                cin >> v[i];
        } 
        menor = v[0];
        cout << "-------------------\n";
        min2(v, n, &menor);
        
        cout << "menor é: " << menor << "\n";




        return 0;
}