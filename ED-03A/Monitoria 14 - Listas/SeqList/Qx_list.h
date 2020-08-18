#ifndef QX_LIST_H
#define QX_LIST_H

//lista sequencial

// lista simplesmete encadeada
// lista duplamente encadeada
// lista encadeada circular
// lista duplamente encadeada circular



class SeqList{
private:
    int capacidade;
    int _size=0;
    int* vec = nullptr;

public:
    SeqList(int n);
    ~SeqList();
public:
    bool isFull();                                  //O(1)
    void clear();                                   //O(1)
    bool add(int valor);                            //M(1) - O(n)
    void remove(int x);                             //O(n)
    int size();                                     //O(1)
    int search(int x);                              //O(n)
    void print();                                   //O(n)
    int at(int index); // v[index] - return INT_MAX (<climits>)
    bool insertAt(int x, int index);                //O(n) poderia ser O(1)
    bool replaceAt(int x, int index);
    void removeAt(int k);
    void removeAll(int x);                          //O(n)*
};


#endif