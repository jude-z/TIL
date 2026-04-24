#include "HeadSingleLinkedList.h"

void SingleList::insert(Data data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
    }else {
        new_node -> next = head;
        head = new_node;
    }
    element_count++;
}

int SingleList::first(Data *data) {
    if (head == nullptr) return FALSE;
    before = nullptr;
    cur = head;
    *data = cur -> data;
    return TRUE;
}

int SingleList::next(Data *data) {
    if (cur -> next == nullptr) return FALSE;
    before = cur;
    cur = cur -> next;
    *data = cur -> data;
    return TRUE;
}

Data SingleList::remove() {
    Data r_data = cur -> data;
    before -> next = cur -> next;
    delete cur;
    return r_data;
}

int SingleList::count() {
    return element_count;
}
