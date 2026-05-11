#ifndef C_CPP_DATA_STRUCTURE_DUMMYHEADSINGLELINKEDLIST_H
#define C_CPP_DATA_STRUCTURE_DUMMYHEADSINGLELINKEDLIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;
class Node {
public:
    Data data;
    Node* next;
    Node(Data data);
};
class DummyHeadSingleLinkedList {
    Node* head;
    Node* before;
    Node* cur;
    int numOfData;
public:
    DummyHeadSingleLinkedList();
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef DummyHeadSingleLinkedList List;


#endif //C_CPP_DATA_STRUCTURE_DUMMYHEADSINGLELINKEDLIST_H