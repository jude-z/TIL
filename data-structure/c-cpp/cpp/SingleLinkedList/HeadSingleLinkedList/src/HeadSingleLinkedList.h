#include "HeadSingleLinkedList.h"
#include <iostream>
#ifndef CPP_HEAD_SINGLE_LIST_H
#define CPP_HEAD_SINGLE_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;
class Node {
public:
    Data data;
    Node* next;

public:
    Node(Data data):data(data),next(nullptr){}

};
class SingleList {
    Node* head;
    Node* before;
    Node* cur;
    int element_count;

public:
    SingleList():head(nullptr),before(nullptr),cur(nullptr),element_count(0){}
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef SingleList List;

#endif

