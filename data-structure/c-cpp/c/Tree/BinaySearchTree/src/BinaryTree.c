#include "BinaryTree.h"
#include <stdlib.h>
#include <stdio.h>
void deleteTreeNode(TreeNode* tree_node);
TreeNode* makeTreeNode() {
    TreeNode* tree_node = (TreeNode*)malloc(sizeof(TreeNode));
    tree_node -> left = NULL;
    tree_node -> right = NULL;
    return  tree_node;
}
Data getData(TreeNode* tree_node) {
    if (tree_node == NULL) {
        puts("treenode is null");
        exit(-1);
    }
    return tree_node -> data;
}
void setData(TreeNode* tree_node, Data data) {
    if (tree_node == NULL) {
        puts("treenode is null");
        exit(-1);
    }
    tree_node -> data = data;
}

TreeNode* getLeftSubTree(TreeNode* tree_node) {
    if (tree_node == NULL) {
        puts("treenode is null");
        exit(-1);
    }
    return tree_node -> left;
}
TreeNode* getRightSubTree(TreeNode* tree_node) {
    if (tree_node == NULL) {
        puts("treenode is null");
        exit(-1);
    }
    return tree_node -> right;
}
void makeLeftSubTree(TreeNode* tree_node, TreeNode* sub) {
    if (tree_node == NULL) {
        puts("treenode is null");
        exit(-1);
    }
    if (tree_node -> left != NULL) deleteTreeNode(tree_node -> left);
    tree_node -> left = sub;
}
void makeRightSubTree(TreeNode* tree_node, TreeNode* sub) {
    if (tree_node == NULL) {
        puts("treenode is null");
        exit(-1);
    }
    if (tree_node -> right != NULL) deleteTreeNode(tree_node -> right);
    tree_node -> right = sub;
}
void deleteTreeNode(TreeNode* tree_node) {
    if (tree_node == NULL) return;
    deleteTreeNode(tree_node -> left);
    deleteTreeNode(tree_node -> right);
    free(tree_node);
}
