//
// Created by admin on 5/12/26.
//

#ifndef C_CPP_DATA_STRUCTURE_TABLE_H
#define C_CPP_DATA_STRUCTURE_TABLE_H

#include "Slot.h"
#define TABLE_LEN 100
typedef int (*HashFunc)(Key key);
class Table {
    Slot arr[STR_LEN];
    HashFunc func;
public:
    Table(HashFunc func);
    void insert(Key key, Value value);
    Value delete_(Key key);
    Value search(Key key);
};


#endif //C_CPP_DATA_STRUCTURE_TABLE_H