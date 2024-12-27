#include <stdlib.h>
#include <stdio.h>
#include "func.h"
node* mergeTwoLists(node *head1, node *head2) {
    node *head0;
    node *p1 = head1, *p2 = head2;
    if(p1->data > p2->data) {
        head0 = head2;
        p2 = p2->next;
    } else {
        head0 = head1;
        p1 = p1->next;
    }
    node *curr = head0;
    while(p1!= NULL && p2!= NULL) {
        if(p1->data < p2->data) {
            curr->next = p1;
            p1 = p1->next;
        } else {
            curr->next = p2;
            p2 = p2->next;
        }
        curr = curr->next;
    }
    if (p1!= NULL) {
        curr->next = p1;
    } else {
        curr->next = p2;
    }
    return head0;
}