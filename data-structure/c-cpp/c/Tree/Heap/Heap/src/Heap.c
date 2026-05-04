#include "Heap.h"

void init(Heap* heap, Comp comp) {
    heap -> comp = comp;
    heap -> numOfData = 0;
}

int empty(Heap* heap) {
    if (heap -> numOfData == 0) return TRUE;
    return FALSE;
}

int getParentIdx(int idx) {
    return idx / 2;
}
int getLeftChildIdx(int idx) {
    return idx * 2;
}
int getRightChildIdx(int idx) {
    return idx * 2  + 1;
}
int getHiPriorityChildIdx(Heap* heap, int idx) {
    if (getLeftChildIdx(idx) > heap -> numOfData) return 0;
    else if (getLeftChildIdx(idx) == heap -> numOfData) return getLeftChildIdx(idx);
    else {
        int left_child_idx = getLeftChildIdx(idx);
        int right_child_idx = getRightChildIdx(idx);
        int left_child_data = heap -> arr[getLeftChildIdx(idx)].data;
        int right_child_data = heap -> arr[getRightChildIdx(idx)].data;
        if (heap -> comp(left_child_data,right_child_data) >= 0) return getLeftChildIdx(idx);
        return getRightChildIdx(idx);
    }
}
void insert(Heap* heap, Data data) {
    HeapElem insert_heap_elem;
    insert_heap_elem.data = data;
    int idx = heap -> numOfData + 1;
    int parent_idx;
    while (idx != 1) {
        parent_idx = getParentIdx(idx);
        if (heap -> comp(data, heap -> arr[parent_idx].data) >= 0) {
            heap -> arr[idx] = heap -> arr[parent_idx];
            idx = parent_idx;
        }else {
            break;
        }
    }
    heap -> arr[idx] = insert_heap_elem;
    heap -> numOfData++;
}

Data delete(Heap* heap){
    HeapElem delete_heap_elem = heap -> arr[1];
    Data delete_data = delete_heap_elem.data;
    HeapElem insert_heap_elem = heap -> arr[heap -> numOfData];
    Data insert_data = insert_heap_elem.data;
    int parent_idx = 1;
    int child_idx;
    while (1) {
        child_idx = getHiPriorityChildIdx(heap,parent_idx);
        if (child_idx == 0) break;
        if (heap -> comp(insert_data,heap -> arr[child_idx].data) >= 0) break;
        heap -> arr[child_idx] = heap -> arr[parent_idx];
        parent_idx = child_idx;
    }
    heap -> arr[parent_idx] = insert_heap_elem;
    heap -> numOfData--;
    return delete_data;
}