#include "Table.h"

Table::Table(HashFunc func) {
    this -> func = func;
}

void Table::insert(Key key, Value value) {
    int hash = this -> func(key);
    LinkedList<Slot>& list = this -> list[hash];
    Slot slot{key,value};
    list.insert(slot);
}

Value Table::search(Key key) {
    int hash = this -> func(key);
    LinkedList<Slot>& list = this -> list[hash];
    Slot slot;
    if (list.first(&slot)) {
        if (slot.key == key) return slot.value;
        while (list.next(&slot)) {
            if (slot.key == key) return slot.value;
        }
    }
    return nullptr;
}

Value Table::delete_(Key key) {
    int hash = this -> func(key);
    LinkedList<Slot>& list = this -> list[hash];
    Slot slot;
    if (list.first(&slot)) {
        if (slot.key == key) {
            Value val = slot.value;
            list.remove();
            return val;
        }
        while (list.next(&slot)) {
            if (slot.key == key) {
                Value val = slot.value;
                list.remove();
                return val;
            }
        }
    }
    return nullptr;
}
