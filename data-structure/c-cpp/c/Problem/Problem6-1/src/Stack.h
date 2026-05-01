#ifndef STACK_H
#define STACK_H
#include "CircularLinkedList.h"
typedef struct _Stack {
    List* plist;
} Stack;

void init_stack(Stack* stack);
void push(Stack* stack, Data data);
Data pop(Stack* stack);
Data peek(Stack* stack);
int empty(Stack* stack);
#endif
