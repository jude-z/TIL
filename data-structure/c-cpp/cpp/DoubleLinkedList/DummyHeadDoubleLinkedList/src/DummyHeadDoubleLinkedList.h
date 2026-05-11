
#ifndef C_CPP_DATA_STRUCTURE_DUMMYHEADDOUBLELINKEDLIST_H
#define C_CPP_DATA_STRUCTURE_DUMMYHEADDOUBLELINKEDLIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* next;
    Node* prev;
    Node(Data data);
};
class DummyHeadDoubleLinkedList {
    Node* head;
    Node* cur;
    int numOfData;
public:
    DummyHeadDoubleLinkedList();
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef DummyHeadDoubleLinkedList List;


#endif //C_CPP_DATA_STRUCTURE_DUMMYHEADDOUBLELINKEDLIST_H