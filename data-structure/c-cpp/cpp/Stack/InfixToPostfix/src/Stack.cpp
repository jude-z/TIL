#include "Stack.h"
#include <iostream>>
using namespace std;

template<class T>
Node<T>::Node(T data):data(data), next(nullptr),{
}

template<class T>
Stack<T>::Stack():head(nullptr) {

}
template<class T>
void Stack<T>::push(T data) {
    Node<T>* new_node = new Node(data);
    new_node -> next = this -> head;
    this -> head = new_node;
}
template<class T>
T Stack<T>::pop() {
    if (empty()) {
        cout << "stack is empty";
        exit(-1);
    }
    Node<T>* r_pos = this -> head;
    T r_data = r_pos -> data;
    delete r_pos;
    return r_data;
}
template<class T>
T Stack<T>::peek() {
    if (empty()) {
        cout << "stack is empty";
        exit(-1);
    }
    return this -> head -> data;
}

template<class T>
int Stack<T>::empty() {
    if (this -> head == nullptr) return TRUE;
    return FALSE;
}

