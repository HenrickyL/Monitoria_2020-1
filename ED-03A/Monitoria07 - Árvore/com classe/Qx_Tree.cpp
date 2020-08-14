// implementação
/*
    implementação de uma arvore binária utilizando classe
*/
#include <iostream>
#include "Qx_Tree.h"

struct Node{
    int value;
    Node* left = nullptr;
    Node* right = nullptr;
};
///construtor e destrutor

BinaryTree::BinaryTree(std::string nome){
    _nome = nome;
    std::cout << "BinaryTree <" << _nome << "> Create!\n" ;
}
BinaryTree::BinaryTree(){
    std::cout << "BinaryTree Create!\n";
}
BinaryTree::~BinaryTree(){
    std::cout << "BinaryTree deleted!\n";
    //*
}


// métodos

//retorna o valor do no
int BinaryTree::key(Node* no){
    return no->value;
}

// retorna se a arvore está vazia
bool BinaryTree::isEmpty(){
    return _root == nullptr;
}
// retorna se é uma folha
bool BinaryTree::isLeaf(Node* no){
    return no->left == no->right && no->left == nullptr;
}
//printa se o nó tem filhos
void BinaryTree::seeSons(Node* no){
    if(isEmpty()){
        std::cout << "Arvore Vazia!\n";
    }else{
        //verificação para ter acesso a raiz
        if(no == nullptr){
            no = _root;
        }
        //printa o valor do no atual
        std::cout << "|\t<"<<no->value <<">\t\t|\n";
        //printa o dos filhos
        if(no->left != nullptr){
            std::cout << "|L:" << (no->left)->value<<"\t\t";
        }
        if(no->right != nullptr){
            std::cout << "R:" << (no->right)->value<<"\t|";
        }
        std::cout << "\n";
    }
}

// retorna um ponteiro para o nó utilizando a direção (l r *)
Node* BinaryTree::pushNode(Node* no, char direction){
    if(isEmpty()){
         std::cout << "Arvore Vazia!\n";
         return nullptr;
    }else{
        Node* p;
        //verificador
        if(no == nullptr){  // definir um padrão para ir no root
            p = _root;
        }else{
            p = no;
        }
        //verificação de direção
        if(direction == 'l' || direction == 'L'){
            std::cout << "PushL-> <"<< p->value<<">!\n";
            return p->left;
        }else if(direction == 'r' || direction == 'R'){
            std::cout << "PushR-> <"<< p->value<<">!\n";
            return p->right;
        }else if(direction == '*' ){
            std::cout << "PushH-> <"<< p->value<<">!\n";
            return p;
        }else{
            std::cout << "Direção inválida!\n";
            return nullptr;
        }
    }
}
// adiciona um no filho a direita ou esquerda
void BinaryTree::add(int key, Node* father, char direction){
    //criar o nó e atribuir o valor
    Node* novo = new Node;
    novo->value = key;
    _size++;

    if(isEmpty()){
        _root = novo;   //root aponta para o novo nó
        std::cout << "<< Add Root <" << key << ">!\n";
    }else{
        //tratar o problema de ja ter um no onde coloquei para adicionar
        if(father == nullptr){
            std::cout << "Raiz ja existe!\n";
            _size--;
            return; // mata a função neste ponto
        }


      //se o father for diferente de null
        //verificação de direção
        if(direction == 'l' || direction == 'L'){
            if(father->left == nullptr){
                father->left = novo;
                std::cout << "<< Add <" << key << ">!\n";
            }else{
                std::cout << "Já existe um nó nesta posição! L:<"<< (father->left)->value <<">\n";
                delete novo;
                _size--;
            }
            
        }else if(direction == 'r' || direction == 'R'){
            if(father->right == nullptr){
                father->right = novo;
                std::cout << "<< Add <" << key << ">!\n";
            }else{
                std::cout << "Já existe um nó nesta posição! R:<"<< (father->right)->value <<">\n";
                delete novo;
                _size--;
            }
        }
    }
}

// remove um nó apartir da sua chave
void BinaryTree::print(){//Node* root){
    /*
        Temos que usar recursão pq nãoo temos noção das posições
        dos nós a arvore
    */
   auxPrint(_root);
}
// remove um nó apartir da sua chave
void BinaryTree::remove(int key){
    delete 
}
// retorna a quantidade de elementos da arvore
int BinaryTree::size(){
    return auxSize(_root);
}
// busca se um chave pertence a arvore e retorna o ponteiro
Node* BinaryTree::search(int key,Node* no){
        //recursivamente
    //caso base:
    if(no == nullptr){ 
        return nullptr;
    }else if(isLeaf(no)){ // parar quando encontrar uma folha
        if(no->value == key){
            return no;
        }else{
            return nullptr;
        }
    }else if(no->value == key){ // encontrei o valor
        return no;
    }else{
        Node* L = search(key,no->left);
        Node* R = search(key,no->right);
        //retorno final
        if(L != nullptr ) return L;
        else if(R != nullptr) return R;
        else return nullptr;
    }
}






///////////////////////// private /////////////////////////////////////////////
void BinaryTree::auxPrint(Node* no){
   //caso base: encontrar um filho null
    if(no == nullptr){
        return;
    }else if(isLeaf(no)){
        std::cout << "<"<< no->value <<">\n";
    /*}else if(no->left == nullptr && no->right != nullptr ){
        std::cout << no->value <<"\n";
        std::cout << "R ";
        auxPrint(no->right);
    }else if(no->left != nullptr && no->right == nullptr){
        std::cout << no->value <<"\n";
        std::cout << "L ";
        auxPrint(no->left);*/
    }else{ // recursão
        //verificaçaõ se No for null usa o ponteiro
        std::cout << no->value <<"\n";
        
        // chamar a recursão para o lado esquerdo
        std::cout << "L ";
        auxPrint(no->left);
        // chamar a recursão para o lado direito
        std::cout << "R ";
        auxPrint(no->right);
    }
}

int BinaryTree::auxSize(Node* no){
    //caso base
    if(no == nullptr){
        return 0;
    
    }else{
        return 1 + auxSize(no->left) + auxSize(no->right);
    }
}