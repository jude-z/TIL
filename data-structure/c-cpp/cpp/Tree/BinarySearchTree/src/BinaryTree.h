#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef int Data;
typedef struct _TreeNode {
    Data data;
    struct _TreeNode* left;
    struct _TreeNode* right;
}TreeNode;

TreeNode* makeTreeNode();
Data getData(TreeNode* tree_node);
void setData(TreeNode* tree_node,Data data);
TreeNode* getLeftSubTree(TreeNode* tree_node);
TreeNode* getRightSubTree(TreeNode* tree_node);
void makeLeftSubTree(TreeNode* tree_node, TreeNode* sub);
void makeRightSubTree(TreeNode* tree_node, TreeNode* sub);
TreeNode* removeLeftSubTree(TreeNode* tree_node);
TreeNode* removeRightSubTree(TreeNode* tree_node);
void changeRightSubTree(TreeNode* tree_node, TreeNode* sub);
void changeLeftSubTree(TreeNode* tree_node, TreeNode* sub);
#endif
