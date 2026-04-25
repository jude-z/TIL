#include "HeadTailSingleLinkedList.h"

void HeadTailLinkedList::insert(Data data) {
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

int HeadTailLinkedList::first(Data *data) {
    if (head == nullptr) return FALSE;
    cur = head;
    before = nullptr;
    *data = cur -> data;
    return TRUE;
}

int HeadTailLinkedList::next(Data *data) {
    if (cur -> next == nullptr) return FALSE;
    before = cur;
    cur = cur -> next;
    *data = cur -> data;
    return TRUE;
}

Data HeadTailLinkedList::remove() {
    Node* r_pos = cur;
    Data r_data = cur -> data;
    if (r_pos == head) {
       if (element_count == 1) {
           head = nullptr;
           tail = nullptr;
       } else {
           head = cur -> next;
       }
    }else if (r_pos == tail) {
        tail = before;
        tail -> next = nullptr;
    }else {
        before -> next = cur -> next;
    }
    delete r_pos;
    return r_data;
}

int HeadTailLinkedList::count() {
    return element_count;
}
