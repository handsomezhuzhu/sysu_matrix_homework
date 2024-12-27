#include <stdlib.h>
#include <stdio.h>
#include "func.h"

node* mergeTwoLists(node *head1, node *head2) 
{
    if (!head1) return head2;
    if (!head2) return head1;

    node dummy = {0, NULL};  
    node* cur = &dummy;      

    // 当两个链表都不为空时，比较并连接节点
    while (head1 && head2) 
    {
        if (head1->data < head2->data) 
        {
            cur->next = head1;  
            head1 = head1->next;  
        } 
        else 
        {
            cur->next = head2; 
            head2 = head2->next;
        }
        cur = cur->next;
    }

    cur->next = head1 ? head1 : head2;

    return dummy.next; 
}
