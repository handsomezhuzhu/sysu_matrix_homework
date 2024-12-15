#include <stdio.h>
#include "func.h"

int main() {
    struct Account account;
    struct Transaction trans;
    
    // 输入账户信息
    scanf("%s %s %lf", account.accountNo, account.name, &account.balance);
    
    // 输入交易信息
    scanf("%d %lf", &trans.type, &trans.amount);
    
    // 处理交易
    int result = processTransaction(&account, trans);
    
    // 输出结果
    printf("账号：%s\n", account.accountNo);
    printf("户主：%s\n", account.name);
    if(result) {
        printf("当前余额：%.2f\n", account.balance);
    } else {
        printf("交易失败：余额不足\n");
    }
    
    return 0;
}