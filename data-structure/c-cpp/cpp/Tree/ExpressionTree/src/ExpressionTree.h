#ifndef EXPRESSION_TREE_H
#define EXPRESSION_TREE_H

#include "../Type.h"

TreeNode* makeExpTree(char* exp);
int evaluateExpTree(TreeNode* tree_node);

void showPrefixTypeExp(TreeNode* tree_node);
void showInfixTypeExp(TreeNode* tree_node);
void showPostfixTypeExp(TreeNode* tree_node);
#endif
