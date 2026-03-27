void MaxAndMin(int** maxPtr, int** minPtr, int* arr) {
    *maxPtr = arr;
    *minPtr = arr;
    for (int i = 1;i<5;i++) {
        if (arr[i] > **maxPtr) *maxPtr = &arr[i];
        if (arr[i] < **minPtr) *minPtr = &arr[i];
    }
}