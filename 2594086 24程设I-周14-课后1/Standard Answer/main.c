#include <stdio.h>
#include "day_of_year.h"


int main() {
    struct Date date;
    
  
    scanf("%d %d %d", &date.year, &date.month, &date.day);

    // 调用函数计算第几天
    int days = calculate_day_of_year(date);

    // 输出结果
    printf("%d/%d is the %dth day in %d\n", date.month, date.day, days, date.year);
    
    return 0;
}