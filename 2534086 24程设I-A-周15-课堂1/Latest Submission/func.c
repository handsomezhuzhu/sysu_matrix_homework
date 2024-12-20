#include <stdio.h>
#include <stdlib.h>
#include "func.h"
node* createList(char s[]){
    node* head = NULL;
    node* tail = NULL;
    for(int i = 0; s[i] != '\0'; i++){
        node* temp = (node*)malloc(sizeof(node));
        temp->data = s[i];
        temp->next = NULL;
        if(head == NULL){
            head = temp;
        }else{
            tail->next = temp;
        }
        tail = temp;
    }
    return head;

}

char hubu(char c){
    if(c=='A'){
        return 'T';
    }
    if(c=='T'){
        return 'A';
    }
    if(c=='C'){
        return 'G';
    }
    if(c=='G'){
        return 'C';
    }
}
node* match(node* head){
    for(node* temp = head; temp != NULL; temp=temp->next){
        temp->data = hubu(temp->data);
    }
    return head;
}
void printList(node* head){
    for(node* temp = head; temp != NULL; temp=temp->next){
        printf("%c", temp->data);
    }
    printf("\n");
}