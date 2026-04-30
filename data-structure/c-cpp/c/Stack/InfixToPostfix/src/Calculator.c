#include "Calculator.h"
#include <string.h>
#include <ctype.h>
#include "Stack.h"
int calculate(int operand1,int operand2, char operator);
int evalPostExpression(char* ch) {
    size_t len = strlen(ch);
    Stack stack;
    init(&stack);
    for (size_t i = 0;i<len;i++) {
        char c = ch[i];
        if (isdigit(c)) {
            push(&stack,c - '0');
        }else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int res = calculate(operand1,operand2,c);
            push(&stack,res);
        }
    }
    return pop(&stack);
}
int calculate(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+':
            return (operand1 + operand2);
        case '-':
            return (operand1 - operand2);
        case '*':
            return (operand1 * operand2);
        case '/':
            return (operand1 / operand2);
    }
}