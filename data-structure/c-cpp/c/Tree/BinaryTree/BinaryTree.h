#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef int Data;

typedef struct _TreeNode {
    Data data;
    struct _TreeNode* left;
    struct _TreeNode* right;
} TreeNode;


typedef void (*visitFuncPtr)(Data data);
TreeNode* makeTreeNode();
Data getData(TreeNode* tree_node);
void setData(TreeNode* tree_node, Data data);
TreeNode* getLeftSubTree(TreeNode* tree_node);
TreeNode* getRightSubTree(TreeNode* tree_node);

void makeLeftSubTree(TreeNode* tree_node,TreeNode* sub);
void makeRightSubTree(TreeNode* tree_node,TreeNode* sub);

void inorderTraverse(TreeNode* tree_node,visitFuncPtr func_ptr);
void preorderTraverse(TreeNode* tree_node,visitFuncPtr func_ptr);
void postorderTraverse(TreeNode* tree_node,visitFuncPtr func_ptr);

void deleteTreeNode(TreeNode* tree_node);
#endif
