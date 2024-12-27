#include <stdio.h>
#include <stdlib.h>

// 定义链表结构
struct ListNode {
    int val;
    struct ListNode *next;
};

// 创建新节点函数
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// 反转链表区间函数
struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    if (!head || m == n) return head;

    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* pre = &dummy;

    // 找到第 m-1 个节点
    for (int i = 1; i < m; i++) {
        pre = pre->next;
    }

    struct ListNode* start = pre->next;  // 第 m 个节点
    struct ListNode* then = start->next; // 第 m+1 个节点

    // 反转 m 到 n 区间的节点
    for (int i = 0; i < n - m; i++) {
        start->next = then->next;
        then->next = pre->next;
        pre->next = then;
        then = start->next;
    }

    return dummy.next;
}

// 打印链表函数
void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current) {
        if (current->next) {
            printf("%d ", current->val);  // 打印当前节点值
        } else {
            printf("%d", current->val);  // 最后一个节点后不加空格
        }
        current = current->next;
    }
    printf("\n");
}

int main() {
    // 读取链表的数值
    int val;
    struct ListNode *head = NULL, *tail = NULL;
    
    // 输入链表元素
    char ch;
    while (scanf("%d%c", &val, &ch) == 2) {
        struct ListNode* newNode = createNode(val);
        if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
        if (ch == '\n') break;  // 如果输入的是换行符，表示链表输入结束
    }

    // 读取 m 和 n
    int m, n;
    scanf("%d %d", &m, &n);

    // 反转指定区间的链表
    head = reverseBetween(head, m, n);

    // 打印反转后的链表
    printList(head);

    return 0;
}
