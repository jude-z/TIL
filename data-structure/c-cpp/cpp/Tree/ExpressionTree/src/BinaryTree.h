#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "../Type.h"

TreeNode* makeTreeNode();
Data getData(TreeNode* tree_node);
void setData(TreeNode* tree_node,Data data);

TreeNode* getLeftSubTree(TreeNode* tree_node);
TreeNode* getRightSubTree(TreeNode* tree_node);

void makeLeftSubTree(TreeNode* tree_node, TreeNode* sub);
void makeRightSubTree(TreeNode* tree_node, TreeNode* sub);

typedef void (*VisitFuncPtr)(Data data);

void preorderTraverse(TreeNode* tree_node, VisitFuncPtr func_ptr);
void inorderTraverse(TreeNode* tree_node, VisitFuncPtr func_ptr);
void postorderTraverse(TreeNode* tree_node, VisitFuncPtr func_ptr);

#endif
