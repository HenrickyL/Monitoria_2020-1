//cabeçalho - Definição
/*
        Estrutura de Pilha
    * Implementada usando Nós;

*/
#ifndef QX_STACK_H
#define QX_STACK_H

struct Node;


class Stack{
public: // construtor e destrutor
    Stack(int Capacity);    // sobrecarga
    Stack();    // carrega operações inicializadoras(alocar, inicializar variaveis)
    ~Stack();   // carrega operação encerradoreas(desalocar, destruir...)
private: // atributos - variáveis
    Node* _top = nullptr;
    int _capacity = -1;
    int _size=0;
public:// métodos - funções
    bool isEmpty();     // retorna se a pilha está vazia
    bool isFull();     // retorna se a pilha alcançou a capacidade
    int size();         // retorna a quantidade de elementos da pilha
    void print();       // Printa os elemento da pilha
    void push(int key); // empilhar o elemento(add)
    void pop();         // desempilhar (remover)
    int top();          // Retorna o elemento do topo
};


#endif

