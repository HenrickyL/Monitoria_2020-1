#include <iostream>
using namespace std;

// a: abacaxi
// b: abacate
// a>b

int strComp(char* a, char* b){//retorma n+ n- 0
    for(int i=0; a[i] || b[i] ;i++){
        if(a[i] - b[i] != 0){
            return a[i]- b[i];
        }    
    }
    //se encerrou e não deu o return 
    return 0;
}

// [5,4,3,2,1]
/*
    [4,3,2,1,5]

*/


void ordena(char **v, int n){
    for(int i=0; i < n ;i++){
        for(int j=0 ; j< n-1; j++){
            if( strComp(v[j], v[j+1]) > 0){
                char* aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void strPrint(char* s){
    for(int i=0; s[i] ;i++){
        cout << s[i];
    }cout<<"\n";
}

int main(){
    int n;
    cin >> n;
    //criar o vetor de string
    char **vet = new (std::nothrow) char*[n]; // criar vetor de ponteiros de char 
    //receber com o for
    int k;
    if(vet == nullptr){
        cout<<"Não possivel alocar a memória!\n";
    }else{
        for(int i=0; i< n; i++){
            //recebo o tamanho da string
            cin >> k;
            // temos que alocar a memória
            vet[i] = new char[k+1];
            // uso do gets pq cin não recebe string com espaço
            cin.ignore(); 
            cin.get(vet[i],k+1);// (onde quer guardar, tamanho) 
        }
        //char a ordenação
        ordena(vet,n);
        //printar todos os elementos
        for(int i=0; i< n; i++ ){
            strPrint(vet[i]);
        }


    }
    return 0;
}