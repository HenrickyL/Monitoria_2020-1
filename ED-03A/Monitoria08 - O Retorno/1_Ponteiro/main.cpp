//c++ - Ponteiros
#include <iostream>
using namespace std;

void printa(int v[], int n){
        for(int i = 0; i< n ; i ++){
                cout << v[i] << ", ";
        } cout << "\n";
}
//alocaçãpo dinâmica
int* criaVetor(int n){
        int *v = new int[n];//c malloc
        for(int i = 0; i< n ; i ++){
                v[i] = 0;
        }
        return v;

}


int main(){
        int n;
        cin >> n;
        int*  W = criaVetor(n);
        printa(W,n); 
        delete W;
        return 0;
}










// int x;
//         int* pX = &x;
//         x = 10;
//         cout << "x:" << x << " Endereço:" << &x << "\n";
//         cout << "pX: " << pX << " V pX: " <<  *pX <<"\n";
        
//         *pX = 20;
//         cout << "\nx:" << x << "\n";


// void mudaValor( int* valor){
//         *valor += 10;
//         cout << "valor: " << *valor << "\n"; 
// }

// void dobra(int* v, int n){
//          for(int i = 0; i< n ; i ++){
//                  *(v+i) *= 2;  //v[i]
//          }
// }

//    int n;
//         cin >> n ; 
//         int v[n];
//         cout << "_\n";
//         for(int i = 0; i< n ; i ++){
//                 cin >> v[i];
//         }
//         cout << "_\n";
//         printa(v,n);
//         dobra(v, n);
//         printa(v,n);
// }