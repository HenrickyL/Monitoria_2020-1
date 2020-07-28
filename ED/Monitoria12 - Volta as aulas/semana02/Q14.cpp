#include<iostream>
using namespace std;

int multRusian(int a, int b){
    //caso base:
    if(a == 1 ){
        return b;
    }
    //chamada da recursão
    else{
        // ir dividindo o a e multiplicando o b por 2
        // aproveitando-se do caso base para pegar a quantidade
        //de chamadas
        //--------------
        if(a%2!=0){
            //somo
            return b + multRusian( a/2, b*2);
        }
        return multRusian( a/2, b*2);
        
    }
}


int main(){
    int A,B;

    cin>>A;
    cin>>B;

    cout <<"Multiplicação Russa: " << multRusian(A,B) << "\n"; 
    cout <<"Multiplicação: " << A*B << "\n"; 

    return 0;
}