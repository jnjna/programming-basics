#include <stdio.h>
#include <string.h>

typedef struct
{
    char city[50];
    int zip;
} Address;

typedef struct
{
    char name[50];
    int age;
    float gpa;
    Address address;
} Student;

int main()
{
    Student student;

    strcpy(student.name, "Justin");
    student.age = 20;
    student.gpa = 3.75;

    strcpy(student.address.city, "Chicago");
    student.address.zip = 60607;

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("City: %s\n", student.address.city);
    printf("ZIP: %d\n", student.address.zip);

    return 0;
}