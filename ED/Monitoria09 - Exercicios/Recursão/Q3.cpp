#include <iostream>
using namespace std;
//fatorial dublo 7!! : 7 * 5 * 3 * 1
int fatDuplo(int n){
        if(n%2 == 0){ 
                cout << "O numero é par\nTente Novamente!\n";
        return -1;
        }  
        else{
                //caso base
                if(n==1) return 1;   
                //chamada da recursão
                else{
                        return n * fatDuplo(n - 2);
                }
        }
}


int main(){
        int n;
        cin >> n;
        cout << n << "!!: " << fatDuplo(n) << "\n";


        return 0;
}