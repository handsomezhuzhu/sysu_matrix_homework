#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void deleteDuplicates(struct Node* head) {
    struct Node *current = head, *prev = NULL, *temp = NULL;


    while (current != NULL && current->next != NULL) {
        prev = current;
        temp = current->next;

     
        while (temp != NULL) {
            if (current->data == temp->data) {
                prev->next = temp->next;  
                free(temp); 
                temp = prev->next;  
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }
}
