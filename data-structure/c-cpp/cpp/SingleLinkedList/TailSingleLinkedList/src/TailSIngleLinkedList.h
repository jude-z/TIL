#ifndef TAIL_SINGLE_LIST_H
#define TAIL_SINGLE_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;
class Node {
public:
    Data data;
    Node* prev;
    Node(Data data):data(data),prev(nullptr){}
};
class SingleList{
    Node* tail;
    Node* before;
    Node* cur;
    int element_count;

public:
    SingleList():tail(nullptr),before(nullptr),cur(nullptr),element_count(0){}
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};
#endif
