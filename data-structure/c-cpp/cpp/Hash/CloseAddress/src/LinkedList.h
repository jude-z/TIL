//
// Created by admin on 5/13/26.
//

#ifndef C_CPP_DATA_STRUCTURE_LINKEDLIST_H
#define C_CPP_DATA_STRUCTURE_LINKEDLIST_H

#define TRUE 1
#define FALSE 0

template<class T>
class Node {
public:
    T data;
    Node* prev;
    Node* next;
    Node(T data);
};
template<class T>
class LinkedList {
    Node<T>* head;
    Node<T>* tail;
    Node<T>* cur;
    int numOfData;
public:
    LinkedList();
    void insert(T data);
    int first(T* data);
    int next(T* data);
    T remove();
    int count();
};


#endif //C_CPP_DATA_STRUCTURE_LINKEDLIST_H