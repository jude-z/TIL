#ifndef C_CPP_DATA_STRUCTURE_BINARYTREE_H
#define C_CPP_DATA_STRUCTURE_BINARYTREE_H
template<class T>
class TreeNode {
public:
    T data;
    TreeNode* left;
    TreeNode* right;
    TreeNode();
    T getData(TreeNode<T>* tree_node);
    void setData(TreeNode<T>* tree_node,T data);
    TreeNode<T>* getLeftSubTree(TreeNode<T>* tree_node);
    TreeNode<T>* getRightSubTree(TreeNode<T>* tree_node);
    void makeLeftSubTree(TreeNode<T>* tree_node, TreeNode<T>* sub);
    void makeRightSubTree(TreeNode<T>* tree_node, TreeNode<T>* sub);
    void inorderTraverse(TreeNode<T>* tree_node,void (*func)(TreeNode<T>* tree_node));
    void preorderTraverse(TreeNode<T>* tree_node,void (*func)(TreeNode<T>* tree_node));
    void postorderTraverse(TreeNode<T>* tree_node,void (*func)(TreeNode<T>* tree_node));
    void deleteTreeNode(TreeNode<T>* tree_node);
};
template<class T>
class BinaryTree {
    TreeNode<T> root;
    void (*visitFunc)(T data);
public:
    BinaryTree(void (*func)(T data));

};


#endif //C_CPP_DATA_STRUCTURE_BINARYTREE_H