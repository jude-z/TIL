#include "AvlRebalance.h"
TreeNode* rotateLL(TreeNode* tree_node) {
    TreeNode* p_node = tree_node;
    TreeNode* c_node = getLeftSubTree(tree_node);

    changeLeftSubTree(p_node,getRightSubTree(c_node));
    changeRightSubTree(c_node,p_node);
    return c_node;
}
TreeNode* rotateRR(TreeNode* tree_node) {
    TreeNode* p_node = tree_node;
    TreeNode* c_node = getRightSubTree(tree_node);

    changeRightSubTree(p_node,getLeftSubTree(c_node));
    changeLeftSubTree(p_node,c_node);
    return c_node;
}
