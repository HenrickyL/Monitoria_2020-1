// implementação de uma arvore binária sem o uso de classe
#include "Qx_Tree.h"
#include <iostream>



struct Node{
    int value;
    Node* left = nullptr;
    Node* right = nullptr;
};

//Funções
//retorna se a arvore está vazia                                                     
bool     tree_isEmpty(Node* root){
    //basta retornar a seguinte verificação
    return root == nullptr;
}
////////////////////////////////////////////////
//Criar um ponteiro vazio 
Node*  tree_makeEmpty(){
    std::cout << "Árvore criada!\n";
    return nullptr;
}
/////////////////////////////////////////////
//retorna se é folha ou não
bool     tree_isLeaf(Node* root){
        // retornar um boolean com base no teste
        return root->left == nullptr && root->right == nullptr;
}

//Criar de um nó com base nos filhos(add)
Node*  tree_makeNode(int key, Node* left, Node* right){
    //cria um novo no dinamicamente
    Node * novo = new Node;
    //atribuo o valor
    novo->value = key;
    //atribui os filhos
    novo->left = left;
    novo->right = right;
    if(tree_isLeaf(novo))
        std::cout << "Leaf >>";
    std::cout << " No criado<"<<key<<">!\n";
    return novo;
}
/////////////////////////////////
//imprime os nós da arvore                                             
void     tree_print(Node* root){
    //temos que usar o recurso da recursividade
    //caso base:
    if(root == nullptr){
       std::cout <<"\n";
       return;
    }else{ //recursão
        //verificação para fins estéticos
        // e o print do vaalor atual
        if(!tree_isLeaf(root))
            std::cout << root->value << "\n";
        else 
            std::cout << "( " <<root->value << ")\n";
        
        //chamar a recursão para os dois lados
        std::cout << "L:";
        tree_print(root->left);
        std::cout << "R:";
        tree_print(root->right);
    }
    

}
/////////////////////////////////////////
//libera os nós da arvore                                              
Node*   tree_clear(Node* root){
    //usar recursão para deletar todos os nós
    //caso base
    if(!tree_isEmpty(root)){
        root->left =  tree_clear(root->left);
        root->right = tree_clear(root->right);
        std::cout << "<"<<root->value<<"> deleted!\n";
        delete root;    
    }
    return nullptr;
}
///////////////////////////
//retorna o valor do nó
int tree_nodeValue(Node* no){
    std::cout << "valor:" << no->value <<"\n";
    return no->value;
}
///////////////////////////////////
// verificar se valor pertence a arvore                                                 
bool     tree_pertein( int key ,Node* root ){
    //usando recursão
    // caso base: parada caso chegue nas folhas
    if(tree_isEmpty(root)){
        return false;
    }else{
        //caso esse nó tenha o valor que estou buscando
        if(root->value == key) return true;

        //posso fazer uma grande vericação
        return false || tree_pertein(key,root->left) || tree_pertein(key,root->right);
    }

}
////////////////////////////////////
//retorna a quantidade de nós que a arvore tem                                
int       tree_qtdNode(Node* root){
    //usando recursão
    //caso base: chegou em um nó vazio
    if(tree_isEmpty(root)){
        return 0;
    }else {
        return 1 + tree_qtdNode(root->left) + tree_qtdNode(root->right);
    }
    //caso a arvore esteja vazia ou encontrou um nó vazio no meio
    
}
/////////////////////////////////
//adicional
//retorna a quantidade de folhas da arvore
int tree_qtdLeaf(Node* root){
    //recursão
    //caso base:
    if(tree_isEmpty(root)){
        return 0;
    }else{
        //verificaçaõ se é folha
        if(tree_isLeaf(root)){
            return 1;
        }
        return tree_qtdLeaf(root->left) + tree_qtdLeaf(root->right);


    }
}                            