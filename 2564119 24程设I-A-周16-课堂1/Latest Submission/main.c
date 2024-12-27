#include <stdlib.h>
#include <stdio.h>
#include "func.h"

int s1[30], s2[30];

node* createList(int nums[])
{
    node *head = NULL, *p = head;

    int init = 1;
    int i = 0;
    while(nums[i])
    {
        node *q = (node*) malloc(sizeof (node));
        q -> data = nums[i ++];
        q -> next = NULL;
        if (init)
            head = q, p = head, init = 0;
        else
            p -> next = q, p = q;
    }
    return head;
}


void printList(node* head)
{
    node *p = head;
    while(p)
    {
        printf("%d ", p -> data);
        p = p -> next;
    }
    printf("\n");
}

int main() {
    int x, n = 0;
    while(scanf("%d", &x), x) s1[n ++] = x;
    node* head1 = createList(s1);

    n = 0;
    while(scanf("%d", &x), x) s2[n ++] = x;
    node* head2 = createList(s2);
    
    node* head = mergeTwoLists(head1, head2);
    printList(head);

    return 0;
}