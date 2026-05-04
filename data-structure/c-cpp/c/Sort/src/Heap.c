#include "Heap.h"

void init(Heap* heap,Comp comp) {
    heap -> numOfData = 0;
    heap -> comp = comp;
}

int empty(Heap* heap) {
    if (heap -> numOfData == 0) return TRUE;
    return FALSE;
}
int getParentIdx(int idx) {
    return idx /2;
}
int getLeftChildIdx(int idx) {
    return idx * 2;
}
int getRightChildIdx(int idx) {
    return idx * 2 + 1;
}
int getHiPriorityChildIdx(Heap* heap, int idx) {
    if (getLeftChildIdx(idx) > heap -> numOfData) return 0;
    else if (getLeftChildIdx(idx) == heap -> numOfData) return getLeftChildIdx(idx);
    else {
        int left_child_idx = getLeftChildIdx(idx);
        int right_child_idx = getRightChildIdx(idx);
        int left_child_data = heap -> arr[left_child_idx].data;
        int right_child_data = heap -> arr[right_child_idx].data;

        if (heap -> comp(left_child_data,right_child_data) >= 0) return left_child_idx;
        else return right_child_idx;
    }
}
void insert(Heap* heap,Data data) {
    HeapElem heap_elem;
    heap_elem.data = data;
    int idx = heap -> numOfData + 1;
    int parent_idx;

    while (idx != -1) {
        parent_idx = getParentIdx(idx);
        if (heap->comp(data,heap -> arr[parent_idx].data) >= 0) {
            heap[idx] = heap[parent_idx];
            idx = parent_idx;
        }else {
            break;
        }
    }
    heap -> arr[idx] = heap_elem;
    heap -> numOfData++;
}
Data delete(Heap* heap){
    Data r_data = heap -> arr[1].data;
    HeapElem last_heap_elem = heap -> arr[heap -> numOfData];
    int parent_idx = 1;
    int child_idx;
    while (1) {
        child_idx = getHiPriorityChildIdx(heap,parent_idx);
        if (child_idx == 0) break;
        if (heap -> comp(last_heap_elem.data,heap->arr[child_idx].data) >= 0) break;
        heap -> arr[parent_idx] = heap -> arr[child_idx];
        parent_idx = child_idx;
    }
    heap -> arr[parent_idx] = last_heap_elem;
    heap -> numOfData--;
    return r_data;
}