#include <stdio.h>
#include <stdlib.h>
#include "func.h"
void deleteDuplicates(struct Node* head) {
    struct Node *current = head;
    while (current != NULL&& current->next != NULL) {
        struct Node *runner = current;
        while (runner->next != NULL) {
            if (current->data == runner->next->data) {
                struct Node *temp = runner->next;
                runner->next = temp->next;
                
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}