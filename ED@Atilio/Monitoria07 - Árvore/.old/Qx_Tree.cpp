//implementação
#include <iostream>
#include "Qx_Tree.h"

struct Node{
    int value;
    Node* left = nullptr;
    Node* right = nullptr;
};
//Método construtor e destrutor

// iniciza e/ou aloca as primeiras variaveis
BinaryTree::BinaryTree(std::string nome){
    _nome = nome;
    std::cout << "BinaryTree Create!\n";
}   
// desaloca tudo que foi alocado
BinaryTree::~BinaryTree(){
    std::cout << "BinaryTree Deleted!\n";
    //*
} 
////////////////////////////////
//métodos

// se está vazia
bool BinaryTree::isEmpty(){
    return _root == nullptr;    
} 
//desaloca tudo da arvore
void BinaryTree::clear(){
    //*
}

// retorna se o no passado é uma folha
bool BinaryTree::isLeaf(Node* no){
    //é uma folha se não existem filhos deste nó
    return no->left== no->right && no->left == nullptr;
}
/* ver se tem filhos e printa uma char se é o direito esquerdo ou ambos
    if: seeSons(Null) -> olhar a raiz
    else: olha o nó
 */
void BinaryTree::seeSons(Node* no){
    Node* aux;//ponteito auxilizar para ver o valor dos filhos
    if(isEmpty()){
        std::cout << _nome << " Está vazia!\n";
    }else if( no == nullptr ){
        aux = _root;
    }else{
        aux = no;
    }  
    
    std::cout << "Nó raiz [";
    std:: cout << aux->value <<"]: ";

    if(aux->left != nullptr){ 
        aux = aux->left;
        std::cout << "L: "<< aux->value ;
    }
    if(aux->right != nullptr){
        aux = aux->right;
        std::cout << " R: " << aux->value;
    } 
    
    std::cout << "\n";
}

/*
    Permite percorrer a arvore e ver os nós e retorna um ponteiro para o nó desejado
    pushNode(Null,'l') : use l r -
    * : atual
*/ 

Node* BinaryTree::pushNode(Node* raiz,char direction){
    Node* p;
    if(isEmpty()){
        std::cout << "Arvore vazia!\n";
        return nullptr;
    }else if(raiz == nullptr && direction == '*'){ // trabalhando com a raiz
        p = _root;
    }else if(p != nullptr){
        p = raiz;
    }
    //verificando as direções:
    if(direction == 'l' || direction == 'L'){ //esquerda
        std::cout << "Push-> Left [" << ;
        return p->left;
    }else if(direction == 'r' || direction == 'R'){ // direita
        return p->right;
    }else if(direction == '*'){
        return p;
    }else{
        std::cout << "Direção invalida \n";
        return nullptr;
    }
}


// Adicionar um valor/no arvore
void BinaryTree::add(int key, Node* father, char direction){
    Node* novo = new Node;      // crio um novo nó
    novo->value = key;          // atribuição

    if(father == nullptr) father = _root;
    if(isEmpty()){ // trabalhando com o nó raiz 
        _root = novo;               // _root aponta para o novo nó
        std::cout << "<< Add* " << key << " to " << _nome << "!\n";
    }else{  // adicionando outros nós
        //verificação da direção
        if(direction == 'l' || direction == 'L'){
            //verificar se não tem elemento lá
            if(father->left == nullptr){
               father->left = novo;
               std::cout << "<< Add " << key << " to " << _nome << "!\n";
            }else{
                std::cout << "Add invalida <Existe nó na posição>!\n";
                delete novo;
            }
        }else if(direction == 'r' || direction == 'R'){
            if(father->right == nullptr){
                 father->right = novo;
                 std::cout << "<< Add " << key << " to " << _nome << "!\n";
            }else{
                std::cout << "Add invalida <Existe nó na posição>!\n";
                delete novo;
            }
        }else{
            std::cout << "Direção invalida!\n";
            delete novo;
        }
    }

}



//remove um elmento apartir de uma valor
void BinaryTree::remove(int key){

}
//printa os elemento da arvore
void BinaryTree::print(){
    auxPrint(_root);
    std::cout << "\n";
}
// retorna a quantidade de elementos de uma arvore
int BinaryTree::size(){
    return 1;
}

/////////////////////
//privado

void BinaryTree::auxPrint(Node* no){
    if(isLeaf(no)){
        std::cout << no->value;
    }else{
        std::cout << no->value<< ", ";
        std::cout << ", L:";
        auxPrint(no->left);
        std::cout << ", R:";
        auxPrint(no->right);

    }
}