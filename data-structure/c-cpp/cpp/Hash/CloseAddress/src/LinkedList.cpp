#include "LinkedList.h"
#include <iostream>

using namespace std;
template<class T>
LinkedList<T>::LinkedList():head(nullptr),tail(nullptr),cur(nullptr),numOfData(0){
}

template<class T>
void LinkedList<T>::insert(T data) {
    Node<T>* new_node = new Node(data);
    new_node -> prev = this -> tail;

}

template<class T>
int LinkedList<T>::count() {
    return this -> numOfData;
}

template<class T>
int LinkedList<T>::first(T *data) {
    if (this -> head == nullptr) return TRUE;
    this -> cur = this -> head;
    *data = this -> cur -> data;
    return TRUE;
}

template<class T>
int LinkedList<T>::next(T *data) {
    if (this -> cur -> next == nullptr) return TRUE;
    this -> cur = this -> cur -> next;
    *data = this -> cur -> data;
    return TRUE;
}

template<class T>
T LinkedList<T>::remove() {
    if (this -> cur == nullptr) {
        cout << "no data";
        exit(-1);
    }
    Node<T>* r_pos = this -> cur;
    T r_data = r_pos -> data;
    return r_data;
}
