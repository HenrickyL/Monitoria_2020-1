#include<iostream>
using namespace std;
#include "Qx_Tree.h"

/*compilação g++

    g++ main.cpp Qx_Tree.cpp -o main && ./main
*/
void ver(Node* no){
    if(no == nullptr) cout << "...\n";
    else cout << "---\n";
}


int main(){
    BinaryTree T("Arvore 1");
    cout << "Vazia? " <<T.isEmpty() << "\n";
    T.add(5, nullptr,'l');
    cout << "Vazia? " <<T.isEmpty() << "\n";
    Node* P = T.pushNode(nullptr,'*');
    ver(P);
    T.add(-1,P,'l');
    T.add(7,P,'R');
    P = T.pushNode(P,'l');
    T.add(-5,P,'R');
    ver(P);
    //T.add(7, P,'R');
    T.seeSons(nullptr);
    T.print();

}