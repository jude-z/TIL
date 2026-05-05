#include "BInarySearch.h"

int binarySearch(int* arr, int target, int left, int right) {
    if (left < right) return -1;
    int mid = (left + right) / 2;
    if (arr[mid] > target) return  binarySearch(arr,target,left,mid -1);
    else if (arr[mid] < target) return binarySearch(arr,target,mid + 1, right);
    return mid;
}