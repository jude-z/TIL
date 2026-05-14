#ifndef STACK_H
#define STACK_H
#include "../Type.h"
#define TRUE 1
#define FALSE 0

typedef TreeNode* StackData;

typedef struct _Node {
    StackData data;
    struct _Node* next;
} Node;

typedef struct _Stack{
    Node* head;
}Stack;

void init(Stack* stack);
void push(Stack* stack, StackData stack_data);
StackData pop(Stack* stack);
StackData peek(Stack* stack);
int empty(Stack* stack);


#endif
