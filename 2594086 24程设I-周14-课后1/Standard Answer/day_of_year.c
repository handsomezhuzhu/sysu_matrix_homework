#include "day_of_year.h"



// 函数：计算给定日期是这一年中的第几天
int calculate_day_of_year(struct Date date) {
  int i, days = 0;
  int day_tab[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    
  for(i=1;i<date.month;i++)
		days = days+day_tab[i];
	days = days+date.day;

	if((date.year%4==0 && date.year%100!=0 ||date.year%400==0) && date.month>=3 )
		days = days + 1;

    

    return days;
}