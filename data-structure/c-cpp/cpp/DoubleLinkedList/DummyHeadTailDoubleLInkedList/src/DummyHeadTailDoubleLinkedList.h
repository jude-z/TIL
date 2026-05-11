
#ifndef C_CPP_DATA_STRUCTURE_DUMMYTAILDOUBLELINKEDLIST_H
#define C_CPP_DATA_STRUCTURE_DUMMYTAILDOUBLELINKEDLIST_H

#define TRUE 1
#define FALSE 0

typedef  int Data;

class Node {
public:
    Data data;
    Node* prev;
    Node* next;
    Node(Data data);
};
class DummyTailDoubleLInkedList {
    Node* head;
    Node* tail;
    Node* cur;
    int numOfData;
public:
    DummyTailDoubleLInkedList();
    void insert_head(Data data);
    void insert_tail(Data data);
    int first(Data* data);
    int end(Data* data);
    int next(Data* data);
    int prev(Data* data);
    Data remove();
    int count();
};

typedef DummyTailDoubleLInkedList List;



#endif