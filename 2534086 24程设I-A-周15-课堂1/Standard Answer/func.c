#include "func.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

node* createList(char s[]) //构建链表
{
    node* head = (node*) malloc(sizeof (node));
    head -> next = NULL;

    int n = strlen(s);
    node* p = head;

    for(int i = 0; i < n; i ++ )
    {
        char c = s[i];
        node* q = (node*) malloc(sizeof (node));
        q -> data = s[i];
        q -> next = NULL;
        p -> next = q;
        p = q;
    }
    return head;
}

node* match(node* head)
{
    node *p = head -> next;
    while(p)
    {
        char c = p -> data;
        if(c == 'A')
            p -> data = 'T';
        else if (c == 'G')
            p -> data = 'C';
        else if (c == 'T')
            p -> data = 'A';
        else if (c == 'C')
            p -> data = 'G';
        p = p -> next;
    }
    return head;
}

void printList(node* head)
{
    node *p = head -> next;
    while(p)
    {
        printf("%c", p -> data);
        p = p -> next;
    }
}