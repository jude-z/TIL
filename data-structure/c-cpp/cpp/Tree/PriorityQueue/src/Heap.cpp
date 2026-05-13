
#include "Heap.h"

template<class T>
Heap<T>::Heap(void (*comp)(T data1, T data2)):comp(comp) {

}

template<class T>
int Heap<T>::empty() {
    if (this -> numOfData == 0) return TRUE;
    return FALSE;
}

template<class T>
void Heap<T>::insert(T data) {
    HeapEl heapEl{data};
    int idx = this -> numOfData + 1;
    int parent_idx;
    while (idx != 1) {
        parent_idx = idx / 2;
        if (this -> comp(data,this -> arr[parent_idx]) == 1) {
            this -> arr[idx] = this -> arr[parent_idx];
            idx = parent_idx;
        }else {
            break;
        }
    }
    this -> arr[idx] = heapEl;
    this -> numOfData++;
}

template<class T>
T Heap<T>::delete_() {
    T r_data = this -> arr[1].data;
    T data = this -> arr[this -> numOfData];
    int idx = 1;
    int child_idx,left_child_idx,right_child_idx;
    while (1) {
        left_child_idx = idx * 2;
        right_child_idx = idx * 2 + 1;
        if (left_child_idx > this -> numOfData) break;
        else if (right_child_idx > this -> numOfData) {
            child_idx = left_child_idx;
            if (this -> comp(data, this -> arr[child_idx]) == 0) {
                this -> arr[idx] = this -> arr[child_idx];
                idx = child_idx;
            }else {
                break;
            }
        }else {
            if (this -> comp(this -> arr[left_child_idx], this -> arr[right_child_idx]) == 1) {
                child_idx = left_child_idx;
            }else {
                child_idx = right_child_idx;
            }
            if (this -> comp(data, this -> arr[child_idx]) == 0) {
                this -> arr[idx] = this -> arr[child_idx];
                idx = child_idx;
            }else {
                break;
            }
        }
    }
    this -> arr[idx].data = data;
    this -> numOfData--;
}
