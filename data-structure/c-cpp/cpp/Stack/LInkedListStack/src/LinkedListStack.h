#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* next;
    Node(Data data):data(data),next(nullptr){}
};

class Stack {
    Node* head;
public:
    Stack():head(nullptr){}
    void push(Data data);
    Data pop();
    Data peek();
    int empty();
};
#endif