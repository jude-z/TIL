#ifndef C_CPP_DATA_STRUCTURE_DUMMYTAILSINGLELINKEDLIST_H
#define C_CPP_DATA_STRUCTURE_DUMMYTAILSINGLELINKEDLIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* prev;
    Node(Data data);

};

class DummyTailSingleLinkedList {
    Node* tail;
    Node* before;
    Node* cur;
    int numOfData;
public:
    DummyTailSingleLinkedList();
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef DummyTailSingleLinkedList List;


#endif //C_CPP_DATA_STRUCTURE_DUMMYTAILSINGLELINKEDLIST_H