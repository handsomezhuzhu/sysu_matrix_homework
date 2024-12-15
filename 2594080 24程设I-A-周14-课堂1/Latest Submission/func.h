#ifndef FUNC_H
#define FUNC_H

struct Point {
    double x;
    double y;
};

struct Triangle {
    struct Point points[3];  // 三角形的三个顶点
    double perimeter;        // 周长
    double area;            // 面积
};

// 计算三角形的周长和面积
// 如果三点共线，返回0；否则返回1
int calculateTriangle(struct Triangle* tri);

#endif