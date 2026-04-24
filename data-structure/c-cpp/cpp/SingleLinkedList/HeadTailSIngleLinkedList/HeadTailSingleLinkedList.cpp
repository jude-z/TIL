#include "HeadTailSingleLinkedList.h"

void SingleList::insert(Data data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
        tail = new_node;
    }else {
        new_node -> next = head;
        head = new_node;
    }
    element_count++;
}

int SingleList::first(Data *data) {
    if (head == nullptr) return FALSE;
    cur = head;
    before = nullptr;
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
    Node* r_pos = cur;
    Data r_data = cur -> data;
    if (element_count > 1) {
        before -> next = cur -> next;
    }
    delete r_pos;
    return r_data;
}

int SingleList::count() {
    return element_count;
}
