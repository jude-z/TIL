#ifndef HEAD_TAIL_DOUBLE_LINKED_LIST_H
#define HEAD_TAIL_DOUBLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* next;
    Node* prev;
public:
    Node(Data data):data(data),next(nullptr),prev(nullptr){}
};
class HeadTailDoubleLinkedList {
    Node* head;
    Node* tail;
    Node* cur;
    int element_count;
public:
    HeadTailDoubleLinkedList():head(nullptr),cur(nullptr),tail(nullptr),element_count(0){}
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef HeadTailDoubleLinkedList List;
#endif
