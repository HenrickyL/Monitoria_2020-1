#include <iostream>
using namespace std;

int fat(int n){
        //caso base:
    if(n == 0 || n == 1){
        return 1;
    }else{ // chamada da recursão
        return n * fat(n-1);
    }
}


int main(){
        int n;
        cout << "N:";
        cin >> n;

        cout << fat(n) << "\n";

        return 0;
}