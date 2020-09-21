#include<iostream>
#include<climits>//INT_MIN 
#include "QX_Queue.h"



Queue::Queue(){

}
Queue::~Queue(){
    if(!empty()){
        while(!empty()){
            dequeue();
        }
    }
    std::cout<<"Queue deleted!\n";
}
/////////////////////////////////////////

bool Queue::empty(){
    return first==last &&  last==nullptr;
}


void Queue::enqueue(int x){
    node* novo = new node;
    novo->value = x;
    
    if(empty()){
        first = novo;
        last=novo;
    }else{
        last->next = novo;
        last = novo;
    }
}
int Queue::dequeue(){
    int x;
    if(empty()){
        return INT_MIN;
    }
    else if(first==last){
        x = last->value;
        delete first;
        first=last=nullptr;
        return x;
    } 
    else{
        node* aux= first;
        first= first->next;
         x= aux->value;
        delete aux;
        return x;
    }
}

//retorna o valor do no first
int Queue::head(){
    if(empty()){
        return INT_MIN;
    }else{
        return first->value;
    }

}
//retorna o valor do no last
int Queue::tail(){
    if(empty()) return INT_MIN;
    else return last->value;

}


void Queue::print(){
    if(empty()){
        std::cout<<"[]\n";
    }else{
        node*aux = first;
        std::cout<<"[";
        while(aux != nullptr){
            std::cout<<aux->value << ", ";
            aux= aux->next;
        }
        std::cout<<"]\n";

    }
}
