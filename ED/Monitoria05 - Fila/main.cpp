#include <iostream>
#include "Qx_Queue.h"
using namespace std;
/*
    g++ main.cpp Qx_Queue.cpp -o exe
*/

int main(){ 
    Queue F;
    cout << "vazia: " << F.isEmpty() << "\n";
    F.print();
    cout << "minimo:"<<F.head() <<"\n" ;
    F.enQueue(1);
    F.enQueue(5);
    F.enQueue(4);
    F.enQueue(7);
    F.enQueue(-5);
    F.enQueue(4);
    F.enQueue(-1);
    cout << "vazia: " << F.isEmpty() << "\n";
    F.print();
    F.deQueue();
    F.deQueue();
    F.print();
    
    

    return 0;
}