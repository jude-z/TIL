
#include "BinaryTree.h"

template<class T>
TreeNode<T>::TreeNode():left(nullptr),right(nullptr) {
}

template<class T>
T TreeNode<T>::getData(TreeNode<T> *tree_node) {
    return tree_node -> data;
}

template<class T>
void TreeNode<T>::setData(TreeNode<T> *tree_node, T data) {
    tree_node -> data = data;
}

template<class T>
TreeNode<T> *TreeNode<T>::getLeftSubTree(TreeNode<T> *tree_node) {
    return tree_node -> left;
}

template<class T>
TreeNode<T> *TreeNode<T>::getRightSubTree(TreeNode<T> *tree_node) {
    return tree_node -> right;
}

template<class T>
void TreeNode<T>::makeLeftSubTree(TreeNode<T> *tree_node, TreeNode<T> *sub) {
    tree_node -> deleteTreeNode(tree_node);
    tree_node -> left = sub;
}

template<class T>
void TreeNode<T>::makeRightSubTree(TreeNode<T> *tree_node, TreeNode<T> *sub) {
    tree_node -> deleteTreeNode(tree_node);
    tree_node -> right = sub;
}

template<class T>
void TreeNode<T>::deleteTreeNode(TreeNode<T> *tree_node) {
    if (tree_node == nullptr) return;
    tree_node -> deleteTreeNode(tree_node -> left);
    tree_node -> deleteTreeNode(tree_node -> right);
    delete tree_node;
}

template<class T>
void TreeNode<T>::preorderTraverse(TreeNode<T> *tree_node, void (*func)(TreeNode<T>* tree_node)) {
    func(tree_node);
    func(tree_node -> left);
    func(tree_node -> right);
}

template<class T>
void TreeNode<T>::inorderTraverse(TreeNode<T> *tree_node, void (*func)(TreeNode<T>* tree_node)) {
    func(tree_node -> left);
    func(tree_node);
    func(tree_node -> right);
}

template<class T>
void TreeNode<T>::postorderTraverse(TreeNode<T> *tree_node, void (*func)(TreeNode<T>* tree_node)) {
    func(tree_node -> left);
    func(tree_node -> right);
    func(tree_node);
}

template<class T>
BinaryTree<T>::BinaryTree(void (*func)(T data)) {
    this -> visitFunc = func;
    this -> root = nullptr;
}

