//arquivo de implementação
#include <iostream>
#include "core.h"



//alocar o que tiver que ser alocado
Game::Game(int w, int h){
        //armazenar as entradas
        _dim = new Point;
        _dim->x = w;
        _dim->y = h;
        //criar as matrizes
        creteBase();
        creteScreen();
        std::cout << "Game start\n";
}

Game::~Game(){
        
        //desalocar as matrizes
        for(int i=0; i< _dim->y; i ++){
                delete[] _base[i];
        } delete[] _base;
        for(int i=0; i< _dim->y; i ++){
                delete[] _screen[i];
        } delete[] _screen;
        //desalocar a dimensão
        delete _dim;
        std::cout << "Matrix Deleted!\n";
}


///////////////////////////////////////////
void Game::creteBase(){
        int h = _dim->y;
        int w = _dim->x;
        _base = new int*[h];
        
        for(int i = 0; i < h ; i++){
            _base[i] = new int[w];
            for(int j = 0; j < w; j++){
                    _base[i][j]= 0;
            }
        }
        std::cout << "Crete integer Matrix!\n";
}
void Game::creteScreen(){
        int h = _dim->y;
        int w = _dim->x;
        _screen = new char*[h];
        
        for(int i = 0; i < h ; i++){
            _screen[i] = new char[w];
            for(int j = 0; j < w; j++){
                if(_base[i][j] == 0)
                        _screen[i][j]= '.';
                else if(_base[i][j] == 1)
                        _screen[i][j]='@';
            }
        }
        std::cout << "Convert char Matrix!\n";
}
void Game::printNum(){
         int h = _dim->y;
        int w = _dim->x;
      
        for(int i = 0; i < h ; i++){
                std::cout << "\n";
            for(int j = 0; j < w; j++){
                    std::cout << _base[i][j];
            }
        }std::cout <<"\n";

}