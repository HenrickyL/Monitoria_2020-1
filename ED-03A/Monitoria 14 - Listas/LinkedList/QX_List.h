#ifndef QX_LIST_H
#define QX_LIST_H

struct node{
    int value;
    node* next=nullptr;
};

class List{
private:
    node* header;

public: 
    List();                         //O(1)
    ~List();                        //O(n)
    bool isEmpty();                 //O(1)
    void push(int x);               //O(n)
public: /////////////////////////////////////////
    void print();                   //O(n)
    int size();
    void clear();                   //O(n)
    // remover o elemento do indice i
    void removeAt(int index);       //O(n)
    //concatenar
    void concatenate( List *lst );  //O(n)
    //retona uma copia da minha lista
    List* copy();                   //O(n)
    //inverte a ordem dos nos sem criar novos
    void reverse();                 // > O(n)

    void printReverse();            //O(n)
    void copyArray(int* v, int n);  //O(n)
    
};



#endif