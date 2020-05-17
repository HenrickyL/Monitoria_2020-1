//implementação
#include <iostream>
#include "QX_List.h"



List_Seq::List_Seq(int capacity):
_capacity(capacity)
{
    std::cout << "List_Seq Criada!\n";
    std::cout << _capacity << "\n";
    _vec = new int[_capacity];
    
}                 
List_Seq::List_Seq(){
    std::cout << "List_Seq Criada!\n";
    std::cout << _capacity << "\n";
    _vec = new int[_capacity];
}                             
List_Seq::~List_Seq(){
    std::cout << "List_Seq Destruida!\n";
    delete[] _vec; 
}                            

//

//métodos
void List_Seq::add(int valor){
    //verificação - size é menor que a capacidade?
    if(_size >= _capacity){
        _capacity += _capacity/2;
        std::cout << "Capacidade aumentada para " << _capacity << "\n";
        //realocar
            //crio um novo
        int *novo = new int[_capacity];
            //copia do velho para o novo
        for(int i=0; i < _size; i++){
            novo[i] = _vec[i];
        }
            //deletar o velho
        delete[] _vec;
        _vec = novo;

    }
    _vec[_size] = valor;
    _size++;
    
    
}                    

void List_Seq::remove(){
    _size--;
    std::cout << "Elemento " << _vec[_size] << " removido da lista!\n";
}         
// Retorna o valor do indice                 
int List_Seq::at(int index){ 
    if(index >=0 && index<_size){
        return _vec[index];
    }else{
        std::cout << "Indice Inválido!";
        return -999;
    }
}               
int List_Seq::size(){
    return _size;
}                             
void List_Seq::print(){
    std::cout << "[";
    for(int i =0; i< _size; i++){
        std::cout << _vec[i] << ",";
    }std::cout << "]\n";
}                          
