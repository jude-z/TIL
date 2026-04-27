#include "LinkedListStack.h"
#include <stdlib.h>
#include <stdio.h>
void init(Stack* stack) {
    stack -> head = NULL;
}

void push(Stack* stack, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (stack -> head == NULL) {
        stack -> head = new_node;
        new_node -> next = NULL;
    }else {
        new_node -> next = stack -> head;
        stack -> head = new_node;
    }
}
int empty(Stack* stack) {
    return stack -> head == NULL;
}
Data pop(Stack* stack) {
    if (empty(stack)) {
        printf("No elements!!\n");
        exit(-1);
    }else {
        Node* r_pos = stack -> head;
        Data r_data = r_pos -> data;
        stack -> head = stack -> head -> next;
        free(r_pos);
        return r_data;
    }
}

Data peek(Stack* stack) {
    if (empty(stack)) {
        printf("No elements!!\n");
        exit(-1);
    }else {
        return stack -> head -> data;
    }
}

