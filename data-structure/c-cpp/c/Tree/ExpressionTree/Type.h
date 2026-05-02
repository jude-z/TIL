#ifndef TYPE_H
#define TYPE_H

typedef char Data;
typedef struct _TreeNode {
    Data data;
    struct _TreeNode* left;
    struct _TreeNode* right;
}TreeNode;

#endif
