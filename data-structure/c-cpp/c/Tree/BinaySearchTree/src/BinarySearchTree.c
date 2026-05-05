#include "BinarySearchTree.h"
#include <stdlib.h>
#include <stdio.h>

Data binary_search_treeGetData(TreeNode* tree_node) {
    return getData(tree_node);
}
void binary_search_treeInsert(TreeNode** p_root, Data data) {
    TreeNode* parent_node = NULL;
    TreeNode* current_node = *p_root;
    TreeNode* new_node = NULL;

    while (current_node != NULL) {
        if (getData(current_node) == data) return;
        parent_node = current_node;
        if (data < getData(current_node)) {
            current_node = getLeftSubTree(current_node);
        }else if (data > getData(current_node)) {
            current_node = getRightSubTree(current_node);
        }
    }

    new_node = makeTreeNode();
    setData(new_node , data);
    if (parent_node != NULL) {
        if (data < getData(parent_node)) {
            makeLeftSubTree(parent_node,new_node);
        }else if (data > getData(parent_node)) {
            makeRightSubTree(parent_node,new_node);
        }
    }else {
        *p_root = new_node;
    }
}

TreeNode* binary_search_treeSearch(TreeNode* tree_node, Data data) {
    TreeNode* current_node = tree_node;

    while (current_node != NULL) {
        if (getData(current_node) == data) return current_node;
        else if (data < getData(current_node)) {
            current_node = getLeftSubTree(current_node);
        }else if (data > getData(current_node)) {
            current_node = getRightSubTree(current_node);
        }
    }
    return NULL;
}

void binary_search_treeInit(TreeNode** p_root) {
    *p_root = NULL;
}

TreeNode* binary_search_treeRemove(TreeNode** p_root,Data data) {
    TreeNode* virtual_root_node = makeTreeNode();
    TreeNode* parent_node = virtual_root_node;
    TreeNode* current_node = *p_root;
    TreeNode* delete_node;
    changeRightSubTree(virtual_root_node,*p_root);
    while (current_node != NULL && getData(current_node) != data) {
        parent_node = current_node;
        if (data < getData(current_node)) {
            current_node = getLeftSubTree(current_node);
        }else if (data > getData(current_node)) {
            current_node = getRightSubTree(current_node);
        }
    }
    if (current_node == NULL) return NULL;
    delete_node = current_node;
    if (getLeftSubTree(delete_node) == NULL && getRightSubTree(delete_node) == NULL) {
        if (getLeftSubTree(parent_node) == delete_node) {
            removeLeftSubTree(parent_node);
        }else if (getRightSubTree(parent_node) == delete_node) {
            removeRightSubTree(parent_node);
        }
    }
    else if (getLeftSubTree(delete_node) == NULL || getRightSubTree(delete_node) == NULL) {
        TreeNode* delete_child_node;
        if (getLeftSubTree(delete_node) != NULL) {
            delete_child_node = getLeftSubTree(delete_node);
        }else if (getRightSubTree(delete_node) != NULL) {
            delete_child_node = getRightSubTree(delete_node);
        }
        if (getLeftSubTree(parent_node) == delete_node) {
            changeLeftSubTree(parent_node,delete_child_node);
        }else if (getRightSubTree(parent_node) == delete_node) {
            changeRightSubTree(parent_node, delete_child_node);
        }
    }else {
        TreeNode* alternative_parent_node = delete_node;
        TreeNode* alternative_current_node = getRightSubTree(delete_node);
        Data delData;
        while (getLeftSubTree(alternative_current_node) != NULL) {
            alternative_parent_node = alternative_current_node;
            alternative_current_node = getLeftSubTree(alternative_current_node);
        }
    }

}

