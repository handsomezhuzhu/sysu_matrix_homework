#include "func.h"

int processTransaction(struct Account* account, struct Transaction trans) {
    // 检查取款是否合法
    if(trans.type == 1) { // 取款
        if(trans.amount > account->balance) {
            return 0; // 余额不足
        }
    }
    
    // 更新余额
    if(trans.type == 0) { // 存款
        account->balance += trans.amount;
    } else { // 取款
        account->balance -= trans.amount;
    }
    
    return 1;
}