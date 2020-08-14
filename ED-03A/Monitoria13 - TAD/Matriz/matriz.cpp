#include <iostream>
#include "matriz.h"

matriz::matriz(int linha, int coluna){
    _l = linha;
    _c = coluna;
    alocaMatriz();
}
matriz::~matriz(){
    //deletas todas as linhas e depois o ponteiros
    for(int i=0; i<_l; i++){
       delete _matriz[i]; 
    }
    delete[] _matriz;
    std::cout<<"matriz deletada!\n";
}
//////////////////////////////////////////////////////


void matriz::add(int valor ,int i,int j){
    _matriz[i][j] = valor;
}

int matriz::at(int i,int j){
    return _matriz[i][j];
}

void matriz::print(){
    for(int i=0; i<_l; i++){ // linhas
        for(int j=0; j<_c; j++){ // colunas
            std::cout << this->at(i,j) <<"\t"; 
        }
        std::cout<<"\n";
    }
}
int matriz::getL(){
    return _l;
}
int matriz::getC(){
    return _c;
}


///////////////////////
void matriz::alocaMatriz(){
    // criei espaço para existir as linhas
    _matriz = new int*[_l];
    //criar as linhas uma a uma
    for(int i=0; i<_l; i++){
        _matriz[i] = new int[_c];
        for(int j=0; j<_c; j++){
            _matriz[i][j]=0;
        }
    }
    std::cout << "Matriz criada!\n";
}



