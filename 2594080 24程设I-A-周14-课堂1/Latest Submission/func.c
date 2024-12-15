#include <math.h>
#include "func.h"

int calculateTriangle(struct Triangle* tri){
    double x1,x2,x3,y1,y2,y3;
    x1=tri->points[0].x;
    x2=tri->points[1].x;
    x3=tri->points[2].x;
    y1=tri->points[0].y;
    y2=tri->points[1].y;
    y3=tri->points[2].y;
    double a,b,c;
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    if((y2-y1)*(x3-x2) == (y3-y2)*(x2-x1)){
        return 0;
    }else{
        double p = (a + b + c) / 2;
        tri->area=sqrt(p*(p-a)*(p-b)*(p-c));
        tri->perimeter=a+b+c;
        return 1;
    }
}