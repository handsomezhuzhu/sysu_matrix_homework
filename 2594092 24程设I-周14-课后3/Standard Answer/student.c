#include "student.h"

// 输出学生信息的函数
void printStudentInfo(Student s) {
    printf("姓名: %s\n", s.name);
    printf("年龄: %d\n", s.age);
    printf("学号: %d\n", s.id);
    printf("成绩: %.1f", s.score);
}

// 获取成绩最高的学生的函数
Student getTopStudent(Student students[], int count) {
    Student topStudent = students[0];  // 假设第一个学生为最高分
    for (int i = 1; i < count; i++) {
        if (students[i].score > topStudent.score) {
            topStudent = students[i];
        }
    }
    return topStudent;
}