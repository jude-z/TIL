//
// Created by admin on 4/18/26.
//

#ifndef C_ARRAYLIST_H
#define C_ARRAYLIST_H
#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int Data;
typedef struct __ArrayList {
    Data arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;

void init(List* plist);
void insert(List* plist, Data data);
int first(List* plist, Data* data);
int next(List* plist, Data* data);
Data remove(List* plist);
int count(List* plist);
#endif //C_ARRAYLIST_H