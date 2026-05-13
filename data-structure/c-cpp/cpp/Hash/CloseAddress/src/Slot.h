#ifndef SLOT_H
#define SLOT_H
#include "Person.h"
typedef int Key;
typedef Person* Value;

class Slot {
public:
    Key key;
    Value value;
};
#endif
