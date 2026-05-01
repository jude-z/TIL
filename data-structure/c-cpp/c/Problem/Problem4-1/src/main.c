#include <stdio.h>
#include <stdlib.h>
typedef int Data;
typedef struct _Node {
    Data data;
    struct _Node* prev;
} Node;
typedef struct _LinkedList {
    Node* tail;
} LinkedList;
int main() {
    LinkedList list;
    LinkedList* plist = &list;
    plist -> tail = NULL;


    for (int i = 1;i<=5;i++) {
        Node* pnode = (Node*)malloc(sizeof(Node));
        pnode -> data = i;
        pnode -> prev = plist -> tail;
        plist -> tail = pnode;
    }

    Node* cur = plist -> tail;
    while (cur != NULL) {
        printf("data : %d\n",cur -> data);
        cur =  cur -> prev;
    }



}