#include <iostream>
#include <vector>
#include "QX_List.h"
using namespace std;
/*
    g++ main.cpp QX_List.cpp -o main && ./main

*/


int main(){
    List_Seq V;
    V.add(-1);
    V.add(3);
    V.add(2);
    V.add(5);
    V.add(10);
    V.add(0);
    cout << "size: "<< V.size() << "\n";
    V.add(11);
    V.add(11);
    V.add(0);
    V.add(0);
    V.add(-1);
    cout << "size: "<< V.size() << "\n";
    V.print();
    cout << "at: "<< V.at(10) << "\n";
    V.remove();
    V.print();
    
    
    

    return 0;
}