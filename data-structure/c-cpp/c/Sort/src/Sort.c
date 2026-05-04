#include "Sort.h"
#include <stdlib.h>
#include <string.h>


void bubbleSort(int* arr, int len) {
    for (int i = 0;i<len-1;i++) {
        for (int j = 0; j<(len -1) - i;j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void selectSort(int* arr, int len) {
    for (int i = 0;i<len-1;i++) {
        int idx = i;
        for (int j = i+1;j<len;j++) {
            if (arr[j] < arr[idx]) {
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
}

void insertSort(int* arr, int len) {
    for (int i = 1;i<len;i++) {
        int insert_data = arr[i];
        for (int j = i-1;j>=0;j--) {
            if (insert_data < arr[j]) {
                arr[j+1] = arr[j];
            }else {
                break;
            }
        }
    }
}

void mergeSort(int* arr, int left, int right) {
    if (left > right) return;
    int mid  = (left + right)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr,mid+1,right);
    int left_idx = left;
    int right_idx = mid + 1;
    int new_idx = left;
    int* new_arr = (int*)malloc(sizeof(int) * right);
    while (left_idx <= mid && right_idx <= right) {
        if (arr[left_idx] < arr[right_idx]) {
            new_arr[new_idx++] = arr[left_idx++];
        }else {
            new_arr[new_idx++] = arr[right_idx++];
        }
    }
    while (left_idx <= mid) {
        new_arr[new_idx++] = arr[left_idx++];
    }
    while (right_idx <= right) {
        new_arr[new_idx++] = arr[right_idx++];
    }
    for (int i = left;i<=right;i++) {
        arr[i] = new_arr[i];
    }
    free(new_arr);
}

void heapSort(int* arr, int len, Comp comp) {
    Heap heap;
    init(&heap,comp);
    for (int i= 0;i<len;i++) {
        insert(&heap,arr[i]);
    }
    for (int i = 0;i<len;i++) {
        arr[i] = delete(&heap);
    }
}
