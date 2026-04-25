#include "CircularList.h"

void CircularList::insert(Data data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
        tail = new_node;
    }else {
        new_node -> next = head;
        tail -> next = new_node;
        head = new_node;
    }
    element_count++;

}

int CircularList::first(Data *data) {
    if (head == nullptr) return TRUE;
    before = nullptr;
    cur = head;
    *data = cur -> data;
    return TRUE;
}

int CircularList::next(Data *data) {
    before = cur;
    cur = cur -> next;
    *data = cur -> data;
    return TRUE;
}

Data CircularList::remove() {
    Node* r_pos = cur;
    Data r_data = cur -> data;
    if (r_pos == head) {
        if (element_count == 1) {
            head = nullptr;
            tail = nullptr;
        }else {
            head = head -> next;
            tail -> next = head;
        }
    }else if (r_pos == tail) {
        before -> next = head;
        tail = before;
    }else {
        before -> next = cur -> next;
    }
    delete r_pos;
    element_count--;
    return r_data;
}

int CircularList::count() {
    return element_count;
}
