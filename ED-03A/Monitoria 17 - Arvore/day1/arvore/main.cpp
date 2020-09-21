#include <iostream>
#include "Qx_tree.h"

using namespace std;
int main(){

    Node* f1 = bt_create(5,nullptr,nullptr);
    Node* f2 = bt_create(6,nullptr,nullptr);
    Node* f3 = bt_create(7,nullptr,nullptr);
    Node* f4 = bt_create(8,nullptr,nullptr);
    Node* f5 = bt_create(9,nullptr,nullptr);

    Node* n1 = bt_create(4,f1,f2);
    Node* n2 = bt_create(3,f3,nullptr);
    Node* n3 = bt_create(2,f5,nullptr);

    Node* m1 = bt_create(1,n1,n2);
    Node* m2 = bt_create(0,f4,n3);

    Node* root = bt_create(-1,m1,m2);


    bt_print(root);

    cout<<"qtdLeaf: " <<bt_countLeaf(root)<<"\n";
    root = bt_dellLeaf(root);
    bt_print(root);


    bt_destroy(root);





}