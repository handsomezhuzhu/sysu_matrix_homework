#include <stdio.h>
#include <stdlib.h>
#include "func.h"

char s[256];
int main() {

    scanf("%s", s);
    node* head = createList(s);
    head = match(head);
    printList(head);

    return 0;
}