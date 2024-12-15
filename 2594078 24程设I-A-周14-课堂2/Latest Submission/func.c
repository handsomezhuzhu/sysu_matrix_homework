#include "func.h"
int processTransaction(struct Account* account, struct Transaction trans){
    if(trans.type == 1){
        if(account->balance >= trans.amount){
            account->balance -= trans.amount;
            return 1;
        }
    } else {
        account->balance += trans.amount;
        return 1;
    }
    return 0;
}