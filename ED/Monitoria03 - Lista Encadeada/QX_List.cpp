/*     Lista Simplismente Encadeada       */

// Implementação do que foi declarado no cabeçalho
#include "QX_List.h"
#include <iostream>
#include <climits> // INT_MIN - minimo inteiro
struct Node{
    int value;
    Node *next;
};



//Construtor
LinkedList::LinkedList(){
    _head = new Node;
    _head->value = -999;
    _head->next= nullptr;
    std::cout << "LinkedList Criada!\n";
}
LinkedList::~LinkedList(){
    Node *aux =  _head->next;               // ponteriro movel
    Node *dell = aux;                       // ponteiro que vai deletar os nós
    while(aux != nullptr){      
        aux = aux->next;                     // movo para o proximo
        delete dell;                         // este estava apontando para o anterior do aux, logo delete ele
        dell = aux;                          // nova posição do dell vai ser o mesmo do aux  
    }
    delete _head;                            // deleta a cabeça
    std::cout << "LinkedList Destruida!\n";
}

// adicionar o valor key na lista
void LinkedList::add(int key){   
    Node *aux = _head->next;        // crio um ponteiro para percorrer a lista
    
    Node *novo = new Node;          // crio um novo nó
    novo->value = key;              // atribuindo um valor ao nó
    novo->next = nullptr;           // faz o novo apontar para nulo
    
    if(aux == nullptr){             // verificação é a primeira inserção ou não?
        _head->next = novo;         // head apontar para o novo (V)
    }else{                      
        while(aux->next != nullptr){// Faço o ponteiro andar pela lista até encontrar o ultimo elemento
            aux = aux->next;        
        }
        aux->next = novo;           // quando achar o ultimo eu faço ele apontar para o novo;
    }
    _size++;  //para melhorar a complexidade do método size()
    std::cout << "> Add " << key << "\n";       
}     
// remove o ultimo             
void LinkedList::remove(){
    Node *aux = _head->next;    //ponteiro que vai se mover
    Node *ant = aux;            // pomteiro para o anterior do que eu quero deletar
    while(aux->next != nullptr){    // while para o ponteiro aux ir até o ultimo
        ant = aux;                  // o anterior do ultimo
        aux = aux->next;            // depois de verificado ir para o proximo ate chagar no ultimo
    }
    std::cout << "< delete " << aux->value << "\n";
    delete aux;                     // deleto o ultimo
    ant->next = nullptr;            // faço o anterior apontar para o nulo
    _size--; // para o método size();

}    
// printa a lista                  
void LinkedList::print(){
    Node *aux = _head->next;        // ponteiro movel
    std::cout << "[ ";
    while(aux != nullptr){
        std::cout << aux->value << ",";
        aux = aux->next;
    } std::cout << " ]\n";
}
// Printar os elementos de forma revertida
void LinkedList::printReverse(){
    std::cout << "R [ ";
    auxReverse(_head->next);
    std::cout << " ]\n";
}     
// retorna o elemento da posição index                  
int LinkedList::at(int index){
    Node *aux = _head->next;    //ponteiro movel
    int i = 0;                  // indice atual, ja que vou percorrer
    while(aux != nullptr){
        if(i == index){
            return aux->value;
        }
        i++;
        aux = aux->next;
    }
    std::cout << "indice invalido!\n";
    return INT_MIN;

} 
// retorna o elemento da posição index                 
bool LinkedList::empty(){               // O(1)
    return (_head->next == nullptr ? true : false);
}    
//  retorna T/F se a lista está vazia                   
int LinkedList::size(){
    return _size;
    /*Node *aux = _head->next;  // ponteiro movel
    int size = 0;               // variavel que carrega o tamanho
    while(aux != nullptr){
        size++;                 // incremento
        aux = aux->next;        // movo o aux
    }
    return size;                //retorna o valor
    */
}

// private:
//função recursiva auxiliar do printReverse
void LinkedList::auxReverse(Node *head){
    Node *aux;
    //caso base:
    if(head == nullptr){
        //so acaba
    }else{
        aux = head->next;       // processo de mover o ponteiro para o proximo
        auxReverse(aux);        // chamando a recursividade
        std::cout << head->value << ",";
        
    }
    //caso geral
}