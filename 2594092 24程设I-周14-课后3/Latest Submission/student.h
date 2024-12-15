typedef struct{
    char name[50];
    int age;
    int id;
    float score;
} Student;
//Student students[50];
void printStudentInfo(Student student);
Student getTopStudent(Student students[], int n);