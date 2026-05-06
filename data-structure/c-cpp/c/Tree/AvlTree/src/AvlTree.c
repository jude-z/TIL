#include "AvlTree.h"
#include <stdlib.h>
#include <stdio.h>

#include "../../BinaryTree/BinaryTree.h"

void avlInit(TreeNode** p_root) {
    *p_root = NULL;
}
Data avlGetData(TreeNode* tree_node) {
    return getData(tree_node);
}
TreeNode* avlSearch(TreeNode* tree_node, Data data) {
    TreeNode* c_node = tree_node;
    while (c_node != NULL) {
        if (data == getData(c_node)) return c_node;
        else if (data > getData(c_node)) c_node = getRightSubTree(c_node);
        else if (data < getData(c_node)) c_node = getLeftSubTree(c_node);
    }
    return NULL;
}
void avlInsert(TreeNode** p_root,Data data) {
    TreeNode* p_node = NULL;
    TreeNode* c_node = *p_root;
    while (c_node != NULL) {
        if (data == getData(c_node)) return;
        p_node = c_node;
        if (data < getData(c_node)) c_node = getLeftSubTree(c_node);
        else if (data > getData(c_node)) c_node = getRightSubTree(c_node);
    }
    TreeNode* new_node = makeTreeNode();
    setData(new_node,data);
    if (p_node == NULL) *p_root = new_node;
    else {
        if (data < getData(p_node)) {
            makeLeftSubTree(p_node,new_node);
        }
        else if (data > getData(p_node)) {
            makeRightSubTree(p_node,new_node);
        }
    }
}

TreeNode* avlRemove(TreeNode** p_root, Data data) {
    TreeNode* v_node = makeTreeNode();
    TreeNode* p_node = v_node;
    TreeNode* c_node = *p_root;
    TreeNode* del_node;
    changeRightSubTree(v_node,*p_root);
    while (c_node != NULL) {
        if (data == getData(c_node)) break;
        p_node = c_node;
        if (data < getData(c_node)) c_node = getLeftSubTree(c_node);
        else if (data > getData(c_node)) c_node = getRightSubTree(c_node);
    }
    if (c_node == NULL) return NULL;
    del_node = c_node;

    if (getLeftSubTree(del_node) == NULL && getRightSubTree(del_node) == NULL) {
        if (getLeftSubTree(p_node) == del_node) {
            removeLeftSubTree(p_node);
        }else if (getRightSubTree(p_node) == del_node) {
            removeRightSubTree(p_node);
        }
    }else if (getLeftSubTree(del_node) == NULL || getRightSubTree(del_node) == NULL) {
        TreeNode* del_child_node;
        if (getLeftSubTree(del_node) != NULL) {
            del_child_node = getLeftSubTree(del_node);
        }else if (getRightSubTree(del_node) != NULL) {
            del_child_node = getRightSubTree(del_node);
        }

        if (getLeftSubTree(p_node) == del_node) {
            changeLeftSubTree(p_node,del_child_node);
        }else if (getRightSubTree(p_node) == del_node) {
            changeRightSubTree(p_node,del_child_node);
        }
    }else {
        TreeNode* alternative_p_node = del_node;
        TreeNode* alternative_c_node = getRightSubTree(del_node);
        while (alternative_c_node != NULL) {
            alternative_p_node = alternative_c_node;
            alternative_c_node = getLeftSubTree(alternative_c_node);
        }
        Data del_data = getData(del_node);
        setData(del_node,getData(alternative_p_node));

        if (getRightSubTree(alternative_p_node) == alternative_c_node) {
            changeRightSubTree(alternative_p_node,getRightSubTree(alternative_c_node));
        }else if (getLeftSubTree(alternative_p_node) == alternative_c_node) {
            changeLeftSubTree(alternative_p_node,getRightSubTree(alternative_c_node));
        }
        del_node = alternative_p_node;
        setData(del_node,del_data);
    }
    if (getRightSubTree(v_node) != *p_root) {
        *p_root = getRightSubTree(v_node);
    }
    free(v_node);
    return del_node;

}