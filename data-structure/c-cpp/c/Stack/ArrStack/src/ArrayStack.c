#include "ArrayStack.h"
#include <stdio.h>
#include <stdlib.h>
void init(Stack* stack) {
    stack -> top_index = -1;
}

void push(Stack* stack, Data data) {
    stack -> top_index++;
    stack -> arr[stack -> top_index] = data;
}

int empty(Stack* stack) {
    return stack -> top_index == -1;
}
Data pop(Stack* stack) {
    if (empty(stack)) {
        printf("No elements!!\n");
        exit(-1);
    }else {
        Data data = stack -> arr[stack -> top_index];
        stack -> top_index--;
        return data;
    }
}
Data peek(Stack* stack) {
    if (empty(stack)) {
        printf("No elements!!\n");
        exit(-1);
    }else {
        return stack -> arr[stack -> top_index];
    }
}
