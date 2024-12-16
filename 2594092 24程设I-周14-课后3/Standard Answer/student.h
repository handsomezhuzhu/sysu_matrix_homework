#include <stdio.h>
// 定义学生结构体
typedef struct {
    char name[50];
    int age;
    int id;
    float score;
} Student;

void printStudentInfo(Student s);

Student getTopStudent(Student students[], int count);