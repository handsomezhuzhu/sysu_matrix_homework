#include <stdlib.h>
#include <stdio.h>
#include "func.h"

int s1[30], s2[30];

// 创建链表函数
node* createList(int nums[]) {
    node *head = NULL, *p = head;
    int init = 1;
    int i = 0;

    while (nums[i]) {
        node *q = (node*) malloc(sizeof(node));
        q->data = nums[i++];
        q->next = NULL;

        if (init) {
            head = q;
            p = head;
            init = 0;
        } else {
            p->next = q;
            p = q;
        }
    }

    return head;
}

// 打印链表函数
void printList(node* head) {
    node *p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 主函数
int main() {
    int x, n = 0;

    // 读取链表1的数据
    while (scanf("%d", &x), x) {
        s1[n++] = x;
    }
    node* head1 = createList(s1);
    
    // 合并两个链表
    node* head = oddEvenList(head1);

    // 打印合并后的链表
    printList(head);

    return 0;
}