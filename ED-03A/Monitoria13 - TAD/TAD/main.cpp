#include <iostream>
using namespace std;
#include "circulo.h"

int main(){
    ponto *p = new ponto;
    p->x =10;
    p->y =20;

    circulo *C = new circulo(p,30);
    circulo *C2 = new circulo(25);
    
    // C.printa();
    // C2.printa();

    cout << "raio do C: "<< C->getRaio() <<"\n";
    cout << "raio do C2: "<< C2->getRaio() <<"\n";

    C2->setX(10);
    C2->printa();
    ponto* centro =C->getCentro();
    cout << p->x <<","<< p->y;
    delete C;
    delete C2;
    return 0;
}