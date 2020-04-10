//Cabeçalho Header
#ifndef QX_LIST_H // se não foi defindo -> não haver confilito de multiplas definições
#define QX_LIST_H //defina

//cabeçalho serve para fazer uma espécie de Interface para nossa TAD

class List_Seq{
private: //variaveis
    int _capacity = 10;
    int _size = 0;
    int* _vec;
	
public: //métodos - Funções
    List_Seq(int capacity);         //construtor
    List_Seq();                     //construtor
    ~List_Seq();                    //destrutor
    //outros meétodos
    void add(int valor);
    void remove();                  // remove o ultimo
    int at(int index);              // Retorna o elemento do indice tal
    int size();                     // retorna a quantidade de elementos 
    void print();                   // Printar os elementos
    void removeAt(int index);       // remover elemento do indice Index
    void removeElem(int elem);      // Remove o elemento elem






};

//lista encadeada, tem como base uma estrutura nó
struct Node{
    int valor;
    Node *next;
    Node *back;
}




#endif