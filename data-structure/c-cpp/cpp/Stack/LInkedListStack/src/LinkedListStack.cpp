#include "LinkedListStack.h"
#include <iostream>
using namespace std;
void Stack::push(Data data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
    }else {
        new_node -> next = head;
        head = new_node;
    }
}

int Stack::empty() {
    return head == nullptr;
}

Data Stack::pop() {
    if (empty()) {
        cout << "No elements!!" << endl;
        exit(-1);
    }
    Node* r_pos = head;
    Data r_data = r_pos -> data;
    if (head -> next == nullptr) {
        head = nullptr;
    }else {
        head = head -> next;
    }
    delete r_pos;
    return r_data;
}

Data Stack::peek() {
    if (empty()) {
        cout << "No elements!!" << endl;
        exit(-1);
    }else {
        return head -> data;
    }
}
