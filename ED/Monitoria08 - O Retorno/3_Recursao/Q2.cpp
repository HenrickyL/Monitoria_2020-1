#include <iostream>
using namespace std;

//função que reverte os elementos do vetor
void reverte(int* v, int n, int i = 0){ // 1 3  - > 3 1 / 1 - > 1 
        // 1 2 3 4 5 6 - >  6 5 4 3 2 1

        //caso base  - caso de parada
        if( n <= i ){ // n = 6 
                cout << "*\n";
                
        } 
        //chamada da recursão
        else{
                //trocar 2 valors swap(a,b)
                int aux = v[i];
                v[i] = v[n-1]; // vi vai ser o ultimo
                v[n-1] = aux;
                //com isso troco v[i] com o ultimo
                reverte(v, n-1,  i+1);
        }

}


int main(){   // recursão
        cout << "digite o tamanho: ";
        int n;
        cin >> n ;
        cout << "digite os elementos:\n";

        int v[n];

        for(int i=0; i < n; i ++){
                cin >> v[i];
        }

        reverte(v,n);

        //printar o revertido
        for(int i=0; i < n; i ++){
                cout  << v[i] << " ";
        }cout << "\n";



        return 0;
}
