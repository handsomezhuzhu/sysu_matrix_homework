#include "day_of_year.h"
int calculate_day_of_year(struct Date date){
    int sum=0;
    int months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i=0;i<date.month-1;i++){
        sum+=months[i];
    }
    sum+=date.day;
    if(((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)&&date.month>2){
        sum++;
    }
    return sum;
}