#ifndef QX_LIST_H
#define QX_LIST_H

struct node{ // duplamente encadeada
    int value;
    node* next;
    node* back;
};

class Set{
private:
    node* head = nullptr;
public:
    Set();
    ~Set();
    /*
    */
    bool isEmpty();             //O(1)
    void clear();               //O(n)
    void push_back(int x);      //O(1)
    void print();               //O(n)
    void size();
    void remove(int x);         //O(n)
    void concat(Set* lst);     //O(1)
    node* search(int x);
    void removeNode(node *p);
};




#endif
