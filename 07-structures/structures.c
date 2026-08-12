#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    float gpa;
};

int main()
{
    struct Student student;

    strcpy(student.name, "Justin");
    student.age = 20;
    student.gpa = 3.75;

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);

    return 0;
}