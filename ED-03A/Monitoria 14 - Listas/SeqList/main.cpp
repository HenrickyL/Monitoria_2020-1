#include <iostream>
using namespace std;
#include "Qx_list.h"
int main(){
    int n;
    cin>>n;
    SeqList S(n);
    int aux;
    for(int i=0; i< n ;i++ ){
        cin >> aux;
        S.add(aux);
    }

    S.add(-20);
    S.add(25);
    S.add(-2);
  
    S.print();

    // cout <<"remover:";
    // cin >> aux;
    // S.remove(aux);
    // cout <<"remover:";
    // cin >> aux;
    // S.remove(aux);
    // cout <<"remover:";
    // cin >> aux;
    // S.remove(aux);

    // cout <<"Procurar:";
    // cin >> aux;
    // cout << "Está na posição: " << S.search(aux)<<"\n";
    // S.print();
    // cout << "insert: ";
    // cin >>aux;
    // cout << " in index: ";
    // cin >>n;
    // S.insertAt(aux, n);
    // S.print();
    cout <<"removeAll: ";
    cin >> aux;
    S.removeAll(aux);
    S.print();

    // cout << S.isFull()<<"\n";


    return 0;

}