#include <iostream>
#include "Qx_Stack.h"
using namespace std;

/* compila no linux

    g++ main.cpp Qx_Stack.cpp -o exe

*/




int main(){
    Stack P(5);
    cout << "Vazia? " <<P.isEmpty() << "\n";
    P.push(1);
    P.push(4);
    P.push(-3);
    P.push(5);
    P.push(-1);
    P.push(100);
    P.push(200);
    cout << "Size: " << P.size()<<"\n";
    cout << "Vazia? " <<P.isEmpty() << "\n";
    P.print();
    P.pop();
    P.pop();
    cout << "Size: " << P.size()<<"\n";
    P.push(100);
    P.print();
    cout << "Top: " << P.top() << "\n";

    return 0;
}