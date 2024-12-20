#include <stdio.h>
#include <stdlib.h>
#include "func.h"
struct Node* createList(int n){
    struct Node* head = NULL;
    struct Node* tail;
    for(int i = 0; i < n; i++){
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }


    }
    return head;
}
void printList(struct Node* head){
    for(struct Node* temp=head;temp != NULL;temp = temp->next){
        printf("%d->",temp->data);
    }
    printf("NULL\n");
}
struct Node* insertList(struct Node* head, int value, int pos){
    struct Node* new =(struct Node*) malloc(sizeof (struct Node));
    new->data = value;
    new->next = NULL;
    if(pos==1){
        new->next = head;
        return new;
    }
    struct Node* temp = head;
    int i = 0;
    while(temp != NULL && i < pos-1-1){
        temp = temp->next;
        i++;
    }
    if(temp == NULL){
        return head;
    }
    new->next = temp->next;
    temp->next = new;
    return head;
}