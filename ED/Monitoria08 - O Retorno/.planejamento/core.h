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

//função de atualização gráfica 
void draw(int** screen, int w, int h, int* tick);

//função de atualização do sistema
void update(int** screen, int w, int h, Point* p, bool* run, int* tick);

/////////////////////////////
//criar as dimensões da "tela"
int** createScreen(int w, int h);
//converte screen para texto
char** convertScreen(int** screen, int w, int h);

void printScreen(char** strScreen, int w, int h);

void injectionBall(int** screen, int w, int h, Point* p);

void receiveOptions(int** screen,int w, int h, Point* p, bool* run);
#endif
