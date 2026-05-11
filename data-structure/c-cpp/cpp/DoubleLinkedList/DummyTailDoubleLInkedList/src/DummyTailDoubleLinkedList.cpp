
#include "DummyTailDoubleLinkedList.h"
#include <iostream>

using namespace std;

Node::Node(Data data):data(data),prev(nullptr),next(nullptr) {

}

List::DummyTailDoubleLinkedList():cur(nullptr),numOfData(0) {
    Node* dummy_node = new Node(0);
    this -> tail = dummy_node;
}

int List::count() {
    return this -> numOfData;
}

void List::insert(Data data) {
    Node* new_node = new Node(data);
    new_node -> next = this -> tail;
    new_node -> prev = this -> tail -> prev;
    this -> tail -> prev = new_node;
    this -> tail -> prev -> next = new_node;
    this -> numOfData++;
}

int List::first(Data *data) {
    if (count() == 0) return  FALSE;
    this -> cur = this -> tail -> prev;
    *data = this -> cur -> data;
    return TRUE;
}

int List::next(Data *data) {
    if (this -> cur -> prev -> prev == nullptr) return  FALSE;
    this -> cur = this -> cur -> prev;
    *data = this -> cur -> data;
    return TRUE;
}

Data List::remove() {
    if (count() == 0) {
        cout << "no data";
        exit(-1);
    }
    Node* r_pos = this -> cur;
    Data r_data = this -> cur -> data;
    this -> cur -> prev -> next = this -> cur -> next;
    this -> cur -> next -> prev = this -> cur -> prev;
    this -> numOfData--;
    delete r_pos;
    return r_data;
}

