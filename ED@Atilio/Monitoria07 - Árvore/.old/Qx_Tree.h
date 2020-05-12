// cabeçalho / definições
/*
    Implementação de uma arvore binária na forma de Nós e utilizando classes
*/
#ifndef QX_TREE_H
#define QX_TREE_H

struct Node;

class BinaryTree{

public: // contrutor e destrutor
    BinaryTree(std::string nome);   // iniciza e/ou aloca as primeiras variaveis
    ~BinaryTree();  // desaloca tudo que foi alocado
private: // atributos - variaveis
    Node* _root = nullptr;
    int _size = 0;
    std::string _nome = "Tree*";
    //método
    void auxPrint(Node* no);

public: // métodos - Funções
    // se está vazia
    bool isEmpty(); 
    //desaloca tudo da arvore
    void clear();
    // retorna se o no passado é uma folha
    bool isLeaf(Node* no);
    // ver se tem filhos e printa uma char se é o direito esquerdo ou ambos  
    void seeSons(Node* no);
    // permite percorrer a arvore e ver os nós e retorna um ponteiro para o nó desejado
    Node* pushNode(Node* raiz,char direction);
    // Adicionar um valor/no arvore
    void add(int key, Node* father, char direction);
    //remove um elmento apartir de uma valor
    void remove(int key);
    //printa os elemento da arvore
    void print();
    // retorna a quantidade de elementos de uma arvore
    int size();
    
};




#endif