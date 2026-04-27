#ifndef C_CPP_DATA_STRUCTURE_ARRAY_STACK_H
#define C_CPP_DATA_STRUCTURE_ARRAY_STACK_H

#define TRUE 1
#define FALSE 0

#define STACK_LEN 100
typedef int Data;

class Stack {
    Data arr[STACK_LEN];
    int top_index;

public:
    Stack():arr{0},top_index(-1){}
    void push(Data data);
    Data pop();
    Data peek();
    int empty();
};


#endif