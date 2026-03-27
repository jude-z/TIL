#include <stdio.h>

int SquareByValue(int num) {
    return num * num;
}
void SquareByReference(int* ptr) {
    *ptr = *ptr * *ptr;
}
void Swap3(int* ptr1, int* ptr2, int* ptr3) {
    int temp2 = *ptr2;
    *ptr2 = *ptr1;
    int temp3 = *ptr3;
    *ptr3 = temp2;
    *ptr1 = temp3;
}