#include <stdio.h>

int main() {
    double amount, interest;
    int term;

    scanf("%lf", &amount);
    scanf("%d", &term);

    if (amount < 1000) {
        interest =
            (term > 1) ? (amount * 0.01) * term : (amount * 0.005) * term;
    } else if (amount < 5000) {
        interest = (term > 1) ? (amount * 0.02) * term : (amount * 0.01) * term;
    } else {
        interest =
            (term > 1) ? (amount * 0.03) * term : (amount * 0.015) * term;
    }

    printf("%.2lf", interest);
    return 0;
}