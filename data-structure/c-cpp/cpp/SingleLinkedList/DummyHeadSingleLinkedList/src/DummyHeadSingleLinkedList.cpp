#include "DummyHeadSingleLinkedList.h"
#include <iostream>
using namespace std;
Node::Node(Data data):data(data),next(nullptr) {
}

List::DummyHeadSingleLinkedList():before(nullptr),cur(nullptr),numOfData(0) {
    Node* dummy_node = new Node(0);
    this -> head = dummy_node;
}

int List::count() {
    return this -> numOfData;
}

void List::insert(Data data) {
    Node* new_node = new Node(data);
    new_node -> next = this -> head -> next;
    this -> head -> next = new_node;
    this -> numOfData++;
}

int List::first(Data *data) {
    if (count() == 0) return FALSE;
    this -> before = this -> head;
    this -> cur = this -> head -> next;
    *data = this -> cur -> data;
    return TRUE;
}

int List::next(Data *data) {
    if (this -> cur -> next == nullptr) return FALSE;
    this -> before = this -> cur;
    this -> cur = this -> cur -> next;
    *data = this -> cur -> data;
    return TRUE;
}

Data List::remove() {
    if (count() == 0) {
        cout << "no data";
        exit(-1);
    }
    Node* r_pos = this -> cur;
    Data r_data = r_pos -> data;
    this -> before -> next = this -> cur -> next;
    this -> numOfData--;
    delete r_pos;
    return r_data;
}

