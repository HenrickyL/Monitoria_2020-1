//Cabaçalho - definições
#ifndef QX_TREE_H
#define QX_TREE_H
#include <iostream>
struct Node;

class BinaryTree{
public://construtor e destrutor
    BinaryTree(std::string nome);
    BinaryTree();       // inicializar valores e alocar ponteiros
    ~BinaryTree();      // desalocar e fechar o que foi aberto
    int _size = 0;
private://atributos - variaveis
    Node* _root = nullptr; // ponteiro que aponta para a raiz da arvore
    std::string _nome = "<Tree>";
    //metodo privado
    void auxPrint(Node* no);
    int auxSize(Node* no);
public://métodos - funções/operações
    //retorna o valor do no
    int key(Node* no);
    // retorna se a arvore está vazia
    bool isEmpty();
    // retorna se é uma folha
    bool isLeaf(Node* no);
    //printa se o nó tem filhos
    void seeSons(Node* no);
    // retorna um ponteiro para o nó utilizando a direção (l r *)
    Node* pushNode(Node* no, char direction);
    // adiciona um no filho a direita ou esquerda
    void add(int key, Node* father, char direction);
    //printa os elementos da sub-arvore
    void print();//Node* root);
    // remove um nó apartir da sua chave
    void remove(int key);
     // retorna a quantidade de elementos da arvore
    int size();
    // busca se um chave pertence a arvore e retorna o ponteiro
    Node* search(int key,Node* no);
    // limpa a lista(desalocar)
    void clear();
};

#endif


