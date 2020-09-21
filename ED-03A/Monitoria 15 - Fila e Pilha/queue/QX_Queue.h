#ifndef QX_QUEUE_H
#define QX_QUEUE_H

struct node{
    int value;
    node* next=nullptr;
};


class Queue{
private:
    node* first = nullptr;
    node* last = nullptr;
public:
    Queue();
    ~Queue();
    bool empty();
    void enqueue(int x);
    int dequeue();
    int head();
    int tail();
    void print();
};


#endif