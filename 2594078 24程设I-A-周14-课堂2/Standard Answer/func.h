#ifndef FUNC_H
#define FUNC_H

struct Account {
    char accountNo[20];
    char name[50];
    double balance;
};

struct Transaction {
    int type;  // 0-存款 1-取款
    double amount;
};

// 处理交易，返回操作是否成功
int processTransaction(struct Account* account, struct Transaction trans);

#endif