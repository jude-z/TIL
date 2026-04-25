#include "HeadTailDoubleLInkedList.h"

void HeadTailDoubleLinkedList::insert(Data data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
        tail = new_node;
    }else {
        new_node -> next = head;
        head -> prev = new_node;
        head = new_node;
    }
    element_count++;
}

int HeadTailDoubleLinkedList::first(Data *data) {
    if (head == nullptr) return FALSE;
    cur = head;
    *data = cur -> data;
    return TRUE;
}

int HeadTailDoubleLinkedList::next(Data *data) {
    if (head -> next == nullptr) return FALSE;
    cur = cur -> next;
    *data = cur -> data;
    return TRUE;
}

Data HeadTailDoubleLinkedList::remove() {
    Node* r_pos = cur;
    Data r_data = cur -> data;

    if (element_count == 1) {
        head = nullptr;
        tail = nullptr;
    }else {
        cur -> prev -> next = cur -> next;
        cur -> next -> prev = cur -> prev;
    }
    delete r_pos;
    return r_data;
}

int HeadTailDoubleLinkedList::count() {
    return element_count;
}
