#include <iostream>
using namespace std;

void troca(int *a, int *b){
        int aux = *a;
        *a = *b;
        *b = aux;
}


int main(){
        int x,y ;
        cin >> x;
        cin >> y;

        cout <<"x: " <<x << " y: " << y << "\n";
        
        troca(&x,&y);

        cout <<"x: " <<x << " y: " << y << "\n";

	return 0;
}
