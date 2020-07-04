#ifndef CORE_H
#define CORE_H



struct Point{
        int x;
        int y;
};


class Game{
public:
        Game(int w, int h); // construtor - alocamos coisas, e definimos valores inic
        ~Game();//destrutor - desalocamos
private:
        int** _base; 
        char ** _screen;
        Point* _pos;
        Point* _dim;
        
public: // métodos
        void update();
        void draw();
private: //metodos privados
        //cria a matriz de numeros
        void creteBase();
        // converte a matriz de interio para char
        void creteScreen();
        //printar a tela
        void printScreen();
public:
        //printar a matriz
        void printNum();
};


#endif





// struct Point{
//         int x;
//         int y;
// };
// struct dimension{
//         int width;
//         int height;
// };

// //variável que que vai printar a tela

// /*
// função de atualização gráfica 
// use a função
// 	system("clear"); // para limpar a tela
// */

// void draw(int** screen, int w, int h, int* tick);

// //função de atualização do sistema
// void update(int** screen, int w, int h, Point* p, bool* run, int* tick);

// ///////////////////////////////////////////
// /*
// criar uma matriz de inteiros em h linhas e w colunas, esta matriz tem que estar zerada
// */
// int** createScreen(int w, int h);
// /*
// Converte uma matriz de inteiros para uma matriz de caracteres
// onde 0 são espaços e 1 é '@' / 'O'
// */
// char** convertScreen(int** screen, int w, int h);
// /*
// Função que desenha a matriz de caraceteres na tela
// */
// void printScreen(char** strScreen, int w, int h);

// /*
// 	Função que recebe a matriz de inteiros e coloca "1" na posiçaõ p
// */
// void injectionBall(int** screen, int w, int h, Point* p);
// /*
// 	Função que define a movimentaçaõ
// */
// void receiveOptions(int** screen,int w, int h, Point* p, bool* run);