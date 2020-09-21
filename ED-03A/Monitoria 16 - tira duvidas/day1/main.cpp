#include <iostream>
#include <queue>
#include <climits> // INT_MIN

using namespace std;


void insert(queue<int> *main, int x){
    main->push(x);
}
int remove(queue<int> *main, queue<int> *aux){
    if(!main->empty()){
        int n=main->size();
        //pega todos(menos 1) os elementos da main e mando para o aux
        for(int i=0; i< n-1 ;i++){
            int k = main->front();
            main->pop();
            aux->push(k);
        }
        //salvo o ultimo elemento (o que vou retornar)
        int res = main->front();
        main->pop();//retiro o ultimo elemento
        while(!aux->empty()){
            main->push( aux->front() );
            aux->pop();
        }
        return res;
    }else{
        return INT_MIN;
    }
}


int main(){
    queue<int>* f1;//aux->f2
    queue<int>* f2;//aux->f2

    //alocar
    f1 = new queue<int>;
    f2 = new queue<int>;
    int n,k;
    cout<< "qtd add:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        insert(f1, k);
    }
    while(!f1->empty()){
        cout<< remove(f1,f2)<<",";
    }
    cout<<"\n";

}