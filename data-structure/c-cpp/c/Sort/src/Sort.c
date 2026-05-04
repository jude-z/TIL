#include "Sort.h"
#include <stdlib.h>
#include "Queue.h"

int partition(Data* arr, int left, int right);
void bubbleSort(Data* arr, int len) {
    for (int i = 0;i<len-1;i++) {
        for (int j = 0; j<(len -1) - i;j++) {
            if (arr[i] > arr[j]) {
                Data temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void selectSort(Data* arr, int len) {
    for (int i = 0;i<len-1;i++) {
        int idx = i;
        for (int j = i+1;j<len;j++) {
            if (arr[j] < arr[idx]) {
                idx = j;
            }
        }
        Data temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
}

void insertSort(Data* arr, int len) {
    for (int i = 1;i<len;i++) {
        Data insert_data = arr[i];
        for (int j = i-1;j>=0;j--) {
            if (insert_data < arr[j]) {
                arr[j+1] = arr[j];
            }else {
                break;
            }
        }
    }
}

void mergeSort(Data* arr, int left, int right) {
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

void heapSort(Data* arr, int len, Comp comp) {
    Heap heap;
    init(&heap,comp);
    for (int i= 0;i<len;i++) {
        insert(&heap,arr[i]);
    }
    for (int i = 0;i<len;i++) {
        arr[i] = delete(&heap);
    }
}
int partition(Data* arr, int left, int right) {
    int pivot = arr[left];
    int low = left + 1;
    int high = right;
    while (low <= high) {
        while (low <= right && arr[low] <= pivot) low++;
        while (high >= left + 1 && arr[high] >= pivot) high--;
        if (low <= high) {
            Data temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
    int temp = arr[left];
    arr[left] = arr[high];
    arr[high] = temp;
    return high;
}
void quickSort(Data* arr, int left, int right) {
    if (left <= right) {
        int pivot = partition(arr,left,right);
        quickSort(arr,left,pivot-1);
        quickSort(arr,pivot+1,right);
    }
}

#define BUCKET_NUM 10
void radixSort(Data* arr, int arr_len, int max_len) {
    Queue buckets[BUCKET_NUM];
    int div = 1;
    for (int i = 0;i<max_len;i++) {
        qInit(&buckets[i]);
    }
    for (int pos = 0;pos<max_len;pos++) {
        for (int i = 0;i<arr_len;i++) {
            int radix = (arr[i] / div) % 10;
            enqueue(&buckets[radix],arr[i]);
        }
        int idx = 0;
        for (int i = 0;i<BUCKET_NUM;i++) {
            while (!qEmpty(&buckets[i])) {
                arr[idx++] = dequeue(&buckets[i]);
            }

        }
        div *= 10;
    }
}
