#include <iostream>
using namespace std;

int fib(int n){
        if(n == 0){
            return 0;
        }else if(n == 1){
            return 1;
        }else{
            return fib(n-1) + fib(n-2);
        }   
}

void fibVet(int *v,int n){
        //caso base:

        //chamar a recursão:
        if(n>0){
                v[n-1] = fib(n-1);
                fibVet(v,n-1);
        }

}

void printVet(int*v, int n){
        if(n>0){
                printVet(v,  n-1);
                cout << " " <<v[n-1];
        }else cout << "\n";
}

int main(){
        int  n;
        cout << "N: ";
        cin >> n;
        int v[n];
        cout << "fibVet["<<n << "]: ";
        fibVet(v,n);
        printVet(v, n);
        cout << "\n";

        return 0;
}