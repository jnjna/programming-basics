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
    struct Student student1;
    struct Student student2;

    strcpy(student1.name, "Justin Bieber");
    student1.age = 20;
    student1.gpa = 3.75;

    strcpy(student2.name, "Conan Gray");
    student2.age = 19;
    student2.gpa = 3.20;

    printf("Student 1\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n\n", student1.gpa);

    printf("Student 2\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("GPA: %.2f\n", student2.gpa);

    return 0;
}