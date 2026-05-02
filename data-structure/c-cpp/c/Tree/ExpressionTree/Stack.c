#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>
void init(Stack* stack) {
    stack -> head = NULL;
}
void push(Stack* stack, StackData stack_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = stack_data;
    new_node -> next = stack -> head;
    stack -> head = new_node;
}

StackData pop(Stack* stack) {
    if (empty(stack)) {
        printf("stack is empty");
        exit(-1);
    }
    Node* r_pos = stack -> head;
    StackData r_data = r_pos -> data;
    stack -> head = r_pos -> next;
    return r_data;
}
StackData peek(Stack* stack) {
    if (empty(stack)) {
        printf("stack is empty");
        exit(-1);
    }
    return  stack -> head -> data;
}
int empty(Stack* stack) {
    if (stack -> head == NULL) return TRUE;
    return FALSE;
}
