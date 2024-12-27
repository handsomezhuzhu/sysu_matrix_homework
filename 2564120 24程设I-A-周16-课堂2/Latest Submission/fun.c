#include <stdlib.h>
#include <stdio.h>
#include "func.h"
node* oddEvenList(node *head1){
    node *odd = head1;
    node *even = head1->next;
    node *temp = even;
    while (even!= NULL && even->next!= NULL) {
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = even->next->next;
        even = even->next;
    }
    odd -> next = temp;
    return head1;
}