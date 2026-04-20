#include <stdio.h>
#include <stdlib.h>
typedef struct _Node{
    int data;
    struct _Node* next;
} Node;
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* cur = NULL;

    Node* newNode = NULL;
    int readData;

    while (1) {
        printf("input number : ");
        scanf("%d",&readData);

        if (readData < 1) break;

        newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = readData;
        newNode -> next = NULL;

        if (head == NULL) {
            head = newNode;
        }else {
            tail -> next = newNode;
        }
        tail = newNode;
    }

    printf("\n");

    if (head == NULL) {
        printf("no data");
    }else {
        cur = head;
        while (cur -> next != NULL) {
            printf("data : %d\n",cur -> data);
            cur = cur -> next;
        }
        printf("data : %d\n",cur-> data);
    }

    if (head != NULL) {
        Node* delNode = head;
        Node* delNextNode = head -> next;

        while (delNextNode != NULL) {
            printf("malloc data : %d\n",delNode -> data);
            free(delNode);

            delNode = delNextNode;
            delNextNode = delNode -> next;
        }
        printf("malloc data : %d\n",delNode -> data);
        free(delNode);
    }



}