#ifndef SLOT_H
#define SLOT_H

#include "Person.h"

typedef int Key;
typedef Person* Value;

typedef enum _SlotStatus {
    EMPTY,
    DELETED,
    INUSE
} SlotStatus;
typedef struct _Slot {
    Key key;
    Value val;
    SlotStatus slot_status;
}Slot;
#endif
