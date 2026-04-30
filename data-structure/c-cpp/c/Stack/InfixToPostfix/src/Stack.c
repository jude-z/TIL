#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

void init(Stack* stack) {
    stack -> head = NULL;
}

void push(Stack* stack, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;

    new_node -> next = stack -> head;
    stack -> head = new_node;
}

Data pop(Stack* stack) {
    if (empty(stack)) {
        printf("stack is empty!!\n");
        exit(-1);
    }
    Node* r_pos = stack -> head;
    Data r_data = r_pos -> data;
    stack -> head = r_pos -> next;
    free(r_pos);
    return r_data;
}

Data peek(Stack* stack) {
    if (empty(stack)) {
        printf("stack is empty!!\n");
        exit(-1);
    }
    return stack -> head -> data;
}

int empty(Stack* stack) {
    if (stack -> head == NULL) return TRUE;
    return FALSE;
}