#include "Sort.h"
void bubbleSort(Data** arr_ptr, int len) {
    Data* arr = *arr_ptr;
    for(int i = 0;i<len-1;i++) {
        for (int j = 0;j<(len -1 ) - i;j++) {
            if (arr[j] > arr[j+1]) {
                Data temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertSort(Data** arr_ptr, int len) {
    Data* arr = *arr_ptr;
    for (int i = 0;i< len -1 ;i++) {
        int idx = i;
        for (int j = i+1; j<len;j++) {
            if (arr[idx] > arr[j]) idx = j;
        }
        Data temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
}
