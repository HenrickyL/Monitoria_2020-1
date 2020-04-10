#include <iostream>
#include <vector>
#include "QX_List.h"
using namespace std;

/*

g++ main.cpp QX_List.cpp -o main

*/

int main(){
    List_Seq V(5);
    V.add(10);
    V.add(1);
    V.add(5);
    V.add(7);
    cout  << V.size() << "\n";
    V.add(8);
    V.add(11);
    V.add(11);
    V.add(11);
    V.add(0);
    cout  << V.size() << "\n";
    V.print();
    cout  << V.at(3) << "\n";
    V.remove();
    V.add(-50);
    V.print();
    
    

    

            

    return 0;
}