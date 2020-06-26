#include <iostream>
using namespace std;

//questão 2 - fatorial
int fat(int n){ //n! = n* n-1 * n-2 ... 1
        //caso base
        if(n==0 || n==1) return 1;
        //recursão
        else {
                int f = n* fat(n-1);
                //cout << " * " << f;
                return f;
        }
}      

int main(){   // recursão
        int n ;
        cout << "N: ";
        cin >> n;

        cout << "N! = " << fat(n) << "\n"; 


        return 0;
}
