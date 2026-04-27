#ifndef STACK_H
#define STACK_H

#define TRUE 1
#define FALSE 0

#define STACK_LEN 100
typedef int Data;

typedef struct _Stack{
    Data arr[STACK_LEN];
    int top_index;
} Stack;

void init(Stack* stack);
void push(Stack* stack, Data data);
Data pop(Stack* stack);
Data peek(Stack* stack);
int empty(Stack* stack);
# endif