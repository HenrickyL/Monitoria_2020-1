//Cabeçalho - Header
#ifndef QX_LIST_H//se não foi defindo, defina
#define QX_LIST_H

class List_Seq{
private: // atributos
    int _capacity = 5;
    int _size = 0;
    int* _vec;

public: // métodos
    //contrututores e destrutores
    List_Seq(int capacity);                 // Construtor passando a capacidade
    List_Seq();                             // construtor padrão
    ~List_Seq();                            // Destrutor
    //

    //métodos
    void add(int valor);                    // adiciono um elemento na lista
    void remove();                          // remove o ultimo elemento
    int at(int index);                      // retorna o elemento do indice index
    int size();                             // retornar o tamanho da listas
    void print();                           // printa os elementos da lista
    //para casa
    void removeAt(int index);               // Remove o elemento do indice index
    bool removeElem(int elem);              // Remove o elemento elem da lista
};

//lista encadeada
struct Node{
    int valor;
    Node *next;
    Node *back;
};


#endif