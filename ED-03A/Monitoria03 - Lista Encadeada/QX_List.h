/*     Lista Simplismente Encadeada       */
// Cabeçalho - Apenas os prototipos das classes ou funções - basicamente inteface (POO)
// Declarar as funções e classes
#ifndef QX_LIST_H
#define QX_LIST_H


struct Node;



class LinkedList{                   // do tipo simplesmente encadeado
public: // métodos/funcções
    // construtores e destrutores
    LinkedList();
    ~LinkedList();
private: // atributos / variaveis
    Node* _head = nullptr;
    int _size = 0;
public: //métodos
    void add(int key);                  // adicionar o valor key na lista               <O(n)>
    void remove();                      // remove o ultimo                              <O(n)>
    void print();                       // printa a lista                               <O(n)>
    void printReverse();                // printar oe elementos de forma contrária      <O(n)>
    int at(int index);                  // retorna o elemento da posição index          <O(n)>
    bool empty();                       //  retorna T/F se a lista está vazia           <O(1)>
    int size();                         //  Retorna o tamanho da lista                  <O(1)> //O(n)
    //HomeWork
    void removeAt(int index);           // Remove o elemento do indice index    //
    void removeElem(int key);           // Remove a primeira aparição do elemento key
    void removeElemAll(int key);       // Remover todas as aparições do elemento key da lista


private:
    void auxReverse(Node *head);         // auxiliar da função printReverse


};


#endif