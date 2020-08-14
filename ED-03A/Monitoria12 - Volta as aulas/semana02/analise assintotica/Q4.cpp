#include<iostream>

// 1 7 8 4 0 3 7 10

// 1 2 3 4 5 6 7
// 7 6 5 4 3 2 1 

int main(){
    //v
    int n=10;
    int v[n]; // 1, 2, 3, 4, 5, 6, 10 

    bool ord = true;
    for(int i=0; i< n-1; i++){
        if(v[i] > v[i+1]){
            ord = false;
            break; 
        }
    }



}

//não conclui o algoritmo pra não dar a respostas diretinho
