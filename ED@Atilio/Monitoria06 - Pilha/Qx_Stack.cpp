//implementação
#include "Qx_Stack.h"
#include <climits> // INT_MIN - minimo inteiro
#include <iostream>
//Estrutura Nó
struct Node{
    int value;  // Valor que carrega
    Node* next; // Proximo elemento (acima no caso)
};
// Construtor com capacidade
Stack::Stack(int Capacity){
    _capacity = Capacity;
    //_top = nullptr;
    std::cout<<"Stack Criada*!\n";
}
//construtor
Stack::Stack(){
    std::cout<<"Stack Criada!\n";
}
//destrutor
Stack::~Stack(){   
    std::cout<<"Stack Destruida!\n";
    while(!isEmpty()){
        pop();
    }
    
}

//Métodos

// retorna se a pilha está vazia
bool Stack::isEmpty(){
    return _top == nullptr;
}     
// retorna se a pilha alcançou a capacidade
bool Stack::isFull(){
    if(_capacity <1){
        return false;
    }else{
        return _size >= _capacity;
    }
}     
// retorna a quantidade de elementos da pilha
int Stack::size(){
    return _size;
}    
// Printa os elemento da pilha     
void Stack::print(){ // print na ordem de saída
    std::cout<<"[";
    Node* aux = _top;
    while(aux != nullptr){
        std::cout<< aux->value << ", ";
        aux = aux->next;
    }
    std::cout << "]\n";

}  
// empilhar o elemento(add)     
void Stack::push(int key){
    Node* novo = new Node; // criando um elemento para empilhar
    novo->value = key;
    //ajuste
    Node* aft_top = _top;

    //verificações se está vazia
    if(isEmpty()){
        novo->next = nullptr;
        std::cout << "<< Empilou " << key << "!\n";
    }else if(!isFull()){
        novo->next = _top; // aponta para o top anterior
        std::cout << "<< Empilou " << key << "!\n";
    }else{
        std::cout << "<<StackFull!\n";
        delete novo;
        _size--;
        novo = aft_top;
    }
    _top = novo;
    _size++;
    

    
} 
// desempilhar (remover)
void Stack::pop(){
    if(!isEmpty()){
        Node* aux = _top;
        _top = _top->next;

        _size--;
        std::cout << ">> Deempilou " << aux->value << "!\n";
        delete aux;
    }else{
        
    std::cout << "Pilha vazia!\n";
    }
    
}         
// Retorna o elemento do topo
int Stack::top(){
    if(!isEmpty()){
        return _top->value;
    }else{
        std::cout << "Retorno inválido!\n";
        return INT_MIN;
    }
}          

