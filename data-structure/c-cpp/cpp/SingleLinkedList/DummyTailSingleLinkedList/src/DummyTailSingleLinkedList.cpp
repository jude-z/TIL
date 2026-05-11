#include "DummyTailSingleLinkedList.h"
#include <iostream>

using namespace std;

Node::Node(Data data):data(data),prev(nullptr) {
}

List::DummyTailSingleLinkedList():before(nullptr),cur(nullptr),numOfData(0) {
    Node* dummy_node = new Node(0);
    this -> tail = dummy_node;
}

void List::insert(Data data) {
    Node* new_node = new Node(data);
    new_node -> prev = this -> tail -> prev;
    this -> tail -> prev = new_node;
    this -> numOfData++;
}

int List::first(Data *data) {
    if (count() == 0) return FALSE;
    this -> before = this -> tail;
    this -> cur = this -> tail -> prev;
    *data = this -> cur -> data;
    return TRUE;
}

int List::next(Data *data) {
    if (this -> cur -> prev == nullptr) return FALSE;
    this -> before = this -> cur;
    this -> cur = this -> cur -> prev;
    *data = this -> cur -> data;
    return TRUE;
}

int List::count() {
    return this -> numOfData;
}

Data List::remove() {
    if (count() == 0) {
        cout << "no data";
        exit(-1);
    }
    Node* r_pos = this -> cur;
    Data r_data = r_pos -> data;
    this -> before -> prev = this -> cur -> prev;
    delete(r_pos);
    return r_data;
}

