#include "core.h"

//system("clear")


//função de atualização gráfica 
void draw(int** screen, int w, int h, int* tick){
        //limpa a tela
        system("clear");
        char** strScreen = convertScreen(screen,w , h);
        printScreen(strScreen, w, h);
}

//função de atualização do sistema
void update(int** screen, int w, int h, Point* p, bool* run, int* tick){
        std::cout << "|>> Ticks: "<< *tick << "\n";
        receiveOptions(screen, w, h,  p, run);
        *tick +=1;

}

//////////////////////////////////////////

//criar as dimensões da "tela"
int** createScreen(int w, int h){

        int** screen = new  int*[h];

        for (int i = 0; i< h; i++){
                screen[i] = new int[w];
                for (int j =0 ; j < w;  j++){
                        screen[i][j] = 0;
                }
        }
        return screen;
        
}
char** convertScreen(int** screen, int w, int h){
        char **strScreen = new char*[h];
        char aux = ' ';
        for (int i = 0; i< h; i++){
                strScreen[i] = new char[w];
                //strScreen[i][0] = aux;
                for (int j =0 ; j < w;  j++){
                        if(screen[i][j] == 0){
                                if(i == 0 || i == h-1 ){
                                        strScreen[i][j] = '_' ;        
                                }else if (j == 0 || j == w-1){
                                       strScreen[i][j] = '|' ; 
                                }else{
                                strScreen[i][j] = aux ;
                                }
                        }else{
                                strScreen[i][j] = '@';
                        }
                }
        }
        return strScreen;
}


void printScreen(char** strScreen, int w, int h){
        for (int i = 0; i< h; i++){
                for (int j =0 ; j< w;  j++){
                        std::cout <<  strScreen[i][j];
                }
                std::cout << "\n";
        }
}

void injectionBall(int** screen, int w, int h, Point* p){
        int x = p->x, y = p->y;
        if(x>=0 && x < w && y>=0 && y<h){
                screen[x][y] = 1;






        }else{
                std::cout << "<Valores inválidos>";
        }
}

void receiveOptions(int** screen,int w, int h, Point* p, bool* run){
        std::string str = "";
        str+= "----------Options----------\n";
        str+= "|U: up\t\t|\tD: down|\n";
        str += "|L: left\t|\tR: right|\n";
        str += "|Q: Quit\t\t\t|\n";
        str+= "--------------------------------\n";

        std::cout << str; 
        std::cout << "Digite a direção:";
        char ch;
        std::cin >> ch;

        switch(ch){
        case 'u':
                if(p->x-1 > 0){
                        screen[p->x][p->y] = 0;
                        p->x -= 1;
                }
                break;
        case 'd':
                if(p->x+1 < w-1){
                        screen[p->x][p->y] = 0;
                        p->x += 1;
                }
                break;
        case 'l':
                if(p->y -1 > 0){
                        screen[p->x][p->y] = 0;
                        p->y -= 1;
                }
                break;
        case 'r':
                if(p->y +1 < w-1){
                        screen[p->x][p->y] = 0;
                        p->y += 1;
                } 
                break;
        case 'q':
                *run = false;
                break;
        default:
                break;
        }
        screen[p->x][p->y] = 1;
        
        
}