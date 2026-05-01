#include "ArrayList.h"
#include <stdio.h>

void init(List* list) {
    list -> numOfData = 0;
    list -> curPosition = -1;
}

void insert(List* list, Data data) {
    if (list -> numOfData == LIST_LEN) {
        printf("list is full!!");
    }

    list -> array[list ->numOfData++] = data;
}

int first(List* list, Data* data) {
    if (list -> numOfData == 0) {
        printf("list is empty");
        return FALSE;
    }
    list -> curPosition = 0;
    *data = list -> array[list -> curPosition];
    return TRUE;
}

int next(List* list,Data* data) {
    if (list -> curPosition == list -> numOfData -1) {
        return FALSE;
    }
    list -> curPosition++;
    *data = list -> array[list -> curPosition];
    return TRUE;
}
Data remove_(List* list) {
    Data r_data = list -> array[list -> curPosition];
    if (list -> numOfData > 0) {
        for (int i = list -> curPosition + 1;i<list -> numOfData;i++) {
            list -> array[i-1] = list -> array[i];
        }
    }
    list -> numOfData--;
    list -> curPosition--;
    return r_data;
}
int count(List* list) {
    return list -> numOfData;
}