#include <stdio.h>
#include <stdlib.h>
#include "func.h"

struct Node* createList(int n) {
    struct Node *head = NULL, *tail = NULL, *newNode;
    int value;

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);

        // 创建新节点
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


struct Node* insertList(struct Node* head, int value, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    struct Node* current = head;
    for (int i = 1; i < pos - 1 && current != NULL; i++) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;
}