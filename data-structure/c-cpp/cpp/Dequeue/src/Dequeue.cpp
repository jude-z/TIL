#include "Dequeue.h"
#include <iostream>
using namespace std;
template<class T>
Node<T>::Node(T data):data(data),next(nullptr),prev(nullptr) {
}

template<class T>
Dequeue<T>::Dequeue():head(nullptr),tail(nullptr),cur(nullptr) {
}

template<class T>
void Dequeue<T>::headInsert(T data) {
    Node<T>* new_node = new Node<T>(data);
    new_node -> prev = nullptr;
    new_node -> next = this -> head;
    if (empty()) {
        this -> tail = new_node;
    }else {
        this -> head -> prev = new_node;
    }
    this -> head = new_node;
}

template<class T>
void Dequeue<T>::tailInsert(T data) {
    Node<T>* new_node = new Node<T>(data);
    new_node -> next = nullptr;
    new_node -> prev = this -> tail;
    if (empty()) {
        this -> head = new_node;
    }else {
        this -> tail -> next = new_node;
    }
    this -> tail = new_node;
}

template<class T>
T Dequeue<T>::headPop() {
    if (empty()) {
        cout << "dequeue is empty";
        exit(-1);
    }else {
        Node<T>* r_pos = this -> head;
        T r_data = r_pos -> data;
        this -> head = this -> head -> next;
        delete r_pos;
        return r_data;
    }
}

template<class T>
T Dequeue<T>::tailPop() {
    if (empty()) {
        cout << "dequeue is empty";
        exit(-1);
    }else {
        Node<T>* r_pos = this -> tail;
        T r_data = r_pos -> data;
        this -> tail = this -> tail -> prev;
        delete r_pos;
        return r_data;
    }
}

template<class T>
T Dequeue<T>::headPeek() {
    if (empty()) {
        cout << "dequeue is empty";
        exit(-1);
    }else {
        return this -> head -> data;
    }
}

template<class T>
T Dequeue<T>::tailPeek() {
    if (empty()) {
        cout << "dequeue is empty";
        exit(-1);
    }else {
        return this -> tail -> data;
    }
}

template<class T>
int Dequeue<T>::empty() {
    if (this -> head == nullptr) return TRUE;
    return FALSE;
}
