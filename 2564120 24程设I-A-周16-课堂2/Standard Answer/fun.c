#include <stdlib.h>
#include <stdio.h>
#include "func.h"

node* oddEvenList(node *head) {
    if (head == NULL) {
        return head;
    }

    node* evenHead = head->next; 
    node* odd = head;             
    node* even = evenHead;        

    // 遍历链表，调整奇偶节点的顺序
    while (even != NULL && even->next != NULL) {
        odd->next = even->next;   
        odd = odd->next;          
        even->next = odd->next;  
        even = even->next;       
    }

    odd->next = evenHead;  
    return head;
}