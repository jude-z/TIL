#include "BinaryTree.h"
#include <stdlib.h>


TreeNode* makeTreeNode() {
    TreeNode* new_tree_node = (TreeNode*)malloc(sizeof(TreeNode));
    new_tree_node -> left = NULL;
    new_tree_node -> right = NULL;
}

Data getData(TreeNode* tree_node) {
    return tree_node -> data;
}

void setData(TreeNode* tree_node, Data data) {
    tree_node -> data = data;
}

TreeNode* getLeftSubTree(TreeNode* tree_node) {
    return tree_node -> left;
}

TreeNode* getRightSubTree(TreeNode* tree_node) {
    return tree_node -> right;
}

void makeLeftSubTree(TreeNode* tree_node,TreeNode* sub) {
    if (tree_node -> left != NULL) deleteTreeNode(tree_node -> left);
    tree_node -> left = sub;
}

void makeRightSubTree(TreeNode* tree_node, TreeNode* sub) {
    if (tree_node -> right != NULL) deleteTreeNode(tree_node -> right);
    tree_node -> right = sub;
}

void deleteTreeNode(TreeNode* tree_node) {
    if (tree_node == NULL) return;
    deleteTreeNode(tree_node -> left);
    deleteTreeNode(tree_node -> right);
    free(tree_node);
}

void inorderTraverse(TreeNode* tree_node, visitFuncPtr func_ptr) {
    if (tree_node == NULL) return;
    inorderTraverse(tree_node -> left,func_ptr);
    func_ptr(getData(tree_node));
    inorderTraverse(tree_node -> right,func_ptr);

}

void preorderTraverse(TreeNode* tree_node, visitFuncPtr func_ptr) {
    if (tree_node == NULL) return;
    func_ptr(getData(tree_node));
    preorderTraverse(tree_node -> left,func_ptr);
    preorderTraverse(tree_node -> right,func_ptr);
}

void postorderTraverse(TreeNode* tree_node, visitFuncPtr func_ptr) {
    if (tree_node == NULL) return;
    postorderTraverse(tree_node -> left,func_ptr);
    postorderTraverse(tree_node -> right,func_ptr);
    func_ptr(getData(tree_node));
}

