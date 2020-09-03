#include<iostream>
#include "QX_List.h"
using namespace std;

//como compilar no terminal do linux

//->  g++ main.cpp QX_List.cpp -o exe

int main(){
  
    List L;
    cout<< "vazia? "<<L.isEmpty()<<"\n";
    L.push(1);
    L.push(7);
    L.push(5);
    L.push(9);
    L.push(4);
    cout<< "vazia? "<<L.isEmpty()<<"\n";
    L.print();
    // int i;
    // cout << "Index: ";
    // cin >> i ;
    // L.removeAt(i);
    // L.print();
    List L2;
    L2.push(-1);
    L2.push(-2);
    L2.push(-3);
    L2.push(-4);
    L2.print();

    // cout << "Concatenar:\n";
    // L2.concatenate(&L);
    // L.print();
    // L2.print();
    cout << "Copy\n";
    List* copy = L.copy();
    copy->print();
    delete copy;

    cout<<"printReverse:\n";
    L.printReverse();
    cout<< "Reverse:\n";
    L.reverse();
    L.print();

    cout<<"Vet:\n";
    int v[] = {99,76,76,87,19,65,0};
    int n =7;
    L.copyArray(v,n);
    L.print();




}

