#include "ArrayList.h"
#include <stdio.h>
void ListInit(List* plist) {
    plist -> numOfData = 0;
    plist -> curPosition = -1;
}

void LInsert(List* plist, Data data) {
    if (plist -> numOfData >= LIST_LEN) {
        puts("can't store data!!\n");
        return;
    }
    plist->arr[plist->numOfData] = data;
    plist -> numOfData++;
}
int LFirst(List* plist, Data* data) {
    if (plist -> numOfData == 0) return FALSE;
    plist -> curPosition = 0;
    *data = plist -> arr[plist -> curPosition];
    return TRUE;
}
int LNext(List* plist, Data* data) {
    if (plist -> curPosition >= plist -> numOfData -1) return FALSE;
    plist -> curPosition++;
    *data = plist -> arr[plist -> curPosition];
    return TRUE;
}

Data LRemove(List* plist) {
    int rpos = plist -> curPosition;
    Data data = plist -> arr[rpos];
    int num = plist -> numOfData;
    for (int i = rpos;i<num-1;i++) {
        plist -> arr[i] = plist -> arr[i+1];
    }
    plist -> numOfData--;
    plist -> curPosition--;
    return data;
}

int LCount(List* plist) {
    return plist -> numOfData;
}