#include "BinaryTree.h"
#include <stdio.h>

void showData(Data data);
int main() {
    TreeNode* tree_node1 = makeTreeNode();
    TreeNode* tree_node2 = makeTreeNode();
    TreeNode* tree_node3 = makeTreeNode();
    TreeNode* tree_node4 = makeTreeNode();
    TreeNode* tree_node5 = makeTreeNode();
    TreeNode* tree_node6 = makeTreeNode();

    setData(tree_node1,1);
    setData(tree_node2,2);
    setData(tree_node3,3);
    setData(tree_node4,4);
    setData(tree_node5,5);
    setData(tree_node6,6);

    makeLeftSubTree(tree_node1,tree_node2);
    makeRightSubTree(tree_node1,tree_node3);
    makeLeftSubTree(tree_node2,tree_node4);
    makeRightSubTree(tree_node2,tree_node5);
    makeLeftSubTree(tree_node3,tree_node6);


    preorderTraverse(tree_node1,showData);
    printf("\n");
    inorderTraverse(tree_node1,showData);
    printf("\n");
    postorderTraverse(tree_node1,showData);
    printf("\n");
}

void showData(Data data) {
    printf("%d ",data);
}