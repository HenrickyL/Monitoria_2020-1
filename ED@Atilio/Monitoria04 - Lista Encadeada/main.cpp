#include <iostream>
#include "QX_List.h"
using namespace std;
/* 
    g++ main.cpp QX_List.cpp -o exe 
*/


int main(){
    LinkedList L;/*
    cout << L.isEmpty() << "\n";
    L.add(5);
    L.add(7);
    L.add(4);
    L.add(100);
    L.add(-15);
    L.add(2);
    L.add(-1);
    
    cout << L.isEmpty() << "\n";
    L.print();
    L.printReverse();
    cout << "Size: " <<L.size() << "\n";
    L.removeLast();
    L.removeLast();
    L.print();
    cout << "Size: " <<L.size() << "\n";
    L.clear();*/
    L.print();
    L.removeLast();
    L.add(1);
    L.add(2);
    L.add(3);
    L.add(4);
    L.add(5);
    cout << "Size: " <<L.size() << "\n";
    L.print();
    cout << L.at(3) << "\n";


    return 0;
}