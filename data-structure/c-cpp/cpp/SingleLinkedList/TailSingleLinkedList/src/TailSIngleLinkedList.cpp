#include "TailSIngleLinkedList.h"

void SingleList::insert(Data data) {
    Node* new_node = new Node(data);
    if (tail == nullptr) {
        tail = new_node;
    }else {
        new_node -> prev = tail;
        tail = new_node;
    }
    element_count++;
}
int SingleList::first(Data* data) {
    if (tail == nullptr) return FALSE;
    cur = tail;
    before = nullptr;
    *data = cur -> data;
    return TRUE;
}

int SingleList::next(Data *data) {
    if (cur -> prev == nullptr) return FALSE;
    before = cur;
    cur = cur -> prev;
    *data = cur -> data;
    return TRUE;
}

Data SingleList::remove() {
    Node* r_pos = cur;
    Data r_data = cur -> data;
    before -> prev = cur -> prev;
    element_count--;
    delete cur;
    return r_data;
}

int SingleList::count() {
    return element_count;
}
