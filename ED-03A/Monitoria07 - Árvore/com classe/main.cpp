#include<iostream>
#include "Qx_Tree.h"
using namespace std;
/*
    g++ main.cpp Qx_Tree.cpp -o main && ./main
*/


int main(){
    Node* P;
    BinaryTree T;

    T.add(5,nullptr,' ');
    
    cout << "vazia = " << T.isEmpty() << "\n";
    
    P = T.pushNode(nullptr,'*'); // temos acesso a raiz p = root
    T.seeSons(P);
    T.add(3,P,'l');
    T.add(6,P,'R');
    T.seeSons(P);
    
    P = T.pushNode(P,'l');//no da esquerda do root
    T.add(-2,P,'r');
    P = T.pushNode(nullptr,'*');//volta para root
    P = T.pushNode(P,'r');
    T.add(0,P,'r');

    //P = T.pushNode(nullptr,'l');//volta para root
    T.print();
    P = T.pushNode(nullptr,'*');//back to root
    //encontrar
    Node* B = T.search(0,P); 
    if(B!=nullptr)
        cout<< "Encontrou!<"<< T.key(B)<<">\n";
    else
        cout << "Não encontrou!\n";
    //Não encontrar
    B = T.search(100,P); 
    if(B!=nullptr)
        cout<< "Encontrou!<"<< T.key(B)<<">\n";
    else
        cout << "Não encontrou!\n";

// SIZES
    cout << "Size R:"<<T.size() << "\n";
    cout << "Size:" << T._size << "\n";






    return 0;
}