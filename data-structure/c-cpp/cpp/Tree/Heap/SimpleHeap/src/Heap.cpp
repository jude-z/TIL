
#include "Heap.h"

#include <algorithm>
using namespace std;
template<class T>
HeapEl<T>::HeapEl(T data, int priority):data(data),priority(priority) {

}

template<class T>
Heap<T>::Heap():numOfData(0) {

}

template<class T>
int Heap<T>::empty() {
    if (this -> numOfData == 0) return TRUE;
    return FALSE;
}

template<class T>
void Heap<T>::insert(T data, int priority) {
    int idx = this -> numOfData + 1;
    while (idx != 1) {
        int parent_idx = idx / 2;
        if (priority < this -> arr[parent_idx].priority) {
            this -> arr[idx] = this -> arr[parent_idx];
            idx = idx / 2;
        }else {
            break;
        }
    }
    this -> arr[idx] = HeapEl<T>{data,priority};
    this -> numOfData = this -> numOfData + 1;
}

template<class T>
T Heap<T>::delete_() {
    T r_data = this -> arr[1].data;
    T data = this -> arr[this -> numOfData].data;
    int priority = this -> arr[this -> numOfData].priority;
    int idx = 1;
    while (1) {
        int left_child_idx = idx * 2;
        int right_child_idx = idx * 2 + 1;
        int left_child_priority = left_child_idx > this -> numOfData ? 0 : this -> arr[left_child_idx].priority;
        int right_child_priority = right_child_idx > this -> numOfData ? 0 : this -> arr[right_child_idx].priority;

        int child_priority;
        int child_idx;
        if (left_child_idx == 0) break;
        else if (right_child_idx == 0) {
            child_priority = left_child_priority;
            child_idx = left_child_idx;
        }
        else {
            if (left_child_priority < right_child_priority) {
                child_idx = left_child_idx;
                child_priority = left_child_priority;
            }else {
                child_idx = right_child_idx;
                child_priority = right_child_priority;
            }
        }

        if (priority < child_priority) {
            this -> arr[idx] = this -> arr[child_idx];
        }else {
            break;
        }
    }
    this -> arr[idx].data = data;
    this -> arr[idx].priority = priority;
    return r_data;
}
