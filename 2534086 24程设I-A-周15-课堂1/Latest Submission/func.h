#ifndef FUNC_H
#define FUNC_H

typedef struct Node {
    char data;
    struct Node* next;
}node;

node* createList(char s[]);
node* match(node* head);
void printList(node* head);

#endif
