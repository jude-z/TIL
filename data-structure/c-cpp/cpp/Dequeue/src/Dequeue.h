#ifndef C_CPP_DATA_STRUCTURE_DEQUEUE_H
#define C_CPP_DATA_STRUCTURE_DEQUEUE_H

#define TRUE 1
#define FALSE 0

template<class T>
class Node {
public:
    T data;
    Node* next;
    Node* prev;
    Node(T data);
};
template<class T>
class Dequeue {
    Node<T>* head;
    Node<T>* tail;
    Node<T>* cur;
public:
    Dequeue();
    void headInsert(T data);
    void tailInsert(T data);
    T headPop();
    T headPeek();
    T tailPop();
    T tailPeek();
    int empty();
};


#endif //C_CPP_DATA_STRUCTURE_DEQUEUE_H