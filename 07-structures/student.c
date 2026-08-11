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
    student.age = 12;
    student.gpa = 3.10;

    struct Student *ptr = &student;

    printf("Name = %s\n", ptr->name);
    printf("Age = %d\n", ptr->age);
    printf("GPA = %.2f\n", ptr->gpa);

    ptr->age = 22;
    printf("Edited Age = %d\n", ptr->age);

    printf("Edited Age using original structure = %d\n", student.age);

    return 0;
}