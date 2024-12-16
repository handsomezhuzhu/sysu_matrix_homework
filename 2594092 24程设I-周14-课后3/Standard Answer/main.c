#include <stdio.h>
#include "student.h"

int main() {

    // 创建学生数据
    int n;
    scanf("%d", &n);
    Student students[n];
    // 输入学生信息
    for (int i = 0; i < n; i++) {
        getchar(); // 清除输入缓冲区中的换行符
        
        // 输入学生姓名
        scanf("%[^\n]%*c", students[i].name);

        // 输入年龄
        scanf("%d", &students[i].age);

        // 输入学号
        scanf("%d", &students[i].id);

        // 输入成绩
        scanf("%f", &students[i].score);
    }

    // 获取成绩最高的学生
    Student topStudent = getTopStudent(students, n);

    // 输出成绩最高的学生信息
    printf("成绩最高的学生信息：\n");
    printStudentInfo(topStudent);

    return 0;
}
