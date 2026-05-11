#include "DummyHeadTailDoubleLinkedList.h"
#include <iostream>

using namespace std;

Node::Node(Data data):data(data),prev(nullptr),next(nullptr) {

}

List::DummyTailDoubleLInkedList():cur(nullptr),numOfData(0) {
    Node* dummy_head_node = new Node(0);
    Node* dummy_tail_node = new Node(0);
    dummy_head_node -> next = dummy_tail_node;
    dummy_tail_node -> prev = dummy_head_node;
    this -> head = dummy_head_node;
    this -> tail = dummy_tail_node;
}

void List::insert_head(Data data) {
    Node* new_node = new Node(data);
    new_node -> prev = this -> head;
    new_node -> next = this -> head -> next;
    this -> head -> next -> prev = new_node;
    this -> head -> next = new_node;
    this -> numOfData++;
}

void List::insert_tail(Data data) {
    Node* new_node = new Node(data);
    new_node -> prev = this -> tail -> prev;
    new_node -> next = this -> tail;
    this -> tail -> prev = new_node;
    this -> tail -> prev -> next = new_node;
    this -> numOfData++;
}

int List::first(Data *data) {
    if (count() == 0) return FALSE;
    this -> cur = this -> head -> next;
    *data = this -> cur -> data;
    return TRUE;
}

int List::end(Data *data) {
    if (count() == 0) return FALSE;
    this -> cur = this -> tail -> prev;
    *data = this -> cur -> data;
    return TRUE;
}

int List::next(Data *data) {
    if (this -> cur -> next -> next == nullptr) return FALSE;
    this -> cur = this -> cur -> next;
    *data = this -> cur -> data;
    return TRUE;
}

int List::prev(Data *data) {
    if (this -> cur -> prev -> prev == nullptr) return FALSE;
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
    Data r_data= this -> cur -> data;
    this -> cur -> prev -> next = this -> cur -> next;
    this -> cur -> next -> prev = this -> cur -> prev;
    this -> numOfData--;
    delete r_pos;
    return r_data;
}

int List::count() {
    return this -> numOfData;
}
