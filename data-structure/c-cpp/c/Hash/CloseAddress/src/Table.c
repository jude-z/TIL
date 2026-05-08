#include "Table.h"
#include <stdlib.h>
#include <stdio.h>
void init(Table* table, HashFunc func) {
    for (int i = 0; i<TABLE_LEN;i++) {
        init(&table -> arr[i]);
    }
    table -> func = func;
}

void insert(Table* table, Key key, Value value) {
    int hash = table -> func(key);
    Slot slot = {key,value};
    if (search(table,key) != NULL) {
        puts("key exist");
        exit(-1);
    }
    insert(&table -> arr[hash],&slot);
}

Value delete(Table* table, Key key){
    int hash = table -> func(key);
    List list = table -> arr[hash];
    Data data;
    Value value;
    if (first(&list,&data)) {
        if (data -> key == key) {
            value = data -> val;
            remove(&list);
            return value;
        }else {
            while (next(&list,&data)) {
                if (data -> key == key) {
                    value = data -> val;
                    remove(&list);
                    return value;
                }
            }
        }
    }
    return NULL;
}
Value search(Table* table, Key key) {
    int hash = table -> func(key);
    List list = table -> arr[hash];
    Data data;
    if (first(&list,&data)) {
        if (data -> key == key) return data -> val;
        while (next(&list,&data)) {
            if (data -> key == key) return data -> val;
        }
    }
    return NULL;
}