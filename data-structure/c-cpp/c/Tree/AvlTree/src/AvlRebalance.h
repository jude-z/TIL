#ifndef AVL_REBALANCE_H
#define AVL_REBALANCE_H

#include "BinaryTree.h"
TreeNode* rotateLL(TreeNode* tree_node);
TreeNode* rotateRR(TreeNode* tree_node);
TreeNode* rotateLR(TreeNode* tree_node);
TreeNode* rotateRL(TreeNode* tree_node);
int getHeight(TreeNode* tree_node);
int getHeightDiff(TreeNode* tree_node);
TreeNode* rebalance(TreeNode** p_root);
#endif
