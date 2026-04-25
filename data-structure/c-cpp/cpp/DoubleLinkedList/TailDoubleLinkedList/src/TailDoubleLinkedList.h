#ifndef TAIL_DOUBLE_LINKED_LIST_H
#define TAIL_DOUBLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* prev;
    Node* next;
    Node(Data data):data(data),prev(nullptr),next(nullptr){};
};

class TailDoubleLinkedList {
    Node* tail;
    Node* cur;
    int element_count;
public:
    TailDoubleLinkedList():tail(nullptr),cur(nullptr),element_count(0){}
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};
typedef TailDoubleLinkedList List;

#endif
