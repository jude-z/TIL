#ifndef TABLE_H
#define TABLE_H

#include "Slot.h"

#define TABLE_LEN 100

typedef int (*HashFunc)(Key key);

typedef struct _Table {
    Slot arr[TABLE_LEN];
    HashFunc func;

}Table;

void init(Table* table, HashFunc func);
void insert(Table* table, Key key, Value value);
Value delete(Table* table, Key key);
Value search(Table* table, Key key);

#endif
