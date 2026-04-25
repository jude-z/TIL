#include "HeadDoubleLinkedList.h"

void HeadDoubleLinkedList::insert(Data data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
    }else {
        new_node -> next = nullptr;
        new_node -> prev = head;
        head = new_node;
    }
    element_count++;
}

int HeadDoubleLinkedList::first(Data *data) {
    if (head == nullptr) return FALSE;
    cur = head;
    *data = cur -> data;
    return TRUE;
}

int HeadDoubleLinkedList::next(Data *data) {
    if (cur -> next == nullptr) return FALSE;
    cur = cur -> next;
    *data = cur -> data;
    return TRUE;
}

Data HeadDoubleLinkedList::remove() {
    Node* r_pos = cur;
    Data r_data = r_pos -> data;
    if (element_count == 1) {
        head = nullptr;
    }else {
        cur -> prev -> next = cur -> next;
        cur -> next -> prev = cur -> prev;
    }
    cur = cur -> prev;
    delete r_pos;
    element_count--;
    return r_data;
}

int HeadDoubleLinkedList::count() {
    return element_count;
}
