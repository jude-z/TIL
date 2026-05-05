#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "BinaryTree.h"

void binary_search_treeInit(TreeNode** p_root);
Data binary_search_treeGetData(TreeNode* tree_node);
void binary_search_treeInsert(TreeNode** p_root, Data data);
TreeNode* binary_search_treeSearch(TreeNode* tree_node, Data data);
TreeNode* binary_search_treeRemove(TreeNode** p_root, Data data);
#endif
