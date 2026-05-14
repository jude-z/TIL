#include "../ExpressionTree.h"
#include "../Stack.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "BinaryTree.h"
void func(Data data);
TreeNode* makeExpTree(char* exp) {
    Stack stack;
    init(&stack);
    size_t len = strlen(exp);
    for (int i = 0;i<len;i++) {
        char ch = exp[i];
        TreeNode* tree_node = makeTreeNode();
        setData(tree_node,ch);
        if (!isdigit(ch)) {
            TreeNode* right_sub_tree_node = pop(&stack);
            TreeNode* left_sub_tree_node = pop(&stack);
            makeLeftSubTree(tree_node,left_sub_tree_node);
            makeRightSubTree(tree_node,right_sub_tree_node);
        }
        push(&stack,tree_node);
    }
    return pop(&stack);
}
int evaluateExpTree(TreeNode* tree_node) {
    TreeNode* left_sub_tree = getLeftSubTree(tree_node);
    TreeNode* right_sub_tree = getRightSubTree(tree_node);
    if (left_sub_tree == NULL && right_sub_tree == NULL) return getData(tree_node) - '0';
    int operand1 = evaluateExpTree(left_sub_tree);
    int operand2 = evaluateExpTree(right_sub_tree);
    char operator = getData(tree_node);

    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
    }
}
void showPrefixTypeExp(TreeNode* tree_node) {
    preorderTraverse(tree_node,func);
}

void showInfixTypeExp(TreeNode* tree_node) {
    inorderTraverse(tree_node,func);
}
void showPostfixTypeExp(TreeNode* tree_node) {
    postorderTraverse(tree_node,func);
}

void func(Data data) {
    printf("%c",data);
}