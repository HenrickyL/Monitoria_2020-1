#include<iostream>
#include "QX_List.h"
#include<vector>

/*
    g++ main.cpp QX_List.cpp -o main
*/


int main(){
    LinkedList vec;
    std::cout << vec.empty() << "\n";
    vec.add(1);
    vec.add(2);
    vec.add(5);
    vec.add(10);
    vec.add(11);
    vec.add(-1);
    std::cout << "size: " << vec.size() << "\n";
    vec.print();
    vec.remove();
     std::cout << "size: " << vec.size() << "\n";
    //vec.remove();
    //vec.print();
    //teste do reverse
    vec.printReverse();
    std::cout << vec.empty() << "\n";
    //teste do at
    std::cout << "at: " <<  vec.at(5) << "\n";

    return 0;
}