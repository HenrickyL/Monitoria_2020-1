#include<iostream>
#include "QX_Queue.h"
using namespace std;

int main(){
    Queue q;
    cout<<"vazia? "<<q.empty()<<endl;

    q.enqueue(5);
    q.enqueue(7);

    q.enqueue(12);

    q.enqueue(-5);
    q.enqueue(10);
    q.print();
    cout<<"retirou: "<< q.dequeue()<<endl;
    cout<<"retirou: "<< q.dequeue()<<endl;
    q.enqueue(-19);
    q.enqueue(8);
    cout<<"retirou: "<< q.dequeue()<<endl;
    q.print();

    cout<<"head: "<<q.head()<<endl;
    cout<<"tail: "<<q.tail()<<endl; 





    return 0;
}