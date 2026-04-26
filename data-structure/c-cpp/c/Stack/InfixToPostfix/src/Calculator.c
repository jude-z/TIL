#include "Calculator.h"
#include <string.h>
#include <ctype.h>
#include "Stack.h"
int evalPostExpression(char* ch) {
    Stack stack;
    init(&stack);
    size_t len = strlen(ch);
    int i;
    char token;
    char op1, op2;
    for (i = 0;i<len;i++) {
        token = ch[i];
        if (isdigit(token)) {
            push(&stack,token);
        }else {
            op2 = pop(&stack);
            op1 = pop(&stack);
            switch (token) {
                int result;
                case '+':
                    result = (op1 -'0') + (op2  - '0');
                    push(&stack,result + '0');
                    break;
                case '-':
                    result = (op1 - '0') - (op2 - '0');
                    push(&stack,result + '0');
                    break;
                case '*':
                    result = (op1 - '0') * (op2 - '0');
                    push(&stack, result + '0');
                    break;
                case '/':
                    result = (op1 - '0') / (op2 - '0');
                    push(&stack, result + '0');
                    break;
            }
        }
    }
    return pop(&stack) -'0';
}