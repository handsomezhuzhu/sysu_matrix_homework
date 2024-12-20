#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
    int n;
    scanf("%d", &n);

    struct Node* head = createList(n);
    printList(head);

    int value, pos;
    scanf("%d%d", &value, &pos);

    head = insertList(head, value, pos);
    printList(head);

    return 0;
}