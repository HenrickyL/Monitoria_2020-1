#include<iostream>
#include<stdio.h>
using namespace std;

//vou adicionar no vetor passado o caracter C,
char* adiciona(char* s,int *n, int pos, char c){ // fiz com retorno void e deu problema
    if(pos >= *n){
        cout <<"*\n";
        //termos que realocar
            //criar um novo ponteiro
            char* aux = new char[*n+10];
            //copia os valore
            for(int i=0; i < *n; i++){
                aux[i] = s[i];
            }
            //atualizamos o tamanho
            *n = *n+10;
            //apaga o antigo
            delete s;
            //aponta o ponteiro s para o nova memória alocada
            s = aux; 
    }
    //adicono no vetor
     s[pos] = c;
     return s;
}

void printS(char* s, int n){
    for(int i=0; i < n; i++){
        cout << s[i];
    }cout <<"\n";
}


int main(){
    // vamos criar um vetor de ponteiros
    int len = 10;
    char  *vet = new char[len];
    
    char c;
    cout << "Digite alguma coisa: ";
   for(int i=0; c!= '\n'; i++){
        //receber o valor inteiro do caracter passado
        c = getchar();
        vet = adiciona(vet,&len ,i, c);
    }
    cout << "\n";

    printS(vet, len);
    

    delete vet;
    return 0;
}



//teste

// int s;
    // //cin.ignore();
    // cout << "digite alguma coisa: ";
    // s = getchar();
    // putchar(s);

    // cout <<"\nS: " << s <<"\n";
