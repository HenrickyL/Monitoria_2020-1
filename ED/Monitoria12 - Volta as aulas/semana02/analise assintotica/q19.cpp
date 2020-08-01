#include <iostream>
using namespace std;
//  0               3               6
// [7, 8 , 10 ,    11   , 15 , 20 , 30], 7 , x = 20
//                 mid
//                       | 0         3|
int busca(int *v, int n, int x){
    cout <<"*";
    //caso base:
    if(n==1){
        if(v[n-1] == x){
            return 1;
        }else return 0;
    }
    //chamada da recursão
    else{
        int mid = n/2;
        //verificação:
        if(v[mid] == x){
            return 1;
        }else if(x > v[mid]){ //estar na segunda metade
            cout<<"R\n";
            return busca(v+mid+1,mid,x); //[...]->[mid+1 ... n]
        
        }else { // estar na primeira metade
            cout<<"L\n";
            return busca(v,mid-1,x );
        
        }

    }
}

int main(){
    int n,x;
    cout << "N:";
    cin >> n;
    cout << "vetor:\n";
    int v[n];
    for(int i=0; i < n; i ++){
        cin >> v[i];
    }
    cout << "X:";
    cin >> x;

    int res = busca(v,n,x);
    cout << "Achou: " << res << "\n";

}