#ifndef HEAD_TAIL_LINKED_LIST_H
#define HEAD_TAIL_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* next;
    Node(Data data):data(data),next(nullptr){}
};

class HeadTailLinkedList {
    Node* head;
    Node* tail;
    Node* before;
    Node* cur;
    int element_count;
public:
    HeadTailLinkedList():head(nullptr),tail(nullptr),before(nullptr),cur(nullptr),element_count(0){}
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};
typedef  HeadTailLinkedList List;
#endif
