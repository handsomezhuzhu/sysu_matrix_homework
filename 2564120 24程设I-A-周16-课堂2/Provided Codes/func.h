
#ifndef FUNC_H
#define FUNC_H

#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;

node* oddEvenList(node *head1);
node* createList(int nums[]);
void printList(node* head);

#endif