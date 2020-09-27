#include <iostream>
#include "Qx_tree.h"

using namespace std;
int main(){

    Node* f1 = bt_create(4,nullptr,nullptr);
    Node* f2 = bt_create(5,nullptr,nullptr);
    Node* f3 = bt_create(6,nullptr,nullptr);


    Node* m1 = bt_create(3,f1,f2);
    Node* m2 = bt_create(2,nullptr,f3);

    Node* root1 = bt_create(1,m1,m2);

    // ---------------------------------------------------
    // Node* a1 = bt_create(4,nullptr,nullptr);
    // Node* a2 = bt_create(5,nullptr,nullptr);
    // Node* a3 = bt_create(6,nullptr,nullptr);


    // Node* b1 = bt_create(3,a2,a1);
    // Node* b2 = bt_create(2,nullptr,a3);

    // Node* root2 = bt_create(1,b1,b2);
    // ---------------------------------------------------


    cout<<"arv1:\n";
    // bt_print(root1);
    bt_printInterative(root1);
    // cout<<"arv2:\n";
    // bt_print(root2);


    // cout<<"qtdLeaf: " <<bt_countLeaf(root1)<<"\n";
    // root1 = bt_dellLeaf(root1);
    // bt_print(root1);

    // if(bt_identicas(root1,root2)){
    //     cout<<"\nas duas são iguais!\n";
    // }else{
    //     cout<<"\nas duas são diferentes!\n";

    // }



    cout << "qtd: "<< bt_numNos_iterativo(root1)<<"\n";


    bt_destroy(root1);
    // bt_destroy(root2);






}



// Node* a1 = bt_create(5,nullptr,nullptr);
//     Node* a2 = bt_create(6,nullptr,nullptr);
//     Node* a3 = bt_create(7,nullptr,nullptr);
//     Node* a4 = bt_create(8,nullptr,nullptr);
//     Node* a5 = bt_create(9,nullptr,nullptr);

//     Node* b1 = bt_create(4,f1,f2);
//     Node* b2 = bt_create(3,f3,nullptr);
//     Node* b3 = bt_create(2,f5,nullptr);

//     Node* c1 = bt_create(1,n2,n1);
//     Node* c2 = bt_create(0,f4,n3);

//     Node* root2 = bt_create(-1,m1,m2);