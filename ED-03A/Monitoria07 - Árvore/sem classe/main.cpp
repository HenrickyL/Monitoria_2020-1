#include <iostream>
#include "Qx_Tree.h"
using namespace std;

/*
    g++ main.cpp Qx_Tree.cpp -o main && ./main
                        compilar                                    executar
*/

int main(){
    Node* N;
    //trabalharemos da seguinte forma
    //exemplo p/ criar uma arvore vazia
    Node* root = tree_makeEmpty();
    cout <<"vazia?" <<tree_isEmpty(root) << "\n";
    
    //criar as folha
    Node* f1 = tree_makeNode(7,nullptr,nullptr);
    Node* f2 = tree_makeNode(10,nullptr,nullptr);
    Node* f3 = tree_makeNode(5,nullptr,nullptr);
    //cria os nós pais 
    Node* p2 = tree_makeNode(-1,f2,nullptr);
    Node* p1 = tree_makeNode(-3,f1,p2);
    Node* p3 = tree_makeNode(4,nullptr,f3);
    // cria a raiz
    root = tree_makeNode(2,p1,p3);
    //verificação se está vazia
     cout <<"vazia?" <<tree_isEmpty(root) << "\n";
    tree_print(root);
    //teste do pertencer
    int x;
    cout << "Digite um numero para buscar: ";
    cin >> x; 
    cout << "achou: " << tree_pertein(x,root) << "\n";
    //verificar quantidade
    cout << "qtd: " << tree_qtdNode(root) << "\n";
    //quantidade de folhas
    cout << "qtdLeaf: " << tree_qtdLeaf(root) << "\n";

    root = tree_clear(root);
     cout <<"vazia?" <<tree_isEmpty(root) << "\n";


    return 0;
}