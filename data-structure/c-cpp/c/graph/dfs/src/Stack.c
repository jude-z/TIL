#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

void stack_init(Stack * stack) {
    stack -> head = NULL;
    stack -> cur = NULL;
}
void push(Stack* stack, SData data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = stack -> head;
    stack -> head = new_node;
}
SData pop(Stack* stack) {
    if (stack -> head == NULL) stack -> cur = stack -> head;
    if (empty(stack)) {
        puts("stack is empty");
        exit(-1);
    }
    Node* r_pos = stack -> cur;
    SData r_data = r_pos -> data;
    stack -> head = stack -> head -> next;
    stack -> cur = stack -> cur -> next;
    free(r_pos);
    return r_data;
}
SData peek(Stack* stack) {
    if (stack -> head == NULL) stack -> cur = stack -> head;
    if (empty(stack)) {
        puts("stack is empty");
        exit(-1);
    }
    return stack -> cur -> data;
}
int empty(Stack* stack) {
    if (stack -> head == NULL) return TRUE;
    return  FALSE;
}