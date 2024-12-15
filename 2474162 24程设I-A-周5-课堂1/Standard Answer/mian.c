#include <stdio.h>

int main() {
    double height, weight, bmi;

    scanf("%lf", &height);
    scanf("%lf", &weight);

    bmi = weight / (height * height);

    if (18.5 <= bmi && bmi <= 25)
        printf("您的体重正常");
    else
        printf("您的体重偏离正常范围");

    return 0;
}