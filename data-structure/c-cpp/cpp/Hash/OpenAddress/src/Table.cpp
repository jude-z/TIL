#include "Table.h"

#include <functional>
#include <__memory/uninitialized_algorithms.h>

Table::Table(HashFunc func):func(func) {
}

void Table::insert(Key key, Value value) {
    int hash = this -> func(key);
    this -> arr[hash].key = key;
    this -> arr[hash].value = value;
    this -> arr[hash].slot_status = INUSE;
}

Value Table::delete_(Key key) {
    int hash = this -> func(key);
    if (this -> arr[hash].slot_status != INUSE) return nullptr;
    Value r_value = this -> arr[hash].value;
    this -> arr[hash].slot_status = DELETED;
    return r_value;
}

Value Table::search(Key key) {
    int hash = this -> func(key);
    if (this -> arr[hash].slot_status != INUSE) return NULL;
    return this -> arr[hash].value;
}
