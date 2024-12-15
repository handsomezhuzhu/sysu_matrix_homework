#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);
    
    if (days < 0) {
        printf("Invalid input\n");
    } else if (days <= 7) {
        printf("No fine\n");
    } else if (days <= 14) {
        printf("Fine: $5\n");
    } else if (days <= 30) {
        printf("Fine: $15\n");
    } else {
        printf("Fine: $50\n");
    }

    return 0;
}
