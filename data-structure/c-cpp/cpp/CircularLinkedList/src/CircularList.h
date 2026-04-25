#ifndef C_CPP_CIRCULAR_LIST_H
#define C_CPP_CIRCULAR_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;
class Node {
public:
    Data data;
    Node* next;
    Node(Data data):data(data),next(nullptr){}
};
class CircularList {
    Node* head;
    Node* tail;
    Node* cur;
    Node* before;
    int element_count;
public:
    CircularList():head(nullptr),cur(nullptr),before(nullptr),element_count(0){}
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef CircularList List;

#endif
