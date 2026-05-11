#include "InfixToPostfix.h"
#include <cstring>
#include <iostream>
using namespace std;
InfixToPostfix::InfixToPostfix() {
    this -> stack = *new Stack<char>;
}

int InfixToPostfix::check(char *ch) {
    int len = strlen(ch);
    Stack<char> s = *new Stack<char>;
    for (int i = 0;i<len;i++) {
        if (ch[i] == '(') {
            s.push(ch[i]);
        }else if (ch[i] == ')') {
            if (s.empty()) return FALSE;
            s.pop();
        }
    }
    if (stack.empty()) return TRUE;
    return FALSE;
}

int InfixToPostfix::getPriority(char op) {
    switch (op) {
        case '+': case '-':
            return 3;
        case '*': case '/':
            return 5;
        case '(':
            return 1;
        default:
            return -1;
    }
}

int InfixToPostfix::compare(char op1, char op2) {
    int priority1 = getPriority(op1);
    int priority2 = getPriority(op2);
    if (priority1 >= priority2) return 1;
    else return 0;
}

void InfixToPostfix::converToPostfix(char *ch) {
    if (!check(ch)) {
        cout << "unvalid string";
        exit(-1);
    }
    int len = strlen(ch);
    for (int i = 0;i<len;i++) {

    }

}

