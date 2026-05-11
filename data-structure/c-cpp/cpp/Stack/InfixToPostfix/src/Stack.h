//
// Created by admin on 5/11/26.
//

#ifndef C_CPP_DATA_STRUCTURE_STACK_H
#define C_CPP_DATA_STRUCTURE_STACK_H

#define TRUE 1
#define FALSE 0

template<class T>
class Node {
public:
    T data;
    Node* next;
    Node(T data);
};
template<class T>
class Stack {
    Node<T>* head;
public:
    Stack();
    void push(T data);
    T pop();
    T peek();
    int empty();
};


#endif //C_CPP_DATA_STRUCTURE_STACK_H