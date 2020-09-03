#include<iostream>
#include "Qx_list.h"


List::List(){
    head = new node;
    //circularidade
    head->next=head;
    head->back = head;
    std::cout<<"Lista Criada\n";
}

List::~List(){
    this->clear();
    delete head;
    std::cout<<"Lista Deletada!\n";
}


bool List::isEmpty(){
    return head->next == head;

}


void List::push_back(int x){
    node* novo = new node;
    novo->value= x;

    // if(isEmpty()){
    //     head->next= novo;
    //     novo->back = head;
    // }else{
    node* last = head->back;
    last->next = novo;
    novo->back = last;
    // }
    head->back = novo;
    novo->next=head;
}




void List::clear(){
    node* aux = head->back; //pego o ultimo
    node* ant = aux->back;
    while(aux != head){
        delete aux;
        aux=ant;
        ant = aux->back;
    }
    head->next = head;
    head->back = head;
    // std::cout<<"Lista Limpa!\n";
}


void List::print(){
    if(isEmpty()){
        std::cout<<"[]\n";
    }else{
        node* aux = head->next;
        std::cout<<"[";
        while(aux != head){
            std::cout << aux->value << ", ";
            aux = aux->next;
        }
        std::cout<<"]\n";

    }
}


void List::remove(int x){
    node* aux = head->next;
    node* ant = aux;
    if(isEmpty()){
        std::cout << "lista vazia\n";
    }else{
        while(aux != head){
            if(aux->value == x){
                ant = aux->back;
                aux= aux->next;
                delete aux->back;
                //conectar
                ant->next = aux;
                aux->back = ant;
            }
            
            aux = aux->next;
        }
        
    }
}
