#include <stdio.h>
#include "student.h"
void printStudentInfo(Student student) {
    printf("姓名: %s\n", student.name);
    printf("年龄: %d\n", student.age);
    printf("学号: %d\n", student.id);
    printf("成绩: %.1f", student.score);
}



Student getTopStudent(Student studentss[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (studentss[i].score > studentss[maxIndex].score) {
            maxIndex = i;
        }
    }
    Student topStudent=studentss[maxIndex];
    return topStudent;
}