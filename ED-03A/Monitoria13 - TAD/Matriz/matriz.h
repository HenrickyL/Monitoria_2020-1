#ifndef MATRIZ_H
#define MATRIZ_H

/*
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1 
 */

class matriz{
private://atributos
    int _l,_c;
    int** _matriz;

    void alocaMatriz();
public://construtor/destrutor/metodos
    matriz(int linha, int coluna);
    ~matriz();
    //métodos
    //acessar um elemento da matriz
    int at(int i,int j);
    // atribuit valor a posição
    void add(int valor,int i,int j);
    //printa a matriz
    void print();
public://getter e setter 
    // void setL(int line);
    // void setC(int colum);
    int getL();
    int getC();

};



#endif