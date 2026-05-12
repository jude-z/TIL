#include "Sort.h"
#include <iostream>
#include "Queue.h"
template<class T>
Sort<T>::Sort() {
    arr = new T[ARRAY_LEN];
}

template<class T>
void Sort<T>::bubbleSort() {
    for (int i = 0;i<ARRAY_LEN - 1 ;i++) {
        for (int j = 0 ;j < ARRAY_LEN - 1 - i;j++) {
            if (this -> comp(arr[j],arr[j+1]) < 0) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template<class T>
void Sort<T>::set(int (*comp)(T t1, T t2)) {
    this -> comp = comp;
}

template<class T>
void Sort<T>::selectSort() {
    for (int i = 0;i<ARRAY_LEN-1;i++) {
        int idx = i;
        for (int j = i+1;j<ARRAY_LEN;j++) {
            if (this -> comp(arr[j],arr[idx]) == 1) {
                idx = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
}

template<class T>
void Sort<T>::insertSort() {
    for (int i = 1;i<ARRAY_LEN;i++) {
        for (int j = i-1;j>=0;j--) {
            if (this -> comp(arr[i],arr[j]) == 1) {
                arr[j+1] = arr[j];
            }else if (this -> comp(arr[i],arr[j]) == -1) {
                arr[j+1] = arr[i];
                break;
            }
        }

    }
}

template<class T>
void Sort<T>::mergeSort(int left, int right) {
    if (left > right) return;
    int mid = (left + right)/2;
    mergeSort(left, mid);
    mergeSort(mid+1,right);
    T* new_arr = new T[right];
    int left_idx = left;
    int right_idx = mid + 1;
    int new_arr_idx = left;
    while (left_idx <= mid && right_idx <= right) {
        if (this -> comp(arr[left_idx],arr[right_idx]) == 1) {
            new_arr[new_arr_idx++] = arr[left_idx++];
        }else {
            new_arr[new_arr_idx++] = arr[right_idx++];
        }
    }
    while (left_idx <= mid) {
        new_arr[new_arr_idx++] = arr[left_idx++];
    }
    while (right_idx <= right) {
        new_arr[new_arr_idx++] = arr[right_idx++];
    }

}

template<class T>
void Sort<T>::quickSort(int left, int right) {
    if (left > right) return;
    int pivot = partition(left, right);
    quickSort(left, pivot -1);
    quickSort(pivot + 1, right);
}


template<class T>
int Sort<T>::partition(int left, int right) {
    T pivot = this -> arr[left];
    int low = left + 1;
    int high = right;
    while (low <= high) {
        while (low <= right && this -> comp(this -> arr[low],pivot) >= 0) low++;
        while (high >= left + 1 && this -> comp(this -> arr[high], pivot) <= 0) high--;
        if (low <= high) {
            T temp = this -> arr[low];
            this -> arr[low] = this -> arr[high];
            this -> arr[high] = temp;
            low++;
            high--;
        }
    }
    T temp = this -> arr[left];
    this -> arr[left] = this -> arr[high];
    this -> arr[high] = temp;
    return high;
}


