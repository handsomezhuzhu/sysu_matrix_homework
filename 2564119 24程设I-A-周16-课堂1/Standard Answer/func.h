#ifndef FUNC_H
#define FUNC_H

#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;

node* mergeTwoLists(node *head1, node *head2);
node* createList(int nums[]);
void printList(node* head);

#endif