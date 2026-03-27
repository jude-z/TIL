#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    int length = sizeof(arr)/sizeof(int);
    int* left_ptr = arr;
    int* right_ptr = &arr[length-1];
    while (left_ptr < right_ptr) {
        int temp = *left_ptr;
        *left_ptr = *right_ptr;
        *right_ptr = temp;
        left_ptr++;
        right_ptr--;
    }
    for (int i = 0;i<length;i++) {
        printf("%d ",arr[i]);
    }
}
