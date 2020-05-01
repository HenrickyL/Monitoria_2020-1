// cabaçalho - Definir tudo que vamos trabalhar

#ifndef QX_QUEUE_H
#define QX_QUEUE_H

struct Node;    // Estrutura de nó

class Queue{
public: // contrutor
    Queue(); 
    //destrutor
    ~Queue(); 
private:// atributos
    Node* _first = nullptr; // ponteiro para o primeiro da fila
    Node* _last = nullptr;  // ponteiro para o ultimo da fila
    int _size = 0;
public:// métodos
    bool isEmpty();     //retorna se a lista está vazia
    void enQueue(int key);     // enfileirar um elemento(add)
    void deQueue();     // desenfileirar(remover) um elemento
    void print();       // printar os elementos
    int size();         // retornar o tamanho da fila
    int head();         // retorna o primeiro
    int tail();         // retorna o ultimo elemento
};


#endif