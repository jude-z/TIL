#ifndef SLOT_H
#define SLOT_H
#include "Person.h"

typedef int Key;
typedef Person* Value;
typedef enum _SlotStatus {
    EMPTY,
    DELETED,
    INUSE,
}SlotStatus;
class Slot {
public:
    Key key;
    Value value;
    SlotStatus slot_status;
};

#endif
