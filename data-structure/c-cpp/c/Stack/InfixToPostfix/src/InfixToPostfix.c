#include "InfixToPostfix.h"
#include "Stack.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int right(char* ch) {
    Stack stack;
    init(&stack);
    size_t len = strlen(ch);
    for (int i = 0; i<len;i++) {
        if (ch[i] == '(') {
            push(&stack, ch[i]);
        }else if (ch[i] == ')') {
            if (empty(&stack)) return FALSE;
            pop(&stack);
        }
    }
    return empty(&stack);
}
int getPriority(char token) {
    switch (token) {
        case '*':
        case '/':
            return 5;
        case '+':
        case '-':
            return 3;
        case '(':
            return  1;
        default:
            return -1;
    }
}
int compare(char op1, char op2){
    int priority1 = getPriority(op1);
    int priority2 = getPriority(op2);
    if (priority1 >= priority2) return 1;
    else return 0;
}
void convertToPostfix(char* ch) {
    if (!right(ch)) {
        printf("this expression is wrong\n");
        exit(-1);
    }
    Stack stack;
    init(&stack);
    size_t len = strlen(ch);
    char* new_ch = (char*)malloc(len + 1);
    memset(new_ch,0,len + 1);
    int i,idx = 0;
    char token, pop_token;
    for (i = 0;i<len;i++) {
        token = ch[i];
        if (isdigit(token)) {
            new_ch[idx++] = token;
        }else {
            switch (token) {
                case '(':
                    push(&stack,token);
                    break;
                case '+': case '-':
                    while (!empty(&stack) && peek(&stack) != '(' &&compare(peek(&stack),token) == 1) {
                        new_ch[idx++] = pop(&stack);
                    }
                    push(&stack,token);
                    break;
                case '*': case '/':
                    while (!empty(&stack) && peek(&stack) != '(' && compare(peek(&stack),token) == 1) {
                        new_ch[idx++] = pop(&stack);
                    }
                    push(&stack,token);
                    break;
                case ')':
                    while (!empty(&stack)) {
                        pop_token = pop(&stack);
                        if (pop_token == '(') break;
                        new_ch[idx++] = pop_token;
                    }
                    break;
            }

        }
    }
    while (!empty(&stack)) {
        new_ch[idx++] = pop(&stack);
    }
    strcpy(ch,new_ch);
    free(new_ch);

}
