#include<iostream>
#include<vector>
#include "core.h"
using namespace std;

/*

g++ main.cpp core.cpp -o exe

*/


void update(){

}
void draw(){
    
}

int main(){
        int w,h;
        cin >> w;
        cin >> h;
	Game* g1 = new Game(w,h);
        g1->printNum();
        
        
        // //variaveis:
	// bool run = true;
	// //criação de objetos
	// 	//criar a tela,
	// 	//personagens, ...
	// // game-loop
	// while(run){
	// 	update();
	// 	draw();
	// }
	// return 0;
        delete g1;
}