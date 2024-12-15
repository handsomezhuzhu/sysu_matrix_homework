#include "func.h"
#include <math.h>

int calculateTriangle(struct Triangle* tri) {
    double x1 = tri->points[0].x, y1 = tri->points[0].y;
    double x2 = tri->points[1].x, y2 = tri->points[1].y;
    double x3 = tri->points[2].x, y3 = tri->points[2].y;
    
    // 判断三点是否共线：使用斜率法
    if(fabs((y2-y1)*(x3-x2) - (y3-y2)*(x2-x1)) < 1e-6)
        return 0;
        
    // 计算三边长
    double a = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    double b = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
    double c = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
    
    tri->perimeter = a + b + c;
    double p = tri->perimeter / 2;  // 半周长
    tri->area = sqrt(p * (p-a) * (p-b) * (p-c));  // 海伦公式
    
    return 1;
}