#include <iostream>
#include "QX_Stack.h"
#include "Item.h"

//ESTE CÓDIGO É UMA SIMPLICAÇÃO, ALGUNS SUPÕEM QUE A PILHA NÃO ESTÁ VAZIA





QX_Stack::QX_Stack(int tam){
	vetor = new Item[tam];
	capacidade = tam;
	topo = 0;
}
QX_Stack::~QX_Stack(){
	if (vetor != NULL) delete[] vetor;
}
void QX_Stack::push(Item v){
	vetor[topo] = v;
	topo++;
} 
Item QX_Stack::pop(){
	topo--;
	return vetor[topo]; //valor ainda ta la ^^
} 
bool QX_Stack::isEmpty(){
	return topo == 0;
} 
bool QX_Stack::isFull(){
	return topo == capacidade;
} 
Item QX_Stack::top(){
	return vetor[topo-1];
} 