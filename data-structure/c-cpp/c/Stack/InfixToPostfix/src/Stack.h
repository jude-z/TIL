#ifndef STACK_H
#define STACK_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
} Node;

typedef struct _Stack {
    Node* head;
} Stack;

void init(Stack*);
void push(Stack* stack, Data data);
Data pop(Stack* stack);
Data peek(Stack* stack);
int empty(Stack* stack);
#endif
