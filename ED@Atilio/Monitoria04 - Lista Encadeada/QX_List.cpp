//Arquivo de implementação
#include <iostream>
#include "QX_List.h"
#include <climits> // INT_MIN - minimo inteiro

struct Node{
    int value;  // valor que carrega
    Node* next; // ponteiro para o próximo nó
    Node* back; // ponteiro para o nó anterior
};
//Construtor
LinkedList::LinkedList(){ //inicializamos as variaveis
    // alocamos a cabeça da lista
    _head = new Node;
    _head->value = -999;
    //circularidade da lista
    _head->next = _head;
    _head->back = _head;
}
//destrutor              
LinkedList::~LinkedList(){
    //desalocar os elementos primeiros
    Node* aux = _head->next;
    Node* dell = aux;
    while(aux != _head){
        aux = aux->next; // movo o aux para o proximo
        delete dell;    // deletamos o nó
        dell = aux;     // movemos o dell para a nova posição do aux
    }
    
    //
    delete _head;
    std::cout<< "LinkedList Destruida!\n";
}

//métodos


// Retorna se a lista está vazia
bool LinkedList::isEmpty(){
    return _head->next == _head;
} 
// Adiciona um elemento na lista                    
void LinkedList::add(int key){
    Node* novo = new Node;
    Node* aux = _head->back;
    if(isEmpty()){ // a lista está vazia
        novo->value = key;      //atribuiu um valor 
        novo->back = _head;     // fez o back apontar para a cabeça
        novo->next = _head;     // faz o proximo do novo apontar para a cabeça
        _head->next = novo;     // proximo da cabeça aponta para o novo
        _head->back = novo;     // o anterior da cabeça aponta para o novo
    }else{
        novo->value = key;      //atribuiu um valor
        novo->next = _head;     // proximo aponta para a cabeça
        novo->back = aux;       // o anterior do novo é o aux(antigo ultimo)
        aux->next = novo;       // o antigo ultimo aponta para o novo
        _head->back = novo;     // a cabeça apinta para o novo(ultimo)
    }
    _size++;                    //incrementa size
    std::cout << ">> ADD " << key << " a lista!\n";
}       
// Remove o ultimo elemento           
void LinkedList::removeLast(){      //temos de desconectar o ultimo da lista
    if(!isEmpty()){
        Node* aux = _head->back;    // faz o aux apontar para o ultimo
        
        int k = aux->value;

        _head->back = aux->back;    // novo ultimo é o penultimo
        //desconectar o ultimo
        aux->next = nullptr;
        aux->back = nullptr;
        delete aux;
        //ajustar os ponteiros
        aux = _head->back;
        aux->next = _head;
        std::cout << "<< Ultimo elemento deletado! <" << k <<">\n";
        _size--;
    }else{
        std::cout << "<< A lista está vazia!\n";
    }

}
// printa os elementos da lista                      
void LinkedList::print(){
    //verificação
    if(isEmpty()){
        std::cout << "Lista Vazia!\n";
    }else{
        Node* aux = _head->next;
        std::cout << " [ ";
        while(aux != _head){
            std::cout<< aux->value <<", ";
            aux = aux->next;
        }std::cout << "]\n";
        
    }


}
// retorna o valor do indice                       
int LinkedList::at(int index){
    if(isEmpty()){
        std::cout << "Lista Vazia\n";
        return INT_MIN;
    }else{
        Node* aux = _head->next;    //aux aponta para o primeiro elemento
        int i=0;                    // simulador de indice
        while(aux != _head){        // percorrer a lista
            if(index == i) return aux->value;
            i++;
            aux = aux->next;
        }std::cout << "indice inválido!\n";
        return  INT_MIN;
    }
}
 // retorna o tamanho da lista             
int LinkedList::size(){
    return _size;
}                         


// Limpar a lista - Desalocar os elementos
void LinkedList::clear(){  
    while(!isEmpty()){
        removeLast();
    }
    std::cout << "Lista foi Esvaziada!\n";
}

void LinkedList::printReverse(){
    if(isEmpty()){
        std::cout<< "A lista está vazia!\n";
    }else{
        Node* aux = _head->back;
        std::cout << "R [";
        while(aux != _head){
            std::cout << aux->value << ", ";
            aux = aux->back;
        }std::cout << "]\n";
    }
}