#include "../BinaryTree.h"
#include <stdlib.h>
#include <stdio.h>

TreeNode* makeTreeNode() {
    TreeNode* new_tree_node = (TreeNode*)malloc(sizeof(TreeNode));
    new_tree_node -> left = NULL;
    new_tree_node -> right = NULL;
    return new_tree_node;
}

Data getData(TreeNode* tree_node) {
    if (tree_node == NULL) {
        printf("treenode is null");
        exit(-1);
    }
    return tree_node -> data;
}
void setData(TreeNode* tree_node,Data data) {
    if (tree_node == NULL) {
        printf("treenode is null");
        exit(-1);
    }
    tree_node -> data = data;
}
TreeNode* getLeftSubTree(TreeNode* tree_node) {
    return tree_node -> left;
}
TreeNode* getRightSubTree(TreeNode* tree_node) {
    return tree_node -> right;
}

void makeLeftSubTree(TreeNode* tree_node, TreeNode* sub) {
    if (tree_node == NULL) {
        printf("treenode is null");
        exit(-1);
    }
    if (tree_node -> left != NULL) free(tree_node -> left);
    tree_node -> left = sub;
}

void makeRightSubTree(TreeNode* tree_node, TreeNode* sub) {
    if (tree_node == NULL) {
        printf("treenode is null");
        exit(-1);
    }
    if (tree_node -> right != NULL) free(tree_node -> right);
    tree_node -> right = sub;
}

void preorderTraverse(TreeNode* tree_node, VisitFuncPtr func_ptr) {
    if (tree_node == NULL) return;
    func_ptr(tree_node -> data);
    preorderTraverse(tree_node -> left,func_ptr);
    preorderTraverse(tree_node -> right,func_ptr);
}

void inorderTraverse(TreeNode* tree_node, VisitFuncPtr func_ptr) {
    if (tree_node == NULL) return;
    inorderTraverse(tree_node -> left,func_ptr);
    func_ptr(tree_node -> data);
    inorderTraverse(tree_node -> right,func_ptr);
}

void postorderTraverse(TreeNode* tree_node, VisitFuncPtr func_ptr) {
    if (tree_node == NULL) return;
    postorderTraverse(tree_node -> left,func_ptr);
    postorderTraverse(tree_node -> right,func_ptr);
    func_ptr(tree_node -> data);
}

