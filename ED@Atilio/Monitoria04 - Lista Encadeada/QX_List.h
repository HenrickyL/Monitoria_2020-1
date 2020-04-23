// Arquivo Header - cabeçalho

#ifndef QX_LIST_H
#define QX_LIST_H

struct Node;
/*
    * Quando trabahamos com classe chamamos as variáveis de atributos e as funções
de Métodos.
    * Encapsulamento nos permite fazer a proteção de certas métodos ou atributos
*/
class LinkedList{ 
public:
    LinkedList();               //construtor
    ~LinkedList();              // destrutor

private://atributos
    Node* _head = nullptr;              // Ponteiro para a cabeça
    int _size = 0;                      // Carregar o tamanho da Lista
public: // métodos
    bool isEmpty();                     // Retorna se a lista está vazia    <O(1)>
    void add(int key);                  // Adiciona um elemento na lista    <O(1)>
    void removeLast();                  // Remove o ultimo elemento         <O(1)>
    void print();                       // printa os elementos da lista     <O(n)>
    int at(int index);                  // retorna o valor do indice        <O(n)>
    int size();                         // retorna o tamanho da lista       <O(1)>
    void clear();                       // Limpar a lista (desaloca todos os elementos)<O(n)>
    void printReverse();                // Printa os elementos de forma invertida <O(n)>
};



#endif