#ifndef C_CPP_DATA_STRUCTURE_INFIXTOPOSTFIX_H
#define C_CPP_DATA_STRUCTURE_INFIXTOPOSTFIX_H

#include "Stack.h"
#define TRUE 1
#define FALSE 0
class InfixToPostfix {
    Stack<char> stack;
public:
    InfixToPostfix();
    void converToPostfix(char* ch);
    int check(char* ch);
    int getPriority(char op);
    int compare(char op1, char op2);
};


#endif //C_CPP_DATA_STRUCTURE_INFIXTOPOSTFIX_H