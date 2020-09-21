#include <iostream>
#include "Qx_list.h"
using namespace std;
int main(){
    List *l = new List();
    cout <<"vazia? " << l->isEmpty()<<"\n";
    l->push_back(1);
    l->push_back(5);
    l->push_back(12);
    l->push_back(20);
    l->push_back(-5);

    l->print();
    
    cout <<"deletar: ";
    int x;
    cin>>x;
    l->remove(x);
    l->print();
    
    
    l->clear();
    l->print();

   
    delete l;
    return 0;
}