#include "func.h"
#include <stdio.h>
#include <stdlib.h>

node* reverseList(node *head)
{
    node *p = head, *q = p, *pre = NULL;
    while(p)
    {
        q = p -> next;
        p -> next = pre;
        pre = p;
        p = q;
    }
    return pre;
}