#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int nums[30];

int main() {
    int x, n = 0;
    while(scanf("%d", &x), x) nums[n ++] = x;
    node* head = createList(nums);
    head = reverseList(head);
    printList(head);

    return 0;
}