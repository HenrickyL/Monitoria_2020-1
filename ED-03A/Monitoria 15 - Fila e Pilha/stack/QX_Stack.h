/*Pilha Stack
empilhar (push)
desempilhar (pop)

*/

#ifndef QXSTACK_H
#define QXSTACK_H

#include <iostream>
#include "Item.h" //para fazer pilha de qualque tipo


class QX_Stack{
private:
	Item *vetor = NULL; //criar ponteiro para depois alocar memória
	int topo = 0; //indice do cara que ta livre
	int capacidade = 0; //tamanho da pilha


public:
	QX_Stack(int tam); //cria pilha
	~QX_Stack(); //libera memoria
	void push(Item v); //empilha
	Item pop(); //desempilha
	bool isEmpty(); // está vazia?
	bool isFull(); // está cheia?
	Item top(); //Qual o valor no topo?






};








#endif 