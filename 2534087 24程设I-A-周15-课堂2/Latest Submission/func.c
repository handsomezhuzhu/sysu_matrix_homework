#include <stdio.h>
#include <stdlib.h>
#include "func.h"
node* reverseList(node* head){
    node* prev = NULL;
    node* curr = head;
    for(; curr != NULL;){
        node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

