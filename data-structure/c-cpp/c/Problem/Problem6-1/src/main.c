#include "Stack.h"

int main() {
    Stack stack;
    init_stack(&stack);

    push(&stack,1);
    push(&stack,2);
    push(&stack,3);
    push(&stack,4);

    pop(&stack);
    pop(&stack);
    pop(&stack);
}