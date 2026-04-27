#include "ArrayStack.h"
#include <stdio.h>

int main() {
    Stack stack;
    init(&stack);
    push(&stack,1);
    push(&stack,2);
    push(&stack,3);
    push(&stack,4);
    push(&stack,5);

    while (1) {
        printf("%d",pop(&stack));
    }
}
