#include "BinaryTree.h"
#include <stdlib.h>
#include <stdio.h>
void check(TreeNode* tree_node);
void removeTreeNode(TreeNode* tree_node);
TreeNode* makeTreeNode() {
    TreeNode* tree_node = (TreeNode*)malloc(sizeof(TreeNode));
    tree_node -> left = NULL;
    tree_node -> right = NULL;
}
Data getData(TreeNode* tree_node) {
    check(tree_node);
    return tree_node -> data;
}
void setData(TreeNode* tree_node,Data data) {
    check(tree_node);
    tree_node -> data = data;
}
TreeNode* getLeftSubTree(TreeNode* tree_node) {
    check(tree_node);
    return tree_node -> left;
}
TreeNode* getRightSubTree(TreeNode* tree_node) {
    check(tree_node);
    return tree_node -> right;
}
void makeLeftSubTree(TreeNode* tree_node,TreeNode* sub) {
    check(tree_node);
    if (tree_node -> left != NULL) removeTreeNode(tree_node -> left);
    tree_node -> left = sub;
}
void makeRightSubTree(TreeNode* tree_node, TreeNode* sub) {
    check(tree_node);
    if (tree_node -> right != NULL) removeTreeNode(tree_node -> right);
    tree_node -> right = sub;
}
TreeNode* removeLeftSubTree(TreeNode* tree_node) {
    check(tree_node);
    TreeNode* del_node = tree_node -> left;
    tree_node -> left = NULL;
    return del_node;
}
TreeNode* removeRightSubTree(TreeNode* tree_node) {
    check(tree_node);
    TreeNode* del_node = tree_node -> right;
    tree_node -> right = NULL;
    return del_node;
}
void changeLeftSubTree(TreeNode* tree_node, TreeNode* sub) {
    check(tree_node);
    tree_node -> left = sub;
}
void changeRightSubTree(TreeNode* tree_node, TreeNode* sub) {
    check(tree_node);
    tree_node -> right = sub;
}
void check(TreeNode* tree_node) {
    if (tree_node == NULL) {
        puts("tree_node is null");
        exit(-1);
    }
}
void removeTreeNode(TreeNode* tree_node) {
    if (tree_node == NULL) return;
    removeTreeNode(tree_node -> left);
    removeTreeNode(tree_node -> right);
    free(tree_node);
}