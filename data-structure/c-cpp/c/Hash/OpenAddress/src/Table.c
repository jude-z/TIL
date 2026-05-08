#include "Table.h"
#include <stdlib.h>
void init(Table* table, HashFunc func) {
    table -> func = func;
    for (int i = 0;i<TABLE_LEN;i++) {
        table -> arr[i].slot_status = EMPTY;
    }
}
void insert(Table* table, Key key, Value value) {
    int hash = table -> func(key);
    table -> arr[hash].key = key;
    table -> arr[hash].val = value;
    table -> arr[hash].slot_status = INUSE;
}
Value delete(Table* table, Key key){
    int hash = table -> func(key);
    if (table -> arr[hash].slot_status != INUSE) return NULL;
    Value r_value = table -> arr[hash].val;
    table -> arr[hash].slot_status = DELETED;
    return r_value;
}
Value search(Table* table, Key key) {
    int hash = table -> func(key);
    if (table -> arr[hash].slot_status != INUSE) return NULL;
    return table -> arr[hash].val;
}
