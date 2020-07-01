#ifndef CORE_H
#define CORE_H

#include <iostream>

struct Point{
        int x;
        int y;
};
struct dimension{
        int width;
        int height;
};

//variável que que vai printar a tela

/*
função de atualização gráfica 
use a função
	system("clear"); // para limpar a tela
*/

void draw(int** screen, int w, int h, int* tick);

//função de atualização do sistema
void update(int** screen, int w, int h, Point* p, bool* run, int* tick);

///////////////////////////////////////////
/*
criar uma matriz de inteiros em h linhas e w colunas, esta matriz tem que estar zerada
*/
int** createScreen(int w, int h);
/*
Converte uma matriz de inteiros para uma matriz de caracteres
onde 0 são espaços e 1 é '@' / 'O'
*/
char** convertScreen(int** screen, int w, int h);
/*
Função que desenha a matriz de caraceteres na tela
*/
void printScreen(char** strScreen, int w, int h);

/*
	Função que recebe a matriz de inteiros e coloca "1" na posiçaõ p
*/
void injectionBall(int** screen, int w, int h, Point* p);
/*
	Função que define a movimentaçaõ
*/
void receiveOptions(int** screen,int w, int h, Point* p, bool* run);
#endif
