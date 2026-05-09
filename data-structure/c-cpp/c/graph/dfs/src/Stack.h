#ifndef STACK_H
#define STACK_H

#define TRUE 1
#define FALSE 0

typedef int SData;

typedef struct _Node {
    SData data;
    struct _Node* next;
}Node;

typedef struct _Stack {
    Node* head;
    Node* cur;
}Stack;

void stack_init(Stack* stack);
void push(Stack* stack, SData data);
SData pop(Stack* stack);
SData peek(Stack* stack);
int empty(Stack* stack);
#endif
