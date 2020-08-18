#include <iostream>
#include "Qx_list.h"
#include <climits>

SeqList::SeqList(int n){
    // criando um vetor que tem tamanho n
    vec = new int[n];
    capacidade = n;
    _size = 0;
    std::cout << "SeqList Criada!\n";
}
SeqList::~SeqList(){
    if(vec != nullptr){
        delete[] vec;
        std::cout << "vetor destruido\n";
    }
}
/////////////////////////////////////////////////////////
bool SeqList::isFull(){
    return _size >= capacidade;
}
void SeqList::clear(){
    _size = 0;
    std::cout<<"Lista zerada!";
}



bool SeqList::add(int valor){
    //2 casos:  ter alcançado a capacidade ou não
    if( isFull() ){ // se estiver cheio - > realoco
        int newCap = capacidade*1.5; 
        //crio um novo vetor maior
        int* novo = new (std::nothrow) int[newCap];
        if(novo == nullptr) return false;
        //copio o antigo por novo
        for(int i=0; i< capacidade; i++){
            novo[i] = vec[i];
        }
        //delete o antigo
        delete[] vec;
        // e o novo vai ser o vetor
        vec = novo;
        capacidade = newCap;
        std::cout << "add*\n";
    }else    {
        std::cout << "add\n";
    }

        vec[_size] = valor;
        _size++;
        return true;
}



int SeqList::search(int x){
    for(int i = 0; i < _size; i++){
        if(vec[i] == x){
            return i;
        }
    }
    //se não encontrou
    std::cout << "Elemento não encontrado!\n";

    return -1;
}

void SeqList::remove(int x){
    int index = search(x);
    if(index > -1){
        vec[index] = vec[_size-1];
        _size--;
        std::cout << "elemento Removido\n";
    }
}


int SeqList::size(){
    // std::cout<<"tamanho: "<<_size<<"\n";
    return _size;
}


void SeqList::print(){
    for(int i=0; i< this->size();i++){
        std::cout << vec[i]<<", "; 
    }std::cout << "\n";
}

bool SeqList::insertAt(int x, int index){
    // [1,2,3,4,5,6]->[1,2,7,4,5,6,3] O(1) 1º MODO
    // [1,2,7,  3,4,5,6] O(n) 2º MODO
    //verificar se o index é valido
    if(0<=index && index<_size){
        //1º MODO
        // this->add(vec[index]);
        // vec[index]=x;


        // 2º MODO
        //verificação de estouro de capacidade
        if(_size+1 >= capacidade){//(ajustra)
            //tenho que realocar para aumenta a capacidade
            //criar um novo vetor maior
            int newCapacity = capacidade*1.5;
            int *novo = new (std::nothrow) int[newCapacity];
            //verificação
            if(novo==nullptr) return false; 
            // copio os elementos do antigo para o novo
            for(int i=0; i < _size; i++){
                novo[i] = vec[i];
            }
            // deleto o antigo
            delete[] vec; // não perdo a variavel ponteiro
            //faço o ponteiro vec apontar para o novo
            vec = novo; // reapontando o vec
            capacidade= newCapacity; // capacidade = capacidade*1.5
        }

        //aumenta o size
            _size++;
            //empurrar os elementos 1 casa
            for(int i=_size-1; i>=index ; i--){
                vec[i] = vec[i-1];
            }
            //colocar o x na posição
            vec[index]=x;
        
        return true;
    }else{
        return false;
    }
}    
//cont = 3 (for i=0 .. _size-count)
//  [1,6,8,8,5,2,2,2]
void SeqList::removeAll(int x){
    // passar um for verificando os iguais e pode jogar no final
        //pegar os iguais jogar pro final e diminuir o size
    int count = 0;
    int aux;
    for(int i=0; i < _size-count;i++){
        //verificação
        if(vec[i]==x){
            count++;
            //faço a troca
            aux = vec[i]; 
            vec[i] = vec[_size-count];
            vec[_size-count] =aux;
        }
    }
    _size -= count;
}