#include <iostream>
using namespace std;

int fib(int p){ // 0 1 1 2 3 5 8 ...
        //caso base
        if( p == 0 ) return 0; // fib(0)
        else if( p == 1 ) return 1; // fib(1)
        //chamada da recursão
        else{ // 2 fib(1) + fib(0)
                return fib(p-1) + fib(p-2); 
        }
}

// fib(3): p = 3 -> fib(3-1) + fib(3-2) - > fib(2) + fib(1) - > 1 +1  = 2
// fib(2) ->  fib(2-1) + fib(2-2) - >  1 + 0 = 1


int main(){   // recursão
        int x;
        cin >> x;
        

        for(int i= 0; i< x ; i ++){
                cout << fib(i) << " ";

        }cout << "\n";


        return 0;
}
