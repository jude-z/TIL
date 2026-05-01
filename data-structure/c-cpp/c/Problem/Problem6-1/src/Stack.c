#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>
void init_stack(Stack* stack) {
    stack -> plist = (List*)malloc(sizeof(List));
    init(stack -> plist);
}

void push(Stack* stack,Data data) {
    insert(stack -> plist,data);
}

Data pop(Stack* stack) {
    if (empty(stack)) {
        printf("stack is empty");
        exit(-1);
    }
    Data data;
    if (stack -> plist -> cur == NULL) {
        first(stack-> plist,&data);
    }else {
        next(stack->plist, &data);
    }
    return data;
}
Data peek(Stack* stack) {
    if (empty(stack)) {
        printf("stack is empty");
        exit(-1);
    }
    Data data;
    if (stack -> plist -> cur == NULL) {
        first(stack-> plist,&data);
        stack -> plist -> cur = NULL;
    }else {
        next(stack->plist, &data);
        stack -> plist -> cur = stack -> plist -> before;
    }
    return data;
}

int empty(Stack* stack) {
    return stack -> plist -> cur == stack -> plist -> tail;
}