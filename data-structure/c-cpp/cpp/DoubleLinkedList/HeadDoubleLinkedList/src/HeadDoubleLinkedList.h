//
// Created by manyin on 2026-04-24.
//

#ifndef C_CPP_HEAD_DOUBLELINKEDLIST_H
#define C_CPP_HEAD_DOUBLELINKEDLIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;
class Node {
public:
    Data data;
    Node* next;
    Node* prev;
    Node(Data data):data(data),next(nullptr),prev(nullptr){}
};
class HeadDoubleLinkedList {
    Node* head;
    Node* cur;
    int element_count;
public:
    HeadDoubleLinkedList():head(nullptr),cur(nullptr),element_count(0){}
    void insert(Data data);
    int first(Data* data);
    int next(Data* data);
    Data remove();
    int count();
};

typedef HeadDoubleLinkedList List;



#endif
