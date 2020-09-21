#include <iostream>
#include "Qx_tree.h"


struct Node{
    int value;
    Node* left;
    Node* right;
};


Node* bt_emptyTree(){
    return nullptr;
}
Node* bt_create(int key, Node* l, Node* r){
    Node* novo = new Node;
    novo->value = key;
    novo->left = l;
    novo->right = r;
    return novo;
}

bool bt_empty(Node* node){
    return node==nullptr;
}

void bt_print(Node* root){
    //caso base:
    if(bt_empty(root)){
        
    }
    //chamada da recursão:
    else{
        std::cout<<root->value<<"\n";
        // std::cout<<"L: ";
        bt_print(root->left);
        // std::cout<<"R: ";
        bt_print(root->right);
    }
}


Node*  bt_destroy(Node* node){
    
    if(!bt_empty(node)){
        node->left = bt_destroy(node->left);
        node->right = bt_destroy(node->right);
        delete node;
    }
        return nullptr;
} 

bool isLeaf(Node* node){
    return node->left== nullptr && node->right == nullptr;
}


int bt_countLeaf(Node* node){
    if(node == nullptr) return 0;
    else if(node->left== nullptr && node->right == nullptr) return 1;
    else{
        int l= bt_countLeaf(node->left);
        int r=bt_countLeaf(node->right);

        return l+r;
    }
}


Node* bt_dellLeaf(Node* node){
    if(node==nullptr) return nullptr;
    else if(isLeaf(node)){
        delete node;
        return nullptr;
    }else{
        node->left = bt_dellLeaf(node->left);
        node->right = bt_dellLeaf(node->right);
        return node;
    }
}
