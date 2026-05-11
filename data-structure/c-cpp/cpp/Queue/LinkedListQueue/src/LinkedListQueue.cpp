
#include "LinkedListQueue.h"
#include <iostream>
using namespace std;
Node::Node(Data data):data(data),prev(nullptr),next(nullptr) {
}

Queue::LinkedListQueue():front(nullptr),rear(nullptr) {
}

int Queue::empty() {
    if (this -> front == nullptr) return TRUE;
    return FALSE;
}

Data Queue::peek() {
    if (empty()) {
        cout << "queue is empty";
        exit(-1);
    }
    return this -> front -> data;
}

Data Queue::dequeue() {
    if (empty()) {
        cout << "queue is empty";
        exit(-1);
    }
    Node* r_pos = this -> front;
    Data r_data = r_pos -> data;
    this -> front = this -> front -> next;
    delete(r_pos);
    return r_data;
}

void Queue::enqueue(Data data) {
    Node* new_node = new Node(data);
    new_node -> prev = this -> rear;
    this -> rear -> next = new_node;
    this -> rear = new_node;
}
