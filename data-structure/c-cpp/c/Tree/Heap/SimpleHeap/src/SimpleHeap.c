#include "SimpleHeap.h"
#include <stdio.h>
#include <stdlib.h>
void init(Heap* p_heap) {
    p_heap -> numOfData = 0;
}

int empty(Heap* p_heap) {
    if (p_heap -> numOfData == 0) return TRUE;
    return FALSE;
}
int getParentIdx(int idx) {
    return idx / 2;
}
int getLeftChildIdx(int idx) {
    return idx * 2;
}
int getRightChildIdx(int idx) {
    return idx * 2 + 1;
}
int getHiPriorityChildIdx(Heap* p_heap,int idx) {
    if (getLeftChildIdx(idx) > p_heap -> numOfData) {
        return 0;
    }else if (getLeftChildIdx(idx) == p_heap -> numOfData) {
        return getLeftChildIdx(idx);
    }else {
        int left_child_idx = getLeftChildIdx(idx);
        int right_child_idx = getRightChildIdx(idx);
        int left_child_priority = p_heap -> heap_arr[left_child_idx].priority;
        int right_child_priority = p_heap -> heap_arr[right_child_idx].priority;
        if (left_child_priority < right_child_priority) {
            return left_child_idx;
        }else {
            return right_child_idx;
        }
    }
}
void insert(Heap* p_heap, Data data, Priority priority) {
    HeapElem heap_elem;
    heap_elem.data = data;
    heap_elem.priority = priority;

    int idx = p_heap -> numOfData + 1;
    int parent_idx;
    while (idx != 1) {
        parent_idx = getParentIdx(idx);
        if (priority < p_heap -> heap_arr[parent_idx].priority) {
            p_heap -> heap_arr[idx] = p_heap -> heap_arr[parent_idx];
            idx = parent_idx;
        }else {
            break;
        }
    }
    p_heap -> heap_arr[idx] = heap_elem;
    p_heap -> numOfData++;
}
Data delete(Heap* p_heap){
    if (empty(p_heap)) {
        printf("heap is empty");
        exit(-1);
    }
    Data r_data = p_heap -> heap_arr[1].data;
    HeapElem heap_elem = p_heap -> heap_arr[p_heap -> numOfData];

    int parent_idx = 1;
    int child_idx;
    while (1) {
        child_idx = getHiPriorityChildIdx(p_heap,parent_idx);
        if (child_idx == 0) break;
        if (heap_elem.priority <= p_heap -> heap_arr[child_idx].priority) break;
        p_heap -> heap_arr[parent_idx] = p_heap -> heap_arr[child_idx];
        parent_idx = child_idx;
    }

    p_heap -> heap_arr[parent_idx] = heap_elem;
    p_heap -> numOfData--;
    return r_data;
}
