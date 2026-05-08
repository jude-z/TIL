#ifndef SLOT_H
#define SLOT_H

#include "Person.h"
typedef int Key;
typedef Person* Value;

typedef struct _Slot {
    Key key;
    Value val;
}Slot;
#endif
