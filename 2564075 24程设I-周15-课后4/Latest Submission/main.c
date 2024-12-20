#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// 链表节点的定义
typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;
 
// 创建新节点的函数
ListNode* createNode(int val) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    if (!newNode) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}
 
// 释放链表的函数
void freeList(ListNode* head) {
    ListNode* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
 
// 从输入字符串创建链表的函数
ListNode* createList(const char* input) {
    ListNode* head = NULL;
    ListNode* tail = NULL;
    char buffer[1000];
    strncpy(buffer, input, sizeof(buffer) - 1); // 复制输入，确保不会溢出
    buffer[sizeof(buffer) - 1] = '\0'; // 确保字符串以空字符结尾
    char* token = strtok(buffer, " \n"); // 使用空格和换行符作为分隔符
    while (token) {
        int val = atoi(token);
        ListNode* newNode = createNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        token = strtok(NULL, " \n"); // 继续分割字符串
    }
    return head;
}
 
// 打印链表的函数
void printList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}
 
// 合并两个有序链表的函数
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy;
    ListNode* tail = &dummy;
    dummy.next = NULL;
 
    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
 
    tail->next = l1 ? l1 : l2; // 将剩余部分连接到结果链表上
    return dummy.next;
}
 
int main() {
    char input1[1000];
    char input2[1000];
 
    // 读取两个链表的输入
    //printf("Enter first list (space-separated integers): ");
    fgets(input1, sizeof(input1), stdin);
    //printf("Enter second list (space-separated integers): ");
    fgets(input2, sizeof(input2), stdin);
 
    // 创建链表
    ListNode* l1 = createList(input1);
    ListNode* l2 = createList(input2);
 
    // 合并链表
    ListNode* mergedList = mergeTwoLists(l1, l2);
 
    // 打印合并后的链表
    printList(mergedList);
 
    // 释放内存
    freeList(mergedList);
 
    return 0;
}