//implementação
#include <iostream>
#include "QX_List.h"

//construtor
List::List(){
    header = new (std::nothrow) node;
    if(header == nullptr){
        std::cout << "erro ao alocar memória!\n";
        exit(1);
    }
    std::cout << "Lista Criada!\n";

}

List::~List(){
    node* aux = header;
    // while (aux->next != nullptr){
    //     aux = aux->next;
    //     delete header;//apaguei o conteúdo do header
    //     header = aux;
    // }
    this->clear();
    delete header;
    std::cout << "Lista destruida!\n";
    
}
///////////////////////////////////////////////////////////
bool List::isEmpty(){
    return header->next==nullptr;
}


void List::clear(){
    if(!isEmpty()){
        node* aux = header->next;
        node* ant = aux;
        while( aux != nullptr ){
            aux = aux->next;
            delete ant;
            ant = aux;
        }
        header->next= nullptr;
    }
}

void List::push(int x){
    //crio um novo nó   
    node* novo = new node;
    novo->value = x;
    //a primeira inserção
    if(isEmpty()){
        header->next =  novo; //aponto o headernext pro novo
    }else{
        node * aux = header; //crio um auxilar que está apontando para o mesmo do header
        //
        while( aux->next != nullptr){
            aux = aux->next;//andar na minha lista
        }//com isso está garantido que o aux esteja apontando para o ultimo elemento
        aux->next = novo;
    }
    std::cout <<"Elemento Adicionado!\n"; 
}

void List::print(){
    if(this->isEmpty()){
        std::cout<<"lista vazia!\n";
    }else{
        node* aux = header->next;
        std::cout <<"[ ";
        while(aux != nullptr){
            std::cout << aux->value<<", ";
            aux = aux->next;
        }std::cout << " ]\n";
    }
}

// int  List::size(){
//     return 1;
// }

void List::removeAt(int index){
    if(isEmpty()){
        std::cout<<"lista Vazia!\n";
    }else{
       int i=0;
       node* aux = header->next;
       node* p = header;


       while(aux!=nullptr){
           //estou na posição que quero remover o elemento
            if(i==index){
                aux=aux->next;
                delete p->next; // desconectando os nós
                p->next = aux;  // reconectando
                    //ja fiz o que queria fazer
                    std::cout << "Elemento removido!\n";
                    return;
            }
            aux = aux->next;
            i++;
            p= p->next;
       }
       std::cout << "index forado range!\n";
    }
}


void List::concatenate( List *lst ){
    //so valer a pena a concatenação se a segunda tiver elemento
    if(lst->isEmpty()){
        std::cout << "lista vazia\n";
    }
    else{
        node* aux = header;
        //percorrer a lista para deixar o ponteiro movel no final
        while(aux->next != nullptr){
            aux = aux->next;//mover o ponteiro
        }//ja estando no final posso conectar com o inicio da outra lista (sem ser a cabeça)
        aux->next = lst->header->next;
        lst->header->next = nullptr;
    }
}


List* List::copy(){
    List* lst= new List;
    if(!isEmpty()){
        node* aux = header->next;
        while(aux != nullptr){
            lst->push(aux->value);
            aux = aux->next;
        }
    }
    return lst;
}


node* auxReverse(node* aux){ //recursão que faz o reverse funcionar
    //caso base:
    if(aux->next==nullptr){
        return aux; // retorna o ultimo
    }
    //chamada da recursão
    else{
        node* ant = aux; // o atual
        //chamar a recursão para pegar o proximo (mover o aux)
        aux = auxReverse(aux->next);
        //proximo apontar para o anterior

        //percorrer para achar o ultimo elemento
        node* no = aux; 
        while(no->next != nullptr){
            no= no->next; //percorrer e encontro o ultimo
        }
        no->next = ant;
        ant->next =nullptr;
        return aux;
    }
}

void List::reverse(){
    if(isEmpty()){
        std::cout<<"lista vazia!\n";
    }else{
        header->next= auxReverse(header->next);
    }

}


void auxPrintReverse(node* aux){
    //caso base
    if(aux == nullptr){
        
    }
    //chamada da recursão
    else{
        //chamada da recursão
        auxPrintReverse(aux->next);
        std::cout<< aux->value<<", ";
    }
}

void List::printReverse(){
    if(isEmpty()){
        std::cout<<"Lista Vazia!\n";
    }else{
        std::cout <<"[";
        auxPrintReverse(header->next);
        std::cout <<"]\n";

    }
}


void List::copyArray(int* v, int n){
    this->clear();
    for(int i=0;i<n;i++){
        this->push(v[i]);
    }
}

