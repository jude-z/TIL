#ifndef STACK_H
#define STACK_H

#define TRUE 1
#define FALSE 0

#define STACK_LEN 100
typedef char Data;

typedef struct _Stack {
    Data arr[STACK_LEN];
    int top_index;
} Stack;

void init(Stack*);
void push(Stack*, Data data);
Data pop(Stack*);
Data peek(Stack*);
int empty(Stack*);


#endif