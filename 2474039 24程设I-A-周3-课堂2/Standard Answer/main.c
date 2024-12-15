#include <stdio.h>

extern char SECRET_2[];
extern char SECRET_3[];

int main(int argc, char *argv[]) {
    char secret_1[256];
    scanf("%s", secret_1);
    printf("%s%s%s", secret_1, SECRET_2, SECRET_3);
    return 0;
}