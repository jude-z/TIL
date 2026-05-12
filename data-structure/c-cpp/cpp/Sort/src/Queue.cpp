#include "Queue.h"
#include <iostream>
using namespace std;
template<class T>
Node<T>::Node(T data):data(data),next(nullptr),prev(nullptr) {
}

template<class T>
Queue<T>::Queue():front(nullptr),rear(nullptr) {
}

template<class T>
int Queue<T>::empty() {
    if (this -> front == nullptr) return TRUE;
    return FALSE;
}

template<class T>
T Queue<T>::dequeue() {
    if (empty()) {
        cout << "no data";
        exit(-1);
    }
    Node<T>* r_pos = this -> front;
    T r_data = r_pos -> data;
    this -> front = this -> front -> next;
    delete r_pos;
    return r_data;

}

template<class T>
void Queue<T>::enqueue(T data) {
    Node<T>* new_node = new Node<T>(data);
    new_node -> prev = this -> rear;
    this -> rear = new_node;
}

template<class T>
T Queue<T>::peek() {
    if (empty()) {
        cout << "no data";
        exit(-1);
    }
    return this -> front -> data;
}
