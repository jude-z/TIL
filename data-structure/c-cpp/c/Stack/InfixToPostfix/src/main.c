#include "Calculator.h"
#include "InfixToPostfix.h"
#include <stdio.h>

int main() {
    char ch[100] = "8+3*2";
    convertToPostfix(ch);
    printf("%s\n",ch);
    int result = evalPostExpression(ch);
    printf("result : %d\n",result);
}