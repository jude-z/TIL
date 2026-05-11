#include "DummyHeadDoubleLinkedList.h"
#include <iostream>

using namespace std;

Node::Node(Data data):data(data),prev(nullptr),next(nullptr) {
}

List::DummyHeadDoubleLinkedList():cur(nullptr),numOfData(0) {
    Node* dummy_node = new Node(0);
    this -> head = dummy_node;
}

int List::count() {
    return  this -> numOfData;
}

void List::insert(Data data) {
    Node* new_node = new Node(data);
    new_node -> prev = this -> head;
    new_node -> next = this -> head -> next;
    this -> head -> next = new_node;
    this -> head -> next -> prev = new_node;
    this -> numOfData++;
}

int List::first(Data *data) {
    if (count() == 0) return FALSE;
    this -> cur = this -> head -> next;
    *data = this -> cur -> data;
    return TRUE;
}

int List::next(Data *data) {
    if (this -> cur -> next -> next == nullptr) return FALSE;
    this -> cur = this -> cur -> next;
    *data = this -> cur -> data;
    return  TRUE;
}

Data List::remove() {
    if (count() == 0) {
        cout << "no data";
        exit(-1);
    }
    Node* r_pos = this -> cur;
    Data r_data = r_pos -> data;
    this -> cur -> prev = this -> cur -> next;
    this -> numOfData--;
    delete r_pos;
    return r_data;
}
