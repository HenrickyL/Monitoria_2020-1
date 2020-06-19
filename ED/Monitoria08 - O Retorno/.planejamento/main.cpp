#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "core.h"

int main(){
        int w = 50, h = 25;
        int tick = 0;
        int** screen = createScreen(w,h);
        
        /* initialize random seed: */
  	srand (time(NULL));
        int x=rand() % h+1,y=rand() % w+1;
        
        

        Point *pos = new Point;
        pos->x = x;
        pos->y = y;
        
        injectionBall(screen, w, h, pos);
        
        bool run = true;
        
        while(run){
                draw(screen,w,h, &tick);
                update(screen,  w,  h, pos, &run, &tick);
        
        }
        delete screen;
        delete pos;

        return 0;
}
