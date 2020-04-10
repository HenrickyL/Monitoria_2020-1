//Implementação
#include<iostream>
#include "QX_List.h"

List_Seq::List_Seq(int capacity){
    _capacity = capacity;
    _vec = new int[_capacity]; // criando vetor com certo tamanho
    std::cout << "->" <<_capacity << "\n";
}
List_Seq::List_Seq(){
    std::cout <<_capacity << "\n";
    //usando valores padrões do Header
    _vec = _vec = new int[_capacity]; // criando vetor com certo tamanho
    
}         
List_Seq::~List_Seq(){
    delete[] _vec;
    std::cout << "List_Seq Destruida";
} 
// métodos      
void List_Seq::add(int valor){
    //eu posso adicionar?
    if(_size >= _capacity){// size é >= capacidade
        _capacity += _capacity/2; // aumenta metade capacidade
        std::cout << "Aumentando a Capacidade para "<< _capacity <<"!\n";
        //realocar
        int *novo = new int[_capacity];
        for(int i=0; i< _size; i++){
            novo[i] = _vec[i];
        }delete[] _vec;
        _vec = novo;
    }
    _vec[_size] = valor;
    _size++;
}
void List_Seq::remove(){
    _size--;
    std::cout << "Removido o elemento " << _vec[_size];
}      
int List_Seq::size(){
    return _size;
} 
int List_Seq::at(int index){
    if(index >= 0 && index < _size){
        return _vec[index];
    }else{
        std::cout << "Indice Inválido!";
        return -999;
    }
}
void List_Seq::print(){
    std::cout << "\n[";
    for(int i =0; i < _size ; i++ ){
        std::cout << _vec[i] << ",";
    }std::cout << "]\n";
}       