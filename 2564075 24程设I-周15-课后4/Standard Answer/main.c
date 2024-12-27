#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构
struct ListNode {
    int val;
    struct ListNode *next;
};

// 创建新节点的函数
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// 合并两个有序链表的函数
struct ListNode* mergeSortedLists(struct ListNode* l1, struct ListNode* l2) {
    // 创建一个虚拟头节点
    struct ListNode dummy;
    struct ListNode* current = &dummy;

    // 遍历两个链表，逐步合并
    while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // 连接剩余部分
    if (l1 != NULL) {
        current->next = l1;
    } 
    if (l2 != NULL){
        current->next = l2;
    }

    // 返回合并后的链表
    return dummy.next;
}

// 打印链表的函数
void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d ", current->val);  // 打印当前节点值
        current = current->next;
    }
    printf("\n");
}

// 主函数
int main() {
    struct ListNode *L1 = NULL, *L2 = NULL, *tail1 = NULL, *tail2 = NULL;
    int val;
    char ch;

    // 读取第一个链表的数值
    while (scanf("%d", &val) == 1) {  // 只读取整数
        struct ListNode* newNode = createNode(val);
        if (L1 == NULL) {
            L1 = newNode;
        } else {
            tail1->next = newNode;
        }
        tail1 = newNode;

        // 检查是否是换行符来决定是否结束输入
        ch = getchar();  // 读取一个字符
        if (ch == '\n') break;  // 如果遇到换行符，结束输入
    }


    // 读取第二个链表的数值
    while (scanf("%d", &val) == 1) {  // 只读取整数
        struct ListNode* newNode = createNode(val);
        if (L2 == NULL) {
            L2 = newNode;
        } else {
            tail2->next = newNode;
        }
        tail2 = newNode;

        // 检查是否是换行符来决定是否结束输入
        ch = getchar();  // 读取一个字符
        if (ch == '\n') break;  // 如果遇到换行符，结束输入
    }


    // 合并两个链表
    struct ListNode* mergedList = mergeSortedLists(L1, L2);

    // 打印合并后的链表
    printList(mergedList);

    return 0;
}
