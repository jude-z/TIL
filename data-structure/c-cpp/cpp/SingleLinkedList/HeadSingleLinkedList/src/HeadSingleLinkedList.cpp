#include "HeadSingleLinkedList.h"

void HeadSingleLinkedList::insert(Data data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
    }else {
        new_node -> next = head;
        head = new_node;
    }
    element_count++;
}

int HeadSingleLinkedList::first(Data *data) {
    if (head == nullptr) return FALSE;
    before = nullptr;
    cur = head;
    *data = cur -> data;
    return TRUE;
}

int HeadSingleLinkedList::next(Data *data) {
    if (cur -> next == nullptr) return FALSE;
    before = cur;
    cur = cur -> next;
    *data = cur -> data;
    return TRUE;
}

Data HeadSingleLinkedList::remove() {
    Node* r_pos  = cur;
    Data r_data = r_pos -> data;
    if (r_pos == head) {
        if (element_count == 1) {
            head = nullptr;
        }else {
            head = cur -> next;
        }
    }else {
        before -> next = cur -> next;
    }
    delete r_pos;
    element_count--;
    return r_data;
}

int HeadSingleLinkedList::count() {
    return element_count;
}
