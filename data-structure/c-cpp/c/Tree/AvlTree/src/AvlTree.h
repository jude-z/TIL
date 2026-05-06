#ifndef AVL_TREE_H
#define AVL_TREE_H

#include "BinaryTree.h"
#include "AvlRebalance.h"

void avlInit(TreeNode** p_root);
Data avlGetData(TreeNode* tree_node);
void avlInsert(TreeNode** p_root, Data data);
TreeNode* avlSearch(TreeNode* tree_node, Data data);
TreeNode* avlRemove(TreeNode** p_root, Data data);
#endif
