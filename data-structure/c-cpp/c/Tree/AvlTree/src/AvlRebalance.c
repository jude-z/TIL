#include "AvlRebalance.h"

#include <sys/_types/_null.h>

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

TreeNode* rotateLR(TreeNode* tree_node) {
    TreeNode* p_node = tree_node;
    TreeNode* c_node = getLeftSubTree(tree_node);

    changeLeftSubTree(p_node,rotateRR(c_node));
    return rotateLL(p_node);
}
TreeNode* rotateRL(TreeNode* tree_node) {
    TreeNode* p_node = tree_node;
    TreeNode* c_node = getRightSubTree(tree_node);
    changeRightSubTree(p_node,rotateLL(c_node));
    return rotateRR(p_node);
}

int getHeight(TreeNode* tree_node) {
    if (tree_node == NULL) return -1;
    int left_height;
    int right_height;
    left_height = getHeight(tree_node -> left);
    right_height = getHeight(tree_node -> right);
    if (left_height > right_height) return left_height + 1;
    else return  right_height + 1;
}
int getHeightDiff(TreeNode* tree_node) {
    if (tree_node == NULL) return 0;
    int left_height = getHeight(tree_node -> left);
    int right_height = getHeight(tree_node -> right);
    return left_height - right_height;
}
TreeNode* rebalance(TreeNode** p_root) {
    int height_diff = getHeightDiff(*p_root);
    if (height_diff > 1) {
        if (getHeightDiff(getLeftSubTree(*p_root)) > 0) {
            *p_root = rotateLL(*p_root);
        }else {
            *p_root = rotateLR(*p_root);
        }
    }else if (height_diff < -1) {
        if (getHeightDiff(getRightSubTree(*p_root)) < 0) {
            *p_root = rotateRR(*p_root);
        }else {
            *p_root = rotateRL(*p_root);
        }
    }
    return *p_root;
}
