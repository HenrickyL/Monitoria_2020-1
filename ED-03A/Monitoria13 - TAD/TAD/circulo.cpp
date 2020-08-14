// implementação
#include <iostream>
using namespace std;
#include "circulo.h"
//construtor
circulo::circulo(ponto *p, int raio){
    _p = p;
    _raio = raio;
    cout << "Circulo Criado!\n"; 
}
circulo::circulo(int raio){
    _p = new ponto;
    v=false;
    _p->x =0;
    _p->y = 0;
    _raio=raio;
    cout << "Circulo Criado!\n"; 
}
//destrutor

circulo::~circulo(){
    if( !v )
        delete _p;
    cout<<"Circulo Destruido!\n";
}
/////////////////////////////////////

void circulo::printa(){
    cout << "x: " << _p->x << "\n"
        << "y:" << _p->y << "\n"
        << "Raio: " << _raio << "\n\n";
}
void circulo::setRaio(float r){
    _raio = r;
}
float circulo::getRaio(){
    return _raio;
}
void circulo::setX(float x){
    _p->x = x;
}