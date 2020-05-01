//implementação
#include "Qx_Queue.h"
#include <iostream>
#include <climits> // INT_MIN - minimo inteiro
struct Node{
    int value;      // valor
    Node* next;     // Ponteiro para o proximo no
};


//Construtor
Queue::Queue(){
    std::cout << "Queue Criada!\n";
    _last = _first = nullptr;
}

//destrutor
Queue::~Queue(){
    std::cout << "~Queue deQueue all!\n";
    while(!isEmpty())
        deQueue();
    std::cout << "Queue destruido!\n";
}
//métodos


//retorna se a lista está vazia
bool Queue::isEmpty(){
    return _first == nullptr;
}
// retorna o primeiro
int Queue::head(){
    if(!isEmpty())
        return _first->value;
    else{
        std::cout << "Lista vazia!\n";
        return INT_MIN;
    }
}   
// retorna o ultimo elemento    
int Queue::tail(){
    if(!isEmpty())
        return _last->value;
    else{
        std::cout << "Lista vazia!\n";
        return INT_MIN;
    }
}        

// enfileirar um elemento(add)
void Queue::enQueue(int key){
    Node* novo = new Node; // criar um novo nó
    novo->next = nullptr;
    novo->value = key;      // atrubuo o valor
    std::cout << "<< Add "<< key << " a fila!\n";
    _size++;            // incrementa o size
    //verificar
    if(isEmpty()){
        _first = novo;  // atualizar o primeiro
        _last = novo;   // e o ultimo
    }else{
        _last->next = novo; // anterior antigo aponta para o novo
        _last = novo;   // atualizo o novo ultimo

    }


}
// desenfileirar(remover) um elemento     
void Queue::deQueue(){
    if(!isEmpty()){
        Node* aux = _first;     // coloco um ponteiro no que vai ser retirado
        _first = _first->next;  // atualizo o novo primeiro
        std::cout << ">> dequeue " << aux->value << "\n";
        delete aux;
        _size--;
        /*
        // se tiver so um elemento
        if(_size == 0){
            _last = _first = nullptr;
        }*/
        
    }
} 
// printar os elementos    
void Queue::print(){
    Node *aux = _first;
    std:: cout << "[ ";
    while(aux != nullptr){
        std::cout << aux->value << ", ";
        aux = aux->next;
    }std:: cout << "]\n ";
}       
// retorna o tamanho da lista
int Queue::size(){
    return _size;
}         