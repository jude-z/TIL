#ifndef SORT_H
#define SORT_H
#include "Heap.h"
typedef int Data;
void bubbleSort(Data* arr,int len);
void selectSort(Data* arr,int len);
void insertSort(Data* arr,int len);
void heapSort(Data* arr,int len,Comp comp);
void mergeSort(Data* arr,int left, int right);
void quickSort(Data* arr, int left, int right);
void radixSort(Data* arr, int arr_len, int max_len);
#endif
