
#include <stdio.h>
#include <math.h>
#include "func.h"

int main() {
    struct Triangle tri;
    
    // 读取三个点的坐标
    for(int i = 0; i < 3; i++) {
        scanf("%lf %lf", &tri.points[i].x, &tri.points[i].y);
    }
    
    printf("三角形的顶点坐标：\n");
    for(int i = 0; i < 3; i++) {
        printf("(%.2f, %.2f) ", tri.points[i].x, tri.points[i].y);
    }
    printf("\n");
    
    if(calculateTriangle(&tri)) {
        printf("周长：%.2f\n面积：%.2f\n", tri.perimeter, tri.area);
    } else {
        printf("这三个点共线，不能构成三角形！\n");
    }
    
    return 0;
}