#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "NameCard.h"
#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef NameCard* Data;
typedef struct _ArrayList {
    Data array[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;
void init(List* list);
void insert(List* list, Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
int count(List* list);
Data remove_(List* list);
typedef ArrayList List;
#endif
