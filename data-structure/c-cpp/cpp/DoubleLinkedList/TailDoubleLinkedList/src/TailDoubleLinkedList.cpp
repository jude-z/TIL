#include "TailDoubleLinkedList.h"

void TailDoubleLinkedList::insert(Data data) {
    Node* new_node = new Node(data);
    if (tail == nullptr) {
        tail = new_node;
    }else {
        tail -> next = new_node;
        new_node -> prev = tail;
        tail = new_node;
    }
    element_count++;
}
int TailDoubleLinkedList::first(Data* data) {
    if (tail == nullptr) return FALSE;
    cur = tail;
    *data = cur -> data;
    return TRUE;
}

int TailDoubleLinkedList::next(Data *data) {
    if (cur -> prev == nullptr) return FALSE;
    cur = cur -> prev;
    *data = cur -> data;
    return TRUE;
}

Data TailDoubleLinkedList::remove() {
    Node* r_pos = cur;
    Data r_data = cur -> data;
    if (element_count == 1) {
        tail = nullptr;
    }else {
        cur -> next -> prev = cur -> prev;
        cur -> prev -> prev = cur -> next;
    }
    delete r_pos;
    element_count--;
    return r_data;

}

int TailDoubleLinkedList::count() {
    return element_count;
}
