#ifndef QX_LIST_H
#define QX_LIST_H

struct node{ // duplamente encadeada
    int value;
    node* next;
    node* back;
};

class List{
private:
    node* head = nullptr;
public:
    List();
    ~List();
    /*
    */
    bool isEmpty();             //O(1)
    void clear();               //O(n)
    void push_back(int x);      //O(1)
    void print();               //O(n)
    void size();
    void remove(int x);         //O(n)
};




#endif
