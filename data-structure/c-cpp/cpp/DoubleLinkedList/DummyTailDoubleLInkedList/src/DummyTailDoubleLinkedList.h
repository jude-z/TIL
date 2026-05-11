//
// Created by admin on 5/11/26.
//

#ifndef C_CPP_DATA_STRUCTURE_DUMMYTAILDOUBLELINKEDLIST_H
#define C_CPP_DATA_STRUCTURE_DUMMYTAILDOUBLELINKEDLIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* prev;
    Node* next;
    Node(Data data);
};
class DummyTailDoubleLinkedList {
    Node* tail;
    Node* cur;
    int numOfData;
public:
    DummyTailDoubleLinkedList();
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef DummyTailDoubleLinkedList List;


#endif //C_CPP_DATA_STRUCTURE_DUMMYTAILDOUBLELINKEDLIST_H